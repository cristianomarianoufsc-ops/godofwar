#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029B638
// Address: 0x29b638 - 0x29bba4
void sub_0029B638_0x29b638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029B638_0x29b638");
#endif

    ctx->pc = 0x29b638u;

    // 0x29b638: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29b638u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29b63c: 0x5483f  dsra32      $t1, $a1, 0
    ctx->pc = 0x29b63cu;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x29b640: 0x4503f  dsra32      $t2, $a0, 0
    ctx->pc = 0x29b640u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x29b644: 0x5403c  dsll32      $t0, $a1, 0
    ctx->pc = 0x29b644u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) << (32 + 0));
    // 0x29b648: 0x8403f  dsra32      $t0, $t0, 0
    ctx->pc = 0x29b648u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 8) >> (32 + 0));
    // 0x29b64c: 0x4603c  dsll32      $t4, $a0, 0
    ctx->pc = 0x29b64cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 4) << (32 + 0));
    // 0x29b650: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x29b650u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x29b654: 0x152000b3  bnez        $t1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x29B654u;
    {
        const bool branch_taken_0x29b654 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B654u;
            // 0x29b658: 0x3a0c02d  daddu       $t8, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b654) {
            ctx->pc = 0x29B924u;
            goto label_29b924;
        }
    }
    ctx->pc = 0x29B65Cu;
    // 0x29b65c: 0x148102b  sltu        $v0, $t2, $t0
    ctx->pc = 0x29b65cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x29b660: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x29B660u;
    {
        const bool branch_taken_0x29b660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B660u;
            // 0x29b664: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b660) {
            ctx->pc = 0x29B6F0u;
            goto label_29b6f0;
        }
    }
    ctx->pc = 0x29B668u;
    // 0x29b668: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x29b668u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x29b66c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29B66Cu;
    {
        const bool branch_taken_0x29b66c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B66Cu;
            // 0x29b670: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b66c) {
            ctx->pc = 0x29B688u;
            goto label_29b688;
        }
    }
    ctx->pc = 0x29B674u;
    // 0x29b674: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x29b674u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x29b678: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x29b678u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x29b67c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29B67Cu;
    {
        const bool branch_taken_0x29b67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B67Cu;
            // 0x29b680: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b67c) {
            ctx->pc = 0x29B6A0u;
            goto label_29b6a0;
        }
    }
    ctx->pc = 0x29B684u;
    // 0x29b684: 0x0  nop
    ctx->pc = 0x29b684u;
    // NOP
label_29b688:
    // 0x29b688: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x29b688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x29b68c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x29b68cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x29b690: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x29b690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x29b694: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x29b694u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x29b698: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x29b698u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x29b69c: 0x0  nop
    ctx->pc = 0x29b69cu;
    // NOP
label_29b6a0:
    // 0x29b6a0: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x29b6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x29b6a4: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x29b6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x29b6a8: 0x24426f18  addiu       $v0, $v0, 0x6F18
    ctx->pc = 0x29b6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28440));
    // 0x29b6ac: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x29b6acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x29b6b0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x29b6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x29b6b4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x29b6b4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29b6b8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x29b6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x29b6bc: 0xc36823  subu        $t5, $a2, $v1
    ctx->pc = 0x29b6bcu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x29b6c0: 0x11a00006  beqz        $t5, . + 4 + (0x6 << 2)
    ctx->pc = 0x29B6C0u;
    {
        const bool branch_taken_0x29b6c0 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B6C0u;
            // 0x29b6c4: 0xcd1023  subu        $v0, $a2, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b6c0) {
            ctx->pc = 0x29B6DCu;
            goto label_29b6dc;
        }
    }
    ctx->pc = 0x29B6C8u;
    // 0x29b6c8: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x29b6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x29b6cc: 0x4c1006  srlv        $v0, $t4, $v0
    ctx->pc = 0x29b6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 2) & 0x1F));
    // 0x29b6d0: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x29b6d0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x29b6d4: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x29b6d4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29b6d8: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x29b6d8u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
label_29b6dc:
    // 0x29b6dc: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x29b6dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x29b6e0: 0x3107ffff  andi        $a3, $t0, 0xFFFF
    ctx->pc = 0x29b6e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x29b6e4: 0x10000060  b           . + 4 + (0x60 << 2)
    ctx->pc = 0x29B6E4u;
    {
        const bool branch_taken_0x29b6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B6E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B6E4u;
            // 0x29b6e8: 0x145001b  divu        $zero, $t2, $a1 (Delay Slot)
        { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b6e4) {
            ctx->pc = 0x29B868u;
            goto label_29b868;
        }
    }
    ctx->pc = 0x29B6ECu;
    // 0x29b6ec: 0x0  nop
    ctx->pc = 0x29b6ecu;
    // NOP
