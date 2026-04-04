#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012E8F0
// Address: 0x12e8f0 - 0x12ecc8
void sub_0012E8F0_0x12e8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012E8F0_0x12e8f0");
#endif

    ctx->pc = 0x12e8f0u;

    // 0x12e8f0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x12e8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x12e8f4: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x12e8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x12e8f8: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x12e8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x12e8fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x12e8fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e900: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x12e900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x12e904: 0x26030178  addiu       $v1, $s0, 0x178
    ctx->pc = 0x12e904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 376));
    // 0x12e908: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x12e908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x12e90c: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x12e90cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x12e910: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x12e910u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e914: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x12e914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x12e918: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x12e918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x12e91c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x12e91cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x12e920: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x12e920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x12e924: 0x8e020184  lw          $v0, 0x184($s0)
    ctx->pc = 0x12e924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x12e928: 0x80420147  lb          $v0, 0x147($v0)
    ctx->pc = 0x12e928u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 327)));
    // 0x12e92c: 0x2c540001  sltiu       $s4, $v0, 0x1
    ctx->pc = 0x12e92cu;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x12e930: 0x143080  sll         $a2, $s4, 2
    ctx->pc = 0x12e930u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x12e934: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x12e934u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x12e938: 0x8cf20000  lw          $s2, 0x0($a3)
    ctx->pc = 0x12e938u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12e93c: 0x2653ffff  addiu       $s3, $s2, -0x1
    ctx->pc = 0x12e93cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x12e940: 0x6610003  bgez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x12E940u;
    {
        const bool branch_taken_0x12e940 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x12E944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12E940u;
            // 0x12e944: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x12e940) {
            ctx->pc = 0x12E950u;
            goto label_12e950;
        }
    }
    ctx->pc = 0x12E948u;
    // 0x12e948: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x12e948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x12e94c: 0x2453ffff  addiu       $s3, $v0, -0x1
    ctx->pc = 0x12e94cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_12e950:
    // 0x12e950: 0x8e020144  lw          $v0, 0x144($s0)
    ctx->pc = 0x12e950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x12e954: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x12e954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x12e958: 0x26040170  addiu       $a0, $s0, 0x170
    ctx->pc = 0x12e958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
    // 0x12e95c: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x12e95cu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12e960: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12E960u;
    {
        const bool branch_taken_0x12e960 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e960) {
            ctx->pc = 0x12E964u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12E960u;
            // 0x12e964: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x12E968u;
            goto label_12e968;
        }
    }
    ctx->pc = 0x12E968u;
label_12e968:
    // 0x12e968: 0x868821  addu        $s1, $a0, $a2
    ctx->pc = 0x12e968u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x12e96c: 0x2810  mfhi        $a1
    ctx->pc = 0x12e96cu;
    SET_GPR_U64(ctx, 5, ctx->hi);
    // 0x12e970: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x12e970u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x12e974: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x12e974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12e978: 0x54a2000c  bnel        $a1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x12E978u;
    {
        const bool branch_taken_0x12e978 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x12e978) {
            ctx->pc = 0x12E97Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12E978u;
            // 0x12e97c: 0x8e030148  lw          $v1, 0x148($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12E9ACu;
            goto label_12e9ac;
        }
    }
    ctx->pc = 0x12E980u;
    // 0x12e980: 0xc04b946  jal         func_12E518
    ctx->pc = 0x12E980u;
    SET_GPR_U32(ctx, 31, 0x12E988u);
    ctx->pc = 0x12E984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E980u;
            // 0x12e984: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E518u;
    if (runtime->hasFunction(0x12E518u)) {
        auto targetFn = runtime->lookupFunction(0x12E518u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E988u; }
        if (ctx->pc != 0x12E988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012E518_0x12e518(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E988u; }
        if (ctx->pc != 0x12E988u) { return; }
    }
    ctx->pc = 0x12E988u;
    // 0x12e988: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x12e988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12e98c: 0x8e030144  lw          $v1, 0x144($s0)
    ctx->pc = 0x12e98cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x12e990: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12e990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12e994: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x12e994u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12e998: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12E998u;
    {
        const bool branch_taken_0x12e998 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e998) {
            ctx->pc = 0x12E99Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12E998u;
            // 0x12e99c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x12E9A0u;
            goto label_12e9a0;
        }
    }
    ctx->pc = 0x12E9A0u;
