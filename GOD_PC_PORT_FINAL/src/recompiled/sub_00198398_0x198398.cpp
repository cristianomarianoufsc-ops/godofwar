#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00198398
// Address: 0x198398 - 0x1986f0
void sub_00198398_0x198398(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00198398_0x198398");
#endif

    ctx->pc = 0x198398u;

    // 0x198398: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x198398u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x19839c: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x19839cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x1983a0: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x1983a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x1983a4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1983a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1983a8: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x1983a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
    // 0x1983ac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1983acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1983b0: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x1983b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x1983b4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1983b4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1983b8: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x1983b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x1983bc: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x1983bcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1983c0: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x1983c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x1983c4: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x1983c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
    // 0x1983c8: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x1983c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
    // 0x1983cc: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1983ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x1983d0: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x1983d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
    // 0x1983d4: 0x8ed40000  lw          $s4, 0x0($s6)
    ctx->pc = 0x1983d4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1983d8: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x1983d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x1983dc: 0x3c170033  lui         $s7, 0x33
    ctx->pc = 0x1983dcu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)51 << 16));
    // 0x1983e0: 0x26f3e848  addiu       $s3, $s7, -0x17B8
    ctx->pc = 0x1983e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961224));
    // 0x1983e4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1983e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1983e8: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x1983e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1983ec: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1983ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1983f0: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1983f0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1983f4: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1983f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1983f8: 0x40f809  jalr        $v0
    ctx->pc = 0x1983F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x198400u);
        ctx->pc = 0x1983FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1983F8u;
            // 0x1983fc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x198400u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198478u: goto label_198478;
            case 0x1984E8u: goto label_1984e8;
            case 0x198528u: goto label_198528;
            case 0x198548u: goto label_198548;
            case 0x1985F0u: goto label_1985f0;
            case 0x198690u: goto label_198690;
            case 0x1986B8u: goto label_1986b8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x198400u; }
            if (ctx->pc != 0x198400u) { return; }
        }
        }
    }
    ctx->pc = 0x198400u;
    // 0x198400: 0x8c510088  lw          $s1, 0x88($v0)
    ctx->pc = 0x198400u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x198404: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x198404u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x198408: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x198408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x19840c: 0x8ec30000  lw          $v1, 0x0($s6)
    ctx->pc = 0x19840cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x198410: 0x8c44c9a8  lw          $a0, -0x3658($v0)
    ctx->pc = 0x198410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953384)));
    // 0x198414: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x198414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198418: 0xae400018  sw          $zero, 0x18($s2)
    ctx->pc = 0x198418u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 0));
    // 0x19841c: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x19841Cu;
    SET_GPR_U32(ctx, 31, 0x198424u);
    ctx->pc = 0x198420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19841Cu;
            // 0x198420: 0x8c750104  lw          $s5, 0x104($v1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198424u; }
        if (ctx->pc != 0x198424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198424u; }
        if (ctx->pc != 0x198424u) { return; }
    }
    ctx->pc = 0x198424u;
    // 0x198424: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x198424u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x198428: 0x8e63006c  lw          $v1, 0x6C($s3)
    ctx->pc = 0x198428u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
    // 0x19842c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x19842cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x198430: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x198430u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x198434: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x198434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x198438: 0x40f809  jalr        $v0
    ctx->pc = 0x198438u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x198440u);
        ctx->pc = 0x19843Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198438u;
            // 0x19843c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x198440u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198478u: goto label_198478;
            case 0x1984E8u: goto label_1984e8;
            case 0x198528u: goto label_198528;
            case 0x198548u: goto label_198548;
            case 0x1985F0u: goto label_1985f0;
            case 0x198690u: goto label_198690;
            case 0x1986B8u: goto label_1986b8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x198440u; }
            if (ctx->pc != 0x198440u) { return; }
        }
        }
    }
    ctx->pc = 0x198440u;
    // 0x198440: 0x1222000d  beq         $s1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x198440u;
    {
        const bool branch_taken_0x198440 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x198444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198440u;
            // 0x198444: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198440) {
            ctx->pc = 0x198478u;
            goto label_198478;
        }
    }
    ctx->pc = 0x198448u;
    // 0x198448: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x198448u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x19844c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19844cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x198450: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x198450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x198454: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x198454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x198458: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x198458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19845c: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x19845cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x198460: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x198460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x198464: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x198464u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x198468: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x198468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x19846c: 0x40f809  jalr        $v0
    ctx->pc = 0x19846Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x198474u);
        ctx->pc = 0x198470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19846Cu;
            // 0x198470: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x198474u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198478u: goto label_198478;
            case 0x1984E8u: goto label_1984e8;
            case 0x198528u: goto label_198528;
            case 0x198548u: goto label_198548;
            case 0x1985F0u: goto label_1985f0;
            case 0x198690u: goto label_198690;
            case 0x1986B8u: goto label_1986b8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x198474u; }
            if (ctx->pc != 0x198474u) { return; }
        }
        }
    }
    ctx->pc = 0x198474u;
    // 0x198474: 0x0  nop
    ctx->pc = 0x198474u;
    // NOP
