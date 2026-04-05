#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022D1B8
// Address: 0x22d1b8 - 0x22d2f0
void sub_0022D1B8_0x22d1b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D1B8_0x22d1b8");
#endif

    ctx->pc = 0x22d1b8u;

    // 0x22d1b8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22d1b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x22d1bc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22d1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22d1c0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x22d1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x22d1c4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x22d1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x22d1c8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x22d1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x22d1cc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x22d1ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d1d0: 0x8c501270  lw          $s0, 0x1270($v0)
    ctx->pc = 0x22d1d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4720)));
    // 0x22d1d4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x22d1d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d1d8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x22d1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x22d1dc: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x22d1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x22d1e0: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x22D1E0u;
    {
        const bool branch_taken_0x22d1e0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D1E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D1E0u;
            // 0x22d1e4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d1e0) {
            ctx->pc = 0x22D220u;
            goto label_22d220;
        }
    }
    ctx->pc = 0x22D1E8u;
    // 0x22d1e8: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x22d1e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x22d1ec: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x22d1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x22d1f0: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x22d1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x22d1f4: 0x2038018  mult        $s0, $s0, $v1
    ctx->pc = 0x22d1f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x22d1f8: 0x2442b6c0  addiu       $v0, $v0, -0x4940
    ctx->pc = 0x22d1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948544));
    // 0x22d1fc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x22d1fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x22d200: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x22d200u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x22d204: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x22D204u;
    SET_GPR_U32(ctx, 31, 0x22D20Cu);
    ctx->pc = 0x22D208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D204u;
            // 0x22d208: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D20Cu; }
        if (ctx->pc != 0x22D20Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D20Cu; }
        if (ctx->pc != 0x22D20Cu) { return; }
    }
    ctx->pc = 0x22D20Cu;
    // 0x22d20c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x22d20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x22d210: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x22d210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x22d214: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x22D214u;
    {
        const bool branch_taken_0x22d214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D214u;
            // 0x22d218: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d214) {
            ctx->pc = 0x22D2CCu;
            goto label_22d2cc;
        }
    }
    ctx->pc = 0x22D21Cu;
    // 0x22d21c: 0x0  nop
    ctx->pc = 0x22d21cu;
    // NOP
label_22d220:
    // 0x22d220: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x22d220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x22d224: 0x8c621220  lw          $v0, 0x1220($v1)
    ctx->pc = 0x22d224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4640)));
    // 0x22d228: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x22d228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x22d22c: 0x12200027  beqz        $s1, . + 4 + (0x27 << 2)
    ctx->pc = 0x22D22Cu;
    {
        const bool branch_taken_0x22d22c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D22Cu;
            // 0x22d230: 0xac621220  sw          $v0, 0x1220($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4640), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d22c) {
            ctx->pc = 0x22D2CCu;
            goto label_22d2cc;
        }
    }
    ctx->pc = 0x22D234u;
    // 0x22d234: 0x3c14002a  lui         $s4, 0x2A
    ctx->pc = 0x22d234u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)42 << 16));
label_22d238:
    // 0x22d238: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x22d238u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x22d23c: 0x8e821210  lw          $v0, 0x1210($s4)
    ctx->pc = 0x22d23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4624)));
    // 0x22d240: 0x8e45120c  lw          $a1, 0x120C($s2)
    ctx->pc = 0x22d240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4620)));
    // 0x22d244: 0x458023  subu        $s0, $v0, $a1
    ctx->pc = 0x22d244u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x22d248: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x22d248u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x22d24c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22D24Cu;
    {
        const bool branch_taken_0x22d24c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D24Cu;
            // 0x22d250: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d24c) {
            ctx->pc = 0x22D274u;
            goto label_22d274;
        }
    }
    ctx->pc = 0x22D254u;
    // 0x22d254: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x22d254u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d258: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x22D258u;
    SET_GPR_U32(ctx, 31, 0x22D260u);
    ctx->pc = 0x22D25Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D258u;
            // 0x22d25c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D260u; }
        if (ctx->pc != 0x22D260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D260u; }
        if (ctx->pc != 0x22D260u) { return; }
    }
    ctx->pc = 0x22D260u;
    // 0x22d260: 0x8e42120c  lw          $v0, 0x120C($s2)
    ctx->pc = 0x22d260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4620)));
    // 0x22d264: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x22d264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x22d268: 0xae42120c  sw          $v0, 0x120C($s2)
    ctx->pc = 0x22d268u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4620), GPR_U32(ctx, 2));
    // 0x22d26c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x22D26Cu;
    {
        const bool branch_taken_0x22d26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D26Cu;
            // 0x22d270: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d26c) {
            ctx->pc = 0x22D2C4u;
            goto label_22d2c4;
        }
    }
    ctx->pc = 0x22D274u;
