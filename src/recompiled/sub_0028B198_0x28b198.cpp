#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028B198
// Address: 0x28b198 - 0x28b270
void sub_0028B198_0x28b198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B198_0x28b198");
#endif

    ctx->pc = 0x28b198u;

    // 0x28b198: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x28b198u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x28b19c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x28b19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x28b1a0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x28b1a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x28b1a4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x28b1a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b1a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28b1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x28b1ac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x28b1acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b1b0: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x28b1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x28b1b4: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x28b1b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b1b8: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x28b1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x28b1bc: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x28b1bcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b1c0: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x28b1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x28b1c4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x28b1c4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b1c8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x28b1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x28b1cc: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x28b1ccu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b1d0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x28b1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x28b1d4: 0x12400019  beqz        $s2, . + 4 + (0x19 << 2)
    ctx->pc = 0x28B1D4u;
    {
        const bool branch_taken_0x28b1d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B1D4u;
            // 0x28b1d8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b1d4) {
            ctx->pc = 0x28B23Cu;
            goto label_28b23c;
        }
    }
    ctx->pc = 0x28B1DCu;
    // 0x28b1dc: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x28B1DCu;
    {
        const bool branch_taken_0x28b1dc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B1DCu;
            // 0x28b1e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b1dc) {
            ctx->pc = 0x28B1F4u;
            goto label_28b1f4;
        }
    }
    ctx->pc = 0x28B1E4u;
    // 0x28b1e4: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x28B1E4u;
    {
        const bool branch_taken_0x28b1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B1E4u;
            // 0x28b1e8: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b1e4) {
            ctx->pc = 0x28B244u;
            goto label_28b244;
        }
    }
    ctx->pc = 0x28B1ECu;
label_28b1ec:
    // 0x28b1ec: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x28B1ECu;
    {
        const bool branch_taken_0x28b1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B1ECu;
            // 0x28b1f0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b1ec) {
            ctx->pc = 0x28B240u;
            goto label_28b240;
        }
    }
    ctx->pc = 0x28B1F4u;
label_28b1f4:
    // 0x28b1f4: 0x12400013  beqz        $s2, . + 4 + (0x13 << 2)
    ctx->pc = 0x28B1F4u;
    {
        const bool branch_taken_0x28b1f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B1F4u;
            // 0x28b1f8: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b1f4) {
            ctx->pc = 0x28B244u;
            goto label_28b244;
        }
    }
    ctx->pc = 0x28B1FCu;
    // 0x28b1fc: 0x2721021  addu        $v0, $s3, $s2
    ctx->pc = 0x28b1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
label_28b200:
    // 0x28b200: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x28b200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b204: 0x28042  srl         $s0, $v0, 1
    ctx->pc = 0x28b204u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x28b208: 0x2141018  mult        $v0, $s0, $s4
    ctx->pc = 0x28b208u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28b20c: 0x568821  addu        $s1, $v0, $s6
    ctx->pc = 0x28b20cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x28b210: 0x2a0f809  jalr        $s5
    ctx->pc = 0x28B210u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x28B218u);
        ctx->pc = 0x28B214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B210u;
            // 0x28b214: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28B218u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28B1ECu: goto label_28b1ec;
            case 0x28B1F4u: goto label_28b1f4;
            case 0x28B200u: goto label_28b200;
            case 0x28B228u: goto label_28b228;
            case 0x28B230u: goto label_28b230;
            case 0x28B23Cu: goto label_28b23c;
            case 0x28B240u: goto label_28b240;
            case 0x28B244u: goto label_28b244;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28B218u; }
            if (ctx->pc != 0x28B218u) { return; }
        }
        }
    }
    ctx->pc = 0x28B218u;
    // 0x28b218: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B218u;
    {
        const bool branch_taken_0x28b218 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x28b218) {
            ctx->pc = 0x28B228u;
            goto label_28b228;
        }
    }
    ctx->pc = 0x28B220u;
    // 0x28b220: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28B220u;
    {
        const bool branch_taken_0x28b220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B220u;
            // 0x28b224: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b220) {
            ctx->pc = 0x28B230u;
            goto label_28b230;
        }
    }
    ctx->pc = 0x28B228u;
label_28b228:
    // 0x28b228: 0x1840fff0  blez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x28B228u;
    {
        const bool branch_taken_0x28b228 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x28B22Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B228u;
            // 0x28b22c: 0x26130001  addiu       $s3, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b228) {
            ctx->pc = 0x28B1ECu;
            runtime->cooperativeGuestYield();
            goto label_28b1ec;
        }
    }
    ctx->pc = 0x28B230u;
label_28b230:
    // 0x28b230: 0x272102b  sltu        $v0, $s3, $s2
    ctx->pc = 0x28b230u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x28b234: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x28B234u;
    {
        const bool branch_taken_0x28b234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B234u;
            // 0x28b238: 0x2721021  addu        $v0, $s3, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b234) {
            ctx->pc = 0x28B200u;
            runtime->cooperativeGuestYield();
            goto label_28b200;
        }
    }
    ctx->pc = 0x28B23Cu;
label_28b23c:
    // 0x28b23c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x28b23cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28b240:
    // 0x28b240: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x28b240u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_28b244:
    // 0x28b244: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x28b244u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28b248: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x28b248u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28b24c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x28b24cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28b250: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28b250u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28b254: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x28b254u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28b258: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x28b258u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28b25c: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x28b25cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28b260: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28b260u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28b264: 0x3e00008  jr          $ra
    ctx->pc = 0x28B264u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B264u;
            // 0x28b268: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28B1ECu: goto label_28b1ec;
            case 0x28B1F4u: goto label_28b1f4;
            case 0x28B200u: goto label_28b200;
            case 0x28B228u: goto label_28b228;
            case 0x28B230u: goto label_28b230;
            case 0x28B23Cu: goto label_28b23c;
            case 0x28B240u: goto label_28b240;
            case 0x28B244u: goto label_28b244;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28B26Cu;
    // 0x28b26c: 0x0  nop
    ctx->pc = 0x28b26cu;
    // NOP
}
