#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00215010
// Address: 0x215010 - 0x215200
void sub_00215010_0x215010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00215010_0x215010");
#endif

    ctx->pc = 0x215010u;

    // 0x215010: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x215010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x215014: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x215014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x215018: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x215018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x21501c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21501cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215020: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x215020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x215024: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x215024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x215028: 0x8e4501c0  lw          $a1, 0x1C0($s2)
    ctx->pc = 0x215028u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 448)));
    // 0x21502c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x21502cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x215030: 0x84a3009e  lh          $v1, 0x9E($a1)
    ctx->pc = 0x215030u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 158)));
    // 0x215034: 0x14620038  bne         $v1, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x215034u;
    {
        const bool branch_taken_0x215034 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x215034) {
            ctx->pc = 0x215118u;
            goto label_215118;
        }
    }
    ctx->pc = 0x21503Cu;
    // 0x21503c: 0x8e420190  lw          $v0, 0x190($s2)
    ctx->pc = 0x21503cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 400)));
    // 0x215040: 0x4430062  bgezl       $v0, . + 4 + (0x62 << 2)
    ctx->pc = 0x215040u;
    {
        const bool branch_taken_0x215040 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x215040) {
            ctx->pc = 0x215044u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x215040u;
            // 0x215044: 0x8e4501e4  lw          $a1, 0x1E4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 484)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2151CCu;
            goto label_2151cc;
        }
    }
    ctx->pc = 0x215048u;
    // 0x215048: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x215048u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21504c: 0xc64001ec  lwc1        $f0, 0x1EC($s2)
    ctx->pc = 0x21504cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215050: 0xc441c658  lwc1        $f1, -0x39A8($v0)
    ctx->pc = 0x215050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x215054: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x215054u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x215058: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x215058u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x21505c: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x21505cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x215060: 0x0  nop
    ctx->pc = 0x215060u;
    // NOP
    // 0x215064: 0x45000058  bc1f        . + 4 + (0x58 << 2)
    ctx->pc = 0x215064u;
    {
        const bool branch_taken_0x215064 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x215068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215064u;
            // 0x215068: 0xe64001ec  swc1        $f0, 0x1EC($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 492), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x215064) {
            ctx->pc = 0x2151C8u;
            goto label_2151c8;
        }
    }
    ctx->pc = 0x21506Cu;
    // 0x21506c: 0x8e4201e4  lw          $v0, 0x1E4($s2)
    ctx->pc = 0x21506cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 484)));
    // 0x215070: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x215070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x215074: 0xc4a000a4  lwc1        $f0, 0xA4($a1)
    ctx->pc = 0x215074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x215078: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x215078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x21507c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x21507cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x215080: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x215080u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215084: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x215084u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x215088: 0xe64001ec  swc1        $f0, 0x1EC($s2)
    ctx->pc = 0x215088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 492), bits); }
    // 0x21508c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x21508Cu;
    {
        const bool branch_taken_0x21508c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21508c) {
            ctx->pc = 0x215090u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21508Cu;
            // 0x215090: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x215094u;
            goto label_215094;
        }
    }
    ctx->pc = 0x215094u;
