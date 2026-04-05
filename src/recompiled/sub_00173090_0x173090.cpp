#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00173090
// Address: 0x173090 - 0x173258
void sub_00173090_0x173090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173090_0x173090");
#endif

    ctx->pc = 0x173090u;

    // 0x173090: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x173090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x173094: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x173094u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x173098: 0x8c43d8c8  lw          $v1, -0x2738($v0)
    ctx->pc = 0x173098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957256)));
    // 0x17309c: 0x2442d8c8  addiu       $v0, $v0, -0x2738
    ctx->pc = 0x17309cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957256));
    // 0x1730a0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1730a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1730a4: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1730a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1730a8: 0x2462fffc  addiu       $v0, $v1, -0x4
    ctx->pc = 0x1730a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x1730ac: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1730acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1730b0: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x1730b0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1730b4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1730b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1730b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1730b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1730bc: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x1730BCu;
    {
        const bool branch_taken_0x1730bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1730C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1730BCu;
            // 0x1730c0: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1730bc) {
            ctx->pc = 0x173210u;
            goto label_173210;
        }
    }
    ctx->pc = 0x1730C4u;
    // 0x1730c4: 0x0  nop
    ctx->pc = 0x1730c4u;
    // NOP
label_1730c8:
    // 0x1730c8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1730c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1730cc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1730ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1730d0: 0x8e060034  lw          $a2, 0x34($s0)
    ctx->pc = 0x1730d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1730d4: 0x2462fffc  addiu       $v0, $v1, -0x4
    ctx->pc = 0x1730d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x1730d8: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x1730d8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1730dc: 0x10c40006  beq         $a2, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1730DCu;
    {
        const bool branch_taken_0x1730dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x1730E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1730DCu;
            // 0x1730e0: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1730dc) {
            ctx->pc = 0x1730F8u;
            goto label_1730f8;
        }
    }
    ctx->pc = 0x1730E4u;
    // 0x1730e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1730e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1730e8: 0x10c2002b  beq         $a2, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x1730E8u;
    {
        const bool branch_taken_0x1730e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1730ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1730E8u;
            // 0x1730ec: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1730e8) {
            ctx->pc = 0x173198u;
            goto label_173198;
        }
    }
    ctx->pc = 0x1730F0u;
    // 0x1730f0: 0x10000049  b           . + 4 + (0x49 << 2)
    ctx->pc = 0x1730F0u;
    {
        const bool branch_taken_0x1730f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1730F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1730F0u;
            // 0x1730f4: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1730f0) {
            ctx->pc = 0x173218u;
            goto label_173218;
        }
    }
    ctx->pc = 0x1730F8u;
label_1730f8:
    // 0x1730f8: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x1730f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1730fc: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x1730fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x173100: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x173100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x173104: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x173104u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x173108: 0x8c63be50  lw          $v1, -0x41B0($v1)
    ctx->pc = 0x173108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950480)));
    // 0x17310c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x17310cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x173110: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x173110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x173114: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x173114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x173118: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x173118u;
    {
        const bool branch_taken_0x173118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17311Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173118u;
            // 0x17311c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173118) {
            ctx->pc = 0x173210u;
            goto label_173210;
        }
    }
    ctx->pc = 0x173120u;
    // 0x173120: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x173120u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x173124: 0xae020034  sw          $v0, 0x34($s0)
    ctx->pc = 0x173124u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
    // 0x173128: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x173128u;
    {
        const bool branch_taken_0x173128 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17312Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173128u;
            // 0x17312c: 0xac60c394  sw          $zero, -0x3C6C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294951828), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173128) {
            ctx->pc = 0x173210u;
            goto label_173210;
        }
    }
    ctx->pc = 0x173130u;
label_173130:
    // 0x173130: 0xc05cb42  jal         func_172D08
    ctx->pc = 0x173130u;
    SET_GPR_U32(ctx, 31, 0x173138u);
    ctx->pc = 0x172D08u;
    if (runtime->hasFunction(0x172D08u)) {
        auto targetFn = runtime->lookupFunction(0x172D08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173138u; }
        if (ctx->pc != 0x173138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172D08_0x172d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173138u; }
        if (ctx->pc != 0x173138u) { return; }
    }
    ctx->pc = 0x173138u;
    // 0x173138: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x173138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x17313c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x17313cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x173140: 0x10100a  movz        $v0, $zero, $s0
    ctx->pc = 0x173140u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x173144: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x173144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x173148: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x173148u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x17314c: 0x3c08002a  lui         $t0, 0x2A
    ctx->pc = 0x17314cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)42 << 16));
    // 0x173150: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x173150u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x173154: 0xae030034  sw          $v1, 0x34($s0)
    ctx->pc = 0x173154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
    // 0x173158: 0xace60000  sw          $a2, 0x0($a3)
    ctx->pc = 0x173158u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 6));
    // 0x17315c: 0xae24c394  sw          $a0, -0x3C6C($s1)
    ctx->pc = 0x17315cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294951828), GPR_U32(ctx, 4));
    // 0x173160: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x173160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x173164: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x173164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x173168: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x173168u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x17316c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x17316cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x173170: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x173170u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x173174: 0x24a5004c  addiu       $a1, $a1, 0x4C
    ctx->pc = 0x173174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 76));
    // 0x173178: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x173178u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x17317c: 0xad00c390  sw          $zero, -0x3C70($t0)
    ctx->pc = 0x17317cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4294951824), GPR_U32(ctx, 0));
    // 0x173180: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x173180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x173184: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x173184u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x173188: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x173188u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x17318c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x17318cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x173190: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x173190u;
    {
        const bool branch_taken_0x173190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173190u;
            // 0x173194: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173190) {
            ctx->pc = 0x173210u;
            goto label_173210;
        }
    }
    ctx->pc = 0x173198u;
