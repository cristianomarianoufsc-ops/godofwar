#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002048F8
// Address: 0x2048f8 - 0x204dc0
void sub_002048F8_0x2048f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002048F8_0x2048f8");
#endif

    ctx->pc = 0x2048f8u;

    // 0x2048f8: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x2048f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
    // 0x2048fc: 0x7fb40110  sq          $s4, 0x110($sp)
    ctx->pc = 0x2048fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 20));
    // 0x204900: 0x7fb00150  sq          $s0, 0x150($sp)
    ctx->pc = 0x204900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 16));
    // 0x204904: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x204904u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204908: 0x7fb10140  sq          $s1, 0x140($sp)
    ctx->pc = 0x204908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 17));
    // 0x20490c: 0x7fb20130  sq          $s2, 0x130($sp)
    ctx->pc = 0x20490cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 18));
    // 0x204910: 0x7fb30120  sq          $s3, 0x120($sp)
    ctx->pc = 0x204910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 19));
    // 0x204914: 0x7fb50100  sq          $s5, 0x100($sp)
    ctx->pc = 0x204914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 21));
    // 0x204918: 0x7fb600f0  sq          $s6, 0xF0($sp)
    ctx->pc = 0x204918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 22));
    // 0x20491c: 0x7fb700e0  sq          $s7, 0xE0($sp)
    ctx->pc = 0x20491cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 23));
    // 0x204920: 0x7fbe00d0  sq          $fp, 0xD0($sp)
    ctx->pc = 0x204920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 30));
    // 0x204924: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x204924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x204928: 0xe7b40160  swc1        $f20, 0x160($sp)
    ctx->pc = 0x204928u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
    // 0x20492c: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x20492cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x204930: 0x8e820040  lw          $v0, 0x40($s4)
    ctx->pc = 0x204930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x204934: 0x14400115  bnez        $v0, . + 4 + (0x115 << 2)
    ctx->pc = 0x204934u;
    {
        const bool branch_taken_0x204934 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x204938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204934u;
            // 0x204938: 0x7bb00150  lq          $s0, 0x150($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204934) {
            ctx->pc = 0x204D8Cu;
            goto label_204d8c;
        }
    }
    ctx->pc = 0x20493Cu;
    // 0x20493c: 0x8e950048  lw          $s5, 0x48($s4)
    ctx->pc = 0x20493cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
    // 0x204940: 0x8eb20000  lw          $s2, 0x0($s5)
    ctx->pc = 0x204940u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x204944: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x204944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x204948: 0x2451e848  addiu       $s1, $v0, -0x17B8
    ctx->pc = 0x204948u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x20494c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x20494cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204950: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x204950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x204954: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x204954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x204958: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x204958u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x20495c: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x20495cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x204960: 0x40f809  jalr        $v0
    ctx->pc = 0x204960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x204968u);
        ctx->pc = 0x204964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204960u;
            // 0x204964: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x204968u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2049C0u: goto label_2049c0;
            case 0x204A10u: goto label_204a10;
            case 0x204A30u: goto label_204a30;
            case 0x204A4Cu: goto label_204a4c;
            case 0x204A64u: goto label_204a64;
            case 0x204A80u: goto label_204a80;
            case 0x204B30u: goto label_204b30;
            case 0x204B80u: goto label_204b80;
            case 0x204C40u: goto label_204c40;
            case 0x204C5Cu: goto label_204c5c;
            case 0x204CD8u: goto label_204cd8;
            case 0x204CDCu: goto label_204cdc;
            case 0x204CE4u: goto label_204ce4;
            case 0x204D34u: goto label_204d34;
            case 0x204D44u: goto label_204d44;
            case 0x204D48u: goto label_204d48;
            case 0x204D60u: goto label_204d60;
            case 0x204D64u: goto label_204d64;
            case 0x204D88u: goto label_204d88;
            case 0x204D8Cu: goto label_204d8c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x204968u; }
            if (ctx->pc != 0x204968u) { return; }
        }
        }
    }
    ctx->pc = 0x204968u;
    // 0x204968: 0x8c500088  lw          $s0, 0x88($v0)
    ctx->pc = 0x204968u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x20496c: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x20496cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x204970: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x204970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x204974: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x204974u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x204978: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x204978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x20497c: 0x40f809  jalr        $v0
    ctx->pc = 0x20497Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x204984u);
        ctx->pc = 0x204980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20497Cu;
            // 0x204980: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x204984u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2049C0u: goto label_2049c0;
            case 0x204A10u: goto label_204a10;
            case 0x204A30u: goto label_204a30;
            case 0x204A4Cu: goto label_204a4c;
            case 0x204A64u: goto label_204a64;
            case 0x204A80u: goto label_204a80;
            case 0x204B30u: goto label_204b30;
            case 0x204B80u: goto label_204b80;
            case 0x204C40u: goto label_204c40;
            case 0x204C5Cu: goto label_204c5c;
            case 0x204CD8u: goto label_204cd8;
            case 0x204CDCu: goto label_204cdc;
            case 0x204CE4u: goto label_204ce4;
            case 0x204D34u: goto label_204d34;
            case 0x204D44u: goto label_204d44;
            case 0x204D48u: goto label_204d48;
            case 0x204D60u: goto label_204d60;
            case 0x204D64u: goto label_204d64;
            case 0x204D88u: goto label_204d88;
            case 0x204D8Cu: goto label_204d8c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x204984u; }
            if (ctx->pc != 0x204984u) { return; }
        }
        }
    }
    ctx->pc = 0x204984u;
    // 0x204984: 0x501026  xor         $v0, $v0, $s0
    ctx->pc = 0x204984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
    // 0x204988: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x204988u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x20498c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x20498Cu;
    {
        const bool branch_taken_0x20498c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20498Cu;
            // 0x204990: 0xafa20094  sw          $v0, 0x94($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20498c) {
            ctx->pc = 0x2049C0u;
            goto label_2049c0;
        }
    }
    ctx->pc = 0x204994u;
    // 0x204994: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x204994u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x204998: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x204998u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20499c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x20499cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2049a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2049a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2049a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2049a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2049a8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2049a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2049ac: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x2049acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x2049b0: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x2049b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x2049b4: 0x40f809  jalr        $v0
    ctx->pc = 0x2049B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2049BCu);
        ctx->pc = 0x2049B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2049B4u;
            // 0x2049b8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2049BCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2049C0u: goto label_2049c0;
            case 0x204A10u: goto label_204a10;
            case 0x204A30u: goto label_204a30;
            case 0x204A4Cu: goto label_204a4c;
            case 0x204A64u: goto label_204a64;
            case 0x204A80u: goto label_204a80;
            case 0x204B30u: goto label_204b30;
            case 0x204B80u: goto label_204b80;
            case 0x204C40u: goto label_204c40;
            case 0x204C5Cu: goto label_204c5c;
            case 0x204CD8u: goto label_204cd8;
            case 0x204CDCu: goto label_204cdc;
            case 0x204CE4u: goto label_204ce4;
            case 0x204D34u: goto label_204d34;
            case 0x204D44u: goto label_204d44;
            case 0x204D48u: goto label_204d48;
            case 0x204D60u: goto label_204d60;
            case 0x204D64u: goto label_204d64;
            case 0x204D88u: goto label_204d88;
            case 0x204D8Cu: goto label_204d8c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2049BCu; }
            if (ctx->pc != 0x2049BCu) { return; }
        }
        }
    }
    ctx->pc = 0x2049BCu;
    // 0x2049bc: 0x0  nop
    ctx->pc = 0x2049bcu;
    // NOP
