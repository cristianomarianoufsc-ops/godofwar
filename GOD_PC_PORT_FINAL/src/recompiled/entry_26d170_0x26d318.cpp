#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_26d170
// Address: 0x26d170 - 0x26d318
void entry_26d170_0x26d318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_26d170_0x26d318");
#endif

    ctx->pc = 0x26d170u;

    // 0x26d170: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x26d170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x26d174: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x26d174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x26d178: 0x2442a340  addiu       $v0, $v0, -0x5CC0
    ctx->pc = 0x26d178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943552));
    // 0x26d17c: 0x240c0009  addiu       $t4, $zero, 0x9
    ctx->pc = 0x26d17cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x26d180: 0x436825  or          $t5, $v0, $v1
    ctx->pc = 0x26d180u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26d184: 0x80c02d  daddu       $t8, $a0, $zero
    ctx->pc = 0x26d184u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d188: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x26d188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x26d18c: 0xa5ac0000  sh          $t4, 0x0($t5)
    ctx->pc = 0x26d18cu;
    WRITE16(ADD32(GPR_U32(ctx, 13), 0), (uint16_t)GPR_U32(ctx, 12));
    // 0x26d190: 0xa1a20003  sb          $v0, 0x3($t5)
    ctx->pc = 0x26d190u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x26d194: 0x240c000e  addiu       $t4, $zero, 0xE
    ctx->pc = 0x26d194u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x26d198: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x26d198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x26d19c: 0x25ad0010  addiu       $t5, $t5, 0x10
    ctx->pc = 0x26d19cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x26d1a0: 0x8c4ea318  lw          $t6, -0x5CE8($v0)
    ctx->pc = 0x26d1a0u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943512)));
    // 0x26d1a4: 0x3c03108b  lui         $v1, 0x108B
    ctx->pc = 0x26d1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4235 << 16));
    // 0x26d1a8: 0x34634000  ori         $v1, $v1, 0x4000
    ctx->pc = 0x26d1a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16384);
    // 0x26d1ac: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x26d1acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x26d1b0: 0x34638008  ori         $v1, $v1, 0x8008
    ctx->pc = 0x26d1b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32776);
    // 0x26d1b4: 0xfdac0008  sd          $t4, 0x8($t5)
    ctx->pc = 0x26d1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 8), GPR_U64(ctx, 12));
    // 0x26d1b8: 0xa0782d  daddu       $t7, $a1, $zero
    ctx->pc = 0x26d1b8u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d1bc: 0xfda30000  sd          $v1, 0x0($t5)
    ctx->pc = 0x26d1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 13), 0), GPR_U64(ctx, 3));
    // 0x26d1c0: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x26d1c0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d1c4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x26d1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26d1c8: 0x11c20004  beq         $t6, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26D1C8u;
    {
        const bool branch_taken_0x26d1c8 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 2));
        ctx->pc = 0x26D1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D1C8u;
            // 0x26d1cc: 0x25ad0010  addiu       $t5, $t5, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d1c8) {
            ctx->pc = 0x26D1DCu;
            goto label_26d1dc;
        }
    }
    ctx->pc = 0x26D1D0u;
    // 0x26d1d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26d1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26d1d4: 0x15c20013  bne         $t6, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x26D1D4u;
    {
        const bool branch_taken_0x26d1d4 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 2));
        ctx->pc = 0x26D1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D1D4u;
            // 0x26d1d8: 0x2402007f  addiu       $v0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d1d4) {
            ctx->pc = 0x26D224u;
            goto label_26d224;
        }
    }
    ctx->pc = 0x26D1DCu;
