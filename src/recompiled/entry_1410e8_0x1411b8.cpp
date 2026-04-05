#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1410e8
// Address: 0x1410e8 - 0x1411b8
void entry_1410e8_0x1411b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1410e8_0x1411b8");
#endif

    ctx->pc = 0x1410e8u;

    // 0x1410e8: 0x8c8a0120  lw          $t2, 0x120($a0)
    ctx->pc = 0x1410e8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 288)));
    // 0x1410ec: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x1410ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x1410f0: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x1410f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x1410f4: 0x8c88001c  lw          $t0, 0x1C($a0)
    ctx->pc = 0x1410f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1410f8: 0x1421025  or          $v0, $t2, $v0
    ctx->pc = 0x1410f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x1410fc: 0xa4f00  sll         $t1, $t2, 28
    ctx->pc = 0x1410fcu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 10), 28));
    // 0x141100: 0xac8200f8  sw          $v0, 0xF8($a0)
    ctx->pc = 0x141100u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 248), GPR_U32(ctx, 2));
    // 0x141104: 0x354a4000  ori         $t2, $t2, 0x4000
    ctx->pc = 0x141104u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)16384);
    // 0x141108: 0x8c870124  lw          $a3, 0x124($a0)
    ctx->pc = 0x141108u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
    // 0x14110c: 0x3c0b6c00  lui         $t3, 0x6C00
    ctx->pc = 0x14110cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)27648 << 16));
    // 0x141110: 0x8d020030  lw          $v0, 0x30($t0)
    ctx->pc = 0x141110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x141114: 0x3c0c0100  lui         $t4, 0x100
    ctx->pc = 0x141114u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)256 << 16));
    // 0x141118: 0xeb3825  or          $a3, $a3, $t3
    ctx->pc = 0x141118u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 11));
    // 0x14111c: 0x8c850128  lw          $a1, 0x128($a0)
    ctx->pc = 0x14111cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 296)));
    // 0x141120: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x141120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x141124: 0x34e78000  ori         $a3, $a3, 0x8000
    ctx->pc = 0x141124u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32768);
    // 0x141128: 0xac820100  sw          $v0, 0x100($a0)
    ctx->pc = 0x141128u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 2));
    // 0x14112c: 0xab2825  or          $a1, $a1, $t3
    ctx->pc = 0x14112cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 11));
    // 0x141130: 0x34a5c000  ori         $a1, $a1, 0xC000
    ctx->pc = 0x141130u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)49152);
    // 0x141134: 0x8c83012c  lw          $v1, 0x12C($a0)
    ctx->pc = 0x141134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 300)));
    // 0x141138: 0x8d020010  lw          $v0, 0x10($t0)
    ctx->pc = 0x141138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x14113c: 0x358c0101  ori         $t4, $t4, 0x101
    ctx->pc = 0x14113cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)257);
    // 0x141140: 0x6b1825  or          $v1, $v1, $t3
    ctx->pc = 0x141140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 11));
    // 0x141144: 0x8c860130  lw          $a2, 0x130($a0)
    ctx->pc = 0x141144u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x141148: 0x213c0  sll         $v0, $v0, 15
    ctx->pc = 0x141148u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x14114c: 0x34638000  ori         $v1, $v1, 0x8000
    ctx->pc = 0x14114cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32768);
    // 0x141150: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x141150u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x141154: 0xcb3025  or          $a2, $a2, $t3
    ctx->pc = 0x141154u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 11));
    // 0x141158: 0x12a4825  or          $t1, $t1, $t2
    ctx->pc = 0x141158u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 10));
    // 0x14115c: 0x34c68000  ori         $a2, $a2, 0x8000
    ctx->pc = 0x14115cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32768);
    // 0x141160: 0xac890104  sw          $t1, 0x104($a0)
    ctx->pc = 0x141160u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 260), GPR_U32(ctx, 9));
    // 0x141164: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x141164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x141168: 0xac80010c  sw          $zero, 0x10C($a0)
    ctx->pc = 0x141168u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 268), GPR_U32(ctx, 0));
    // 0x14116c: 0xac820108  sw          $v0, 0x108($a0)
    ctx->pc = 0x14116cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 264), GPR_U32(ctx, 2));
    // 0x141170: 0x91020030  lbu         $v0, 0x30($t0)
    ctx->pc = 0x141170u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x141174: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x141174u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x141178: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x141178u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x14117c: 0xac870110  sw          $a3, 0x110($a0)
    ctx->pc = 0x14117cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 272), GPR_U32(ctx, 7));
    // 0x141180: 0x91020030  lbu         $v0, 0x30($t0)
    ctx->pc = 0x141180u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x141184: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x141184u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x141188: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x141188u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x14118c: 0xac850114  sw          $a1, 0x114($a0)
    ctx->pc = 0x14118cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 276), GPR_U32(ctx, 5));
    // 0x141190: 0x91020030  lbu         $v0, 0x30($t0)
    ctx->pc = 0x141190u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x141194: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x141194u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x141198: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x141198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14119c: 0xac830118  sw          $v1, 0x118($a0)
    ctx->pc = 0x14119cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 280), GPR_U32(ctx, 3));
    // 0x1411a0: 0x91020030  lbu         $v0, 0x30($t0)
    ctx->pc = 0x1411a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x1411a4: 0xac8c00fc  sw          $t4, 0xFC($a0)
    ctx->pc = 0x1411a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 252), GPR_U32(ctx, 12));
    // 0x1411a8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1411a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1411ac: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x1411acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x1411b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1411B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1411B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1411B0u;
            // 0x1411b4: 0xac86011c  sw          $a2, 0x11C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 284), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1411B8u;
}
