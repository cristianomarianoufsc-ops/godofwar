#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00232170
// Address: 0x232170 - 0x2323f8
void sub_00232170_0x232170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232170_0x232170");
#endif

    ctx->pc = 0x232170u;

    // 0x232170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x232170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x232174: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x232174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x232178: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x232178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23217c: 0xc08c7c4  jal         func_231F10
    ctx->pc = 0x23217Cu;
    SET_GPR_U32(ctx, 31, 0x232184u);
    ctx->pc = 0x232180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23217Cu;
            // 0x232180: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231F10u;
    if (runtime->hasFunction(0x231F10u)) {
        auto targetFn = runtime->lookupFunction(0x231F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232184u; }
        if (ctx->pc != 0x232184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_231f10_0x232060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232184u; }
        if (ctx->pc != 0x232184u) { return; }
    }
    ctx->pc = 0x232184u;
    // 0x232184: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x232184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x232188: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x232188u;
    {
        const bool branch_taken_0x232188 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x23218Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232188u;
            // 0x23218c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232188) {
            ctx->pc = 0x2321A8u;
            goto label_2321a8;
        }
    }
    ctx->pc = 0x232190u;
    // 0x232190: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x232190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x232194: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x232194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x232198: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x232198u;
    {
        const bool branch_taken_0x232198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23219Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232198u;
            // 0x23219c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232198) {
            ctx->pc = 0x2321A8u;
            goto label_2321a8;
        }
    }
    ctx->pc = 0x2321A0u;
    // 0x2321a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2321a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2321a4: 0x0  nop
    ctx->pc = 0x2321a4u;
    // NOP
label_2321a8:
    // 0x2321a8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2321a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2321ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2321acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2321b0: 0x3e00008  jr          $ra
    ctx->pc = 0x2321B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2321B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2321B0u;
            // 0x2321b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2321A8u: goto label_2321a8;
            case 0x232200u: goto label_232200;
            case 0x232268u: goto label_232268;
            case 0x232280u: goto label_232280;
            case 0x2322F8u: goto label_2322f8;
            case 0x232304u: goto label_232304;
            case 0x2323D8u: goto label_2323d8;
            case 0x2323E0u: goto label_2323e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2321B8u;
    // 0x2321b8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2321b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2321bc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2321bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2321c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2321c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2321c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2321c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2321c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2321c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2321cc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2321ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2321d0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2321d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2321d4: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x2321d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x2321d8: 0x8c4200bc  lw          $v0, 0xBC($v0)
    ctx->pc = 0x2321d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
    // 0x2321dc: 0x40f809  jalr        $v0
    ctx->pc = 0x2321DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2321E4u);
        ctx->pc = 0x2321E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2321DCu;
            // 0x2321e0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2321E4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2321A8u: goto label_2321a8;
            case 0x232200u: goto label_232200;
            case 0x232268u: goto label_232268;
            case 0x232280u: goto label_232280;
            case 0x2322F8u: goto label_2322f8;
            case 0x232304u: goto label_232304;
            case 0x2323D8u: goto label_2323d8;
            case 0x2323E0u: goto label_2323e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2321E4u; }
            if (ctx->pc != 0x2321E4u) { return; }
        }
        }
    }
    ctx->pc = 0x2321E4u;
    // 0x2321e4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2321E4u;
    {
        const bool branch_taken_0x2321e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2321E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2321E4u;
            // 0x2321e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2321e4) {
            ctx->pc = 0x232200u;
            goto label_232200;
        }
    }
    ctx->pc = 0x2321ECu;
    // 0x2321ec: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x2321ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2321f0: 0x844400a8  lh          $a0, 0xA8($v0)
    ctx->pc = 0x2321f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
    // 0x2321f4: 0x8c4200ac  lw          $v0, 0xAC($v0)
    ctx->pc = 0x2321f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
    // 0x2321f8: 0x40f809  jalr        $v0
    ctx->pc = 0x2321F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x232200u);
        ctx->pc = 0x2321FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2321F8u;
            // 0x2321fc: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x232200u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2321A8u: goto label_2321a8;
            case 0x232200u: goto label_232200;
            case 0x232268u: goto label_232268;
            case 0x232280u: goto label_232280;
            case 0x2322F8u: goto label_2322f8;
            case 0x232304u: goto label_232304;
            case 0x2323D8u: goto label_2323d8;
            case 0x2323E0u: goto label_2323e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x232200u; }
            if (ctx->pc != 0x232200u) { return; }
        }
        }
    }
    ctx->pc = 0x232200u;
