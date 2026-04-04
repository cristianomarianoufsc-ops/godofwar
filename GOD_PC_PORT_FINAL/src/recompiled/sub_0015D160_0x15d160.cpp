#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015D160
// Address: 0x15d160 - 0x15d5b0
void sub_0015D160_0x15d160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015D160_0x15d160");
#endif

    ctx->pc = 0x15d160u;

    // 0x15d160: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x15d160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x15d164: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x15d164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x15d168: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x15d168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x15d16c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x15d16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x15d170: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x15d170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x15d174: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x15d174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x15d178: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15d178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15d17c: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x15d17cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x15d180: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x15d180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x15d184: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15d184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15d188: 0xc0543e0  jal         func_150F80
    ctx->pc = 0x15D188u;
    SET_GPR_U32(ctx, 31, 0x15D190u);
    ctx->pc = 0x15D18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D188u;
            // 0x15d18c: 0x80a82d  daddu       $s5, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x150F80u;
    if (runtime->hasFunction(0x150F80u)) {
        auto targetFn = runtime->lookupFunction(0x150F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D190u; }
        if (ctx->pc != 0x15D190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00150F80_0x150f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D190u; }
        if (ctx->pc != 0x15D190u) { return; }
    }
    ctx->pc = 0x15D190u;
    // 0x15d190: 0x96a20004  lhu         $v0, 0x4($s5)
    ctx->pc = 0x15d190u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x15d194: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x15d194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x15d198: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x15d198u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x15d19c: 0x2463cdc0  addiu       $v1, $v1, -0x3240
    ctx->pc = 0x15d19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954432));
    // 0x15d1a0: 0x8c84c820  lw          $a0, -0x37E0($a0)
    ctx->pc = 0x15d1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294952992)));
    // 0x15d1a4: 0x3042ffdf  andi        $v0, $v0, 0xFFDF
    ctx->pc = 0x15d1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65503);
    // 0x15d1a8: 0xaea30020  sw          $v1, 0x20($s5)
    ctx->pc = 0x15d1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 32), GPR_U32(ctx, 3));
    // 0x15d1ac: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15D1ACu;
    {
        const bool branch_taken_0x15d1ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D1B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D1ACu;
            // 0x15d1b0: 0xa6a20004  sh          $v0, 0x4($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d1ac) {
            ctx->pc = 0x15D1BCu;
            goto label_15d1bc;
        }
    }
    ctx->pc = 0x15D1B4u;
    // 0x15d1b4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x15D1B4u;
    {
        const bool branch_taken_0x15d1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D1B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D1B4u;
            // 0x15d1b8: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d1b4) {
            ctx->pc = 0x15D1E0u;
            goto label_15d1e0;
        }
    }
    ctx->pc = 0x15D1BCu;
label_15d1bc:
    // 0x15d1bc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x15d1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x15d1c0: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x15d1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x15d1c4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x15d1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x15d1c8: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x15d1c8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x15d1cc: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x15d1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x15d1d0: 0x40f809  jalr        $v0
    ctx->pc = 0x15D1D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15D1D8u);
        ctx->pc = 0x15D1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D1D0u;
            // 0x15d1d4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15D1D8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D1BCu: goto label_15d1bc;
            case 0x15D1E0u: goto label_15d1e0;
            case 0x15D1E4u: goto label_15d1e4;
            case 0x15D1F8u: goto label_15d1f8;
            case 0x15D20Cu: goto label_15d20c;
            case 0x15D240u: goto label_15d240;
            case 0x15D274u: goto label_15d274;
            case 0x15D2A0u: goto label_15d2a0;
            case 0x15D3F8u: goto label_15d3f8;
            case 0x15D460u: goto label_15d460;
            case 0x15D488u: goto label_15d488;
            case 0x15D4C8u: goto label_15d4c8;
            case 0x15D4E0u: goto label_15d4e0;
            case 0x15D4F4u: goto label_15d4f4;
            case 0x15D5A0u: goto label_15d5a0;
            case 0x15D5A4u: goto label_15d5a4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15D1D8u; }
            if (ctx->pc != 0x15D1D8u) { return; }
        }
        }
    }
    ctx->pc = 0x15D1D8u;
    // 0x15d1d8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x15d1d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d1dc: 0x0  nop
    ctx->pc = 0x15d1dcu;
    // NOP
label_15d1e0:
    // 0x15d1e0: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x15d1e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_15d1e4:
    // 0x15d1e4: 0x8c620184  lw          $v0, 0x184($v1)
    ctx->pc = 0x15d1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 388)));
    // 0x15d1e8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x15D1E8u;
    {
        const bool branch_taken_0x15d1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15d1e8) {
            ctx->pc = 0x15D1ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15D1E8u;
            // 0x15d1ec: 0x24020013  addiu       $v0, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15D20Cu;
            goto label_15d20c;
        }
    }
    ctx->pc = 0x15D1F0u;
    // 0x15d1f0: 0x1000fffc  b           . + 4 + (-0x4 << 2)
    ctx->pc = 0x15D1F0u;
    {
        const bool branch_taken_0x15d1f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D1F0u;
            // 0x15d1f4: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d1f0) {
            ctx->pc = 0x15D1E4u;
            runtime->cooperativeGuestYield();
            goto label_15d1e4;
        }
    }
    ctx->pc = 0x15D1F8u;
