#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_283f18
// Address: 0x283f18 - 0x2844e8
void entry_283f18_0x2844e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_283f18_0x2844e8");
#endif

    ctx->pc = 0x283f18u;

    // 0x283f18: 0x5403f  dsra32      $t0, $a1, 0
    ctx->pc = 0x283f18u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x283f1c: 0x4583f  dsra32      $t3, $a0, 0
    ctx->pc = 0x283f1cu;
    SET_GPR_S64(ctx, 11, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x283f20: 0x5483c  dsll32      $t1, $a1, 0
    ctx->pc = 0x283f20u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) << (32 + 0));
    // 0x283f24: 0x9483f  dsra32      $t1, $t1, 0
    ctx->pc = 0x283f24u;
    SET_GPR_S64(ctx, 9, GPR_S64(ctx, 9) >> (32 + 0));
    // 0x283f28: 0x4603c  dsll32      $t4, $a0, 0
    ctx->pc = 0x283f28u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 4) << (32 + 0));
    // 0x283f2c: 0xc603f  dsra32      $t4, $t4, 0
    ctx->pc = 0x283f2cu;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 12) >> (32 + 0));
    // 0x283f30: 0x150000f2  bnez        $t0, . + 4 + (0xF2 << 2)
    ctx->pc = 0x283F30u;
    {
        const bool branch_taken_0x283f30 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x283F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283F30u;
            // 0x283f34: 0x27bdfff0  addiu       $sp, $sp, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283f30) {
            ctx->pc = 0x2842FCu;
            goto label_2842fc;
        }
    }
    ctx->pc = 0x283F38u;
    // 0x283f38: 0x169102b  sltu        $v0, $t3, $t1
    ctx->pc = 0x283f38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x283f3c: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x283F3Cu;
    {
        const bool branch_taken_0x283f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x283F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283F3Cu;
            // 0x283f40: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x283f3c) {
            ctx->pc = 0x28408Cu;
            goto label_28408c;
        }
    }
    ctx->pc = 0x283F44u;
    // 0x283f44: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x283f44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x283f48: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x283F48u;
    {
        const bool branch_taken_0x283f48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283F48u;
            // 0x283f4c: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283f48) {
            ctx->pc = 0x283F60u;
            goto label_283f60;
        }
    }
    ctx->pc = 0x283F50u;
    // 0x283f50: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x283f50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x283f54: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x283f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x283f58: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x283F58u;
    {
        const bool branch_taken_0x283f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x283F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283F58u;
            // 0x283f5c: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283f58) {
            ctx->pc = 0x283F78u;
            goto label_283f78;
        }
    }
    ctx->pc = 0x283F60u;
label_283f60:
    // 0x283f60: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x283f60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x283f64: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x283f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x283f68: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x283f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x283f6c: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x283f6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x283f70: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x283f70u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x283f74: 0x0  nop
    ctx->pc = 0x283f74u;
    // NOP
label_283f78:
    // 0x283f78: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x283f78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x283f7c: 0xa92006  srlv        $a0, $t1, $a1
    ctx->pc = 0x283f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 5) & 0x1F));
    // 0x283f80: 0x24425420  addiu       $v0, $v0, 0x5420
    ctx->pc = 0x283f80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21536));
    // 0x283f84: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x283f84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x283f88: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x283f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x283f8c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x283f8cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x283f90: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x283f90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x283f94: 0xe33023  subu        $a2, $a3, $v1
    ctx->pc = 0x283f94u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x283f98: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x283F98u;
    {
        const bool branch_taken_0x283f98 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x283F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283F98u;
            // 0x283f9c: 0xe61023  subu        $v0, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283f98) {
            ctx->pc = 0x283FB4u;
            goto label_283fb4;
        }
    }
    ctx->pc = 0x283FA0u;
    // 0x283fa0: 0xcb1804  sllv        $v1, $t3, $a2
    ctx->pc = 0x283fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
    // 0x283fa4: 0x4c1006  srlv        $v0, $t4, $v0
    ctx->pc = 0x283fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 2) & 0x1F));
    // 0x283fa8: 0xc94804  sllv        $t1, $t1, $a2
    ctx->pc = 0x283fa8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x283fac: 0x625825  or          $t3, $v1, $v0
    ctx->pc = 0x283facu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x283fb0: 0xcc6004  sllv        $t4, $t4, $a2
    ctx->pc = 0x283fb0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 6) & 0x1F));
