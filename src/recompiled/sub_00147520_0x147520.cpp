#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00147520
// Address: 0x147520 - 0x147bf8
void sub_00147520_0x147520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00147520_0x147520");
#endif

    ctx->pc = 0x147520u;

    // 0x147520: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x147520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x147524: 0x3108ffff  andi        $t0, $t0, 0xFFFF
    ctx->pc = 0x147524u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x147528: 0x7fb50110  sq          $s5, 0x110($sp)
    ctx->pc = 0x147528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 21));
    // 0x14752c: 0x7fb60100  sq          $s6, 0x100($sp)
    ctx->pc = 0x14752cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 22));
    // 0x147530: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x147530u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147534: 0x7fbe00e0  sq          $fp, 0xE0($sp)
    ctx->pc = 0x147534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 30));
    // 0x147538: 0x3176ffff  andi        $s6, $t3, 0xFFFF
    ctx->pc = 0x147538u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x14753c: 0x7fb00160  sq          $s0, 0x160($sp)
    ctx->pc = 0x14753cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 16));
    // 0x147540: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x147540u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147544: 0x7fb10150  sq          $s1, 0x150($sp)
    ctx->pc = 0x147544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 17));
    // 0x147548: 0x7fb20140  sq          $s2, 0x140($sp)
    ctx->pc = 0x147548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 18));
    // 0x14754c: 0x7fb30130  sq          $s3, 0x130($sp)
    ctx->pc = 0x14754cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 19));
    // 0x147550: 0x7fb700f0  sq          $s7, 0xF0($sp)
    ctx->pc = 0x147550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 23));
    // 0x147554: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x147554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x147558: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x147558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x14755c: 0x7fb40120  sq          $s4, 0x120($sp)
    ctx->pc = 0x14755cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 20));
    // 0x147560: 0x8fd40cd0  lw          $s4, 0xCD0($fp)
    ctx->pc = 0x147560u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 3280)));
    // 0x147564: 0xafa500b4  sw          $a1, 0xB4($sp)
    ctx->pc = 0x147564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 5));
    // 0x147568: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x147568u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x14756c: 0xafa600b8  sw          $a2, 0xB8($sp)
    ctx->pc = 0x14756cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 6));
    // 0x147570: 0xafa900c0  sw          $t1, 0xC0($sp)
    ctx->pc = 0x147570u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 9));
    // 0x147574: 0xafaa00c4  sw          $t2, 0xC4($sp)
    ctx->pc = 0x147574u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 10));
    // 0x147578: 0x10400193  beqz        $v0, . + 4 + (0x193 << 2)
    ctx->pc = 0x147578u;
    {
        const bool branch_taken_0x147578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14757Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147578u;
            // 0x14757c: 0xafa800bc  sw          $t0, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147578) {
            ctx->pc = 0x147BC8u;
            goto label_147bc8;
        }
    }
    ctx->pc = 0x147580u;
    // 0x147580: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x147580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x147584: 0x0  nop
    ctx->pc = 0x147584u;
    // NOP
label_147588:
    // 0x147588: 0x1510c0  sll         $v0, $s5, 3
    ctx->pc = 0x147588u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
    // 0x14758c: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x14758cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x147590: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x147590u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147594: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x147594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x147598: 0xa29021  addu        $s2, $a1, $v0
    ctx->pc = 0x147598u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x14759c: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x14759cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1475a0: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1475A0u;
    {
        const bool branch_taken_0x1475a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1475A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1475A0u;
            // 0x1475a4: 0x628821  addu        $s1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1475a0) {
            ctx->pc = 0x1475C4u;
            goto label_1475c4;
        }
    }
    ctx->pc = 0x1475A8u;
    // 0x1475a8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1475a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1475ac: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x1475acu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1475b0: 0x2c2102b  sltu        $v0, $s6, $v0
    ctx->pc = 0x1475b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1475b4: 0x1440017f  bnez        $v0, . + 4 + (0x17F << 2)
    ctx->pc = 0x1475B4u;
    {
        const bool branch_taken_0x1475b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1475B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1475B4u;
            // 0x1475b8: 0x8fa500b0  lw          $a1, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1475b4) {
            ctx->pc = 0x147BB4u;
            goto label_147bb4;
        }
    }
    ctx->pc = 0x1475BCu;
    // 0x1475bc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1475BCu;
    {
        const bool branch_taken_0x1475bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1475C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1475BCu;
            // 0x1475c0: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1475bc) {
            ctx->pc = 0x147618u;
            goto label_147618;
        }
    }
    ctx->pc = 0x1475C4u;
label_1475c4:
    // 0x1475c4: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x1475c4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1475c8: 0x2c2102b  sltu        $v0, $s6, $v0
    ctx->pc = 0x1475c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1475cc: 0x50400013  beql        $v0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1475CCu;
    {
        const bool branch_taken_0x1475cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1475cc) {
            ctx->pc = 0x1475D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1475CCu;
            // 0x1475d0: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14761Cu;
            goto label_14761c;
        }
    }
    ctx->pc = 0x1475D4u;
    // 0x1475d4: 0x96050002  lhu         $a1, 0x2($s0)
    ctx->pc = 0x1475d4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_1475d8:
    // 0x1475d8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1475d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1475dc: 0x2610fff6  addiu       $s0, $s0, -0xA
    ctx->pc = 0x1475dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967286));
    // 0x1475e0: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1475e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1475e4: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1475E4u;
    {
        const bool branch_taken_0x1475e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1475E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1475E4u;
            // 0x1475e8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1475e4) {
            ctx->pc = 0x14760Cu;
            goto label_14760c;
        }
    }
    ctx->pc = 0x1475ECu;
    // 0x1475ec: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x1475ecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x1475f0: 0x96030000  lhu         $v1, 0x0($s0)
    ctx->pc = 0x1475f0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1475f4: 0xa21026  xor         $v0, $a1, $v0
    ctx->pc = 0x1475f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 2));
    // 0x1475f8: 0x2c3182b  sltu        $v1, $s6, $v1
    ctx->pc = 0x1475f8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1475fc: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1475FCu;
    {
        const bool branch_taken_0x1475fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x147600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1475FCu;
            // 0x147600: 0x82400b  movn        $t0, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1475fc) {
            ctx->pc = 0x1475D8u;
            runtime->cooperativeGuestYield();
            goto label_1475d8;
        }
    }
    ctx->pc = 0x147604u;
    // 0x147604: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x147604u;
    {
        const bool branch_taken_0x147604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147604u;
            // 0x147608: 0x96020000  lhu         $v0, 0x0($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147604) {
            ctx->pc = 0x14761Cu;
            goto label_14761c;
        }
    }
    ctx->pc = 0x14760Cu;
