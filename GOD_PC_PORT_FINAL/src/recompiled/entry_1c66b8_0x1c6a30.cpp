#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1c66b8
// Address: 0x1c66b8 - 0x1c6a30
void entry_1c66b8_0x1c6a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1c66b8_0x1c6a30");
#endif

    ctx->pc = 0x1c66b8u;

    // 0x1c66b8: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1c66b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c66bc: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1C66BCu;
    {
        const bool branch_taken_0x1c66bc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C66C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C66BCu;
            // 0x1c66c0: 0xc0402d  daddu       $t0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c66bc) {
            ctx->pc = 0x1C6714u;
            goto label_1c6714;
        }
    }
    ctx->pc = 0x1C66C4u;
    // 0x1c66c4: 0x8ce30174  lw          $v1, 0x174($a3)
    ctx->pc = 0x1c66c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 372)));
    // 0x1c66c8: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x1c66c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x1c66cc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c66ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c66d0: 0x3c04ffef  lui         $a0, 0xFFEF
    ctx->pc = 0x1c66d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65519 << 16));
    // 0x1c66d4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1c66d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c66d8: 0x8ce602d8  lw          $a2, 0x2D8($a3)
    ctx->pc = 0x1c66d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 728)));
    // 0x1c66dc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1c66dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1c66e0: 0x3c02ffdf  lui         $v0, 0xFFDF
    ctx->pc = 0x1c66e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65503 << 16));
    // 0x1c66e4: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x1c66e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x1c66e8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1c66e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1c66ec: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c66ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c66f0: 0x34a57fff  ori         $a1, $a1, 0x7FFF
    ctx->pc = 0x1c66f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32767);
    // 0x1c66f4: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x1c66f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
    // 0x1c66f8: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1c66f8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x1c66fc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c66fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6700: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1c6700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c6704: 0xc53024  and         $a2, $a2, $a1
    ctx->pc = 0x1c6704u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x1c6708: 0xace30174  sw          $v1, 0x174($a3)
    ctx->pc = 0x1c6708u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 372), GPR_U32(ctx, 3));
    // 0x1c670c: 0xace602d8  sw          $a2, 0x2D8($a3)
    ctx->pc = 0x1c670cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 728), GPR_U32(ctx, 6));
    // 0x1c6710: 0xe4e002c0  swc1        $f0, 0x2C0($a3)
    ctx->pc = 0x1c6710u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 704), bits); }
label_1c6714:
    // 0x1c6714: 0x8ce50174  lw          $a1, 0x174($a3)
    ctx->pc = 0x1c6714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 372)));
    // 0x1c6718: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1c6718u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1c671c: 0x8ce402d8  lw          $a0, 0x2D8($a3)
    ctx->pc = 0x1c671cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 728)));
    // 0x1c6720: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1c6720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1c6724: 0x3463f800  ori         $v1, $v1, 0xF800
    ctx->pc = 0x1c6724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63488);
    // 0x1c6728: 0x3442ffdf  ori         $v0, $v0, 0xFFDF
    ctx->pc = 0x1c6728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65503);
    // 0x1c672c: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1c672cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1c6730: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x1c6730u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1c6734: 0x34a60020  ori         $a2, $a1, 0x20
    ctx->pc = 0x1c6734u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32);
    // 0x1c6738: 0xace402d8  sw          $a0, 0x2D8($a3)
    ctx->pc = 0x1c6738u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 728), GPR_U32(ctx, 4));
    // 0x1c673c: 0x31020002  andi        $v0, $t0, 0x2
    ctx->pc = 0x1c673cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2);
    // 0x1c6740: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C6740u;
    {
        const bool branch_taken_0x1c6740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6740u;
            // 0x1c6744: 0xace60174  sw          $a2, 0x174($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 372), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6740) {
            ctx->pc = 0x1C6758u;
            goto label_1c6758;
        }
    }
    ctx->pc = 0x1C6748u;
    // 0x1c6748: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1c6748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1c674c: 0x34830100  ori         $v1, $a0, 0x100
    ctx->pc = 0x1c674cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x1c6750: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C6750u;
    {
        const bool branch_taken_0x1c6750 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6750u;
            // 0x1c6754: 0x3442fdff  ori         $v0, $v0, 0xFDFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65023);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6750) {
            ctx->pc = 0x1C676Cu;
            goto label_1c676c;
        }
    }
    ctx->pc = 0x1C6758u;
