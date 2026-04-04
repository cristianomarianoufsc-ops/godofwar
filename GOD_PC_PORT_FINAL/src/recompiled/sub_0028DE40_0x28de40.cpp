#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028DE40
// Address: 0x28de40 - 0x28ee88
void sub_0028DE40_0x28de40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028DE40_0x28de40");
#endif

    ctx->pc = 0x28de40u;

    // 0x28de40: 0x27bdfda0  addiu       $sp, $sp, -0x260
    ctx->pc = 0x28de40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966688));
    // 0x28de44: 0x7fb10240  sq          $s1, 0x240($sp)
    ctx->pc = 0x28de44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 17));
    // 0x28de48: 0x7fb30220  sq          $s3, 0x220($sp)
    ctx->pc = 0x28de48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 19));
    // 0x28de4c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x28de4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28de50: 0x7fbe01d0  sq          $fp, 0x1D0($sp)
    ctx->pc = 0x28de50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 30));
    // 0x28de54: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x28de54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28de58: 0x7fb00250  sq          $s0, 0x250($sp)
    ctx->pc = 0x28de58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 16));
    // 0x28de5c: 0x7fb20230  sq          $s2, 0x230($sp)
    ctx->pc = 0x28de5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 18));
    // 0x28de60: 0x7fb40210  sq          $s4, 0x210($sp)
    ctx->pc = 0x28de60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 20));
    // 0x28de64: 0x7fb50200  sq          $s5, 0x200($sp)
    ctx->pc = 0x28de64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 21));
    // 0x28de68: 0x7fb601f0  sq          $s6, 0x1F0($sp)
    ctx->pc = 0x28de68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 22));
    // 0x28de6c: 0x7fb701e0  sq          $s7, 0x1E0($sp)
    ctx->pc = 0x28de6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 23));
    // 0x28de70: 0xffbf01c0  sd          $ra, 0x1C0($sp)
    ctx->pc = 0x28de70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 31));
    // 0x28de74: 0xc0a4442  jal         func_291108
    ctx->pc = 0x28DE74u;
    SET_GPR_U32(ctx, 31, 0x28DE7Cu);
    ctx->pc = 0x28DE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28DE74u;
            // 0x28de78: 0xc0f02d  daddu       $fp, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291108u;
    if (runtime->hasFunction(0x291108u)) {
        auto targetFn = runtime->lookupFunction(0x291108u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DE7Cu; }
        if (ctx->pc != 0x28DE7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_291108_0x291130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DE7Cu; }
        if (ctx->pc != 0x28DE7Cu) { return; }
    }
    ctx->pc = 0x28DE7Cu;
    // 0x28de7c: 0x27a20184  addiu       $v0, $sp, 0x184
    ctx->pc = 0x28de7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 388));
    // 0x28de80: 0x27a30188  addiu       $v1, $sp, 0x188
    ctx->pc = 0x28de80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 392));
    // 0x28de84: 0xafa00190  sw          $zero, 0x190($sp)
    ctx->pc = 0x28de84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 0));
    // 0x28de88: 0xafa201a8  sw          $v0, 0x1A8($sp)
    ctx->pc = 0x28de88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 2));
    // 0x28de8c: 0xafa301ac  sw          $v1, 0x1AC($sp)
    ctx->pc = 0x28de8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 3));
    // 0x28de90: 0xafa00188  sw          $zero, 0x188($sp)
    ctx->pc = 0x28de90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 0));
    // 0x28de94: 0x0  nop
    ctx->pc = 0x28de94u;
    // NOP
label_28de98:
    // 0x28de98: 0x3c0a02d  daddu       $s4, $fp, $zero
    ctx->pc = 0x28de98u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28de9c: 0x24120025  addiu       $s2, $zero, 0x25
    ctx->pc = 0x28de9cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_28dea0:
    // 0x28dea0: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x28dea0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x28dea4: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x28dea4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x28dea8: 0x8ca44294  lw          $a0, 0x4294($a1)
    ctx->pc = 0x28dea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 17044)));
    // 0x28deac: 0x8cc74a90  lw          $a3, 0x4A90($a2)
    ctx->pc = 0x28deacu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 19088)));
    // 0x28deb0: 0x8fa501a8  lw          $a1, 0x1A8($sp)
    ctx->pc = 0x28deb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
    // 0x28deb4: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x28deb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28deb8: 0xc0a2cc2  jal         func_28B308
    ctx->pc = 0x28DEB8u;
    SET_GPR_U32(ctx, 31, 0x28DEC0u);
    ctx->pc = 0x28DEBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28DEB8u;
            // 0x28debc: 0x8fa801ac  lw          $t0, 0x1AC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B308u;
    if (runtime->hasFunction(0x28B308u)) {
        auto targetFn = runtime->lookupFunction(0x28B308u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DEC0u; }
        if (ctx->pc != 0x28DEC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028B308_0x28b308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DEC0u; }
        if (ctx->pc != 0x28DEC0u) { return; }
    }
    ctx->pc = 0x28DEC0u;
    // 0x28dec0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28dec0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dec4: 0x1a000004  blez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28DEC4u;
    {
        const bool branch_taken_0x28dec4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x28DEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DEC4u;
            // 0x28dec8: 0x8fa20184  lw          $v0, 0x184($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 388)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dec4) {
            ctx->pc = 0x28DED8u;
            goto label_28ded8;
        }
    }
    ctx->pc = 0x28DECCu;
    // 0x28decc: 0x1452fff4  bne         $v0, $s2, . + 4 + (-0xC << 2)
    ctx->pc = 0x28DECCu;
    {
        const bool branch_taken_0x28decc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x28DED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DECCu;
            // 0x28ded0: 0x3d0f021  addu        $fp, $fp, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28decc) {
            ctx->pc = 0x28DEA0u;
            runtime->cooperativeGuestYield();
            goto label_28dea0;
        }
    }
    ctx->pc = 0x28DED4u;
    // 0x28ded4: 0x27deffff  addiu       $fp, $fp, -0x1
    ctx->pc = 0x28ded4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
label_28ded8:
    // 0x28ded8: 0x3d49023  subu        $s2, $fp, $s4
    ctx->pc = 0x28ded8u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 30), GPR_U32(ctx, 20)));
    // 0x28dedc: 0x12400028  beqz        $s2, . + 4 + (0x28 << 2)
    ctx->pc = 0x28DEDCu;
    {
        const bool branch_taken_0x28dedc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x28dedc) {
            ctx->pc = 0x28DF80u;
            goto label_28df80;
        }
    }
    ctx->pc = 0x28DEE4u;
    // 0x28dee4: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x28dee4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28dee8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x28dee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x28deec: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x28DEECu;
    {
        const bool branch_taken_0x28deec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28deec) {
            ctx->pc = 0x28DEF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28DEECu;
            // 0x28def0: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28DF50u;
            goto label_28df50;
        }
    }
    ctx->pc = 0x28DEF4u;
    // 0x28def4: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x28def4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28def8: 0x246102a  slt         $v0, $s2, $a2
    ctx->pc = 0x28def8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x28defc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x28DEFCu;
    {
        const bool branch_taken_0x28defc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DF00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DEFCu;
            // 0x28df00: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28defc) {
            ctx->pc = 0x28DF2Cu;
            goto label_28df2c;
        }
    }
    ctx->pc = 0x28DF04u;
    // 0x28df04: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x28df04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28df08: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x28DF08u;
    SET_GPR_U32(ctx, 31, 0x28DF10u);
    ctx->pc = 0x28DF0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28DF08u;
            // 0x28df0c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DF10u; }
        if (ctx->pc != 0x28DF10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DF10u; }
        if (ctx->pc != 0x28DF10u) { return; }
    }
    ctx->pc = 0x28DF10u;
    // 0x28df10: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28df10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28df14: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28df14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28df18: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x28df18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x28df1c: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x28df1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x28df20: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x28df20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x28df24: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x28DF24u;
    {
        const bool branch_taken_0x28df24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DF24u;
            // 0x28df28: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28df24) {
            ctx->pc = 0x28DF74u;
            goto label_28df74;
        }
    }
    ctx->pc = 0x28DF2Cu;
label_28df2c:
    // 0x28df2c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x28df2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28df30: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x28DF30u;
    SET_GPR_U32(ctx, 31, 0x28DF38u);
    ctx->pc = 0x28DF34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28DF30u;
            // 0x28df34: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DF38u; }
        if (ctx->pc != 0x28DF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DF38u; }
        if (ctx->pc != 0x28DF38u) { return; }
    }
    ctx->pc = 0x28DF38u;
    // 0x28df38: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28df38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28df3c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28df3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28df40: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x28df40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x28df44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28df44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28df48: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x28DF48u;
    {
        const bool branch_taken_0x28df48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DF4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DF48u;
            // 0x28df4c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28df48) {
            ctx->pc = 0x28DF74u;
            goto label_28df74;
        }
    }
    ctx->pc = 0x28DF50u;
label_28df50:
    // 0x28df50: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28DF50u;
    {
        const bool branch_taken_0x28df50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28df50) {
            ctx->pc = 0x28DF54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28DF50u;
            // 0x28df54: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28DF64u;
            goto label_28df64;
        }
    }
    ctx->pc = 0x28DF58u;
    // 0x28df58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28df58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28df5c: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x28df5cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x28df60: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x28df60u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_28df64:
    // 0x28df64: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x28df64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28df68: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28df68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28df6c: 0xc0a371a  jal         func_28DC68
    ctx->pc = 0x28DF6Cu;
    SET_GPR_U32(ctx, 31, 0x28DF74u);
    ctx->pc = 0x28DF70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28DF6Cu;
            // 0x28df70: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28DC68u;
    if (runtime->hasFunction(0x28DC68u)) {
        auto targetFn = runtime->lookupFunction(0x28DC68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DF74u; }
        if (ctx->pc != 0x28DF74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028DC68_0x28dc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28DF74u; }
        if (ctx->pc != 0x28DF74u) { return; }
    }
    ctx->pc = 0x28DF74u;
label_28df74:
    // 0x28df74: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x28df74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x28df78: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x28df78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x28df7c: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x28df7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
label_28df80:
    // 0x28df80: 0x5a0003ab  blezl       $s0, . + 4 + (0x3AB << 2)
    ctx->pc = 0x28DF80u;
    {
        const bool branch_taken_0x28df80 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x28df80) {
            ctx->pc = 0x28DF84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28DF80u;
            // 0x28df84: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28EE30u;
            goto label_28ee30;
        }
    }
    ctx->pc = 0x28DF88u;
    // 0x28df88: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28df88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28df8c: 0x5c400006  bgtzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28DF8Cu;
    {
        const bool branch_taken_0x28df8c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x28df8c) {
            ctx->pc = 0x28DF90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28DF8Cu;
            // 0x28df90: 0xa3a00180  sb          $zero, 0x180($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28DFA8u;
            goto label_28dfa8;
        }
    }
    ctx->pc = 0x28DF94u;
    // 0x28df94: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x28df94u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28df98: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x28df98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x28df9c: 0x144003ad  bnez        $v0, . + 4 + (0x3AD << 2)
    ctx->pc = 0x28DF9Cu;
    {
        const bool branch_taken_0x28df9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28DFA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DF9Cu;
            // 0x28dfa0: 0x8fa20190  lw          $v0, 0x190($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28df9c) {
            ctx->pc = 0x28EE54u;
            goto label_28ee54;
        }
    }
    ctx->pc = 0x28DFA4u;
    // 0x28dfa4: 0xa3a00180  sb          $zero, 0x180($sp)
    ctx->pc = 0x28dfa4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 0));
label_28dfa8:
    // 0x28dfa8: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x28dfa8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x28dfac: 0xafa00198  sw          $zero, 0x198($sp)
    ctx->pc = 0x28dfacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 0));
    // 0x28dfb0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x28dfb0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28dfb4: 0xafa00194  sw          $zero, 0x194($sp)
    ctx->pc = 0x28dfb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 0));
    // 0x28dfb8: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x28dfb8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_28dfbc:
    // 0x28dfbc: 0x83d60000  lb          $s6, 0x0($fp)
    ctx->pc = 0x28dfbcu;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
label_28dfc0:
    // 0x28dfc0: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x28dfc0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_28dfc4:
    // 0x28dfc4: 0x26c3ffe0  addiu       $v1, $s6, -0x20
    ctx->pc = 0x28dfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967264));
    // 0x28dfc8: 0x2c620059  sltiu       $v0, $v1, 0x59
    ctx->pc = 0x28dfc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)89) ? 1 : 0);
    // 0x28dfcc: 0x1040019c  beqz        $v0, . + 4 + (0x19C << 2)
    ctx->pc = 0x28DFCCu;
    {
        const bool branch_taken_0x28dfcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28DFD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DFCCu;
            // 0x28dfd0: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dfcc) {
            ctx->pc = 0x28E640u;
            goto label_28e640;
        }
    }
    ctx->pc = 0x28DFD4u;
    // 0x28dfd4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28dfd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28dfd8: 0x244261d0  addiu       $v0, $v0, 0x61D0
    ctx->pc = 0x28dfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25040));
    // 0x28dfdc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28dfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28dfe0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x28dfe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28dfe4: 0x800008  jr          $a0
    ctx->pc = 0x28DFE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28DFECu: goto label_28dfec;
            case 0x28E004u: goto label_28e004;
            case 0x28E00Cu: goto label_28e00c;
            case 0x28E014u: goto label_28e014;
            case 0x28E02Cu: goto label_28e02c;
            case 0x28E034u: goto label_28e034;
            case 0x28E040u: goto label_28e040;
            case 0x28E0B4u: goto label_28e0b4;
            case 0x28E0BCu: goto label_28e0bc;
            case 0x28E0F0u: goto label_28e0f0;
            case 0x28E0F8u: goto label_28e0f8;
            case 0x28E100u: goto label_28e100;
            case 0x28E114u: goto label_28e114;
            case 0x28E11Cu: goto label_28e11c;
            case 0x28E148u: goto label_28e148;
            case 0x28E14Cu: goto label_28e14c;
            case 0x28E19Cu: goto label_28e19c;
            case 0x28E2C8u: goto label_28e2c8;
            case 0x28E330u: goto label_28e330;
            case 0x28E334u: goto label_28e334;
            case 0x28E374u: goto label_28e374;
            case 0x28E398u: goto label_28e398;
            case 0x28E3FCu: goto label_28e3fc;
            case 0x28E400u: goto label_28e400;
            case 0x28E440u: goto label_28e440;
            case 0x28E44Cu: goto label_28e44c;
            case 0x28E640u: goto label_28e640;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28DFECu;
label_28dfec:
    // 0x28dfec: 0x83a20180  lb          $v0, 0x180($sp)
    ctx->pc = 0x28dfecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x28dff0: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x28DFF0u;
    {
        const bool branch_taken_0x28dff0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28dff0) {
            ctx->pc = 0x28DFF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28DFF0u;
            // 0x28dff4: 0x83d60000  lb          $s6, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28DFC0u;
            runtime->cooperativeGuestYield();
            goto label_28dfc0;
        }
    }
    ctx->pc = 0x28DFF8u;
    // 0x28dff8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x28dff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x28dffc: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x28DFFCu;
    {
        const bool branch_taken_0x28dffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28DFFCu;
            // 0x28e000: 0xa3a20180  sb          $v0, 0x180($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28dffc) {
            ctx->pc = 0x28DFBCu;
            runtime->cooperativeGuestYield();
            goto label_28dfbc;
        }
    }
    ctx->pc = 0x28E004u;
label_28e004:
    // 0x28e004: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x28E004u;
    {
        const bool branch_taken_0x28e004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E004u;
            // 0x28e008: 0x36b50001  ori         $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e004) {
            ctx->pc = 0x28DFBCu;
            runtime->cooperativeGuestYield();
            goto label_28dfbc;
        }
    }
    ctx->pc = 0x28E00Cu;
label_28e00c:
    // 0x28e00c: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x28E00Cu;
    {
        const bool branch_taken_0x28e00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E00Cu;
            // 0x28e010: 0x36b50200  ori         $s5, $s5, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e00c) {
            ctx->pc = 0x28DFBCu;
            runtime->cooperativeGuestYield();
            goto label_28dfbc;
        }
    }
    ctx->pc = 0x28E014u;
label_28e014:
    // 0x28e014: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x28e014u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x28e018: 0x8e63fff8  lw          $v1, -0x8($s3)
    ctx->pc = 0x28e018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x28e01c: 0x461ffe7  bgez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x28E01Cu;
    {
        const bool branch_taken_0x28e01c = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x28E020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E01Cu;
            // 0x28e020: 0xafa30194  sw          $v1, 0x194($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e01c) {
            ctx->pc = 0x28DFBCu;
            runtime->cooperativeGuestYield();
            goto label_28dfbc;
        }
    }
    ctx->pc = 0x28E024u;
    // 0x28e024: 0x31823  negu        $v1, $v1
    ctx->pc = 0x28e024u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x28e028: 0xafa30194  sw          $v1, 0x194($sp)
    ctx->pc = 0x28e028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 3));
label_28e02c:
    // 0x28e02c: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x28E02Cu;
    {
        const bool branch_taken_0x28e02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E02Cu;
            // 0x28e030: 0x36b50004  ori         $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e02c) {
            ctx->pc = 0x28DFBCu;
            runtime->cooperativeGuestYield();
            goto label_28dfbc;
        }
    }
    ctx->pc = 0x28E034u;
