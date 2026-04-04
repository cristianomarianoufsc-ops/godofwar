#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_26dd48
// Address: 0x26dd48 - 0x26e270
void entry_26dd48_0x26e270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_26dd48_0x26e270");
#endif

    ctx->pc = 0x26dd48u;

    // 0x26dd48: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x26dd48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dd4c: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x26dd4cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26dd50: 0x8526005a  lh          $a2, 0x5A($t1)
    ctx->pc = 0x26dd50u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 90)));
    // 0x26dd54: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x26dd54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26dd58: 0x8523005e  lh          $v1, 0x5E($t1)
    ctx->pc = 0x26dd58u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 94)));
    // 0x26dd5c: 0x24c5003f  addiu       $a1, $a2, 0x3F
    ctx->pc = 0x26dd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 63));
    // 0x26dd60: 0x24c2007e  addiu       $v0, $a2, 0x7E
    ctx->pc = 0x26dd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 126));
    // 0x26dd64: 0xe5202a  slt         $a0, $a3, $a1
    ctx->pc = 0x26dd64u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x26dd68: 0x952e005a  lhu         $t6, 0x5A($t1)
    ctx->pc = 0x26dd68u;
    SET_GPR_U32(ctx, 14, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 90)));
    // 0x26dd6c: 0xa4100b  movn        $v0, $a1, $a0
    ctx->pc = 0x26dd6cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x26dd70: 0x9528005c  lhu         $t0, 0x5C($t1)
    ctx->pc = 0x26dd70u;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 92)));
    // 0x26dd74: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x26dd74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x26dd78: 0x8525005c  lh          $a1, 0x5C($t1)
    ctx->pc = 0x26dd78u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 92)));
    // 0x26dd7c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x26DD7Cu;
    {
        const bool branch_taken_0x26dd7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DD80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DD7Cu;
            // 0x26dd80: 0x23183  sra         $a2, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dd7c) {
            ctx->pc = 0x26DD9Cu;
            goto label_26dd9c;
        }
    }
    ctx->pc = 0x26DD84u;
    // 0x26dd84: 0x24a2003f  addiu       $v0, $a1, 0x3F
    ctx->pc = 0x26dd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
    // 0x26dd88: 0x24a3007e  addiu       $v1, $a1, 0x7E
    ctx->pc = 0x26dd88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 126));
    // 0x26dd8c: 0xe2202a  slt         $a0, $a3, $v0
    ctx->pc = 0x26dd8cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26dd90: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x26dd90u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x26dd94: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x26DD94u;
    {
        const bool branch_taken_0x26dd94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DD98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DD94u;
            // 0x26dd98: 0x32983  sra         $a1, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dd94) {
            ctx->pc = 0x26DDB4u;
            goto label_26ddb4;
        }
    }
    ctx->pc = 0x26DD9Cu;
label_26dd9c:
    // 0x26dd9c: 0x24a2001f  addiu       $v0, $a1, 0x1F
    ctx->pc = 0x26dd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 31));
    // 0x26dda0: 0x24a3003e  addiu       $v1, $a1, 0x3E
    ctx->pc = 0x26dda0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 62));
    // 0x26dda4: 0xe2202a  slt         $a0, $a3, $v0
    ctx->pc = 0x26dda4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26dda8: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x26dda8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x26ddac: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x26ddacu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x26ddb0: 0x32c03  sra         $a1, $v1, 16
    ctx->pc = 0x26ddb0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 16));