label_22d274:
    // 0x22d274: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x22D274u;
    SET_GPR_U32(ctx, 31, 0x22D27Cu);
    ctx->pc = 0x22D278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D274u;
            // 0x22d278: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D27Cu; }
        if (ctx->pc != 0x22D27Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D27Cu; }
        if (ctx->pc != 0x22D27Cu) { return; }
    }
    ctx->pc = 0x22D27Cu;
    // 0x22d27c: 0x2308823  subu        $s1, $s1, $s0
    ctx->pc = 0x22d27cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x22d280: 0x8e42120c  lw          $v0, 0x120C($s2)
    ctx->pc = 0x22d280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4620)));
    // 0x22d284: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x22d284u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x22d288: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x22d288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x22d28c: 0xc08b4bc  jal         func_22D2F0
    ctx->pc = 0x22D28Cu;
    SET_GPR_U32(ctx, 31, 0x22D294u);
    ctx->pc = 0x22D290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D28Cu;
            // 0x22d290: 0xae42120c  sw          $v0, 0x120C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4620), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D2F0u;
    if (runtime->hasFunction(0x22D2F0u)) {
        auto targetFn = runtime->lookupFunction(0x22D2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D294u; }
        if (ctx->pc != 0x22D294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D2F0_0x22d2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D294u; }
        if (ctx->pc != 0x22D294u) { return; }
    }
    ctx->pc = 0x22D294u;
    // 0x22d294: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22d294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d298: 0x91102a  slt         $v0, $a0, $s1
    ctx->pc = 0x22d298u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x22d29c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x22D29Cu;
    {
        const bool branch_taken_0x22d29c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D2A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D29Cu;
            // 0x22d2a0: 0x8e42120c  lw          $v0, 0x120C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d29c) {
            ctx->pc = 0x22D2C4u;
            goto label_22d2c4;
        }
    }
    ctx->pc = 0x22D2A4u;
    // 0x22d2a4: 0x8e831210  lw          $v1, 0x1210($s4)
    ctx->pc = 0x22d2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4624)));
    // 0x22d2a8: 0x24420800  addiu       $v0, $v0, 0x800
    ctx->pc = 0x22d2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2048));
    // 0x22d2ac: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x22d2acu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x22d2b0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x22D2B0u;
    {
        const bool branch_taken_0x22d2b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D2B0u;
            // 0x22d2b4: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d2b0) {
            ctx->pc = 0x22D2C4u;
            goto label_22d2c4;
        }
    }
    ctx->pc = 0x22D2B8u;
    // 0x22d2b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x22d2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x22d2bc: 0xac621228  sw          $v0, 0x1228($v1)
    ctx->pc = 0x22d2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4648), GPR_U32(ctx, 2));
    // 0x22d2c0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22d2c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22d2c4:
    // 0x22d2c4: 0x1620ffdc  bnez        $s1, . + 4 + (-0x24 << 2)
    ctx->pc = 0x22D2C4u;
    {
        const bool branch_taken_0x22d2c4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x22D2C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D2C4u;
            // 0x22d2c8: 0x3c14002a  lui         $s4, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d2c4) {
            ctx->pc = 0x22D238u;
            runtime->cooperativeGuestYield();
            goto label_22d238;
        }
    }
    ctx->pc = 0x22D2CCu;
label_22d2cc:
    // 0x22d2cc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x22d2ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22d2d0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x22d2d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22d2d4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x22d2d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22d2d8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x22d2d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22d2dc: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x22d2dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22d2e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22d2e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d2e4: 0x3e00008  jr          $ra
    ctx->pc = 0x22D2E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D2E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D2E4u;
            // 0x22d2e8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22D220u: goto label_22d220;
            case 0x22D238u: goto label_22d238;
            case 0x22D274u: goto label_22d274;
            case 0x22D2C4u: goto label_22d2c4;
            case 0x22D2CCu: goto label_22d2cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22D2ECu;
    // 0x22d2ec: 0x0  nop
    ctx->pc = 0x22d2ecu;
    // NOP
}
