#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00263D08
// Address: 0x263d08 - 0x264a00
void sub_00263D08_0x263d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00263D08_0x263d08");
#endif

    ctx->pc = 0x263d08u;

    // 0x263d08: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x263d08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x263d0c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x263d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x263d10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x263d10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263d14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x263d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x263d18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x263d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x263d1c: 0xc096402  jal         func_259008
    ctx->pc = 0x263D1Cu;
    SET_GPR_U32(ctx, 31, 0x263D24u);
    ctx->pc = 0x263D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263D1Cu;
            // 0x263d20: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x259008u;
    if (runtime->hasFunction(0x259008u)) {
        auto targetFn = runtime->lookupFunction(0x259008u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263D24u; }
        if (ctx->pc != 0x263D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_259008_0x259020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263D24u; }
        if (ctx->pc != 0x263D24u) { return; }
    }
    ctx->pc = 0x263D24u;
    // 0x263d24: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x263d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x263d28: 0xae110008  sw          $s1, 0x8($s0)
    ctx->pc = 0x263d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
    // 0x263d2c: 0x24633c48  addiu       $v1, $v1, 0x3C48
    ctx->pc = 0x263d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15432));
    // 0x263d30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x263d30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263d34: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x263d34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x263d38: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x263d38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x263d3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x263d3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x263d40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x263d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x263d44: 0x3e00008  jr          $ra
    ctx->pc = 0x263D44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263D44u;
            // 0x263d48: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x263DC8u: goto label_263dc8;
            case 0x263E58u: goto label_263e58;
            case 0x263E70u: goto label_263e70;
            case 0x263E78u: goto label_263e78;
            case 0x263E90u: goto label_263e90;
            case 0x263EE8u: goto label_263ee8;
            case 0x263F00u: goto label_263f00;
            case 0x263F44u: goto label_263f44;
            case 0x263F60u: goto label_263f60;
            case 0x263FE4u: goto label_263fe4;
            case 0x26404Cu: goto label_26404c;
            case 0x26407Cu: goto label_26407c;
            case 0x2640D4u: goto label_2640d4;
            case 0x2640D8u: goto label_2640d8;
            case 0x264128u: goto label_264128;
            case 0x264180u: goto label_264180;
            case 0x264188u: goto label_264188;
            case 0x2641F0u: goto label_2641f0;
            case 0x264254u: goto label_264254;
            case 0x2642D0u: goto label_2642d0;
            case 0x2642DCu: goto label_2642dc;
            case 0x2642FCu: goto label_2642fc;
            case 0x264314u: goto label_264314;
            case 0x264340u: goto label_264340;
            case 0x264344u: goto label_264344;
            case 0x264348u: goto label_264348;
            case 0x264354u: goto label_264354;
            case 0x26436Cu: goto label_26436c;
            case 0x264370u: goto label_264370;
            case 0x2643C4u: goto label_2643c4;
            case 0x2643C8u: goto label_2643c8;
            case 0x264448u: goto label_264448;
            case 0x264464u: goto label_264464;
            case 0x264480u: goto label_264480;
            case 0x2644A8u: goto label_2644a8;
            case 0x2644ACu: goto label_2644ac;
            case 0x2644B0u: goto label_2644b0;
            case 0x2644B8u: goto label_2644b8;
            case 0x2644BCu: goto label_2644bc;
            case 0x2644FCu: goto label_2644fc;
            case 0x264548u: goto label_264548;
            case 0x26455Cu: goto label_26455c;
            case 0x264570u: goto label_264570;
            case 0x26457Cu: goto label_26457c;
            case 0x264590u: goto label_264590;
            case 0x2645A8u: goto label_2645a8;
            case 0x2645B8u: goto label_2645b8;
            case 0x2645BCu: goto label_2645bc;
            case 0x2645CCu: goto label_2645cc;
            case 0x2645D0u: goto label_2645d0;
            case 0x2645F4u: goto label_2645f4;
            case 0x264648u: goto label_264648;
            case 0x264674u: goto label_264674;
            case 0x2646A4u: goto label_2646a4;
            case 0x2646D8u: goto label_2646d8;
            case 0x2646E0u: goto label_2646e0;
            case 0x2646E4u: goto label_2646e4;
            case 0x264720u: goto label_264720;
            case 0x264744u: goto label_264744;
            case 0x264794u: goto label_264794;
            case 0x264808u: goto label_264808;
            case 0x26480Cu: goto label_26480c;
            case 0x264868u: goto label_264868;
            case 0x264878u: goto label_264878;
            case 0x2648F0u: goto label_2648f0;
            case 0x264914u: goto label_264914;
            case 0x264940u: goto label_264940;
            case 0x264944u: goto label_264944;
            case 0x264948u: goto label_264948;
            case 0x264958u: goto label_264958;
            case 0x264984u: goto label_264984;
            case 0x2649CCu: goto label_2649cc;
            case 0x2649DCu: goto label_2649dc;
            case 0x2649E0u: goto label_2649e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x263D4Cu;
    // 0x263d4c: 0x0  nop
    ctx->pc = 0x263d4cu;
    // NOP
    // 0x263d50: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x263d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x263d54: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x263d54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x263d58: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x263d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x263d5c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x263d5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263d60: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x263d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x263d64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x263d64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263d68: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x263d68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x263d6c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x263d6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263d70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x263d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x263d74: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x263d74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263d78: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x263d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x263d7c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x263d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x263d80: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x263d80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x263d84: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x263d84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x263d88: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x263d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x263d8c: 0x40f809  jalr        $v0
    ctx->pc = 0x263D8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x263D94u);
        ctx->pc = 0x263D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263D8Cu;
            // 0x263d90: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x263D94u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x263DC8u: goto label_263dc8;
            case 0x263E58u: goto label_263e58;
            case 0x263E70u: goto label_263e70;
            case 0x263E78u: goto label_263e78;
            case 0x263E90u: goto label_263e90;
            case 0x263EE8u: goto label_263ee8;
            case 0x263F00u: goto label_263f00;
            case 0x263F44u: goto label_263f44;
            case 0x263F60u: goto label_263f60;
            case 0x263FE4u: goto label_263fe4;
            case 0x26404Cu: goto label_26404c;
            case 0x26407Cu: goto label_26407c;
            case 0x2640D4u: goto label_2640d4;
            case 0x2640D8u: goto label_2640d8;
            case 0x264128u: goto label_264128;
            case 0x264180u: goto label_264180;
            case 0x264188u: goto label_264188;
            case 0x2641F0u: goto label_2641f0;
            case 0x264254u: goto label_264254;
            case 0x2642D0u: goto label_2642d0;
            case 0x2642DCu: goto label_2642dc;
            case 0x2642FCu: goto label_2642fc;
            case 0x264314u: goto label_264314;
            case 0x264340u: goto label_264340;
            case 0x264344u: goto label_264344;
            case 0x264348u: goto label_264348;
            case 0x264354u: goto label_264354;
            case 0x26436Cu: goto label_26436c;
            case 0x264370u: goto label_264370;
            case 0x2643C4u: goto label_2643c4;
            case 0x2643C8u: goto label_2643c8;
            case 0x264448u: goto label_264448;
            case 0x264464u: goto label_264464;
            case 0x264480u: goto label_264480;
            case 0x2644A8u: goto label_2644a8;
            case 0x2644ACu: goto label_2644ac;
            case 0x2644B0u: goto label_2644b0;
            case 0x2644B8u: goto label_2644b8;
            case 0x2644BCu: goto label_2644bc;
            case 0x2644FCu: goto label_2644fc;
            case 0x264548u: goto label_264548;
            case 0x26455Cu: goto label_26455c;
            case 0x264570u: goto label_264570;
            case 0x26457Cu: goto label_26457c;
            case 0x264590u: goto label_264590;
            case 0x2645A8u: goto label_2645a8;
            case 0x2645B8u: goto label_2645b8;
            case 0x2645BCu: goto label_2645bc;
            case 0x2645CCu: goto label_2645cc;
            case 0x2645D0u: goto label_2645d0;
            case 0x2645F4u: goto label_2645f4;
            case 0x264648u: goto label_264648;
            case 0x264674u: goto label_264674;
            case 0x2646A4u: goto label_2646a4;
            case 0x2646D8u: goto label_2646d8;
            case 0x2646E0u: goto label_2646e0;
            case 0x2646E4u: goto label_2646e4;
            case 0x264720u: goto label_264720;
            case 0x264744u: goto label_264744;
            case 0x264794u: goto label_264794;
            case 0x264808u: goto label_264808;
            case 0x26480Cu: goto label_26480c;
            case 0x264868u: goto label_264868;
            case 0x264878u: goto label_264878;
            case 0x2648F0u: goto label_2648f0;
            case 0x264914u: goto label_264914;
            case 0x264940u: goto label_264940;
            case 0x264944u: goto label_264944;
            case 0x264948u: goto label_264948;
            case 0x264958u: goto label_264958;
            case 0x264984u: goto label_264984;
            case 0x2649CCu: goto label_2649cc;
            case 0x2649DCu: goto label_2649dc;
            case 0x2649E0u: goto label_2649e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x263D94u; }
            if (ctx->pc != 0x263D94u) { return; }
        }
        }
    }
    ctx->pc = 0x263D94u;
    // 0x263d94: 0x90430016  lbu         $v1, 0x16($v0)
    ctx->pc = 0x263d94u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x263d98: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x263d98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x263d9c: 0x1230000a  beq         $s1, $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x263D9Cu;
    {
        const bool branch_taken_0x263d9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x263DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263D9Cu;
            // 0x263da0: 0xa0430016  sb          $v1, 0x16($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 22), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263d9c) {
            ctx->pc = 0x263DC8u;
            goto label_263dc8;
        }
    }
    ctx->pc = 0x263DA4u;
    // 0x263da4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x263da4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x263da8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x263da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263dac: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x263dacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263db0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x263db0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263db4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x263db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x263db8: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x263db8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x263dbc: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x263dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x263dc0: 0x40f809  jalr        $v0
    ctx->pc = 0x263DC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x263DC8u);
        ctx->pc = 0x263DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263DC0u;
            // 0x263dc4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x263DC8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x263DC8u: goto label_263dc8;
            case 0x263E58u: goto label_263e58;
            case 0x263E70u: goto label_263e70;
            case 0x263E78u: goto label_263e78;
            case 0x263E90u: goto label_263e90;
            case 0x263EE8u: goto label_263ee8;
            case 0x263F00u: goto label_263f00;
            case 0x263F44u: goto label_263f44;
            case 0x263F60u: goto label_263f60;
            case 0x263FE4u: goto label_263fe4;
            case 0x26404Cu: goto label_26404c;
            case 0x26407Cu: goto label_26407c;
            case 0x2640D4u: goto label_2640d4;
            case 0x2640D8u: goto label_2640d8;
            case 0x264128u: goto label_264128;
            case 0x264180u: goto label_264180;
            case 0x264188u: goto label_264188;
            case 0x2641F0u: goto label_2641f0;
            case 0x264254u: goto label_264254;
            case 0x2642D0u: goto label_2642d0;
            case 0x2642DCu: goto label_2642dc;
            case 0x2642FCu: goto label_2642fc;
            case 0x264314u: goto label_264314;
            case 0x264340u: goto label_264340;
            case 0x264344u: goto label_264344;
            case 0x264348u: goto label_264348;
            case 0x264354u: goto label_264354;
            case 0x26436Cu: goto label_26436c;
            case 0x264370u: goto label_264370;
            case 0x2643C4u: goto label_2643c4;
            case 0x2643C8u: goto label_2643c8;
            case 0x264448u: goto label_264448;
            case 0x264464u: goto label_264464;
            case 0x264480u: goto label_264480;
            case 0x2644A8u: goto label_2644a8;
            case 0x2644ACu: goto label_2644ac;
            case 0x2644B0u: goto label_2644b0;
            case 0x2644B8u: goto label_2644b8;
            case 0x2644BCu: goto label_2644bc;
            case 0x2644FCu: goto label_2644fc;
            case 0x264548u: goto label_264548;
            case 0x26455Cu: goto label_26455c;
            case 0x264570u: goto label_264570;
            case 0x26457Cu: goto label_26457c;
            case 0x264590u: goto label_264590;
            case 0x2645A8u: goto label_2645a8;
            case 0x2645B8u: goto label_2645b8;
            case 0x2645BCu: goto label_2645bc;
            case 0x2645CCu: goto label_2645cc;
            case 0x2645D0u: goto label_2645d0;
            case 0x2645F4u: goto label_2645f4;
            case 0x264648u: goto label_264648;
            case 0x264674u: goto label_264674;
            case 0x2646A4u: goto label_2646a4;
            case 0x2646D8u: goto label_2646d8;
            case 0x2646E0u: goto label_2646e0;
            case 0x2646E4u: goto label_2646e4;
            case 0x264720u: goto label_264720;
            case 0x264744u: goto label_264744;
            case 0x264794u: goto label_264794;
            case 0x264808u: goto label_264808;
            case 0x26480Cu: goto label_26480c;
            case 0x264868u: goto label_264868;
            case 0x264878u: goto label_264878;
            case 0x2648F0u: goto label_2648f0;
            case 0x264914u: goto label_264914;
            case 0x264940u: goto label_264940;
            case 0x264944u: goto label_264944;
            case 0x264948u: goto label_264948;
            case 0x264958u: goto label_264958;
            case 0x264984u: goto label_264984;
            case 0x2649CCu: goto label_2649cc;
            case 0x2649DCu: goto label_2649dc;
            case 0x2649E0u: goto label_2649e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x263DC8u; }
            if (ctx->pc != 0x263DC8u) { return; }
        }
        }
    }
    ctx->pc = 0x263DC8u;
label_263dc8:
    // 0x263dc8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x263dc8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x263dcc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x263dccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x263dd0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x263dd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x263dd4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x263dd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x263dd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x263dd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x263ddc: 0x3e00008  jr          $ra
    ctx->pc = 0x263DDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263DDCu;
            // 0x263de0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x263DC8u: goto label_263dc8;
            case 0x263E58u: goto label_263e58;
            case 0x263E70u: goto label_263e70;
            case 0x263E78u: goto label_263e78;
            case 0x263E90u: goto label_263e90;
            case 0x263EE8u: goto label_263ee8;
            case 0x263F00u: goto label_263f00;
            case 0x263F44u: goto label_263f44;
            case 0x263F60u: goto label_263f60;
            case 0x263FE4u: goto label_263fe4;
            case 0x26404Cu: goto label_26404c;
            case 0x26407Cu: goto label_26407c;
            case 0x2640D4u: goto label_2640d4;
            case 0x2640D8u: goto label_2640d8;
            case 0x264128u: goto label_264128;
            case 0x264180u: goto label_264180;
            case 0x264188u: goto label_264188;
            case 0x2641F0u: goto label_2641f0;
            case 0x264254u: goto label_264254;
            case 0x2642D0u: goto label_2642d0;
            case 0x2642DCu: goto label_2642dc;
            case 0x2642FCu: goto label_2642fc;
            case 0x264314u: goto label_264314;
            case 0x264340u: goto label_264340;
            case 0x264344u: goto label_264344;
            case 0x264348u: goto label_264348;
            case 0x264354u: goto label_264354;
            case 0x26436Cu: goto label_26436c;
            case 0x264370u: goto label_264370;
            case 0x2643C4u: goto label_2643c4;
            case 0x2643C8u: goto label_2643c8;
            case 0x264448u: goto label_264448;
            case 0x264464u: goto label_264464;
            case 0x264480u: goto label_264480;
            case 0x2644A8u: goto label_2644a8;
            case 0x2644ACu: goto label_2644ac;
            case 0x2644B0u: goto label_2644b0;
            case 0x2644B8u: goto label_2644b8;
            case 0x2644BCu: goto label_2644bc;
            case 0x2644FCu: goto label_2644fc;
            case 0x264548u: goto label_264548;
            case 0x26455Cu: goto label_26455c;
            case 0x264570u: goto label_264570;
            case 0x26457Cu: goto label_26457c;
            case 0x264590u: goto label_264590;
            case 0x2645A8u: goto label_2645a8;
            case 0x2645B8u: goto label_2645b8;
            case 0x2645BCu: goto label_2645bc;
            case 0x2645CCu: goto label_2645cc;
            case 0x2645D0u: goto label_2645d0;
            case 0x2645F4u: goto label_2645f4;
            case 0x264648u: goto label_264648;
            case 0x264674u: goto label_264674;
            case 0x2646A4u: goto label_2646a4;
            case 0x2646D8u: goto label_2646d8;
            case 0x2646E0u: goto label_2646e0;
            case 0x2646E4u: goto label_2646e4;
            case 0x264720u: goto label_264720;
            case 0x264744u: goto label_264744;
            case 0x264794u: goto label_264794;
            case 0x264808u: goto label_264808;
            case 0x26480Cu: goto label_26480c;
            case 0x264868u: goto label_264868;
            case 0x264878u: goto label_264878;
            case 0x2648F0u: goto label_2648f0;
            case 0x264914u: goto label_264914;
            case 0x264940u: goto label_264940;
            case 0x264944u: goto label_264944;
            case 0x264948u: goto label_264948;
            case 0x264958u: goto label_264958;
            case 0x264984u: goto label_264984;
            case 0x2649CCu: goto label_2649cc;
            case 0x2649DCu: goto label_2649dc;
            case 0x2649E0u: goto label_2649e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x263DE4u;
    // 0x263de4: 0x0  nop
    ctx->pc = 0x263de4u;
    // NOP
    // 0x263de8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x263de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x263dec: 0x24020074  addiu       $v0, $zero, 0x74
    ctx->pc = 0x263decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
    // 0x263df0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x263df0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x263df4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x263df4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x263df8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x263df8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263dfc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x263dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x263e00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x263e00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263e04: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x263e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x263e08: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x263e08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263e0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x263e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x263e10: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x263e10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x263e14: 0x96430000  lhu         $v1, 0x0($s2)
    ctx->pc = 0x263e14u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x263e18: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x263E18u;
    {
        const bool branch_taken_0x263e18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x263E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263E18u;
            // 0x263e1c: 0x24b30010  addiu       $s3, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263e18) {
            ctx->pc = 0x263E58u;
            goto label_263e58;
        }
    }
    ctx->pc = 0x263E20u;
    // 0x263e20: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x263e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x263e24: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x263e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x263e28: 0x1443004d  bne         $v0, $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x263E28u;
    {
        const bool branch_taken_0x263e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x263E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263E28u;
            // 0x263e2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263e28) {
            ctx->pc = 0x263F60u;
            goto label_263f60;
        }
    }
    ctx->pc = 0x263E30u;
    // 0x263e30: 0x8ca30010  lw          $v1, 0x10($a1)
    ctx->pc = 0x263e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x263e34: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x263e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x263e38: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x263e38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x263e3c: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x263e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x263e40: 0x40f809  jalr        $v0
    ctx->pc = 0x263E40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x263E48u);
        ctx->pc = 0x263E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263E40u;
            // 0x263e44: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x263E48u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x263DC8u: goto label_263dc8;
            case 0x263E58u: goto label_263e58;
            case 0x263E70u: goto label_263e70;
            case 0x263E78u: goto label_263e78;
            case 0x263E90u: goto label_263e90;
            case 0x263EE8u: goto label_263ee8;
            case 0x263F00u: goto label_263f00;
            case 0x263F44u: goto label_263f44;
            case 0x263F60u: goto label_263f60;
            case 0x263FE4u: goto label_263fe4;
            case 0x26404Cu: goto label_26404c;
            case 0x26407Cu: goto label_26407c;
            case 0x2640D4u: goto label_2640d4;
            case 0x2640D8u: goto label_2640d8;
            case 0x264128u: goto label_264128;
            case 0x264180u: goto label_264180;
            case 0x264188u: goto label_264188;
            case 0x2641F0u: goto label_2641f0;
            case 0x264254u: goto label_264254;
            case 0x2642D0u: goto label_2642d0;
            case 0x2642DCu: goto label_2642dc;
            case 0x2642FCu: goto label_2642fc;
            case 0x264314u: goto label_264314;
            case 0x264340u: goto label_264340;
            case 0x264344u: goto label_264344;
            case 0x264348u: goto label_264348;
            case 0x264354u: goto label_264354;
            case 0x26436Cu: goto label_26436c;
            case 0x264370u: goto label_264370;
            case 0x2643C4u: goto label_2643c4;
            case 0x2643C8u: goto label_2643c8;
            case 0x264448u: goto label_264448;
            case 0x264464u: goto label_264464;
            case 0x264480u: goto label_264480;
            case 0x2644A8u: goto label_2644a8;
            case 0x2644ACu: goto label_2644ac;
            case 0x2644B0u: goto label_2644b0;
            case 0x2644B8u: goto label_2644b8;
            case 0x2644BCu: goto label_2644bc;
            case 0x2644FCu: goto label_2644fc;
            case 0x264548u: goto label_264548;
            case 0x26455Cu: goto label_26455c;
            case 0x264570u: goto label_264570;
            case 0x26457Cu: goto label_26457c;
            case 0x264590u: goto label_264590;
            case 0x2645A8u: goto label_2645a8;
            case 0x2645B8u: goto label_2645b8;
            case 0x2645BCu: goto label_2645bc;
            case 0x2645CCu: goto label_2645cc;
            case 0x2645D0u: goto label_2645d0;
            case 0x2645F4u: goto label_2645f4;
            case 0x264648u: goto label_264648;
            case 0x264674u: goto label_264674;
            case 0x2646A4u: goto label_2646a4;
            case 0x2646D8u: goto label_2646d8;
            case 0x2646E0u: goto label_2646e0;
            case 0x2646E4u: goto label_2646e4;
            case 0x264720u: goto label_264720;
            case 0x264744u: goto label_264744;
            case 0x264794u: goto label_264794;
            case 0x264808u: goto label_264808;
            case 0x26480Cu: goto label_26480c;
            case 0x264868u: goto label_264868;
            case 0x264878u: goto label_264878;
            case 0x2648F0u: goto label_2648f0;
            case 0x264914u: goto label_264914;
            case 0x264940u: goto label_264940;
            case 0x264944u: goto label_264944;
            case 0x264948u: goto label_264948;
            case 0x264958u: goto label_264958;
            case 0x264984u: goto label_264984;
            case 0x2649CCu: goto label_2649cc;
            case 0x2649DCu: goto label_2649dc;
            case 0x2649E0u: goto label_2649e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x263E48u; }
            if (ctx->pc != 0x263E48u) { return; }
        }
        }
    }
    ctx->pc = 0x263E48u;
    // 0x263e48: 0x90430016  lbu         $v1, 0x16($v0)
    ctx->pc = 0x263e48u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x263e4c: 0x306300fd  andi        $v1, $v1, 0xFD
    ctx->pc = 0x263e4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
    // 0x263e50: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x263E50u;
    {
        const bool branch_taken_0x263e50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263E54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263E50u;
            // 0x263e54: 0xa0430016  sb          $v1, 0x16($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 22), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263e50) {
            ctx->pc = 0x263E70u;
            goto label_263e70;
        }
    }
    ctx->pc = 0x263E58u;
