#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00279600
// Address: 0x279600 - 0x279838
void sub_00279600_0x279600(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00279600_0x279600");
#endif

    ctx->pc = 0x279600u;

    // 0x279600: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x279600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x279604: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x279604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x279608: 0xc09e562  jal         func_279588
    ctx->pc = 0x279608u;
    SET_GPR_U32(ctx, 31, 0x279610u);
    ctx->pc = 0x27960Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x279608u;
            // 0x27960c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x279588u;
    if (runtime->hasFunction(0x279588u)) {
        auto targetFn = runtime->lookupFunction(0x279588u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279610u; }
        if (ctx->pc != 0x279610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00279588_0x279588(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x279610u; }
        if (ctx->pc != 0x279610u) { return; }
    }
    ctx->pc = 0x279610u;
    // 0x279610: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x279610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x279614: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x279614u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x279618: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x279618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x27961c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x27961cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x279620: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x279620u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x279624: 0x34842010  ori         $a0, $a0, 0x2010
    ctx->pc = 0x279624u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8208);
label_279628:
    // 0x279628: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x279628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27962c: 0x0  nop
    ctx->pc = 0x27962cu;
    // NOP
    // 0x279630: 0x0  nop
    ctx->pc = 0x279630u;
    // NOP
    // 0x279634: 0x0  nop
    ctx->pc = 0x279634u;
    // NOP
    // 0x279638: 0x0  nop
    ctx->pc = 0x279638u;
    // NOP
    // 0x27963c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27963Cu;
    {
        const bool branch_taken_0x27963c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x27963c) {
            ctx->pc = 0x279628u;
            runtime->cooperativeGuestYield();
            goto label_279628;
        }
    }
    ctx->pc = 0x279644u;
    // 0x279644: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x279644u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x279648: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x279648u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x27964c: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x27964cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x279650: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x279650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x279654: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x279654u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_279658:
    // 0x279658: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x279658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27965c: 0x0  nop
    ctx->pc = 0x27965cu;
    // NOP
    // 0x279660: 0x0  nop
    ctx->pc = 0x279660u;
    // NOP
    // 0x279664: 0x0  nop
    ctx->pc = 0x279664u;
    // NOP
    // 0x279668: 0x0  nop
    ctx->pc = 0x279668u;
    // NOP
    // 0x27966c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27966Cu;
    {
        const bool branch_taken_0x27966c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x27966c) {
            ctx->pc = 0x279658u;
            runtime->cooperativeGuestYield();
            goto label_279658;
        }
    }
    ctx->pc = 0x279674u;
    // 0x279674: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x279674u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x279678: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x279678u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x27967c: 0x24a51610  addiu       $a1, $a1, 0x1610
    ctx->pc = 0x27967cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5648));
    // 0x279680: 0x34847010  ori         $a0, $a0, 0x7010
    ctx->pc = 0x279680u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)28688);
    // 0x279684: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x279684u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x279688: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x279688u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x27968c: 0x3c075000  lui         $a3, 0x5000
    ctx->pc = 0x27968cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)20480 << 16));
    // 0x279690: 0x34c62000  ori         $a2, $a2, 0x2000
    ctx->pc = 0x279690u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8192);
    // 0x279694: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x279694u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x279698: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x279698u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x27969c: 0x35082010  ori         $t0, $t0, 0x2010
    ctx->pc = 0x27969cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)8208);
    // 0x2796a0: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x2796a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x2796a4: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2796a4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2796a8: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x2796a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x2796ac: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x2796acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x2796b0: 0x78a30030  lq          $v1, 0x30($a1)
    ctx->pc = 0x2796b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x2796b4: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2796b4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2796b8: 0x78a20040  lq          $v0, 0x40($a1)
    ctx->pc = 0x2796b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x2796bc: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x2796bcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x2796c0: 0x78a30040  lq          $v1, 0x40($a1)
    ctx->pc = 0x2796c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x2796c4: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2796c4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2796c8: 0x78a20040  lq          $v0, 0x40($a1)
    ctx->pc = 0x2796c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x2796cc: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x2796ccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x2796d0: 0x78a30040  lq          $v1, 0x40($a1)
    ctx->pc = 0x2796d0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x2796d4: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2796d4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2796d8: 0xacc70000  sw          $a3, 0x0($a2)
    ctx->pc = 0x2796d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 7));
    // 0x2796dc: 0x0  nop
    ctx->pc = 0x2796dcu;
    // NOP