label_15d1f8:
    // 0x15d1f8: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x15d1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x15d1fc: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x15d1fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d200: 0x8c760008  lw          $s6, 0x8($v1)
    ctx->pc = 0x15d200u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x15d204: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x15D204u;
    {
        const bool branch_taken_0x15d204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D204u;
            // 0x15d208: 0x8c570004  lw          $s7, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d204) {
            ctx->pc = 0x15D274u;
            goto label_15d274;
        }
    }
    ctx->pc = 0x15D20Cu;
label_15d20c:
    // 0x15d20c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15d20cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15d210: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x15d210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15d214: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x15d214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x15d218: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x15D218u;
    {
        const bool branch_taken_0x15d218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d218) {
            ctx->pc = 0x15D21Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15D218u;
            // 0x15d21c: 0x8e630044  lw          $v1, 0x44($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15D2A0u;
            goto label_15d2a0;
        }
    }
    ctx->pc = 0x15D220u;
    // 0x15d220: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x15d220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x15d224: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x15D224u;
    SET_GPR_U32(ctx, 31, 0x15D22Cu);
    ctx->pc = 0x15D228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D224u;
            // 0x15d228: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D22Cu; }
        if (ctx->pc != 0x15D22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D22Cu; }
        if (ctx->pc != 0x15D22Cu) { return; }
    }
    ctx->pc = 0x15D22Cu;
    // 0x15d22c: 0x24160004  addiu       $s6, $zero, 0x4
    ctx->pc = 0x15d22cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15d230: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x15d230u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d234: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x15d234u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d238: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x15d238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x15d23c: 0x0  nop
    ctx->pc = 0x15d23cu;
    // NOP
label_15d240:
    // 0x15d240: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x15d240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x15d244: 0x2428018  mult        $s0, $s2, $v0
    ctx->pc = 0x15d244u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x15d248: 0x2471c0a0  addiu       $s1, $v1, -0x3F60
    ctx->pc = 0x15d248u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951072));
    // 0x15d24c: 0x8e650034  lw          $a1, 0x34($s3)
    ctx->pc = 0x15d24cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x15d250: 0x24a50034  addiu       $a1, $a1, 0x34
    ctx->pc = 0x15d250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 52));
    // 0x15d254: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x15d254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x15d258: 0xc0a349c  jal         func_28D270
    ctx->pc = 0x15D258u;
    SET_GPR_U32(ctx, 31, 0x15D260u);
    ctx->pc = 0x15D25Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D258u;
            // 0x15d25c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D270u;
    if (runtime->hasFunction(0x28D270u)) {
        auto targetFn = runtime->lookupFunction(0x28D270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D260u; }
        if (ctx->pc != 0x15D260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D270_0x28d270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D260u; }
        if (ctx->pc != 0x15D260u) { return; }
    }
    ctx->pc = 0x15D260u;
    // 0x15d260: 0x1040ffe5  beqz        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x15D260u;
    {
        const bool branch_taken_0x15d260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D260u;
            // 0x15d264: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d260) {
            ctx->pc = 0x15D1F8u;
            runtime->cooperativeGuestYield();
            goto label_15d1f8;
        }
    }
    ctx->pc = 0x15D268u;
    // 0x15d268: 0x2e420002  sltiu       $v0, $s2, 0x2
    ctx->pc = 0x15d268u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x15d26c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x15D26Cu;
    {
        const bool branch_taken_0x15d26c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D26Cu;
            // 0x15d270: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d26c) {
            ctx->pc = 0x15D240u;
            runtime->cooperativeGuestYield();
            goto label_15d240;
        }
    }
    ctx->pc = 0x15D274u;
label_15d274:
    // 0x15d274: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x15d274u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d278: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x15d278u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d27c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15d27cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d280: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x15d280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x15d284: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x15d284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x15d288: 0xc061e1a  jal         func_187868
    ctx->pc = 0x15D288u;
    SET_GPR_U32(ctx, 31, 0x15D290u);
    ctx->pc = 0x15D28Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D288u;
            // 0x15d28c: 0x24090040  addiu       $t1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187868u;
    if (runtime->hasFunction(0x187868u)) {
        auto targetFn = runtime->lookupFunction(0x187868u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D290u; }
        if (ctx->pc != 0x15D290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187868_0x187868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D290u; }
        if (ctx->pc != 0x15D290u) { return; }
    }
    ctx->pc = 0x15D290u;
    // 0x15d290: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x15d290u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
    // 0x15d294: 0xae740044  sw          $s4, 0x44($s3)
    ctx->pc = 0x15d294u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 68), GPR_U32(ctx, 20));
    // 0x15d298: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x15d298u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x15d29c: 0x8e630044  lw          $v1, 0x44($s3)
    ctx->pc = 0x15d29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