label_29b6f0:
    // 0x29b6f0: 0x15000009  bnez        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x29B6F0u;
    {
        const bool branch_taken_0x29b6f0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B6F0u;
            // 0x29b6f4: 0x48102b  sltu        $v0, $v0, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b6f0) {
            ctx->pc = 0x29B718u;
            goto label_29b718;
        }
    }
    ctx->pc = 0x29B6F8u;
    // 0x29b6f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29b6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29b6fc: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x29B6FCu;
    {
        const bool branch_taken_0x29b6fc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b6fc) {
            ctx->pc = 0x29B700u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29B6FCu;
            // 0x29b700: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x29B704u;
            goto label_29b704;
        }
    }
    ctx->pc = 0x29B704u;
label_29b704:
    // 0x29b704: 0x49001b  divu        $zero, $v0, $t1
    ctx->pc = 0x29b704u;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x29b708: 0x1012  mflo        $v0
    ctx->pc = 0x29b708u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x29b70c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x29b70cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b710: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x29b710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29b714: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x29b714u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_29b718:
    // 0x29b718: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29B718u;
    {
        const bool branch_taken_0x29b718 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B718u;
            // 0x29b71c: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b718) {
            ctx->pc = 0x29B730u;
            goto label_29b730;
        }
    }
    ctx->pc = 0x29B720u;
    // 0x29b720: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x29b720u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x29b724: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x29b724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x29b728: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x29B728u;
    {
        const bool branch_taken_0x29b728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B728u;
            // 0x29b72c: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b728) {
            ctx->pc = 0x29B748u;
            goto label_29b748;
        }
    }
    ctx->pc = 0x29B730u;
label_29b730:
    // 0x29b730: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x29b730u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x29b734: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x29b734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x29b738: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x29b738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x29b73c: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x29b73cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x29b740: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x29b740u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x29b744: 0x0  nop
    ctx->pc = 0x29b744u;
    // NOP
label_29b748:
    // 0x29b748: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x29b748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x29b74c: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x29b74cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x29b750: 0x24426f18  addiu       $v0, $v0, 0x6F18
    ctx->pc = 0x29b750u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28440));
    // 0x29b754: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x29b754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x29b758: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x29b758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x29b75c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x29b75cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29b760: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x29b760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x29b764: 0xc36823  subu        $t5, $a2, $v1
    ctx->pc = 0x29b764u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x29b768: 0x15a00005  bnez        $t5, . + 4 + (0x5 << 2)
    ctx->pc = 0x29B768u;
    {
        const bool branch_taken_0x29b768 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B768u;
            // 0x29b76c: 0xcd7023  subu        $t6, $a2, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b768) {
            ctx->pc = 0x29B780u;
            goto label_29b780;
        }
    }
    ctx->pc = 0x29B770u;
    // 0x29b770: 0x1485023  subu        $t2, $t2, $t0
    ctx->pc = 0x29b770u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x29b774: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x29b774u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x29b778: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x29B778u;
    {
        const bool branch_taken_0x29b778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B778u;
            // 0x29b77c: 0x3109ffff  andi        $t1, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b778) {
            ctx->pc = 0x29B85Cu;
            goto label_29b85c;
        }
    }
    ctx->pc = 0x29B780u;
label_29b780:
    // 0x29b780: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x29b780u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x29b784: 0x1cc1006  srlv        $v0, $t4, $t6
    ctx->pc = 0x29b784u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 14) & 0x1F));
    // 0x29b788: 0x1ca3806  srlv        $a3, $t2, $t6
    ctx->pc = 0x29b788u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x29b78c: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x29b78cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29b790: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x29b790u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x29b794: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x29b794u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x29b798: 0x82c02  srl         $a1, $t0, 16
    ctx->pc = 0x29b798u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x29b79c: 0xe5001b  divu        $zero, $a3, $a1
    ctx->pc = 0x29b79cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x29b7a0: 0x3109ffff  andi        $t1, $t0, 0xFFFF
    ctx->pc = 0x29b7a0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x29b7a4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x29b7a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b7a8: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x29b7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x29b7ac: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x29B7ACu;
    {
        const bool branch_taken_0x29b7ac = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b7ac) {
            ctx->pc = 0x29B7B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29B7ACu;
            // 0x29b7b0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x29B7B4u;
            goto label_29b7b4;
        }
    }
    ctx->pc = 0x29B7B4u;
