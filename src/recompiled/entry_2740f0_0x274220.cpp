#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2740f0
// Address: 0x2740f0 - 0x274220
void entry_2740f0_0x274220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2740f0_0x274220");
#endif

    ctx->pc = 0x2740f0u;

    // 0x2740f0: 0x8c8b0040  lw          $t3, 0x40($a0)
    ctx->pc = 0x2740f0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2740f4: 0xc0702d  daddu       $t6, $a2, $zero
    ctx->pc = 0x2740f4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2740f8: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2740f8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2740fc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2740fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274100: 0x2ca2000a  sltiu       $v0, $a1, 0xA
    ctx->pc = 0x274100u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x274104: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x274104u;
    {
        const bool branch_taken_0x274104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274104u;
            // 0x274108: 0x8d6a0060  lw          $t2, 0x60($t3) (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274104) {
            ctx->pc = 0x274188u;
            goto label_274188;
        }
    }
    ctx->pc = 0x27410Cu;
    // 0x27410c: 0x3c0d002a  lui         $t5, 0x2A
    ctx->pc = 0x27410cu;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)42 << 16));
    // 0x274110: 0x54900  sll         $t1, $a1, 4
    ctx->pc = 0x274110u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x274114: 0x25a214a0  addiu       $v0, $t5, 0x14A0
    ctx->pc = 0x274114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 5280));
    // 0x274118: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x274118u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x27411c: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x27411cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x274120: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x274120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x274124: 0xdc430008  ld          $v1, 0x8($v0)
    ctx->pc = 0x274124u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x274128: 0x1064000f  beq         $v1, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x274128u;
    {
        const bool branch_taken_0x274128 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x27412Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274128u;
            // 0x27412c: 0x83102b  sltu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x274128) {
            ctx->pc = 0x274168u;
            goto label_274168;
        }
    }
    ctx->pc = 0x274130u;
    // 0x274130: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x274130u;
    {
        const bool branch_taken_0x274130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x274130) {
            ctx->pc = 0x274150u;
            goto label_274150;
        }
    }
    ctx->pc = 0x274138u;
    // 0x274138: 0x3402ff00  ori         $v0, $zero, 0xFF00
    ctx->pc = 0x274138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x27413c: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x27413cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x274140: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x274140u;
    {
        const bool branch_taken_0x274140 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x274144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274140u;
            // 0x274144: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274140) {
            ctx->pc = 0x274170u;
            goto label_274170;
        }
    }
    ctx->pc = 0x274148u;
    // 0x274148: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x274148u;
    {
        const bool branch_taken_0x274148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27414Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274148u;
            // 0x27414c: 0x8d690064  lw          $t1, 0x64($t3) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274148) {
            ctx->pc = 0x274190u;
            goto label_274190;
        }
    }
    ctx->pc = 0x274150u;
label_274150:
    // 0x274150: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x274150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x274154: 0x2163a  dsrl        $v0, $v0, 24
    ctx->pc = 0x274154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 24);
    // 0x274158: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x274158u;
    {
        const bool branch_taken_0x274158 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27415Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274158u;
            // 0x27415c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274158) {
            ctx->pc = 0x27418Cu;
            goto label_27418c;
        }
    }
    ctx->pc = 0x274160u;
    // 0x274160: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x274160u;
    {
        const bool branch_taken_0x274160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x274164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274160u;
            // 0x274164: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274160) {
            ctx->pc = 0x274174u;
            goto label_274174;
        }
    }
    ctx->pc = 0x274168u;
label_274168:
    // 0x274168: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x274168u;
    {
        const bool branch_taken_0x274168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27416Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274168u;
            // 0x27416c: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274168) {
            ctx->pc = 0x274174u;
            goto label_274174;
        }
    }
    ctx->pc = 0x274170u;
label_274170:
    // 0x274170: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x274170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_274174:
    // 0x274174: 0x25a214a0  addiu       $v0, $t5, 0x14A0
    ctx->pc = 0x274174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), 5280));
    // 0x274178: 0xce2014  dsllv       $a0, $t6, $a2
    ctx->pc = 0x274178u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 14) << (GPR_U32(ctx, 6) & 0x3F));
    // 0x27417c: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x27417cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
    // 0x274180: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x274180u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x274184: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x274184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_274188:
    // 0x274188: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x274188u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_27418c:
    // 0x27418c: 0x8d690064  lw          $t1, 0x64($t3)
    ctx->pc = 0x27418cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 100)));