label_263e58:
    // 0x263e58: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x263e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x263e5c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x263E5Cu;
    {
        const bool branch_taken_0x263e5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x263E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263E5Cu;
            // 0x263e60: 0x2402040c  addiu       $v0, $zero, 0x40C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1036));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263e5c) {
            ctx->pc = 0x263E78u;
            goto label_263e78;
        }
    }
    ctx->pc = 0x263E64u;
    // 0x263e64: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x263e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263e68: 0xc07584c  jal         func_1D6130
    ctx->pc = 0x263E68u;
    SET_GPR_U32(ctx, 31, 0x263E70u);
    ctx->pc = 0x263E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263E68u;
            // 0x263e6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6130u;
    if (runtime->hasFunction(0x1D6130u)) {
        auto targetFn = runtime->lookupFunction(0x1D6130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263E70u; }
        if (ctx->pc != 0x263E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6130_0x1d6130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263E70u; }
        if (ctx->pc != 0x263E70u) { return; }
    }
    ctx->pc = 0x263E70u;
label_263e70:
    // 0x263e70: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x263E70u;
    {
        const bool branch_taken_0x263e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263E70u;
            // 0x263e74: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263e70) {
            ctx->pc = 0x263F60u;
            goto label_263f60;
        }
    }
    ctx->pc = 0x263E78u;
label_263e78:
    // 0x263e78: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x263E78u;
    {
        const bool branch_taken_0x263e78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x263e78) {
            ctx->pc = 0x263E7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x263E78u;
            // 0x263e7c: 0x8e030034  lw          $v1, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x263E90u;
            goto label_263e90;
        }
    }
    ctx->pc = 0x263E80u;
    // 0x263e80: 0x240203f7  addiu       $v0, $zero, 0x3F7
    ctx->pc = 0x263e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1015));
    // 0x263e84: 0x54620018  bnel        $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x263E84u;
    {
        const bool branch_taken_0x263e84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x263e84) {
            ctx->pc = 0x263E88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x263E84u;
            // 0x263e88: 0x240203f0  addiu       $v0, $zero, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1008));
        ctx->in_delay_slot = false;
            ctx->pc = 0x263EE8u;
            goto label_263ee8;
        }
    }
    ctx->pc = 0x263E8Cu;
    // 0x263e8c: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x263e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_263e90:
    // 0x263e90: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x263e90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263e94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x263e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263e98: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x263e98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263e9c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x263e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x263ea0: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x263ea0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x263ea4: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x263ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x263ea8: 0x40f809  jalr        $v0
    ctx->pc = 0x263EA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x263EB0u);
        ctx->pc = 0x263EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263EA8u;
            // 0x263eac: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x263EB0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x263DC8u: goto label_263dc8;
            case 0x263E58u: goto label_263e58;
            case 0x263E70u: goto label_263e70;
            case 0x263E78u: goto label_263e78;
            case 0x263E90u: goto label_263e90;
            case 0x263EE8u: goto label_263ee8;
            case 0x263F00u: goto label_263f00;
            case 0x263F44u: goto label_263f44;
            case 0x263F60u: goto label_263f60;
            case 0x263FE4u: goto label_263fe4;
            case 0x26404Cu: goto label_26404c;
            case 0x26407Cu: goto label_26407c;
            case 0x2640D4u: goto label_2640d4;
            case 0x2640D8u: goto label_2640d8;
            case 0x264128u: goto label_264128;
            case 0x264180u: goto label_264180;
            case 0x264188u: goto label_264188;
            case 0x2641F0u: goto label_2641f0;
            case 0x264254u: goto label_264254;
            case 0x2642D0u: goto label_2642d0;
            case 0x2642DCu: goto label_2642dc;
            case 0x2642FCu: goto label_2642fc;
            case 0x264314u: goto label_264314;
            case 0x264340u: goto label_264340;
            case 0x264344u: goto label_264344;
            case 0x264348u: goto label_264348;
            case 0x264354u: goto label_264354;
            case 0x26436Cu: goto label_26436c;
            case 0x264370u: goto label_264370;
            case 0x2643C4u: goto label_2643c4;
            case 0x2643C8u: goto label_2643c8;
            case 0x264448u: goto label_264448;
            case 0x264464u: goto label_264464;
            case 0x264480u: goto label_264480;
            case 0x2644A8u: goto label_2644a8;
            case 0x2644ACu: goto label_2644ac;
            case 0x2644B0u: goto label_2644b0;
            case 0x2644B8u: goto label_2644b8;
            case 0x2644BCu: goto label_2644bc;
            case 0x2644FCu: goto label_2644fc;
            case 0x264548u: goto label_264548;
            case 0x26455Cu: goto label_26455c;
            case 0x264570u: goto label_264570;
            case 0x26457Cu: goto label_26457c;
            case 0x264590u: goto label_264590;
            case 0x2645A8u: goto label_2645a8;
            case 0x2645B8u: goto label_2645b8;
            case 0x2645BCu: goto label_2645bc;
            case 0x2645CCu: goto label_2645cc;
            case 0x2645D0u: goto label_2645d0;
            case 0x2645F4u: goto label_2645f4;
            case 0x264648u: goto label_264648;
            case 0x264674u: goto label_264674;
            case 0x2646A4u: goto label_2646a4;
            case 0x2646D8u: goto label_2646d8;
            case 0x2646E0u: goto label_2646e0;
            case 0x2646E4u: goto label_2646e4;
            case 0x264720u: goto label_264720;
            case 0x264744u: goto label_264744;
            case 0x264794u: goto label_264794;
            case 0x264808u: goto label_264808;
            case 0x26480Cu: goto label_26480c;
            case 0x264868u: goto label_264868;
            case 0x264878u: goto label_264878;
            case 0x2648F0u: goto label_2648f0;
            case 0x264914u: goto label_264914;
            case 0x264940u: goto label_264940;
            case 0x264944u: goto label_264944;
            case 0x264948u: goto label_264948;
            case 0x264958u: goto label_264958;
            case 0x264984u: goto label_264984;
            case 0x2649CCu: goto label_2649cc;
            case 0x2649DCu: goto label_2649dc;
            case 0x2649E0u: goto label_2649e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x263EB0u; }
            if (ctx->pc != 0x263EB0u) { return; }
        }
        }
    }
    ctx->pc = 0x263EB0u;
    // 0x263eb0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x263eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x263eb4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x263eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263eb8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x263eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x263ebc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x263ebcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263ec0: 0x24500018  addiu       $s0, $v0, 0x18
    ctx->pc = 0x263ec0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x263ec4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x263ec4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263ec8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x263ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x263ecc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x263eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263ed0: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x263ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x263ed4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x263ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x263ed8: 0xc09a7fc  jal         func_269FF0
    ctx->pc = 0x263ED8u;
    SET_GPR_U32(ctx, 31, 0x263EE0u);
    ctx->pc = 0x263EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263ED8u;
            // 0x263edc: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x269FF0u;
    if (runtime->hasFunction(0x269FF0u)) {
        auto targetFn = runtime->lookupFunction(0x269FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263EE0u; }
        if (ctx->pc != 0x263EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00269FF0_0x269ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263EE0u; }
        if (ctx->pc != 0x263EE0u) { return; }
    }
    ctx->pc = 0x263EE0u;
    // 0x263ee0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x263EE0u;
    {
        const bool branch_taken_0x263ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263EE0u;
            // 0x263ee4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263ee0) {
            ctx->pc = 0x263F60u;
            goto label_263f60;
        }
    }
    ctx->pc = 0x263EE8u;
label_263ee8:
    // 0x263ee8: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x263EE8u;
    {
        const bool branch_taken_0x263ee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x263ee8) {
            ctx->pc = 0x263EECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x263EE8u;
            // 0x263eec: 0x8e030034  lw          $v1, 0x34($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x263F00u;
            goto label_263f00;
        }
    }
    ctx->pc = 0x263EF0u;
    // 0x263ef0: 0x24020405  addiu       $v0, $zero, 0x405
    ctx->pc = 0x263ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1029));
    // 0x263ef4: 0x54620013  bnel        $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x263EF4u;
    {
        const bool branch_taken_0x263ef4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x263ef4) {
            ctx->pc = 0x263EF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x263EF4u;
            // 0x263ef8: 0x8e230008  lw          $v1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x263F44u;
            goto label_263f44;
        }
    }
    ctx->pc = 0x263EFCu;
    // 0x263efc: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x263efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_263f00:
    // 0x263f00: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x263f00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263f04: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x263f04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263f08: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x263f08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263f0c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x263f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x263f10: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x263f10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x263f14: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x263f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x263f18: 0x40f809  jalr        $v0
    ctx->pc = 0x263F18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x263F20u);
        ctx->pc = 0x263F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263F18u;
            // 0x263f1c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x263F20u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x263DC8u: goto label_263dc8;
            case 0x263E58u: goto label_263e58;
            case 0x263E70u: goto label_263e70;
            case 0x263E78u: goto label_263e78;
            case 0x263E90u: goto label_263e90;
            case 0x263EE8u: goto label_263ee8;
            case 0x263F00u: goto label_263f00;
            case 0x263F44u: goto label_263f44;
            case 0x263F60u: goto label_263f60;
            case 0x263FE4u: goto label_263fe4;
            case 0x26404Cu: goto label_26404c;
            case 0x26407Cu: goto label_26407c;
            case 0x2640D4u: goto label_2640d4;
            case 0x2640D8u: goto label_2640d8;
            case 0x264128u: goto label_264128;
            case 0x264180u: goto label_264180;
            case 0x264188u: goto label_264188;
            case 0x2641F0u: goto label_2641f0;
            case 0x264254u: goto label_264254;
            case 0x2642D0u: goto label_2642d0;
            case 0x2642DCu: goto label_2642dc;
            case 0x2642FCu: goto label_2642fc;
            case 0x264314u: goto label_264314;
            case 0x264340u: goto label_264340;
            case 0x264344u: goto label_264344;
            case 0x264348u: goto label_264348;
            case 0x264354u: goto label_264354;
            case 0x26436Cu: goto label_26436c;
            case 0x264370u: goto label_264370;
            case 0x2643C4u: goto label_2643c4;
            case 0x2643C8u: goto label_2643c8;
            case 0x264448u: goto label_264448;
            case 0x264464u: goto label_264464;
            case 0x264480u: goto label_264480;
            case 0x2644A8u: goto label_2644a8;
            case 0x2644ACu: goto label_2644ac;
            case 0x2644B0u: goto label_2644b0;
            case 0x2644B8u: goto label_2644b8;
            case 0x2644BCu: goto label_2644bc;
            case 0x2644FCu: goto label_2644fc;
            case 0x264548u: goto label_264548;
            case 0x26455Cu: goto label_26455c;
            case 0x264570u: goto label_264570;
            case 0x26457Cu: goto label_26457c;
            case 0x264590u: goto label_264590;
            case 0x2645A8u: goto label_2645a8;
            case 0x2645B8u: goto label_2645b8;
            case 0x2645BCu: goto label_2645bc;
            case 0x2645CCu: goto label_2645cc;
            case 0x2645D0u: goto label_2645d0;
            case 0x2645F4u: goto label_2645f4;
            case 0x264648u: goto label_264648;
            case 0x264674u: goto label_264674;
            case 0x2646A4u: goto label_2646a4;
            case 0x2646D8u: goto label_2646d8;
            case 0x2646E0u: goto label_2646e0;
            case 0x2646E4u: goto label_2646e4;
            case 0x264720u: goto label_264720;
            case 0x264744u: goto label_264744;
            case 0x264794u: goto label_264794;
            case 0x264808u: goto label_264808;
            case 0x26480Cu: goto label_26480c;
            case 0x264868u: goto label_264868;
            case 0x264878u: goto label_264878;
            case 0x2648F0u: goto label_2648f0;
            case 0x264914u: goto label_264914;
            case 0x264940u: goto label_264940;
            case 0x264944u: goto label_264944;
            case 0x264948u: goto label_264948;
            case 0x264958u: goto label_264958;
            case 0x264984u: goto label_264984;
            case 0x2649CCu: goto label_2649cc;
            case 0x2649DCu: goto label_2649dc;
            case 0x2649E0u: goto label_2649e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x263F20u; }
            if (ctx->pc != 0x263F20u) { return; }
        }
        }
    }
    ctx->pc = 0x263F20u;
    // 0x263f20: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x263f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x263f24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x263f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263f28: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x263f28u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263f2c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x263f2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263f30: 0xc09a862  jal         func_26A188
    ctx->pc = 0x263F30u;
    SET_GPR_U32(ctx, 31, 0x263F38u);
    ctx->pc = 0x263F34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263F30u;
            // 0x263f34: 0x24840030  addiu       $a0, $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26A188u;
    if (runtime->hasFunction(0x26A188u)) {
        auto targetFn = runtime->lookupFunction(0x26A188u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263F38u; }
        if (ctx->pc != 0x263F38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A188_0x26a188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263F38u; }
        if (ctx->pc != 0x263F38u) { return; }
    }
    ctx->pc = 0x263F38u;
    // 0x263f38: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x263f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x263f3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x263F3Cu;
    {
        const bool branch_taken_0x263f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263F3Cu;
            // 0x263f40: 0x24420030  addiu       $v0, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263f3c) {
            ctx->pc = 0x263F60u;
            goto label_263f60;
        }
    }
    ctx->pc = 0x263F44u;
label_263f44:
    // 0x263f44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x263f44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263f48: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x263f48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263f4c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x263f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x263f50: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x263f50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x263f54: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x263f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x263f58: 0x40f809  jalr        $v0
    ctx->pc = 0x263F58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x263F60u);
        ctx->pc = 0x263F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263F58u;
            // 0x263f5c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x263F60u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x263DC8u: goto label_263dc8;
            case 0x263E58u: goto label_263e58;
            case 0x263E70u: goto label_263e70;
            case 0x263E78u: goto label_263e78;
            case 0x263E90u: goto label_263e90;
            case 0x263EE8u: goto label_263ee8;
            case 0x263F00u: goto label_263f00;
            case 0x263F44u: goto label_263f44;
            case 0x263F60u: goto label_263f60;
            case 0x263FE4u: goto label_263fe4;
            case 0x26404Cu: goto label_26404c;
            case 0x26407Cu: goto label_26407c;
            case 0x2640D4u: goto label_2640d4;
            case 0x2640D8u: goto label_2640d8;
            case 0x264128u: goto label_264128;
            case 0x264180u: goto label_264180;
            case 0x264188u: goto label_264188;
            case 0x2641F0u: goto label_2641f0;
            case 0x264254u: goto label_264254;
            case 0x2642D0u: goto label_2642d0;
            case 0x2642DCu: goto label_2642dc;
            case 0x2642FCu: goto label_2642fc;
            case 0x264314u: goto label_264314;
            case 0x264340u: goto label_264340;
            case 0x264344u: goto label_264344;
            case 0x264348u: goto label_264348;
            case 0x264354u: goto label_264354;
            case 0x26436Cu: goto label_26436c;
            case 0x264370u: goto label_264370;
            case 0x2643C4u: goto label_2643c4;
            case 0x2643C8u: goto label_2643c8;
            case 0x264448u: goto label_264448;
            case 0x264464u: goto label_264464;
            case 0x264480u: goto label_264480;
            case 0x2644A8u: goto label_2644a8;
            case 0x2644ACu: goto label_2644ac;
            case 0x2644B0u: goto label_2644b0;
            case 0x2644B8u: goto label_2644b8;
            case 0x2644BCu: goto label_2644bc;
            case 0x2644FCu: goto label_2644fc;
            case 0x264548u: goto label_264548;
            case 0x26455Cu: goto label_26455c;
            case 0x264570u: goto label_264570;
            case 0x26457Cu: goto label_26457c;
            case 0x264590u: goto label_264590;
            case 0x2645A8u: goto label_2645a8;
            case 0x2645B8u: goto label_2645b8;
            case 0x2645BCu: goto label_2645bc;
            case 0x2645CCu: goto label_2645cc;
            case 0x2645D0u: goto label_2645d0;
            case 0x2645F4u: goto label_2645f4;
            case 0x264648u: goto label_264648;
            case 0x264674u: goto label_264674;
            case 0x2646A4u: goto label_2646a4;
            case 0x2646D8u: goto label_2646d8;
            case 0x2646E0u: goto label_2646e0;
            case 0x2646E4u: goto label_2646e4;
            case 0x264720u: goto label_264720;
            case 0x264744u: goto label_264744;
            case 0x264794u: goto label_264794;
            case 0x264808u: goto label_264808;
            case 0x26480Cu: goto label_26480c;
            case 0x264868u: goto label_264868;
            case 0x264878u: goto label_264878;
            case 0x2648F0u: goto label_2648f0;
            case 0x264914u: goto label_264914;
            case 0x264940u: goto label_264940;
            case 0x264944u: goto label_264944;
            case 0x264948u: goto label_264948;
            case 0x264958u: goto label_264958;
            case 0x264984u: goto label_264984;
            case 0x2649CCu: goto label_2649cc;
            case 0x2649DCu: goto label_2649dc;
            case 0x2649E0u: goto label_2649e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x263F60u; }
            if (ctx->pc != 0x263F60u) { return; }
        }
        }
    }
    ctx->pc = 0x263F60u;
label_263f60:
    // 0x263f60: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x263f60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x263f64: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x263f64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x263f68: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x263f68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x263f6c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x263f6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x263f70: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x263f70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x263f74: 0x3e00008  jr          $ra
    ctx->pc = 0x263F74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263F74u;
            // 0x263f78: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x263DC8u: goto label_263dc8;
            case 0x263E58u: goto label_263e58;
            case 0x263E70u: goto label_263e70;
            case 0x263E78u: goto label_263e78;
            case 0x263E90u: goto label_263e90;
            case 0x263EE8u: goto label_263ee8;
            case 0x263F00u: goto label_263f00;
            case 0x263F44u: goto label_263f44;
            case 0x263F60u: goto label_263f60;
            case 0x263FE4u: goto label_263fe4;
            case 0x26404Cu: goto label_26404c;
            case 0x26407Cu: goto label_26407c;
            case 0x2640D4u: goto label_2640d4;
            case 0x2640D8u: goto label_2640d8;
            case 0x264128u: goto label_264128;
            case 0x264180u: goto label_264180;
            case 0x264188u: goto label_264188;
            case 0x2641F0u: goto label_2641f0;
            case 0x264254u: goto label_264254;
            case 0x2642D0u: goto label_2642d0;
            case 0x2642DCu: goto label_2642dc;
            case 0x2642FCu: goto label_2642fc;
            case 0x264314u: goto label_264314;
            case 0x264340u: goto label_264340;
            case 0x264344u: goto label_264344;
            case 0x264348u: goto label_264348;
            case 0x264354u: goto label_264354;
            case 0x26436Cu: goto label_26436c;
            case 0x264370u: goto label_264370;
            case 0x2643C4u: goto label_2643c4;
            case 0x2643C8u: goto label_2643c8;
            case 0x264448u: goto label_264448;
            case 0x264464u: goto label_264464;
            case 0x264480u: goto label_264480;
            case 0x2644A8u: goto label_2644a8;
            case 0x2644ACu: goto label_2644ac;
            case 0x2644B0u: goto label_2644b0;
            case 0x2644B8u: goto label_2644b8;
            case 0x2644BCu: goto label_2644bc;
            case 0x2644FCu: goto label_2644fc;
            case 0x264548u: goto label_264548;
            case 0x26455Cu: goto label_26455c;
            case 0x264570u: goto label_264570;
            case 0x26457Cu: goto label_26457c;
            case 0x264590u: goto label_264590;
            case 0x2645A8u: goto label_2645a8;
            case 0x2645B8u: goto label_2645b8;
            case 0x2645BCu: goto label_2645bc;
            case 0x2645CCu: goto label_2645cc;
            case 0x2645D0u: goto label_2645d0;
            case 0x2645F4u: goto label_2645f4;
            case 0x264648u: goto label_264648;
            case 0x264674u: goto label_264674;
            case 0x2646A4u: goto label_2646a4;
            case 0x2646D8u: goto label_2646d8;
            case 0x2646E0u: goto label_2646e0;
            case 0x2646E4u: goto label_2646e4;
            case 0x264720u: goto label_264720;
            case 0x264744u: goto label_264744;
            case 0x264794u: goto label_264794;
            case 0x264808u: goto label_264808;
            case 0x26480Cu: goto label_26480c;
            case 0x264868u: goto label_264868;
            case 0x264878u: goto label_264878;
            case 0x2648F0u: goto label_2648f0;
            case 0x264914u: goto label_264914;
            case 0x264940u: goto label_264940;
            case 0x264944u: goto label_264944;
            case 0x264948u: goto label_264948;
            case 0x264958u: goto label_264958;
            case 0x264984u: goto label_264984;
            case 0x2649CCu: goto label_2649cc;
            case 0x2649DCu: goto label_2649dc;
            case 0x2649E0u: goto label_2649e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x263F7Cu;
    // 0x263f7c: 0x0  nop
    ctx->pc = 0x263f7cu;
    // NOP
    // 0x263f80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x263f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x263f84: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x263f84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x263f88: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x263f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x263f8c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x263f8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263f90: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x263f90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x263f94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x263f94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263f98: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x263f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x263f9c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x263f9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263fa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x263fa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x263fa4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x263fa4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263fa8: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x263fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x263fac: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x263facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x263fb0: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x263fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x263fb4: 0xc04c4ec  jal         func_1313B0
    ctx->pc = 0x263FB4u;
    SET_GPR_U32(ctx, 31, 0x263FBCu);
    ctx->pc = 0x263FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x263FB4u;
            // 0x263fb8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1313B0u;
    if (runtime->hasFunction(0x1313B0u)) {
        auto targetFn = runtime->lookupFunction(0x1313B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263FBCu; }
        if (ctx->pc != 0x263FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001313B0_0x1313b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x263FBCu; }
        if (ctx->pc != 0x263FBCu) { return; }
    }
    ctx->pc = 0x263FBCu;
    // 0x263fbc: 0x12300009  beq         $s1, $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x263FBCu;
    {
        const bool branch_taken_0x263fbc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x263FC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263FBCu;
            // 0x263fc0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263fbc) {
            ctx->pc = 0x263FE4u;
            goto label_263fe4;
        }
    }
    ctx->pc = 0x263FC4u;
    // 0x263fc4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x263fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x263fc8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x263fc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263fcc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x263fccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263fd0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x263fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x263fd4: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x263fd4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x263fd8: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x263fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x263fdc: 0x40f809  jalr        $v0
    ctx->pc = 0x263FDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x263FE4u);
        ctx->pc = 0x263FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263FDCu;
            // 0x263fe0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x263FE4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x263DC8u: goto label_263dc8;
            case 0x263E58u: goto label_263e58;
            case 0x263E70u: goto label_263e70;
            case 0x263E78u: goto label_263e78;
            case 0x263E90u: goto label_263e90;
            case 0x263EE8u: goto label_263ee8;
            case 0x263F00u: goto label_263f00;
            case 0x263F44u: goto label_263f44;
            case 0x263F60u: goto label_263f60;
            case 0x263FE4u: goto label_263fe4;
            case 0x26404Cu: goto label_26404c;
            case 0x26407Cu: goto label_26407c;
            case 0x2640D4u: goto label_2640d4;
            case 0x2640D8u: goto label_2640d8;
            case 0x264128u: goto label_264128;
            case 0x264180u: goto label_264180;
            case 0x264188u: goto label_264188;
            case 0x2641F0u: goto label_2641f0;
            case 0x264254u: goto label_264254;
            case 0x2642D0u: goto label_2642d0;
            case 0x2642DCu: goto label_2642dc;
            case 0x2642FCu: goto label_2642fc;
            case 0x264314u: goto label_264314;
            case 0x264340u: goto label_264340;
            case 0x264344u: goto label_264344;
            case 0x264348u: goto label_264348;
            case 0x264354u: goto label_264354;
            case 0x26436Cu: goto label_26436c;
            case 0x264370u: goto label_264370;
            case 0x2643C4u: goto label_2643c4;
            case 0x2643C8u: goto label_2643c8;
            case 0x264448u: goto label_264448;
            case 0x264464u: goto label_264464;
            case 0x264480u: goto label_264480;
            case 0x2644A8u: goto label_2644a8;
            case 0x2644ACu: goto label_2644ac;
            case 0x2644B0u: goto label_2644b0;
            case 0x2644B8u: goto label_2644b8;
            case 0x2644BCu: goto label_2644bc;
            case 0x2644FCu: goto label_2644fc;
            case 0x264548u: goto label_264548;
            case 0x26455Cu: goto label_26455c;
            case 0x264570u: goto label_264570;
            case 0x26457Cu: goto label_26457c;
            case 0x264590u: goto label_264590;
            case 0x2645A8u: goto label_2645a8;
            case 0x2645B8u: goto label_2645b8;
            case 0x2645BCu: goto label_2645bc;
            case 0x2645CCu: goto label_2645cc;
            case 0x2645D0u: goto label_2645d0;
            case 0x2645F4u: goto label_2645f4;
            case 0x264648u: goto label_264648;
            case 0x264674u: goto label_264674;
            case 0x2646A4u: goto label_2646a4;
            case 0x2646D8u: goto label_2646d8;
            case 0x2646E0u: goto label_2646e0;
            case 0x2646E4u: goto label_2646e4;
            case 0x264720u: goto label_264720;
            case 0x264744u: goto label_264744;
            case 0x264794u: goto label_264794;
            case 0x264808u: goto label_264808;
            case 0x26480Cu: goto label_26480c;
            case 0x264868u: goto label_264868;
            case 0x264878u: goto label_264878;
            case 0x2648F0u: goto label_2648f0;
            case 0x264914u: goto label_264914;
            case 0x264940u: goto label_264940;
            case 0x264944u: goto label_264944;
            case 0x264948u: goto label_264948;
            case 0x264958u: goto label_264958;
            case 0x264984u: goto label_264984;
            case 0x2649CCu: goto label_2649cc;
            case 0x2649DCu: goto label_2649dc;
            case 0x2649E0u: goto label_2649e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x263FE4u; }
            if (ctx->pc != 0x263FE4u) { return; }
        }
        }
    }
    ctx->pc = 0x263FE4u;
