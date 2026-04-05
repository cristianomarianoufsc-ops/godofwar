#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001FD4C8
// Address: 0x1fd4c8 - 0x1fd6b8
void sub_001FD4C8_0x1fd4c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001FD4C8_0x1fd4c8");
#endif

    ctx->pc = 0x1fd4c8u;

    // 0x1fd4c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fd4c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fd4cc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1fd4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1fd4d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1fd4d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1fd4d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1fd4d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd4d8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1fd4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1fd4dc: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x1fd4dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
    // 0x1fd4e0: 0x8c4200cc  lw          $v0, 0xCC($v0)
    ctx->pc = 0x1fd4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    // 0x1fd4e4: 0x40f809  jalr        $v0
    ctx->pc = 0x1FD4E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FD4ECu);
        ctx->pc = 0x1FD4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD4E4u;
            // 0x1fd4e8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FD4ECu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FD520u: goto label_1fd520;
            case 0x1FD524u: goto label_1fd524;
            case 0x1FD550u: goto label_1fd550;
            case 0x1FD570u: goto label_1fd570;
            case 0x1FD5E8u: goto label_1fd5e8;
            case 0x1FD624u: goto label_1fd624;
            case 0x1FD638u: goto label_1fd638;
            case 0x1FD668u: goto label_1fd668;
            case 0x1FD678u: goto label_1fd678;
            case 0x1FD688u: goto label_1fd688;
            case 0x1FD68Cu: goto label_1fd68c;
            case 0x1FD6A8u: goto label_1fd6a8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FD4ECu; }
            if (ctx->pc != 0x1FD4ECu) { return; }
        }
        }
    }
    ctx->pc = 0x1FD4ECu;
    // 0x1fd4ec: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1fd4ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1fd4f0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1fd4f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1fd4f4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1fd4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1fd4f8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1fd4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1fd4fc: 0x8c42ec94  lw          $v0, -0x136C($v0)
    ctx->pc = 0x1fd4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962324)));
    // 0x1fd500: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1fd500u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fd504: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1fd504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fd508: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x1fd508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1fd50c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FD50Cu;
    {
        const bool branch_taken_0x1fd50c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD50Cu;
            // 0x1fd510: 0x46000841  sub.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd50c) {
            ctx->pc = 0x1FD520u;
            goto label_1fd520;
        }
    }
    ctx->pc = 0x1FD514u;
    // 0x1fd514: 0x2462ffec  addiu       $v0, $v1, -0x14
    ctx->pc = 0x1fd514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x1fd518: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1FD518u;
    {
        const bool branch_taken_0x1fd518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD51Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD518u;
            // 0x1fd51c: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd518) {
            ctx->pc = 0x1FD524u;
            goto label_1fd524;
        }
    }
    ctx->pc = 0x1FD520u;
label_1fd520:
    // 0x1fd520: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fd520u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1fd524:
    // 0x1fd524: 0x3c014680  lui         $at, 0x4680
    ctx->pc = 0x1fd524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18048 << 16));
    // 0x1fd528: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1fd528u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fd52c: 0x8c430110  lw          $v1, 0x110($v0)
    ctx->pc = 0x1fd52cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
    // 0x1fd530: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1fd530u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1fd534: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1fd534u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1fd538: 0x440c0800  mfc1        $t4, $f1
    ctx->pc = 0x1fd538u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 12, bits); }
    // 0x1fd53c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FD53Cu;
    {
        const bool branch_taken_0x1fd53c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD53Cu;
            // 0x1fd540: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd53c) {
            ctx->pc = 0x1FD550u;
            goto label_1fd550;
        }
    }
    ctx->pc = 0x1FD544u;
    // 0x1fd544: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1fd544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1fd548: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x1fd548u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x1fd54c: 0x227c2  srl         $a0, $v0, 31
    ctx->pc = 0x1fd54cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_1fd550:
    // 0x1fd550: 0x10800055  beqz        $a0, . + 4 + (0x55 << 2)
    ctx->pc = 0x1FD550u;
    {
        const bool branch_taken_0x1fd550 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD550u;
            // 0x1fd554: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd550) {
            ctx->pc = 0x1FD6A8u;
            goto label_1fd6a8;
        }
    }
    ctx->pc = 0x1FD558u;
    // 0x1fd558: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1fd558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1fd55c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1fd55cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1fd560: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1fd560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fd564: 0x10620050  beq         $v1, $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x1FD564u;
    {
        const bool branch_taken_0x1fd564 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FD568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD564u;
            // 0x1fd568: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd564) {
            ctx->pc = 0x1FD6A8u;
            goto label_1fd6a8;
        }
    }
    ctx->pc = 0x1FD56Cu;
    // 0x1fd56c: 0x0  nop
    ctx->pc = 0x1fd56cu;
    // NOP
