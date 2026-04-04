#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001401A0
// Address: 0x1401a0 - 0x1403c8
void sub_001401A0_0x1401a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001401A0_0x1401a0");
#endif

    ctx->pc = 0x1401a0u;

    // 0x1401a0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1401a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1401a4: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x1401a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x1401a8: 0x3c14002d  lui         $s4, 0x2D
    ctx->pc = 0x1401a8u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)45 << 16));
    // 0x1401ac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1401acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1401b0: 0x8e93bbb0  lw          $s3, -0x4450($s4)
    ctx->pc = 0x1401b0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294949808)));
    // 0x1401b4: 0x2682bbb0  addiu       $v0, $s4, -0x4450
    ctx->pc = 0x1401b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294949808));
    // 0x1401b8: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x1401b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x1401bc: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x1401bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x1401c0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1401c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x1401c4: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x1401c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x1401c8: 0x12620076  beq         $s3, $v0, . + 4 + (0x76 << 2)
    ctx->pc = 0x1401C8u;
    {
        const bool branch_taken_0x1401c8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1401CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1401C8u;
            // 0x1401cc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1401c8) {
            ctx->pc = 0x1403A4u;
            goto label_1403a4;
        }
    }
    ctx->pc = 0x1401D0u;
    // 0x1401d0: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x1401d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1401d4: 0x0  nop
    ctx->pc = 0x1401d4u;
    // NOP
label_1401d8:
    // 0x1401d8: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x1401d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x1401dc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1401dcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x1401e0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1401e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1401e4: 0x5440006c  bnel        $v0, $zero, . + 4 + (0x6C << 2)
    ctx->pc = 0x1401E4u;
    {
        const bool branch_taken_0x1401e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1401e4) {
            ctx->pc = 0x1401E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1401E4u;
            // 0x1401e8: 0x8e730000  lw          $s3, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x140398u;
            goto label_140398;
        }
    }
    ctx->pc = 0x1401ECu;
    // 0x1401ec: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x1401ecu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x1401f0: 0x8e23ed60  lw          $v1, -0x12A0($s1)
    ctx->pc = 0x1401f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294962528)));
    // 0x1401f4: 0x2c620100  sltiu       $v0, $v1, 0x100
    ctx->pc = 0x1401f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1401f8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1401f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1401fc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1401FCu;
    {
        const bool branch_taken_0x1401fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x140200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1401FCu;
            // 0x140200: 0x8c900000  lw          $s0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1401fc) {
            ctx->pc = 0x140228u;
            goto label_140228;
        }
    }
    ctx->pc = 0x140204u;
    // 0x140204: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x140204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x140208: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x140208u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14020c: 0x2442ed68  addiu       $v0, $v0, -0x1298
    ctx->pc = 0x14020cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962536));
    // 0x140210: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x140210u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x140214: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x140214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x140218: 0x8c84f168  lw          $a0, -0xE98($a0)
    ctx->pc = 0x140218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294963560)));
    // 0x14021c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14021cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x140220: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x140220u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x140224: 0x8e23ed60  lw          $v1, -0x12A0($s1)
    ctx->pc = 0x140224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294962528)));