label_15d2a0:
    // 0x15d2a0: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x15d2a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d2a4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x15d2a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15d2a8: 0xaea30050  sw          $v1, 0x50($s5)
    ctx->pc = 0x15d2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 80), GPR_U32(ctx, 3));
    // 0x15d2ac: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x15d2acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15d2b0: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x15d2b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15d2b4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x15d2b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15d2b8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15d2b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15d2bc: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x15d2bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15d2c0: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x15d2c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15d2c4: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x15d2c4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d2c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15d2c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d2cc: 0x3e00008  jr          $ra
    ctx->pc = 0x15D2CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D2D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D2CCu;
            // 0x15d2d0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D1BCu: goto label_15d1bc;
            case 0x15D1E0u: goto label_15d1e0;
            case 0x15D1E4u: goto label_15d1e4;
            case 0x15D1F8u: goto label_15d1f8;
            case 0x15D20Cu: goto label_15d20c;
            case 0x15D240u: goto label_15d240;
            case 0x15D274u: goto label_15d274;
            case 0x15D2A0u: goto label_15d2a0;
            case 0x15D3F8u: goto label_15d3f8;
            case 0x15D460u: goto label_15d460;
            case 0x15D488u: goto label_15d488;
            case 0x15D4C8u: goto label_15d4c8;
            case 0x15D4E0u: goto label_15d4e0;
            case 0x15D4F4u: goto label_15d4f4;
            case 0x15D5A0u: goto label_15d5a0;
            case 0x15D5A4u: goto label_15d5a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15D2D4u;
    // 0x15d2d4: 0x0  nop
    ctx->pc = 0x15d2d4u;
    // NOP
    // 0x15d2d8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15d2d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15d2dc: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x15d2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x15d2e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15d2e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15d2e4: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x15d2e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d2e8: 0x2442cdc0  addiu       $v0, $v0, -0x3240
    ctx->pc = 0x15d2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954432));
    // 0x15d2ec: 0xc08ec5c  jal         func_23B170
    ctx->pc = 0x15D2ECu;
    SET_GPR_U32(ctx, 31, 0x15D2F4u);
    ctx->pc = 0x15D2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D2ECu;
            // 0x15d2f0: 0xac620020  sw          $v0, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B170u;
    if (runtime->hasFunction(0x23B170u)) {
        auto targetFn = runtime->lookupFunction(0x23B170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D2F4u; }
        if (ctx->pc != 0x15D2F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023B170_0x23b170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D2F4u; }
        if (ctx->pc != 0x15D2F4u) { return; }
    }
    ctx->pc = 0x15D2F4u;
    // 0x15d2f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15d2f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d2f8: 0x3e00008  jr          $ra
    ctx->pc = 0x15D2F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D2FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D2F8u;
            // 0x15d2fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D1BCu: goto label_15d1bc;
            case 0x15D1E0u: goto label_15d1e0;
            case 0x15D1E4u: goto label_15d1e4;
            case 0x15D1F8u: goto label_15d1f8;
            case 0x15D20Cu: goto label_15d20c;
            case 0x15D240u: goto label_15d240;
            case 0x15D274u: goto label_15d274;
            case 0x15D2A0u: goto label_15d2a0;
            case 0x15D3F8u: goto label_15d3f8;
            case 0x15D460u: goto label_15d460;
            case 0x15D488u: goto label_15d488;
            case 0x15D4C8u: goto label_15d4c8;
            case 0x15D4E0u: goto label_15d4e0;
            case 0x15D4F4u: goto label_15d4f4;
            case 0x15D5A0u: goto label_15d5a0;
            case 0x15D5A4u: goto label_15d5a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15D300u;
    // 0x15d300: 0x3e00008  jr          $ra
    ctx->pc = 0x15D300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D300u;
            // 0x15d304: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D1BCu: goto label_15d1bc;
            case 0x15D1E0u: goto label_15d1e0;
            case 0x15D1E4u: goto label_15d1e4;
            case 0x15D1F8u: goto label_15d1f8;
            case 0x15D20Cu: goto label_15d20c;
            case 0x15D240u: goto label_15d240;
            case 0x15D274u: goto label_15d274;
            case 0x15D2A0u: goto label_15d2a0;
            case 0x15D3F8u: goto label_15d3f8;
            case 0x15D460u: goto label_15d460;
            case 0x15D488u: goto label_15d488;
            case 0x15D4C8u: goto label_15d4c8;
            case 0x15D4E0u: goto label_15d4e0;
            case 0x15D4F4u: goto label_15d4f4;
            case 0x15D5A0u: goto label_15d5a0;
            case 0x15D5A4u: goto label_15d5a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15D308u;
    // 0x15d308: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x15d308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x15d30c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x15d30cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x15d310: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x15d310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x15d314: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x15d314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x15d318: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x15d318u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d31c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15d31cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15d320: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x15d320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x15d324: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x15d324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x15d328: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x15D328u;
    {
        const bool branch_taken_0x15d328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D328u;
            // 0x15d32c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d328) {
            ctx->pc = 0x15D460u;
            goto label_15d460;
        }
    }
    ctx->pc = 0x15D330u;
    // 0x15d330: 0x8e420074  lw          $v0, 0x74($s2)
    ctx->pc = 0x15d330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x15d334: 0x14400030  bnez        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x15D334u;
    {
        const bool branch_taken_0x15d334 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D334u;
            // 0x15d338: 0x3c110033  lui         $s1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d334) {
            ctx->pc = 0x15D3F8u;
            goto label_15d3f8;
        }
    }
    ctx->pc = 0x15D33Cu;
    // 0x15d33c: 0x8e450070  lw          $a1, 0x70($s2)
    ctx->pc = 0x15d33cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
    // 0x15d340: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x15d340u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15d344: 0x2631e848  addiu       $s1, $s1, -0x17B8
    ctx->pc = 0x15d344u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961224));
    // 0x15d348: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15d348u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15d34c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x15d34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x15d350: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15d350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15d354: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x15d354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x15d358: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x15d358u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x15d35c: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x15d35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x15d360: 0x40f809  jalr        $v0
    ctx->pc = 0x15D360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15D368u);
        ctx->pc = 0x15D364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D360u;
            // 0x15d364: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15D368u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D1BCu: goto label_15d1bc;
            case 0x15D1E0u: goto label_15d1e0;
            case 0x15D1E4u: goto label_15d1e4;
            case 0x15D1F8u: goto label_15d1f8;
            case 0x15D20Cu: goto label_15d20c;
            case 0x15D240u: goto label_15d240;
            case 0x15D274u: goto label_15d274;
            case 0x15D2A0u: goto label_15d2a0;
            case 0x15D3F8u: goto label_15d3f8;
            case 0x15D460u: goto label_15d460;
            case 0x15D488u: goto label_15d488;
            case 0x15D4C8u: goto label_15d4c8;
            case 0x15D4E0u: goto label_15d4e0;
            case 0x15D4F4u: goto label_15d4f4;
            case 0x15D5A0u: goto label_15d5a0;
            case 0x15D5A4u: goto label_15d5a4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15D368u; }
            if (ctx->pc != 0x15D368u) { return; }
        }
        }
    }
    ctx->pc = 0x15D368u;
    // 0x15d368: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x15d368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x15d36c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x15d36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x15d370: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x15d370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x15d374: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x15d374u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15d378: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x15d378u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x15d37c: 0xae440054  sw          $a0, 0x54($s2)
    ctx->pc = 0x15d37cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 4));
    // 0x15d380: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x15d380u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x15d384: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x15d384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x15d388: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15d388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d38c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x15d38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x15d390: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x15d390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x15d394: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x15d394u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x15d398: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x15d398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x15d39c: 0x40f809  jalr        $v0
    ctx->pc = 0x15D39Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15D3A4u);
        ctx->pc = 0x15D3A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D39Cu;
            // 0x15d3a0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15D3A4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D1BCu: goto label_15d1bc;
            case 0x15D1E0u: goto label_15d1e0;
            case 0x15D1E4u: goto label_15d1e4;
            case 0x15D1F8u: goto label_15d1f8;
            case 0x15D20Cu: goto label_15d20c;
            case 0x15D240u: goto label_15d240;
            case 0x15D274u: goto label_15d274;
            case 0x15D2A0u: goto label_15d2a0;
            case 0x15D3F8u: goto label_15d3f8;
            case 0x15D460u: goto label_15d460;
            case 0x15D488u: goto label_15d488;
            case 0x15D4C8u: goto label_15d4c8;
            case 0x15D4E0u: goto label_15d4e0;
            case 0x15D4F4u: goto label_15d4f4;
            case 0x15D5A0u: goto label_15d5a0;
            case 0x15D5A4u: goto label_15d5a4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15D3A4u; }
            if (ctx->pc != 0x15D3A4u) { return; }
        }
        }
    }
    ctx->pc = 0x15D3A4u;
    // 0x15d3a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15d3a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d3a8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x15d3a8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15d3ac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15d3acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15d3b0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x15d3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x15d3b4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15d3b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d3b8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x15d3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15d3bc: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x15d3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x15d3c0: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x15d3c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x15d3c4: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x15d3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x15d3c8: 0x40f809  jalr        $v0
    ctx->pc = 0x15D3C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15D3D0u);
        ctx->pc = 0x15D3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D3C8u;
            // 0x15d3cc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15D3D0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D1BCu: goto label_15d1bc;
            case 0x15D1E0u: goto label_15d1e0;
            case 0x15D1E4u: goto label_15d1e4;
            case 0x15D1F8u: goto label_15d1f8;
            case 0x15D20Cu: goto label_15d20c;
            case 0x15D240u: goto label_15d240;
            case 0x15D274u: goto label_15d274;
            case 0x15D2A0u: goto label_15d2a0;
            case 0x15D3F8u: goto label_15d3f8;
            case 0x15D460u: goto label_15d460;
            case 0x15D488u: goto label_15d488;
            case 0x15D4C8u: goto label_15d4c8;
            case 0x15D4E0u: goto label_15d4e0;
            case 0x15D4F4u: goto label_15d4f4;
            case 0x15D5A0u: goto label_15d5a0;
            case 0x15D5A4u: goto label_15d5a4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15D3D0u; }
            if (ctx->pc != 0x15D3D0u) { return; }
        }
        }
    }
    ctx->pc = 0x15D3D0u;
    // 0x15d3d0: 0x8e420054  lw          $v0, 0x54($s2)
    ctx->pc = 0x15d3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x15d3d4: 0xae500074  sw          $s0, 0x74($s2)
    ctx->pc = 0x15d3d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 116), GPR_U32(ctx, 16));
    // 0x15d3d8: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x15d3d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x15d3dc: 0xae420054  sw          $v0, 0x54($s2)
    ctx->pc = 0x15d3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 2));
    // 0x15d3e0: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x15d3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x15d3e4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x15d3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x15d3e8: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x15d3e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x15d3ec: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x15d3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x15d3f0: 0x40f809  jalr        $v0
    ctx->pc = 0x15D3F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x15D3F8u);
        ctx->pc = 0x15D3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D3F0u;
            // 0x15d3f4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x15D3F8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D1BCu: goto label_15d1bc;
            case 0x15D1E0u: goto label_15d1e0;
            case 0x15D1E4u: goto label_15d1e4;
            case 0x15D1F8u: goto label_15d1f8;
            case 0x15D20Cu: goto label_15d20c;
            case 0x15D240u: goto label_15d240;
            case 0x15D274u: goto label_15d274;
            case 0x15D2A0u: goto label_15d2a0;
            case 0x15D3F8u: goto label_15d3f8;
            case 0x15D460u: goto label_15d460;
            case 0x15D488u: goto label_15d488;
            case 0x15D4C8u: goto label_15d4c8;
            case 0x15D4E0u: goto label_15d4e0;
            case 0x15D4F4u: goto label_15d4f4;
            case 0x15D5A0u: goto label_15d5a0;
            case 0x15D5A4u: goto label_15d5a4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x15D3F8u; }
            if (ctx->pc != 0x15D3F8u) { return; }
        }
        }
    }
    ctx->pc = 0x15D3F8u;