label_1c6758:
    // 0x1c6758: 0x31020004  andi        $v0, $t0, 0x4
    ctx->pc = 0x1c6758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)4);
    // 0x1c675c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C675Cu;
    {
        const bool branch_taken_0x1c675c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C675Cu;
            // 0x1c6760: 0x34830200  ori         $v1, $a0, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c675c) {
            ctx->pc = 0x1C6780u;
            goto label_1c6780;
        }
    }
    ctx->pc = 0x1C6764u;
    // 0x1c6764: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1c6764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1c6768: 0x3442feff  ori         $v0, $v0, 0xFEFF
    ctx->pc = 0x1c6768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65279);
label_1c676c:
    // 0x1c676c: 0x34a41020  ori         $a0, $a1, 0x1020
    ctx->pc = 0x1c676cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4128);
    // 0x1c6770: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1c6770u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c6774: 0xace40174  sw          $a0, 0x174($a3)
    ctx->pc = 0x1c6774u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 372), GPR_U32(ctx, 4));
    // 0x1c6778: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1C6778u;
    {
        const bool branch_taken_0x1c6778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C677Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6778u;
            // 0x1c677c: 0xace302d8  sw          $v1, 0x2D8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 728), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6778) {
            ctx->pc = 0x1C67A0u;
            goto label_1c67a0;
        }
    }
    ctx->pc = 0x1C6780u;
label_1c6780:
    // 0x1c6780: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1c6780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1c6784: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1c6784u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1c6788: 0x3442fcff  ori         $v0, $v0, 0xFCFF
    ctx->pc = 0x1c6788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64767);
    // 0x1c678c: 0x3463efff  ori         $v1, $v1, 0xEFFF
    ctx->pc = 0x1c678cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61439);
    // 0x1c6790: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x1c6790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1c6794: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x1c6794u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x1c6798: 0xace202d8  sw          $v0, 0x2D8($a3)
    ctx->pc = 0x1c6798u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 728), GPR_U32(ctx, 2));
    // 0x1c679c: 0xace30174  sw          $v1, 0x174($a3)
    ctx->pc = 0x1c679cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 372), GPR_U32(ctx, 3));
label_1c67a0:
    // 0x1c67a0: 0x8ce302d8  lw          $v1, 0x2D8($a3)
    ctx->pc = 0x1c67a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 728)));
    // 0x1c67a4: 0x3c02feff  lui         $v0, 0xFEFF
    ctx->pc = 0x1c67a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65279 << 16));
    // 0x1c67a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c67a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c67ac: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1c67acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x1c67b0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1c67b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c67b4: 0x8c845e6c  lw          $a0, 0x5E6C($a0)
    ctx->pc = 0x1c67b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24172)));
    // 0x1c67b8: 0x8ce20238  lw          $v0, 0x238($a3)
    ctx->pc = 0x1c67b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 568)));
    // 0x1c67bc: 0xace302d8  sw          $v1, 0x2D8($a3)
    ctx->pc = 0x1c67bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 728), GPR_U32(ctx, 3));
    // 0x1c67c0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1c67c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1c67c4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1c67c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c67c8: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x1c67c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x1c67cc: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x1c67ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1c67d0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C67D0u;
    {
        const bool branch_taken_0x1c67d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C67D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C67D0u;
            // 0x1c67d4: 0x3c040020  lui         $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c67d0) {
            ctx->pc = 0x1C67F0u;
            goto label_1c67f0;
        }
    }
    ctx->pc = 0x1C67D8u;
    // 0x1c67d8: 0x8ce20174  lw          $v0, 0x174($a3)
    ctx->pc = 0x1c67d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 372)));
    // 0x1c67dc: 0x3c03fd80  lui         $v1, 0xFD80
    ctx->pc = 0x1c67dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64896 << 16));
    // 0x1c67e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c67e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c67e4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1c67e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c67e8: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x1C67E8u;
    {
        const bool branch_taken_0x1c67e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C67ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C67E8u;
            // 0x1c67ec: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c67e8) {
            ctx->pc = 0x1C6868u;
            goto label_1c6868;
        }
    }
    ctx->pc = 0x1C67F0u;