label_14760c:
    // 0x14760c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x14760cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x147610: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x147610u;
    {
        const bool branch_taken_0x147610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147610u;
            // 0x147614: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147610) {
            ctx->pc = 0x1476B8u;
            goto label_1476b8;
        }
    }
    ctx->pc = 0x147618u;
label_147618:
    // 0x147618: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x147618u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_14761c:
    // 0x14761c: 0x56102b  sltu        $v0, $v0, $s6
    ctx->pc = 0x14761cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x147620: 0x50400022  beql        $v0, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x147620u;
    {
        const bool branch_taken_0x147620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x147620) {
            ctx->pc = 0x147624u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x147620u;
            // 0x147624: 0x96020002  lhu         $v0, 0x2($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1476ACu;
            goto label_1476ac;
        }
    }
    ctx->pc = 0x147628u;
    // 0x147628: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x147628u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14762c: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x14762cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
    // 0x147630: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x147630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x147634: 0x96260002  lhu         $a2, 0x2($s1)
    ctx->pc = 0x147634u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x147638: 0x2071823  subu        $v1, $s0, $a3
    ctx->pc = 0x147638u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x14763c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x14763cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x147640: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x147640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x147644: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x147644u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x147648: 0x50620018  beql        $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x147648u;
    {
        const bool branch_taken_0x147648 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x147648) {
            ctx->pc = 0x14764Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x147648u;
            // 0x14764c: 0x96020002  lhu         $v0, 0x2($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1476ACu;
            goto label_1476ac;
        }
    }
    ctx->pc = 0x147650u;
    // 0x147650: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x147650u;
    {
        const bool branch_taken_0x147650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147650u;
            // 0x147654: 0x9602000a  lhu         $v0, 0xA($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147650) {
            ctx->pc = 0x14769Cu;
            goto label_14769c;
        }
    }
    ctx->pc = 0x147658u;
label_147658:
    // 0x147658: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x147658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14765c: 0x9604000c  lhu         $a0, 0xC($s0)
    ctx->pc = 0x14765cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x147660: 0x2610000a  addiu       $s0, $s0, 0xA
    ctx->pc = 0x147660u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10));
    // 0x147664: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x147664u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x147668: 0x641826  xor         $v1, $v1, $a0
    ctx->pc = 0x147668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x14766c: 0x56102b  sltu        $v0, $v0, $s6
    ctx->pc = 0x14766cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x147670: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x147670u;
    {
        const bool branch_taken_0x147670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147670u;
            // 0x147674: 0xa3400b  movn        $t0, $a1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147670) {
            ctx->pc = 0x1476A8u;
            goto label_1476a8;
        }
    }
    ctx->pc = 0x147678u;
    // 0x147678: 0x3c02cccc  lui         $v0, 0xCCCC
    ctx->pc = 0x147678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52428 << 16));
    // 0x14767c: 0x2071823  subu        $v1, $s0, $a3
    ctx->pc = 0x14767cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x147680: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x147680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x147684: 0x24c4ffff  addiu       $a0, $a2, -0x1
    ctx->pc = 0x147684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x147688: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x147688u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x14768c: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x14768cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x147690: 0x50640006  beql        $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x147690u;
    {
        const bool branch_taken_0x147690 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x147690) {
            ctx->pc = 0x147694u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x147690u;
            // 0x147694: 0x96020002  lhu         $v0, 0x2($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1476ACu;
            goto label_1476ac;
        }
    }
    ctx->pc = 0x147698u;
    // 0x147698: 0x9602000a  lhu         $v0, 0xA($s0)
    ctx->pc = 0x147698u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
label_14769c:
    // 0x14769c: 0x2c2102b  sltu        $v0, $s6, $v0
    ctx->pc = 0x14769cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1476a0: 0x5040ffed  beql        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x1476A0u;
    {
        const bool branch_taken_0x1476a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1476a0) {
            ctx->pc = 0x1476A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1476A0u;
            // 0x1476a4: 0x96030002  lhu         $v1, 0x2($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x147658u;
            runtime->cooperativeGuestYield();
            goto label_147658;
        }
    }
    ctx->pc = 0x1476A8u;
label_1476a8:
    // 0x1476a8: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x1476a8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_1476ac:
    // 0x1476ac: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1476ACu;
    {
        const bool branch_taken_0x1476ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1476B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1476ACu;
            // 0x1476b0: 0xae500004  sw          $s0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1476ac) {
            ctx->pc = 0x1476E8u;
            goto label_1476e8;
        }
    }
    ctx->pc = 0x1476B4u;
    // 0x1476b4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1476b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1476b8:
    // 0x1476b8: 0x1060013e  beqz        $v1, . + 4 + (0x13E << 2)
    ctx->pc = 0x1476B8u;
    {
        const bool branch_taken_0x1476b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1476BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1476B8u;
            // 0x1476bc: 0x8fa500b0  lw          $a1, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1476b8) {
            ctx->pc = 0x147BB4u;
            goto label_147bb4;
        }
    }
    ctx->pc = 0x1476C0u;
    // 0x1476c0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1476c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1476c4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1476c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1476c8: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1476c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1476cc: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1476ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1476d0: 0x40f809  jalr        $v0
    ctx->pc = 0x1476D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1476D8u);
        ctx->pc = 0x1476D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1476D0u;
            // 0x1476d4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1476D8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x147588u: goto label_147588;
            case 0x1475C4u: goto label_1475c4;
            case 0x1475D8u: goto label_1475d8;
            case 0x14760Cu: goto label_14760c;
            case 0x147618u: goto label_147618;
            case 0x14761Cu: goto label_14761c;
            case 0x147658u: goto label_147658;
            case 0x14769Cu: goto label_14769c;
            case 0x1476A8u: goto label_1476a8;
            case 0x1476ACu: goto label_1476ac;
            case 0x1476B8u: goto label_1476b8;
            case 0x1476E8u: goto label_1476e8;
            case 0x14771Cu: goto label_14771c;
            case 0x147720u: goto label_147720;
            case 0x147750u: goto label_147750;
            case 0x14777Cu: goto label_14777c;
            case 0x1477B4u: goto label_1477b4;
            case 0x147838u: goto label_147838;
            case 0x147870u: goto label_147870;
            case 0x1478A8u: goto label_1478a8;
            case 0x1478E8u: goto label_1478e8;
            case 0x147914u: goto label_147914;
            case 0x147970u: goto label_147970;
            case 0x147998u: goto label_147998;
            case 0x147A10u: goto label_147a10;
            case 0x147A2Cu: goto label_147a2c;
            case 0x147A38u: goto label_147a38;
            case 0x147A3Cu: goto label_147a3c;
            case 0x147A60u: goto label_147a60;
            case 0x147A98u: goto label_147a98;
            case 0x147B18u: goto label_147b18;
            case 0x147B34u: goto label_147b34;
            case 0x147B88u: goto label_147b88;
            case 0x147B9Cu: goto label_147b9c;
            case 0x147BB0u: goto label_147bb0;
            case 0x147BB4u: goto label_147bb4;
            case 0x147BBCu: goto label_147bbc;
            case 0x147BC8u: goto label_147bc8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1476D8u; }
            if (ctx->pc != 0x1476D8u) { return; }
        }
        }
    }
    ctx->pc = 0x1476D8u;
    // 0x1476d8: 0xc0530bc  jal         func_14C2F0
    ctx->pc = 0x1476D8u;
    SET_GPR_U32(ctx, 31, 0x1476E0u);
    ctx->pc = 0x1476DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1476D8u;
            // 0x1476dc: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14C2F0u;
    if (runtime->hasFunction(0x14C2F0u)) {
        auto targetFn = runtime->lookupFunction(0x14C2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1476E0u; }
        if (ctx->pc != 0x1476E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014C2F0_0x14c2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1476E0u; }
        if (ctx->pc != 0x1476E0u) { return; }
    }
    ctx->pc = 0x1476E0u;
    // 0x1476e0: 0x10000133  b           . + 4 + (0x133 << 2)
    ctx->pc = 0x1476E0u;
    {
        const bool branch_taken_0x1476e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1476E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1476E0u;
            // 0x1476e4: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1476e0) {
            ctx->pc = 0x147BB0u;
            goto label_147bb0;
        }
    }
    ctx->pc = 0x1476E8u;
