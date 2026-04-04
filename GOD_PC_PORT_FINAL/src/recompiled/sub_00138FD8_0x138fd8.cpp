#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00138FD8
// Address: 0x138fd8 - 0x13a570
void sub_00138FD8_0x138fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00138FD8_0x138fd8");
#endif

    ctx->pc = 0x138fd8u;

    // 0x138fd8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x138fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x138fdc: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x138fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x138fe0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x138fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x138fe4: 0x2442dc50  addiu       $v0, $v0, -0x23B0
    ctx->pc = 0x138fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958160));
    // 0x138fe8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x138fe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x138fec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x138fecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138ff0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x138ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x138ff4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x138ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x138ff8: 0xae260000  sw          $a2, 0x0($s1)
    ctx->pc = 0x138ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 6));
    // 0x138ffc: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x138ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x139000: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x139000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x139004: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x139004u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139008: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x139008u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13900c: 0x8c430020  lw          $v1, 0x20($v0)
    ctx->pc = 0x13900cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x139010: 0x8c46001c  lw          $a2, 0x1C($v0)
    ctx->pc = 0x139010u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x139014: 0x70662389  pcpyld      $a0, $v1, $a2
    ctx->pc = 0x139014u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x139018: 0x8c490028  lw          $t1, 0x28($v0)
    ctx->pc = 0x139018u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x13901c: 0x8c46002c  lw          $a2, 0x2C($v0)
    ctx->pc = 0x13901cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x139020: 0x8c4a0024  lw          $t2, 0x24($v0)
    ctx->pc = 0x139020u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x139024: 0xae260030  sw          $a2, 0x30($s1)
    ctx->pc = 0x139024u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 6));
    // 0x139028: 0x712a1b89  pcpyld      $v1, $t1, $t2
    ctx->pc = 0x139028u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x13902c: 0x70641cc8  ppacw       $v1, $v1, $a0
    ctx->pc = 0x13902cu;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x139030: 0x8ca70010  lw          $a3, 0x10($a1)
    ctx->pc = 0x139030u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x139034: 0x8c440014  lw          $a0, 0x14($v0)
    ctx->pc = 0x139034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x139038: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x139038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13903c: 0xae24003c  sw          $a0, 0x3C($s1)
    ctx->pc = 0x13903cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 4));
    // 0x139040: 0x7e230010  sq          $v1, 0x10($s1)
    ctx->pc = 0x139040u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
    // 0x139044: 0x8c4a0018  lw          $t2, 0x18($v0)
    ctx->pc = 0x139044u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x139048: 0xae270034  sw          $a3, 0x34($s1)
    ctx->pc = 0x139048u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 7));
    // 0x13904c: 0xae2a0040  sw          $t2, 0x40($s1)
    ctx->pc = 0x13904cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 10));
    // 0x139050: 0xae250038  sw          $a1, 0x38($s1)
    ctx->pc = 0x139050u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 5));
    // 0x139054: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x139054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x139058: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x139058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x13905c: 0xae230044  sw          $v1, 0x44($s1)
    ctx->pc = 0x13905cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 3));
    // 0x139060: 0x8c430038  lw          $v1, 0x38($v0)
    ctx->pc = 0x139060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x139064: 0xae230048  sw          $v1, 0x48($s1)
    ctx->pc = 0x139064u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
    // 0x139068: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x139068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x13906c: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x13906cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x139070: 0x8c450044  lw          $a1, 0x44($v0)
    ctx->pc = 0x139070u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x139074: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x139074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x139078: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x139078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13907c: 0xae23004c  sw          $v1, 0x4C($s1)
    ctx->pc = 0x13907cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 3));
    // 0x139080: 0xae240050  sw          $a0, 0x50($s1)
    ctx->pc = 0x139080u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 4));
    // 0x139084: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x139084u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x139088: 0xae250054  sw          $a1, 0x54($s1)
    ctx->pc = 0x139088u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 5));
    // 0x13908c: 0x8c430050  lw          $v1, 0x50($v0)
    ctx->pc = 0x13908cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x139090: 0x8c470048  lw          $a3, 0x48($v0)
    ctx->pc = 0x139090u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x139094: 0x435821  addu        $t3, $v0, $v1
    ctx->pc = 0x139094u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x139098: 0x8c48004c  lw          $t0, 0x4C($v0)
    ctx->pc = 0x139098u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x13909c: 0x8c460054  lw          $a2, 0x54($v0)
    ctx->pc = 0x13909cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1390a0: 0x473821  addu        $a3, $v0, $a3
    ctx->pc = 0x1390a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1390a4: 0x8c440058  lw          $a0, 0x58($v0)
    ctx->pc = 0x1390a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1390a8: 0x484021  addu        $t0, $v0, $t0
    ctx->pc = 0x1390a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1390ac: 0x8c45005c  lw          $a1, 0x5C($v0)
    ctx->pc = 0x1390acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1390b0: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x1390b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1390b4: 0x8c430060  lw          $v1, 0x60($v0)
    ctx->pc = 0x1390b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1390b8: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1390b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1390bc: 0x8c490064  lw          $t1, 0x64($v0)
    ctx->pc = 0x1390bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1390c0: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x1390c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1390c4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1390c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1390c8: 0xae270058  sw          $a3, 0x58($s1)
    ctx->pc = 0x1390c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 7));
    // 0x1390cc: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1390ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1390d0: 0xae28005c  sw          $t0, 0x5C($s1)
    ctx->pc = 0x1390d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 92), GPR_U32(ctx, 8));
    // 0x1390d4: 0xae260064  sw          $a2, 0x64($s1)
    ctx->pc = 0x1390d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 6));
    // 0x1390d8: 0xae240068  sw          $a0, 0x68($s1)
    ctx->pc = 0x1390d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 4));
    // 0x1390dc: 0xae25006c  sw          $a1, 0x6C($s1)
    ctx->pc = 0x1390dcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 108), GPR_U32(ctx, 5));
    // 0x1390e0: 0xae230070  sw          $v1, 0x70($s1)
    ctx->pc = 0x1390e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 3));
    // 0x1390e4: 0xae220074  sw          $v0, 0x74($s1)
    ctx->pc = 0x1390e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
    // 0x1390e8: 0x1140000a  beqz        $t2, . + 4 + (0xA << 2)
    ctx->pc = 0x1390E8u;
    {
        const bool branch_taken_0x1390e8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        ctx->pc = 0x1390ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1390E8u;
            // 0x1390ec: 0xae2b0060  sw          $t3, 0x60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1390e8) {
            ctx->pc = 0x139114u;
            goto label_139114;
        }
    }
    ctx->pc = 0x1390F0u;
    // 0x1390f0: 0x160282d  daddu       $a1, $t3, $zero
    ctx->pc = 0x1390f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1390f4: 0x140202d  daddu       $a0, $t2, $zero
    ctx->pc = 0x1390f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1390f8:
    // 0x1390f8: 0xac1021  addu        $v0, $a1, $t4
    ctx->pc = 0x1390f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x1390fc: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1390fcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x139100: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x139100u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
    // 0x139104: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x139104u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x139108: 0x0  nop
    ctx->pc = 0x139108u;
    // NOP
    // 0x13910c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13910Cu;
    {
        const bool branch_taken_0x13910c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x139110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13910Cu;
            // 0x139110: 0x2439021  addu        $s2, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13910c) {
            ctx->pc = 0x1390F8u;
            runtime->cooperativeGuestYield();
            goto label_1390f8;
        }
    }
    ctx->pc = 0x139114u;
label_139114:
    // 0x139114: 0x8e240040  lw          $a0, 0x40($s1)
    ctx->pc = 0x139114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x139118: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x139118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13911c: 0x8e30003c  lw          $s0, 0x3C($s1)
    ctx->pc = 0x13911cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x139120: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x139120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x139124: 0x4180a  movz        $v1, $zero, $a0
    ctx->pc = 0x139124u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x139128: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x139128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x13912c: 0x10202b  sltu        $a0, $zero, $s0
    ctx->pc = 0x13912cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x139130: 0xae220090  sw          $v0, 0x90($s1)
    ctx->pc = 0x139130u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 2));
    // 0x139134: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x139134u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x139138: 0xfe200080  sd          $zero, 0x80($s1)
    ctx->pc = 0x139138u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 128), GPR_U64(ctx, 0));
    // 0x13913c: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x13913Cu;
    {
        const bool branch_taken_0x13913c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x139140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13913Cu;
            // 0x139140: 0xae230078  sw          $v1, 0x78($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 120), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13913c) {
            ctx->pc = 0x139164u;
            goto label_139164;
        }
    }
    ctx->pc = 0x139144u;
    // 0x139144: 0xc04f824  jal         func_13E090
    ctx->pc = 0x139144u;
    SET_GPR_U32(ctx, 31, 0x13914Cu);
    ctx->pc = 0x139148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139144u;
            // 0x139148: 0x108100  sll         $s0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13914Cu; }
        if (ctx->pc != 0x13914Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13914Cu; }
        if (ctx->pc != 0x13914Cu) { return; }
    }
    ctx->pc = 0x13914Cu;
    // 0x13914c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13914cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139150: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x139150u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139154: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x139154u;
    SET_GPR_U32(ctx, 31, 0x13915Cu);
    ctx->pc = 0x139158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139154u;
            // 0x139158: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13915Cu; }
        if (ctx->pc != 0x13915Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13915Cu; }
        if (ctx->pc != 0x13915Cu) { return; }
    }
    ctx->pc = 0x13915Cu;
    // 0x13915c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13915Cu;
    {
        const bool branch_taken_0x13915c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13915Cu;
            // 0x139160: 0xae220088  sw          $v0, 0x88($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13915c) {
            ctx->pc = 0x139168u;
            goto label_139168;
        }
    }
    ctx->pc = 0x139164u;
label_139164:
    // 0x139164: 0xae200088  sw          $zero, 0x88($s1)
    ctx->pc = 0x139164u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
label_139168:
    // 0x139168: 0x52400008  beql        $s2, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x139168u;
    {
        const bool branch_taken_0x139168 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x139168) {
            ctx->pc = 0x13916Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x139168u;
            // 0x13916c: 0xae20008c  sw          $zero, 0x8C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13918Cu;
            goto label_13918c;
        }
    }
    ctx->pc = 0x139170u;
    // 0x139170: 0xc04f824  jal         func_13E090
    ctx->pc = 0x139170u;
    SET_GPR_U32(ctx, 31, 0x139178u);
    ctx->pc = 0x139174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139170u;
            // 0x139174: 0x128100  sll         $s0, $s2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139178u; }
        if (ctx->pc != 0x139178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139178u; }
        if (ctx->pc != 0x139178u) { return; }
    }
    ctx->pc = 0x139178u;
    // 0x139178: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x139178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13917c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13917cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139180: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x139180u;
    SET_GPR_U32(ctx, 31, 0x139188u);
    ctx->pc = 0x139184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139180u;
            // 0x139184: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139188u; }
        if (ctx->pc != 0x139188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139188u; }
        if (ctx->pc != 0x139188u) { return; }
    }
    ctx->pc = 0x139188u;
    // 0x139188: 0xae22008c  sw          $v0, 0x8C($s1)
    ctx->pc = 0x139188u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 140), GPR_U32(ctx, 2));
label_13918c:
    // 0x13918c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x13918cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139190: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x139190u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x139194: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x139194u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x139198: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x139198u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13919c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x13919cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1391a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1391A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1391A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1391A0u;
            // 0x1391a4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1390F8u: goto label_1390f8;
            case 0x139114u: goto label_139114;
            case 0x139164u: goto label_139164;
            case 0x139168u: goto label_139168;
            case 0x13918Cu: goto label_13918c;
            case 0x1391DCu: goto label_1391dc;
            case 0x1391F4u: goto label_1391f4;
            case 0x13920Cu: goto label_13920c;
            case 0x139340u: goto label_139340;
            case 0x139344u: goto label_139344;
            case 0x139350u: goto label_139350;
            case 0x139390u: goto label_139390;
            case 0x1393ACu: goto label_1393ac;
            case 0x1393B0u: goto label_1393b0;
            case 0x1393B8u: goto label_1393b8;
            case 0x139408u: goto label_139408;
            case 0x139418u: goto label_139418;
            case 0x139434u: goto label_139434;
            case 0x139568u: goto label_139568;
            case 0x1395B4u: goto label_1395b4;
            case 0x1395E4u: goto label_1395e4;
            case 0x139600u: goto label_139600;
            case 0x1396A0u: goto label_1396a0;
            case 0x1396A4u: goto label_1396a4;
            case 0x1396C0u: goto label_1396c0;
            case 0x139718u: goto label_139718;
            case 0x139764u: goto label_139764;
            case 0x13978Cu: goto label_13978c;
            case 0x139790u: goto label_139790;
            case 0x139798u: goto label_139798;
            case 0x13979Cu: goto label_13979c;
            case 0x1397A8u: goto label_1397a8;
            case 0x1397ACu: goto label_1397ac;
            case 0x139830u: goto label_139830;
            case 0x139884u: goto label_139884;
            case 0x13988Cu: goto label_13988c;
            case 0x139930u: goto label_139930;
            case 0x139934u: goto label_139934;
            case 0x139958u: goto label_139958;
            case 0x139960u: goto label_139960;
            case 0x139968u: goto label_139968;
            case 0x139970u: goto label_139970;
            case 0x139988u: goto label_139988;
            case 0x1399B0u: goto label_1399b0;
            case 0x1399F0u: goto label_1399f0;
            case 0x139A68u: goto label_139a68;
            case 0x139A7Cu: goto label_139a7c;
            case 0x139A94u: goto label_139a94;
            case 0x139AA8u: goto label_139aa8;
            case 0x139AF0u: goto label_139af0;
            case 0x139B08u: goto label_139b08;
            case 0x139B88u: goto label_139b88;
            case 0x139B9Cu: goto label_139b9c;
            case 0x139BB4u: goto label_139bb4;
            case 0x139BBCu: goto label_139bbc;
            case 0x139BF8u: goto label_139bf8;
            case 0x139C00u: goto label_139c00;
            case 0x139C04u: goto label_139c04;
            case 0x139C08u: goto label_139c08;
            case 0x139C0Cu: goto label_139c0c;
            case 0x139CB8u: goto label_139cb8;
            case 0x139CD4u: goto label_139cd4;
            case 0x139CD8u: goto label_139cd8;
            case 0x139CE8u: goto label_139ce8;
            case 0x139D38u: goto label_139d38;
            case 0x139DF8u: goto label_139df8;
            case 0x139E44u: goto label_139e44;
            case 0x139E6Cu: goto label_139e6c;
            case 0x139E78u: goto label_139e78;
            case 0x139E7Cu: goto label_139e7c;
            case 0x139E88u: goto label_139e88;
            case 0x139E8Cu: goto label_139e8c;
            case 0x139F10u: goto label_139f10;
            case 0x139F64u: goto label_139f64;
            case 0x139F6Cu: goto label_139f6c;
            case 0x13A010u: goto label_13a010;
            case 0x13A014u: goto label_13a014;
            case 0x13A030u: goto label_13a030;
            case 0x13A050u: goto label_13a050;
            case 0x13A078u: goto label_13a078;
            case 0x13A168u: goto label_13a168;
            case 0x13A170u: goto label_13a170;
            case 0x13A174u: goto label_13a174;
            case 0x13A208u: goto label_13a208;
            case 0x13A20Cu: goto label_13a20c;
            case 0x13A218u: goto label_13a218;
            case 0x13A250u: goto label_13a250;
            case 0x13A270u: goto label_13a270;
            case 0x13A280u: goto label_13a280;
            case 0x13A2C8u: goto label_13a2c8;
            case 0x13A2ECu: goto label_13a2ec;
            case 0x13A300u: goto label_13a300;
            case 0x13A318u: goto label_13a318;
            case 0x13A340u: goto label_13a340;
            case 0x13A350u: goto label_13a350;
            case 0x13A3A0u: goto label_13a3a0;
            case 0x13A3E8u: goto label_13a3e8;
            case 0x13A3F8u: goto label_13a3f8;
            case 0x13A450u: goto label_13a450;
            case 0x13A470u: goto label_13a470;
            case 0x13A474u: goto label_13a474;
            case 0x13A4A8u: goto label_13a4a8;
            case 0x13A4B8u: goto label_13a4b8;
            case 0x13A4CCu: goto label_13a4cc;
            case 0x13A4D0u: goto label_13a4d0;
            case 0x13A50Cu: goto label_13a50c;
            case 0x13A514u: goto label_13a514;
            case 0x13A518u: goto label_13a518;
            case 0x13A51Cu: goto label_13a51c;
            case 0x13A534u: goto label_13a534;
            case 0x13A538u: goto label_13a538;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1391A8u;
    // 0x1391a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1391a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1391ac: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1391acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1391b0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1391b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1391b4: 0x2442dc50  addiu       $v0, $v0, -0x23B0
    ctx->pc = 0x1391b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958160));
    // 0x1391b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1391b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1391bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1391bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1391c0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1391c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1391c4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1391c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1391c8: 0x8e04008c  lw          $a0, 0x8C($s0)
    ctx->pc = 0x1391c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x1391cc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1391CCu;
    {
        const bool branch_taken_0x1391cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1391D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1391CCu;
            // 0x1391d0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1391cc) {
            ctx->pc = 0x1391DCu;
            goto label_1391dc;
        }
    }
    ctx->pc = 0x1391D4u;
    // 0x1391d4: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x1391D4u;
    SET_GPR_U32(ctx, 31, 0x1391DCu);
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1391DCu; }
        if (ctx->pc != 0x1391DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1391DCu; }
        if (ctx->pc != 0x1391DCu) { return; }
    }
    ctx->pc = 0x1391DCu;
label_1391dc:
    // 0x1391dc: 0x8e040088  lw          $a0, 0x88($s0)
    ctx->pc = 0x1391dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x1391e0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1391E0u;
    {
        const bool branch_taken_0x1391e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1391E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1391E0u;
            // 0x1391e4: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1391e0) {
            ctx->pc = 0x1391F4u;
            goto label_1391f4;
        }
    }
    ctx->pc = 0x1391E8u;
    // 0x1391e8: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x1391E8u;
    SET_GPR_U32(ctx, 31, 0x1391F0u);
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1391F0u; }
        if (ctx->pc != 0x1391F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1391F0u; }
        if (ctx->pc != 0x1391F0u) { return; }
    }
    ctx->pc = 0x1391F0u;
    // 0x1391f0: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1391f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
label_1391f4:
    // 0x1391f4: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x1391f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x1391f8: 0x2442dd10  addiu       $v0, $v0, -0x22F0
    ctx->pc = 0x1391f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958352));
    // 0x1391fc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1391FCu;
    {
        const bool branch_taken_0x1391fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x139200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1391FCu;
            // 0x139200: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1391fc) {
            ctx->pc = 0x13920Cu;
            goto label_13920c;
        }
    }
    ctx->pc = 0x139204u;
    // 0x139204: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x139204u;
    SET_GPR_U32(ctx, 31, 0x13920Cu);
    ctx->pc = 0x139208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139204u;
            // 0x139208: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13920Cu; }
        if (ctx->pc != 0x13920Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13920Cu; }
        if (ctx->pc != 0x13920Cu) { return; }
    }
    ctx->pc = 0x13920Cu;