label_28e034:
    // 0x28e034: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x28e034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x28e038: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x28E038u;
    {
        const bool branch_taken_0x28e038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E038u;
            // 0x28e03c: 0xa3a20180  sb          $v0, 0x180($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e038) {
            ctx->pc = 0x28DFBCu;
            runtime->cooperativeGuestYield();
            goto label_28dfbc;
        }
    }
    ctx->pc = 0x28E040u;
label_28e040:
    // 0x28e040: 0x83d60000  lb          $s6, 0x0($fp)
    ctx->pc = 0x28e040u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x28e044: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x28e044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x28e048: 0x16c20008  bne         $s6, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28E048u;
    {
        const bool branch_taken_0x28e048 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x28E04Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E048u;
            // 0x28e04c: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e048) {
            ctx->pc = 0x28E06Cu;
            goto label_28e06c;
        }
    }
    ctx->pc = 0x28E050u;
    // 0x28e050: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x28e050u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x28e054: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x28e054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x28e058: 0x8e70fff8  lw          $s0, -0x8($s3)
    ctx->pc = 0x28e058u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x28e05c: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x28e05cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28e060: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x28e060u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x28e064: 0x1000ffd5  b           . + 4 + (-0x2B << 2)
    ctx->pc = 0x28E064u;
    {
        const bool branch_taken_0x28e064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E064u;
            // 0x28e068: 0x202b80b  movn        $s7, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e064) {
            ctx->pc = 0x28DFBCu;
            runtime->cooperativeGuestYield();
            goto label_28dfbc;
        }
    }
    ctx->pc = 0x28E06Cu;
label_28e06c:
    // 0x28e06c: 0x26c2ffd0  addiu       $v0, $s6, -0x30
    ctx->pc = 0x28e06cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967248));
    // 0x28e070: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x28e070u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x28e074: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x28E074u;
    {
        const bool branch_taken_0x28e074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E074u;
            // 0x28e078: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e074) {
            ctx->pc = 0x28E0A0u;
            goto label_28e0a0;
        }
    }
    ctx->pc = 0x28E07Cu;
    // 0x28e07c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x28e07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_28e080:
    // 0x28e080: 0x2031018  mult        $v0, $s0, $v1
    ctx->pc = 0x28e080u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28e084: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x28e084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x28e088: 0x568021  addu        $s0, $v0, $s6
    ctx->pc = 0x28e088u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x28e08c: 0x83d60000  lb          $s6, 0x0($fp)
    ctx->pc = 0x28e08cu;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x28e090: 0x26c2ffd0  addiu       $v0, $s6, -0x30
    ctx->pc = 0x28e090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967248));
    // 0x28e094: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x28e094u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x28e098: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x28E098u;
    {
        const bool branch_taken_0x28e098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E09Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E098u;
            // 0x28e09c: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e098) {
            ctx->pc = 0x28E080u;
            runtime->cooperativeGuestYield();
            goto label_28e080;
        }
    }
    ctx->pc = 0x28E0A0u;
label_28e0a0:
    // 0x28e0a0: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x28e0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x28e0a4: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x28e0a4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28e0a8: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x28e0a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x28e0ac: 0x1000ffc5  b           . + 4 + (-0x3B << 2)
    ctx->pc = 0x28E0ACu;
    {
        const bool branch_taken_0x28e0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E0B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E0ACu;
            // 0x28e0b0: 0x202b80b  movn        $s7, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e0ac) {
            ctx->pc = 0x28DFC4u;
            runtime->cooperativeGuestYield();
            goto label_28dfc4;
        }
    }
    ctx->pc = 0x28E0B4u;
label_28e0b4:
    // 0x28e0b4: 0x1000ffc1  b           . + 4 + (-0x3F << 2)
    ctx->pc = 0x28E0B4u;
    {
        const bool branch_taken_0x28e0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E0B4u;
            // 0x28e0b8: 0x36b50080  ori         $s5, $s5, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e0b4) {
            ctx->pc = 0x28DFBCu;
            runtime->cooperativeGuestYield();
            goto label_28dfbc;
        }
    }
    ctx->pc = 0x28E0BCu;
label_28e0bc:
    // 0x28e0bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28e0bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e0c0: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x28e0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x28e0c4: 0x0  nop
    ctx->pc = 0x28e0c4u;
    // NOP
label_28e0c8:
    // 0x28e0c8: 0x2031018  mult        $v0, $s0, $v1
    ctx->pc = 0x28e0c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28e0cc: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x28e0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x28e0d0: 0x568021  addu        $s0, $v0, $s6
    ctx->pc = 0x28e0d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x28e0d4: 0x83d60000  lb          $s6, 0x0($fp)
    ctx->pc = 0x28e0d4u;
    SET_GPR_S32(ctx, 22, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x28e0d8: 0x26c2ffd0  addiu       $v0, $s6, -0x30
    ctx->pc = 0x28e0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294967248));
    // 0x28e0dc: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x28e0dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x28e0e0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x28E0E0u;
    {
        const bool branch_taken_0x28e0e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E0E0u;
            // 0x28e0e4: 0x27de0001  addiu       $fp, $fp, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e0e0) {
            ctx->pc = 0x28E0C8u;
            runtime->cooperativeGuestYield();
            goto label_28e0c8;
        }
    }
    ctx->pc = 0x28E0E8u;
    // 0x28e0e8: 0x1000ffb6  b           . + 4 + (-0x4A << 2)
    ctx->pc = 0x28E0E8u;
    {
        const bool branch_taken_0x28e0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E0E8u;
            // 0x28e0ec: 0xafb00194  sw          $s0, 0x194($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e0e8) {
            ctx->pc = 0x28DFC4u;
            runtime->cooperativeGuestYield();
            goto label_28dfc4;
        }
    }
    ctx->pc = 0x28E0F0u;
label_28e0f0:
    // 0x28e0f0: 0x1000ffb2  b           . + 4 + (-0x4E << 2)
    ctx->pc = 0x28E0F0u;
    {
        const bool branch_taken_0x28e0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E0F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E0F0u;
            // 0x28e0f4: 0x36b50008  ori         $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e0f0) {
            ctx->pc = 0x28DFBCu;
            runtime->cooperativeGuestYield();
            goto label_28dfbc;
        }
    }
    ctx->pc = 0x28E0F8u;
label_28e0f8:
    // 0x28e0f8: 0x1000ffb0  b           . + 4 + (-0x50 << 2)
    ctx->pc = 0x28E0F8u;
    {
        const bool branch_taken_0x28e0f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E0FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E0F8u;
            // 0x28e0fc: 0x36b50040  ori         $s5, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e0f8) {
            ctx->pc = 0x28DFBCu;
            runtime->cooperativeGuestYield();
            goto label_28dfbc;
        }
    }
    ctx->pc = 0x28E100u;
label_28e100:
    // 0x28e100: 0x83c30000  lb          $v1, 0x0($fp)
    ctx->pc = 0x28e100u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x28e104: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x28e104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x28e108: 0x5462ffac  bnel        $v1, $v0, . + 4 + (-0x54 << 2)
    ctx->pc = 0x28E108u;
    {
        const bool branch_taken_0x28e108 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28e108) {
            ctx->pc = 0x28E10Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28E108u;
            // 0x28e10c: 0x36b50010  ori         $s5, $s5, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
            ctx->pc = 0x28DFBCu;
            runtime->cooperativeGuestYield();
            goto label_28dfbc;
        }
    }
    ctx->pc = 0x28E110u;
    // 0x28e110: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x28e110u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_28e114:
    // 0x28e114: 0x1000ffa9  b           . + 4 + (-0x57 << 2)
    ctx->pc = 0x28E114u;
    {
        const bool branch_taken_0x28e114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E114u;
            // 0x28e118: 0x36b50020  ori         $s5, $s5, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e114) {
            ctx->pc = 0x28DFBCu;
            runtime->cooperativeGuestYield();
            goto label_28dfbc;
        }
    }
    ctx->pc = 0x28E11Cu;
label_28e11c:
    // 0x28e11c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x28e11cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x28e120: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28e120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e124: 0x9263fff8  lbu         $v1, -0x8($s3)
    ctx->pc = 0x28e124u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x28e128: 0x32a40004  andi        $a0, $s5, 0x4
    ctx->pc = 0x28e128u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
    // 0x28e12c: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x28e12cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28e130: 0xafa2018c  sw          $v0, 0x18C($sp)
    ctx->pc = 0x28e130u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
    // 0x28e134: 0x32b70084  andi        $s7, $s5, 0x84
    ctx->pc = 0x28e134u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)132);
    // 0x28e138: 0xa3a30010  sb          $v1, 0x10($sp)
    ctx->pc = 0x28e138u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x28e13c: 0xafa401b0  sw          $a0, 0x1B0($sp)
    ctx->pc = 0x28e13cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 4));
    // 0x28e140: 0x10000148  b           . + 4 + (0x148 << 2)
    ctx->pc = 0x28E140u;
    {
        const bool branch_taken_0x28e140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E140u;
            // 0x28e144: 0xa3a00180  sb          $zero, 0x180($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e140) {
            ctx->pc = 0x28E664u;
            goto label_28e664;
        }
    }
    ctx->pc = 0x28E148u;
label_28e148:
    // 0x28e148: 0x36b50010  ori         $s5, $s5, 0x10
    ctx->pc = 0x28e148u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)16);
label_28e14c:
    // 0x28e14c: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x28e14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
    // 0x28e150: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28E150u;
    {
        const bool branch_taken_0x28e150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e150) {
            ctx->pc = 0x28E154u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28E150u;
            // 0x28e154: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28E168u;
            goto label_28e168;
        }
    }
    ctx->pc = 0x28E158u;
    // 0x28e158: 0x32a20010  andi        $v0, $s5, 0x10
    ctx->pc = 0x28e158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
    // 0x28e15c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28E15Cu;
    {
        const bool branch_taken_0x28e15c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E15Cu;
            // 0x28e160: 0x32a20040  andi        $v0, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e15c) {
            ctx->pc = 0x28E170u;
            goto label_28e170;
        }
    }
    ctx->pc = 0x28E164u;
    // 0x28e164: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x28e164u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_28e168:
    // 0x28e168: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28E168u;
    {
        const bool branch_taken_0x28e168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E16Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E168u;
            // 0x28e16c: 0xde70fff8  ld          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e168) {
            ctx->pc = 0x28E184u;
            goto label_28e184;
        }
    }
    ctx->pc = 0x28E170u;
label_28e170:
    // 0x28e170: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28E170u;
    {
        const bool branch_taken_0x28e170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E170u;
            // 0x28e174: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e170) {
            ctx->pc = 0x28E180u;
            goto label_28e180;
        }
    }
    ctx->pc = 0x28E178u;
    // 0x28e178: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28E178u;
    {
        const bool branch_taken_0x28e178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E178u;
            // 0x28e17c: 0x8670fff8  lh          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e178) {
            ctx->pc = 0x28E184u;
            goto label_28e184;
        }
    }
    ctx->pc = 0x28E180u;
label_28e180:
    // 0x28e180: 0x8e70fff8  lw          $s0, -0x8($s3)
    ctx->pc = 0x28e180u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_28e184:
    // 0x28e184: 0x60100c8  bgez        $s0, . + 4 + (0xC8 << 2)
    ctx->pc = 0x28E184u;
    {
        const bool branch_taken_0x28e184 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x28E188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E184u;
            // 0x28e188: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e184) {
            ctx->pc = 0x28E4A8u;
            goto label_28e4a8;
        }
    }
    ctx->pc = 0x28E18Cu;
    // 0x28e18c: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x28e18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x28e190: 0x10802f  dsubu       $s0, $zero, $s0
    ctx->pc = 0x28e190u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) - GPR_U64(ctx, 16));
    // 0x28e194: 0x100000c4  b           . + 4 + (0xC4 << 2)
    ctx->pc = 0x28E194u;
    {
        const bool branch_taken_0x28e194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E194u;
            // 0x28e198: 0xa3a20180  sb          $v0, 0x180($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e194) {
            ctx->pc = 0x28E4A8u;
            goto label_28e4a8;
        }
    }
    ctx->pc = 0x28E19Cu;
label_28e19c:
    // 0x28e19c: 0x171027  nor         $v0, $zero, $s7
    ctx->pc = 0x28e19cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 23)));
    // 0x28e1a0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x28e1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x28e1a4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x28e1a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x28e1a8: 0x62b80a  movz        $s7, $v1, $v0
    ctx->pc = 0x28e1a8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 3));
    // 0x28e1ac: 0xde74fff8  ld          $s4, -0x8($s3)
    ctx->pc = 0x28e1acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x28e1b0: 0x24020067  addiu       $v0, $zero, 0x67
    ctx->pc = 0x28e1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
    // 0x28e1b4: 0x12c20004  beq         $s6, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28E1B4u;
    {
        const bool branch_taken_0x28e1b4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x28E1B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E1B4u;
            // 0x28e1b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e1b4) {
            ctx->pc = 0x28E1C8u;
            goto label_28e1c8;
        }
    }
    ctx->pc = 0x28E1BCu;
    // 0x28e1bc: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x28e1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x28e1c0: 0x16c2002a  bne         $s6, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x28E1C0u;
    {
        const bool branch_taken_0x28e1c0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x28E1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E1C0u;
            // 0x28e1c4: 0x32a20001  andi        $v0, $s5, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e1c0) {
            ctx->pc = 0x28E26Cu;
            goto label_28e26c;
        }
    }
    ctx->pc = 0x28E1C8u;
label_28e1c8:
    // 0x28e1c8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28e1c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e1cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28e1ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e1d0: 0xc0a13b8  jal         func_284EE0
    ctx->pc = 0x28E1D0u;
    SET_GPR_U32(ctx, 31, 0x28E1D8u);
    ctx->pc = 0x28E1D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E1D0u;
            // 0x28e1d4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284EE0u;
    if (runtime->hasFunction(0x284EE0u)) {
        auto targetFn = runtime->lookupFunction(0x284EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E1D8u; }
        if (ctx->pc != 0x28E1D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284EE0_0x284ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E1D8u; }
        if (ctx->pc != 0x28E1D8u) { return; }
    }
    ctx->pc = 0x28E1D8u;
    // 0x28e1d8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x28E1D8u;
    {
        const bool branch_taken_0x28e1d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E1DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E1D8u;
            // 0x28e1dc: 0x280802d  daddu       $s0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e1d8) {
            ctx->pc = 0x28E210u;
            goto label_28e210;
        }
    }
    ctx->pc = 0x28E1E0u;
    // 0x28e1e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28e1e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e1e4: 0xc0a13b8  jal         func_284EE0
    ctx->pc = 0x28E1E4u;
    SET_GPR_U32(ctx, 31, 0x28E1ECu);
    ctx->pc = 0x28E1E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E1E4u;
            // 0x28e1e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284EE0u;
    if (runtime->hasFunction(0x284EE0u)) {
        auto targetFn = runtime->lookupFunction(0x284EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E1ECu; }
        if (ctx->pc != 0x28E1ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284EE0_0x284ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E1ECu; }
        if (ctx->pc != 0x28E1ECu) { return; }
    }
    ctx->pc = 0x28E1ECu;
    // 0x28e1ec: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28E1ECu;
    {
        const bool branch_taken_0x28e1ec = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x28E1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E1ECu;
            // 0x28e1f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e1ec) {
            ctx->pc = 0x28E200u;
            goto label_28e200;
        }
    }
    ctx->pc = 0x28E1F4u;
    // 0x28e1f4: 0xc0a1254  jal         func_284950
    ctx->pc = 0x28E1F4u;
    SET_GPR_U32(ctx, 31, 0x28E1FCu);
    ctx->pc = 0x28E1F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E1F4u;
            // 0x28e1f8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E1FCu; }
        if (ctx->pc != 0x28E1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E1FCu; }
        if (ctx->pc != 0x28E1FCu) { return; }
    }
    ctx->pc = 0x28E1FCu;
    // 0x28e1fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28e1fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28e200:
    // 0x28e200: 0xc0a47a2  jal         func_291E88
    ctx->pc = 0x28E200u;
    SET_GPR_U32(ctx, 31, 0x28E208u);
    ctx->pc = 0x28E204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E200u;
            // 0x28e204: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291E88u;
    if (runtime->hasFunction(0x291E88u)) {
        auto targetFn = runtime->lookupFunction(0x291E88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E208u; }
        if (ctx->pc != 0x28E208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291E88_0x291e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E208u; }
        if (ctx->pc != 0x28E208u) { return; }
    }
    ctx->pc = 0x28E208u;
    // 0x28e208: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28E208u;
    {
        const bool branch_taken_0x28e208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E20Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E208u;
            // 0x28e20c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e208) {
            ctx->pc = 0x28E218u;
            goto label_28e218;
        }
    }
    ctx->pc = 0x28E210u;
label_28e210:
    // 0x28e210: 0x3410ffc0  ori         $s0, $zero, 0xFFC0
    ctx->pc = 0x28e210u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x28e214: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x28e214u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
