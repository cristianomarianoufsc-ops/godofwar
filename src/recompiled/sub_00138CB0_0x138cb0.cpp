#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00138CB0
// Address: 0x138cb0 - 0x138d48
void sub_00138CB0_0x138cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00138CB0_0x138cb0");
#endif

    ctx->pc = 0x138cb0u;

    // 0x138cb0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x138cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x138cb4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x138cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x138cb8: 0xc04f5b8  jal         func_13D6E0
    ctx->pc = 0x138CB8u;
    SET_GPR_U32(ctx, 31, 0x138CC0u);
    ctx->pc = 0x13D6E0u;
    if (runtime->hasFunction(0x13D6E0u)) {
        auto targetFn = runtime->lookupFunction(0x13D6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138CC0u; }
        if (ctx->pc != 0x138CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13d6e0_0x13d710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138CC0u; }
        if (ctx->pc != 0x138CC0u) { return; }
    }
    ctx->pc = 0x138CC0u;
    // 0x138cc0: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x138cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x138cc4: 0x3c040000  lui         $a0, 0x0
    ctx->pc = 0x138cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)0 << 16));
    // 0x138cc8: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x138cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x138ccc: 0x2442c1a8  addiu       $v0, $v0, -0x3E58
    ctx->pc = 0x138cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951336));
    // 0x138cd0: 0x24840000  addiu       $a0, $a0, 0x0
    ctx->pc = 0x138cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 0));
    // 0x138cd4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x138cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x138cd8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x138cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x138cdc: 0x2484000f  addiu       $a0, $a0, 0xF
    ctx->pc = 0x138cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15));
    // 0x138ce0: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x138ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x138ce4: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x138ce4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x138ce8: 0xac64471c  sw          $a0, 0x471C($v1)
    ctx->pc = 0x138ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18204), GPR_U32(ctx, 4));
    // 0x138cec: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x138cecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x138cf0: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x138cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x138cf4: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x138cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
    // 0x138cf8: 0x24427ff8  addiu       $v0, $v0, 0x7FF8
    ctx->pc = 0x138cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32760));
    // 0x138cfc: 0x24c61688  addiu       $a2, $a2, 0x1688
    ctx->pc = 0x138cfcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5768));
    // 0x138d00: 0x442823  subu        $a1, $v0, $a0
    ctx->pc = 0x138d00u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x138d04: 0xac624720  sw          $v0, 0x4720($v1)
    ctx->pc = 0x138d04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 18208), GPR_U32(ctx, 2));
    // 0x138d08: 0xc04f5c4  jal         func_13D710
    ctx->pc = 0x138D08u;
    SET_GPR_U32(ctx, 31, 0x138D10u);
    ctx->pc = 0x138D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138D08u;
            // 0x138d0c: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D710u;
    if (runtime->hasFunction(0x13D710u)) {
        auto targetFn = runtime->lookupFunction(0x13D710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138D10u; }
        if (ctx->pc != 0x138D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13d710_0x13d8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138D10u; }
        if (ctx->pc != 0x138D10u) { return; }
    }
    ctx->pc = 0x138D10u;
    // 0x138d10: 0xc04f824  jal         func_13E090
    ctx->pc = 0x138D10u;
    SET_GPR_U32(ctx, 31, 0x138D18u);
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138D18u; }
        if (ctx->pc != 0x138D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138D18u; }
        if (ctx->pc != 0x138D18u) { return; }
    }
    ctx->pc = 0x138D18u;
    // 0x138d18: 0x3c030bad  lui         $v1, 0xBAD
    ctx->pc = 0x138d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2989 << 16));
    // 0x138d1c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x138d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x138d20: 0x3c0501ff  lui         $a1, 0x1FF
    ctx->pc = 0x138d20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)511 << 16));
    // 0x138d24: 0x3463c0de  ori         $v1, $v1, 0xC0DE
    ctx->pc = 0x138d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49374);
    // 0x138d28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x138d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138d2c: 0xac82f198  sw          $v0, -0xE68($a0)
    ctx->pc = 0x138d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294963608), GPR_U32(ctx, 2));
    // 0x138d30: 0xaca37ffc  sw          $v1, 0x7FFC($a1)
    ctx->pc = 0x138d30u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32764), GPR_U32(ctx, 3));
    // 0x138d34: 0x3e00008  jr          $ra
    ctx->pc = 0x138D34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138D34u;
            // 0x138d38: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x138D3Cu;
    // 0x138d3c: 0x0  nop
    ctx->pc = 0x138d3cu;
    // NOP
    // 0x138d40: 0xac44d524  sw          $a0, -0x2ADC($v0)
    ctx->pc = 0x138d40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956324), GPR_U32(ctx, 4));
    // 0x138d44: 0x0  nop
    ctx->pc = 0x138d44u;
    // NOP
}
