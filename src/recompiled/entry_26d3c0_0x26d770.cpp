#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_26d3c0
// Address: 0x26d3c0 - 0x26d770
void entry_26d3c0_0x26d770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_26d3c0_0x26d770");
#endif

    ctx->pc = 0x26d3c0u;

    // 0x26d3c0: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x26d3c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d3c4: 0x34038026  ori         $v1, $zero, 0x8026
    ctx->pc = 0x26d3c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32806);
    // 0x26d3c8: 0x8d040064  lw          $a0, 0x64($t0)
    ctx->pc = 0x26d3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 100)));
    // 0x26d3cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26d3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26d3d0: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26D3D0u;
    {
        const bool branch_taken_0x26d3d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x26D3D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D3D0u;
            // 0x26d3d4: 0xfd030000  sd          $v1, 0x0($t0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 8), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d3d0) {
            ctx->pc = 0x26D3ECu;
            goto label_26d3ec;
        }
    }
    ctx->pc = 0x26D3D8u;
    // 0x26d3d8: 0x8d020060  lw          $v0, 0x60($t0)
    ctx->pc = 0x26d3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 96)));
    // 0x26d3dc: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26D3DCu;
    {
        const bool branch_taken_0x26d3dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x26D3E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D3DCu;
            // 0x26d3e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d3dc) {
            ctx->pc = 0x26D3F0u;
            goto label_26d3f0;
        }
    }
    ctx->pc = 0x26D3E4u;
    // 0x26d3e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26D3E4u;
    {
        const bool branch_taken_0x26d3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D3E4u;
            // 0x26d3e8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d3e4) {
            ctx->pc = 0x26D3F0u;
            goto label_26d3f0;
        }
    }
    ctx->pc = 0x26D3ECu;