label_215094:
    // 0x215094: 0x3010  mfhi        $a2
    ctx->pc = 0x215094u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x215098: 0xc3001a  div         $zero, $a2, $v1
    ctx->pc = 0x215098u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x21509c: 0x24c20002  addiu       $v0, $a2, 0x2
    ctx->pc = 0x21509cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x2150a0: 0xae4201e4  sw          $v0, 0x1E4($s2)
    ctx->pc = 0x2150a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 484), GPR_U32(ctx, 2));
    // 0x2150a4: 0x1810  mfhi        $v1
    ctx->pc = 0x2150a4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2150a8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2150a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2150ac: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2150acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2150b0: 0x8c420090  lw          $v0, 0x90($v0)
    ctx->pc = 0x2150b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x2150b4: 0x4430045  bgezl       $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x2150B4u;
    {
        const bool branch_taken_0x2150b4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2150b4) {
            ctx->pc = 0x2150B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2150B4u;
            // 0x2150b8: 0x8e4501e4  lw          $a1, 0x1E4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 484)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2151CCu;
            goto label_2151cc;
        }
    }
    ctx->pc = 0x2150BCu;
    // 0x2150bc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2150bcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2150c0:
    // 0x2150c0: 0x28e20003  slti        $v0, $a3, 0x3
    ctx->pc = 0x2150c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2150c4: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x2150C4u;
    {
        const bool branch_taken_0x2150c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2150C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2150C4u;
            // 0x2150c8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2150c4) {
            ctx->pc = 0x2151C8u;
            goto label_2151c8;
        }
    }
    ctx->pc = 0x2150CCu;
    // 0x2150cc: 0x8e4301e4  lw          $v1, 0x1E4($s2)
    ctx->pc = 0x2150ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 484)));
    // 0x2150d0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2150D0u;
    {
        const bool branch_taken_0x2150d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2150d0) {
            ctx->pc = 0x2150D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2150D0u;
            // 0x2150d4: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2150D8u;
            goto label_2150d8;
        }
    }
    ctx->pc = 0x2150D8u;
label_2150d8:
    // 0x2150d8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2150d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2150dc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2150dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2150e0: 0x8e4401c0  lw          $a0, 0x1C0($s2)
    ctx->pc = 0x2150e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 448)));
    // 0x2150e4: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x2150e4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2150e8: 0x3010  mfhi        $a2
    ctx->pc = 0x2150e8u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x2150ec: 0xc2001a  div         $zero, $a2, $v0
    ctx->pc = 0x2150ecu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2150f0: 0x24c20002  addiu       $v0, $a2, 0x2
    ctx->pc = 0x2150f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
    // 0x2150f4: 0xae4201e4  sw          $v0, 0x1E4($s2)
    ctx->pc = 0x2150f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 484), GPR_U32(ctx, 2));
    // 0x2150f8: 0x1810  mfhi        $v1
    ctx->pc = 0x2150f8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2150fc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2150fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x215100: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x215100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x215104: 0x8c820090  lw          $v0, 0x90($a0)
    ctx->pc = 0x215104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 144)));
    // 0x215108: 0x440ffed  bltz        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x215108u;
    {
        const bool branch_taken_0x215108 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x21510Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215108u;
            // 0x21510c: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215108) {
            ctx->pc = 0x2150C0u;
            runtime->cooperativeGuestYield();
            goto label_2150c0;
        }
    }
    ctx->pc = 0x215110u;
    // 0x215110: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x215110u;
    {
        const bool branch_taken_0x215110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x215114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215110u;
            // 0x215114: 0x8e4501e4  lw          $a1, 0x1E4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 484)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215110) {
            ctx->pc = 0x2151CCu;
            goto label_2151cc;
        }
    }
    ctx->pc = 0x215118u;