label_26ddb4:
    // 0x26ddb4: 0xe1400  sll         $v0, $t6, 16
    ctx->pc = 0x26ddb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x26ddb8: 0xc52818  mult        $a1, $a2, $a1
    ctx->pc = 0x26ddb8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x26ddbc: 0x23c03  sra         $a3, $v0, 16
    ctx->pc = 0x26ddbcu;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 16));
    // 0x26ddc0: 0x240affff  addiu       $t2, $zero, -0x1
    ctx->pc = 0x26ddc0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26ddc4: 0x24e6003f  addiu       $a2, $a3, 0x3F
    ctx->pc = 0x26ddc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 63));
    // 0x26ddc8: 0x24e3007e  addiu       $v1, $a3, 0x7E
    ctx->pc = 0x26ddc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 126));
    // 0x26ddcc: 0x146102a  slt         $v0, $t2, $a2
    ctx->pc = 0x26ddccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x26ddd0: 0x85240058  lh          $a0, 0x58($t1)
    ctx->pc = 0x26ddd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 88)));
    // 0x26ddd4: 0xc2180b  movn        $v1, $a2, $v0
    ctx->pc = 0x26ddd4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x26ddd8: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x26ddd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x26dddc: 0x81400  sll         $v0, $t0, 16
    ctx->pc = 0x26dddcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x26dde0: 0x57c43  sra         $t7, $a1, 17
    ctx->pc = 0x26dde0u;
    SET_GPR_S32(ctx, 15, SRA32(GPR_S32(ctx, 5), 17));
    // 0x26dde4: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x26dde4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x26dde8: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x26dde8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x26ddec: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26DDECu;
    {
        const bool branch_taken_0x26ddec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DDF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DDECu;
            // 0x26ddf0: 0x33983  sra         $a3, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ddec) {
            ctx->pc = 0x26DE0Cu;
            goto label_26de0c;
        }
    }
    ctx->pc = 0x26DDF4u;
    // 0x26ddf4: 0x24c2003f  addiu       $v0, $a2, 0x3F
    ctx->pc = 0x26ddf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 63));
    // 0x26ddf8: 0x24c3007e  addiu       $v1, $a2, 0x7E
    ctx->pc = 0x26ddf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 126));
    // 0x26ddfc: 0x142202a  slt         $a0, $t2, $v0
    ctx->pc = 0x26ddfcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26de00: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x26de00u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x26de04: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x26DE04u;
    {
        const bool branch_taken_0x26de04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DE04u;
            // 0x26de08: 0x33183  sra         $a2, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26de04) {
            ctx->pc = 0x26DE24u;
            goto label_26de24;
        }
    }
    ctx->pc = 0x26DE0Cu;
label_26de0c:
    // 0x26de0c: 0x24c2001f  addiu       $v0, $a2, 0x1F
    ctx->pc = 0x26de0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 31));
    // 0x26de10: 0x24c3003e  addiu       $v1, $a2, 0x3E
    ctx->pc = 0x26de10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 62));
    // 0x26de14: 0x142202a  slt         $a0, $t2, $v0
    ctx->pc = 0x26de14u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x26de18: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x26de18u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x26de1c: 0x31ac0  sll         $v1, $v1, 11
    ctx->pc = 0x26de1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 11));
    // 0x26de20: 0x33403  sra         $a2, $v1, 16
    ctx->pc = 0x26de20u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 16));
label_26de24:
    // 0x26de24: 0x8d220044  lw          $v0, 0x44($t1)
    ctx->pc = 0x26de24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 68)));
    // 0x26de28: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x26de28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x26de2c: 0xe63018  mult        $a2, $a3, $a2
    ctx->pc = 0x26de2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x26de30: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x26de30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x26de34: 0x452818  mult        $a1, $v0, $a1
    ctx->pc = 0x26de34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x26de38: 0x246313b8  addiu       $v1, $v1, 0x13B8
    ctx->pc = 0x26de38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5048));
    // 0x26de3c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x26de3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x26de40: 0x95270058  lhu         $a3, 0x58($t1)
    ctx->pc = 0x26de40u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 88)));
    // 0x26de44: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x26de44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x26de48: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x26de48u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x26de4c: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x26de4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x26de50: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x26de50u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x26de54: 0x652021  addu        $a0, $v1, $a1
    ctx->pc = 0x26de54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x26de58: 0x844c0040  lh          $t4, 0x40($v0)
    ctx->pc = 0x26de58u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x26de5c: 0x8c8b0024  lw          $t3, 0x24($a0)
    ctx->pc = 0x26de5cu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x26de60: 0xe1400  sll         $v0, $t6, 16
    ctx->pc = 0x26de60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 14), 16));
    // 0x26de64: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x26de64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26de68: 0x63443  sra         $a2, $a2, 17
    ctx->pc = 0x26de68u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 17));
    // 0x26de6c: 0x27583  sra         $t6, $v0, 22
    ctx->pc = 0x26de6cu;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 2), 22));
    // 0x26de70: 0x8c980028  lw          $t8, 0x28($a0)
    ctx->pc = 0x26de70u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x26de74: 0x84403  sra         $t0, $t0, 16
    ctx->pc = 0x26de74u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 16));
    // 0x26de78: 0x8c6a002c  lw          $t2, 0x2C($v1)
    ctx->pc = 0x26de78u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x26de7c: 0x30e70002  andi        $a3, $a3, 0x2
    ctx->pc = 0x26de7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2);
    // 0x26de80: 0xad600010  sw          $zero, 0x10($t3)
    ctx->pc = 0x26de80u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 0));
    // 0x26de84: 0xad600014  sw          $zero, 0x14($t3)
    ctx->pc = 0x26de84u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 20), GPR_U32(ctx, 0));
    // 0x26de88: 0xad600018  sw          $zero, 0x18($t3)
    ctx->pc = 0x26de88u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 24), GPR_U32(ctx, 0));
    // 0x26de8c: 0xad60001c  sw          $zero, 0x1C($t3)
    ctx->pc = 0x26de8cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 28), GPR_U32(ctx, 0));
    // 0x26de90: 0xad600028  sw          $zero, 0x28($t3)
    ctx->pc = 0x26de90u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 40), GPR_U32(ctx, 0));
    // 0x26de94: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x26DE94u;
    {
        const bool branch_taken_0x26de94 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DE98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DE94u;
            // 0x26de98: 0xad600038  sw          $zero, 0x38($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26de94) {
            ctx->pc = 0x26DEB0u;
            goto label_26deb0;
        }
    }
    ctx->pc = 0x26DE9Cu;
    // 0x26de9c: 0x8d230078  lw          $v1, 0x78($t1)
    ctx->pc = 0x26de9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 120)));
    // 0x26dea0: 0x3c02fff8  lui         $v0, 0xFFF8
    ctx->pc = 0x26dea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65528 << 16));
    // 0x26dea4: 0x3442f8f8  ori         $v0, $v0, 0xF8F8
    ctx->pc = 0x26dea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63736);
    // 0x26dea8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x26dea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26deac: 0xad230078  sw          $v1, 0x78($t1)
    ctx->pc = 0x26deacu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 120), GPR_U32(ctx, 3));
