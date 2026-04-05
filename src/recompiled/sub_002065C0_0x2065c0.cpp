#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002065C0
// Address: 0x2065c0 - 0x206810
void sub_002065C0_0x2065c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002065C0_0x2065c0");
#endif

    ctx->pc = 0x2065c0u;

    // 0x2065c0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2065c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2065c4: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x2065c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x2065c8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2065c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2065cc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2065ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2065d0: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x2065d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x2065d4: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2065d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2065d8: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x2065d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x2065dc: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x2065dcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2065e0: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x2065e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x2065e4: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x2065e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x2065e8: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x2065e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x2065ec: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2065ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2065f0: 0xc05e9c0  jal         func_17A700
    ctx->pc = 0x2065F0u;
    SET_GPR_U32(ctx, 31, 0x2065F8u);
    ctx->pc = 0x2065F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2065F0u;
            // 0x2065f4: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A700u;
    if (runtime->hasFunction(0x17A700u)) {
        auto targetFn = runtime->lookupFunction(0x17A700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2065F8u; }
        if (ctx->pc != 0x2065F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A700_0x17a700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2065F8u; }
        if (ctx->pc != 0x2065F8u) { return; }
    }
    ctx->pc = 0x2065F8u;
    // 0x2065f8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2065f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2065fc: 0x1240007a  beqz        $s2, . + 4 + (0x7A << 2)
    ctx->pc = 0x2065FCu;
    {
        const bool branch_taken_0x2065fc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x206600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2065FCu;
            // 0x206600: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2065fc) {
            ctx->pc = 0x2067E8u;
            goto label_2067e8;
        }
    }
    ctx->pc = 0x206604u;
    // 0x206604: 0x8e630048  lw          $v1, 0x48($s3)
    ctx->pc = 0x206604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x206608: 0x2451e848  addiu       $s1, $v0, -0x17B8
    ctx->pc = 0x206608u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x20660c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x20660cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x206610: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x206610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x206614: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x206614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x206618: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x206618u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x20661c: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x20661cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x206620: 0x40f809  jalr        $v0
    ctx->pc = 0x206620u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x206628u);
        ctx->pc = 0x206624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206620u;
            // 0x206624: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x206628u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x206678u: goto label_206678;
            case 0x2066A8u: goto label_2066a8;
            case 0x206708u: goto label_206708;
            case 0x206728u: goto label_206728;
            case 0x206740u: goto label_206740;
            case 0x206744u: goto label_206744;
            case 0x206754u: goto label_206754;
            case 0x206758u: goto label_206758;
            case 0x2067B8u: goto label_2067b8;
            case 0x2067E8u: goto label_2067e8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x206628u; }
            if (ctx->pc != 0x206628u) { return; }
        }
        }
    }
    ctx->pc = 0x206628u;
    // 0x206628: 0x8c500088  lw          $s0, 0x88($v0)
    ctx->pc = 0x206628u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x20662c: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x20662cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x206630: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x206630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x206634: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x206634u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x206638: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x206638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x20663c: 0x40f809  jalr        $v0
    ctx->pc = 0x20663Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x206644u);
        ctx->pc = 0x206640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20663Cu;
            // 0x206640: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x206644u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x206678u: goto label_206678;
            case 0x2066A8u: goto label_2066a8;
            case 0x206708u: goto label_206708;
            case 0x206728u: goto label_206728;
            case 0x206740u: goto label_206740;
            case 0x206744u: goto label_206744;
            case 0x206754u: goto label_206754;
            case 0x206758u: goto label_206758;
            case 0x2067B8u: goto label_2067b8;
            case 0x2067E8u: goto label_2067e8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x206644u; }
            if (ctx->pc != 0x206644u) { return; }
        }
        }
    }
    ctx->pc = 0x206644u;
    // 0x206644: 0x501026  xor         $v0, $v0, $s0
    ctx->pc = 0x206644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 16));
    // 0x206648: 0x2a02b  sltu        $s4, $zero, $v0
    ctx->pc = 0x206648u;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x20664c: 0x1280000a  beqz        $s4, . + 4 + (0xA << 2)
    ctx->pc = 0x20664Cu;
    {
        const bool branch_taken_0x20664c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x206650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20664Cu;
            // 0x206650: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20664c) {
            ctx->pc = 0x206678u;
            goto label_206678;
        }
    }
    ctx->pc = 0x206654u;
    // 0x206654: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x206654u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x206658: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x206658u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20665c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x20665cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x206660: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x206660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x206664: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x206664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x206668: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x206668u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x20666c: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x20666cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x206670: 0x40f809  jalr        $v0
    ctx->pc = 0x206670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x206678u);
        ctx->pc = 0x206674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206670u;
            // 0x206674: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x206678u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x206678u: goto label_206678;
            case 0x2066A8u: goto label_2066a8;
            case 0x206708u: goto label_206708;
            case 0x206728u: goto label_206728;
            case 0x206740u: goto label_206740;
            case 0x206744u: goto label_206744;
            case 0x206754u: goto label_206754;
            case 0x206758u: goto label_206758;
            case 0x2067B8u: goto label_2067b8;
            case 0x2067E8u: goto label_2067e8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x206678u; }
            if (ctx->pc != 0x206678u) { return; }
        }
        }
    }
    ctx->pc = 0x206678u;