label_13920c:
    // 0x13920c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x13920cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x139210: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x139210u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x139214: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x139214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x139218: 0x3e00008  jr          $ra
    ctx->pc = 0x139218u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13921Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139218u;
            // 0x13921c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1390F8u: goto label_1390f8;
            case 0x139114u: goto label_139114;
            case 0x139164u: goto label_139164;
            case 0x139168u: goto label_139168;
            case 0x13918Cu: goto label_13918c;
            case 0x1391DCu: goto label_1391dc;
            case 0x1391F4u: goto label_1391f4;
            case 0x13920Cu: goto label_13920c;
            case 0x139340u: goto label_139340;
            case 0x139344u: goto label_139344;
            case 0x139350u: goto label_139350;
            case 0x139390u: goto label_139390;
            case 0x1393ACu: goto label_1393ac;
            case 0x1393B0u: goto label_1393b0;
            case 0x1393B8u: goto label_1393b8;
            case 0x139408u: goto label_139408;
            case 0x139418u: goto label_139418;
            case 0x139434u: goto label_139434;
            case 0x139568u: goto label_139568;
            case 0x1395B4u: goto label_1395b4;
            case 0x1395E4u: goto label_1395e4;
            case 0x139600u: goto label_139600;
            case 0x1396A0u: goto label_1396a0;
            case 0x1396A4u: goto label_1396a4;
            case 0x1396C0u: goto label_1396c0;
            case 0x139718u: goto label_139718;
            case 0x139764u: goto label_139764;
            case 0x13978Cu: goto label_13978c;
            case 0x139790u: goto label_139790;
            case 0x139798u: goto label_139798;
            case 0x13979Cu: goto label_13979c;
            case 0x1397A8u: goto label_1397a8;
            case 0x1397ACu: goto label_1397ac;
            case 0x139830u: goto label_139830;
            case 0x139884u: goto label_139884;
            case 0x13988Cu: goto label_13988c;
            case 0x139930u: goto label_139930;
            case 0x139934u: goto label_139934;
            case 0x139958u: goto label_139958;
            case 0x139960u: goto label_139960;
            case 0x139968u: goto label_139968;
            case 0x139970u: goto label_139970;
            case 0x139988u: goto label_139988;
            case 0x1399B0u: goto label_1399b0;
            case 0x1399F0u: goto label_1399f0;
            case 0x139A68u: goto label_139a68;
            case 0x139A7Cu: goto label_139a7c;
            case 0x139A94u: goto label_139a94;
            case 0x139AA8u: goto label_139aa8;
            case 0x139AF0u: goto label_139af0;
            case 0x139B08u: goto label_139b08;
            case 0x139B88u: goto label_139b88;
            case 0x139B9Cu: goto label_139b9c;
            case 0x139BB4u: goto label_139bb4;
            case 0x139BBCu: goto label_139bbc;
            case 0x139BF8u: goto label_139bf8;
            case 0x139C00u: goto label_139c00;
            case 0x139C04u: goto label_139c04;
            case 0x139C08u: goto label_139c08;
            case 0x139C0Cu: goto label_139c0c;
            case 0x139CB8u: goto label_139cb8;
            case 0x139CD4u: goto label_139cd4;
            case 0x139CD8u: goto label_139cd8;
            case 0x139CE8u: goto label_139ce8;
            case 0x139D38u: goto label_139d38;
            case 0x139DF8u: goto label_139df8;
            case 0x139E44u: goto label_139e44;
            case 0x139E6Cu: goto label_139e6c;
            case 0x139E78u: goto label_139e78;
            case 0x139E7Cu: goto label_139e7c;
            case 0x139E88u: goto label_139e88;
            case 0x139E8Cu: goto label_139e8c;
            case 0x139F10u: goto label_139f10;
            case 0x139F64u: goto label_139f64;
            case 0x139F6Cu: goto label_139f6c;
            case 0x13A010u: goto label_13a010;
            case 0x13A014u: goto label_13a014;
            case 0x13A030u: goto label_13a030;
            case 0x13A050u: goto label_13a050;
            case 0x13A078u: goto label_13a078;
            case 0x13A168u: goto label_13a168;
            case 0x13A170u: goto label_13a170;
            case 0x13A174u: goto label_13a174;
            case 0x13A208u: goto label_13a208;
            case 0x13A20Cu: goto label_13a20c;
            case 0x13A218u: goto label_13a218;
            case 0x13A250u: goto label_13a250;
            case 0x13A270u: goto label_13a270;
            case 0x13A280u: goto label_13a280;
            case 0x13A2C8u: goto label_13a2c8;
            case 0x13A2ECu: goto label_13a2ec;
            case 0x13A300u: goto label_13a300;
            case 0x13A318u: goto label_13a318;
            case 0x13A340u: goto label_13a340;
            case 0x13A350u: goto label_13a350;
            case 0x13A3A0u: goto label_13a3a0;
            case 0x13A3E8u: goto label_13a3e8;
            case 0x13A3F8u: goto label_13a3f8;
            case 0x13A450u: goto label_13a450;
            case 0x13A470u: goto label_13a470;
            case 0x13A474u: goto label_13a474;
            case 0x13A4A8u: goto label_13a4a8;
            case 0x13A4B8u: goto label_13a4b8;
            case 0x13A4CCu: goto label_13a4cc;
            case 0x13A4D0u: goto label_13a4d0;
            case 0x13A50Cu: goto label_13a50c;
            case 0x13A514u: goto label_13a514;
            case 0x13A518u: goto label_13a518;
            case 0x13A51Cu: goto label_13a51c;
            case 0x13A534u: goto label_13a534;
            case 0x13A538u: goto label_13a538;
            default: break;
        }
        return;
    }
    ctx->pc = 0x139220u;
    // 0x139220: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x139220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x139224: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x139224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x139228: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x139228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
    // 0x13922c: 0x2443f170  addiu       $v1, $v0, -0xE90
    ctx->pc = 0x13922cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963568));
    // 0x139230: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x139230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x139234: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x139234u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139238: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x139238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
    // 0x13923c: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x13923cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
    // 0x139240: 0x7fb400f0  sq          $s4, 0xF0($sp)
    ctx->pc = 0x139240u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 20));
    // 0x139244: 0x7fb500e0  sq          $s5, 0xE0($sp)
    ctx->pc = 0x139244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 21));
    // 0x139248: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x139248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x13924c: 0x7fa500c0  sq          $a1, 0xC0($sp)
    ctx->pc = 0x13924cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 5));
    // 0x139250: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x139250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x139254: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x139254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x139258: 0x14400269  bnez        $v0, . + 4 + (0x269 << 2)
    ctx->pc = 0x139258u;
    {
        const bool branch_taken_0x139258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13925Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139258u;
            // 0x13925c: 0x7fa600b0  sq          $a2, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139258) {
            ctx->pc = 0x139C00u;
            goto label_139c00;
        }
    }
    ctx->pc = 0x139260u;
    // 0x139260: 0xdba100b0  lqc2        $vf1, 0xB0($sp)
    ctx->pc = 0x139260u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x139264: 0xdba200c0  lqc2        $vf2, 0xC0($sp)
    ctx->pc = 0x139264u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x139268: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x139268u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13926c: 0xfba300a0  sqc2        $vf3, 0xA0($sp)
    ctx->pc = 0x13926cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x139270: 0xda220020  lqc2        $vf2, 0x20($s1)
    ctx->pc = 0x139270u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x139274: 0xdba100c0  lqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x139274u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x139278: 0x4be2096c  vsub.xyzw   $vf5, $vf1, $vf2
    ctx->pc = 0x139278u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = PS2_VBLEND(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x13927c: 0x4be5292a  vmul.xyzw   $vf4, $vf5, $vf5
    ctx->pc = 0x13927cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x139280: 0x4b042041  vaddy.x     $vf1, $vf4, $vf4y
    ctx->pc = 0x139280u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x139284: 0x4a22109b  vmulw.w     $vf2, $vf2, $vf2w
    ctx->pc = 0x139284u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x139288: 0x4b040842  vaddz.x     $vf1, $vf1, $vf4z
    ctx->pc = 0x139288u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13928c: 0x4b020847  vsubw.x     $vf1, $vf1, $vf2w
    ctx->pc = 0x13928cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x139290: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x139290u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x139294: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x139294u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x139298: 0x44841800  mtc1        $a0, $f3
    ctx->pc = 0x139298u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x13929c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x13929cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1392a0: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1392a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1392a4: 0x4be518ea  vmul.xyzw   $vf3, $vf3, $vf5
    ctx->pc = 0x1392a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1392a8: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x1392a8u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1392ac: 0x44852800  mtc1        $a1, $f5
    ctx->pc = 0x1392acu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1392b0: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1392b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1392b4: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1392b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1392b8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1392b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1392bc: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1392bcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1392c0: 0x4b020858  vmulx.x     $vf1, $vf1, $vf2x
    ctx->pc = 0x1392c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1392c4: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1392c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x1392c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1392c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1392cc: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x1392ccu;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1392d0: 0x44862000  mtc1        $a2, $f4
    ctx->pc = 0x1392d0u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1392d4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1392d4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1392d8: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x1392d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x1392dc: 0x46042082  mul.s       $f2, $f4, $f4
    ctx->pc = 0x1392dcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[4]);
    // 0x1392e0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1392e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1392e4: 0x46001081  sub.s       $f2, $f2, $f0
    ctx->pc = 0x1392e4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1392e8: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x1392e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1392ec: 0x0  nop
    ctx->pc = 0x1392ecu;
    // NOP
    // 0x1392f0: 0x45010244  bc1t        . + 4 + (0x244 << 2)
    ctx->pc = 0x1392F0u;
    {
        const bool branch_taken_0x1392f0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1392F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1392F0u;
            // 0x1392f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1392f0) {
            ctx->pc = 0x139C04u;
            goto label_139c04;
        }
    }
    ctx->pc = 0x1392F8u;
    // 0x1392f8: 0x46002007  neg.s       $f0, $f4
    ctx->pc = 0x1392f8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[4]);
    // 0x1392fc: 0x46020084  c1          0x20084
    ctx->pc = 0x1392fcu;
    ctx->f[2] = FPU_SQRT_S(ctx->f[0]);
    // 0x139300: 0x46052840  add.s       $f1, $f5, $f5
    ctx->pc = 0x139300u;
    ctx->f[1] = FPU_ADD_S(ctx->f[5], ctx->f[5]);
    // 0x139304: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x139304u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x139308: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x139308u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13930c: 0x0  nop
    ctx->pc = 0x13930cu;
    // NOP
    // 0x139310: 0x4501023d  bc1t        . + 4 + (0x23D << 2)
    ctx->pc = 0x139310u;
    {
        const bool branch_taken_0x139310 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x139314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139310u;
            // 0x139314: 0x7bb00130  lq          $s0, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139310) {
            ctx->pc = 0x139C08u;
            goto label_139c08;
        }
    }
    ctx->pc = 0x139318u;
    // 0x139318: 0x46041034  c.lt.s      $f2, $f4
    ctx->pc = 0x139318u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13931c: 0x0  nop
    ctx->pc = 0x13931cu;
    // NOP
    // 0x139320: 0x4503023a  bc1tl       . + 4 + (0x23A << 2)
    ctx->pc = 0x139320u;
    {
        const bool branch_taken_0x139320 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x139320) {
            ctx->pc = 0x139324u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x139320u;
            // 0x139324: 0x7bb10120  lq          $s1, 0x120($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x139C0Cu;
            goto label_139c0c;
        }
    }
    ctx->pc = 0x139328u;
    // 0x139328: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x139328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x13932c: 0x2902b  sltu        $s2, $zero, $v0
    ctx->pc = 0x13932cu;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x139330: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x139330u;
    {
        const bool branch_taken_0x139330 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x139334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139330u;
            // 0x139334: 0x8c750008  lw          $s5, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139330) {
            ctx->pc = 0x139340u;
            goto label_139340;
        }
    }
    ctx->pc = 0x139338u;
    // 0x139338: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x139338u;
    {
        const bool branch_taken_0x139338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13933Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139338u;
            // 0x13933c: 0x92340040  lbu         $s4, 0x40($s1) (Delay Slot)
        SET_GPR_U32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139338) {
            ctx->pc = 0x139344u;
            goto label_139344;
        }
    }
    ctx->pc = 0x139340u;
label_139340:
    // 0x139340: 0x9234003c  lbu         $s4, 0x3C($s1)
    ctx->pc = 0x139340u;
    SET_GPR_U32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 60)));
label_139344:
    // 0x139344: 0x52400002  beql        $s2, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x139344u;
    {
        const bool branch_taken_0x139344 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x139344) {
            ctx->pc = 0x139348u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x139344u;
            // 0x139348: 0x8e330088  lw          $s3, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x139350u;
            goto label_139350;
        }
    }
    ctx->pc = 0x13934Cu;
    // 0x13934c: 0x8e33008c  lw          $s3, 0x8C($s1)
    ctx->pc = 0x13934cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_139350:
    // 0x139350: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x139350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x139354: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x139354u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x139358: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x139358u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x13935c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13935cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139360: 0xde230080  ld          $v1, 0x80($s1)
    ctx->pc = 0x139360u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x139364: 0x10a30011  beq         $a1, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x139364u;
    {
        const bool branch_taken_0x139364 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x139368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139364u;
            // 0x139368: 0xac82f400  sw          $v0, -0xC00($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294964224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139364) {
            ctx->pc = 0x1393ACu;
            goto label_1393ac;
        }
    }
    ctx->pc = 0x13936Cu;
    // 0x13936c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x13936cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x139370: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x139370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x139374: 0x8c500104  lw          $s0, 0x104($v0)
    ctx->pc = 0x139374u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x139378: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x139378u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x13937c: 0x50450004  beql        $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13937Cu;
    {
        const bool branch_taken_0x13937c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x13937c) {
            ctx->pc = 0x139380u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13937Cu;
            // 0x139380: 0xde040040  ld          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x139390u;
            goto label_139390;
        }
    }
    ctx->pc = 0x139384u;
    // 0x139384: 0xc04da64  jal         func_136990
    ctx->pc = 0x139384u;
    SET_GPR_U32(ctx, 31, 0x13938Cu);
    ctx->pc = 0x139388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139384u;
            // 0x139388: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13938Cu; }
        if (ctx->pc != 0x13938Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13938Cu; }
        if (ctx->pc != 0x13938Cu) { return; }
    }
    ctx->pc = 0x13938Cu;
    // 0x13938c: 0xde040040  ld          $a0, 0x40($s0)
    ctx->pc = 0x13938cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 64)));
label_139390:
    // 0x139390: 0xde220080  ld          $v0, 0x80($s1)
    ctx->pc = 0x139390u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x139394: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x139394u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x139398: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x139398u;
    {
        const bool branch_taken_0x139398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13939Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139398u;
            // 0x13939c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139398) {
            ctx->pc = 0x1393B0u;
            goto label_1393b0;
        }
    }
    ctx->pc = 0x1393A0u;
    // 0x1393a0: 0xfe240080  sd          $a0, 0x80($s1)
    ctx->pc = 0x1393a0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 128), GPR_U64(ctx, 4));
    // 0x1393a4: 0xc04ea9a  jal         func_13AA68
    ctx->pc = 0x1393A4u;
    SET_GPR_U32(ctx, 31, 0x1393ACu);
    ctx->pc = 0x1393A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1393A4u;
            // 0x1393a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13AA68u;
    if (runtime->hasFunction(0x13AA68u)) {
        auto targetFn = runtime->lookupFunction(0x13AA68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1393ACu; }
        if (ctx->pc != 0x1393ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013AA68_0x13aa68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1393ACu; }
        if (ctx->pc != 0x1393ACu) { return; }
    }
    ctx->pc = 0x1393ACu;
label_1393ac:
    // 0x1393ac: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1393acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1393b0:
    // 0x1393b0: 0x128000fd  beqz        $s4, . + 4 + (0xFD << 2)
    ctx->pc = 0x1393B0u;
    {
        const bool branch_taken_0x1393b0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1393B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1393B0u;
            // 0x1393b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1393b0) {
            ctx->pc = 0x1397A8u;
            goto label_1397a8;
        }
    }
    ctx->pc = 0x1393B8u;
label_1393b8:
    // 0x1393b8: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x1393b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1393bc: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1393bcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1393c0: 0x72900  sll         $a1, $a3, 4
    ctx->pc = 0x1393c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x1393c4: 0xb31021  addu        $v0, $a1, $s3
    ctx->pc = 0x1393c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x1393c8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1393c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1393cc: 0x704310a8  pceqw       $v0, $v0, $v1
    ctx->pc = 0x1393ccu;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1393d0: 0x700215c8  ppach       $v0, $zero, $v0
    ctx->pc = 0x1393d0u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x1393d4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x1393d4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x1393d8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1393d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1393dc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1393dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1393e0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1393e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1393e4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1393E4u;
    {
        const bool branch_taken_0x1393e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1393e4) {
            ctx->pc = 0x139418u;
            goto label_139418;
        }
    }
    ctx->pc = 0x1393ECu;
    // 0x1393ec: 0x52400006  beql        $s2, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1393ECu;
    {
        const bool branch_taken_0x1393ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1393ec) {
            ctx->pc = 0x1393F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1393ECu;
            // 0x1393f0: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x139408u;
            goto label_139408;
        }
    }
    ctx->pc = 0x1393F4u;
    // 0x1393f4: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x1393f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1393f8: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x1393f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x1393fc: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1393fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x139400: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x139400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x139404: 0x0  nop
    ctx->pc = 0x139404u;
    // NOP
label_139408:
    // 0x139408: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x139408u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x13940c: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x13940Cu;
    {
        const bool branch_taken_0x13940c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13940Cu;
            // 0x139410: 0x3047ffff  andi        $a3, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13940c) {
            ctx->pc = 0x13979Cu;
            goto label_13979c;
        }
    }
    ctx->pc = 0x139414u;
    // 0x139414: 0x0  nop
    ctx->pc = 0x139414u;
    // NOP
label_139418:
    // 0x139418: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x139418u;
    {
        const bool branch_taken_0x139418 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x13941Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139418u;
            // 0x13941c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139418) {
            ctx->pc = 0x139434u;
            goto label_139434;
        }
    }
    ctx->pc = 0x139420u;
    // 0x139420: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x139420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x139424: 0x4a2021  addu        $a0, $v0, $t2
    ctx->pc = 0x139424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x139428: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x139428u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13942c: 0x5443006d  bnel        $v0, $v1, . + 4 + (0x6D << 2)
    ctx->pc = 0x13942Cu;
    {
        const bool branch_taken_0x13942c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x13942c) {
            ctx->pc = 0x139430u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13942Cu;
            // 0x139430: 0x90850000  lbu         $a1, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1395E4u;
            goto label_1395e4;
        }
    }
    ctx->pc = 0x139434u;
label_139434:
    // 0x139434: 0xb31021  addu        $v0, $a1, $s3
    ctx->pc = 0x139434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x139438: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x139438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x13943c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x13943cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x139440: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x139440u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x139444: 0xdba300c0  lqc2        $vf3, 0xC0($sp)
    ctx->pc = 0x139444u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x139448: 0x4be2192c  vsub.xyzw   $vf4, $vf3, $vf2
    ctx->pc = 0x139448u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x13944c: 0x4be420ea  vmul.xyzw   $vf3, $vf4, $vf4
    ctx->pc = 0x13944cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x139450: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x139450u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x139454: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x139454u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x139458: 0x4a22109b  vmulw.w     $vf2, $vf2, $vf2w
    ctx->pc = 0x139458u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13945c: 0x4b020847  vsubw.x     $vf1, $vf1, $vf2w
    ctx->pc = 0x13945cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x139460: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x139460u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x139464: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x139464u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x139468: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x139468u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x13946c: 0x46052034  c.lt.s      $f4, $f5
    ctx->pc = 0x13946cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x139470: 0x0  nop
    ctx->pc = 0x139470u;
    // NOP
    // 0x139474: 0x450300c9  bc1tl       . + 4 + (0xC9 << 2)
    ctx->pc = 0x139474u;
    {
        const bool branch_taken_0x139474 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x139474) {
            ctx->pc = 0x139478u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x139474u;
            // 0x139478: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13979Cu;
            goto label_13979c;
        }
    }
    ctx->pc = 0x13947Cu;
    // 0x13947c: 0xdba200a0  lqc2        $vf2, 0xA0($sp)
    ctx->pc = 0x13947cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x139480: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x139480u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x139484: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x139484u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x139488: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x139488u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13948c: 0x4be410aa  vmul.xyzw   $vf2, $vf2, $vf4
    ctx->pc = 0x13948cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x139490: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x139490u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x139494: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x139494u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x139498: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x139498u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13949c: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x13949cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1394a0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1394a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1394a4: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x1394a4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1394a8: 0x4b020858  vmulx.x     $vf1, $vf1, $vf2x
    ctx->pc = 0x1394a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1394ac: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x1394acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x1394b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1394b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1394b4: 0x48250800  qmfc2.ni    $a1, $vf1
    ctx->pc = 0x1394b4u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1394b8: 0x44851800  mtc1        $a1, $f3
    ctx->pc = 0x1394b8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1394bc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1394bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1394c0: 0x46031842  mul.s       $f1, $f3, $f3
    ctx->pc = 0x1394c0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x1394c4: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x1394c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x1394c8: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x1394c8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1394cc: 0x46050836  c.le.s      $f1, $f5
    ctx->pc = 0x1394ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1394d0: 0x0  nop
    ctx->pc = 0x1394d0u;
    // NOP
    // 0x1394d4: 0x450300b1  bc1tl       . + 4 + (0xB1 << 2)
    ctx->pc = 0x1394D4u;
    {
        const bool branch_taken_0x1394d4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1394d4) {
            ctx->pc = 0x1394D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1394D4u;
            // 0x1394d8: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13979Cu;
            goto label_13979c;
        }
    }
    ctx->pc = 0x1394DCu;
    // 0x1394dc: 0x46001807  neg.s       $f0, $f3
    ctx->pc = 0x1394dcu;
    ctx->f[0] = FPU_NEG_S(ctx->f[3]);
    // 0x1394e0: 0x46010044  c1          0x10044
    ctx->pc = 0x1394e0u;
    ctx->f[1] = FPU_SQRT_S(ctx->f[0]);
    // 0x1394e4: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x1394e4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x1394e8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1394e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1394ec: 0x46020043  div.s       $f1, $f0, $f2
    ctx->pc = 0x1394ecu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[1] = ctx->f[0] / ctx->f[2];
    // 0x1394f0: 0x46012836  c.le.s      $f5, $f1
    ctx->pc = 0x1394f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[5], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1394f4: 0x0  nop
    ctx->pc = 0x1394f4u;
    // NOP
    // 0x1394f8: 0x450200a8  bc1fl       . + 4 + (0xA8 << 2)
    ctx->pc = 0x1394F8u;
    {
        const bool branch_taken_0x1394f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1394f8) {
            ctx->pc = 0x1394FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1394F8u;
            // 0x1394fc: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13979Cu;
            goto label_13979c;
        }
    }
    ctx->pc = 0x139500u;
    // 0x139500: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x139500u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x139504: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x139504u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x139508: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x139508u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13950c: 0x0  nop
    ctx->pc = 0x13950cu;
    // NOP
    // 0x139510: 0x450000a1  bc1f        . + 4 + (0xA1 << 2)
    ctx->pc = 0x139510u;
    {
        const bool branch_taken_0x139510 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x139514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139510u;
            // 0x139514: 0x24e2ffff  addiu       $v0, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139510) {
            ctx->pc = 0x139798u;
            goto label_139798;
        }
    }
    ctx->pc = 0x139518u;
    // 0x139518: 0xe7a10000  swc1        $f1, 0x0($sp)
    ctx->pc = 0x139518u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x13951c: 0xa7a20006  sh          $v0, 0x6($sp)
    ctx->pc = 0x13951cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x139520: 0xa7aa0004  sh          $t2, 0x4($sp)
    ctx->pc = 0x139520u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 10));
    // 0x139524: 0x3a0582d  daddu       $t3, $sp, $zero
    ctx->pc = 0x139524u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139528: 0x3c090033  lui         $t1, 0x33
    ctx->pc = 0x139528u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)51 << 16));
    // 0x13952c: 0x8d23f400  lw          $v1, -0xC00($t1)
    ctx->pc = 0x13952cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294964224)));
    // 0x139530: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x139530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x139534: 0x3c0c0033  lui         $t4, 0x33
    ctx->pc = 0x139534u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)51 << 16));
    // 0x139538: 0x661018  mult        $v0, $v1, $a2
    ctx->pc = 0x139538u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x13953c: 0x2585f408  addiu       $a1, $t4, -0xBF8
    ctx->pc = 0x13953cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), 4294964232));
    // 0x139540: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x139540u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139544: 0x32043  sra         $a0, $v1, 1
    ctx->pc = 0x139544u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
    // 0x139548: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x139548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x13954c: 0x6bad0007  ldl         $t5, 0x7($sp)
    ctx->pc = 0x13954cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x139550: 0x6fad0000  ldr         $t5, 0x0($sp)
    ctx->pc = 0x139550u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x139554: 0x8fae0008  lw          $t6, 0x8($sp)
    ctx->pc = 0x139554u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x139558: 0xb04d0007  sdl         $t5, 0x7($v0)
    ctx->pc = 0x139558u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13955c: 0xb44d0000  sdr         $t5, 0x0($v0)
    ctx->pc = 0x13955cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139560: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x139560u;
    {
        const bool branch_taken_0x139560 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139560u;
            // 0x139564: 0xac4e0008  sw          $t6, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139560) {
            ctx->pc = 0x1395B4u;
            goto label_1395b4;
        }
    }
    ctx->pc = 0x139568u;
label_139568:
    // 0x139568: 0x2585f408  addiu       $a1, $t4, -0xBF8
    ctx->pc = 0x139568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), 4294964232));
    // 0x13956c: 0x1061018  mult        $v0, $t0, $a2
    ctx->pc = 0x13956cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x139570: 0x864018  mult        $t0, $a0, $a2
    ctx->pc = 0x139570u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x139574: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x139574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x139578: 0x1051821  addu        $v1, $t0, $a1
    ctx->pc = 0x139578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x13957c: 0x686d0007  ldl         $t5, 0x7($v1)
    ctx->pc = 0x13957cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x139580: 0x6c6d0000  ldr         $t5, 0x0($v1)
    ctx->pc = 0x139580u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x139584: 0x8c6e0008  lw          $t6, 0x8($v1)
    ctx->pc = 0x139584u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x139588: 0xb04d0007  sdl         $t5, 0x7($v0)
    ctx->pc = 0x139588u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13958c: 0xb44d0000  sdr         $t5, 0x0($v0)
    ctx->pc = 0x13958cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139590: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x139590u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139594: 0xac4e0008  sw          $t6, 0x8($v0)
    ctx->pc = 0x139594u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 14));
    // 0x139598: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x139598u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x13959c: 0x69620007  ldl         $v0, 0x7($t3)
    ctx->pc = 0x13959cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1395a0: 0x6d620000  ldr         $v0, 0x0($t3)
    ctx->pc = 0x1395a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1395a4: 0x8d6d0008  lw          $t5, 0x8($t3)
    ctx->pc = 0x1395a4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x1395a8: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x1395a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1395ac: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x1395acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1395b0: 0xac6d0008  sw          $t5, 0x8($v1)
    ctx->pc = 0x1395b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 13));