label_26deb0:
    // 0x26deb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26deb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26deb4: 0x51a20009  beql        $t5, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26DEB4u;
    {
        const bool branch_taken_0x26deb4 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 2));
        if (branch_taken_0x26deb4) {
            ctx->pc = 0x26DEB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26DEB4u;
            // 0x26deb8: 0xdd220058  ld          $v0, 0x58($t1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 9), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26DEDCu;
            goto label_26dedc;
        }
    }
    ctx->pc = 0x26DEBCu;
    // 0x26debc: 0x11a000b1  beqz        $t5, . + 4 + (0xB1 << 2)
    ctx->pc = 0x26DEBCu;
    {
        const bool branch_taken_0x26debc = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DEC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DEBCu;
            // 0x26dec0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26debc) {
            ctx->pc = 0x26E184u;
            goto label_26e184;
        }
    }
    ctx->pc = 0x26DEC4u;
    // 0x26dec4: 0x11a2003c  beq         $t5, $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x26DEC4u;
    {
        const bool branch_taken_0x26dec4 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 2));
        ctx->pc = 0x26DEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DEC4u;
            // 0x26dec8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dec4) {
            ctx->pc = 0x26DFB8u;
            goto label_26dfb8;
        }
    }
    ctx->pc = 0x26DECCu;
    // 0x26decc: 0x51a20071  beql        $t5, $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x26DECCu;
    {
        const bool branch_taken_0x26decc = (GPR_U64(ctx, 13) == GPR_U64(ctx, 2));
        if (branch_taken_0x26decc) {
            ctx->pc = 0x26DED0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26DECCu;
            // 0x26ded0: 0x91220078  lbu         $v0, 0x78($t1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 120)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26E094u;
            goto label_26e094;
        }
    }
    ctx->pc = 0x26DED4u;
    // 0x26ded4: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x26DED4u;
    {
        const bool branch_taken_0x26ded4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26ded4) {
            ctx->pc = 0x26E184u;
            goto label_26e184;
        }
    }
    ctx->pc = 0x26DEDCu;
label_26dedc:
    // 0x26dedc: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x26dedcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x26dee0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x26dee0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x26dee4: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x26dee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x26dee8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26dee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26deec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26DEECu;
    {
        const bool branch_taken_0x26deec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DEF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DEECu;
            // 0x26def0: 0x9522005c  lhu         $v0, 0x5C($t1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26deec) {
            ctx->pc = 0x26DEFCu;
            goto label_26defc;
        }
    }
    ctx->pc = 0x26DEF4u;
    // 0x26def4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26DEF4u;
    {
        const bool branch_taken_0x26def4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DEF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DEF4u;
            // 0x26def8: 0x3042007f  andi        $v0, $v0, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26def4) {
            ctx->pc = 0x26DF00u;
            goto label_26df00;
        }
    }
    ctx->pc = 0x26DEFCu;
