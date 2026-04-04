#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026E360
// Address: 0x26e360 - 0x26e4d0
void sub_0026E360_0x26e360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026E360_0x26e360");
#endif

    ctx->pc = 0x26e360u;

    // 0x26e360: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26e360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x26e364: 0x3c0d002a  lui         $t5, 0x2A
    ctx->pc = 0x26e364u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)42 << 16));
    // 0x26e368: 0x8dac1430  lw          $t4, 0x1430($t5)
    ctx->pc = 0x26e368u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 5168)));
    // 0x26e36c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x26e36cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x26e370: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x26e370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x26e374: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x26e374u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x26e378: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x26e378u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x26e37c: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x26e37cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x26e380: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x26e380u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x26e384: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x26e384u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x26e388: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26e388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26e38c: 0x42403  sra         $a0, $a0, 16
    ctx->pc = 0x26e38cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    // 0x26e390: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x26e390u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x26e394: 0x73c03  sra         $a3, $a3, 16
    ctx->pc = 0x26e394u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 7), 16));
    // 0x26e398: 0x84403  sra         $t0, $t0, 16
    ctx->pc = 0x26e398u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 16));
    // 0x26e39c: 0x63403  sra         $a2, $a2, 16
    ctx->pc = 0x26e39cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 16));
    // 0x26e3a0: 0x94c03  sra         $t1, $t1, 16
    ctx->pc = 0x26e3a0u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 9), 16));
    // 0x26e3a4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x26e3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26e3a8: 0xa58a005e  sh          $t2, 0x5E($t4)
    ctx->pc = 0x26e3a8u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 94), (uint16_t)GPR_U32(ctx, 10));
    // 0x26e3ac: 0xad820074  sw          $v0, 0x74($t4)
    ctx->pc = 0x26e3acu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 116), GPR_U32(ctx, 2));
    // 0x26e3b0: 0xa583004c  sh          $v1, 0x4C($t4)
    ctx->pc = 0x26e3b0u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 76), (uint16_t)GPR_U32(ctx, 3));
    // 0x26e3b4: 0xad800078  sw          $zero, 0x78($t4)
    ctx->pc = 0x26e3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 120), GPR_U32(ctx, 0));
    // 0x26e3b8: 0xa5840050  sh          $a0, 0x50($t4)
    ctx->pc = 0x26e3b8u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 80), (uint16_t)GPR_U32(ctx, 4));
    // 0x26e3bc: 0xa5850052  sh          $a1, 0x52($t4)
    ctx->pc = 0x26e3bcu;
    WRITE16(ADD32(GPR_U32(ctx, 12), 82), (uint16_t)GPR_U32(ctx, 5));
    // 0x26e3c0: 0xa586004e  sh          $a2, 0x4E($t4)
    ctx->pc = 0x26e3c0u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 78), (uint16_t)GPR_U32(ctx, 6));
    // 0x26e3c4: 0xa587005a  sh          $a3, 0x5A($t4)
    ctx->pc = 0x26e3c4u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 90), (uint16_t)GPR_U32(ctx, 7));
    // 0x26e3c8: 0xa588005c  sh          $t0, 0x5C($t4)
    ctx->pc = 0x26e3c8u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 92), (uint16_t)GPR_U32(ctx, 8));
    // 0x26e3cc: 0x1526000b  bne         $t1, $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x26E3CCu;
    {
        const bool branch_taken_0x26e3cc = (GPR_U64(ctx, 9) != GPR_U64(ctx, 6));
        ctx->pc = 0x26E3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E3CCu;
            // 0x26e3d0: 0xa5890058  sh          $t1, 0x58($t4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 12), 88), (uint16_t)GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e3cc) {
            ctx->pc = 0x26E3FCu;
            goto label_26e3fc;
        }
    }
    ctx->pc = 0x26E3D4u;
    // 0x26e3d4: 0x14e4000a  bne         $a3, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x26E3D4u;
    {
        const bool branch_taken_0x26e3d4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 4));
        ctx->pc = 0x26E3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E3D4u;
            // 0x26e3d8: 0x8da31430  lw          $v1, 0x1430($t5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 5168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e3d4) {
            ctx->pc = 0x26E400u;
            goto label_26e400;
        }
    }
    ctx->pc = 0x26E3DCu;
    // 0x26e3dc: 0x15050009  bne         $t0, $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x26E3DCu;
    {
        const bool branch_taken_0x26e3dc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 5));
        ctx->pc = 0x26E3E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E3DCu;
            // 0x26e3e0: 0x29020121  slti        $v0, $t0, 0x121 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)289) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e3dc) {
            ctx->pc = 0x26E404u;
            goto label_26e404;
        }
    }
    ctx->pc = 0x26E3E4u;
    // 0x26e3e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x26e3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26e3e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x26e3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26e3ec: 0xad83006c  sw          $v1, 0x6C($t4)
    ctx->pc = 0x26e3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 108), GPR_U32(ctx, 3));
    // 0x26e3f0: 0xa5820042  sh          $v0, 0x42($t4)
    ctx->pc = 0x26e3f0u;
    WRITE16(ADD32(GPR_U32(ctx, 12), 66), (uint16_t)GPR_U32(ctx, 2));
    // 0x26e3f4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x26E3F4u;
    {
        const bool branch_taken_0x26e3f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E3F4u;
            // 0x26e3f8: 0xa58b0040  sh          $t3, 0x40($t4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 12), 64), (uint16_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e3f4) {
            ctx->pc = 0x26E41Cu;
            goto label_26e41c;
        }
    }
    ctx->pc = 0x26E3FCu;