label_1476e8:
    // 0x1476e8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1476e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1476ec: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1476ECu;
    {
        const bool branch_taken_0x1476ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1476ec) {
            ctx->pc = 0x1476F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1476ECu;
            // 0x1476f0: 0x96220000  lhu         $v0, 0x0($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x147720u;
            goto label_147720;
        }
    }
    ctx->pc = 0x1476F4u;
    // 0x1476f4: 0x11000009  beqz        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1476F4u;
    {
        const bool branch_taken_0x1476f4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1476F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1476F4u;
            // 0x1476f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1476f4) {
            ctx->pc = 0x14771Cu;
            goto label_14771c;
        }
    }
    ctx->pc = 0x1476FCu;
    // 0x1476fc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1476fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x147700: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x147700u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x147704: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x147704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x147708: 0x40f809  jalr        $v0
    ctx->pc = 0x147708u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x147710u);
        ctx->pc = 0x14770Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147708u;
            // 0x14770c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x147710u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x147588u: goto label_147588;
            case 0x1475C4u: goto label_1475c4;
            case 0x1475D8u: goto label_1475d8;
            case 0x14760Cu: goto label_14760c;
            case 0x147618u: goto label_147618;
            case 0x14761Cu: goto label_14761c;
            case 0x147658u: goto label_147658;
            case 0x14769Cu: goto label_14769c;
            case 0x1476A8u: goto label_1476a8;
            case 0x1476ACu: goto label_1476ac;
            case 0x1476B8u: goto label_1476b8;
            case 0x1476E8u: goto label_1476e8;
            case 0x14771Cu: goto label_14771c;
            case 0x147720u: goto label_147720;
            case 0x147750u: goto label_147750;
            case 0x14777Cu: goto label_14777c;
            case 0x1477B4u: goto label_1477b4;
            case 0x147838u: goto label_147838;
            case 0x147870u: goto label_147870;
            case 0x1478A8u: goto label_1478a8;
            case 0x1478E8u: goto label_1478e8;
            case 0x147914u: goto label_147914;
            case 0x147970u: goto label_147970;
            case 0x147998u: goto label_147998;
            case 0x147A10u: goto label_147a10;
            case 0x147A2Cu: goto label_147a2c;
            case 0x147A38u: goto label_147a38;
            case 0x147A3Cu: goto label_147a3c;
            case 0x147A60u: goto label_147a60;
            case 0x147A98u: goto label_147a98;
            case 0x147B18u: goto label_147b18;
            case 0x147B34u: goto label_147b34;
            case 0x147B88u: goto label_147b88;
            case 0x147B9Cu: goto label_147b9c;
            case 0x147BB0u: goto label_147bb0;
            case 0x147BB4u: goto label_147bb4;
            case 0x147BBCu: goto label_147bbc;
            case 0x147BC8u: goto label_147bc8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x147710u; }
            if (ctx->pc != 0x147710u) { return; }
        }
        }
    }
    ctx->pc = 0x147710u;
    // 0x147710: 0xc0530bc  jal         func_14C2F0
    ctx->pc = 0x147710u;
    SET_GPR_U32(ctx, 31, 0x147718u);
    ctx->pc = 0x147714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x147710u;
            // 0x147714: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14C2F0u;
    if (runtime->hasFunction(0x14C2F0u)) {
        auto targetFn = runtime->lookupFunction(0x14C2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147718u; }
        if (ctx->pc != 0x147718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014C2F0_0x14c2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147718u; }
        if (ctx->pc != 0x147718u) { return; }
    }
    ctx->pc = 0x147718u;
    // 0x147718: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x147718u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_14771c:
    // 0x14771c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x14771cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_147720:
    // 0x147720: 0x8fa600bc  lw          $a2, 0xBC($sp)
    ctx->pc = 0x147720u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x147724: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x147724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x147728: 0x3057ffff  andi        $s7, $v0, 0xFFFF
    ctx->pc = 0x147728u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x14772c: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x14772cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x147730: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x147730u;
    {
        const bool branch_taken_0x147730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x147730) {
            ctx->pc = 0x147734u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x147730u;
            // 0x147734: 0x96050004  lhu         $a1, 0x4($s0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x147750u;
            goto label_147750;
        }
    }
    ctx->pc = 0x147738u;
    // 0x147738: 0x8fa700c0  lw          $a3, 0xC0($sp)
    ctx->pc = 0x147738u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x14773c: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x14773cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x147740: 0x78e30010  lq          $v1, 0x10($a3)
    ctx->pc = 0x147740u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x147744: 0x78e40020  lq          $a0, 0x20($a3)
    ctx->pc = 0x147744u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x147748: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x147748u;
    {
        const bool branch_taken_0x147748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14774Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147748u;
            // 0x14774c: 0x78e50030  lq          $a1, 0x30($a3) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 7), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147748) {
            ctx->pc = 0x14777Cu;
            goto label_14777c;
        }
    }
    ctx->pc = 0x147750u;
