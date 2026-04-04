#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00182280
// Address: 0x182280 - 0x1825e0
void sub_00182280_0x182280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182280_0x182280");
#endif

    ctx->pc = 0x182280u;

    // 0x182280: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x182280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x182284: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x182284u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x182288: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x182288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x18228c: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x18228cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182290: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x182290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x182294: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x182294u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182298: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x182298u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x18229c: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x18229cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1822a0: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x1822a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x1822a4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1822a4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1822a8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1822a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1822ac: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x1822acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1822b0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1822b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1822b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1822b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1822b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1822b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1822bc: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1822bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1822c0:
    // 0x1822c0: 0x2331007  srav        $v0, $s3, $s1
    ctx->pc = 0x1822c0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 19), GPR_U32(ctx, 17) & 0x1F));
    // 0x1822c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1822c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1822c8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1822C8u;
    {
        const bool branch_taken_0x1822c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1822CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1822C8u;
            // 0x1822cc: 0x2511021  addu        $v0, $s2, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1822c8) {
            ctx->pc = 0x182304u;
            goto label_182304;
        }
    }
    ctx->pc = 0x1822D0u;
    // 0x1822d0: 0x2403003a  addiu       $v1, $zero, 0x3A
    ctx->pc = 0x1822d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x1822d4: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x1822d4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1822d8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1822d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1822dc: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1822dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1822e0: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x1822e0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1822e4: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x1822e4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1822e8: 0xc05d5d0  jal         func_175740
    ctx->pc = 0x1822E8u;
    SET_GPR_U32(ctx, 31, 0x1822F0u);
    ctx->pc = 0x1822ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1822E8u;
            // 0x1822ec: 0xa3a00002  sb          $zero, 0x2($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175740u;
    if (runtime->hasFunction(0x175740u)) {
        auto targetFn = runtime->lookupFunction(0x175740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1822F0u; }
        if (ctx->pc != 0x1822F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175740_0x175780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1822F0u; }
        if (ctx->pc != 0x1822F0u) { return; }
    }
    ctx->pc = 0x1822F0u;
    // 0x1822f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1822f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1822f4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1822f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1822f8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x1822f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1822fc: 0xc060570  jal         func_1815C0
    ctx->pc = 0x1822FCu;
    SET_GPR_U32(ctx, 31, 0x182304u);
    ctx->pc = 0x182300u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1822FCu;
            // 0x182300: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1815C0u;
    if (runtime->hasFunction(0x1815C0u)) {
        auto targetFn = runtime->lookupFunction(0x1815C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182304u; }
        if (ctx->pc != 0x182304u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001815C0_0x1815c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182304u; }
        if (ctx->pc != 0x182304u) { return; }
    }
    ctx->pc = 0x182304u;
label_182304:
    // 0x182304: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x182304u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x182308: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x182308u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x18230c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x18230Cu;
    {
        const bool branch_taken_0x18230c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x182310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18230Cu;
            // 0x182310: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18230c) {
            ctx->pc = 0x1822C0u;
            runtime->cooperativeGuestYield();
            goto label_1822c0;
        }
    }
    ctx->pc = 0x182314u;
    // 0x182314: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x182314u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x182318: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x182318u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18231c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x18231cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x182320: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x182320u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x182324: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x182324u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x182328: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x182328u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18232c: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x18232cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x182330: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x182330u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x182334: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x182334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182338: 0x3e00008  jr          $ra
    ctx->pc = 0x182338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18233Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182338u;
            // 0x18233c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1822C0u: goto label_1822c0;
            case 0x182304u: goto label_182304;
            case 0x182370u: goto label_182370;
            case 0x182390u: goto label_182390;
            case 0x1823B8u: goto label_1823b8;
            case 0x1823C4u: goto label_1823c4;
            case 0x1823F0u: goto label_1823f0;
            case 0x182420u: goto label_182420;
            case 0x182424u: goto label_182424;
            case 0x182460u: goto label_182460;
            case 0x182480u: goto label_182480;
            case 0x1824A0u: goto label_1824a0;
            case 0x1824E0u: goto label_1824e0;
            case 0x182500u: goto label_182500;
            case 0x182530u: goto label_182530;
            case 0x182578u: goto label_182578;
            case 0x182598u: goto label_182598;
            case 0x1825C4u: goto label_1825c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x182340u;
    // 0x182340: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x182340u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182344: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x182344u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x182348: 0x8ce30024  lw          $v1, 0x24($a3)
    ctx->pc = 0x182348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
    // 0x18234c: 0xa0402d  daddu       $t0, $a1, $zero
    ctx->pc = 0x18234cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182350: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x182350u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182354: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x182354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x182358: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x182358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18235c: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x18235Cu;
    {
        const bool branch_taken_0x18235c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x182360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18235Cu;
            // 0x182360: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18235c) {
            ctx->pc = 0x182390u;
            goto label_182390;
        }
    }
    ctx->pc = 0x182364u;
    // 0x182364: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x182364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182368: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x182368u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x18236c: 0x0  nop
    ctx->pc = 0x18236cu;
    // NOP