label_15d3f8:
    // 0x15d3f8: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x15D3F8u;
    SET_GPR_U32(ctx, 31, 0x15D400u);
    ctx->pc = 0x15D3FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D3F8u;
            // 0x15d3fc: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D400u; }
        if (ctx->pc != 0x15D400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D400u; }
        if (ctx->pc != 0x15D400u) { return; }
    }
    ctx->pc = 0x15D400u;
    // 0x15d400: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x15d400u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x15d404: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x15d404u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d408: 0x3c05dead  lui         $a1, 0xDEAD
    ctx->pc = 0x15d408u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)57005 << 16));
    // 0x15d40c: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x15d40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x15d410: 0x61402  srl         $v0, $a2, 16
    ctx->pc = 0x15d410u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x15d414: 0x34a5beef  ori         $a1, $a1, 0xBEEF
    ctx->pc = 0x15d414u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)48879);
    // 0x15d418: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x15d418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x15d41c: 0x8e510074  lw          $s1, 0x74($s2)
    ctx->pc = 0x15d41cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 116)));
    // 0x15d420: 0xa6030004  sh          $v1, 0x4($s0)
    ctx->pc = 0x15d420u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 3));
    // 0x15d424: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x15d424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x15d428: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x15d428u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x15d42c: 0xa6060000  sh          $a2, 0x0($s0)
    ctx->pc = 0x15d42cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x15d430: 0xae050010  sw          $a1, 0x10($s0)
    ctx->pc = 0x15d430u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 5));
    // 0x15d434: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x15d434u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x15d438: 0xc08e43e  jal         func_2390F8
    ctx->pc = 0x15D438u;
    SET_GPR_U32(ctx, 31, 0x15D440u);
    ctx->pc = 0x15D43Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D438u;
            // 0x15d43c: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2390F8u;
    if (runtime->hasFunction(0x2390F8u)) {
        auto targetFn = runtime->lookupFunction(0x2390F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D440u; }
        if (ctx->pc != 0x15D440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2390f8_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D440u; }
        if (ctx->pc != 0x15D440u) { return; }
    }
    ctx->pc = 0x15D440u;
    // 0x15d440: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15d440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15d444: 0xae12001c  sw          $s2, 0x1C($s0)
    ctx->pc = 0x15d444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 18));
    // 0x15d448: 0xae110020  sw          $s1, 0x20($s0)
    ctx->pc = 0x15d448u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 17));
    // 0x15d44c: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x15d44cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x15d450: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x15d450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x15d454: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x15D454u;
    {
        const bool branch_taken_0x15d454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D454u;
            // 0x15d458: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d454) {
            ctx->pc = 0x15D488u;
            goto label_15d488;
        }
    }
    ctx->pc = 0x15D45Cu;
    // 0x15d45c: 0x0  nop
    ctx->pc = 0x15d45cu;
    // NOP
