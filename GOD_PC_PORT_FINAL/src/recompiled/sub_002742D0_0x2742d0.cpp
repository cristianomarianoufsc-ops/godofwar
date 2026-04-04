#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002742D0
// Address: 0x2742d0 - 0x274398
void sub_002742D0_0x2742d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002742D0_0x2742d0");
#endif

    ctx->pc = 0x2742d0u;

    // 0x2742d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2742d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2742d4: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2742d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2742d8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x2742d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x2742dc: 0x24a54500  addiu       $a1, $a1, 0x4500
    ctx->pc = 0x2742dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17664));
    // 0x2742e0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2742e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2742e4: 0xc09d0e6  jal         func_274398
    ctx->pc = 0x2742E4u;
    SET_GPR_U32(ctx, 31, 0x2742ECu);
    ctx->pc = 0x2742E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2742E4u;
            // 0x2742e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x274398u;
    if (runtime->hasFunction(0x274398u)) {
        auto targetFn = runtime->lookupFunction(0x274398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2742ECu; }
        if (ctx->pc != 0x2742ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00274398_0x274398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2742ECu; }
        if (ctx->pc != 0x2742ECu) { return; }
    }
    ctx->pc = 0x2742ECu;
    // 0x2742ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2742ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2742f0: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x2742f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    // 0x2742f4: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2742f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2742f8: 0xc09bff4  jal         func_26FFD0
    ctx->pc = 0x2742F8u;
    SET_GPR_U32(ctx, 31, 0x274300u);
    ctx->pc = 0x2742FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2742F8u;
            // 0x2742fc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26FFD0u;
    if (runtime->hasFunction(0x26FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x26FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274300u; }
        if (ctx->pc != 0x274300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26ffd0_0x270048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274300u; }
        if (ctx->pc != 0x274300u) { return; }
    }
    ctx->pc = 0x274300u;
    // 0x274300: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x274300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x274304: 0x3c054000  lui         $a1, 0x4000
    ctx->pc = 0x274304u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16384 << 16));
    // 0x274308: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x274308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x27430c: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x27430cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    // 0x274310: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x274310u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x274314: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x274314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x274318: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x274318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x27431c: 0xc09bff4  jal         func_26FFD0
    ctx->pc = 0x27431Cu;
    SET_GPR_U32(ctx, 31, 0x274324u);
    ctx->pc = 0x274320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27431Cu;
            // 0x274320: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26FFD0u;
    if (runtime->hasFunction(0x26FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x26FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274324u; }
        if (ctx->pc != 0x274324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26ffd0_0x270048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x274324u; }
        if (ctx->pc != 0x274324u) { return; }
    }
    ctx->pc = 0x274324u;
    // 0x274324: 0xc0a648c  jal         func_299230
    ctx->pc = 0x274324u;
    SET_GPR_U32(ctx, 31, 0x27432Cu);
    ctx->pc = 0x299230u;
    if (runtime->hasFunction(0x299230u)) {
        auto targetFn = runtime->lookupFunction(0x299230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27432Cu; }
        if (ctx->pc != 0x27432Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299230_0x299280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27432Cu; }
        if (ctx->pc != 0x27432Cu) { return; }
    }
    ctx->pc = 0x27432Cu;
    // 0x27432c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x27432cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x274330: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x274330u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x274334: 0x34c6f520  ori         $a2, $a2, 0xF520
    ctx->pc = 0x274334u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)62752);
    // 0x274338: 0x3c080001  lui         $t0, 0x1
    ctx->pc = 0x274338u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)1 << 16));
    // 0x27433c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x27433cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x274340: 0x34e7f590  ori         $a3, $a3, 0xF590
    ctx->pc = 0x274340u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)62864);
    // 0x274344: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x274344u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x274348: 0x3c05fffe  lui         $a1, 0xFFFE
    ctx->pc = 0x274348u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65534 << 16));
    // 0x27434c: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x27434cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x274350: 0x3484b000  ori         $a0, $a0, 0xB000
    ctx->pc = 0x274350u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)45056);
    // 0x274354: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x274354u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x274358: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x274358u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x27435c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x27435cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x274360: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x274360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x274364: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x274364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x274368: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x274368u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x27436c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27436Cu;
    {
        const bool branch_taken_0x27436c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x274370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27436Cu;
            // 0x274370: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27436c) {
            ctx->pc = 0x274380u;
            goto label_274380;
        }
    }
    ctx->pc = 0x274374u;
    // 0x274374: 0xc0a64a0  jal         func_299280
    ctx->pc = 0x274374u;
    SET_GPR_U32(ctx, 31, 0x27437Cu);
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27437Cu; }
        if (ctx->pc != 0x27437Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299280_0x299298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27437Cu; }
        if (ctx->pc != 0x27437Cu) { return; }
    }
    ctx->pc = 0x27437Cu;
    // 0x27437c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x27437cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_274380:
    // 0x274380: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x274380u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x274384: 0x3442b020  ori         $v0, $v0, 0xB020
    ctx->pc = 0x274384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45088);
    // 0x274388: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x274388u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27438c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x27438cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x274390: 0x3e00008  jr          $ra
    ctx->pc = 0x274390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x274394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x274390u;
            // 0x274394: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x274380u: goto label_274380;
            default: break;
        }
        return;
    }
    ctx->pc = 0x274398u;
}