label_206678:
    // 0x206678: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x206678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x20667c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x20667cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x206680: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x206680u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x206684: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x206684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206688: 0xa7a30008  sh          $v1, 0x8($sp)
    ctx->pc = 0x206688u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x20668c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20668cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206690: 0xafb2001c  sw          $s2, 0x1C($sp)
    ctx->pc = 0x206690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 18));
    // 0x206694: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x206694u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x206698: 0xa7a0000a  sh          $zero, 0xA($sp)
    ctx->pc = 0x206698u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x20669c: 0xa7a00022  sh          $zero, 0x22($sp)
    ctx->pc = 0x20669cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x2066a0: 0xa7a00020  sh          $zero, 0x20($sp)
    ctx->pc = 0x2066a0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x2066a4: 0x0  nop
    ctx->pc = 0x2066a4u;
    // NOP
label_2066a8:
    // 0x2066a8: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2066a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2066ac: 0x2483000c  addiu       $v1, $a0, 0xC
    ctx->pc = 0x2066acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x2066b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2066b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2066b4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2066b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2066b8: 0x2ca20004  sltiu       $v0, $a1, 0x4
    ctx->pc = 0x2066b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2066bc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2066BCu;
    {
        const bool branch_taken_0x2066bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2066C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2066BCu;
            // 0x2066c0: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2066bc) {
            ctx->pc = 0x2066A8u;
            runtime->cooperativeGuestYield();
            goto label_2066a8;
        }
    }
    ctx->pc = 0x2066C4u;
    // 0x2066c4: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x2066c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x2066c8: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x2066c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x2066cc: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x2066ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x2066d0: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x2066d0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x2066d4: 0x2602e848  addiu       $v0, $s0, -0x17B8
    ctx->pc = 0x2066d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
    // 0x2066d8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2066d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2066dc: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x2066dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2066e0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2066e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2066e4: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x2066e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x2066e8: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x2066e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2066ec: 0x40f809  jalr        $v0
    ctx->pc = 0x2066ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2066F4u);
        ctx->pc = 0x2066F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2066ECu;
            // 0x2066f0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2066F4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x206678u: goto label_206678;
            case 0x2066A8u: goto label_2066a8;
            case 0x206708u: goto label_206708;
            case 0x206728u: goto label_206728;
            case 0x206740u: goto label_206740;
            case 0x206744u: goto label_206744;
            case 0x206754u: goto label_206754;
            case 0x206758u: goto label_206758;
            case 0x2067B8u: goto label_2067b8;
            case 0x2067E8u: goto label_2067e8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2066F4u; }
            if (ctx->pc != 0x2066F4u) { return; }
        }
        }
    }
    ctx->pc = 0x2066F4u;
    // 0x2066f4: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x2066f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x2066f8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2066F8u;
    {
        const bool branch_taken_0x2066f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2066FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2066F8u;
            // 0x2066fc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2066f8) {
            ctx->pc = 0x206708u;
            goto label_206708;
        }
    }
    ctx->pc = 0x206700u;
    // 0x206700: 0xc04f5b0  jal         func_13D6C0
    ctx->pc = 0x206700u;
    SET_GPR_U32(ctx, 31, 0x206708u);
    ctx->pc = 0x13D6C0u;
    if (runtime->hasFunction(0x13D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x13D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206708u; }
        if (ctx->pc != 0x206708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D6C0_0x13d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x206708u; }
        if (ctx->pc != 0x206708u) { return; }
    }
    ctx->pc = 0x206708u;
label_206708:
    // 0x206708: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x206708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x20670c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x20670cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x206710: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x206710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x206714: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x206714u;
    {
        const bool branch_taken_0x206714 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x206718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206714u;
            // 0x206718: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206714) {
            ctx->pc = 0x206754u;
            goto label_206754;
        }
    }
    ctx->pc = 0x20671Cu;
    // 0x20671c: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x20671cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x206720: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x206720u;
    {
        const bool branch_taken_0x206720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x206724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206720u;
            // 0x206724: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206720) {
            ctx->pc = 0x206744u;
            goto label_206744;
        }
    }
    ctx->pc = 0x206728u;
label_206728:
    // 0x206728: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x206728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x20672c: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x20672cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x206730: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x206730u;
    {
        const bool branch_taken_0x206730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x206730) {
            ctx->pc = 0x206734u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x206730u;
            // 0x206734: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x206740u;
            goto label_206740;
        }
    }
    ctx->pc = 0x206738u;
    // 0x206738: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x206738u;
    {
        const bool branch_taken_0x206738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20673Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206738u;
            // 0x20673c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206738) {
            ctx->pc = 0x206758u;
            goto label_206758;
        }
    }
    ctx->pc = 0x206740u;