label_29b7b4:
    // 0x29b7b4: 0x120582d  daddu       $t3, $t1, $zero
    ctx->pc = 0x29b7b4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b7b8: 0x1012  mflo        $v0
    ctx->pc = 0x29b7b8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x29b7bc: 0x1810  mfhi        $v1
    ctx->pc = 0x29b7bcu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x29b7c0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x29b7c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x29b7c4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x29b7c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x29b7c8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x29b7c8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x29b7cc: 0x493018  mult        $a2, $v0, $t1
    ctx->pc = 0x29b7ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x29b7d0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x29b7d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x29b7d4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x29b7d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x29b7d8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x29B7D8u;
    {
        const bool branch_taken_0x29b7d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b7d8) {
            ctx->pc = 0x29B7DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29B7D8u;
            // 0x29b7dc: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29B804u;
            goto label_29b804;
        }
    }
    ctx->pc = 0x29B7E0u;
    // 0x29b7e0: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x29b7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x29b7e4: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x29b7e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x29b7e8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x29B7E8u;
    {
        const bool branch_taken_0x29b7e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29b7e8) {
            ctx->pc = 0x29B7ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29B7E8u;
            // 0x29b7ec: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29B804u;
            goto label_29b804;
        }
    }
    ctx->pc = 0x29B7F0u;
    // 0x29b7f0: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x29b7f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x29b7f4: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x29B7F4u;
    {
        const bool branch_taken_0x29b7f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29b7f4) {
            ctx->pc = 0x29B7F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29B7F4u;
            // 0x29b7f8: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29B800u;
            goto label_29b800;
        }
    }
    ctx->pc = 0x29B7FCu;
    // 0x29b7fc: 0x0  nop
    ctx->pc = 0x29b7fcu;
    // NOP
label_29b800:
    // 0x29b800: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x29b800u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_29b804:
    // 0x29b804: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x29b804u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x29b808: 0x67001b  divu        $zero, $v1, $a3
    ctx->pc = 0x29b808u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x29b80c: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x29B80Cu;
    {
        const bool branch_taken_0x29b80c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b80c) {
            ctx->pc = 0x29B810u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29B80Cu;
            // 0x29b810: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x29B814u;
            goto label_29b814;
        }
    }
    ctx->pc = 0x29B814u;
label_29b814:
    // 0x29b814: 0x1012  mflo        $v0
    ctx->pc = 0x29b814u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x29b818: 0x1810  mfhi        $v1
    ctx->pc = 0x29b818u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x29b81c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x29b81cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x29b820: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x29b820u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x29b824: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x29b824u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x29b828: 0x4b3018  mult        $a2, $v0, $t3
    ctx->pc = 0x29b828u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 11); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x29b82c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x29b82cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x29b830: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x29b830u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x29b834: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x29B834u;
    {
        const bool branch_taken_0x29b834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b834) {
            ctx->pc = 0x29B838u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29B834u;
            // 0x29b838: 0x665023  subu        $t2, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29B85Cu;
            goto label_29b85c;
        }
    }
    ctx->pc = 0x29B83Cu;
    // 0x29b83c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x29b83cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x29b840: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x29b840u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x29b844: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29B844u;
    {
        const bool branch_taken_0x29b844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B844u;
            // 0x29b848: 0x665023  subu        $t2, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b844) {
            ctx->pc = 0x29B85Cu;
            goto label_29b85c;
        }
    }
    ctx->pc = 0x29B84Cu;
    // 0x29b84c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x29b84cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x29b850: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x29B850u;
    {
        const bool branch_taken_0x29b850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29b850) {
            ctx->pc = 0x29B854u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29B850u;
            // 0x29b854: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29B858u;
            goto label_29b858;
        }
    }
    ctx->pc = 0x29B858u;
label_29b858:
    // 0x29b858: 0x665023  subu        $t2, $v1, $a2
    ctx->pc = 0x29b858u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_29b85c:
    // 0x29b85c: 0x145001b  divu        $zero, $t2, $a1
    ctx->pc = 0x29b85cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x29b860: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x29b860u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29b864: 0x0  nop
    ctx->pc = 0x29b864u;
    // NOP
label_29b868:
    // 0x29b868: 0xc2402  srl         $a0, $t4, 16
    ctx->pc = 0x29b868u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x29b86c: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x29B86Cu;
    {
        const bool branch_taken_0x29b86c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b86c) {
            ctx->pc = 0x29B870u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29B86Cu;
            // 0x29b870: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x29B874u;
            goto label_29b874;
        }
    }
    ctx->pc = 0x29B874u;
