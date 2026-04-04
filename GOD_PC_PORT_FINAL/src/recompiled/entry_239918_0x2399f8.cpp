#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_239918
// Address: 0x239918 - 0x2399f8
void entry_239918_0x2399f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_239918_0x2399f8");
#endif

    ctx->pc = 0x239918u;

    // 0x239918: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x239918u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23991c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x23991cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x239920: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x239920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x239924: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x239924u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239928: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x239928u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x23992c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23992cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x239930: 0xc0602a0  jal         func_180A80
    ctx->pc = 0x239930u;
    SET_GPR_U32(ctx, 31, 0x239938u);
    ctx->pc = 0x239934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239930u;
            // 0x239934: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180A80u;
    if (runtime->hasFunction(0x180A80u)) {
        auto targetFn = runtime->lookupFunction(0x180A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239938u; }
        if (ctx->pc != 0x239938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_180a80_0x180a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239938u; }
        if (ctx->pc != 0x239938u) { return; }
    }
    ctx->pc = 0x239938u;
    // 0x239938: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x239938u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x23993c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x23993Cu;
    {
        const bool branch_taken_0x23993c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x239940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23993Cu;
            // 0x239940: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23993c) {
            ctx->pc = 0x23995Cu;
            goto label_23995c;
        }
    }
    ctx->pc = 0x239944u;
    // 0x239944: 0xc05fa66  jal         func_17E998
    ctx->pc = 0x239944u;
    SET_GPR_U32(ctx, 31, 0x23994Cu);
    ctx->pc = 0x17E998u;
    if (runtime->hasFunction(0x17E998u)) {
        auto targetFn = runtime->lookupFunction(0x17E998u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23994Cu; }
        if (ctx->pc != 0x23994Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E998_0x17e998(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23994Cu; }
        if (ctx->pc != 0x23994Cu) { return; }
    }
    ctx->pc = 0x23994Cu;
    // 0x23994c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x23994cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239950: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x239950u;
    SET_GPR_U32(ctx, 31, 0x239958u);
    ctx->pc = 0x239954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239950u;
            // 0x239954: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239958u; }
        if (ctx->pc != 0x239958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239958u; }
        if (ctx->pc != 0x239958u) { return; }
    }
    ctx->pc = 0x239958u;
    // 0x239958: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x239958u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23995c:
    // 0x23995c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23995cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x239960: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x239960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x239964: 0x3e00008  jr          $ra
    ctx->pc = 0x239964u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239964u;
            // 0x239968: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23995Cu: goto label_23995c;
            case 0x2399C0u: goto label_2399c0;
            case 0x2399E0u: goto label_2399e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23996Cu;
    // 0x23996c: 0x0  nop
    ctx->pc = 0x23996cu;
    // NOP
    // 0x239970: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x239970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x239974: 0x0  nop
    ctx->pc = 0x239974u;
    // NOP
    // 0x239978: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x239978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23997c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x23997cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x239980: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x239980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x239984: 0x244203d0  addiu       $v0, $v0, 0x3D0
    ctx->pc = 0x239984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 976));
    // 0x239988: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x239988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23998c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x23998cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239990: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x239990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x239994: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x239994u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239998: 0xc05fed4  jal         func_17FB50
    ctx->pc = 0x239998u;
    SET_GPR_U32(ctx, 31, 0x2399A0u);
    ctx->pc = 0x23999Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239998u;
            // 0x23999c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17FB50u;
    if (runtime->hasFunction(0x17FB50u)) {
        auto targetFn = runtime->lookupFunction(0x17FB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2399A0u; }
        if (ctx->pc != 0x2399A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017FB50_0x17fb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2399A0u; }
        if (ctx->pc != 0x2399A0u) { return; }
    }
    ctx->pc = 0x2399A0u;
    // 0x2399a0: 0xc05fc98  jal         func_17F260
    ctx->pc = 0x2399A0u;
    SET_GPR_U32(ctx, 31, 0x2399A8u);
    ctx->pc = 0x2399A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2399A0u;
            // 0x2399a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F260u;
    if (runtime->hasFunction(0x17F260u)) {
        auto targetFn = runtime->lookupFunction(0x17F260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2399A8u; }
        if (ctx->pc != 0x2399A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017F260_0x17f260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2399A8u; }
        if (ctx->pc != 0x2399A8u) { return; }
    }
    ctx->pc = 0x2399A8u;
    // 0x2399a8: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2399a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2399ac: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2399ACu;
    {
        const bool branch_taken_0x2399ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2399ac) {
            ctx->pc = 0x2399B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2399ACu;
            // 0x2399b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2399C0u;
            goto label_2399c0;
        }
    }
    ctx->pc = 0x2399B4u;
    // 0x2399b4: 0xc05fb4a  jal         func_17ED28
    ctx->pc = 0x2399B4u;
    SET_GPR_U32(ctx, 31, 0x2399BCu);
    ctx->pc = 0x2399B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2399B4u;
            // 0x2399b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17ED28u;
    if (runtime->hasFunction(0x17ED28u)) {
        auto targetFn = runtime->lookupFunction(0x17ED28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2399BCu; }
        if (ctx->pc != 0x2399BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017ED28_0x17ed28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2399BCu; }
        if (ctx->pc != 0x2399BCu) { return; }
    }
    ctx->pc = 0x2399BCu;
    // 0x2399bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2399bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2399c0:
    // 0x2399c0: 0xc0602a0  jal         func_180A80
    ctx->pc = 0x2399C0u;
    SET_GPR_U32(ctx, 31, 0x2399C8u);
    ctx->pc = 0x2399C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2399C0u;
            // 0x2399c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180A80u;
    if (runtime->hasFunction(0x180A80u)) {
        auto targetFn = runtime->lookupFunction(0x180A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2399C8u; }
        if (ctx->pc != 0x2399C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_180a80_0x180a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2399C8u; }
        if (ctx->pc != 0x2399C8u) { return; }
    }
    ctx->pc = 0x2399C8u;
    // 0x2399c8: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x2399c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x2399cc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2399CCu;
    {
        const bool branch_taken_0x2399cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2399cc) {
            ctx->pc = 0x2399D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2399CCu;
            // 0x2399d0: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2399E0u;
            goto label_2399e0;
        }
    }
    ctx->pc = 0x2399D4u;
    // 0x2399d4: 0xc08e67e  jal         func_2399F8
    ctx->pc = 0x2399D4u;
    SET_GPR_U32(ctx, 31, 0x2399DCu);
    ctx->pc = 0x2399D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2399D4u;
            // 0x2399d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2399F8u;
    if (runtime->hasFunction(0x2399F8u)) {
        auto targetFn = runtime->lookupFunction(0x2399F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2399DCu; }
        if (ctx->pc != 0x2399DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2399f8_0x239a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2399DCu; }
        if (ctx->pc != 0x2399DCu) { return; }
    }
    ctx->pc = 0x2399DCu;
    // 0x2399dc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2399dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2399e0:
    // 0x2399e0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2399e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2399e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2399e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2399e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2399E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2399ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2399E8u;
            // 0x2399ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23995Cu: goto label_23995c;
            case 0x2399C0u: goto label_2399c0;
            case 0x2399E0u: goto label_2399e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2399F0u;
    // 0x2399f0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2399f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2399f4: 0x0  nop
    ctx->pc = 0x2399f4u;
    // NOP
}