label_283fb4:
    // 0x283fb4: 0x92c02  srl         $a1, $t1, 16
    ctx->pc = 0x283fb4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x283fb8: 0x3128ffff  andi        $t0, $t1, 0xFFFF
    ctx->pc = 0x283fb8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x283fbc: 0x165001b  divu        $zero, $t3, $a1
    ctx->pc = 0x283fbcu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,11); } }
    // 0x283fc0: 0xc2402  srl         $a0, $t4, 16
    ctx->pc = 0x283fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x283fc4: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x283FC4u;
    {
        const bool branch_taken_0x283fc4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x283fc4) {
            ctx->pc = 0x283FC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x283FC4u;
            // 0x283fc8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x283FCCu;
            goto label_283fcc;
        }
    }
    ctx->pc = 0x283FCCu;
label_283fcc:
    // 0x283fcc: 0x1012  mflo        $v0
    ctx->pc = 0x283fccu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x283fd0: 0x1810  mfhi        $v1
    ctx->pc = 0x283fd0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x283fd4: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x283fd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x283fd8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x283fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x283fdc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x283fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x283fe0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x283fe0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x283fe4: 0xe83018  mult        $a2, $a3, $t0
    ctx->pc = 0x283fe4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x283fe8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x283fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x283fec: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x283fecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x283ff0: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x283FF0u;
    {
        const bool branch_taken_0x283ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x283ff0) {
            ctx->pc = 0x283FF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x283FF0u;
            // 0x283ff4: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x284024u;
            goto label_284024;
        }
    }
    ctx->pc = 0x283FF8u;
    // 0x283ff8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x283ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x283ffc: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x283ffcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x284000: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x284000u;
    {
        const bool branch_taken_0x284000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284000u;
            // 0x284004: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284000) {
            ctx->pc = 0x284020u;
            goto label_284020;
        }
    }
    ctx->pc = 0x284008u;
    // 0x284008: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x284008u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x28400c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28400Cu;
    {
        const bool branch_taken_0x28400c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28400c) {
            ctx->pc = 0x284010u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28400Cu;
            // 0x284010: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x284024u;
            goto label_284024;
        }
    }
    ctx->pc = 0x284014u;
    // 0x284014: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x284014u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x284018: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x284018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x28401c: 0x0  nop
    ctx->pc = 0x28401cu;
    // NOP
label_284020:
    // 0x284020: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x284020u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_284024:
    // 0x284024: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x284024u;
    {
        const bool branch_taken_0x284024 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x284024) {
            ctx->pc = 0x284028u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x284024u;
            // 0x284028: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x28402Cu;
            goto label_28402c;
        }
    }
    ctx->pc = 0x28402Cu;
label_28402c:
    // 0x28402c: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x28402cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x284030: 0x3184ffff  andi        $a0, $t4, 0xFFFF
    ctx->pc = 0x284030u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x284034: 0x1012  mflo        $v0
    ctx->pc = 0x284034u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x284038: 0x1810  mfhi        $v1
    ctx->pc = 0x284038u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x28403c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28403cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284040: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x284040u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x284044: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x284044u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x284048: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x284048u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x28404c: 0xa83018  mult        $a2, $a1, $t0
    ctx->pc = 0x28404cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x284050: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x284050u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x284054: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x284054u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x284058: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x284058u;
    {
        const bool branch_taken_0x284058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28405Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284058u;
            // 0x28405c: 0x691821  addu        $v1, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284058) {
            ctx->pc = 0x284078u;
            goto label_284078;
        }
    }
    ctx->pc = 0x284060u;
    // 0x284060: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x284060u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x284064: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x284064u;
    {
        const bool branch_taken_0x284064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284064u;
            // 0x284068: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284064) {
            ctx->pc = 0x284078u;
            goto label_284078;
        }
    }
    ctx->pc = 0x28406Cu;
    // 0x28406c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x28406cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x284070: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x284070u;
    {
        const bool branch_taken_0x284070 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x284070) {
            ctx->pc = 0x284074u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x284070u;
            // 0x284074: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x284078u;
            goto label_284078;
        }
    }
    ctx->pc = 0x284078u;
label_284078:
    // 0x284078: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x284078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x28407c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x28407cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x284080: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x284080u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x284084: 0x10000110  b           . + 4 + (0x110 << 2)
    ctx->pc = 0x284084u;
    {
        const bool branch_taken_0x284084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284084u;
            // 0x284088: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284084) {
            ctx->pc = 0x2844C8u;
            goto label_2844c8;
        }
    }
    ctx->pc = 0x28408Cu;