label_198478:
    // 0x198478: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x198478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x19847c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x19847cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198480: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x198480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x198484: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x198484u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x198488: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x198488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x19848c: 0x40f809  jalr        $v0
    ctx->pc = 0x19848Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x198494u);
        ctx->pc = 0x198490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19848Cu;
            // 0x198490: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x198494u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198478u: goto label_198478;
            case 0x1984E8u: goto label_1984e8;
            case 0x198528u: goto label_198528;
            case 0x198548u: goto label_198548;
            case 0x1985F0u: goto label_1985f0;
            case 0x198690u: goto label_198690;
            case 0x1986B8u: goto label_1986b8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x198494u; }
            if (ctx->pc != 0x198494u) { return; }
        }
        }
    }
    ctx->pc = 0x198494u;
    // 0x198494: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x198494u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198498: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x198498u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x19849c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x19849cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1984a0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1984a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1984a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1984a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1984a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1984a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1984ac: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1984acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1984b0: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x1984b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1984b4: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x1984b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1984b8: 0x40f809  jalr        $v0
    ctx->pc = 0x1984B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1984C0u);
        ctx->pc = 0x1984BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1984B8u;
            // 0x1984bc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1984C0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198478u: goto label_198478;
            case 0x1984E8u: goto label_1984e8;
            case 0x198528u: goto label_198528;
            case 0x198548u: goto label_198548;
            case 0x1985F0u: goto label_1985f0;
            case 0x198690u: goto label_198690;
            case 0x1986B8u: goto label_1986b8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1984C0u; }
            if (ctx->pc != 0x1984C0u) { return; }
        }
        }
    }
    ctx->pc = 0x1984C0u;
    // 0x1984c0: 0x2603002c  addiu       $v1, $s0, 0x2C
    ctx->pc = 0x1984c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
    // 0x1984c4: 0x8c640040  lw          $a0, 0x40($v1)
    ctx->pc = 0x1984c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x1984c8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1984c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1984cc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1984ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1984d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1984d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1984d4: 0x14540004  bne         $v0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x1984D4u;
    {
        const bool branch_taken_0x1984d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x1984D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1984D4u;
            // 0x1984d8: 0x2482ffff  addiu       $v0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1984d4) {
            ctx->pc = 0x1984E8u;
            goto label_1984e8;
        }
    }
    ctx->pc = 0x1984DCu;
    // 0x1984dc: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x1984dcu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1984e0: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x1984e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
    // 0x1984e4: 0x0  nop
    ctx->pc = 0x1984e4u;
    // NOP
