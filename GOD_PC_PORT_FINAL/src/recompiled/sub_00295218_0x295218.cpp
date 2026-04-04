#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00295218
// Address: 0x295218 - 0x2952c8
void sub_00295218_0x295218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295218_0x295218");
#endif

    ctx->pc = 0x295218u;

    // 0x295218: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x295218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x29521c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x29521cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x295220: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x295220u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x295224: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x295224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x295228: 0x8e254ab4  lw          $a1, 0x4AB4($s1)
    ctx->pc = 0x295228u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 19124)));
    // 0x29522c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x29522cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295230: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x295230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x295234: 0x28a2007e  slti        $v0, $a1, 0x7E
    ctx->pc = 0x295234u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)126) ? 1 : 0);
    // 0x295238: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x295238u;
    {
        const bool branch_taken_0x295238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29523Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295238u;
            // 0x29523c: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295238) {
            ctx->pc = 0x295260u;
            goto label_295260;
        }
    }
    ctx->pc = 0x295240u;
    // 0x295240: 0x3c120032  lui         $s2, 0x32
    ctx->pc = 0x295240u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)50 << 16));
    // 0x295244: 0xae204ab4  sw          $zero, 0x4AB4($s1)
    ctx->pc = 0x295244u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 19124), GPR_U32(ctx, 0));
    // 0x295248: 0x26427740  addiu       $v0, $s2, 0x7740
    ctx->pc = 0x295248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 30528));
    // 0x29524c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29524cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295250: 0xc0a6a36  jal         func_29A8D8
    ctx->pc = 0x295250u;
    SET_GPR_U32(ctx, 31, 0x295258u);
    ctx->pc = 0x295254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295250u;
            // 0x295254: 0xa040007f  sb          $zero, 0x7F($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 127), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29A8D8u;
    if (runtime->hasFunction(0x29A8D8u)) {
        auto targetFn = runtime->lookupFunction(0x29A8D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295258u; }
        if (ctx->pc != 0x295258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_29a8d8_0x29a908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295258u; }
        if (ctx->pc != 0x295258u) { return; }
    }
    ctx->pc = 0x295258u;
    // 0x295258: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x295258u;
    {
        const bool branch_taken_0x295258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29525Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295258u;
            // 0x29525c: 0x8e254ab4  lw          $a1, 0x4AB4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 19124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295258) {
            ctx->pc = 0x295264u;
            goto label_295264;
        }
    }
    ctx->pc = 0x295260u;
label_295260:
    // 0x295260: 0x3c120032  lui         $s2, 0x32
    ctx->pc = 0x295260u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)50 << 16));
label_295264:
    // 0x295264: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x295264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x295268: 0x1602000d  bne         $s0, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x295268u;
    {
        const bool branch_taken_0x295268 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x29526Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295268u;
            // 0x29526c: 0x26427740  addiu       $v0, $s2, 0x7740 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 30528));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295268) {
            ctx->pc = 0x2952A0u;
            goto label_2952a0;
        }
    }
    ctx->pc = 0x295270u;
    // 0x295270: 0x26447740  addiu       $a0, $s2, 0x7740
    ctx->pc = 0x295270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 30528));
    // 0x295274: 0xae204ab4  sw          $zero, 0x4AB4($s1)
    ctx->pc = 0x295274u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 19124), GPR_U32(ctx, 0));
    // 0x295278: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x295278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x29527c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x29527cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x295280: 0xa0500000  sb          $s0, 0x0($v0)
    ctx->pc = 0x295280u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x295284: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x295284u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295288: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x295288u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29528c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29528cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x295290: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x295290u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x295294: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x295294u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x295298: 0x80a6a36  j           func_29A8D8
    ctx->pc = 0x295298u;
    ctx->pc = 0x29529Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295298u;
            // 0x29529c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29A8D8u;
    if (runtime->hasFunction(0x29A8D8u)) {
        auto targetFn = runtime->lookupFunction(0x29A8D8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        entry_29a8d8_0x29a908(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2952A0u;
label_2952a0:
    // 0x2952a0: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x2952a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2952a4: 0xae234ab4  sw          $v1, 0x4AB4($s1)
    ctx->pc = 0x2952a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 19124), GPR_U32(ctx, 3));
    // 0x2952a8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x2952a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2952ac: 0xa0500000  sb          $s0, 0x0($v0)
    ctx->pc = 0x2952acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 16));
    // 0x2952b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2952b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2952b4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2952b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2952b8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2952b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2952bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2952bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2952c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2952C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2952C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2952C0u;
            // 0x2952c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x295260u: goto label_295260;
            case 0x295264u: goto label_295264;
            case 0x2952A0u: goto label_2952a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2952C8u;
}