label_182370:
    // 0x182370: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x182370u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182374: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x182374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x182378: 0x24c03  sra         $t1, $v0, 16
    ctx->pc = 0x182378u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 2), 16));
    // 0x18237c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x18237cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x182380: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x182380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x182384: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x182384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x182388: 0x1445fff9  bne         $v0, $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x182388u;
    {
        const bool branch_taken_0x182388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x18238Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182388u;
            // 0x18238c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182388) {
            ctx->pc = 0x182370u;
            runtime->cooperativeGuestYield();
            goto label_182370;
        }
    }
    ctx->pc = 0x182390u;
label_182390:
    // 0x182390: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x182390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182394: 0x105102a  slt         $v0, $t0, $a1
    ctx->pc = 0x182394u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x182398: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x182398u;
    {
        const bool branch_taken_0x182398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x182398) {
            ctx->pc = 0x18239Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x182398u;
            // 0x18239c: 0x8ce30024  lw          $v1, 0x24($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1823C4u;
            goto label_1823c4;
        }
    }
    ctx->pc = 0x1823A0u;
    // 0x1823a0: 0x1051023  subu        $v0, $t0, $a1
    ctx->pc = 0x1823a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x1823a4: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x1823a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x1823a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1823a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1823ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1823acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1823b0: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1823B0u;
    {
        const bool branch_taken_0x1823b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1823B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1823B0u;
            // 0x1823b4: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1823b0) {
            ctx->pc = 0x182424u;
            goto label_182424;
        }
    }
    ctx->pc = 0x1823B8u;
label_1823b8:
    // 0x1823b8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1823b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1823bc: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1823BCu;
    {
        const bool branch_taken_0x1823bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1823C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1823BCu;
            // 0x1823c0: 0x8c420008  lw          $v0, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1823bc) {
            ctx->pc = 0x182424u;
            goto label_182424;
        }
    }
    ctx->pc = 0x1823C4u;
label_1823c4:
    // 0x1823c4: 0x81400  sll         $v0, $t0, 16
    ctx->pc = 0x1823c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x1823c8: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x1823c8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1823cc: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x1823ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1823d0: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1823d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x1823d4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1823d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1823d8: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x1823d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x1823dc: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x1823dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1823e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1823e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1823e4: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1823E4u;
    {
        const bool branch_taken_0x1823e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1823E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1823E4u;
            // 0x1823e8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1823e4) {
            ctx->pc = 0x182420u;
            goto label_182420;
        }
    }
    ctx->pc = 0x1823ECu;
    // 0x1823ec: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x1823ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
label_1823f0:
    // 0x1823f0: 0x1105fff1  beq         $t0, $a1, . + 4 + (-0xF << 2)
    ctx->pc = 0x1823F0u;
    {
        const bool branch_taken_0x1823f0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 5));
        ctx->pc = 0x1823F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1823F0u;
            // 0x1823f4: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1823f0) {
            ctx->pc = 0x1823B8u;
            runtime->cooperativeGuestYield();
            goto label_1823b8;
        }
    }
    ctx->pc = 0x1823F8u;
    // 0x1823f8: 0x61403  sra         $v0, $a2, 16
    ctx->pc = 0x1823f8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 6), 16));
    // 0x1823fc: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1823fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182400: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x182400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x182404: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x182404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x182408: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x182408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x18240c: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x18240cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x182410: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x182410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x182414: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x182414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182418: 0x1462fff5  bne         $v1, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x182418u;
    {
        const bool branch_taken_0x182418 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x182418) {
            ctx->pc = 0x1823F0u;
            runtime->cooperativeGuestYield();
            goto label_1823f0;
        }
    }
    ctx->pc = 0x182420u;