label_1395b4:
    // 0x1395b4: 0x18800075  blez        $a0, . + 4 + (0x75 << 2)
    ctx->pc = 0x1395B4u;
    {
        const bool branch_taken_0x1395b4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1395B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1395B4u;
            // 0x1395b8: 0x861818  mult        $v1, $a0, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1395b4) {
            ctx->pc = 0x13978Cu;
            goto label_13978c;
        }
    }
    ctx->pc = 0x1395BCu;
    // 0x1395bc: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x1395bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1395c0: 0x88450003  lwl         $a1, 0x3($v0)
    ctx->pc = 0x1395c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
    // 0x1395c4: 0x98450000  lwr         $a1, 0x0($v0)
    ctx->pc = 0x1395c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
    // 0x1395c8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1395c8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1395cc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1395ccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1395d0: 0x0  nop
    ctx->pc = 0x1395d0u;
    // NOP
    // 0x1395d4: 0x4500ffe4  bc1f        . + 4 + (-0x1C << 2)
    ctx->pc = 0x1395D4u;
    {
        const bool branch_taken_0x1395d4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1395D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1395D4u;
            // 0x1395d8: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1395d4) {
            ctx->pc = 0x139568u;
            runtime->cooperativeGuestYield();
            goto label_139568;
        }
    }
    ctx->pc = 0x1395DCu;
    // 0x1395dc: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x1395DCu;
    {
        const bool branch_taken_0x1395dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1395E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1395DCu;
            // 0x1395e0: 0x8d22f400  lw          $v0, -0xC00($t1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294964224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1395dc) {
            ctx->pc = 0x139790u;
            goto label_139790;
        }
    }
    ctx->pc = 0x1395E4u;
label_1395e4:
    // 0x1395e4: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x1395e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x1395e8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1395e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1395ec: 0x10a00034  beqz        $a1, . + 4 + (0x34 << 2)
    ctx->pc = 0x1395ECu;
    {
        const bool branch_taken_0x1395ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1395F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1395ECu;
            // 0x1395f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1395ec) {
            ctx->pc = 0x1396C0u;
            goto label_1396c0;
        }
    }
    ctx->pc = 0x1395F4u;
    // 0x1395f4: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1395f4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1395f8: 0xdba30040  lqc2        $vf3, 0x40($sp)
    ctx->pc = 0x1395f8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1395fc: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x1395fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_139600:
    // 0x139600: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x139600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x139604: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x139604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x139608: 0xdba500c0  lqc2        $vf5, 0xC0($sp)
    ctx->pc = 0x139608u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x13960c: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x13960cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x139610: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x139610u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x139614: 0x4be2286a  vmul.xyzw   $vf1, $vf5, $vf2
    ctx->pc = 0x139614u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x139618: 0x4b010981  vaddy.x     $vf6, $vf1, $vf1y
    ctx->pc = 0x139618u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x13961c: 0x4a210942  vaddz.w     $vf5, $vf1, $vf1z
    ctx->pc = 0x13961cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x139620: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x139620u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x139624: 0x4b053043  vaddw.x     $vf1, $vf6, $vf5w
    ctx->pc = 0x139624u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x139628: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x139628u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13962c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x13962cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x139630: 0x46020834  c.lt.s      $f1, $f2
    ctx->pc = 0x139630u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x139634: 0x0  nop
    ctx->pc = 0x139634u;
    // NOP
    // 0x139638: 0x4503001a  bc1tl       . + 4 + (0x1A << 2)
    ctx->pc = 0x139638u;
    {
        const bool branch_taken_0x139638 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x139638) {
            ctx->pc = 0x13963Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x139638u;
            // 0x13963c: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1396A4u;
            goto label_1396a4;
        }
    }
    ctx->pc = 0x139640u;
    // 0x139640: 0xdba300b0  lqc2        $vf3, 0xB0($sp)
    ctx->pc = 0x139640u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x139644: 0x4be2186a  vmul.xyzw   $vf1, $vf3, $vf2
    ctx->pc = 0x139644u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x139648: 0x4b010901  vaddy.x     $vf4, $vf1, $vf1y
    ctx->pc = 0x139648u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x13964c: 0x4a2108c2  vaddz.w     $vf3, $vf1, $vf1z
    ctx->pc = 0x13964cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x139650: 0x4b032043  vaddw.x     $vf1, $vf4, $vf3w
    ctx->pc = 0x139650u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x139654: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x139654u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x139658: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x139658u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13965c: 0x46001036  c.le.s      $f2, $f0
    ctx->pc = 0x13965cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x139660: 0x0  nop
    ctx->pc = 0x139660u;
    // NOP
    // 0x139664: 0x4503000f  bc1tl       . + 4 + (0xF << 2)
    ctx->pc = 0x139664u;
    {
        const bool branch_taken_0x139664 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x139664) {
            ctx->pc = 0x139668u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x139664u;
            // 0x139668: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1396A4u;
            goto label_1396a4;
        }
    }
    ctx->pc = 0x13966Cu;
    // 0x13966c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x13966cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x139670: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x139670u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
    // 0x139674: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x139674u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x139678: 0x0  nop
    ctx->pc = 0x139678u;
    // NOP
    // 0x13967c: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x13967Cu;
    {
        const bool branch_taken_0x13967c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x139680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13967Cu;
            // 0x139680: 0x24e3ffff  addiu       $v1, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13967c) {
            ctx->pc = 0x1396A0u;
            goto label_1396a0;
        }
    }
    ctx->pc = 0x139684u;
    // 0x139684: 0x460000c6  mov.s       $f3, $f0
    ctx->pc = 0x139684u;
    ctx->f[3] = FPU_MOV_S(ctx->f[0]);
    // 0x139688: 0x641023  subu        $v0, $v1, $a0
    ctx->pc = 0x139688u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13968c: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x13968cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x139690: 0xa7a20008  sh          $v0, 0x8($sp)
    ctx->pc = 0x139690u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x139694: 0xa7aa0004  sh          $t2, 0x4($sp)
    ctx->pc = 0x139694u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 10));
    // 0x139698: 0xa7a30006  sh          $v1, 0x6($sp)
    ctx->pc = 0x139698u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 6), (uint16_t)GPR_U32(ctx, 3));
    // 0x13969c: 0x0  nop
    ctx->pc = 0x13969cu;
    // NOP
label_1396a0:
    // 0x1396a0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1396a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1396a4:
    // 0x1396a4: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x1396a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1396a8: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x1396A8u;
    {
        const bool branch_taken_0x1396a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1396ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1396A8u;
            // 0x1396ac: 0x71100  sll         $v0, $a3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1396a8) {
            ctx->pc = 0x139600u;
            runtime->cooperativeGuestYield();
            goto label_139600;
        }
    }
    ctx->pc = 0x1396B0u;
    // 0x1396b0: 0xfba30040  sqc2        $vf3, 0x40($sp)
    ctx->pc = 0x1396b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1396b4: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x1396b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x1396b8: 0xfba50020  sqc2        $vf5, 0x20($sp)
    ctx->pc = 0x1396b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x1396bc: 0xfba60010  sqc2        $vf6, 0x10($sp)
    ctx->pc = 0x1396bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[6]));
label_1396c0:
    // 0x1396c0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1396c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1396c4: 0x46030036  c.le.s      $f0, $f3
    ctx->pc = 0x1396c4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1396c8: 0x0  nop
    ctx->pc = 0x1396c8u;
    // NOP
    // 0x1396cc: 0x45000032  bc1f        . + 4 + (0x32 << 2)
    ctx->pc = 0x1396CCu;
    {
        const bool branch_taken_0x1396cc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1396D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1396CCu;
            // 0x1396d0: 0x3c090033  lui         $t1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1396cc) {
            ctx->pc = 0x139798u;
            goto label_139798;
        }
    }
    ctx->pc = 0x1396D4u;
    // 0x1396d4: 0x3a0582d  daddu       $t3, $sp, $zero
    ctx->pc = 0x1396d4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1396d8: 0x8d23f400  lw          $v1, -0xC00($t1)
    ctx->pc = 0x1396d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294964224)));
    // 0x1396dc: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x1396dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1396e0: 0x3c0c0033  lui         $t4, 0x33
    ctx->pc = 0x1396e0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)51 << 16));
    // 0x1396e4: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x1396e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1396e8: 0x661018  mult        $v0, $v1, $a2
    ctx->pc = 0x1396e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1396ec: 0x2585f408  addiu       $a1, $t4, -0xBF8
    ctx->pc = 0x1396ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), 4294964232));
    // 0x1396f0: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x1396f0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1396f4: 0x32043  sra         $a0, $v1, 1
    ctx->pc = 0x1396f4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1396f8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1396f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1396fc: 0x6bad0007  ldl         $t5, 0x7($sp)
    ctx->pc = 0x1396fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x139700: 0x6fad0000  ldr         $t5, 0x0($sp)
    ctx->pc = 0x139700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x139704: 0x8fae0008  lw          $t6, 0x8($sp)
    ctx->pc = 0x139704u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x139708: 0xb04d0007  sdl         $t5, 0x7($v0)
    ctx->pc = 0x139708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13970c: 0xb44d0000  sdr         $t5, 0x0($v0)
    ctx->pc = 0x13970cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139710: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x139710u;
    {
        const bool branch_taken_0x139710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139710u;
            // 0x139714: 0xac4e0008  sw          $t6, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139710) {
            ctx->pc = 0x139764u;
            goto label_139764;
        }
    }
    ctx->pc = 0x139718u;
label_139718:
    // 0x139718: 0x2585f408  addiu       $a1, $t4, -0xBF8
    ctx->pc = 0x139718u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 12), 4294964232));
    // 0x13971c: 0x1061018  mult        $v0, $t0, $a2
    ctx->pc = 0x13971cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x139720: 0x864018  mult        $t0, $a0, $a2
    ctx->pc = 0x139720u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x139724: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x139724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x139728: 0x1051821  addu        $v1, $t0, $a1
    ctx->pc = 0x139728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x13972c: 0x686d0007  ldl         $t5, 0x7($v1)
    ctx->pc = 0x13972cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x139730: 0x6c6d0000  ldr         $t5, 0x0($v1)
    ctx->pc = 0x139730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x139734: 0x8c6e0008  lw          $t6, 0x8($v1)
    ctx->pc = 0x139734u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x139738: 0xb04d0007  sdl         $t5, 0x7($v0)
    ctx->pc = 0x139738u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13973c: 0xb44d0000  sdr         $t5, 0x0($v0)
    ctx->pc = 0x13973cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 13); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139740: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x139740u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139744: 0xac4e0008  sw          $t6, 0x8($v0)
    ctx->pc = 0x139744u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 14));
    // 0x139748: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x139748u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x13974c: 0x69620007  ldl         $v0, 0x7($t3)
    ctx->pc = 0x13974cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x139750: 0x6d620000  ldr         $v0, 0x0($t3)
    ctx->pc = 0x139750u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x139754: 0x8d6d0008  lw          $t5, 0x8($t3)
    ctx->pc = 0x139754u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x139758: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x139758u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13975c: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x13975cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139760: 0xac6d0008  sw          $t5, 0x8($v1)
    ctx->pc = 0x139760u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 13));
label_139764:
    // 0x139764: 0x18800009  blez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x139764u;
    {
        const bool branch_taken_0x139764 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x139768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139764u;
            // 0x139768: 0x861818  mult        $v1, $a0, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x139764) {
            ctx->pc = 0x13978Cu;
            goto label_13978c;
        }
    }
    ctx->pc = 0x13976Cu;
    // 0x13976c: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x13976cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x139770: 0x88450003  lwl         $a1, 0x3($v0)
    ctx->pc = 0x139770u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
    // 0x139774: 0x98450000  lwr         $a1, 0x0($v0)
    ctx->pc = 0x139774u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
    // 0x139778: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x139778u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13977c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x13977cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x139780: 0x0  nop
    ctx->pc = 0x139780u;
    // NOP
    // 0x139784: 0x4502ffe4  bc1fl       . + 4 + (-0x1C << 2)
    ctx->pc = 0x139784u;
    {
        const bool branch_taken_0x139784 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x139784) {
            ctx->pc = 0x139788u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x139784u;
            // 0x139788: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x139718u;
            runtime->cooperativeGuestYield();
            goto label_139718;
        }
    }
    ctx->pc = 0x13978Cu;
label_13978c:
    // 0x13978c: 0x8d22f400  lw          $v0, -0xC00($t1)
    ctx->pc = 0x13978cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294964224)));
label_139790:
    // 0x139790: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x139790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x139794: 0xad22f400  sw          $v0, -0xC00($t1)
    ctx->pc = 0x139794u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294964224), GPR_U32(ctx, 2));
label_139798:
    // 0x139798: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x139798u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_13979c:
    // 0x13979c: 0x154102a  slt         $v0, $t2, $s4
    ctx->pc = 0x13979cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1397a0: 0x1440ff05  bnez        $v0, . + 4 + (-0xFB << 2)
    ctx->pc = 0x1397A0u;
    {
        const bool branch_taken_0x1397a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1397a0) {
            ctx->pc = 0x1393B8u;
            runtime->cooperativeGuestYield();
            goto label_1393b8;
        }
    }
    ctx->pc = 0x1397A8u;
label_1397a8:
    // 0x1397a8: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x1397a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
label_1397ac:
    // 0x1397ac: 0x8cc3f400  lw          $v1, -0xC00($a2)
    ctx->pc = 0x1397acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294964224)));
    // 0x1397b0: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x1397b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1397b4: 0x1440005f  bnez        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x1397B4u;
    {
        const bool branch_taken_0x1397b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1397B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1397B4u;
            // 0x1397b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1397b4) {
            ctx->pc = 0x139934u;
            goto label_139934;
        }
    }
    ctx->pc = 0x1397BCu;
    // 0x1397bc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1397bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1397c0: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1397c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x1397c4: 0xacc3f400  sw          $v1, -0xC00($a2)
    ctx->pc = 0x1397c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294964224), GPR_U32(ctx, 3));
    // 0x1397c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1397c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1397cc: 0x24a9f414  addiu       $t1, $a1, -0xBEC
    ctx->pc = 0x1397ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964244));
    // 0x1397d0: 0x69260007  ldl         $a2, 0x7($t1)
    ctx->pc = 0x1397d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x1397d4: 0x6d260000  ldr         $a2, 0x0($t1)
    ctx->pc = 0x1397d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x1397d8: 0x8d270008  lw          $a3, 0x8($t1)
    ctx->pc = 0x1397d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x1397dc: 0xb3a60007  sdl         $a2, 0x7($sp)
    ctx->pc = 0x1397dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1397e0: 0xb7a60000  sdr         $a2, 0x0($sp)
    ctx->pc = 0x1397e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1397e4: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x1397e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x1397e8: 0x10620052  beq         $v1, $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x1397E8u;
    {
        const bool branch_taken_0x1397e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1397ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1397E8u;
            // 0x1397ec: 0x24a4f414  addiu       $a0, $a1, -0xBEC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964244));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1397e8) {
            ctx->pc = 0x139934u;
            goto label_139934;
        }
    }
    ctx->pc = 0x1397F0u;
    // 0x1397f0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1397f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1397f4: 0x2484fff4  addiu       $a0, $a0, -0xC
    ctx->pc = 0x1397f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
    // 0x1397f8: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x1397f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1397fc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1397fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x139800: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x139800u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x139804: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x139804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x139808: 0x24aff414  addiu       $t7, $a1, -0xBEC
    ctx->pc = 0x139808u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964244));
    // 0x13980c: 0x684a0007  ldl         $t2, 0x7($v0)
    ctx->pc = 0x13980cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x139810: 0x6c4a0000  ldr         $t2, 0x0($v0)
    ctx->pc = 0x139810u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x139814: 0x8c4d0008  lw          $t5, 0x8($v0)
    ctx->pc = 0x139814u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x139818: 0xb1ea0007  sdl         $t2, 0x7($t7)
    ctx->pc = 0x139818u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13981c: 0xb5ea0000  sdr         $t2, 0x0($t7)
    ctx->pc = 0x13981cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139820: 0xaded0008  sw          $t5, 0x8($t7)
    ctx->pc = 0x139820u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 8), GPR_U32(ctx, 13));
    // 0x139824: 0x10600042  beqz        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x139824u;
    {
        const bool branch_taken_0x139824 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x139828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139824u;
            // 0x139828: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139824) {
            ctx->pc = 0x139930u;
            goto label_139930;
        }
    }
    ctx->pc = 0x13982Cu;
    // 0x13982c: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x13982cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
label_139830:
    // 0x139830: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x139830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x139834: 0x8d02f400  lw          $v0, -0xC00($t0)
    ctx->pc = 0x139834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294964224)));
    // 0x139838: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x139838u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13983c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x13983Cu;
    {
        const bool branch_taken_0x13983c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x139840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13983Cu;
            // 0x139840: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13983c) {
            ctx->pc = 0x139884u;
            goto label_139884;
        }
    }
    ctx->pc = 0x139844u;
    // 0x139844: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x139844u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x139848: 0xc41018  mult        $v0, $a2, $a0
    ctx->pc = 0x139848u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x13984c: 0xa44818  mult        $t1, $a1, $a0
    ctx->pc = 0x13984cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x139850: 0x2463f408  addiu       $v1, $v1, -0xBF8
    ctx->pc = 0x139850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964232));
    // 0x139854: 0x1232021  addu        $a0, $t1, $v1
    ctx->pc = 0x139854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x139858: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x139858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13985c: 0x884a0003  lwl         $t2, 0x3($v0)
    ctx->pc = 0x13985cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 10) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 10, (int32_t)merged); }
    // 0x139860: 0x984a0000  lwr         $t2, 0x0($v0)
    ctx->pc = 0x139860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 10) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 10) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 10, merged64); }
    // 0x139864: 0x888d0003  lwl         $t5, 0x3($a0)
    ctx->pc = 0x139864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 13) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 13, (int32_t)merged); }
    // 0x139868: 0x988d0000  lwr         $t5, 0x0($a0)
    ctx->pc = 0x139868u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
    // 0x13986c: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x13986cu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x139870: 0x448d0000  mtc1        $t5, $f0
    ctx->pc = 0x139870u;
    { uint32_t bits = GPR_U32(ctx, 13); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x139874: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x139874u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x139878: 0x0  nop
    ctx->pc = 0x139878u;
    // NOP
    // 0x13987c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x13987Cu;
    {
        const bool branch_taken_0x13987c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x139880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13987Cu;
            // 0x139880: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13987c) {
            ctx->pc = 0x13988Cu;
            goto label_13988c;
        }
    }
    ctx->pc = 0x139884u;
label_139884:
    // 0x139884: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x139884u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139888: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x139888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_13988c:
    // 0x13988c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x13988cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x139890: 0xe41818  mult        $v1, $a3, $a0
    ctx->pc = 0x139890u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x139894: 0xa43018  mult        $a2, $a1, $a0
    ctx->pc = 0x139894u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x139898: 0x2442f408  addiu       $v0, $v0, -0xBF8
    ctx->pc = 0x139898u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964232));
    // 0x13989c: 0xc22021  addu        $a0, $a2, $v0
    ctx->pc = 0x13989cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1398a0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1398a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1398a4: 0x88670003  lwl         $a3, 0x3($v1)
    ctx->pc = 0x1398a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x1398a8: 0x98670000  lwr         $a3, 0x0($v1)
    ctx->pc = 0x1398a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x1398ac: 0x88890003  lwl         $t1, 0x3($a0)
    ctx->pc = 0x1398acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 9) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 9, (int32_t)merged); }
    // 0x1398b0: 0x98890000  lwr         $t1, 0x0($a0)
    ctx->pc = 0x1398b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 9) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 9) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 9, merged64); }
    // 0x1398b4: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x1398b4u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1398b8: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x1398b8u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1398bc: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1398bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1398c0: 0x0  nop
    ctx->pc = 0x1398c0u;
    // NOP
    // 0x1398c4: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x1398C4u;
    {
        const bool branch_taken_0x1398c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1398C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1398C4u;
            // 0x1398c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1398c4) {
            ctx->pc = 0x139934u;
            goto label_139934;
        }
    }
    ctx->pc = 0x1398CCu;
    // 0x1398cc: 0x688a0007  ldl         $t2, 0x7($a0)
    ctx->pc = 0x1398ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x1398d0: 0x6c8a0000  ldr         $t2, 0x0($a0)
    ctx->pc = 0x1398d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x1398d4: 0x8c8d0008  lw          $t5, 0x8($a0)
    ctx->pc = 0x1398d4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1398d8: 0xb3aa0057  sdl         $t2, 0x57($sp)
    ctx->pc = 0x1398d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1398dc: 0xb7aa0050  sdr         $t2, 0x50($sp)
    ctx->pc = 0x1398dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1398e0: 0xafad0058  sw          $t5, 0x58($sp)
    ctx->pc = 0x1398e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 13));
    // 0x1398e4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1398e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1398e8: 0x68700007  ldl         $s0, 0x7($v1)
    ctx->pc = 0x1398e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem << shift)); }
    // 0x1398ec: 0x6c700000  ldr         $s0, 0x0($v1)
    ctx->pc = 0x1398ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem >> shift)); }
    // 0x1398f0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1398f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1398f4: 0xb0900007  sdl         $s0, 0x7($a0)
    ctx->pc = 0x1398f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1398f8: 0xb4900000  sdr         $s0, 0x0($a0)
    ctx->pc = 0x1398f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1398fc: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x1398fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x139900: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x139900u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x139904: 0x6ba90057  ldl         $t1, 0x57($sp)
    ctx->pc = 0x139904u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x139908: 0x6fa90050  ldr         $t1, 0x50($sp)
    ctx->pc = 0x139908u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x13990c: 0x8faa0058  lw          $t2, 0x58($sp)
    ctx->pc = 0x13990cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x139910: 0xb0690007  sdl         $t1, 0x7($v1)
    ctx->pc = 0x139910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139914: 0xb4690000  sdr         $t1, 0x0($v1)
    ctx->pc = 0x139914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139918: 0xac6a0008  sw          $t2, 0x8($v1)
    ctx->pc = 0x139918u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 10));
    // 0x13991c: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x13991Cu;
    {
        const bool branch_taken_0x13991c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x139920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13991Cu;
            // 0x139920: 0x8d02f400  lw          $v0, -0xC00($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294964224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13991c) {
            ctx->pc = 0x139930u;
            goto label_139930;
        }
    }
    ctx->pc = 0x139924u;
    // 0x139924: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x139924u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x139928: 0x5440ffc1  bnel        $v0, $zero, . + 4 + (-0x3F << 2)
    ctx->pc = 0x139928u;
    {
        const bool branch_taken_0x139928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x139928) {
            ctx->pc = 0x13992Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x139928u;
            // 0x13992c: 0x3c080033  lui         $t0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x139830u;
            runtime->cooperativeGuestYield();
            goto label_139830;
        }
    }
    ctx->pc = 0x139930u;