label_263fe4:
    // 0x263fe4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x263fe4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x263fe8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x263fe8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x263fec: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x263fecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x263ff0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x263ff0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x263ff4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x263ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x263ff8: 0x3e00008  jr          $ra
    ctx->pc = 0x263FF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x263FF8u;
            // 0x263ffc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x263DC8u: goto label_263dc8;
            case 0x263E58u: goto label_263e58;
            case 0x263E70u: goto label_263e70;
            case 0x263E78u: goto label_263e78;
            case 0x263E90u: goto label_263e90;
            case 0x263EE8u: goto label_263ee8;
            case 0x263F00u: goto label_263f00;
            case 0x263F44u: goto label_263f44;
            case 0x263F60u: goto label_263f60;
            case 0x263FE4u: goto label_263fe4;
            case 0x26404Cu: goto label_26404c;
            case 0x26407Cu: goto label_26407c;
            case 0x2640D4u: goto label_2640d4;
            case 0x2640D8u: goto label_2640d8;
            case 0x264128u: goto label_264128;
            case 0x264180u: goto label_264180;
            case 0x264188u: goto label_264188;
            case 0x2641F0u: goto label_2641f0;
            case 0x264254u: goto label_264254;
            case 0x2642D0u: goto label_2642d0;
            case 0x2642DCu: goto label_2642dc;
            case 0x2642FCu: goto label_2642fc;
            case 0x264314u: goto label_264314;
            case 0x264340u: goto label_264340;
            case 0x264344u: goto label_264344;
            case 0x264348u: goto label_264348;
            case 0x264354u: goto label_264354;
            case 0x26436Cu: goto label_26436c;
            case 0x264370u: goto label_264370;
            case 0x2643C4u: goto label_2643c4;
            case 0x2643C8u: goto label_2643c8;
            case 0x264448u: goto label_264448;
            case 0x264464u: goto label_264464;
            case 0x264480u: goto label_264480;
            case 0x2644A8u: goto label_2644a8;
            case 0x2644ACu: goto label_2644ac;
            case 0x2644B0u: goto label_2644b0;
            case 0x2644B8u: goto label_2644b8;
            case 0x2644BCu: goto label_2644bc;
            case 0x2644FCu: goto label_2644fc;
            case 0x264548u: goto label_264548;
            case 0x26455Cu: goto label_26455c;
            case 0x264570u: goto label_264570;
            case 0x26457Cu: goto label_26457c;
            case 0x264590u: goto label_264590;
            case 0x2645A8u: goto label_2645a8;
            case 0x2645B8u: goto label_2645b8;
            case 0x2645BCu: goto label_2645bc;
            case 0x2645CCu: goto label_2645cc;
            case 0x2645D0u: goto label_2645d0;
            case 0x2645F4u: goto label_2645f4;
            case 0x264648u: goto label_264648;
            case 0x264674u: goto label_264674;
            case 0x2646A4u: goto label_2646a4;
            case 0x2646D8u: goto label_2646d8;
            case 0x2646E0u: goto label_2646e0;
            case 0x2646E4u: goto label_2646e4;
            case 0x264720u: goto label_264720;
            case 0x264744u: goto label_264744;
            case 0x264794u: goto label_264794;
            case 0x264808u: goto label_264808;
            case 0x26480Cu: goto label_26480c;
            case 0x264868u: goto label_264868;
            case 0x264878u: goto label_264878;
            case 0x2648F0u: goto label_2648f0;
            case 0x264914u: goto label_264914;
            case 0x264940u: goto label_264940;
            case 0x264944u: goto label_264944;
            case 0x264948u: goto label_264948;
            case 0x264958u: goto label_264958;
            case 0x264984u: goto label_264984;
            case 0x2649CCu: goto label_2649cc;
            case 0x2649DCu: goto label_2649dc;
            case 0x2649E0u: goto label_2649e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x264000u;
    // 0x264000: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x264000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x264004: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x264004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x264008: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x264008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x26400c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x26400cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x264010: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x264010u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264014: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x264014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x264018: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x264018u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26401c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x26401cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x264020: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x264020u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264024: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x264024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x264028: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x264028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x26402c: 0x96440000  lhu         $a0, 0x0($s2)
    ctx->pc = 0x26402cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x264030: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x264030u;
    {
        const bool branch_taken_0x264030 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x264034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264030u;
            // 0x264034: 0x24730010  addiu       $s3, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264030) {
            ctx->pc = 0x26404Cu;
            goto label_26404c;
        }
    }
    ctx->pc = 0x264038u;
    // 0x264038: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x264038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26403c: 0xc07584c  jal         func_1D6130
    ctx->pc = 0x26403Cu;
    SET_GPR_U32(ctx, 31, 0x264044u);
    ctx->pc = 0x264040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26403Cu;
            // 0x264040: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6130u;
    if (runtime->hasFunction(0x1D6130u)) {
        auto targetFn = runtime->lookupFunction(0x1D6130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264044u; }
        if (ctx->pc != 0x264044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6130_0x1d6130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264044u; }
        if (ctx->pc != 0x264044u) { return; }
    }
    ctx->pc = 0x264044u;
    // 0x264044: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x264044u;
    {
        const bool branch_taken_0x264044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264044u;
            // 0x264048: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264044) {
            ctx->pc = 0x2640D4u;
            goto label_2640d4;
        }
    }
    ctx->pc = 0x26404Cu;
label_26404c:
    // 0x26404c: 0x240203f7  addiu       $v0, $zero, 0x3F7
    ctx->pc = 0x26404cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1015));
    // 0x264050: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x264050u;
    {
        const bool branch_taken_0x264050 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x264054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264050u;
            // 0x264054: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264050) {
            ctx->pc = 0x26407Cu;
            goto label_26407c;
        }
    }
    ctx->pc = 0x264058u;
    // 0x264058: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x264058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x26405c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x26405cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264060: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x264060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264064: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x264064u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x264068: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x264068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x26406c: 0x40f809  jalr        $v0
    ctx->pc = 0x26406Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x264074u);
        ctx->pc = 0x264070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26406Cu;
            // 0x264070: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x264074u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x263DC8u: goto label_263dc8;
            case 0x263E58u: goto label_263e58;
            case 0x263E70u: goto label_263e70;
            case 0x263E78u: goto label_263e78;
            case 0x263E90u: goto label_263e90;
            case 0x263EE8u: goto label_263ee8;
            case 0x263F00u: goto label_263f00;
            case 0x263F44u: goto label_263f44;
            case 0x263F60u: goto label_263f60;
            case 0x263FE4u: goto label_263fe4;
            case 0x26404Cu: goto label_26404c;
            case 0x26407Cu: goto label_26407c;
            case 0x2640D4u: goto label_2640d4;
            case 0x2640D8u: goto label_2640d8;
            case 0x264128u: goto label_264128;
            case 0x264180u: goto label_264180;
            case 0x264188u: goto label_264188;
            case 0x2641F0u: goto label_2641f0;
            case 0x264254u: goto label_264254;
            case 0x2642D0u: goto label_2642d0;
            case 0x2642DCu: goto label_2642dc;
            case 0x2642FCu: goto label_2642fc;
            case 0x264314u: goto label_264314;
            case 0x264340u: goto label_264340;
            case 0x264344u: goto label_264344;
            case 0x264348u: goto label_264348;
            case 0x264354u: goto label_264354;
            case 0x26436Cu: goto label_26436c;
            case 0x264370u: goto label_264370;
            case 0x2643C4u: goto label_2643c4;
            case 0x2643C8u: goto label_2643c8;
            case 0x264448u: goto label_264448;
            case 0x264464u: goto label_264464;
            case 0x264480u: goto label_264480;
            case 0x2644A8u: goto label_2644a8;
            case 0x2644ACu: goto label_2644ac;
            case 0x2644B0u: goto label_2644b0;
            case 0x2644B8u: goto label_2644b8;
            case 0x2644BCu: goto label_2644bc;
            case 0x2644FCu: goto label_2644fc;
            case 0x264548u: goto label_264548;
            case 0x26455Cu: goto label_26455c;
            case 0x264570u: goto label_264570;
            case 0x26457Cu: goto label_26457c;
            case 0x264590u: goto label_264590;
            case 0x2645A8u: goto label_2645a8;
            case 0x2645B8u: goto label_2645b8;
            case 0x2645BCu: goto label_2645bc;
            case 0x2645CCu: goto label_2645cc;
            case 0x2645D0u: goto label_2645d0;
            case 0x2645F4u: goto label_2645f4;
            case 0x264648u: goto label_264648;
            case 0x264674u: goto label_264674;
            case 0x2646A4u: goto label_2646a4;
            case 0x2646D8u: goto label_2646d8;
            case 0x2646E0u: goto label_2646e0;
            case 0x2646E4u: goto label_2646e4;
            case 0x264720u: goto label_264720;
            case 0x264744u: goto label_264744;
            case 0x264794u: goto label_264794;
            case 0x264808u: goto label_264808;
            case 0x26480Cu: goto label_26480c;
            case 0x264868u: goto label_264868;
            case 0x264878u: goto label_264878;
            case 0x2648F0u: goto label_2648f0;
            case 0x264914u: goto label_264914;
            case 0x264940u: goto label_264940;
            case 0x264944u: goto label_264944;
            case 0x264948u: goto label_264948;
            case 0x264958u: goto label_264958;
            case 0x264984u: goto label_264984;
            case 0x2649CCu: goto label_2649cc;
            case 0x2649DCu: goto label_2649dc;
            case 0x2649E0u: goto label_2649e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x264074u; }
            if (ctx->pc != 0x264074u) { return; }
        }
        }
    }
    ctx->pc = 0x264074u;
    // 0x264074: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x264074u;
    {
        const bool branch_taken_0x264074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264074u;
            // 0x264078: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264074) {
            ctx->pc = 0x2640D8u;
            goto label_2640d8;
        }
    }
    ctx->pc = 0x26407Cu;
label_26407c:
    // 0x26407c: 0x8e030034  lw          $v1, 0x34($s0)
    ctx->pc = 0x26407cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x264080: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x264080u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264084: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x264084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264088: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x264088u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26408c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26408cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264090: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x264090u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x264094: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x264094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x264098: 0x40f809  jalr        $v0
    ctx->pc = 0x264098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2640A0u);
        ctx->pc = 0x26409Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264098u;
            // 0x26409c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2640A0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x263DC8u: goto label_263dc8;
            case 0x263E58u: goto label_263e58;
            case 0x263E70u: goto label_263e70;
            case 0x263E78u: goto label_263e78;
            case 0x263E90u: goto label_263e90;
            case 0x263EE8u: goto label_263ee8;
            case 0x263F00u: goto label_263f00;
            case 0x263F44u: goto label_263f44;
            case 0x263F60u: goto label_263f60;
            case 0x263FE4u: goto label_263fe4;
            case 0x26404Cu: goto label_26404c;
            case 0x26407Cu: goto label_26407c;
            case 0x2640D4u: goto label_2640d4;
            case 0x2640D8u: goto label_2640d8;
            case 0x264128u: goto label_264128;
            case 0x264180u: goto label_264180;
            case 0x264188u: goto label_264188;
            case 0x2641F0u: goto label_2641f0;
            case 0x264254u: goto label_264254;
            case 0x2642D0u: goto label_2642d0;
            case 0x2642DCu: goto label_2642dc;
            case 0x2642FCu: goto label_2642fc;
            case 0x264314u: goto label_264314;
            case 0x264340u: goto label_264340;
            case 0x264344u: goto label_264344;
            case 0x264348u: goto label_264348;
            case 0x264354u: goto label_264354;
            case 0x26436Cu: goto label_26436c;
            case 0x264370u: goto label_264370;
            case 0x2643C4u: goto label_2643c4;
            case 0x2643C8u: goto label_2643c8;
            case 0x264448u: goto label_264448;
            case 0x264464u: goto label_264464;
            case 0x264480u: goto label_264480;
            case 0x2644A8u: goto label_2644a8;
            case 0x2644ACu: goto label_2644ac;
            case 0x2644B0u: goto label_2644b0;
            case 0x2644B8u: goto label_2644b8;
            case 0x2644BCu: goto label_2644bc;
            case 0x2644FCu: goto label_2644fc;
            case 0x264548u: goto label_264548;
            case 0x26455Cu: goto label_26455c;
            case 0x264570u: goto label_264570;
            case 0x26457Cu: goto label_26457c;
            case 0x264590u: goto label_264590;
            case 0x2645A8u: goto label_2645a8;
            case 0x2645B8u: goto label_2645b8;
            case 0x2645BCu: goto label_2645bc;
            case 0x2645CCu: goto label_2645cc;
            case 0x2645D0u: goto label_2645d0;
            case 0x2645F4u: goto label_2645f4;
            case 0x264648u: goto label_264648;
            case 0x264674u: goto label_264674;
            case 0x2646A4u: goto label_2646a4;
            case 0x2646D8u: goto label_2646d8;
            case 0x2646E0u: goto label_2646e0;
            case 0x2646E4u: goto label_2646e4;
            case 0x264720u: goto label_264720;
            case 0x264744u: goto label_264744;
            case 0x264794u: goto label_264794;
            case 0x264808u: goto label_264808;
            case 0x26480Cu: goto label_26480c;
            case 0x264868u: goto label_264868;
            case 0x264878u: goto label_264878;
            case 0x2648F0u: goto label_2648f0;
            case 0x264914u: goto label_264914;
            case 0x264940u: goto label_264940;
            case 0x264944u: goto label_264944;
            case 0x264948u: goto label_264948;
            case 0x264958u: goto label_264958;
            case 0x264984u: goto label_264984;
            case 0x2649CCu: goto label_2649cc;
            case 0x2649DCu: goto label_2649dc;
            case 0x2649E0u: goto label_2649e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2640A0u; }
            if (ctx->pc != 0x2640A0u) { return; }
        }
        }
    }
    ctx->pc = 0x2640A0u;
    // 0x2640a0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2640a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2640a4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2640a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2640a8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2640a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2640ac: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2640acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2640b0: 0x24500018  addiu       $s0, $v0, 0x18
    ctx->pc = 0x2640b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x2640b4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2640b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2640b8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2640b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2640bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2640bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2640c0: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x2640c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x2640c4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x2640c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x2640c8: 0xc09a7fc  jal         func_269FF0
    ctx->pc = 0x2640C8u;
    SET_GPR_U32(ctx, 31, 0x2640D0u);
    ctx->pc = 0x2640CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2640C8u;
            // 0x2640cc: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x269FF0u;
    if (runtime->hasFunction(0x269FF0u)) {
        auto targetFn = runtime->lookupFunction(0x269FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2640D0u; }
        if (ctx->pc != 0x2640D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00269FF0_0x269ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2640D0u; }
        if (ctx->pc != 0x2640D0u) { return; }
    }
    ctx->pc = 0x2640D0u;
    // 0x2640d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2640d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2640d4:
    // 0x2640d4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2640d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2640d8:
    // 0x2640d8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2640d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2640dc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2640dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2640e0: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2640e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2640e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2640e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2640e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2640E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2640ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2640E8u;
            // 0x2640ec: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x263DC8u: goto label_263dc8;
            case 0x263E58u: goto label_263e58;
            case 0x263E70u: goto label_263e70;
            case 0x263E78u: goto label_263e78;
            case 0x263E90u: goto label_263e90;
            case 0x263EE8u: goto label_263ee8;
            case 0x263F00u: goto label_263f00;
            case 0x263F44u: goto label_263f44;
            case 0x263F60u: goto label_263f60;
            case 0x263FE4u: goto label_263fe4;
            case 0x26404Cu: goto label_26404c;
            case 0x26407Cu: goto label_26407c;
            case 0x2640D4u: goto label_2640d4;
            case 0x2640D8u: goto label_2640d8;
            case 0x264128u: goto label_264128;
            case 0x264180u: goto label_264180;
            case 0x264188u: goto label_264188;
            case 0x2641F0u: goto label_2641f0;
            case 0x264254u: goto label_264254;
            case 0x2642D0u: goto label_2642d0;
            case 0x2642DCu: goto label_2642dc;
            case 0x2642FCu: goto label_2642fc;
            case 0x264314u: goto label_264314;
            case 0x264340u: goto label_264340;
            case 0x264344u: goto label_264344;
            case 0x264348u: goto label_264348;
            case 0x264354u: goto label_264354;
            case 0x26436Cu: goto label_26436c;
            case 0x264370u: goto label_264370;
            case 0x2643C4u: goto label_2643c4;
            case 0x2643C8u: goto label_2643c8;
            case 0x264448u: goto label_264448;
            case 0x264464u: goto label_264464;
            case 0x264480u: goto label_264480;
            case 0x2644A8u: goto label_2644a8;
            case 0x2644ACu: goto label_2644ac;
            case 0x2644B0u: goto label_2644b0;
            case 0x2644B8u: goto label_2644b8;
            case 0x2644BCu: goto label_2644bc;
            case 0x2644FCu: goto label_2644fc;
            case 0x264548u: goto label_264548;
            case 0x26455Cu: goto label_26455c;
            case 0x264570u: goto label_264570;
            case 0x26457Cu: goto label_26457c;
            case 0x264590u: goto label_264590;
            case 0x2645A8u: goto label_2645a8;
            case 0x2645B8u: goto label_2645b8;
            case 0x2645BCu: goto label_2645bc;
            case 0x2645CCu: goto label_2645cc;
            case 0x2645D0u: goto label_2645d0;
            case 0x2645F4u: goto label_2645f4;
            case 0x264648u: goto label_264648;
            case 0x264674u: goto label_264674;
            case 0x2646A4u: goto label_2646a4;
            case 0x2646D8u: goto label_2646d8;
            case 0x2646E0u: goto label_2646e0;
            case 0x2646E4u: goto label_2646e4;
            case 0x264720u: goto label_264720;
            case 0x264744u: goto label_264744;
            case 0x264794u: goto label_264794;
            case 0x264808u: goto label_264808;
            case 0x26480Cu: goto label_26480c;
            case 0x264868u: goto label_264868;
            case 0x264878u: goto label_264878;
            case 0x2648F0u: goto label_2648f0;
            case 0x264914u: goto label_264914;
            case 0x264940u: goto label_264940;
            case 0x264944u: goto label_264944;
            case 0x264948u: goto label_264948;
            case 0x264958u: goto label_264958;
            case 0x264984u: goto label_264984;
            case 0x2649CCu: goto label_2649cc;
            case 0x2649DCu: goto label_2649dc;
            case 0x2649E0u: goto label_2649e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2640F0u;
    // 0x2640f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2640f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2640f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2640f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2640f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2640f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2640fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2640fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x264100: 0x8cc20030  lw          $v0, 0x30($a2)
    ctx->pc = 0x264100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x264104: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x264104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x264108: 0x10850007  beq         $a0, $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x264108u;
    {
        const bool branch_taken_0x264108 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 5));
        ctx->pc = 0x26410Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264108u;
            // 0x26410c: 0xe440016c  swc1        $f0, 0x16C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 364), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x264108) {
            ctx->pc = 0x264128u;
            goto label_264128;
        }
    }
    ctx->pc = 0x264110u;
    // 0x264110: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x264110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x264114: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x264114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264118: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x264118u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x26411c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x26411cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x264120: 0x40f809  jalr        $v0
    ctx->pc = 0x264120u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x264128u);
        ctx->pc = 0x264124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264120u;
            // 0x264124: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x264128u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x263DC8u: goto label_263dc8;
            case 0x263E58u: goto label_263e58;
            case 0x263E70u: goto label_263e70;
            case 0x263E78u: goto label_263e78;
            case 0x263E90u: goto label_263e90;
            case 0x263EE8u: goto label_263ee8;
            case 0x263F00u: goto label_263f00;
            case 0x263F44u: goto label_263f44;
            case 0x263F60u: goto label_263f60;
            case 0x263FE4u: goto label_263fe4;
            case 0x26404Cu: goto label_26404c;
            case 0x26407Cu: goto label_26407c;
            case 0x2640D4u: goto label_2640d4;
            case 0x2640D8u: goto label_2640d8;
            case 0x264128u: goto label_264128;
            case 0x264180u: goto label_264180;
            case 0x264188u: goto label_264188;
            case 0x2641F0u: goto label_2641f0;
            case 0x264254u: goto label_264254;
            case 0x2642D0u: goto label_2642d0;
            case 0x2642DCu: goto label_2642dc;
            case 0x2642FCu: goto label_2642fc;
            case 0x264314u: goto label_264314;
            case 0x264340u: goto label_264340;
            case 0x264344u: goto label_264344;
            case 0x264348u: goto label_264348;
            case 0x264354u: goto label_264354;
            case 0x26436Cu: goto label_26436c;
            case 0x264370u: goto label_264370;
            case 0x2643C4u: goto label_2643c4;
            case 0x2643C8u: goto label_2643c8;
            case 0x264448u: goto label_264448;
            case 0x264464u: goto label_264464;
            case 0x264480u: goto label_264480;
            case 0x2644A8u: goto label_2644a8;
            case 0x2644ACu: goto label_2644ac;
            case 0x2644B0u: goto label_2644b0;
            case 0x2644B8u: goto label_2644b8;
            case 0x2644BCu: goto label_2644bc;
            case 0x2644FCu: goto label_2644fc;
            case 0x264548u: goto label_264548;
            case 0x26455Cu: goto label_26455c;
            case 0x264570u: goto label_264570;
            case 0x26457Cu: goto label_26457c;
            case 0x264590u: goto label_264590;
            case 0x2645A8u: goto label_2645a8;
            case 0x2645B8u: goto label_2645b8;
            case 0x2645BCu: goto label_2645bc;
            case 0x2645CCu: goto label_2645cc;
            case 0x2645D0u: goto label_2645d0;
            case 0x2645F4u: goto label_2645f4;
            case 0x264648u: goto label_264648;
            case 0x264674u: goto label_264674;
            case 0x2646A4u: goto label_2646a4;
            case 0x2646D8u: goto label_2646d8;
            case 0x2646E0u: goto label_2646e0;
            case 0x2646E4u: goto label_2646e4;
            case 0x264720u: goto label_264720;
            case 0x264744u: goto label_264744;
            case 0x264794u: goto label_264794;
            case 0x264808u: goto label_264808;
            case 0x26480Cu: goto label_26480c;
            case 0x264868u: goto label_264868;
            case 0x264878u: goto label_264878;
            case 0x2648F0u: goto label_2648f0;
            case 0x264914u: goto label_264914;
            case 0x264940u: goto label_264940;
            case 0x264944u: goto label_264944;
            case 0x264948u: goto label_264948;
            case 0x264958u: goto label_264958;
            case 0x264984u: goto label_264984;
            case 0x2649CCu: goto label_2649cc;
            case 0x2649DCu: goto label_2649dc;
            case 0x2649E0u: goto label_2649e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x264128u; }
            if (ctx->pc != 0x264128u) { return; }
        }
        }
    }
    ctx->pc = 0x264128u;