label_28e218:
    // 0x28e218: 0x3405c010  ori         $a1, $zero, 0xC010
    ctx->pc = 0x28e218u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49168);
    // 0x28e21c: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x28e21cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x28e220: 0xc0a13b8  jal         func_284EE0
    ctx->pc = 0x28E220u;
    SET_GPR_U32(ctx, 31, 0x28E228u);
    ctx->pc = 0x28E224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E220u;
            // 0x28e224: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284EE0u;
    if (runtime->hasFunction(0x284EE0u)) {
        auto targetFn = runtime->lookupFunction(0x284EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E228u; }
        if (ctx->pc != 0x28E228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284EE0_0x284ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E228u; }
        if (ctx->pc != 0x28E228u) { return; }
    }
    ctx->pc = 0x28E228u;
    // 0x28e228: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28E228u;
    {
        const bool branch_taken_0x28e228 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28E22Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E228u;
            // 0x28e22c: 0x3ac40067  xori        $a0, $s6, 0x67 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) ^ (uint64_t)(uint16_t)103);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e228) {
            ctx->pc = 0x28E24Cu;
            goto label_28e24c;
        }
    }
    ctx->pc = 0x28E230u;
    // 0x28e230: 0xc0a13cc  jal         func_284F30
    ctx->pc = 0x28E230u;
    SET_GPR_U32(ctx, 31, 0x28E238u);
    ctx->pc = 0x28E234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E230u;
            // 0x28e234: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284F30u;
    if (runtime->hasFunction(0x284F30u)) {
        auto targetFn = runtime->lookupFunction(0x284F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E238u; }
        if (ctx->pc != 0x28E238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284F30_0x284f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E238u; }
        if (ctx->pc != 0x28E238u) { return; }
    }
    ctx->pc = 0x28E238u;
    // 0x28e238: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28e238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e23c: 0xc0a13b8  jal         func_284EE0
    ctx->pc = 0x28E23Cu;
    SET_GPR_U32(ctx, 31, 0x28E244u);
    ctx->pc = 0x28E240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E23Cu;
            // 0x28e240: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284EE0u;
    if (runtime->hasFunction(0x284EE0u)) {
        auto targetFn = runtime->lookupFunction(0x284EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E244u; }
        if (ctx->pc != 0x28E244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284EE0_0x284ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E244u; }
        if (ctx->pc != 0x28E244u) { return; }
    }
    ctx->pc = 0x28E244u;
    // 0x28e244: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28E244u;
    {
        const bool branch_taken_0x28e244 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28E248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E244u;
            // 0x28e248: 0x3ac40067  xori        $a0, $s6, 0x67 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) ^ (uint64_t)(uint16_t)103);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e244) {
            ctx->pc = 0x28E260u;
            goto label_28e260;
        }
    }
    ctx->pc = 0x28E24Cu;
label_28e24c:
    // 0x28e24c: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x28e24cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
    // 0x28e250: 0x24030045  addiu       $v1, $zero, 0x45
    ctx->pc = 0x28e250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x28e254: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x28e254u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e258: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28E258u;
    {
        const bool branch_taken_0x28e258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E25Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E258u;
            // 0x28e25c: 0x64b00b  movn        $s6, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e258) {
            ctx->pc = 0x28E264u;
            goto label_28e264;
        }
    }
    ctx->pc = 0x28E260u;
label_28e260:
    // 0x28e260: 0x24160066  addiu       $s6, $zero, 0x66
    ctx->pc = 0x28e260u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
label_28e264:
    // 0x28e264: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x28e264u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e268: 0x32a20001  andi        $v0, $s5, 0x1
    ctx->pc = 0x28e268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
label_28e26c:
    // 0x28e26c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28E26Cu;
    {
        const bool branch_taken_0x28e26c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E26Cu;
            // 0x28e270: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e26c) {
            ctx->pc = 0x28E27Cu;
            goto label_28e27c;
        }
    }
    ctx->pc = 0x28E274u;
    // 0x28e274: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28e274u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e278: 0x57b80a  movz        $s7, $v0, $s7
    ctx->pc = 0x28e278u;
    if (GPR_U64(ctx, 23) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 2));
label_28e27c:
    // 0x28e27c: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x28e27cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e280: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28e280u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e284: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x28e284u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e288: 0xc0a35b6  jal         func_28D6D8
    ctx->pc = 0x28E288u;
    SET_GPR_U32(ctx, 31, 0x28E290u);
    ctx->pc = 0x28E28Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E288u;
            // 0x28e28c: 0x27a80180  addiu       $t0, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D6D8u;
    if (runtime->hasFunction(0x28D6D8u)) {
        auto targetFn = runtime->lookupFunction(0x28D6D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E290u; }
        if (ctx->pc != 0x28E290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D6D8_0x28d6d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E290u; }
        if (ctx->pc != 0x28E290u) { return; }
    }
    ctx->pc = 0x28E290u;
    // 0x28e290: 0x32b70084  andi        $s7, $s5, 0x84
    ctx->pc = 0x28e290u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)132);
    // 0x28e294: 0x32a50004  andi        $a1, $s5, 0x4
    ctx->pc = 0x28e294u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
    // 0x28e298: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x28e298u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e29c: 0xafa501b0  sw          $a1, 0x1B0($sp)
    ctx->pc = 0x28e29cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 5));
    // 0x28e2a0: 0xc0a268a  jal         func_289A28
    ctx->pc = 0x28E2A0u;
    SET_GPR_U32(ctx, 31, 0x28E2A8u);
    ctx->pc = 0x28E2A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E2A0u;
            // 0x28e2a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289A28u;
    if (runtime->hasFunction(0x289A28u)) {
        auto targetFn = runtime->lookupFunction(0x289A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E2A8u; }
        if (ctx->pc != 0x28E2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289a28_0x289b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E2A8u; }
        if (ctx->pc != 0x28E2A8u) { return; }
    }
    ctx->pc = 0x28E2A8u;
    // 0x28e2a8: 0x32a30200  andi        $v1, $s5, 0x200
    ctx->pc = 0x28e2a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)512);
    // 0x28e2ac: 0x106000ed  beqz        $v1, . + 4 + (0xED << 2)
    ctx->pc = 0x28E2ACu;
    {
        const bool branch_taken_0x28e2ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E2B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E2ACu;
            // 0x28e2b0: 0xafa2018c  sw          $v0, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e2ac) {
            ctx->pc = 0x28E664u;
            goto label_28e664;
        }
    }
    ctx->pc = 0x28E2B4u;
    // 0x28e2b4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28e2b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e2b8: 0x27a7018c  addiu       $a3, $sp, 0x18C
    ctx->pc = 0x28e2b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
    // 0x28e2bc: 0x823021  addu        $a2, $a0, $v0
    ctx->pc = 0x28e2bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x28e2c0: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x28E2C0u;
    {
        const bool branch_taken_0x28e2c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E2C0u;
            // 0x28e2c4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e2c0) {
            ctx->pc = 0x28E620u;
            goto label_28e620;
        }
    }
    ctx->pc = 0x28E2C8u;
label_28e2c8:
    // 0x28e2c8: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x28e2c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
    // 0x28e2cc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28E2CCu;
    {
        const bool branch_taken_0x28e2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E2D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E2CCu;
            // 0x28e2d0: 0x8fa60190  lw          $a2, 0x190($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e2cc) {
            ctx->pc = 0x28E2E4u;
            goto label_28e2e4;
        }
    }
    ctx->pc = 0x28E2D4u;
    // 0x28e2d4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x28e2d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x28e2d8: 0x8e62fff8  lw          $v0, -0x8($s3)
    ctx->pc = 0x28e2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x28e2dc: 0x1000feee  b           . + 4 + (-0x112 << 2)
    ctx->pc = 0x28E2DCu;
    {
        const bool branch_taken_0x28e2dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E2E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E2DCu;
            // 0x28e2e0: 0xfc460000  sd          $a2, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e2dc) {
            ctx->pc = 0x28DE98u;
            runtime->cooperativeGuestYield();
            goto label_28de98;
        }
    }
    ctx->pc = 0x28E2E4u;
label_28e2e4:
    // 0x28e2e4: 0x32a20010  andi        $v0, $s5, 0x10
    ctx->pc = 0x28e2e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
    // 0x28e2e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28E2E8u;
    {
        const bool branch_taken_0x28e2e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E2E8u;
            // 0x28e2ec: 0x8fa30190  lw          $v1, 0x190($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e2e8) {
            ctx->pc = 0x28E300u;
            goto label_28e300;
        }
    }
    ctx->pc = 0x28E2F0u;
    // 0x28e2f0: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x28e2f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x28e2f4: 0x8e62fff8  lw          $v0, -0x8($s3)
    ctx->pc = 0x28e2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x28e2f8: 0x1000fee7  b           . + 4 + (-0x119 << 2)
    ctx->pc = 0x28E2F8u;
    {
        const bool branch_taken_0x28e2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E2F8u;
            // 0x28e2fc: 0xfc430000  sd          $v1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e2f8) {
            ctx->pc = 0x28DE98u;
            runtime->cooperativeGuestYield();
            goto label_28de98;
        }
    }
    ctx->pc = 0x28E300u;
label_28e300:
    // 0x28e300: 0x32a20040  andi        $v0, $s5, 0x40
    ctx->pc = 0x28e300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
    // 0x28e304: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28E304u;
    {
        const bool branch_taken_0x28e304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E304u;
            // 0x28e308: 0x8fa40190  lw          $a0, 0x190($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e304) {
            ctx->pc = 0x28E31Cu;
            goto label_28e31c;
        }
    }
    ctx->pc = 0x28E30Cu;
    // 0x28e30c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x28e30cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x28e310: 0x8e62fff8  lw          $v0, -0x8($s3)
    ctx->pc = 0x28e310u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x28e314: 0x1000fee0  b           . + 4 + (-0x120 << 2)
    ctx->pc = 0x28E314u;
    {
        const bool branch_taken_0x28e314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E314u;
            // 0x28e318: 0xa4440000  sh          $a0, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e314) {
            ctx->pc = 0x28DE98u;
            runtime->cooperativeGuestYield();
            goto label_28de98;
        }
    }
    ctx->pc = 0x28E31Cu;
label_28e31c:
    // 0x28e31c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x28e31cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x28e320: 0x8fa50190  lw          $a1, 0x190($sp)
    ctx->pc = 0x28e320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x28e324: 0x8e62fff8  lw          $v0, -0x8($s3)
    ctx->pc = 0x28e324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x28e328: 0x1000fedb  b           . + 4 + (-0x125 << 2)
    ctx->pc = 0x28E328u;
    {
        const bool branch_taken_0x28e328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E328u;
            // 0x28e32c: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e328) {
            ctx->pc = 0x28DE98u;
            runtime->cooperativeGuestYield();
            goto label_28de98;
        }
    }
    ctx->pc = 0x28E330u;
label_28e330:
    // 0x28e330: 0x36b50010  ori         $s5, $s5, 0x10
    ctx->pc = 0x28e330u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)16);
label_28e334:
    // 0x28e334: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x28e334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
    // 0x28e338: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28E338u;
    {
        const bool branch_taken_0x28e338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e338) {
            ctx->pc = 0x28E33Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28E338u;
            // 0x28e33c: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28E350u;
            goto label_28e350;
        }
    }
    ctx->pc = 0x28E340u;
    // 0x28e340: 0x32a20010  andi        $v0, $s5, 0x10
    ctx->pc = 0x28e340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
    // 0x28e344: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28E344u;
    {
        const bool branch_taken_0x28e344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E344u;
            // 0x28e348: 0x32a20040  andi        $v0, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e344) {
            ctx->pc = 0x28E358u;
            goto label_28e358;
        }
    }
    ctx->pc = 0x28E34Cu;
    // 0x28e34c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x28e34cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_28e350:
    // 0x28e350: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28E350u;
    {
        const bool branch_taken_0x28e350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E350u;
            // 0x28e354: 0xde70fff8  ld          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e350) {
            ctx->pc = 0x28E36Cu;
            goto label_28e36c;
        }
    }
    ctx->pc = 0x28E358u;
label_28e358:
    // 0x28e358: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28E358u;
    {
        const bool branch_taken_0x28e358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E35Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E358u;
            // 0x28e35c: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e358) {
            ctx->pc = 0x28E368u;
            goto label_28e368;
        }
    }
    ctx->pc = 0x28E360u;
    // 0x28e360: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28E360u;
    {
        const bool branch_taken_0x28e360 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E360u;
            // 0x28e364: 0x9670fff8  lhu         $s0, -0x8($s3) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e360) {
            ctx->pc = 0x28E36Cu;
            goto label_28e36c;
        }
    }
    ctx->pc = 0x28E368u;
label_28e368:
    // 0x28e368: 0x9e70fff8  lwu         $s0, -0x8($s3)
    ctx->pc = 0x28e368u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_28e36c:
    // 0x28e36c: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x28E36Cu;
    {
        const bool branch_taken_0x28e36c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E36Cu;
            // 0x28e370: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e36c) {
            ctx->pc = 0x28E4A4u;
            goto label_28e4a4;
        }
    }
    ctx->pc = 0x28E374u;
label_28e374:
    // 0x28e374: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x28e374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x28e378: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x28e378u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x28e37c: 0x24426170  addiu       $v0, $v0, 0x6170
    ctx->pc = 0x28e37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24944));
    // 0x28e380: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x28e380u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28e384: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x28e384u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
    // 0x28e388: 0x36b50002  ori         $s5, $s5, 0x2
    ctx->pc = 0x28e388u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)2);
    // 0x28e38c: 0x24160078  addiu       $s6, $zero, 0x78
    ctx->pc = 0x28e38cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x28e390: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x28E390u;
    {
        const bool branch_taken_0x28e390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E390u;
            // 0x28e394: 0x8e70fff8  lw          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e390) {
            ctx->pc = 0x28E4A4u;
            goto label_28e4a4;
        }
    }
    ctx->pc = 0x28E398u;
label_28e398:
    // 0x28e398: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x28e398u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x28e39c: 0x8e74fff8  lw          $s4, -0x8($s3)
    ctx->pc = 0x28e39cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x28e3a0: 0x16800002  bnez        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x28E3A0u;
    {
        const bool branch_taken_0x28e3a0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E3A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E3A0u;
            // 0x28e3a4: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e3a0) {
            ctx->pc = 0x28E3ACu;
            goto label_28e3ac;
        }
    }
    ctx->pc = 0x28E3A8u;
    // 0x28e3a8: 0x24546188  addiu       $s4, $v0, 0x6188
    ctx->pc = 0x28e3a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 24968));
label_28e3ac:
    // 0x28e3ac: 0x6e0000b  bltz        $s7, . + 4 + (0xB << 2)
    ctx->pc = 0x28E3ACu;
    {
        const bool branch_taken_0x28e3ac = (GPR_S32(ctx, 23) < 0);
        ctx->pc = 0x28E3B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E3ACu;
            // 0x28e3b0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e3ac) {
            ctx->pc = 0x28E3DCu;
            goto label_28e3dc;
        }
    }
    ctx->pc = 0x28E3B4u;
    // 0x28e3b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28e3b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e3b8: 0xc0a444c  jal         func_291130
    ctx->pc = 0x28E3B8u;
    SET_GPR_U32(ctx, 31, 0x28E3C0u);
    ctx->pc = 0x28E3BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E3B8u;
            // 0x28e3bc: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291130u;
    if (runtime->hasFunction(0x291130u)) {
        auto targetFn = runtime->lookupFunction(0x291130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E3C0u; }
        if (ctx->pc != 0x28E3C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_291130_0x291220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E3C0u; }
        if (ctx->pc != 0x28E3C0u) { return; }
    }
    ctx->pc = 0x28E3C0u;
    // 0x28e3c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28E3C0u;
    {
        const bool branch_taken_0x28e3c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E3C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E3C0u;
            // 0x28e3c4: 0x541023  subu        $v0, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e3c0) {
            ctx->pc = 0x28E3D4u;
            goto label_28e3d4;
        }
    }
    ctx->pc = 0x28E3C8u;
    // 0x28e3c8: 0x2e2182a  slt         $v1, $s7, $v0
    ctx->pc = 0x28e3c8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28e3cc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x28E3CCu;
    {
        const bool branch_taken_0x28e3cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E3CCu;
            // 0x28e3d0: 0xafa2018c  sw          $v0, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e3cc) {
            ctx->pc = 0x28E3E8u;
            goto label_28e3e8;
        }
    }
    ctx->pc = 0x28E3D4u;
label_28e3d4:
    // 0x28e3d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x28E3D4u;
    {
        const bool branch_taken_0x28e3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E3D4u;
            // 0x28e3d8: 0xafb7018c  sw          $s7, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e3d4) {
            ctx->pc = 0x28E3E8u;
            goto label_28e3e8;
        }
    }
    ctx->pc = 0x28E3DCu;
label_28e3dc:
    // 0x28e3dc: 0xc0a268a  jal         func_289A28
    ctx->pc = 0x28E3DCu;
    SET_GPR_U32(ctx, 31, 0x28E3E4u);
    ctx->pc = 0x28E3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E3DCu;
            // 0x28e3e0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289A28u;
    if (runtime->hasFunction(0x289A28u)) {
        auto targetFn = runtime->lookupFunction(0x289A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E3E4u; }
        if (ctx->pc != 0x28E3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289a28_0x289b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E3E4u; }
        if (ctx->pc != 0x28E3E4u) { return; }
    }
    ctx->pc = 0x28E3E4u;
    // 0x28e3e4: 0xafa2018c  sw          $v0, 0x18C($sp)
    ctx->pc = 0x28e3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