label_139930:
    // 0x139930: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x139930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_139934:
    // 0x139934: 0x104000b3  beqz        $v0, . + 4 + (0xB3 << 2)
    ctx->pc = 0x139934u;
    {
        const bool branch_taken_0x139934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x139938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139934u;
            // 0x139938: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139934) {
            ctx->pc = 0x139C04u;
            goto label_139c04;
        }
    }
    ctx->pc = 0x13993Cu;
    // 0x13993c: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x13993Cu;
    {
        const bool branch_taken_0x13993c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x139940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13993Cu;
            // 0x139940: 0x8e220044  lw          $v0, 0x44($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13993c) {
            ctx->pc = 0x139958u;
            goto label_139958;
        }
    }
    ctx->pc = 0x139944u;
    // 0x139944: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x139944u;
    {
        const bool branch_taken_0x139944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x139948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139944u;
            // 0x139948: 0x97a30006  lhu         $v1, 0x6($sp) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139944) {
            ctx->pc = 0x139960u;
            goto label_139960;
        }
    }
    ctx->pc = 0x13994Cu;
    // 0x13994c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13994Cu;
    {
        const bool branch_taken_0x13994c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13994Cu;
            // 0x139950: 0x8e220070  lw          $v0, 0x70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13994c) {
            ctx->pc = 0x139970u;
            goto label_139970;
        }
    }
    ctx->pc = 0x139954u;
    // 0x139954: 0x0  nop
    ctx->pc = 0x139954u;
    // NOP
label_139958:
    // 0x139958: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x139958u;
    {
        const bool branch_taken_0x139958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13995Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139958u;
            // 0x13995c: 0x97a30006  lhu         $v1, 0x6($sp) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139958) {
            ctx->pc = 0x139968u;
            goto label_139968;
        }
    }
    ctx->pc = 0x139960u;
label_139960:
    // 0x139960: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x139960u;
    {
        const bool branch_taken_0x139960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139960u;
            // 0x139964: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139960) {
            ctx->pc = 0x139988u;
            goto label_139988;
        }
    }
    ctx->pc = 0x139968u;
label_139968:
    // 0x139968: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x139968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x13996c: 0x0  nop
    ctx->pc = 0x13996cu;
    // NOP
label_139970:
    // 0x139970: 0x8e240048  lw          $a0, 0x48($s1)
    ctx->pc = 0x139970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x139974: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x139974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x139978: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x139978u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13997c: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x13997cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x139980: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x139980u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x139984: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x139984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_139988:
    // 0x139988: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x139988u;
    {
        const bool branch_taken_0x139988 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x13998Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139988u;
            // 0x13998c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139988) {
            ctx->pc = 0x1399B0u;
            goto label_1399b0;
        }
    }
    ctx->pc = 0x139990u;
    // 0x139990: 0x8c42bcfc  lw          $v0, -0x4304($v0)
    ctx->pc = 0x139990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950140)));
    // 0x139994: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x139994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x139998: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x139998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x13999c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13999cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1399a0: 0x8c63f174  lw          $v1, -0xE8C($v1)
    ctx->pc = 0x1399a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963572)));
    // 0x1399a4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1399a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1399a8: 0x5440ff80  bnel        $v0, $zero, . + 4 + (-0x80 << 2)
    ctx->pc = 0x1399A8u;
    {
        const bool branch_taken_0x1399a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1399a8) {
            ctx->pc = 0x1399ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1399A8u;
            // 0x1399ac: 0x3c060033  lui         $a2, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1397ACu;
            runtime->cooperativeGuestYield();
            goto label_1397ac;
        }
    }
    ctx->pc = 0x1399B0u;
label_1399b0:
    // 0x1399b0: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x1399b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1399b4: 0x440f0000  mfc1        $t7, $f0
    ctx->pc = 0x1399b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 15, bits); }
    // 0x1399b8: 0x48af1000  qmtc2.ni    $t7, $vf2
    ctx->pc = 0x1399b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 15));
    // 0x1399bc: 0xdba100a0  lqc2        $vf1, 0xA0($sp)
    ctx->pc = 0x1399bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1399c0: 0x4be20858  vmulx.xyzw  $vf1, $vf1, $vf2x
    ctx->pc = 0x1399c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1399c4: 0xdba200c0  lqc2        $vf2, 0xC0($sp)
    ctx->pc = 0x1399c4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1399c8: 0x4be11128  vadd.xyzw   $vf4, $vf2, $vf1
    ctx->pc = 0x1399c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x1399cc: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x1399CCu;
    {
        const bool branch_taken_0x1399cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1399D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1399CCu;
            // 0x1399d0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1399cc) {
            ctx->pc = 0x1399F0u;
            goto label_1399f0;
        }
    }
    ctx->pc = 0x1399D4u;
    // 0x1399d4: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x1399d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1399d8: 0x97a30004  lhu         $v1, 0x4($sp)
    ctx->pc = 0x1399d8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1399dc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1399dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1399e0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x1399e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1399e4: 0x5444002b  bnel        $v0, $a0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1399E4u;
    {
        const bool branch_taken_0x1399e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1399e4) {
            ctx->pc = 0x1399E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1399E4u;
            // 0x1399e8: 0x90640000  lbu         $a0, 0x0($v1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x139A94u;
            goto label_139a94;
        }
    }
    ctx->pc = 0x1399ECu;
    // 0x1399ec: 0x0  nop
    ctx->pc = 0x1399ecu;
    // NOP
label_1399f0:
    // 0x1399f0: 0x97a20006  lhu         $v0, 0x6($sp)
    ctx->pc = 0x1399f0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 6)));
    // 0x1399f4: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x1399f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x1399f8: 0x24647790  addiu       $a0, $v1, 0x7790
    ctx->pc = 0x1399f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 30608));
    // 0x1399fc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1399fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x139a00: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x139a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x139a04: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x139a04u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x139a08: 0x4be220ac  vsub.xyzw   $vf2, $vf4, $vf2
    ctx->pc = 0x139a08u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x139a0c: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x139a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x139a10: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x139a10u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x139a14: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x139a14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x139a18: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x139a18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x139a1c: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x139a1cu;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x139a20: 0x4a0003bf  vwaitq
    ctx->pc = 0x139a20u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x139a24: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x139a24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x139a28: 0x4a0002ff  vnop
    ctx->pc = 0x139a28u;
    // NOP operation, no action needed for VU0
    // 0x139a2c: 0x4a0002ff  vnop
    ctx->pc = 0x139a2cu;
    // NOP operation, no action needed for VU0
    // 0x139a30: 0xf8820010  sqc2        $vf2, 0x10($a0)
    ctx->pc = 0x139a30u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x139a34: 0xfba20060  sqc2        $vf2, 0x60($sp)
    ctx->pc = 0x139a34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x139a38: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x139a38u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x139a3c: 0xf8820010  sqc2        $vf2, 0x10($a0)
    ctx->pc = 0x139a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x139a40: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x139a40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139a44: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x139a44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139a48: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
    ctx->pc = 0x139A48u;
    {
        const bool branch_taken_0x139a48 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x139A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139A48u;
            // 0x139a4c: 0xe4a00020  swc1        $f0, 0x20($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x139a48) {
            ctx->pc = 0x139A68u;
            goto label_139a68;
        }
    }
    ctx->pc = 0x139A50u;
    // 0x139a50: 0x97a20004  lhu         $v0, 0x4($sp)
    ctx->pc = 0x139a50u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x139a54: 0x8e230064  lw          $v1, 0x64($s1)
    ctx->pc = 0x139a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x139a58: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x139a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x139a5c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x139a5cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x139a60: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x139A60u;
    {
        const bool branch_taken_0x139a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139A60u;
            // 0x139a64: 0xa4a20034  sh          $v0, 0x34($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 52), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139a60) {
            ctx->pc = 0x139A7Cu;
            goto label_139a7c;
        }
    }
    ctx->pc = 0x139A68u;
label_139a68:
    // 0x139a68: 0x97a20004  lhu         $v0, 0x4($sp)
    ctx->pc = 0x139a68u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x139a6c: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x139a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x139a70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x139a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x139a74: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x139a74u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x139a78: 0xa4820034  sh          $v0, 0x34($a0)
    ctx->pc = 0x139a78u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 52), (uint16_t)GPR_U32(ctx, 2));
label_139a7c:
    // 0x139a7c: 0x24e47790  addiu       $a0, $a3, 0x7790
    ctx->pc = 0x139a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 30608));
    // 0x139a80: 0x1240004c  beqz        $s2, . + 4 + (0x4C << 2)
    ctx->pc = 0x139A80u;
    {
        const bool branch_taken_0x139a80 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x139A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139A80u;
            // 0x139a84: 0xac86002c  sw          $a2, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139a80) {
            ctx->pc = 0x139BB4u;
            goto label_139bb4;
        }
    }
    ctx->pc = 0x139A88u;
    // 0x139a88: 0x97a30004  lhu         $v1, 0x4($sp)
    ctx->pc = 0x139a88u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x139a8c: 0x1000004b  b           . + 4 + (0x4B << 2)
    ctx->pc = 0x139A8Cu;
    {
        const bool branch_taken_0x139a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139A8Cu;
            // 0x139a90: 0x8e220068  lw          $v0, 0x68($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139a8c) {
            ctx->pc = 0x139BBCu;
            goto label_139bbc;
        }
    }
    ctx->pc = 0x139A94u;
label_139a94:
    // 0x139a94: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x139a94u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139a98: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x139A98u;
    {
        const bool branch_taken_0x139a98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x139A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139A98u;
            // 0x139a9c: 0x97a70008  lhu         $a3, 0x8($sp) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139a98) {
            ctx->pc = 0x139B08u;
            goto label_139b08;
        }
    }
    ctx->pc = 0x139AA0u;
    // 0x139aa0: 0x97a20006  lhu         $v0, 0x6($sp)
    ctx->pc = 0x139aa0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 6)));
    // 0x139aa4: 0x0  nop
    ctx->pc = 0x139aa4u;
    // NOP
label_139aa8:
    // 0x139aa8: 0x10e20011  beq         $a3, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x139AA8u;
    {
        const bool branch_taken_0x139aa8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x139AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139AA8u;
            // 0x139aac: 0x71100  sll         $v0, $a3, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139aa8) {
            ctx->pc = 0x139AF0u;
            goto label_139af0;
        }
    }
    ctx->pc = 0x139AB0u;
    // 0x139ab0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x139ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x139ab4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x139ab4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x139ab8: 0x4be1206a  vmul.xyzw   $vf1, $vf4, $vf1
    ctx->pc = 0x139ab8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x139abc: 0x4b0108c1  vaddy.x     $vf3, $vf1, $vf1y
    ctx->pc = 0x139abcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x139ac0: 0x4a210842  vaddz.w     $vf1, $vf1, $vf1z
    ctx->pc = 0x139ac0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x139ac4: 0x3c013a83  lui         $at, 0x3A83
    ctx->pc = 0x139ac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14979 << 16));
    // 0x139ac8: 0x3421126f  ori         $at, $at, 0x126F
    ctx->pc = 0x139ac8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4719);
    // 0x139acc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x139accu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x139ad0: 0x4b011883  vaddw.x     $vf2, $vf3, $vf1w
    ctx->pc = 0x139ad0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x139ad4: 0xfba30070  sqc2        $vf3, 0x70($sp)
    ctx->pc = 0x139ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x139ad8: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x139ad8u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x139adc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x139adcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x139ae0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x139ae0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x139ae4: 0x0  nop
    ctx->pc = 0x139ae4u;
    // NOP
    // 0x139ae8: 0x4501ff2f  bc1t        . + 4 + (-0xD1 << 2)
    ctx->pc = 0x139AE8u;
    {
        const bool branch_taken_0x139ae8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x139AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139AE8u;
            // 0x139aec: 0xfba10080  sqc2        $vf1, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139ae8) {
            ctx->pc = 0x1397A8u;
            runtime->cooperativeGuestYield();
            goto label_1397a8;
        }
    }
    ctx->pc = 0x139AF0u;
label_139af0:
    // 0x139af0: 0x24e20001  addiu       $v0, $a3, 0x1
    ctx->pc = 0x139af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x139af4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x139af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x139af8: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x139af8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x139afc: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x139afcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x139b00: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x139B00u;
    {
        const bool branch_taken_0x139b00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x139B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139B00u;
            // 0x139b04: 0x97a20006  lhu         $v0, 0x6($sp) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139b00) {
            ctx->pc = 0x139AA8u;
            runtime->cooperativeGuestYield();
            goto label_139aa8;
        }
    }
    ctx->pc = 0x139B08u;
label_139b08:
    // 0x139b08: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x139b08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x139b0c: 0x97a20006  lhu         $v0, 0x6($sp)
    ctx->pc = 0x139b0cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 6)));
    // 0x139b10: 0x24647790  addiu       $a0, $v1, 0x7790
    ctx->pc = 0x139b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 30608));
    // 0x139b14: 0xf8840000  sqc2        $vf4, 0x0($a0)
    ctx->pc = 0x139b14u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x139b18: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x139b18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x139b1c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x139b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x139b20: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x139b20u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x139b24: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x139b24u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x139b28: 0xf8820010  sqc2        $vf2, 0x10($a0)
    ctx->pc = 0x139b28u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x139b2c: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x139b2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x139b30: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x139b30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x139b34: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x139b34u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x139b38: 0x4a0003bf  vwaitq
    ctx->pc = 0x139b38u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x139b3c: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x139b3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x139b40: 0x4a0002ff  vnop
    ctx->pc = 0x139b40u;
    // NOP operation, no action needed for VU0
    // 0x139b44: 0x4a0002ff  vnop
    ctx->pc = 0x139b44u;
    // NOP operation, no action needed for VU0
    // 0x139b48: 0xf8820010  sqc2        $vf2, 0x10($a0)
    ctx->pc = 0x139b48u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x139b4c: 0xfba20090  sqc2        $vf2, 0x90($sp)
    ctx->pc = 0x139b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x139b50: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x139b50u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x139b54: 0xf8820010  sqc2        $vf2, 0x10($a0)
    ctx->pc = 0x139b54u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x139b58: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x139b58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139b5c: 0xc7a00000  lwc1        $f0, 0x0($sp)
    ctx->pc = 0x139b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x139b60: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x139b60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139b64: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
    ctx->pc = 0x139B64u;
    {
        const bool branch_taken_0x139b64 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x139B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139B64u;
            // 0x139b68: 0xe4a00020  swc1        $f0, 0x20($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x139b64) {
            ctx->pc = 0x139B88u;
            goto label_139b88;
        }
    }
    ctx->pc = 0x139B6Cu;
    // 0x139b6c: 0x97a20004  lhu         $v0, 0x4($sp)
    ctx->pc = 0x139b6cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x139b70: 0x8e230064  lw          $v1, 0x64($s1)
    ctx->pc = 0x139b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x139b74: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x139b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x139b78: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x139b78u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x139b7c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x139B7Cu;
    {
        const bool branch_taken_0x139b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139B7Cu;
            // 0x139b80: 0xa4a20034  sh          $v0, 0x34($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 52), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139b7c) {
            ctx->pc = 0x139B9Cu;
            goto label_139b9c;
        }
    }
    ctx->pc = 0x139B84u;
    // 0x139b84: 0x0  nop
    ctx->pc = 0x139b84u;
    // NOP
label_139b88:
    // 0x139b88: 0x97a20004  lhu         $v0, 0x4($sp)
    ctx->pc = 0x139b88u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x139b8c: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x139b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x139b90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x139b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x139b94: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x139b94u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x139b98: 0xa4820034  sh          $v0, 0x34($a0)
    ctx->pc = 0x139b98u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 52), (uint16_t)GPR_U32(ctx, 2));
label_139b9c:
    // 0x139b9c: 0x24e47790  addiu       $a0, $a3, 0x7790
    ctx->pc = 0x139b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 30608));
    // 0x139ba0: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x139BA0u;
    {
        const bool branch_taken_0x139ba0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x139BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139BA0u;
            // 0x139ba4: 0xac86002c  sw          $a2, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139ba0) {
            ctx->pc = 0x139BB4u;
            goto label_139bb4;
        }
    }
    ctx->pc = 0x139BA8u;
    // 0x139ba8: 0x97a30004  lhu         $v1, 0x4($sp)
    ctx->pc = 0x139ba8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x139bac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x139BACu;
    {
        const bool branch_taken_0x139bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139BACu;
            // 0x139bb0: 0x8e220068  lw          $v0, 0x68($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139bac) {
            ctx->pc = 0x139BBCu;
            goto label_139bbc;
        }
    }
    ctx->pc = 0x139BB4u;
label_139bb4:
    // 0x139bb4: 0x97a30004  lhu         $v1, 0x4($sp)
    ctx->pc = 0x139bb4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x139bb8: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x139bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_139bbc:
    // 0x139bbc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x139bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x139bc0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x139bc0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x139bc4: 0x12a0000c  beqz        $s5, . + 4 + (0xC << 2)
    ctx->pc = 0x139BC4u;
    {
        const bool branch_taken_0x139bc4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x139BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139BC4u;
            // 0x139bc8: 0xac820038  sw          $v0, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139bc4) {
            ctx->pc = 0x139BF8u;
            goto label_139bf8;
        }
    }
    ctx->pc = 0x139BCCu;
    // 0x139bcc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x139bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x139bd0: 0x8c42f178  lw          $v0, -0xE88($v0)
    ctx->pc = 0x139bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963576)));
    // 0x139bd4: 0x40f809  jalr        $v0
    ctx->pc = 0x139BD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x139BDCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x139BDCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1390F8u: goto label_1390f8;
            case 0x139114u: goto label_139114;
            case 0x139164u: goto label_139164;
            case 0x139168u: goto label_139168;
            case 0x13918Cu: goto label_13918c;
            case 0x1391DCu: goto label_1391dc;
            case 0x1391F4u: goto label_1391f4;
            case 0x13920Cu: goto label_13920c;
            case 0x139340u: goto label_139340;
            case 0x139344u: goto label_139344;
            case 0x139350u: goto label_139350;
            case 0x139390u: goto label_139390;
            case 0x1393ACu: goto label_1393ac;
            case 0x1393B0u: goto label_1393b0;
            case 0x1393B8u: goto label_1393b8;
            case 0x139408u: goto label_139408;
            case 0x139418u: goto label_139418;
            case 0x139434u: goto label_139434;
            case 0x139568u: goto label_139568;
            case 0x1395B4u: goto label_1395b4;
            case 0x1395E4u: goto label_1395e4;
            case 0x139600u: goto label_139600;
            case 0x1396A0u: goto label_1396a0;
            case 0x1396A4u: goto label_1396a4;
            case 0x1396C0u: goto label_1396c0;
            case 0x139718u: goto label_139718;
            case 0x139764u: goto label_139764;
            case 0x13978Cu: goto label_13978c;
            case 0x139790u: goto label_139790;
            case 0x139798u: goto label_139798;
            case 0x13979Cu: goto label_13979c;
            case 0x1397A8u: goto label_1397a8;
            case 0x1397ACu: goto label_1397ac;
            case 0x139830u: goto label_139830;
            case 0x139884u: goto label_139884;
            case 0x13988Cu: goto label_13988c;
            case 0x139930u: goto label_139930;
            case 0x139934u: goto label_139934;
            case 0x139958u: goto label_139958;
            case 0x139960u: goto label_139960;
            case 0x139968u: goto label_139968;
            case 0x139970u: goto label_139970;
            case 0x139988u: goto label_139988;
            case 0x1399B0u: goto label_1399b0;
            case 0x1399F0u: goto label_1399f0;
            case 0x139A68u: goto label_139a68;
            case 0x139A7Cu: goto label_139a7c;
            case 0x139A94u: goto label_139a94;
            case 0x139AA8u: goto label_139aa8;
            case 0x139AF0u: goto label_139af0;
            case 0x139B08u: goto label_139b08;
            case 0x139B88u: goto label_139b88;
            case 0x139B9Cu: goto label_139b9c;
            case 0x139BB4u: goto label_139bb4;
            case 0x139BBCu: goto label_139bbc;
            case 0x139BF8u: goto label_139bf8;
            case 0x139C00u: goto label_139c00;
            case 0x139C04u: goto label_139c04;
            case 0x139C08u: goto label_139c08;
            case 0x139C0Cu: goto label_139c0c;
            case 0x139CB8u: goto label_139cb8;
            case 0x139CD4u: goto label_139cd4;
            case 0x139CD8u: goto label_139cd8;
            case 0x139CE8u: goto label_139ce8;
            case 0x139D38u: goto label_139d38;
            case 0x139DF8u: goto label_139df8;
            case 0x139E44u: goto label_139e44;
            case 0x139E6Cu: goto label_139e6c;
            case 0x139E78u: goto label_139e78;
            case 0x139E7Cu: goto label_139e7c;
            case 0x139E88u: goto label_139e88;
            case 0x139E8Cu: goto label_139e8c;
            case 0x139F10u: goto label_139f10;
            case 0x139F64u: goto label_139f64;
            case 0x139F6Cu: goto label_139f6c;
            case 0x13A010u: goto label_13a010;
            case 0x13A014u: goto label_13a014;
            case 0x13A030u: goto label_13a030;
            case 0x13A050u: goto label_13a050;
            case 0x13A078u: goto label_13a078;
            case 0x13A168u: goto label_13a168;
            case 0x13A170u: goto label_13a170;
            case 0x13A174u: goto label_13a174;
            case 0x13A208u: goto label_13a208;
            case 0x13A20Cu: goto label_13a20c;
            case 0x13A218u: goto label_13a218;
            case 0x13A250u: goto label_13a250;
            case 0x13A270u: goto label_13a270;
            case 0x13A280u: goto label_13a280;
            case 0x13A2C8u: goto label_13a2c8;
            case 0x13A2ECu: goto label_13a2ec;
            case 0x13A300u: goto label_13a300;
            case 0x13A318u: goto label_13a318;
            case 0x13A340u: goto label_13a340;
            case 0x13A350u: goto label_13a350;
            case 0x13A3A0u: goto label_13a3a0;
            case 0x13A3E8u: goto label_13a3e8;
            case 0x13A3F8u: goto label_13a3f8;
            case 0x13A450u: goto label_13a450;
            case 0x13A470u: goto label_13a470;
            case 0x13A474u: goto label_13a474;
            case 0x13A4A8u: goto label_13a4a8;
            case 0x13A4B8u: goto label_13a4b8;
            case 0x13A4CCu: goto label_13a4cc;
            case 0x13A4D0u: goto label_13a4d0;
            case 0x13A50Cu: goto label_13a50c;
            case 0x13A514u: goto label_13a514;
            case 0x13A518u: goto label_13a518;
            case 0x13A51Cu: goto label_13a51c;
            case 0x13A534u: goto label_13a534;
            case 0x13A538u: goto label_13a538;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x139BDCu; }
            if (ctx->pc != 0x139BDCu) { return; }
        }
        }
    }
    ctx->pc = 0x139BDCu;
    // 0x139bdc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x139bdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139be0: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x139be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x139be4: 0x1082fef1  beq         $a0, $v0, . + 4 + (-0x10F << 2)
    ctx->pc = 0x139BE4u;
    {
        const bool branch_taken_0x139be4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x139BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139BE4u;
            // 0x139be8: 0x3c060033  lui         $a2, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139be4) {
            ctx->pc = 0x1397ACu;
            runtime->cooperativeGuestYield();
            goto label_1397ac;
        }
    }
    ctx->pc = 0x139BECu;
    // 0x139bec: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x139becu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x139bf0: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x139BF0u;
    {
        const bool branch_taken_0x139bf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x139BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139BF0u;
            // 0x139bf4: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139bf0) {
            ctx->pc = 0x139C04u;
            goto label_139c04;
        }
    }
    ctx->pc = 0x139BF8u;
