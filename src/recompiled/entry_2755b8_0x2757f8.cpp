#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2755b8
// Address: 0x2755b8 - 0x2757f8
void entry_2755b8_0x2757f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2755b8_0x2757f8");
#endif

    ctx->pc = 0x2755b8u;

    // 0x2755b8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2755b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2755bc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2755bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2755c0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2755c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2755c4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2755c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2755c8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2755c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2755cc: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x2755ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2755d0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2755d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2755d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2755d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2755d8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2755d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2755dc: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2755dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2755e0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2755e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2755e4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2755e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2755e8: 0xae200820  sw          $zero, 0x820($s1)
    ctx->pc = 0x2755e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2080), GPR_U32(ctx, 0));
    // 0x2755ec: 0x8e220140  lw          $v0, 0x140($s1)
    ctx->pc = 0x2755ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
    // 0x2755f0: 0x8e24013c  lw          $a0, 0x13C($s1)
    ctx->pc = 0x2755f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 316)));
    // 0x2755f4: 0x8e230184  lw          $v1, 0x184($s1)
    ctx->pc = 0x2755f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 388)));
    // 0x2755f8: 0x828018  mult        $s0, $a0, $v0
    ctx->pc = 0x2755f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x2755fc: 0xae200824  sw          $zero, 0x824($s1)
    ctx->pc = 0x2755fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2084), GPR_U32(ctx, 0));
    // 0x275600: 0x38630003  xori        $v1, $v1, 0x3
    ctx->pc = 0x275600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
    // 0x275604: 0x101043  sra         $v0, $s0, 1
    ctx->pc = 0x275604u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 16), 1));
    // 0x275608: 0x43800b  movn        $s0, $v0, $v1
    ctx->pc = 0x275608u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x27560c: 0x0  nop
    ctx->pc = 0x27560cu;
    // NOP
label_275610:
    // 0x275610: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x275610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_275614:
    // 0x275614: 0xc09d5fe  jal         func_2757F8
    ctx->pc = 0x275614u;
    SET_GPR_U32(ctx, 31, 0x27561Cu);
    ctx->pc = 0x275618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275614u;
            // 0x275618: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2757F8u;
    if (runtime->hasFunction(0x2757F8u)) {
        auto targetFn = runtime->lookupFunction(0x2757F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27561Cu; }
        if (ctx->pc != 0x27561Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002757F8_0x2757f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27561Cu; }
        if (ctx->pc != 0x27561Cu) { return; }
    }
    ctx->pc = 0x27561Cu;
    // 0x27561c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x27561cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275620: 0x12b3fffc  beq         $s5, $s3, . + 4 + (-0x4 << 2)
    ctx->pc = 0x275620u;
    {
        const bool branch_taken_0x275620 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 19));
        ctx->pc = 0x275624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275620u;
            // 0x275624: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275620) {
            ctx->pc = 0x275614u;
            runtime->cooperativeGuestYield();
            goto label_275614;
        }
    }
    ctx->pc = 0x275628u;
    // 0x275628: 0x12b2fff9  beq         $s5, $s2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x275628u;
    {
        const bool branch_taken_0x275628 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 18));
        if (branch_taken_0x275628) {
            ctx->pc = 0x275610u;
            runtime->cooperativeGuestYield();
            goto label_275610;
        }
    }
    ctx->pc = 0x275630u;
    // 0x275630: 0xc09db2e  jal         func_276CB8
    ctx->pc = 0x275630u;
    SET_GPR_U32(ctx, 31, 0x275638u);
    ctx->pc = 0x275634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275630u;
            // 0x275634: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276CB8u;
    if (runtime->hasFunction(0x276CB8u)) {
        auto targetFn = runtime->lookupFunction(0x276CB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275638u; }
        if (ctx->pc != 0x275638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_276cb8_0x276cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275638u; }
        if (ctx->pc != 0x275638u) { return; }
    }
    ctx->pc = 0x275638u;
    // 0x275638: 0xc09db2e  jal         func_276CB8
    ctx->pc = 0x275638u;
    SET_GPR_U32(ctx, 31, 0x275640u);
    ctx->pc = 0x27563Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275638u;
            // 0x27563c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276CB8u;
    if (runtime->hasFunction(0x276CB8u)) {
        auto targetFn = runtime->lookupFunction(0x276CB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275640u; }
        if (ctx->pc != 0x275640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_276cb8_0x276cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275640u; }
        if (ctx->pc != 0x275640u) { return; }
    }
    ctx->pc = 0x275640u;
    // 0x275640: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x275640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x275644: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x275644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x275648: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x275648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27564c: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x27564Cu;
    {
        const bool branch_taken_0x27564c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x275650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27564Cu;
            // 0x275650: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27564c) {
            ctx->pc = 0x2756D4u;
            goto label_2756d4;
        }
    }
    ctx->pc = 0x275654u;
    // 0x275654: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x275654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x275658: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x275658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27565c: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x27565cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x275660: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x275660u;
    {
        const bool branch_taken_0x275660 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x275664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275660u;
            // 0x275664: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275660) {
            ctx->pc = 0x2756D8u;
            goto label_2756d8;
        }
    }
    ctx->pc = 0x275668u;
    // 0x275668: 0x3c141000  lui         $s4, 0x1000
    ctx->pc = 0x275668u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)4096 << 16));
    // 0x27566c: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x27566cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
    // 0x275670: 0x3c121000  lui         $s2, 0x1000
    ctx->pc = 0x275670u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4096 << 16));
    // 0x275674: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x275674u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
    // 0x275678: 0x3694b420  ori         $s4, $s4, 0xB420
    ctx->pc = 0x275678u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)46112);
    // 0x27567c: 0x3673b400  ori         $s3, $s3, 0xB400
    ctx->pc = 0x27567cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)46080);
    // 0x275680: 0x3652b020  ori         $s2, $s2, 0xB020
    ctx->pc = 0x275680u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)45088);
    // 0x275684: 0x36102010  ori         $s0, $s0, 0x2010
    ctx->pc = 0x275684u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)8208);