label_28e3e8:
    // 0x28e3e8: 0x32a60004  andi        $a2, $s5, 0x4
    ctx->pc = 0x28e3e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
    // 0x28e3ec: 0xa3a00180  sb          $zero, 0x180($sp)
    ctx->pc = 0x28e3ecu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 0));
    // 0x28e3f0: 0x32b70084  andi        $s7, $s5, 0x84
    ctx->pc = 0x28e3f0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)132);
    // 0x28e3f4: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x28E3F4u;
    {
        const bool branch_taken_0x28e3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E3F4u;
            // 0x28e3f8: 0xafa601b0  sw          $a2, 0x1B0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e3f4) {
            ctx->pc = 0x28E664u;
            goto label_28e664;
        }
    }
    ctx->pc = 0x28E3FCu;
label_28e3fc:
    // 0x28e3fc: 0x36b50010  ori         $s5, $s5, 0x10
    ctx->pc = 0x28e3fcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)16);
label_28e400:
    // 0x28e400: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x28e400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
    // 0x28e404: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28E404u;
    {
        const bool branch_taken_0x28e404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e404) {
            ctx->pc = 0x28E408u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28E404u;
            // 0x28e408: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28E41Cu;
            goto label_28e41c;
        }
    }
    ctx->pc = 0x28E40Cu;
    // 0x28e40c: 0x32a20010  andi        $v0, $s5, 0x10
    ctx->pc = 0x28e40cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
    // 0x28e410: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28E410u;
    {
        const bool branch_taken_0x28e410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E410u;
            // 0x28e414: 0x32a20040  andi        $v0, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e410) {
            ctx->pc = 0x28E424u;
            goto label_28e424;
        }
    }
    ctx->pc = 0x28E418u;
    // 0x28e418: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x28e418u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_28e41c:
    // 0x28e41c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28E41Cu;
    {
        const bool branch_taken_0x28e41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E41Cu;
            // 0x28e420: 0xde70fff8  ld          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e41c) {
            ctx->pc = 0x28E438u;
            goto label_28e438;
        }
    }
    ctx->pc = 0x28E424u;
label_28e424:
    // 0x28e424: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28E424u;
    {
        const bool branch_taken_0x28e424 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E424u;
            // 0x28e428: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e424) {
            ctx->pc = 0x28E434u;
            goto label_28e434;
        }
    }
    ctx->pc = 0x28E42Cu;
    // 0x28e42c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28E42Cu;
    {
        const bool branch_taken_0x28e42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E42Cu;
            // 0x28e430: 0x9670fff8  lhu         $s0, -0x8($s3) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e42c) {
            ctx->pc = 0x28E438u;
            goto label_28e438;
        }
    }
    ctx->pc = 0x28E434u;
label_28e434:
    // 0x28e434: 0x9e70fff8  lwu         $s0, -0x8($s3)
    ctx->pc = 0x28e434u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_28e438:
    // 0x28e438: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x28E438u;
    {
        const bool branch_taken_0x28e438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E43Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E438u;
            // 0x28e43c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e438) {
            ctx->pc = 0x28E4A4u;
            goto label_28e4a4;
        }
    }
    ctx->pc = 0x28E440u;
label_28e440:
    // 0x28e440: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x28e440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x28e444: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28E444u;
    {
        const bool branch_taken_0x28e444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E444u;
            // 0x28e448: 0x24426190  addiu       $v0, $v0, 0x6190 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e444) {
            ctx->pc = 0x28E454u;
            goto label_28e454;
        }
    }
    ctx->pc = 0x28E44Cu;
label_28e44c:
    // 0x28e44c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x28e44cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x28e450: 0x24426170  addiu       $v0, $v0, 0x6170
    ctx->pc = 0x28e450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24944));
label_28e454:
    // 0x28e454: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x28e454u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
    // 0x28e458: 0x32a20020  andi        $v0, $s5, 0x20
    ctx->pc = 0x28e458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)32);
    // 0x28e45c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28E45Cu;
    {
        const bool branch_taken_0x28e45c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e45c) {
            ctx->pc = 0x28E460u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28E45Cu;
            // 0x28e460: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28E474u;
            goto label_28e474;
        }
    }
    ctx->pc = 0x28E464u;
    // 0x28e464: 0x32a20010  andi        $v0, $s5, 0x10
    ctx->pc = 0x28e464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)16);
    // 0x28e468: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28E468u;
    {
        const bool branch_taken_0x28e468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E468u;
            // 0x28e46c: 0x32a20040  andi        $v0, $s5, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e468) {
            ctx->pc = 0x28E47Cu;
            goto label_28e47c;
        }
    }
    ctx->pc = 0x28E470u;
    // 0x28e470: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x28e470u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_28e474:
    // 0x28e474: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28E474u;
    {
        const bool branch_taken_0x28e474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E474u;
            // 0x28e478: 0xde70fff8  ld          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e474) {
            ctx->pc = 0x28E490u;
            goto label_28e490;
        }
    }
    ctx->pc = 0x28E47Cu;
label_28e47c:
    // 0x28e47c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28E47Cu;
    {
        const bool branch_taken_0x28e47c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E47Cu;
            // 0x28e480: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e47c) {
            ctx->pc = 0x28E48Cu;
            goto label_28e48c;
        }
    }
    ctx->pc = 0x28E484u;
    // 0x28e484: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28E484u;
    {
        const bool branch_taken_0x28e484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E484u;
            // 0x28e488: 0x9670fff8  lhu         $s0, -0x8($s3) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e484) {
            ctx->pc = 0x28E490u;
            goto label_28e490;
        }
    }
    ctx->pc = 0x28E48Cu;
label_28e48c:
    // 0x28e48c: 0x9e70fff8  lwu         $s0, -0x8($s3)
    ctx->pc = 0x28e48cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_28e490:
    // 0x28e490: 0x32a30001  andi        $v1, $s5, 0x1
    ctx->pc = 0x28e490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x28e494: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28E494u;
    {
        const bool branch_taken_0x28e494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E494u;
            // 0x28e498: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e494) {
            ctx->pc = 0x28E4A4u;
            goto label_28e4a4;
        }
    }
    ctx->pc = 0x28E49Cu;
    // 0x28e49c: 0x36a20002  ori         $v0, $s5, 0x2
    ctx->pc = 0x28e49cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)2);
    // 0x28e4a0: 0x50a80b  movn        $s5, $v0, $s0
    ctx->pc = 0x28e4a0u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 2));
label_28e4a4:
    // 0x28e4a4: 0xa3a00180  sb          $zero, 0x180($sp)
    ctx->pc = 0x28e4a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 0));
label_28e4a8:
    // 0x28e4a8: 0x6e00003  bltz        $s7, . + 4 + (0x3 << 2)
    ctx->pc = 0x28E4A8u;
    {
        const bool branch_taken_0x28e4a8 = (GPR_S32(ctx, 23) < 0);
        ctx->pc = 0x28E4ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E4A8u;
            // 0x28e4ac: 0xafb70198  sw          $s7, 0x198($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e4a8) {
            ctx->pc = 0x28E4B8u;
            goto label_28e4b8;
        }
    }
    ctx->pc = 0x28E4B0u;
    // 0x28e4b0: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x28e4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x28e4b4: 0x2a2a824  and         $s5, $s5, $v0
    ctx->pc = 0x28e4b4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) & GPR_U64(ctx, 2));
label_28e4b8:
    // 0x28e4b8: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28E4B8u;
    {
        const bool branch_taken_0x28e4b8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E4B8u;
            // 0x28e4bc: 0x27b4016c  addiu       $s4, $sp, 0x16C (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e4b8) {
            ctx->pc = 0x28E4D4u;
            goto label_28e4d4;
        }
    }
    ctx->pc = 0x28E4C0u;
    // 0x28e4c0: 0x32a20004  andi        $v0, $s5, 0x4
    ctx->pc = 0x28e4c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
    // 0x28e4c4: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x28e4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x28e4c8: 0x32b70084  andi        $s7, $s5, 0x84
    ctx->pc = 0x28e4c8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)132);
    // 0x28e4cc: 0x1060004b  beqz        $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x28E4CCu;
    {
        const bool branch_taken_0x28e4cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E4D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E4CCu;
            // 0x28e4d0: 0xafa201b0  sw          $v0, 0x1B0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e4cc) {
            ctx->pc = 0x28E5FCu;
            goto label_28e5fc;
        }
    }
    ctx->pc = 0x28E4D4u;
label_28e4d4:
    // 0x28e4d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28e4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e4d8: 0x12420019  beq         $s2, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x28E4D8u;
    {
        const bool branch_taken_0x28e4d8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x28E4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E4D8u;
            // 0x28e4dc: 0x32a50004  andi        $a1, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e4d8) {
            ctx->pc = 0x28E540u;
            goto label_28e540;
        }
    }
    ctx->pc = 0x28E4E0u;
    // 0x28e4e0: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x28E4E0u;
    {
        const bool branch_taken_0x28e4e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E4E0u;
            // 0x28e4e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e4e0) {
            ctx->pc = 0x28E4F8u;
            goto label_28e4f8;
        }
    }
    ctx->pc = 0x28E4E8u;
    // 0x28e4e8: 0x1242002d  beq         $s2, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x28E4E8u;
    {
        const bool branch_taken_0x28e4e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x28E4ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E4E8u;
            // 0x28e4ec: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e4e8) {
            ctx->pc = 0x28E5A0u;
            goto label_28e5a0;
        }
    }
    ctx->pc = 0x28E4F0u;
    // 0x28e4f0: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x28E4F0u;
    {
        const bool branch_taken_0x28e4f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E4F0u;
            // 0x28e4f4: 0x32a40004  andi        $a0, $s5, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e4f0) {
            ctx->pc = 0x28E5E0u;
            goto label_28e5e0;
        }
    }
    ctx->pc = 0x28E4F8u;
label_28e4f8:
    // 0x28e4f8: 0x32a40004  andi        $a0, $s5, 0x4
    ctx->pc = 0x28e4f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
    // 0x28e4fc: 0x32a30001  andi        $v1, $s5, 0x1
    ctx->pc = 0x28e4fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)1);
    // 0x28e500: 0xafa401b0  sw          $a0, 0x1B0($sp)
    ctx->pc = 0x28e500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 4));
    // 0x28e504: 0x32b70084  andi        $s7, $s5, 0x84
    ctx->pc = 0x28e504u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)132);
label_28e508:
    // 0x28e508: 0x32020007  andi        $v0, $s0, 0x7
    ctx->pc = 0x28e508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x28e50c: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x28e50cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x28e510: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x28e510u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x28e514: 0x1080fa  dsrl        $s0, $s0, 3
    ctx->pc = 0x28e514u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 3);
    // 0x28e518: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x28e518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28e51c: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x28E51Cu;
    {
        const bool branch_taken_0x28e51c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E51Cu;
            // 0x28e520: 0xa2820000  sb          $v0, 0x0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e51c) {
            ctx->pc = 0x28E508u;
            runtime->cooperativeGuestYield();
            goto label_28e508;
        }
    }
    ctx->pc = 0x28E524u;
    // 0x28e524: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x28E524u;
    {
        const bool branch_taken_0x28e524 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E524u;
            // 0x28e528: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e524) {
            ctx->pc = 0x28E5FCu;
            goto label_28e5fc;
        }
    }
    ctx->pc = 0x28E52Cu;
    // 0x28e52c: 0x10430034  beq         $v0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x28E52Cu;
    {
        const bool branch_taken_0x28e52c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x28E530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E52Cu;
            // 0x28e530: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e52c) {
            ctx->pc = 0x28E600u;
            goto label_28e600;
        }
    }
    ctx->pc = 0x28E534u;
    // 0x28e534: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x28e534u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x28e538: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x28E538u;
    {
        const bool branch_taken_0x28e538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E538u;
            // 0x28e53c: 0xa2830000  sb          $v1, 0x0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e538) {
            ctx->pc = 0x28E600u;
            goto label_28e600;
        }
    }
    ctx->pc = 0x28E540u;
label_28e540:
    // 0x28e540: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x28e540u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x28e544: 0x32b70084  andi        $s7, $s5, 0x84
    ctx->pc = 0x28e544u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)132);
    // 0x28e548: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x28E548u;
    {
        const bool branch_taken_0x28e548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E54Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E548u;
            // 0x28e54c: 0xafa501b0  sw          $a1, 0x1B0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e548) {
            ctx->pc = 0x28E58Cu;
            goto label_28e58c;
        }
    }
    ctx->pc = 0x28E550u;
    // 0x28e550: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28e550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e554: 0x0  nop
    ctx->pc = 0x28e554u;
    // NOP
label_28e558:
    // 0x28e558: 0xc0a6d8e  jal         func_29B638
    ctx->pc = 0x28E558u;
    SET_GPR_U32(ctx, 31, 0x28E560u);
    ctx->pc = 0x28E55Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E558u;
            // 0x28e55c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29B638u;
    if (runtime->hasFunction(0x29B638u)) {
        auto targetFn = runtime->lookupFunction(0x29B638u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E560u; }
        if (ctx->pc != 0x28E560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029B638_0x29b638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E560u; }
        if (ctx->pc != 0x28E560u) { return; }
    }
    ctx->pc = 0x28E560u;
    // 0x28e560: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x28e560u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x28e564: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x28e564u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x28e568: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28e568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e56c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x28e56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28e570: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x28e570u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x28e574: 0xc0a0fc6  jal         func_283F18
    ctx->pc = 0x28E574u;
    SET_GPR_U32(ctx, 31, 0x28E57Cu);
    ctx->pc = 0x28E578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E574u;
            // 0x28e578: 0xa2820000  sb          $v0, 0x0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283F18u;
    if (runtime->hasFunction(0x283F18u)) {
        auto targetFn = runtime->lookupFunction(0x283F18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E57Cu; }
        if (ctx->pc != 0x28E57Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_283f18_0x2844e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E57Cu; }
        if (ctx->pc != 0x28E57Cu) { return; }
    }
    ctx->pc = 0x28E57Cu;
    // 0x28e57c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28e57cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e580: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x28e580u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x28e584: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x28E584u;
    {
        const bool branch_taken_0x28e584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E584u;
            // 0x28e588: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e584) {
            ctx->pc = 0x28E558u;
            runtime->cooperativeGuestYield();
            goto label_28e558;
        }
    }
    ctx->pc = 0x28E58Cu;
label_28e58c:
    // 0x28e58c: 0x66020030  daddiu      $v0, $s0, 0x30
    ctx->pc = 0x28e58cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)48);
    // 0x28e590: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x28e590u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x28e594: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x28e594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28e598: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x28E598u;
    {
        const bool branch_taken_0x28e598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E59Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E598u;
            // 0x28e59c: 0xa2820000  sb          $v0, 0x0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e598) {
            ctx->pc = 0x28E5FCu;
            goto label_28e5fc;
        }
    }
    ctx->pc = 0x28E5A0u;
label_28e5a0:
    // 0x28e5a0: 0x32a60004  andi        $a2, $s5, 0x4
    ctx->pc = 0x28e5a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
    // 0x28e5a4: 0x32b70084  andi        $s7, $s5, 0x84
    ctx->pc = 0x28e5a4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)132);
    // 0x28e5a8: 0xafa601b0  sw          $a2, 0x1B0($sp)
    ctx->pc = 0x28e5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 6));
    // 0x28e5ac: 0x0  nop
    ctx->pc = 0x28e5acu;
    // NOP
label_28e5b0:
    // 0x28e5b0: 0x8fa301a0  lw          $v1, 0x1A0($sp)
    ctx->pc = 0x28e5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x28e5b4: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x28e5b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x28e5b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x28e5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28e5bc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x28e5bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x28e5c0: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x28e5c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x28e5c4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x28e5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28e5c8: 0x10813a  dsrl        $s0, $s0, 4
    ctx->pc = 0x28e5c8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 4);
    // 0x28e5cc: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x28e5ccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28e5d0: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x28E5D0u;
    {
        const bool branch_taken_0x28e5d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E5D0u;
            // 0x28e5d4: 0xa2830000  sb          $v1, 0x0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e5d0) {
            ctx->pc = 0x28E5B0u;
            runtime->cooperativeGuestYield();
            goto label_28e5b0;
        }
    }
    ctx->pc = 0x28E5D8u;
    // 0x28e5d8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x28E5D8u;
    {
        const bool branch_taken_0x28e5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E5DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E5D8u;
            // 0x28e5dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e5d8) {
            ctx->pc = 0x28E600u;
            goto label_28e600;
        }
    }
    ctx->pc = 0x28E5E0u;