label_2796e0:
    // 0x2796e0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2796e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2796e4: 0x0  nop
    ctx->pc = 0x2796e4u;
    // NOP
    // 0x2796e8: 0x0  nop
    ctx->pc = 0x2796e8u;
    // NOP
    // 0x2796ec: 0x0  nop
    ctx->pc = 0x2796ecu;
    // NOP
    // 0x2796f0: 0x0  nop
    ctx->pc = 0x2796f0u;
    // NOP
    // 0x2796f4: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2796F4u;
    {
        const bool branch_taken_0x2796f4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2796f4) {
            ctx->pc = 0x2796E0u;
            runtime->cooperativeGuestYield();
            goto label_2796e0;
        }
    }
    ctx->pc = 0x2796FCu;
    // 0x2796fc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2796fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x279700: 0x3c035800  lui         $v1, 0x5800
    ctx->pc = 0x279700u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)22528 << 16));
    // 0x279704: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x279704u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x279708: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x279708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x27970c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x27970cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x279710: 0x34842010  ori         $a0, $a0, 0x2010
    ctx->pc = 0x279710u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8208);
    // 0x279714: 0x0  nop
    ctx->pc = 0x279714u;
    // NOP
label_279718:
    // 0x279718: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x279718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27971c: 0x0  nop
    ctx->pc = 0x27971cu;
    // NOP
    // 0x279720: 0x0  nop
    ctx->pc = 0x279720u;
    // NOP
    // 0x279724: 0x0  nop
    ctx->pc = 0x279724u;
    // NOP
    // 0x279728: 0x0  nop
    ctx->pc = 0x279728u;
    // NOP
    // 0x27972c: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27972Cu;
    {
        const bool branch_taken_0x27972c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x27972c) {
            ctx->pc = 0x279718u;
            runtime->cooperativeGuestYield();
            goto label_279718;
        }
    }
    ctx->pc = 0x279734u;
    // 0x279734: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x279734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x279738: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x279738u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x27973c: 0x24631660  addiu       $v1, $v1, 0x1660
    ctx->pc = 0x27973cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5728));
    // 0x279740: 0x34847010  ori         $a0, $a0, 0x7010
    ctx->pc = 0x279740u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)28688);
    // 0x279744: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x279744u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x279748: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x279748u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x27974c: 0x3c066000  lui         $a2, 0x6000
    ctx->pc = 0x27974cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)24576 << 16));
    // 0x279750: 0x34a52000  ori         $a1, $a1, 0x2000
    ctx->pc = 0x279750u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8192);
    // 0x279754: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x279754u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x279758: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x279758u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x27975c: 0x34e72010  ori         $a3, $a3, 0x2010
    ctx->pc = 0x27975cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8208);
    // 0x279760: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x279760u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x279764: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x279764u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x279768: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x279768u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x27976c: 0x0  nop
    ctx->pc = 0x27976cu;
    // NOP
label_279770:
    // 0x279770: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x279770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x279774: 0x0  nop
    ctx->pc = 0x279774u;
    // NOP
    // 0x279778: 0x0  nop
    ctx->pc = 0x279778u;
    // NOP
    // 0x27977c: 0x0  nop
    ctx->pc = 0x27977cu;
    // NOP
    // 0x279780: 0x0  nop
    ctx->pc = 0x279780u;
    // NOP
    // 0x279784: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x279784u;
    {
        const bool branch_taken_0x279784 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x279784) {
            ctx->pc = 0x279770u;
            runtime->cooperativeGuestYield();
            goto label_279770;
        }
    }
    ctx->pc = 0x27978Cu;
    // 0x27978c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x27978cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x279790: 0x3c039000  lui         $v1, 0x9000
    ctx->pc = 0x279790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)36864 << 16));
    // 0x279794: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x279794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x279798: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x279798u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x27979c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x27979cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2797a0: 0x34842010  ori         $a0, $a0, 0x2010
    ctx->pc = 0x2797a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8208);
    // 0x2797a4: 0x0  nop
    ctx->pc = 0x2797a4u;
    // NOP
