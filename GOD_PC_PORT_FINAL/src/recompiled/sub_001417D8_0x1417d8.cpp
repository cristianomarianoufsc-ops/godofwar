#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001417D8
// Address: 0x1417d8 - 0x1418c8
void sub_001417D8_0x1417d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001417D8_0x1417d8");
#endif

    ctx->pc = 0x1417d8u;

    // 0x1417d8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1417d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1417dc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1417dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1417e0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1417e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1417e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1417e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1417e8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1417e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1417ec: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x1417ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1417f0: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1417f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1417f4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1417f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1417f8: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1417f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1417fc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1417fcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x141800: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x141800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x141804: 0xa2110146  sb          $s1, 0x146($s0)
    ctx->pc = 0x141804u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 326), (uint8_t)GPR_U32(ctx, 17));
    // 0x141808: 0x92020144  lbu         $v0, 0x144($s0)
    ctx->pc = 0x141808u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 324)));
    // 0x14180c: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x14180cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x141810: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x141810u;
    {
        const bool branch_taken_0x141810 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x141814u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141810u;
            // 0x141814: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x141810) {
            ctx->pc = 0x141828u;
            goto label_141828;
        }
    }
    ctx->pc = 0x141818u;
    // 0x141818: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x141818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14181c: 0xc0504fa  jal         func_1413E8
    ctx->pc = 0x14181Cu;
    SET_GPR_U32(ctx, 31, 0x141824u);
    ctx->pc = 0x141820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14181Cu;
            // 0x141820: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1413E8u;
    if (runtime->hasFunction(0x1413E8u)) {
        auto targetFn = runtime->lookupFunction(0x1413E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141824u; }
        if (ctx->pc != 0x141824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001413E8_0x1413e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x141824u; }
        if (ctx->pc != 0x141824u) { return; }
    }
    ctx->pc = 0x141824u;
    // 0x141824: 0x0  nop
    ctx->pc = 0x141824u;
    // NOP
label_141828:
    // 0x141828: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x141828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x14182c: 0x8e020140  lw          $v0, 0x140($s0)
    ctx->pc = 0x14182cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x141830: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x141830u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x141834: 0x132080  sll         $a0, $s3, 2
    ctx->pc = 0x141834u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x141838: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x141838u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x14183c: 0x143100  sll         $a2, $s4, 4
    ctx->pc = 0x14183cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x141840: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x141840u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x141844: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x141844u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x141848: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x141848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14184c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14184cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x141850: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x141850u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x141854: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x141854u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x141858: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x141858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x14185c: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x14185cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x141860: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x141860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x141864: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x141864u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x141868: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x141868u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14186c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14186cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x141870: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x141870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x141874: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x141874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x141878: 0x3e00008  jr          $ra
    ctx->pc = 0x141878u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14187Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x141878u;
            // 0x14187c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x141828u: goto label_141828;
            default: break;
        }
        return;
    }
    ctx->pc = 0x141880u;
    // 0x141880: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x141880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x141884: 0x0  nop
    ctx->pc = 0x141884u;
    // NOP
    // 0x141888: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x141888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x14188c: 0x0  nop
    ctx->pc = 0x14188cu;
    // NOP
    // 0x141890: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x141890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x141894: 0x0  nop
    ctx->pc = 0x141894u;
    // NOP
    // 0x141898: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x141898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x14189c: 0x0  nop
    ctx->pc = 0x14189cu;
    // NOP
    // 0x1418a0: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x1418a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1418a4: 0x0  nop
    ctx->pc = 0x1418a4u;
    // NOP
    // 0x1418a8: 0x38620001  xori        $v0, $v1, 0x1
    ctx->pc = 0x1418a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x1418ac: 0x0  nop
    ctx->pc = 0x1418acu;
    // NOP
    // 0x1418b0: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x1418b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1418b4: 0x0  nop
    ctx->pc = 0x1418b4u;
    // NOP
    // 0x1418b8: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x1418b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1418bc: 0x0  nop
    ctx->pc = 0x1418bcu;
    // NOP
    // 0x1418c0: 0x27bd0210  addiu       $sp, $sp, 0x210
    ctx->pc = 0x1418c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
    // 0x1418c4: 0x0  nop
    ctx->pc = 0x1418c4u;
    // NOP
}