label_147750:
    // 0x147750: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x147750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x147754: 0x8e83004c  lw          $v1, 0x4C($s4)
    ctx->pc = 0x147754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
    // 0x147758: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x147758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14775c: 0xa22818  mult        $a1, $a1, $v0
    ctx->pc = 0x14775cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x147760: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x147760u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x147764: 0xc051b7a  jal         func_146DE8
    ctx->pc = 0x147764u;
    SET_GPR_U32(ctx, 31, 0x14776Cu);
    ctx->pc = 0x147768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x147764u;
            // 0x147768: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146DE8u;
    if (runtime->hasFunction(0x146DE8u)) {
        auto targetFn = runtime->lookupFunction(0x146DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14776Cu; }
        if (ctx->pc != 0x14776Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_146de8_0x146fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14776Cu; }
        if (ctx->pc != 0x14776Cu) { return; }
    }
    ctx->pc = 0x14776Cu;
    // 0x14776c: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x14776cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x147770: 0x7ba30050  lq          $v1, 0x50($sp)
    ctx->pc = 0x147770u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x147774: 0x7ba40060  lq          $a0, 0x60($sp)
    ctx->pc = 0x147774u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x147778: 0x7ba50070  lq          $a1, 0x70($sp)
    ctx->pc = 0x147778u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_14777c:
    // 0x14777c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x14777cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x147780: 0x7fa30010  sq          $v1, 0x10($sp)
    ctx->pc = 0x147780u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 3));
    // 0x147784: 0x7fa40020  sq          $a0, 0x20($sp)
    ctx->pc = 0x147784u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 4));
    // 0x147788: 0x7fa50030  sq          $a1, 0x30($sp)
    ctx->pc = 0x147788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 5));
    // 0x14778c: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x14778cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x147790: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x147790u;
    {
        const bool branch_taken_0x147790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x147790) {
            ctx->pc = 0x147794u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x147790u;
            // 0x147794: 0x96030006  lhu         $v1, 0x6($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1477B4u;
            goto label_1477b4;
        }
    }
    ctx->pc = 0x147798u;
    // 0x147798: 0x8fa200c4  lw          $v0, 0xC4($sp)
    ctx->pc = 0x147798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x14779c: 0x68430007  ldl         $v1, 0x7($v0)
    ctx->pc = 0x14779cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x1477a0: 0x6c430000  ldr         $v1, 0x0($v0)
    ctx->pc = 0x1477a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x1477a4: 0xb3a30087  sdl         $v1, 0x87($sp)
    ctx->pc = 0x1477a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1477a8: 0xb7a30080  sdr         $v1, 0x80($sp)
    ctx->pc = 0x1477a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1477ac: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1477ACu;
    {
        const bool branch_taken_0x1477ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1477B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1477ACu;
            // 0x1477b0: 0x96020002  lhu         $v0, 0x2($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1477ac) {
            ctx->pc = 0x147838u;
            goto label_147838;
        }
    }
    ctx->pc = 0x1477B4u;
label_1477b4:
    // 0x1477b4: 0x8e820054  lw          $v0, 0x54($s4)
    ctx->pc = 0x1477b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x1477b8: 0x8fa700c4  lw          $a3, 0xC4($sp)
    ctx->pc = 0x1477b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x1477bc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1477bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1477c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1477c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1477c4: 0x84e40000  lh          $a0, 0x0($a3)
    ctx->pc = 0x1477c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x1477c8: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x1477c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1477cc: 0x84e50002  lh          $a1, 0x2($a3)
    ctx->pc = 0x1477ccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x1477d0: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x1477d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1477d4: 0x84e60004  lh          $a2, 0x4($a3)
    ctx->pc = 0x1477d4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1477d8: 0x84e40006  lh          $a0, 0x6($a3)
    ctx->pc = 0x1477d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 6)));
    // 0x1477dc: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1477dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1477e0: 0xa7a200a0  sh          $v0, 0xA0($sp)
    ctx->pc = 0x1477e0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 160), (uint16_t)GPR_U32(ctx, 2));
    // 0x1477e4: 0x84620002  lh          $v0, 0x2($v1)
    ctx->pc = 0x1477e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1477e8: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x1477e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1477ec: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1477ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x1477f0: 0xa7a200a2  sh          $v0, 0xA2($sp)
    ctx->pc = 0x1477f0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 162), (uint16_t)GPR_U32(ctx, 2));
    // 0x1477f4: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x1477f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1477f8: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x1477f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1477fc: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x1477fcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x147800: 0xa7a200a4  sh          $v0, 0xA4($sp)
    ctx->pc = 0x147800u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 164), (uint16_t)GPR_U32(ctx, 2));
    // 0x147804: 0x84620006  lh          $v0, 0x6($v1)
    ctx->pc = 0x147804u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 6)));
    // 0x147808: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x147808u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x14780c: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x14780cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x147810: 0xa7a200a6  sh          $v0, 0xA6($sp)
    ctx->pc = 0x147810u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 166), (uint16_t)GPR_U32(ctx, 2));
    // 0x147814: 0x6ba200a7  ldl         $v0, 0xA7($sp)
    ctx->pc = 0x147814u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x147818: 0x6fa200a0  ldr         $v0, 0xA0($sp)
    ctx->pc = 0x147818u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x14781c: 0xb3a20097  sdl         $v0, 0x97($sp)
    ctx->pc = 0x14781cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x147820: 0xb7a20090  sdr         $v0, 0x90($sp)
    ctx->pc = 0x147820u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x147824: 0x6ba60097  ldl         $a2, 0x97($sp)
    ctx->pc = 0x147824u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x147828: 0x6fa60090  ldr         $a2, 0x90($sp)
    ctx->pc = 0x147828u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x14782c: 0xb3a60087  sdl         $a2, 0x87($sp)
    ctx->pc = 0x14782cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 135); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x147830: 0xb7a60080  sdr         $a2, 0x80($sp)
    ctx->pc = 0x147830u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 128); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x147834: 0x96020002  lhu         $v0, 0x2($s0)
    ctx->pc = 0x147834u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