label_232200:
    // 0x232200: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x232200u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x232204: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x232204u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232208: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x232208u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23220c: 0x3e00008  jr          $ra
    ctx->pc = 0x23220Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23220Cu;
            // 0x232210: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2321A8u: goto label_2321a8;
            case 0x232200u: goto label_232200;
            case 0x232268u: goto label_232268;
            case 0x232280u: goto label_232280;
            case 0x2322F8u: goto label_2322f8;
            case 0x232304u: goto label_232304;
            case 0x2323D8u: goto label_2323d8;
            case 0x2323E0u: goto label_2323e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x232214u;
    // 0x232214: 0x0  nop
    ctx->pc = 0x232214u;
    // NOP
    // 0x232218: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x232218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23221c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23221cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x232220: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x232220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x232224: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x232224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232228: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x232228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23222c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x23222cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232230: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x232230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x232234: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x232234u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x232238: 0x8c4200c4  lw          $v0, 0xC4($v0)
    ctx->pc = 0x232238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
    // 0x23223c: 0x40f809  jalr        $v0
    ctx->pc = 0x23223Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x232244u);
        ctx->pc = 0x232240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23223Cu;
            // 0x232240: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x232244u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2321A8u: goto label_2321a8;
            case 0x232200u: goto label_232200;
            case 0x232268u: goto label_232268;
            case 0x232280u: goto label_232280;
            case 0x2322F8u: goto label_2322f8;
            case 0x232304u: goto label_232304;
            case 0x2323D8u: goto label_2323d8;
            case 0x2323E0u: goto label_2323e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x232244u; }
            if (ctx->pc != 0x232244u) { return; }
        }
        }
    }
    ctx->pc = 0x232244u;
    // 0x232244: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x232244u;
    {
        const bool branch_taken_0x232244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232244u;
            // 0x232248: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232244) {
            ctx->pc = 0x232304u;
            goto label_232304;
        }
    }
    ctx->pc = 0x23224Cu;
    // 0x23224c: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x23224cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
    // 0x232250: 0x8c4300b4  lw          $v1, 0xB4($v0)
    ctx->pc = 0x232250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x232254: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x232254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x232258: 0x10a30009  beq         $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x232258u;
    {
        const bool branch_taken_0x232258 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x23225Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232258u;
            // 0x23225c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232258) {
            ctx->pc = 0x232280u;
            goto label_232280;
        }
    }
    ctx->pc = 0x232260u;
    // 0x232260: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x232260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x232264: 0x0  nop
    ctx->pc = 0x232264u;
    // NOP
