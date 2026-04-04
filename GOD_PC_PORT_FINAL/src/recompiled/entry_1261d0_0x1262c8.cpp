#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1261d0
// Address: 0x1261d0 - 0x1262c8
void entry_1261d0_0x1262c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1261d0_0x1262c8");
#endif

    ctx->pc = 0x1261d0u;

    // 0x1261d0: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x1261d0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1261d4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1261d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1261d8: 0x1841023  subu        $v0, $t4, $a0
    ctx->pc = 0x1261d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
    // 0x1261dc: 0x3c0d0033  lui         $t5, 0x33
    ctx->pc = 0x1261dcu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)51 << 16));
    // 0x1261e0: 0x244601ff  addiu       $a2, $v0, 0x1FF
    ctx->pc = 0x1261e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 511));
    // 0x1261e4: 0x24095353  addiu       $t1, $zero, 0x5353
    ctx->pc = 0x1261e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 21331));
    // 0x1261e8: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x1261e8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1261ec: 0x244203fe  addiu       $v0, $v0, 0x3FE
    ctx->pc = 0x1261ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1022));
    // 0x1261f0: 0xc3100b  movn        $v0, $a2, $v1
    ctx->pc = 0x1261f0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x1261f4: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x1261f4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1261f8: 0x25243  sra         $t2, $v0, 9
    ctx->pc = 0x1261f8u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 2), 9));
    // 0x1261fc: 0x8da6f168  lw          $a2, -0xE98($t5)
    ctx->pc = 0x1261fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294963560)));
    // 0x126200: 0x3c0241ab  lui         $v0, 0x41AB
    ctx->pc = 0x126200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16811 << 16));
    // 0x126204: 0x35438000  ori         $v1, $t2, 0x8000
    ctx->pc = 0x126204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32768);
    // 0x126208: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x126208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x12620c: 0xacc90008  sw          $t1, 0x8($a2)
    ctx->pc = 0x12620cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 9));
    // 0x126210: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x126210u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x126214: 0xa0782d  daddu       $t7, $a1, $zero
    ctx->pc = 0x126214u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126218: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x126218u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x12621c: 0xe0702d  daddu       $t6, $a3, $zero
    ctx->pc = 0x12621cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x126220: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x126220u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x126224: 0x25690200  addiu       $t1, $t3, 0x200
    ctx->pc = 0x126224u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), 512));
    // 0x126228: 0x8da2f168  lw          $v0, -0xE98($t5)
    ctx->pc = 0x126228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294963560)));
    // 0x12622c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x12622cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x126230: 0x19400022  blez        $t2, . + 4 + (0x22 << 2)
    ctx->pc = 0x126230u;
    {
        const bool branch_taken_0x126230 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x126234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x126230u;
            // 0x126234: 0xada2f168  sw          $v0, -0xE98($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x126230) {
            ctx->pc = 0x1262BCu;
            goto label_1262bc;
        }
    }
    ctx->pc = 0x126238u;
label_126238:
    // 0x126238: 0x8da2f168  lw          $v0, -0xE98($t5)
    ctx->pc = 0x126238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294963560)));
    // 0x12623c: 0x25630008  addiu       $v1, $t3, 0x8
    ctx->pc = 0x12623cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 8));
    // 0x126240: 0x25e40008  addiu       $a0, $t7, 0x8
    ctx->pc = 0x126240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), 8));
    // 0x126244: 0x25260008  addiu       $a2, $t1, 0x8
    ctx->pc = 0x126244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
    // 0x126248: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x126248u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x12624c: 0x25c70008  addiu       $a3, $t6, 0x8
    ctx->pc = 0x12624cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 14), 8));
    // 0x126250: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x126250u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x126254: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x126254u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x126258: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x126258u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x12625c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x12625cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x126260: 0x8da2f168  lw          $v0, -0xE98($t5)
    ctx->pc = 0x126260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4294963560)));
    // 0x126264: 0xac4b0010  sw          $t3, 0x10($v0)
    ctx->pc = 0x126264u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 11));
    // 0x126268: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x126268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x12626c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x12626cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x126270: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x126270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x126274: 0xac6f0004  sw          $t7, 0x4($v1)
    ctx->pc = 0x126274u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 15));
    // 0x126278: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x126278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x12627c: 0xac680008  sw          $t0, 0x8($v1)
    ctx->pc = 0x12627cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 8));
    // 0x126280: 0x256b0200  addiu       $t3, $t3, 0x200
    ctx->pc = 0x126280u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 512));
    // 0x126284: 0xac460020  sw          $a2, 0x20($v0)
    ctx->pc = 0x126284u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 6));
    // 0x126288: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x126288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12628c: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x12628cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
    // 0x126290: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x126290u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x126294: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x126294u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x126298: 0xac490030  sw          $t1, 0x30($v0)
    ctx->pc = 0x126298u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 9));
    // 0x12629c: 0x25290200  addiu       $t1, $t1, 0x200
    ctx->pc = 0x12629cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 512));
    // 0x1262a0: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x1262a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1262a4: 0x189102a  slt         $v0, $t4, $t1
    ctx->pc = 0x1262a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x1262a8: 0xada5f168  sw          $a1, -0xE98($t5)
    ctx->pc = 0x1262a8u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4294963560), GPR_U32(ctx, 5));
    // 0x1262ac: 0x182480b  movn        $t1, $t4, $v0
    ctx->pc = 0x1262acu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 12));
    // 0x1262b0: 0xac6e0004  sw          $t6, 0x4($v1)
    ctx->pc = 0x1262b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 14));
    // 0x1262b4: 0x1540ffe0  bnez        $t2, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1262B4u;
    {
        const bool branch_taken_0x1262b4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x1262B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1262B4u;
            // 0x1262b8: 0xac680008  sw          $t0, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1262b4) {
            ctx->pc = 0x126238u;
            runtime->cooperativeGuestYield();
            goto label_126238;
        }
    }
    ctx->pc = 0x1262BCu;
label_1262bc:
    // 0x1262bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1262BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x126238u: goto label_126238;
            case 0x1262BCu: goto label_1262bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1262C4u;
    // 0x1262c4: 0x0  nop
    ctx->pc = 0x1262c4u;
    // NOP
}