label_12e9a0:
    // 0x12e9a0: 0x1010  mfhi        $v0
    ctx->pc = 0x12e9a0u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x12e9a4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x12e9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x12e9a8: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x12e9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
label_12e9ac:
    // 0x12e9ac: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x12e9acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x12e9b0: 0x8e040180  lw          $a0, 0x180($s0)
    ctx->pc = 0x12e9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x12e9b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12e9b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e9b8: 0x263001a  div         $zero, $s3, $v1
    ctx->pc = 0x12e9b8u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 19);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12e9bc: 0x8e06013c  lw          $a2, 0x13C($s0)
    ctx->pc = 0x12e9bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x12e9c0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x12e9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x12e9c4: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x12e9c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12e9c8: 0xe4540000  swc1        $f20, 0x0($v0)
    ctx->pc = 0x12e9c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x12e9cc: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12E9CCu;
    {
        const bool branch_taken_0x12e9cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12e9cc) {
            ctx->pc = 0x12E9D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12E9CCu;
            // 0x12e9d0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x12E9D4u;
            goto label_12e9d4;
        }
    }
    ctx->pc = 0x12E9D4u;
label_12e9d4:
    // 0x12e9d4: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x12e9d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x12e9d8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x12e9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x12e9dc: 0x8e040184  lw          $a0, 0x184($s0)
    ctx->pc = 0x12e9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x12e9e0: 0x4810  mfhi        $t1
    ctx->pc = 0x12e9e0u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x12e9e4: 0x3812  mflo        $a3
    ctx->pc = 0x12e9e4u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x12e9e8: 0x1260018  mult        $zero, $t1, $a2
    ctx->pc = 0x12e9e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x12e9ec: 0x3012  mflo        $a2
    ctx->pc = 0x12e9ecu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x12e9f0: 0xc0505f6  jal         func_1417D8
    ctx->pc = 0x12E9F0u;
    SET_GPR_U32(ctx, 31, 0x12E9F8u);
    ctx->pc = 0x12E9F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12E9F0u;
            // 0x12e9f4: 0x2a843  sra         $s5, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1417D8u;
    if (runtime->hasFunction(0x1417D8u)) {
        auto targetFn = runtime->lookupFunction(0x1417D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E9F8u; }
        if (ctx->pc != 0x12E9F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001417D8_0x1417d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12E9F8u; }
        if (ctx->pc != 0x12E9F8u) { return; }
    }
    ctx->pc = 0x12E9F8u;
    // 0x12e9f8: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x12e9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x12e9fc: 0x24510010  addiu       $s1, $v0, 0x10
    ctx->pc = 0x12e9fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x12ea00: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12ea00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ea04: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x12ea04u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ea08: 0x243001a  div         $zero, $s2, $v1
    ctx->pc = 0x12ea08u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12ea0c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12EA0Cu;
    {
        const bool branch_taken_0x12ea0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ea0c) {
            ctx->pc = 0x12EA10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12EA0Cu;
            // 0x12ea10: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x12EA14u;
            goto label_12ea14;
        }
    }
    ctx->pc = 0x12EA14u;
