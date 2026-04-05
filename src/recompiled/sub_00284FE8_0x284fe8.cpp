#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00284FE8
// Address: 0x284fe8 - 0x285080
void sub_00284FE8_0x284fe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284FE8_0x284fe8");
#endif

    ctx->pc = 0x284fe8u;

    // 0x284fe8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x284fe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x284fec: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x284fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x284ff0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x284ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284ff4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x284ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x284ff8: 0xc0a1186  jal         func_284618
    ctx->pc = 0x284FF8u;
    SET_GPR_U32(ctx, 31, 0x285000u);
    ctx->pc = 0x284FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284FF8u;
            // 0x284ffc: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284618u;
    if (runtime->hasFunction(0x284618u)) {
        auto targetFn = runtime->lookupFunction(0x284618u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285000u; }
        if (ctx->pc != 0x285000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_284618_0x2846b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285000u; }
        if (ctx->pc != 0x285000u) { return; }
    }
    ctx->pc = 0x285000u;
    // 0x285000: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x285000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285004: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x285004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x285008: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x285008u;
    {
        const bool branch_taken_0x285008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28500Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285008u;
            // 0x28500c: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x285008) {
            ctx->pc = 0x285018u;
            goto label_285018;
        }
    }
    ctx->pc = 0x285010u;
    // 0x285010: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x285010u;
    {
        const bool branch_taken_0x285010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285010u;
            // 0x285014: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x285010) {
            ctx->pc = 0x285020u;
            goto label_285020;
        }
    }
    ctx->pc = 0x285018u;
label_285018:
    // 0x285018: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x285018u;
    {
        const bool branch_taken_0x285018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28501Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285018u;
            // 0x28501c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285018) {
            ctx->pc = 0x285070u;
            goto label_285070;
        }
    }
    ctx->pc = 0x285020u;
label_285020:
    // 0x285020: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x285020u;
    {
        const bool branch_taken_0x285020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285020u;
            // 0x285024: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285020) {
            ctx->pc = 0x285038u;
            goto label_285038;
        }
    }
    ctx->pc = 0x285028u;
    // 0x285028: 0x480fffb  bltz        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x285028u;
    {
        const bool branch_taken_0x285028 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x28502Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285028u;
            // 0x28502c: 0x2882001f  slti        $v0, $a0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x285028) {
            ctx->pc = 0x285018u;
            runtime->cooperativeGuestYield();
            goto label_285018;
        }
    }
    ctx->pc = 0x285030u;
    // 0x285030: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x285030u;
    {
        const bool branch_taken_0x285030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x285034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285030u;
            // 0x285034: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285030) {
            ctx->pc = 0x285050u;
            goto label_285050;
        }
    }
    ctx->pc = 0x285038u;
label_285038:
    // 0x285038: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x285038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x28503c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x28503cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x285040: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x285040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x285044: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x285044u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x285048: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x285048u;
    {
        const bool branch_taken_0x285048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28504Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285048u;
            // 0x28504c: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285048) {
            ctx->pc = 0x285070u;
            goto label_285070;
        }
    }
    ctx->pc = 0x285050u;
label_285050:
    // 0x285050: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x285050u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285054: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x285054u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x285058: 0x621016  dsrlv       $v0, $v0, $v1
    ctx->pc = 0x285058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 3) & 0x3F));
    // 0x28505c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x28505cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x285060: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x285060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x285064: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x285064u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x285068: 0x21823  negu        $v1, $v0
    ctx->pc = 0x285068u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x28506c: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x28506cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_285070:
    // 0x285070: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x285070u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x285074: 0x3e00008  jr          $ra
    ctx->pc = 0x285074u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285074u;
            // 0x285078: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x285018u: goto label_285018;
            case 0x285020u: goto label_285020;
            case 0x285038u: goto label_285038;
            case 0x285050u: goto label_285050;
            case 0x285070u: goto label_285070;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28507Cu;
    // 0x28507c: 0x0  nop
    ctx->pc = 0x28507cu;
    // NOP
}