label_1c67f0:
    // 0x1c67f0: 0x8ce20174  lw          $v0, 0x174($a3)
    ctx->pc = 0x1c67f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 372)));
    // 0x1c67f4: 0x3c03ffdf  lui         $v1, 0xFFDF
    ctx->pc = 0x1c67f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65503 << 16));
    // 0x1c67f8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1c67f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1c67fc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1c67fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1c6800: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x1c6800u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1c6804: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x1c6804u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x1c6808: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x1c6808u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x1c680c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C680Cu;
    {
        const bool branch_taken_0x1c680c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C680Cu;
            // 0x1c6810: 0xace50174  sw          $a1, 0x174($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 372), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c680c) {
            ctx->pc = 0x1C682Cu;
            goto label_1c682c;
        }
    }
    ctx->pc = 0x1C6814u;
    // 0x1c6814: 0x3c02fd80  lui         $v0, 0xFD80
    ctx->pc = 0x1c6814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64896 << 16));
    // 0x1c6818: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x1c6818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x1c681c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c681cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c6820: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1c6820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1c6824: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1C6824u;
    {
        const bool branch_taken_0x1c6824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6824u;
            // 0x1c6828: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6824) {
            ctx->pc = 0x1C6868u;
            goto label_1c6868;
        }
    }
    ctx->pc = 0x1C682Cu;
label_1c682c:
    // 0x1c682c: 0x3c02ffef  lui         $v0, 0xFFEF
    ctx->pc = 0x1c682cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65519 << 16));
    // 0x1c6830: 0x30c30010  andi        $v1, $a2, 0x10
    ctx->pc = 0x1c6830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
    // 0x1c6834: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c6834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c6838: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1c6838u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1c683c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1C683Cu;
    {
        const bool branch_taken_0x1c683c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C683Cu;
            // 0x1c6840: 0xace50174  sw          $a1, 0x174($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 372), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c683c) {
            ctx->pc = 0x1C685Cu;
            goto label_1c685c;
        }
    }
    ctx->pc = 0x1C6844u;
    // 0x1c6844: 0x3c02fd80  lui         $v0, 0xFD80
    ctx->pc = 0x1c6844u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64896 << 16));
    // 0x1c6848: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x1c6848u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x1c684c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c684cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c6850: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1c6850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1c6854: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1C6854u;
    {
        const bool branch_taken_0x1c6854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6854u;
            // 0x1c6858: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6854) {
            ctx->pc = 0x1C6868u;
            goto label_1c6868;
        }
    }
    ctx->pc = 0x1C685Cu;
label_1c685c:
    // 0x1c685c: 0x3c02ffbf  lui         $v0, 0xFFBF
    ctx->pc = 0x1c685cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65471 << 16));
    // 0x1c6860: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1c6860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1c6864: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1c6864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_1c6868:
    // 0x1c6868: 0xace20174  sw          $v0, 0x174($a3)
    ctx->pc = 0x1c6868u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 372), GPR_U32(ctx, 2));
    // 0x1c686c: 0x8ce30174  lw          $v1, 0x174($a3)
    ctx->pc = 0x1c686cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 372)));
    // 0x1c6870: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x1c6870u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x1c6874: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c6874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c6878: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C6878u;
    {
        const bool branch_taken_0x1c6878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C687Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6878u;
            // 0x1c687c: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6878) {
            ctx->pc = 0x1C68C0u;
            goto label_1c68c0;
        }
    }
    ctx->pc = 0x1C6880u;
    // 0x1c6880: 0x78e20260  lq          $v0, 0x260($a3)
    ctx->pc = 0x1c6880u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 608)));
    // 0x1c6884: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c6884u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6888: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c6888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c688c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c688cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6890: 0x0  nop
    ctx->pc = 0x1c6890u;
    // NOP
    // 0x1c6894: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1C6894u;
    {
        const bool branch_taken_0x1c6894 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C6898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6894u;
            // 0x1c6898: 0x24040037  addiu       $a0, $zero, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 55));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6894) {
            ctx->pc = 0x1C68B0u;
            goto label_1c68b0;
        }
    }
    ctx->pc = 0x1C689Cu;
    // 0x1c689c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c689cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c68a0: 0x0  nop
    ctx->pc = 0x1c68a0u;
    // NOP
    // 0x1c68a4: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1C68A4u;
    {
        const bool branch_taken_0x1c68a4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C68A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C68A4u;
            // 0x1c68a8: 0x24040035  addiu       $a0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c68a4) {
            ctx->pc = 0x1C68B0u;
            goto label_1c68b0;
        }
    }
    ctx->pc = 0x1C68ACu;
    // 0x1c68ac: 0x24040036  addiu       $a0, $zero, 0x36
    ctx->pc = 0x1c68acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