label_215118:
    // 0x215118: 0x5060002c  beql        $v1, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x215118u;
    {
        const bool branch_taken_0x215118 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x215118) {
            ctx->pc = 0x21511Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x215118u;
            // 0x21511c: 0x8e4501e4  lw          $a1, 0x1E4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 484)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2151CCu;
            goto label_2151cc;
        }
    }
    ctx->pc = 0x215120u;
    // 0x215120: 0x8e4301f0  lw          $v1, 0x1F0($s2)
    ctx->pc = 0x215120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
    // 0x215124: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x215124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x215128: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x215128u;
    {
        const bool branch_taken_0x215128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x215128) {
            ctx->pc = 0x21512Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x215128u;
            // 0x21512c: 0x8e4501e4  lw          $a1, 0x1E4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 484)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2151CCu;
            goto label_2151cc;
        }
    }
    ctx->pc = 0x215130u;
    // 0x215130: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x215130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x215134: 0x54400018  bnel        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x215134u;
    {
        const bool branch_taken_0x215134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x215134) {
            ctx->pc = 0x215138u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x215134u;
            // 0x215138: 0x8e4301e4  lw          $v1, 0x1E4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 484)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x215198u;
            goto label_215198;
        }
    }
    ctx->pc = 0x21513Cu;
    // 0x21513c: 0x94a5009c  lhu         $a1, 0x9C($a1)
    ctx->pc = 0x21513cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 156)));
    // 0x215140: 0x24a2fff6  addiu       $v0, $a1, -0xA
    ctx->pc = 0x215140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967286));
    // 0x215144: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x215144u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x215148: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x215148u;
    {
        const bool branch_taken_0x215148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21514Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x215148u;
            // 0x21514c: 0x3c11002a  lui         $s1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x215148) {
            ctx->pc = 0x215194u;
            goto label_215194;
        }
    }
    ctx->pc = 0x215150u;
    // 0x215150: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x215150u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x215154: 0x8e24cd58  lw          $a0, -0x32A8($s1)
    ctx->pc = 0x215154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954328)));
    // 0x215158: 0xc0761ae  jal         func_1D86B8
    ctx->pc = 0x215158u;
    SET_GPR_U32(ctx, 31, 0x215160u);
    ctx->pc = 0x21515Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x215158u;
            // 0x21515c: 0x52c03  sra         $a1, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D86B8u;
    if (runtime->hasFunction(0x1D86B8u)) {
        auto targetFn = runtime->lookupFunction(0x1D86B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215160u; }
        if (ctx->pc != 0x215160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d86b8_0x1d8730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215160u; }
        if (ctx->pc != 0x215160u) { return; }
    }
    ctx->pc = 0x215160u;
    // 0x215160: 0x8e4301c0  lw          $v1, 0x1C0($s2)
    ctx->pc = 0x215160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 448)));
    // 0x215164: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x215164u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x215168: 0x8e24cd58  lw          $a0, -0x32A8($s1)
    ctx->pc = 0x215168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294954328)));
    // 0x21516c: 0xc0761cc  jal         func_1D8730
    ctx->pc = 0x21516Cu;
    SET_GPR_U32(ctx, 31, 0x215174u);
    ctx->pc = 0x215170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21516Cu;
            // 0x215170: 0x8465009c  lh          $a1, 0x9C($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 156)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8730u;
    if (runtime->hasFunction(0x1D8730u)) {
        auto targetFn = runtime->lookupFunction(0x1D8730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215174u; }
        if (ctx->pc != 0x215174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d8730_0x1d8788(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x215174u; }
        if (ctx->pc != 0x215174u) { return; }
    }
    ctx->pc = 0x215174u;
    // 0x215174: 0x202802a  slt         $s0, $s0, $v0
    ctx->pc = 0x215174u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x215178: 0x56000007  bnel        $s0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x215178u;
    {
        const bool branch_taken_0x215178 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x215178) {
            ctx->pc = 0x21517Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x215178u;
            // 0x21517c: 0x8e4301e4  lw          $v1, 0x1E4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 484)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x215198u;
            goto label_215198;
        }
    }
    ctx->pc = 0x215180u;
    // 0x215180: 0x8e4201f0  lw          $v0, 0x1F0($s2)
    ctx->pc = 0x215180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
    // 0x215184: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x215184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x215188: 0xae4301e4  sw          $v1, 0x1E4($s2)
    ctx->pc = 0x215188u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 484), GPR_U32(ctx, 3));
    // 0x21518c: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x21518cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x215190: 0xae4201f0  sw          $v0, 0x1F0($s2)
    ctx->pc = 0x215190u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 496), GPR_U32(ctx, 2));
label_215194:
    // 0x215194: 0x8e4301e4  lw          $v1, 0x1E4($s2)
    ctx->pc = 0x215194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 484)));