label_26d3ec:
    // 0x26d3ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26d3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_26d3f0:
    // 0x26d3f0: 0xfd020008  sd          $v0, 0x8($t0)
    ctx->pc = 0x26d3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 8), GPR_U64(ctx, 2));
    // 0x26d3f4: 0x95020050  lhu         $v0, 0x50($t0)
    ctx->pc = 0x26d3f4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 80)));
    // 0x26d3f8: 0x240581ff  addiu       $a1, $zero, -0x7E01
    ctx->pc = 0x26d3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294935039));
    // 0x26d3fc: 0xdd030020  ld          $v1, 0x20($t0)
    ctx->pc = 0x26d3fcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x26d400: 0x3c06fff0  lui         $a2, 0xFFF0
    ctx->pc = 0x26d400u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65520 << 16));
    // 0x26d404: 0x34c67fff  ori         $a2, $a2, 0x7FFF
    ctx->pc = 0x26d404u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32767);
    // 0x26d408: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x26d408u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x26d40c: 0x8504004e  lh          $a0, 0x4E($t0)
    ctx->pc = 0x26d40cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 78)));
    // 0x26d410: 0x23c03  sra         $a3, $v0, 16
    ctx->pc = 0x26d410u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 16));
    // 0x26d414: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x26d414u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x26d418: 0x21583  sra         $v0, $v0, 22
    ctx->pc = 0x26d418u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 22));
    // 0x26d41c: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x26d41cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x26d420: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x26d420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x26d424: 0x423f8  dsll        $a0, $a0, 15
    ctx->pc = 0x26d424u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 15);
    // 0x26d428: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x26d428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x26d42c: 0x85090052  lh          $t1, 0x52($t0)
    ctx->pc = 0x26d42cu;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 82)));
    // 0x26d430: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x26d430u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x26d434: 0x850c0054  lh          $t4, 0x54($t0)
    ctx->pc = 0x26d434u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 84)));
    // 0x26d438: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x26d438u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x26d43c: 0x2402f800  addiu       $v0, $zero, -0x800
    ctx->pc = 0x26d43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965248));
    // 0x26d440: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x26d440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x26d444: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26d444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26d448: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x26d448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x26d44c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26d44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26d450: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x26d450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x26d454: 0x850a0056  lh          $t2, 0x56($t0)
    ctx->pc = 0x26d454u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 86)));
    // 0x26d458: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x26d458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26d45c: 0x8d04006c  lw          $a0, 0x6C($t0)
    ctx->pc = 0x26d45cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 108)));
    // 0x26d460: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x26D460u;
    {
        const bool branch_taken_0x26d460 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D460u;
            // 0x26d464: 0xfd030020  sd          $v1, 0x20($t0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 8), 32), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d460) {
            ctx->pc = 0x26D4C0u;
            goto label_26d4c0;
        }
    }
    ctx->pc = 0x26D468u;
    // 0x26d468: 0xdd020028  ld          $v0, 0x28($t0)
    ctx->pc = 0x26d468u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 40)));
    // 0x26d46c: 0x3c05ffc0  lui         $a1, 0xFFC0
    ctx->pc = 0x26d46cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65472 << 16));
    // 0x26d470: 0x34a507ff  ori         $a1, $a1, 0x7FF
    ctx->pc = 0x26d470u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2047);
    // 0x26d474: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x26d474u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x26d478: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x26d478u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x26d47c: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x26d47cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x26d480: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x26d480u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x26d484: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x26d484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x26d488: 0x85060042  lh          $a2, 0x42($t0)
    ctx->pc = 0x26d488u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 66)));
    // 0x26d48c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x26d48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x26d490: 0x85040040  lh          $a0, 0x40($t0)
    ctx->pc = 0x26d490u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 64)));
    // 0x26d494: 0x2405fe00  addiu       $a1, $zero, -0x200
    ctx->pc = 0x26d494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x26d498: 0x30c601ff  andi        $a2, $a2, 0x1FF
    ctx->pc = 0x26d498u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)511);
    // 0x26d49c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x26d49cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x26d4a0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x26d4a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x26d4a4: 0x308401ff  andi        $a0, $a0, 0x1FF
    ctx->pc = 0x26d4a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)511);
    // 0x26d4a8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x26d4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x26d4ac: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x26d4acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x26d4b0: 0xfd020028  sd          $v0, 0x28($t0)
    ctx->pc = 0x26d4b0u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 40), GPR_U64(ctx, 2));
    // 0x26d4b4: 0xfd030020  sd          $v1, 0x20($t0)
    ctx->pc = 0x26d4b4u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 32), GPR_U64(ctx, 3));
    // 0x26d4b8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x26D4B8u;
    {
        const bool branch_taken_0x26d4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D4B8u;
            // 0x26d4bc: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d4b8) {
            ctx->pc = 0x26D50Cu;
            goto label_26d50c;
        }
    }
    ctx->pc = 0x26D4C0u;
label_26d4c0:
    // 0x26d4c0: 0xdd020028  ld          $v0, 0x28($t0)
    ctx->pc = 0x26d4c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 8), 40)));
    // 0x26d4c4: 0x3c04ffc0  lui         $a0, 0xFFC0
    ctx->pc = 0x26d4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65472 << 16));
    // 0x26d4c8: 0x348407ff  ori         $a0, $a0, 0x7FF
    ctx->pc = 0x26d4c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2047);
    // 0x26d4cc: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x26d4ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x26d4d0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x26d4d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x26d4d4: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x26d4d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x26d4d8: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x26d4d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x26d4dc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x26d4dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x26d4e0: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x26d4e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x26d4e4: 0x52f38  dsll        $a1, $a1, 28
    ctx->pc = 0x26d4e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 28);
    // 0x26d4e8: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x26d4e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x26d4ec: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x26d4ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x26d4f0: 0x2404fe00  addiu       $a0, $zero, -0x200
    ctx->pc = 0x26d4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x26d4f4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x26d4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x26d4f8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x26d4f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x26d4fc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x26d4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x26d500: 0xfd020028  sd          $v0, 0x28($t0)
    ctx->pc = 0x26d500u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 40), GPR_U64(ctx, 2));
    // 0x26d504: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x26d504u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26d508: 0xfd030020  sd          $v1, 0x20($t0)
    ctx->pc = 0x26d508u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 32), GPR_U64(ctx, 3));