label_28408c:
    // 0x28408c: 0x1520000a  bnez        $t1, . + 4 + (0xA << 2)
    ctx->pc = 0x28408Cu;
    {
        const bool branch_taken_0x28408c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x284090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28408Cu;
            // 0x284090: 0x49102b  sltu        $v0, $v0, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28408c) {
            ctx->pc = 0x2840B8u;
            goto label_2840b8;
        }
    }
    ctx->pc = 0x284094u;
    // 0x284094: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x284094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x284098: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x284098u;
    {
        const bool branch_taken_0x284098 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x284098) {
            ctx->pc = 0x28409Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x284098u;
            // 0x28409c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2840A0u;
            goto label_2840a0;
        }
    }
    ctx->pc = 0x2840A0u;
label_2840a0:
    // 0x2840a0: 0x48001b  divu        $zero, $v0, $t0
    ctx->pc = 0x2840a0u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x2840a4: 0x1012  mflo        $v0
    ctx->pc = 0x2840a4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2840a8: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2840a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2840ac: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x2840acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x2840b0: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x2840b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2840b4: 0x0  nop
    ctx->pc = 0x2840b4u;
    // NOP
label_2840b8:
    // 0x2840b8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2840B8u;
    {
        const bool branch_taken_0x2840b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2840BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2840B8u;
            // 0x2840bc: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2840b8) {
            ctx->pc = 0x2840D0u;
            goto label_2840d0;
        }
    }
    ctx->pc = 0x2840C0u;
    // 0x2840c0: 0x2d220100  sltiu       $v0, $t1, 0x100
    ctx->pc = 0x2840c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x2840c4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2840c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2840c8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2840C8u;
    {
        const bool branch_taken_0x2840c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2840CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2840C8u;
            // 0x2840cc: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2840c8) {
            ctx->pc = 0x2840E8u;
            goto label_2840e8;
        }
    }
    ctx->pc = 0x2840D0u;
label_2840d0:
    // 0x2840d0: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x2840d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2840d4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2840d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2840d8: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2840d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2840dc: 0x49102b  sltu        $v0, $v0, $t1
    ctx->pc = 0x2840dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2840e0: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x2840e0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x2840e4: 0x0  nop
    ctx->pc = 0x2840e4u;
    // NOP
label_2840e8:
    // 0x2840e8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2840e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2840ec: 0xa92006  srlv        $a0, $t1, $a1
    ctx->pc = 0x2840ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 5) & 0x1F));
    // 0x2840f0: 0x24425420  addiu       $v0, $v0, 0x5420
    ctx->pc = 0x2840f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21536));
    // 0x2840f4: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x2840f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2840f8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2840f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2840fc: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2840fcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x284100: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x284100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x284104: 0xe33023  subu        $a2, $a3, $v1
    ctx->pc = 0x284104u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x284108: 0x14c00006  bnez        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x284108u;
    {
        const bool branch_taken_0x284108 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x28410Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284108u;
            // 0x28410c: 0xe63823  subu        $a3, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284108) {
            ctx->pc = 0x284124u;
            goto label_284124;
        }
    }
    ctx->pc = 0x284110u;
    // 0x284110: 0x1695823  subu        $t3, $t3, $t1
    ctx->pc = 0x284110u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x284114: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x284114u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x284118: 0x94402  srl         $t0, $t1, 16
    ctx->pc = 0x284118u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x28411c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x28411Cu;
    {
        const bool branch_taken_0x28411c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28411Cu;
            // 0x284120: 0x312affff  andi        $t2, $t1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28411c) {
            ctx->pc = 0x284228u;
            goto label_284228;
        }
    }
    ctx->pc = 0x284124u;
label_284124:
    // 0x284124: 0xcb1804  sllv        $v1, $t3, $a2
    ctx->pc = 0x284124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
    // 0x284128: 0xec1006  srlv        $v0, $t4, $a3
    ctx->pc = 0x284128u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 7) & 0x1F));
    // 0x28412c: 0xc94804  sllv        $t1, $t1, $a2
    ctx->pc = 0x28412cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x284130: 0xeb3806  srlv        $a3, $t3, $a3
    ctx->pc = 0x284130u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 11), GPR_U32(ctx, 7) & 0x1F));
    // 0x284134: 0xcc6004  sllv        $t4, $t4, $a2
    ctx->pc = 0x284134u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 6) & 0x1F));
    // 0x284138: 0x625825  or          $t3, $v1, $v0
    ctx->pc = 0x284138u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28413c: 0x94402  srl         $t0, $t1, 16
    ctx->pc = 0x28413cu;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
    // 0x284140: 0xe8001b  divu        $zero, $a3, $t0
    ctx->pc = 0x284140u;
    { uint32_t divisor = GPR_U32(ctx, 8); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x284144: 0x312affff  andi        $t2, $t1, 0xFFFF
    ctx->pc = 0x284144u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)65535);
    // 0x284148: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x284148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28414c: 0xb2402  srl         $a0, $t3, 16
    ctx->pc = 0x28414cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x284150: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x284150u;
    {
        const bool branch_taken_0x284150 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x284150) {
            ctx->pc = 0x284154u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x284150u;
            // 0x284154: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x284158u;
            goto label_284158;
        }
    }
    ctx->pc = 0x284158u;