label_139bf8:
    // 0x139bf8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x139BF8u;
    {
        const bool branch_taken_0x139bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139BF8u;
            // 0x139bfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139bf8) {
            ctx->pc = 0x139C04u;
            goto label_139c04;
        }
    }
    ctx->pc = 0x139C00u;
label_139c00:
    // 0x139c00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x139c00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_139c04:
    // 0x139c04: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x139c04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
label_139c08:
    // 0x139c08: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x139c08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
label_139c0c:
    // 0x139c0c: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x139c0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x139c10: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x139c10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x139c14: 0x7bb400f0  lq          $s4, 0xF0($sp)
    ctx->pc = 0x139c14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x139c18: 0x7bb500e0  lq          $s5, 0xE0($sp)
    ctx->pc = 0x139c18u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x139c1c: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x139c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x139c20: 0x3e00008  jr          $ra
    ctx->pc = 0x139C20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x139C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139C20u;
            // 0x139c24: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1390F8u: goto label_1390f8;
            case 0x139114u: goto label_139114;
            case 0x139164u: goto label_139164;
            case 0x139168u: goto label_139168;
            case 0x13918Cu: goto label_13918c;
            case 0x1391DCu: goto label_1391dc;
            case 0x1391F4u: goto label_1391f4;
            case 0x13920Cu: goto label_13920c;
            case 0x139340u: goto label_139340;
            case 0x139344u: goto label_139344;
            case 0x139350u: goto label_139350;
            case 0x139390u: goto label_139390;
            case 0x1393ACu: goto label_1393ac;
            case 0x1393B0u: goto label_1393b0;
            case 0x1393B8u: goto label_1393b8;
            case 0x139408u: goto label_139408;
            case 0x139418u: goto label_139418;
            case 0x139434u: goto label_139434;
            case 0x139568u: goto label_139568;
            case 0x1395B4u: goto label_1395b4;
            case 0x1395E4u: goto label_1395e4;
            case 0x139600u: goto label_139600;
            case 0x1396A0u: goto label_1396a0;
            case 0x1396A4u: goto label_1396a4;
            case 0x1396C0u: goto label_1396c0;
            case 0x139718u: goto label_139718;
            case 0x139764u: goto label_139764;
            case 0x13978Cu: goto label_13978c;
            case 0x139790u: goto label_139790;
            case 0x139798u: goto label_139798;
            case 0x13979Cu: goto label_13979c;
            case 0x1397A8u: goto label_1397a8;
            case 0x1397ACu: goto label_1397ac;
            case 0x139830u: goto label_139830;
            case 0x139884u: goto label_139884;
            case 0x13988Cu: goto label_13988c;
            case 0x139930u: goto label_139930;
            case 0x139934u: goto label_139934;
            case 0x139958u: goto label_139958;
            case 0x139960u: goto label_139960;
            case 0x139968u: goto label_139968;
            case 0x139970u: goto label_139970;
            case 0x139988u: goto label_139988;
            case 0x1399B0u: goto label_1399b0;
            case 0x1399F0u: goto label_1399f0;
            case 0x139A68u: goto label_139a68;
            case 0x139A7Cu: goto label_139a7c;
            case 0x139A94u: goto label_139a94;
            case 0x139AA8u: goto label_139aa8;
            case 0x139AF0u: goto label_139af0;
            case 0x139B08u: goto label_139b08;
            case 0x139B88u: goto label_139b88;
            case 0x139B9Cu: goto label_139b9c;
            case 0x139BB4u: goto label_139bb4;
            case 0x139BBCu: goto label_139bbc;
            case 0x139BF8u: goto label_139bf8;
            case 0x139C00u: goto label_139c00;
            case 0x139C04u: goto label_139c04;
            case 0x139C08u: goto label_139c08;
            case 0x139C0Cu: goto label_139c0c;
            case 0x139CB8u: goto label_139cb8;
            case 0x139CD4u: goto label_139cd4;
            case 0x139CD8u: goto label_139cd8;
            case 0x139CE8u: goto label_139ce8;
            case 0x139D38u: goto label_139d38;
            case 0x139DF8u: goto label_139df8;
            case 0x139E44u: goto label_139e44;
            case 0x139E6Cu: goto label_139e6c;
            case 0x139E78u: goto label_139e78;
            case 0x139E7Cu: goto label_139e7c;
            case 0x139E88u: goto label_139e88;
            case 0x139E8Cu: goto label_139e8c;
            case 0x139F10u: goto label_139f10;
            case 0x139F64u: goto label_139f64;
            case 0x139F6Cu: goto label_139f6c;
            case 0x13A010u: goto label_13a010;
            case 0x13A014u: goto label_13a014;
            case 0x13A030u: goto label_13a030;
            case 0x13A050u: goto label_13a050;
            case 0x13A078u: goto label_13a078;
            case 0x13A168u: goto label_13a168;
            case 0x13A170u: goto label_13a170;
            case 0x13A174u: goto label_13a174;
            case 0x13A208u: goto label_13a208;
            case 0x13A20Cu: goto label_13a20c;
            case 0x13A218u: goto label_13a218;
            case 0x13A250u: goto label_13a250;
            case 0x13A270u: goto label_13a270;
            case 0x13A280u: goto label_13a280;
            case 0x13A2C8u: goto label_13a2c8;
            case 0x13A2ECu: goto label_13a2ec;
            case 0x13A300u: goto label_13a300;
            case 0x13A318u: goto label_13a318;
            case 0x13A340u: goto label_13a340;
            case 0x13A350u: goto label_13a350;
            case 0x13A3A0u: goto label_13a3a0;
            case 0x13A3E8u: goto label_13a3e8;
            case 0x13A3F8u: goto label_13a3f8;
            case 0x13A450u: goto label_13a450;
            case 0x13A470u: goto label_13a470;
            case 0x13A474u: goto label_13a474;
            case 0x13A4A8u: goto label_13a4a8;
            case 0x13A4B8u: goto label_13a4b8;
            case 0x13A4CCu: goto label_13a4cc;
            case 0x13A4D0u: goto label_13a4d0;
            case 0x13A50Cu: goto label_13a50c;
            case 0x13A514u: goto label_13a514;
            case 0x13A518u: goto label_13a518;
            case 0x13A51Cu: goto label_13a51c;
            case 0x13A534u: goto label_13a534;
            case 0x13A538u: goto label_13a538;
            default: break;
        }
        return;
    }
    ctx->pc = 0x139C28u;
    // 0x139c28: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x139c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x139c2c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x139c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x139c30: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x139c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x139c34: 0x2446f170  addiu       $a2, $v0, -0xE90
    ctx->pc = 0x139c34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963568));
    // 0x139c38: 0xe7b400f0  swc1        $f20, 0xF0($sp)
    ctx->pc = 0x139c38u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    // 0x139c3c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x139c3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139c40: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x139c40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x139c44: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x139c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x139c48: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x139c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x139c4c: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x139c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x139c50: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x139c50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x139c54: 0x7fa50080  sq          $a1, 0x80($sp)
    ctx->pc = 0x139c54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 5));
    // 0x139c58: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x139c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x139c5c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x139c5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x139c60: 0x14400143  bnez        $v0, . + 4 + (0x143 << 2)
    ctx->pc = 0x139C60u;
    {
        const bool branch_taken_0x139c60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x139C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139C60u;
            // 0x139c64: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x139c60) {
            ctx->pc = 0x13A170u;
            goto label_13a170;
        }
    }
    ctx->pc = 0x139C68u;
    // 0x139c68: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x139c68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x139c6c: 0x9232003c  lbu         $s2, 0x3C($s1)
    ctx->pc = 0x139c6cu;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x139c70: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x139c70u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x139c74: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x139c74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x139c78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x139c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139c7c: 0xde240080  ld          $a0, 0x80($s1)
    ctx->pc = 0x139c7cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x139c80: 0xac62f400  sw          $v0, -0xC00($v1)
    ctx->pc = 0x139c80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294964224), GPR_U32(ctx, 2));
    // 0x139c84: 0x8cd40008  lw          $s4, 0x8($a2)
    ctx->pc = 0x139c84u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x139c88: 0x10a40012  beq         $a1, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x139C88u;
    {
        const bool branch_taken_0x139c88 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x139C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139C88u;
            // 0x139c8c: 0x8e330088  lw          $s3, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139c88) {
            ctx->pc = 0x139CD4u;
            goto label_139cd4;
        }
    }
    ctx->pc = 0x139C90u;
    // 0x139c90: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x139c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x139c94: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x139c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x139c98: 0x8c500104  lw          $s0, 0x104($v0)
    ctx->pc = 0x139c98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x139c9c: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x139c9cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x139ca0: 0x50450005  beql        $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x139CA0u;
    {
        const bool branch_taken_0x139ca0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x139ca0) {
            ctx->pc = 0x139CA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x139CA0u;
            // 0x139ca4: 0xde040040  ld          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x139CB8u;
            goto label_139cb8;
        }
    }
    ctx->pc = 0x139CA8u;
    // 0x139ca8: 0xc04da64  jal         func_136990
    ctx->pc = 0x139CA8u;
    SET_GPR_U32(ctx, 31, 0x139CB0u);
    ctx->pc = 0x139CACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139CA8u;
            // 0x139cac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139CB0u; }
        if (ctx->pc != 0x139CB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139CB0u; }
        if (ctx->pc != 0x139CB0u) { return; }
    }
    ctx->pc = 0x139CB0u;
    // 0x139cb0: 0xde040040  ld          $a0, 0x40($s0)
    ctx->pc = 0x139cb0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x139cb4: 0x0  nop
    ctx->pc = 0x139cb4u;
    // NOP
label_139cb8:
    // 0x139cb8: 0xde220080  ld          $v0, 0x80($s1)
    ctx->pc = 0x139cb8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x139cbc: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x139cbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x139cc0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x139CC0u;
    {
        const bool branch_taken_0x139cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x139CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139CC0u;
            // 0x139cc4: 0x602d  daddu       $t4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139cc0) {
            ctx->pc = 0x139CD8u;
            goto label_139cd8;
        }
    }
    ctx->pc = 0x139CC8u;
    // 0x139cc8: 0xfe240080  sd          $a0, 0x80($s1)
    ctx->pc = 0x139cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 128), GPR_U64(ctx, 4));
    // 0x139ccc: 0xc04ea9a  jal         func_13AA68
    ctx->pc = 0x139CCCu;
    SET_GPR_U32(ctx, 31, 0x139CD4u);
    ctx->pc = 0x139CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x139CCCu;
            // 0x139cd0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13AA68u;
    if (runtime->hasFunction(0x13AA68u)) {
        auto targetFn = runtime->lookupFunction(0x13AA68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139CD4u; }
        if (ctx->pc != 0x139CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013AA68_0x13aa68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x139CD4u; }
        if (ctx->pc != 0x139CD4u) { return; }
    }
    ctx->pc = 0x139CD4u;
label_139cd4:
    // 0x139cd4: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x139cd4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_139cd8:
    // 0x139cd8: 0x1240006b  beqz        $s2, . + 4 + (0x6B << 2)
    ctx->pc = 0x139CD8u;
    {
        const bool branch_taken_0x139cd8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x139CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139CD8u;
            // 0x139cdc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139cd8) {
            ctx->pc = 0x139E88u;
            goto label_139e88;
        }
    }
    ctx->pc = 0x139CE0u;
    // 0x139ce0: 0x240502d  daddu       $t2, $s2, $zero
    ctx->pc = 0x139ce0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139ce4: 0x0  nop
    ctx->pc = 0x139ce4u;
    // NOP
label_139ce8:
    // 0x139ce8: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x139ce8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x139cec: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x139cecu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x139cf0: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x139cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x139cf4: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x139cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x139cf8: 0xd8630000  lqc2        $vf3, 0x0($v1)
    ctx->pc = 0x139cf8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x139cfc: 0x48231800  qmfc2.ni    $v1, $vf3
    ctx->pc = 0x139cfcu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x139d00: 0x706210a8  pceqw       $v0, $v1, $v0
    ctx->pc = 0x139d00u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x139d04: 0x700215c8  ppach       $v0, $zero, $v0
    ctx->pc = 0x139d04u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x139d08: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x139d08u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x139d0c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x139d0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x139d10: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x139d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x139d14: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x139d14u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x139d18: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x139D18u;
    {
        const bool branch_taken_0x139d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x139D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139D18u;
            // 0x139d1c: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139d18) {
            ctx->pc = 0x139D38u;
            goto label_139d38;
        }
    }
    ctx->pc = 0x139D20u;
    // 0x139d20: 0x8e220060  lw          $v0, 0x60($s1)
    ctx->pc = 0x139d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x139d24: 0x4c1021  addu        $v0, $v0, $t4
    ctx->pc = 0x139d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x139d28: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x139d28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x139d2c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x139d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x139d30: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x139D30u;
    {
        const bool branch_taken_0x139d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139D30u;
            // 0x139d34: 0x3047ffff  andi        $a3, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x139d30) {
            ctx->pc = 0x139E78u;
            goto label_139e78;
        }
    }
    ctx->pc = 0x139D38u;
label_139d38:
    // 0x139d38: 0xdba10080  lqc2        $vf1, 0x80($sp)
    ctx->pc = 0x139d38u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x139d3c: 0x4be308ac  vsub.xyzw   $vf2, $vf1, $vf3
    ctx->pc = 0x139d3cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x139d40: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x139d40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x139d44: 0x4be210aa  vmul.xyzw   $vf2, $vf2, $vf2
    ctx->pc = 0x139d44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x139d48: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x139d48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x139d4c: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x139d4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x139d50: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x139d50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x139d54: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x139d54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x139d58: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x139d58u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x139d5c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x139d5cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x139d60: 0x4a221880  vaddx.w     $vf2, $vf3, $vf2x
    ctx->pc = 0x139d60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x139d64: 0x4b020083  vaddw.x     $vf2, $vf0, $vf2w
    ctx->pc = 0x139d64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x139d68: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x139d68u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x139d6c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x139d6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x139d70: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x139d70u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x139d74: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x139d74u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x139d78: 0x0  nop
    ctx->pc = 0x139d78u;
    // NOP
    // 0x139d7c: 0x4500003f  bc1f        . + 4 + (0x3F << 2)
    ctx->pc = 0x139D7Cu;
    {
        const bool branch_taken_0x139d7c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x139D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139D7Cu;
            // 0x139d80: 0x25820001  addiu       $v0, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139d7c) {
            ctx->pc = 0x139E7Cu;
            goto label_139e7c;
        }
    }
    ctx->pc = 0x139D84u;
    // 0x139d84: 0x46010004  c1          0x10004
    ctx->pc = 0x139d84u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x139d88: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x139d88u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x139d8c: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x139d8cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x139d90: 0x4b030847  vsubw.x     $vf1, $vf1, $vf3w
    ctx->pc = 0x139d90u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x139d94: 0x48260800  qmfc2.ni    $a2, $vf1
    ctx->pc = 0x139d94u;
    SET_GPR_VEC(ctx, 6, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x139d98: 0xa7ac0004  sh          $t4, 0x4($sp)
    ctx->pc = 0x139d98u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 4), (uint16_t)GPR_U32(ctx, 12));
    // 0x139d9c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x139d9cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x139da0: 0x3a0582d  daddu       $t3, $sp, $zero
    ctx->pc = 0x139da0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139da4: 0x46140003  div.s       $f0, $f0, $f20
    ctx->pc = 0x139da4u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[20];
    // 0x139da8: 0x24e2ffff  addiu       $v0, $a3, -0x1
    ctx->pc = 0x139da8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x139dac: 0xa7a20006  sh          $v0, 0x6($sp)
    ctx->pc = 0x139dacu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x139db0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x139db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x139db4: 0x3c090033  lui         $t1, 0x33
    ctx->pc = 0x139db4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)51 << 16));
    // 0x139db8: 0x8d23f400  lw          $v1, -0xC00($t1)
    ctx->pc = 0x139db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294964224)));
    // 0x139dbc: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x139dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x139dc0: 0x3c0d0033  lui         $t5, 0x33
    ctx->pc = 0x139dc0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)51 << 16));
    // 0x139dc4: 0x46000046  mov.s       $f1, $f0
    ctx->pc = 0x139dc4u;
    ctx->f[1] = FPU_MOV_S(ctx->f[0]);
    // 0x139dc8: 0x661018  mult        $v0, $v1, $a2
    ctx->pc = 0x139dc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x139dcc: 0x25a5f408  addiu       $a1, $t5, -0xBF8
    ctx->pc = 0x139dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), 4294964232));
    // 0x139dd0: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x139dd0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139dd4: 0x32043  sra         $a0, $v1, 1
    ctx->pc = 0x139dd4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 1));
    // 0x139dd8: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x139dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x139ddc: 0x6bae0007  ldl         $t6, 0x7($sp)
    ctx->pc = 0x139ddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x139de0: 0x6fae0000  ldr         $t6, 0x0($sp)
    ctx->pc = 0x139de0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
    // 0x139de4: 0x8faf0008  lw          $t7, 0x8($sp)
    ctx->pc = 0x139de4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x139de8: 0xb04e0007  sdl         $t6, 0x7($v0)
    ctx->pc = 0x139de8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139dec: 0xb44e0000  sdr         $t6, 0x0($v0)
    ctx->pc = 0x139decu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139df0: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x139DF0u;
    {
        const bool branch_taken_0x139df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x139DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139DF0u;
            // 0x139df4: 0xac4f0008  sw          $t7, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139df0) {
            ctx->pc = 0x139E44u;
            goto label_139e44;
        }
    }
    ctx->pc = 0x139DF8u;
label_139df8:
    // 0x139df8: 0x25a5f408  addiu       $a1, $t5, -0xBF8
    ctx->pc = 0x139df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 13), 4294964232));
    // 0x139dfc: 0x1061018  mult        $v0, $t0, $a2
    ctx->pc = 0x139dfcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x139e00: 0x864018  mult        $t0, $a0, $a2
    ctx->pc = 0x139e00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x139e04: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x139e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x139e08: 0x1051821  addu        $v1, $t0, $a1
    ctx->pc = 0x139e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x139e0c: 0x686e0007  ldl         $t6, 0x7($v1)
    ctx->pc = 0x139e0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x139e10: 0x6c6e0000  ldr         $t6, 0x0($v1)
    ctx->pc = 0x139e10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
    // 0x139e14: 0x8c6f0008  lw          $t7, 0x8($v1)
    ctx->pc = 0x139e14u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x139e18: 0xb04e0007  sdl         $t6, 0x7($v0)
    ctx->pc = 0x139e18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139e1c: 0xb44e0000  sdr         $t6, 0x0($v0)
    ctx->pc = 0x139e1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139e20: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x139e20u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139e24: 0xac4f0008  sw          $t7, 0x8($v0)
    ctx->pc = 0x139e24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 15));
    // 0x139e28: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x139e28u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x139e2c: 0x69620007  ldl         $v0, 0x7($t3)
    ctx->pc = 0x139e2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x139e30: 0x6d620000  ldr         $v0, 0x0($t3)
    ctx->pc = 0x139e30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x139e34: 0x8d6e0008  lw          $t6, 0x8($t3)
    ctx->pc = 0x139e34u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x139e38: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x139e38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139e3c: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x139e3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139e40: 0xac6e0008  sw          $t6, 0x8($v1)
    ctx->pc = 0x139e40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 14));
label_139e44:
    // 0x139e44: 0x18800009  blez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x139E44u;
    {
        const bool branch_taken_0x139e44 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x139E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139E44u;
            // 0x139e48: 0x861818  mult        $v1, $a0, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x139e44) {
            ctx->pc = 0x139E6Cu;
            goto label_139e6c;
        }
    }
    ctx->pc = 0x139E4Cu;
    // 0x139e4c: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x139e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x139e50: 0x88450003  lwl         $a1, 0x3($v0)
    ctx->pc = 0x139e50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
    // 0x139e54: 0x98450000  lwr         $a1, 0x0($v0)
    ctx->pc = 0x139e54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
    // 0x139e58: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x139e58u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x139e5c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x139e5cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x139e60: 0x0  nop
    ctx->pc = 0x139e60u;
    // NOP
    // 0x139e64: 0x4502ffe4  bc1fl       . + 4 + (-0x1C << 2)
    ctx->pc = 0x139E64u;
    {
        const bool branch_taken_0x139e64 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x139e64) {
            ctx->pc = 0x139E68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x139E64u;
            // 0x139e68: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
            ctx->pc = 0x139DF8u;
            runtime->cooperativeGuestYield();
            goto label_139df8;
        }
    }
    ctx->pc = 0x139E6Cu;
label_139e6c:
    // 0x139e6c: 0x8d22f400  lw          $v0, -0xC00($t1)
    ctx->pc = 0x139e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294964224)));
    // 0x139e70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x139e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x139e74: 0xad22f400  sw          $v0, -0xC00($t1)
    ctx->pc = 0x139e74u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294964224), GPR_U32(ctx, 2));
label_139e78:
    // 0x139e78: 0x25820001  addiu       $v0, $t4, 0x1
    ctx->pc = 0x139e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_139e7c:
    // 0x139e7c: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x139e7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x139e80: 0x1540ff99  bnez        $t2, . + 4 + (-0x67 << 2)
    ctx->pc = 0x139E80u;
    {
        const bool branch_taken_0x139e80 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x139E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139E80u;
            // 0x139e84: 0x304cffff  andi        $t4, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x139e80) {
            ctx->pc = 0x139CE8u;
            runtime->cooperativeGuestYield();
            goto label_139ce8;
        }
    }
    ctx->pc = 0x139E88u;
label_139e88:
    // 0x139e88: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x139e88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