label_232268:
    // 0x232268: 0x10500005  beq         $v0, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x232268u;
    {
        const bool branch_taken_0x232268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x23226Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232268u;
            // 0x23226c: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232268) {
            ctx->pc = 0x232280u;
            goto label_232280;
        }
    }
    ctx->pc = 0x232270u;
    // 0x232270: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x232270u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x232274: 0x54a3fffc  bnel        $a1, $v1, . + 4 + (-0x4 << 2)
    ctx->pc = 0x232274u;
    {
        const bool branch_taken_0x232274 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x232274) {
            ctx->pc = 0x232278u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x232274u;
            // 0x232278: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x232268u;
            runtime->cooperativeGuestYield();
            goto label_232268;
        }
    }
    ctx->pc = 0x23227Cu;
    // 0x23227c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x23227cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_232280:
    // 0x232280: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x232280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x232284: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x232284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x232288: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x232288u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x23228c: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x23228cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232290: 0x8c447910  lw          $a0, 0x7910($v0)
    ctx->pc = 0x232290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x232294: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x232294u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x232298: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x232298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x23229c: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x23229cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x2322a0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2322a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2322a4: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x2322a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x2322a8: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x2322A8u;
    SET_GPR_U32(ctx, 31, 0x2322B0u);
    ctx->pc = 0x2322ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2322A8u;
            // 0x2322ac: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2322B0u; }
        if (ctx->pc != 0x2322B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2322B0u; }
        if (ctx->pc != 0x2322B0u) { return; }
    }
    ctx->pc = 0x2322B0u;
    // 0x2322b0: 0x8e220070  lw          $v0, 0x70($s1)
    ctx->pc = 0x2322b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
    // 0x2322b4: 0x96040004  lhu         $a0, 0x4($s0)
    ctx->pc = 0x2322b4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2322b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2322b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2322bc: 0xae0000b0  sw          $zero, 0xB0($s0)
    ctx->pc = 0x2322bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 176), GPR_U32(ctx, 0));
    // 0x2322c0: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x2322c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x2322c4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2322C4u;
    {
        const bool branch_taken_0x2322c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2322C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2322C4u;
            // 0x2322c8: 0xae220070  sw          $v0, 0x70($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2322c4) {
            ctx->pc = 0x2322F8u;
            goto label_2322f8;
        }
    }
    ctx->pc = 0x2322CCu;
    // 0x2322cc: 0x3082fffa  andi        $v0, $a0, 0xFFFA
    ctx->pc = 0x2322ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65530);
    // 0x2322d0: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x2322d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2322d4: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x2322d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x2322d8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2322d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2322dc: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x2322dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x2322e0: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x2322e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2322e4: 0x40f809  jalr        $v0
    ctx->pc = 0x2322E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2322ECu);
        ctx->pc = 0x2322E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2322E4u;
            // 0x2322e8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2322ECu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2321A8u: goto label_2321a8;
            case 0x232200u: goto label_232200;
            case 0x232268u: goto label_232268;
            case 0x232280u: goto label_232280;
            case 0x2322F8u: goto label_2322f8;
            case 0x232304u: goto label_232304;
            case 0x2323D8u: goto label_2323d8;
            case 0x2323E0u: goto label_2323e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2322ECu; }
            if (ctx->pc != 0x2322ECu) { return; }
        }
        }
    }
    ctx->pc = 0x2322ECu;
    // 0x2322ec: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2322ECu;
    {
        const bool branch_taken_0x2322ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2322F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2322ECu;
            // 0x2322f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2322ec) {
            ctx->pc = 0x232304u;
            goto label_232304;
        }
    }
    ctx->pc = 0x2322F4u;
    // 0x2322f4: 0x0  nop
    ctx->pc = 0x2322f4u;
    // NOP