label_29b874:
    // 0x29b874: 0x1012  mflo        $v0
    ctx->pc = 0x29b874u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x29b878: 0x1810  mfhi        $v1
    ctx->pc = 0x29b878u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x29b87c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x29b87cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x29b880: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x29b880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x29b884: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x29b884u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x29b888: 0x473018  mult        $a2, $v0, $a3
    ctx->pc = 0x29b888u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x29b88c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x29b88cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x29b890: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x29b890u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x29b894: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x29B894u;
    {
        const bool branch_taken_0x29b894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b894) {
            ctx->pc = 0x29B898u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29B894u;
            // 0x29b898: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29B8BCu;
            goto label_29b8bc;
        }
    }
    ctx->pc = 0x29B89Cu;
    // 0x29b89c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x29b89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x29b8a0: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x29b8a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x29b8a4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x29B8A4u;
    {
        const bool branch_taken_0x29b8a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29b8a4) {
            ctx->pc = 0x29B8A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29B8A4u;
            // 0x29b8a8: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29B8BCu;
            goto label_29b8bc;
        }
    }
    ctx->pc = 0x29B8ACu;
    // 0x29b8ac: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x29b8acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x29b8b0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x29B8B0u;
    {
        const bool branch_taken_0x29b8b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29b8b0) {
            ctx->pc = 0x29B8B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29B8B0u;
            // 0x29b8b4: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29B8B8u;
            goto label_29b8b8;
        }
    }
    ctx->pc = 0x29B8B8u;
label_29b8b8:
    // 0x29b8b8: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x29b8b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_29b8bc:
    // 0x29b8bc: 0x3184ffff  andi        $a0, $t4, 0xFFFF
    ctx->pc = 0x29b8bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x29b8c0: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x29b8c0u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x29b8c4: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x29B8C4u;
    {
        const bool branch_taken_0x29b8c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b8c4) {
            ctx->pc = 0x29B8C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29B8C4u;
            // 0x29b8c8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x29B8CCu;
            goto label_29b8cc;
        }
    }
    ctx->pc = 0x29B8CCu;
label_29b8cc:
    // 0x29b8cc: 0x1012  mflo        $v0
    ctx->pc = 0x29b8ccu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x29b8d0: 0x1810  mfhi        $v1
    ctx->pc = 0x29b8d0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x29b8d4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x29b8d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x29b8d8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x29b8d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x29b8dc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x29b8dcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x29b8e0: 0x473018  mult        $a2, $v0, $a3
    ctx->pc = 0x29b8e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 7); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x29b8e4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x29b8e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x29b8e8: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x29b8e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x29b8ec: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29B8ECu;
    {
        const bool branch_taken_0x29b8ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29b8ec) {
            ctx->pc = 0x29B90Cu;
            goto label_29b90c;
        }
    }
    ctx->pc = 0x29B8F4u;
    // 0x29b8f4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x29b8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x29b8f8: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x29b8f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x29b8fc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29B8FCu;
    {
        const bool branch_taken_0x29b8fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B8FCu;
            // 0x29b900: 0x66102b  sltu        $v0, $v1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b8fc) {
            ctx->pc = 0x29B90Cu;
            goto label_29b90c;
        }
    }
    ctx->pc = 0x29B904u;
    // 0x29b904: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x29B904u;
    {
        const bool branch_taken_0x29b904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29b904) {
            ctx->pc = 0x29B908u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29B904u;
            // 0x29b908: 0x681821  addu        $v1, $v1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29B90Cu;
            goto label_29b90c;
        }
    }
    ctx->pc = 0x29B90Cu;
label_29b90c:
    // 0x29b90c: 0x13000097  beqz        $t8, . + 4 + (0x97 << 2)
    ctx->pc = 0x29B90Cu;
    {
        const bool branch_taken_0x29b90c = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B90Cu;
            // 0x29b910: 0x666023  subu        $t4, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b90c) {
            ctx->pc = 0x29BB6Cu;
            goto label_29bb6c;
        }
    }
    ctx->pc = 0x29B914u;
    // 0x29b914: 0x1ac1006  srlv        $v0, $t4, $t5
    ctx->pc = 0x29b914u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x29b918: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29b918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29b91c: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x29B91Cu;
    {
        const bool branch_taken_0x29b91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B91Cu;
            // 0x29b920: 0x2783e  dsrl32      $t7, $v0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b91c) {
            ctx->pc = 0x29BB68u;
            goto label_29bb68;
        }
    }
    ctx->pc = 0x29B924u;
label_29b924:
    // 0x29b924: 0x149102b  sltu        $v0, $t2, $t1
    ctx->pc = 0x29b924u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x29b928: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29B928u;
    {
        const bool branch_taken_0x29b928 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B92Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B928u;
            // 0x29b92c: 0xc103c  dsll32      $v0, $t4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b928) {
            ctx->pc = 0x29B944u;
            goto label_29b944;
        }
    }
    ctx->pc = 0x29B930u;
    // 0x29b930: 0xa183c  dsll32      $v1, $t2, 0
    ctx->pc = 0x29b930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 0));
    // 0x29b934: 0x2783e  dsrl32      $t7, $v0, 0
    ctx->pc = 0x29b934u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x29b938: 0x1e37825  or          $t7, $t7, $v1
    ctx->pc = 0x29b938u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 3));
    // 0x29b93c: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x29B93Cu;
    {
        const bool branch_taken_0x29b93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B93Cu;
            // 0x29b940: 0xffaf0000  sd          $t7, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b93c) {
            ctx->pc = 0x29BB6Cu;
            goto label_29bb6c;
        }
    }
    ctx->pc = 0x29B944u;
