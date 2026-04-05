#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022E148
// Address: 0x22e148 - 0x22e260
void sub_0022E148_0x22e148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022E148_0x22e148");
#endif

    ctx->pc = 0x22e148u;

    // 0x22e148: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x22e148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x22e14c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x22e14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x22e150: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x22e150u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x22e154: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x22e154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x22e158: 0x8e221280  lw          $v0, 0x1280($s1)
    ctx->pc = 0x22e158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4736)));
    // 0x22e15c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22e15cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e160: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x22E160u;
    {
        const bool branch_taken_0x22e160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E160u;
            // 0x22e164: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e160) {
            ctx->pc = 0x22E1A0u;
            goto label_22e1a0;
        }
    }
    ctx->pc = 0x22E168u;
    // 0x22e168: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x22e168u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x22e16c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x22e16cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x22e170: 0x2063018  mult        $a2, $s0, $a2
    ctx->pc = 0x22e170u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x22e174: 0x24631278  addiu       $v1, $v1, 0x1278
    ctx->pc = 0x22e174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4728));
    // 0x22e178: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x22e178u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x22e17c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x22e17cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
    // 0x22e180: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22e180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22e184: 0x24a5c138  addiu       $a1, $a1, -0x3EC8
    ctx->pc = 0x22e184u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294951224));
    // 0x22e188: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x22e188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22e18c: 0xc09f130  jal         func_27C4C0
    ctx->pc = 0x22E18Cu;
    SET_GPR_U32(ctx, 31, 0x22E194u);
    ctx->pc = 0x22E190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E18Cu;
            // 0x22e190: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27C4C0u;
    if (runtime->hasFunction(0x27C4C0u)) {
        auto targetFn = runtime->lookupFunction(0x27C4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E194u; }
        if (ctx->pc != 0x22E194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027C4C0_0x27c4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E194u; }
        if (ctx->pc != 0x22E194u) { return; }
    }
    ctx->pc = 0x22E194u;
    // 0x22e194: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22e194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22e198: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x22E198u;
    {
        const bool branch_taken_0x22e198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E19Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E198u;
            // 0x22e19c: 0xae221280  sw          $v0, 0x1280($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4736), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e198) {
            ctx->pc = 0x22E248u;
            goto label_22e248;
        }
    }
    ctx->pc = 0x22E1A0u;
label_22e1a0:
    // 0x22e1a0: 0xc08b826  jal         func_22E098
    ctx->pc = 0x22E1A0u;
    SET_GPR_U32(ctx, 31, 0x22E1A8u);
    ctx->pc = 0x22E1A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E1A0u;
            // 0x22e1a4: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22E098u;
    if (runtime->hasFunction(0x22E098u)) {
        auto targetFn = runtime->lookupFunction(0x22E098u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E1A8u; }
        if (ctx->pc != 0x22E1A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022E098_0x22e098(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E1A8u; }
        if (ctx->pc != 0x22E1A8u) { return; }
    }
    ctx->pc = 0x22E1A8u;
    // 0x22e1a8: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x22E1A8u;
    {
        const bool branch_taken_0x22e1a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E1A8u;
            // 0x22e1ac: 0x3c06002a  lui         $a2, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e1a8) {
            ctx->pc = 0x22E248u;
            goto label_22e248;
        }
    }
    ctx->pc = 0x22E1B0u;
    // 0x22e1b0: 0x2403002f  addiu       $v1, $zero, 0x2F
    ctx->pc = 0x22e1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
    // 0x22e1b4: 0x8cc21284  lw          $v0, 0x1284($a2)
    ctx->pc = 0x22e1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4740)));
    // 0x22e1b8: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x22E1B8u;
    {
        const bool branch_taken_0x22e1b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22E1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E1B8u;
            // 0x22e1bc: 0x3c030036  lui         $v1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e1b8) {
            ctx->pc = 0x22E1E0u;
            goto label_22e1e0;
        }
    }
    ctx->pc = 0x22E1C0u;
    // 0x22e1c0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x22e1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x22e1c4: 0x8c6212d0  lw          $v0, 0x12D0($v1)
    ctx->pc = 0x22e1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4816)));
    // 0x22e1c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22e1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22e1cc: 0xac6212d0  sw          $v0, 0x12D0($v1)
    ctx->pc = 0x22e1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4816), GPR_U32(ctx, 2));
    // 0x22e1d0: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x22e1d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x22e1d4: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x22E1D4u;
    {
        const bool branch_taken_0x22e1d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E1D4u;
            // 0x22e1d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e1d4) {
            ctx->pc = 0x22E24Cu;
            goto label_22e24c;
        }
    }
    ctx->pc = 0x22E1DCu;
    // 0x22e1dc: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x22e1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