label_26e3fc:
    // 0x26e3fc: 0x8da31430  lw          $v1, 0x1430($t5)
    ctx->pc = 0x26e3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 5168)));
label_26e400:
    // 0x26e400: 0x29020121  slti        $v0, $t0, 0x121
    ctx->pc = 0x26e400u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)289) ? 1 : 0);
label_26e404:
    // 0x26e404: 0xa46b0040  sh          $t3, 0x40($v1)
    ctx->pc = 0x26e404u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 64), (uint16_t)GPR_U32(ctx, 11));
    // 0x26e408: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x26E408u;
    {
        const bool branch_taken_0x26e408 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E408u;
            // 0x26e40c: 0xa46b0042  sh          $t3, 0x42($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 66), (uint16_t)GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e408) {
            ctx->pc = 0x26E414u;
            goto label_26e414;
        }
    }
    ctx->pc = 0x26E410u;
    // 0x26e410: 0xac600070  sw          $zero, 0x70($v1)
    ctx->pc = 0x26e410u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 0));
label_26e414:
    // 0x26e414: 0x8da21430  lw          $v0, 0x1430($t5)
    ctx->pc = 0x26e414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 5168)));
    // 0x26e418: 0xac40006c  sw          $zero, 0x6C($v0)
    ctx->pc = 0x26e418u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 0));
label_26e41c:
    // 0x26e41c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x26e41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x26e420: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x26e420u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26e424: 0x8c441430  lw          $a0, 0x1430($v0)
    ctx->pc = 0x26e424u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5168)));
    // 0x26e428: 0xc09b5dc  jal         func_26D770
    ctx->pc = 0x26E428u;
    SET_GPR_U32(ctx, 31, 0x26E430u);
    ctx->pc = 0x26E42Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26E428u;
            // 0x26e42c: 0xac830048  sw          $v1, 0x48($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26D770u;
    if (runtime->hasFunction(0x26D770u)) {
        auto targetFn = runtime->lookupFunction(0x26D770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E430u; }
        if (ctx->pc != 0x26E430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026D770_0x26d770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26E430u; }
        if (ctx->pc != 0x26E430u) { return; }
    }
    ctx->pc = 0x26E430u;
    // 0x26e430: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26e430u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26e434: 0x3e00008  jr          $ra
    ctx->pc = 0x26E434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26E438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E434u;
            // 0x26e438: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26E3FCu: goto label_26e3fc;
            case 0x26E400u: goto label_26e400;
            case 0x26E404u: goto label_26e404;
            case 0x26E414u: goto label_26e414;
            case 0x26E41Cu: goto label_26e41c;
            case 0x26E468u: goto label_26e468;
            case 0x26E490u: goto label_26e490;
            case 0x26E4A8u: goto label_26e4a8;
            case 0x26E4B0u: goto label_26e4b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26E43Cu;
    // 0x26e43c: 0x0  nop
    ctx->pc = 0x26e43cu;
    // NOP
    // 0x26e440: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26e440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26e444: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26e444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x26e448: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x26e448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x26e44c: 0x14820016  bne         $a0, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x26E44Cu;
    {
        const bool branch_taken_0x26e44c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x26E450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E44Cu;
            // 0x26e450: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e44c) {
            ctx->pc = 0x26E4A8u;
            goto label_26e4a8;
        }
    }
    ctx->pc = 0x26E454u;
    // 0x26e454: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x26e454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x26e458: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26e458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26e45c: 0xac62a5d0  sw          $v0, -0x5A30($v1)
    ctx->pc = 0x26e45cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294944208), GPR_U32(ctx, 2));
    // 0x26e460: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x26e460u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e464: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x26e464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