label_147838:
    // 0x147838: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x147838u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x14783c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14783cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x147840: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x147840u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x147844: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x147844u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x147848: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x147848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14784c: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x14784cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x147850: 0x104000d2  beqz        $v0, . + 4 + (0xD2 << 2)
    ctx->pc = 0x147850u;
    {
        const bool branch_taken_0x147850 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147850u;
            // 0x147854: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147850) {
            ctx->pc = 0x147B9Cu;
            goto label_147b9c;
        }
    }
    ctx->pc = 0x147858u;
    // 0x147858: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x147858u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14785c: 0x24421c20  addiu       $v0, $v0, 0x1C20
    ctx->pc = 0x14785cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7200));
    // 0x147860: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x147860u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x147864: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x147864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x147868: 0x400008  jr          $v0
    ctx->pc = 0x147868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x147870u: goto label_147870;
            case 0x1478A8u: goto label_1478a8;
            case 0x147914u: goto label_147914;
            case 0x147998u: goto label_147998;
            case 0x147A60u: goto label_147a60;
            case 0x147B9Cu: goto label_147b9c;
            case 0x147BB0u: goto label_147bb0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x147870u;
label_147870:
    // 0x147870: 0x87a20086  lh          $v0, 0x86($sp)
    ctx->pc = 0x147870u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 134)));
    // 0x147874: 0x104000cf  beqz        $v0, . + 4 + (0xCF << 2)
    ctx->pc = 0x147874u;
    {
        const bool branch_taken_0x147874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147874u;
            // 0x147878: 0x8fa500b0  lw          $a1, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147874) {
            ctx->pc = 0x147BB4u;
            goto label_147bb4;
        }
    }
    ctx->pc = 0x14787Cu;
    // 0x14787c: 0x96240002  lhu         $a0, 0x2($s1)
    ctx->pc = 0x14787cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x147880: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x147880u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147884: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x147884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x147888: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x147888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14788c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x14788cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x147890: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x147890u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147894: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x147894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x147898: 0xc0527e8  jal         func_149FA0
    ctx->pc = 0x147898u;
    SET_GPR_U32(ctx, 31, 0x1478A0u);
    ctx->pc = 0x14789Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x147898u;
            // 0x14789c: 0x27a80080  addiu       $t0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149FA0u;
    if (runtime->hasFunction(0x149FA0u)) {
        auto targetFn = runtime->lookupFunction(0x149FA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1478A0u; }
        if (ctx->pc != 0x1478A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00149FA0_0x149fa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1478A0u; }
        if (ctx->pc != 0x1478A0u) { return; }
    }
    ctx->pc = 0x1478A0u;
    // 0x1478a0: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x1478A0u;
    {
        const bool branch_taken_0x1478a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1478A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1478A0u;
            // 0x1478a4: 0x8fa500b0  lw          $a1, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1478a0) {
            ctx->pc = 0x147BB4u;
            goto label_147bb4;
        }
    }
    ctx->pc = 0x1478A8u;
label_1478a8:
    // 0x1478a8: 0x87a20086  lh          $v0, 0x86($sp)
    ctx->pc = 0x1478a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 134)));
    // 0x1478ac: 0x104000c1  beqz        $v0, . + 4 + (0xC1 << 2)
    ctx->pc = 0x1478ACu;
    {
        const bool branch_taken_0x1478ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1478B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1478ACu;
            // 0x1478b0: 0x8fa500b0  lw          $a1, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1478ac) {
            ctx->pc = 0x147BB4u;
            goto label_147bb4;
        }
    }
    ctx->pc = 0x1478B4u;
    // 0x1478b4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1478b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1478b8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1478B8u;
    {
        const bool branch_taken_0x1478b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1478BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1478B8u;
            // 0x1478bc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1478b8) {
            ctx->pc = 0x1478E8u;
            goto label_1478e8;
        }
    }
    ctx->pc = 0x1478C0u;
    // 0x1478c0: 0xc05309e  jal         func_14C278
    ctx->pc = 0x1478C0u;
    SET_GPR_U32(ctx, 31, 0x1478C8u);
    ctx->pc = 0x1478C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1478C0u;
            // 0x1478c4: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14C278u;
    if (runtime->hasFunction(0x14C278u)) {
        auto targetFn = runtime->lookupFunction(0x14C278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1478C8u; }
        if (ctx->pc != 0x1478C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014C278_0x14c278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1478C8u; }
        if (ctx->pc != 0x1478C8u) { return; }
    }
    ctx->pc = 0x1478C8u;
    // 0x1478c8: 0x8fa400b4  lw          $a0, 0xB4($sp)
    ctx->pc = 0x1478c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1478cc: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x1478ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x1478d0: 0x2463f4a0  addiu       $v1, $v1, -0xB60
    ctx->pc = 0x1478d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964384));
    // 0x1478d4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1478d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1478d8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1478d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1478dc: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1478dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1478e0: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x1478e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x1478e4: 0xac5e0008  sw          $fp, 0x8($v0)
    ctx->pc = 0x1478e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 30));
label_1478e8:
    // 0x1478e8: 0x96240002  lhu         $a0, 0x2($s1)
    ctx->pc = 0x1478e8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1478ec: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x1478ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x1478f0: 0x8e830028  lw          $v1, 0x28($s4)
    ctx->pc = 0x1478f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x1478f4: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x1478f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1478f8: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x1478f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1478fc: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1478fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147900: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x147900u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x147904: 0xc051efe  jal         func_147BF8
    ctx->pc = 0x147904u;
    SET_GPR_U32(ctx, 31, 0x14790Cu);
    ctx->pc = 0x147908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x147904u;
            // 0x147908: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x147BF8u;
    if (runtime->hasFunction(0x147BF8u)) {
        auto targetFn = runtime->lookupFunction(0x147BF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14790Cu; }
        if (ctx->pc != 0x14790Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00147BF8_0x147bf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14790Cu; }
        if (ctx->pc != 0x14790Cu) { return; }
    }
    ctx->pc = 0x14790Cu;
    // 0x14790c: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x14790Cu;
    {
        const bool branch_taken_0x14790c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14790Cu;
            // 0x147910: 0x8fa500b0  lw          $a1, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14790c) {
            ctx->pc = 0x147BB4u;
            goto label_147bb4;
        }
    }
    ctx->pc = 0x147914u;