label_139e8c:
    // 0x139e8c: 0x8cc3f400  lw          $v1, -0xC00($a2)
    ctx->pc = 0x139e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294964224)));
    // 0x139e90: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x139e90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x139e94: 0x1440005f  bnez        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x139E94u;
    {
        const bool branch_taken_0x139e94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x139E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139E94u;
            // 0x139e98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139e94) {
            ctx->pc = 0x13A014u;
            goto label_13a014;
        }
    }
    ctx->pc = 0x139E9Cu;
    // 0x139e9c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x139e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x139ea0: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x139ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x139ea4: 0xacc3f400  sw          $v1, -0xC00($a2)
    ctx->pc = 0x139ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294964224), GPR_U32(ctx, 3));
    // 0x139ea8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x139ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x139eac: 0x24a9f414  addiu       $t1, $a1, -0xBEC
    ctx->pc = 0x139eacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964244));
    // 0x139eb0: 0x69260007  ldl         $a2, 0x7($t1)
    ctx->pc = 0x139eb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x139eb4: 0x6d260000  ldr         $a2, 0x0($t1)
    ctx->pc = 0x139eb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x139eb8: 0x8d270008  lw          $a3, 0x8($t1)
    ctx->pc = 0x139eb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x139ebc: 0xb3a60007  sdl         $a2, 0x7($sp)
    ctx->pc = 0x139ebcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139ec0: 0xb7a60000  sdr         $a2, 0x0($sp)
    ctx->pc = 0x139ec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139ec4: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x139ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x139ec8: 0x10620052  beq         $v1, $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x139EC8u;
    {
        const bool branch_taken_0x139ec8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x139ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139EC8u;
            // 0x139ecc: 0x24a4f414  addiu       $a0, $a1, -0xBEC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964244));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139ec8) {
            ctx->pc = 0x13A014u;
            goto label_13a014;
        }
    }
    ctx->pc = 0x139ED0u;
    // 0x139ed0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x139ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x139ed4: 0x2484fff4  addiu       $a0, $a0, -0xC
    ctx->pc = 0x139ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967284));
    // 0x139ed8: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x139ed8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x139edc: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x139edcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x139ee0: 0xc3182a  slt         $v1, $a2, $v1
    ctx->pc = 0x139ee0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x139ee4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x139ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x139ee8: 0x24b0f414  addiu       $s0, $a1, -0xBEC
    ctx->pc = 0x139ee8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964244));
    // 0x139eec: 0x684a0007  ldl         $t2, 0x7($v0)
    ctx->pc = 0x139eecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x139ef0: 0x6c4a0000  ldr         $t2, 0x0($v0)
    ctx->pc = 0x139ef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x139ef4: 0x8c4e0008  lw          $t6, 0x8($v0)
    ctx->pc = 0x139ef4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x139ef8: 0xb20a0007  sdl         $t2, 0x7($s0)
    ctx->pc = 0x139ef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139efc: 0xb60a0000  sdr         $t2, 0x0($s0)
    ctx->pc = 0x139efcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139f00: 0xae0e0008  sw          $t6, 0x8($s0)
    ctx->pc = 0x139f00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 14));
    // 0x139f04: 0x10600042  beqz        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x139F04u;
    {
        const bool branch_taken_0x139f04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x139F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139F04u;
            // 0x139f08: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139f04) {
            ctx->pc = 0x13A010u;
            goto label_13a010;
        }
    }
    ctx->pc = 0x139F0Cu;
    // 0x139f0c: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x139f0cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
label_139f10:
    // 0x139f10: 0x24c50001  addiu       $a1, $a2, 0x1
    ctx->pc = 0x139f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x139f14: 0x8d02f400  lw          $v0, -0xC00($t0)
    ctx->pc = 0x139f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294964224)));
    // 0x139f18: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x139f18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x139f1c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x139F1Cu;
    {
        const bool branch_taken_0x139f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x139F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139F1Cu;
            // 0x139f20: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139f1c) {
            ctx->pc = 0x139F64u;
            goto label_139f64;
        }
    }
    ctx->pc = 0x139F24u;
    // 0x139f24: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x139f24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x139f28: 0xc41018  mult        $v0, $a2, $a0
    ctx->pc = 0x139f28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x139f2c: 0xa44818  mult        $t1, $a1, $a0
    ctx->pc = 0x139f2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x139f30: 0x2463f408  addiu       $v1, $v1, -0xBF8
    ctx->pc = 0x139f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964232));
    // 0x139f34: 0x1232021  addu        $a0, $t1, $v1
    ctx->pc = 0x139f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x139f38: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x139f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x139f3c: 0x884a0003  lwl         $t2, 0x3($v0)
    ctx->pc = 0x139f3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 10) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 10, (int32_t)merged); }
    // 0x139f40: 0x984a0000  lwr         $t2, 0x0($v0)
    ctx->pc = 0x139f40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 10) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 10) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 10, merged64); }
    // 0x139f44: 0x888e0003  lwl         $t6, 0x3($a0)
    ctx->pc = 0x139f44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 14) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 14, (int32_t)merged); }
    // 0x139f48: 0x988e0000  lwr         $t6, 0x0($a0)
    ctx->pc = 0x139f48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 14) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 14) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 14, merged64); }
    // 0x139f4c: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x139f4cu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x139f50: 0x448e0000  mtc1        $t6, $f0
    ctx->pc = 0x139f50u;
    { uint32_t bits = GPR_U32(ctx, 14); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x139f54: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x139f54u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x139f58: 0x0  nop
    ctx->pc = 0x139f58u;
    // NOP
    // 0x139f5c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x139F5Cu;
    {
        const bool branch_taken_0x139f5c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x139F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139F5Cu;
            // 0x139f60: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139f5c) {
            ctx->pc = 0x139F6Cu;
            goto label_139f6c;
        }
    }
    ctx->pc = 0x139F64u;
label_139f64:
    // 0x139f64: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x139f64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139f68: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x139f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_139f6c:
    // 0x139f6c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x139f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x139f70: 0xe41818  mult        $v1, $a3, $a0
    ctx->pc = 0x139f70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x139f74: 0xa43018  mult        $a2, $a1, $a0
    ctx->pc = 0x139f74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x139f78: 0x2442f408  addiu       $v0, $v0, -0xBF8
    ctx->pc = 0x139f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964232));
    // 0x139f7c: 0xc22021  addu        $a0, $a2, $v0
    ctx->pc = 0x139f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x139f80: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x139f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x139f84: 0x88670003  lwl         $a3, 0x3($v1)
    ctx->pc = 0x139f84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x139f88: 0x98670000  lwr         $a3, 0x0($v1)
    ctx->pc = 0x139f88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x139f8c: 0x88890003  lwl         $t1, 0x3($a0)
    ctx->pc = 0x139f8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 9) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 9, (int32_t)merged); }
    // 0x139f90: 0x98890000  lwr         $t1, 0x0($a0)
    ctx->pc = 0x139f90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 9) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 9) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 9, merged64); }
    // 0x139f94: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x139f94u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x139f98: 0x44890000  mtc1        $t1, $f0
    ctx->pc = 0x139f98u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x139f9c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x139f9cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x139fa0: 0x0  nop
    ctx->pc = 0x139fa0u;
    // NOP
    // 0x139fa4: 0x4501001b  bc1t        . + 4 + (0x1B << 2)
    ctx->pc = 0x139FA4u;
    {
        const bool branch_taken_0x139fa4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x139FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139FA4u;
            // 0x139fa8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139fa4) {
            ctx->pc = 0x13A014u;
            goto label_13a014;
        }
    }
    ctx->pc = 0x139FACu;
    // 0x139fac: 0x688a0007  ldl         $t2, 0x7($a0)
    ctx->pc = 0x139facu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x139fb0: 0x6c8a0000  ldr         $t2, 0x0($a0)
    ctx->pc = 0x139fb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x139fb4: 0x8c8e0008  lw          $t6, 0x8($a0)
    ctx->pc = 0x139fb4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x139fb8: 0xb3aa0037  sdl         $t2, 0x37($sp)
    ctx->pc = 0x139fb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139fbc: 0xb7aa0030  sdr         $t2, 0x30($sp)
    ctx->pc = 0x139fbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139fc0: 0xafae0038  sw          $t6, 0x38($sp)
    ctx->pc = 0x139fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 14));
    // 0x139fc4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x139fc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x139fc8: 0x68720007  ldl         $s2, 0x7($v1)
    ctx->pc = 0x139fc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
    // 0x139fcc: 0x6c720000  ldr         $s2, 0x0($v1)
    ctx->pc = 0x139fccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
    // 0x139fd0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x139fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x139fd4: 0xb0920007  sdl         $s2, 0x7($a0)
    ctx->pc = 0x139fd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 18); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139fd8: 0xb4920000  sdr         $s2, 0x0($a0)
    ctx->pc = 0x139fd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 18); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139fdc: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x139fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x139fe0: 0x73040  sll         $a2, $a3, 1
    ctx->pc = 0x139fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x139fe4: 0x6ba90037  ldl         $t1, 0x37($sp)
    ctx->pc = 0x139fe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x139fe8: 0x6fa90030  ldr         $t1, 0x30($sp)
    ctx->pc = 0x139fe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x139fec: 0x8faa0038  lw          $t2, 0x38($sp)
    ctx->pc = 0x139fecu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x139ff0: 0xb0690007  sdl         $t1, 0x7($v1)
    ctx->pc = 0x139ff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139ff4: 0xb4690000  sdr         $t1, 0x0($v1)
    ctx->pc = 0x139ff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x139ff8: 0xac6a0008  sw          $t2, 0x8($v1)
    ctx->pc = 0x139ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 10));
    // 0x139ffc: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x139FFCu;
    {
        const bool branch_taken_0x139ffc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x139FFCu;
            // 0x13a000: 0x8d02f400  lw          $v0, -0xC00($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294964224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x139ffc) {
            ctx->pc = 0x13A010u;
            goto label_13a010;
        }
    }
    ctx->pc = 0x13A004u;
    // 0x13a004: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x13a004u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13a008: 0x5440ffc1  bnel        $v0, $zero, . + 4 + (-0x3F << 2)
    ctx->pc = 0x13A008u;
    {
        const bool branch_taken_0x13a008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a008) {
            ctx->pc = 0x13A00Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13A008u;
            // 0x13a00c: 0x3c080033  lui         $t0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x139F10u;
            runtime->cooperativeGuestYield();
            goto label_139f10;
        }
    }
    ctx->pc = 0x13A010u;
label_13a010:
    // 0x13a010: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13a010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13a014:
    // 0x13a014: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x13A014u;
    {
        const bool branch_taken_0x13a014 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A014u;
            // 0x13a018: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a014) {
            ctx->pc = 0x13A174u;
            goto label_13a174;
        }
    }
    ctx->pc = 0x13A01Cu;
    // 0x13a01c: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x13a01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x13a020: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13A020u;
    {
        const bool branch_taken_0x13a020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13A024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A020u;
            // 0x13a024: 0x97a30006  lhu         $v1, 0x6($sp) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a020) {
            ctx->pc = 0x13A030u;
            goto label_13a030;
        }
    }
    ctx->pc = 0x13A028u;
    // 0x13a028: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x13A028u;
    {
        const bool branch_taken_0x13a028 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A028u;
            // 0x13a02c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a028) {
            ctx->pc = 0x13A050u;
            goto label_13a050;
        }
    }
    ctx->pc = 0x13A030u;
label_13a030:
    // 0x13a030: 0x8e220058  lw          $v0, 0x58($s1)
    ctx->pc = 0x13a030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x13a034: 0x8e240048  lw          $a0, 0x48($s1)
    ctx->pc = 0x13a034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x13a038: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13a038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13a03c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x13a03cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13a040: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x13a040u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x13a044: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x13a044u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x13a048: 0x623021  addu        $a2, $v1, $v0
    ctx->pc = 0x13a048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13a04c: 0x0  nop
    ctx->pc = 0x13a04cu;
    // NOP
label_13a050:
    // 0x13a050: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x13A050u;
    {
        const bool branch_taken_0x13a050 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A050u;
            // 0x13a054: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a050) {
            ctx->pc = 0x13A078u;
            goto label_13a078;
        }
    }
    ctx->pc = 0x13A058u;
    // 0x13a058: 0x8c42bcfc  lw          $v0, -0x4304($v0)
    ctx->pc = 0x13a058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950140)));
    // 0x13a05c: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x13a05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x13a060: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x13a060u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x13a064: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13a064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13a068: 0x8c63f174  lw          $v1, -0xE8C($v1)
    ctx->pc = 0x13a068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963572)));
    // 0x13a06c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13a06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13a070: 0x5440ff86  bnel        $v0, $zero, . + 4 + (-0x7A << 2)
    ctx->pc = 0x13A070u;
    {
        const bool branch_taken_0x13a070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a070) {
            ctx->pc = 0x13A074u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13A070u;
            // 0x13a074: 0x3c060033  lui         $a2, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x139E8Cu;
            runtime->cooperativeGuestYield();
            goto label_139e8c;
        }
    }
    ctx->pc = 0x13A078u;
label_13a078:
    // 0x13a078: 0x97a20006  lhu         $v0, 0x6($sp)
    ctx->pc = 0x13a078u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 6)));
    // 0x13a07c: 0xdba10080  lqc2        $vf1, 0x80($sp)
    ctx->pc = 0x13a07cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13a080: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x13a080u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x13a084: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x13a084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x13a088: 0xd8420000  lqc2        $vf2, 0x0($v0)
    ctx->pc = 0x13a088u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13a08c: 0x4be208ec  vsub.xyzw   $vf3, $vf1, $vf2
    ctx->pc = 0x13a08cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13a090: 0xc7a20000  lwc1        $f2, 0x0($sp)
    ctx->pc = 0x13a090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x13a094: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x13a094u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x13a098: 0x4602a042  mul.s       $f1, $f20, $f2
    ctx->pc = 0x13a098u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[2]);
    // 0x13a09c: 0x24847790  addiu       $a0, $a0, 0x7790
    ctx->pc = 0x13a09cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30608));
    // 0x13a0a0: 0x44030800  mfc1        $v1, $f1
    ctx->pc = 0x13a0a0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x13a0a4: 0x48a30800  qmtc2.ni    $v1, $vf1
    ctx->pc = 0x13a0a4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x13a0a8: 0x4a211080  vaddx.w     $vf2, $vf2, $vf1x
    ctx->pc = 0x13a0a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13a0ac: 0x4b020083  vaddw.x     $vf2, $vf0, $vf2w
    ctx->pc = 0x13a0acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13a0b0: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x13a0b0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x13a0b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13a0b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13a0b8: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x13a0b8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[0];
    // 0x13a0bc: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x13a0bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x13a0c0: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x13a0c0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x13a0c4: 0x4be11858  vmulx.xyzw  $vf1, $vf3, $vf1x
    ctx->pc = 0x13a0c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13a0c8: 0xdba20080  lqc2        $vf2, 0x80($sp)
    ctx->pc = 0x13a0c8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13a0cc: 0x4be1106c  vsub.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x13a0ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13a0d0: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x13a0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13a0d4: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x13a0d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13a0d8: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x13a0d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13a0dc: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x13a0dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13a0e0: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x13a0e0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x13a0e4: 0x4a0003bf  vwaitq
    ctx->pc = 0x13a0e4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x13a0e8: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x13a0e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13a0ec: 0x4a0002ff  vnop
    ctx->pc = 0x13a0ecu;
    // NOP operation, no action needed for VU0
    // 0x13a0f0: 0x4a0002ff  vnop
    ctx->pc = 0x13a0f0u;
    // NOP operation, no action needed for VU0
    // 0x13a0f4: 0xf8830010  sqc2        $vf3, 0x10($a0)
    ctx->pc = 0x13a0f4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13a0f8: 0xfba30040  sqc2        $vf3, 0x40($sp)
    ctx->pc = 0x13a0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13a0fc: 0x4a2318ec  vsub.w      $vf3, $vf3, $vf3
    ctx->pc = 0x13a0fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13a100: 0xf8830010  sqc2        $vf3, 0x10($a0)
    ctx->pc = 0x13a100u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13a104: 0xe4820020  swc1        $f2, 0x20($a0)
    ctx->pc = 0x13a104u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x13a108: 0x97a30004  lhu         $v1, 0x4($sp)
    ctx->pc = 0x13a108u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x13a10c: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x13a10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x13a110: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x13a110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a114: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13a114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13a118: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x13a118u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13a11c: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x13a11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x13a120: 0xac86002c  sw          $a2, 0x2C($a0)
    ctx->pc = 0x13a120u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 6));
    // 0x13a124: 0xa4820034  sh          $v0, 0x34($a0)
    ctx->pc = 0x13a124u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 52), (uint16_t)GPR_U32(ctx, 2));
    // 0x13a128: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x13a128u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x13a12c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x13a12cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13a130: 0x1280000d  beqz        $s4, . + 4 + (0xD << 2)
    ctx->pc = 0x13A130u;
    {
        const bool branch_taken_0x13a130 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A130u;
            // 0x13a134: 0xac820038  sw          $v0, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a130) {
            ctx->pc = 0x13A168u;
            goto label_13a168;
        }
    }
    ctx->pc = 0x13A138u;
    // 0x13a138: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x13a138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x13a13c: 0x8c42f178  lw          $v0, -0xE88($v0)
    ctx->pc = 0x13a13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963576)));
    // 0x13a140: 0x40f809  jalr        $v0
    ctx->pc = 0x13A140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13A148u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x13A148u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1390F8u: goto label_1390f8;
            case 0x139114u: goto label_139114;
            case 0x139164u: goto label_139164;
            case 0x139168u: goto label_139168;
            case 0x13918Cu: goto label_13918c;
            case 0x1391DCu: goto label_1391dc;
            case 0x1391F4u: goto label_1391f4;
            case 0x13920Cu: goto label_13920c;
            case 0x139340u: goto label_139340;
            case 0x139344u: goto label_139344;
            case 0x139350u: goto label_139350;
            case 0x139390u: goto label_139390;
            case 0x1393ACu: goto label_1393ac;
            case 0x1393B0u: goto label_1393b0;
            case 0x1393B8u: goto label_1393b8;
            case 0x139408u: goto label_139408;
            case 0x139418u: goto label_139418;
            case 0x139434u: goto label_139434;
            case 0x139568u: goto label_139568;
            case 0x1395B4u: goto label_1395b4;
            case 0x1395E4u: goto label_1395e4;
            case 0x139600u: goto label_139600;
            case 0x1396A0u: goto label_1396a0;
            case 0x1396A4u: goto label_1396a4;
            case 0x1396C0u: goto label_1396c0;
            case 0x139718u: goto label_139718;
            case 0x139764u: goto label_139764;
            case 0x13978Cu: goto label_13978c;
            case 0x139790u: goto label_139790;
            case 0x139798u: goto label_139798;
            case 0x13979Cu: goto label_13979c;
            case 0x1397A8u: goto label_1397a8;
            case 0x1397ACu: goto label_1397ac;
            case 0x139830u: goto label_139830;
            case 0x139884u: goto label_139884;
            case 0x13988Cu: goto label_13988c;
            case 0x139930u: goto label_139930;
            case 0x139934u: goto label_139934;
            case 0x139958u: goto label_139958;
            case 0x139960u: goto label_139960;
            case 0x139968u: goto label_139968;
            case 0x139970u: goto label_139970;
            case 0x139988u: goto label_139988;
            case 0x1399B0u: goto label_1399b0;
            case 0x1399F0u: goto label_1399f0;
            case 0x139A68u: goto label_139a68;
            case 0x139A7Cu: goto label_139a7c;
            case 0x139A94u: goto label_139a94;
            case 0x139AA8u: goto label_139aa8;
            case 0x139AF0u: goto label_139af0;
            case 0x139B08u: goto label_139b08;
            case 0x139B88u: goto label_139b88;
            case 0x139B9Cu: goto label_139b9c;
            case 0x139BB4u: goto label_139bb4;
            case 0x139BBCu: goto label_139bbc;
            case 0x139BF8u: goto label_139bf8;
            case 0x139C00u: goto label_139c00;
            case 0x139C04u: goto label_139c04;
            case 0x139C08u: goto label_139c08;
            case 0x139C0Cu: goto label_139c0c;
            case 0x139CB8u: goto label_139cb8;
            case 0x139CD4u: goto label_139cd4;
            case 0x139CD8u: goto label_139cd8;
            case 0x139CE8u: goto label_139ce8;
            case 0x139D38u: goto label_139d38;
            case 0x139DF8u: goto label_139df8;
            case 0x139E44u: goto label_139e44;
            case 0x139E6Cu: goto label_139e6c;
            case 0x139E78u: goto label_139e78;
            case 0x139E7Cu: goto label_139e7c;
            case 0x139E88u: goto label_139e88;
            case 0x139E8Cu: goto label_139e8c;
            case 0x139F10u: goto label_139f10;
            case 0x139F64u: goto label_139f64;
            case 0x139F6Cu: goto label_139f6c;
            case 0x13A010u: goto label_13a010;
            case 0x13A014u: goto label_13a014;
            case 0x13A030u: goto label_13a030;
            case 0x13A050u: goto label_13a050;
            case 0x13A078u: goto label_13a078;
            case 0x13A168u: goto label_13a168;
            case 0x13A170u: goto label_13a170;
            case 0x13A174u: goto label_13a174;
            case 0x13A208u: goto label_13a208;
            case 0x13A20Cu: goto label_13a20c;
            case 0x13A218u: goto label_13a218;
            case 0x13A250u: goto label_13a250;
            case 0x13A270u: goto label_13a270;
            case 0x13A280u: goto label_13a280;
            case 0x13A2C8u: goto label_13a2c8;
            case 0x13A2ECu: goto label_13a2ec;
            case 0x13A300u: goto label_13a300;
            case 0x13A318u: goto label_13a318;
            case 0x13A340u: goto label_13a340;
            case 0x13A350u: goto label_13a350;
            case 0x13A3A0u: goto label_13a3a0;
            case 0x13A3E8u: goto label_13a3e8;
            case 0x13A3F8u: goto label_13a3f8;
            case 0x13A450u: goto label_13a450;
            case 0x13A470u: goto label_13a470;
            case 0x13A474u: goto label_13a474;
            case 0x13A4A8u: goto label_13a4a8;
            case 0x13A4B8u: goto label_13a4b8;
            case 0x13A4CCu: goto label_13a4cc;
            case 0x13A4D0u: goto label_13a4d0;
            case 0x13A50Cu: goto label_13a50c;
            case 0x13A514u: goto label_13a514;
            case 0x13A518u: goto label_13a518;
            case 0x13A51Cu: goto label_13a51c;
            case 0x13A534u: goto label_13a534;
            case 0x13A538u: goto label_13a538;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13A148u; }
            if (ctx->pc != 0x13A148u) { return; }
        }
        }
    }
    ctx->pc = 0x13A148u;
    // 0x13a148: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13a148u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a14c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x13a14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x13a150: 0x1082ff4e  beq         $a0, $v0, . + 4 + (-0xB2 << 2)
    ctx->pc = 0x13A150u;
    {
        const bool branch_taken_0x13a150 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x13A154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A150u;
            // 0x13a154: 0x3c060033  lui         $a2, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a150) {
            ctx->pc = 0x139E8Cu;
            runtime->cooperativeGuestYield();
            goto label_139e8c;
        }
    }
    ctx->pc = 0x13A158u;
    // 0x13a158: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x13a158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x13a15c: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13A15Cu;
    {
        const bool branch_taken_0x13a15c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x13A160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A15Cu;
            // 0x13a160: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a15c) {
            ctx->pc = 0x13A174u;
            goto label_13a174;
        }
    }
    ctx->pc = 0x13A164u;
    // 0x13a164: 0x0  nop
    ctx->pc = 0x13a164u;
    // NOP
label_13a168:
    // 0x13a168: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13A168u;
    {
        const bool branch_taken_0x13a168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A16Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A168u;
            // 0x13a16c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a168) {
            ctx->pc = 0x13A174u;
            goto label_13a174;
        }
    }
    ctx->pc = 0x13A170u;