label_29b944:
    // 0x29b944: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x29b944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x29b948: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x29b948u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x29b94c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29B94Cu;
    {
        const bool branch_taken_0x29b94c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B94Cu;
            // 0x29b950: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b94c) {
            ctx->pc = 0x29B968u;
            goto label_29b968;
        }
    }
    ctx->pc = 0x29B954u;
    // 0x29b954: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x29b954u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x29b958: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x29b958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x29b95c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x29B95Cu;
    {
        const bool branch_taken_0x29b95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B95Cu;
            // 0x29b960: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b95c) {
            ctx->pc = 0x29B980u;
            goto label_29b980;
        }
    }
    ctx->pc = 0x29B964u;
    // 0x29b964: 0x0  nop
    ctx->pc = 0x29b964u;
    // NOP
label_29b968:
    // 0x29b968: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x29b968u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x29b96c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x29b96cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x29b970: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x29b970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x29b974: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x29b974u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x29b978: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x29b978u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x29b97c: 0x0  nop
    ctx->pc = 0x29b97cu;
    // NOP
label_29b980:
    // 0x29b980: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x29b980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x29b984: 0xa92006  srlv        $a0, $t1, $a1
    ctx->pc = 0x29b984u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 5) & 0x1F));
    // 0x29b988: 0x24426f18  addiu       $v0, $v0, 0x6F18
    ctx->pc = 0x29b988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28440));
    // 0x29b98c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x29b98cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x29b990: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x29b990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x29b994: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x29b994u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29b998: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x29b998u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x29b99c: 0xc36823  subu        $t5, $a2, $v1
    ctx->pc = 0x29b99cu;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x29b9a0: 0x15a00011  bnez        $t5, . + 4 + (0x11 << 2)
    ctx->pc = 0x29B9A0u;
    {
        const bool branch_taken_0x29b9a0 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B9A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B9A0u;
            // 0x29b9a4: 0xcd7023  subu        $t6, $a2, $t5 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 13)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b9a0) {
            ctx->pc = 0x29B9E8u;
            goto label_29b9e8;
        }
    }
    ctx->pc = 0x29B9A8u;
    // 0x29b9a8: 0x12a102b  sltu        $v0, $t1, $t2
    ctx->pc = 0x29b9a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x29b9ac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29B9ACu;
    {
        const bool branch_taken_0x29b9ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29B9B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B9ACu;
            // 0x29b9b0: 0x1882023  subu        $a0, $t4, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b9ac) {
            ctx->pc = 0x29B9C0u;
            goto label_29b9c0;
        }
    }
    ctx->pc = 0x29B9B4u;
    // 0x29b9b4: 0x188102b  sltu        $v0, $t4, $t0
    ctx->pc = 0x29b9b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x29b9b8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29B9B8u;
    {
        const bool branch_taken_0x29b9b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29b9b8) {
            ctx->pc = 0x29B9D0u;
            goto label_29b9d0;
        }
    }
    ctx->pc = 0x29B9C0u;
label_29b9c0:
    // 0x29b9c0: 0x1491823  subu        $v1, $t2, $t1
    ctx->pc = 0x29b9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 9)));
    // 0x29b9c4: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x29b9c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x29b9c8: 0x625023  subu        $t2, $v1, $v0
    ctx->pc = 0x29b9c8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29b9cc: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x29b9ccu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29b9d0:
    // 0x29b9d0: 0x13000066  beqz        $t8, . + 4 + (0x66 << 2)
    ctx->pc = 0x29B9D0u;
    {
        const bool branch_taken_0x29b9d0 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B9D0u;
            // 0x29b9d4: 0xc103c  dsll32      $v0, $t4, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b9d0) {
            ctx->pc = 0x29BB6Cu;
            goto label_29bb6c;
        }
    }
    ctx->pc = 0x29B9D8u;
    // 0x29b9d8: 0xa183c  dsll32      $v1, $t2, 0
    ctx->pc = 0x29b9d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) << (32 + 0));
    // 0x29b9dc: 0x2783e  dsrl32      $t7, $v0, 0
    ctx->pc = 0x29b9dcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x29b9e0: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x29B9E0u;
    {
        const bool branch_taken_0x29b9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29B9E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29B9E0u;
            // 0x29b9e4: 0x1e37825  or          $t7, $t7, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29b9e0) {
            ctx->pc = 0x29BB68u;
            goto label_29bb68;
        }
    }
    ctx->pc = 0x29B9E8u;