label_28e5e0:
    // 0x28e5e0: 0x245461a8  addiu       $s4, $v0, 0x61A8
    ctx->pc = 0x28e5e0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 25000));
    // 0x28e5e4: 0xafa401b0  sw          $a0, 0x1B0($sp)
    ctx->pc = 0x28e5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 4));
    // 0x28e5e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28e5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e5ec: 0xc0a268a  jal         func_289A28
    ctx->pc = 0x28E5ECu;
    SET_GPR_U32(ctx, 31, 0x28E5F4u);
    ctx->pc = 0x28E5F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E5ECu;
            // 0x28e5f0: 0x32b70084  andi        $s7, $s5, 0x84 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)132);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289A28u;
    if (runtime->hasFunction(0x289A28u)) {
        auto targetFn = runtime->lookupFunction(0x289A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E5F4u; }
        if (ctx->pc != 0x28E5F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289a28_0x289b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E5F4u; }
        if (ctx->pc != 0x28E5F4u) { return; }
    }
    ctx->pc = 0x28E5F4u;
    // 0x28e5f4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x28E5F4u;
    {
        const bool branch_taken_0x28e5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E5F4u;
            // 0x28e5f8: 0xafa2018c  sw          $v0, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e5f4) {
            ctx->pc = 0x28E664u;
            goto label_28e664;
        }
    }
    ctx->pc = 0x28E5FCu;
label_28e5fc:
    // 0x28e5fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28e5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28e600:
    // 0x28e600: 0x1642000c  bne         $s2, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x28E600u;
    {
        const bool branch_taken_0x28e600 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x28E604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E600u;
            // 0x28e604: 0x3b41023  subu        $v0, $sp, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e600) {
            ctx->pc = 0x28E634u;
            goto label_28e634;
        }
    }
    ctx->pc = 0x28E608u;
    // 0x28e608: 0x32a20200  andi        $v0, $s5, 0x200
    ctx->pc = 0x28e608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)512);
    // 0x28e60c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28E60Cu;
    {
        const bool branch_taken_0x28e60c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E60Cu;
            // 0x28e610: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e60c) {
            ctx->pc = 0x28E630u;
            goto label_28e630;
        }
    }
    ctx->pc = 0x28E614u;
    // 0x28e614: 0x27a6016c  addiu       $a2, $sp, 0x16C
    ctx->pc = 0x28e614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 364));
    // 0x28e618: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x28e618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28e61c: 0x27a7018c  addiu       $a3, $sp, 0x18C
    ctx->pc = 0x28e61cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 396));
label_28e620:
    // 0x28e620: 0xc0a3ba2  jal         func_28EE88
    ctx->pc = 0x28E620u;
    SET_GPR_U32(ctx, 31, 0x28E628u);
    ctx->pc = 0x28EE88u;
    if (runtime->hasFunction(0x28EE88u)) {
        auto targetFn = runtime->lookupFunction(0x28EE88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E628u; }
        if (ctx->pc != 0x28E628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28ee88_0x28f038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E628u; }
        if (ctx->pc != 0x28E628u) { return; }
    }
    ctx->pc = 0x28E628u;
    // 0x28e628: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x28E628u;
    {
        const bool branch_taken_0x28e628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E628u;
            // 0x28e62c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e628) {
            ctx->pc = 0x28E664u;
            goto label_28e664;
        }
    }
    ctx->pc = 0x28E630u;
label_28e630:
    // 0x28e630: 0x3b41023  subu        $v0, $sp, $s4
    ctx->pc = 0x28e630u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 20)));
label_28e634:
    // 0x28e634: 0x2442016c  addiu       $v0, $v0, 0x16C
    ctx->pc = 0x28e634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 364));
    // 0x28e638: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x28E638u;
    {
        const bool branch_taken_0x28e638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E63Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E638u;
            // 0x28e63c: 0xafa2018c  sw          $v0, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e638) {
            ctx->pc = 0x28E664u;
            goto label_28e664;
        }
    }
    ctx->pc = 0x28E640u;
label_28e640:
    // 0x28e640: 0x12c001fa  beqz        $s6, . + 4 + (0x1FA << 2)
    ctx->pc = 0x28E640u;
    {
        const bool branch_taken_0x28e640 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E640u;
            // 0x28e644: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e640) {
            ctx->pc = 0x28EE2Cu;
            goto label_28ee2c;
        }
    }
    ctx->pc = 0x28E648u;
    // 0x28e648: 0x32a50004  andi        $a1, $s5, 0x4
    ctx->pc = 0x28e648u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)4);
    // 0x28e64c: 0xa3b60010  sb          $s6, 0x10($sp)
    ctx->pc = 0x28e64cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 22));
    // 0x28e650: 0x27b40010  addiu       $s4, $sp, 0x10
    ctx->pc = 0x28e650u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x28e654: 0xafa2018c  sw          $v0, 0x18C($sp)
    ctx->pc = 0x28e654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
    // 0x28e658: 0x32b70084  andi        $s7, $s5, 0x84
    ctx->pc = 0x28e658u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)132);
    // 0x28e65c: 0xa3a00180  sb          $zero, 0x180($sp)
    ctx->pc = 0x28e65cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 384), (uint8_t)GPR_U32(ctx, 0));
    // 0x28e660: 0xafa501b0  sw          $a1, 0x1B0($sp)
    ctx->pc = 0x28e660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 5));
label_28e664:
    // 0x28e664: 0x8fa6018c  lw          $a2, 0x18C($sp)
    ctx->pc = 0x28e664u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x28e668: 0x8fa40198  lw          $a0, 0x198($sp)
    ctx->pc = 0x28e668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x28e66c: 0x83a30180  lb          $v1, 0x180($sp)
    ctx->pc = 0x28e66cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x28e670: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x28e670u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x28e674: 0xc2200a  movz        $a0, $a2, $v0
    ctx->pc = 0x28e674u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
    // 0x28e678: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28E678u;
    {
        const bool branch_taken_0x28e678 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E67Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E678u;
            // 0x28e67c: 0xafa4019c  sw          $a0, 0x19C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e678) {
            ctx->pc = 0x28E68Cu;
            goto label_28e68c;
        }
    }
    ctx->pc = 0x28E680u;
    // 0x28e680: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x28e680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x28e684: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28E684u;
    {
        const bool branch_taken_0x28e684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E684u;
            // 0x28e688: 0xafa4019c  sw          $a0, 0x19C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e684) {
            ctx->pc = 0x28E69Cu;
            goto label_28e69c;
        }
    }
    ctx->pc = 0x28E68Cu;
label_28e68c:
    // 0x28e68c: 0x8fa5019c  lw          $a1, 0x19C($sp)
    ctx->pc = 0x28e68cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x28e690: 0x32a20002  andi        $v0, $s5, 0x2
    ctx->pc = 0x28e690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2);
    // 0x28e694: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x28e694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x28e698: 0xafa5019c  sw          $a1, 0x19C($sp)
    ctx->pc = 0x28e698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 5));
label_28e69c:
    // 0x28e69c: 0x8fa6019c  lw          $a2, 0x19C($sp)
    ctx->pc = 0x28e69cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x28e6a0: 0x8fa20194  lw          $v0, 0x194($sp)
    ctx->pc = 0x28e6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x28e6a4: 0xc2302a  slt         $a2, $a2, $v0
    ctx->pc = 0x28e6a4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28e6a8: 0x16e0005a  bnez        $s7, . + 4 + (0x5A << 2)
    ctx->pc = 0x28E6A8u;
    {
        const bool branch_taken_0x28e6a8 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E6ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E6A8u;
            // 0x28e6ac: 0xafa601a4  sw          $a2, 0x1A4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e6a8) {
            ctx->pc = 0x28E814u;
            goto label_28e814;
        }
    }
    ctx->pc = 0x28E6B0u;
    // 0x28e6b0: 0x8fa3019c  lw          $v1, 0x19C($sp)
    ctx->pc = 0x28e6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x28e6b4: 0x438023  subu        $s0, $v0, $v1
    ctx->pc = 0x28e6b4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28e6b8: 0x1a000056  blez        $s0, . + 4 + (0x56 << 2)
    ctx->pc = 0x28E6B8u;
    {
        const bool branch_taken_0x28e6b8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x28E6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E6B8u;
            // 0x28e6bc: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e6b8) {
            ctx->pc = 0x28E814u;
            goto label_28e814;
        }
    }
    ctx->pc = 0x28E6C0u;
    // 0x28e6c0: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x28E6C0u;
    {
        const bool branch_taken_0x28e6c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E6C0u;
            // 0x28e6c4: 0x3c12002c  lui         $s2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e6c0) {
            ctx->pc = 0x28E784u;
            goto label_28e784;
        }
    }
    ctx->pc = 0x28E6C8u;
    // 0x28e6c8: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x28e6c8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28e6cc: 0x0  nop
    ctx->pc = 0x28e6ccu;
    // NOP
label_28e6d0:
    // 0x28e6d0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x28e6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x28e6d4: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x28E6D4u;
    {
        const bool branch_taken_0x28e6d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e6d4) {
            ctx->pc = 0x28E6D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28E6D4u;
            // 0x28e6d8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28E750u;
            goto label_28e750;
        }
    }
    ctx->pc = 0x28E6DCu;
    // 0x28e6dc: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x28e6dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28e6e0: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x28e6e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x28e6e4: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x28E6E4u;
    {
        const bool branch_taken_0x28e6e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e6e4) {
            ctx->pc = 0x28E6E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28E6E4u;
            // 0x28e6e8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28E730u;
            goto label_28e730;
        }
    }
    ctx->pc = 0x28E6ECu;
    // 0x28e6ec: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x28e6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28e6f0: 0x26436150  addiu       $v1, $s2, 0x6150
    ctx->pc = 0x28e6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 24912));
    // 0x28e6f4: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x28e6f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x28e6f8: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x28e6f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x28e6fc: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x28e6fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x28e700: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x28e700u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x28e704: 0xb0440007  sdl         $a0, 0x7($v0)
    ctx->pc = 0x28e704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28e708: 0xb4440000  sdr         $a0, 0x0($v0)
    ctx->pc = 0x28e708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28e70c: 0xb045000f  sdl         $a1, 0xF($v0)
    ctx->pc = 0x28e70cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28e710: 0xb4450008  sdr         $a1, 0x8($v0)
    ctx->pc = 0x28e710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28e714: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28e714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28e718: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28e718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28e71c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x28e71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x28e720: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x28e720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x28e724: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x28e724u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x28e728: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x28E728u;
    {
        const bool branch_taken_0x28e728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E728u;
            // 0x28e72c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e728) {
            ctx->pc = 0x28E774u;
            goto label_28e774;
        }
    }
    ctx->pc = 0x28E730u;
label_28e730:
    // 0x28e730: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x28E730u;
    SET_GPR_U32(ctx, 31, 0x28E738u);
    ctx->pc = 0x28E734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E730u;
            // 0x28e734: 0x26456150  addiu       $a1, $s2, 0x6150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E738u; }
        if (ctx->pc != 0x28E738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E738u; }
        if (ctx->pc != 0x28E738u) { return; }
    }
    ctx->pc = 0x28E738u;
    // 0x28e738: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28e738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28e73c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28e73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28e740: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x28e740u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x28e744: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28e744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28e748: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x28E748u;
    {
        const bool branch_taken_0x28e748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E748u;
            // 0x28e74c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e748) {
            ctx->pc = 0x28E774u;
            goto label_28e774;
        }
    }
    ctx->pc = 0x28E750u;
label_28e750:
    // 0x28e750: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28E750u;
    {
        const bool branch_taken_0x28e750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e750) {
            ctx->pc = 0x28E754u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28E750u;
            // 0x28e754: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28E764u;
            goto label_28e764;
        }
    }
    ctx->pc = 0x28E758u;
    // 0x28e758: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x28e758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e75c: 0xa624000e  sh          $a0, 0xE($s1)
    ctx->pc = 0x28e75cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x28e760: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x28e760u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_28e764:
    // 0x28e764: 0x26456150  addiu       $a1, $s2, 0x6150
    ctx->pc = 0x28e764u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24912));
    // 0x28e768: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x28e768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x28e76c: 0xc0a371a  jal         func_28DC68
    ctx->pc = 0x28E76Cu;
    SET_GPR_U32(ctx, 31, 0x28E774u);
    ctx->pc = 0x28E770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E76Cu;
            // 0x28e770: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28DC68u;
    if (runtime->hasFunction(0x28DC68u)) {
        auto targetFn = runtime->lookupFunction(0x28DC68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E774u; }
        if (ctx->pc != 0x28E774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028DC68_0x28dc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E774u; }
        if (ctx->pc != 0x28E774u) { return; }
    }
    ctx->pc = 0x28E774u;
label_28e774:
    // 0x28e774: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x28e774u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x28e778: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x28e778u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x28e77c: 0x5040ffd4  beql        $v0, $zero, . + 4 + (-0x2C << 2)
    ctx->pc = 0x28E77Cu;
    {
        const bool branch_taken_0x28e77c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e77c) {
            ctx->pc = 0x28E780u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28E77Cu;
            // 0x28e780: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28E6D0u;
            runtime->cooperativeGuestYield();
            goto label_28e6d0;
        }
    }
    ctx->pc = 0x28E784u;
label_28e784:
    // 0x28e784: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x28e784u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28e788: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x28e788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x28e78c: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x28E78Cu;
    {
        const bool branch_taken_0x28e78c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e78c) {
            ctx->pc = 0x28E790u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28E78Cu;
            // 0x28e790: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28E7F0u;
            goto label_28e7f0;
        }
    }
    ctx->pc = 0x28E794u;
    // 0x28e794: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x28e794u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28e798: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x28e798u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x28e79c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x28E79Cu;
    {
        const bool branch_taken_0x28e79c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E79Cu;
            // 0x28e7a0: 0x26456150  addiu       $a1, $s2, 0x6150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e79c) {
            ctx->pc = 0x28E7CCu;
            goto label_28e7cc;
        }
    }
    ctx->pc = 0x28E7A4u;
    // 0x28e7a4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x28e7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28e7a8: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x28E7A8u;
    SET_GPR_U32(ctx, 31, 0x28E7B0u);
    ctx->pc = 0x28E7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E7A8u;
            // 0x28e7ac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E7B0u; }
        if (ctx->pc != 0x28E7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E7B0u; }
        if (ctx->pc != 0x28E7B0u) { return; }
    }
    ctx->pc = 0x28E7B0u;
    // 0x28e7b0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28e7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28e7b4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28e7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28e7b8: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x28e7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x28e7bc: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x28e7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x28e7c0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x28e7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x28e7c4: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x28E7C4u;
    {
        const bool branch_taken_0x28e7c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E7C4u;
            // 0x28e7c8: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e7c4) {
            ctx->pc = 0x28E814u;
            goto label_28e814;
        }
    }
    ctx->pc = 0x28E7CCu;
label_28e7cc:
    // 0x28e7cc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x28e7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28e7d0: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x28E7D0u;
    SET_GPR_U32(ctx, 31, 0x28E7D8u);
    ctx->pc = 0x28E7D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E7D0u;
            // 0x28e7d4: 0x26456150  addiu       $a1, $s2, 0x6150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E7D8u; }
        if (ctx->pc != 0x28E7D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E7D8u; }
        if (ctx->pc != 0x28E7D8u) { return; }
    }
    ctx->pc = 0x28E7D8u;
    // 0x28e7d8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28e7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28e7dc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28e7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28e7e0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x28e7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x28e7e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28e7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28e7e8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x28E7E8u;
    {
        const bool branch_taken_0x28e7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E7ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E7E8u;
            // 0x28e7ec: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e7e8) {
            ctx->pc = 0x28E814u;
            goto label_28e814;
        }
    }
    ctx->pc = 0x28E7F0u;
label_28e7f0:
    // 0x28e7f0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28E7F0u;
    {
        const bool branch_taken_0x28e7f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e7f0) {
            ctx->pc = 0x28E7F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28E7F0u;
            // 0x28e7f4: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28E804u;
            goto label_28e804;
        }
    }
    ctx->pc = 0x28E7F8u;
    // 0x28e7f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28e7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e7fc: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x28e7fcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x28e800: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x28e800u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_28e804:
    // 0x28e804: 0x26456150  addiu       $a1, $s2, 0x6150
    ctx->pc = 0x28e804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24912));
    // 0x28e808: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28e808u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28e80c: 0xc0a371a  jal         func_28DC68
    ctx->pc = 0x28E80Cu;
    SET_GPR_U32(ctx, 31, 0x28E814u);
    ctx->pc = 0x28E810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E80Cu;
            // 0x28e810: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28DC68u;
    if (runtime->hasFunction(0x28DC68u)) {
        auto targetFn = runtime->lookupFunction(0x28DC68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E814u; }
        if (ctx->pc != 0x28E814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028DC68_0x28dc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E814u; }
        if (ctx->pc != 0x28E814u) { return; }
    }
    ctx->pc = 0x28E814u;
label_28e814:
    // 0x28e814: 0x83a20180  lb          $v0, 0x180($sp)
    ctx->pc = 0x28e814u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x28e818: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x28E818u;
    {
        const bool branch_taken_0x28e818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E818u;
            // 0x28e81c: 0x93a30180  lbu         $v1, 0x180($sp) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e818) {
            ctx->pc = 0x28E890u;
            goto label_28e890;
        }
    }
    ctx->pc = 0x28E820u;
    // 0x28e820: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x28e820u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28e824: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x28e824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x28e828: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x28E828u;
    {
        const bool branch_taken_0x28e828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e828) {
            ctx->pc = 0x28E82Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28E828u;
            // 0x28e82c: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28E864u;
            goto label_28e864;
        }
    }
    ctx->pc = 0x28E830u;
    // 0x28e830: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x28e830u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28e834: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x28e834u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x28e838: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28E838u;
    {
        const bool branch_taken_0x28e838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e838) {
            ctx->pc = 0x28E83Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28E838u;
            // 0x28e83c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28E85Cu;
            goto label_28e85c;
        }
    }
    ctx->pc = 0x28E840u;
    // 0x28e840: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x28e840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28e844: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x28e844u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x28e848: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28e848u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28e84c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28e84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28e850: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28e850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28e854: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x28E854u;
    {
        const bool branch_taken_0x28e854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E854u;
            // 0x28e858: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e854) {
            ctx->pc = 0x28E8E4u;
            goto label_28e8e4;
        }
    }
    ctx->pc = 0x28E85Cu;