label_2049c0:
    // 0x2049c0: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x2049c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x2049c4: 0xc04c992  jal         func_132648
    ctx->pc = 0x2049C4u;
    SET_GPR_U32(ctx, 31, 0x2049CCu);
    ctx->pc = 0x2049C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2049C4u;
            // 0x2049c8: 0x24847a40  addiu       $a0, $a0, 0x7A40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31296));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132648u;
    if (runtime->hasFunction(0x132648u)) {
        auto targetFn = runtime->lookupFunction(0x132648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2049CCu; }
        if (ctx->pc != 0x2049CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132648_0x132648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2049CCu; }
        if (ctx->pc != 0x2049CCu) { return; }
    }
    ctx->pc = 0x2049CCu;
    // 0x2049cc: 0x104000e4  beqz        $v0, . + 4 + (0xE4 << 2)
    ctx->pc = 0x2049CCu;
    {
        const bool branch_taken_0x2049cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2049D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2049CCu;
            // 0x2049d0: 0xae820040  sw          $v0, 0x40($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2049cc) {
            ctx->pc = 0x204D60u;
            goto label_204d60;
        }
    }
    ctx->pc = 0x2049D4u;
    // 0x2049d4: 0x8c420104  lw          $v0, 0x104($v0)
    ctx->pc = 0x2049d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x2049d8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2049d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2049dc: 0x104000d9  beqz        $v0, . + 4 + (0xD9 << 2)
    ctx->pc = 0x2049DCu;
    {
        const bool branch_taken_0x2049dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2049E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2049DCu;
            // 0x2049e0: 0xafa30098  sw          $v1, 0x98($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2049dc) {
            ctx->pc = 0x204D44u;
            goto label_204d44;
        }
    }
    ctx->pc = 0x2049E4u;
    // 0x2049e4: 0x8c530088  lw          $s3, 0x88($v0)
    ctx->pc = 0x2049e4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x2049e8: 0x126000d6  beqz        $s3, . + 4 + (0xD6 << 2)
    ctx->pc = 0x2049E8u;
    {
        const bool branch_taken_0x2049e8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2049ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2049E8u;
            // 0x2049ec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2049e8) {
            ctx->pc = 0x204D44u;
            goto label_204d44;
        }
    }
    ctx->pc = 0x2049F0u;
    // 0x2049f0: 0x3c16ffff  lui         $s6, 0xFFFF
    ctx->pc = 0x2049f0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65535 << 16));
    // 0x2049f4: 0x86430060  lh          $v1, 0x60($s2)
    ctx->pc = 0x2049f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x2049f8: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x2049f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x2049fc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2049fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x204a00: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x204A00u;
    {
        const bool branch_taken_0x204a00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x204A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204A00u;
            // 0x204a04: 0x36d6ffff  ori         $s6, $s6, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204a00) {
            ctx->pc = 0x204A10u;
            goto label_204a10;
        }
    }
    ctx->pc = 0x204A08u;
    // 0x204a08: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x204A08u;
    {
        const bool branch_taken_0x204a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204A08u;
            // 0x204a0c: 0x26430020  addiu       $v1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204a08) {
            ctx->pc = 0x204A30u;
            goto label_204a30;
        }
    }
    ctx->pc = 0x204A10u;