label_1984e8:
    // 0x1984e8: 0xc089960  jal         func_226580
    ctx->pc = 0x1984E8u;
    SET_GPR_U32(ctx, 31, 0x1984F0u);
    ctx->pc = 0x1984ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1984E8u;
            // 0x1984ec: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226580u;
    if (runtime->hasFunction(0x226580u)) {
        auto targetFn = runtime->lookupFunction(0x226580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1984F0u; }
        if (ctx->pc != 0x1984F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00226580_0x226580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1984F0u; }
        if (ctx->pc != 0x1984F0u) { return; }
    }
    ctx->pc = 0x1984F0u;
    // 0x1984f0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x1984f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1984f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1984f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1984f8: 0xc089af0  jal         func_226BC0
    ctx->pc = 0x1984F8u;
    SET_GPR_U32(ctx, 31, 0x198500u);
    ctx->pc = 0x1984FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1984F8u;
            // 0x1984fc: 0x24a50032  addiu       $a1, $a1, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 50));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226BC0u;
    if (runtime->hasFunction(0x226BC0u)) {
        auto targetFn = runtime->lookupFunction(0x226BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198500u; }
        if (ctx->pc != 0x198500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00226BC0_0x226bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198500u; }
        if (ctx->pc != 0x198500u) { return; }
    }
    ctx->pc = 0x198500u;
    // 0x198500: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x198500u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198504: 0x52200008  beql        $s1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x198504u;
    {
        const bool branch_taken_0x198504 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x198504) {
            ctx->pc = 0x198508u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x198504u;
            // 0x198508: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x198528u;
            goto label_198528;
        }
    }
    ctx->pc = 0x19850Cu;
    // 0x19850c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x19850cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x198510: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x198510u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x198514: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x198514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x198518: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x198518u;
    {
        const bool branch_taken_0x198518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x198518) {
            ctx->pc = 0x19851Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x198518u;
            // 0x19851c: 0xae400004  sw          $zero, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x198528u;
            goto label_198528;
        }
    }
    ctx->pc = 0x198520u;
    // 0x198520: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x198520u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x198524: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x198524u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_198528:
    // 0x198528: 0x13c00007  beqz        $fp, . + 4 + (0x7 << 2)
    ctx->pc = 0x198528u;
    {
        const bool branch_taken_0x198528 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x19852Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198528u;
            // 0x19852c: 0x2602002c  addiu       $v0, $s0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198528) {
            ctx->pc = 0x198548u;
            goto label_198548;
        }
    }
    ctx->pc = 0x198530u;
    // 0x198530: 0x8c430040  lw          $v1, 0x40($v0)
    ctx->pc = 0x198530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x198534: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x198534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x198538: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x198538u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19853c: 0xac430040  sw          $v1, 0x40($v0)
    ctx->pc = 0x19853cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 3));
    // 0x198540: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x198540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x198544: 0xac540000  sw          $s4, 0x0($v0)
    ctx->pc = 0x198544u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 20));