label_264128:
    // 0x264128: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x264128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26412c: 0x3e00008  jr          $ra
    ctx->pc = 0x26412Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x264130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26412Cu;
            // 0x264130: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x263DC8u: goto label_263dc8;
            case 0x263E58u: goto label_263e58;
            case 0x263E70u: goto label_263e70;
            case 0x263E78u: goto label_263e78;
            case 0x263E90u: goto label_263e90;
            case 0x263EE8u: goto label_263ee8;
            case 0x263F00u: goto label_263f00;
            case 0x263F44u: goto label_263f44;
            case 0x263F60u: goto label_263f60;
            case 0x263FE4u: goto label_263fe4;
            case 0x26404Cu: goto label_26404c;
            case 0x26407Cu: goto label_26407c;
            case 0x2640D4u: goto label_2640d4;
            case 0x2640D8u: goto label_2640d8;
            case 0x264128u: goto label_264128;
            case 0x264180u: goto label_264180;
            case 0x264188u: goto label_264188;
            case 0x2641F0u: goto label_2641f0;
            case 0x264254u: goto label_264254;
            case 0x2642D0u: goto label_2642d0;
            case 0x2642DCu: goto label_2642dc;
            case 0x2642FCu: goto label_2642fc;
            case 0x264314u: goto label_264314;
            case 0x264340u: goto label_264340;
            case 0x264344u: goto label_264344;
            case 0x264348u: goto label_264348;
            case 0x264354u: goto label_264354;
            case 0x26436Cu: goto label_26436c;
            case 0x264370u: goto label_264370;
            case 0x2643C4u: goto label_2643c4;
            case 0x2643C8u: goto label_2643c8;
            case 0x264448u: goto label_264448;
            case 0x264464u: goto label_264464;
            case 0x264480u: goto label_264480;
            case 0x2644A8u: goto label_2644a8;
            case 0x2644ACu: goto label_2644ac;
            case 0x2644B0u: goto label_2644b0;
            case 0x2644B8u: goto label_2644b8;
            case 0x2644BCu: goto label_2644bc;
            case 0x2644FCu: goto label_2644fc;
            case 0x264548u: goto label_264548;
            case 0x26455Cu: goto label_26455c;
            case 0x264570u: goto label_264570;
            case 0x26457Cu: goto label_26457c;
            case 0x264590u: goto label_264590;
            case 0x2645A8u: goto label_2645a8;
            case 0x2645B8u: goto label_2645b8;
            case 0x2645BCu: goto label_2645bc;
            case 0x2645CCu: goto label_2645cc;
            case 0x2645D0u: goto label_2645d0;
            case 0x2645F4u: goto label_2645f4;
            case 0x264648u: goto label_264648;
            case 0x264674u: goto label_264674;
            case 0x2646A4u: goto label_2646a4;
            case 0x2646D8u: goto label_2646d8;
            case 0x2646E0u: goto label_2646e0;
            case 0x2646E4u: goto label_2646e4;
            case 0x264720u: goto label_264720;
            case 0x264744u: goto label_264744;
            case 0x264794u: goto label_264794;
            case 0x264808u: goto label_264808;
            case 0x26480Cu: goto label_26480c;
            case 0x264868u: goto label_264868;
            case 0x264878u: goto label_264878;
            case 0x2648F0u: goto label_2648f0;
            case 0x264914u: goto label_264914;
            case 0x264940u: goto label_264940;
            case 0x264944u: goto label_264944;
            case 0x264948u: goto label_264948;
            case 0x264958u: goto label_264958;
            case 0x264984u: goto label_264984;
            case 0x2649CCu: goto label_2649cc;
            case 0x2649DCu: goto label_2649dc;
            case 0x2649E0u: goto label_2649e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x264134u;
    // 0x264134: 0x0  nop
    ctx->pc = 0x264134u;
    // NOP
    // 0x264138: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x264138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x26413c: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x26413cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x264140: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x264140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x264144: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x264144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x264148: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x264148u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26414c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x26414cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x264150: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x264150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x264154: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x264154u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264158: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x264158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x26415c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x26415cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264160: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x264160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x264164: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x264164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x264168: 0x8e630030  lw          $v1, 0x30($s3)
    ctx->pc = 0x264168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x26416c: 0x96900000  lhu         $s0, 0x0($s4)
    ctx->pc = 0x26416cu;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x264170: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x264170u;
    {
        const bool branch_taken_0x264170 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x264174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264170u;
            // 0x264174: 0x24720010  addiu       $s2, $v1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264170) {
            ctx->pc = 0x264188u;
            goto label_264188;
        }
    }
    ctx->pc = 0x264178u;
    // 0x264178: 0xc074092  jal         func_1D0248
    ctx->pc = 0x264178u;
    SET_GPR_U32(ctx, 31, 0x264180u);
    ctx->pc = 0x26417Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264178u;
            // 0x26417c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D0248u;
    if (runtime->hasFunction(0x1D0248u)) {
        auto targetFn = runtime->lookupFunction(0x1D0248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264180u; }
        if (ctx->pc != 0x264180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D0248_0x1d0248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264180u; }
        if (ctx->pc != 0x264180u) { return; }
    }
    ctx->pc = 0x264180u;
label_264180:
    // 0x264180: 0x10000216  b           . + 4 + (0x216 << 2)
    ctx->pc = 0x264180u;
    {
        const bool branch_taken_0x264180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264180u;
            // 0x264184: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264180) {
            ctx->pc = 0x2649DCu;
            goto label_2649dc;
        }
    }
    ctx->pc = 0x264188u;
label_264188:
    // 0x264188: 0x24020412  addiu       $v0, $zero, 0x412
    ctx->pc = 0x264188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x26418c: 0x56020018  bnel        $s0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x26418Cu;
    {
        const bool branch_taken_0x26418c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x26418c) {
            ctx->pc = 0x264190u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26418Cu;
            // 0x264190: 0x24020405  addiu       $v0, $zero, 0x405 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1029));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2641F0u;
            goto label_2641f0;
        }
    }
    ctx->pc = 0x264194u;
    // 0x264194: 0x8e630034  lw          $v1, 0x34($s3)
    ctx->pc = 0x264194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x264198: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x264198u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26419c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x26419cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2641a0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2641a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2641a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2641a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2641a8: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x2641a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2641ac: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x2641acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2641b0: 0x40f809  jalr        $v0
    ctx->pc = 0x2641B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2641B8u);
        ctx->pc = 0x2641B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2641B0u;
            // 0x2641b4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2641B8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x263DC8u: goto label_263dc8;
            case 0x263E58u: goto label_263e58;
            case 0x263E70u: goto label_263e70;
            case 0x263E78u: goto label_263e78;
            case 0x263E90u: goto label_263e90;
            case 0x263EE8u: goto label_263ee8;
            case 0x263F00u: goto label_263f00;
            case 0x263F44u: goto label_263f44;
            case 0x263F60u: goto label_263f60;
            case 0x263FE4u: goto label_263fe4;
            case 0x26404Cu: goto label_26404c;
            case 0x26407Cu: goto label_26407c;
            case 0x2640D4u: goto label_2640d4;
            case 0x2640D8u: goto label_2640d8;
            case 0x264128u: goto label_264128;
            case 0x264180u: goto label_264180;
            case 0x264188u: goto label_264188;
            case 0x2641F0u: goto label_2641f0;
            case 0x264254u: goto label_264254;
            case 0x2642D0u: goto label_2642d0;
            case 0x2642DCu: goto label_2642dc;
            case 0x2642FCu: goto label_2642fc;
            case 0x264314u: goto label_264314;
            case 0x264340u: goto label_264340;
            case 0x264344u: goto label_264344;
            case 0x264348u: goto label_264348;
            case 0x264354u: goto label_264354;
            case 0x26436Cu: goto label_26436c;
            case 0x264370u: goto label_264370;
            case 0x2643C4u: goto label_2643c4;
            case 0x2643C8u: goto label_2643c8;
            case 0x264448u: goto label_264448;
            case 0x264464u: goto label_264464;
            case 0x264480u: goto label_264480;
            case 0x2644A8u: goto label_2644a8;
            case 0x2644ACu: goto label_2644ac;
            case 0x2644B0u: goto label_2644b0;
            case 0x2644B8u: goto label_2644b8;
            case 0x2644BCu: goto label_2644bc;
            case 0x2644FCu: goto label_2644fc;
            case 0x264548u: goto label_264548;
            case 0x26455Cu: goto label_26455c;
            case 0x264570u: goto label_264570;
            case 0x26457Cu: goto label_26457c;
            case 0x264590u: goto label_264590;
            case 0x2645A8u: goto label_2645a8;
            case 0x2645B8u: goto label_2645b8;
            case 0x2645BCu: goto label_2645bc;
            case 0x2645CCu: goto label_2645cc;
            case 0x2645D0u: goto label_2645d0;
            case 0x2645F4u: goto label_2645f4;
            case 0x264648u: goto label_264648;
            case 0x264674u: goto label_264674;
            case 0x2646A4u: goto label_2646a4;
            case 0x2646D8u: goto label_2646d8;
            case 0x2646E0u: goto label_2646e0;
            case 0x2646E4u: goto label_2646e4;
            case 0x264720u: goto label_264720;
            case 0x264744u: goto label_264744;
            case 0x264794u: goto label_264794;
            case 0x264808u: goto label_264808;
            case 0x26480Cu: goto label_26480c;
            case 0x264868u: goto label_264868;
            case 0x264878u: goto label_264878;
            case 0x2648F0u: goto label_2648f0;
            case 0x264914u: goto label_264914;
            case 0x264940u: goto label_264940;
            case 0x264944u: goto label_264944;
            case 0x264948u: goto label_264948;
            case 0x264958u: goto label_264958;
            case 0x264984u: goto label_264984;
            case 0x2649CCu: goto label_2649cc;
            case 0x2649DCu: goto label_2649dc;
            case 0x2649E0u: goto label_2649e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2641B8u; }
            if (ctx->pc != 0x2641B8u) { return; }
        }
        }
    }
    ctx->pc = 0x2641B8u;
    // 0x2641b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2641b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2641bc: 0xc072f2e  jal         func_1CBCB8
    ctx->pc = 0x2641BCu;
    SET_GPR_U32(ctx, 31, 0x2641C4u);
    ctx->pc = 0x2641C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2641BCu;
            // 0x2641c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CBCB8u;
    if (runtime->hasFunction(0x1CBCB8u)) {
        auto targetFn = runtime->lookupFunction(0x1CBCB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2641C4u; }
        if (ctx->pc != 0x2641C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CBCB8_0x1cbcb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2641C4u; }
        if (ctx->pc != 0x2641C4u) { return; }
    }
    ctx->pc = 0x2641C4u;
    // 0x2641c4: 0xc072f50  jal         func_1CBD40
    ctx->pc = 0x2641C4u;
    SET_GPR_U32(ctx, 31, 0x2641CCu);
    ctx->pc = 0x2641C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2641C4u;
            // 0x2641c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD40u;
    if (runtime->hasFunction(0x1CBD40u)) {
        auto targetFn = runtime->lookupFunction(0x1CBD40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2641CCu; }
        if (ctx->pc != 0x2641CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CBD40_0x1cbd40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2641CCu; }
        if (ctx->pc != 0x2641CCu) { return; }
    }
    ctx->pc = 0x2641CCu;
    // 0x2641cc: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x2641ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2641d0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2641d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2641d4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2641d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2641d8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2641d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2641dc: 0xc09aa3e  jal         func_26A8F8
    ctx->pc = 0x2641DCu;
    SET_GPR_U32(ctx, 31, 0x2641E4u);
    ctx->pc = 0x2641E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2641DCu;
            // 0x2641e0: 0x24840088  addiu       $a0, $a0, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26A8F8u;
    if (runtime->hasFunction(0x26A8F8u)) {
        auto targetFn = runtime->lookupFunction(0x26A8F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2641E4u; }
        if (ctx->pc != 0x2641E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A8F8_0x26a8f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2641E4u; }
        if (ctx->pc != 0x2641E4u) { return; }
    }
    ctx->pc = 0x2641E4u;
    // 0x2641e4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2641e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2641e8: 0x100001fc  b           . + 4 + (0x1FC << 2)
    ctx->pc = 0x2641E8u;
    {
        const bool branch_taken_0x2641e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2641ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2641E8u;
            // 0x2641ec: 0x24420088  addiu       $v0, $v0, 0x88 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2641e8) {
            ctx->pc = 0x2649DCu;
            goto label_2649dc;
        }
    }
    ctx->pc = 0x2641F0u;
label_2641f0:
    // 0x2641f0: 0x56020018  bnel        $s0, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2641F0u;
    {
        const bool branch_taken_0x2641f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x2641f0) {
            ctx->pc = 0x2641F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2641F0u;
            // 0x2641f4: 0x240203ec  addiu       $v0, $zero, 0x3EC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1004));
        ctx->in_delay_slot = false;
            ctx->pc = 0x264254u;
            goto label_264254;
        }
    }
    ctx->pc = 0x2641F8u;
    // 0x2641f8: 0x8e630034  lw          $v1, 0x34($s3)
    ctx->pc = 0x2641f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x2641fc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2641fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264200: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x264200u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264204: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x264204u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264208: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x264208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26420c: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x26420cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x264210: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x264210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x264214: 0x40f809  jalr        $v0
    ctx->pc = 0x264214u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26421Cu);
        ctx->pc = 0x264218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264214u;
            // 0x264218: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26421Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x263DC8u: goto label_263dc8;
            case 0x263E58u: goto label_263e58;
            case 0x263E70u: goto label_263e70;
            case 0x263E78u: goto label_263e78;
            case 0x263E90u: goto label_263e90;
            case 0x263EE8u: goto label_263ee8;
            case 0x263F00u: goto label_263f00;
            case 0x263F44u: goto label_263f44;
            case 0x263F60u: goto label_263f60;
            case 0x263FE4u: goto label_263fe4;
            case 0x26404Cu: goto label_26404c;
            case 0x26407Cu: goto label_26407c;
            case 0x2640D4u: goto label_2640d4;
            case 0x2640D8u: goto label_2640d8;
            case 0x264128u: goto label_264128;
            case 0x264180u: goto label_264180;
            case 0x264188u: goto label_264188;
            case 0x2641F0u: goto label_2641f0;
            case 0x264254u: goto label_264254;
            case 0x2642D0u: goto label_2642d0;
            case 0x2642DCu: goto label_2642dc;
            case 0x2642FCu: goto label_2642fc;
            case 0x264314u: goto label_264314;
            case 0x264340u: goto label_264340;
            case 0x264344u: goto label_264344;
            case 0x264348u: goto label_264348;
            case 0x264354u: goto label_264354;
            case 0x26436Cu: goto label_26436c;
            case 0x264370u: goto label_264370;
            case 0x2643C4u: goto label_2643c4;
            case 0x2643C8u: goto label_2643c8;
            case 0x264448u: goto label_264448;
            case 0x264464u: goto label_264464;
            case 0x264480u: goto label_264480;
            case 0x2644A8u: goto label_2644a8;
            case 0x2644ACu: goto label_2644ac;
            case 0x2644B0u: goto label_2644b0;
            case 0x2644B8u: goto label_2644b8;
            case 0x2644BCu: goto label_2644bc;
            case 0x2644FCu: goto label_2644fc;
            case 0x264548u: goto label_264548;
            case 0x26455Cu: goto label_26455c;
            case 0x264570u: goto label_264570;
            case 0x26457Cu: goto label_26457c;
            case 0x264590u: goto label_264590;
            case 0x2645A8u: goto label_2645a8;
            case 0x2645B8u: goto label_2645b8;
            case 0x2645BCu: goto label_2645bc;
            case 0x2645CCu: goto label_2645cc;
            case 0x2645D0u: goto label_2645d0;
            case 0x2645F4u: goto label_2645f4;
            case 0x264648u: goto label_264648;
            case 0x264674u: goto label_264674;
            case 0x2646A4u: goto label_2646a4;
            case 0x2646D8u: goto label_2646d8;
            case 0x2646E0u: goto label_2646e0;
            case 0x2646E4u: goto label_2646e4;
            case 0x264720u: goto label_264720;
            case 0x264744u: goto label_264744;
            case 0x264794u: goto label_264794;
            case 0x264808u: goto label_264808;
            case 0x26480Cu: goto label_26480c;
            case 0x264868u: goto label_264868;
            case 0x264878u: goto label_264878;
            case 0x2648F0u: goto label_2648f0;
            case 0x264914u: goto label_264914;
            case 0x264940u: goto label_264940;
            case 0x264944u: goto label_264944;
            case 0x264948u: goto label_264948;
            case 0x264958u: goto label_264958;
            case 0x264984u: goto label_264984;
            case 0x2649CCu: goto label_2649cc;
            case 0x2649DCu: goto label_2649dc;
            case 0x2649E0u: goto label_2649e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26421Cu; }
            if (ctx->pc != 0x26421Cu) { return; }
        }
        }
    }
    ctx->pc = 0x26421Cu;
    // 0x26421c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26421cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264220: 0xc072f2e  jal         func_1CBCB8
    ctx->pc = 0x264220u;
    SET_GPR_U32(ctx, 31, 0x264228u);
    ctx->pc = 0x264224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264220u;
            // 0x264224: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CBCB8u;
    if (runtime->hasFunction(0x1CBCB8u)) {
        auto targetFn = runtime->lookupFunction(0x1CBCB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264228u; }
        if (ctx->pc != 0x264228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CBCB8_0x1cbcb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264228u; }
        if (ctx->pc != 0x264228u) { return; }
    }
    ctx->pc = 0x264228u;
    // 0x264228: 0xc072f50  jal         func_1CBD40
    ctx->pc = 0x264228u;
    SET_GPR_U32(ctx, 31, 0x264230u);
    ctx->pc = 0x26422Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264228u;
            // 0x26422c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD40u;
    if (runtime->hasFunction(0x1CBD40u)) {
        auto targetFn = runtime->lookupFunction(0x1CBD40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264230u; }
        if (ctx->pc != 0x264230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CBD40_0x1cbd40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264230u; }
        if (ctx->pc != 0x264230u) { return; }
    }
    ctx->pc = 0x264230u;
    // 0x264230: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x264230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x264234: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x264234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264238: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x264238u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26423c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x26423cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264240: 0xc09aa58  jal         func_26A960
    ctx->pc = 0x264240u;
    SET_GPR_U32(ctx, 31, 0x264248u);
    ctx->pc = 0x264244u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264240u;
            // 0x264244: 0x24840090  addiu       $a0, $a0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26A960u;
    if (runtime->hasFunction(0x26A960u)) {
        auto targetFn = runtime->lookupFunction(0x26A960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264248u; }
        if (ctx->pc != 0x264248u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A960_0x26a960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264248u; }
        if (ctx->pc != 0x264248u) { return; }
    }
    ctx->pc = 0x264248u;
    // 0x264248: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x264248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x26424c: 0x100001e3  b           . + 4 + (0x1E3 << 2)
    ctx->pc = 0x26424Cu;
    {
        const bool branch_taken_0x26424c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26424Cu;
            // 0x264250: 0x24420090  addiu       $v0, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26424c) {
            ctx->pc = 0x2649DCu;
            goto label_2649dc;
        }
    }
    ctx->pc = 0x264254u;