label_29b9e8:
    // 0x29b9e8: 0x1a92804  sllv        $a1, $t1, $t5
    ctx->pc = 0x29b9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 13) & 0x1F));
    // 0x29b9ec: 0x1c82006  srlv        $a0, $t0, $t6
    ctx->pc = 0x29b9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 14) & 0x1F));
    // 0x29b9f0: 0x1ca3806  srlv        $a3, $t2, $t6
    ctx->pc = 0x29b9f0u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x29b9f4: 0x1cc1006  srlv        $v0, $t4, $t6
    ctx->pc = 0x29b9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 14) & 0x1F));
    // 0x29b9f8: 0x1aa1804  sllv        $v1, $t2, $t5
    ctx->pc = 0x29b9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x29b9fc: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x29b9fcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x29ba00: 0xa44825  or          $t1, $a1, $a0
    ctx->pc = 0x29ba00u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x29ba04: 0x1a84004  sllv        $t0, $t0, $t5
    ctx->pc = 0x29ba04u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 13) & 0x1F));
    // 0x29ba08: 0x1ac6004  sllv        $t4, $t4, $t5
    ctx->pc = 0x29ba08u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 13) & 0x1F));
    // 0x29ba0c: 0x93402  srl         $a2, $t1, 16
    ctx->pc = 0x29ba0cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x29ba10: 0xe6001b  divu        $zero, $a3, $a2
    ctx->pc = 0x29ba10u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x29ba14: 0x3125ffff  andi        $a1, $t1, 0xFFFF
    ctx->pc = 0x29ba14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x29ba18: 0xa2402  srl         $a0, $t2, 16
    ctx->pc = 0x29ba18u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 10), 16));
    // 0x29ba1c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x29BA1Cu;
    {
        const bool branch_taken_0x29ba1c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ba1c) {
            ctx->pc = 0x29BA20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29BA1Cu;
            // 0x29ba20: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x29BA24u;
            goto label_29ba24;
        }
    }
    ctx->pc = 0x29BA24u;
label_29ba24:
    // 0x29ba24: 0x1012  mflo        $v0
    ctx->pc = 0x29ba24u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x29ba28: 0x1810  mfhi        $v1
    ctx->pc = 0x29ba28u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x29ba2c: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x29ba2cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ba30: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x29ba30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x29ba34: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x29ba34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x29ba38: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x29ba38u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x29ba3c: 0x1653818  mult        $a3, $t3, $a1
    ctx->pc = 0x29ba3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x29ba40: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x29ba40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x29ba44: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x29ba44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x29ba48: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x29BA48u;
    {
        const bool branch_taken_0x29ba48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ba48) {
            ctx->pc = 0x29BA4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29BA48u;
            // 0x29ba4c: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29BA7Cu;
            goto label_29ba7c;
        }
    }
    ctx->pc = 0x29BA50u;
    // 0x29ba50: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x29ba50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x29ba54: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x29ba54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x29ba58: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x29BA58u;
    {
        const bool branch_taken_0x29ba58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29BA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BA58u;
            // 0x29ba5c: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ba58) {
            ctx->pc = 0x29BA78u;
            goto label_29ba78;
        }
    }
    ctx->pc = 0x29BA60u;
    // 0x29ba60: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x29ba60u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x29ba64: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x29BA64u;
    {
        const bool branch_taken_0x29ba64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ba64) {
            ctx->pc = 0x29BA68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29BA64u;
            // 0x29ba68: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29BA7Cu;
            goto label_29ba7c;
        }
    }
    ctx->pc = 0x29BA6Cu;
    // 0x29ba6c: 0x256bffff  addiu       $t3, $t3, -0x1
    ctx->pc = 0x29ba6cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x29ba70: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x29ba70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x29ba74: 0x0  nop
    ctx->pc = 0x29ba74u;
    // NOP
label_29ba78:
    // 0x29ba78: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x29ba78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_29ba7c:
    // 0x29ba7c: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x29BA7Cu;
    {
        const bool branch_taken_0x29ba7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x29ba7c) {
            ctx->pc = 0x29BA80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29BA7Cu;
            // 0x29ba80: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x29BA84u;
            goto label_29ba84;
        }
    }
    ctx->pc = 0x29BA84u;