label_198548:
    // 0x198548: 0x26e2e848  addiu       $v0, $s7, -0x17B8
    ctx->pc = 0x198548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961224));
    // 0x19854c: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x19854cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x198550: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x198550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x198554: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x198554u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x198558: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x198558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x19855c: 0x40f809  jalr        $v0
    ctx->pc = 0x19855Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x198564u);
        ctx->pc = 0x198560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19855Cu;
            // 0x198560: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x198564u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198478u: goto label_198478;
            case 0x1984E8u: goto label_1984e8;
            case 0x198528u: goto label_198528;
            case 0x198548u: goto label_198548;
            case 0x1985F0u: goto label_1985f0;
            case 0x198690u: goto label_198690;
            case 0x1986B8u: goto label_1986b8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x198564u; }
            if (ctx->pc != 0x198564u) { return; }
        }
        }
    }
    ctx->pc = 0x198564u;
    // 0x198564: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x198564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x198568: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x198568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x19856c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x19856cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x198570: 0xc44c0018  lwc1        $f12, 0x18($v0)
    ctx->pc = 0x198570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x198574: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x198574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x198578: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x198578u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x19857c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x19857cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x198580: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x198580u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[1];
    // 0x198584: 0xc060e52  jal         func_183948
    ctx->pc = 0x198584u;
    SET_GPR_U32(ctx, 31, 0x19858Cu);
    ctx->pc = 0x198588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198584u;
            // 0x198588: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183948u;
    if (runtime->hasFunction(0x183948u)) {
        auto targetFn = runtime->lookupFunction(0x183948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19858Cu; }
        if (ctx->pc != 0x19858Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183948_0x183a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19858Cu; }
        if (ctx->pc != 0x19858Cu) { return; }
    }
    ctx->pc = 0x19858Cu;
    // 0x19858c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x19858cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x198590: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x198590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198594: 0xe6400014  swc1        $f0, 0x14($s2)
    ctx->pc = 0x198594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
    // 0x198598: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x198598u;
    SET_GPR_U32(ctx, 31, 0x1985A0u);
    ctx->pc = 0x19859Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198598u;
            // 0x19859c: 0x2484004a  addiu       $a0, $a0, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 74));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1985A0u; }
        if (ctx->pc != 0x1985A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1985A0u; }
        if (ctx->pc != 0x1985A0u) { return; }
    }
    ctx->pc = 0x1985A0u;
    // 0x1985a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1985a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1985a4: 0xc04e0d8  jal         func_138360
    ctx->pc = 0x1985A4u;
    SET_GPR_U32(ctx, 31, 0x1985ACu);
    ctx->pc = 0x1985A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1985A4u;
            // 0x1985a8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138360u;
    if (runtime->hasFunction(0x138360u)) {
        auto targetFn = runtime->lookupFunction(0x138360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1985ACu; }
        if (ctx->pc != 0x1985ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_138360_0x1383a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1985ACu; }
        if (ctx->pc != 0x1985ACu) { return; }
    }
    ctx->pc = 0x1985ACu;
    // 0x1985ac: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1985acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1985b0: 0x12200037  beqz        $s1, . + 4 + (0x37 << 2)
    ctx->pc = 0x1985B0u;
    {
        const bool branch_taken_0x1985b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1985B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1985B0u;
            // 0x1985b4: 0xa643001c  sh          $v1, 0x1C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 28), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1985b0) {
            ctx->pc = 0x198690u;
            goto label_198690;
        }
    }
    ctx->pc = 0x1985B8u;
    // 0x1985b8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1985b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1985bc: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x1985bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x1985c0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1985c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1985c4: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1985C4u;
    {
        const bool branch_taken_0x1985c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1985C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1985C4u;
            // 0x1985c8: 0x31400  sll         $v0, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1985c4) {
            ctx->pc = 0x198690u;
            goto label_198690;
        }
    }
    ctx->pc = 0x1985CCu;
    // 0x1985cc: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x1985ccu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1985d0: 0x3c13002a  lui         $s3, 0x2A
    ctx->pc = 0x1985d0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)42 << 16));
    // 0x1985d4: 0xde65bdf8  ld          $a1, -0x4208($s3)
    ctx->pc = 0x1985d4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 4294950392)));
    // 0x1985d8: 0xdea20040  ld          $v0, 0x40($s5)
    ctx->pc = 0x1985d8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 64)));
    // 0x1985dc: 0x50450004  beql        $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1985DCu;
    {
        const bool branch_taken_0x1985dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1985dc) {
            ctx->pc = 0x1985E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1985DCu;
            // 0x1985e0: 0x8ea2008c  lw          $v0, 0x8C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1985F0u;
            goto label_1985f0;
        }
    }
    ctx->pc = 0x1985E4u;
    // 0x1985e4: 0xc04da64  jal         func_136990
    ctx->pc = 0x1985E4u;
    SET_GPR_U32(ctx, 31, 0x1985ECu);
    ctx->pc = 0x1985E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1985E4u;
            // 0x1985e8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1985ECu; }
        if (ctx->pc != 0x1985ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1985ECu; }
        if (ctx->pc != 0x1985ECu) { return; }
    }
    ctx->pc = 0x1985ECu;
    // 0x1985ec: 0x8ea2008c  lw          $v0, 0x8C($s5)
    ctx->pc = 0x1985ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 140)));