label_182420:
    // 0x182420: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x182420u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_182424:
    // 0x182424: 0x3e00008  jr          $ra
    ctx->pc = 0x182424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182424u;
            // 0x182428: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1822C0u: goto label_1822c0;
            case 0x182304u: goto label_182304;
            case 0x182370u: goto label_182370;
            case 0x182390u: goto label_182390;
            case 0x1823B8u: goto label_1823b8;
            case 0x1823C4u: goto label_1823c4;
            case 0x1823F0u: goto label_1823f0;
            case 0x182420u: goto label_182420;
            case 0x182424u: goto label_182424;
            case 0x182460u: goto label_182460;
            case 0x182480u: goto label_182480;
            case 0x1824A0u: goto label_1824a0;
            case 0x1824E0u: goto label_1824e0;
            case 0x182500u: goto label_182500;
            case 0x182530u: goto label_182530;
            case 0x182578u: goto label_182578;
            case 0x182598u: goto label_182598;
            case 0x1825C4u: goto label_1825c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18242Cu;
    // 0x18242c: 0x0  nop
    ctx->pc = 0x18242cu;
    // NOP
    // 0x182430: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x182430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x182434: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x182434u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182438: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x182438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18243c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x18243cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182440: 0x8d230024  lw          $v1, 0x24($t1)
    ctx->pc = 0x182440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 36)));
    // 0x182444: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x182444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x182448: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x182448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18244c: 0x1043000c  beq         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x18244Cu;
    {
        const bool branch_taken_0x18244c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x182450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18244Cu;
            // 0x182450: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18244c) {
            ctx->pc = 0x182480u;
            goto label_182480;
        }
    }
    ctx->pc = 0x182454u;
    // 0x182454: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x182454u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182458: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x182458u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x18245c: 0x0  nop
    ctx->pc = 0x18245cu;
    // NOP
label_182460:
    // 0x182460: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x182460u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182464: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x182464u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x182468: 0x24403  sra         $t0, $v0, 16
    ctx->pc = 0x182468u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 16));
    // 0x18246c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x18246cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x182470: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x182470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x182474: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x182474u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x182478: 0x1447fff9  bne         $v0, $a3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x182478u;
    {
        const bool branch_taken_0x182478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x18247Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182478u;
            // 0x18247c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182478) {
            ctx->pc = 0x182460u;
            runtime->cooperativeGuestYield();
            goto label_182460;
        }
    }
    ctx->pc = 0x182480u;
label_182480:
    // 0x182480: 0x100182d  daddu       $v1, $t0, $zero
    ctx->pc = 0x182480u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182484: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x182484u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x182488: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x182488u;
    {
        const bool branch_taken_0x182488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18248Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182488u;
            // 0x18248c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182488) {
            ctx->pc = 0x1824A0u;
            goto label_1824a0;
        }
    }
    ctx->pc = 0x182490u;
    // 0x182490: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x182490u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x182494: 0xc05fcde  jal         func_17F378
    ctx->pc = 0x182494u;
    SET_GPR_U32(ctx, 31, 0x18249Cu);
    ctx->pc = 0x182498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182494u;
            // 0x182498: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F378u;
    if (runtime->hasFunction(0x17F378u)) {
        auto targetFn = runtime->lookupFunction(0x17F378u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18249Cu; }
        if (ctx->pc != 0x18249Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017F378_0x17f378(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18249Cu; }
        if (ctx->pc != 0x18249Cu) { return; }
    }
    ctx->pc = 0x18249Cu;
    // 0x18249c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18249cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1824a0:
    // 0x1824a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1824A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1824A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1824A0u;
            // 0x1824a4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1822C0u: goto label_1822c0;
            case 0x182304u: goto label_182304;
            case 0x182370u: goto label_182370;
            case 0x182390u: goto label_182390;
            case 0x1823B8u: goto label_1823b8;
            case 0x1823C4u: goto label_1823c4;
            case 0x1823F0u: goto label_1823f0;
            case 0x182420u: goto label_182420;
            case 0x182424u: goto label_182424;
            case 0x182460u: goto label_182460;
            case 0x182480u: goto label_182480;
            case 0x1824A0u: goto label_1824a0;
            case 0x1824E0u: goto label_1824e0;
            case 0x182500u: goto label_182500;
            case 0x182530u: goto label_182530;
            case 0x182578u: goto label_182578;
            case 0x182598u: goto label_182598;
            case 0x1825C4u: goto label_1825c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1824A8u;
    // 0x1824a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1824a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1824ac: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x1824acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x1824b0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1824b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1824b4: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x1824b4u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x1824b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1824b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1824bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1824bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1824c0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1824c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1824c4: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x1824c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1824c8: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1824c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1824cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1824ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1824d0: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1824D0u;
    {
        const bool branch_taken_0x1824d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1824D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1824D0u;
            // 0x1824d4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1824d0) {
            ctx->pc = 0x182500u;
            goto label_182500;
        }
    }
    ctx->pc = 0x1824D8u;
    // 0x1824d8: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1824d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1824dc: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x1824dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