label_13a170:
    // 0x13a170: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13a170u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13a174:
    // 0x13a174: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x13a174u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x13a178: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x13a178u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x13a17c: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x13a17cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x13a180: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x13a180u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x13a184: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x13a184u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x13a188: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x13a188u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13a18c: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x13a18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13a190: 0x3e00008  jr          $ra
    ctx->pc = 0x13A190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A190u;
            // 0x13a194: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1390F8u: goto label_1390f8;
            case 0x139114u: goto label_139114;
            case 0x139164u: goto label_139164;
            case 0x139168u: goto label_139168;
            case 0x13918Cu: goto label_13918c;
            case 0x1391DCu: goto label_1391dc;
            case 0x1391F4u: goto label_1391f4;
            case 0x13920Cu: goto label_13920c;
            case 0x139340u: goto label_139340;
            case 0x139344u: goto label_139344;
            case 0x139350u: goto label_139350;
            case 0x139390u: goto label_139390;
            case 0x1393ACu: goto label_1393ac;
            case 0x1393B0u: goto label_1393b0;
            case 0x1393B8u: goto label_1393b8;
            case 0x139408u: goto label_139408;
            case 0x139418u: goto label_139418;
            case 0x139434u: goto label_139434;
            case 0x139568u: goto label_139568;
            case 0x1395B4u: goto label_1395b4;
            case 0x1395E4u: goto label_1395e4;
            case 0x139600u: goto label_139600;
            case 0x1396A0u: goto label_1396a0;
            case 0x1396A4u: goto label_1396a4;
            case 0x1396C0u: goto label_1396c0;
            case 0x139718u: goto label_139718;
            case 0x139764u: goto label_139764;
            case 0x13978Cu: goto label_13978c;
            case 0x139790u: goto label_139790;
            case 0x139798u: goto label_139798;
            case 0x13979Cu: goto label_13979c;
            case 0x1397A8u: goto label_1397a8;
            case 0x1397ACu: goto label_1397ac;
            case 0x139830u: goto label_139830;
            case 0x139884u: goto label_139884;
            case 0x13988Cu: goto label_13988c;
            case 0x139930u: goto label_139930;
            case 0x139934u: goto label_139934;
            case 0x139958u: goto label_139958;
            case 0x139960u: goto label_139960;
            case 0x139968u: goto label_139968;
            case 0x139970u: goto label_139970;
            case 0x139988u: goto label_139988;
            case 0x1399B0u: goto label_1399b0;
            case 0x1399F0u: goto label_1399f0;
            case 0x139A68u: goto label_139a68;
            case 0x139A7Cu: goto label_139a7c;
            case 0x139A94u: goto label_139a94;
            case 0x139AA8u: goto label_139aa8;
            case 0x139AF0u: goto label_139af0;
            case 0x139B08u: goto label_139b08;
            case 0x139B88u: goto label_139b88;
            case 0x139B9Cu: goto label_139b9c;
            case 0x139BB4u: goto label_139bb4;
            case 0x139BBCu: goto label_139bbc;
            case 0x139BF8u: goto label_139bf8;
            case 0x139C00u: goto label_139c00;
            case 0x139C04u: goto label_139c04;
            case 0x139C08u: goto label_139c08;
            case 0x139C0Cu: goto label_139c0c;
            case 0x139CB8u: goto label_139cb8;
            case 0x139CD4u: goto label_139cd4;
            case 0x139CD8u: goto label_139cd8;
            case 0x139CE8u: goto label_139ce8;
            case 0x139D38u: goto label_139d38;
            case 0x139DF8u: goto label_139df8;
            case 0x139E44u: goto label_139e44;
            case 0x139E6Cu: goto label_139e6c;
            case 0x139E78u: goto label_139e78;
            case 0x139E7Cu: goto label_139e7c;
            case 0x139E88u: goto label_139e88;
            case 0x139E8Cu: goto label_139e8c;
            case 0x139F10u: goto label_139f10;
            case 0x139F64u: goto label_139f64;
            case 0x139F6Cu: goto label_139f6c;
            case 0x13A010u: goto label_13a010;
            case 0x13A014u: goto label_13a014;
            case 0x13A030u: goto label_13a030;
            case 0x13A050u: goto label_13a050;
            case 0x13A078u: goto label_13a078;
            case 0x13A168u: goto label_13a168;
            case 0x13A170u: goto label_13a170;
            case 0x13A174u: goto label_13a174;
            case 0x13A208u: goto label_13a208;
            case 0x13A20Cu: goto label_13a20c;
            case 0x13A218u: goto label_13a218;
            case 0x13A250u: goto label_13a250;
            case 0x13A270u: goto label_13a270;
            case 0x13A280u: goto label_13a280;
            case 0x13A2C8u: goto label_13a2c8;
            case 0x13A2ECu: goto label_13a2ec;
            case 0x13A300u: goto label_13a300;
            case 0x13A318u: goto label_13a318;
            case 0x13A340u: goto label_13a340;
            case 0x13A350u: goto label_13a350;
            case 0x13A3A0u: goto label_13a3a0;
            case 0x13A3E8u: goto label_13a3e8;
            case 0x13A3F8u: goto label_13a3f8;
            case 0x13A450u: goto label_13a450;
            case 0x13A470u: goto label_13a470;
            case 0x13A474u: goto label_13a474;
            case 0x13A4A8u: goto label_13a4a8;
            case 0x13A4B8u: goto label_13a4b8;
            case 0x13A4CCu: goto label_13a4cc;
            case 0x13A4D0u: goto label_13a4d0;
            case 0x13A50Cu: goto label_13a50c;
            case 0x13A514u: goto label_13a514;
            case 0x13A518u: goto label_13a518;
            case 0x13A51Cu: goto label_13a51c;
            case 0x13A534u: goto label_13a534;
            case 0x13A538u: goto label_13a538;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13A198u;
    // 0x13a198: 0x3e00008  jr          $ra
    ctx->pc = 0x13A198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A19Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A198u;
            // 0x13a19c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1390F8u: goto label_1390f8;
            case 0x139114u: goto label_139114;
            case 0x139164u: goto label_139164;
            case 0x139168u: goto label_139168;
            case 0x13918Cu: goto label_13918c;
            case 0x1391DCu: goto label_1391dc;
            case 0x1391F4u: goto label_1391f4;
            case 0x13920Cu: goto label_13920c;
            case 0x139340u: goto label_139340;
            case 0x139344u: goto label_139344;
            case 0x139350u: goto label_139350;
            case 0x139390u: goto label_139390;
            case 0x1393ACu: goto label_1393ac;
            case 0x1393B0u: goto label_1393b0;
            case 0x1393B8u: goto label_1393b8;
            case 0x139408u: goto label_139408;
            case 0x139418u: goto label_139418;
            case 0x139434u: goto label_139434;
            case 0x139568u: goto label_139568;
            case 0x1395B4u: goto label_1395b4;
            case 0x1395E4u: goto label_1395e4;
            case 0x139600u: goto label_139600;
            case 0x1396A0u: goto label_1396a0;
            case 0x1396A4u: goto label_1396a4;
            case 0x1396C0u: goto label_1396c0;
            case 0x139718u: goto label_139718;
            case 0x139764u: goto label_139764;
            case 0x13978Cu: goto label_13978c;
            case 0x139790u: goto label_139790;
            case 0x139798u: goto label_139798;
            case 0x13979Cu: goto label_13979c;
            case 0x1397A8u: goto label_1397a8;
            case 0x1397ACu: goto label_1397ac;
            case 0x139830u: goto label_139830;
            case 0x139884u: goto label_139884;
            case 0x13988Cu: goto label_13988c;
            case 0x139930u: goto label_139930;
            case 0x139934u: goto label_139934;
            case 0x139958u: goto label_139958;
            case 0x139960u: goto label_139960;
            case 0x139968u: goto label_139968;
            case 0x139970u: goto label_139970;
            case 0x139988u: goto label_139988;
            case 0x1399B0u: goto label_1399b0;
            case 0x1399F0u: goto label_1399f0;
            case 0x139A68u: goto label_139a68;
            case 0x139A7Cu: goto label_139a7c;
            case 0x139A94u: goto label_139a94;
            case 0x139AA8u: goto label_139aa8;
            case 0x139AF0u: goto label_139af0;
            case 0x139B08u: goto label_139b08;
            case 0x139B88u: goto label_139b88;
            case 0x139B9Cu: goto label_139b9c;
            case 0x139BB4u: goto label_139bb4;
            case 0x139BBCu: goto label_139bbc;
            case 0x139BF8u: goto label_139bf8;
            case 0x139C00u: goto label_139c00;
            case 0x139C04u: goto label_139c04;
            case 0x139C08u: goto label_139c08;
            case 0x139C0Cu: goto label_139c0c;
            case 0x139CB8u: goto label_139cb8;
            case 0x139CD4u: goto label_139cd4;
            case 0x139CD8u: goto label_139cd8;
            case 0x139CE8u: goto label_139ce8;
            case 0x139D38u: goto label_139d38;
            case 0x139DF8u: goto label_139df8;
            case 0x139E44u: goto label_139e44;
            case 0x139E6Cu: goto label_139e6c;
            case 0x139E78u: goto label_139e78;
            case 0x139E7Cu: goto label_139e7c;
            case 0x139E88u: goto label_139e88;
            case 0x139E8Cu: goto label_139e8c;
            case 0x139F10u: goto label_139f10;
            case 0x139F64u: goto label_139f64;
            case 0x139F6Cu: goto label_139f6c;
            case 0x13A010u: goto label_13a010;
            case 0x13A014u: goto label_13a014;
            case 0x13A030u: goto label_13a030;
            case 0x13A050u: goto label_13a050;
            case 0x13A078u: goto label_13a078;
            case 0x13A168u: goto label_13a168;
            case 0x13A170u: goto label_13a170;
            case 0x13A174u: goto label_13a174;
            case 0x13A208u: goto label_13a208;
            case 0x13A20Cu: goto label_13a20c;
            case 0x13A218u: goto label_13a218;
            case 0x13A250u: goto label_13a250;
            case 0x13A270u: goto label_13a270;
            case 0x13A280u: goto label_13a280;
            case 0x13A2C8u: goto label_13a2c8;
            case 0x13A2ECu: goto label_13a2ec;
            case 0x13A300u: goto label_13a300;
            case 0x13A318u: goto label_13a318;
            case 0x13A340u: goto label_13a340;
            case 0x13A350u: goto label_13a350;
            case 0x13A3A0u: goto label_13a3a0;
            case 0x13A3E8u: goto label_13a3e8;
            case 0x13A3F8u: goto label_13a3f8;
            case 0x13A450u: goto label_13a450;
            case 0x13A470u: goto label_13a470;
            case 0x13A474u: goto label_13a474;
            case 0x13A4A8u: goto label_13a4a8;
            case 0x13A4B8u: goto label_13a4b8;
            case 0x13A4CCu: goto label_13a4cc;
            case 0x13A4D0u: goto label_13a4d0;
            case 0x13A50Cu: goto label_13a50c;
            case 0x13A514u: goto label_13a514;
            case 0x13A518u: goto label_13a518;
            case 0x13A51Cu: goto label_13a51c;
            case 0x13A534u: goto label_13a534;
            case 0x13A538u: goto label_13a538;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13A1A0u;
    // 0x13a1a0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x13a1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x13a1a4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x13a1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x13a1a8: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x13a1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x13a1ac: 0x2442f170  addiu       $v0, $v0, -0xE90
    ctx->pc = 0x13a1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963568));
    // 0x13a1b0: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x13a1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x13a1b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13a1b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a1b8: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x13a1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x13a1bc: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x13a1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x13a1c0: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x13a1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x13a1c4: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x13a1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x13a1c8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x13a1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x13a1cc: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x13a1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x13a1d0: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x13a1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x13a1d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x13a1d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x13a1d8: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x13a1d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x13a1dc: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x13a1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x13a1e0: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x13a1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x13a1e4: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x13a1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x13a1e8: 0x7fa50030  sq          $a1, 0x30($sp)
    ctx->pc = 0x13a1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 5));
    // 0x13a1ec: 0x3a02b  sltu        $s4, $zero, $v1
    ctx->pc = 0x13a1ecu;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x13a1f0: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x13a1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x13a1f4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x13a1f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x13a1f8: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x13A1F8u;
    {
        const bool branch_taken_0x13a1f8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A1FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A1F8u;
            // 0x13a1fc: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a1f8) {
            ctx->pc = 0x13A208u;
            goto label_13a208;
        }
    }
    ctx->pc = 0x13A200u;
    // 0x13a200: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13A200u;
    {
        const bool branch_taken_0x13a200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A200u;
            // 0x13a204: 0x923e0040  lbu         $fp, 0x40($s1) (Delay Slot)
        SET_GPR_U32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a200) {
            ctx->pc = 0x13A20Cu;
            goto label_13a20c;
        }
    }
    ctx->pc = 0x13A208u;
label_13a208:
    // 0x13a208: 0x923e003c  lbu         $fp, 0x3C($s1)
    ctx->pc = 0x13a208u;
    SET_GPR_U32(ctx, 30, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 60)));
label_13a20c:
    // 0x13a20c: 0x52800002  beql        $s4, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x13A20Cu;
    {
        const bool branch_taken_0x13a20c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x13a20c) {
            ctx->pc = 0x13A210u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13A20Cu;
            // 0x13a210: 0x8e350088  lw          $s5, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13A218u;
            goto label_13a218;
        }
    }
    ctx->pc = 0x13A214u;
    // 0x13a214: 0x8e35008c  lw          $s5, 0x8C($s1)
    ctx->pc = 0x13a214u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 140)));
label_13a218:
    // 0x13a218: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x13a218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x13a21c: 0xde230080  ld          $v1, 0x80($s1)
    ctx->pc = 0x13a21cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x13a220: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x13a220u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x13a224: 0x10a30012  beq         $a1, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x13A224u;
    {
        const bool branch_taken_0x13a224 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x13A228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A224u;
            // 0x13a228: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a224) {
            ctx->pc = 0x13A270u;
            goto label_13a270;
        }
    }
    ctx->pc = 0x13A22Cu;
    // 0x13a22c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x13a22cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x13a230: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x13a230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x13a234: 0x8c500104  lw          $s0, 0x104($v0)
    ctx->pc = 0x13a234u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x13a238: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x13a238u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x13a23c: 0x50450004  beql        $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13A23Cu;
    {
        const bool branch_taken_0x13a23c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x13a23c) {
            ctx->pc = 0x13A240u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13A23Cu;
            // 0x13a240: 0xde040040  ld          $a0, 0x40($s0) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13A250u;
            goto label_13a250;
        }
    }
    ctx->pc = 0x13A244u;
    // 0x13a244: 0xc04da64  jal         func_136990
    ctx->pc = 0x13A244u;
    SET_GPR_U32(ctx, 31, 0x13A24Cu);
    ctx->pc = 0x13A248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13A244u;
            // 0x13a248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A24Cu; }
        if (ctx->pc != 0x13A24Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A24Cu; }
        if (ctx->pc != 0x13A24Cu) { return; }
    }
    ctx->pc = 0x13A24Cu;
    // 0x13a24c: 0xde040040  ld          $a0, 0x40($s0)
    ctx->pc = 0x13a24cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 64)));
label_13a250:
    // 0x13a250: 0xde220080  ld          $v0, 0x80($s1)
    ctx->pc = 0x13a250u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x13a254: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x13a254u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x13a258: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13A258u;
    {
        const bool branch_taken_0x13a258 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A25Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A258u;
            // 0x13a25c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a258) {
            ctx->pc = 0x13A270u;
            goto label_13a270;
        }
    }
    ctx->pc = 0x13A260u;
    // 0x13a260: 0xfe240080  sd          $a0, 0x80($s1)
    ctx->pc = 0x13a260u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 128), GPR_U64(ctx, 4));
    // 0x13a264: 0xc04ea9a  jal         func_13AA68
    ctx->pc = 0x13A264u;
    SET_GPR_U32(ctx, 31, 0x13A26Cu);
    ctx->pc = 0x13A268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13A264u;
            // 0x13a268: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13AA68u;
    if (runtime->hasFunction(0x13AA68u)) {
        auto targetFn = runtime->lookupFunction(0x13AA68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A26Cu; }
        if (ctx->pc != 0x13A26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013AA68_0x13aa68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A26Cu; }
        if (ctx->pc != 0x13A26Cu) { return; }
    }
    ctx->pc = 0x13A26Cu;
    // 0x13a26c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x13a26cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13a270:
    // 0x13a270: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x13a270u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a274: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x13a274u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x13a278: 0x13c000ae  beqz        $fp, . + 4 + (0xAE << 2)
    ctx->pc = 0x13A278u;
    {
        const bool branch_taken_0x13a278 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A27Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A278u;
            // 0x13a27c: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a278) {
            ctx->pc = 0x13A534u;
            goto label_13a534;
        }
    }
    ctx->pc = 0x13A280u;
label_13a280:
    // 0x13a280: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x13a280u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13a284: 0x48360800  qmfc2.ni    $s6, $vf1
    ctx->pc = 0x13a284u;
    SET_GPR_VEC(ctx, 22, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13a288: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x13a288u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x13a28c: 0xb51021  addu        $v0, $a1, $s5
    ctx->pc = 0x13a28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    // 0x13a290: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x13a290u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13a294: 0x705610a8  pceqw       $v0, $v0, $s6
    ctx->pc = 0x13a294u;
    SET_GPR_VEC(ctx, 2, PS2_PCEQW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 22)));
    // 0x13a298: 0x700215c8  ppach       $v0, $zero, $v0
    ctx->pc = 0x13a298u;
    SET_GPR_VEC(ctx, 2, PS2_PPACH(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x13a29c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x13a29cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x13a2a0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x13a2a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x13a2a4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x13a2a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x13a2a8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x13a2a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x13a2ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13A2ACu;
    {
        const bool branch_taken_0x13a2ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A2B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A2ACu;
            // 0x13a2b0: 0x8e220060  lw          $v0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a2ac) {
            ctx->pc = 0x13A2C8u;
            goto label_13a2c8;
        }
    }
    ctx->pc = 0x13A2B4u;
    // 0x13a2b4: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x13a2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x13a2b8: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x13a2b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13a2bc: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x13A2BCu;
    {
        const bool branch_taken_0x13a2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A2C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A2BCu;
            // 0x13a2c0: 0x2021021  addu        $v0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a2bc) {
            ctx->pc = 0x13A518u;
            goto label_13a518;
        }
    }
    ctx->pc = 0x13A2C4u;
    // 0x13a2c4: 0x0  nop
    ctx->pc = 0x13a2c4u;
    // NOP
label_13a2c8:
    // 0x13a2c8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x13a2c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a2cc: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x13a2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x13a2d0: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x13A2D0u;
    {
        const bool branch_taken_0x13a2d0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A2D0u;
            // 0x13a2d4: 0x90470000  lbu         $a3, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a2d0) {
            ctx->pc = 0x13A2ECu;
            goto label_13a2ec;
        }
    }
    ctx->pc = 0x13A2D8u;
    // 0x13a2d8: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x13a2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x13a2dc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x13A2DCu;
    {
        const bool branch_taken_0x13a2dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A2E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A2DCu;
            // 0x13a2e0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a2dc) {
            ctx->pc = 0x13A318u;
            goto label_13a318;
        }
    }
    ctx->pc = 0x13A2E4u;
    // 0x13a2e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13A2E4u;
    {
        const bool branch_taken_0x13a2e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A2E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A2E4u;
            // 0x13a2e8: 0x8e220070  lw          $v0, 0x70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a2e4) {
            ctx->pc = 0x13A300u;
            goto label_13a300;
        }
    }
    ctx->pc = 0x13A2ECu;
label_13a2ec:
    // 0x13a2ec: 0x8e220044  lw          $v0, 0x44($s1)
    ctx->pc = 0x13a2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 68)));
    // 0x13a2f0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13A2F0u;
    {
        const bool branch_taken_0x13a2f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a2f0) {
            ctx->pc = 0x13A2F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13A2F0u;
            // 0x13a2f4: 0x8e220058  lw          $v0, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13A300u;
            goto label_13a300;
        }
    }
    ctx->pc = 0x13A2F8u;
    // 0x13a2f8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x13A2F8u;
    {
        const bool branch_taken_0x13a2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A2F8u;
            // 0x13a2fc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a2f8) {
            ctx->pc = 0x13A318u;
            goto label_13a318;
        }
    }
    ctx->pc = 0x13A300u;
label_13a300:
    // 0x13a300: 0x8e240048  lw          $a0, 0x48($s1)
    ctx->pc = 0x13a300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
    // 0x13a304: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x13a304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x13a308: 0x8e23004c  lw          $v1, 0x4C($s1)
    ctx->pc = 0x13a308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
    // 0x13a30c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x13a30cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13a310: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x13a310u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x13a314: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x13a314u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_13a318:
    // 0x13a318: 0x12400009  beqz        $s2, . + 4 + (0x9 << 2)
    ctx->pc = 0x13A318u;
    {
        const bool branch_taken_0x13a318 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A318u;
            // 0x13a31c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a318) {
            ctx->pc = 0x13A340u;
            goto label_13a340;
        }
    }
    ctx->pc = 0x13A320u;
    // 0x13a320: 0x8c42bcfc  lw          $v0, -0x4304($v0)
    ctx->pc = 0x13a320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950140)));
    // 0x13a324: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x13a324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x13a328: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x13a328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x13a32c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13a32cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13a330: 0x8c63f174  lw          $v1, -0xE8C($v1)
    ctx->pc = 0x13a330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963572)));
    // 0x13a334: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x13a334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x13a338: 0x14400077  bnez        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x13A338u;
    {
        const bool branch_taken_0x13a338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13A33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A338u;
            // 0x13a33c: 0x2071021  addu        $v0, $s0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a338) {
            ctx->pc = 0x13A518u;
            goto label_13a518;
        }
    }
    ctx->pc = 0x13A340u;
label_13a340:
    // 0x13a340: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x13A340u;
    {
        const bool branch_taken_0x13a340 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A340u;
            // 0x13a344: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a340) {
            ctx->pc = 0x13A350u;
            goto label_13a350;
        }
    }
    ctx->pc = 0x13A348u;
    // 0x13a348: 0x14e20027  bne         $a3, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x13A348u;
    {
        const bool branch_taken_0x13a348 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x13A34Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A348u;
            // 0x13a34c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a348) {
            ctx->pc = 0x13A3E8u;
            goto label_13a3e8;
        }
    }
    ctx->pc = 0x13A350u;