label_1985f0:
    // 0x1985f0: 0x101980  sll         $v1, $s0, 6
    ctx->pc = 0x1985f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
    // 0x1985f4: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x1985f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1985f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1985f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1985fc: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x1985fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x198600: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x198600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x198604: 0xd8820040  lqc2        $vf2, 0x40($a0)
    ctx->pc = 0x198604u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x198608: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x198608u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19860c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x19860cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x198610: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x198610u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x198614: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x198614u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x198618: 0x4a830840  vaddx.y     $vf1, $vf1, $vf3x
    ctx->pc = 0x198618u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x19861c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x19861cu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]);
    // 0x198620: 0x4bc1106e  vopmsub.xyz $vf1, $vf2, $vf1
    ctx->pc = 0x198620u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x198624: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x198624u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x198628: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x198628u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x19862c: 0x4bc112fe  vopmula.xyz $ACC, $vf2, $vf1
    ctx->pc = 0x19862cu;
    ctx->vu0_acc = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]);
    // 0x198630: 0x4bc208ae  vopmsub.xyz $vf2, $vf1, $vf2
    ctx->pc = 0x198630u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x198634: 0x4a2210ac  vsub.w      $vf2, $vf2, $vf2
    ctx->pc = 0x198634u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x198638: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x198638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x19863c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x19863cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x198640: 0xc06149c  jal         func_185270
    ctx->pc = 0x198640u;
    SET_GPR_U32(ctx, 31, 0x198648u);
    ctx->pc = 0x198644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x198640u;
            // 0x198644: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185270u;
    if (runtime->hasFunction(0x185270u)) {
        auto targetFn = runtime->lookupFunction(0x185270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198648u; }
        if (ctx->pc != 0x198648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_185270_0x185318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x198648u; }
        if (ctx->pc != 0x198648u) { return; }
    }
    ctx->pc = 0x198648u;
    // 0x198648: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x198648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x19864c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x19864cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x198650: 0xde65bdf8  ld          $a1, -0x4208($s3)
    ctx->pc = 0x198650u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 4294950392)));
    // 0x198654: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x198654u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x198658: 0x84830060  lh          $v1, 0x60($a0)
    ctx->pc = 0x198658u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x19865c: 0x64a50001  daddiu      $a1, $a1, 0x1
    ctx->pc = 0x19865cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)1);
    // 0x198660: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x198660u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x198664: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x198664u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x198668: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x198668u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x19866c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19866cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198670: 0xa3100a  movz        $v0, $a1, $v1
    ctx->pc = 0x198670u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
    // 0x198674: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x198674u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x198678: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x198678u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19867c: 0x7c820040  sq          $v0, 0x40($a0)
    ctx->pc = 0x19867cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 2));
    // 0x198680: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x198680u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x198684: 0x7c820050  sq          $v0, 0x50($a0)
    ctx->pc = 0x198684u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), GPR_VEC(ctx, 2));
    // 0x198688: 0xfe65bdf8  sd          $a1, -0x4208($s3)
    ctx->pc = 0x198688u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 4294950392), GPR_U64(ctx, 5));
    // 0x19868c: 0xfc830068  sd          $v1, 0x68($a0)
    ctx->pc = 0x19868cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 104), GPR_U64(ctx, 3));
label_198690:
    // 0x198690: 0xa640001e  sh          $zero, 0x1E($s2)
    ctx->pc = 0x198690u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 30), (uint16_t)GPR_U32(ctx, 0));
    // 0x198694: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x198694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x198698: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x198698u;
    {
        const bool branch_taken_0x198698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19869Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x198698u;
            // 0x19869c: 0x26e2e848  addiu       $v0, $s7, -0x17B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x198698) {
            ctx->pc = 0x1986B8u;
            goto label_1986b8;
        }
    }
    ctx->pc = 0x1986A0u;
    // 0x1986a0: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1986a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x1986a4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1986a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1986a8: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x1986a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1986ac: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x1986acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x1986b0: 0x40f809  jalr        $v0
    ctx->pc = 0x1986B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1986B8u);
        ctx->pc = 0x1986B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1986B0u;
            // 0x1986b4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1986B8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198478u: goto label_198478;
            case 0x1984E8u: goto label_1984e8;
            case 0x198528u: goto label_198528;
            case 0x198548u: goto label_198548;
            case 0x1985F0u: goto label_1985f0;
            case 0x198690u: goto label_198690;
            case 0x1986B8u: goto label_1986b8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1986B8u; }
            if (ctx->pc != 0x1986B8u) { return; }
        }
        }
    }
    ctx->pc = 0x1986B8u;
label_1986b8:
    // 0x1986b8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1986b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1986bc: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x1986bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1986c0: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x1986c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1986c4: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x1986c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1986c8: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x1986c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1986cc: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x1986ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1986d0: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x1986d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1986d4: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x1986d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1986d8: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x1986d8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1986dc: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x1986dcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1986e0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1986e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1986e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1986E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1986E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1986E4u;
            // 0x1986e8: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x198478u: goto label_198478;
            case 0x1984E8u: goto label_1984e8;
            case 0x198528u: goto label_198528;
            case 0x198548u: goto label_198548;
            case 0x1985F0u: goto label_1985f0;
            case 0x198690u: goto label_198690;
            case 0x1986B8u: goto label_1986b8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1986ECu;
    // 0x1986ec: 0x0  nop
    ctx->pc = 0x1986ecu;
    // NOP
}