label_26d1dc:
    // 0x26d1dc: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x26d1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x26d1e0: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x26d1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26d1e4: 0x8443a320  lh          $v1, -0x5CE0($v0)
    ctx->pc = 0x26d1e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294943520)));
    // 0x26d1e8: 0x3406ff00  ori         $a2, $zero, 0xFF00
    ctx->pc = 0x26d1e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x26d1ec: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x26d1ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x26d1f0: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x26d1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x26d1f4: 0x8c45a304  lw          $a1, -0x5CFC($v0)
    ctx->pc = 0x26d1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294943492)));
    // 0x26d1f8: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x26d1f8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x26d1fc: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x26d1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x26d200: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x26d200u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x26d204: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x26d204u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x26d208: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x26d208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x26d20c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x26d20cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x26d210: 0xfda30008  sd          $v1, 0x8($t5)
    ctx->pc = 0x26d210u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 8), GPR_U64(ctx, 3));
    // 0x26d214: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x26d214u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x26d218: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x26d218u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x26d21c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26D21Cu;
    {
        const bool branch_taken_0x26d21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D21Cu;
            // 0x26d220: 0xfda50000  sd          $a1, 0x0($t5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 13), 0), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d21c) {
            ctx->pc = 0x26D228u;
            goto label_26d228;
        }
    }
    ctx->pc = 0x26D224u;
label_26d224:
    // 0x26d224: 0xfda20008  sd          $v0, 0x8($t5)
    ctx->pc = 0x26d224u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 8), GPR_U64(ctx, 2));
