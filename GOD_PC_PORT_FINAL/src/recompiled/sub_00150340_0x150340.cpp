#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00150340
// Address: 0x150340 - 0x150410
void sub_00150340_0x150340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150340_0x150340");
#endif

    ctx->pc = 0x150340u;

    // 0x150340: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x150340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x150344: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x150344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x150348: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x150348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x15034c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x15034cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150350: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x150350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x150354: 0xc04c0c4  jal         func_130310
    ctx->pc = 0x150354u;
    SET_GPR_U32(ctx, 31, 0x15035Cu);
    ctx->pc = 0x150358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x150354u;
            // 0x150358: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130310u;
    if (runtime->hasFunction(0x130310u)) {
        auto targetFn = runtime->lookupFunction(0x130310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15035Cu; }
        if (ctx->pc != 0x15035Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00130310_0x130310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15035Cu; }
        if (ctx->pc != 0x15035Cu) { return; }
    }
    ctx->pc = 0x15035Cu;
    // 0x15035c: 0x260500c0  addiu       $a1, $s0, 0xC0
    ctx->pc = 0x15035cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x150360: 0xfe0000c0  sd          $zero, 0xC0($s0)
    ctx->pc = 0x150360u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 192), GPR_U64(ctx, 0));
    // 0x150364: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x150364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x150368: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x150368u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x15036c: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x15036cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x150370: 0x3c093f80  lui         $t1, 0x3F80
    ctx->pc = 0x150370u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16256 << 16));
    // 0x150374: 0x71092389  pcpyld      $a0, $t0, $t1
    ctx->pc = 0x150374u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
    // 0x150378: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x150378u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x15037c: 0x3c093f80  lui         $t1, 0x3F80
    ctx->pc = 0x15037cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16256 << 16));
    // 0x150380: 0x71091389  pcpyld      $v0, $t0, $t1
    ctx->pc = 0x150380u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
    // 0x150384: 0x24060800  addiu       $a2, $zero, 0x800
    ctx->pc = 0x150384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x150388: 0x704414c8  ppacw       $v0, $v0, $a0
    ctx->pc = 0x150388u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x15038c: 0xde0300c0  ld          $v1, 0xC0($s0)
    ctx->pc = 0x15038cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x150390: 0x96040000  lhu         $a0, 0x0($s0)
    ctx->pc = 0x150390u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x150394: 0x2407f7ff  addiu       $a3, $zero, -0x801
    ctx->pc = 0x150394u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965247));
    // 0x150398: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x150398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x15039c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x15039cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1503a0: 0xfe0300c0  sd          $v1, 0xC0($s0)
    ctx->pc = 0x1503a0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 192), GPR_U64(ctx, 3));
    // 0x1503a4: 0x7e0200b0  sq          $v0, 0xB0($s0)
    ctx->pc = 0x1503a4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 176), GPR_VEC(ctx, 2));
    // 0x1503a8: 0xdca20008  ld          $v0, 0x8($a1)
    ctx->pc = 0x1503a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1503ac: 0xae1100d0  sw          $s1, 0xD0($s0)
    ctx->pc = 0x1503acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 17));
    // 0x1503b0: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x1503b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x1503b4: 0xfca20008  sd          $v0, 0x8($a1)
    ctx->pc = 0x1503b4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 2));
    // 0x1503b8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1503b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1503bc: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1503bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1503c0: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1503c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1503c4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1503c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1503c8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1503c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1503cc: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1503ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1503d0: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1503d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x1503d4: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x1503d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x1503d8: 0x40f809  jalr        $v0
    ctx->pc = 0x1503D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1503E0u);
        ctx->pc = 0x1503DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1503D8u;
            // 0x1503dc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1503E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1503E0u; }
            if (ctx->pc != 0x1503E0u) { return; }
        }
        }
    }
    ctx->pc = 0x1503E0u;
    // 0x1503e0: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x1503e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1503e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1503e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1503e8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1503e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1503ec: 0xc05420c  jal         func_150830
    ctx->pc = 0x1503ECu;
    SET_GPR_U32(ctx, 31, 0x1503F4u);
    ctx->pc = 0x1503F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1503ECu;
            // 0x1503f0: 0xae0200d4  sw          $v0, 0xD4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x150830u;
    if (runtime->hasFunction(0x150830u)) {
        auto targetFn = runtime->lookupFunction(0x150830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1503F4u; }
        if (ctx->pc != 0x1503F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_150830_0x1508a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1503F4u; }
        if (ctx->pc != 0x1503F4u) { return; }
    }
    ctx->pc = 0x1503F4u;
    // 0x1503f4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1503f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1503f8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1503f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1503fc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1503fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x150400: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x150400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150404: 0x3e00008  jr          $ra
    ctx->pc = 0x150404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x150404u;
            // 0x150408: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15040Cu;
    // 0x15040c: 0x0  nop
    ctx->pc = 0x15040cu;
    // NOP
}