label_264254:
    // 0x264254: 0x16020046  bne         $s0, $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x264254u;
    {
        const bool branch_taken_0x264254 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x264258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264254u;
            // 0x264258: 0x240203f4  addiu       $v0, $zero, 0x3F4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1012));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264254) {
            ctx->pc = 0x264370u;
            goto label_264370;
        }
    }
    ctx->pc = 0x26425Cu;
    // 0x26425c: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x26425cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x264260: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x264260u;
    {
        const bool branch_taken_0x264260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x264264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264260u;
            // 0x264264: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264260) {
            ctx->pc = 0x26436Cu;
            goto label_26436c;
        }
    }
    ctx->pc = 0x264268u;
    // 0x264268: 0x8e630034  lw          $v1, 0x34($s3)
    ctx->pc = 0x264268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x26426c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x26426cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264270: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x264270u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264274: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x264274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264278: 0x24150002  addiu       $s5, $zero, 0x2
    ctx->pc = 0x264278u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26427c: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x26427cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x264280: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x264280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x264284: 0x40f809  jalr        $v0
    ctx->pc = 0x264284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26428Cu);
        ctx->pc = 0x264288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264284u;
            // 0x264288: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26428Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x263DC8u: goto label_263dc8;
            case 0x263E58u: goto label_263e58;
            case 0x263E70u: goto label_263e70;
            case 0x263E78u: goto label_263e78;
            case 0x263E90u: goto label_263e90;
            case 0x263EE8u: goto label_263ee8;
            case 0x263F00u: goto label_263f00;
            case 0x263F44u: goto label_263f44;
            case 0x263F60u: goto label_263f60;
            case 0x263FE4u: goto label_263fe4;
            case 0x26404Cu: goto label_26404c;
            case 0x26407Cu: goto label_26407c;
            case 0x2640D4u: goto label_2640d4;
            case 0x2640D8u: goto label_2640d8;
            case 0x264128u: goto label_264128;
            case 0x264180u: goto label_264180;
            case 0x264188u: goto label_264188;
            case 0x2641F0u: goto label_2641f0;
            case 0x264254u: goto label_264254;
            case 0x2642D0u: goto label_2642d0;
            case 0x2642DCu: goto label_2642dc;
            case 0x2642FCu: goto label_2642fc;
            case 0x264314u: goto label_264314;
            case 0x264340u: goto label_264340;
            case 0x264344u: goto label_264344;
            case 0x264348u: goto label_264348;
            case 0x264354u: goto label_264354;
            case 0x26436Cu: goto label_26436c;
            case 0x264370u: goto label_264370;
            case 0x2643C4u: goto label_2643c4;
            case 0x2643C8u: goto label_2643c8;
            case 0x264448u: goto label_264448;
            case 0x264464u: goto label_264464;
            case 0x264480u: goto label_264480;
            case 0x2644A8u: goto label_2644a8;
            case 0x2644ACu: goto label_2644ac;
            case 0x2644B0u: goto label_2644b0;
            case 0x2644B8u: goto label_2644b8;
            case 0x2644BCu: goto label_2644bc;
            case 0x2644FCu: goto label_2644fc;
            case 0x264548u: goto label_264548;
            case 0x26455Cu: goto label_26455c;
            case 0x264570u: goto label_264570;
            case 0x26457Cu: goto label_26457c;
            case 0x264590u: goto label_264590;
            case 0x2645A8u: goto label_2645a8;
            case 0x2645B8u: goto label_2645b8;
            case 0x2645BCu: goto label_2645bc;
            case 0x2645CCu: goto label_2645cc;
            case 0x2645D0u: goto label_2645d0;
            case 0x2645F4u: goto label_2645f4;
            case 0x264648u: goto label_264648;
            case 0x264674u: goto label_264674;
            case 0x2646A4u: goto label_2646a4;
            case 0x2646D8u: goto label_2646d8;
            case 0x2646E0u: goto label_2646e0;
            case 0x2646E4u: goto label_2646e4;
            case 0x264720u: goto label_264720;
            case 0x264744u: goto label_264744;
            case 0x264794u: goto label_264794;
            case 0x264808u: goto label_264808;
            case 0x26480Cu: goto label_26480c;
            case 0x264868u: goto label_264868;
            case 0x264878u: goto label_264878;
            case 0x2648F0u: goto label_2648f0;
            case 0x264914u: goto label_264914;
            case 0x264940u: goto label_264940;
            case 0x264944u: goto label_264944;
            case 0x264948u: goto label_264948;
            case 0x264958u: goto label_264958;
            case 0x264984u: goto label_264984;
            case 0x2649CCu: goto label_2649cc;
            case 0x2649DCu: goto label_2649dc;
            case 0x2649E0u: goto label_2649e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26428Cu; }
            if (ctx->pc != 0x26428Cu) { return; }
        }
        }
    }
    ctx->pc = 0x26428Cu;
    // 0x26428c: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x26428cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x264290: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x264290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264294: 0xa655007c  sh          $s5, 0x7C($s2)
    ctx->pc = 0x264294u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 124), (uint16_t)GPR_U32(ctx, 21));
    // 0x264298: 0x240507d0  addiu       $a1, $zero, 0x7D0
    ctx->pc = 0x264298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    // 0x26429c: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x26429cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2642a0: 0xc047086  jal         func_11C218
    ctx->pc = 0x2642A0u;
    SET_GPR_U32(ctx, 31, 0x2642A8u);
    ctx->pc = 0x2642A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2642A0u;
            // 0x2642a4: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C218u;
    if (runtime->hasFunction(0x11C218u)) {
        auto targetFn = runtime->lookupFunction(0x11C218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2642A8u; }
        if (ctx->pc != 0x2642A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011C218_0x11c218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2642A8u; }
        if (ctx->pc != 0x2642A8u) { return; }
    }
    ctx->pc = 0x2642A8u;
    // 0x2642a8: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x2642a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2642ac: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2642acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2642b0: 0x2490000c  addiu       $s0, $a0, 0xC
    ctx->pc = 0x2642b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x2642b4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2642b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2642b8: 0x90620008  lbu         $v0, 0x8($v1)
    ctx->pc = 0x2642b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2642bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2642BCu;
    {
        const bool branch_taken_0x2642bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2642C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2642BCu;
            // 0x2642c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2642bc) {
            ctx->pc = 0x2642D0u;
            goto label_2642d0;
        }
    }
    ctx->pc = 0x2642C4u;
    // 0x2642c4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2642c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2642c8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2642c8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2642cc: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x2642ccu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2642d0:
    // 0x2642d0: 0x50a0000a  beql        $a1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2642D0u;
    {
        const bool branch_taken_0x2642d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2642d0) {
            ctx->pc = 0x2642D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2642D0u;
            // 0x2642d4: 0x8e420024  lw          $v0, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2642FCu;
            goto label_2642fc;
        }
    }
    ctx->pc = 0x2642D8u;
    // 0x2642d8: 0x2490001c  addiu       $s0, $a0, 0x1C
    ctx->pc = 0x2642d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
label_2642dc:
    // 0x2642dc: 0xa0600008  sb          $zero, 0x8($v1)
    ctx->pc = 0x2642dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 0));
    // 0x2642e0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2642e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2642e4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2642e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2642e8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2642e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2642ec: 0xc091420  jal         func_245080
    ctx->pc = 0x2642ECu;
    SET_GPR_U32(ctx, 31, 0x2642F4u);
    ctx->pc = 0x2642F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2642ECu;
            // 0x2642f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x245080u;
    if (runtime->hasFunction(0x245080u)) {
        auto targetFn = runtime->lookupFunction(0x245080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2642F4u; }
        if (ctx->pc != 0x2642F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00245080_0x245080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2642F4u; }
        if (ctx->pc != 0x2642F4u) { return; }
    }
    ctx->pc = 0x2642F4u;
    // 0x2642f4: 0x100001b9  b           . + 4 + (0x1B9 << 2)
    ctx->pc = 0x2642F4u;
    {
        const bool branch_taken_0x2642f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2642F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2642F4u;
            // 0x2642f8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2642f4) {
            ctx->pc = 0x2649DCu;
            goto label_2649dc;
        }
    }
    ctx->pc = 0x2642FCu;
label_2642fc:
    // 0x2642fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2642fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x264300: 0x84420044  lh          $v0, 0x44($v0)
    ctx->pc = 0x264300u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x264304: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x264304u;
    {
        const bool branch_taken_0x264304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x264304) {
            ctx->pc = 0x264308u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x264304u;
            // 0x264308: 0x9643007c  lhu         $v1, 0x7C($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 124)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x264314u;
            goto label_264314;
        }
    }
    ctx->pc = 0x26430Cu;
    // 0x26430c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x26430Cu;
    {
        const bool branch_taken_0x26430c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26430Cu;
            // 0x264310: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26430c) {
            ctx->pc = 0x264348u;
            goto label_264348;
        }
    }
    ctx->pc = 0x264314u;
label_264314:
    // 0x264314: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x264314u;
    {
        const bool branch_taken_0x264314 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x264318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264314u;
            // 0x264318: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264314) {
            ctx->pc = 0x264340u;
            goto label_264340;
        }
    }
    ctx->pc = 0x26431Cu;
    // 0x26431c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x26431cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x264320: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x264320u;
    {
        const bool branch_taken_0x264320 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x264320) {
            ctx->pc = 0x264324u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x264320u;
            // 0x264324: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x264344u;
            goto label_264344;
        }
    }
    ctx->pc = 0x264328u;
    // 0x264328: 0x10750005  beq         $v1, $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x264328u;
    {
        const bool branch_taken_0x264328 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        ctx->pc = 0x26432Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264328u;
            // 0x26432c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264328) {
            ctx->pc = 0x264340u;
            goto label_264340;
        }
    }
    ctx->pc = 0x264330u;
    // 0x264330: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x264330u;
    {
        const bool branch_taken_0x264330 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x264330) {
            ctx->pc = 0x264334u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x264330u;
            // 0x264334: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x264344u;
            goto label_264344;
        }
    }
    ctx->pc = 0x264338u;
    // 0x264338: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x264338u;
    {
        const bool branch_taken_0x264338 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x26433Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264338u;
            // 0x26433c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264338) {
            ctx->pc = 0x264348u;
            goto label_264348;
        }
    }
    ctx->pc = 0x264340u;
label_264340:
    // 0x264340: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x264340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_264344:
    // 0x264344: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x264344u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_264348:
    // 0x264348: 0x104001a4  beqz        $v0, . + 4 + (0x1A4 << 2)
    ctx->pc = 0x264348u;
    {
        const bool branch_taken_0x264348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26434Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264348u;
            // 0x26434c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264348) {
            ctx->pc = 0x2649DCu;
            goto label_2649dc;
        }
    }
    ctx->pc = 0x264350u;
    // 0x264350: 0x2604001c  addiu       $a0, $s0, 0x1C
    ctx->pc = 0x264350u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
label_264354:
    // 0x264354: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x264354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264358: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x264358u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26435c: 0xc091450  jal         func_245140
    ctx->pc = 0x26435Cu;
    SET_GPR_U32(ctx, 31, 0x264364u);
    ctx->pc = 0x264360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26435Cu;
            // 0x264360: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x245140u;
    if (runtime->hasFunction(0x245140u)) {
        auto targetFn = runtime->lookupFunction(0x245140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264364u; }
        if (ctx->pc != 0x264364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00245140_0x245140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264364u; }
        if (ctx->pc != 0x264364u) { return; }
    }
    ctx->pc = 0x264364u;
    // 0x264364: 0x1000019e  b           . + 4 + (0x19E << 2)
    ctx->pc = 0x264364u;
    {
        const bool branch_taken_0x264364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264364u;
            // 0x264368: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264364) {
            ctx->pc = 0x2649E0u;
            goto label_2649e0;
        }
    }
    ctx->pc = 0x26436Cu;
label_26436c:
    // 0x26436c: 0x240203f4  addiu       $v0, $zero, 0x3F4
    ctx->pc = 0x26436cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1012));
label_264370:
    // 0x264370: 0x16020052  bne         $s0, $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x264370u;
    {
        const bool branch_taken_0x264370 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x264374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264370u;
            // 0x264374: 0x240203f1  addiu       $v0, $zero, 0x3F1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1009));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264370) {
            ctx->pc = 0x2644BCu;
            goto label_2644bc;
        }
    }
    ctx->pc = 0x264378u;
    // 0x264378: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x264378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x26437c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x26437cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x264380: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x264380u;
    {
        const bool branch_taken_0x264380 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x264384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264380u;
            // 0x264384: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264380) {
            ctx->pc = 0x2643C8u;
            goto label_2643c8;
        }
    }
    ctx->pc = 0x264388u;
    // 0x264388: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x264388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x26438c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x26438cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x264390: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x264390u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x264394: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x264394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x264398: 0x40f809  jalr        $v0
    ctx->pc = 0x264398u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2643A0u);
        ctx->pc = 0x26439Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264398u;
            // 0x26439c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2643A0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x263DC8u: goto label_263dc8;
            case 0x263E58u: goto label_263e58;
            case 0x263E70u: goto label_263e70;
            case 0x263E78u: goto label_263e78;
            case 0x263E90u: goto label_263e90;
            case 0x263EE8u: goto label_263ee8;
            case 0x263F00u: goto label_263f00;
            case 0x263F44u: goto label_263f44;
            case 0x263F60u: goto label_263f60;
            case 0x263FE4u: goto label_263fe4;
            case 0x26404Cu: goto label_26404c;
            case 0x26407Cu: goto label_26407c;
            case 0x2640D4u: goto label_2640d4;
            case 0x2640D8u: goto label_2640d8;
            case 0x264128u: goto label_264128;
            case 0x264180u: goto label_264180;
            case 0x264188u: goto label_264188;
            case 0x2641F0u: goto label_2641f0;
            case 0x264254u: goto label_264254;
            case 0x2642D0u: goto label_2642d0;
            case 0x2642DCu: goto label_2642dc;
            case 0x2642FCu: goto label_2642fc;
            case 0x264314u: goto label_264314;
            case 0x264340u: goto label_264340;
            case 0x264344u: goto label_264344;
            case 0x264348u: goto label_264348;
            case 0x264354u: goto label_264354;
            case 0x26436Cu: goto label_26436c;
            case 0x264370u: goto label_264370;
            case 0x2643C4u: goto label_2643c4;
            case 0x2643C8u: goto label_2643c8;
            case 0x264448u: goto label_264448;
            case 0x264464u: goto label_264464;
            case 0x264480u: goto label_264480;
            case 0x2644A8u: goto label_2644a8;
            case 0x2644ACu: goto label_2644ac;
            case 0x2644B0u: goto label_2644b0;
            case 0x2644B8u: goto label_2644b8;
            case 0x2644BCu: goto label_2644bc;
            case 0x2644FCu: goto label_2644fc;
            case 0x264548u: goto label_264548;
            case 0x26455Cu: goto label_26455c;
            case 0x264570u: goto label_264570;
            case 0x26457Cu: goto label_26457c;
            case 0x264590u: goto label_264590;
            case 0x2645A8u: goto label_2645a8;
            case 0x2645B8u: goto label_2645b8;
            case 0x2645BCu: goto label_2645bc;
            case 0x2645CCu: goto label_2645cc;
            case 0x2645D0u: goto label_2645d0;
            case 0x2645F4u: goto label_2645f4;
            case 0x264648u: goto label_264648;
            case 0x264674u: goto label_264674;
            case 0x2646A4u: goto label_2646a4;
            case 0x2646D8u: goto label_2646d8;
            case 0x2646E0u: goto label_2646e0;
            case 0x2646E4u: goto label_2646e4;
            case 0x264720u: goto label_264720;
            case 0x264744u: goto label_264744;
            case 0x264794u: goto label_264794;
            case 0x264808u: goto label_264808;
            case 0x26480Cu: goto label_26480c;
            case 0x264868u: goto label_264868;
            case 0x264878u: goto label_264878;
            case 0x2648F0u: goto label_2648f0;
            case 0x264914u: goto label_264914;
            case 0x264940u: goto label_264940;
            case 0x264944u: goto label_264944;
            case 0x264948u: goto label_264948;
            case 0x264958u: goto label_264958;
            case 0x264984u: goto label_264984;
            case 0x2649CCu: goto label_2649cc;
            case 0x2649DCu: goto label_2649dc;
            case 0x2649E0u: goto label_2649e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2643A0u; }
            if (ctx->pc != 0x2643A0u) { return; }
        }
        }
    }
    ctx->pc = 0x2643A0u;
    // 0x2643a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2643a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2643a4: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x2643a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x2643a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2643A8u;
    {
        const bool branch_taken_0x2643a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2643ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2643A8u;
            // 0x2643ac: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2643a8) {
            ctx->pc = 0x2643C4u;
            goto label_2643c4;
        }
    }
    ctx->pc = 0x2643B0u;
    // 0x2643b0: 0xc090d56  jal         func_243558
    ctx->pc = 0x2643B0u;
    SET_GPR_U32(ctx, 31, 0x2643B8u);
    ctx->pc = 0x243558u;
    if (runtime->hasFunction(0x243558u)) {
        auto targetFn = runtime->lookupFunction(0x243558u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2643B8u; }
        if (ctx->pc != 0x2643B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243558_0x243560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2643B8u; }
        if (ctx->pc != 0x2643B8u) { return; }
    }
    ctx->pc = 0x2643B8u;
    // 0x2643b8: 0x9442000e  lhu         $v0, 0xE($v0)
    ctx->pc = 0x2643b8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
    // 0x2643bc: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x2643bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x2643c0: 0x2182b  sltu        $v1, $zero, $v0
    ctx->pc = 0x2643c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2643c4:
    // 0x2643c4: 0x38640001  xori        $a0, $v1, 0x1
    ctx->pc = 0x2643c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_2643c8:
    // 0x2643c8: 0x1080003b  beqz        $a0, . + 4 + (0x3B << 2)
    ctx->pc = 0x2643C8u;
    {
        const bool branch_taken_0x2643c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2643CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2643C8u;
            // 0x2643cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2643c8) {
            ctx->pc = 0x2644B8u;
            goto label_2644b8;
        }
    }
    ctx->pc = 0x2643D0u;
    // 0x2643d0: 0x8e630034  lw          $v1, 0x34($s3)
    ctx->pc = 0x2643d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x2643d4: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2643d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2643d8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2643d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2643dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2643dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2643e0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2643e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2643e4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2643e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2643e8: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x2643e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2643ec: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x2643ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2643f0: 0x40f809  jalr        $v0
    ctx->pc = 0x2643F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2643F8u);
        ctx->pc = 0x2643F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2643F0u;
            // 0x2643f4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2643F8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x263DC8u: goto label_263dc8;
            case 0x263E58u: goto label_263e58;
            case 0x263E70u: goto label_263e70;
            case 0x263E78u: goto label_263e78;
            case 0x263E90u: goto label_263e90;
            case 0x263EE8u: goto label_263ee8;
            case 0x263F00u: goto label_263f00;
            case 0x263F44u: goto label_263f44;
            case 0x263F60u: goto label_263f60;
            case 0x263FE4u: goto label_263fe4;
            case 0x26404Cu: goto label_26404c;
            case 0x26407Cu: goto label_26407c;
            case 0x2640D4u: goto label_2640d4;
            case 0x2640D8u: goto label_2640d8;
            case 0x264128u: goto label_264128;
            case 0x264180u: goto label_264180;
            case 0x264188u: goto label_264188;
            case 0x2641F0u: goto label_2641f0;
            case 0x264254u: goto label_264254;
            case 0x2642D0u: goto label_2642d0;
            case 0x2642DCu: goto label_2642dc;
            case 0x2642FCu: goto label_2642fc;
            case 0x264314u: goto label_264314;
            case 0x264340u: goto label_264340;
            case 0x264344u: goto label_264344;
            case 0x264348u: goto label_264348;
            case 0x264354u: goto label_264354;
            case 0x26436Cu: goto label_26436c;
            case 0x264370u: goto label_264370;
            case 0x2643C4u: goto label_2643c4;
            case 0x2643C8u: goto label_2643c8;
            case 0x264448u: goto label_264448;
            case 0x264464u: goto label_264464;
            case 0x264480u: goto label_264480;
            case 0x2644A8u: goto label_2644a8;
            case 0x2644ACu: goto label_2644ac;
            case 0x2644B0u: goto label_2644b0;
            case 0x2644B8u: goto label_2644b8;
            case 0x2644BCu: goto label_2644bc;
            case 0x2644FCu: goto label_2644fc;
            case 0x264548u: goto label_264548;
            case 0x26455Cu: goto label_26455c;
            case 0x264570u: goto label_264570;
            case 0x26457Cu: goto label_26457c;
            case 0x264590u: goto label_264590;
            case 0x2645A8u: goto label_2645a8;
            case 0x2645B8u: goto label_2645b8;
            case 0x2645BCu: goto label_2645bc;
            case 0x2645CCu: goto label_2645cc;
            case 0x2645D0u: goto label_2645d0;
            case 0x2645F4u: goto label_2645f4;
            case 0x264648u: goto label_264648;
            case 0x264674u: goto label_264674;
            case 0x2646A4u: goto label_2646a4;
            case 0x2646D8u: goto label_2646d8;
            case 0x2646E0u: goto label_2646e0;
            case 0x2646E4u: goto label_2646e4;
            case 0x264720u: goto label_264720;
            case 0x264744u: goto label_264744;
            case 0x264794u: goto label_264794;
            case 0x264808u: goto label_264808;
            case 0x26480Cu: goto label_26480c;
            case 0x264868u: goto label_264868;
            case 0x264878u: goto label_264878;
            case 0x2648F0u: goto label_2648f0;
            case 0x264914u: goto label_264914;
            case 0x264940u: goto label_264940;
            case 0x264944u: goto label_264944;
            case 0x264948u: goto label_264948;
            case 0x264958u: goto label_264958;
            case 0x264984u: goto label_264984;
            case 0x2649CCu: goto label_2649cc;
            case 0x2649DCu: goto label_2649dc;
            case 0x2649E0u: goto label_2649e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2643F8u; }
            if (ctx->pc != 0x2643F8u) { return; }
        }
        }
    }
    ctx->pc = 0x2643F8u;
    // 0x2643f8: 0xc072f40  jal         func_1CBD00
    ctx->pc = 0x2643F8u;
    SET_GPR_U32(ctx, 31, 0x264400u);
    ctx->pc = 0x2643FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2643F8u;
            // 0x2643fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD00u;
    if (runtime->hasFunction(0x1CBD00u)) {
        auto targetFn = runtime->lookupFunction(0x1CBD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264400u; }
        if (ctx->pc != 0x264400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CBD00_0x1cbd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264400u; }
        if (ctx->pc != 0x264400u) { return; }
    }
    ctx->pc = 0x264400u;
    // 0x264400: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x264400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264404: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x264404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x264408: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x264408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x26440c: 0x84450044  lh          $a1, 0x44($v0)
    ctx->pc = 0x26440cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x264410: 0x10a30026  beq         $a1, $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x264410u;
    {
        const bool branch_taken_0x264410 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x264414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264410u;
            // 0x264414: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264410) {
            ctx->pc = 0x2644ACu;
            goto label_2644ac;
        }
    }
    ctx->pc = 0x264418u;
    // 0x264418: 0x50a20025  beql        $a1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x264418u;
    {
        const bool branch_taken_0x264418 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x264418) {
            ctx->pc = 0x26441Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x264418u;
            // 0x26441c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2644B0u;
            goto label_2644b0;
        }
    }
    ctx->pc = 0x264420u;
    // 0x264420: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x264420u;
    {
        const bool branch_taken_0x264420 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x264424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264420u;
            // 0x264424: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264420) {
            ctx->pc = 0x264448u;
            goto label_264448;
        }
    }
    ctx->pc = 0x264428u;
    // 0x264428: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x264428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x26442c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x26442cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x264430: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x264430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x264434: 0x8c4200f4  lw          $v0, 0xF4($v0)
    ctx->pc = 0x264434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x264438: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x264438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x26443c: 0xc06d5ae  jal         func_1B56B8
    ctx->pc = 0x26443Cu;
    SET_GPR_U32(ctx, 31, 0x264444u);
    ctx->pc = 0x264440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26443Cu;
            // 0x264440: 0x62280b  movn        $a1, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B56B8u;
    if (runtime->hasFunction(0x1B56B8u)) {
        auto targetFn = runtime->lookupFunction(0x1B56B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264444u; }
        if (ctx->pc != 0x264444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B56B8_0x1b56b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264444u; }
        if (ctx->pc != 0x264444u) { return; }
    }
    ctx->pc = 0x264444u;
    // 0x264444: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x264444u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_264448:
    // 0x264448: 0x56000006  bnel        $s0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x264448u;
    {
        const bool branch_taken_0x264448 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x264448) {
            ctx->pc = 0x26444Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x264448u;
            // 0x26444c: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x264464u;
            goto label_264464;
        }
    }
    ctx->pc = 0x264450u;
    // 0x264450: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x264450u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264454: 0xc0742c4  jal         func_1D0B10
    ctx->pc = 0x264454u;
    SET_GPR_U32(ctx, 31, 0x26445Cu);
    ctx->pc = 0x264458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264454u;
            // 0x264458: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D0B10u;
    if (runtime->hasFunction(0x1D0B10u)) {
        auto targetFn = runtime->lookupFunction(0x1D0B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26445Cu; }
        if (ctx->pc != 0x26445Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D0B10_0x1d0b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26445Cu; }
        if (ctx->pc != 0x26445Cu) { return; }
    }
    ctx->pc = 0x26445Cu;
    // 0x26445c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x26445Cu;
    {
        const bool branch_taken_0x26445c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26445Cu;
            // 0x264460: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26445c) {
            ctx->pc = 0x2644B0u;
            goto label_2644b0;
        }
    }
    ctx->pc = 0x264464u;