label_26d228:
    // 0x26d228: 0x25ad0010  addiu       $t5, $t5, 0x10
    ctx->pc = 0x26d228u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x26d22c: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x26d22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
    // 0x26d230: 0x3404aa80  ori         $a0, $zero, 0xAA80
    ctx->pc = 0x26d230u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43648);
    // 0x26d234: 0x42538  dsll        $a0, $a0, 20
    ctx->pc = 0x26d234u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 20);
    // 0x26d238: 0x214ba  dsrl        $v0, $v0, 18
    ctx->pc = 0x26d238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 18);
    // 0x26d23c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x26d23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x26d240: 0x1621025  or          $v0, $t3, $v0
    ctx->pc = 0x26d240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
    // 0x26d244: 0xfda30008  sd          $v1, 0x8($t5)
    ctx->pc = 0x26d244u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 8), GPR_U64(ctx, 3));
    // 0x26d248: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x26d248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x26d24c: 0x24030061  addiu       $v1, $zero, 0x61
    ctx->pc = 0x26d24cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
    // 0x26d250: 0xfda20000  sd          $v0, 0x0($t5)
    ctx->pc = 0x26d250u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 0), GPR_U64(ctx, 2));
    // 0x26d254: 0x2406003f  addiu       $a2, $zero, 0x3F
    ctx->pc = 0x26d254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x26d258: 0x25ad0010  addiu       $t5, $t5, 0x10
    ctx->pc = 0x26d258u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x26d25c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x26d25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x26d260: 0xfda30000  sd          $v1, 0x0($t5)
    ctx->pc = 0x26d260u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 0), GPR_U64(ctx, 3));
    // 0x26d264: 0x82100  sll         $a0, $t0, 4
    ctx->pc = 0x26d264u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x26d268: 0xfda20008  sd          $v0, 0x8($t5)
    ctx->pc = 0x26d268u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 8), GPR_U64(ctx, 2));
    // 0x26d26c: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x26d26cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
    // 0x26d270: 0x34630008  ori         $v1, $v1, 0x8
    ctx->pc = 0x26d270u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x26d274: 0x25ad0010  addiu       $t5, $t5, 0x10
    ctx->pc = 0x26d274u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x26d278: 0xf103c  dsll32      $v0, $t7, 0
    ctx->pc = 0x26d278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) << (32 + 0));
    // 0x26d27c: 0xfda60008  sd          $a2, 0x8($t5)
    ctx->pc = 0x26d27cu;
    WRITE64(ADD32(GPR_U32(ctx, 13), 8), GPR_U64(ctx, 6));
    // 0x26d280: 0x24080003  addiu       $t0, $zero, 0x3
    ctx->pc = 0x26d280u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26d284: 0xfda00000  sd          $zero, 0x0($t5)
    ctx->pc = 0x26d284u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 0), GPR_U64(ctx, 0));
    // 0x26d288: 0x18303c  dsll32      $a2, $t8, 0
    ctx->pc = 0x26d288u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 24) << (32 + 0));
    // 0x26d28c: 0x25ad0010  addiu       $t5, $t5, 0x10
    ctx->pc = 0x26d28cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x26d290: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x26d290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x26d294: 0xfda30000  sd          $v1, 0x0($t5)
    ctx->pc = 0x26d294u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 0), GPR_U64(ctx, 3));
    // 0x26d298: 0x92900  sll         $a1, $t1, 4
    ctx->pc = 0x26d298u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x26d29c: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x26d29cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x26d2a0: 0xfda80008  sd          $t0, 0x8($t5)
    ctx->pc = 0x26d2a0u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 8), GPR_U64(ctx, 8));
    // 0x26d2a4: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x26d2a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x26d2a8: 0x71900  sll         $v1, $a3, 4
    ctx->pc = 0x26d2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x26d2ac: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x26d2acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x26d2b0: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x26d2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x26d2b4: 0x25ad0010  addiu       $t5, $t5, 0x10
    ctx->pc = 0x26d2b4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x26d2b8: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x26d2b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x26d2bc: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x26d2bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x26d2c0: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x26d2c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x26d2c4: 0xc1100  sll         $v0, $t4, 4
    ctx->pc = 0x26d2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x26d2c8: 0xfda60000  sd          $a2, 0x0($t5)
    ctx->pc = 0x26d2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 0), GPR_U64(ctx, 6));
    // 0x26d2cc: 0xfda70008  sd          $a3, 0x8($t5)
    ctx->pc = 0x26d2ccu;
    WRITE64(ADD32(GPR_U32(ctx, 13), 8), GPR_U64(ctx, 7));
    // 0x26d2d0: 0x3021021  addu        $v0, $t8, $v0
    ctx->pc = 0x26d2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 24), GPR_U32(ctx, 2)));
    // 0x26d2d4: 0x1e31821  addu        $v1, $t7, $v1
    ctx->pc = 0x26d2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 3)));
    // 0x26d2d8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x26d2d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x26d2dc: 0x52c3a  dsrl        $a1, $a1, 16
    ctx->pc = 0x26d2dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 16);
    // 0x26d2e0: 0x25ad0010  addiu       $t5, $t5, 0x10
    ctx->pc = 0x26d2e0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x26d2e4: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x26d2e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x26d2e8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x26d2e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x26d2ec: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x26d2ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x26d2f0: 0xfda40000  sd          $a0, 0x0($t5)
    ctx->pc = 0x26d2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 0), GPR_U64(ctx, 4));
    // 0x26d2f4: 0xfda80008  sd          $t0, 0x8($t5)
    ctx->pc = 0x26d2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 8), GPR_U64(ctx, 8));
    // 0x26d2f8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x26d2f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x26d2fc: 0x31c3a  dsrl        $v1, $v1, 16
    ctx->pc = 0x26d2fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 16);
    // 0x26d300: 0x25ad0010  addiu       $t5, $t5, 0x10
    ctx->pc = 0x26d300u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x26d304: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26d304u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26d308: 0xfda70008  sd          $a3, 0x8($t5)
    ctx->pc = 0x26d308u;
    WRITE64(ADD32(GPR_U32(ctx, 13), 8), GPR_U64(ctx, 7));
    // 0x26d30c: 0x3e00008  jr          $ra
    ctx->pc = 0x26D30Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26D310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D30Cu;
            // 0x26d310: 0xfda20000  sd          $v0, 0x0($t5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 13), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26D1DCu: goto label_26d1dc;
            case 0x26D224u: goto label_26d224;
            case 0x26D228u: goto label_26d228;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26D314u;
    // 0x26d314: 0x0  nop
    ctx->pc = 0x26d314u;
    // NOP
}
