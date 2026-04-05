#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_15b618
// Address: 0x15b618 - 0x15b6d0
void entry_15b618_0x15b6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_15b618_0x15b6d0");
#endif

    ctx->pc = 0x15b618u;

    // 0x15b618: 0x8c850044  lw          $a1, 0x44($a0)
    ctx->pc = 0x15b618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x15b61c: 0x8c870040  lw          $a3, 0x40($a0)
    ctx->pc = 0x15b61cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x15b620: 0x84a30028  lh          $v1, 0x28($a1)
    ctx->pc = 0x15b620u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x15b624: 0x84a2002c  lh          $v0, 0x2C($a1)
    ctx->pc = 0x15b624u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x15b628: 0x24e80148  addiu       $t0, $a3, 0x148
    ctx->pc = 0x15b628u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 328));
    // 0x15b62c: 0x33100  sll         $a2, $v1, 4
    ctx->pc = 0x15b62cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x15b630: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x15b630u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15b634: 0xac82002c  sw          $v0, 0x2C($a0)
    ctx->pc = 0x15b634u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
    // 0x15b638: 0x84a3002e  lh          $v1, 0x2E($a1)
    ctx->pc = 0x15b638u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 46)));
    // 0x15b63c: 0x31140  sll         $v0, $v1, 5
    ctx->pc = 0x15b63cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x15b640: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x15b640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x15b644: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x15b644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x15b648: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x15b648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x15b64c: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x15b64cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x15b650: 0x9102000b  lbu         $v0, 0xB($t0)
    ctx->pc = 0x15b650u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 11)));
    // 0x15b654: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15b654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x15b658: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15B658u;
    {
        const bool branch_taken_0x15b658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B65Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B658u;
            // 0x15b65c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b658) {
            ctx->pc = 0x15B664u;
            goto label_15b664;
        }
    }
    ctx->pc = 0x15B660u;
    // 0x15b660: 0x8ce90158  lw          $t1, 0x158($a3)
    ctx->pc = 0x15b660u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 344)));
label_15b664:
    // 0x15b664: 0x691018  mult        $v0, $v1, $t1
    ctx->pc = 0x15b664u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x15b668: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15b668u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15b66c: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x15b66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x15b670: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x15b670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x15b674: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x15b674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x15b678: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x15b678u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x15b67c: 0x9102000b  lbu         $v0, 0xB($t0)
    ctx->pc = 0x15b67cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 11)));
    // 0x15b680: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15b680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x15b684: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15B684u;
    {
        const bool branch_taken_0x15b684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B684u;
            // 0x15b688: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b684) {
            ctx->pc = 0x15B698u;
            goto label_15b698;
        }
    }
    ctx->pc = 0x15B68Cu;
    // 0x15b68c: 0x8c45c7dc  lw          $a1, -0x3824($v0)
    ctx->pc = 0x15b68cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952924)));
    // 0x15b690: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15B690u;
    {
        const bool branch_taken_0x15b690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15B694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B690u;
            // 0x15b694: 0x8c830044  lw          $v1, 0x44($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b690) {
            ctx->pc = 0x15B6A0u;
            goto label_15b6a0;
        }
    }
    ctx->pc = 0x15B698u;
label_15b698:
    // 0x15b698: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x15b698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b69c: 0x8c830044  lw          $v1, 0x44($a0)
    ctx->pc = 0x15b69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 68)));
label_15b6a0:
    // 0x15b6a0: 0xc4810030  lwc1        $f1, 0x30($a0)
    ctx->pc = 0x15b6a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15b6a4: 0x8462002e  lh          $v0, 0x2E($v1)
    ctx->pc = 0x15b6a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 46)));
    // 0x15b6a8: 0xc4600024  lwc1        $f0, 0x24($v1)
    ctx->pc = 0x15b6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15b6ac: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x15b6acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x15b6b0: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x15b6b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x15b6b4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15b6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15b6b8: 0xe4600024  swc1        $f0, 0x24($v1)
    ctx->pc = 0x15b6b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x15b6bc: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x15b6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x15b6c0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x15b6c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15b6c4: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x15b6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x15b6c8: 0x3e00008  jr          $ra
    ctx->pc = 0x15B6C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15B6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B6C8u;
            // 0x15b6cc: 0xac830014  sw          $v1, 0x14($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15B664u: goto label_15b664;
            case 0x15B698u: goto label_15b698;
            case 0x15B6A0u: goto label_15b6a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15B6D0u;
}
