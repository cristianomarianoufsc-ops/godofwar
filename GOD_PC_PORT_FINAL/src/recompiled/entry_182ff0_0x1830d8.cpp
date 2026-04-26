#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_182ff0
// Address: 0x182ff0 - 0x1830d8
void entry_182ff0_0x1830d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_182ff0_0x1830d8");
#endif

    fprintf(stderr, "[182FF0] ENTRADA a0=0x%x\n", (uint32_t)GPR_U32(ctx, 4)); fflush(stderr);
    ctx->pc = 0x182ff0u;

    // 0x182ff0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x182ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x182ff4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x182ff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x182ff8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x182ff8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182ffc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x182ffcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x183000: 0xc09e690  jal         func_279A40
    ctx->pc = 0x183000u;
    SET_GPR_U32(ctx, 31, 0x183008u);
    ctx->pc = 0x183004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183000u;
            // 0x183004: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    fprintf(stderr, "[182FF0] JAL 279A40 (1a chamada)\n"); fflush(stderr);
    ctx->pc = 0x279A40u;
    if (runtime->hasFunction(0x279A40u)) {
        auto targetFn = runtime->lookupFunction(0x279A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183008u; }
        if (ctx->pc != 0x183008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00279A40_0x279a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183008u; }
        if (ctx->pc != 0x183008u) { return; }
    }
    fprintf(stderr, "[182FF0] 279A40 (1a) RETORNOU v0=0x%x\n", (uint32_t)GPR_U32(ctx, 2)); fflush(stderr);
    ctx->pc = 0x183008u;
    // 0x183008: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x183008u;
    {
        const bool branch_taken_0x183008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x183008) {
            ctx->pc = 0x183018u;
            goto label_183018;
        }
    }
    ctx->pc = 0x183010u;
    // 0x183010: 0xc09e690  jal         func_279A40
    ctx->pc = 0x183010u;
    SET_GPR_U32(ctx, 31, 0x183018u);
    ctx->pc = 0x183014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183010u;
            // 0x183014: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    fprintf(stderr, "[182FF0] JAL 279A40 (2a chamada)\n"); fflush(stderr);
    ctx->pc = 0x279A40u;
    if (runtime->hasFunction(0x279A40u)) {
        auto targetFn = runtime->lookupFunction(0x279A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183018u; }
        if (ctx->pc != 0x183018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00279A40_0x279a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183018u; }
        if (ctx->pc != 0x183018u) { return; }
    }
    fprintf(stderr, "[182FF0] 279A40 (2a) RETORNOU v0=0x%x\n", (uint32_t)GPR_U32(ctx, 2)); fflush(stderr);
    ctx->pc = 0x183018u;