label_15d460:
    // 0x15d460: 0xc04f824  jal         func_13E090
    ctx->pc = 0x15D460u;
    SET_GPR_U32(ctx, 31, 0x15D468u);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D468u; }
        if (ctx->pc != 0x15D468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D468u; }
        if (ctx->pc != 0x15D468u) { return; }
    }
    ctx->pc = 0x15D468u;
    // 0x15d468: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15d468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d46c: 0x24050190  addiu       $a1, $zero, 0x190
    ctx->pc = 0x15d46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
    // 0x15d470: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x15D470u;
    SET_GPR_U32(ctx, 31, 0x15D478u);
    ctx->pc = 0x15D474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D470u;
            // 0x15d474: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D478u; }
        if (ctx->pc != 0x15D478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D478u; }
        if (ctx->pc != 0x15D478u) { return; }
    }
    ctx->pc = 0x15D478u;
    // 0x15d478: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15d478u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d47c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x15d47cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d480: 0xc056e0c  jal         func_15B830
    ctx->pc = 0x15D480u;
    SET_GPR_U32(ctx, 31, 0x15D488u);
    ctx->pc = 0x15D484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D480u;
            // 0x15d484: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B830u;
    if (runtime->hasFunction(0x15B830u)) {
        auto targetFn = runtime->lookupFunction(0x15B830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D488u; }
        if (ctx->pc != 0x15D488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015B830_0x15b830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D488u; }
        if (ctx->pc != 0x15D488u) { return; }
    }
    ctx->pc = 0x15D488u;