label_22e1e0:
    // 0x22e1e0: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x22e1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x22e1e4: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x22e1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x22e1e8: 0x2463bc68  addiu       $v1, $v1, -0x4398
    ctx->pc = 0x22e1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949992));
    // 0x22e1ec: 0x8cc71284  lw          $a3, 0x1284($a2)
    ctx->pc = 0x22e1ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4740)));
    // 0x22e1f0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x22e1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x22e1f4: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x22e1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x22e1f8: 0xac8012d0  sw          $zero, 0x12D0($a0)
    ctx->pc = 0x22e1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4816), GPR_U32(ctx, 0));
    // 0x22e1fc: 0x2442bc70  addiu       $v0, $v0, -0x4390
    ctx->pc = 0x22e1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950000));
    // 0x22e200: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x22e200u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x22e204: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x22e204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22e208: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x22E208u;
    {
        const bool branch_taken_0x22e208 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E20Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E208u;
            // 0x22e20c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e208) {
            ctx->pc = 0x22E224u;
            goto label_22e224;
        }
    }
    ctx->pc = 0x22E210u;
    // 0x22e210: 0x34029003  ori         $v0, $zero, 0x9003
    ctx->pc = 0x22e210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36867);
    // 0x22e214: 0x10e20003  beq         $a3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22E214u;
    {
        const bool branch_taken_0x22e214 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x22E218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E214u;
            // 0x22e218: 0x2402002f  addiu       $v0, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e214) {
            ctx->pc = 0x22E224u;
            goto label_22e224;
        }
    }
    ctx->pc = 0x22E21Cu;
    // 0x22e21c: 0x14e20004  bne         $a3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22E21Cu;
    {
        const bool branch_taken_0x22e21c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x22E220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E21Cu;
            // 0x22e220: 0x8cc31284  lw          $v1, 0x1284($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4740)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e21c) {
            ctx->pc = 0x22E230u;
            goto label_22e230;
        }
    }
    ctx->pc = 0x22E224u;
label_22e224:
    // 0x22e224: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x22e224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22e228: 0x8cc31284  lw          $v1, 0x1284($a2)
    ctx->pc = 0x22e228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4740)));
    // 0x22e22c: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x22e22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_22e230:
    // 0x22e230: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22E230u;
    {
        const bool branch_taken_0x22e230 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22E234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E230u;
            // 0x22e234: 0xaca40000  sw          $a0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e230) {
            ctx->pc = 0x22E240u;
            goto label_22e240;
        }
    }
    ctx->pc = 0x22E238u;
    // 0x22e238: 0x28620030  slti        $v0, $v1, 0x30
    ctx->pc = 0x22e238u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x22e23c: 0x0  nop
    ctx->pc = 0x22e23cu;
    // NOP
label_22e240:
    // 0x22e240: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22E240u;
    {
        const bool branch_taken_0x22e240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E240u;
            // 0x22e244: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e240) {
            ctx->pc = 0x22E24Cu;
            goto label_22e24c;
        }
    }
    ctx->pc = 0x22E248u;
label_22e248:
    // 0x22e248: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22e248u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e24c:
    // 0x22e24c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x22e24cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22e250: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x22e250u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22e254: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22e254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22e258: 0x3e00008  jr          $ra
    ctx->pc = 0x22E258u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E25Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E258u;
            // 0x22e25c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22E1A0u: goto label_22e1a0;
            case 0x22E1E0u: goto label_22e1e0;
            case 0x22E224u: goto label_22e224;
            case 0x22E230u: goto label_22e230;
            case 0x22E240u: goto label_22e240;
            case 0x22E248u: goto label_22e248;
            case 0x22E24Cu: goto label_22e24c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22E260u;
}