label_204a10:
    // 0x204a10: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x204a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x204a14: 0xde430068  ld          $v1, 0x68($s2)
    ctx->pc = 0x204a14u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x204a18: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x204a18u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x204a1c: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x204A1Cu;
    {
        const bool branch_taken_0x204a1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x204A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204A1Cu;
            // 0x204a20: 0x26430070  addiu       $v1, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204a1c) {
            ctx->pc = 0x204A30u;
            goto label_204a30;
        }
    }
    ctx->pc = 0x204A24u;
    // 0x204a24: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x204A24u;
    SET_GPR_U32(ctx, 31, 0x204A2Cu);
    ctx->pc = 0x204A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204A24u;
            // 0x204a28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204A2Cu; }
        if (ctx->pc != 0x204A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204A2Cu; }
        if (ctx->pc != 0x204A2Cu) { return; }
    }
    ctx->pc = 0x204A2Cu;
    // 0x204a2c: 0x26430070  addiu       $v1, $s2, 0x70
    ctx->pc = 0x204a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_204a30:
    // 0x204a30: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x204a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x204a34: 0x78630030  lq          $v1, 0x30($v1)
    ctx->pc = 0x204a34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x204a38: 0x8c42e2a4  lw          $v0, -0x1D5C($v0)
    ctx->pc = 0x204a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959780)));
    // 0x204a3c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x204a3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204a40: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x204A40u;
    {
        const bool branch_taken_0x204a40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204A40u;
            // 0x204a44: 0x7fa300a0  sq          $v1, 0xA0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204a40) {
            ctx->pc = 0x204A4Cu;
            goto label_204a4c;
        }
    }
    ctx->pc = 0x204A48u;
    // 0x204a48: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x204a48u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_204a4c:
    // 0x204a4c: 0x86030060  lh          $v1, 0x60($s0)
    ctx->pc = 0x204a4cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x204a50: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x204a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x204a54: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x204A54u;
    {
        const bool branch_taken_0x204a54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x204A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204A54u;
            // 0x204a58: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204a54) {
            ctx->pc = 0x204A64u;
            goto label_204a64;
        }
    }
    ctx->pc = 0x204A5Cu;
    // 0x204a5c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x204A5Cu;
    {
        const bool branch_taken_0x204a5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204A5Cu;
            // 0x204a60: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204a5c) {
            ctx->pc = 0x204A80u;
            goto label_204a80;
        }
    }
    ctx->pc = 0x204A64u;