label_28e85c:
    // 0x28e85c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x28E85Cu;
    {
        const bool branch_taken_0x28e85c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E85Cu;
            // 0x28e860: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e85c) {
            ctx->pc = 0x28E8F4u;
            goto label_28e8f4;
        }
    }
    ctx->pc = 0x28E864u;
label_28e864:
    // 0x28e864: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28E864u;
    {
        const bool branch_taken_0x28e864 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e864) {
            ctx->pc = 0x28E868u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28E864u;
            // 0x28e868: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28E878u;
            goto label_28e878;
        }
    }
    ctx->pc = 0x28E86Cu;
    // 0x28e86c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28e86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e870: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x28e870u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x28e874: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x28e874u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_28e878:
    // 0x28e878: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x28e878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x28e87c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28e87cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e880: 0xc0a371a  jal         func_28DC68
    ctx->pc = 0x28E880u;
    SET_GPR_U32(ctx, 31, 0x28E888u);
    ctx->pc = 0x28E884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E880u;
            // 0x28e884: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28DC68u;
    if (runtime->hasFunction(0x28DC68u)) {
        auto targetFn = runtime->lookupFunction(0x28DC68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E888u; }
        if (ctx->pc != 0x28E888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028DC68_0x28dc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E888u; }
        if (ctx->pc != 0x28E888u) { return; }
    }
    ctx->pc = 0x28E888u;
    // 0x28e888: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x28E888u;
    {
        const bool branch_taken_0x28e888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E88Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E888u;
            // 0x28e88c: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e888) {
            ctx->pc = 0x28E940u;
            goto label_28e940;
        }
    }
    ctx->pc = 0x28E890u;
label_28e890:
    // 0x28e890: 0x32a20002  andi        $v0, $s5, 0x2
    ctx->pc = 0x28e890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)2);
    // 0x28e894: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x28E894u;
    {
        const bool branch_taken_0x28e894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E898u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E894u;
            // 0x28e898: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e894) {
            ctx->pc = 0x28E93Cu;
            goto label_28e93c;
        }
    }
    ctx->pc = 0x28E89Cu;
    // 0x28e89c: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x28e89cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28e8a0: 0xa3a20170  sb          $v0, 0x170($sp)
    ctx->pc = 0x28e8a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 368), (uint8_t)GPR_U32(ctx, 2));
    // 0x28e8a4: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x28e8a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x28e8a8: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x28E8A8u;
    {
        const bool branch_taken_0x28e8a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E8ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E8A8u;
            // 0x28e8ac: 0xa3b60171  sb          $s6, 0x171($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 369), (uint8_t)GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e8a8) {
            ctx->pc = 0x28E914u;
            goto label_28e914;
        }
    }
    ctx->pc = 0x28E8B0u;
    // 0x28e8b0: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x28e8b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28e8b4: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x28e8b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x28e8b8: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x28E8B8u;
    {
        const bool branch_taken_0x28e8b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e8b8) {
            ctx->pc = 0x28E8BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28E8B8u;
            // 0x28e8bc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28E8F0u;
            goto label_28e8f0;
        }
    }
    ctx->pc = 0x28E8C0u;
    // 0x28e8c0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x28e8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28e8c4: 0x83a50170  lb          $a1, 0x170($sp)
    ctx->pc = 0x28e8c4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x28e8c8: 0x83a60171  lb          $a2, 0x171($sp)
    ctx->pc = 0x28e8c8u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 369)));
    // 0x28e8cc: 0xa0450000  sb          $a1, 0x0($v0)
    ctx->pc = 0x28e8ccu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x28e8d0: 0xa0460001  sb          $a2, 0x1($v0)
    ctx->pc = 0x28e8d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x28e8d4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28e8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28e8d8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28e8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28e8dc: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x28e8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x28e8e0: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x28e8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_28e8e4:
    // 0x28e8e4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x28e8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x28e8e8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x28E8E8u;
    {
        const bool branch_taken_0x28e8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E8ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E8E8u;
            // 0x28e8ec: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e8e8) {
            ctx->pc = 0x28E93Cu;
            goto label_28e93c;
        }
    }
    ctx->pc = 0x28E8F0u;
label_28e8f0:
    // 0x28e8f0: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x28e8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_28e8f4:
    // 0x28e8f4: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x28E8F4u;
    SET_GPR_U32(ctx, 31, 0x28E8FCu);
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E8FCu; }
        if (ctx->pc != 0x28E8FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E8FCu; }
        if (ctx->pc != 0x28E8FCu) { return; }
    }
    ctx->pc = 0x28E8FCu;
    // 0x28e8fc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28e8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28e900: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28e900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28e904: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x28e904u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x28e908: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28e908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28e90c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x28E90Cu;
    {
        const bool branch_taken_0x28e90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E90Cu;
            // 0x28e910: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e90c) {
            ctx->pc = 0x28E93Cu;
            goto label_28e93c;
        }
    }
    ctx->pc = 0x28E914u;
label_28e914:
    // 0x28e914: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x28e914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28e918: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28E918u;
    {
        const bool branch_taken_0x28e918 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e918) {
            ctx->pc = 0x28E91Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28E918u;
            // 0x28e91c: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28E92Cu;
            goto label_28e92c;
        }
    }
    ctx->pc = 0x28E920u;
    // 0x28e920: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28e920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e924: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x28e924u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x28e928: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x28e928u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_28e92c:
    // 0x28e92c: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x28e92cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x28e930: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x28e930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28e934: 0xc0a371a  jal         func_28DC68
    ctx->pc = 0x28E934u;
    SET_GPR_U32(ctx, 31, 0x28E93Cu);
    ctx->pc = 0x28E938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E934u;
            // 0x28e938: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28DC68u;
    if (runtime->hasFunction(0x28DC68u)) {
        auto targetFn = runtime->lookupFunction(0x28DC68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E93Cu; }
        if (ctx->pc != 0x28E93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028DC68_0x28dc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E93Cu; }
        if (ctx->pc != 0x28E93Cu) { return; }
    }
    ctx->pc = 0x28E93Cu;
label_28e93c:
    // 0x28e93c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x28e93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_28e940:
    // 0x28e940: 0x16e2005b  bne         $s7, $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x28E940u;
    {
        const bool branch_taken_0x28e940 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x28E944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E940u;
            // 0x28e944: 0x8fa2018c  lw          $v0, 0x18C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e940) {
            ctx->pc = 0x28EAB0u;
            goto label_28eab0;
        }
    }
    ctx->pc = 0x28E948u;
    // 0x28e948: 0x8fa50194  lw          $a1, 0x194($sp)
    ctx->pc = 0x28e948u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x28e94c: 0x8fa6019c  lw          $a2, 0x19C($sp)
    ctx->pc = 0x28e94cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x28e950: 0xa68023  subu        $s0, $a1, $a2
    ctx->pc = 0x28e950u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x28e954: 0x1a000055  blez        $s0, . + 4 + (0x55 << 2)
    ctx->pc = 0x28E954u;
    {
        const bool branch_taken_0x28e954 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x28E958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E954u;
            // 0x28e958: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e954) {
            ctx->pc = 0x28EAACu;
            goto label_28eaac;
        }
    }
    ctx->pc = 0x28E95Cu;
    // 0x28e95c: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x28E95Cu;
    {
        const bool branch_taken_0x28e95c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E95Cu;
            // 0x28e960: 0x3c12002c  lui         $s2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e95c) {
            ctx->pc = 0x28EA1Cu;
            goto label_28ea1c;
        }
    }
    ctx->pc = 0x28E964u;
    // 0x28e964: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x28e964u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28e968: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x28e968u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28e96c: 0x0  nop
    ctx->pc = 0x28e96cu;
    // NOP
label_28e970:
    // 0x28e970: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x28e970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x28e974: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x28E974u;
    {
        const bool branch_taken_0x28e974 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e974) {
            ctx->pc = 0x28E978u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28E974u;
            // 0x28e978: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28E9F0u;
            goto label_28e9f0;
        }
    }
    ctx->pc = 0x28E97Cu;
    // 0x28e97c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x28e97cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28e980: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x28e980u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x28e984: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x28E984u;
    {
        const bool branch_taken_0x28e984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e984) {
            ctx->pc = 0x28E988u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28E984u;
            // 0x28e988: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28E9D0u;
            goto label_28e9d0;
        }
    }
    ctx->pc = 0x28E98Cu;
    // 0x28e98c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x28e98cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28e990: 0x26466160  addiu       $a2, $s2, 0x6160
    ctx->pc = 0x28e990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 24928));
    // 0x28e994: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x28e994u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x28e998: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x28e998u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x28e99c: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x28e99cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x28e9a0: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x28e9a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x28e9a4: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x28e9a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28e9a8: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x28e9a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28e9ac: 0xb044000f  sdl         $a0, 0xF($v0)
    ctx->pc = 0x28e9acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28e9b0: 0xb4440008  sdr         $a0, 0x8($v0)
    ctx->pc = 0x28e9b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28e9b4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28e9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28e9b8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28e9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28e9bc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x28e9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x28e9c0: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x28e9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x28e9c4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x28e9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x28e9c8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x28E9C8u;
    {
        const bool branch_taken_0x28e9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E9CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E9C8u;
            // 0x28e9cc: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e9c8) {
            ctx->pc = 0x28EA0Cu;
            goto label_28ea0c;
        }
    }
    ctx->pc = 0x28E9D0u;
label_28e9d0:
    // 0x28e9d0: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x28E9D0u;
    SET_GPR_U32(ctx, 31, 0x28E9D8u);
    ctx->pc = 0x28E9D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E9D0u;
            // 0x28e9d4: 0x26456160  addiu       $a1, $s2, 0x6160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E9D8u; }
        if (ctx->pc != 0x28E9D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E9D8u; }
        if (ctx->pc != 0x28E9D8u) { return; }
    }
    ctx->pc = 0x28E9D8u;
    // 0x28e9d8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28e9d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28e9dc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28e9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28e9e0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x28e9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x28e9e4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28e9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28e9e8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28E9E8u;
    {
        const bool branch_taken_0x28e9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E9ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E9E8u;
            // 0x28e9ec: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e9e8) {
            ctx->pc = 0x28EA0Cu;
            goto label_28ea0c;
        }
    }
    ctx->pc = 0x28E9F0u;
label_28e9f0:
    // 0x28e9f0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x28E9F0u;
    {
        const bool branch_taken_0x28e9f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e9f0) {
            ctx->pc = 0x28E9F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28E9F0u;
            // 0x28e9f4: 0xa635000e  sh          $s5, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28E9F8u;
            goto label_28e9f8;
        }
    }
    ctx->pc = 0x28E9F8u;
label_28e9f8:
    // 0x28e9f8: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x28e9f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x28e9fc: 0x26456160  addiu       $a1, $s2, 0x6160
    ctx->pc = 0x28e9fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24928));
    // 0x28ea00: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x28ea00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x28ea04: 0xc0a371a  jal         func_28DC68
    ctx->pc = 0x28EA04u;
    SET_GPR_U32(ctx, 31, 0x28EA0Cu);
    ctx->pc = 0x28EA08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28EA04u;
            // 0x28ea08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28DC68u;
    if (runtime->hasFunction(0x28DC68u)) {
        auto targetFn = runtime->lookupFunction(0x28DC68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EA0Cu; }
        if (ctx->pc != 0x28EA0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028DC68_0x28dc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EA0Cu; }
        if (ctx->pc != 0x28EA0Cu) { return; }
    }
    ctx->pc = 0x28EA0Cu;
label_28ea0c:
    // 0x28ea0c: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x28ea0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x28ea10: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x28ea10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x28ea14: 0x5040ffd6  beql        $v0, $zero, . + 4 + (-0x2A << 2)
    ctx->pc = 0x28EA14u;
    {
        const bool branch_taken_0x28ea14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ea14) {
            ctx->pc = 0x28EA18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28EA14u;
            // 0x28ea18: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28E970u;
            runtime->cooperativeGuestYield();
            goto label_28e970;
        }
    }
    ctx->pc = 0x28EA1Cu;
label_28ea1c:
    // 0x28ea1c: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x28ea1cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28ea20: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x28ea20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x28ea24: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x28EA24u;
    {
        const bool branch_taken_0x28ea24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ea24) {
            ctx->pc = 0x28EA28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28EA24u;
            // 0x28ea28: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28EA88u;
            goto label_28ea88;
        }
    }
    ctx->pc = 0x28EA2Cu;
    // 0x28ea2c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x28ea2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28ea30: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x28ea30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x28ea34: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x28EA34u;
    {
        const bool branch_taken_0x28ea34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EA38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EA34u;
            // 0x28ea38: 0x26456160  addiu       $a1, $s2, 0x6160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24928));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ea34) {
            ctx->pc = 0x28EA64u;
            goto label_28ea64;
        }
    }
    ctx->pc = 0x28EA3Cu;
    // 0x28ea3c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x28ea3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28ea40: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x28EA40u;
    SET_GPR_U32(ctx, 31, 0x28EA48u);
    ctx->pc = 0x28EA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28EA40u;
            // 0x28ea44: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EA48u; }
        if (ctx->pc != 0x28EA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EA48u; }
        if (ctx->pc != 0x28EA48u) { return; }
    }
    ctx->pc = 0x28EA48u;
    // 0x28ea48: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28ea48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28ea4c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28ea4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28ea50: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x28ea50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x28ea54: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x28ea54u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x28ea58: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x28ea58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x28ea5c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x28EA5Cu;
    {
        const bool branch_taken_0x28ea5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EA5Cu;
            // 0x28ea60: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ea5c) {
            ctx->pc = 0x28EAACu;
            goto label_28eaac;
        }
    }
    ctx->pc = 0x28EA64u;
label_28ea64:
    // 0x28ea64: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x28ea64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28ea68: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x28EA68u;
    SET_GPR_U32(ctx, 31, 0x28EA70u);
    ctx->pc = 0x28EA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28EA68u;
            // 0x28ea6c: 0x26456160  addiu       $a1, $s2, 0x6160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EA70u; }
        if (ctx->pc != 0x28EA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EA70u; }
        if (ctx->pc != 0x28EA70u) { return; }
    }
    ctx->pc = 0x28EA70u;
    // 0x28ea70: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28ea70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28ea74: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28ea74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28ea78: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x28ea78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x28ea7c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28ea7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28ea80: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x28EA80u;
    {
        const bool branch_taken_0x28ea80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EA84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EA80u;
            // 0x28ea84: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ea80) {
            ctx->pc = 0x28EAACu;
            goto label_28eaac;
        }
    }
    ctx->pc = 0x28EA88u;
label_28ea88:
    // 0x28ea88: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28EA88u;
    {
        const bool branch_taken_0x28ea88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ea88) {
            ctx->pc = 0x28EA8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28EA88u;
            // 0x28ea8c: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28EA9Cu;
            goto label_28ea9c;
        }
    }
    ctx->pc = 0x28EA90u;
    // 0x28ea90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28ea90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ea94: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x28ea94u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x28ea98: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x28ea98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_28ea9c:
    // 0x28ea9c: 0x26456160  addiu       $a1, $s2, 0x6160
    ctx->pc = 0x28ea9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24928));
    // 0x28eaa0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28eaa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28eaa4: 0xc0a371a  jal         func_28DC68
    ctx->pc = 0x28EAA4u;
    SET_GPR_U32(ctx, 31, 0x28EAACu);
    ctx->pc = 0x28EAA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28EAA4u;
            // 0x28eaa8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28DC68u;
    if (runtime->hasFunction(0x28DC68u)) {
        auto targetFn = runtime->lookupFunction(0x28DC68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EAACu; }
        if (ctx->pc != 0x28EAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028DC68_0x28dc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EAACu; }
        if (ctx->pc != 0x28EAACu) { return; }
    }
    ctx->pc = 0x28EAACu;
label_28eaac:
    // 0x28eaac: 0x8fa2018c  lw          $v0, 0x18C($sp)
    ctx->pc = 0x28eaacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