label_29ba84:
    // 0x29ba84: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x29ba84u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x29ba88: 0x3144ffff  andi        $a0, $t2, 0xFFFF
    ctx->pc = 0x29ba88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
    // 0x29ba8c: 0x1012  mflo        $v0
    ctx->pc = 0x29ba8cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x29ba90: 0x1810  mfhi        $v1
    ctx->pc = 0x29ba90u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x29ba94: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x29ba94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ba98: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x29ba98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x29ba9c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x29ba9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x29baa0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x29baa0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x29baa4: 0xc53818  mult        $a3, $a2, $a1
    ctx->pc = 0x29baa4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x29baa8: 0x642825  or          $a1, $v1, $a0
    ctx->pc = 0x29baa8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x29baac: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x29baacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x29bab0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x29BAB0u;
    {
        const bool branch_taken_0x29bab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BAB0u;
            // 0x29bab4: 0xb103c  dsll32      $v0, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bab0) {
            ctx->pc = 0x29BAE0u;
            goto label_29bae0;
        }
    }
    ctx->pc = 0x29BAB8u;
    // 0x29bab8: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x29bab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x29babc: 0xa9102b  sltu        $v0, $a1, $t1
    ctx->pc = 0x29babcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x29bac0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29BAC0u;
    {
        const bool branch_taken_0x29bac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29BAC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BAC0u;
            // 0x29bac4: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bac0) {
            ctx->pc = 0x29BADCu;
            goto label_29badc;
        }
    }
    ctx->pc = 0x29BAC8u;
    // 0x29bac8: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x29bac8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x29bacc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29BACCu;
    {
        const bool branch_taken_0x29bacc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BAD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BACCu;
            // 0x29bad0: 0xb103c  dsll32      $v0, $t3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bacc) {
            ctx->pc = 0x29BAE0u;
            goto label_29bae0;
        }
    }
    ctx->pc = 0x29BAD4u;
    // 0x29bad4: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x29bad4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x29bad8: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x29bad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
label_29badc:
    // 0x29badc: 0xb103c  dsll32      $v0, $t3, 0
    ctx->pc = 0x29badcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (32 + 0));
label_29bae0:
    // 0x29bae0: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x29bae0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x29bae4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x29bae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x29bae8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x29bae8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x29baec: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x29baecu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29baf0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x29baf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x29baf4: 0x480019  multu       $v0, $t0
    ctx->pc = 0x29baf4u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x29baf8: 0x3810  mfhi        $a3
    ctx->pc = 0x29baf8u;
    SET_GPR_U64(ctx, 7, ctx->hi);
    // 0x29bafc: 0x3012  mflo        $a2
    ctx->pc = 0x29bafcu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x29bb00: 0x147182b  sltu        $v1, $t2, $a3
    ctx->pc = 0x29bb00u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x29bb04: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29BB04u;
    {
        const bool branch_taken_0x29bb04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29BB08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BB04u;
            // 0x29bb08: 0xc82023  subu        $a0, $a2, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bb04) {
            ctx->pc = 0x29BB20u;
            goto label_29bb20;
        }
    }
    ctx->pc = 0x29BB0Cu;
    // 0x29bb0c: 0x14ea0008  bne         $a3, $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x29BB0Cu;
    {
        const bool branch_taken_0x29bb0c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 10));
        ctx->pc = 0x29BB10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BB0Cu;
            // 0x29bb10: 0x186102b  sltu        $v0, $t4, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bb0c) {
            ctx->pc = 0x29BB30u;
            goto label_29bb30;
        }
    }
    ctx->pc = 0x29BB14u;
    // 0x29bb14: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x29BB14u;
    {
        const bool branch_taken_0x29bb14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29bb14) {
            ctx->pc = 0x29BB30u;
            goto label_29bb30;
        }
    }
    ctx->pc = 0x29BB1Cu;
    // 0x29bb1c: 0x0  nop
    ctx->pc = 0x29bb1cu;
    // NOP
label_29bb20:
    // 0x29bb20: 0xe91823  subu        $v1, $a3, $t1
    ctx->pc = 0x29bb20u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x29bb24: 0xc4102b  sltu        $v0, $a2, $a0
    ctx->pc = 0x29bb24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x29bb28: 0x623823  subu        $a3, $v1, $v0
    ctx->pc = 0x29bb28u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29bb2c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x29bb2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29bb30:
    // 0x29bb30: 0x1300000e  beqz        $t8, . + 4 + (0xE << 2)
    ctx->pc = 0x29BB30u;
    {
        const bool branch_taken_0x29bb30 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x29BB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BB30u;
            // 0x29bb34: 0x1862023  subu        $a0, $t4, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29bb30) {
            ctx->pc = 0x29BB6Cu;
            goto label_29bb6c;
        }
    }
    ctx->pc = 0x29BB38u;
    // 0x29bb38: 0xa71823  subu        $v1, $a1, $a3
    ctx->pc = 0x29bb38u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x29bb3c: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x29bb3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x29bb40: 0x625023  subu        $t2, $v1, $v0
    ctx->pc = 0x29bb40u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x29bb44: 0x1ca2804  sllv        $a1, $t2, $t6
    ctx->pc = 0x29bb44u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 14) & 0x1F));
    // 0x29bb48: 0x1a42006  srlv        $a0, $a0, $t5
    ctx->pc = 0x29bb48u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), GPR_U32(ctx, 13) & 0x1F));
    // 0x29bb4c: 0x1aa1006  srlv        $v0, $t2, $t5
    ctx->pc = 0x29bb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 13) & 0x1F));
    // 0x29bb50: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x29bb50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x29bb54: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29bb54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29bb58: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x29bb58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x29bb5c: 0x5783e  dsrl32      $t7, $a1, 0
    ctx->pc = 0x29bb5cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x29bb60: 0x1e27825  or          $t7, $t7, $v0
    ctx->pc = 0x29bb60u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 2));
    // 0x29bb64: 0x0  nop
    ctx->pc = 0x29bb64u;
    // NOP