label_183018:
    // 0x183018: 0xc060c64  jal         func_183190
    ctx->pc = 0x183018u;
    SET_GPR_U32(ctx, 31, 0x183020u);
    ctx->pc = 0x18301Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183018u;
            // 0x18301c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    fprintf(stderr, "[182FF0] JAL 183190 a0=0x%x\n", (uint32_t)GPR_U32(ctx, 4)); fflush(stderr);
    ctx->pc = 0x183190u;
    if (runtime->hasFunction(0x183190u)) {
        auto targetFn = runtime->lookupFunction(0x183190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183020u; }
        if (ctx->pc != 0x183020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183190_0x183190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183020u; }
        if (ctx->pc != 0x183020u) { return; }
    }
    fprintf(stderr, "[182FF0] 183190 RETORNOU\n"); fflush(stderr);
    ctx->pc = 0x183020u;
    // 0x183020: 0x24080800  addiu       $t0, $zero, 0x800
    ctx->pc = 0x183020u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x183024: 0x3c090033  lui         $t1, 0x33
    ctx->pc = 0x183024u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)51 << 16));
    // 0x183028: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x183028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18302c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x18302cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x183030: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x183030u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x183034: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x183034u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x183038: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x183038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x18303c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x18303cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x183040: 0xad25f1f0  sw          $a1, -0xE10($t1)
    ctx->pc = 0x183040u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4294963696), GPR_U32(ctx, 5));
    // 0x183044: 0xac881054  sw          $t0, 0x1054($a0)
    ctx->pc = 0x183044u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4180), GPR_U32(ctx, 8));
    // 0x183048: 0xac481050  sw          $t0, 0x1050($v0)
    ctx->pc = 0x183048u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4176), GPR_U32(ctx, 8));
    // 0x18304c: 0xac654f50  sw          $a1, 0x4F50($v1)
    ctx->pc = 0x18304cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20304), GPR_U32(ctx, 5));
    // 0x183050: 0xacc0ed58  sw          $zero, -0x12A8($a2)
    ctx->pc = 0x183050u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294962520), GPR_U32(ctx, 0));
    // 0x183054: 0xace04f58  sw          $zero, 0x4F58($a3)
    ctx->pc = 0x183054u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20312), GPR_U32(ctx, 0));
    // 0x183058: 0xc060cba  jal         func_1832E8
    ctx->pc = 0x183058u;
    SET_GPR_U32(ctx, 31, 0x183060u);
    ctx->pc = 0x1832E8u;
    fprintf(stderr, "[182FF0] JAL 1832E8\n"); fflush(stderr);
    if (runtime->hasFunction(0x1832E8u)) {
        auto targetFn = runtime->lookupFunction(0x1832E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183060u; }
        if (ctx->pc != 0x183060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1832e8_0x183330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183060u; }
        if (ctx->pc != 0x183060u) { return; }
    }
    fprintf(stderr, "[182FF0] 1832E8 RETORNOU\n"); fflush(stderr);
    ctx->pc = 0x183060u;
    // 0x183060: 0x3c040005  lui         $a0, 0x5
    ctx->pc = 0x183060u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5 << 16));
    // 0x183064: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x183064u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x183068: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x183068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18306c: 0x3484c800  ori         $a0, $a0, 0xC800
    ctx->pc = 0x18306cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)51200);
    // 0x183070: 0xc04ff2a  jal         func_13FCA8
    ctx->pc = 0x183070u;
    SET_GPR_U32(ctx, 31, 0x183078u);
    ctx->pc = 0x183074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183070u;
            // 0x183074: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    fprintf(stderr, "[182FF0] JAL 13FCA8 a0=0x%x a1=0x%x a2=0x%x a3=0x%x\n",
        GPR_U32(ctx,4), GPR_U32(ctx,5), GPR_U32(ctx,6), GPR_U32(ctx,7)); fflush(stderr);
    ctx->pc = 0x13FCA8u;
    if (runtime->hasFunction(0x13FCA8u)) {
        auto targetFn = runtime->lookupFunction(0x13FCA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183078u; }
        if (ctx->pc != 0x183078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013FCA8_0x13fca8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183078u; }
        if (ctx->pc != 0x183078u) { return; }
    }
    fprintf(stderr, "[182FF0] 13FCA8 RETORNOU v0=0x%x\n", GPR_U32(ctx,2)); fflush(stderr);
    ctx->pc = 0x183078u;
    // 0x183078: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x183078u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x18307c: 0x3c060024  lui         $a2, 0x24
    ctx->pc = 0x18307cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)36 << 16));
    // 0x183080: 0x24c6e7a8  addiu       $a2, $a2, -0x1858
    ctx->pc = 0x183080u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961064));
    // 0x183084: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x183084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x183088: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x183088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18308c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x18308cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x183090: 0xc04fed2  jal         func_13FB48
    ctx->pc = 0x183090u;
    SET_GPR_U32(ctx, 31, 0x183098u);
    ctx->pc = 0x183094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x183090u;
            // 0x183094: 0xac621048  sw          $v0, 0x1048($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    fprintf(stderr, "[182FF0] JAL 13FB48 a0=0x%x a1=0x%x a2=0x%x a3=0x%x\n",
        GPR_U32(ctx,4), GPR_U32(ctx,5), GPR_U32(ctx,6), GPR_U32(ctx,7)); fflush(stderr);
    ctx->pc = 0x13FB48u;
    if (runtime->hasFunction(0x13FB48u)) {
        auto targetFn = runtime->lookupFunction(0x13FB48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183098u; }
        if (ctx->pc != 0x183098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013FB48_0x13fb48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x183098u; }
        if (ctx->pc != 0x183098u) { return; }
    }
    fprintf(stderr, "[182FF0] 13FB48 RETORNOU v0=0x%x\n", GPR_U32(ctx,2)); fflush(stderr);
    ctx->pc = 0x183098u;
    // 0x183098: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x183098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x18309c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x18309cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x1830a0: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1830a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x1830a4: 0xac62ed5c  sw          $v0, -0x12A4($v1)
    ctx->pc = 0x1830a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294962524), GPR_U32(ctx, 2));
    // 0x1830a8: 0xac804f4c  sw          $zero, 0x4F4C($a0)
    ctx->pc = 0x1830a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20300), GPR_U32(ctx, 0));
    // 0x1830ac: 0xc060bda  jal         func_182F68
    ctx->pc = 0x1830ACu;
    SET_GPR_U32(ctx, 31, 0x1830B4u);
    ctx->pc = 0x1830B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1830ACu;
            // 0x1830b0: 0xaca04f54  sw          $zero, 0x4F54($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20308), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    fprintf(stderr, "[182FF0] JAL 182F68\n"); fflush(stderr);
    ctx->pc = 0x182F68u;
    if (runtime->hasFunction(0x182F68u)) {
        auto targetFn = runtime->lookupFunction(0x182F68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1830B4u; }
        if (ctx->pc != 0x1830B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182F68_0x182f68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1830B4u; }
        if (ctx->pc != 0x1830B4u) { return; }
    }
    fprintf(stderr, "[182FF0] 182F68 RETORNOU\n"); fflush(stderr);
    ctx->pc = 0x1830B4u;
    // 0x1830b4: 0xc060ba2  jal         func_182E88
    ctx->pc = 0x1830B4u;
    SET_GPR_U32(ctx, 31, 0x1830BCu);
    fprintf(stderr, "[182FF0] JAL 182E88\n"); fflush(stderr);
    ctx->pc = 0x182E88u;
    if (runtime->hasFunction(0x182E88u)) {
        auto targetFn = runtime->lookupFunction(0x182E88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1830BCu; }
        if (ctx->pc != 0x1830BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182E88_0x182e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1830BCu; }
        if (ctx->pc != 0x1830BCu) { return; }
    }
    fprintf(stderr, "[182FF0] 182E88 RETORNOU\n"); fflush(stderr);
    ctx->pc = 0x1830BCu;
    // 0x1830bc: 0xc05015e  jal         func_140578
    ctx->pc = 0x1830BCu;
    SET_GPR_U32(ctx, 31, 0x1830C4u);
    fprintf(stderr, "[182FF0] JAL 140578\n"); fflush(stderr);
    ctx->pc = 0x140578u;
    if (runtime->hasFunction(0x140578u)) {
        auto targetFn = runtime->lookupFunction(0x140578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1830C4u; }
        if (ctx->pc != 0x1830C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140578_0x140578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1830C4u; }
        if (ctx->pc != 0x1830C4u) { return; }
    }
    fprintf(stderr, "[182FF0] 140578 RETORNOU — entry_182ff0 COMPLETA\n"); fflush(stderr);
    ctx->pc = 0x1830C4u;
    // 0x1830c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1830c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1830c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1830c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1830cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1830CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1830D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1830CCu;
            // 0x1830d0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x183018u: goto label_183018;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1830D4u;
    // 0x1830d4: 0x0  nop
    ctx->pc = 0x1830d4u;
    // NOP
}