label_1c68b0:
    // 0x1c68b0: 0x8ce20320  lw          $v0, 0x320($a3)
    ctx->pc = 0x1c68b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 800)));
    // 0x1c68b4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1c68b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c68b8: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x1C68B8u;
    {
        const bool branch_taken_0x1c68b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C68BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C68B8u;
            // 0x1c68bc: 0xc4400168  lwc1        $f0, 0x168($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c68b8) {
            ctx->pc = 0x1C6A20u;
            goto label_1c6a20;
        }
    }
    ctx->pc = 0x1C68C0u;
label_1c68c0:
    // 0x1c68c0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c68c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c68c4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1C68C4u;
    {
        const bool branch_taken_0x1c68c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C68C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C68C4u;
            // 0x1c68c8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c68c4) {
            ctx->pc = 0x1C690Cu;
            goto label_1c690c;
        }
    }
    ctx->pc = 0x1C68CCu;
    // 0x1c68cc: 0x78e20260  lq          $v0, 0x260($a3)
    ctx->pc = 0x1c68ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 608)));
    // 0x1c68d0: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c68d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c68d4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c68d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c68d8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c68d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c68dc: 0x0  nop
    ctx->pc = 0x1c68dcu;
    // NOP
    // 0x1c68e0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1C68E0u;
    {
        const bool branch_taken_0x1c68e0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C68E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C68E0u;
            // 0x1c68e4: 0x2404003a  addiu       $a0, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c68e0) {
            ctx->pc = 0x1C68FCu;
            goto label_1c68fc;
        }
    }
    ctx->pc = 0x1C68E8u;
    // 0x1c68e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c68e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c68ec: 0x0  nop
    ctx->pc = 0x1c68ecu;
    // NOP
    // 0x1c68f0: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1C68F0u;
    {
        const bool branch_taken_0x1c68f0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C68F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C68F0u;
            // 0x1c68f4: 0x24040038  addiu       $a0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c68f0) {
            ctx->pc = 0x1C68FCu;
            goto label_1c68fc;
        }
    }
    ctx->pc = 0x1C68F8u;
    // 0x1c68f8: 0x24040039  addiu       $a0, $zero, 0x39
    ctx->pc = 0x1c68f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_1c68fc:
    // 0x1c68fc: 0x8ce20320  lw          $v0, 0x320($a3)
    ctx->pc = 0x1c68fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 800)));
    // 0x1c6900: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1c6900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c6904: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1C6904u;
    {
        const bool branch_taken_0x1c6904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6904u;
            // 0x1c6908: 0xc4400168  lwc1        $f0, 0x168($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6904) {
            ctx->pc = 0x1C6A20u;
            goto label_1c6a20;
        }
    }
    ctx->pc = 0x1C690Cu;
label_1c690c:
    // 0x1c690c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c690cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c6910: 0x5040001b  beql        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x1C6910u;
    {
        const bool branch_taken_0x1c6910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c6910) {
            ctx->pc = 0x1C6914u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6910u;
            // 0x1c6914: 0x8ce302d8  lw          $v1, 0x2D8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 728)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C6980u;
            goto label_1c6980;
        }
    }
    ctx->pc = 0x1C6918u;
    // 0x1c6918: 0x8ce202d8  lw          $v0, 0x2D8($a3)
    ctx->pc = 0x1c6918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 728)));
    // 0x1c691c: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1c691cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x1c6920: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C6920u;
    {
        const bool branch_taken_0x1c6920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6920u;
            // 0x1c6924: 0x2404004d  addiu       $a0, $zero, 0x4D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6920) {
            ctx->pc = 0x1C693Cu;
            goto label_1c693c;
        }
    }
    ctx->pc = 0x1C6928u;
    // 0x1c6928: 0x3c015511  lui         $at, 0x5511
    ctx->pc = 0x1c6928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)21777 << 16));
    // 0x1c692c: 0x342184e7  ori         $at, $at, 0x84E7
    ctx->pc = 0x1c692cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34023);
    // 0x1c6930: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1c6930u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c6934: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x1C6934u;
    {
        const bool branch_taken_0x1c6934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C6938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6934u;
            // 0x1c6938: 0xe4e00164  swc1        $f0, 0x164($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 356), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6934) {
            ctx->pc = 0x1C6A24u;
            goto label_1c6a24;
        }
    }
    ctx->pc = 0x1C693Cu;