label_140228:
    // 0x140228: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x140228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x14022c: 0x2452ed68  addiu       $s2, $v0, -0x1298
    ctx->pc = 0x14022cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962536));
    // 0x140230: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x140230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140234: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x140234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x140238: 0x3c15002d  lui         $s5, 0x2D
    ctx->pc = 0x140238u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)45 << 16));
    // 0x14023c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x14023cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x140240: 0xae23ed60  sw          $v1, -0x12A0($s1)
    ctx->pc = 0x140240u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294962528), GPR_U32(ctx, 3));
    // 0x140244: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x140244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x140248: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x140248u;
    SET_GPR_U32(ctx, 31, 0x140250u);
    ctx->pc = 0x14024Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140248u;
            // 0x14024c: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140250u; }
        if (ctx->pc != 0x140250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140250u; }
        if (ctx->pc != 0x140250u) { return; }
    }
    ctx->pc = 0x140250u;
    // 0x140250: 0x26060018  addiu       $a2, $s0, 0x18
    ctx->pc = 0x140250u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x140254: 0x26a4bb98  addiu       $a0, $s5, -0x4468
    ctx->pc = 0x140254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294949784));
    // 0x140258: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x140258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x14025c: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x14025cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x140260: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x140260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x140264: 0x8e05c7cc  lw          $a1, -0x3834($s0)
    ctx->pc = 0x140264u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952908)));
    // 0x140268: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x140268u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x14026c: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x14026cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x140270: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x140270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x140274: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x140274u;
    {
        const bool branch_taken_0x140274 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x140278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140274u;
            // 0x140278: 0xac460000  sw          $a2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140274) {
            ctx->pc = 0x1402B8u;
            goto label_1402b8;
        }
    }
    ctx->pc = 0x14027Cu;
    // 0x14027c: 0x8e22ed60  lw          $v0, -0x12A0($s1)
    ctx->pc = 0x14027cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294962528)));
    // 0x140280: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x140280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x140284: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x140284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x140288: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x140288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14028c: 0x8c620658  lw          $v0, 0x658($v1)
    ctx->pc = 0x14028cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1624)));
    // 0x140290: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x140290u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x140294: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x140294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x140298: 0x40f809  jalr        $v0
    ctx->pc = 0x140298u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1402A0u);
        ctx->pc = 0x14029Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140298u;
            // 0x14029c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1402A0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1401D8u: goto label_1401d8;
            case 0x140228u: goto label_140228;
            case 0x1402B8u: goto label_1402b8;
            case 0x140308u: goto label_140308;
            case 0x140320u: goto label_140320;
            case 0x140340u: goto label_140340;
            case 0x140380u: goto label_140380;
            case 0x140398u: goto label_140398;
            case 0x1403A4u: goto label_1403a4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1402A0u; }
            if (ctx->pc != 0x1402A0u) { return; }
        }
        }
    }
    ctx->pc = 0x1402A0u;
    // 0x1402a0: 0x8e22ed60  lw          $v0, -0x12A0($s1)
    ctx->pc = 0x1402a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294962528)));
    // 0x1402a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1402a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1402a8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1402a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1402ac: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x1402ACu;
    SET_GPR_U32(ctx, 31, 0x1402B4u);
    ctx->pc = 0x1402B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1402ACu;
            // 0x1402b0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1402B4u; }
        if (ctx->pc != 0x1402B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1402B4u; }
        if (ctx->pc != 0x1402B4u) { return; }
    }
    ctx->pc = 0x1402B4u;
    // 0x1402b4: 0x0  nop
    ctx->pc = 0x1402b4u;
    // NOP
label_1402b8:
    // 0x1402b8: 0x8e03c7cc  lw          $v1, -0x3834($s0)
    ctx->pc = 0x1402b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952908)));
    // 0x1402bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1402bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1402c0: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1402C0u;
    {
        const bool branch_taken_0x1402c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1402C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1402C0u;
            // 0x1402c4: 0x3c060033  lui         $a2, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1402c0) {
            ctx->pc = 0x140308u;
            goto label_140308;
        }
    }
    ctx->pc = 0x1402C8u;
    // 0x1402c8: 0x8e22ed60  lw          $v0, -0x12A0($s1)
    ctx->pc = 0x1402c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294962528)));
    // 0x1402cc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1402ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1402d0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1402d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1402d4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1402d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1402d8: 0x8c620658  lw          $v0, 0x658($v1)
    ctx->pc = 0x1402d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1624)));
    // 0x1402dc: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1402dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1402e0: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1402e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1402e4: 0x40f809  jalr        $v0
    ctx->pc = 0x1402E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1402ECu);
        ctx->pc = 0x1402E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1402E4u;
            // 0x1402e8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1402ECu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1401D8u: goto label_1401d8;
            case 0x140228u: goto label_140228;
            case 0x1402B8u: goto label_1402b8;
            case 0x140308u: goto label_140308;
            case 0x140320u: goto label_140320;
            case 0x140340u: goto label_140340;
            case 0x140380u: goto label_140380;
            case 0x140398u: goto label_140398;
            case 0x1403A4u: goto label_1403a4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1402ECu; }
            if (ctx->pc != 0x1402ECu) { return; }
        }
        }
    }
    ctx->pc = 0x1402ECu;
    // 0x1402ec: 0x8e22ed60  lw          $v0, -0x12A0($s1)
    ctx->pc = 0x1402ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294962528)));
    // 0x1402f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1402f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1402f4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1402f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x1402f8: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x1402F8u;
    SET_GPR_U32(ctx, 31, 0x140300u);
    ctx->pc = 0x1402FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1402F8u;
            // 0x1402fc: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140300u; }
        if (ctx->pc != 0x140300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140300u; }
        if (ctx->pc != 0x140300u) { return; }
    }
    ctx->pc = 0x140300u;
    // 0x140300: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x140300u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x140304: 0x0  nop
    ctx->pc = 0x140304u;
    // NOP