label_204a64:
    // 0x204a64: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x204a64u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x204a68: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x204a68u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x204a6c: 0x50650004  beql        $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x204A6Cu;
    {
        const bool branch_taken_0x204a6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x204a6c) {
            ctx->pc = 0x204A70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x204A6Cu;
            // 0x204a70: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x204A80u;
            goto label_204a80;
        }
    }
    ctx->pc = 0x204A74u;
    // 0x204a74: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x204A74u;
    SET_GPR_U32(ctx, 31, 0x204A7Cu);
    ctx->pc = 0x204A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204A74u;
            // 0x204a78: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204A7Cu; }
        if (ctx->pc != 0x204A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204A7Cu; }
        if (ctx->pc != 0x204A7Cu) { return; }
    }
    ctx->pc = 0x204A7Cu;
    // 0x204a7c: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x204a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_204a80:
    // 0x204a80: 0xd8810030  lqc2        $vf1, 0x30($a0)
    ctx->pc = 0x204a80u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x204a84: 0xdba200a0  lqc2        $vf2, 0xA0($sp)
    ctx->pc = 0x204a84u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x204a88: 0x4be1106c  vsub.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x204a88u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x204a8c: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x204a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x204a90: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x204a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x204a94: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x204a94u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x204a98: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x204a98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x204a9c: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x204a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x204aa0: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x204aa0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x204aa4: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x204aa4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x204aa8: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x204aa8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x204aac: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x204aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x204ab0: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x204ab0u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x204ab4: 0x4a0003bf  vwaitq
    ctx->pc = 0x204ab4u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x204ab8: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x204ab8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x204abc: 0x4a0002ff  vnop
    ctx->pc = 0x204abcu;
    // NOP operation, no action needed for VU0
    // 0x204ac0: 0x4a0002ff  vnop
    ctx->pc = 0x204ac0u;
    // NOP operation, no action needed for VU0
    // 0x204ac4: 0x8e850040  lw          $a1, 0x40($s4)
    ctx->pc = 0x204ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x204ac8: 0x245e3330  addiu       $fp, $v0, 0x3330
    ctx->pc = 0x204ac8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 13104));
    // 0x204acc: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x204accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x204ad0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x204ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204ad4: 0xc07ce6a  jal         func_1F39A8
    ctx->pc = 0x204AD4u;
    SET_GPR_U32(ctx, 31, 0x204ADCu);
    ctx->pc = 0x204AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204AD4u;
            // 0x204ad8: 0xfba10000  sqc2        $vf1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F39A8u;
    if (runtime->hasFunction(0x1F39A8u)) {
        auto targetFn = runtime->lookupFunction(0x1F39A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204ADCu; }
        if (ctx->pc != 0x204ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F39A8_0x1f39a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204ADCu; }
        if (ctx->pc != 0x204ADCu) { return; }
    }
    ctx->pc = 0x204ADCu;
    // 0x204adc: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x204adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x204ae0: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x204ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x204ae4: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x204ae4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x204ae8: 0x8c500104  lw          $s0, 0x104($v0)
    ctx->pc = 0x204ae8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x204aec: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x204aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
    // 0x204af0: 0x40f809  jalr        $v0
    ctx->pc = 0x204AF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x204AF8u);
        ctx->pc = 0x204AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204AF0u;
            // 0x204af4: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x204AF8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2049C0u: goto label_2049c0;
            case 0x204A10u: goto label_204a10;
            case 0x204A30u: goto label_204a30;
            case 0x204A4Cu: goto label_204a4c;
            case 0x204A64u: goto label_204a64;
            case 0x204A80u: goto label_204a80;
            case 0x204B30u: goto label_204b30;
            case 0x204B80u: goto label_204b80;
            case 0x204C40u: goto label_204c40;
            case 0x204C5Cu: goto label_204c5c;
            case 0x204CD8u: goto label_204cd8;
            case 0x204CDCu: goto label_204cdc;
            case 0x204CE4u: goto label_204ce4;
            case 0x204D34u: goto label_204d34;
            case 0x204D44u: goto label_204d44;
            case 0x204D48u: goto label_204d48;
            case 0x204D60u: goto label_204d60;
            case 0x204D64u: goto label_204d64;
            case 0x204D88u: goto label_204d88;
            case 0x204D8Cu: goto label_204d8c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x204AF8u; }
            if (ctx->pc != 0x204AF8u) { return; }
        }
        }
    }
    ctx->pc = 0x204AF8u;
    // 0x204af8: 0x845500ea  lh          $s5, 0xEA($v0)
    ctx->pc = 0x204af8u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 234)));
    // 0x204afc: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x204afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x204b00: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x204b00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x204b04: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x204b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x204b08: 0x84510008  lh          $s1, 0x8($v0)
    ctx->pc = 0x204b08u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x204b0c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x204b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x204b10: 0xdc65bdf8  ld          $a1, -0x4208($v1)
    ctx->pc = 0x204b10u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 4294950392)));
    // 0x204b14: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x204b14u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x204b18: 0x50450005  beql        $v0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x204B18u;
    {
        const bool branch_taken_0x204b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x204b18) {
            ctx->pc = 0x204B1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x204B18u;
            // 0x204b1c: 0x8e03008c  lw          $v1, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x204B30u;
            goto label_204b30;
        }
    }
    ctx->pc = 0x204B20u;
    // 0x204b20: 0xc04da64  jal         func_136990
    ctx->pc = 0x204B20u;
    SET_GPR_U32(ctx, 31, 0x204B28u);
    ctx->pc = 0x204B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204B20u;
            // 0x204b24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204B28u; }
        if (ctx->pc != 0x204B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204B28u; }
        if (ctx->pc != 0x204B28u) { return; }
    }
    ctx->pc = 0x204B28u;
    // 0x204b28: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x204b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
    // 0x204b2c: 0x0  nop
    ctx->pc = 0x204b2cu;
    // NOP
label_204b30:
    // 0x204b30: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x204b30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x204b34: 0x152180  sll         $a0, $s5, 6
    ctx->pc = 0x204b34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
    // 0x204b38: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x204b38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x204b3c: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x204b3cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x204b40: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x204b40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x204b44: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x204b44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x204b48: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x204b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x204b4c: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x204b4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x204b50: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x204b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x204b54: 0xd8620030  lqc2        $vf2, 0x30($v1)
    ctx->pc = 0x204b54u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x204b58: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x204b58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x204b5c: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x204b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x204b60: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x204b60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x204b64: 0xd8410030  lqc2        $vf1, 0x30($v0)
    ctx->pc = 0x204b64u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x204b68: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x204b68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x204b6c: 0xfba20040  sqc2        $vf2, 0x40($sp)
    ctx->pc = 0x204b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x204b70: 0x8e71001c  lw          $s1, 0x1C($s3)
    ctx->pc = 0x204b70u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x204b74: 0x1220005b  beqz        $s1, . + 4 + (0x5B << 2)
    ctx->pc = 0x204B74u;
    {
        const bool branch_taken_0x204b74 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x204B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204B74u;
            // 0x204b78: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204b74) {
            ctx->pc = 0x204CE4u;
            goto label_204ce4;
        }
    }
    ctx->pc = 0x204B7Cu;
    // 0x204b7c: 0x0  nop
    ctx->pc = 0x204b7cu;
    // NOP