label_1fd570:
    // 0x1fd570: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1fd570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1fd574: 0x8c480008  lw          $t0, 0x8($v0)
    ctx->pc = 0x1fd574u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1fd578: 0x95020014  lhu         $v0, 0x14($t0)
    ctx->pc = 0x1fd578u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x1fd57c: 0x9506001a  lhu         $a2, 0x1A($t0)
    ctx->pc = 0x1fd57cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 26)));
    // 0x1fd580: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x1fd580u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1fd584: 0x25080  sll         $t2, $v0, 2
    ctx->pc = 0x1fd584u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1fd588: 0x3c0d002a  lui         $t5, 0x2A
    ctx->pc = 0x1fd588u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)42 << 16));
    // 0x1fd58c: 0x8da3c7dc  lw          $v1, -0x3824($t5)
    ctx->pc = 0x1fd58cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294952924)));
    // 0x1fd590: 0x9502002e  lhu         $v0, 0x2E($t0)
    ctx->pc = 0x1fd590u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 46)));
    // 0x1fd594: 0x24650001  addiu       $a1, $v1, 0x1
    ctx->pc = 0x1fd594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fd598: 0x8d070054  lw          $a3, 0x54($t0)
    ctx->pc = 0x1fd598u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 84)));
    // 0x1fd59c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1fd59cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1fd5a0: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x1fd5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1fd5a4: 0x8d030038  lw          $v1, 0x38($t0)
    ctx->pc = 0x1fd5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 56)));
    // 0x1fd5a8: 0x94e4001c  lhu         $a0, 0x1C($a3)
    ctx->pc = 0x1fd5a8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 28)));
    // 0x1fd5ac: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x1fd5acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1fd5b0: 0x2c840002  sltiu       $a0, $a0, 0x2
    ctx->pc = 0x1fd5b0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1fd5b4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fd5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fd5b8: 0x1480001a  bnez        $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1FD5B8u;
    {
        const bool branch_taken_0x1fd5b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD5BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD5B8u;
            // 0x1fd5bc: 0x654821  addu        $t1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd5b8) {
            ctx->pc = 0x1FD624u;
            goto label_1fd624;
        }
    }
    ctx->pc = 0x1FD5C0u;
    // 0x1fd5c0: 0x94e2002e  lhu         $v0, 0x2E($a3)
    ctx->pc = 0x1fd5c0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 46)));
    // 0x1fd5c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1fd5c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd5c8: 0x94e4001a  lhu         $a0, 0x1A($a3)
    ctx->pc = 0x1fd5c8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 26)));
    // 0x1fd5cc: 0x8ce30038  lw          $v1, 0x38($a3)
    ctx->pc = 0x1fd5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x1fd5d0: 0x442818  mult        $a1, $v0, $a0
    ctx->pc = 0x1fd5d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x1fd5d4: 0x246b0010  addiu       $t3, $v1, 0x10
    ctx->pc = 0x1fd5d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1fd5d8: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x1fd5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1fd5dc: 0x1140002a  beqz        $t2, . + 4 + (0x2A << 2)
    ctx->pc = 0x1FD5DCu;
    {
        const bool branch_taken_0x1fd5dc = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD5DCu;
            // 0x1fd5e0: 0x24470020  addiu       $a3, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd5dc) {
            ctx->pc = 0x1FD688u;
            goto label_1fd688;
        }
    }
    ctx->pc = 0x1FD5E4u;
    // 0x1fd5e4: 0x0  nop
    ctx->pc = 0x1fd5e4u;
    // NOP
label_1fd5e8:
    // 0x1fd5e8: 0x1661021  addu        $v0, $t3, $a2
    ctx->pc = 0x1fd5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 6)));
    // 0x1fd5ec: 0xe62021  addu        $a0, $a3, $a2
    ctx->pc = 0x1fd5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x1fd5f0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1fd5f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fd5f4: 0x1262821  addu        $a1, $t1, $a2
    ctx->pc = 0x1fd5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
    // 0x1fd5f8: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x1fd5f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1fd5fc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1fd5fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1fd600: 0xca202b  sltu        $a0, $a2, $t2
    ctx->pc = 0x1fd600u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x1fd604: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1fd604u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fd608: 0x4c1018  mult        $v0, $v0, $t4
    ctx->pc = 0x1fd608u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1fd60c: 0x21382  srl         $v0, $v0, 14
    ctx->pc = 0x1fd60cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
    // 0x1fd610: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fd610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fd614: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x1FD614u;
    {
        const bool branch_taken_0x1fd614 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD614u;
            // 0x1fd618: 0xa0a30000  sb          $v1, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd614) {
            ctx->pc = 0x1FD5E8u;
            runtime->cooperativeGuestYield();
            goto label_1fd5e8;
        }
    }
    ctx->pc = 0x1FD61Cu;
    // 0x1fd61c: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1FD61Cu;
    {
        const bool branch_taken_0x1fd61c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD61Cu;
            // 0x1fd620: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd61c) {
            ctx->pc = 0x1FD68Cu;
            goto label_1fd68c;
        }
    }
    ctx->pc = 0x1FD624u;