label_26defc:
    // 0x26defc: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x26defcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_26df00:
    // 0x26df00: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x26df00u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x26df04: 0x50800014  beql        $a0, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x26DF04u;
    {
        const bool branch_taken_0x26df04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x26df04) {
            ctx->pc = 0x26DF08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26DF04u;
            // 0x26df08: 0x8525004c  lh          $a1, 0x4C($t1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26DF58u;
            goto label_26df58;
        }
    }
    ctx->pc = 0x26DF0Cu;
    // 0x26df0c: 0x8522005e  lh          $v0, 0x5E($t1)
    ctx->pc = 0x26df0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 94)));
    // 0x26df10: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x26df10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26df14: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x26df14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x26df18: 0x8523004c  lh          $v1, 0x4C($t1)
    ctx->pc = 0x26df18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 76)));
    // 0x26df1c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x26df1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x26df20: 0x8528005c  lh          $t0, 0x5C($t1)
    ctx->pc = 0x26df20u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 92)));
    // 0x26df24: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x26df24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x26df28: 0x9522005a  lhu         $v0, 0x5A($t1)
    ctx->pc = 0x26df28u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 90)));
    // 0x26df2c: 0xfd430010  sd          $v1, 0x10($t2)
    ctx->pc = 0x26df2cu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 16), GPR_U64(ctx, 3));
    // 0x26df30: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x26df30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x26df34: 0x85230058  lh          $v1, 0x58($t1)
    ctx->pc = 0x26df34u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 88)));
    // 0x26df38: 0x21583  sra         $v0, $v0, 22
    ctx->pc = 0x26df38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 22));
    // 0x26df3c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x26df3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x26df40: 0x1821025  or          $v0, $t4, $v0
    ctx->pc = 0x26df40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) | GPR_U64(ctx, 2));
    // 0x26df44: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x26df44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x26df48: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26df48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26df4c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x26df4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x26df50: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x26DF50u;
    {
        const bool branch_taken_0x26df50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DF50u;
            // 0x26df54: 0xfd420020  sd          $v0, 0x20($t2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 10), 32), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26df50) {
            ctx->pc = 0x26E184u;
            goto label_26e184;
        }
    }
    ctx->pc = 0x26DF58u;
label_26df58:
    // 0x26df58: 0x3406ff00  ori         $a2, $zero, 0xFF00
    ctx->pc = 0x26df58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x26df5c: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x26df5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x26df60: 0x8524005e  lh          $a0, 0x5E($t1)
    ctx->pc = 0x26df60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 94)));
    // 0x26df64: 0xaf2821  addu        $a1, $a1, $t7
    ctx->pc = 0x26df64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 15)));
    // 0x26df68: 0x9523005a  lhu         $v1, 0x5A($t1)
    ctx->pc = 0x26df68u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 90)));
    // 0x26df6c: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x26df6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x26df70: 0x9522004c  lhu         $v0, 0x4C($t1)
    ctx->pc = 0x26df70u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 76)));
    // 0x26df74: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x26df74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x26df78: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x26df78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x26df7c: 0xfd450010  sd          $a1, 0x10($t2)
    ctx->pc = 0x26df7cu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 16), GPR_U64(ctx, 5));
    // 0x26df80: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x26df80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x26df84: 0x31d83  sra         $v1, $v1, 22
    ctx->pc = 0x26df84u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 22));
    // 0x26df88: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x26df88u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x26df8c: 0x85240058  lh          $a0, 0x58($t1)
    ctx->pc = 0x26df8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 88)));
    // 0x26df90: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x26df90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x26df94: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26df94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26df98: 0x9523005c  lhu         $v1, 0x5C($t1)
    ctx->pc = 0x26df98u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 92)));
    // 0x26df9c: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x26df9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x26dfa0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x26dfa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x26dfa4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x26dfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x26dfa8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x26dfa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x26dfac: 0x34443  sra         $t0, $v1, 17
    ctx->pc = 0x26dfacu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 3), 17));
    // 0x26dfb0: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x26DFB0u;
    {
        const bool branch_taken_0x26dfb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DFB0u;
            // 0x26dfb4: 0xfd420020  sd          $v0, 0x20($t2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 10), 32), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dfb0) {
            ctx->pc = 0x26E184u;
            goto label_26e184;
        }
    }
    ctx->pc = 0x26DFB8u;
label_26dfb8:
    // 0x26dfb8: 0xdd220058  ld          $v0, 0x58($t1)
    ctx->pc = 0x26dfb8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 9), 88)));
    // 0x26dfbc: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x26dfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x26dfc0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x26dfc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x26dfc4: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x26dfc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x26dfc8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26dfc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26dfcc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26DFCCu;
    {
        const bool branch_taken_0x26dfcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DFD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DFCCu;
            // 0x26dfd0: 0x9522005c  lhu         $v0, 0x5C($t1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dfcc) {
            ctx->pc = 0x26DFDCu;
            goto label_26dfdc;
        }
    }
    ctx->pc = 0x26DFD4u;
    // 0x26dfd4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26DFD4u;
    {
        const bool branch_taken_0x26dfd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DFD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DFD4u;
            // 0x26dfd8: 0x3042007f  andi        $v0, $v0, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26dfd4) {
            ctx->pc = 0x26DFE0u;
            goto label_26dfe0;
        }
    }
    ctx->pc = 0x26DFDCu;
label_26dfdc:
    // 0x26dfdc: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x26dfdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
