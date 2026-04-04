#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00192208
// Address: 0x192208 - 0x192300
void sub_00192208_0x192208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192208_0x192208");
#endif

    ctx->pc = 0x192208u;

    // 0x192208: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x192208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x19220c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x19220cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x192210: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x192210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x192214: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x192214u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192218: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x192218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x19221c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x19221cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192220: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x192220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x192224: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x192224u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192228: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x192228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x19222c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19222cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x192230: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x192230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x192234: 0x2451e848  addiu       $s1, $v0, -0x17B8
    ctx->pc = 0x192234u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x192238: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x192238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x19223c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x19223cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x192240: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x192240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x192244: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x192244u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x192248: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x192248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x19224c: 0x40f809  jalr        $v0
    ctx->pc = 0x19224Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x192254u);
        ctx->pc = 0x192250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19224Cu;
            // 0x192250: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x192254u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1922A0u: goto label_1922a0;
            case 0x1922BCu: goto label_1922bc;
            case 0x1922E0u: goto label_1922e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x192254u; }
            if (ctx->pc != 0x192254u) { return; }
        }
        }
    }
    ctx->pc = 0x192254u;
    // 0x192254: 0x8c500088  lw          $s0, 0x88($v0)
    ctx->pc = 0x192254u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x192258: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x192258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x19225c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x19225cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x192260: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x192260u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x192264: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x192264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x192268: 0x40f809  jalr        $v0
    ctx->pc = 0x192268u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x192270u);
        ctx->pc = 0x19226Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192268u;
            // 0x19226c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x192270u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1922A0u: goto label_1922a0;
            case 0x1922BCu: goto label_1922bc;
            case 0x1922E0u: goto label_1922e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x192270u; }
            if (ctx->pc != 0x192270u) { return; }
        }
        }
    }
    ctx->pc = 0x192270u;
    // 0x192270: 0x1050000b  beq         $v0, $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x192270u;
    {
        const bool branch_taken_0x192270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x192274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192270u;
            // 0x192274: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x192270) {
            ctx->pc = 0x1922A0u;
            goto label_1922a0;
        }
    }
    ctx->pc = 0x192278u;
    // 0x192278: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x192278u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19227c: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x19227cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x192280: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x192280u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x192284: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x192284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x192288: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x192288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19228c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x19228cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x192290: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x192290u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x192294: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x192294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x192298: 0x40f809  jalr        $v0
    ctx->pc = 0x192298u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1922A0u);
        ctx->pc = 0x19229Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x192298u;
            // 0x19229c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1922A0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1922A0u: goto label_1922a0;
            case 0x1922BCu: goto label_1922bc;
            case 0x1922E0u: goto label_1922e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1922A0u; }
            if (ctx->pc != 0x1922A0u) { return; }
        }
        }
    }
    ctx->pc = 0x1922A0u;
label_1922a0:
    // 0x1922a0: 0xc05e996  jal         func_17A658
    ctx->pc = 0x1922A0u;
    SET_GPR_U32(ctx, 31, 0x1922A8u);
    ctx->pc = 0x1922A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1922A0u;
            // 0x1922a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1922A8u; }
        if (ctx->pc != 0x1922A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1922A8u; }
        if (ctx->pc != 0x1922A8u) { return; }
    }
    ctx->pc = 0x1922A8u;
    // 0x1922a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1922A8u;
    {
        const bool branch_taken_0x1922a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1922a8) {
            ctx->pc = 0x1922BCu;
            goto label_1922bc;
        }
    }
    ctx->pc = 0x1922B0u;
    // 0x1922b0: 0x8e4401a0  lw          $a0, 0x1A0($s2)
    ctx->pc = 0x1922b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 416)));
    // 0x1922b4: 0xc05c294  jal         func_170A50
    ctx->pc = 0x1922B4u;
    SET_GPR_U32(ctx, 31, 0x1922BCu);
    ctx->pc = 0x1922B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1922B4u;
            // 0x1922b8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A50u;
    if (runtime->hasFunction(0x170A50u)) {
        auto targetFn = runtime->lookupFunction(0x170A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1922BCu; }
        if (ctx->pc != 0x1922BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170A50_0x170a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1922BCu; }
        if (ctx->pc != 0x1922BCu) { return; }
    }
    ctx->pc = 0x1922BCu;
label_1922bc:
    // 0x1922bc: 0x12800008  beqz        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x1922BCu;
    {
        const bool branch_taken_0x1922bc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1922C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1922BCu;
            // 0x1922c0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1922bc) {
            ctx->pc = 0x1922E0u;
            goto label_1922e0;
        }
    }
    ctx->pc = 0x1922C4u;
    // 0x1922c4: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x1922c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x1922c8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1922c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1922cc: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x1922ccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1922d0: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x1922d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x1922d4: 0x40f809  jalr        $v0
    ctx->pc = 0x1922D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1922DCu);
        ctx->pc = 0x1922D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1922D4u;
            // 0x1922d8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1922DCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1922A0u: goto label_1922a0;
            case 0x1922BCu: goto label_1922bc;
            case 0x1922E0u: goto label_1922e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1922DCu; }
            if (ctx->pc != 0x1922DCu) { return; }
        }
        }
    }
    ctx->pc = 0x1922DCu;
    // 0x1922dc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1922dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1922e0:
    // 0x1922e0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1922e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1922e4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1922e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1922e8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1922e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1922ec: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1922ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1922f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1922f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1922f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1922F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1922F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1922F4u;
            // 0x1922f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1922A0u: goto label_1922a0;
            case 0x1922BCu: goto label_1922bc;
            case 0x1922E0u: goto label_1922e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1922FCu;
    // 0x1922fc: 0x0  nop
    ctx->pc = 0x1922fcu;
    // NOP
}