label_1824e0:
    // 0x1824e0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1824e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1824e4: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1824e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1824e8: 0x24403  sra         $t0, $v0, 16
    ctx->pc = 0x1824e8u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1824ec: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1824ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1824f0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1824f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1824f4: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x1824f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x1824f8: 0x1447fff9  bne         $v0, $a3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1824F8u;
    {
        const bool branch_taken_0x1824f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x1824FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1824F8u;
            // 0x1824fc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1824f8) {
            ctx->pc = 0x1824E0u;
            runtime->cooperativeGuestYield();
            goto label_1824e0;
        }
    }
    ctx->pc = 0x182500u;
label_182500:
    // 0x182500: 0xa8102a  slt         $v0, $a1, $t0
    ctx->pc = 0x182500u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x182504: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x182504u;
    {
        const bool branch_taken_0x182504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x182504) {
            ctx->pc = 0x182508u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x182504u;
            // 0x182508: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x182530u;
            goto label_182530;
        }
    }
    ctx->pc = 0x18250Cu;
    // 0x18250c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x18250cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x182510: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x182510u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x182514: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x182514u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x182518: 0x40f809  jalr        $v0
    ctx->pc = 0x182518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x182520u);
        ctx->pc = 0x18251Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182518u;
            // 0x18251c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x182520u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1822C0u: goto label_1822c0;
            case 0x182304u: goto label_182304;
            case 0x182370u: goto label_182370;
            case 0x182390u: goto label_182390;
            case 0x1823B8u: goto label_1823b8;
            case 0x1823C4u: goto label_1823c4;
            case 0x1823F0u: goto label_1823f0;
            case 0x182420u: goto label_182420;
            case 0x182424u: goto label_182424;
            case 0x182460u: goto label_182460;
            case 0x182480u: goto label_182480;
            case 0x1824A0u: goto label_1824a0;
            case 0x1824E0u: goto label_1824e0;
            case 0x182500u: goto label_182500;
            case 0x182530u: goto label_182530;
            case 0x182578u: goto label_182578;
            case 0x182598u: goto label_182598;
            case 0x1825C4u: goto label_1825c4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x182520u; }
            if (ctx->pc != 0x182520u) { return; }
        }
        }
    }
    ctx->pc = 0x182520u;
    // 0x182520: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182524: 0xc05feb4  jal         func_17FAD0
    ctx->pc = 0x182524u;
    SET_GPR_U32(ctx, 31, 0x18252Cu);
    ctx->pc = 0x182528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182524u;
            // 0x182528: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17FAD0u;
    if (runtime->hasFunction(0x17FAD0u)) {
        auto targetFn = runtime->lookupFunction(0x17FAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18252Cu; }
        if (ctx->pc != 0x18252Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017FAD0_0x17fad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18252Cu; }
        if (ctx->pc != 0x18252Cu) { return; }
    }
    ctx->pc = 0x18252Cu;
    // 0x18252c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x18252cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_182530:
    // 0x182530: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x182530u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182534: 0x3e00008  jr          $ra
    ctx->pc = 0x182534u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182534u;
            // 0x182538: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1822C0u: goto label_1822c0;
            case 0x182304u: goto label_182304;
            case 0x182370u: goto label_182370;
            case 0x182390u: goto label_182390;
            case 0x1823B8u: goto label_1823b8;
            case 0x1823C4u: goto label_1823c4;
            case 0x1823F0u: goto label_1823f0;
            case 0x182420u: goto label_182420;
            case 0x182424u: goto label_182424;
            case 0x182460u: goto label_182460;
            case 0x182480u: goto label_182480;
            case 0x1824A0u: goto label_1824a0;
            case 0x1824E0u: goto label_1824e0;
            case 0x182500u: goto label_182500;
            case 0x182530u: goto label_182530;
            case 0x182578u: goto label_182578;
            case 0x182598u: goto label_182598;
            case 0x1825C4u: goto label_1825c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x18253Cu;
    // 0x18253c: 0x0  nop
    ctx->pc = 0x18253cu;
    // NOP
    // 0x182540: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x182540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x182544: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x182544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x182548: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x182548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18254c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18254cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182550: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x182550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x182554: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x182554u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182558: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x182558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18255c: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x18255cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
    // 0x182560: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x182560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x182564: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x182564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x182568: 0x1043000b  beq         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x182568u;
    {
        const bool branch_taken_0x182568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x18256Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182568u;
            // 0x18256c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182568) {
            ctx->pc = 0x182598u;
            goto label_182598;
        }
    }
    ctx->pc = 0x182570u;
    // 0x182570: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x182570u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182574: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x182574u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