label_274190:
    // 0x274190: 0x1920000f  blez        $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x274190u;
    {
        const bool branch_taken_0x274190 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x274194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274190u;
            // 0x274194: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x274190) {
            ctx->pc = 0x2741D0u;
            goto label_2741d0;
        }
    }
    ctx->pc = 0x274198u;
    // 0x274198: 0xdd420000  ld          $v0, 0x0($t2)
    ctx->pc = 0x274198u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x27419c: 0x54c20004  bnel        $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27419Cu;
    {
        const bool branch_taken_0x27419c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x27419c) {
            ctx->pc = 0x2741A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27419Cu;
            // 0x2741a0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2741B0u;
            goto label_2741b0;
        }
    }
    ctx->pc = 0x2741A4u;
    // 0x2741a4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2741A4u;
    {
        const bool branch_taken_0x2741a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2741A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2741A4u;
            // 0x2741a8: 0x8d4c0010  lw          $t4, 0x10($t2) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2741a4) {
            ctx->pc = 0x2741D0u;
            goto label_2741d0;
        }
    }
    ctx->pc = 0x2741ACu;
    // 0x2741ac: 0x0  nop
    ctx->pc = 0x2741acu;
    // NOP
label_2741b0:
    // 0x2741b0: 0x89102a  slt         $v0, $a0, $t1
    ctx->pc = 0x2741b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x2741b4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2741B4u;
    {
        const bool branch_taken_0x2741b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2741B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2741B4u;
            // 0x2741b8: 0x41140  sll         $v0, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2741b4) {
            ctx->pc = 0x2741D0u;
            goto label_2741d0;
        }
    }
    ctx->pc = 0x2741BCu;
    // 0x2741bc: 0x4a1021  addu        $v0, $v0, $t2
    ctx->pc = 0x2741bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x2741c0: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x2741c0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2741c4: 0x54c3fffa  bnel        $a2, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2741C4u;
    {
        const bool branch_taken_0x2741c4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        if (branch_taken_0x2741c4) {
            ctx->pc = 0x2741C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2741C4u;
            // 0x2741c8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2741B0u;
            runtime->cooperativeGuestYield();
            goto label_2741b0;
        }
    }
    ctx->pc = 0x2741CCu;
    // 0x2741cc: 0x8c4c0010  lw          $t4, 0x10($v0)
    ctx->pc = 0x2741ccu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2741d0:
    // 0x2741d0: 0x28820040  slti        $v0, $a0, 0x40
    ctx->pc = 0x2741d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x2741d4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2741D4u;
    {
        const bool branch_taken_0x2741d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2741D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2741D4u;
            // 0x2741d8: 0x41940  sll         $v1, $a0, 5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2741d4) {
            ctx->pc = 0x274218u;
            goto label_274218;
        }
    }
    ctx->pc = 0x2741DCu;
    // 0x2741dc: 0x51100  sll         $v0, $a1, 4
    ctx->pc = 0x2741dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2741e0: 0x6a1821  addu        $v1, $v1, $t2
    ctx->pc = 0x2741e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x2741e4: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x2741e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x2741e8: 0x248414a0  addiu       $a0, $a0, 0x14A0
    ctx->pc = 0x2741e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5280));
    // 0x2741ec: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x2741ecu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
    // 0x2741f0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2741f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2741f4: 0xac670010  sw          $a3, 0x10($v1)
    ctx->pc = 0x2741f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 7));
    // 0x2741f8: 0xdc820008  ld          $v0, 0x8($a0)
    ctx->pc = 0x2741f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2741fc: 0xac680014  sw          $t0, 0x14($v1)
    ctx->pc = 0x2741fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 8));
    // 0x274200: 0xfc620008  sd          $v0, 0x8($v1)
    ctx->pc = 0x274200u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 2));
    // 0x274204: 0x380202d  daddu       $a0, $gp, $zero
    ctx->pc = 0x274204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
    // 0x274208: 0x8d620064  lw          $v0, 0x64($t3)
    ctx->pc = 0x274208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 100)));
    // 0x27420c: 0xac640018  sw          $a0, 0x18($v1)
    ctx->pc = 0x27420cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 4));
    // 0x274210: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x274210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x274214: 0xad620064  sw          $v0, 0x64($t3)
    ctx->pc = 0x274214u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 100), GPR_U32(ctx, 2));
label_274218:
    // 0x274218: 0x3e00008  jr          $ra
    ctx->pc = 0x274218u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27421Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274218u;
            // 0x27421c: 0x180102d  daddu       $v0, $t4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x274150u: goto label_274150;
            case 0x274168u: goto label_274168;
            case 0x274170u: goto label_274170;
            case 0x274174u: goto label_274174;
            case 0x274188u: goto label_274188;
            case 0x27418Cu: goto label_27418c;
            case 0x274190u: goto label_274190;
            case 0x2741B0u: goto label_2741b0;
            case 0x2741D0u: goto label_2741d0;
            case 0x274218u: goto label_274218;
            default: break;
        }
        return;
    }
    ctx->pc = 0x274220u;
}