label_204b80:
    // 0x204b80: 0x27b00050  addiu       $s0, $sp, 0x50
    ctx->pc = 0x204b80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x204b84: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x204b84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x204b88: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x204b88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204b8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x204b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204b90: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x204B90u;
    SET_GPR_U32(ctx, 31, 0x204B98u);
    ctx->pc = 0x204B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204B90u;
            // 0x204b94: 0x24a52d10  addiu       $a1, $a1, 0x2D10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204B98u; }
        if (ctx->pc != 0x204B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204B98u; }
        if (ctx->pc != 0x204B98u) { return; }
    }
    ctx->pc = 0x204B98u;
    // 0x204b98: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x204b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x204b9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x204b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204ba0: 0xc05d5d0  jal         func_175740
    ctx->pc = 0x204BA0u;
    SET_GPR_U32(ctx, 31, 0x204BA8u);
    ctx->pc = 0x204BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204BA0u;
            // 0x204ba4: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175740u;
    if (runtime->hasFunction(0x175740u)) {
        auto targetFn = runtime->lookupFunction(0x175740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204BA8u; }
        if (ctx->pc != 0x204BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175740_0x175780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204BA8u; }
        if (ctx->pc != 0x204BA8u) { return; }
    }
    ctx->pc = 0x204BA8u;
    // 0x204ba8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x204ba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204bac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x204bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204bb0: 0xc045ab2  jal         func_116AC8
    ctx->pc = 0x204BB0u;
    SET_GPR_U32(ctx, 31, 0x204BB8u);
    ctx->pc = 0x204BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204BB0u;
            // 0x204bb4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116AC8u;
    if (runtime->hasFunction(0x116AC8u)) {
        auto targetFn = runtime->lookupFunction(0x116AC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204BB8u; }
        if (ctx->pc != 0x204BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_116ac8_0x116b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204BB8u; }
        if (ctx->pc != 0x204BB8u) { return; }
    }
    ctx->pc = 0x204BB8u;
    // 0x204bb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x204bb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204bbc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x204bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x204bc0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x204bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x204bc4: 0x12020044  beq         $s0, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x204BC4u;
    {
        const bool branch_taken_0x204bc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x204BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204BC4u;
            // 0x204bc8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204bc4) {
            ctx->pc = 0x204CD8u;
            goto label_204cd8;
        }
    }
    ctx->pc = 0x204BCCu;
    // 0x204bcc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x204bccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204bd0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x204bd0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204bd4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x204bd4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204bd8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x204bd8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204bdc: 0xc0401f2  jal         func_1007C8
    ctx->pc = 0x204BDCu;
    SET_GPR_U32(ctx, 31, 0x204BE4u);
    ctx->pc = 0x204BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204BDCu;
            // 0x204be0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1007C8u;
    if (runtime->hasFunction(0x1007C8u)) {
        auto targetFn = runtime->lookupFunction(0x1007C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204BE4u; }
        if (ctx->pc != 0x204BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001007C8_0x1007c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204BE4u; }
        if (ctx->pc != 0x204BE4u) { return; }
    }
    ctx->pc = 0x204BE4u;
    // 0x204be4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x204be4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204be8: 0xc04015e  jal         func_100578
    ctx->pc = 0x204BE8u;
    SET_GPR_U32(ctx, 31, 0x204BF0u);
    ctx->pc = 0x204BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204BE8u;
            // 0x204bec: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100578u;
    if (runtime->hasFunction(0x100578u)) {
        auto targetFn = runtime->lookupFunction(0x100578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204BF0u; }
        if (ctx->pc != 0x204BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100578_0x100578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204BF0u; }
        if (ctx->pc != 0x204BF0u) { return; }
    }
    ctx->pc = 0x204BF0u;
    // 0x204bf0: 0xc040622  jal         func_101888
    ctx->pc = 0x204BF0u;
    SET_GPR_U32(ctx, 31, 0x204BF8u);
    ctx->pc = 0x204BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204BF0u;
            // 0x204bf4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101888u;
    if (runtime->hasFunction(0x101888u)) {
        auto targetFn = runtime->lookupFunction(0x101888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204BF8u; }
        if (ctx->pc != 0x204BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101888_0x101888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204BF8u; }
        if (ctx->pc != 0x204BF8u) { return; }
    }
    ctx->pc = 0x204BF8u;
    // 0x204bf8: 0xc07ce3a  jal         func_1F38E8
    ctx->pc = 0x204BF8u;
    SET_GPR_U32(ctx, 31, 0x204C00u);
    ctx->pc = 0x204BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204BF8u;
            // 0x204bfc: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F38E8u;
    if (runtime->hasFunction(0x1F38E8u)) {
        auto targetFn = runtime->lookupFunction(0x1F38E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204C00u; }
        if (ctx->pc != 0x204C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F38E8_0x1f38e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204C00u; }
        if (ctx->pc != 0x204C00u) { return; }
    }
    ctx->pc = 0x204C00u;
    // 0x204c00: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x204c00u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x204c04: 0xdba10010  lqc2        $vf1, 0x10($sp)
    ctx->pc = 0x204c04u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x204c08: 0x4be209bc  vmulax.xyzw $ACC, $vf1, $vf2x
    ctx->pc = 0x204c08u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x204c0c: 0xdba10020  lqc2        $vf1, 0x20($sp)
    ctx->pc = 0x204c0cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x204c10: 0x4be208bd  vmadday.xyzw $ACC, $vf1, $vf2y
    ctx->pc = 0x204c10u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x204c14: 0xdba10030  lqc2        $vf1, 0x30($sp)
    ctx->pc = 0x204c14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x204c18: 0x4be208be  vmaddaz.xyzw $ACC, $vf1, $vf2z
    ctx->pc = 0x204c18u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x204c1c: 0xdba10040  lqc2        $vf1, 0x40($sp)
    ctx->pc = 0x204c1cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x204c20: 0x4be208cb  vmaddw.xyzw $vf3, $vf1, $vf2w
    ctx->pc = 0x204c20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x204c24: 0xfba300b0  sqc2        $vf3, 0xB0($sp)
    ctx->pc = 0x204c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x204c28: 0x86430060  lh          $v1, 0x60($s2)
    ctx->pc = 0x204c28u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x204c2c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x204c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x204c30: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x204C30u;
    {
        const bool branch_taken_0x204c30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x204C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204C30u;
            // 0x204c34: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204c30) {
            ctx->pc = 0x204C40u;
            goto label_204c40;
        }
    }
    ctx->pc = 0x204C38u;
    // 0x204c38: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x204C38u;
    {
        const bool branch_taken_0x204c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204C38u;
            // 0x204c3c: 0x26420020  addiu       $v0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204c38) {
            ctx->pc = 0x204C5Cu;
            goto label_204c5c;
        }
    }
    ctx->pc = 0x204C40u;