label_264464:
    // 0x264464: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x264464u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x264468: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x264468u;
    {
        const bool branch_taken_0x264468 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26446Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264468u;
            // 0x26446c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264468) {
            ctx->pc = 0x2644A8u;
            goto label_2644a8;
        }
    }
    ctx->pc = 0x264470u;
    // 0x264470: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x264470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x264474: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x264474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264478: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x264478u;
    {
        const bool branch_taken_0x264478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x26447Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264478u;
            // 0x26447c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264478) {
            ctx->pc = 0x2644A8u;
            goto label_2644a8;
        }
    }
    ctx->pc = 0x264480u;
label_264480:
    // 0x264480: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x264480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x264484: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x264484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x264488: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x264488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x26448c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x26448Cu;
    {
        const bool branch_taken_0x26448c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x264490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26448Cu;
            // 0x264490: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26448c) {
            ctx->pc = 0x2644A8u;
            goto label_2644a8;
        }
    }
    ctx->pc = 0x264494u;
    // 0x264494: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x264494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x264498: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x264498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26449c: 0x1443fff8  bne         $v0, $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x26449Cu;
    {
        const bool branch_taken_0x26449c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2644A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26449Cu;
            // 0x2644a0: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26449c) {
            ctx->pc = 0x264480u;
            runtime->cooperativeGuestYield();
            goto label_264480;
        }
    }
    ctx->pc = 0x2644A4u;
    // 0x2644a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2644a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2644a8:
    // 0x2644a8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2644a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2644ac:
    // 0x2644ac: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2644acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2644b0:
    // 0x2644b0: 0x10000089  b           . + 4 + (0x89 << 2)
    ctx->pc = 0x2644B0u;
    {
        const bool branch_taken_0x2644b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2644B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2644B0u;
            // 0x2644b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2644b0) {
            ctx->pc = 0x2646D8u;
            goto label_2646d8;
        }
    }
    ctx->pc = 0x2644B8u;
label_2644b8:
    // 0x2644b8: 0x240203f1  addiu       $v0, $zero, 0x3F1
    ctx->pc = 0x2644b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1009));
label_2644bc:
    // 0x2644bc: 0x16020044  bne         $s0, $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x2644BCu;
    {
        const bool branch_taken_0x2644bc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2644C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2644BCu;
            // 0x2644c0: 0x24020074  addiu       $v0, $zero, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2644bc) {
            ctx->pc = 0x2645D0u;
            goto label_2645d0;
        }
    }
    ctx->pc = 0x2644C4u;
    // 0x2644c4: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x2644c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x2644c8: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x2644C8u;
    {
        const bool branch_taken_0x2644c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2644CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2644C8u;
            // 0x2644cc: 0x2404000c  addiu       $a0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2644c8) {
            ctx->pc = 0x2645CCu;
            goto label_2645cc;
        }
    }
    ctx->pc = 0x2644D0u;
    // 0x2644d0: 0x8e860010  lw          $a2, 0x10($s4)
    ctx->pc = 0x2644d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2644d4: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x2644d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x2644d8: 0x615c2  srl         $v0, $a2, 23
    ctx->pc = 0x2644d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 23));
    // 0x2644dc: 0x8c63d2ac  lw          $v1, -0x2D54($v1)
    ctx->pc = 0x2644dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955692)));
    // 0x2644e0: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x2644e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2644e4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2644e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2644e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2644e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2644ec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2644ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2644f0: 0x14460002  bne         $v0, $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x2644F0u;
    {
        const bool branch_taken_0x2644f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x2644F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2644F0u;
            // 0x2644f4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2644f0) {
            ctx->pc = 0x2644FCu;
            goto label_2644fc;
        }
    }
    ctx->pc = 0x2644F8u;
    // 0x2644f8: 0x8c700004  lw          $s0, 0x4($v1)
    ctx->pc = 0x2644f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2644fc:
    // 0x2644fc: 0x8e440024  lw          $a0, 0x24($s2)
    ctx->pc = 0x2644fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x264500: 0x8c820084  lw          $v0, 0x84($a0)
    ctx->pc = 0x264500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x264504: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x264504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x264508: 0x14400134  bnez        $v0, . + 4 + (0x134 << 2)
    ctx->pc = 0x264508u;
    {
        const bool branch_taken_0x264508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26450Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264508u;
            // 0x26450c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264508) {
            ctx->pc = 0x2649DCu;
            goto label_2649dc;
        }
    }
    ctx->pc = 0x264510u;
    // 0x264510: 0x52000133  beql        $s0, $zero, . + 4 + (0x133 << 2)
    ctx->pc = 0x264510u;
    {
        const bool branch_taken_0x264510 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x264510) {
            ctx->pc = 0x264514u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x264510u;
            // 0x264514: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2649E0u;
            goto label_2649e0;
        }
    }
    ctx->pc = 0x264518u;
    // 0x264518: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x264518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x26451c: 0x50c2012f  beql        $a2, $v0, . + 4 + (0x12F << 2)
    ctx->pc = 0x26451Cu;
    {
        const bool branch_taken_0x26451c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x26451c) {
            ctx->pc = 0x264520u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26451Cu;
            // 0x264520: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2649DCu;
            goto label_2649dc;
        }
    }
    ctx->pc = 0x264524u;
    // 0x264524: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x264524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x264528: 0x8e0300f4  lw          $v1, 0xF4($s0)
    ctx->pc = 0x264528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
    // 0x26452c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26452cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x264530: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x264530u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x264534: 0x8c4200f4  lw          $v0, 0xF4($v0)
    ctx->pc = 0x264534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
    // 0x264538: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x264538u;
    {
        const bool branch_taken_0x264538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26453Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264538u;
            // 0x26453c: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x264538) {
            ctx->pc = 0x264548u;
            goto label_264548;
        }
    }
    ctx->pc = 0x264540u;
    // 0x264540: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x264540u;
    {
        const bool branch_taken_0x264540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x264540) {
            ctx->pc = 0x264544u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x264540u;
            // 0x264544: 0x84830044  lh          $v1, 0x44($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 68)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26455Cu;
            goto label_26455c;
        }
    }
    ctx->pc = 0x264548u;
label_264548:
    // 0x264548: 0x10400124  beqz        $v0, . + 4 + (0x124 << 2)
    ctx->pc = 0x264548u;
    {
        const bool branch_taken_0x264548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26454Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264548u;
            // 0x26454c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264548) {
            ctx->pc = 0x2649DCu;
            goto label_2649dc;
        }
    }
    ctx->pc = 0x264550u;
    // 0x264550: 0x54600123  bnel        $v1, $zero, . + 4 + (0x123 << 2)
    ctx->pc = 0x264550u;
    {
        const bool branch_taken_0x264550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x264550) {
            ctx->pc = 0x264554u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x264550u;
            // 0x264554: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2649E0u;
            goto label_2649e0;
        }
    }
    ctx->pc = 0x264558u;
    // 0x264558: 0x84830044  lh          $v1, 0x44($a0)
    ctx->pc = 0x264558u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 68)));
label_26455c:
    // 0x26455c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x26455cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x264560: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x264560u;
    {
        const bool branch_taken_0x264560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x264564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264560u;
            // 0x264564: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264560) {
            ctx->pc = 0x264570u;
            goto label_264570;
        }
    }
    ctx->pc = 0x264568u;
    // 0x264568: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x264568u;
    {
        const bool branch_taken_0x264568 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x264568) {
            ctx->pc = 0x26456Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x264568u;
            // 0x26456c: 0x8e0300fc  lw          $v1, 0xFC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26457Cu;
            goto label_26457c;
        }
    }
    ctx->pc = 0x264570u;
label_264570:
    // 0x264570: 0xc073062  jal         func_1CC188
    ctx->pc = 0x264570u;
    SET_GPR_U32(ctx, 31, 0x264578u);
    ctx->pc = 0x264574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264570u;
            // 0x264574: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CC188u;
    if (runtime->hasFunction(0x1CC188u)) {
        auto targetFn = runtime->lookupFunction(0x1CC188u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264578u; }
        if (ctx->pc != 0x264578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1cc188_0x1cc198(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264578u; }
        if (ctx->pc != 0x264578u) { return; }
    }
    ctx->pc = 0x264578u;
    // 0x264578: 0x8e0300fc  lw          $v1, 0xFC($s0)
    ctx->pc = 0x264578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 252)));
label_26457c:
    // 0x26457c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x26457Cu;
    {
        const bool branch_taken_0x26457c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x264580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26457Cu;
            // 0x264580: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26457c) {
            ctx->pc = 0x2645B8u;
            goto label_2645b8;
        }
    }
    ctx->pc = 0x264584u;
    // 0x264584: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x264584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x264588: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x264588u;
    {
        const bool branch_taken_0x264588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26458Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264588u;
            // 0x26458c: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264588) {
            ctx->pc = 0x2645A8u;
            goto label_2645a8;
        }
    }
    ctx->pc = 0x264590u;
label_264590:
    // 0x264590: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x264590u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x264594: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x264594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x264598: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x264598u;
    {
        const bool branch_taken_0x264598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x264598) {
            ctx->pc = 0x2645BCu;
            goto label_2645bc;
        }
    }
    ctx->pc = 0x2645A0u;
    // 0x2645a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2645a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2645a4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2645a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2645a8:
    // 0x2645a8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2645a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x2645ac: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x2645acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x2645b0: 0x1443fff7  bne         $v0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2645B0u;
    {
        const bool branch_taken_0x2645b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2645B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2645B0u;
            // 0x2645b4: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2645b0) {
            ctx->pc = 0x264590u;
            runtime->cooperativeGuestYield();
            goto label_264590;
        }
    }
    ctx->pc = 0x2645B8u;
label_2645b8:
    // 0x2645b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2645b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2645bc:
    // 0x2645bc: 0xc074944  jal         func_1D2510
    ctx->pc = 0x2645BCu;
    SET_GPR_U32(ctx, 31, 0x2645C4u);
    ctx->pc = 0x2645C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2645BCu;
            // 0x2645c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D2510u;
    if (runtime->hasFunction(0x1D2510u)) {
        auto targetFn = runtime->lookupFunction(0x1D2510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2645C4u; }
        if (ctx->pc != 0x2645C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2510_0x1d2510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2645C4u; }
        if (ctx->pc != 0x2645C4u) { return; }
    }
    ctx->pc = 0x2645C4u;
    // 0x2645c4: 0x10000105  b           . + 4 + (0x105 << 2)
    ctx->pc = 0x2645C4u;
    {
        const bool branch_taken_0x2645c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2645C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2645C4u;
            // 0x2645c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2645c4) {
            ctx->pc = 0x2649DCu;
            goto label_2649dc;
        }
    }
    ctx->pc = 0x2645CCu;
label_2645cc:
    // 0x2645cc: 0x24020074  addiu       $v0, $zero, 0x74
    ctx->pc = 0x2645ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 116));
label_2645d0:
    // 0x2645d0: 0x16020028  bne         $s0, $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2645D0u;
    {
        const bool branch_taken_0x2645d0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2645D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2645D0u;
            // 0x2645d4: 0x24020414  addiu       $v0, $zero, 0x414 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2645d0) {
            ctx->pc = 0x264674u;
            goto label_264674;
        }
    }
    ctx->pc = 0x2645D8u;
    // 0x2645d8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2645d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2645dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2645DCu;
    {
        const bool branch_taken_0x2645dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2645E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2645DCu;
            // 0x2645e0: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2645dc) {
            ctx->pc = 0x2645F4u;
            goto label_2645f4;
        }
    }
    ctx->pc = 0x2645E4u;
    // 0x2645e4: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x2645e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2645e8: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2645e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2645ec: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x2645ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x2645f0: 0x2c430001  sltiu       $v1, $v0, 0x1
    ctx->pc = 0x2645f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2645f4:
    // 0x2645f4: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2645F4u;
    {
        const bool branch_taken_0x2645f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2645F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2645F4u;
            // 0x2645f8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2645f4) {
            ctx->pc = 0x264648u;
            goto label_264648;
        }
    }
    ctx->pc = 0x2645FCu;
    // 0x2645fc: 0x8e630034  lw          $v1, 0x34($s3)
    ctx->pc = 0x2645fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x264600: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x264600u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264604: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x264604u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264608: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x264608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26460c: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x26460cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x264610: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x264610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x264614: 0x40f809  jalr        $v0
    ctx->pc = 0x264614u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26461Cu);
        ctx->pc = 0x264618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264614u;
            // 0x264618: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26461Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x263DC8u: goto label_263dc8;
            case 0x263E58u: goto label_263e58;
            case 0x263E70u: goto label_263e70;
            case 0x263E78u: goto label_263e78;
            case 0x263E90u: goto label_263e90;
            case 0x263EE8u: goto label_263ee8;
            case 0x263F00u: goto label_263f00;
            case 0x263F44u: goto label_263f44;
            case 0x263F60u: goto label_263f60;
            case 0x263FE4u: goto label_263fe4;
            case 0x26404Cu: goto label_26404c;
            case 0x26407Cu: goto label_26407c;
            case 0x2640D4u: goto label_2640d4;
            case 0x2640D8u: goto label_2640d8;
            case 0x264128u: goto label_264128;
            case 0x264180u: goto label_264180;
            case 0x264188u: goto label_264188;
            case 0x2641F0u: goto label_2641f0;
            case 0x264254u: goto label_264254;
            case 0x2642D0u: goto label_2642d0;
            case 0x2642DCu: goto label_2642dc;
            case 0x2642FCu: goto label_2642fc;
            case 0x264314u: goto label_264314;
            case 0x264340u: goto label_264340;
            case 0x264344u: goto label_264344;
            case 0x264348u: goto label_264348;
            case 0x264354u: goto label_264354;
            case 0x26436Cu: goto label_26436c;
            case 0x264370u: goto label_264370;
            case 0x2643C4u: goto label_2643c4;
            case 0x2643C8u: goto label_2643c8;
            case 0x264448u: goto label_264448;
            case 0x264464u: goto label_264464;
            case 0x264480u: goto label_264480;
            case 0x2644A8u: goto label_2644a8;
            case 0x2644ACu: goto label_2644ac;
            case 0x2644B0u: goto label_2644b0;
            case 0x2644B8u: goto label_2644b8;
            case 0x2644BCu: goto label_2644bc;
            case 0x2644FCu: goto label_2644fc;
            case 0x264548u: goto label_264548;
            case 0x26455Cu: goto label_26455c;
            case 0x264570u: goto label_264570;
            case 0x26457Cu: goto label_26457c;
            case 0x264590u: goto label_264590;
            case 0x2645A8u: goto label_2645a8;
            case 0x2645B8u: goto label_2645b8;
            case 0x2645BCu: goto label_2645bc;
            case 0x2645CCu: goto label_2645cc;
            case 0x2645D0u: goto label_2645d0;
            case 0x2645F4u: goto label_2645f4;
            case 0x264648u: goto label_264648;
            case 0x264674u: goto label_264674;
            case 0x2646A4u: goto label_2646a4;
            case 0x2646D8u: goto label_2646d8;
            case 0x2646E0u: goto label_2646e0;
            case 0x2646E4u: goto label_2646e4;
            case 0x264720u: goto label_264720;
            case 0x264744u: goto label_264744;
            case 0x264794u: goto label_264794;
            case 0x264808u: goto label_264808;
            case 0x26480Cu: goto label_26480c;
            case 0x264868u: goto label_264868;
            case 0x264878u: goto label_264878;
            case 0x2648F0u: goto label_2648f0;
            case 0x264914u: goto label_264914;
            case 0x264940u: goto label_264940;
            case 0x264944u: goto label_264944;
            case 0x264948u: goto label_264948;
            case 0x264958u: goto label_264958;
            case 0x264984u: goto label_264984;
            case 0x2649CCu: goto label_2649cc;
            case 0x2649DCu: goto label_2649dc;
            case 0x2649E0u: goto label_2649e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26461Cu; }
            if (ctx->pc != 0x26461Cu) { return; }
        }
        }
    }
    ctx->pc = 0x26461Cu;
    // 0x26461c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x26461cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x264620: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x264620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264624: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x264624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x264628: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x264628u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26462c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x26462cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x264630: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x264630u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x264634: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x264634u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264638: 0xae400044  sw          $zero, 0x44($s2)
    ctx->pc = 0x264638u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
    // 0x26463c: 0x24840078  addiu       $a0, $a0, 0x78
    ctx->pc = 0x26463cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 120));
    // 0x264640: 0x100000e2  b           . + 4 + (0xE2 << 2)
    ctx->pc = 0x264640u;
    {
        const bool branch_taken_0x264640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264640u;
            // 0x264644: 0xe440016c  swc1        $f0, 0x16C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 364), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x264640) {
            ctx->pc = 0x2649CCu;
            goto label_2649cc;
        }
    }
    ctx->pc = 0x264648u;
label_264648:
    // 0x264648: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x264648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x26464c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x26464cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x264650: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x264650u;
    {
        const bool branch_taken_0x264650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x264654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264650u;
            // 0x264654: 0x24020414  addiu       $v0, $zero, 0x414 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1044));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264650) {
            ctx->pc = 0x264674u;
            goto label_264674;
        }
    }
    ctx->pc = 0x264658u;
    // 0x264658: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x264658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x26465c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26465cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264660: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x264660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x264664: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x264664u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x264668: 0xae400044  sw          $zero, 0x44($s2)
    ctx->pc = 0x264668u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
    // 0x26466c: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x26466Cu;
    {
        const bool branch_taken_0x26466c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26466Cu;
            // 0x264670: 0xe460016c  swc1        $f0, 0x16C($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 364), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x26466c) {
            ctx->pc = 0x2649DCu;
            goto label_2649dc;
        }
    }
    ctx->pc = 0x264674u;
label_264674:
    // 0x264674: 0x1602000b  bne         $s0, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x264674u;
    {
        const bool branch_taken_0x264674 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x264678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264674u;
            // 0x264678: 0x240203f7  addiu       $v0, $zero, 0x3F7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1015));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264674) {
            ctx->pc = 0x2646A4u;
            goto label_2646a4;
        }
    }
    ctx->pc = 0x26467Cu;
    // 0x26467c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x26467cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x264680: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x264680u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264684: 0x3c013c23  lui         $at, 0x3C23
    ctx->pc = 0x264684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15395 << 16));
    // 0x264688: 0x3421d70a  ori         $at, $at, 0xD70A
    ctx->pc = 0x264688u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)55050);
    // 0x26468c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x26468cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x264690: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x264690u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x264694: 0xc047086  jal         func_11C218
    ctx->pc = 0x264694u;
    SET_GPR_U32(ctx, 31, 0x26469Cu);
    ctx->pc = 0x264698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264694u;
            // 0x264698: 0xe440016c  swc1        $f0, 0x16C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 364), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C218u;
    if (runtime->hasFunction(0x11C218u)) {
        auto targetFn = runtime->lookupFunction(0x11C218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26469Cu; }
        if (ctx->pc != 0x26469Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011C218_0x11c218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26469Cu; }
        if (ctx->pc != 0x26469Cu) { return; }
    }
    ctx->pc = 0x26469Cu;
    // 0x26469c: 0x1000feb8  b           . + 4 + (-0x148 << 2)
    ctx->pc = 0x26469Cu;
    {
        const bool branch_taken_0x26469c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2646A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26469Cu;
            // 0x2646a0: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26469c) {
            ctx->pc = 0x264180u;
            runtime->cooperativeGuestYield();
            goto label_264180;
        }
    }
    ctx->pc = 0x2646A4u;
label_2646a4:
    // 0x2646a4: 0x16020027  bne         $s0, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x2646A4u;
    {
        const bool branch_taken_0x2646a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2646A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2646A4u;
            // 0x2646a8: 0x240203f9  addiu       $v0, $zero, 0x3F9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1017));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2646a4) {
            ctx->pc = 0x264744u;
            goto label_264744;
        }
    }
    ctx->pc = 0x2646ACu;
    // 0x2646ac: 0x8e630034  lw          $v1, 0x34($s3)
    ctx->pc = 0x2646acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x2646b0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2646b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2646b4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2646b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2646b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2646b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2646bc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2646bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2646c0: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x2646c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2646c4: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x2646c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2646c8: 0x40f809  jalr        $v0
    ctx->pc = 0x2646C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2646D0u);
        ctx->pc = 0x2646CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2646C8u;
            // 0x2646cc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2646D0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x263DC8u: goto label_263dc8;
            case 0x263E58u: goto label_263e58;
            case 0x263E70u: goto label_263e70;
            case 0x263E78u: goto label_263e78;
            case 0x263E90u: goto label_263e90;
            case 0x263EE8u: goto label_263ee8;
            case 0x263F00u: goto label_263f00;
            case 0x263F44u: goto label_263f44;
            case 0x263F60u: goto label_263f60;
            case 0x263FE4u: goto label_263fe4;
            case 0x26404Cu: goto label_26404c;
            case 0x26407Cu: goto label_26407c;
            case 0x2640D4u: goto label_2640d4;
            case 0x2640D8u: goto label_2640d8;
            case 0x264128u: goto label_264128;
            case 0x264180u: goto label_264180;
            case 0x264188u: goto label_264188;
            case 0x2641F0u: goto label_2641f0;
            case 0x264254u: goto label_264254;
            case 0x2642D0u: goto label_2642d0;
            case 0x2642DCu: goto label_2642dc;
            case 0x2642FCu: goto label_2642fc;
            case 0x264314u: goto label_264314;
            case 0x264340u: goto label_264340;
            case 0x264344u: goto label_264344;
            case 0x264348u: goto label_264348;
            case 0x264354u: goto label_264354;
            case 0x26436Cu: goto label_26436c;
            case 0x264370u: goto label_264370;
            case 0x2643C4u: goto label_2643c4;
            case 0x2643C8u: goto label_2643c8;
            case 0x264448u: goto label_264448;
            case 0x264464u: goto label_264464;
            case 0x264480u: goto label_264480;
            case 0x2644A8u: goto label_2644a8;
            case 0x2644ACu: goto label_2644ac;
            case 0x2644B0u: goto label_2644b0;
            case 0x2644B8u: goto label_2644b8;
            case 0x2644BCu: goto label_2644bc;
            case 0x2644FCu: goto label_2644fc;
            case 0x264548u: goto label_264548;
            case 0x26455Cu: goto label_26455c;
            case 0x264570u: goto label_264570;
            case 0x26457Cu: goto label_26457c;
            case 0x264590u: goto label_264590;
            case 0x2645A8u: goto label_2645a8;
            case 0x2645B8u: goto label_2645b8;
            case 0x2645BCu: goto label_2645bc;
            case 0x2645CCu: goto label_2645cc;
            case 0x2645D0u: goto label_2645d0;
            case 0x2645F4u: goto label_2645f4;
            case 0x264648u: goto label_264648;
            case 0x264674u: goto label_264674;
            case 0x2646A4u: goto label_2646a4;
            case 0x2646D8u: goto label_2646d8;
            case 0x2646E0u: goto label_2646e0;
            case 0x2646E4u: goto label_2646e4;
            case 0x264720u: goto label_264720;
            case 0x264744u: goto label_264744;
            case 0x264794u: goto label_264794;
            case 0x264808u: goto label_264808;
            case 0x26480Cu: goto label_26480c;
            case 0x264868u: goto label_264868;
            case 0x264878u: goto label_264878;
            case 0x2648F0u: goto label_2648f0;
            case 0x264914u: goto label_264914;
            case 0x264940u: goto label_264940;
            case 0x264944u: goto label_264944;
            case 0x264948u: goto label_264948;
            case 0x264958u: goto label_264958;
            case 0x264984u: goto label_264984;
            case 0x2649CCu: goto label_2649cc;
            case 0x2649DCu: goto label_2649dc;
            case 0x2649E0u: goto label_2649e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2646D0u; }
            if (ctx->pc != 0x2646D0u) { return; }
        }
        }
    }
    ctx->pc = 0x2646D0u;
    // 0x2646d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2646d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2646d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2646d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2646d8:
    // 0x2646d8: 0xc074944  jal         func_1D2510
    ctx->pc = 0x2646D8u;
    SET_GPR_U32(ctx, 31, 0x2646E0u);
    ctx->pc = 0x1D2510u;
    if (runtime->hasFunction(0x1D2510u)) {
        auto targetFn = runtime->lookupFunction(0x1D2510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2646E0u; }
        if (ctx->pc != 0x2646E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2510_0x1d2510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2646E0u; }
        if (ctx->pc != 0x2646E0u) { return; }
    }
    ctx->pc = 0x2646E0u;