label_284158:
    // 0x284158: 0x140682d  daddu       $t5, $t2, $zero
    ctx->pc = 0x284158u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28415c: 0x1012  mflo        $v0
    ctx->pc = 0x28415cu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x284160: 0x1810  mfhi        $v1
    ctx->pc = 0x284160u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x284164: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x284164u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284168: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x284168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x28416c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x28416cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x284170: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x284170u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x284174: 0xea3018  mult        $a2, $a3, $t2
    ctx->pc = 0x284174u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x284178: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x284178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x28417c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x28417cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x284180: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x284180u;
    {
        const bool branch_taken_0x284180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x284180) {
            ctx->pc = 0x284184u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x284180u;
            // 0x284184: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2841B4u;
            goto label_2841b4;
        }
    }
    ctx->pc = 0x284188u;
    // 0x284188: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x284188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x28418c: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x28418cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x284190: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x284190u;
    {
        const bool branch_taken_0x284190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284190u;
            // 0x284194: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284190) {
            ctx->pc = 0x2841B0u;
            goto label_2841b0;
        }
    }
    ctx->pc = 0x284198u;
    // 0x284198: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x284198u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x28419c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28419Cu;
    {
        const bool branch_taken_0x28419c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28419c) {
            ctx->pc = 0x2841A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28419Cu;
            // 0x2841a0: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2841B4u;
            goto label_2841b4;
        }
    }
    ctx->pc = 0x2841A4u;
    // 0x2841a4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2841a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2841a8: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2841a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2841ac: 0x0  nop
    ctx->pc = 0x2841acu;
    // NOP
label_2841b0:
    // 0x2841b0: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x2841b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2841b4:
    // 0x2841b4: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2841B4u;
    {
        const bool branch_taken_0x2841b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2841b4) {
            ctx->pc = 0x2841B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2841B4u;
            // 0x2841b8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2841BCu;
            goto label_2841bc;
        }
    }
    ctx->pc = 0x2841BCu;
label_2841bc:
    // 0x2841bc: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x2841bcu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2841c0: 0x3164ffff  andi        $a0, $t3, 0xFFFF
    ctx->pc = 0x2841c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x2841c4: 0x1012  mflo        $v0
    ctx->pc = 0x2841c4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2841c8: 0x1810  mfhi        $v1
    ctx->pc = 0x2841c8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2841cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2841ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2841d0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2841d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2841d4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2841d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2841d8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2841d8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2841dc: 0xad3018  mult        $a2, $a1, $t5
    ctx->pc = 0x2841dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 13); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2841e0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2841e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2841e4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2841e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2841e8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2841E8u;
    {
        const bool branch_taken_0x2841e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2841ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2841E8u;
            // 0x2841ec: 0x7103c  dsll32      $v0, $a3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2841e8) {
            ctx->pc = 0x284218u;
            goto label_284218;
        }
    }
    ctx->pc = 0x2841F0u;
    // 0x2841f0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x2841f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x2841f4: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x2841f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2841f8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2841F8u;
    {
        const bool branch_taken_0x2841f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2841FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2841F8u;
            // 0x2841fc: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2841f8) {
            ctx->pc = 0x284214u;
            goto label_284214;
        }
    }
    ctx->pc = 0x284200u;
    // 0x284200: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x284200u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x284204: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x284204u;
    {
        const bool branch_taken_0x284204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284204u;
            // 0x284208: 0x7103c  dsll32      $v0, $a3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284204) {
            ctx->pc = 0x284218u;
            goto label_284218;
        }
    }
    ctx->pc = 0x28420Cu;
    // 0x28420c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x28420cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x284210: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x284210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_284214:
    // 0x284214: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x284214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