label_1fd624:
    // 0x1fd624: 0x8ce20038  lw          $v0, 0x38($a3)
    ctx->pc = 0x1fd624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 56)));
    // 0x1fd628: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1fd628u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd62c: 0x11400016  beqz        $t2, . + 4 + (0x16 << 2)
    ctx->pc = 0x1FD62Cu;
    {
        const bool branch_taken_0x1fd62c = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD62Cu;
            // 0x1fd630: 0x24460010  addiu       $a2, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd62c) {
            ctx->pc = 0x1FD688u;
            goto label_1fd688;
        }
    }
    ctx->pc = 0x1FD634u;
    // 0x1fd634: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x1fd634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1fd638:
    // 0x1fd638: 0x30a20003  andi        $v0, $a1, 0x3
    ctx->pc = 0x1fd638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x1fd63c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1FD63Cu;
    {
        const bool branch_taken_0x1fd63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD63Cu;
            // 0x1fd640: 0xc41821  addu        $v1, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd63c) {
            ctx->pc = 0x1FD668u;
            goto label_1fd668;
        }
    }
    ctx->pc = 0x1FD644u;
    // 0x1fd644: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1fd644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x1fd648: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x1fd648u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1fd64c: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x1fd64cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x1fd650: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1fd650u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fd654: 0x4c1018  mult        $v0, $v0, $t4
    ctx->pc = 0x1fd654u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1fd658: 0x21382  srl         $v0, $v0, 14
    ctx->pc = 0x1fd658u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 14));
    // 0x1fd65c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1fd65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1fd660: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FD660u;
    {
        const bool branch_taken_0x1fd660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FD664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD660u;
            // 0x1fd664: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd660) {
            ctx->pc = 0x1FD678u;
            goto label_1fd678;
        }
    }
    ctx->pc = 0x1FD668u;
label_1fd668:
    // 0x1fd668: 0xc41021  addu        $v0, $a2, $a0
    ctx->pc = 0x1fd668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1fd66c: 0x1241821  addu        $v1, $t1, $a0
    ctx->pc = 0x1fd66cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x1fd670: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1fd670u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fd674: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x1fd674u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_1fd678:
    // 0x1fd678: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1fd678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fd67c: 0x8a102b  sltu        $v0, $a0, $t2
    ctx->pc = 0x1fd67cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x1fd680: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1FD680u;
    {
        const bool branch_taken_0x1fd680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FD684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD680u;
            // 0x1fd684: 0x24850001  addiu       $a1, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd680) {
            ctx->pc = 0x1FD638u;
            runtime->cooperativeGuestYield();
            goto label_1fd638;
        }
    }
    ctx->pc = 0x1FD688u;
label_1fd688:
    // 0x1fd688: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1fd688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1fd68c:
    // 0x1fd68c: 0x8da3c7dc  lw          $v1, -0x3824($t5)
    ctx->pc = 0x1fd68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294952924)));
    // 0x1fd690: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1fd690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1fd694: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1fd694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fd698: 0xa5030022  sh          $v1, 0x22($t0)
    ctx->pc = 0x1fd698u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x1fd69c: 0x1444ffb4  bne         $v0, $a0, . + 4 + (-0x4C << 2)
    ctx->pc = 0x1FD69Cu;
    {
        const bool branch_taken_0x1fd69c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x1FD6A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD69Cu;
            // 0x1fd6a0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fd69c) {
            ctx->pc = 0x1FD570u;
            runtime->cooperativeGuestYield();
            goto label_1fd570;
        }
    }
    ctx->pc = 0x1FD6A4u;
    // 0x1fd6a4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1fd6a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1fd6a8:
    // 0x1fd6a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1fd6a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fd6ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1FD6ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FD6B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FD6ACu;
            // 0x1fd6b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1FD520u: goto label_1fd520;
            case 0x1FD524u: goto label_1fd524;
            case 0x1FD550u: goto label_1fd550;
            case 0x1FD570u: goto label_1fd570;
            case 0x1FD5E8u: goto label_1fd5e8;
            case 0x1FD624u: goto label_1fd624;
            case 0x1FD638u: goto label_1fd638;
            case 0x1FD668u: goto label_1fd668;
            case 0x1FD678u: goto label_1fd678;
            case 0x1FD688u: goto label_1fd688;
            case 0x1FD68Cu: goto label_1fd68c;
            case 0x1FD6A8u: goto label_1fd6a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FD6B4u;
    // 0x1fd6b4: 0x0  nop
    ctx->pc = 0x1fd6b4u;
    // NOP
}