label_204c40:
    // 0x204c40: 0xde420068  ld          $v0, 0x68($s2)
    ctx->pc = 0x204c40u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x204c44: 0xdc65bdf8  ld          $a1, -0x4208($v1)
    ctx->pc = 0x204c44u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 4294950392)));
    // 0x204c48: 0x10450004  beq         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x204C48u;
    {
        const bool branch_taken_0x204c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x204C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204C48u;
            // 0x204c4c: 0x26420070  addiu       $v0, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204c48) {
            ctx->pc = 0x204C5Cu;
            goto label_204c5c;
        }
    }
    ctx->pc = 0x204C50u;
    // 0x204c50: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x204C50u;
    SET_GPR_U32(ctx, 31, 0x204C58u);
    ctx->pc = 0x204C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204C50u;
            // 0x204c54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204C58u; }
        if (ctx->pc != 0x204C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204C58u; }
        if (ctx->pc != 0x204C58u) { return; }
    }
    ctx->pc = 0x204C58u;
    // 0x204c58: 0x26420070  addiu       $v0, $s2, 0x70
    ctx->pc = 0x204c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_204c5c:
    // 0x204c5c: 0xd8410030  lqc2        $vf1, 0x30($v0)
    ctx->pc = 0x204c5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x204c60: 0xdba200b0  lqc2        $vf2, 0xB0($sp)
    ctx->pc = 0x204c60u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x204c64: 0x4be1106c  vsub.xyzw   $vf1, $vf2, $vf1
    ctx->pc = 0x204c64u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x204c68: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x204c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x204c6c: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x204c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x204c70: 0x48a21000  qmtc2.ni    $v0, $vf2
    ctx->pc = 0x204c70u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x204c74: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x204c74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x204c78: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x204c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x204c7c: 0x4be108ea  vmul.xyzw   $vf3, $vf1, $vf1
    ctx->pc = 0x204c7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x204c80: 0x4b031881  vaddy.x     $vf2, $vf3, $vf3y
    ctx->pc = 0x204c80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x204c84: 0x4b031082  vaddz.x     $vf2, $vf2, $vf3z
    ctx->pc = 0x204c84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x204c88: 0x4a6203be  vrsqrt      $Q, $vf0w, $vf2x
    ctx->pc = 0x204c88u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x204c8c: 0x4a0003bf  vwaitq
    ctx->pc = 0x204c8cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x204c90: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x204c90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x204c94: 0x4a0002ff  vnop
    ctx->pc = 0x204c94u;
    // NOP operation, no action needed for VU0
    // 0x204c98: 0x4a0002ff  vnop
    ctx->pc = 0x204c98u;
    // NOP operation, no action needed for VU0
    // 0x204c9c: 0xdba30070  lqc2        $vf3, 0x70($sp)
    ctx->pc = 0x204c9cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x204ca0: 0x4be308ea  vmul.xyzw   $vf3, $vf1, $vf3
    ctx->pc = 0x204ca0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x204ca4: 0xfba10060  sqc2        $vf1, 0x60($sp)
    ctx->pc = 0x204ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x204ca8: 0xfba10080  sqc2        $vf1, 0x80($sp)
    ctx->pc = 0x204ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x204cac: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x204cacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x204cb0: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x204cb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x204cb4: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x204cb4u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x204cb8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x204cb8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x204cbc: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x204cbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x204cc0: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x204CC0u;
    {
        const bool branch_taken_0x204cc0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x204cc0) {
            ctx->pc = 0x204CDCu;
            goto label_204cdc;
        }
    }
    ctx->pc = 0x204CC8u;
    // 0x204cc8: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x204cc8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204ccc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x204CCCu;
    {
        const bool branch_taken_0x204ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204CD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204CCCu;
            // 0x204cd0: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x204ccc) {
            ctx->pc = 0x204CDCu;
            goto label_204cdc;
        }
    }
    ctx->pc = 0x204CD4u;
    // 0x204cd4: 0x0  nop
    ctx->pc = 0x204cd4u;
    // NOP