label_26dfe0:
    // 0x26dfe0: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x26dfe0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x26dfe4: 0x50800017  beql        $a0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x26DFE4u;
    {
        const bool branch_taken_0x26dfe4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x26dfe4) {
            ctx->pc = 0x26DFE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26DFE4u;
            // 0x26dfe8: 0x8523005e  lh          $v1, 0x5E($t1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 94)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26E044u;
            goto label_26e044;
        }
    }
    ctx->pc = 0x26DFECu;
    // 0x26dfec: 0x8522005e  lh          $v0, 0x5E($t1)
    ctx->pc = 0x26dfecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 94)));
    // 0x26dff0: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x26dff0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x26dff4: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x26dff4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x26dff8: 0x8523004c  lh          $v1, 0x4C($t1)
    ctx->pc = 0x26dff8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 76)));
    // 0x26dffc: 0x3405ff00  ori         $a1, $zero, 0xFF00
    ctx->pc = 0x26dffcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x26e000: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x26e000u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x26e004: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x26e004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x26e008: 0x8528005c  lh          $t0, 0x5C($t1)
    ctx->pc = 0x26e008u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 92)));
    // 0x26e00c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x26e00cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x26e010: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x26e010u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x26e014: 0x9522005a  lhu         $v0, 0x5A($t1)
    ctx->pc = 0x26e014u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 90)));
    // 0x26e018: 0xfd430010  sd          $v1, 0x10($t2)
    ctx->pc = 0x26e018u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 16), GPR_U64(ctx, 3));
    // 0x26e01c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x26e01cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x26e020: 0x85230058  lh          $v1, 0x58($t1)
    ctx->pc = 0x26e020u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 88)));
    // 0x26e024: 0x21583  sra         $v0, $v0, 22
    ctx->pc = 0x26e024u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 22));
    // 0x26e028: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x26e028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x26e02c: 0x1821025  or          $v0, $t4, $v0
    ctx->pc = 0x26e02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) | GPR_U64(ctx, 2));
    // 0x26e030: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x26e030u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x26e034: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26e034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26e038: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x26e038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x26e03c: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x26E03Cu;
    {
        const bool branch_taken_0x26e03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E03Cu;
            // 0x26e040: 0xfd420020  sd          $v0, 0x20($t2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 10), 32), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e03c) {
            ctx->pc = 0x26E184u;
            goto label_26e184;
        }
    }
    ctx->pc = 0x26E044u;
label_26e044:
    // 0x26e044: 0x1862021  addu        $a0, $t4, $a2
    ctx->pc = 0x26e044u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 6)));
    // 0x26e048: 0x9522005a  lhu         $v0, 0x5A($t1)
    ctx->pc = 0x26e048u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 90)));
    // 0x26e04c: 0x3406ff00  ori         $a2, $zero, 0xFF00
    ctx->pc = 0x26e04cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x26e050: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x26e050u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x26e054: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x26e054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x26e058: 0x9525005c  lhu         $a1, 0x5C($t1)
    ctx->pc = 0x26e058u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 92)));
    // 0x26e05c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x26e05cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x26e060: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x26e060u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x26e064: 0xfd440010  sd          $a0, 0x10($t2)
    ctx->pc = 0x26e064u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 16), GPR_U64(ctx, 4));
    // 0x26e068: 0x21583  sra         $v0, $v0, 22
    ctx->pc = 0x26e068u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 22));
    // 0x26e06c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x26e06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x26e070: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x26e070u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x26e074: 0x85230058  lh          $v1, 0x58($t1)
    ctx->pc = 0x26e074u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 88)));
    // 0x26e078: 0x1821025  or          $v0, $t4, $v0
    ctx->pc = 0x26e078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) | GPR_U64(ctx, 2));
    // 0x26e07c: 0x54443  sra         $t0, $a1, 17
    ctx->pc = 0x26e07cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 5), 17));
    // 0x26e080: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x26e080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x26e084: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26e084u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26e088: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x26e088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x26e08c: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x26E08Cu;
    {
        const bool branch_taken_0x26e08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E08Cu;
            // 0x26e090: 0xfd420020  sd          $v0, 0x20($t2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 10), 32), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e08c) {
            ctx->pc = 0x26E184u;
            goto label_26e184;
        }
    }
    ctx->pc = 0x26E094u;
