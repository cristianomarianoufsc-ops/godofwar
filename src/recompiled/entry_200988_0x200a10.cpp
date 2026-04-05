#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_200988
// Address: 0x200988 - 0x200a10
void entry_200988_0x200a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_200988_0x200a10");
#endif

    ctx->pc = 0x200988u;

    // 0x200988: 0x24020034  addiu       $v0, $zero, 0x34
    ctx->pc = 0x200988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x20098c: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20098cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x200990: 0xa21818  mult        $v1, $a1, $v0
    ctx->pc = 0x200990u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x200994: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x200994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x200998: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x200998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x20099c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20099cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2009a0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2009a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2009a4: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x2009a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x2009a8: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x2009a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2009ac: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2009ACu;
    {
        const bool branch_taken_0x2009ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2009B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2009ACu;
            // 0x2009b0: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2009ac) {
            ctx->pc = 0x2009F4u;
            goto label_2009f4;
        }
    }
    ctx->pc = 0x2009B4u;
    // 0x2009b4: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x2009b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x2009b8: 0x5051000f  beql        $v0, $s1, . + 4 + (0xF << 2)
    ctx->pc = 0x2009B8u;
    {
        const bool branch_taken_0x2009b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x2009b8) {
            ctx->pc = 0x2009BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2009B8u;
            // 0x2009bc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2009F8u;
            goto label_2009f8;
        }
    }
    ctx->pc = 0x2009C0u;
    // 0x2009c0: 0x8c82006c  lw          $v0, 0x6C($a0)
    ctx->pc = 0x2009c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 108)));
    // 0x2009c4: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x2009c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2009c8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2009C8u;
    {
        const bool branch_taken_0x2009c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2009CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2009C8u;
            // 0x2009cc: 0x8c520000  lw          $s2, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2009c8) {
            ctx->pc = 0x2009DCu;
            goto label_2009dc;
        }
    }
    ctx->pc = 0x2009D0u;
    // 0x2009d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2009d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2009d4: 0xc04c55c  jal         func_131570
    ctx->pc = 0x2009D4u;
    SET_GPR_U32(ctx, 31, 0x2009DCu);
    ctx->pc = 0x2009D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2009D4u;
            // 0x2009d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131570u;
    if (runtime->hasFunction(0x131570u)) {
        auto targetFn = runtime->lookupFunction(0x131570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2009DCu; }
        if (ctx->pc != 0x2009DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131570_0x131570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2009DCu; }
        if (ctx->pc != 0x2009DCu) { return; }
    }
    ctx->pc = 0x2009DCu;
label_2009dc:
    // 0x2009dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2009dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2009e0: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2009E0u;
    {
        const bool branch_taken_0x2009e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2009E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2009E0u;
            // 0x2009e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2009e0) {
            ctx->pc = 0x2009F4u;
            goto label_2009f4;
        }
    }
    ctx->pc = 0x2009E8u;
    // 0x2009e8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2009e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2009ec: 0xc04c518  jal         func_131460
    ctx->pc = 0x2009ECu;
    SET_GPR_U32(ctx, 31, 0x2009F4u);
    ctx->pc = 0x2009F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2009ECu;
            // 0x2009f0: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131460u;
    if (runtime->hasFunction(0x131460u)) {
        auto targetFn = runtime->lookupFunction(0x131460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2009F4u; }
        if (ctx->pc != 0x2009F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131460_0x131460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2009F4u; }
        if (ctx->pc != 0x2009F4u) { return; }
    }
    ctx->pc = 0x2009F4u;
label_2009f4:
    // 0x2009f4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2009f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2009f8:
    // 0x2009f8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2009f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2009fc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2009fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200a00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x200a00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200a04: 0x3e00008  jr          $ra
    ctx->pc = 0x200A04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200A04u;
            // 0x200a08: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2009DCu: goto label_2009dc;
            case 0x2009F4u: goto label_2009f4;
            case 0x2009F8u: goto label_2009f8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x200A0Cu;
    // 0x200a0c: 0x0  nop
    ctx->pc = 0x200a0cu;
    // NOP
}
