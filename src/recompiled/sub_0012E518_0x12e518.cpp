#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012E518
// Address: 0x12e518 - 0x12e5d0
void sub_0012E518_0x12e518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012E518_0x12e518");
#endif

    ctx->pc = 0x12e518u;

    // 0x12e518: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x12e518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x12e51c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x12e51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12e520: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x12e520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x12e524: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x12e524u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12e528: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12e528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e52c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x12e52cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x12e530: 0x24040000  addiu       $a0, $zero, 0x0
    ctx->pc = 0x12e530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x12e534: 0x24060000  addiu       $a2, $zero, 0x0
    ctx->pc = 0x12e534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x12e538: 0x70861b89  pcpyld      $v1, $a0, $a2
    ctx->pc = 0x12e538u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x12e53c: 0x8e080148  lw          $t0, 0x148($s0)
    ctx->pc = 0x12e53cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x12e540: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x12e540u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e544: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x12e544u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x12e548: 0xa8001a  div         $zero, $a1, $t0
    ctx->pc = 0x12e548u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12e54c: 0x70e91389  pcpyld      $v0, $a3, $t1
    ctx->pc = 0x12e54cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 9)));
    // 0x12e550: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x12e550u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x12e554: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12e554u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e558: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x12e558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x12e55c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x12e55cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x12e560: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x12e560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x12e564: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x12e564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e568: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12E568u;
    {
        const bool branch_taken_0x12e568 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e568) {
            ctx->pc = 0x12E56Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12E568u;
            // 0x12e56c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x12E570u;
            goto label_12e570;
        }
    }
    ctx->pc = 0x12E570u;
label_12e570:
    // 0x12e570: 0x8e06013c  lw          $a2, 0x13C($s0)
    ctx->pc = 0x12e570u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x12e574: 0x80680147  lb          $t0, 0x147($v1)
    ctx->pc = 0x12e574u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 327)));
    // 0x12e578: 0x3812  mflo        $a3
    ctx->pc = 0x12e578u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x12e57c: 0x4810  mfhi        $t1
    ctx->pc = 0x12e57cu;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x12e580: 0x1260018  mult        $zero, $t1, $a2
    ctx->pc = 0x12e580u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x12e584: 0x3012  mflo        $a2
    ctx->pc = 0x12e584u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x12e588: 0xc0505f6  jal         func_1417D8
    ctx->pc = 0x12E588u;
    SET_GPR_U32(ctx, 31, 0x12E590u);
    ctx->pc = 0x12E58Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E588u;
            // 0x12e58c: 0x2d080001  sltiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1417D8u;
    if (runtime->hasFunction(0x1417D8u)) {
        auto targetFn = runtime->lookupFunction(0x1417D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E590u; }
        if (ctx->pc != 0x12E590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001417D8_0x1417d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E590u; }
        if (ctx->pc != 0x12E590u) { return; }
    }
    ctx->pc = 0x12E590u;
    // 0x12e590: 0x8e03013c  lw          $v1, 0x13C($s0)
    ctx->pc = 0x12e590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x12e594: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x12E594u;
    {
        const bool branch_taken_0x12e594 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x12E598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E594u;
            // 0x12e598: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e594) {
            ctx->pc = 0x12E5BCu;
            goto label_12e5bc;
        }
    }
    ctx->pc = 0x12E59Cu;
    // 0x12e59c: 0x0  nop
    ctx->pc = 0x12e59cu;
    // NOP
label_12e5a0:
    // 0x12e5a0: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x12e5a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12e5a4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12e5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12e5a8: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x12e5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x12e5ac: 0x0  nop
    ctx->pc = 0x12e5acu;
    // NOP
    // 0x12e5b0: 0x0  nop
    ctx->pc = 0x12e5b0u;
    // NOP
    // 0x12e5b4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x12E5B4u;
    {
        const bool branch_taken_0x12e5b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12E5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E5B4u;
            // 0x12e5b8: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e5b4) {
            ctx->pc = 0x12E5A0u;
            runtime->cooperativeGuestYield();
            goto label_12e5a0;
        }
    }
    ctx->pc = 0x12E5BCu;
label_12e5bc:
    // 0x12e5bc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x12e5bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12e5c0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x12e5c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12e5c4: 0x3e00008  jr          $ra
    ctx->pc = 0x12E5C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12E5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E5C4u;
            // 0x12e5c8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12E570u: goto label_12e570;
            case 0x12E5A0u: goto label_12e5a0;
            case 0x12E5BCu: goto label_12e5bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12E5CCu;
    // 0x12e5cc: 0x0  nop
    ctx->pc = 0x12e5ccu;
    // NOP
}