label_15d488:
    // 0x15d488: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x15d488u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15d48c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x15d48cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15d490: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x15d490u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d494: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15d494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d498: 0x3e00008  jr          $ra
    ctx->pc = 0x15D498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D498u;
            // 0x15d49c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D1BCu: goto label_15d1bc;
            case 0x15D1E0u: goto label_15d1e0;
            case 0x15D1E4u: goto label_15d1e4;
            case 0x15D1F8u: goto label_15d1f8;
            case 0x15D20Cu: goto label_15d20c;
            case 0x15D240u: goto label_15d240;
            case 0x15D274u: goto label_15d274;
            case 0x15D2A0u: goto label_15d2a0;
            case 0x15D3F8u: goto label_15d3f8;
            case 0x15D460u: goto label_15d460;
            case 0x15D488u: goto label_15d488;
            case 0x15D4C8u: goto label_15d4c8;
            case 0x15D4E0u: goto label_15d4e0;
            case 0x15D4F4u: goto label_15d4f4;
            case 0x15D5A0u: goto label_15d5a0;
            case 0x15D5A4u: goto label_15d5a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15D4A0u;
    // 0x15d4a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15d4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15d4a4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x15d4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d4a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15d4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15d4ac: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x15d4acu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x15d4b0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x15D4B0u;
    {
        const bool branch_taken_0x15d4b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15d4b0) {
            ctx->pc = 0x15D4E0u;
            goto label_15d4e0;
        }
    }
    ctx->pc = 0x15D4B8u;
    // 0x15d4b8: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x15d4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x15d4bc: 0x8c620074  lw          $v0, 0x74($v1)
    ctx->pc = 0x15d4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 116)));
    // 0x15d4c0: 0x50440001  beql        $v0, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x15D4C0u;
    {
        const bool branch_taken_0x15d4c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x15d4c0) {
            ctx->pc = 0x15D4C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15D4C0u;
            // 0x15d4c4: 0xac600074  sw          $zero, 0x74($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 116), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15D4C8u;
            goto label_15d4c8;
        }
    }
    ctx->pc = 0x15D4C8u;
label_15d4c8:
    // 0x15d4c8: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x15D4C8u;
    {
        const bool branch_taken_0x15d4c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D4CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D4C8u;
            // 0x15d4cc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d4c8) {
            ctx->pc = 0x15D4F4u;
            goto label_15d4f4;
        }
    }
    ctx->pc = 0x15D4D0u;
    // 0x15d4d0: 0xc056ede  jal         func_15BB78
    ctx->pc = 0x15D4D0u;
    SET_GPR_U32(ctx, 31, 0x15D4D8u);
    ctx->pc = 0x15D4D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D4D0u;
            // 0x15d4d4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15BB78u;
    if (runtime->hasFunction(0x15BB78u)) {
        auto targetFn = runtime->lookupFunction(0x15BB78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D4D8u; }
        if (ctx->pc != 0x15D4D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015BB78_0x15bb78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D4D8u; }
        if (ctx->pc != 0x15D4D8u) { return; }
    }
    ctx->pc = 0x15D4D8u;
    // 0x15d4d8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x15D4D8u;
    {
        const bool branch_taken_0x15d4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D4D8u;
            // 0x15d4dc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d4d8) {
            ctx->pc = 0x15D4F4u;
            goto label_15d4f4;
        }
    }
    ctx->pc = 0x15D4E0u;