label_12ea14:
    // 0x12ea14: 0x8e06013c  lw          $a2, 0x13C($s0)
    ctx->pc = 0x12ea14u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x12ea18: 0x3812  mflo        $a3
    ctx->pc = 0x12ea18u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x12ea1c: 0x1010  mfhi        $v0
    ctx->pc = 0x12ea1cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x12ea20: 0x460018  mult        $zero, $v0, $a2
    ctx->pc = 0x12ea20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x12ea24: 0x3012  mflo        $a2
    ctx->pc = 0x12ea24u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x12ea28: 0xc0505f6  jal         func_1417D8
    ctx->pc = 0x12EA28u;
    SET_GPR_U32(ctx, 31, 0x12EA30u);
    ctx->pc = 0x12EA2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12EA28u;
            // 0x12ea2c: 0x8e040184  lw          $a0, 0x184($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1417D8u;
    if (runtime->hasFunction(0x1417D8u)) {
        auto targetFn = runtime->lookupFunction(0x1417D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EA30u; }
        if (ctx->pc != 0x12EA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001417D8_0x1417d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EA30u; }
        if (ctx->pc != 0x12EA30u) { return; }
    }
    ctx->pc = 0x12EA30u;
    // 0x12ea30: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x12ea30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x12ea34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12ea34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ea38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12ea38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ea3c: 0x1aa00020  blez        $s5, . + 4 + (0x20 << 2)
    ctx->pc = 0x12EA3Cu;
    {
        const bool branch_taken_0x12ea3c = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x12EA40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EA3Cu;
            // 0x12ea40: 0x8c630020  lw          $v1, 0x20($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ea3c) {
            ctx->pc = 0x12EAC0u;
            goto label_12eac0;
        }
    }
    ctx->pc = 0x12EA44u;
    // 0x12ea44: 0x0  nop
    ctx->pc = 0x12ea44u;
    // NOP
label_12ea48:
    // 0x12ea48: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x12ea48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12ea4c: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x12ea4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x12ea50: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x12ea50u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x12ea54: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x12ea54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x12ea58: 0xd8620000  lqc2        $vf2, 0x0($v1)
    ctx->pc = 0x12ea58u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12ea5c: 0xdac10000  lqc2        $vf1, 0x0($s6)
    ctx->pc = 0x12ea5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x12ea60: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x12ea60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x12ea64: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x12ea64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x12ea68: 0xdac10010  lqc2        $vf1, 0x10($s6)
    ctx->pc = 0x12ea68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x12ea6c: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x12ea6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x12ea70: 0xdac10020  lqc2        $vf1, 0x20($s6)
    ctx->pc = 0x12ea70u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x12ea74: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x12ea74u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x12ea78: 0xdac10030  lqc2        $vf1, 0x30($s6)
    ctx->pc = 0x12ea78u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 22), 48)));
    // 0x12ea7c: 0x4be208cb  vmaddw.xyzw $vf3, $vf1, $vf2w
    ctx->pc = 0x12ea7cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x12ea80: 0x14a00007  bnez        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x12EA80u;
    {
        const bool branch_taken_0x12ea80 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EA84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EA80u;
            // 0x12ea84: 0xfba30010  sqc2        $vf3, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ea80) {
            ctx->pc = 0x12EAA0u;
            goto label_12eaa0;
        }
    }
    ctx->pc = 0x12EA88u;
    // 0x12ea88: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x12ea88u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12ea8c: 0x3c024700  lui         $v0, 0x4700
    ctx->pc = 0x12ea8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)18176 << 16));
    // 0x12ea90: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x12ea90u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x12ea94: 0x4a2208c0  vaddx.w     $vf3, $vf1, $vf2x
    ctx->pc = 0x12ea94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x12ea98: 0xfba30010  sqc2        $vf3, 0x10($sp)
    ctx->pc = 0x12ea98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x12ea9c: 0x0  nop
    ctx->pc = 0x12ea9cu;
    // NOP