label_1c693c:
    // 0x1c693c: 0x78e20260  lq          $v0, 0x260($a3)
    ctx->pc = 0x1c693cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 608)));
    // 0x1c6940: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c6940u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c6944: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x1c6944u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1c6948: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c6948u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c694c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1c694cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6950: 0x0  nop
    ctx->pc = 0x1c6950u;
    // NOP
    // 0x1c6954: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1C6954u;
    {
        const bool branch_taken_0x1c6954 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C6958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6954u;
            // 0x1c6958: 0x2404004a  addiu       $a0, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6954) {
            ctx->pc = 0x1C6970u;
            goto label_1c6970;
        }
    }
    ctx->pc = 0x1C695Cu;
    // 0x1c695c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1c695cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c6960: 0x0  nop
    ctx->pc = 0x1c6960u;
    // NOP
    // 0x1c6964: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x1C6964u;
    {
        const bool branch_taken_0x1c6964 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C6968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6964u;
            // 0x1c6968: 0x24040048  addiu       $a0, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6964) {
            ctx->pc = 0x1C6970u;
            goto label_1c6970;
        }
    }
    ctx->pc = 0x1C696Cu;
    // 0x1c696c: 0x24040049  addiu       $a0, $zero, 0x49
    ctx->pc = 0x1c696cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
label_1c6970:
    // 0x1c6970: 0x8ce20320  lw          $v0, 0x320($a3)
    ctx->pc = 0x1c6970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 800)));
    // 0x1c6974: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1c6974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c6978: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x1C6978u;
    {
        const bool branch_taken_0x1c6978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C697Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6978u;
            // 0x1c697c: 0xc4400124  lwc1        $f0, 0x124($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6978) {
            ctx->pc = 0x1C6A20u;
            goto label_1c6a20;
        }
    }
    ctx->pc = 0x1C6980u;
label_1c6980:
    // 0x1c6980: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x1c6980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x1c6984: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1C6984u;
    {
        const bool branch_taken_0x1c6984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6984u;
            // 0x1c6988: 0x2404001f  addiu       $a0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6984) {
            ctx->pc = 0x1C6A14u;
            goto label_1c6a14;
        }
    }
    ctx->pc = 0x1C698Cu;
    // 0x1c698c: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x1c698cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x1c6990: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1C6990u;
    {
        const bool branch_taken_0x1c6990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C6994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6990u;
            // 0x1c6994: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c6990) {
            ctx->pc = 0x1C6A14u;
            goto label_1c6a14;
        }
    }
    ctx->pc = 0x1C6998u;
    // 0x1c6998: 0x30620800  andi        $v0, $v1, 0x800
    ctx->pc = 0x1c6998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2048);
    // 0x1c699c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C699Cu;
    {
        const bool branch_taken_0x1c699c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C69A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C699Cu;
            // 0x1c69a0: 0x24040023  addiu       $a0, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c699c) {
            ctx->pc = 0x1C69B0u;
            goto label_1c69b0;
        }
    }
    ctx->pc = 0x1C69A4u;
    // 0x1c69a4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1c69a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1c69a8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1C69A8u;
    {
        const bool branch_taken_0x1c69a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C69ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C69A8u;
            // 0x1c69ac: 0x3442f7ff  ori         $v0, $v0, 0xF7FF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63487);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c69a8) {
            ctx->pc = 0x1C69C4u;
            goto label_1c69c4;
        }
    }
    ctx->pc = 0x1C69B0u;
label_1c69b0:
    // 0x1c69b0: 0x30621000  andi        $v0, $v1, 0x1000
    ctx->pc = 0x1c69b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
    // 0x1c69b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1C69B4u;
    {
        const bool branch_taken_0x1c69b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C69B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C69B4u;
            // 0x1c69b8: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c69b4) {
            ctx->pc = 0x1C69D0u;
            goto label_1c69d0;
        }
    }
    ctx->pc = 0x1C69BCu;
    // 0x1c69bc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1c69bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1c69c0: 0x3442efff  ori         $v0, $v0, 0xEFFF
    ctx->pc = 0x1c69c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61439);