label_206740:
    // 0x206740: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x206740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_206744:
    // 0x206744: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x206744u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x206748: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x206748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x20674c: 0x5443fff6  bnel        $v0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x20674Cu;
    {
        const bool branch_taken_0x20674c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x20674c) {
            ctx->pc = 0x206750u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20674Cu;
            // 0x206750: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x206728u;
            runtime->cooperativeGuestYield();
            goto label_206728;
        }
    }
    ctx->pc = 0x206754u;
label_206754:
    // 0x206754: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x206754u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_206758:
    // 0x206758: 0xae220060  sw          $v0, 0x60($s1)
    ctx->pc = 0x206758u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 2));
    // 0x20675c: 0xae350064  sw          $s5, 0x64($s1)
    ctx->pc = 0x20675cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 21));
    // 0x206760: 0xae360068  sw          $s6, 0x68($s1)
    ctx->pc = 0x206760u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 22));
    // 0x206764: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x206764u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x206768: 0x2610e848  addiu       $s0, $s0, -0x17B8
    ctx->pc = 0x206768u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
    // 0x20676c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20676cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x206770: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x206770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206774: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x206774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x206778: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x206778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20677c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x20677cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x206780: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x206780u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x206784: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x206784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x206788: 0x40f809  jalr        $v0
    ctx->pc = 0x206788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x206790u);
        ctx->pc = 0x20678Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206788u;
            // 0x20678c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x206790u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x206678u: goto label_206678;
            case 0x2066A8u: goto label_2066a8;
            case 0x206708u: goto label_206708;
            case 0x206728u: goto label_206728;
            case 0x206740u: goto label_206740;
            case 0x206744u: goto label_206744;
            case 0x206754u: goto label_206754;
            case 0x206758u: goto label_206758;
            case 0x2067B8u: goto label_2067b8;
            case 0x2067E8u: goto label_2067e8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x206790u; }
            if (ctx->pc != 0x206790u) { return; }
        }
        }
    }
    ctx->pc = 0x206790u;
    // 0x206790: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x206790u;
    {
        const bool branch_taken_0x206790 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x206794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206790u;
            // 0x206794: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206790) {
            ctx->pc = 0x2067B8u;
            goto label_2067b8;
        }
    }
    ctx->pc = 0x206798u;
    // 0x206798: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x206798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x20679c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x20679cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2067a0: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x2067a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x2067a4: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x2067a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x2067a8: 0x40f809  jalr        $v0
    ctx->pc = 0x2067A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2067B0u);
        ctx->pc = 0x2067ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2067A8u;
            // 0x2067ac: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2067B0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x206678u: goto label_206678;
            case 0x2066A8u: goto label_2066a8;
            case 0x206708u: goto label_206708;
            case 0x206728u: goto label_206728;
            case 0x206740u: goto label_206740;
            case 0x206744u: goto label_206744;
            case 0x206754u: goto label_206754;
            case 0x206758u: goto label_206758;
            case 0x2067B8u: goto label_2067b8;
            case 0x2067E8u: goto label_2067e8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2067B0u; }
            if (ctx->pc != 0x2067B0u) { return; }
        }
        }
    }
    ctx->pc = 0x2067B0u;
    // 0x2067b0: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2067b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x2067b4: 0x0  nop
    ctx->pc = 0x2067b4u;
    // NOP
label_2067b8:
    // 0x2067b8: 0x26700088  addiu       $s0, $s3, 0x88
    ctx->pc = 0x2067b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 136));
    // 0x2067bc: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x2067BCu;
    SET_GPR_U32(ctx, 31, 0x2067C4u);
    ctx->pc = 0x2067C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2067BCu;
            // 0x2067c0: 0x8c447910  lw          $a0, 0x7910($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2067C4u; }
        if (ctx->pc != 0x2067C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2067C4u; }
        if (ctx->pc != 0x2067C4u) { return; }
    }
    ctx->pc = 0x2067C4u;
    // 0x2067c4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2067c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x2067c8: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2067c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2067cc: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x2067ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
    // 0x2067d0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2067d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2067d4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2067d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2067d8: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x2067d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x2067dc: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x2067dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x2067e0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2067e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x2067e4: 0x0  nop
    ctx->pc = 0x2067e4u;
    // NOP
label_2067e8:
    // 0x2067e8: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x2067e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2067ec: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x2067ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2067f0: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x2067f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2067f4: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x2067f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2067f8: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x2067f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2067fc: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2067fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x206800: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x206800u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x206804: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x206804u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x206808: 0x3e00008  jr          $ra
    ctx->pc = 0x206808u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20680Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x206808u;
            // 0x20680c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x206678u: goto label_206678;
            case 0x2066A8u: goto label_2066a8;
            case 0x206708u: goto label_206708;
            case 0x206728u: goto label_206728;
            case 0x206740u: goto label_206740;
            case 0x206744u: goto label_206744;
            case 0x206754u: goto label_206754;
            case 0x206758u: goto label_206758;
            case 0x2067B8u: goto label_2067b8;
            case 0x2067E8u: goto label_2067e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x206810u;
}