label_29bb68:
    // 0x29bb68: 0xff0f0000  sd          $t7, 0x0($t8)
    ctx->pc = 0x29bb68u;
    WRITE64(ADD32(GPR_U32(ctx, 24), 0), GPR_U64(ctx, 15));
label_29bb6c:
    // 0x29bb6c: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x29bb6cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29bb70: 0x3e00008  jr          $ra
    ctx->pc = 0x29BB70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29BB74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29BB70u;
            // 0x29bb74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29B688u: goto label_29b688;
            case 0x29B6A0u: goto label_29b6a0;
            case 0x29B6DCu: goto label_29b6dc;
            case 0x29B6F0u: goto label_29b6f0;
            case 0x29B704u: goto label_29b704;
            case 0x29B718u: goto label_29b718;
            case 0x29B730u: goto label_29b730;
            case 0x29B748u: goto label_29b748;
            case 0x29B780u: goto label_29b780;
            case 0x29B7B4u: goto label_29b7b4;
            case 0x29B800u: goto label_29b800;
            case 0x29B804u: goto label_29b804;
            case 0x29B814u: goto label_29b814;
            case 0x29B858u: goto label_29b858;
            case 0x29B85Cu: goto label_29b85c;
            case 0x29B868u: goto label_29b868;
            case 0x29B874u: goto label_29b874;
            case 0x29B8B8u: goto label_29b8b8;
            case 0x29B8BCu: goto label_29b8bc;
            case 0x29B8CCu: goto label_29b8cc;
            case 0x29B90Cu: goto label_29b90c;
            case 0x29B924u: goto label_29b924;
            case 0x29B944u: goto label_29b944;
            case 0x29B968u: goto label_29b968;
            case 0x29B980u: goto label_29b980;
            case 0x29B9C0u: goto label_29b9c0;
            case 0x29B9D0u: goto label_29b9d0;
            case 0x29B9E8u: goto label_29b9e8;
            case 0x29BA24u: goto label_29ba24;
            case 0x29BA78u: goto label_29ba78;
            case 0x29BA7Cu: goto label_29ba7c;
            case 0x29BA84u: goto label_29ba84;
            case 0x29BADCu: goto label_29badc;
            case 0x29BAE0u: goto label_29bae0;
            case 0x29BB20u: goto label_29bb20;
            case 0x29BB30u: goto label_29bb30;
            case 0x29BB68u: goto label_29bb68;
            case 0x29BB6Cu: goto label_29bb6c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29BB78u;
    // 0x29bb78: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x29bb78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x29bb7c: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x29bb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x29bb80: 0x2484618c  addiu       $a0, $a0, 0x618C
    ctx->pc = 0x29bb80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24972));
    // 0x29bb84: 0x80a1be2  j           func_286F88
    ctx->pc = 0x29BB84u;
    ctx->pc = 0x29BB88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BB84u;
            // 0x29bb88: 0x24a5e830  addiu       $a1, $a1, -0x17D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286F88u;
    if (runtime->hasFunction(0x286F88u)) {
        auto targetFn = runtime->lookupFunction(0x286F88u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        entry_286f88_0x286fb0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x29BB8Cu;
    // 0x29bb8c: 0x0  nop
    ctx->pc = 0x29bb8cu;
    // NOP
    // 0x29bb90: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x29bb90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x29bb94: 0x80a1bec  j           func_286FB0
    ctx->pc = 0x29BB94u;
    ctx->pc = 0x29BB98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BB94u;
            // 0x29bb98: 0x2484618c  addiu       $a0, $a0, 0x618C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24972));
        ctx->in_delay_slot = false;
    ctx->pc = 0x286FB0u;
    if (runtime->hasFunction(0x286FB0u)) {
        auto targetFn = runtime->lookupFunction(0x286FB0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        FUN_00286fb0_0x286fb0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x29BB9Cu;
    // 0x29bb9c: 0x0  nop
    ctx->pc = 0x29bb9cu;
    // NOP
    // 0x29bba0: 0x0  nop
    ctx->pc = 0x29bba0u;
    // NOP
}
