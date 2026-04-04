#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00221240
// Address: 0x221240 - 0x2212e0
void sub_00221240_0x221240(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221240_0x221240");
#endif

    ctx->pc = 0x221240u;

    // 0x221240: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x221240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x221244: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x221244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x221248: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x221248u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x22124c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x22124cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221250: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x221250u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x221254: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x221254u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221258: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x221258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22125c: 0x8e020174  lw          $v0, 0x174($s0)
    ctx->pc = 0x22125cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
    // 0x221260: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x221260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x221264: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x221264u;
    {
        const bool branch_taken_0x221264 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x221268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221264u;
            // 0x221268: 0x8e030238  lw          $v1, 0x238($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 568)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221264) {
            ctx->pc = 0x2212C8u;
            goto label_2212c8;
        }
    }
    ctx->pc = 0x22126Cu;
    // 0x22126c: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x22126Cu;
    {
        const bool branch_taken_0x22126c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x221270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22126Cu;
            // 0x221270: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22126c) {
            ctx->pc = 0x2212C8u;
            goto label_2212c8;
        }
    }
    ctx->pc = 0x221274u;
    // 0x221274: 0x8c425e7c  lw          $v0, 0x5E7C($v0)
    ctx->pc = 0x221274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24188)));
    // 0x221278: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x221278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22127c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x22127cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x221280: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x221280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x221284: 0x8c641184  lw          $a0, 0x1184($v1)
    ctx->pc = 0x221284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4484)));
    // 0x221288: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x221288u;
    SET_GPR_U32(ctx, 31, 0x221290u);
    ctx->pc = 0x22128Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221288u;
            // 0x22128c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221290u; }
        if (ctx->pc != 0x221290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221290u; }
        if (ctx->pc != 0x221290u) { return; }
    }
    ctx->pc = 0x221290u;
    // 0x221290: 0x8e050244  lw          $a1, 0x244($s0)
    ctx->pc = 0x221290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 580)));
    // 0x221294: 0xc0882bc  jal         func_220AF0
    ctx->pc = 0x221294u;
    SET_GPR_U32(ctx, 31, 0x22129Cu);
    ctx->pc = 0x221298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221294u;
            // 0x221298: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220AF0u;
    if (runtime->hasFunction(0x220AF0u)) {
        auto targetFn = runtime->lookupFunction(0x220AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22129Cu; }
        if (ctx->pc != 0x22129Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00220AF0_0x220af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22129Cu; }
        if (ctx->pc != 0x22129Cu) { return; }
    }
    ctx->pc = 0x22129Cu;
    // 0x22129c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22129cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2212a0: 0x5220000a  beql        $s1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2212A0u;
    {
        const bool branch_taken_0x2212a0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2212a0) {
            ctx->pc = 0x2212A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2212A0u;
            // 0x2212a4: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2212CCu;
            goto label_2212cc;
        }
    }
    ctx->pc = 0x2212A8u;
    // 0x2212a8: 0x8e1001a0  lw          $s0, 0x1A0($s0)
    ctx->pc = 0x2212a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 416)));
    // 0x2212ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2212acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2212b0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2212b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2212b4: 0xc05c472  jal         func_1711C8
    ctx->pc = 0x2212B4u;
    SET_GPR_U32(ctx, 31, 0x2212BCu);
    ctx->pc = 0x2212B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2212B4u;
            // 0x2212b8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1711C8u;
    if (runtime->hasFunction(0x1711C8u)) {
        auto targetFn = runtime->lookupFunction(0x1711C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2212BCu; }
        if (ctx->pc != 0x2212BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1711c8_0x1711d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2212BCu; }
        if (ctx->pc != 0x2212BCu) { return; }
    }
    ctx->pc = 0x2212BCu;
    // 0x2212bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2212bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2212c0: 0xc05c294  jal         func_170A50
    ctx->pc = 0x2212C0u;
    SET_GPR_U32(ctx, 31, 0x2212C8u);
    ctx->pc = 0x2212C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2212C0u;
            // 0x2212c4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A50u;
    if (runtime->hasFunction(0x170A50u)) {
        auto targetFn = runtime->lookupFunction(0x170A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2212C8u; }
        if (ctx->pc != 0x2212C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170A50_0x170a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2212C8u; }
        if (ctx->pc != 0x2212C8u) { return; }
    }
    ctx->pc = 0x2212C8u;
label_2212c8:
    // 0x2212c8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2212c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2212cc:
    // 0x2212cc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2212ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2212d0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2212d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2212d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2212d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2212d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2212D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2212DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2212D8u;
            // 0x2212dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2212C8u: goto label_2212c8;
            case 0x2212CCu: goto label_2212cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2212E0u;
}