label_284218:
    // 0x284218: 0x665823  subu        $t3, $v1, $a2
    ctx->pc = 0x284218u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x28421c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x28421cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x284220: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x284220u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x284224: 0x456825  or          $t5, $v0, $a1
    ctx->pc = 0x284224u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_284228:
    // 0x284228: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x284228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28422c: 0xc2402  srl         $a0, $t4, 16
    ctx->pc = 0x28422cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x284230: 0x165001b  divu        $zero, $t3, $a1
    ctx->pc = 0x284230u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 11) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,11); } }
    // 0x284234: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x284234u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284238: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x284238u;
    {
        const bool branch_taken_0x284238 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x284238) {
            ctx->pc = 0x28423Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x284238u;
            // 0x28423c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x284240u;
            goto label_284240;
        }
    }
    ctx->pc = 0x284240u;
label_284240:
    // 0x284240: 0x1012  mflo        $v0
    ctx->pc = 0x284240u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x284244: 0x1810  mfhi        $v1
    ctx->pc = 0x284244u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x284248: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x284248u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28424c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x28424cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x284250: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x284250u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x284254: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x284254u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x284258: 0xe83018  mult        $a2, $a3, $t0
    ctx->pc = 0x284258u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x28425c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x28425cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x284260: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x284260u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x284264: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x284264u;
    {
        const bool branch_taken_0x284264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x284264) {
            ctx->pc = 0x284268u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x284264u;
            // 0x284268: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x284294u;
            goto label_284294;
        }
    }
    ctx->pc = 0x28426Cu;
    // 0x28426c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x28426cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x284270: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x284270u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x284274: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x284274u;
    {
        const bool branch_taken_0x284274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284274u;
            // 0x284278: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284274) {
            ctx->pc = 0x284290u;
            goto label_284290;
        }
    }
    ctx->pc = 0x28427Cu;
    // 0x28427c: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x28427cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x284280: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x284280u;
    {
        const bool branch_taken_0x284280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x284280) {
            ctx->pc = 0x284284u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x284280u;
            // 0x284284: 0x661823  subu        $v1, $v1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x284294u;
            goto label_284294;
        }
    }
    ctx->pc = 0x284288u;
    // 0x284288: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x284288u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x28428c: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x28428cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_284290:
    // 0x284290: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x284290u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_284294:
    // 0x284294: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x284294u;
    {
        const bool branch_taken_0x284294 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x284294) {
            ctx->pc = 0x284298u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x284294u;
            // 0x284298: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x28429Cu;
            goto label_28429c;
        }
    }
    ctx->pc = 0x28429Cu;
label_28429c:
    // 0x28429c: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x28429cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x2842a0: 0x3184ffff  andi        $a0, $t4, 0xFFFF
    ctx->pc = 0x2842a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65535);
    // 0x2842a4: 0x1012  mflo        $v0
    ctx->pc = 0x2842a4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2842a8: 0x1810  mfhi        $v1
    ctx->pc = 0x2842a8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2842ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2842acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2842b0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2842b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2842b4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2842b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2842b8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2842b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2842bc: 0xa83018  mult        $a2, $a1, $t0
    ctx->pc = 0x2842bcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x2842c0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2842c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2842c4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2842c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2842c8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2842C8u;
    {
        const bool branch_taken_0x2842c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2842CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2842C8u;
            // 0x2842cc: 0x691821  addu        $v1, $v1, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2842c8) {
            ctx->pc = 0x2842E8u;
            goto label_2842e8;
        }
    }
    ctx->pc = 0x2842D0u;
    // 0x2842d0: 0x69102b  sltu        $v0, $v1, $t1
    ctx->pc = 0x2842d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x2842d4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2842D4u;
    {
        const bool branch_taken_0x2842d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2842D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2842D4u;
            // 0x2842d8: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2842d4) {
            ctx->pc = 0x2842E8u;
            goto label_2842e8;
        }
    }
    ctx->pc = 0x2842DCu;
    // 0x2842dc: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2842dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2842e0: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2842E0u;
    {
        const bool branch_taken_0x2842e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2842e0) {
            ctx->pc = 0x2842E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2842E0u;
            // 0x2842e4: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2842E8u;
            goto label_2842e8;
        }
    }
    ctx->pc = 0x2842E8u;
label_2842e8:
    // 0x2842e8: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x2842e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2842ec: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2842ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x2842f0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2842f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2842f4: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x2842F4u;
    {
        const bool branch_taken_0x2842f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2842F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2842F4u;
            // 0x2842f8: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2842f4) {
            ctx->pc = 0x2844D0u;
            goto label_2844d0;
        }
    }
    ctx->pc = 0x2842FCu;