label_140308:
    // 0x140308: 0x8cc5f168  lw          $a1, -0xE98($a2)
    ctx->pc = 0x140308u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294963560)));
    // 0x14030c: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x14030cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x140310: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x140310u;
    {
        const bool branch_taken_0x140310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140310) {
            ctx->pc = 0x140314u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x140310u;
            // 0x140314: 0x3c040033  lui         $a0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x140340u;
            goto label_140340;
        }
    }
    ctx->pc = 0x140318u;
    // 0x140318: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x140318u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x14031c: 0x0  nop
    ctx->pc = 0x14031cu;
    // NOP
label_140320:
    // 0x140320: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x140320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x140324: 0x30a2000f  andi        $v0, $a1, 0xF
    ctx->pc = 0x140324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)15);
    // 0x140328: 0x0  nop
    ctx->pc = 0x140328u;
    // NOP
    // 0x14032c: 0x0  nop
    ctx->pc = 0x14032cu;
    // NOP
    // 0x140330: 0x0  nop
    ctx->pc = 0x140330u;
    // NOP
    // 0x140334: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x140334u;
    {
        const bool branch_taken_0x140334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x140334) {
            ctx->pc = 0x140338u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x140334u;
            // 0x140338: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x140320u;
            runtime->cooperativeGuestYield();
            goto label_140320;
        }
    }
    ctx->pc = 0x14033Cu;
    // 0x14033c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x14033cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
label_140340:
    // 0x140340: 0xacc5f168  sw          $a1, -0xE98($a2)
    ctx->pc = 0x140340u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294963560), GPR_U32(ctx, 5));
    // 0x140344: 0x8c82ed60  lw          $v0, -0x12A0($a0)
    ctx->pc = 0x140344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294962528)));
    // 0x140348: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x140348u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x14034c: 0x2467ed68  addiu       $a3, $v1, -0x1298
    ctx->pc = 0x14034cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962536));
    // 0x140350: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x140350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x140354: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x140354u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x140358: 0xac86ed60  sw          $a2, -0x12A0($a0)
    ctx->pc = 0x140358u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294962528), GPR_U32(ctx, 6));
    // 0x14035c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x14035cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x140360: 0x2cc30100  sltiu       $v1, $a2, 0x100
    ctx->pc = 0x140360u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x140364: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x140364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x140368: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x140368u;
    {
        const bool branch_taken_0x140368 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14036Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140368u;
            // 0x14036c: 0xac450004  sw          $a1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140368) {
            ctx->pc = 0x140380u;
            goto label_140380;
        }
    }
    ctx->pc = 0x140370u;
    // 0x140370: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x140370u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x140374: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x140374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x140378: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x140378u;
    SET_GPR_U32(ctx, 31, 0x140380u);
    ctx->pc = 0x14037Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140378u;
            // 0x14037c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140380u; }
        if (ctx->pc != 0x140380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140380u; }
        if (ctx->pc != 0x140380u) { return; }
    }
    ctx->pc = 0x140380u;
label_140380:
    // 0x140380: 0x26a3bb98  addiu       $v1, $s5, -0x4468
    ctx->pc = 0x140380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294949784));
    // 0x140384: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x140384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x140388: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x140388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14038c: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x14038cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x140390: 0x8e730000  lw          $s3, 0x0($s3)
    ctx->pc = 0x140390u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x140394: 0x0  nop
    ctx->pc = 0x140394u;
    // NOP
label_140398:
    // 0x140398: 0x2682bbb0  addiu       $v0, $s4, -0x4450
    ctx->pc = 0x140398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294949808));
    // 0x14039c: 0x5662ff8e  bnel        $s3, $v0, . + 4 + (-0x72 << 2)
    ctx->pc = 0x14039Cu;
    {
        const bool branch_taken_0x14039c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x14039c) {
            ctx->pc = 0x1403A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14039Cu;
            // 0x1403a0: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1401D8u;
            runtime->cooperativeGuestYield();
            goto label_1401d8;
        }
    }
    ctx->pc = 0x1403A4u;
label_1403a4:
    // 0x1403a4: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1403a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1403a8: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1403a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1403ac: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1403acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1403b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1403b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1403b4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x1403b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1403b8: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x1403b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1403bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1403bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1403c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1403C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1403C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1403C0u;
            // 0x1403c4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1401D8u: goto label_1401d8;
            case 0x140228u: goto label_140228;
            case 0x1402B8u: goto label_1402b8;
            case 0x140308u: goto label_140308;
            case 0x140320u: goto label_140320;
            case 0x140340u: goto label_140340;
            case 0x140380u: goto label_140380;
            case 0x140398u: goto label_140398;
            case 0x1403A4u: goto label_1403a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1403C8u;
}