label_26d50c:
    // 0x26d50c: 0x95020050  lhu         $v0, 0x50($t0)
    ctx->pc = 0x26d50cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 80)));
    // 0x26d510: 0x240581ff  addiu       $a1, $zero, -0x7E01
    ctx->pc = 0x26d510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294935039));
    // 0x26d514: 0xdd030028  ld          $v1, 0x28($t0)
    ctx->pc = 0x26d514u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 40)));
    // 0x26d518: 0x3c06fff0  lui         $a2, 0xFFF0
    ctx->pc = 0x26d518u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65520 << 16));
    // 0x26d51c: 0x34c67fff  ori         $a2, $a2, 0x7FFF
    ctx->pc = 0x26d51cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32767);
    // 0x26d520: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x26d520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x26d524: 0x8504004e  lh          $a0, 0x4E($t0)
    ctx->pc = 0x26d524u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 78)));
    // 0x26d528: 0x21583  sra         $v0, $v0, 22
    ctx->pc = 0x26d528u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 22));
    // 0x26d52c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x26d52cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x26d530: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x26d530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x26d534: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x26d534u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x26d538: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x26d538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x26d53c: 0x423f8  dsll        $a0, $a0, 15
    ctx->pc = 0x26d53cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 15);
    // 0x26d540: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x26d540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x26d544: 0x2405f800  addiu       $a1, $zero, -0x800
    ctx->pc = 0x26d544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965248));
    // 0x26d548: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x26d548u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x26d54c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x26d54cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x26d550: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x26d550u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x26d554: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x26d554u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x26d558: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x26d558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x26d55c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26d55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26d560: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x26d560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x26d564: 0x8d060068  lw          $a2, 0x68($t0)
    ctx->pc = 0x26d564u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 104)));
    // 0x26d568: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x26d568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x26d56c: 0x14c2002a  bne         $a2, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x26D56Cu;
    {
        const bool branch_taken_0x26d56c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x26D570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D56Cu;
            // 0x26d570: 0xfd030028  sd          $v1, 0x28($t0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 8), 40), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d56c) {
            ctx->pc = 0x26D618u;
            goto label_26d618;
        }
    }
    ctx->pc = 0x26D574u;
    // 0x26d574: 0x8d030064  lw          $v1, 0x64($t0)
    ctx->pc = 0x26d574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 100)));
    // 0x26d578: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26d578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26d57c: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x26D57Cu;
    {
        const bool branch_taken_0x26d57c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26D580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D57Cu;
            // 0x26d580: 0x24e309ff  addiu       $v1, $a3, 0x9FF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 2559));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d57c) {
            ctx->pc = 0x26D5E0u;
            goto label_26d5e0;
        }
    }
    ctx->pc = 0x26D584u;
    // 0x26d584: 0x25450032  addiu       $a1, $t2, 0x32
    ctx->pc = 0x26d584u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 50));
    // 0x26d588: 0x67001a  div         $zero, $v1, $a3
    ctx->pc = 0x26d588u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x26d58c: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x26D58Cu;
    {
        const bool branch_taken_0x26d58c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d58c) {
            ctx->pc = 0x26D590u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26D58Cu;
            // 0x26d590: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x26D594u;
            goto label_26d594;
        }
    }
    ctx->pc = 0x26D594u;
label_26d594:
    // 0x26d594: 0x30a50fff  andi        $a1, $a1, 0xFFF
    ctx->pc = 0x26d594u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x26d598: 0x52b38  dsll        $a1, $a1, 12
    ctx->pc = 0x26d598u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 12);
    // 0x26d59c: 0x8d060060  lw          $a2, 0x60($t0)
    ctx->pc = 0x26d59cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 96)));
    // 0x26d5a0: 0x1812  mflo        $v1
    ctx->pc = 0x26d5a0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x26d5a4: 0x1831018  mult        $v0, $t4, $v1
    ctx->pc = 0x26d5a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x26d5a8: 0x672018  mult        $a0, $v1, $a3
    ctx->pc = 0x26d5a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x26d5ac: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x26d5acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x26d5b0: 0x2442027c  addiu       $v0, $v0, 0x27C
    ctx->pc = 0x26d5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 636));
    // 0x26d5b4: 0x31df8  dsll        $v1, $v1, 23
    ctx->pc = 0x26d5b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 23);
    // 0x26d5b8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26d5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26d5bc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x26d5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x26d5c0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x26d5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x26d5c4: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x26d5c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x26d5c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26d5c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26d5cc: 0x10c00030  beqz        $a2, . + 4 + (0x30 << 2)
    ctx->pc = 0x26D5CCu;
    {
        const bool branch_taken_0x26d5cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D5D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D5CCu;
            // 0x26d5d0: 0x441825  or          $v1, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d5cc) {
            ctx->pc = 0x26D690u;
            goto label_26d690;
        }
    }
    ctx->pc = 0x26D5D4u;
    // 0x26d5d4: 0x91040  sll         $v0, $t1, 1
    ctx->pc = 0x26d5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x26d5d8: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x26D5D8u;
    {
        const bool branch_taken_0x26d5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D5DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D5D8u;
            // 0x26d5dc: 0x4b1023  subu        $v0, $v0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d5d8) {
            ctx->pc = 0x26D694u;
            goto label_26d694;
        }
    }
    ctx->pc = 0x26D5E0u;