label_2842fc:
    // 0x2842fc: 0x168102b  sltu        $v0, $t3, $t0
    ctx->pc = 0x2842fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x284300: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x284300u;
    {
        const bool branch_taken_0x284300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284300u;
            // 0x284304: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x284300) {
            ctx->pc = 0x284310u;
            goto label_284310;
        }
    }
    ctx->pc = 0x284308u;
    // 0x284308: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x284308u;
    {
        const bool branch_taken_0x284308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28430Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284308u;
            // 0x28430c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284308) {
            ctx->pc = 0x2844C8u;
            goto label_2844c8;
        }
    }
    ctx->pc = 0x284310u;
label_284310:
    // 0x284310: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x284310u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x284314: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x284314u;
    {
        const bool branch_taken_0x284314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284314u;
            // 0x284318: 0x3c0200ff  lui         $v0, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284314) {
            ctx->pc = 0x284330u;
            goto label_284330;
        }
    }
    ctx->pc = 0x28431Cu;
    // 0x28431c: 0x2d020100  sltiu       $v0, $t0, 0x100
    ctx->pc = 0x28431cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x284320: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x284320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x284324: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x284324u;
    {
        const bool branch_taken_0x284324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284324u;
            // 0x284328: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284324) {
            ctx->pc = 0x284348u;
            goto label_284348;
        }
    }
    ctx->pc = 0x28432Cu;
    // 0x28432c: 0x0  nop
    ctx->pc = 0x28432cu;
    // NOP
label_284330:
    // 0x284330: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x284330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x284334: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x284334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x284338: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x284338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x28433c: 0x48102b  sltu        $v0, $v0, $t0
    ctx->pc = 0x28433cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x284340: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x284340u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x284344: 0x0  nop
    ctx->pc = 0x284344u;
    // NOP
label_284348:
    // 0x284348: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x284348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x28434c: 0xa82006  srlv        $a0, $t0, $a1
    ctx->pc = 0x28434cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 8), GPR_U32(ctx, 5) & 0x1F));
    // 0x284350: 0x24425420  addiu       $v0, $v0, 0x5420
    ctx->pc = 0x284350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21536));
    // 0x284354: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x284354u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x284358: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x284358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x28435c: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x28435cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x284360: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x284360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x284364: 0xe33023  subu        $a2, $a3, $v1
    ctx->pc = 0x284364u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x284368: 0x54c00009  bnel        $a2, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x284368u;
    {
        const bool branch_taken_0x284368 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x284368) {
            ctx->pc = 0x28436Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x284368u;
            // 0x28436c: 0xe63823  subu        $a3, $a3, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x284390u;
            goto label_284390;
        }
    }
    ctx->pc = 0x284370u;
    // 0x284370: 0x10b102b  sltu        $v0, $t0, $t3
    ctx->pc = 0x284370u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x284374: 0x14400054  bnez        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x284374u;
    {
        const bool branch_taken_0x284374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284374u;
            // 0x284378: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284374) {
            ctx->pc = 0x2844C8u;
            goto label_2844c8;
        }
    }
    ctx->pc = 0x28437Cu;
    // 0x28437c: 0x189102b  sltu        $v0, $t4, $t1
    ctx->pc = 0x28437cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x284380: 0x14400051  bnez        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x284380u;
    {
        const bool branch_taken_0x284380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284380u;
            // 0x284384: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284380) {
            ctx->pc = 0x2844C8u;
            goto label_2844c8;
        }
    }
    ctx->pc = 0x284388u;
    // 0x284388: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x284388u;
    {
        const bool branch_taken_0x284388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28438Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284388u;
            // 0x28438c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284388) {
            ctx->pc = 0x2844C8u;
            goto label_2844c8;
        }
    }
    ctx->pc = 0x284390u;