label_12eaa0:
    // 0x12eaa0: 0xdba10010  lqc2        $vf1, 0x10($sp)
    ctx->pc = 0x12eaa0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12eaa4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x12eaa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eaa8: 0x4be1097c  vftoi0.xyzw $vf1, $vf1
    ctx->pc = 0x12eaa8u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12eaac: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x12eaacu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12eab0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x12eab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x12eab4: 0xb5102a  slt         $v0, $a1, $s5
    ctx->pc = 0x12eab4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x12eab8: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x12EAB8u;
    {
        const bool branch_taken_0x12eab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EAB8u;
            // 0x12eabc: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eab8) {
            ctx->pc = 0x12EA48u;
            runtime->cooperativeGuestYield();
            goto label_12ea48;
        }
    }
    ctx->pc = 0x12EAC0u;
label_12eac0:
    // 0x12eac0: 0x8e020154  lw          $v0, 0x154($s0)
    ctx->pc = 0x12eac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
    // 0x12eac4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x12eac4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x12eac8: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x12EAC8u;
    {
        const bool branch_taken_0x12eac8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EAC8u;
            // 0x12eacc: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eac8) {
            ctx->pc = 0x12EB80u;
            goto label_12eb80;
        }
    }
    ctx->pc = 0x12EAD0u;
    // 0x12ead0: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x12ead0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x12ead4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12ead4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ead8: 0x262001a  div         $zero, $s3, $v0
    ctx->pc = 0x12ead8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 19);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12eadc: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12EADCu;
    {
        const bool branch_taken_0x12eadc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12eadc) {
            ctx->pc = 0x12EAE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12EADCu;
            // 0x12eae0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x12EAE4u;
            goto label_12eae4;
        }
    }
    ctx->pc = 0x12EAE4u;
label_12eae4:
    // 0x12eae4: 0x8e06013c  lw          $a2, 0x13C($s0)
    ctx->pc = 0x12eae4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x12eae8: 0x1810  mfhi        $v1
    ctx->pc = 0x12eae8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x12eaec: 0x3812  mflo        $a3
    ctx->pc = 0x12eaecu;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x12eaf0: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x12eaf0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x12eaf4: 0x3012  mflo        $a2
    ctx->pc = 0x12eaf4u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x12eaf8: 0xc0505f6  jal         func_1417D8
    ctx->pc = 0x12EAF8u;
    SET_GPR_U32(ctx, 31, 0x12EB00u);
    ctx->pc = 0x12EAFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12EAF8u;
            // 0x12eafc: 0x8e040184  lw          $a0, 0x184($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1417D8u;
    if (runtime->hasFunction(0x1417D8u)) {
        auto targetFn = runtime->lookupFunction(0x1417D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EB00u; }
        if (ctx->pc != 0x12EB00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001417D8_0x1417d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EB00u; }
        if (ctx->pc != 0x12EB00u) { return; }
    }
    ctx->pc = 0x12EB00u;
    // 0x12eb00: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x12eb00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x12eb04: 0x24510010  addiu       $s1, $v0, 0x10
    ctx->pc = 0x12eb04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x12eb08: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12eb08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12eb0c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x12eb0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eb10: 0x243001a  div         $zero, $s2, $v1
    ctx->pc = 0x12eb10u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12eb14: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12EB14u;
    {
        const bool branch_taken_0x12eb14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12eb14) {
            ctx->pc = 0x12EB18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12EB14u;
            // 0x12eb18: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x12EB1Cu;
            goto label_12eb1c;
        }
    }
    ctx->pc = 0x12EB1Cu;