label_28eab0:
    // 0x28eab0: 0x8fa30198  lw          $v1, 0x198($sp)
    ctx->pc = 0x28eab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 408)));
    // 0x28eab4: 0x628023  subu        $s0, $v1, $v0
    ctx->pc = 0x28eab4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28eab8: 0x1a000054  blez        $s0, . + 4 + (0x54 << 2)
    ctx->pc = 0x28EAB8u;
    {
        const bool branch_taken_0x28eab8 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x28EABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EAB8u;
            // 0x28eabc: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eab8) {
            ctx->pc = 0x28EC0Cu;
            goto label_28ec0c;
        }
    }
    ctx->pc = 0x28EAC0u;
    // 0x28eac0: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x28EAC0u;
    {
        const bool branch_taken_0x28eac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28EAC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EAC0u;
            // 0x28eac4: 0x3c12002c  lui         $s2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eac0) {
            ctx->pc = 0x28EB7Cu;
            goto label_28eb7c;
        }
    }
    ctx->pc = 0x28EAC8u;
    // 0x28eac8: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x28eac8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28eacc: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x28eaccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_28ead0:
    // 0x28ead0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x28ead0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x28ead4: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x28EAD4u;
    {
        const bool branch_taken_0x28ead4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ead4) {
            ctx->pc = 0x28EAD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28EAD4u;
            // 0x28ead8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28EB50u;
            goto label_28eb50;
        }
    }
    ctx->pc = 0x28EADCu;
    // 0x28eadc: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x28eadcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28eae0: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x28eae0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x28eae4: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x28EAE4u;
    {
        const bool branch_taken_0x28eae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28eae4) {
            ctx->pc = 0x28EAE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28EAE4u;
            // 0x28eae8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28EB30u;
            goto label_28eb30;
        }
    }
    ctx->pc = 0x28EAECu;
    // 0x28eaec: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x28eaecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28eaf0: 0x26436160  addiu       $v1, $s2, 0x6160
    ctx->pc = 0x28eaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 24928));
    // 0x28eaf4: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x28eaf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x28eaf8: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x28eaf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x28eafc: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x28eafcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x28eb00: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x28eb00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x28eb04: 0xb0440007  sdl         $a0, 0x7($v0)
    ctx->pc = 0x28eb04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28eb08: 0xb4440000  sdr         $a0, 0x0($v0)
    ctx->pc = 0x28eb08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28eb0c: 0xb045000f  sdl         $a1, 0xF($v0)
    ctx->pc = 0x28eb0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28eb10: 0xb4450008  sdr         $a1, 0x8($v0)
    ctx->pc = 0x28eb10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28eb14: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28eb14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28eb18: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28eb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28eb1c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x28eb1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x28eb20: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x28eb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x28eb24: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x28eb24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x28eb28: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x28EB28u;
    {
        const bool branch_taken_0x28eb28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EB2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EB28u;
            // 0x28eb2c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eb28) {
            ctx->pc = 0x28EB6Cu;
            goto label_28eb6c;
        }
    }
    ctx->pc = 0x28EB30u;
label_28eb30:
    // 0x28eb30: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x28EB30u;
    SET_GPR_U32(ctx, 31, 0x28EB38u);
    ctx->pc = 0x28EB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28EB30u;
            // 0x28eb34: 0x26456160  addiu       $a1, $s2, 0x6160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EB38u; }
        if (ctx->pc != 0x28EB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EB38u; }
        if (ctx->pc != 0x28EB38u) { return; }
    }
    ctx->pc = 0x28EB38u;
    // 0x28eb38: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28eb38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28eb3c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28eb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28eb40: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x28eb40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x28eb44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28eb44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28eb48: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28EB48u;
    {
        const bool branch_taken_0x28eb48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EB4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EB48u;
            // 0x28eb4c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eb48) {
            ctx->pc = 0x28EB6Cu;
            goto label_28eb6c;
        }
    }
    ctx->pc = 0x28EB50u;
label_28eb50:
    // 0x28eb50: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x28EB50u;
    {
        const bool branch_taken_0x28eb50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28eb50) {
            ctx->pc = 0x28EB54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28EB50u;
            // 0x28eb54: 0xa635000e  sh          $s5, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28EB58u;
            goto label_28eb58;
        }
    }
    ctx->pc = 0x28EB58u;
label_28eb58:
    // 0x28eb58: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x28eb58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x28eb5c: 0x26456160  addiu       $a1, $s2, 0x6160
    ctx->pc = 0x28eb5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24928));
    // 0x28eb60: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x28eb60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x28eb64: 0xc0a371a  jal         func_28DC68
    ctx->pc = 0x28EB64u;
    SET_GPR_U32(ctx, 31, 0x28EB6Cu);
    ctx->pc = 0x28EB68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28EB64u;
            // 0x28eb68: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28DC68u;
    if (runtime->hasFunction(0x28DC68u)) {
        auto targetFn = runtime->lookupFunction(0x28DC68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EB6Cu; }
        if (ctx->pc != 0x28EB6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028DC68_0x28dc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EB6Cu; }
        if (ctx->pc != 0x28EB6Cu) { return; }
    }
    ctx->pc = 0x28EB6Cu;
label_28eb6c:
    // 0x28eb6c: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x28eb6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x28eb70: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x28eb70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x28eb74: 0x5040ffd6  beql        $v0, $zero, . + 4 + (-0x2A << 2)
    ctx->pc = 0x28EB74u;
    {
        const bool branch_taken_0x28eb74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28eb74) {
            ctx->pc = 0x28EB78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28EB74u;
            // 0x28eb78: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28EAD0u;
            runtime->cooperativeGuestYield();
            goto label_28ead0;
        }
    }
    ctx->pc = 0x28EB7Cu;
label_28eb7c:
    // 0x28eb7c: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x28eb7cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28eb80: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x28eb80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x28eb84: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x28EB84u;
    {
        const bool branch_taken_0x28eb84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28eb84) {
            ctx->pc = 0x28EB88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28EB84u;
            // 0x28eb88: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28EBE8u;
            goto label_28ebe8;
        }
    }
    ctx->pc = 0x28EB8Cu;
    // 0x28eb8c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x28eb8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28eb90: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x28eb90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x28eb94: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x28EB94u;
    {
        const bool branch_taken_0x28eb94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EB94u;
            // 0x28eb98: 0x26456160  addiu       $a1, $s2, 0x6160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24928));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eb94) {
            ctx->pc = 0x28EBC4u;
            goto label_28ebc4;
        }
    }
    ctx->pc = 0x28EB9Cu;
    // 0x28eb9c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x28eb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28eba0: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x28EBA0u;
    SET_GPR_U32(ctx, 31, 0x28EBA8u);
    ctx->pc = 0x28EBA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28EBA0u;
            // 0x28eba4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EBA8u; }
        if (ctx->pc != 0x28EBA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EBA8u; }
        if (ctx->pc != 0x28EBA8u) { return; }
    }
    ctx->pc = 0x28EBA8u;
    // 0x28eba8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28eba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28ebac: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28ebacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28ebb0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x28ebb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x28ebb4: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x28ebb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x28ebb8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x28ebb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x28ebbc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x28EBBCu;
    {
        const bool branch_taken_0x28ebbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EBC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EBBCu;
            // 0x28ebc0: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ebbc) {
            ctx->pc = 0x28EC0Cu;
            goto label_28ec0c;
        }
    }
    ctx->pc = 0x28EBC4u;
label_28ebc4:
    // 0x28ebc4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x28ebc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28ebc8: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x28EBC8u;
    SET_GPR_U32(ctx, 31, 0x28EBD0u);
    ctx->pc = 0x28EBCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28EBC8u;
            // 0x28ebcc: 0x26456160  addiu       $a1, $s2, 0x6160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EBD0u; }
        if (ctx->pc != 0x28EBD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EBD0u; }
        if (ctx->pc != 0x28EBD0u) { return; }
    }
    ctx->pc = 0x28EBD0u;
    // 0x28ebd0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28ebd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28ebd4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28ebd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28ebd8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x28ebd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x28ebdc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28ebdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28ebe0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x28EBE0u;
    {
        const bool branch_taken_0x28ebe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EBE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EBE0u;
            // 0x28ebe4: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ebe0) {
            ctx->pc = 0x28EC0Cu;
            goto label_28ec0c;
        }
    }
    ctx->pc = 0x28EBE8u;
label_28ebe8:
    // 0x28ebe8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28EBE8u;
    {
        const bool branch_taken_0x28ebe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ebe8) {
            ctx->pc = 0x28EBECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28EBE8u;
            // 0x28ebec: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28EBFCu;
            goto label_28ebfc;
        }
    }
    ctx->pc = 0x28EBF0u;
    // 0x28ebf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28ebf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ebf4: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x28ebf4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x28ebf8: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x28ebf8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_28ebfc:
    // 0x28ebfc: 0x26456160  addiu       $a1, $s2, 0x6160
    ctx->pc = 0x28ebfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24928));
    // 0x28ec00: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28ec00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ec04: 0xc0a371a  jal         func_28DC68
    ctx->pc = 0x28EC04u;
    SET_GPR_U32(ctx, 31, 0x28EC0Cu);
    ctx->pc = 0x28EC08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28EC04u;
            // 0x28ec08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28DC68u;
    if (runtime->hasFunction(0x28DC68u)) {
        auto targetFn = runtime->lookupFunction(0x28DC68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EC0Cu; }
        if (ctx->pc != 0x28EC0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028DC68_0x28dc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EC0Cu; }
        if (ctx->pc != 0x28EC0Cu) { return; }
    }
    ctx->pc = 0x28EC0Cu;
label_28ec0c:
    // 0x28ec0c: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x28ec0cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28ec10: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x28ec10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x28ec14: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x28EC14u;
    {
        const bool branch_taken_0x28ec14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EC18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EC14u;
            // 0x28ec18: 0x8fa6018c  lw          $a2, 0x18C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ec14) {
            ctx->pc = 0x28EC78u;
            goto label_28ec78;
        }
    }
    ctx->pc = 0x28EC1Cu;
    // 0x28ec1c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x28ec1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28ec20: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x28ec20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28ec24: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x28EC24u;
    {
        const bool branch_taken_0x28ec24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EC24u;
            // 0x28ec28: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ec24) {
            ctx->pc = 0x28EC54u;
            goto label_28ec54;
        }
    }
    ctx->pc = 0x28EC2Cu;
    // 0x28ec2c: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x28EC2Cu;
    SET_GPR_U32(ctx, 31, 0x28EC34u);
    ctx->pc = 0x28EC30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28EC2Cu;
            // 0x28ec30: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EC34u; }
        if (ctx->pc != 0x28EC34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EC34u; }
        if (ctx->pc != 0x28EC34u) { return; }
    }
    ctx->pc = 0x28EC34u;
    // 0x28ec34: 0x8fa4018c  lw          $a0, 0x18C($sp)
    ctx->pc = 0x28ec34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x28ec38: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28ec38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28ec3c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28ec3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28ec40: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28ec40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28ec44: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x28ec44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x28ec48: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x28ec48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x28ec4c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x28EC4Cu;
    {
        const bool branch_taken_0x28ec4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EC50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EC4Cu;
            // 0x28ec50: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ec4c) {
            ctx->pc = 0x28ECA0u;
            goto label_28eca0;
        }
    }
    ctx->pc = 0x28EC54u;
label_28ec54:
    // 0x28ec54: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x28ec54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ec58: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x28EC58u;
    SET_GPR_U32(ctx, 31, 0x28EC60u);
    ctx->pc = 0x28EC5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28EC58u;
            // 0x28ec5c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EC60u; }
        if (ctx->pc != 0x28EC60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EC60u; }
        if (ctx->pc != 0x28EC60u) { return; }
    }
    ctx->pc = 0x28EC60u;
    // 0x28ec60: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28ec60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28ec64: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28ec64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28ec68: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x28ec68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x28ec6c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28ec6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28ec70: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x28EC70u;
    {
        const bool branch_taken_0x28ec70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EC74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EC70u;
            // 0x28ec74: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ec70) {
            ctx->pc = 0x28ECA0u;
            goto label_28eca0;
        }
    }
    ctx->pc = 0x28EC78u;
label_28ec78:
    // 0x28ec78: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x28ec78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28ec7c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28EC7Cu;
    {
        const bool branch_taken_0x28ec7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ec7c) {
            ctx->pc = 0x28EC80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28EC7Cu;
            // 0x28ec80: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28EC90u;
            goto label_28ec90;
        }
    }
    ctx->pc = 0x28EC84u;
    // 0x28ec84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28ec84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ec88: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x28ec88u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x28ec8c: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x28ec8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_28ec90:
    // 0x28ec90: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x28ec90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ec94: 0x8fa6018c  lw          $a2, 0x18C($sp)
    ctx->pc = 0x28ec94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
    // 0x28ec98: 0xc0a371a  jal         func_28DC68
    ctx->pc = 0x28EC98u;
    SET_GPR_U32(ctx, 31, 0x28ECA0u);
    ctx->pc = 0x28EC9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28EC98u;
            // 0x28ec9c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28DC68u;
    if (runtime->hasFunction(0x28DC68u)) {
        auto targetFn = runtime->lookupFunction(0x28DC68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28ECA0u; }
        if (ctx->pc != 0x28ECA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028DC68_0x28dc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28ECA0u; }
        if (ctx->pc != 0x28ECA0u) { return; }
    }
    ctx->pc = 0x28ECA0u;
label_28eca0:
    // 0x28eca0: 0x8fa401b0  lw          $a0, 0x1B0($sp)
    ctx->pc = 0x28eca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x28eca4: 0x10800059  beqz        $a0, . + 4 + (0x59 << 2)
    ctx->pc = 0x28ECA4u;
    {
        const bool branch_taken_0x28eca4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ECA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28ECA4u;
            // 0x28eca8: 0x8fa50194  lw          $a1, 0x194($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eca4) {
            ctx->pc = 0x28EE0Cu;
            goto label_28ee0c;
        }
    }
    ctx->pc = 0x28ECACu;
    // 0x28ecac: 0x8fa6019c  lw          $a2, 0x19C($sp)
    ctx->pc = 0x28ecacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x28ecb0: 0xa68023  subu        $s0, $a1, $a2
    ctx->pc = 0x28ecb0u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x28ecb4: 0x1a000055  blez        $s0, . + 4 + (0x55 << 2)
    ctx->pc = 0x28ECB4u;
    {
        const bool branch_taken_0x28ecb4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x28ECB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28ECB4u;
            // 0x28ecb8: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ecb4) {
            ctx->pc = 0x28EE0Cu;
            goto label_28ee0c;
        }
    }
    ctx->pc = 0x28ECBCu;
    // 0x28ecbc: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x28ECBCu;
    {
        const bool branch_taken_0x28ecbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28ECC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28ECBCu;
            // 0x28ecc0: 0x3c12002c  lui         $s2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ecbc) {
            ctx->pc = 0x28ED7Cu;
            goto label_28ed7c;
        }
    }
    ctx->pc = 0x28ECC4u;
    // 0x28ecc4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x28ecc4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ecc8: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x28ecc8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28eccc: 0x0  nop
    ctx->pc = 0x28ecccu;
    // NOP
label_28ecd0:
    // 0x28ecd0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x28ecd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x28ecd4: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x28ECD4u;
    {
        const bool branch_taken_0x28ecd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ecd4) {
            ctx->pc = 0x28ECD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28ECD4u;
            // 0x28ecd8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28ED50u;
            goto label_28ed50;
        }
    }
    ctx->pc = 0x28ECDCu;
    // 0x28ecdc: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x28ecdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28ece0: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x28ece0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x28ece4: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x28ECE4u;
    {
        const bool branch_taken_0x28ece4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ece4) {
            ctx->pc = 0x28ECE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28ECE4u;
            // 0x28ece8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28ED30u;
            goto label_28ed30;
        }
    }
    ctx->pc = 0x28ECECu;
    // 0x28ecec: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x28ececu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28ecf0: 0x26466150  addiu       $a2, $s2, 0x6150
    ctx->pc = 0x28ecf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 24912));
    // 0x28ecf4: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x28ecf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x28ecf8: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x28ecf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x28ecfc: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x28ecfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x28ed00: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x28ed00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x28ed04: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x28ed04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28ed08: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x28ed08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28ed0c: 0xb044000f  sdl         $a0, 0xF($v0)
    ctx->pc = 0x28ed0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28ed10: 0xb4440008  sdr         $a0, 0x8($v0)
    ctx->pc = 0x28ed10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28ed14: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28ed14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28ed18: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28ed18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28ed1c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x28ed1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x28ed20: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x28ed20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x28ed24: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x28ed24u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x28ed28: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x28ED28u;
    {
        const bool branch_taken_0x28ed28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ED2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28ED28u;
            // 0x28ed2c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ed28) {
            ctx->pc = 0x28ED6Cu;
            goto label_28ed6c;
        }
    }
    ctx->pc = 0x28ED30u;
label_28ed30:
    // 0x28ed30: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x28ED30u;
    SET_GPR_U32(ctx, 31, 0x28ED38u);
    ctx->pc = 0x28ED34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28ED30u;
            // 0x28ed34: 0x26456150  addiu       $a1, $s2, 0x6150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28ED38u; }
        if (ctx->pc != 0x28ED38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28ED38u; }
        if (ctx->pc != 0x28ED38u) { return; }
    }
    ctx->pc = 0x28ED38u;
    // 0x28ed38: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28ed38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28ed3c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28ed3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28ed40: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x28ed40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x28ed44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28ed44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28ed48: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28ED48u;
    {
        const bool branch_taken_0x28ed48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ED4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28ED48u;
            // 0x28ed4c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ed48) {
            ctx->pc = 0x28ED6Cu;
            goto label_28ed6c;
        }
    }
    ctx->pc = 0x28ED50u;
label_28ed50:
    // 0x28ed50: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x28ED50u;
    {
        const bool branch_taken_0x28ed50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ed50) {
            ctx->pc = 0x28ED54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28ED50u;
            // 0x28ed54: 0xa634000e  sh          $s4, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28ED58u;
            goto label_28ed58;
        }
    }
    ctx->pc = 0x28ED58u;