label_2322f8:
    // 0x2322f8: 0x3082fffa  andi        $v0, $a0, 0xFFFA
    ctx->pc = 0x2322f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65530);
    // 0x2322fc: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x2322fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x232300: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x232300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_232304:
    // 0x232304: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x232304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x232308: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x232308u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x23230c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23230cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232310: 0x3e00008  jr          $ra
    ctx->pc = 0x232310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232310u;
            // 0x232314: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2321A8u: goto label_2321a8;
            case 0x232200u: goto label_232200;
            case 0x232268u: goto label_232268;
            case 0x232280u: goto label_232280;
            case 0x2322F8u: goto label_2322f8;
            case 0x232304u: goto label_232304;
            case 0x2323D8u: goto label_2323d8;
            case 0x2323E0u: goto label_2323e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x232318u;
    // 0x232318: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x232318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23231c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x23231cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x232320: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x232320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x232324: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x232324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232328: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x232328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x23232c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23232cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x232330: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x232330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x232334: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x232334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x232338: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x232338u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x23233c: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x23233Cu;
    {
        const bool branch_taken_0x23233c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23233Cu;
            // 0x232340: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23233c) {
            ctx->pc = 0x2323D8u;
            goto label_2323d8;
        }
    }
    ctx->pc = 0x232344u;
    // 0x232344: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x232344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x232348: 0x844400c8  lh          $a0, 0xC8($v0)
    ctx->pc = 0x232348u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 200)));
    // 0x23234c: 0x8c4200cc  lw          $v0, 0xCC($v0)
    ctx->pc = 0x23234cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    // 0x232350: 0x40f809  jalr        $v0
    ctx->pc = 0x232350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x232358u);
        ctx->pc = 0x232354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232350u;
            // 0x232354: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x232358u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2321A8u: goto label_2321a8;
            case 0x232200u: goto label_232200;
            case 0x232268u: goto label_232268;
            case 0x232280u: goto label_232280;
            case 0x2322F8u: goto label_2322f8;
            case 0x232304u: goto label_232304;
            case 0x2323D8u: goto label_2323d8;
            case 0x2323E0u: goto label_2323e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x232358u; }
            if (ctx->pc != 0x232358u) { return; }
        }
        }
    }
    ctx->pc = 0x232358u;
    // 0x232358: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x232358u;
    {
        const bool branch_taken_0x232358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23235Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232358u;
            // 0x23235c: 0x2611002c  addiu       $s1, $s0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232358) {
            ctx->pc = 0x2323D8u;
            goto label_2323d8;
        }
    }
    ctx->pc = 0x232360u;
    // 0x232360: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x232360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x232364: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x232364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x232368: 0xae020070  sw          $v0, 0x70($s0)
    ctx->pc = 0x232368u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
    // 0x23236c: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x23236cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x232370: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x232370u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x232374: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x232374u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x232378: 0x8c647910  lw          $a0, 0x7910($v1)
    ctx->pc = 0x232378u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 30992)));
    // 0x23237c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x23237cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x232380: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x232380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x232384: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x232384u;
    SET_GPR_U32(ctx, 31, 0x23238Cu);
    ctx->pc = 0x232388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232384u;
            // 0x232388: 0x8c5000b4  lw          $s0, 0xB4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23238Cu; }
        if (ctx->pc != 0x23238Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23238Cu; }
        if (ctx->pc != 0x23238Cu) { return; }
    }
    ctx->pc = 0x23238Cu;
    // 0x23238c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x23238cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x232390: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x232390u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x232394: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x232394u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
    // 0x232398: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x232398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x23239c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x23239cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2323a0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2323a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x2323a4: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2323a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x2323a8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2323a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2323ac: 0x8e230040  lw          $v1, 0x40($s1)
    ctx->pc = 0x2323acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x2323b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2323b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2323b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2323b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2323b8: 0x96440004  lhu         $a0, 0x4($s2)
    ctx->pc = 0x2323b8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2323bc: 0x2238821  addu        $s1, $s1, $v1
    ctx->pc = 0x2323bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x2323c0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2323c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2323c4: 0x34840004  ori         $a0, $a0, 0x4
    ctx->pc = 0x2323c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    // 0x2323c8: 0xa6440004  sh          $a0, 0x4($s2)
    ctx->pc = 0x2323c8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x2323cc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2323CCu;
    {
        const bool branch_taken_0x2323cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2323D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2323CCu;
            // 0x2323d0: 0xae4300b0  sw          $v1, 0xB0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2323cc) {
            ctx->pc = 0x2323E0u;
            goto label_2323e0;
        }
    }
    ctx->pc = 0x2323D4u;
    // 0x2323d4: 0x0  nop
    ctx->pc = 0x2323d4u;
    // NOP
label_2323d8:
    // 0x2323d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2323d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2323dc: 0x0  nop
    ctx->pc = 0x2323dcu;
    // NOP
label_2323e0:
    // 0x2323e0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2323e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2323e4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2323e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2323e8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2323e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2323ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2323ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2323f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2323F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2323F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2323F0u;
            // 0x2323f4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2321A8u: goto label_2321a8;
            case 0x232200u: goto label_232200;
            case 0x232268u: goto label_232268;
            case 0x232280u: goto label_232280;
            case 0x2322F8u: goto label_2322f8;
            case 0x232304u: goto label_232304;
            case 0x2323D8u: goto label_2323d8;
            case 0x2323E0u: goto label_2323e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2323F8u;
}