label_284390:
    // 0x284390: 0xc82804  sllv        $a1, $t0, $a2
    ctx->pc = 0x284390u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), GPR_U32(ctx, 6) & 0x1F));
    // 0x284394: 0xec2006  srlv        $a0, $t4, $a3
    ctx->pc = 0x284394u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), GPR_U32(ctx, 7) & 0x1F));
    // 0x284398: 0xe91806  srlv        $v1, $t1, $a3
    ctx->pc = 0x284398u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), GPR_U32(ctx, 7) & 0x1F));
    // 0x28439c: 0xeb3806  srlv        $a3, $t3, $a3
    ctx->pc = 0x28439cu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 11), GPR_U32(ctx, 7) & 0x1F));
    // 0x2843a0: 0xcb1004  sllv        $v0, $t3, $a2
    ctx->pc = 0x2843a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), GPR_U32(ctx, 6) & 0x1F));
    // 0x2843a4: 0x445825  or          $t3, $v0, $a0
    ctx->pc = 0x2843a4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2843a8: 0xa34025  or          $t0, $a1, $v1
    ctx->pc = 0x2843a8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x2843ac: 0xcc6004  sllv        $t4, $t4, $a2
    ctx->pc = 0x2843acu;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 12), GPR_U32(ctx, 6) & 0x1F));
    // 0x2843b0: 0xc94804  sllv        $t1, $t1, $a2
    ctx->pc = 0x2843b0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 6) & 0x1F));
    // 0x2843b4: 0x83402  srl         $a2, $t0, 16
    ctx->pc = 0x2843b4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 8), 16));
    // 0x2843b8: 0xe6001b  divu        $zero, $a3, $a2
    ctx->pc = 0x2843b8u;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x2843bc: 0x3105ffff  andi        $a1, $t0, 0xFFFF
    ctx->pc = 0x2843bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
    // 0x2843c0: 0xb2402  srl         $a0, $t3, 16
    ctx->pc = 0x2843c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 11), 16));
    // 0x2843c4: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2843C4u;
    {
        const bool branch_taken_0x2843c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2843c4) {
            ctx->pc = 0x2843C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2843C4u;
            // 0x2843c8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2843CCu;
            goto label_2843cc;
        }
    }
    ctx->pc = 0x2843CCu;
label_2843cc:
    // 0x2843cc: 0x1012  mflo        $v0
    ctx->pc = 0x2843ccu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x2843d0: 0x1810  mfhi        $v1
    ctx->pc = 0x2843d0u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x2843d4: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x2843d4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2843d8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2843d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2843dc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2843dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x2843e0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2843e0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2843e4: 0x1453818  mult        $a3, $t2, $a1
    ctx->pc = 0x2843e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x2843e8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2843e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2843ec: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x2843ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x2843f0: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x2843F0u;
    {
        const bool branch_taken_0x2843f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2843f0) {
            ctx->pc = 0x2843F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2843F0u;
            // 0x2843f4: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x284424u;
            goto label_284424;
        }
    }
    ctx->pc = 0x2843F8u;
    // 0x2843f8: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x2843f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2843fc: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x2843fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x284400: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x284400u;
    {
        const bool branch_taken_0x284400 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284400u;
            // 0x284404: 0x254affff  addiu       $t2, $t2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284400) {
            ctx->pc = 0x284420u;
            goto label_284420;
        }
    }
    ctx->pc = 0x284408u;
    // 0x284408: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x284408u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x28440c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28440Cu;
    {
        const bool branch_taken_0x28440c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28440c) {
            ctx->pc = 0x284410u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28440Cu;
            // 0x284410: 0x671823  subu        $v1, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x284424u;
            goto label_284424;
        }
    }
    ctx->pc = 0x284414u;
    // 0x284414: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x284414u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x284418: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x284418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x28441c: 0x0  nop
    ctx->pc = 0x28441cu;
    // NOP
label_284420:
    // 0x284420: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x284420u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_284424:
    // 0x284424: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x284424u;
    {
        const bool branch_taken_0x284424 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x284424) {
            ctx->pc = 0x284428u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x284424u;
            // 0x284428: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x28442Cu;
            goto label_28442c;
        }
    }
    ctx->pc = 0x28442Cu;
label_28442c:
    // 0x28442c: 0x66001b  divu        $zero, $v1, $a2
    ctx->pc = 0x28442cu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x284430: 0x3164ffff  andi        $a0, $t3, 0xFFFF
    ctx->pc = 0x284430u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x284434: 0x1012  mflo        $v0
    ctx->pc = 0x284434u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x284438: 0x1810  mfhi        $v1
    ctx->pc = 0x284438u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x28443c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x28443cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284440: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x284440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x284444: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x284444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x284448: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x284448u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x28444c: 0xc53818  mult        $a3, $a2, $a1
    ctx->pc = 0x28444cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x284450: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x284450u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x284454: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x284454u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x284458: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x284458u;
    {
        const bool branch_taken_0x284458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28445Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284458u;
            // 0x28445c: 0xa103c  dsll32      $v0, $t2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284458) {
            ctx->pc = 0x284488u;
            goto label_284488;
        }
    }
    ctx->pc = 0x284460u;
    // 0x284460: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x284460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x284464: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x284464u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x284468: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x284468u;
    {
        const bool branch_taken_0x284468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28446Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284468u;
            // 0x28446c: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284468) {
            ctx->pc = 0x284484u;
            goto label_284484;
        }
    }
    ctx->pc = 0x284470u;
    // 0x284470: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x284470u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x284474: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x284474u;
    {
        const bool branch_taken_0x284474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x284478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284474u;
            // 0x284478: 0xa103c  dsll32      $v0, $t2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284474) {
            ctx->pc = 0x284488u;
            goto label_284488;
        }
    }
    ctx->pc = 0x28447Cu;
    // 0x28447c: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x28447cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x284480: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x284480u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_284484:
    // 0x284484: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x284484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