label_26d5e0:
    // 0x26d5e0: 0x25450019  addiu       $a1, $t2, 0x19
    ctx->pc = 0x26d5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 25));
    // 0x26d5e4: 0x67001a  div         $zero, $v1, $a3
    ctx->pc = 0x26d5e4u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x26d5e8: 0x30a50fff  andi        $a1, $a1, 0xFFF
    ctx->pc = 0x26d5e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x26d5ec: 0x52b38  dsll        $a1, $a1, 12
    ctx->pc = 0x26d5ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 12);
    // 0x26d5f0: 0x12b3023  subu        $a2, $t1, $t3
    ctx->pc = 0x26d5f0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x26d5f4: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x26D5F4u;
    {
        const bool branch_taken_0x26d5f4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d5f4) {
            ctx->pc = 0x26D5F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26D5F4u;
            // 0x26d5f8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x26D5FCu;
            goto label_26d5fc;
        }
    }
    ctx->pc = 0x26D5FCu;
label_26d5fc:
    // 0x26d5fc: 0x6333c  dsll32      $a2, $a2, 12
    ctx->pc = 0x26d5fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 12));
    // 0x26d600: 0x1812  mflo        $v1
    ctx->pc = 0x26d600u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x26d604: 0x1831018  mult        $v0, $t4, $v1
    ctx->pc = 0x26d604u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x26d608: 0x672018  mult        $a0, $v1, $a3
    ctx->pc = 0x26d608u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x26d60c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x26d60cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x26d610: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x26D610u;
    {
        const bool branch_taken_0x26d610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D610u;
            // 0x26d614: 0x2442027c  addiu       $v0, $v0, 0x27C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 636));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d610) {
            ctx->pc = 0x26D6D8u;
            goto label_26d6d8;
        }
    }
    ctx->pc = 0x26D618u;
label_26d618:
    // 0x26d618: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x26d618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26d61c: 0x14c20038  bne         $a2, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x26D61Cu;
    {
        const bool branch_taken_0x26d61c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x26D620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D61Cu;
            // 0x26d620: 0x2403060e  addiu       $v1, $zero, 0x60E (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1550));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d61c) {
            ctx->pc = 0x26D700u;
            goto label_26d700;
        }
    }
    ctx->pc = 0x26D624u;
    // 0x26d624: 0x8d030064  lw          $v1, 0x64($t0)
    ctx->pc = 0x26d624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 100)));
    // 0x26d628: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26d628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26d62c: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x26D62Cu;
    {
        const bool branch_taken_0x26d62c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26D630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D62Cu;
            // 0x26d630: 0x24e309ff  addiu       $v1, $a3, 0x9FF (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 2559));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d62c) {
            ctx->pc = 0x26D6A4u;
            goto label_26d6a4;
        }
    }
    ctx->pc = 0x26D634u;
    // 0x26d634: 0x25450048  addiu       $a1, $t2, 0x48
    ctx->pc = 0x26d634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 72));
    // 0x26d638: 0x67001a  div         $zero, $v1, $a3
    ctx->pc = 0x26d638u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x26d63c: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x26D63Cu;
    {
        const bool branch_taken_0x26d63c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d63c) {
            ctx->pc = 0x26D640u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26D63Cu;
            // 0x26d640: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x26D644u;
            goto label_26d644;
        }
    }
    ctx->pc = 0x26D644u;
