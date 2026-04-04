#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002792E8
// Address: 0x2792e8 - 0x2793d0
void sub_002792E8_0x2792e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002792E8_0x2792e8");
#endif

    ctx->pc = 0x2792e8u;

    // 0x2792e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2792e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2792ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2792ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2792f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2792f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2792f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2792f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2792f8: 0xc09e49c  jal         func_279270
    ctx->pc = 0x2792F8u;
    SET_GPR_U32(ctx, 31, 0x279300u);
    ctx->pc = 0x2792FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2792F8u;
            // 0x2792fc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x279270u;
    if (runtime->hasFunction(0x279270u)) {
        auto targetFn = runtime->lookupFunction(0x279270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279300u; }
        if (ctx->pc != 0x279300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00279270_0x279270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279300u; }
        if (ctx->pc != 0x279300u) { return; }
    }
    ctx->pc = 0x279300u;
    // 0x279300: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x279300u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x279304: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x279304u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x279308: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x279308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x27930c: 0x34c6b430  ori         $a2, $a2, 0xB430
    ctx->pc = 0x27930cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)46128);
    // 0x279310: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x279310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279314: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x279314u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x279318: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x279318u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
    // 0x27931c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x27931cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x279320: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x279320u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x279324: 0x34a5b400  ori         $a1, $a1, 0xB400
    ctx->pc = 0x279324u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46080);
    // 0x279328: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x279328u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x27932c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x27932cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x279330: 0x34e72010  ori         $a3, $a3, 0x2010
    ctx->pc = 0x279330u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8208);
    // 0x279334: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x279334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
    // 0x279338: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x279338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27933c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x27933cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x279340: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x279340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x279344: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x279344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_279348:
    // 0x279348: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x279348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x27934c: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x27934cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x279350: 0x0  nop
    ctx->pc = 0x279350u;
    // NOP
    // 0x279354: 0x0  nop
    ctx->pc = 0x279354u;
    // NOP
    // 0x279358: 0x0  nop
    ctx->pc = 0x279358u;
    // NOP
    // 0x27935c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27935Cu;
    {
        const bool branch_taken_0x27935c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27935c) {
            ctx->pc = 0x279348u;
            runtime->cooperativeGuestYield();
            goto label_279348;
        }
    }
    ctx->pc = 0x279364u;
    // 0x279364: 0xc09e47e  jal         func_2791F8
    ctx->pc = 0x279364u;
    SET_GPR_U32(ctx, 31, 0x27936Cu);
    ctx->pc = 0x279368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279364u;
            // 0x279368: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2791F8u;
    if (runtime->hasFunction(0x2791F8u)) {
        auto targetFn = runtime->lookupFunction(0x2791F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27936Cu; }
        if (ctx->pc != 0x27936Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002791F8_0x2791f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27936Cu; }
        if (ctx->pc != 0x27936Cu) { return; }
    }
    ctx->pc = 0x27936Cu;
    // 0x27936c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x27936cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x279370: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x279370u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x279374: 0x3442b010  ori         $v0, $v0, 0xB010
    ctx->pc = 0x279374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45072);
    // 0x279378: 0x34e7b020  ori         $a3, $a3, 0xB020
    ctx->pc = 0x279378u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)45088);
    // 0x27937c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x27937cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x279380: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x279380u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x279384: 0x34a5b000  ori         $a1, $a1, 0xB000
    ctx->pc = 0x279384u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)45056);
    // 0x279388: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x279388u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x27938c: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x27938cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x279390: 0x34c62020  ori         $a2, $a2, 0x2020
    ctx->pc = 0x279390u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8224);
    // 0x279394: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x279394u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x279398: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x279398u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27939c: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x27939cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2793a0: 0x34842010  ori         $a0, $a0, 0x2010
    ctx->pc = 0x2793a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8208);
    // 0x2793a4: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x2793a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x2793a8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x2793a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2793ac: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x2793acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
    // 0x2793b0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2793b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2793b4: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x2793b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x2793b8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2793b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2793bc: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x2793bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x2793c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2793c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2793c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2793C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2793C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2793C4u;
            // 0x2793c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x279348u: goto label_279348;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2793CCu;
    // 0x2793cc: 0x0  nop
    ctx->pc = 0x2793ccu;
    // NOP
}