label_28ed58:
    // 0x28ed58: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x28ed58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x28ed5c: 0x26456150  addiu       $a1, $s2, 0x6150
    ctx->pc = 0x28ed5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24912));
    // 0x28ed60: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x28ed60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x28ed64: 0xc0a371a  jal         func_28DC68
    ctx->pc = 0x28ED64u;
    SET_GPR_U32(ctx, 31, 0x28ED6Cu);
    ctx->pc = 0x28ED68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28ED64u;
            // 0x28ed68: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28DC68u;
    if (runtime->hasFunction(0x28DC68u)) {
        auto targetFn = runtime->lookupFunction(0x28DC68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28ED6Cu; }
        if (ctx->pc != 0x28ED6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028DC68_0x28dc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28ED6Cu; }
        if (ctx->pc != 0x28ED6Cu) { return; }
    }
    ctx->pc = 0x28ED6Cu;
label_28ed6c:
    // 0x28ed6c: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x28ed6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x28ed70: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x28ed70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x28ed74: 0x5040ffd6  beql        $v0, $zero, . + 4 + (-0x2A << 2)
    ctx->pc = 0x28ED74u;
    {
        const bool branch_taken_0x28ed74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ed74) {
            ctx->pc = 0x28ED78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28ED74u;
            // 0x28ed78: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28ECD0u;
            runtime->cooperativeGuestYield();
            goto label_28ecd0;
        }
    }
    ctx->pc = 0x28ED7Cu;
label_28ed7c:
    // 0x28ed7c: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x28ed7cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28ed80: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x28ed80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x28ed84: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x28ED84u;
    {
        const bool branch_taken_0x28ed84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ed84) {
            ctx->pc = 0x28ED88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28ED84u;
            // 0x28ed88: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28EDE8u;
            goto label_28ede8;
        }
    }
    ctx->pc = 0x28ED8Cu;
    // 0x28ed8c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x28ed8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28ed90: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x28ed90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x28ed94: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x28ED94u;
    {
        const bool branch_taken_0x28ed94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28ED98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28ED94u;
            // 0x28ed98: 0x26456150  addiu       $a1, $s2, 0x6150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ed94) {
            ctx->pc = 0x28EDC4u;
            goto label_28edc4;
        }
    }
    ctx->pc = 0x28ED9Cu;
    // 0x28ed9c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x28ed9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28eda0: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x28EDA0u;
    SET_GPR_U32(ctx, 31, 0x28EDA8u);
    ctx->pc = 0x28EDA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28EDA0u;
            // 0x28eda4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EDA8u; }
        if (ctx->pc != 0x28EDA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EDA8u; }
        if (ctx->pc != 0x28EDA8u) { return; }
    }
    ctx->pc = 0x28EDA8u;
    // 0x28eda8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28eda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28edac: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28edacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28edb0: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x28edb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x28edb4: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x28edb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x28edb8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x28edb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x28edbc: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x28EDBCu;
    {
        const bool branch_taken_0x28edbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EDC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EDBCu;
            // 0x28edc0: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28edbc) {
            ctx->pc = 0x28EE0Cu;
            goto label_28ee0c;
        }
    }
    ctx->pc = 0x28EDC4u;
label_28edc4:
    // 0x28edc4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x28edc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28edc8: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x28EDC8u;
    SET_GPR_U32(ctx, 31, 0x28EDD0u);
    ctx->pc = 0x28EDCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28EDC8u;
            // 0x28edcc: 0x26456150  addiu       $a1, $s2, 0x6150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EDD0u; }
        if (ctx->pc != 0x28EDD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EDD0u; }
        if (ctx->pc != 0x28EDD0u) { return; }
    }
    ctx->pc = 0x28EDD0u;
    // 0x28edd0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28edd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28edd4: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28edd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28edd8: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x28edd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x28eddc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28eddcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28ede0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x28EDE0u;
    {
        const bool branch_taken_0x28ede0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EDE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EDE0u;
            // 0x28ede4: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ede0) {
            ctx->pc = 0x28EE0Cu;
            goto label_28ee0c;
        }
    }
    ctx->pc = 0x28EDE8u;
label_28ede8:
    // 0x28ede8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28EDE8u;
    {
        const bool branch_taken_0x28ede8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ede8) {
            ctx->pc = 0x28EDECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28EDE8u;
            // 0x28edec: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28EDFCu;
            goto label_28edfc;
        }
    }
    ctx->pc = 0x28EDF0u;
    // 0x28edf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28edf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28edf4: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x28edf4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x28edf8: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x28edf8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_28edfc:
    // 0x28edfc: 0x26456150  addiu       $a1, $s2, 0x6150
    ctx->pc = 0x28edfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 24912));
    // 0x28ee00: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28ee00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ee04: 0xc0a371a  jal         func_28DC68
    ctx->pc = 0x28EE04u;
    SET_GPR_U32(ctx, 31, 0x28EE0Cu);
    ctx->pc = 0x28EE08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28EE04u;
            // 0x28ee08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28DC68u;
    if (runtime->hasFunction(0x28DC68u)) {
        auto targetFn = runtime->lookupFunction(0x28DC68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EE0Cu; }
        if (ctx->pc != 0x28EE0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028DC68_0x28dc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EE0Cu; }
        if (ctx->pc != 0x28EE0Cu) { return; }
    }
    ctx->pc = 0x28EE0Cu;
label_28ee0c:
    // 0x28ee0c: 0x8fa20194  lw          $v0, 0x194($sp)
    ctx->pc = 0x28ee0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 404)));
    // 0x28ee10: 0x8fa301a4  lw          $v1, 0x1A4($sp)
    ctx->pc = 0x28ee10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
    // 0x28ee14: 0x8fa4019c  lw          $a0, 0x19C($sp)
    ctx->pc = 0x28ee14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 412)));
    // 0x28ee18: 0x8fa50190  lw          $a1, 0x190($sp)
    ctx->pc = 0x28ee18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x28ee1c: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x28ee1cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x28ee20: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x28ee20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x28ee24: 0x1000fc1c  b           . + 4 + (-0x3E4 << 2)
    ctx->pc = 0x28EE24u;
    {
        const bool branch_taken_0x28ee24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EE28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EE24u;
            // 0x28ee28: 0xafa50190  sw          $a1, 0x190($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ee24) {
            ctx->pc = 0x28DE98u;
            runtime->cooperativeGuestYield();
            goto label_28de98;
        }
    }
    ctx->pc = 0x28EE2Cu;
label_28ee2c:
    // 0x28ee2c: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x28ee2cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_28ee30:
    // 0x28ee30: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x28ee30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x28ee34: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28EE34u;
    {
        const bool branch_taken_0x28ee34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28EE38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EE34u;
            // 0x28ee38: 0x8fa20190  lw          $v0, 0x190($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ee34) {
            ctx->pc = 0x28EE54u;
            goto label_28ee54;
        }
    }
    ctx->pc = 0x28EE3Cu;
    // 0x28ee3c: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x28ee3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x28ee40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28ee40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ee44: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28ee44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ee48: 0xc0a371a  jal         func_28DC68
    ctx->pc = 0x28EE48u;
    SET_GPR_U32(ctx, 31, 0x28EE50u);
    ctx->pc = 0x28EE4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28EE48u;
            // 0x28ee4c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28DC68u;
    if (runtime->hasFunction(0x28DC68u)) {
        auto targetFn = runtime->lookupFunction(0x28DC68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EE50u; }
        if (ctx->pc != 0x28EE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028DC68_0x28dc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EE50u; }
        if (ctx->pc != 0x28EE50u) { return; }
    }
    ctx->pc = 0x28EE50u;
    // 0x28ee50: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x28ee50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_28ee54:
    // 0x28ee54: 0x7bb00250  lq          $s0, 0x250($sp)
    ctx->pc = 0x28ee54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x28ee58: 0x7bb10240  lq          $s1, 0x240($sp)
    ctx->pc = 0x28ee58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x28ee5c: 0x7bb20230  lq          $s2, 0x230($sp)
    ctx->pc = 0x28ee5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x28ee60: 0x7bb30220  lq          $s3, 0x220($sp)
    ctx->pc = 0x28ee60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x28ee64: 0x7bb40210  lq          $s4, 0x210($sp)
    ctx->pc = 0x28ee64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x28ee68: 0x7bb50200  lq          $s5, 0x200($sp)
    ctx->pc = 0x28ee68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x28ee6c: 0x7bb601f0  lq          $s6, 0x1F0($sp)
    ctx->pc = 0x28ee6cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x28ee70: 0x7bb701e0  lq          $s7, 0x1E0($sp)
    ctx->pc = 0x28ee70u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x28ee74: 0x7bbe01d0  lq          $fp, 0x1D0($sp)
    ctx->pc = 0x28ee74u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x28ee78: 0xdfbf01c0  ld          $ra, 0x1C0($sp)
    ctx->pc = 0x28ee78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x28ee7c: 0x3e00008  jr          $ra
    ctx->pc = 0x28EE7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28EE80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EE7Cu;
            // 0x28ee80: 0x27bd0260  addiu       $sp, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28DE98u: goto label_28de98;
            case 0x28DEA0u: goto label_28dea0;
            case 0x28DED8u: goto label_28ded8;
            case 0x28DF2Cu: goto label_28df2c;
            case 0x28DF50u: goto label_28df50;
            case 0x28DF64u: goto label_28df64;
            case 0x28DF74u: goto label_28df74;
            case 0x28DF80u: goto label_28df80;
            case 0x28DFA8u: goto label_28dfa8;
            case 0x28DFBCu: goto label_28dfbc;
            case 0x28DFC0u: goto label_28dfc0;
            case 0x28DFC4u: goto label_28dfc4;
            case 0x28DFECu: goto label_28dfec;
            case 0x28E004u: goto label_28e004;
            case 0x28E00Cu: goto label_28e00c;
            case 0x28E014u: goto label_28e014;
            case 0x28E02Cu: goto label_28e02c;
            case 0x28E034u: goto label_28e034;
            case 0x28E040u: goto label_28e040;
            case 0x28E06Cu: goto label_28e06c;
            case 0x28E080u: goto label_28e080;
            case 0x28E0A0u: goto label_28e0a0;
            case 0x28E0B4u: goto label_28e0b4;
            case 0x28E0BCu: goto label_28e0bc;
            case 0x28E0C8u: goto label_28e0c8;
            case 0x28E0F0u: goto label_28e0f0;
            case 0x28E0F8u: goto label_28e0f8;
            case 0x28E100u: goto label_28e100;
            case 0x28E114u: goto label_28e114;
            case 0x28E11Cu: goto label_28e11c;
            case 0x28E148u: goto label_28e148;
            case 0x28E14Cu: goto label_28e14c;
            case 0x28E168u: goto label_28e168;
            case 0x28E170u: goto label_28e170;
            case 0x28E180u: goto label_28e180;
            case 0x28E184u: goto label_28e184;
            case 0x28E19Cu: goto label_28e19c;
            case 0x28E1C8u: goto label_28e1c8;
            case 0x28E200u: goto label_28e200;
            case 0x28E210u: goto label_28e210;
            case 0x28E218u: goto label_28e218;
            case 0x28E24Cu: goto label_28e24c;
            case 0x28E260u: goto label_28e260;
            case 0x28E264u: goto label_28e264;
            case 0x28E26Cu: goto label_28e26c;
            case 0x28E27Cu: goto label_28e27c;
            case 0x28E2C8u: goto label_28e2c8;
            case 0x28E2E4u: goto label_28e2e4;
            case 0x28E300u: goto label_28e300;
            case 0x28E31Cu: goto label_28e31c;
            case 0x28E330u: goto label_28e330;
            case 0x28E334u: goto label_28e334;
            case 0x28E350u: goto label_28e350;
            case 0x28E358u: goto label_28e358;
            case 0x28E368u: goto label_28e368;
            case 0x28E36Cu: goto label_28e36c;
            case 0x28E374u: goto label_28e374;
            case 0x28E398u: goto label_28e398;
            case 0x28E3ACu: goto label_28e3ac;
            case 0x28E3D4u: goto label_28e3d4;
            case 0x28E3DCu: goto label_28e3dc;
            case 0x28E3E8u: goto label_28e3e8;
            case 0x28E3FCu: goto label_28e3fc;
            case 0x28E400u: goto label_28e400;
            case 0x28E41Cu: goto label_28e41c;
            case 0x28E424u: goto label_28e424;
            case 0x28E434u: goto label_28e434;
            case 0x28E438u: goto label_28e438;
            case 0x28E440u: goto label_28e440;
            case 0x28E44Cu: goto label_28e44c;
            case 0x28E454u: goto label_28e454;
            case 0x28E474u: goto label_28e474;
            case 0x28E47Cu: goto label_28e47c;
            case 0x28E48Cu: goto label_28e48c;
            case 0x28E490u: goto label_28e490;
            case 0x28E4A4u: goto label_28e4a4;
            case 0x28E4A8u: goto label_28e4a8;
            case 0x28E4B8u: goto label_28e4b8;
            case 0x28E4D4u: goto label_28e4d4;
            case 0x28E4F8u: goto label_28e4f8;
            case 0x28E508u: goto label_28e508;
            case 0x28E540u: goto label_28e540;
            case 0x28E558u: goto label_28e558;
            case 0x28E58Cu: goto label_28e58c;
            case 0x28E5A0u: goto label_28e5a0;
            case 0x28E5B0u: goto label_28e5b0;
            case 0x28E5E0u: goto label_28e5e0;
            case 0x28E5FCu: goto label_28e5fc;
            case 0x28E600u: goto label_28e600;
            case 0x28E620u: goto label_28e620;
            case 0x28E630u: goto label_28e630;
            case 0x28E634u: goto label_28e634;
            case 0x28E640u: goto label_28e640;
            case 0x28E664u: goto label_28e664;
            case 0x28E68Cu: goto label_28e68c;
            case 0x28E69Cu: goto label_28e69c;
            case 0x28E6D0u: goto label_28e6d0;
            case 0x28E730u: goto label_28e730;
            case 0x28E750u: goto label_28e750;
            case 0x28E764u: goto label_28e764;
            case 0x28E774u: goto label_28e774;
            case 0x28E784u: goto label_28e784;
            case 0x28E7CCu: goto label_28e7cc;
            case 0x28E7F0u: goto label_28e7f0;
            case 0x28E804u: goto label_28e804;
            case 0x28E814u: goto label_28e814;
            case 0x28E85Cu: goto label_28e85c;
            case 0x28E864u: goto label_28e864;
            case 0x28E878u: goto label_28e878;
            case 0x28E890u: goto label_28e890;
            case 0x28E8E4u: goto label_28e8e4;
            case 0x28E8F0u: goto label_28e8f0;
            case 0x28E8F4u: goto label_28e8f4;
            case 0x28E914u: goto label_28e914;
            case 0x28E92Cu: goto label_28e92c;
            case 0x28E93Cu: goto label_28e93c;
            case 0x28E940u: goto label_28e940;
            case 0x28E970u: goto label_28e970;
            case 0x28E9D0u: goto label_28e9d0;
            case 0x28E9F0u: goto label_28e9f0;
            case 0x28E9F8u: goto label_28e9f8;
            case 0x28EA0Cu: goto label_28ea0c;
            case 0x28EA1Cu: goto label_28ea1c;
            case 0x28EA64u: goto label_28ea64;
            case 0x28EA88u: goto label_28ea88;
            case 0x28EA9Cu: goto label_28ea9c;
            case 0x28EAACu: goto label_28eaac;
            case 0x28EAB0u: goto label_28eab0;
            case 0x28EAD0u: goto label_28ead0;
            case 0x28EB30u: goto label_28eb30;
            case 0x28EB50u: goto label_28eb50;
            case 0x28EB58u: goto label_28eb58;
            case 0x28EB6Cu: goto label_28eb6c;
            case 0x28EB7Cu: goto label_28eb7c;
            case 0x28EBC4u: goto label_28ebc4;
            case 0x28EBE8u: goto label_28ebe8;
            case 0x28EBFCu: goto label_28ebfc;
            case 0x28EC0Cu: goto label_28ec0c;
            case 0x28EC54u: goto label_28ec54;
            case 0x28EC78u: goto label_28ec78;
            case 0x28EC90u: goto label_28ec90;
            case 0x28ECA0u: goto label_28eca0;
            case 0x28ECD0u: goto label_28ecd0;
            case 0x28ED30u: goto label_28ed30;
            case 0x28ED50u: goto label_28ed50;
            case 0x28ED58u: goto label_28ed58;
            case 0x28ED6Cu: goto label_28ed6c;
            case 0x28ED7Cu: goto label_28ed7c;
            case 0x28EDC4u: goto label_28edc4;
            case 0x28EDE8u: goto label_28ede8;
            case 0x28EDFCu: goto label_28edfc;
            case 0x28EE0Cu: goto label_28ee0c;
            case 0x28EE2Cu: goto label_28ee2c;
            case 0x28EE30u: goto label_28ee30;
            case 0x28EE54u: goto label_28ee54;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28EE84u;
    // 0x28ee84: 0x0  nop
    ctx->pc = 0x28ee84u;
    // NOP
}