label_26d644:
    // 0x26d644: 0x30a50fff  andi        $a1, $a1, 0xFFF
    ctx->pc = 0x26d644u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x26d648: 0x52b38  dsll        $a1, $a1, 12
    ctx->pc = 0x26d648u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 12);
    // 0x26d64c: 0x8d060060  lw          $a2, 0x60($t0)
    ctx->pc = 0x26d64cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 96)));
    // 0x26d650: 0x1812  mflo        $v1
    ctx->pc = 0x26d650u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x26d654: 0x1831018  mult        $v0, $t4, $v1
    ctx->pc = 0x26d654u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x26d658: 0x672018  mult        $a0, $v1, $a3
    ctx->pc = 0x26d658u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x26d65c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x26d65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x26d660: 0x64420290  daddiu      $v0, $v0, 0x290
    ctx->pc = 0x26d660u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)656);
    // 0x26d664: 0x31df8  dsll        $v1, $v1, 23
    ctx->pc = 0x26d664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 23);
    // 0x26d668: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26d668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26d66c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x26d66cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x26d670: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x26d670u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x26d674: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x26d674u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x26d678: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26d678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26d67c: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x26D67Cu;
    {
        const bool branch_taken_0x26d67c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D67Cu;
            // 0x26d680: 0x441825  or          $v1, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d67c) {
            ctx->pc = 0x26D690u;
            goto label_26d690;
        }
    }
    ctx->pc = 0x26D684u;
    // 0x26d684: 0x91040  sll         $v0, $t1, 1
    ctx->pc = 0x26d684u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x26d688: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26D688u;
    {
        const bool branch_taken_0x26d688 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D688u;
            // 0x26d68c: 0x4b1023  subu        $v0, $v0, $t3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d688) {
            ctx->pc = 0x26D694u;
            goto label_26d694;
        }
    }
    ctx->pc = 0x26D690u;
label_26d690:
    // 0x26d690: 0x12b1023  subu        $v0, $t1, $t3
    ctx->pc = 0x26d690u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
label_26d694:
    // 0x26d694: 0x2133c  dsll32      $v0, $v0, 12
    ctx->pc = 0x26d694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 12));
    // 0x26d698: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x26d698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x26d69c: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x26D69Cu;
    {
        const bool branch_taken_0x26d69c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D6A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D69Cu;
            // 0x26d6a0: 0xfd020010  sd          $v0, 0x10($t0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d69c) {
            ctx->pc = 0x26D744u;
            goto label_26d744;
        }
    }
    ctx->pc = 0x26D6A4u;
label_26d6a4:
    // 0x26d6a4: 0x25450024  addiu       $a1, $t2, 0x24
    ctx->pc = 0x26d6a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 10), 36));
    // 0x26d6a8: 0x67001a  div         $zero, $v1, $a3
    ctx->pc = 0x26d6a8u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x26d6ac: 0x30a50fff  andi        $a1, $a1, 0xFFF
    ctx->pc = 0x26d6acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4095);
    // 0x26d6b0: 0x52b38  dsll        $a1, $a1, 12
    ctx->pc = 0x26d6b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 12);
    // 0x26d6b4: 0x12b3023  subu        $a2, $t1, $t3
    ctx->pc = 0x26d6b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x26d6b8: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x26D6B8u;
    {
        const bool branch_taken_0x26d6b8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d6b8) {
            ctx->pc = 0x26D6BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26D6B8u;
            // 0x26d6bc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x26D6C0u;
            goto label_26d6c0;
        }
    }
    ctx->pc = 0x26D6C0u;
label_26d6c0:
    // 0x26d6c0: 0x6333c  dsll32      $a2, $a2, 12
    ctx->pc = 0x26d6c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 12));
    // 0x26d6c4: 0x1812  mflo        $v1
    ctx->pc = 0x26d6c4u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x26d6c8: 0x1831018  mult        $v0, $t4, $v1
    ctx->pc = 0x26d6c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 12) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x26d6cc: 0x672018  mult        $a0, $v1, $a3
    ctx->pc = 0x26d6ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x26d6d0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x26d6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x26d6d4: 0x64420290  daddiu      $v0, $v0, 0x290
    ctx->pc = 0x26d6d4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)656);