label_1c69c4:
    // 0x1c69c4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1c69c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1c69c8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1C69C8u;
    {
        const bool branch_taken_0x1c69c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C69CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C69C8u;
            // 0x1c69cc: 0xace202d8  sw          $v0, 0x2D8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c69c8) {
            ctx->pc = 0x1C6A14u;
            goto label_1c6a14;
        }
    }
    ctx->pc = 0x1C69D0u;
label_1c69d0:
    // 0x1c69d0: 0x78e30260  lq          $v1, 0x260($a3)
    ctx->pc = 0x1c69d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 608)));
    // 0x1c69d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c69d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c69d8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1c69d8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c69dc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1c69dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c69e0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1c69e0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c69e4: 0x0  nop
    ctx->pc = 0x1c69e4u;
    // NOP
    // 0x1c69e8: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1C69E8u;
    {
        const bool branch_taken_0x1c69e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1C69ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C69E8u;
            // 0x1c69ec: 0x2404001d  addiu       $a0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c69e8) {
            ctx->pc = 0x1C6A0Cu;
            goto label_1c6a0c;
        }
    }
    ctx->pc = 0x1C69F0u;
    // 0x1c69f0: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x1c69f0u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1c69f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c69f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c69f8: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1c69f8u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1c69fc: 0x0  nop
    ctx->pc = 0x1c69fcu;
    // NOP
    // 0x1c6a00: 0x45030002  bc1tl       . + 4 + (0x2 << 2)
    ctx->pc = 0x1C6A00u;
    {
        const bool branch_taken_0x1c6a00 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1c6a00) {
            ctx->pc = 0x1C6A04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6A00u;
            // 0x1c6a04: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C6A0Cu;
            goto label_1c6a0c;
        }
    }
    ctx->pc = 0x1C6A08u;
    // 0x1c6a08: 0x2404001d  addiu       $a0, $zero, 0x1D
    ctx->pc = 0x1c6a08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_1c6a0c:
    // 0x1c6a0c: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1c6a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x1c6a10: 0x45200b  movn        $a0, $v0, $a1
    ctx->pc = 0x1c6a10u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_1c6a14:
    // 0x1c6a14: 0x8ce20320  lw          $v0, 0x320($a3)
    ctx->pc = 0x1c6a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 800)));
    // 0x1c6a18: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1c6a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c6a1c: 0xc4400110  lwc1        $f0, 0x110($v0)
    ctx->pc = 0x1c6a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1c6a20:
    // 0x1c6a20: 0xe4e00164  swc1        $f0, 0x164($a3)
    ctx->pc = 0x1c6a20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 356), bits); }
label_1c6a24:
    // 0x1c6a24: 0x8ce20328  lw          $v0, 0x328($a3)
    ctx->pc = 0x1c6a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 808)));
    // 0x1c6a28: 0x3e00008  jr          $ra
    ctx->pc = 0x1C6A28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C6A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C6A28u;
            // 0x1c6a2c: 0xa44400e0  sh          $a0, 0xE0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 224), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1C6714u: goto label_1c6714;
            case 0x1C6758u: goto label_1c6758;
            case 0x1C676Cu: goto label_1c676c;
            case 0x1C6780u: goto label_1c6780;
            case 0x1C67A0u: goto label_1c67a0;
            case 0x1C67F0u: goto label_1c67f0;
            case 0x1C682Cu: goto label_1c682c;
            case 0x1C685Cu: goto label_1c685c;
            case 0x1C6868u: goto label_1c6868;
            case 0x1C68B0u: goto label_1c68b0;
            case 0x1C68C0u: goto label_1c68c0;
            case 0x1C68FCu: goto label_1c68fc;
            case 0x1C690Cu: goto label_1c690c;
            case 0x1C693Cu: goto label_1c693c;
            case 0x1C6970u: goto label_1c6970;
            case 0x1C6980u: goto label_1c6980;
            case 0x1C69B0u: goto label_1c69b0;
            case 0x1C69C4u: goto label_1c69c4;
            case 0x1C69D0u: goto label_1c69d0;
            case 0x1C6A0Cu: goto label_1c6a0c;
            case 0x1C6A14u: goto label_1c6a14;
            case 0x1C6A20u: goto label_1c6a20;
            case 0x1C6A24u: goto label_1c6a24;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1C6A30u;
}