label_147914:
    // 0x147914: 0x87a20086  lh          $v0, 0x86($sp)
    ctx->pc = 0x147914u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 134)));
    // 0x147918: 0x104000a6  beqz        $v0, . + 4 + (0xA6 << 2)
    ctx->pc = 0x147918u;
    {
        const bool branch_taken_0x147918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14791Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147918u;
            // 0x14791c: 0x8fa500b0  lw          $a1, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147918) {
            ctx->pc = 0x147BB4u;
            goto label_147bb4;
        }
    }
    ctx->pc = 0x147920u;
    // 0x147920: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x147920u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x147924: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x147924u;
    {
        const bool branch_taken_0x147924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x147928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147924u;
            // 0x147928: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147924) {
            ctx->pc = 0x147970u;
            goto label_147970;
        }
    }
    ctx->pc = 0x14792Cu;
    // 0x14792c: 0xc05309e  jal         func_14C278
    ctx->pc = 0x14792Cu;
    SET_GPR_U32(ctx, 31, 0x147934u);
    ctx->pc = 0x147930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14792Cu;
            // 0x147930: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14C278u;
    if (runtime->hasFunction(0x14C278u)) {
        auto targetFn = runtime->lookupFunction(0x14C278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147934u; }
        if (ctx->pc != 0x147934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014C278_0x14c278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147934u; }
        if (ctx->pc != 0x147934u) { return; }
    }
    ctx->pc = 0x147934u;
    // 0x147934: 0x8fa600b4  lw          $a2, 0xB4($sp)
    ctx->pc = 0x147934u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x147938: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x147938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x14793c: 0x2463f480  addiu       $v1, $v1, -0xB80
    ctx->pc = 0x14793cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964352));
    // 0x147940: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x147940u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147944: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x147944u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x147948: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x147948u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x14794c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x14794cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x147950: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x147950u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x147954: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x147954u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x147958: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x147958u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x14795c: 0xac5e0014  sw          $fp, 0x14($v0)
    ctx->pc = 0x14795cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 30));
    // 0x147960: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x147960u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
    // 0x147964: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x147964u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x147968: 0xac400020  sw          $zero, 0x20($v0)
    ctx->pc = 0x147968u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
    // 0x14796c: 0x0  nop
    ctx->pc = 0x14796cu;
    // NOP
label_147970:
    // 0x147970: 0x96240002  lhu         $a0, 0x2($s1)
    ctx->pc = 0x147970u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x147974: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x147974u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147978: 0x8e820030  lw          $v0, 0x30($s4)
    ctx->pc = 0x147978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x14797c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x14797cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147980: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x147980u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x147984: 0x27a80080  addiu       $t0, $sp, 0x80
    ctx->pc = 0x147984u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x147988: 0xc052116  jal         func_148458
    ctx->pc = 0x147988u;
    SET_GPR_U32(ctx, 31, 0x147990u);
    ctx->pc = 0x14798Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x147988u;
            // 0x14798c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148458u;
    if (runtime->hasFunction(0x148458u)) {
        auto targetFn = runtime->lookupFunction(0x148458u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147990u; }
        if (ctx->pc != 0x147990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00148458_0x148458(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147990u; }
        if (ctx->pc != 0x147990u) { return; }
    }
    ctx->pc = 0x147990u;
    // 0x147990: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x147990u;
    {
        const bool branch_taken_0x147990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147990u;
            // 0x147994: 0x8fa500b0  lw          $a1, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147990) {
            ctx->pc = 0x147BB4u;
            goto label_147bb4;
        }
    }
    ctx->pc = 0x147998u;
label_147998:
    // 0x147998: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x147998u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x14799c: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x14799cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1479a0: 0x8e840038  lw          $a0, 0x38($s4)
    ctx->pc = 0x1479a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
    // 0x1479a4: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1479a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1479a8: 0x8e510000  lw          $s1, 0x0($s2)
    ctx->pc = 0x1479a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1479ac: 0x16200022  bnez        $s1, . + 4 + (0x22 << 2)
    ctx->pc = 0x1479ACu;
    {
        const bool branch_taken_0x1479ac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1479B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1479ACu;
            // 0x1479b0: 0x829821  addu        $s3, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1479ac) {
            ctx->pc = 0x147A38u;
            goto label_147a38;
        }
    }
    ctx->pc = 0x1479B4u;
    // 0x1479b4: 0xc05309e  jal         func_14C278
    ctx->pc = 0x1479B4u;
    SET_GPR_U32(ctx, 31, 0x1479BCu);
    ctx->pc = 0x1479B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1479B4u;
            // 0x1479b8: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14C278u;
    if (runtime->hasFunction(0x14C278u)) {
        auto targetFn = runtime->lookupFunction(0x14C278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1479BCu; }
        if (ctx->pc != 0x1479BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014C278_0x14c278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1479BCu; }
        if (ctx->pc != 0x1479BCu) { return; }
    }
    ctx->pc = 0x1479BCu;
    // 0x1479bc: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1479bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1479c0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1479c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1479c4: 0x8fa700b4  lw          $a3, 0xB4($sp)
    ctx->pc = 0x1479c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x1479c8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1479c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1479cc: 0x94640002  lhu         $a0, 0x2($v1)
    ctx->pc = 0x1479ccu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1479d0: 0x2442f460  addiu       $v0, $v0, -0xBA0
    ctx->pc = 0x1479d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964320));
    // 0x1479d4: 0xae070000  sw          $a3, 0x0($s0)
    ctx->pc = 0x1479d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 7));
    // 0x1479d8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1479d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1479dc: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x1479dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x1479e0: 0xc05309e  jal         func_14C278
    ctx->pc = 0x1479E0u;
    SET_GPR_U32(ctx, 31, 0x1479E8u);
    ctx->pc = 0x1479E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1479E0u;
            // 0x1479e4: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14C278u;
    if (runtime->hasFunction(0x14C278u)) {
        auto targetFn = runtime->lookupFunction(0x14C278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1479E8u; }
        if (ctx->pc != 0x1479E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014C278_0x14c278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1479E8u; }
        if (ctx->pc != 0x1479E8u) { return; }
    }
    ctx->pc = 0x1479E8u;
    // 0x1479e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1479e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1479ec: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1479ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1479f0: 0xae05000c  sw          $a1, 0xC($s0)
    ctx->pc = 0x1479f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 5));
    // 0x1479f4: 0x94430002  lhu         $v1, 0x2($v0)
    ctx->pc = 0x1479f4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x1479f8: 0x223102a  slt         $v0, $s1, $v1
    ctx->pc = 0x1479f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1479fc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1479FCu;
    {
        const bool branch_taken_0x1479fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1479FCu;
            // 0x147a00: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1479fc) {
            ctx->pc = 0x147A2Cu;
            goto label_147a2c;
        }
    }
    ctx->pc = 0x147A04u;
    // 0x147a04: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x147a04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147a08: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x147a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147a0c: 0x0  nop
    ctx->pc = 0x147a0cu;
    // NOP
label_147a10:
    // 0x147a10: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x147a10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x147a14: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x147a14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x147a18: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x147a18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x147a1c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x147a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x147a20: 0x85182a  slt         $v1, $a0, $a1
    ctx->pc = 0x147a20u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x147a24: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x147A24u;
    {
        const bool branch_taken_0x147a24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x147A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147A24u;
            // 0x147a28: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147a24) {
            ctx->pc = 0x147A10u;
            runtime->cooperativeGuestYield();
            goto label_147a10;
        }
    }
    ctx->pc = 0x147A2Cu;