label_26e468:
    // 0x26e468: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x26e468u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x26e46c: 0x2442a588  addiu       $v0, $v0, -0x5A78
    ctx->pc = 0x26e46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944136));
    // 0x26e470: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x26e470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x26e474: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x26e474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26e478: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x26E478u;
    {
        const bool branch_taken_0x26e478 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x26E47Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E478u;
            // 0x26e47c: 0x3c020031  lui         $v0, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e478) {
            ctx->pc = 0x26E490u;
            goto label_26e490;
        }
    }
    ctx->pc = 0x26E480u;
    // 0x26e480: 0x2442a5a8  addiu       $v0, $v0, -0x5A58
    ctx->pc = 0x26e480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944168));
    // 0x26e484: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x26e484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x26e488: 0x60f809  jalr        $v1
    ctx->pc = 0x26E488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x26E490u);
        ctx->pc = 0x26E48Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E488u;
            // 0x26e48c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26E490u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26E3FCu: goto label_26e3fc;
            case 0x26E400u: goto label_26e400;
            case 0x26E404u: goto label_26e404;
            case 0x26E414u: goto label_26e414;
            case 0x26E41Cu: goto label_26e41c;
            case 0x26E468u: goto label_26e468;
            case 0x26E490u: goto label_26e490;
            case 0x26E4A8u: goto label_26e4a8;
            case 0x26E4B0u: goto label_26e4b0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26E490u; }
            if (ctx->pc != 0x26E490u) { return; }
        }
        }
    }
    ctx->pc = 0x26E490u;
label_26e490:
    // 0x26e490: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x26e490u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x26e494: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x26e494u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x26e498: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x26E498u;
    {
        const bool branch_taken_0x26e498 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26E49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E498u;
            // 0x26e49c: 0x3c020031  lui         $v0, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26e498) {
            ctx->pc = 0x26E468u;
            runtime->cooperativeGuestYield();
            goto label_26e468;
        }
    }
    ctx->pc = 0x26E4A0u;
    // 0x26e4a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26E4A0u;
    {
        const bool branch_taken_0x26e4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26e4a0) {
            ctx->pc = 0x26E4B0u;
            goto label_26e4b0;
        }
    }
    ctx->pc = 0x26E4A8u;
label_26e4a8:
    // 0x26e4a8: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x26e4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x26e4ac: 0xac40a5d0  sw          $zero, -0x5A30($v0)
    ctx->pc = 0x26e4acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294944208), GPR_U32(ctx, 0));
label_26e4b0:
    // 0x26e4b0: 0xf  sync
    ctx->pc = 0x26e4b0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x26e4b4: 0x42000038  ei
    ctx->pc = 0x26e4b4u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x26e4b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x26e4b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26e4bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26e4bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26e4c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26e4c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26e4c4: 0x3e00008  jr          $ra
    ctx->pc = 0x26E4C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26E4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E4C4u;
            // 0x26e4c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26E3FCu: goto label_26e3fc;
            case 0x26E400u: goto label_26e400;
            case 0x26E404u: goto label_26e404;
            case 0x26E414u: goto label_26e414;
            case 0x26E41Cu: goto label_26e41c;
            case 0x26E468u: goto label_26e468;
            case 0x26E490u: goto label_26e490;
            case 0x26E4A8u: goto label_26e4a8;
            case 0x26E4B0u: goto label_26e4b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26E4CCu;
    // 0x26e4cc: 0x0  nop
    ctx->pc = 0x26e4ccu;
    // NOP
}
