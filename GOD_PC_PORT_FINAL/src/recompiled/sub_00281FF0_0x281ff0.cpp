#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00281FF0
// Address: 0x281ff0 - 0x2820c0
void sub_00281FF0_0x281ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281FF0_0x281ff0");
#endif

    ctx->pc = 0x281ff0u;

    // 0x281ff0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x281ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x281ff4: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x281ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x281ff8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x281ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x281ffc: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x281ffcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x282000: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x282000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x282004: 0x8c442740  lw          $a0, 0x2740($v0)
    ctx->pc = 0x282004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 10048)));
    // 0x282008: 0x3c100032  lui         $s0, 0x32
    ctx->pc = 0x282008u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)50 << 16));
    // 0x28200c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x28200cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x282010: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x282010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x282014: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x282014u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282018: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x282018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28201c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x28201cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x282020: 0x26114840  addiu       $s1, $s0, 0x4840
    ctx->pc = 0x282020u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 18496));
    // 0x282024: 0xae403620  sw          $zero, 0x3620($s2)
    ctx->pc = 0x282024u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 13856), GPR_U32(ctx, 0));
    // 0x282028: 0xc0a4f18  jal         func_293C60
    ctx->pc = 0x282028u;
    SET_GPR_U32(ctx, 31, 0x282030u);
    ctx->pc = 0x28202Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282028u;
            // 0x28202c: 0x26330080  addiu       $s3, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C60u;
    if (runtime->hasFunction(0x293C60u)) {
        auto targetFn = runtime->lookupFunction(0x293C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282030u; }
        if (ctx->pc != 0x282030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00293c60_0x293c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x282030u; }
        if (ctx->pc != 0x282030u) { return; }
    }
    ctx->pc = 0x282030u;
    // 0x282030: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x282030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x282034: 0xc0a5118  jal         func_294460
    ctx->pc = 0x282034u;
    SET_GPR_U32(ctx, 31, 0x28203Cu);
    ctx->pc = 0x282038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x282034u;
            // 0x282038: 0x262500ff  addiu       $a1, $s1, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 255));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294460u;
    if (runtime->hasFunction(0x294460u)) {
        auto targetFn = runtime->lookupFunction(0x294460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28203Cu; }
        if (ctx->pc != 0x28203Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00294460_0x294460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28203Cu; }
        if (ctx->pc != 0x28203Cu) { return; }
    }
    ctx->pc = 0x28203Cu;
    // 0x28203c: 0x8e034840  lw          $v1, 0x4840($s0)
    ctx->pc = 0x28203cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18496)));
    // 0x282040: 0x8e423620  lw          $v0, 0x3620($s2)
    ctx->pc = 0x282040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 13856)));
    // 0x282044: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x282044u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x282048: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x282048u;
    {
        const bool branch_taken_0x282048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x282048) {
            ctx->pc = 0x28204Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x282048u;
            // 0x28204c: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x282068u;
            goto label_282068;
        }
    }
    ctx->pc = 0x282050u;
    // 0x282050: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x282050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x282054: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x282054u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x282058: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x282058u;
    {
        const bool branch_taken_0x282058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x282058) {
            ctx->pc = 0x28205Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x282058u;
            // 0x28205c: 0x8e630000  lw          $v1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x282068u;
            goto label_282068;
        }
    }
    ctx->pc = 0x282060u;
    // 0x282060: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x282060u;
    {
        const bool branch_taken_0x282060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282060u;
            // 0x282064: 0xae433620  sw          $v1, 0x3620($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 13856), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282060) {
            ctx->pc = 0x282098u;
            goto label_282098;
        }
    }
    ctx->pc = 0x282068u;
label_282068:
    // 0x282068: 0x8e823620  lw          $v0, 0x3620($s4)
    ctx->pc = 0x282068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 13856)));
    // 0x28206c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x28206cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x282070: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x282070u;
    {
        const bool branch_taken_0x282070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x282070) {
            ctx->pc = 0x282074u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x282070u;
            // 0x282074: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x282098u;
            goto label_282098;
        }
    }
    ctx->pc = 0x282078u;
    // 0x282078: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x282078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28207c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x28207cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x282080: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x282080u;
    {
        const bool branch_taken_0x282080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x282084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x282080u;
            // 0x282084: 0x3c020032  lui         $v0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x282080) {
            ctx->pc = 0x282094u;
            goto label_282094;
        }
    }
    ctx->pc = 0x282088u;
    // 0x282088: 0xae433620  sw          $v1, 0x3620($s2)
    ctx->pc = 0x282088u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 13856), GPR_U32(ctx, 3));
    // 0x28208c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28208Cu;
    {
        const bool branch_taken_0x28208c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x282090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28208Cu;
            // 0x282090: 0x244248c0  addiu       $v0, $v0, 0x48C0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28208c) {
            ctx->pc = 0x28209Cu;
            goto label_28209c;
        }
    }
    ctx->pc = 0x282094u;
label_282094:
    // 0x282094: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x282094u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_282098:
    // 0x282098: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x282098u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28209c:
    // 0x28209c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x28209cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2820a0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2820a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2820a4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2820a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2820a8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2820a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2820ac: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2820acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2820b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2820b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2820b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2820B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2820B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2820B4u;
            // 0x2820b8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x282068u: goto label_282068;
            case 0x282094u: goto label_282094;
            case 0x282098u: goto label_282098;
            case 0x28209Cu: goto label_28209c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2820BCu;
    // 0x2820bc: 0x0  nop
    ctx->pc = 0x2820bcu;
    // NOP
}