label_147a2c:
    // 0x147a2c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x147a2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147a30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x147A30u;
    {
        const bool branch_taken_0x147a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147A30u;
            // 0x147a34: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147a30) {
            ctx->pc = 0x147A3Cu;
            goto label_147a3c;
        }
    }
    ctx->pc = 0x147A38u;
label_147a38:
    // 0x147a38: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x147a38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_147a3c:
    // 0x147a3c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x147a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147a40: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x147a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147a44: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x147a44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147a48: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x147a48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147a4c: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x147a4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147a50: 0xc052656  jal         func_149958
    ctx->pc = 0x147A50u;
    SET_GPR_U32(ctx, 31, 0x147A58u);
    ctx->pc = 0x147A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x147A50u;
            // 0x147a54: 0x27a90080  addiu       $t1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149958u;
    if (runtime->hasFunction(0x149958u)) {
        auto targetFn = runtime->lookupFunction(0x149958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147A58u; }
        if (ctx->pc != 0x147A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00149958_0x149958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147A58u; }
        if (ctx->pc != 0x147A58u) { return; }
    }
    ctx->pc = 0x147A58u;
    // 0x147a58: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x147A58u;
    {
        const bool branch_taken_0x147a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147A58u;
            // 0x147a5c: 0x8fa500b0  lw          $a1, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147a58) {
            ctx->pc = 0x147BB4u;
            goto label_147bb4;
        }
    }
    ctx->pc = 0x147A60u;
label_147a60:
    // 0x147a60: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x147a60u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x147a64: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x147a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x147a68: 0x8e840040  lw          $a0, 0x40($s4)
    ctx->pc = 0x147a68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x147a6c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x147a6cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x147a70: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x147a70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x147a74: 0x14a00044  bnez        $a1, . + 4 + (0x44 << 2)
    ctx->pc = 0x147A74u;
    {
        const bool branch_taken_0x147a74 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x147A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147A74u;
            // 0x147a78: 0x829821  addu        $s3, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147a74) {
            ctx->pc = 0x147B88u;
            goto label_147b88;
        }
    }
    ctx->pc = 0x147A7Cu;
    // 0x147a7c: 0x96030008  lhu         $v1, 0x8($s0)
    ctx->pc = 0x147a7cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x147a80: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x147a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x147a84: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x147A84u;
    {
        const bool branch_taken_0x147a84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x147A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147A84u;
            // 0x147a88: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147a84) {
            ctx->pc = 0x147A98u;
            goto label_147a98;
        }
    }
    ctx->pc = 0x147A8Cu;
    // 0x147a8c: 0x8e82005c  lw          $v0, 0x5C($s4)
    ctx->pc = 0x147a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 92)));
    // 0x147a90: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x147a90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x147a94: 0x0  nop
    ctx->pc = 0x147a94u;
    // NOP
label_147a98:
    // 0x147a98: 0xc05309e  jal         func_14C278
    ctx->pc = 0x147A98u;
    SET_GPR_U32(ctx, 31, 0x147AA0u);
    ctx->pc = 0x147A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x147A98u;
            // 0x147a9c: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14C278u;
    if (runtime->hasFunction(0x14C278u)) {
        auto targetFn = runtime->lookupFunction(0x14C278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147AA0u; }
        if (ctx->pc != 0x147AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014C278_0x14c278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147AA0u; }
        if (ctx->pc != 0x147AA0u) { return; }
    }
    ctx->pc = 0x147AA0u;
    // 0x147aa0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x147aa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147aa4: 0x8fa300b4  lw          $v1, 0xB4($sp)
    ctx->pc = 0x147aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x147aa8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x147aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x147aac: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x147aacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x147ab0: 0x2442f4c0  addiu       $v0, $v0, -0xB40
    ctx->pc = 0x147ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964416));
    // 0x147ab4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x147ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x147ab8: 0xc050fda  jal         func_143F68
    ctx->pc = 0x147AB8u;
    SET_GPR_U32(ctx, 31, 0x147AC0u);
    ctx->pc = 0x147ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x147AB8u;
            // 0x147abc: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (runtime->hasFunction(0x143F68u)) {
        auto targetFn = runtime->lookupFunction(0x143F68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147AC0u; }
        if (ctx->pc != 0x147AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_143f68_0x143f78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147AC0u; }
        if (ctx->pc != 0x147AC0u) { return; }
    }
    ctx->pc = 0x147AC0u;
    // 0x147ac0: 0x96640002  lhu         $a0, 0x2($s3)
    ctx->pc = 0x147ac0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 2)));
    // 0x147ac4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x147ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x147ac8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x147ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147acc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x147accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x147ad0: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x147ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x147ad4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x147ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x147ad8: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x147ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x147adc: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x147adcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x147ae0: 0xae13001c  sw          $s3, 0x1C($s0)
    ctx->pc = 0x147ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 19));
    // 0x147ae4: 0xae1e0020  sw          $fp, 0x20($s0)
    ctx->pc = 0x147ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 30));
    // 0x147ae8: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x147ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x147aec: 0xc05309e  jal         func_14C278
    ctx->pc = 0x147AECu;
    SET_GPR_U32(ctx, 31, 0x147AF4u);
    ctx->pc = 0x147AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x147AECu;
            // 0x147af0: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14C278u;
    if (runtime->hasFunction(0x14C278u)) {
        auto targetFn = runtime->lookupFunction(0x14C278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147AF4u; }
        if (ctx->pc != 0x147AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014C278_0x14c278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147AF4u; }
        if (ctx->pc != 0x147AF4u) { return; }
    }
    ctx->pc = 0x147AF4u;
    // 0x147af4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x147af4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147af8: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x147af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x147afc: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x147afcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x147b00: 0x94420002  lhu         $v0, 0x2($v0)
    ctx->pc = 0x147b00u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x147b04: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x147B04u;
    {
        const bool branch_taken_0x147b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x147B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147B04u;
            // 0x147b08: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147b04) {
            ctx->pc = 0x147B34u;
            goto label_147b34;
        }
    }
    ctx->pc = 0x147B0Cu;
    // 0x147b0c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x147b0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147b10: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x147b10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147b14: 0x0  nop
    ctx->pc = 0x147b14u;
    // NOP
label_147b18:
    // 0x147b18: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x147b18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x147b1c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x147b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x147b20: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x147b20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x147b24: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x147b24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x147b28: 0x85182a  slt         $v1, $a0, $a1
    ctx->pc = 0x147b28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x147b2c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x147B2Cu;
    {
        const bool branch_taken_0x147b2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x147B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147B2Cu;
            // 0x147b30: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147b2c) {
            ctx->pc = 0x147B18u;
            runtime->cooperativeGuestYield();
            goto label_147b18;
        }
    }
    ctx->pc = 0x147B34u;
