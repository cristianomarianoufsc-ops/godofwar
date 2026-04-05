#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028F038
// Address: 0x28f038 - 0x28f140
void sub_0028F038_0x28f038(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F038_0x28f038");
#endif

    ctx->pc = 0x28f038u;

    // 0x28f038: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x28f038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x28f03c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28f03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f040: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x28f040u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x28f044: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x28f044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x28f048: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x28f048u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f04c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x28f04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x28f050: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x28f050u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f054: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x28f054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x28f058: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x28f058u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f05c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x28f05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x28f060: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x28f060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x28f064: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x28f064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x28f068: 0x14e2000d  bne         $a3, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x28F068u;
    {
        const bool branch_taken_0x28f068 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x28F06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F068u;
            // 0x28f06c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f068) {
            ctx->pc = 0x28F0A0u;
            goto label_28f0a0;
        }
    }
    ctx->pc = 0x28F070u;
    // 0x28f070: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x28f070u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x28f074: 0x3c110032  lui         $s1, 0x32
    ctx->pc = 0x28f074u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)50 << 16));
    // 0x28f078: 0x26316ac0  addiu       $s1, $s1, 0x6AC0
    ctx->pc = 0x28f078u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 27328));
    // 0x28f07c: 0x8e064630  lw          $a2, 0x4630($s0)
    ctx->pc = 0x28f07cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17968)));
    // 0x28f080: 0xc0a507a  jal         func_2941E8
    ctx->pc = 0x28F080u;
    SET_GPR_U32(ctx, 31, 0x28F088u);
    ctx->pc = 0x28F084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F080u;
            // 0x28f084: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2941E8u;
    if (runtime->hasFunction(0x2941E8u)) {
        auto targetFn = runtime->lookupFunction(0x2941E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F088u; }
        if (ctx->pc != 0x28F088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002941E8_0x2941e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F088u; }
        if (ctx->pc != 0x28F088u) { return; }
    }
    ctx->pc = 0x28F088u;
    // 0x28f088: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x28f088u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x28f08c: 0xae004630  sw          $zero, 0x4630($s0)
    ctx->pc = 0x28f08cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 17968), GPR_U32(ctx, 0));
    // 0x28f090: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x28F090u;
    {
        const bool branch_taken_0x28f090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F090u;
            // 0x28f094: 0xac714634  sw          $s1, 0x4634($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 17972), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f090) {
            ctx->pc = 0x28F118u;
            goto label_28f118;
        }
    }
    ctx->pc = 0x28F098u;
label_28f098:
    // 0x28f098: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x28F098u;
    {
        const bool branch_taken_0x28f098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F09Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F098u;
            // 0x28f09c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f098) {
            ctx->pc = 0x28F118u;
            goto label_28f118;
        }
    }
    ctx->pc = 0x28F0A0u;
label_28f0a0:
    // 0x28f0a0: 0x1260001c  beqz        $s3, . + 4 + (0x1C << 2)
    ctx->pc = 0x28F0A0u;
    {
        const bool branch_taken_0x28f0a0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F0A0u;
            // 0x28f0a4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f0a0) {
            ctx->pc = 0x28F114u;
            goto label_28f114;
        }
    }
    ctx->pc = 0x28F0A8u;
    // 0x28f0a8: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x28f0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x28f0ac: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x28f0acu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x28f0b0: 0x24556ac0  addiu       $s5, $v0, 0x6AC0
    ctx->pc = 0x28f0b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 27328));
    // 0x28f0b4: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x28f0b4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x28f0b8: 0x2d01821  addu        $v1, $s6, $s0
    ctx->pc = 0x28f0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
    // 0x28f0bc: 0x0  nop
    ctx->pc = 0x28f0bcu;
    // NOP
label_28f0c0:
    // 0x28f0c0: 0x8e244634  lw          $a0, 0x4634($s1)
    ctx->pc = 0x28f0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 17972)));
    // 0x28f0c4: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x28f0c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28f0c8: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x28f0c8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x28f0cc: 0x8e424630  lw          $v0, 0x4630($s2)
    ctx->pc = 0x28f0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 17968)));
    // 0x28f0d0: 0x8e234634  lw          $v1, 0x4634($s1)
    ctx->pc = 0x28f0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 17972)));
    // 0x28f0d4: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x28f0d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28f0d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28f0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28f0dc: 0xae464630  sw          $a2, 0x4630($s2)
    ctx->pc = 0x28f0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 17968), GPR_U32(ctx, 6));
    // 0x28f0e0: 0x28c20080  slti        $v0, $a2, 0x80
    ctx->pc = 0x28f0e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x28f0e4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28F0E4u;
    {
        const bool branch_taken_0x28f0e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F0E4u;
            // 0x28f0e8: 0xae234634  sw          $v1, 0x4634($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 17972), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f0e4) {
            ctx->pc = 0x28F104u;
            goto label_28f104;
        }
    }
    ctx->pc = 0x28F0ECu;
    // 0x28f0ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28f0ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f0f0: 0xc0a507a  jal         func_2941E8
    ctx->pc = 0x28F0F0u;
    SET_GPR_U32(ctx, 31, 0x28F0F8u);
    ctx->pc = 0x28F0F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F0F0u;
            // 0x28f0f4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2941E8u;
    if (runtime->hasFunction(0x2941E8u)) {
        auto targetFn = runtime->lookupFunction(0x2941E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F0F8u; }
        if (ctx->pc != 0x28F0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002941E8_0x2941e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F0F8u; }
        if (ctx->pc != 0x28F0F8u) { return; }
    }
    ctx->pc = 0x28F0F8u;
    // 0x28f0f8: 0xae354634  sw          $s5, 0x4634($s1)
    ctx->pc = 0x28f0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 17972), GPR_U32(ctx, 21));
    // 0x28f0fc: 0x1040ffe6  beqz        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x28F0FCu;
    {
        const bool branch_taken_0x28f0fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F0FCu;
            // 0x28f100: 0xae404630  sw          $zero, 0x4630($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 17968), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f0fc) {
            ctx->pc = 0x28F098u;
            runtime->cooperativeGuestYield();
            goto label_28f098;
        }
    }
    ctx->pc = 0x28F104u;
label_28f104:
    // 0x28f104: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28f104u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x28f108: 0x213102b  sltu        $v0, $s0, $s3
    ctx->pc = 0x28f108u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x28f10c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x28F10Cu;
    {
        const bool branch_taken_0x28f10c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F10Cu;
            // 0x28f110: 0x2d01821  addu        $v1, $s6, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f10c) {
            ctx->pc = 0x28F0C0u;
            runtime->cooperativeGuestYield();
            goto label_28f0c0;
        }
    }
    ctx->pc = 0x28F114u;
label_28f114:
    // 0x28f114: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28f114u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28f118:
    // 0x28f118: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x28f118u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28f11c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x28f11cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28f120: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x28f120u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28f124: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x28f124u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28f128: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x28f128u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28f12c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x28f12cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28f130: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x28f130u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28f134: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28f134u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28f138: 0x3e00008  jr          $ra
    ctx->pc = 0x28F138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28F13Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F138u;
            // 0x28f13c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28F098u: goto label_28f098;
            case 0x28F0A0u: goto label_28f0a0;
            case 0x28F0C0u: goto label_28f0c0;
            case 0x28F104u: goto label_28f104;
            case 0x28F114u: goto label_28f114;
            case 0x28F118u: goto label_28f118;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28F140u;
}