label_2646e0:
    // 0x2646e0: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x2646e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2646e4:
    // 0x2646e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2646e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2646e8: 0x240507d0  addiu       $a1, $zero, 0x7D0
    ctx->pc = 0x2646e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    // 0x2646ec: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x2646ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2646f0: 0xc047086  jal         func_11C218
    ctx->pc = 0x2646F0u;
    SET_GPR_U32(ctx, 31, 0x2646F8u);
    ctx->pc = 0x2646F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2646F0u;
            // 0x2646f4: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C218u;
    if (runtime->hasFunction(0x11C218u)) {
        auto targetFn = runtime->lookupFunction(0x11C218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2646F8u; }
        if (ctx->pc != 0x2646F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011C218_0x11c218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2646F8u; }
        if (ctx->pc != 0x2646F8u) { return; }
    }
    ctx->pc = 0x2646F8u;
    // 0x2646f8: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x2646f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2646fc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2646fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x264700: 0x2490000c  addiu       $s0, $a0, 0xC
    ctx->pc = 0x264700u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x264704: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x264704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x264708: 0x90620008  lbu         $v0, 0x8($v1)
    ctx->pc = 0x264708u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x26470c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26470Cu;
    {
        const bool branch_taken_0x26470c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x264710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26470Cu;
            // 0x264710: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26470c) {
            ctx->pc = 0x264720u;
            goto label_264720;
        }
    }
    ctx->pc = 0x264714u;
    // 0x264714: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x264714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x264718: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x264718u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x26471c: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x26471cu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_264720:
    // 0x264720: 0x54a0feee  bnel        $a1, $zero, . + 4 + (-0x112 << 2)
    ctx->pc = 0x264720u;
    {
        const bool branch_taken_0x264720 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x264720) {
            ctx->pc = 0x264724u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x264720u;
            // 0x264724: 0x2490001c  addiu       $s0, $a0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2642DCu;
            runtime->cooperativeGuestYield();
            goto label_2642dc;
        }
    }
    ctx->pc = 0x264728u;
    // 0x264728: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x264728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x26472c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x26472cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x264730: 0x84420044  lh          $v0, 0x44($v0)
    ctx->pc = 0x264730u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x264734: 0x10450084  beq         $v0, $a1, . + 4 + (0x84 << 2)
    ctx->pc = 0x264734u;
    {
        const bool branch_taken_0x264734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x264738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264734u;
            // 0x264738: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264734) {
            ctx->pc = 0x264948u;
            goto label_264948;
        }
    }
    ctx->pc = 0x26473Cu;
    // 0x26473c: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x26473Cu;
    {
        const bool branch_taken_0x26473c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26473Cu;
            // 0x264740: 0x9643007c  lhu         $v1, 0x7C($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26473c) {
            ctx->pc = 0x264914u;
            goto label_264914;
        }
    }
    ctx->pc = 0x264744u;
label_264744:
    // 0x264744: 0x56020013  bnel        $s0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x264744u;
    {
        const bool branch_taken_0x264744 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x264744) {
            ctx->pc = 0x264748u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x264744u;
            // 0x264748: 0x24020407  addiu       $v0, $zero, 0x407 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1031));
        ctx->in_delay_slot = false;
            ctx->pc = 0x264794u;
            goto label_264794;
        }
    }
    ctx->pc = 0x26474Cu;
    // 0x26474c: 0x8e630034  lw          $v1, 0x34($s3)
    ctx->pc = 0x26474cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x264750: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x264750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264754: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x264754u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264758: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x264758u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26475c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26475cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264760: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x264760u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x264764: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x264764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x264768: 0x40f809  jalr        $v0
    ctx->pc = 0x264768u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x264770u);
        ctx->pc = 0x26476Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264768u;
            // 0x26476c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x264770u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x263DC8u: goto label_263dc8;
            case 0x263E58u: goto label_263e58;
            case 0x263E70u: goto label_263e70;
            case 0x263E78u: goto label_263e78;
            case 0x263E90u: goto label_263e90;
            case 0x263EE8u: goto label_263ee8;
            case 0x263F00u: goto label_263f00;
            case 0x263F44u: goto label_263f44;
            case 0x263F60u: goto label_263f60;
            case 0x263FE4u: goto label_263fe4;
            case 0x26404Cu: goto label_26404c;
            case 0x26407Cu: goto label_26407c;
            case 0x2640D4u: goto label_2640d4;
            case 0x2640D8u: goto label_2640d8;
            case 0x264128u: goto label_264128;
            case 0x264180u: goto label_264180;
            case 0x264188u: goto label_264188;
            case 0x2641F0u: goto label_2641f0;
            case 0x264254u: goto label_264254;
            case 0x2642D0u: goto label_2642d0;
            case 0x2642DCu: goto label_2642dc;
            case 0x2642FCu: goto label_2642fc;
            case 0x264314u: goto label_264314;
            case 0x264340u: goto label_264340;
            case 0x264344u: goto label_264344;
            case 0x264348u: goto label_264348;
            case 0x264354u: goto label_264354;
            case 0x26436Cu: goto label_26436c;
            case 0x264370u: goto label_264370;
            case 0x2643C4u: goto label_2643c4;
            case 0x2643C8u: goto label_2643c8;
            case 0x264448u: goto label_264448;
            case 0x264464u: goto label_264464;
            case 0x264480u: goto label_264480;
            case 0x2644A8u: goto label_2644a8;
            case 0x2644ACu: goto label_2644ac;
            case 0x2644B0u: goto label_2644b0;
            case 0x2644B8u: goto label_2644b8;
            case 0x2644BCu: goto label_2644bc;
            case 0x2644FCu: goto label_2644fc;
            case 0x264548u: goto label_264548;
            case 0x26455Cu: goto label_26455c;
            case 0x264570u: goto label_264570;
            case 0x26457Cu: goto label_26457c;
            case 0x264590u: goto label_264590;
            case 0x2645A8u: goto label_2645a8;
            case 0x2645B8u: goto label_2645b8;
            case 0x2645BCu: goto label_2645bc;
            case 0x2645CCu: goto label_2645cc;
            case 0x2645D0u: goto label_2645d0;
            case 0x2645F4u: goto label_2645f4;
            case 0x264648u: goto label_264648;
            case 0x264674u: goto label_264674;
            case 0x2646A4u: goto label_2646a4;
            case 0x2646D8u: goto label_2646d8;
            case 0x2646E0u: goto label_2646e0;
            case 0x2646E4u: goto label_2646e4;
            case 0x264720u: goto label_264720;
            case 0x264744u: goto label_264744;
            case 0x264794u: goto label_264794;
            case 0x264808u: goto label_264808;
            case 0x26480Cu: goto label_26480c;
            case 0x264868u: goto label_264868;
            case 0x264878u: goto label_264878;
            case 0x2648F0u: goto label_2648f0;
            case 0x264914u: goto label_264914;
            case 0x264940u: goto label_264940;
            case 0x264944u: goto label_264944;
            case 0x264948u: goto label_264948;
            case 0x264958u: goto label_264958;
            case 0x264984u: goto label_264984;
            case 0x2649CCu: goto label_2649cc;
            case 0x2649DCu: goto label_2649dc;
            case 0x2649E0u: goto label_2649e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x264770u; }
            if (ctx->pc != 0x264770u) { return; }
        }
        }
    }
    ctx->pc = 0x264770u;
    // 0x264770: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x264770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x264774: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x264774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264778: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x264778u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26477c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x26477cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264780: 0xc09aa22  jal         func_26A888
    ctx->pc = 0x264780u;
    SET_GPR_U32(ctx, 31, 0x264788u);
    ctx->pc = 0x264784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x264780u;
            // 0x264784: 0x24840070  addiu       $a0, $a0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26A888u;
    if (runtime->hasFunction(0x26A888u)) {
        auto targetFn = runtime->lookupFunction(0x26A888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264788u; }
        if (ctx->pc != 0x264788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A888_0x26a888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264788u; }
        if (ctx->pc != 0x264788u) { return; }
    }
    ctx->pc = 0x264788u;
    // 0x264788: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x264788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x26478c: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x26478Cu;
    {
        const bool branch_taken_0x26478c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26478Cu;
            // 0x264790: 0x24420070  addiu       $v0, $v0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26478c) {
            ctx->pc = 0x2649DCu;
            goto label_2649dc;
        }
    }
    ctx->pc = 0x264794u;
label_264794:
    // 0x264794: 0x1602001d  bne         $s0, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x264794u;
    {
        const bool branch_taken_0x264794 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x264798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264794u;
            // 0x264798: 0x24020401  addiu       $v0, $zero, 0x401 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264794) {
            ctx->pc = 0x26480Cu;
            goto label_26480c;
        }
    }
    ctx->pc = 0x26479Cu;
    // 0x26479c: 0x8e420030  lw          $v0, 0x30($s2)
    ctx->pc = 0x26479cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x2647a0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2647A0u;
    {
        const bool branch_taken_0x2647a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2647A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2647A0u;
            // 0x2647a4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2647a0) {
            ctx->pc = 0x264808u;
            goto label_264808;
        }
    }
    ctx->pc = 0x2647A8u;
    // 0x2647a8: 0x8e630034  lw          $v1, 0x34($s3)
    ctx->pc = 0x2647a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x2647ac: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2647acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2647b0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2647b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2647b4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2647b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2647b8: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x2647b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x2647bc: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x2647bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2647c0: 0x40f809  jalr        $v0
    ctx->pc = 0x2647C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2647C8u);
        ctx->pc = 0x2647C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2647C0u;
            // 0x2647c4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2647C8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x263DC8u: goto label_263dc8;
            case 0x263E58u: goto label_263e58;
            case 0x263E70u: goto label_263e70;
            case 0x263E78u: goto label_263e78;
            case 0x263E90u: goto label_263e90;
            case 0x263EE8u: goto label_263ee8;
            case 0x263F00u: goto label_263f00;
            case 0x263F44u: goto label_263f44;
            case 0x263F60u: goto label_263f60;
            case 0x263FE4u: goto label_263fe4;
            case 0x26404Cu: goto label_26404c;
            case 0x26407Cu: goto label_26407c;
            case 0x2640D4u: goto label_2640d4;
            case 0x2640D8u: goto label_2640d8;
            case 0x264128u: goto label_264128;
            case 0x264180u: goto label_264180;
            case 0x264188u: goto label_264188;
            case 0x2641F0u: goto label_2641f0;
            case 0x264254u: goto label_264254;
            case 0x2642D0u: goto label_2642d0;
            case 0x2642DCu: goto label_2642dc;
            case 0x2642FCu: goto label_2642fc;
            case 0x264314u: goto label_264314;
            case 0x264340u: goto label_264340;
            case 0x264344u: goto label_264344;
            case 0x264348u: goto label_264348;
            case 0x264354u: goto label_264354;
            case 0x26436Cu: goto label_26436c;
            case 0x264370u: goto label_264370;
            case 0x2643C4u: goto label_2643c4;
            case 0x2643C8u: goto label_2643c8;
            case 0x264448u: goto label_264448;
            case 0x264464u: goto label_264464;
            case 0x264480u: goto label_264480;
            case 0x2644A8u: goto label_2644a8;
            case 0x2644ACu: goto label_2644ac;
            case 0x2644B0u: goto label_2644b0;
            case 0x2644B8u: goto label_2644b8;
            case 0x2644BCu: goto label_2644bc;
            case 0x2644FCu: goto label_2644fc;
            case 0x264548u: goto label_264548;
            case 0x26455Cu: goto label_26455c;
            case 0x264570u: goto label_264570;
            case 0x26457Cu: goto label_26457c;
            case 0x264590u: goto label_264590;
            case 0x2645A8u: goto label_2645a8;
            case 0x2645B8u: goto label_2645b8;
            case 0x2645BCu: goto label_2645bc;
            case 0x2645CCu: goto label_2645cc;
            case 0x2645D0u: goto label_2645d0;
            case 0x2645F4u: goto label_2645f4;
            case 0x264648u: goto label_264648;
            case 0x264674u: goto label_264674;
            case 0x2646A4u: goto label_2646a4;
            case 0x2646D8u: goto label_2646d8;
            case 0x2646E0u: goto label_2646e0;
            case 0x2646E4u: goto label_2646e4;
            case 0x264720u: goto label_264720;
            case 0x264744u: goto label_264744;
            case 0x264794u: goto label_264794;
            case 0x264808u: goto label_264808;
            case 0x26480Cu: goto label_26480c;
            case 0x264868u: goto label_264868;
            case 0x264878u: goto label_264878;
            case 0x2648F0u: goto label_2648f0;
            case 0x264914u: goto label_264914;
            case 0x264940u: goto label_264940;
            case 0x264944u: goto label_264944;
            case 0x264948u: goto label_264948;
            case 0x264958u: goto label_264958;
            case 0x264984u: goto label_264984;
            case 0x2649CCu: goto label_2649cc;
            case 0x2649DCu: goto label_2649dc;
            case 0x2649E0u: goto label_2649e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2647C8u; }
            if (ctx->pc != 0x2647C8u) { return; }
        }
        }
    }
    ctx->pc = 0x2647C8u;
    // 0x2647c8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2647c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2647cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2647ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2647d0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x2647d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x2647d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2647d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2647d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2647d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2647dc: 0xe460016c  swc1        $f0, 0x16C($v1)
    ctx->pc = 0x2647dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 364), bits); }
    // 0x2647e0: 0x8c420104  lw          $v0, 0x104($v0)
    ctx->pc = 0x2647e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x2647e4: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x2647e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x2647e8: 0xc074c14  jal         func_1D3050
    ctx->pc = 0x2647E8u;
    SET_GPR_U32(ctx, 31, 0x2647F0u);
    ctx->pc = 0x2647ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2647E8u;
            // 0x2647ec: 0xe440003c  swc1        $f0, 0x3C($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 60), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3050u;
    if (runtime->hasFunction(0x1D3050u)) {
        auto targetFn = runtime->lookupFunction(0x1D3050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2647F0u; }
        if (ctx->pc != 0x2647F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3050_0x1d3050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2647F0u; }
        if (ctx->pc != 0x2647F0u) { return; }
    }
    ctx->pc = 0x2647F0u;
    // 0x2647f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2647f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2647f4: 0xc074944  jal         func_1D2510
    ctx->pc = 0x2647F4u;
    SET_GPR_U32(ctx, 31, 0x2647FCu);
    ctx->pc = 0x2647F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2647F4u;
            // 0x2647f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D2510u;
    if (runtime->hasFunction(0x1D2510u)) {
        auto targetFn = runtime->lookupFunction(0x1D2510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2647FCu; }
        if (ctx->pc != 0x2647FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2510_0x1d2510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2647FCu; }
        if (ctx->pc != 0x2647FCu) { return; }
    }
    ctx->pc = 0x2647FCu;
    // 0x2647fc: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2647fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x264800: 0x10000076  b           . + 4 + (0x76 << 2)
    ctx->pc = 0x264800u;
    {
        const bool branch_taken_0x264800 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264800u;
            // 0x264804: 0x24420080  addiu       $v0, $v0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264800) {
            ctx->pc = 0x2649DCu;
            goto label_2649dc;
        }
    }
    ctx->pc = 0x264808u;
label_264808:
    // 0x264808: 0x24020401  addiu       $v0, $zero, 0x401
    ctx->pc = 0x264808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1025));
label_26480c:
    // 0x26480c: 0x1602001a  bne         $s0, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x26480Cu;
    {
        const bool branch_taken_0x26480c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x264810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26480Cu;
            // 0x264810: 0x24020402  addiu       $v0, $zero, 0x402 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1026));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26480c) {
            ctx->pc = 0x264878u;
            goto label_264878;
        }
    }
    ctx->pc = 0x264814u;
    // 0x264814: 0x8e630034  lw          $v1, 0x34($s3)
    ctx->pc = 0x264814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x264818: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x264818u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26481c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x26481cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264820: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x264820u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264824: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x264824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264828: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x264828u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x26482c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x26482cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x264830: 0x40f809  jalr        $v0
    ctx->pc = 0x264830u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x264838u);
        ctx->pc = 0x264834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264830u;
            // 0x264834: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x264838u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x263DC8u: goto label_263dc8;
            case 0x263E58u: goto label_263e58;
            case 0x263E70u: goto label_263e70;
            case 0x263E78u: goto label_263e78;
            case 0x263E90u: goto label_263e90;
            case 0x263EE8u: goto label_263ee8;
            case 0x263F00u: goto label_263f00;
            case 0x263F44u: goto label_263f44;
            case 0x263F60u: goto label_263f60;
            case 0x263FE4u: goto label_263fe4;
            case 0x26404Cu: goto label_26404c;
            case 0x26407Cu: goto label_26407c;
            case 0x2640D4u: goto label_2640d4;
            case 0x2640D8u: goto label_2640d8;
            case 0x264128u: goto label_264128;
            case 0x264180u: goto label_264180;
            case 0x264188u: goto label_264188;
            case 0x2641F0u: goto label_2641f0;
            case 0x264254u: goto label_264254;
            case 0x2642D0u: goto label_2642d0;
            case 0x2642DCu: goto label_2642dc;
            case 0x2642FCu: goto label_2642fc;
            case 0x264314u: goto label_264314;
            case 0x264340u: goto label_264340;
            case 0x264344u: goto label_264344;
            case 0x264348u: goto label_264348;
            case 0x264354u: goto label_264354;
            case 0x26436Cu: goto label_26436c;
            case 0x264370u: goto label_264370;
            case 0x2643C4u: goto label_2643c4;
            case 0x2643C8u: goto label_2643c8;
            case 0x264448u: goto label_264448;
            case 0x264464u: goto label_264464;
            case 0x264480u: goto label_264480;
            case 0x2644A8u: goto label_2644a8;
            case 0x2644ACu: goto label_2644ac;
            case 0x2644B0u: goto label_2644b0;
            case 0x2644B8u: goto label_2644b8;
            case 0x2644BCu: goto label_2644bc;
            case 0x2644FCu: goto label_2644fc;
            case 0x264548u: goto label_264548;
            case 0x26455Cu: goto label_26455c;
            case 0x264570u: goto label_264570;
            case 0x26457Cu: goto label_26457c;
            case 0x264590u: goto label_264590;
            case 0x2645A8u: goto label_2645a8;
            case 0x2645B8u: goto label_2645b8;
            case 0x2645BCu: goto label_2645bc;
            case 0x2645CCu: goto label_2645cc;
            case 0x2645D0u: goto label_2645d0;
            case 0x2645F4u: goto label_2645f4;
            case 0x264648u: goto label_264648;
            case 0x264674u: goto label_264674;
            case 0x2646A4u: goto label_2646a4;
            case 0x2646D8u: goto label_2646d8;
            case 0x2646E0u: goto label_2646e0;
            case 0x2646E4u: goto label_2646e4;
            case 0x264720u: goto label_264720;
            case 0x264744u: goto label_264744;
            case 0x264794u: goto label_264794;
            case 0x264808u: goto label_264808;
            case 0x26480Cu: goto label_26480c;
            case 0x264868u: goto label_264868;
            case 0x264878u: goto label_264878;
            case 0x2648F0u: goto label_2648f0;
            case 0x264914u: goto label_264914;
            case 0x264940u: goto label_264940;
            case 0x264944u: goto label_264944;
            case 0x264948u: goto label_264948;
            case 0x264958u: goto label_264958;
            case 0x264984u: goto label_264984;
            case 0x2649CCu: goto label_2649cc;
            case 0x2649DCu: goto label_2649dc;
            case 0x2649E0u: goto label_2649e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x264838u; }
            if (ctx->pc != 0x264838u) { return; }
        }
        }
    }
    ctx->pc = 0x264838u;
    // 0x264838: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x264838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26483c: 0xc074944  jal         func_1D2510
    ctx->pc = 0x26483Cu;
    SET_GPR_U32(ctx, 31, 0x264844u);
    ctx->pc = 0x264840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26483Cu;
            // 0x264840: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D2510u;
    if (runtime->hasFunction(0x1D2510u)) {
        auto targetFn = runtime->lookupFunction(0x1D2510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264844u; }
        if (ctx->pc != 0x264844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2510_0x1d2510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x264844u; }
        if (ctx->pc != 0x264844u) { return; }
    }
    ctx->pc = 0x264844u;
    // 0x264844: 0x96820004  lhu         $v0, 0x4($s4)
    ctx->pc = 0x264844u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x264848: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x264848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26484c: 0xae400020  sw          $zero, 0x20($s2)
    ctx->pc = 0x26484cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 0));
    // 0x264850: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x264850u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x264854: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x264854u;
    {
        const bool branch_taken_0x264854 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x264858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264854u;
            // 0x264858: 0xa642007c  sh          $v0, 0x7C($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 124), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264854) {
            ctx->pc = 0x264868u;
            goto label_264868;
        }
    }
    ctx->pc = 0x26485Cu;
    // 0x26485c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x26485cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x264860: 0x5482ffa0  bnel        $a0, $v0, . + 4 + (-0x60 << 2)
    ctx->pc = 0x264860u;
    {
        const bool branch_taken_0x264860 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x264860) {
            ctx->pc = 0x264864u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x264860u;
            // 0x264864: 0x8e30000c  lw          $s0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2646E4u;
            runtime->cooperativeGuestYield();
            goto label_2646e4;
        }
    }
    ctx->pc = 0x264868u;
label_264868:
    // 0x264868: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x264868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x26486c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x26486cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x264870: 0x1000ff9b  b           . + 4 + (-0x65 << 2)
    ctx->pc = 0x264870u;
    {
        const bool branch_taken_0x264870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264870u;
            // 0x264874: 0xa443000a  sh          $v1, 0xA($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264870) {
            ctx->pc = 0x2646E0u;
            runtime->cooperativeGuestYield();
            goto label_2646e0;
        }
    }
    ctx->pc = 0x264878u;