label_26d6d8:
    // 0x26d6d8: 0x31df8  dsll        $v1, $v1, 23
    ctx->pc = 0x26d6d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 23);
    // 0x26d6dc: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x26d6dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x26d6e0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x26d6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x26d6e4: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x26d6e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x26d6e8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x26d6e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x26d6ec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26d6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26d6f0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x26d6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x26d6f4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x26d6f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x26d6f8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x26D6F8u;
    {
        const bool branch_taken_0x26d6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D6FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D6F8u;
            // 0x26d6fc: 0xfd020010  sd          $v0, 0x10($t0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d6f8) {
            ctx->pc = 0x26D744u;
            goto label_26d744;
        }
    }
    ctx->pc = 0x26D700u;
label_26d700:
    // 0x26d700: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x26d700u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x26d704: 0x34a52138  ori         $a1, $a1, 0x2138
    ctx->pc = 0x26d704u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8504);
    // 0x26d708: 0x67001a  div         $zero, $v1, $a3
    ctx->pc = 0x26d708u;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x26d70c: 0x12b2023  subu        $a0, $t1, $t3
    ctx->pc = 0x26d70cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 11)));
    // 0x26d710: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x26D710u;
    {
        const bool branch_taken_0x26d710 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x26d710) {
            ctx->pc = 0x26D714u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26D710u;
            // 0x26d714: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x26D718u;
            goto label_26d718;
        }
    }
    ctx->pc = 0x26D718u;
label_26d718:
    // 0x26d718: 0x4233c  dsll32      $a0, $a0, 12
    ctx->pc = 0x26d718u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 12));
    // 0x26d71c: 0x1812  mflo        $v1
    ctx->pc = 0x26d71cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x26d720: 0xe31018  mult        $v0, $a3, $v1
    ctx->pc = 0x26d720u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x26d724: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x26d724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x26d728: 0x31df8  dsll        $v1, $v1, 23
    ctx->pc = 0x26d728u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 23);
    // 0x26d72c: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x26d72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x26d730: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x26d730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x26d734: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x26d734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x26d738: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x26d738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x26d73c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x26d73cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x26d740: 0xfd030010  sd          $v1, 0x10($t0)
    ctx->pc = 0x26d740u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 3));
label_26d744:
    // 0x26d744: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x26d744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x26d748: 0x8c441430  lw          $a0, 0x1430($v0)
    ctx->pc = 0x26d748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5168)));
    // 0x26d74c: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x26d74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
    // 0x26d750: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26D750u;
    {
        const bool branch_taken_0x26d750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D750u;
            // 0x26d754: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d750) {
            ctx->pc = 0x26D764u;
            goto label_26d764;
        }
    }
    ctx->pc = 0x26D758u;
    // 0x26d758: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x26d758u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26d75c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26d75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26d760: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x26d760u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
label_26d764:
    // 0x26d764: 0x3e00008  jr          $ra
    ctx->pc = 0x26D764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26D3ECu: goto label_26d3ec;
            case 0x26D3F0u: goto label_26d3f0;
            case 0x26D4C0u: goto label_26d4c0;
            case 0x26D50Cu: goto label_26d50c;
            case 0x26D594u: goto label_26d594;
            case 0x26D5E0u: goto label_26d5e0;
            case 0x26D5FCu: goto label_26d5fc;
            case 0x26D618u: goto label_26d618;
            case 0x26D644u: goto label_26d644;
            case 0x26D690u: goto label_26d690;
            case 0x26D694u: goto label_26d694;
            case 0x26D6A4u: goto label_26d6a4;
            case 0x26D6C0u: goto label_26d6c0;
            case 0x26D6D8u: goto label_26d6d8;
            case 0x26D700u: goto label_26d700;
            case 0x26D718u: goto label_26d718;
            case 0x26D744u: goto label_26d744;
            case 0x26D764u: goto label_26d764;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26D76Cu;
    // 0x26d76c: 0x0  nop
    ctx->pc = 0x26d76cu;
    // NOP
}