label_147b34:
    // 0x147b34: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x147b34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x147b38: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x147b38u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147b3c: 0x3c02ff0f  lui         $v0, 0xFF0F
    ctx->pc = 0x147b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65295 << 16));
    // 0x147b40: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x147b40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x147b44: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x147b44u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x147b48: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x147b48u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x147b4c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x147b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147b50: 0x34420f0f  ori         $v0, $v0, 0xF0F
    ctx->pc = 0x147b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3855);
    // 0x147b54: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x147b54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x147b58: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x147b58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x147b5c: 0xe6010030  swc1        $f1, 0x30($s0)
    ctx->pc = 0x147b5cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x147b60: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x147b60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x147b64: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x147b64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x147b68: 0xae450000  sw          $a1, 0x0($s2)
    ctx->pc = 0x147b68u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 5));
    // 0x147b6c: 0xae00003c  sw          $zero, 0x3C($s0)
    ctx->pc = 0x147b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
    // 0x147b70: 0xae000038  sw          $zero, 0x38($s0)
    ctx->pc = 0x147b70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 0));
    // 0x147b74: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x147b74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
    // 0x147b78: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x147b78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
    // 0x147b7c: 0xae00004c  sw          $zero, 0x4C($s0)
    ctx->pc = 0x147b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 0));
    // 0x147b80: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x147b80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x147b84: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x147b84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
label_147b88:
    // 0x147b88: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x147b88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147b8c: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x147b8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147b90: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x147b90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x147b94: 0xc051bee  jal         func_146FB8
    ctx->pc = 0x147B94u;
    SET_GPR_U32(ctx, 31, 0x147B9Cu);
    ctx->pc = 0x147B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x147B94u;
            // 0x147b98: 0x27a80080  addiu       $t0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x146FB8u;
    if (runtime->hasFunction(0x146FB8u)) {
        auto targetFn = runtime->lookupFunction(0x146FB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147B9Cu; }
        if (ctx->pc != 0x147B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00146FB8_0x146fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x147B9Cu; }
        if (ctx->pc != 0x147B9Cu) { return; }
    }
    ctx->pc = 0x147B9Cu;
label_147b9c:
    // 0x147b9c: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x147b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x147ba0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x147ba0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x147ba4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x147BA4u;
    {
        const bool branch_taken_0x147ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x147BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147BA4u;
            // 0x147ba8: 0x94820002  lhu         $v0, 0x2($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147ba4) {
            ctx->pc = 0x147BBCu;
            goto label_147bbc;
        }
    }
    ctx->pc = 0x147BACu;
    // 0x147bac: 0x0  nop
    ctx->pc = 0x147bacu;
    // NOP
label_147bb0:
    // 0x147bb0: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x147bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_147bb4:
    // 0x147bb4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x147bb4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x147bb8: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x147bb8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_147bbc:
    // 0x147bbc: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x147bbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x147bc0: 0x1440fe71  bnez        $v0, . + 4 + (-0x18F << 2)
    ctx->pc = 0x147BC0u;
    {
        const bool branch_taken_0x147bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x147BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147BC0u;
            // 0x147bc4: 0x8fa400b0  lw          $a0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x147bc0) {
            ctx->pc = 0x147588u;
            runtime->cooperativeGuestYield();
            goto label_147588;
        }
    }
    ctx->pc = 0x147BC8u;
label_147bc8:
    // 0x147bc8: 0x7bb00160  lq          $s0, 0x160($sp)
    ctx->pc = 0x147bc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x147bcc: 0x7bb10150  lq          $s1, 0x150($sp)
    ctx->pc = 0x147bccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x147bd0: 0x7bb20140  lq          $s2, 0x140($sp)
    ctx->pc = 0x147bd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x147bd4: 0x7bb30130  lq          $s3, 0x130($sp)
    ctx->pc = 0x147bd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x147bd8: 0x7bb40120  lq          $s4, 0x120($sp)
    ctx->pc = 0x147bd8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x147bdc: 0x7bb50110  lq          $s5, 0x110($sp)
    ctx->pc = 0x147bdcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x147be0: 0x7bb60100  lq          $s6, 0x100($sp)
    ctx->pc = 0x147be0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x147be4: 0x7bb700f0  lq          $s7, 0xF0($sp)
    ctx->pc = 0x147be4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x147be8: 0x7bbe00e0  lq          $fp, 0xE0($sp)
    ctx->pc = 0x147be8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x147bec: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x147becu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x147bf0: 0x3e00008  jr          $ra
    ctx->pc = 0x147BF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x147BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x147BF0u;
            // 0x147bf4: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x147588u: goto label_147588;
            case 0x1475C4u: goto label_1475c4;
            case 0x1475D8u: goto label_1475d8;
            case 0x14760Cu: goto label_14760c;
            case 0x147618u: goto label_147618;
            case 0x14761Cu: goto label_14761c;
            case 0x147658u: goto label_147658;
            case 0x14769Cu: goto label_14769c;
            case 0x1476A8u: goto label_1476a8;
            case 0x1476ACu: goto label_1476ac;
            case 0x1476B8u: goto label_1476b8;
            case 0x1476E8u: goto label_1476e8;
            case 0x14771Cu: goto label_14771c;
            case 0x147720u: goto label_147720;
            case 0x147750u: goto label_147750;
            case 0x14777Cu: goto label_14777c;
            case 0x1477B4u: goto label_1477b4;
            case 0x147838u: goto label_147838;
            case 0x147870u: goto label_147870;
            case 0x1478A8u: goto label_1478a8;
            case 0x1478E8u: goto label_1478e8;
            case 0x147914u: goto label_147914;
            case 0x147970u: goto label_147970;
            case 0x147998u: goto label_147998;
            case 0x147A10u: goto label_147a10;
            case 0x147A2Cu: goto label_147a2c;
            case 0x147A38u: goto label_147a38;
            case 0x147A3Cu: goto label_147a3c;
            case 0x147A60u: goto label_147a60;
            case 0x147A98u: goto label_147a98;
            case 0x147B18u: goto label_147b18;
            case 0x147B34u: goto label_147b34;
            case 0x147B88u: goto label_147b88;
            case 0x147B9Cu: goto label_147b9c;
            case 0x147BB0u: goto label_147bb0;
            case 0x147BB4u: goto label_147bb4;
            case 0x147BBCu: goto label_147bbc;
            case 0x147BC8u: goto label_147bc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x147BF8u;
}