label_264878:
    // 0x264878: 0x16020037  bne         $s0, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x264878u;
    {
        const bool branch_taken_0x264878 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x26487Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264878u;
            // 0x26487c: 0x2402040a  addiu       $v0, $zero, 0x40A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1034));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264878) {
            ctx->pc = 0x264958u;
            goto label_264958;
        }
    }
    ctx->pc = 0x264880u;
    // 0x264880: 0x8e630034  lw          $v1, 0x34($s3)
    ctx->pc = 0x264880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x264884: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x264884u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264888: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x264888u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26488c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26488cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264890: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x264890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264894: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x264894u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x264898: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x264898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x26489c: 0x40f809  jalr        $v0
    ctx->pc = 0x26489Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2648A4u);
        ctx->pc = 0x2648A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26489Cu;
            // 0x2648a0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2648A4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x263DC8u: goto label_263dc8;
            case 0x263E58u: goto label_263e58;
            case 0x263E70u: goto label_263e70;
            case 0x263E78u: goto label_263e78;
            case 0x263E90u: goto label_263e90;
            case 0x263EE8u: goto label_263ee8;
            case 0x263F00u: goto label_263f00;
            case 0x263F44u: goto label_263f44;
            case 0x263F60u: goto label_263f60;
            case 0x263FE4u: goto label_263fe4;
            case 0x26404Cu: goto label_26404c;
            case 0x26407Cu: goto label_26407c;
            case 0x2640D4u: goto label_2640d4;
            case 0x2640D8u: goto label_2640d8;
            case 0x264128u: goto label_264128;
            case 0x264180u: goto label_264180;
            case 0x264188u: goto label_264188;
            case 0x2641F0u: goto label_2641f0;
            case 0x264254u: goto label_264254;
            case 0x2642D0u: goto label_2642d0;
            case 0x2642DCu: goto label_2642dc;
            case 0x2642FCu: goto label_2642fc;
            case 0x264314u: goto label_264314;
            case 0x264340u: goto label_264340;
            case 0x264344u: goto label_264344;
            case 0x264348u: goto label_264348;
            case 0x264354u: goto label_264354;
            case 0x26436Cu: goto label_26436c;
            case 0x264370u: goto label_264370;
            case 0x2643C4u: goto label_2643c4;
            case 0x2643C8u: goto label_2643c8;
            case 0x264448u: goto label_264448;
            case 0x264464u: goto label_264464;
            case 0x264480u: goto label_264480;
            case 0x2644A8u: goto label_2644a8;
            case 0x2644ACu: goto label_2644ac;
            case 0x2644B0u: goto label_2644b0;
            case 0x2644B8u: goto label_2644b8;
            case 0x2644BCu: goto label_2644bc;
            case 0x2644FCu: goto label_2644fc;
            case 0x264548u: goto label_264548;
            case 0x26455Cu: goto label_26455c;
            case 0x264570u: goto label_264570;
            case 0x26457Cu: goto label_26457c;
            case 0x264590u: goto label_264590;
            case 0x2645A8u: goto label_2645a8;
            case 0x2645B8u: goto label_2645b8;
            case 0x2645BCu: goto label_2645bc;
            case 0x2645CCu: goto label_2645cc;
            case 0x2645D0u: goto label_2645d0;
            case 0x2645F4u: goto label_2645f4;
            case 0x264648u: goto label_264648;
            case 0x264674u: goto label_264674;
            case 0x2646A4u: goto label_2646a4;
            case 0x2646D8u: goto label_2646d8;
            case 0x2646E0u: goto label_2646e0;
            case 0x2646E4u: goto label_2646e4;
            case 0x264720u: goto label_264720;
            case 0x264744u: goto label_264744;
            case 0x264794u: goto label_264794;
            case 0x264808u: goto label_264808;
            case 0x26480Cu: goto label_26480c;
            case 0x264868u: goto label_264868;
            case 0x264878u: goto label_264878;
            case 0x2648F0u: goto label_2648f0;
            case 0x264914u: goto label_264914;
            case 0x264940u: goto label_264940;
            case 0x264944u: goto label_264944;
            case 0x264948u: goto label_264948;
            case 0x264958u: goto label_264958;
            case 0x264984u: goto label_264984;
            case 0x2649CCu: goto label_2649cc;
            case 0x2649DCu: goto label_2649dc;
            case 0x2649E0u: goto label_2649e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2648A4u; }
            if (ctx->pc != 0x2648A4u) { return; }
        }
        }
    }
    ctx->pc = 0x2648A4u;
    // 0x2648a4: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x2648a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2648a8: 0xc0736da  jal         func_1CDB68
    ctx->pc = 0x2648A8u;
    SET_GPR_U32(ctx, 31, 0x2648B0u);
    ctx->pc = 0x2648ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2648A8u;
            // 0x2648ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CDB68u;
    if (runtime->hasFunction(0x1CDB68u)) {
        auto targetFn = runtime->lookupFunction(0x1CDB68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2648B0u; }
        if (ctx->pc != 0x2648B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CDB68_0x1cdb68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2648B0u; }
        if (ctx->pc != 0x2648B0u) { return; }
    }
    ctx->pc = 0x2648B0u;
    // 0x2648b0: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x2648b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2648b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2648b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2648b8: 0x240507d0  addiu       $a1, $zero, 0x7D0
    ctx->pc = 0x2648b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2000));
    // 0x2648bc: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x2648bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x2648c0: 0xc047086  jal         func_11C218
    ctx->pc = 0x2648C0u;
    SET_GPR_U32(ctx, 31, 0x2648C8u);
    ctx->pc = 0x2648C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2648C0u;
            // 0x2648c4: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11C218u;
    if (runtime->hasFunction(0x11C218u)) {
        auto targetFn = runtime->lookupFunction(0x11C218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2648C8u; }
        if (ctx->pc != 0x2648C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011C218_0x11c218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2648C8u; }
        if (ctx->pc != 0x2648C8u) { return; }
    }
    ctx->pc = 0x2648C8u;
    // 0x2648c8: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x2648c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2648cc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2648ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2648d0: 0x2490000c  addiu       $s0, $a0, 0xC
    ctx->pc = 0x2648d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x2648d4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2648d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2648d8: 0x90620008  lbu         $v0, 0x8($v1)
    ctx->pc = 0x2648d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2648dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2648DCu;
    {
        const bool branch_taken_0x2648dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2648E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2648DCu;
            // 0x2648e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2648dc) {
            ctx->pc = 0x2648F0u;
            goto label_2648f0;
        }
    }
    ctx->pc = 0x2648E4u;
    // 0x2648e4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2648e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2648e8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2648e8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2648ec: 0x2282b  sltu        $a1, $zero, $v0
    ctx->pc = 0x2648ecu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2648f0:
    // 0x2648f0: 0x54a0fe7a  bnel        $a1, $zero, . + 4 + (-0x186 << 2)
    ctx->pc = 0x2648F0u;
    {
        const bool branch_taken_0x2648f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x2648f0) {
            ctx->pc = 0x2648F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2648F0u;
            // 0x2648f4: 0x2490001c  addiu       $s0, $a0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2642DCu;
            runtime->cooperativeGuestYield();
            goto label_2642dc;
        }
    }
    ctx->pc = 0x2648F8u;
    // 0x2648f8: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x2648f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x2648fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2648fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x264900: 0x84420044  lh          $v0, 0x44($v0)
    ctx->pc = 0x264900u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x264904: 0x54450003  bnel        $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x264904u;
    {
        const bool branch_taken_0x264904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x264904) {
            ctx->pc = 0x264908u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x264904u;
            // 0x264908: 0x9643007c  lhu         $v1, 0x7C($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 124)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x264914u;
            goto label_264914;
        }
    }
    ctx->pc = 0x26490Cu;
    // 0x26490c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x26490Cu;
    {
        const bool branch_taken_0x26490c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26490Cu;
            // 0x264910: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26490c) {
            ctx->pc = 0x264948u;
            goto label_264948;
        }
    }
    ctx->pc = 0x264914u;
label_264914:
    // 0x264914: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x264914u;
    {
        const bool branch_taken_0x264914 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x264918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264914u;
            // 0x264918: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264914) {
            ctx->pc = 0x264940u;
            goto label_264940;
        }
    }
    ctx->pc = 0x26491Cu;
    // 0x26491c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x26491cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x264920: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x264920u;
    {
        const bool branch_taken_0x264920 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x264924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264920u;
            // 0x264924: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264920) {
            ctx->pc = 0x264940u;
            goto label_264940;
        }
    }
    ctx->pc = 0x264928u;
    // 0x264928: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x264928u;
    {
        const bool branch_taken_0x264928 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26492Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264928u;
            // 0x26492c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264928) {
            ctx->pc = 0x264940u;
            goto label_264940;
        }
    }
    ctx->pc = 0x264930u;
    // 0x264930: 0x50620004  beql        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x264930u;
    {
        const bool branch_taken_0x264930 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x264930) {
            ctx->pc = 0x264934u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x264930u;
            // 0x264934: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x264944u;
            goto label_264944;
        }
    }
    ctx->pc = 0x264938u;
    // 0x264938: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x264938u;
    {
        const bool branch_taken_0x264938 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x26493Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264938u;
            // 0x26493c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264938) {
            ctx->pc = 0x264948u;
            goto label_264948;
        }
    }
    ctx->pc = 0x264940u;
label_264940:
    // 0x264940: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x264940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_264944:
    // 0x264944: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x264944u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_264948:
    // 0x264948: 0x1440fe82  bnez        $v0, . + 4 + (-0x17E << 2)
    ctx->pc = 0x264948u;
    {
        const bool branch_taken_0x264948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26494Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264948u;
            // 0x26494c: 0x2604001c  addiu       $a0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264948) {
            ctx->pc = 0x264354u;
            runtime->cooperativeGuestYield();
            goto label_264354;
        }
    }
    ctx->pc = 0x264950u;
    // 0x264950: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x264950u;
    {
        const bool branch_taken_0x264950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264950u;
            // 0x264954: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264950) {
            ctx->pc = 0x2649DCu;
            goto label_2649dc;
        }
    }
    ctx->pc = 0x264958u;
label_264958:
    // 0x264958: 0x1202000a  beq         $s0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x264958u;
    {
        const bool branch_taken_0x264958 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x26495Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264958u;
            // 0x26495c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x264958) {
            ctx->pc = 0x264984u;
            goto label_264984;
        }
    }
    ctx->pc = 0x264960u;
    // 0x264960: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x264960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x264964: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x264964u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264968: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x264968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26496c: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x26496cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x264970: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x264970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x264974: 0x40f809  jalr        $v0
    ctx->pc = 0x264974u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26497Cu);
        ctx->pc = 0x264978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x264974u;
            // 0x264978: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26497Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x263DC8u: goto label_263dc8;
            case 0x263E58u: goto label_263e58;
            case 0x263E70u: goto label_263e70;
            case 0x263E78u: goto label_263e78;
            case 0x263E90u: goto label_263e90;
            case 0x263EE8u: goto label_263ee8;
            case 0x263F00u: goto label_263f00;
            case 0x263F44u: goto label_263f44;
            case 0x263F60u: goto label_263f60;
            case 0x263FE4u: goto label_263fe4;
            case 0x26404Cu: goto label_26404c;
            case 0x26407Cu: goto label_26407c;
            case 0x2640D4u: goto label_2640d4;
            case 0x2640D8u: goto label_2640d8;
            case 0x264128u: goto label_264128;
            case 0x264180u: goto label_264180;
            case 0x264188u: goto label_264188;
            case 0x2641F0u: goto label_2641f0;
            case 0x264254u: goto label_264254;
            case 0x2642D0u: goto label_2642d0;
            case 0x2642DCu: goto label_2642dc;
            case 0x2642FCu: goto label_2642fc;
            case 0x264314u: goto label_264314;
            case 0x264340u: goto label_264340;
            case 0x264344u: goto label_264344;
            case 0x264348u: goto label_264348;
            case 0x264354u: goto label_264354;
            case 0x26436Cu: goto label_26436c;
            case 0x264370u: goto label_264370;
            case 0x2643C4u: goto label_2643c4;
            case 0x2643C8u: goto label_2643c8;
            case 0x264448u: goto label_264448;
            case 0x264464u: goto label_264464;
            case 0x264480u: goto label_264480;
            case 0x2644A8u: goto label_2644a8;
            case 0x2644ACu: goto label_2644ac;
            case 0x2644B0u: goto label_2644b0;
            case 0x2644B8u: goto label_2644b8;
            case 0x2644BCu: goto label_2644bc;
            case 0x2644FCu: goto label_2644fc;
            case 0x264548u: goto label_264548;
            case 0x26455Cu: goto label_26455c;
            case 0x264570u: goto label_264570;
            case 0x26457Cu: goto label_26457c;
            case 0x264590u: goto label_264590;
            case 0x2645A8u: goto label_2645a8;
            case 0x2645B8u: goto label_2645b8;
            case 0x2645BCu: goto label_2645bc;
            case 0x2645CCu: goto label_2645cc;
            case 0x2645D0u: goto label_2645d0;
            case 0x2645F4u: goto label_2645f4;
            case 0x264648u: goto label_264648;
            case 0x264674u: goto label_264674;
            case 0x2646A4u: goto label_2646a4;
            case 0x2646D8u: goto label_2646d8;
            case 0x2646E0u: goto label_2646e0;
            case 0x2646E4u: goto label_2646e4;
            case 0x264720u: goto label_264720;
            case 0x264744u: goto label_264744;
            case 0x264794u: goto label_264794;
            case 0x264808u: goto label_264808;
            case 0x26480Cu: goto label_26480c;
            case 0x264868u: goto label_264868;
            case 0x264878u: goto label_264878;
            case 0x2648F0u: goto label_2648f0;
            case 0x264914u: goto label_264914;
            case 0x264940u: goto label_264940;
            case 0x264944u: goto label_264944;
            case 0x264948u: goto label_264948;
            case 0x264958u: goto label_264958;
            case 0x264984u: goto label_264984;
            case 0x2649CCu: goto label_2649cc;
            case 0x2649DCu: goto label_2649dc;
            case 0x2649E0u: goto label_2649e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26497Cu; }
            if (ctx->pc != 0x26497Cu) { return; }
        }
        }
    }
    ctx->pc = 0x26497Cu;
    // 0x26497c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x26497Cu;
    {
        const bool branch_taken_0x26497c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x264980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26497Cu;
            // 0x264980: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26497c) {
            ctx->pc = 0x2649E0u;
            goto label_2649e0;
        }
    }
    ctx->pc = 0x264984u;
label_264984:
    // 0x264984: 0x8e630034  lw          $v1, 0x34($s3)
    ctx->pc = 0x264984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x264988: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x264988u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26498c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26498cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264990: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x264990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x264994: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x264994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x264998: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x264998u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x26499c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x26499cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x2649a0: 0x40f809  jalr        $v0
    ctx->pc = 0x2649A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2649A8u);
        ctx->pc = 0x2649A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2649A0u;
            // 0x2649a4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2649A8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x263DC8u: goto label_263dc8;
            case 0x263E58u: goto label_263e58;
            case 0x263E70u: goto label_263e70;
            case 0x263E78u: goto label_263e78;
            case 0x263E90u: goto label_263e90;
            case 0x263EE8u: goto label_263ee8;
            case 0x263F00u: goto label_263f00;
            case 0x263F44u: goto label_263f44;
            case 0x263F60u: goto label_263f60;
            case 0x263FE4u: goto label_263fe4;
            case 0x26404Cu: goto label_26404c;
            case 0x26407Cu: goto label_26407c;
            case 0x2640D4u: goto label_2640d4;
            case 0x2640D8u: goto label_2640d8;
            case 0x264128u: goto label_264128;
            case 0x264180u: goto label_264180;
            case 0x264188u: goto label_264188;
            case 0x2641F0u: goto label_2641f0;
            case 0x264254u: goto label_264254;
            case 0x2642D0u: goto label_2642d0;
            case 0x2642DCu: goto label_2642dc;
            case 0x2642FCu: goto label_2642fc;
            case 0x264314u: goto label_264314;
            case 0x264340u: goto label_264340;
            case 0x264344u: goto label_264344;
            case 0x264348u: goto label_264348;
            case 0x264354u: goto label_264354;
            case 0x26436Cu: goto label_26436c;
            case 0x264370u: goto label_264370;
            case 0x2643C4u: goto label_2643c4;
            case 0x2643C8u: goto label_2643c8;
            case 0x264448u: goto label_264448;
            case 0x264464u: goto label_264464;
            case 0x264480u: goto label_264480;
            case 0x2644A8u: goto label_2644a8;
            case 0x2644ACu: goto label_2644ac;
            case 0x2644B0u: goto label_2644b0;
            case 0x2644B8u: goto label_2644b8;
            case 0x2644BCu: goto label_2644bc;
            case 0x2644FCu: goto label_2644fc;
            case 0x264548u: goto label_264548;
            case 0x26455Cu: goto label_26455c;
            case 0x264570u: goto label_264570;
            case 0x26457Cu: goto label_26457c;
            case 0x264590u: goto label_264590;
            case 0x2645A8u: goto label_2645a8;
            case 0x2645B8u: goto label_2645b8;
            case 0x2645BCu: goto label_2645bc;
            case 0x2645CCu: goto label_2645cc;
            case 0x2645D0u: goto label_2645d0;
            case 0x2645F4u: goto label_2645f4;
            case 0x264648u: goto label_264648;
            case 0x264674u: goto label_264674;
            case 0x2646A4u: goto label_2646a4;
            case 0x2646D8u: goto label_2646d8;
            case 0x2646E0u: goto label_2646e0;
            case 0x2646E4u: goto label_2646e4;
            case 0x264720u: goto label_264720;
            case 0x264744u: goto label_264744;
            case 0x264794u: goto label_264794;
            case 0x264808u: goto label_264808;
            case 0x26480Cu: goto label_26480c;
            case 0x264868u: goto label_264868;
            case 0x264878u: goto label_264878;
            case 0x2648F0u: goto label_2648f0;
            case 0x264914u: goto label_264914;
            case 0x264940u: goto label_264940;
            case 0x264944u: goto label_264944;
            case 0x264948u: goto label_264948;
            case 0x264958u: goto label_264958;
            case 0x264984u: goto label_264984;
            case 0x2649CCu: goto label_2649cc;
            case 0x2649DCu: goto label_2649dc;
            case 0x2649E0u: goto label_2649e0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2649A8u; }
            if (ctx->pc != 0x2649A8u) { return; }
        }
        }
    }
    ctx->pc = 0x2649A8u;
    // 0x2649a8: 0x8e850004  lw          $a1, 0x4($s4)
    ctx->pc = 0x2649a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2649ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2649acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2649b0: 0xc074a5c  jal         func_1D2970
    ctx->pc = 0x2649B0u;
    SET_GPR_U32(ctx, 31, 0x2649B8u);
    ctx->pc = 0x2649B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2649B0u;
            // 0x2649b4: 0x8e860008  lw          $a2, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D2970u;
    if (runtime->hasFunction(0x1D2970u)) {
        auto targetFn = runtime->lookupFunction(0x1D2970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2649B8u; }
        if (ctx->pc != 0x2649B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2970_0x1d2970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2649B8u; }
        if (ctx->pc != 0x2649B8u) { return; }
    }
    ctx->pc = 0x2649B8u;
    // 0x2649b8: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x2649b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2649bc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2649bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2649c0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x2649c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2649c4: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2649c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2649c8: 0x24840078  addiu       $a0, $a0, 0x78
    ctx->pc = 0x2649c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 120));
label_2649cc:
    // 0x2649cc: 0xc09aa30  jal         func_26A8C0
    ctx->pc = 0x2649CCu;
    SET_GPR_U32(ctx, 31, 0x2649D4u);
    ctx->pc = 0x26A8C0u;
    if (runtime->hasFunction(0x26A8C0u)) {
        auto targetFn = runtime->lookupFunction(0x26A8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2649D4u; }
        if (ctx->pc != 0x2649D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026A8C0_0x26a8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2649D4u; }
        if (ctx->pc != 0x2649D4u) { return; }
    }
    ctx->pc = 0x2649D4u;
    // 0x2649d4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2649d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2649d8: 0x24420078  addiu       $v0, $v0, 0x78
    ctx->pc = 0x2649d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
label_2649dc:
    // 0x2649dc: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x2649dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2649e0:
    // 0x2649e0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x2649e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2649e4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x2649e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2649e8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x2649e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2649ec: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2649ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2649f0: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x2649f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2649f4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2649f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2649f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2649F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2649FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2649F8u;
            // 0x2649fc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x263DC8u: goto label_263dc8;
            case 0x263E58u: goto label_263e58;
            case 0x263E70u: goto label_263e70;
            case 0x263E78u: goto label_263e78;
            case 0x263E90u: goto label_263e90;
            case 0x263EE8u: goto label_263ee8;
            case 0x263F00u: goto label_263f00;
            case 0x263F44u: goto label_263f44;
            case 0x263F60u: goto label_263f60;
            case 0x263FE4u: goto label_263fe4;
            case 0x26404Cu: goto label_26404c;
            case 0x26407Cu: goto label_26407c;
            case 0x2640D4u: goto label_2640d4;
            case 0x2640D8u: goto label_2640d8;
            case 0x264128u: goto label_264128;
            case 0x264180u: goto label_264180;
            case 0x264188u: goto label_264188;
            case 0x2641F0u: goto label_2641f0;
            case 0x264254u: goto label_264254;
            case 0x2642D0u: goto label_2642d0;
            case 0x2642DCu: goto label_2642dc;
            case 0x2642FCu: goto label_2642fc;
            case 0x264314u: goto label_264314;
            case 0x264340u: goto label_264340;
            case 0x264344u: goto label_264344;
            case 0x264348u: goto label_264348;
            case 0x264354u: goto label_264354;
            case 0x26436Cu: goto label_26436c;
            case 0x264370u: goto label_264370;
            case 0x2643C4u: goto label_2643c4;
            case 0x2643C8u: goto label_2643c8;
            case 0x264448u: goto label_264448;
            case 0x264464u: goto label_264464;
            case 0x264480u: goto label_264480;
            case 0x2644A8u: goto label_2644a8;
            case 0x2644ACu: goto label_2644ac;
            case 0x2644B0u: goto label_2644b0;
            case 0x2644B8u: goto label_2644b8;
            case 0x2644BCu: goto label_2644bc;
            case 0x2644FCu: goto label_2644fc;
            case 0x264548u: goto label_264548;
            case 0x26455Cu: goto label_26455c;
            case 0x264570u: goto label_264570;
            case 0x26457Cu: goto label_26457c;
            case 0x264590u: goto label_264590;
            case 0x2645A8u: goto label_2645a8;
            case 0x2645B8u: goto label_2645b8;
            case 0x2645BCu: goto label_2645bc;
            case 0x2645CCu: goto label_2645cc;
            case 0x2645D0u: goto label_2645d0;
            case 0x2645F4u: goto label_2645f4;
            case 0x264648u: goto label_264648;
            case 0x264674u: goto label_264674;
            case 0x2646A4u: goto label_2646a4;
            case 0x2646D8u: goto label_2646d8;
            case 0x2646E0u: goto label_2646e0;
            case 0x2646E4u: goto label_2646e4;
            case 0x264720u: goto label_264720;
            case 0x264744u: goto label_264744;
            case 0x264794u: goto label_264794;
            case 0x264808u: goto label_264808;
            case 0x26480Cu: goto label_26480c;
            case 0x264868u: goto label_264868;
            case 0x264878u: goto label_264878;
            case 0x2648F0u: goto label_2648f0;
            case 0x264914u: goto label_264914;
            case 0x264940u: goto label_264940;
            case 0x264944u: goto label_264944;
            case 0x264948u: goto label_264948;
            case 0x264958u: goto label_264958;
            case 0x264984u: goto label_264984;
            case 0x2649CCu: goto label_2649cc;
            case 0x2649DCu: goto label_2649dc;
            case 0x2649E0u: goto label_2649e0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x264A00u;
}