label_204cd8:
    // 0x204cd8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x204cd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_204cdc:
    // 0x204cdc: 0x1620ffa8  bnez        $s1, . + 4 + (-0x58 << 2)
    ctx->pc = 0x204CDCu;
    {
        const bool branch_taken_0x204cdc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x204CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204CDCu;
            // 0x204ce0: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204cdc) {
            ctx->pc = 0x204B80u;
            runtime->cooperativeGuestYield();
            goto label_204b80;
        }
    }
    ctx->pc = 0x204CE4u;
label_204ce4:
    // 0x204ce4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x204ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x204ce8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x204ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x204cec: 0x12c20011  beq         $s6, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x204CECu;
    {
        const bool branch_taken_0x204cec = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x204CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204CECu;
            // 0x204cf0: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204cec) {
            ctx->pc = 0x204D34u;
            goto label_204d34;
        }
    }
    ctx->pc = 0x204CF4u;
    // 0x204cf4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x204cf4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204cf8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x204cf8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204cfc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x204cfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x204d00: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x204d00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204d04: 0xc0401f2  jal         func_1007C8
    ctx->pc = 0x204D04u;
    SET_GPR_U32(ctx, 31, 0x204D0Cu);
    ctx->pc = 0x204D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204D04u;
            // 0x204d08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1007C8u;
    if (runtime->hasFunction(0x1007C8u)) {
        auto targetFn = runtime->lookupFunction(0x1007C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204D0Cu; }
        if (ctx->pc != 0x204D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001007C8_0x1007c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204D0Cu; }
        if (ctx->pc != 0x204D0Cu) { return; }
    }
    ctx->pc = 0x204D0Cu;
    // 0x204d0c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x204d0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x204d10: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x204d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204d14: 0xc04015e  jal         func_100578
    ctx->pc = 0x204D14u;
    SET_GPR_U32(ctx, 31, 0x204D1Cu);
    ctx->pc = 0x204D18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204D14u;
            // 0x204d18: 0xafa00098  sw          $zero, 0x98($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100578u;
    if (runtime->hasFunction(0x100578u)) {
        auto targetFn = runtime->lookupFunction(0x100578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204D1Cu; }
        if (ctx->pc != 0x204D1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100578_0x100578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204D1Cu; }
        if (ctx->pc != 0x204D1Cu) { return; }
    }
    ctx->pc = 0x204D1Cu;
    // 0x204d1c: 0x8e850040  lw          $a1, 0x40($s4)
    ctx->pc = 0x204d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x204d20: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x204d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204d24: 0xc04c518  jal         func_131460
    ctx->pc = 0x204D24u;
    SET_GPR_U32(ctx, 31, 0x204D2Cu);
    ctx->pc = 0x204D28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204D24u;
            // 0x204d28: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131460u;
    if (runtime->hasFunction(0x131460u)) {
        auto targetFn = runtime->lookupFunction(0x131460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204D2Cu; }
        if (ctx->pc != 0x204D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131460_0x131460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204D2Cu; }
        if (ctx->pc != 0x204D2Cu) { return; }
    }
    ctx->pc = 0x204D2Cu;
    // 0x204d2c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x204D2Cu;
    {
        const bool branch_taken_0x204d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204D2Cu;
            // 0x204d30: 0x8fa30098  lw          $v1, 0x98($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204d2c) {
            ctx->pc = 0x204D48u;
            goto label_204d48;
        }
    }
    ctx->pc = 0x204D34u;
label_204d34:
    // 0x204d34: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x204d34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x204d38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x204d38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x204d3c: 0xc07ce6a  jal         func_1F39A8
    ctx->pc = 0x204D3Cu;
    SET_GPR_U32(ctx, 31, 0x204D44u);
    ctx->pc = 0x204D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204D3Cu;
            // 0x204d40: 0x24443330  addiu       $a0, $v0, 0x3330 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 13104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F39A8u;
    if (runtime->hasFunction(0x1F39A8u)) {
        auto targetFn = runtime->lookupFunction(0x1F39A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204D44u; }
        if (ctx->pc != 0x204D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F39A8_0x1f39a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204D44u; }
        if (ctx->pc != 0x204D44u) { return; }
    }
    ctx->pc = 0x204D44u;