label_26e094:
    // 0x26e094: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x26e094u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x26e098: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x26e098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x26e09c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x26e09cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x26e0a0: 0x8528005c  lh          $t0, 0x5C($t1)
    ctx->pc = 0x26e0a0u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 92)));
    // 0x26e0a4: 0xad620010  sw          $v0, 0x10($t3)
    ctx->pc = 0x26e0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 2));
    // 0x26e0a8: 0x91220079  lbu         $v0, 0x79($t1)
    ctx->pc = 0x26e0a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 121)));
    // 0x26e0ac: 0xad620014  sw          $v0, 0x14($t3)
    ctx->pc = 0x26e0acu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 20), GPR_U32(ctx, 2));
    // 0x26e0b0: 0x9122007a  lbu         $v0, 0x7A($t1)
    ctx->pc = 0x26e0b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 122)));
    // 0x26e0b4: 0xad620018  sw          $v0, 0x18($t3)
    ctx->pc = 0x26e0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 24), GPR_U32(ctx, 2));
    // 0x26e0b8: 0x9122007b  lbu         $v0, 0x7B($t1)
    ctx->pc = 0x26e0b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 123)));
    // 0x26e0bc: 0xad62001c  sw          $v0, 0x1C($t3)
    ctx->pc = 0x26e0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 28), GPR_U32(ctx, 2));
    // 0x26e0c0: 0xdd250058  ld          $a1, 0x58($t1)
    ctx->pc = 0x26e0c0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 9), 88)));
    // 0x26e0c4: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x26e0c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x26e0c8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26E0C8u;
    {
        const bool branch_taken_0x26e0c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E0CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E0C8u;
            // 0x26e0cc: 0x9522005c  lhu         $v0, 0x5C($t1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 92)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e0c8) {
            ctx->pc = 0x26E0D8u;
            goto label_26e0d8;
        }
    }
    ctx->pc = 0x26E0D0u;
    // 0x26e0d0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x26E0D0u;
    {
        const bool branch_taken_0x26e0d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E0D0u;
            // 0x26e0d4: 0x3042003f  andi        $v0, $v0, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e0d0) {
            ctx->pc = 0x26E0DCu;
            goto label_26e0dc;
        }
    }
    ctx->pc = 0x26E0D8u;
label_26e0d8:
    // 0x26e0d8: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x26e0d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_26e0dc:
    // 0x26e0dc: 0x2202b  sltu        $a0, $zero, $v0
    ctx->pc = 0x26e0dcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x26e0e0: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x26e0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x26e0e4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x26e0e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x26e0e8: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x26e0e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x26e0ec: 0xa31024  and         $v0, $a1, $v1
    ctx->pc = 0x26e0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x26e0f0: 0x54430014  bnel        $v0, $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x26E0F0u;
    {
        const bool branch_taken_0x26e0f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26e0f0) {
            ctx->pc = 0x26E0F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26E0F0u;
            // 0x26e0f4: 0x9522005a  lhu         $v0, 0x5A($t1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 90)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26E144u;
            goto label_26e144;
        }
    }
    ctx->pc = 0x26E0F8u;
    // 0x26e0f8: 0x54800012  bnel        $a0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x26E0F8u;
    {
        const bool branch_taken_0x26e0f8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x26e0f8) {
            ctx->pc = 0x26E0FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26E0F8u;
            // 0x26e0fc: 0x9522005a  lhu         $v0, 0x5A($t1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 90)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26E144u;
            goto label_26e144;
        }
    }
    ctx->pc = 0x26E100u;
    // 0x26e100: 0x8d220078  lw          $v0, 0x78($t1)
    ctx->pc = 0x26e100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 120)));
    // 0x26e104: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x26E104u;
    {
        const bool branch_taken_0x26e104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E104u;
            // 0x26e108: 0x9522005a  lhu         $v0, 0x5A($t1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 90)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e104) {
            ctx->pc = 0x26E144u;
            goto label_26e144;
        }
    }
    ctx->pc = 0x26E10Cu;
    // 0x26e10c: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x26e10cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x26e110: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x26e110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x26e114: 0x34633000  ori         $v1, $v1, 0x3000
    ctx->pc = 0x26e114u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12288);
    // 0x26e118: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x26e118u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x26e11c: 0x84043  sra         $t0, $t0, 1
    ctx->pc = 0x26e11cu;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 1));
    // 0x26e120: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x26e120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x26e124: 0x21583  sra         $v0, $v0, 22
    ctx->pc = 0x26e124u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 22));
    // 0x26e128: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x26e128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x26e12c: 0x1821025  or          $v0, $t4, $v0
    ctx->pc = 0x26e12cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) | GPR_U64(ctx, 2));
    // 0x26e130: 0xfd420020  sd          $v0, 0x20($t2)
    ctx->pc = 0x26e130u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 32), GPR_U64(ctx, 2));
    // 0x26e134: 0x8522004c  lh          $v0, 0x4C($t1)
    ctx->pc = 0x26e134u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 76)));
    // 0x26e138: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26e138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26e13c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x26E13Cu;
    {
        const bool branch_taken_0x26e13c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E13Cu;
            // 0x26e140: 0xfd420010  sd          $v0, 0x10($t2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 10), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e13c) {
            ctx->pc = 0x26E184u;
            goto label_26e184;
        }
    }
    ctx->pc = 0x26E144u;