label_13a350:
    // 0x13a350: 0xb51021  addu        $v0, $a1, $s5
    ctx->pc = 0x13a350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 21)));
    // 0x13a354: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x13a354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x13a358: 0xd8440000  lqc2        $vf4, 0x0($v0)
    ctx->pc = 0x13a358u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13a35c: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x13a35cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x13a360: 0xdba20030  lqc2        $vf2, 0x30($sp)
    ctx->pc = 0x13a360u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13a364: 0x4be4106c  vsub.xyzw   $vf1, $vf2, $vf4
    ctx->pc = 0x13a364u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13a368: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x13a368u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13a36c: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x13a36cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13a370: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x13a370u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13a374: 0x4a24209b  vmulw.w     $vf2, $vf4, $vf4w
    ctx->pc = 0x13a374u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13a378: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x13a378u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13a37c: 0x4b020083  vaddw.x     $vf2, $vf0, $vf2w
    ctx->pc = 0x13a37cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13a380: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x13a380u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13a384: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x13a384u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x13a388: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13a388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13a38c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13a38cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13a390: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13a390u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13a394: 0x0  nop
    ctx->pc = 0x13a394u;
    // NOP
    // 0x13a398: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x13A398u;
    {
        const bool branch_taken_0x13a398 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x13a398) {
            ctx->pc = 0x13A39Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13A398u;
            // 0x13a39c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13A3A0u;
            goto label_13a3a0;
        }
    }
    ctx->pc = 0x13A3A0u;
label_13a3a0:
    // 0x13a3a0: 0x1060005e  beqz        $v1, . + 4 + (0x5E << 2)
    ctx->pc = 0x13A3A0u;
    {
        const bool branch_taken_0x13a3a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A3A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A3A0u;
            // 0x13a3a4: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a3a0) {
            ctx->pc = 0x13A51Cu;
            goto label_13a51c;
        }
    }
    ctx->pc = 0x13A3A8u;
    // 0x13a3a8: 0x10800032  beqz        $a0, . + 4 + (0x32 << 2)
    ctx->pc = 0x13A3A8u;
    {
        const bool branch_taken_0x13a3a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A3ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A3A8u;
            // 0x13a3ac: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a3a8) {
            ctx->pc = 0x13A474u;
            goto label_13a474;
        }
    }
    ctx->pc = 0x13A3B0u;
    // 0x13a3b0: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x13a3b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13a3b4: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x13a3b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13a3b8: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x13a3b8u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13a3bc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13a3bcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13a3c0: 0x46000004  c1          0x4
    ctx->pc = 0x13a3c0u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x13a3c4: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x13a3c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x13a3c8: 0x48a40800  qmtc2.ni    $a0, $vf1
    ctx->pc = 0x13a3c8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x13a3cc: 0x4a212044  vsubx.w     $vf1, $vf4, $vf1x
    ctx->pc = 0x13a3ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13a3d0: 0x4b010043  vaddw.x     $vf1, $vf0, $vf1w
    ctx->pc = 0x13a3d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13a3d4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x13a3d4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x13a3d8: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x13a3d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x13a3dc: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x13A3DCu;
    {
        const bool branch_taken_0x13a3dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A3E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A3DCu;
            // 0x13a3e0: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a3dc) {
            ctx->pc = 0x13A474u;
            goto label_13a474;
        }
    }
    ctx->pc = 0x13A3E4u;
    // 0x13a3e4: 0x0  nop
    ctx->pc = 0x13a3e4u;
    // NOP
label_13a3e8:
    // 0x13a3e8: 0x10e00019  beqz        $a3, . + 4 + (0x19 << 2)
    ctx->pc = 0x13A3E8u;
    {
        const bool branch_taken_0x13a3e8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A3E8u;
            // 0x13a3ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a3e8) {
            ctx->pc = 0x13A450u;
            goto label_13a450;
        }
    }
    ctx->pc = 0x13A3F0u;
    // 0x13a3f0: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x13a3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x13a3f4: 0x0  nop
    ctx->pc = 0x13a3f4u;
    // NOP
label_13a3f8:
    // 0x13a3f8: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x13a3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x13a3fc: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x13a3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x13a400: 0xdba20030  lqc2        $vf2, 0x30($sp)
    ctx->pc = 0x13a400u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13a404: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x13a404u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13a408: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x13a408u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x13a40c: 0x4be1106a  vmul.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x13a40cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13a410: 0x4b0108c1  vaddy.x     $vf3, $vf1, $vf1y
    ctx->pc = 0x13a410u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x13a414: 0x4a210842  vaddz.w     $vf1, $vf1, $vf1z
    ctx->pc = 0x13a414u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x13a418: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x13a418u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13a41c: 0x4b011883  vaddw.x     $vf2, $vf3, $vf1w
    ctx->pc = 0x13a41cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x13a420: 0xfba30000  sqc2        $vf3, 0x0($sp)
    ctx->pc = 0x13a420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13a424: 0x48231000  qmfc2.ni    $v1, $vf2
    ctx->pc = 0x13a424u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x13a428: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x13a428u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13a42c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x13a42cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x13a430: 0x0  nop
    ctx->pc = 0x13a430u;
    // NOP
    // 0x13a434: 0x45010037  bc1t        . + 4 + (0x37 << 2)
    ctx->pc = 0x13A434u;
    {
        const bool branch_taken_0x13a434 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x13A438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A434u;
            // 0x13a438: 0xfba10010  sqc2        $vf1, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a434) {
            ctx->pc = 0x13A514u;
            goto label_13a514;
        }
    }
    ctx->pc = 0x13A43Cu;
    // 0x13a43c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x13a43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x13a440: 0x87102a  slt         $v0, $a0, $a3
    ctx->pc = 0x13a440u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x13a444: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x13A444u;
    {
        const bool branch_taken_0x13a444 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13A448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A444u;
            // 0x13a448: 0x101100  sll         $v0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a444) {
            ctx->pc = 0x13A3F8u;
            runtime->cooperativeGuestYield();
            goto label_13a3f8;
        }
    }
    ctx->pc = 0x13A44Cu;
    // 0x13a44c: 0x0  nop
    ctx->pc = 0x13a44cu;
    // NOP
label_13a450:
    // 0x13a450: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x13a450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x13a454: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13A454u;
    {
        const bool branch_taken_0x13a454 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A454u;
            // 0x13a458: 0x63100  sll         $a2, $a2, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a454) {
            ctx->pc = 0x13A470u;
            goto label_13a470;
        }
    }
    ctx->pc = 0x13A45Cu;
    // 0x13a45c: 0x7ba40030  lq          $a0, 0x30($sp)
    ctx->pc = 0x13a45cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13a460: 0x2a63021  addu        $a2, $s5, $a2
    ctx->pc = 0x13a460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
    // 0x13a464: 0xc04e95c  jal         func_13A570
    ctx->pc = 0x13A464u;
    SET_GPR_U32(ctx, 31, 0x13A46Cu);
    ctx->pc = 0x13A468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13A464u;
            // 0x13a468: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13A570u;
    if (runtime->hasFunction(0x13A570u)) {
        auto targetFn = runtime->lookupFunction(0x13A570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A46Cu; }
        if (ctx->pc != 0x13A46Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13a570_0x13a758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13A46Cu; }
        if (ctx->pc != 0x13A46Cu) { return; }
    }
    ctx->pc = 0x13A46Cu;
    // 0x13a46c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x13a46cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_13a470:
    // 0x13a470: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x13a470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
label_13a474:
    // 0x13a474: 0x7ba40030  lq          $a0, 0x30($sp)
    ctx->pc = 0x13a474u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13a478: 0x24437790  addiu       $v1, $v0, 0x7790
    ctx->pc = 0x13a478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 30608));
    // 0x13a47c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x13a47cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x13a480: 0x7c760010  sq          $s6, 0x10($v1)
    ctx->pc = 0x13a480u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 22));
    // 0x13a484: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x13a484u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a488: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13a488u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a48c: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x13A48Cu;
    {
        const bool branch_taken_0x13a48c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A48Cu;
            // 0x13a490: 0xe4940020  swc1        $f20, 0x20($a0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a48c) {
            ctx->pc = 0x13A4A8u;
            goto label_13a4a8;
        }
    }
    ctx->pc = 0x13A494u;
    // 0x13a494: 0x8e220064  lw          $v0, 0x64($s1)
    ctx->pc = 0x13a494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x13a498: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x13a498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x13a49c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x13a49cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13a4a0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13A4A0u;
    {
        const bool branch_taken_0x13a4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A4A0u;
            // 0x13a4a4: 0xa4820034  sh          $v0, 0x34($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 52), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a4a0) {
            ctx->pc = 0x13A4B8u;
            goto label_13a4b8;
        }
    }
    ctx->pc = 0x13A4A8u;
label_13a4a8:
    // 0x13a4a8: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x13a4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x13a4ac: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x13a4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x13a4b0: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x13a4b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13a4b4: 0xa4620034  sh          $v0, 0x34($v1)
    ctx->pc = 0x13a4b4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 52), (uint16_t)GPR_U32(ctx, 2));
label_13a4b8:
    // 0x13a4b8: 0x24a37790  addiu       $v1, $a1, 0x7790
    ctx->pc = 0x13a4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 30608));
    // 0x13a4bc: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x13A4BCu;
    {
        const bool branch_taken_0x13a4bc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A4C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A4BCu;
            // 0x13a4c0: 0xac72002c  sw          $s2, 0x2C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a4bc) {
            ctx->pc = 0x13A4CCu;
            goto label_13a4cc;
        }
    }
    ctx->pc = 0x13A4C4u;
    // 0x13a4c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13A4C4u;
    {
        const bool branch_taken_0x13a4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A4C4u;
            // 0x13a4c8: 0x8e220068  lw          $v0, 0x68($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a4c4) {
            ctx->pc = 0x13A4D0u;
            goto label_13a4d0;
        }
    }
    ctx->pc = 0x13A4CCu;
label_13a4cc:
    // 0x13a4cc: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x13a4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_13a4d0:
    // 0x13a4d0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x13a4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x13a4d4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x13a4d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13a4d8: 0xac620038  sw          $v0, 0x38($v1)
    ctx->pc = 0x13a4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
    // 0x13a4dc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13a4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13a4e0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13A4E0u;
    {
        const bool branch_taken_0x13a4e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A4E0u;
            // 0x13a4e4: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a4e0) {
            ctx->pc = 0x13A50Cu;
            goto label_13a50c;
        }
    }
    ctx->pc = 0x13A4E8u;
    // 0x13a4e8: 0x8c42f178  lw          $v0, -0xE88($v0)
    ctx->pc = 0x13a4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963576)));
    // 0x13a4ec: 0x40f809  jalr        $v0
    ctx->pc = 0x13A4ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13A4F4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x13A4F4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1390F8u: goto label_1390f8;
            case 0x139114u: goto label_139114;
            case 0x139164u: goto label_139164;
            case 0x139168u: goto label_139168;
            case 0x13918Cu: goto label_13918c;
            case 0x1391DCu: goto label_1391dc;
            case 0x1391F4u: goto label_1391f4;
            case 0x13920Cu: goto label_13920c;
            case 0x139340u: goto label_139340;
            case 0x139344u: goto label_139344;
            case 0x139350u: goto label_139350;
            case 0x139390u: goto label_139390;
            case 0x1393ACu: goto label_1393ac;
            case 0x1393B0u: goto label_1393b0;
            case 0x1393B8u: goto label_1393b8;
            case 0x139408u: goto label_139408;
            case 0x139418u: goto label_139418;
            case 0x139434u: goto label_139434;
            case 0x139568u: goto label_139568;
            case 0x1395B4u: goto label_1395b4;
            case 0x1395E4u: goto label_1395e4;
            case 0x139600u: goto label_139600;
            case 0x1396A0u: goto label_1396a0;
            case 0x1396A4u: goto label_1396a4;
            case 0x1396C0u: goto label_1396c0;
            case 0x139718u: goto label_139718;
            case 0x139764u: goto label_139764;
            case 0x13978Cu: goto label_13978c;
            case 0x139790u: goto label_139790;
            case 0x139798u: goto label_139798;
            case 0x13979Cu: goto label_13979c;
            case 0x1397A8u: goto label_1397a8;
            case 0x1397ACu: goto label_1397ac;
            case 0x139830u: goto label_139830;
            case 0x139884u: goto label_139884;
            case 0x13988Cu: goto label_13988c;
            case 0x139930u: goto label_139930;
            case 0x139934u: goto label_139934;
            case 0x139958u: goto label_139958;
            case 0x139960u: goto label_139960;
            case 0x139968u: goto label_139968;
            case 0x139970u: goto label_139970;
            case 0x139988u: goto label_139988;
            case 0x1399B0u: goto label_1399b0;
            case 0x1399F0u: goto label_1399f0;
            case 0x139A68u: goto label_139a68;
            case 0x139A7Cu: goto label_139a7c;
            case 0x139A94u: goto label_139a94;
            case 0x139AA8u: goto label_139aa8;
            case 0x139AF0u: goto label_139af0;
            case 0x139B08u: goto label_139b08;
            case 0x139B88u: goto label_139b88;
            case 0x139B9Cu: goto label_139b9c;
            case 0x139BB4u: goto label_139bb4;
            case 0x139BBCu: goto label_139bbc;
            case 0x139BF8u: goto label_139bf8;
            case 0x139C00u: goto label_139c00;
            case 0x139C04u: goto label_139c04;
            case 0x139C08u: goto label_139c08;
            case 0x139C0Cu: goto label_139c0c;
            case 0x139CB8u: goto label_139cb8;
            case 0x139CD4u: goto label_139cd4;
            case 0x139CD8u: goto label_139cd8;
            case 0x139CE8u: goto label_139ce8;
            case 0x139D38u: goto label_139d38;
            case 0x139DF8u: goto label_139df8;
            case 0x139E44u: goto label_139e44;
            case 0x139E6Cu: goto label_139e6c;
            case 0x139E78u: goto label_139e78;
            case 0x139E7Cu: goto label_139e7c;
            case 0x139E88u: goto label_139e88;
            case 0x139E8Cu: goto label_139e8c;
            case 0x139F10u: goto label_139f10;
            case 0x139F64u: goto label_139f64;
            case 0x139F6Cu: goto label_139f6c;
            case 0x13A010u: goto label_13a010;
            case 0x13A014u: goto label_13a014;
            case 0x13A030u: goto label_13a030;
            case 0x13A050u: goto label_13a050;
            case 0x13A078u: goto label_13a078;
            case 0x13A168u: goto label_13a168;
            case 0x13A170u: goto label_13a170;
            case 0x13A174u: goto label_13a174;
            case 0x13A208u: goto label_13a208;
            case 0x13A20Cu: goto label_13a20c;
            case 0x13A218u: goto label_13a218;
            case 0x13A250u: goto label_13a250;
            case 0x13A270u: goto label_13a270;
            case 0x13A280u: goto label_13a280;
            case 0x13A2C8u: goto label_13a2c8;
            case 0x13A2ECu: goto label_13a2ec;
            case 0x13A300u: goto label_13a300;
            case 0x13A318u: goto label_13a318;
            case 0x13A340u: goto label_13a340;
            case 0x13A350u: goto label_13a350;
            case 0x13A3A0u: goto label_13a3a0;
            case 0x13A3E8u: goto label_13a3e8;
            case 0x13A3F8u: goto label_13a3f8;
            case 0x13A450u: goto label_13a450;
            case 0x13A470u: goto label_13a470;
            case 0x13A474u: goto label_13a474;
            case 0x13A4A8u: goto label_13a4a8;
            case 0x13A4B8u: goto label_13a4b8;
            case 0x13A4CCu: goto label_13a4cc;
            case 0x13A4D0u: goto label_13a4d0;
            case 0x13A50Cu: goto label_13a50c;
            case 0x13A514u: goto label_13a514;
            case 0x13A518u: goto label_13a518;
            case 0x13A51Cu: goto label_13a51c;
            case 0x13A534u: goto label_13a534;
            case 0x13A538u: goto label_13a538;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13A4F4u; }
            if (ctx->pc != 0x13A4F4u) { return; }
        }
        }
    }
    ctx->pc = 0x13A4F4u;
    // 0x13a4f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13a4f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13a4f8: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x13a4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x13a4fc: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13A4FCu;
    {
        const bool branch_taken_0x13a4fc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x13A500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A4FCu;
            // 0x13a500: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a4fc) {
            ctx->pc = 0x13A51Cu;
            goto label_13a51c;
        }
    }
    ctx->pc = 0x13A504u;
    // 0x13a504: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x13A504u;
    {
        const bool branch_taken_0x13a504 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x13A508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A504u;
            // 0x13a508: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a504) {
            ctx->pc = 0x13A538u;
            goto label_13a538;
        }
    }
    ctx->pc = 0x13A50Cu;
label_13a50c:
    // 0x13a50c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x13A50Cu;
    {
        const bool branch_taken_0x13a50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13A510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A50Cu;
            // 0x13a510: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13a50c) {
            ctx->pc = 0x13A538u;
            goto label_13a538;
        }
    }
    ctx->pc = 0x13A514u;
label_13a514:
    // 0x13a514: 0x1071021  addu        $v0, $t0, $a3
    ctx->pc = 0x13a514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_13a518:
    // 0x13a518: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x13a518u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_13a51c:
    // 0x13a51c: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x13a51cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x13a520: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x13a520u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x13a524: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x13a524u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x13a528: 0x2fe102a  slt         $v0, $s7, $fp
    ctx->pc = 0x13a528u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x13a52c: 0x1440ff54  bnez        $v0, . + 4 + (-0xAC << 2)
    ctx->pc = 0x13A52Cu;
    {
        const bool branch_taken_0x13a52c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13a52c) {
            ctx->pc = 0x13A280u;
            runtime->cooperativeGuestYield();
            goto label_13a280;
        }
    }
    ctx->pc = 0x13A534u;
label_13a534:
    // 0x13a534: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13a534u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13a538:
    // 0x13a538: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x13a538u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x13a53c: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x13a53cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x13a540: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x13a540u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x13a544: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x13a544u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x13a548: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x13a548u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x13a54c: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x13a54cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13a550: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x13a550u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13a554: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x13a554u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13a558: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x13a558u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13a55c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x13a55cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13a560: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x13a560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13a564: 0x3e00008  jr          $ra
    ctx->pc = 0x13A564u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13A568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13A564u;
            // 0x13a568: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1390F8u: goto label_1390f8;
            case 0x139114u: goto label_139114;
            case 0x139164u: goto label_139164;
            case 0x139168u: goto label_139168;
            case 0x13918Cu: goto label_13918c;
            case 0x1391DCu: goto label_1391dc;
            case 0x1391F4u: goto label_1391f4;
            case 0x13920Cu: goto label_13920c;
            case 0x139340u: goto label_139340;
            case 0x139344u: goto label_139344;
            case 0x139350u: goto label_139350;
            case 0x139390u: goto label_139390;
            case 0x1393ACu: goto label_1393ac;
            case 0x1393B0u: goto label_1393b0;
            case 0x1393B8u: goto label_1393b8;
            case 0x139408u: goto label_139408;
            case 0x139418u: goto label_139418;
            case 0x139434u: goto label_139434;
            case 0x139568u: goto label_139568;
            case 0x1395B4u: goto label_1395b4;
            case 0x1395E4u: goto label_1395e4;
            case 0x139600u: goto label_139600;
            case 0x1396A0u: goto label_1396a0;
            case 0x1396A4u: goto label_1396a4;
            case 0x1396C0u: goto label_1396c0;
            case 0x139718u: goto label_139718;
            case 0x139764u: goto label_139764;
            case 0x13978Cu: goto label_13978c;
            case 0x139790u: goto label_139790;
            case 0x139798u: goto label_139798;
            case 0x13979Cu: goto label_13979c;
            case 0x1397A8u: goto label_1397a8;
            case 0x1397ACu: goto label_1397ac;
            case 0x139830u: goto label_139830;
            case 0x139884u: goto label_139884;
            case 0x13988Cu: goto label_13988c;
            case 0x139930u: goto label_139930;
            case 0x139934u: goto label_139934;
            case 0x139958u: goto label_139958;
            case 0x139960u: goto label_139960;
            case 0x139968u: goto label_139968;
            case 0x139970u: goto label_139970;
            case 0x139988u: goto label_139988;
            case 0x1399B0u: goto label_1399b0;
            case 0x1399F0u: goto label_1399f0;
            case 0x139A68u: goto label_139a68;
            case 0x139A7Cu: goto label_139a7c;
            case 0x139A94u: goto label_139a94;
            case 0x139AA8u: goto label_139aa8;
            case 0x139AF0u: goto label_139af0;
            case 0x139B08u: goto label_139b08;
            case 0x139B88u: goto label_139b88;
            case 0x139B9Cu: goto label_139b9c;
            case 0x139BB4u: goto label_139bb4;
            case 0x139BBCu: goto label_139bbc;
            case 0x139BF8u: goto label_139bf8;
            case 0x139C00u: goto label_139c00;
            case 0x139C04u: goto label_139c04;
            case 0x139C08u: goto label_139c08;
            case 0x139C0Cu: goto label_139c0c;
            case 0x139CB8u: goto label_139cb8;
            case 0x139CD4u: goto label_139cd4;
            case 0x139CD8u: goto label_139cd8;
            case 0x139CE8u: goto label_139ce8;
            case 0x139D38u: goto label_139d38;
            case 0x139DF8u: goto label_139df8;
            case 0x139E44u: goto label_139e44;
            case 0x139E6Cu: goto label_139e6c;
            case 0x139E78u: goto label_139e78;
            case 0x139E7Cu: goto label_139e7c;
            case 0x139E88u: goto label_139e88;
            case 0x139E8Cu: goto label_139e8c;
            case 0x139F10u: goto label_139f10;
            case 0x139F64u: goto label_139f64;
            case 0x139F6Cu: goto label_139f6c;
            case 0x13A010u: goto label_13a010;
            case 0x13A014u: goto label_13a014;
            case 0x13A030u: goto label_13a030;
            case 0x13A050u: goto label_13a050;
            case 0x13A078u: goto label_13a078;
            case 0x13A168u: goto label_13a168;
            case 0x13A170u: goto label_13a170;
            case 0x13A174u: goto label_13a174;
            case 0x13A208u: goto label_13a208;
            case 0x13A20Cu: goto label_13a20c;
            case 0x13A218u: goto label_13a218;
            case 0x13A250u: goto label_13a250;
            case 0x13A270u: goto label_13a270;
            case 0x13A280u: goto label_13a280;
            case 0x13A2C8u: goto label_13a2c8;
            case 0x13A2ECu: goto label_13a2ec;
            case 0x13A300u: goto label_13a300;
            case 0x13A318u: goto label_13a318;
            case 0x13A340u: goto label_13a340;
            case 0x13A350u: goto label_13a350;
            case 0x13A3A0u: goto label_13a3a0;
            case 0x13A3E8u: goto label_13a3e8;
            case 0x13A3F8u: goto label_13a3f8;
            case 0x13A450u: goto label_13a450;
            case 0x13A470u: goto label_13a470;
            case 0x13A474u: goto label_13a474;
            case 0x13A4A8u: goto label_13a4a8;
            case 0x13A4B8u: goto label_13a4b8;
            case 0x13A4CCu: goto label_13a4cc;
            case 0x13A4D0u: goto label_13a4d0;
            case 0x13A50Cu: goto label_13a50c;
            case 0x13A514u: goto label_13a514;
            case 0x13A518u: goto label_13a518;
            case 0x13A51Cu: goto label_13a51c;
            case 0x13A534u: goto label_13a534;
            case 0x13A538u: goto label_13a538;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13A56Cu;
    // 0x13a56c: 0x0  nop
    ctx->pc = 0x13a56cu;
    // NOP
}