label_215198:
    // 0x215198: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x215198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x21519c: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x21519Cu;
    {
        const bool branch_taken_0x21519c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x21519c) {
            ctx->pc = 0x2151A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21519Cu;
            // 0x2151a0: 0x8e4501e4  lw          $a1, 0x1E4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 484)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2151CCu;
            goto label_2151cc;
        }
    }
    ctx->pc = 0x2151A4u;
    // 0x2151a4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x2151a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x2151a8: 0xc07632c  jal         func_1D8CB0
    ctx->pc = 0x2151A8u;
    SET_GPR_U32(ctx, 31, 0x2151B0u);
    ctx->pc = 0x2151ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2151A8u;
            // 0x2151ac: 0x8c44cd58  lw          $a0, -0x32A8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8CB0u;
    if (runtime->hasFunction(0x1D8CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1D8CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2151B0u; }
        if (ctx->pc != 0x2151B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d8cb0_0x1d8d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2151B0u; }
        if (ctx->pc != 0x2151B0u) { return; }
    }
    ctx->pc = 0x2151B0u;
    // 0x2151b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2151B0u;
    {
        const bool branch_taken_0x2151b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2151B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2151B0u;
            // 0x2151b4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2151b0) {
            ctx->pc = 0x2151C8u;
            goto label_2151c8;
        }
    }
    ctx->pc = 0x2151B8u;
    // 0x2151b8: 0x8e4201f0  lw          $v0, 0x1F0($s2)
    ctx->pc = 0x2151b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 496)));
    // 0x2151bc: 0xae4301e4  sw          $v1, 0x1E4($s2)
    ctx->pc = 0x2151bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 484), GPR_U32(ctx, 3));
    // 0x2151c0: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x2151c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
    // 0x2151c4: 0xae4201f0  sw          $v0, 0x1F0($s2)
    ctx->pc = 0x2151c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 496), GPR_U32(ctx, 2));
label_2151c8:
    // 0x2151c8: 0x8e4501e4  lw          $a1, 0x1E4($s2)
    ctx->pc = 0x2151c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 484)));
label_2151cc:
    // 0x2151cc: 0x8e4201e8  lw          $v0, 0x1E8($s2)
    ctx->pc = 0x2151ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 488)));
    // 0x2151d0: 0x10a20006  beq         $a1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2151D0u;
    {
        const bool branch_taken_0x2151d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2151D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2151D0u;
            // 0x2151d4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2151d0) {
            ctx->pc = 0x2151ECu;
            goto label_2151ec;
        }
    }
    ctx->pc = 0x2151D8u;
    // 0x2151d8: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2151D8u;
    {
        const bool branch_taken_0x2151d8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2151DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2151D8u;
            // 0x2151dc: 0xae4501e8  sw          $a1, 0x1E8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 488), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2151d8) {
            ctx->pc = 0x2151ECu;
            goto label_2151ec;
        }
    }
    ctx->pc = 0x2151E0u;
    // 0x2151e0: 0xc0853d4  jal         func_214F50
    ctx->pc = 0x2151E0u;
    SET_GPR_U32(ctx, 31, 0x2151E8u);
    ctx->pc = 0x2151E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2151E0u;
            // 0x2151e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x214F50u;
    if (runtime->hasFunction(0x214F50u)) {
        auto targetFn = runtime->lookupFunction(0x214F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2151E8u; }
        if (ctx->pc != 0x2151E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00214F50_0x214f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2151E8u; }
        if (ctx->pc != 0x2151E8u) { return; }
    }
    ctx->pc = 0x2151E8u;
    // 0x2151e8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2151e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2151ec:
    // 0x2151ec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2151ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2151f0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2151f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2151f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2151f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2151f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2151F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2151FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2151F8u;
            // 0x2151fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x215094u: goto label_215094;
            case 0x2150C0u: goto label_2150c0;
            case 0x2150D8u: goto label_2150d8;
            case 0x215118u: goto label_215118;
            case 0x215194u: goto label_215194;
            case 0x215198u: goto label_215198;
            case 0x2151C8u: goto label_2151c8;
            case 0x2151CCu: goto label_2151cc;
            case 0x2151ECu: goto label_2151ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x215200u;
}