label_15d4e0:
    // 0x15d4e0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15D4E0u;
    {
        const bool branch_taken_0x15d4e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D4E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D4E0u;
            // 0x15d4e4: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d4e0) {
            ctx->pc = 0x15D4F4u;
            goto label_15d4f4;
        }
    }
    ctx->pc = 0x15D4E8u;
    // 0x15d4e8: 0xc08fb06  jal         func_23EC18
    ctx->pc = 0x15D4E8u;
    SET_GPR_U32(ctx, 31, 0x15D4F0u);
    ctx->pc = 0x15D4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D4E8u;
            // 0x15d4ec: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23EC18u;
    if (runtime->hasFunction(0x23EC18u)) {
        auto targetFn = runtime->lookupFunction(0x23EC18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D4F0u; }
        if (ctx->pc != 0x15D4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23ec18_0x23ec60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D4F0u; }
        if (ctx->pc != 0x15D4F0u) { return; }
    }
    ctx->pc = 0x15D4F0u;
    // 0x15d4f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15d4f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15d4f4:
    // 0x15d4f4: 0x3e00008  jr          $ra
    ctx->pc = 0x15D4F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D4F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D4F4u;
            // 0x15d4f8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D1BCu: goto label_15d1bc;
            case 0x15D1E0u: goto label_15d1e0;
            case 0x15D1E4u: goto label_15d1e4;
            case 0x15D1F8u: goto label_15d1f8;
            case 0x15D20Cu: goto label_15d20c;
            case 0x15D240u: goto label_15d240;
            case 0x15D274u: goto label_15d274;
            case 0x15D2A0u: goto label_15d2a0;
            case 0x15D3F8u: goto label_15d3f8;
            case 0x15D460u: goto label_15d460;
            case 0x15D488u: goto label_15d488;
            case 0x15D4C8u: goto label_15d4c8;
            case 0x15D4E0u: goto label_15d4e0;
            case 0x15D4F4u: goto label_15d4f4;
            case 0x15D5A0u: goto label_15d5a0;
            case 0x15D5A4u: goto label_15d5a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15D4FCu;
    // 0x15d4fc: 0x0  nop
    ctx->pc = 0x15d4fcu;
    // NOP
    // 0x15d500: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15d500u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15d504: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x15d504u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x15d508: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15d508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15d50c: 0xc04f824  jal         func_13E090
    ctx->pc = 0x15D50Cu;
    SET_GPR_U32(ctx, 31, 0x15D514u);
    ctx->pc = 0x15D510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D50Cu;
            // 0x15d510: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D514u; }
        if (ctx->pc != 0x15D514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D514u; }
        if (ctx->pc != 0x15D514u) { return; }
    }
    ctx->pc = 0x15D514u;
    // 0x15d514: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x15d514u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x15d518: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x15d518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d51c: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x15D51Cu;
    SET_GPR_U32(ctx, 31, 0x15D524u);
    ctx->pc = 0x15D520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D51Cu;
            // 0x15d520: 0x24050078  addiu       $a1, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D524u; }
        if (ctx->pc != 0x15D524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D524u; }
        if (ctx->pc != 0x15D524u) { return; }
    }
    ctx->pc = 0x15D524u;
    // 0x15d524: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15d524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d528: 0xc056b30  jal         func_15ACC0
    ctx->pc = 0x15D528u;
    SET_GPR_U32(ctx, 31, 0x15D530u);
    ctx->pc = 0x15D52Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D528u;
            // 0x15d52c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ACC0u;
    if (runtime->hasFunction(0x15ACC0u)) {
        auto targetFn = runtime->lookupFunction(0x15ACC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D530u; }
        if (ctx->pc != 0x15D530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015ACC0_0x15acc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D530u; }
        if (ctx->pc != 0x15D530u) { return; }
    }
    ctx->pc = 0x15D530u;
    // 0x15d530: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x15d530u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15d534: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15d534u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d538: 0x3e00008  jr          $ra
    ctx->pc = 0x15D538u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D538u;
            // 0x15d53c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D1BCu: goto label_15d1bc;
            case 0x15D1E0u: goto label_15d1e0;
            case 0x15D1E4u: goto label_15d1e4;
            case 0x15D1F8u: goto label_15d1f8;
            case 0x15D20Cu: goto label_15d20c;
            case 0x15D240u: goto label_15d240;
            case 0x15D274u: goto label_15d274;
            case 0x15D2A0u: goto label_15d2a0;
            case 0x15D3F8u: goto label_15d3f8;
            case 0x15D460u: goto label_15d460;
            case 0x15D488u: goto label_15d488;
            case 0x15D4C8u: goto label_15d4c8;
            case 0x15D4E0u: goto label_15d4e0;
            case 0x15D4F4u: goto label_15d4f4;
            case 0x15D5A0u: goto label_15d5a0;
            case 0x15D5A4u: goto label_15d5a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15D540u;
    // 0x15d540: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15d540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15d544: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15d544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15d548: 0xc056d14  jal         func_15B450
    ctx->pc = 0x15D548u;
    SET_GPR_U32(ctx, 31, 0x15D550u);
    ctx->pc = 0x15D54Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15D548u;
            // 0x15d54c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B450u;
    if (runtime->hasFunction(0x15B450u)) {
        auto targetFn = runtime->lookupFunction(0x15B450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D550u; }
        if (ctx->pc != 0x15D550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_15b450_0x15b588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D550u; }
        if (ctx->pc != 0x15D550u) { return; }
    }
    ctx->pc = 0x15D550u;
    // 0x15d550: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15d550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15d554: 0x3e00008  jr          $ra
    ctx->pc = 0x15D554u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D554u;
            // 0x15d558: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D1BCu: goto label_15d1bc;
            case 0x15D1E0u: goto label_15d1e0;
            case 0x15D1E4u: goto label_15d1e4;
            case 0x15D1F8u: goto label_15d1f8;
            case 0x15D20Cu: goto label_15d20c;
            case 0x15D240u: goto label_15d240;
            case 0x15D274u: goto label_15d274;
            case 0x15D2A0u: goto label_15d2a0;
            case 0x15D3F8u: goto label_15d3f8;
            case 0x15D460u: goto label_15d460;
            case 0x15D488u: goto label_15d488;
            case 0x15D4C8u: goto label_15d4c8;
            case 0x15D4E0u: goto label_15d4e0;
            case 0x15D4F4u: goto label_15d4f4;
            case 0x15D5A0u: goto label_15d5a0;
            case 0x15D5A4u: goto label_15d5a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15D55Cu;
    // 0x15d55c: 0x0  nop
    ctx->pc = 0x15d55cu;
    // NOP
    // 0x15d560: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x15d560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x15d564: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x15d564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15d568: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15d568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15d56c: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x15d56cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x15d570: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x15D570u;
    {
        const bool branch_taken_0x15d570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15D574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D570u;
            // 0x15d574: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d570) {
            ctx->pc = 0x15D5A0u;
            goto label_15d5a0;
        }
    }
    ctx->pc = 0x15D578u;
    // 0x15d578: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x15d578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x15d57c: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x15d57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x15d580: 0x21303  sra         $v0, $v0, 12
    ctx->pc = 0x15d580u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 12));
    // 0x15d584: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x15d584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x15d588: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15d588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x15d58c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x15D58Cu;
    {
        const bool branch_taken_0x15d58c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15D590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D58Cu;
            // 0x15d590: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15d58c) {
            ctx->pc = 0x15D5A4u;
            goto label_15d5a4;
        }
    }
    ctx->pc = 0x15D594u;
    // 0x15d594: 0xc056eae  jal         func_15BAB8
    ctx->pc = 0x15D594u;
    SET_GPR_U32(ctx, 31, 0x15D59Cu);
    ctx->pc = 0x15BAB8u;
    if (runtime->hasFunction(0x15BAB8u)) {
        auto targetFn = runtime->lookupFunction(0x15BAB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D59Cu; }
        if (ctx->pc != 0x15D59Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015BAB8_0x15bab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15D59Cu; }
        if (ctx->pc != 0x15D59Cu) { return; }
    }
    ctx->pc = 0x15D59Cu;
    // 0x15d59c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15d59cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_15d5a0:
    // 0x15d5a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15d5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15d5a4:
    // 0x15d5a4: 0x3e00008  jr          $ra
    ctx->pc = 0x15D5A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15D5A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15D5A4u;
            // 0x15d5a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15D1BCu: goto label_15d1bc;
            case 0x15D1E0u: goto label_15d1e0;
            case 0x15D1E4u: goto label_15d1e4;
            case 0x15D1F8u: goto label_15d1f8;
            case 0x15D20Cu: goto label_15d20c;
            case 0x15D240u: goto label_15d240;
            case 0x15D274u: goto label_15d274;
            case 0x15D2A0u: goto label_15d2a0;
            case 0x15D3F8u: goto label_15d3f8;
            case 0x15D460u: goto label_15d460;
            case 0x15D488u: goto label_15d488;
            case 0x15D4C8u: goto label_15d4c8;
            case 0x15D4E0u: goto label_15d4e0;
            case 0x15D4F4u: goto label_15d4f4;
            case 0x15D5A0u: goto label_15d5a0;
            case 0x15D5A4u: goto label_15d5a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15D5ACu;
    // 0x15d5ac: 0x0  nop
    ctx->pc = 0x15d5acu;
    // NOP
}