label_204d44:
    // 0x204d44: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x204d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_204d48:
    // 0x204d48: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x204D48u;
    {
        const bool branch_taken_0x204d48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x204D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204D48u;
            // 0x204d4c: 0x8fa20094  lw          $v0, 0x94($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204d48) {
            ctx->pc = 0x204D64u;
            goto label_204d64;
        }
    }
    ctx->pc = 0x204D50u;
    // 0x204d50: 0xc04c9da  jal         func_132768
    ctx->pc = 0x204D50u;
    SET_GPR_U32(ctx, 31, 0x204D58u);
    ctx->pc = 0x204D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204D50u;
            // 0x204d54: 0x8e840040  lw          $a0, 0x40($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132768u;
    if (runtime->hasFunction(0x132768u)) {
        auto targetFn = runtime->lookupFunction(0x132768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204D58u; }
        if (ctx->pc != 0x204D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132768_0x132768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204D58u; }
        if (ctx->pc != 0x204D58u) { return; }
    }
    ctx->pc = 0x204D58u;
    // 0x204d58: 0xae800040  sw          $zero, 0x40($s4)
    ctx->pc = 0x204d58u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 64), GPR_U32(ctx, 0));
    // 0x204d5c: 0x0  nop
    ctx->pc = 0x204d5cu;
    // NOP
label_204d60:
    // 0x204d60: 0x8fa20094  lw          $v0, 0x94($sp)
    ctx->pc = 0x204d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_204d64:
    // 0x204d64: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x204D64u;
    {
        const bool branch_taken_0x204d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204D64u;
            // 0x204d68: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204d64) {
            ctx->pc = 0x204D88u;
            goto label_204d88;
        }
    }
    ctx->pc = 0x204D6Cu;
    // 0x204d6c: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x204d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x204d70: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x204d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x204d74: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x204d74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x204d78: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x204d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x204d7c: 0x40f809  jalr        $v0
    ctx->pc = 0x204D7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x204D84u);
        ctx->pc = 0x204D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204D7Cu;
            // 0x204d80: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x204D84u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2049C0u: goto label_2049c0;
            case 0x204A10u: goto label_204a10;
            case 0x204A30u: goto label_204a30;
            case 0x204A4Cu: goto label_204a4c;
            case 0x204A64u: goto label_204a64;
            case 0x204A80u: goto label_204a80;
            case 0x204B30u: goto label_204b30;
            case 0x204B80u: goto label_204b80;
            case 0x204C40u: goto label_204c40;
            case 0x204C5Cu: goto label_204c5c;
            case 0x204CD8u: goto label_204cd8;
            case 0x204CDCu: goto label_204cdc;
            case 0x204CE4u: goto label_204ce4;
            case 0x204D34u: goto label_204d34;
            case 0x204D44u: goto label_204d44;
            case 0x204D48u: goto label_204d48;
            case 0x204D60u: goto label_204d60;
            case 0x204D64u: goto label_204d64;
            case 0x204D88u: goto label_204d88;
            case 0x204D8Cu: goto label_204d8c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x204D84u; }
            if (ctx->pc != 0x204D84u) { return; }
        }
        }
    }
    ctx->pc = 0x204D84u;
    // 0x204d84: 0x0  nop
    ctx->pc = 0x204d84u;
    // NOP
label_204d88:
    // 0x204d88: 0x7bb00150  lq          $s0, 0x150($sp)
    ctx->pc = 0x204d88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 336)));
label_204d8c:
    // 0x204d8c: 0x7bb10140  lq          $s1, 0x140($sp)
    ctx->pc = 0x204d8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x204d90: 0x7bb20130  lq          $s2, 0x130($sp)
    ctx->pc = 0x204d90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x204d94: 0x7bb30120  lq          $s3, 0x120($sp)
    ctx->pc = 0x204d94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x204d98: 0x7bb40110  lq          $s4, 0x110($sp)
    ctx->pc = 0x204d98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x204d9c: 0x7bb50100  lq          $s5, 0x100($sp)
    ctx->pc = 0x204d9cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x204da0: 0x7bb600f0  lq          $s6, 0xF0($sp)
    ctx->pc = 0x204da0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x204da4: 0x7bb700e0  lq          $s7, 0xE0($sp)
    ctx->pc = 0x204da4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x204da8: 0x7bbe00d0  lq          $fp, 0xD0($sp)
    ctx->pc = 0x204da8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x204dac: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x204dacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x204db0: 0xc7b40160  lwc1        $f20, 0x160($sp)
    ctx->pc = 0x204db0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x204db4: 0x3e00008  jr          $ra
    ctx->pc = 0x204DB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204DB4u;
            // 0x204db8: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2049C0u: goto label_2049c0;
            case 0x204A10u: goto label_204a10;
            case 0x204A30u: goto label_204a30;
            case 0x204A4Cu: goto label_204a4c;
            case 0x204A64u: goto label_204a64;
            case 0x204A80u: goto label_204a80;
            case 0x204B30u: goto label_204b30;
            case 0x204B80u: goto label_204b80;
            case 0x204C40u: goto label_204c40;
            case 0x204C5Cu: goto label_204c5c;
            case 0x204CD8u: goto label_204cd8;
            case 0x204CDCu: goto label_204cdc;
            case 0x204CE4u: goto label_204ce4;
            case 0x204D34u: goto label_204d34;
            case 0x204D44u: goto label_204d44;
            case 0x204D48u: goto label_204d48;
            case 0x204D60u: goto label_204d60;
            case 0x204D64u: goto label_204d64;
            case 0x204D88u: goto label_204d88;
            case 0x204D8Cu: goto label_204d8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x204DBCu;
    // 0x204dbc: 0x0  nop
    ctx->pc = 0x204dbcu;
    // NOP
}