label_26e144:
    // 0x26e144: 0x3404ff00  ori         $a0, $zero, 0xFF00
    ctx->pc = 0x26e144u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x26e148: 0x4243c  dsll32      $a0, $a0, 16
    ctx->pc = 0x26e148u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 16));
    // 0x26e14c: 0x85230058  lh          $v1, 0x58($t1)
    ctx->pc = 0x26e14cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 88)));
    // 0x26e150: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x26e150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x26e154: 0x21583  sra         $v0, $v0, 22
    ctx->pc = 0x26e154u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 22));
    // 0x26e158: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x26e158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x26e15c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x26e15cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x26e160: 0x1821025  or          $v0, $t4, $v0
    ctx->pc = 0x26e160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) | GPR_U64(ctx, 2));
    // 0x26e164: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26e164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26e168: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x26e168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x26e16c: 0xfd420020  sd          $v0, 0x20($t2)
    ctx->pc = 0x26e16cu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 32), GPR_U64(ctx, 2));
    // 0x26e170: 0x8522005e  lh          $v0, 0x5E($t1)
    ctx->pc = 0x26e170u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 94)));
    // 0x26e174: 0x8523004c  lh          $v1, 0x4C($t1)
    ctx->pc = 0x26e174u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 76)));
    // 0x26e178: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x26e178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x26e17c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x26e17cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x26e180: 0xfd430010  sd          $v1, 0x10($t2)
    ctx->pc = 0x26e180u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 16), GPR_U64(ctx, 3));