label_284488:
    // 0x284488: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x284488u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x28448c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x28448cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x284490: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x284490u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x284494: 0x462825  or          $a1, $v0, $a2
    ctx->pc = 0x284494u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x284498: 0xa90019  multu       $a1, $t1
    ctx->pc = 0x284498u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 5) * (uint64_t)GPR_U32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x28449c: 0x3010  mfhi        $a2
    ctx->pc = 0x28449cu;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x2844a0: 0x2012  mflo        $a0
    ctx->pc = 0x2844a0u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x2844a4: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2844a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2844a8: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x2844A8u;
    {
        const bool branch_taken_0x2844a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2844a8) {
            ctx->pc = 0x2844ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2844A8u;
            // 0x2844ac: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2844C8u;
            goto label_2844c8;
        }
    }
    ctx->pc = 0x2844B0u;
    // 0x2844b0: 0x14c30007  bne         $a2, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x2844B0u;
    {
        const bool branch_taken_0x2844b0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x2844B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2844B0u;
            // 0x2844b4: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2844b0) {
            ctx->pc = 0x2844D0u;
            goto label_2844d0;
        }
    }
    ctx->pc = 0x2844B8u;
    // 0x2844b8: 0x184102b  sltu        $v0, $t4, $a0
    ctx->pc = 0x2844b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 12) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x2844bc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2844BCu;
    {
        const bool branch_taken_0x2844bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2844C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2844BCu;
            // 0x2844c0: 0x5183c  dsll32      $v1, $a1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2844bc) {
            ctx->pc = 0x2844D4u;
            goto label_2844d4;
        }
    }
    ctx->pc = 0x2844C4u;
    // 0x2844c4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x2844c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_2844c8:
    // 0x2844c8: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x2844c8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2844cc: 0x0  nop
    ctx->pc = 0x2844ccu;
    // NOP
label_2844d0:
    // 0x2844d0: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x2844d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
label_2844d4:
    // 0x2844d4: 0xd103c  dsll32      $v0, $t5, 0
    ctx->pc = 0x2844d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) << (32 + 0));
    // 0x2844d8: 0x3703e  dsrl32      $t6, $v1, 0
    ctx->pc = 0x2844d8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x2844dc: 0x1c21025  or          $v0, $t6, $v0
    ctx->pc = 0x2844dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) | GPR_U64(ctx, 2));
    // 0x2844e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2844E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2844E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2844E0u;
            // 0x2844e4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x283F60u: goto label_283f60;
            case 0x283F78u: goto label_283f78;
            case 0x283FB4u: goto label_283fb4;
            case 0x283FCCu: goto label_283fcc;
            case 0x284020u: goto label_284020;
            case 0x284024u: goto label_284024;
            case 0x28402Cu: goto label_28402c;
            case 0x284078u: goto label_284078;
            case 0x28408Cu: goto label_28408c;
            case 0x2840A0u: goto label_2840a0;
            case 0x2840B8u: goto label_2840b8;
            case 0x2840D0u: goto label_2840d0;
            case 0x2840E8u: goto label_2840e8;
            case 0x284124u: goto label_284124;
            case 0x284158u: goto label_284158;
            case 0x2841B0u: goto label_2841b0;
            case 0x2841B4u: goto label_2841b4;
            case 0x2841BCu: goto label_2841bc;
            case 0x284214u: goto label_284214;
            case 0x284218u: goto label_284218;
            case 0x284228u: goto label_284228;
            case 0x284240u: goto label_284240;
            case 0x284290u: goto label_284290;
            case 0x284294u: goto label_284294;
            case 0x28429Cu: goto label_28429c;
            case 0x2842E8u: goto label_2842e8;
            case 0x2842FCu: goto label_2842fc;
            case 0x284310u: goto label_284310;
            case 0x284330u: goto label_284330;
            case 0x284348u: goto label_284348;
            case 0x284390u: goto label_284390;
            case 0x2843CCu: goto label_2843cc;
            case 0x284420u: goto label_284420;
            case 0x284424u: goto label_284424;
            case 0x28442Cu: goto label_28442c;
            case 0x284484u: goto label_284484;
            case 0x284488u: goto label_284488;
            case 0x2844C8u: goto label_2844c8;
            case 0x2844D0u: goto label_2844d0;
            case 0x2844D4u: goto label_2844d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2844E8u;
}