label_12eb1c:
    // 0x12eb1c: 0x8e06013c  lw          $a2, 0x13C($s0)
    ctx->pc = 0x12eb1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x12eb20: 0x3812  mflo        $a3
    ctx->pc = 0x12eb20u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x12eb24: 0x1010  mfhi        $v0
    ctx->pc = 0x12eb24u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x12eb28: 0x460018  mult        $zero, $v0, $a2
    ctx->pc = 0x12eb28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x12eb2c: 0x3012  mflo        $a2
    ctx->pc = 0x12eb2cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x12eb30: 0xc0505f6  jal         func_1417D8
    ctx->pc = 0x12EB30u;
    SET_GPR_U32(ctx, 31, 0x12EB38u);
    ctx->pc = 0x12EB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12EB30u;
            // 0x12eb34: 0x8e040184  lw          $a0, 0x184($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1417D8u;
    if (runtime->hasFunction(0x1417D8u)) {
        auto targetFn = runtime->lookupFunction(0x1417D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EB38u; }
        if (ctx->pc != 0x12EB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001417D8_0x1417d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EB38u; }
        if (ctx->pc != 0x12EB38u) { return; }
    }
    ctx->pc = 0x12EB38u;
    // 0x12eb38: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12eb38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eb3c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x12eb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x12eb40: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x12eb40u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x12eb44: 0xda010160  lqc2        $vf1, 0x160($s0)
    ctx->pc = 0x12eb44u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 352)));
    // 0x12eb48: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x12eb48u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12eb4c: 0x4be1097c  vftoi0.xyzw $vf1, $vf1
    ctx->pc = 0x12eb4cu;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12eb50: 0x5aa0000c  blezl       $s5, . + 4 + (0xC << 2)
    ctx->pc = 0x12EB50u;
    {
        const bool branch_taken_0x12eb50 = (GPR_S32(ctx, 21) <= 0);
        if (branch_taken_0x12eb50) {
            ctx->pc = 0x12EB54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12EB50u;
            // 0x12eb54: 0x8e020154  lw          $v0, 0x154($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12EB84u;
            goto label_12eb84;
        }
    }
    ctx->pc = 0x12EB58u;
    // 0x12eb58: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x12eb58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12eb5c: 0x0  nop
    ctx->pc = 0x12eb5cu;
    // NOP
label_12eb60:
    // 0x12eb60: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x12eb60u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12eb64: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x12eb64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x12eb68: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x12eb68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x12eb6c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x12eb6cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x12eb70: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x12eb70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x12eb74: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x12eb74u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12eb78: 0x14a0fff9  bnez        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x12EB78u;
    {
        const bool branch_taken_0x12eb78 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EB78u;
            // 0x12eb7c: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eb78) {
            ctx->pc = 0x12EB60u;
            runtime->cooperativeGuestYield();
            goto label_12eb60;
        }
    }
    ctx->pc = 0x12EB80u;
label_12eb80:
    // 0x12eb80: 0x8e020154  lw          $v0, 0x154($s0)
    ctx->pc = 0x12eb80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 340)));
label_12eb84:
    // 0x12eb84: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x12eb84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x12eb88: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x12EB88u;
    {
        const bool branch_taken_0x12eb88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EB8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EB88u;
            // 0x12eb8c: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12eb88) {
            ctx->pc = 0x12EC98u;
            goto label_12ec98;
        }
    }
    ctx->pc = 0x12EB90u;
    // 0x12eb90: 0x8e020148  lw          $v0, 0x148($s0)
    ctx->pc = 0x12eb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x12eb94: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x12eb94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12eb98: 0x262001a  div         $zero, $s3, $v0
    ctx->pc = 0x12eb98u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 19);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12eb9c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12EB9Cu;
    {
        const bool branch_taken_0x12eb9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12eb9c) {
            ctx->pc = 0x12EBA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12EB9Cu;
            // 0x12eba0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x12EBA4u;
            goto label_12eba4;
        }
    }
    ctx->pc = 0x12EBA4u;