label_182578:
    // 0x182578: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x182578u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18257c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x18257cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x182580: 0x28403  sra         $s0, $v0, 16
    ctx->pc = 0x182580u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 2), 16));
    // 0x182584: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x182584u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x182588: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x182588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18258c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x18258cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x182590: 0x1447fff9  bne         $v0, $a3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x182590u;
    {
        const bool branch_taken_0x182590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x182594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182590u;
            // 0x182594: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182590) {
            ctx->pc = 0x182578u;
            runtime->cooperativeGuestYield();
            goto label_182578;
        }
    }
    ctx->pc = 0x182598u;
label_182598:
    // 0x182598: 0xc06024a  jal         func_180928
    ctx->pc = 0x182598u;
    SET_GPR_U32(ctx, 31, 0x1825A0u);
    ctx->pc = 0x18259Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182598u;
            // 0x18259c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180928u;
    if (runtime->hasFunction(0x180928u)) {
        auto targetFn = runtime->lookupFunction(0x180928u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1825A0u; }
        if (ctx->pc != 0x1825A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180928_0x180928(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1825A0u; }
        if (ctx->pc != 0x1825A0u) { return; }
    }
    ctx->pc = 0x1825A0u;
    // 0x1825a0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1825a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1825a4: 0x230802a  slt         $s0, $s1, $s0
    ctx->pc = 0x1825a4u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x1825a8: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1825A8u;
    {
        const bool branch_taken_0x1825a8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1825ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1825A8u;
            // 0x1825ac: 0x111400  sll         $v0, $s1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1825a8) {
            ctx->pc = 0x1825C4u;
            goto label_1825c4;
        }
    }
    ctx->pc = 0x1825B0u;
    // 0x1825b0: 0x112c00  sll         $a1, $s1, 16
    ctx->pc = 0x1825b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
    // 0x1825b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1825b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1825b8: 0xc05fe90  jal         func_17FA40
    ctx->pc = 0x1825B8u;
    SET_GPR_U32(ctx, 31, 0x1825C0u);
    ctx->pc = 0x1825BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1825B8u;
            // 0x1825bc: 0x52c03  sra         $a1, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17FA40u;
    if (runtime->hasFunction(0x17FA40u)) {
        auto targetFn = runtime->lookupFunction(0x17FA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1825C0u; }
        if (ctx->pc != 0x1825C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17fa40_0x17fad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1825C0u; }
        if (ctx->pc != 0x1825C0u) { return; }
    }
    ctx->pc = 0x1825C0u;
    // 0x1825c0: 0x111400  sll         $v0, $s1, 16
    ctx->pc = 0x1825c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 16));
label_1825c4:
    // 0x1825c4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1825c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1825c8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1825c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1825cc: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x1825ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1825d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1825d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1825d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1825d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1825d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1825D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1825DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1825D8u;
            // 0x1825dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1822C0u: goto label_1822c0;
            case 0x182304u: goto label_182304;
            case 0x182370u: goto label_182370;
            case 0x182390u: goto label_182390;
            case 0x1823B8u: goto label_1823b8;
            case 0x1823C4u: goto label_1823c4;
            case 0x1823F0u: goto label_1823f0;
            case 0x182420u: goto label_182420;
            case 0x182424u: goto label_182424;
            case 0x182460u: goto label_182460;
            case 0x182480u: goto label_182480;
            case 0x1824A0u: goto label_1824a0;
            case 0x1824E0u: goto label_1824e0;
            case 0x182500u: goto label_182500;
            case 0x182530u: goto label_182530;
            case 0x182578u: goto label_182578;
            case 0x182598u: goto label_182598;
            case 0x1825C4u: goto label_1825c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1825E0u;
}