label_275688:
    // 0x275688: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x275688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x27568c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x27568Cu;
    {
        const bool branch_taken_0x27568c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27568c) {
            ctx->pc = 0x275690u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27568Cu;
            // 0x275690: 0x8e220878  lw          $v0, 0x878($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2756B0u;
            goto label_2756b0;
        }
    }
    ctx->pc = 0x275694u;
    // 0x275694: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x275694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x275698: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x275698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x27569c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x27569Cu;
    {
        const bool branch_taken_0x27569c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27569c) {
            ctx->pc = 0x2756A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27569Cu;
            // 0x2756a0: 0x8e220878  lw          $v0, 0x878($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2756B0u;
            goto label_2756b0;
        }
    }
    ctx->pc = 0x2756A4u;
    // 0x2756a4: 0xc09c012  jal         func_270048
    ctx->pc = 0x2756A4u;
    SET_GPR_U32(ctx, 31, 0x2756ACu);
    ctx->pc = 0x2756A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2756A4u;
            // 0x2756a8: 0x8e240868  lw          $a0, 0x868($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2152)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x270048u;
    if (runtime->hasFunction(0x270048u)) {
        auto targetFn = runtime->lookupFunction(0x270048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2756ACu; }
        if (ctx->pc != 0x2756ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00270048_0x270048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2756ACu; }
        if (ctx->pc != 0x2756ACu) { return; }
    }
    ctx->pc = 0x2756ACu;
    // 0x2756ac: 0x8e220878  lw          $v0, 0x878($s1)
    ctx->pc = 0x2756acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
label_2756b0:
    // 0x2756b0: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2756B0u;
    {
        const bool branch_taken_0x2756b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2756b0) {
            ctx->pc = 0x275718u;
            goto label_275718;
        }
    }
    ctx->pc = 0x2756B8u;
    // 0x2756b8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2756b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2756bc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2756BCu;
    {
        const bool branch_taken_0x2756bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2756C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2756BCu;
            // 0x2756c0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2756bc) {
            ctx->pc = 0x2756D8u;
            goto label_2756d8;
        }
    }
    ctx->pc = 0x2756C4u;
    // 0x2756c4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2756c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2756c8: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x2756c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x2756cc: 0x1040ffee  beqz        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2756CCu;
    {
        const bool branch_taken_0x2756cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2756cc) {
            ctx->pc = 0x275688u;
            runtime->cooperativeGuestYield();
            goto label_275688;
        }
    }
    ctx->pc = 0x2756D4u;
