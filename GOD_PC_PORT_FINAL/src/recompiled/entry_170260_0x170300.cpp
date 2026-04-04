#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_170260
// Address: 0x170260 - 0x170300
void entry_170260_0x170300(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_170260_0x170300");
#endif

    ctx->pc = 0x170260u;

    // 0x170260: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x170260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x170264: 0x88620003  lwl         $v0, 0x3($v1)
    ctx->pc = 0x170264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x170268: 0x98620000  lwr         $v0, 0x0($v1)
    ctx->pc = 0x170268u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x17026c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x17026cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x170270: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x170270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x170274: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x170274u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x170278: 0x21b02  srl         $v1, $v0, 12
    ctx->pc = 0x170278u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x17027c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x17027cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x170280: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x170280u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x170284: 0x3e00008  jr          $ra
    ctx->pc = 0x170284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170284u;
            // 0x170288: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1702F0u: goto label_1702f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17028Cu;
    // 0x17028c: 0x0  nop
    ctx->pc = 0x17028cu;
    // NOP
    // 0x170290: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x170290u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x170294: 0x0  nop
    ctx->pc = 0x170294u;
    // NOP
    // 0x170298: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x170298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17029c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x17029cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1702a0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1702a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1702a4: 0x2442e7d8  addiu       $v0, $v0, -0x1828
    ctx->pc = 0x1702a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961112));
    // 0x1702a8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1702a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1702ac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1702acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1702b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1702b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1702b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1702b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1702b8: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x1702b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x1702bc: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x1702BCu;
    SET_GPR_U32(ctx, 31, 0x1702C4u);
    ctx->pc = 0x1702C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1702BCu;
            // 0x1702c0: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1702C4u; }
        if (ctx->pc != 0x1702C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1702C4u; }
        if (ctx->pc != 0x1702C4u) { return; }
    }
    ctx->pc = 0x1702C4u;
    // 0x1702c4: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x1702C4u;
    SET_GPR_U32(ctx, 31, 0x1702CCu);
    ctx->pc = 0x1702C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1702C4u;
            // 0x1702c8: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1702CCu; }
        if (ctx->pc != 0x1702CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1702CCu; }
        if (ctx->pc != 0x1702CCu) { return; }
    }
    ctx->pc = 0x1702CCu;
    // 0x1702cc: 0x26240024  addiu       $a0, $s1, 0x24
    ctx->pc = 0x1702ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x1702d0: 0xc08f312  jal         func_23CC48
    ctx->pc = 0x1702D0u;
    SET_GPR_U32(ctx, 31, 0x1702D8u);
    ctx->pc = 0x1702D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1702D0u;
            // 0x1702d4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23CC48u;
    if (runtime->hasFunction(0x23CC48u)) {
        auto targetFn = runtime->lookupFunction(0x23CC48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1702D8u; }
        if (ctx->pc != 0x1702D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023CC48_0x23cc48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1702D8u; }
        if (ctx->pc != 0x1702D8u) { return; }
    }
    ctx->pc = 0x1702D8u;
    // 0x1702d8: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x1702d8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x1702dc: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1702DCu;
    {
        const bool branch_taken_0x1702dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1702E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1702DCu;
            // 0x1702e0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1702dc) {
            ctx->pc = 0x1702F0u;
            goto label_1702f0;
        }
    }
    ctx->pc = 0x1702E4u;
    // 0x1702e4: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x1702E4u;
    SET_GPR_U32(ctx, 31, 0x1702ECu);
    ctx->pc = 0x1702E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1702E4u;
            // 0x1702e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1702ECu; }
        if (ctx->pc != 0x1702ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1702ECu; }
        if (ctx->pc != 0x1702ECu) { return; }
    }
    ctx->pc = 0x1702ECu;
    // 0x1702ec: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1702ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1702f0:
    // 0x1702f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1702f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1702f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1702f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1702f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1702F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1702FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1702F8u;
            // 0x1702fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1702F0u: goto label_1702f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x170300u;
}