label_2797a8:
    // 0x2797a8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2797a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2797ac: 0x0  nop
    ctx->pc = 0x2797acu;
    // NOP
    // 0x2797b0: 0x0  nop
    ctx->pc = 0x2797b0u;
    // NOP
    // 0x2797b4: 0x0  nop
    ctx->pc = 0x2797b4u;
    // NOP
    // 0x2797b8: 0x0  nop
    ctx->pc = 0x2797b8u;
    // NOP
    // 0x2797bc: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2797BCu;
    {
        const bool branch_taken_0x2797bc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2797bc) {
            ctx->pc = 0x2797A8u;
            runtime->cooperativeGuestYield();
            goto label_2797a8;
        }
    }
    ctx->pc = 0x2797C4u;
    // 0x2797c4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2797c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2797c8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x2797c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x2797cc: 0x34422010  ori         $v0, $v0, 0x2010
    ctx->pc = 0x2797ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8208);
    // 0x2797d0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x2797d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x2797d4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2797d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2797d8: 0x34842010  ori         $a0, $a0, 0x2010
    ctx->pc = 0x2797d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8208);
    // 0x2797dc: 0x0  nop
    ctx->pc = 0x2797dcu;
    // NOP
label_2797e0:
    // 0x2797e0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2797e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2797e4: 0x0  nop
    ctx->pc = 0x2797e4u;
    // NOP
    // 0x2797e8: 0x0  nop
    ctx->pc = 0x2797e8u;
    // NOP
    // 0x2797ec: 0x0  nop
    ctx->pc = 0x2797ecu;
    // NOP
    // 0x2797f0: 0x0  nop
    ctx->pc = 0x2797f0u;
    // NOP
    // 0x2797f4: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2797F4u;
    {
        const bool branch_taken_0x2797f4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2797f4) {
            ctx->pc = 0x2797E0u;
            runtime->cooperativeGuestYield();
            goto label_2797e0;
        }
    }
    ctx->pc = 0x2797FCu;
    // 0x2797fc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2797fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x279800: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x279800u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x279804: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x279804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
    // 0x279808: 0x34632010  ori         $v1, $v1, 0x2010
    ctx->pc = 0x279808u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8208);
    // 0x27980c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x27980cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_279810:
    // 0x279810: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x279810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x279814: 0x0  nop
    ctx->pc = 0x279814u;
    // NOP
    // 0x279818: 0x0  nop
    ctx->pc = 0x279818u;
    // NOP
    // 0x27981c: 0x0  nop
    ctx->pc = 0x27981cu;
    // NOP
    // 0x279820: 0x0  nop
    ctx->pc = 0x279820u;
    // NOP
    // 0x279824: 0x440fffa  bltz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x279824u;
    {
        const bool branch_taken_0x279824 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x279824) {
            ctx->pc = 0x279810u;
            runtime->cooperativeGuestYield();
            goto label_279810;
        }
    }
    ctx->pc = 0x27982Cu;
    // 0x27982c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27982cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279830: 0x3e00008  jr          $ra
    ctx->pc = 0x279830u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x279834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x279830u;
            // 0x279834: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x279628u: goto label_279628;
            case 0x279658u: goto label_279658;
            case 0x2796E0u: goto label_2796e0;
            case 0x279718u: goto label_279718;
            case 0x279770u: goto label_279770;
            case 0x2797A8u: goto label_2797a8;
            case 0x2797E0u: goto label_2797e0;
            case 0x279810u: goto label_279810;
            default: break;
        }
        return;
    }
    ctx->pc = 0x279838u;
}