label_2756d4:
    // 0x2756d4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2756d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_2756d8:
    // 0x2756d8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x2756d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x2756dc: 0x34422020  ori         $v0, $v0, 0x2020
    ctx->pc = 0x2756dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8224);
    // 0x2756e0: 0x34632030  ori         $v1, $v1, 0x2030
    ctx->pc = 0x2756e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8240);
    // 0x2756e4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2756e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2756e8: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x2756e8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2756ec: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x2756ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
    // 0x2756f0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2756f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2756f4: 0x481000c  bgez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2756F4u;
    {
        const bool branch_taken_0x2756f4 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x2756F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2756F4u;
            // 0x2756f8: 0xae220848  sw          $v0, 0x848($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2756f4) {
            ctx->pc = 0x275728u;
            goto label_275728;
        }
    }
    ctx->pc = 0x2756FCu;
    // 0x2756fc: 0x30a3001f  andi        $v1, $a1, 0x1F
    ctx->pc = 0x2756fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)31);
    // 0x275700: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x275700u;
    {
        const bool branch_taken_0x275700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x275704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275700u;
            // 0x275704: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275700) {
            ctx->pc = 0x275710u;
            goto label_275710;
        }
    }
    ctx->pc = 0x275708u;
    // 0x275708: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x275708u;
    {
        const bool branch_taken_0x275708 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27570Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275708u;
            // 0x27570c: 0x431023  subu        $v0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275708) {
            ctx->pc = 0x27572Cu;
            goto label_27572c;
        }
    }
    ctx->pc = 0x275710u;
label_275710:
    // 0x275710: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x275710u;
    {
        const bool branch_taken_0x275710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275710u;
            // 0x275714: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275710) {
            ctx->pc = 0x27572Cu;
            goto label_27572c;
        }
    }
    ctx->pc = 0x275718u;
label_275718:
    // 0x275718: 0xc09d08c  jal         func_274230
    ctx->pc = 0x275718u;
    SET_GPR_U32(ctx, 31, 0x275720u);
    ctx->pc = 0x274230u;
    if (runtime->hasFunction(0x274230u)) {
        auto targetFn = runtime->lookupFunction(0x274230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275720u; }
        if (ctx->pc != 0x275720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_274230_0x2742d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275720u; }
        if (ctx->pc != 0x275720u) { return; }
    }
    ctx->pc = 0x275720u;
    // 0x275720: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x275720u;
    {
        const bool branch_taken_0x275720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x275724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275720u;
            // 0x275724: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275720) {
            ctx->pc = 0x275754u;
            goto label_275754;
        }
    }
    ctx->pc = 0x275728u;
label_275728:
    // 0x275728: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x275728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_27572c:
    // 0x27572c: 0xae22084c  sw          $v0, 0x84C($s1)
    ctx->pc = 0x27572cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2124), GPR_U32(ctx, 2));
    // 0x275730: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x275730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x275734: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x275734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x275738: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x275738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x27573c: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x27573cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x275740: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x275740u;
    {
        const bool branch_taken_0x275740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x275744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275740u;
            // 0x275744: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275740) {
            ctx->pc = 0x275750u;
            goto label_275750;
        }
    }
    ctx->pc = 0x275748u;
    // 0x275748: 0xc09d0b4  jal         func_2742D0
    ctx->pc = 0x275748u;
    SET_GPR_U32(ctx, 31, 0x275750u);
    ctx->pc = 0x27574Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x275748u;
            // 0x27574c: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2742D0u;
    if (runtime->hasFunction(0x2742D0u)) {
        auto targetFn = runtime->lookupFunction(0x2742D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275750u; }
        if (ctx->pc != 0x275750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002742D0_0x2742d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x275750u; }
        if (ctx->pc != 0x275750u) { return; }
    }
    ctx->pc = 0x275750u;
label_275750:
    // 0x275750: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x275750u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_275754:
    // 0x275754: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x275754u;
    {
        const bool branch_taken_0x275754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x275758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275754u;
            // 0x275758: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275754) {
            ctx->pc = 0x275770u;
            goto label_275770;
        }
    }
    ctx->pc = 0x27575Cu;
    // 0x27575c: 0x8e220878  lw          $v0, 0x878($s1)
    ctx->pc = 0x27575cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2168)));
    // 0x275760: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x275760u;
    {
        const bool branch_taken_0x275760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x275764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x275760u;
            // 0x275764: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x275760) {
            ctx->pc = 0x2757D0u;
            goto label_2757d0;
        }
    }
    ctx->pc = 0x275768u;
    // 0x275768: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x275768u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x27576c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x27576cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_275770:
    // 0x275770: 0x26b0ffff  addiu       $s0, $s5, -0x1
    ctx->pc = 0x275770u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
    // 0x275774: 0x2eb20001  sltiu       $s2, $s5, 0x1
    ctx->pc = 0x275774u;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x275778: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x275778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x27577c: 0x0  nop
    ctx->pc = 0x27577cu;
    // NOP