label_12eba4:
    // 0x12eba4: 0x8e06013c  lw          $a2, 0x13C($s0)
    ctx->pc = 0x12eba4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x12eba8: 0x1810  mfhi        $v1
    ctx->pc = 0x12eba8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x12ebac: 0x3812  mflo        $a3
    ctx->pc = 0x12ebacu;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x12ebb0: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x12ebb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x12ebb4: 0x3012  mflo        $a2
    ctx->pc = 0x12ebb4u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x12ebb8: 0xc0505f6  jal         func_1417D8
    ctx->pc = 0x12EBB8u;
    SET_GPR_U32(ctx, 31, 0x12EBC0u);
    ctx->pc = 0x12EBBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12EBB8u;
            // 0x12ebbc: 0x8e040184  lw          $a0, 0x184($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1417D8u;
    if (runtime->hasFunction(0x1417D8u)) {
        auto targetFn = runtime->lookupFunction(0x1417D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EBC0u; }
        if (ctx->pc != 0x12EBC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001417D8_0x1417d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EBC0u; }
        if (ctx->pc != 0x12EBC0u) { return; }
    }
    ctx->pc = 0x12EBC0u;
    // 0x12ebc0: 0x8e030148  lw          $v1, 0x148($s0)
    ctx->pc = 0x12ebc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 328)));
    // 0x12ebc4: 0x24510010  addiu       $s1, $v0, 0x10
    ctx->pc = 0x12ebc4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x12ebc8: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x12ebc8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ebcc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x12ebccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12ebd0: 0x243001a  div         $zero, $s2, $v1
    ctx->pc = 0x12ebd0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 18);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x12ebd4: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x12EBD4u;
    {
        const bool branch_taken_0x12ebd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ebd4) {
            ctx->pc = 0x12EBD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12EBD4u;
            // 0x12ebd8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x12EBDCu;
            goto label_12ebdc;
        }
    }
    ctx->pc = 0x12EBDCu;
label_12ebdc:
    // 0x12ebdc: 0x8e06013c  lw          $a2, 0x13C($s0)
    ctx->pc = 0x12ebdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 316)));
    // 0x12ebe0: 0x3812  mflo        $a3
    ctx->pc = 0x12ebe0u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x12ebe4: 0x1010  mfhi        $v0
    ctx->pc = 0x12ebe4u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x12ebe8: 0x460018  mult        $zero, $v0, $a2
    ctx->pc = 0x12ebe8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x12ebec: 0x3012  mflo        $a2
    ctx->pc = 0x12ebecu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x12ebf0: 0xc0505f6  jal         func_1417D8
    ctx->pc = 0x12EBF0u;
    SET_GPR_U32(ctx, 31, 0x12EBF8u);
    ctx->pc = 0x12EBF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12EBF0u;
            // 0x12ebf4: 0x8e040184  lw          $a0, 0x184($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1417D8u;
    if (runtime->hasFunction(0x1417D8u)) {
        auto targetFn = runtime->lookupFunction(0x1417D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EBF8u; }
        if (ctx->pc != 0x12EBF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001417D8_0x1417d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12EBF8u; }
        if (ctx->pc != 0x12EBF8u) { return; }
    }
    ctx->pc = 0x12EBF8u;
    // 0x12ebf8: 0x27a70020  addiu       $a3, $sp, 0x20
    ctx->pc = 0x12ebf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x12ebfc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x12ebfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ec00: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x12ec00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x12ec04: 0x24060000  addiu       $a2, $zero, 0x0
    ctx->pc = 0x12ec04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x12ec08: 0x70a61b89  pcpyld      $v1, $a1, $a2
    ctx->pc = 0x12ec08u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
    // 0x12ec0c: 0x24050000  addiu       $a1, $zero, 0x0
    ctx->pc = 0x12ec0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x12ec10: 0x24060000  addiu       $a2, $zero, 0x0
    ctx->pc = 0x12ec10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x12ec14: 0x70a61389  pcpyld      $v0, $a1, $a2
    ctx->pc = 0x12ec14u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
    // 0x12ec18: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x12ec18u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x12ec1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12ec1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ec20: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x12ec20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x12ec24: 0x1aa0001c  blez        $s5, . + 4 + (0x1C << 2)
    ctx->pc = 0x12EC24u;
    {
        const bool branch_taken_0x12ec24 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x12EC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EC24u;
            // 0x12ec28: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ec24) {
            ctx->pc = 0x12EC98u;
            goto label_12ec98;
        }
    }
    ctx->pc = 0x12EC2Cu;
    // 0x12ec2c: 0x26a2ffff  addiu       $v0, $s5, -0x1
    ctx->pc = 0x12ec2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_12ec30:
    // 0x12ec30: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x12ec30u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12ec34: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x12ec34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x12ec38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12ec38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12ec3c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x12ec3cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x12ec40: 0x3c014580  lui         $at, 0x4580
    ctx->pc = 0x12ec40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17792 << 16));
    // 0x12ec44: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x12ec44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x12ec48: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x12ec48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x12ec4c: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x12ec4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x12ec50: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x12ec50u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x12ec54: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x12ec54u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x12ec58: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x12ec58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x12ec5c: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x12ec5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x12ec60: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x12ec60u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x12ec64: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x12ec64u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x12ec68: 0xd8e10000  lqc2        $vf1, 0x0($a3)
    ctx->pc = 0x12ec68u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12ec6c: 0x4b020040  vaddx.x     $vf1, $vf0, $vf2x
    ctx->pc = 0x12ec6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12ec70: 0xf8e10000  sqc2        $vf1, 0x0($a3)
    ctx->pc = 0x12ec70u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12ec74: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x12ec74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ec78: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x12ec78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x12ec7c: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x12ec7cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12ec80: 0x4be1097c  vftoi0.xyzw $vf1, $vf1
    ctx->pc = 0x12ec80u;
    { __m128 src = ctx->vu0_vf[1]; src = _mm_mul_ps(src, _mm_set1_ps(1.0f)); __m128i res_i = _mm_cvttps_epi32(src); __m128 res = _mm_castsi128_ps(res_i); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x12ec84: 0xf8410000  sqc2        $vf1, 0x0($v0)
    ctx->pc = 0x12ec84u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x12ec88: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x12ec88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x12ec8c: 0xb5102a  slt         $v0, $a1, $s5
    ctx->pc = 0x12ec8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x12ec90: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x12EC90u;
    {
        const bool branch_taken_0x12ec90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12EC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EC90u;
            // 0x12ec94: 0x26a2ffff  addiu       $v0, $s5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ec90) {
            ctx->pc = 0x12EC30u;
            runtime->cooperativeGuestYield();
            goto label_12ec30;
        }
    }
    ctx->pc = 0x12EC98u;