label_173198:
    // 0x173198: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x173198u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17319c: 0x0  nop
    ctx->pc = 0x17319cu;
    // NOP
label_1731a0:
    // 0x1731a0: 0x3c11002a  lui         $s1, 0x2A
    ctx->pc = 0x1731a0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)42 << 16));
    // 0x1731a4: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1731a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1731a8: 0x8e22c394  lw          $v0, -0x3C6C($s1)
    ctx->pc = 0x1731a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294951828)));
    // 0x1731ac: 0x3c0b0017  lui         $t3, 0x17
    ctx->pc = 0x1731acu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)23 << 16));
    // 0x1731b0: 0x3c04534d  lui         $a0, 0x534D
    ctx->pc = 0x1731b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21325 << 16));
    // 0x1731b4: 0x256b2d50  addiu       $t3, $t3, 0x2D50
    ctx->pc = 0x1731b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 11600));
    // 0x1731b8: 0x238c0  sll         $a3, $v0, 3
    ctx->pc = 0x1731b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1731bc: 0x34845044  ori         $a0, $a0, 0x5044
    ctx->pc = 0x1731bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20548);
    // 0x1731c0: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x1731c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x1731c4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1731c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1731c8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1731c8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1731cc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1731ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1731d0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1731d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1731d4: 0x1040ffd6  beqz        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x1731D4u;
    {
        const bool branch_taken_0x1731d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1731D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1731D4u;
            // 0x1731d8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1731d4) {
            ctx->pc = 0x173130u;
            runtime->cooperativeGuestYield();
            goto label_173130;
        }
    }
    ctx->pc = 0x1731DCu;
    // 0x1731dc: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1731dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1731e0: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1731e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1731e4: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1731e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1731e8: 0x94470006  lhu         $a3, 0x6($v0)
    ctx->pc = 0x1731e8u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x1731ec: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x1731ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x1731f0: 0xc09b272  jal         func_26C9C8
    ctx->pc = 0x1731F0u;
    SET_GPR_U32(ctx, 31, 0x1731F8u);
    ctx->pc = 0x1731F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1731F0u;
            // 0x1731f4: 0x30e707ff  andi        $a3, $a3, 0x7FF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)2047);
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C9C8u;
    if (runtime->hasFunction(0x26C9C8u)) {
        auto targetFn = runtime->lookupFunction(0x26C9C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1731F8u; }
        if (ctx->pc != 0x1731F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C9C8_0x26c9c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1731F8u; }
        if (ctx->pc != 0x1731F8u) { return; }
    }
    ctx->pc = 0x1731F8u;
    // 0x1731f8: 0x8e22c394  lw          $v0, -0x3C6C($s1)
    ctx->pc = 0x1731f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294951828)));
    // 0x1731fc: 0x2a430008  slti        $v1, $s2, 0x8
    ctx->pc = 0x1731fcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x173200: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x173200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x173204: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x173204u;
    {
        const bool branch_taken_0x173204 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x173208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173204u;
            // 0x173208: 0xae22c394  sw          $v0, -0x3C6C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294951828), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173204) {
            ctx->pc = 0x1731A0u;
            runtime->cooperativeGuestYield();
            goto label_1731a0;
        }
    }
    ctx->pc = 0x17320Cu;
    // 0x17320c: 0x0  nop
    ctx->pc = 0x17320cu;
    // NOP
label_173210:
    // 0x173210: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x173210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x173214: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x173214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_173218:
    // 0x173218: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x173218u;
    {
        const bool branch_taken_0x173218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17321Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173218u;
            // 0x17321c: 0x8fa30010  lw          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173218) {
            ctx->pc = 0x173230u;
            goto label_173230;
        }
    }
    ctx->pc = 0x173220u;
    // 0x173220: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x173220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x173224: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x173224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x173228: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x173228u;
    {
        const bool branch_taken_0x173228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17322Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173228u;
            // 0x17322c: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x173228) {
            ctx->pc = 0x173234u;
            goto label_173234;
        }
    }
    ctx->pc = 0x173230u;
label_173230:
    // 0x173230: 0x3102b  sltu        $v0, $zero, $v1
    ctx->pc = 0x173230u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_173234:
    // 0x173234: 0x5440ffa4  bnel        $v0, $zero, . + 4 + (-0x5C << 2)
    ctx->pc = 0x173234u;
    {
        const bool branch_taken_0x173234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x173234) {
            ctx->pc = 0x173238u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x173234u;
            // 0x173238: 0x8cb00004  lw          $s0, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1730C8u;
            runtime->cooperativeGuestYield();
            goto label_1730c8;
        }
    }
    ctx->pc = 0x17323Cu;
    // 0x17323c: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x17323cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x173240: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x173240u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x173244: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x173244u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173248: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x173248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17324c: 0x3e00008  jr          $ra
    ctx->pc = 0x17324Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17324Cu;
            // 0x173250: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1730C8u: goto label_1730c8;
            case 0x1730F8u: goto label_1730f8;
            case 0x173130u: goto label_173130;
            case 0x173198u: goto label_173198;
            case 0x1731A0u: goto label_1731a0;
            case 0x173210u: goto label_173210;
            case 0x173218u: goto label_173218;
            case 0x173230u: goto label_173230;
            case 0x173234u: goto label_173234;
            default: break;
        }
        return;
    }
    ctx->pc = 0x173254u;
    // 0x173254: 0x0  nop
    ctx->pc = 0x173254u;
    // NOP
}