label_275780:
    // 0x275780: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x275780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x275784: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x275784u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x275788: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x275788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x27578c: 0x0  nop
    ctx->pc = 0x27578cu;
    // NOP
    // 0x275790: 0x0  nop
    ctx->pc = 0x275790u;
    // NOP
    // 0x275794: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x275794u;
    {
        const bool branch_taken_0x275794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x275794) {
            ctx->pc = 0x275780u;
            runtime->cooperativeGuestYield();
            goto label_275780;
        }
    }
    ctx->pc = 0x27579Cu;
    // 0x27579c: 0x16a00006  bnez        $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x27579Cu;
    {
        const bool branch_taken_0x27579c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x2757A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27579Cu;
            // 0x2757a0: 0x2e020002  sltiu       $v0, $s0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27579c) {
            ctx->pc = 0x2757B8u;
            goto label_2757b8;
        }
    }
    ctx->pc = 0x2757A4u;
    // 0x2757a4: 0x8e250820  lw          $a1, 0x820($s1)
    ctx->pc = 0x2757a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2080)));
    // 0x2757a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2757a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2757ac: 0xc09d4e6  jal         func_275398
    ctx->pc = 0x2757ACu;
    SET_GPR_U32(ctx, 31, 0x2757B4u);
    ctx->pc = 0x2757B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2757ACu;
            // 0x2757b0: 0x2ca50001  sltiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x275398u;
    if (runtime->hasFunction(0x275398u)) {
        auto targetFn = runtime->lookupFunction(0x275398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2757B4u; }
        if (ctx->pc != 0x2757B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00275398_0x275398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2757B4u; }
        if (ctx->pc != 0x2757B4u) { return; }
    }
    ctx->pc = 0x2757B4u;
    // 0x2757b4: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x2757b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_2757b8:
    // 0x2757b8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2757B8u;
    {
        const bool branch_taken_0x2757b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2757BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2757B8u;
            // 0x2757bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2757b8) {
            ctx->pc = 0x2757CCu;
            goto label_2757cc;
        }
    }
    ctx->pc = 0x2757C0u;
    // 0x2757c0: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2757c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2757c4: 0xc09d0e6  jal         func_274398
    ctx->pc = 0x2757C4u;
    SET_GPR_U32(ctx, 31, 0x2757CCu);
    ctx->pc = 0x2757C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2757C4u;
            // 0x2757c8: 0x24a545d0  addiu       $a1, $a1, 0x45D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17872));
        ctx->in_delay_slot = false;
    ctx->pc = 0x274398u;
    if (runtime->hasFunction(0x274398u)) {
        auto targetFn = runtime->lookupFunction(0x274398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2757CCu; }
        if (ctx->pc != 0x2757CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00274398_0x274398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2757CCu; }
        if (ctx->pc != 0x2757CCu) { return; }
    }
    ctx->pc = 0x2757CCu;
label_2757cc:
    // 0x2757cc: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2757ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2757d0:
    // 0x2757d0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2757d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2757d4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2757d4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2757d8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2757d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2757dc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2757dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2757e0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2757e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2757e4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2757e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2757e8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2757e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2757ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2757ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2757f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2757F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2757F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2757F0u;
            // 0x2757f4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x275610u: goto label_275610;
            case 0x275614u: goto label_275614;
            case 0x275688u: goto label_275688;
            case 0x2756B0u: goto label_2756b0;
            case 0x2756D4u: goto label_2756d4;
            case 0x2756D8u: goto label_2756d8;
            case 0x275710u: goto label_275710;
            case 0x275718u: goto label_275718;
            case 0x275728u: goto label_275728;
            case 0x27572Cu: goto label_27572c;
            case 0x275750u: goto label_275750;
            case 0x275754u: goto label_275754;
            case 0x275770u: goto label_275770;
            case 0x275780u: goto label_275780;
            case 0x2757B8u: goto label_2757b8;
            case 0x2757CCu: goto label_2757cc;
            case 0x2757D0u: goto label_2757d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2757F8u;
}