label_12ec98:
    // 0x12ec98: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x12ec98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x12ec9c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x12ec9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12eca0: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x12eca0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x12eca4: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x12eca4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x12eca8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x12eca8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12ecac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x12ecacu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12ecb0: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x12ecb0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12ecb4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x12ecb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12ecb8: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x12ecb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12ecbc: 0x3e00008  jr          $ra
    ctx->pc = 0x12ECBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12ECC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12ECBCu;
            // 0x12ecc0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12E950u: goto label_12e950;
            case 0x12E968u: goto label_12e968;
            case 0x12E9A0u: goto label_12e9a0;
            case 0x12E9ACu: goto label_12e9ac;
            case 0x12E9D4u: goto label_12e9d4;
            case 0x12EA14u: goto label_12ea14;
            case 0x12EA48u: goto label_12ea48;
            case 0x12EAA0u: goto label_12eaa0;
            case 0x12EAC0u: goto label_12eac0;
            case 0x12EAE4u: goto label_12eae4;
            case 0x12EB1Cu: goto label_12eb1c;
            case 0x12EB60u: goto label_12eb60;
            case 0x12EB80u: goto label_12eb80;
            case 0x12EB84u: goto label_12eb84;
            case 0x12EBA4u: goto label_12eba4;
            case 0x12EBDCu: goto label_12ebdc;
            case 0x12EC30u: goto label_12ec30;
            case 0x12EC98u: goto label_12ec98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12ECC4u;
    // 0x12ecc4: 0x0  nop
    ctx->pc = 0x12ecc4u;
    // NOP
}