label_26e184:
    // 0x26e184: 0x11a00038  beqz        $t5, . + 4 + (0x38 << 2)
    ctx->pc = 0x26E184u;
    {
        const bool branch_taken_0x26e184 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E184u;
            // 0x26e188: 0x3c020003  lui         $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e184) {
            ctx->pc = 0x26E268u;
            goto label_26e268;
        }
    }
    ctx->pc = 0x26E18Cu;
    // 0x26e18c: 0xfd400030  sd          $zero, 0x30($t2)
    ctx->pc = 0x26e18cu;
    WRITE64(ADD32(GPR_U32(ctx, 10), 48), GPR_U64(ctx, 0));
    // 0x26e190: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x26e190u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x26e194: 0x82900  sll         $a1, $t0, 4
    ctx->pc = 0x26e194u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x26e198: 0xfd400040  sd          $zero, 0x40($t2)
    ctx->pc = 0x26e198u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 64), GPR_U64(ctx, 0));
    // 0x26e19c: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x26e19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x26e1a0: 0x3c063003  lui         $a2, 0x3003
    ctx->pc = 0x26e1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)12291 << 16));
    // 0x26e1a4: 0x34c64000  ori         $a2, $a2, 0x4000
    ctx->pc = 0x26e1a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
    // 0x26e1a8: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x26e1a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x26e1ac: 0x34c68001  ori         $a2, $a2, 0x8001
    ctx->pc = 0x26e1acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32769);
    // 0x26e1b0: 0x8523005c  lh          $v1, 0x5C($t1)
    ctx->pc = 0x26e1b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 92)));
    // 0x26e1b4: 0x8522005a  lh          $v0, 0x5A($t1)
    ctx->pc = 0x26e1b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 90)));
    // 0x26e1b8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x26e1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x26e1bc: 0xad6e000c  sw          $t6, 0xC($t3)
    ctx->pc = 0x26e1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 14));
    // 0x26e1c0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x26e1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x26e1c4: 0x31c3c  dsll32      $v1, $v1, 16
    ctx->pc = 0x26e1c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 16));
    // 0x26e1c8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x26e1c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x26e1cc: 0xad640030  sw          $a0, 0x30($t3)
    ctx->pc = 0x26e1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 48), GPR_U32(ctx, 4));
    // 0x26e1d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26e1d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26e1d4: 0xad650034  sw          $a1, 0x34($t3)
    ctx->pc = 0x26e1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 52), GPR_U32(ctx, 5));
    // 0x26e1d8: 0xfd420050  sd          $v0, 0x50($t2)
    ctx->pc = 0x26e1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 80), GPR_U64(ctx, 2));
    // 0x26e1dc: 0xfd660000  sd          $a2, 0x0($t3)
    ctx->pc = 0x26e1dcu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 6));
    // 0x26e1e0: 0xad600020  sw          $zero, 0x20($t3)
    ctx->pc = 0x26e1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 32), GPR_U32(ctx, 0));
    // 0x26e1e4: 0xad600024  sw          $zero, 0x24($t3)
    ctx->pc = 0x26e1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 36), GPR_U32(ctx, 0));
    // 0x26e1e8: 0x69620007  ldl         $v0, 0x7($t3)
    ctx->pc = 0x26e1e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x26e1ec: 0x6d620000  ldr         $v0, 0x0($t3)
    ctx->pc = 0x26e1ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x26e1f0: 0x6963000f  ldl         $v1, 0xF($t3)
    ctx->pc = 0x26e1f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x26e1f4: 0x6d630008  ldr         $v1, 0x8($t3)
    ctx->pc = 0x26e1f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x26e1f8: 0x69640017  ldl         $a0, 0x17($t3)
    ctx->pc = 0x26e1f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x26e1fc: 0x6d640010  ldr         $a0, 0x10($t3)
    ctx->pc = 0x26e1fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x26e200: 0x6965001f  ldl         $a1, 0x1F($t3)
    ctx->pc = 0x26e200u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x26e204: 0x6d650018  ldr         $a1, 0x18($t3)
    ctx->pc = 0x26e204u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x26e208: 0xb3020007  sdl         $v0, 0x7($t8)
    ctx->pc = 0x26e208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x26e20c: 0xb7020000  sdr         $v0, 0x0($t8)
    ctx->pc = 0x26e20cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x26e210: 0xb303000f  sdl         $v1, 0xF($t8)
    ctx->pc = 0x26e210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x26e214: 0xb7030008  sdr         $v1, 0x8($t8)
    ctx->pc = 0x26e214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x26e218: 0xb3040017  sdl         $a0, 0x17($t8)
    ctx->pc = 0x26e218u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x26e21c: 0xb7040010  sdr         $a0, 0x10($t8)
    ctx->pc = 0x26e21cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x26e220: 0xb305001f  sdl         $a1, 0x1F($t8)
    ctx->pc = 0x26e220u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x26e224: 0xb7050018  sdr         $a1, 0x18($t8)
    ctx->pc = 0x26e224u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x26e228: 0x69620027  ldl         $v0, 0x27($t3)
    ctx->pc = 0x26e228u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x26e22c: 0x6d620020  ldr         $v0, 0x20($t3)
    ctx->pc = 0x26e22cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x26e230: 0x6963002f  ldl         $v1, 0x2F($t3)
    ctx->pc = 0x26e230u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x26e234: 0x6d630028  ldr         $v1, 0x28($t3)
    ctx->pc = 0x26e234u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x26e238: 0x69640037  ldl         $a0, 0x37($t3)
    ctx->pc = 0x26e238u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x26e23c: 0x6d640030  ldr         $a0, 0x30($t3)
    ctx->pc = 0x26e23cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x26e240: 0x6965003f  ldl         $a1, 0x3F($t3)
    ctx->pc = 0x26e240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x26e244: 0x6d650038  ldr         $a1, 0x38($t3)
    ctx->pc = 0x26e244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x26e248: 0xb3020027  sdl         $v0, 0x27($t8)
    ctx->pc = 0x26e248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x26e24c: 0xb7020020  sdr         $v0, 0x20($t8)
    ctx->pc = 0x26e24cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x26e250: 0xb303002f  sdl         $v1, 0x2F($t8)
    ctx->pc = 0x26e250u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x26e254: 0xb7030028  sdr         $v1, 0x28($t8)
    ctx->pc = 0x26e254u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x26e258: 0xb3040037  sdl         $a0, 0x37($t8)
    ctx->pc = 0x26e258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x26e25c: 0xb7040030  sdr         $a0, 0x30($t8)
    ctx->pc = 0x26e25cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x26e260: 0xb305003f  sdl         $a1, 0x3F($t8)
    ctx->pc = 0x26e260u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x26e264: 0xb7050038  sdr         $a1, 0x38($t8)
    ctx->pc = 0x26e264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 24), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_26e268:
    // 0x26e268: 0x3e00008  jr          $ra
    ctx->pc = 0x26E268u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26DD9Cu: goto label_26dd9c;
            case 0x26DDB4u: goto label_26ddb4;
            case 0x26DE0Cu: goto label_26de0c;
            case 0x26DE24u: goto label_26de24;
            case 0x26DEB0u: goto label_26deb0;
            case 0x26DEDCu: goto label_26dedc;
            case 0x26DEFCu: goto label_26defc;
            case 0x26DF00u: goto label_26df00;
            case 0x26DF58u: goto label_26df58;
            case 0x26DFB8u: goto label_26dfb8;
            case 0x26DFDCu: goto label_26dfdc;
            case 0x26DFE0u: goto label_26dfe0;
            case 0x26E044u: goto label_26e044;
            case 0x26E094u: goto label_26e094;
            case 0x26E0D8u: goto label_26e0d8;
            case 0x26E0DCu: goto label_26e0dc;
            case 0x26E144u: goto label_26e144;
            case 0x26E184u: goto label_26e184;
            case 0x26E268u: goto label_26e268;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26E270u;
}
