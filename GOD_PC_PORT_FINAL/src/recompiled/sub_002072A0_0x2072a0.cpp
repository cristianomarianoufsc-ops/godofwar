#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002072A0
// Address: 0x2072a0 - 0x2079d8
void sub_002072A0_0x2072a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002072A0_0x2072a0");
#endif

    ctx->pc = 0x2072a0u;

label_2072a0:
    // 0x2072a0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2072a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2072a4:
    // 0x2072a4: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x2072a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
label_2072a8:
    // 0x2072a8: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2072a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_2072ac:
    // 0x2072ac: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2072acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_2072b0:
    // 0x2072b0: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2072b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_2072b4:
    // 0x2072b4: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2072b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2072b8:
    // 0x2072b8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2072b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_2072bc:
    // 0x2072bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2072bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2072c0:
    // 0x2072c0: 0x8cf3cd58  lw          $s3, -0x32A8($a3)
    ctx->pc = 0x2072c0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294954328)));
label_2072c4:
    // 0x2072c4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2072c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2072c8:
    // 0x2072c8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2072c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2072cc:
    // 0x2072cc: 0x126001ba  beqz        $s3, . + 4 + (0x1BA << 2)
label_2072d0:
    if (ctx->pc == 0x2072D0u) {
        ctx->pc = 0x2072D0u;
            // 0x2072d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2072D4u;
        goto label_2072d4;
    }
    ctx->pc = 0x2072CCu;
    {
        const bool branch_taken_0x2072cc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2072D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2072CCu;
            // 0x2072d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2072cc) {
            ctx->pc = 0x2079B8u;
            goto label_2079b8;
        }
    }
    ctx->pc = 0x2072D4u;
label_2072d4:
    // 0x2072d4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2072d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
label_2072d8:
    // 0x2072d8: 0x8244001c  lb          $a0, 0x1C($s2)
    ctx->pc = 0x2072d8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 28)));
label_2072dc:
    // 0x2072dc: 0x24420ae8  addiu       $v0, $v0, 0xAE8
    ctx->pc = 0x2072dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2792));
label_2072e0:
    // 0x2072e0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2072e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2072e4:
    // 0x2072e4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x2072e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2072e8:
    // 0x2072e8: 0x80450000  lb          $a1, 0x0($v0)
    ctx->pc = 0x2072e8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2072ec:
    // 0x2072ec: 0x10a30039  beq         $a1, $v1, . + 4 + (0x39 << 2)
label_2072f0:
    if (ctx->pc == 0x2072F0u) {
        ctx->pc = 0x2072F0u;
            // 0x2072f0: 0x2c820017  sltiu       $v0, $a0, 0x17 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
        ctx->pc = 0x2072F4u;
        goto label_2072f4;
    }
    ctx->pc = 0x2072ECu;
    {
        const bool branch_taken_0x2072ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x2072F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2072ECu;
            // 0x2072f0: 0x2c820017  sltiu       $v0, $a0, 0x17 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2072ec) {
            ctx->pc = 0x2073D4u;
            goto label_2073d4;
        }
    }
    ctx->pc = 0x2072F4u;
label_2072f4:
    // 0x2072f4: 0x8242001d  lb          $v0, 0x1D($s2)
    ctx->pc = 0x2072f4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 29)));
label_2072f8:
    // 0x2072f8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2072f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2072fc:
    // 0x2072fc: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2072fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_207300:
    // 0x207300: 0x21e03  sra         $v1, $v0, 24
    ctx->pc = 0x207300u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 24));
label_207304:
    // 0x207304: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x207304u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_207308:
    // 0x207308: 0x504000b2  beql        $v0, $zero, . + 4 + (0xB2 << 2)
label_20730c:
    if (ctx->pc == 0x20730Cu) {
        ctx->pc = 0x20730Cu;
            // 0x20730c: 0x8243001f  lb          $v1, 0x1F($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 31)));
        ctx->pc = 0x207310u;
        goto label_207310;
    }
    ctx->pc = 0x207308u;
    {
        const bool branch_taken_0x207308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207308) {
            ctx->pc = 0x20730Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x207308u;
            // 0x20730c: 0x8243001f  lb          $v1, 0x1F($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 31)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2075D4u;
            goto label_2075d4;
        }
    }
    ctx->pc = 0x207310u;
label_207310:
    // 0x207310: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x207310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
label_207314:
    // 0x207314: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x207314u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_207318:
    // 0x207318: 0x24427b40  addiu       $v0, $v0, 0x7B40
    ctx->pc = 0x207318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31552));
label_20731c:
    // 0x20731c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x20731cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_207320:
    // 0x207320: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x207320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_207324:
    // 0x207324: 0x400008  jr          $v0
label_207328:
    if (ctx->pc == 0x207328u) {
        ctx->pc = 0x20732Cu;
        goto label_20732c;
    }
    ctx->pc = 0x207324u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x207330u: goto label_207330;
            case 0x207360u: goto label_207360;
            case 0x207390u: goto label_207390;
            case 0x2073A8u: goto label_2073a8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20732Cu;
label_20732c:
    // 0x20732c: 0x0  nop
    ctx->pc = 0x20732cu;
    // NOP
label_207330:
    // 0x207330: 0x120001a0  beqz        $s0, . + 4 + (0x1A0 << 2)
label_207334:
    if (ctx->pc == 0x207334u) {
        ctx->pc = 0x207334u;
            // 0x207334: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x207338u;
        goto label_207338;
    }
    ctx->pc = 0x207330u;
    {
        const bool branch_taken_0x207330 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x207334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207330u;
            // 0x207334: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207330) {
            ctx->pc = 0x2079B4u;
            goto label_2079b4;
        }
    }
    ctx->pc = 0x207338u;
label_207338:
    // 0x207338: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x207338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_20733c:
    // 0x20733c: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x20733cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_207340:
    // 0x207340: 0xa42004  sllv        $a0, $a0, $a1
    ctx->pc = 0x207340u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
label_207344:
    // 0x207344: 0x431826  xor         $v1, $v0, $v1
    ctx->pc = 0x207344u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_207348:
    // 0x207348: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x207348u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_20734c:
    // 0x20734c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x20734cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_207350:
    // 0x207350: 0x544000a0  bnel        $v0, $zero, . + 4 + (0xA0 << 2)
label_207354:
    if (ctx->pc == 0x207354u) {
        ctx->pc = 0x207354u;
            // 0x207354: 0x8243001f  lb          $v1, 0x1F($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 31)));
        ctx->pc = 0x207358u;
        goto label_207358;
    }
    ctx->pc = 0x207350u;
    {
        const bool branch_taken_0x207350 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x207350) {
            ctx->pc = 0x207354u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x207350u;
            // 0x207354: 0x8243001f  lb          $v1, 0x1F($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 31)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2075D4u;
            goto label_2075d4;
        }
    }
    ctx->pc = 0x207358u;
label_207358:
    // 0x207358: 0x10000197  b           . + 4 + (0x197 << 2)
label_20735c:
    if (ctx->pc == 0x20735Cu) {
        ctx->pc = 0x20735Cu;
            // 0x20735c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x207360u;
        goto label_207360;
    }
    ctx->pc = 0x207358u;
    {
        const bool branch_taken_0x207358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20735Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207358u;
            // 0x20735c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207358) {
            ctx->pc = 0x2079B8u;
            goto label_2079b8;
        }
    }
    ctx->pc = 0x207360u;
label_207360:
    // 0x207360: 0x12000194  beqz        $s0, . + 4 + (0x194 << 2)
label_207364:
    if (ctx->pc == 0x207364u) {
        ctx->pc = 0x207364u;
            // 0x207364: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x207368u;
        goto label_207368;
    }
    ctx->pc = 0x207360u;
    {
        const bool branch_taken_0x207360 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x207364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207360u;
            // 0x207364: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207360) {
            ctx->pc = 0x2079B4u;
            goto label_2079b4;
        }
    }
    ctx->pc = 0x207368u;
label_207368:
    // 0x207368: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x207368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_20736c:
    // 0x20736c: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x20736cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_207370:
    // 0x207370: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x207370u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
label_207374:
    // 0x207374: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x207374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_207378:
    // 0x207378: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x207378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
label_20737c:
    // 0x20737c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20737cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_207380:
    // 0x207380: 0x54400094  bnel        $v0, $zero, . + 4 + (0x94 << 2)
label_207384:
    if (ctx->pc == 0x207384u) {
        ctx->pc = 0x207384u;
            // 0x207384: 0x8243001f  lb          $v1, 0x1F($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 31)));
        ctx->pc = 0x207388u;
        goto label_207388;
    }
    ctx->pc = 0x207380u;
    {
        const bool branch_taken_0x207380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x207380) {
            ctx->pc = 0x207384u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x207380u;
            // 0x207384: 0x8243001f  lb          $v1, 0x1F($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 31)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2075D4u;
            goto label_2075d4;
        }
    }
    ctx->pc = 0x207388u;
label_207388:
    // 0x207388: 0x1000018b  b           . + 4 + (0x18B << 2)
label_20738c:
    if (ctx->pc == 0x20738Cu) {
        ctx->pc = 0x20738Cu;
            // 0x20738c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x207390u;
        goto label_207390;
    }
    ctx->pc = 0x207388u;
    {
        const bool branch_taken_0x207388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20738Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207388u;
            // 0x20738c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207388) {
            ctx->pc = 0x2079B8u;
            goto label_2079b8;
        }
    }
    ctx->pc = 0x207390u;
label_207390:
    // 0x207390: 0x12000188  beqz        $s0, . + 4 + (0x188 << 2)
label_207394:
    if (ctx->pc == 0x207394u) {
        ctx->pc = 0x207394u;
            // 0x207394: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x207398u;
        goto label_207398;
    }
    ctx->pc = 0x207390u;
    {
        const bool branch_taken_0x207390 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x207394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207390u;
            // 0x207394: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207390) {
            ctx->pc = 0x2079B4u;
            goto label_2079b4;
        }
    }
    ctx->pc = 0x207398u;
label_207398:
    // 0x207398: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x207398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_20739c:
    // 0x20739c: 0x10000008  b           . + 4 + (0x8 << 2)
label_2073a0:
    if (ctx->pc == 0x2073A0u) {
        ctx->pc = 0x2073A0u;
            // 0x2073a0: 0xa21004  sllv        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
        ctx->pc = 0x2073A4u;
        goto label_2073a4;
    }
    ctx->pc = 0x20739Cu;
    {
        const bool branch_taken_0x20739c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2073A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20739Cu;
            // 0x2073a0: 0xa21004  sllv        $v0, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20739c) {
            ctx->pc = 0x2073C0u;
            goto label_2073c0;
        }
    }
    ctx->pc = 0x2073A4u;
label_2073a4:
    // 0x2073a4: 0x0  nop
    ctx->pc = 0x2073a4u;
    // NOP
label_2073a8:
    // 0x2073a8: 0x12000182  beqz        $s0, . + 4 + (0x182 << 2)
label_2073ac:
    if (ctx->pc == 0x2073ACu) {
        ctx->pc = 0x2073ACu;
            // 0x2073ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2073B0u;
        goto label_2073b0;
    }
    ctx->pc = 0x2073A8u;
    {
        const bool branch_taken_0x2073a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2073ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2073A8u;
            // 0x2073ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2073a8) {
            ctx->pc = 0x2079B4u;
            goto label_2079b4;
        }
    }
    ctx->pc = 0x2073B0u;
label_2073b0:
    // 0x2073b0: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x2073b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_2073b4:
    // 0x2073b4: 0xa21004  sllv        $v0, $v0, $a1
    ctx->pc = 0x2073b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 5) & 0x1F));
label_2073b8:
    // 0x2073b8: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x2073b8u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_2073bc:
    // 0x2073bc: 0x0  nop
    ctx->pc = 0x2073bcu;
    // NOP
label_2073c0:
    // 0x2073c0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2073c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2073c4:
    // 0x2073c4: 0x54600083  bnel        $v1, $zero, . + 4 + (0x83 << 2)
label_2073c8:
    if (ctx->pc == 0x2073C8u) {
        ctx->pc = 0x2073C8u;
            // 0x2073c8: 0x8243001f  lb          $v1, 0x1F($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 31)));
        ctx->pc = 0x2073CCu;
        goto label_2073cc;
    }
    ctx->pc = 0x2073C4u;
    {
        const bool branch_taken_0x2073c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2073c4) {
            ctx->pc = 0x2073C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2073C4u;
            // 0x2073c8: 0x8243001f  lb          $v1, 0x1F($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 31)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2075D4u;
            goto label_2075d4;
        }
    }
    ctx->pc = 0x2073CCu;
label_2073cc:
    // 0x2073cc: 0x1000017a  b           . + 4 + (0x17A << 2)
label_2073d0:
    if (ctx->pc == 0x2073D0u) {
        ctx->pc = 0x2073D0u;
            // 0x2073d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2073D4u;
        goto label_2073d4;
    }
    ctx->pc = 0x2073CCu;
    {
        const bool branch_taken_0x2073cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2073D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2073CCu;
            // 0x2073d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2073cc) {
            ctx->pc = 0x2079B8u;
            goto label_2079b8;
        }
    }
    ctx->pc = 0x2073D4u;
label_2073d4:
    // 0x2073d4: 0x5040007f  beql        $v0, $zero, . + 4 + (0x7F << 2)
label_2073d8:
    if (ctx->pc == 0x2073D8u) {
        ctx->pc = 0x2073D8u;
            // 0x2073d8: 0x8243001f  lb          $v1, 0x1F($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 31)));
        ctx->pc = 0x2073DCu;
        goto label_2073dc;
    }
    ctx->pc = 0x2073D4u;
    {
        const bool branch_taken_0x2073d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2073d4) {
            ctx->pc = 0x2073D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2073D4u;
            // 0x2073d8: 0x8243001f  lb          $v1, 0x1F($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 31)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2075D4u;
            goto label_2075d4;
        }
    }
    ctx->pc = 0x2073DCu;
label_2073dc:
    // 0x2073dc: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x2073dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
label_2073e0:
    // 0x2073e0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2073e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2073e4:
    // 0x2073e4: 0x24427b60  addiu       $v0, $v0, 0x7B60
    ctx->pc = 0x2073e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31584));
label_2073e8:
    // 0x2073e8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2073e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2073ec:
    // 0x2073ec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2073ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2073f0:
    // 0x2073f0: 0x400008  jr          $v0
label_2073f4:
    if (ctx->pc == 0x2073F4u) {
        ctx->pc = 0x2073F8u;
        goto label_2073f8;
    }
    ctx->pc = 0x2073F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2072A0u: goto label_2072a0;
            case 0x2072A4u: goto label_2072a4;
            case 0x2072A8u: goto label_2072a8;
            case 0x2072ACu: goto label_2072ac;
            case 0x2072B0u: goto label_2072b0;
            case 0x2072B4u: goto label_2072b4;
            case 0x2072B8u: goto label_2072b8;
            case 0x2072BCu: goto label_2072bc;
            case 0x2072C0u: goto label_2072c0;
            case 0x2072C4u: goto label_2072c4;
            case 0x2072C8u: goto label_2072c8;
            case 0x2072CCu: goto label_2072cc;
            case 0x2072D0u: goto label_2072d0;
            case 0x2072D4u: goto label_2072d4;
            case 0x2072D8u: goto label_2072d8;
            case 0x2072DCu: goto label_2072dc;
            case 0x2072E0u: goto label_2072e0;
            case 0x2072E4u: goto label_2072e4;
            case 0x2072E8u: goto label_2072e8;
            case 0x2072ECu: goto label_2072ec;
            case 0x2072F0u: goto label_2072f0;
            case 0x2072F4u: goto label_2072f4;
            case 0x2072F8u: goto label_2072f8;
            case 0x2072FCu: goto label_2072fc;
            case 0x207300u: goto label_207300;
            case 0x207304u: goto label_207304;
            case 0x207308u: goto label_207308;
            case 0x20730Cu: goto label_20730c;
            case 0x207310u: goto label_207310;
            case 0x207314u: goto label_207314;
            case 0x207318u: goto label_207318;
            case 0x20731Cu: goto label_20731c;
            case 0x207320u: goto label_207320;
            case 0x207324u: goto label_207324;
            case 0x207328u: goto label_207328;
            case 0x20732Cu: goto label_20732c;
            case 0x207330u: goto label_207330;
            case 0x207334u: goto label_207334;
            case 0x207338u: goto label_207338;
            case 0x20733Cu: goto label_20733c;
            case 0x207340u: goto label_207340;
            case 0x207344u: goto label_207344;
            case 0x207348u: goto label_207348;
            case 0x20734Cu: goto label_20734c;
            case 0x207350u: goto label_207350;
            case 0x207354u: goto label_207354;
            case 0x207358u: goto label_207358;
            case 0x20735Cu: goto label_20735c;
            case 0x207360u: goto label_207360;
            case 0x207364u: goto label_207364;
            case 0x207368u: goto label_207368;
            case 0x20736Cu: goto label_20736c;
            case 0x207370u: goto label_207370;
            case 0x207374u: goto label_207374;
            case 0x207378u: goto label_207378;
            case 0x20737Cu: goto label_20737c;
            case 0x207380u: goto label_207380;
            case 0x207384u: goto label_207384;
            case 0x207388u: goto label_207388;
            case 0x20738Cu: goto label_20738c;
            case 0x207390u: goto label_207390;
            case 0x207394u: goto label_207394;
            case 0x207398u: goto label_207398;
            case 0x20739Cu: goto label_20739c;
            case 0x2073A0u: goto label_2073a0;
            case 0x2073A4u: goto label_2073a4;
            case 0x2073A8u: goto label_2073a8;
            case 0x2073ACu: goto label_2073ac;
            case 0x2073B0u: goto label_2073b0;
            case 0x2073B4u: goto label_2073b4;
            case 0x2073B8u: goto label_2073b8;
            case 0x2073BCu: goto label_2073bc;
            case 0x2073C0u: goto label_2073c0;
            case 0x2073C4u: goto label_2073c4;
            case 0x2073C8u: goto label_2073c8;
            case 0x2073CCu: goto label_2073cc;
            case 0x2073D0u: goto label_2073d0;
            case 0x2073D4u: goto label_2073d4;
            case 0x2073D8u: goto label_2073d8;
            case 0x2073DCu: goto label_2073dc;
            case 0x2073E0u: goto label_2073e0;
            case 0x2073E4u: goto label_2073e4;
            case 0x2073E8u: goto label_2073e8;
            case 0x2073ECu: goto label_2073ec;
            case 0x2073F0u: goto label_2073f0;
            case 0x2073F4u: goto label_2073f4;
            case 0x2073F8u: goto label_2073f8;
            case 0x2073FCu: goto label_2073fc;
            case 0x207400u: goto label_207400;
            case 0x207404u: goto label_207404;
            case 0x207408u: goto label_207408;
            case 0x20740Cu: goto label_20740c;
            case 0x207410u: goto label_207410;
            case 0x207414u: goto label_207414;
            case 0x207418u: goto label_207418;
            case 0x20741Cu: goto label_20741c;
            case 0x207420u: goto label_207420;
            case 0x207424u: goto label_207424;
            case 0x207428u: goto label_207428;
            case 0x20742Cu: goto label_20742c;
            case 0x207430u: goto label_207430;
            case 0x207434u: goto label_207434;
            case 0x207438u: goto label_207438;
            case 0x20743Cu: goto label_20743c;
            case 0x207440u: goto label_207440;
            case 0x207444u: goto label_207444;
            case 0x207448u: goto label_207448;
            case 0x20744Cu: goto label_20744c;
            case 0x207450u: goto label_207450;
            case 0x207454u: goto label_207454;
            case 0x207458u: goto label_207458;
            case 0x20745Cu: goto label_20745c;
            case 0x207460u: goto label_207460;
            case 0x207464u: goto label_207464;
            case 0x207468u: goto label_207468;
            case 0x20746Cu: goto label_20746c;
            case 0x207470u: goto label_207470;
            case 0x207474u: goto label_207474;
            case 0x207478u: goto label_207478;
            case 0x20747Cu: goto label_20747c;
            case 0x207480u: goto label_207480;
            case 0x207484u: goto label_207484;
            case 0x207488u: goto label_207488;
            case 0x20748Cu: goto label_20748c;
            case 0x207490u: goto label_207490;
            case 0x207494u: goto label_207494;
            case 0x207498u: goto label_207498;
            case 0x20749Cu: goto label_20749c;
            case 0x2074A0u: goto label_2074a0;
            case 0x2074A4u: goto label_2074a4;
            case 0x2074A8u: goto label_2074a8;
            case 0x2074ACu: goto label_2074ac;
            case 0x2074B0u: goto label_2074b0;
            case 0x2074B4u: goto label_2074b4;
            case 0x2074B8u: goto label_2074b8;
            case 0x2074BCu: goto label_2074bc;
            case 0x2074C0u: goto label_2074c0;
            case 0x2074C4u: goto label_2074c4;
            case 0x2074C8u: goto label_2074c8;
            case 0x2074CCu: goto label_2074cc;
            case 0x2074D0u: goto label_2074d0;
            case 0x2074D4u: goto label_2074d4;
            case 0x2074D8u: goto label_2074d8;
            case 0x2074DCu: goto label_2074dc;
            case 0x2074E0u: goto label_2074e0;
            case 0x2074E4u: goto label_2074e4;
            case 0x2074E8u: goto label_2074e8;
            case 0x2074ECu: goto label_2074ec;
            case 0x2074F0u: goto label_2074f0;
            case 0x2074F4u: goto label_2074f4;
            case 0x2074F8u: goto label_2074f8;
            case 0x2074FCu: goto label_2074fc;
            case 0x207500u: goto label_207500;
            case 0x207504u: goto label_207504;
            case 0x207508u: goto label_207508;
            case 0x20750Cu: goto label_20750c;
            case 0x207510u: goto label_207510;
            case 0x207514u: goto label_207514;
            case 0x207518u: goto label_207518;
            case 0x20751Cu: goto label_20751c;
            case 0x207520u: goto label_207520;
            case 0x207524u: goto label_207524;
            case 0x207528u: goto label_207528;
            case 0x20752Cu: goto label_20752c;
            case 0x207530u: goto label_207530;
            case 0x207534u: goto label_207534;
            case 0x207538u: goto label_207538;
            case 0x20753Cu: goto label_20753c;
            case 0x207540u: goto label_207540;
            case 0x207544u: goto label_207544;
            case 0x207548u: goto label_207548;
            case 0x20754Cu: goto label_20754c;
            case 0x207550u: goto label_207550;
            case 0x207554u: goto label_207554;
            case 0x207558u: goto label_207558;
            case 0x20755Cu: goto label_20755c;
            case 0x207560u: goto label_207560;
            case 0x207564u: goto label_207564;
            case 0x207568u: goto label_207568;
            case 0x20756Cu: goto label_20756c;
            case 0x207570u: goto label_207570;
            case 0x207574u: goto label_207574;
            case 0x207578u: goto label_207578;
            case 0x20757Cu: goto label_20757c;
            case 0x207580u: goto label_207580;
            case 0x207584u: goto label_207584;
            case 0x207588u: goto label_207588;
            case 0x20758Cu: goto label_20758c;
            case 0x207590u: goto label_207590;
            case 0x207594u: goto label_207594;
            case 0x207598u: goto label_207598;
            case 0x20759Cu: goto label_20759c;
            case 0x2075A0u: goto label_2075a0;
            case 0x2075A4u: goto label_2075a4;
            case 0x2075A8u: goto label_2075a8;
            case 0x2075ACu: goto label_2075ac;
            case 0x2075B0u: goto label_2075b0;
            case 0x2075B4u: goto label_2075b4;
            case 0x2075B8u: goto label_2075b8;
            case 0x2075BCu: goto label_2075bc;
            case 0x2075C0u: goto label_2075c0;
            case 0x2075C4u: goto label_2075c4;
            case 0x2075C8u: goto label_2075c8;
            case 0x2075CCu: goto label_2075cc;
            case 0x2075D0u: goto label_2075d0;
            case 0x2075D4u: goto label_2075d4;
            case 0x2075D8u: goto label_2075d8;
            case 0x2075DCu: goto label_2075dc;
            case 0x2075E0u: goto label_2075e0;
            case 0x2075E4u: goto label_2075e4;
            case 0x2075E8u: goto label_2075e8;
            case 0x2075ECu: goto label_2075ec;
            case 0x2075F0u: goto label_2075f0;
            case 0x2075F4u: goto label_2075f4;
            case 0x2075F8u: goto label_2075f8;
            case 0x2075FCu: goto label_2075fc;
            case 0x207600u: goto label_207600;
            case 0x207604u: goto label_207604;
            case 0x207608u: goto label_207608;
            case 0x20760Cu: goto label_20760c;
            case 0x207610u: goto label_207610;
            case 0x207614u: goto label_207614;
            case 0x207618u: goto label_207618;
            case 0x20761Cu: goto label_20761c;
            case 0x207620u: goto label_207620;
            case 0x207624u: goto label_207624;
            case 0x207628u: goto label_207628;
            case 0x20762Cu: goto label_20762c;
            case 0x207630u: goto label_207630;
            case 0x207634u: goto label_207634;
            case 0x207638u: goto label_207638;
            case 0x20763Cu: goto label_20763c;
            case 0x207640u: goto label_207640;
            case 0x207644u: goto label_207644;
            case 0x207648u: goto label_207648;
            case 0x20764Cu: goto label_20764c;
            case 0x207650u: goto label_207650;
            case 0x207654u: goto label_207654;
            case 0x207658u: goto label_207658;
            case 0x20765Cu: goto label_20765c;
            case 0x207660u: goto label_207660;
            case 0x207664u: goto label_207664;
            case 0x207668u: goto label_207668;
            case 0x20766Cu: goto label_20766c;
            case 0x207670u: goto label_207670;
            case 0x207674u: goto label_207674;
            case 0x207678u: goto label_207678;
            case 0x20767Cu: goto label_20767c;
            case 0x207680u: goto label_207680;
            case 0x207684u: goto label_207684;
            case 0x207688u: goto label_207688;
            case 0x20768Cu: goto label_20768c;
            case 0x207690u: goto label_207690;
            case 0x207694u: goto label_207694;
            case 0x207698u: goto label_207698;
            case 0x20769Cu: goto label_20769c;
            case 0x2076A0u: goto label_2076a0;
            case 0x2076A4u: goto label_2076a4;
            case 0x2076A8u: goto label_2076a8;
            case 0x2076ACu: goto label_2076ac;
            case 0x2076B0u: goto label_2076b0;
            case 0x2076B4u: goto label_2076b4;
            case 0x2076B8u: goto label_2076b8;
            case 0x2076BCu: goto label_2076bc;
            case 0x2076C0u: goto label_2076c0;
            case 0x2076C4u: goto label_2076c4;
            case 0x2076C8u: goto label_2076c8;
            case 0x2076CCu: goto label_2076cc;
            case 0x2076D0u: goto label_2076d0;
            case 0x2076D4u: goto label_2076d4;
            case 0x2076D8u: goto label_2076d8;
            case 0x2076DCu: goto label_2076dc;
            case 0x2076E0u: goto label_2076e0;
            case 0x2076E4u: goto label_2076e4;
            case 0x2076E8u: goto label_2076e8;
            case 0x2076ECu: goto label_2076ec;
            case 0x2076F0u: goto label_2076f0;
            case 0x2076F4u: goto label_2076f4;
            case 0x2076F8u: goto label_2076f8;
            case 0x2076FCu: goto label_2076fc;
            case 0x207700u: goto label_207700;
            case 0x207704u: goto label_207704;
            case 0x207708u: goto label_207708;
            case 0x20770Cu: goto label_20770c;
            case 0x207710u: goto label_207710;
            case 0x207714u: goto label_207714;
            case 0x207718u: goto label_207718;
            case 0x20771Cu: goto label_20771c;
            case 0x207720u: goto label_207720;
            case 0x207724u: goto label_207724;
            case 0x207728u: goto label_207728;
            case 0x20772Cu: goto label_20772c;
            case 0x207730u: goto label_207730;
            case 0x207734u: goto label_207734;
            case 0x207738u: goto label_207738;
            case 0x20773Cu: goto label_20773c;
            case 0x207740u: goto label_207740;
            case 0x207744u: goto label_207744;
            case 0x207748u: goto label_207748;
            case 0x20774Cu: goto label_20774c;
            case 0x207750u: goto label_207750;
            case 0x207754u: goto label_207754;
            case 0x207758u: goto label_207758;
            case 0x20775Cu: goto label_20775c;
            case 0x207760u: goto label_207760;
            case 0x207764u: goto label_207764;
            case 0x207768u: goto label_207768;
            case 0x20776Cu: goto label_20776c;
            case 0x207770u: goto label_207770;
            case 0x207774u: goto label_207774;
            case 0x207778u: goto label_207778;
            case 0x20777Cu: goto label_20777c;
            case 0x207780u: goto label_207780;
            case 0x207784u: goto label_207784;
            case 0x207788u: goto label_207788;
            case 0x20778Cu: goto label_20778c;
            case 0x207790u: goto label_207790;
            case 0x207794u: goto label_207794;
            case 0x207798u: goto label_207798;
            case 0x20779Cu: goto label_20779c;
            case 0x2077A0u: goto label_2077a0;
            case 0x2077A4u: goto label_2077a4;
            case 0x2077A8u: goto label_2077a8;
            case 0x2077ACu: goto label_2077ac;
            case 0x2077B0u: goto label_2077b0;
            case 0x2077B4u: goto label_2077b4;
            case 0x2077B8u: goto label_2077b8;
            case 0x2077BCu: goto label_2077bc;
            case 0x2077C0u: goto label_2077c0;
            case 0x2077C4u: goto label_2077c4;
            case 0x2077C8u: goto label_2077c8;
            case 0x2077CCu: goto label_2077cc;
            case 0x2077D0u: goto label_2077d0;
            case 0x2077D4u: goto label_2077d4;
            case 0x2077D8u: goto label_2077d8;
            case 0x2077DCu: goto label_2077dc;
            case 0x2077E0u: goto label_2077e0;
            case 0x2077E4u: goto label_2077e4;
            case 0x2077E8u: goto label_2077e8;
            case 0x2077ECu: goto label_2077ec;
            case 0x2077F0u: goto label_2077f0;
            case 0x2077F4u: goto label_2077f4;
            case 0x2077F8u: goto label_2077f8;
            case 0x2077FCu: goto label_2077fc;
            case 0x207800u: goto label_207800;
            case 0x207804u: goto label_207804;
            case 0x207808u: goto label_207808;
            case 0x20780Cu: goto label_20780c;
            case 0x207810u: goto label_207810;
            case 0x207814u: goto label_207814;
            case 0x207818u: goto label_207818;
            case 0x20781Cu: goto label_20781c;
            case 0x207820u: goto label_207820;
            case 0x207824u: goto label_207824;
            case 0x207828u: goto label_207828;
            case 0x20782Cu: goto label_20782c;
            case 0x207830u: goto label_207830;
            case 0x207834u: goto label_207834;
            case 0x207838u: goto label_207838;
            case 0x20783Cu: goto label_20783c;
            case 0x207840u: goto label_207840;
            case 0x207844u: goto label_207844;
            case 0x207848u: goto label_207848;
            case 0x20784Cu: goto label_20784c;
            case 0x207850u: goto label_207850;
            case 0x207854u: goto label_207854;
            case 0x207858u: goto label_207858;
            case 0x20785Cu: goto label_20785c;
            case 0x207860u: goto label_207860;
            case 0x207864u: goto label_207864;
            case 0x207868u: goto label_207868;
            case 0x20786Cu: goto label_20786c;
            case 0x207870u: goto label_207870;
            case 0x207874u: goto label_207874;
            case 0x207878u: goto label_207878;
            case 0x20787Cu: goto label_20787c;
            case 0x207880u: goto label_207880;
            case 0x207884u: goto label_207884;
            case 0x207888u: goto label_207888;
            case 0x20788Cu: goto label_20788c;
            case 0x207890u: goto label_207890;
            case 0x207894u: goto label_207894;
            case 0x207898u: goto label_207898;
            case 0x20789Cu: goto label_20789c;
            case 0x2078A0u: goto label_2078a0;
            case 0x2078A4u: goto label_2078a4;
            case 0x2078A8u: goto label_2078a8;
            case 0x2078ACu: goto label_2078ac;
            case 0x2078B0u: goto label_2078b0;
            case 0x2078B4u: goto label_2078b4;
            case 0x2078B8u: goto label_2078b8;
            case 0x2078BCu: goto label_2078bc;
            case 0x2078C0u: goto label_2078c0;
            case 0x2078C4u: goto label_2078c4;
            case 0x2078C8u: goto label_2078c8;
            case 0x2078CCu: goto label_2078cc;
            case 0x2078D0u: goto label_2078d0;
            case 0x2078D4u: goto label_2078d4;
            case 0x2078D8u: goto label_2078d8;
            case 0x2078DCu: goto label_2078dc;
            case 0x2078E0u: goto label_2078e0;
            case 0x2078E4u: goto label_2078e4;
            case 0x2078E8u: goto label_2078e8;
            case 0x2078ECu: goto label_2078ec;
            case 0x2078F0u: goto label_2078f0;
            case 0x2078F4u: goto label_2078f4;
            case 0x2078F8u: goto label_2078f8;
            case 0x2078FCu: goto label_2078fc;
            case 0x207900u: goto label_207900;
            case 0x207904u: goto label_207904;
            case 0x207908u: goto label_207908;
            case 0x20790Cu: goto label_20790c;
            case 0x207910u: goto label_207910;
            case 0x207914u: goto label_207914;
            case 0x207918u: goto label_207918;
            case 0x20791Cu: goto label_20791c;
            case 0x207920u: goto label_207920;
            case 0x207924u: goto label_207924;
            case 0x207928u: goto label_207928;
            case 0x20792Cu: goto label_20792c;
            case 0x207930u: goto label_207930;
            case 0x207934u: goto label_207934;
            case 0x207938u: goto label_207938;
            case 0x20793Cu: goto label_20793c;
            case 0x207940u: goto label_207940;
            case 0x207944u: goto label_207944;
            case 0x207948u: goto label_207948;
            case 0x20794Cu: goto label_20794c;
            case 0x207950u: goto label_207950;
            case 0x207954u: goto label_207954;
            case 0x207958u: goto label_207958;
            case 0x20795Cu: goto label_20795c;
            case 0x207960u: goto label_207960;
            case 0x207964u: goto label_207964;
            case 0x207968u: goto label_207968;
            case 0x20796Cu: goto label_20796c;
            case 0x207970u: goto label_207970;
            case 0x207974u: goto label_207974;
            case 0x207978u: goto label_207978;
            case 0x20797Cu: goto label_20797c;
            case 0x207980u: goto label_207980;
            case 0x207984u: goto label_207984;
            case 0x207988u: goto label_207988;
            case 0x20798Cu: goto label_20798c;
            case 0x207990u: goto label_207990;
            case 0x207994u: goto label_207994;
            case 0x207998u: goto label_207998;
            case 0x20799Cu: goto label_20799c;
            case 0x2079A0u: goto label_2079a0;
            case 0x2079A4u: goto label_2079a4;
            case 0x2079A8u: goto label_2079a8;
            case 0x2079ACu: goto label_2079ac;
            case 0x2079B0u: goto label_2079b0;
            case 0x2079B4u: goto label_2079b4;
            case 0x2079B8u: goto label_2079b8;
            case 0x2079BCu: goto label_2079bc;
            case 0x2079C0u: goto label_2079c0;
            case 0x2079C4u: goto label_2079c4;
            case 0x2079C8u: goto label_2079c8;
            case 0x2079CCu: goto label_2079cc;
            case 0x2079D0u: goto label_2079d0;
            case 0x2079D4u: goto label_2079d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2073F8u;
label_2073f8:
    // 0x2073f8: 0x8243001d  lb          $v1, 0x1D($s2)
    ctx->pc = 0x2073f8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 29)));
label_2073fc:
    // 0x2073fc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2073fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_207400:
    // 0x207400: 0x54620006  bnel        $v1, $v0, . + 4 + (0x6 << 2)
label_207404:
    if (ctx->pc == 0x207404u) {
        ctx->pc = 0x207404u;
            // 0x207404: 0x8e2200a4  lw          $v0, 0xA4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
        ctx->pc = 0x207408u;
        goto label_207408;
    }
    ctx->pc = 0x207400u;
    {
        const bool branch_taken_0x207400 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x207400) {
            ctx->pc = 0x207404u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x207400u;
            // 0x207404: 0x8e2200a4  lw          $v0, 0xA4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20741Cu;
            goto label_20741c;
        }
    }
    ctx->pc = 0x207408u;
label_207408:
    // 0x207408: 0x8222009d  lb          $v0, 0x9D($s1)
    ctx->pc = 0x207408u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 157)));
label_20740c:
    // 0x20740c: 0x54400071  bnel        $v0, $zero, . + 4 + (0x71 << 2)
label_207410:
    if (ctx->pc == 0x207410u) {
        ctx->pc = 0x207410u;
            // 0x207410: 0x8243001f  lb          $v1, 0x1F($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 31)));
        ctx->pc = 0x207414u;
        goto label_207414;
    }
    ctx->pc = 0x20740Cu;
    {
        const bool branch_taken_0x20740c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20740c) {
            ctx->pc = 0x207410u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20740Cu;
            // 0x207410: 0x8243001f  lb          $v1, 0x1F($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 31)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2075D4u;
            goto label_2075d4;
        }
    }
    ctx->pc = 0x207414u;
label_207414:
    // 0x207414: 0x10000168  b           . + 4 + (0x168 << 2)
label_207418:
    if (ctx->pc == 0x207418u) {
        ctx->pc = 0x207418u;
            // 0x207418: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20741Cu;
        goto label_20741c;
    }
    ctx->pc = 0x207414u;
    {
        const bool branch_taken_0x207414 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207414u;
            // 0x207418: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207414) {
            ctx->pc = 0x2079B8u;
            goto label_2079b8;
        }
    }
    ctx->pc = 0x20741Cu;
label_20741c:
    // 0x20741c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x20741cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
label_207420:
    // 0x207420: 0x8c63ed58  lw          $v1, -0x12A8($v1)
    ctx->pc = 0x207420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962520)));
label_207424:
    // 0x207424: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x207424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_207428:
    // 0x207428: 0x5043006a  beql        $v0, $v1, . + 4 + (0x6A << 2)
label_20742c:
    if (ctx->pc == 0x20742Cu) {
        ctx->pc = 0x20742Cu;
            // 0x20742c: 0x8243001f  lb          $v1, 0x1F($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 31)));
        ctx->pc = 0x207430u;
        goto label_207430;
    }
    ctx->pc = 0x207428u;
    {
        const bool branch_taken_0x207428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x207428) {
            ctx->pc = 0x20742Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x207428u;
            // 0x20742c: 0x8243001f  lb          $v1, 0x1F($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 31)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2075D4u;
            goto label_2075d4;
        }
    }
    ctx->pc = 0x207430u;
label_207430:
    // 0x207430: 0x10000161  b           . + 4 + (0x161 << 2)
label_207434:
    if (ctx->pc == 0x207434u) {
        ctx->pc = 0x207434u;
            // 0x207434: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x207438u;
        goto label_207438;
    }
    ctx->pc = 0x207430u;
    {
        const bool branch_taken_0x207430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207430u;
            // 0x207434: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207430) {
            ctx->pc = 0x2079B8u;
            goto label_2079b8;
        }
    }
    ctx->pc = 0x207438u;
label_207438:
    // 0x207438: 0x1000fff8  b           . + 4 + (-0x8 << 2)
label_20743c:
    if (ctx->pc == 0x20743Cu) {
        ctx->pc = 0x20743Cu;
            // 0x20743c: 0x8e2200a8  lw          $v0, 0xA8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
        ctx->pc = 0x207440u;
        goto label_207440;
    }
    ctx->pc = 0x207438u;
    {
        const bool branch_taken_0x207438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20743Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207438u;
            // 0x20743c: 0x8e2200a8  lw          $v0, 0xA8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207438) {
            ctx->pc = 0x20741Cu;
            runtime->cooperativeGuestYield();
            goto label_20741c;
        }
    }
    ctx->pc = 0x207440u;
label_207440:
    // 0x207440: 0x1200015d  beqz        $s0, . + 4 + (0x15D << 2)
label_207444:
    if (ctx->pc == 0x207444u) {
        ctx->pc = 0x207444u;
            // 0x207444: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x207448u;
        goto label_207448;
    }
    ctx->pc = 0x207440u;
    {
        const bool branch_taken_0x207440 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x207444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207440u;
            // 0x207444: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207440) {
            ctx->pc = 0x2079B8u;
            goto label_2079b8;
        }
    }
    ctx->pc = 0x207448u;
label_207448:
    // 0x207448: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x207448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_20744c:
    // 0x20744c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20744cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_207450:
    // 0x207450: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x207450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_207454:
    // 0x207454: 0x8ce4cd58  lw          $a0, -0x32A8($a3)
    ctx->pc = 0x207454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294954328)));
label_207458:
    // 0x207458: 0x431826  xor         $v1, $v0, $v1
    ctx->pc = 0x207458u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_20745c:
    // 0x20745c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x20745cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_207460:
    // 0x207460: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x207460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_207464:
    // 0x207464: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_207468:
    if (ctx->pc == 0x207468u) {
        ctx->pc = 0x207468u;
            // 0x207468: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->pc = 0x20746Cu;
        goto label_20746c;
    }
    ctx->pc = 0x207464u;
    {
        const bool branch_taken_0x207464 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x207468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207464u;
            // 0x207468: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207464) {
            ctx->pc = 0x2074B0u;
            goto label_2074b0;
        }
    }
    ctx->pc = 0x20746Cu;
label_20746c:
    // 0x20746c: 0xd88100d0  lqc2        $vf1, 0xD0($a0)
    ctx->pc = 0x20746cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 208)));
label_207470:
    // 0x207470: 0x4b010043  vaddw.x     $vf1, $vf0, $vf1w
    ctx->pc = 0x207470u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_207474:
    // 0x207474: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x207474u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_207478:
    // 0x207478: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x207478u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20747c:
    // 0x20747c: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x20747cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_207480:
    // 0x207480: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x207480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_207484:
    // 0x207484: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x207484u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_207488:
    // 0x207488: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_20748c:
    if (ctx->pc == 0x20748Cu) {
        ctx->pc = 0x207490u;
        goto label_207490;
    }
    ctx->pc = 0x207488u;
    {
        const bool branch_taken_0x207488 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x207488) {
            ctx->pc = 0x2074B0u;
            goto label_2074b0;
        }
    }
    ctx->pc = 0x207490u;
label_207490:
    // 0x207490: 0xd88100e0  lqc2        $vf1, 0xE0($a0)
    ctx->pc = 0x207490u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 224)));
label_207494:
    // 0x207494: 0x4b010043  vaddw.x     $vf1, $vf0, $vf1w
    ctx->pc = 0x207494u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_207498:
    // 0x207498: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x207498u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_20749c:
    // 0x20749c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20749cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2074a0:
    // 0x2074a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2074a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2074a4:
    // 0x2074a4: 0x0  nop
    ctx->pc = 0x2074a4u;
    // NOP
label_2074a8:
    // 0x2074a8: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_2074ac:
    if (ctx->pc == 0x2074ACu) {
        ctx->pc = 0x2074ACu;
            // 0x2074ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2074B0u;
        goto label_2074b0;
    }
    ctx->pc = 0x2074A8u;
    {
        const bool branch_taken_0x2074a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2074a8) {
            ctx->pc = 0x2074ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2074A8u;
            // 0x2074ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2074B0u;
            goto label_2074b0;
        }
    }
    ctx->pc = 0x2074B0u;
label_2074b0:
    // 0x2074b0: 0x50a00048  beql        $a1, $zero, . + 4 + (0x48 << 2)
label_2074b4:
    if (ctx->pc == 0x2074B4u) {
        ctx->pc = 0x2074B4u;
            // 0x2074b4: 0x8243001f  lb          $v1, 0x1F($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 31)));
        ctx->pc = 0x2074B8u;
        goto label_2074b8;
    }
    ctx->pc = 0x2074B0u;
    {
        const bool branch_taken_0x2074b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2074b0) {
            ctx->pc = 0x2074B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2074B0u;
            // 0x2074b4: 0x8243001f  lb          $v1, 0x1F($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 31)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2075D4u;
            goto label_2075d4;
        }
    }
    ctx->pc = 0x2074B8u;
label_2074b8:
    // 0x2074b8: 0x1000013f  b           . + 4 + (0x13F << 2)
label_2074bc:
    if (ctx->pc == 0x2074BCu) {
        ctx->pc = 0x2074BCu;
            // 0x2074bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2074C0u;
        goto label_2074c0;
    }
    ctx->pc = 0x2074B8u;
    {
        const bool branch_taken_0x2074b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2074BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2074B8u;
            // 0x2074bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2074b8) {
            ctx->pc = 0x2079B8u;
            goto label_2079b8;
        }
    }
    ctx->pc = 0x2074C0u;
label_2074c0:
    // 0x2074c0: 0xc081be6  jal         func_206F98
label_2074c4:
    if (ctx->pc == 0x2074C4u) {
        ctx->pc = 0x2074C4u;
            // 0x2074c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2074C8u;
        goto label_2074c8;
    }
    ctx->pc = 0x2074C0u;
    SET_GPR_U32(ctx, 31, 0x2074C8u);
    ctx->pc = 0x2074C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2074C0u;
            // 0x2074c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x206F98u;
    if (runtime->hasFunction(0x206F98u)) {
        auto targetFn = runtime->lookupFunction(0x206F98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2074C8u; }
        if (ctx->pc != 0x2074C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00206F98_0x206f98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2074C8u; }
        if (ctx->pc != 0x2074C8u) { return; }
    }
    ctx->pc = 0x2074C8u;
label_2074c8:
    // 0x2074c8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2074c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2074cc:
    // 0x2074cc: 0x50600041  beql        $v1, $zero, . + 4 + (0x41 << 2)
label_2074d0:
    if (ctx->pc == 0x2074D0u) {
        ctx->pc = 0x2074D0u;
            // 0x2074d0: 0x8243001f  lb          $v1, 0x1F($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 31)));
        ctx->pc = 0x2074D4u;
        goto label_2074d4;
    }
    ctx->pc = 0x2074CCu;
    {
        const bool branch_taken_0x2074cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2074cc) {
            ctx->pc = 0x2074D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2074CCu;
            // 0x2074d0: 0x8243001f  lb          $v1, 0x1F($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 31)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2075D4u;
            goto label_2075d4;
        }
    }
    ctx->pc = 0x2074D4u;
label_2074d4:
    // 0x2074d4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2074d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2074d8:
    // 0x2074d8: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x2074d8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
label_2074dc:
    // 0x2074dc: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x2074dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
label_2074e0:
    // 0x2074e0: 0x40f809  jalr        $v0
label_2074e4:
    if (ctx->pc == 0x2074E4u) {
        ctx->pc = 0x2074E4u;
            // 0x2074e4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->pc = 0x2074E8u;
        goto label_2074e8;
    }
    ctx->pc = 0x2074E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2074E8u);
        ctx->pc = 0x2074E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2074E0u;
            // 0x2074e4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2074E8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2072A0u: goto label_2072a0;
            case 0x2072A4u: goto label_2072a4;
            case 0x2072A8u: goto label_2072a8;
            case 0x2072ACu: goto label_2072ac;
            case 0x2072B0u: goto label_2072b0;
            case 0x2072B4u: goto label_2072b4;
            case 0x2072B8u: goto label_2072b8;
            case 0x2072BCu: goto label_2072bc;
            case 0x2072C0u: goto label_2072c0;
            case 0x2072C4u: goto label_2072c4;
            case 0x2072C8u: goto label_2072c8;
            case 0x2072CCu: goto label_2072cc;
            case 0x2072D0u: goto label_2072d0;
            case 0x2072D4u: goto label_2072d4;
            case 0x2072D8u: goto label_2072d8;
            case 0x2072DCu: goto label_2072dc;
            case 0x2072E0u: goto label_2072e0;
            case 0x2072E4u: goto label_2072e4;
            case 0x2072E8u: goto label_2072e8;
            case 0x2072ECu: goto label_2072ec;
            case 0x2072F0u: goto label_2072f0;
            case 0x2072F4u: goto label_2072f4;
            case 0x2072F8u: goto label_2072f8;
            case 0x2072FCu: goto label_2072fc;
            case 0x207300u: goto label_207300;
            case 0x207304u: goto label_207304;
            case 0x207308u: goto label_207308;
            case 0x20730Cu: goto label_20730c;
            case 0x207310u: goto label_207310;
            case 0x207314u: goto label_207314;
            case 0x207318u: goto label_207318;
            case 0x20731Cu: goto label_20731c;
            case 0x207320u: goto label_207320;
            case 0x207324u: goto label_207324;
            case 0x207328u: goto label_207328;
            case 0x20732Cu: goto label_20732c;
            case 0x207330u: goto label_207330;
            case 0x207334u: goto label_207334;
            case 0x207338u: goto label_207338;
            case 0x20733Cu: goto label_20733c;
            case 0x207340u: goto label_207340;
            case 0x207344u: goto label_207344;
            case 0x207348u: goto label_207348;
            case 0x20734Cu: goto label_20734c;
            case 0x207350u: goto label_207350;
            case 0x207354u: goto label_207354;
            case 0x207358u: goto label_207358;
            case 0x20735Cu: goto label_20735c;
            case 0x207360u: goto label_207360;
            case 0x207364u: goto label_207364;
            case 0x207368u: goto label_207368;
            case 0x20736Cu: goto label_20736c;
            case 0x207370u: goto label_207370;
            case 0x207374u: goto label_207374;
            case 0x207378u: goto label_207378;
            case 0x20737Cu: goto label_20737c;
            case 0x207380u: goto label_207380;
            case 0x207384u: goto label_207384;
            case 0x207388u: goto label_207388;
            case 0x20738Cu: goto label_20738c;
            case 0x207390u: goto label_207390;
            case 0x207394u: goto label_207394;
            case 0x207398u: goto label_207398;
            case 0x20739Cu: goto label_20739c;
            case 0x2073A0u: goto label_2073a0;
            case 0x2073A4u: goto label_2073a4;
            case 0x2073A8u: goto label_2073a8;
            case 0x2073ACu: goto label_2073ac;
            case 0x2073B0u: goto label_2073b0;
            case 0x2073B4u: goto label_2073b4;
            case 0x2073B8u: goto label_2073b8;
            case 0x2073BCu: goto label_2073bc;
            case 0x2073C0u: goto label_2073c0;
            case 0x2073C4u: goto label_2073c4;
            case 0x2073C8u: goto label_2073c8;
            case 0x2073CCu: goto label_2073cc;
            case 0x2073D0u: goto label_2073d0;
            case 0x2073D4u: goto label_2073d4;
            case 0x2073D8u: goto label_2073d8;
            case 0x2073DCu: goto label_2073dc;
            case 0x2073E0u: goto label_2073e0;
            case 0x2073E4u: goto label_2073e4;
            case 0x2073E8u: goto label_2073e8;
            case 0x2073ECu: goto label_2073ec;
            case 0x2073F0u: goto label_2073f0;
            case 0x2073F4u: goto label_2073f4;
            case 0x2073F8u: goto label_2073f8;
            case 0x2073FCu: goto label_2073fc;
            case 0x207400u: goto label_207400;
            case 0x207404u: goto label_207404;
            case 0x207408u: goto label_207408;
            case 0x20740Cu: goto label_20740c;
            case 0x207410u: goto label_207410;
            case 0x207414u: goto label_207414;
            case 0x207418u: goto label_207418;
            case 0x20741Cu: goto label_20741c;
            case 0x207420u: goto label_207420;
            case 0x207424u: goto label_207424;
            case 0x207428u: goto label_207428;
            case 0x20742Cu: goto label_20742c;
            case 0x207430u: goto label_207430;
            case 0x207434u: goto label_207434;
            case 0x207438u: goto label_207438;
            case 0x20743Cu: goto label_20743c;
            case 0x207440u: goto label_207440;
            case 0x207444u: goto label_207444;
            case 0x207448u: goto label_207448;
            case 0x20744Cu: goto label_20744c;
            case 0x207450u: goto label_207450;
            case 0x207454u: goto label_207454;
            case 0x207458u: goto label_207458;
            case 0x20745Cu: goto label_20745c;
            case 0x207460u: goto label_207460;
            case 0x207464u: goto label_207464;
            case 0x207468u: goto label_207468;
            case 0x20746Cu: goto label_20746c;
            case 0x207470u: goto label_207470;
            case 0x207474u: goto label_207474;
            case 0x207478u: goto label_207478;
            case 0x20747Cu: goto label_20747c;
            case 0x207480u: goto label_207480;
            case 0x207484u: goto label_207484;
            case 0x207488u: goto label_207488;
            case 0x20748Cu: goto label_20748c;
            case 0x207490u: goto label_207490;
            case 0x207494u: goto label_207494;
            case 0x207498u: goto label_207498;
            case 0x20749Cu: goto label_20749c;
            case 0x2074A0u: goto label_2074a0;
            case 0x2074A4u: goto label_2074a4;
            case 0x2074A8u: goto label_2074a8;
            case 0x2074ACu: goto label_2074ac;
            case 0x2074B0u: goto label_2074b0;
            case 0x2074B4u: goto label_2074b4;
            case 0x2074B8u: goto label_2074b8;
            case 0x2074BCu: goto label_2074bc;
            case 0x2074C0u: goto label_2074c0;
            case 0x2074C4u: goto label_2074c4;
            case 0x2074C8u: goto label_2074c8;
            case 0x2074CCu: goto label_2074cc;
            case 0x2074D0u: goto label_2074d0;
            case 0x2074D4u: goto label_2074d4;
            case 0x2074D8u: goto label_2074d8;
            case 0x2074DCu: goto label_2074dc;
            case 0x2074E0u: goto label_2074e0;
            case 0x2074E4u: goto label_2074e4;
            case 0x2074E8u: goto label_2074e8;
            case 0x2074ECu: goto label_2074ec;
            case 0x2074F0u: goto label_2074f0;
            case 0x2074F4u: goto label_2074f4;
            case 0x2074F8u: goto label_2074f8;
            case 0x2074FCu: goto label_2074fc;
            case 0x207500u: goto label_207500;
            case 0x207504u: goto label_207504;
            case 0x207508u: goto label_207508;
            case 0x20750Cu: goto label_20750c;
            case 0x207510u: goto label_207510;
            case 0x207514u: goto label_207514;
            case 0x207518u: goto label_207518;
            case 0x20751Cu: goto label_20751c;
            case 0x207520u: goto label_207520;
            case 0x207524u: goto label_207524;
            case 0x207528u: goto label_207528;
            case 0x20752Cu: goto label_20752c;
            case 0x207530u: goto label_207530;
            case 0x207534u: goto label_207534;
            case 0x207538u: goto label_207538;
            case 0x20753Cu: goto label_20753c;
            case 0x207540u: goto label_207540;
            case 0x207544u: goto label_207544;
            case 0x207548u: goto label_207548;
            case 0x20754Cu: goto label_20754c;
            case 0x207550u: goto label_207550;
            case 0x207554u: goto label_207554;
            case 0x207558u: goto label_207558;
            case 0x20755Cu: goto label_20755c;
            case 0x207560u: goto label_207560;
            case 0x207564u: goto label_207564;
            case 0x207568u: goto label_207568;
            case 0x20756Cu: goto label_20756c;
            case 0x207570u: goto label_207570;
            case 0x207574u: goto label_207574;
            case 0x207578u: goto label_207578;
            case 0x20757Cu: goto label_20757c;
            case 0x207580u: goto label_207580;
            case 0x207584u: goto label_207584;
            case 0x207588u: goto label_207588;
            case 0x20758Cu: goto label_20758c;
            case 0x207590u: goto label_207590;
            case 0x207594u: goto label_207594;
            case 0x207598u: goto label_207598;
            case 0x20759Cu: goto label_20759c;
            case 0x2075A0u: goto label_2075a0;
            case 0x2075A4u: goto label_2075a4;
            case 0x2075A8u: goto label_2075a8;
            case 0x2075ACu: goto label_2075ac;
            case 0x2075B0u: goto label_2075b0;
            case 0x2075B4u: goto label_2075b4;
            case 0x2075B8u: goto label_2075b8;
            case 0x2075BCu: goto label_2075bc;
            case 0x2075C0u: goto label_2075c0;
            case 0x2075C4u: goto label_2075c4;
            case 0x2075C8u: goto label_2075c8;
            case 0x2075CCu: goto label_2075cc;
            case 0x2075D0u: goto label_2075d0;
            case 0x2075D4u: goto label_2075d4;
            case 0x2075D8u: goto label_2075d8;
            case 0x2075DCu: goto label_2075dc;
            case 0x2075E0u: goto label_2075e0;
            case 0x2075E4u: goto label_2075e4;
            case 0x2075E8u: goto label_2075e8;
            case 0x2075ECu: goto label_2075ec;
            case 0x2075F0u: goto label_2075f0;
            case 0x2075F4u: goto label_2075f4;
            case 0x2075F8u: goto label_2075f8;
            case 0x2075FCu: goto label_2075fc;
            case 0x207600u: goto label_207600;
            case 0x207604u: goto label_207604;
            case 0x207608u: goto label_207608;
            case 0x20760Cu: goto label_20760c;
            case 0x207610u: goto label_207610;
            case 0x207614u: goto label_207614;
            case 0x207618u: goto label_207618;
            case 0x20761Cu: goto label_20761c;
            case 0x207620u: goto label_207620;
            case 0x207624u: goto label_207624;
            case 0x207628u: goto label_207628;
            case 0x20762Cu: goto label_20762c;
            case 0x207630u: goto label_207630;
            case 0x207634u: goto label_207634;
            case 0x207638u: goto label_207638;
            case 0x20763Cu: goto label_20763c;
            case 0x207640u: goto label_207640;
            case 0x207644u: goto label_207644;
            case 0x207648u: goto label_207648;
            case 0x20764Cu: goto label_20764c;
            case 0x207650u: goto label_207650;
            case 0x207654u: goto label_207654;
            case 0x207658u: goto label_207658;
            case 0x20765Cu: goto label_20765c;
            case 0x207660u: goto label_207660;
            case 0x207664u: goto label_207664;
            case 0x207668u: goto label_207668;
            case 0x20766Cu: goto label_20766c;
            case 0x207670u: goto label_207670;
            case 0x207674u: goto label_207674;
            case 0x207678u: goto label_207678;
            case 0x20767Cu: goto label_20767c;
            case 0x207680u: goto label_207680;
            case 0x207684u: goto label_207684;
            case 0x207688u: goto label_207688;
            case 0x20768Cu: goto label_20768c;
            case 0x207690u: goto label_207690;
            case 0x207694u: goto label_207694;
            case 0x207698u: goto label_207698;
            case 0x20769Cu: goto label_20769c;
            case 0x2076A0u: goto label_2076a0;
            case 0x2076A4u: goto label_2076a4;
            case 0x2076A8u: goto label_2076a8;
            case 0x2076ACu: goto label_2076ac;
            case 0x2076B0u: goto label_2076b0;
            case 0x2076B4u: goto label_2076b4;
            case 0x2076B8u: goto label_2076b8;
            case 0x2076BCu: goto label_2076bc;
            case 0x2076C0u: goto label_2076c0;
            case 0x2076C4u: goto label_2076c4;
            case 0x2076C8u: goto label_2076c8;
            case 0x2076CCu: goto label_2076cc;
            case 0x2076D0u: goto label_2076d0;
            case 0x2076D4u: goto label_2076d4;
            case 0x2076D8u: goto label_2076d8;
            case 0x2076DCu: goto label_2076dc;
            case 0x2076E0u: goto label_2076e0;
            case 0x2076E4u: goto label_2076e4;
            case 0x2076E8u: goto label_2076e8;
            case 0x2076ECu: goto label_2076ec;
            case 0x2076F0u: goto label_2076f0;
            case 0x2076F4u: goto label_2076f4;
            case 0x2076F8u: goto label_2076f8;
            case 0x2076FCu: goto label_2076fc;
            case 0x207700u: goto label_207700;
            case 0x207704u: goto label_207704;
            case 0x207708u: goto label_207708;
            case 0x20770Cu: goto label_20770c;
            case 0x207710u: goto label_207710;
            case 0x207714u: goto label_207714;
            case 0x207718u: goto label_207718;
            case 0x20771Cu: goto label_20771c;
            case 0x207720u: goto label_207720;
            case 0x207724u: goto label_207724;
            case 0x207728u: goto label_207728;
            case 0x20772Cu: goto label_20772c;
            case 0x207730u: goto label_207730;
            case 0x207734u: goto label_207734;
            case 0x207738u: goto label_207738;
            case 0x20773Cu: goto label_20773c;
            case 0x207740u: goto label_207740;
            case 0x207744u: goto label_207744;
            case 0x207748u: goto label_207748;
            case 0x20774Cu: goto label_20774c;
            case 0x207750u: goto label_207750;
            case 0x207754u: goto label_207754;
            case 0x207758u: goto label_207758;
            case 0x20775Cu: goto label_20775c;
            case 0x207760u: goto label_207760;
            case 0x207764u: goto label_207764;
            case 0x207768u: goto label_207768;
            case 0x20776Cu: goto label_20776c;
            case 0x207770u: goto label_207770;
            case 0x207774u: goto label_207774;
            case 0x207778u: goto label_207778;
            case 0x20777Cu: goto label_20777c;
            case 0x207780u: goto label_207780;
            case 0x207784u: goto label_207784;
            case 0x207788u: goto label_207788;
            case 0x20778Cu: goto label_20778c;
            case 0x207790u: goto label_207790;
            case 0x207794u: goto label_207794;
            case 0x207798u: goto label_207798;
            case 0x20779Cu: goto label_20779c;
            case 0x2077A0u: goto label_2077a0;
            case 0x2077A4u: goto label_2077a4;
            case 0x2077A8u: goto label_2077a8;
            case 0x2077ACu: goto label_2077ac;
            case 0x2077B0u: goto label_2077b0;
            case 0x2077B4u: goto label_2077b4;
            case 0x2077B8u: goto label_2077b8;
            case 0x2077BCu: goto label_2077bc;
            case 0x2077C0u: goto label_2077c0;
            case 0x2077C4u: goto label_2077c4;
            case 0x2077C8u: goto label_2077c8;
            case 0x2077CCu: goto label_2077cc;
            case 0x2077D0u: goto label_2077d0;
            case 0x2077D4u: goto label_2077d4;
            case 0x2077D8u: goto label_2077d8;
            case 0x2077DCu: goto label_2077dc;
            case 0x2077E0u: goto label_2077e0;
            case 0x2077E4u: goto label_2077e4;
            case 0x2077E8u: goto label_2077e8;
            case 0x2077ECu: goto label_2077ec;
            case 0x2077F0u: goto label_2077f0;
            case 0x2077F4u: goto label_2077f4;
            case 0x2077F8u: goto label_2077f8;
            case 0x2077FCu: goto label_2077fc;
            case 0x207800u: goto label_207800;
            case 0x207804u: goto label_207804;
            case 0x207808u: goto label_207808;
            case 0x20780Cu: goto label_20780c;
            case 0x207810u: goto label_207810;
            case 0x207814u: goto label_207814;
            case 0x207818u: goto label_207818;
            case 0x20781Cu: goto label_20781c;
            case 0x207820u: goto label_207820;
            case 0x207824u: goto label_207824;
            case 0x207828u: goto label_207828;
            case 0x20782Cu: goto label_20782c;
            case 0x207830u: goto label_207830;
            case 0x207834u: goto label_207834;
            case 0x207838u: goto label_207838;
            case 0x20783Cu: goto label_20783c;
            case 0x207840u: goto label_207840;
            case 0x207844u: goto label_207844;
            case 0x207848u: goto label_207848;
            case 0x20784Cu: goto label_20784c;
            case 0x207850u: goto label_207850;
            case 0x207854u: goto label_207854;
            case 0x207858u: goto label_207858;
            case 0x20785Cu: goto label_20785c;
            case 0x207860u: goto label_207860;
            case 0x207864u: goto label_207864;
            case 0x207868u: goto label_207868;
            case 0x20786Cu: goto label_20786c;
            case 0x207870u: goto label_207870;
            case 0x207874u: goto label_207874;
            case 0x207878u: goto label_207878;
            case 0x20787Cu: goto label_20787c;
            case 0x207880u: goto label_207880;
            case 0x207884u: goto label_207884;
            case 0x207888u: goto label_207888;
            case 0x20788Cu: goto label_20788c;
            case 0x207890u: goto label_207890;
            case 0x207894u: goto label_207894;
            case 0x207898u: goto label_207898;
            case 0x20789Cu: goto label_20789c;
            case 0x2078A0u: goto label_2078a0;
            case 0x2078A4u: goto label_2078a4;
            case 0x2078A8u: goto label_2078a8;
            case 0x2078ACu: goto label_2078ac;
            case 0x2078B0u: goto label_2078b0;
            case 0x2078B4u: goto label_2078b4;
            case 0x2078B8u: goto label_2078b8;
            case 0x2078BCu: goto label_2078bc;
            case 0x2078C0u: goto label_2078c0;
            case 0x2078C4u: goto label_2078c4;
            case 0x2078C8u: goto label_2078c8;
            case 0x2078CCu: goto label_2078cc;
            case 0x2078D0u: goto label_2078d0;
            case 0x2078D4u: goto label_2078d4;
            case 0x2078D8u: goto label_2078d8;
            case 0x2078DCu: goto label_2078dc;
            case 0x2078E0u: goto label_2078e0;
            case 0x2078E4u: goto label_2078e4;
            case 0x2078E8u: goto label_2078e8;
            case 0x2078ECu: goto label_2078ec;
            case 0x2078F0u: goto label_2078f0;
            case 0x2078F4u: goto label_2078f4;
            case 0x2078F8u: goto label_2078f8;
            case 0x2078FCu: goto label_2078fc;
            case 0x207900u: goto label_207900;
            case 0x207904u: goto label_207904;
            case 0x207908u: goto label_207908;
            case 0x20790Cu: goto label_20790c;
            case 0x207910u: goto label_207910;
            case 0x207914u: goto label_207914;
            case 0x207918u: goto label_207918;
            case 0x20791Cu: goto label_20791c;
            case 0x207920u: goto label_207920;
            case 0x207924u: goto label_207924;
            case 0x207928u: goto label_207928;
            case 0x20792Cu: goto label_20792c;
            case 0x207930u: goto label_207930;
            case 0x207934u: goto label_207934;
            case 0x207938u: goto label_207938;
            case 0x20793Cu: goto label_20793c;
            case 0x207940u: goto label_207940;
            case 0x207944u: goto label_207944;
            case 0x207948u: goto label_207948;
            case 0x20794Cu: goto label_20794c;
            case 0x207950u: goto label_207950;
            case 0x207954u: goto label_207954;
            case 0x207958u: goto label_207958;
            case 0x20795Cu: goto label_20795c;
            case 0x207960u: goto label_207960;
            case 0x207964u: goto label_207964;
            case 0x207968u: goto label_207968;
            case 0x20796Cu: goto label_20796c;
            case 0x207970u: goto label_207970;
            case 0x207974u: goto label_207974;
            case 0x207978u: goto label_207978;
            case 0x20797Cu: goto label_20797c;
            case 0x207980u: goto label_207980;
            case 0x207984u: goto label_207984;
            case 0x207988u: goto label_207988;
            case 0x20798Cu: goto label_20798c;
            case 0x207990u: goto label_207990;
            case 0x207994u: goto label_207994;
            case 0x207998u: goto label_207998;
            case 0x20799Cu: goto label_20799c;
            case 0x2079A0u: goto label_2079a0;
            case 0x2079A4u: goto label_2079a4;
            case 0x2079A8u: goto label_2079a8;
            case 0x2079ACu: goto label_2079ac;
            case 0x2079B0u: goto label_2079b0;
            case 0x2079B4u: goto label_2079b4;
            case 0x2079B8u: goto label_2079b8;
            case 0x2079BCu: goto label_2079bc;
            case 0x2079C0u: goto label_2079c0;
            case 0x2079C4u: goto label_2079c4;
            case 0x2079C8u: goto label_2079c8;
            case 0x2079CCu: goto label_2079cc;
            case 0x2079D0u: goto label_2079d0;
            case 0x2079D4u: goto label_2079d4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2074E8u; }
            if (ctx->pc != 0x2074E8u) { return; }
        }
        }
    }
    ctx->pc = 0x2074E8u;
label_2074e8:
    // 0x2074e8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2074e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2074ec:
    // 0x2074ec: 0x8c82004c  lw          $v0, 0x4C($a0)
    ctx->pc = 0x2074ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_2074f0:
    // 0x2074f0: 0x50400038  beql        $v0, $zero, . + 4 + (0x38 << 2)
label_2074f4:
    if (ctx->pc == 0x2074F4u) {
        ctx->pc = 0x2074F4u;
            // 0x2074f4: 0x8243001f  lb          $v1, 0x1F($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 31)));
        ctx->pc = 0x2074F8u;
        goto label_2074f8;
    }
    ctx->pc = 0x2074F0u;
    {
        const bool branch_taken_0x2074f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2074f0) {
            ctx->pc = 0x2074F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2074F0u;
            // 0x2074f4: 0x8243001f  lb          $v1, 0x1F($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 31)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2075D4u;
            goto label_2075d4;
        }
    }
    ctx->pc = 0x2074F8u;
label_2074f8:
    // 0x2074f8: 0x8e22004c  lw          $v0, 0x4C($s1)
    ctx->pc = 0x2074f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_2074fc:
    // 0x2074fc: 0x50400035  beql        $v0, $zero, . + 4 + (0x35 << 2)
label_207500:
    if (ctx->pc == 0x207500u) {
        ctx->pc = 0x207500u;
            // 0x207500: 0x8243001f  lb          $v1, 0x1F($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 31)));
        ctx->pc = 0x207504u;
        goto label_207504;
    }
    ctx->pc = 0x2074FCu;
    {
        const bool branch_taken_0x2074fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2074fc) {
            ctx->pc = 0x207500u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2074FCu;
            // 0x207500: 0x8243001f  lb          $v1, 0x1F($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 31)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2075D4u;
            goto label_2075d4;
        }
    }
    ctx->pc = 0x207504u;
label_207504:
    // 0x207504: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x207504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_207508:
    // 0x207508: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x207508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_20750c:
    // 0x20750c: 0x54620031  bnel        $v1, $v0, . + 4 + (0x31 << 2)
label_207510:
    if (ctx->pc == 0x207510u) {
        ctx->pc = 0x207510u;
            // 0x207510: 0x8243001f  lb          $v1, 0x1F($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 31)));
        ctx->pc = 0x207514u;
        goto label_207514;
    }
    ctx->pc = 0x20750Cu;
    {
        const bool branch_taken_0x20750c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20750c) {
            ctx->pc = 0x207510u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20750Cu;
            // 0x207510: 0x8243001f  lb          $v1, 0x1F($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 31)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2075D4u;
            goto label_2075d4;
        }
    }
    ctx->pc = 0x207514u;
label_207514:
    // 0x207514: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x207514u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_207518:
    // 0x207518: 0x8e220050  lw          $v0, 0x50($s1)
    ctx->pc = 0x207518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
label_20751c:
    // 0x20751c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x20751cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_207520:
    // 0x207520: 0x442002c  bltzl       $v0, . + 4 + (0x2C << 2)
label_207524:
    if (ctx->pc == 0x207524u) {
        ctx->pc = 0x207524u;
            // 0x207524: 0x8243001f  lb          $v1, 0x1F($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 31)));
        ctx->pc = 0x207528u;
        goto label_207528;
    }
    ctx->pc = 0x207520u;
    {
        const bool branch_taken_0x207520 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x207520) {
            ctx->pc = 0x207524u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x207520u;
            // 0x207524: 0x8243001f  lb          $v1, 0x1F($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 31)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2075D4u;
            goto label_2075d4;
        }
    }
    ctx->pc = 0x207528u;
label_207528:
    // 0x207528: 0x10000123  b           . + 4 + (0x123 << 2)
label_20752c:
    if (ctx->pc == 0x20752Cu) {
        ctx->pc = 0x20752Cu;
            // 0x20752c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x207530u;
        goto label_207530;
    }
    ctx->pc = 0x207528u;
    {
        const bool branch_taken_0x207528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20752Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207528u;
            // 0x20752c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207528) {
            ctx->pc = 0x2079B8u;
            goto label_2079b8;
        }
    }
    ctx->pc = 0x207530u;
label_207530:
    // 0x207530: 0x12000121  beqz        $s0, . + 4 + (0x121 << 2)
label_207534:
    if (ctx->pc == 0x207534u) {
        ctx->pc = 0x207534u;
            // 0x207534: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x207538u;
        goto label_207538;
    }
    ctx->pc = 0x207530u;
    {
        const bool branch_taken_0x207530 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x207534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207530u;
            // 0x207534: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207530) {
            ctx->pc = 0x2079B8u;
            goto label_2079b8;
        }
    }
    ctx->pc = 0x207538u;
label_207538:
    // 0x207538: 0x8ce2cd58  lw          $v0, -0x32A8($a3)
    ctx->pc = 0x207538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294954328)));
label_20753c:
    // 0x20753c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20753cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_207540:
    // 0x207540: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x207540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_207544:
    // 0x207544: 0xd86100d0  lqc2        $vf1, 0xD0($v1)
    ctx->pc = 0x207544u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 208)));
label_207548:
    // 0x207548: 0x4b010043  vaddw.x     $vf1, $vf0, $vf1w
    ctx->pc = 0x207548u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_20754c:
    // 0x20754c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x20754cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
label_207550:
    // 0x207550: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x207550u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_207554:
    // 0x207554: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x207554u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_207558:
    // 0x207558: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x207558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20755c:
    // 0x20755c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20755cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_207560:
    // 0x207560: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_207564:
    if (ctx->pc == 0x207564u) {
        ctx->pc = 0x207568u;
        goto label_207568;
    }
    ctx->pc = 0x207560u;
    {
        const bool branch_taken_0x207560 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x207560) {
            ctx->pc = 0x207588u;
            goto label_207588;
        }
    }
    ctx->pc = 0x207568u;
label_207568:
    // 0x207568: 0xd86100e0  lqc2        $vf1, 0xE0($v1)
    ctx->pc = 0x207568u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 224)));
label_20756c:
    // 0x20756c: 0x4b010043  vaddw.x     $vf1, $vf0, $vf1w
    ctx->pc = 0x20756cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_207570:
    // 0x207570: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x207570u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_207574:
    // 0x207574: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x207574u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_207578:
    // 0x207578: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x207578u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20757c:
    // 0x20757c: 0x0  nop
    ctx->pc = 0x20757cu;
    // NOP
label_207580:
    // 0x207580: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_207584:
    if (ctx->pc == 0x207584u) {
        ctx->pc = 0x207584u;
            // 0x207584: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x207588u;
        goto label_207588;
    }
    ctx->pc = 0x207580u;
    {
        const bool branch_taken_0x207580 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x207580) {
            ctx->pc = 0x207584u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x207580u;
            // 0x207584: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x207588u;
            goto label_207588;
        }
    }
    ctx->pc = 0x207588u;
label_207588:
    // 0x207588: 0x50800012  beql        $a0, $zero, . + 4 + (0x12 << 2)
label_20758c:
    if (ctx->pc == 0x20758Cu) {
        ctx->pc = 0x20758Cu;
            // 0x20758c: 0x8243001f  lb          $v1, 0x1F($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 31)));
        ctx->pc = 0x207590u;
        goto label_207590;
    }
    ctx->pc = 0x207588u;
    {
        const bool branch_taken_0x207588 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x207588) {
            ctx->pc = 0x20758Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x207588u;
            // 0x20758c: 0x8243001f  lb          $v1, 0x1F($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 31)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2075D4u;
            goto label_2075d4;
        }
    }
    ctx->pc = 0x207590u;
label_207590:
    // 0x207590: 0x10000109  b           . + 4 + (0x109 << 2)
label_207594:
    if (ctx->pc == 0x207594u) {
        ctx->pc = 0x207594u;
            // 0x207594: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x207598u;
        goto label_207598;
    }
    ctx->pc = 0x207590u;
    {
        const bool branch_taken_0x207590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207590u;
            // 0x207594: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207590) {
            ctx->pc = 0x2079B8u;
            goto label_2079b8;
        }
    }
    ctx->pc = 0x207598u;
label_207598:
    // 0x207598: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x207598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_20759c:
    // 0x20759c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x20759cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2075a0:
    // 0x2075a0: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x2075a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_2075a4:
    // 0x2075a4: 0x8c420054  lw          $v0, 0x54($v0)
    ctx->pc = 0x2075a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2075a8:
    // 0x2075a8: 0x40f809  jalr        $v0
label_2075ac:
    if (ctx->pc == 0x2075ACu) {
        ctx->pc = 0x2075ACu;
            // 0x2075ac: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->pc = 0x2075B0u;
        goto label_2075b0;
    }
    ctx->pc = 0x2075A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2075B0u);
        ctx->pc = 0x2075ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2075A8u;
            // 0x2075ac: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2075B0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2072A0u: goto label_2072a0;
            case 0x2072A4u: goto label_2072a4;
            case 0x2072A8u: goto label_2072a8;
            case 0x2072ACu: goto label_2072ac;
            case 0x2072B0u: goto label_2072b0;
            case 0x2072B4u: goto label_2072b4;
            case 0x2072B8u: goto label_2072b8;
            case 0x2072BCu: goto label_2072bc;
            case 0x2072C0u: goto label_2072c0;
            case 0x2072C4u: goto label_2072c4;
            case 0x2072C8u: goto label_2072c8;
            case 0x2072CCu: goto label_2072cc;
            case 0x2072D0u: goto label_2072d0;
            case 0x2072D4u: goto label_2072d4;
            case 0x2072D8u: goto label_2072d8;
            case 0x2072DCu: goto label_2072dc;
            case 0x2072E0u: goto label_2072e0;
            case 0x2072E4u: goto label_2072e4;
            case 0x2072E8u: goto label_2072e8;
            case 0x2072ECu: goto label_2072ec;
            case 0x2072F0u: goto label_2072f0;
            case 0x2072F4u: goto label_2072f4;
            case 0x2072F8u: goto label_2072f8;
            case 0x2072FCu: goto label_2072fc;
            case 0x207300u: goto label_207300;
            case 0x207304u: goto label_207304;
            case 0x207308u: goto label_207308;
            case 0x20730Cu: goto label_20730c;
            case 0x207310u: goto label_207310;
            case 0x207314u: goto label_207314;
            case 0x207318u: goto label_207318;
            case 0x20731Cu: goto label_20731c;
            case 0x207320u: goto label_207320;
            case 0x207324u: goto label_207324;
            case 0x207328u: goto label_207328;
            case 0x20732Cu: goto label_20732c;
            case 0x207330u: goto label_207330;
            case 0x207334u: goto label_207334;
            case 0x207338u: goto label_207338;
            case 0x20733Cu: goto label_20733c;
            case 0x207340u: goto label_207340;
            case 0x207344u: goto label_207344;
            case 0x207348u: goto label_207348;
            case 0x20734Cu: goto label_20734c;
            case 0x207350u: goto label_207350;
            case 0x207354u: goto label_207354;
            case 0x207358u: goto label_207358;
            case 0x20735Cu: goto label_20735c;
            case 0x207360u: goto label_207360;
            case 0x207364u: goto label_207364;
            case 0x207368u: goto label_207368;
            case 0x20736Cu: goto label_20736c;
            case 0x207370u: goto label_207370;
            case 0x207374u: goto label_207374;
            case 0x207378u: goto label_207378;
            case 0x20737Cu: goto label_20737c;
            case 0x207380u: goto label_207380;
            case 0x207384u: goto label_207384;
            case 0x207388u: goto label_207388;
            case 0x20738Cu: goto label_20738c;
            case 0x207390u: goto label_207390;
            case 0x207394u: goto label_207394;
            case 0x207398u: goto label_207398;
            case 0x20739Cu: goto label_20739c;
            case 0x2073A0u: goto label_2073a0;
            case 0x2073A4u: goto label_2073a4;
            case 0x2073A8u: goto label_2073a8;
            case 0x2073ACu: goto label_2073ac;
            case 0x2073B0u: goto label_2073b0;
            case 0x2073B4u: goto label_2073b4;
            case 0x2073B8u: goto label_2073b8;
            case 0x2073BCu: goto label_2073bc;
            case 0x2073C0u: goto label_2073c0;
            case 0x2073C4u: goto label_2073c4;
            case 0x2073C8u: goto label_2073c8;
            case 0x2073CCu: goto label_2073cc;
            case 0x2073D0u: goto label_2073d0;
            case 0x2073D4u: goto label_2073d4;
            case 0x2073D8u: goto label_2073d8;
            case 0x2073DCu: goto label_2073dc;
            case 0x2073E0u: goto label_2073e0;
            case 0x2073E4u: goto label_2073e4;
            case 0x2073E8u: goto label_2073e8;
            case 0x2073ECu: goto label_2073ec;
            case 0x2073F0u: goto label_2073f0;
            case 0x2073F4u: goto label_2073f4;
            case 0x2073F8u: goto label_2073f8;
            case 0x2073FCu: goto label_2073fc;
            case 0x207400u: goto label_207400;
            case 0x207404u: goto label_207404;
            case 0x207408u: goto label_207408;
            case 0x20740Cu: goto label_20740c;
            case 0x207410u: goto label_207410;
            case 0x207414u: goto label_207414;
            case 0x207418u: goto label_207418;
            case 0x20741Cu: goto label_20741c;
            case 0x207420u: goto label_207420;
            case 0x207424u: goto label_207424;
            case 0x207428u: goto label_207428;
            case 0x20742Cu: goto label_20742c;
            case 0x207430u: goto label_207430;
            case 0x207434u: goto label_207434;
            case 0x207438u: goto label_207438;
            case 0x20743Cu: goto label_20743c;
            case 0x207440u: goto label_207440;
            case 0x207444u: goto label_207444;
            case 0x207448u: goto label_207448;
            case 0x20744Cu: goto label_20744c;
            case 0x207450u: goto label_207450;
            case 0x207454u: goto label_207454;
            case 0x207458u: goto label_207458;
            case 0x20745Cu: goto label_20745c;
            case 0x207460u: goto label_207460;
            case 0x207464u: goto label_207464;
            case 0x207468u: goto label_207468;
            case 0x20746Cu: goto label_20746c;
            case 0x207470u: goto label_207470;
            case 0x207474u: goto label_207474;
            case 0x207478u: goto label_207478;
            case 0x20747Cu: goto label_20747c;
            case 0x207480u: goto label_207480;
            case 0x207484u: goto label_207484;
            case 0x207488u: goto label_207488;
            case 0x20748Cu: goto label_20748c;
            case 0x207490u: goto label_207490;
            case 0x207494u: goto label_207494;
            case 0x207498u: goto label_207498;
            case 0x20749Cu: goto label_20749c;
            case 0x2074A0u: goto label_2074a0;
            case 0x2074A4u: goto label_2074a4;
            case 0x2074A8u: goto label_2074a8;
            case 0x2074ACu: goto label_2074ac;
            case 0x2074B0u: goto label_2074b0;
            case 0x2074B4u: goto label_2074b4;
            case 0x2074B8u: goto label_2074b8;
            case 0x2074BCu: goto label_2074bc;
            case 0x2074C0u: goto label_2074c0;
            case 0x2074C4u: goto label_2074c4;
            case 0x2074C8u: goto label_2074c8;
            case 0x2074CCu: goto label_2074cc;
            case 0x2074D0u: goto label_2074d0;
            case 0x2074D4u: goto label_2074d4;
            case 0x2074D8u: goto label_2074d8;
            case 0x2074DCu: goto label_2074dc;
            case 0x2074E0u: goto label_2074e0;
            case 0x2074E4u: goto label_2074e4;
            case 0x2074E8u: goto label_2074e8;
            case 0x2074ECu: goto label_2074ec;
            case 0x2074F0u: goto label_2074f0;
            case 0x2074F4u: goto label_2074f4;
            case 0x2074F8u: goto label_2074f8;
            case 0x2074FCu: goto label_2074fc;
            case 0x207500u: goto label_207500;
            case 0x207504u: goto label_207504;
            case 0x207508u: goto label_207508;
            case 0x20750Cu: goto label_20750c;
            case 0x207510u: goto label_207510;
            case 0x207514u: goto label_207514;
            case 0x207518u: goto label_207518;
            case 0x20751Cu: goto label_20751c;
            case 0x207520u: goto label_207520;
            case 0x207524u: goto label_207524;
            case 0x207528u: goto label_207528;
            case 0x20752Cu: goto label_20752c;
            case 0x207530u: goto label_207530;
            case 0x207534u: goto label_207534;
            case 0x207538u: goto label_207538;
            case 0x20753Cu: goto label_20753c;
            case 0x207540u: goto label_207540;
            case 0x207544u: goto label_207544;
            case 0x207548u: goto label_207548;
            case 0x20754Cu: goto label_20754c;
            case 0x207550u: goto label_207550;
            case 0x207554u: goto label_207554;
            case 0x207558u: goto label_207558;
            case 0x20755Cu: goto label_20755c;
            case 0x207560u: goto label_207560;
            case 0x207564u: goto label_207564;
            case 0x207568u: goto label_207568;
            case 0x20756Cu: goto label_20756c;
            case 0x207570u: goto label_207570;
            case 0x207574u: goto label_207574;
            case 0x207578u: goto label_207578;
            case 0x20757Cu: goto label_20757c;
            case 0x207580u: goto label_207580;
            case 0x207584u: goto label_207584;
            case 0x207588u: goto label_207588;
            case 0x20758Cu: goto label_20758c;
            case 0x207590u: goto label_207590;
            case 0x207594u: goto label_207594;
            case 0x207598u: goto label_207598;
            case 0x20759Cu: goto label_20759c;
            case 0x2075A0u: goto label_2075a0;
            case 0x2075A4u: goto label_2075a4;
            case 0x2075A8u: goto label_2075a8;
            case 0x2075ACu: goto label_2075ac;
            case 0x2075B0u: goto label_2075b0;
            case 0x2075B4u: goto label_2075b4;
            case 0x2075B8u: goto label_2075b8;
            case 0x2075BCu: goto label_2075bc;
            case 0x2075C0u: goto label_2075c0;
            case 0x2075C4u: goto label_2075c4;
            case 0x2075C8u: goto label_2075c8;
            case 0x2075CCu: goto label_2075cc;
            case 0x2075D0u: goto label_2075d0;
            case 0x2075D4u: goto label_2075d4;
            case 0x2075D8u: goto label_2075d8;
            case 0x2075DCu: goto label_2075dc;
            case 0x2075E0u: goto label_2075e0;
            case 0x2075E4u: goto label_2075e4;
            case 0x2075E8u: goto label_2075e8;
            case 0x2075ECu: goto label_2075ec;
            case 0x2075F0u: goto label_2075f0;
            case 0x2075F4u: goto label_2075f4;
            case 0x2075F8u: goto label_2075f8;
            case 0x2075FCu: goto label_2075fc;
            case 0x207600u: goto label_207600;
            case 0x207604u: goto label_207604;
            case 0x207608u: goto label_207608;
            case 0x20760Cu: goto label_20760c;
            case 0x207610u: goto label_207610;
            case 0x207614u: goto label_207614;
            case 0x207618u: goto label_207618;
            case 0x20761Cu: goto label_20761c;
            case 0x207620u: goto label_207620;
            case 0x207624u: goto label_207624;
            case 0x207628u: goto label_207628;
            case 0x20762Cu: goto label_20762c;
            case 0x207630u: goto label_207630;
            case 0x207634u: goto label_207634;
            case 0x207638u: goto label_207638;
            case 0x20763Cu: goto label_20763c;
            case 0x207640u: goto label_207640;
            case 0x207644u: goto label_207644;
            case 0x207648u: goto label_207648;
            case 0x20764Cu: goto label_20764c;
            case 0x207650u: goto label_207650;
            case 0x207654u: goto label_207654;
            case 0x207658u: goto label_207658;
            case 0x20765Cu: goto label_20765c;
            case 0x207660u: goto label_207660;
            case 0x207664u: goto label_207664;
            case 0x207668u: goto label_207668;
            case 0x20766Cu: goto label_20766c;
            case 0x207670u: goto label_207670;
            case 0x207674u: goto label_207674;
            case 0x207678u: goto label_207678;
            case 0x20767Cu: goto label_20767c;
            case 0x207680u: goto label_207680;
            case 0x207684u: goto label_207684;
            case 0x207688u: goto label_207688;
            case 0x20768Cu: goto label_20768c;
            case 0x207690u: goto label_207690;
            case 0x207694u: goto label_207694;
            case 0x207698u: goto label_207698;
            case 0x20769Cu: goto label_20769c;
            case 0x2076A0u: goto label_2076a0;
            case 0x2076A4u: goto label_2076a4;
            case 0x2076A8u: goto label_2076a8;
            case 0x2076ACu: goto label_2076ac;
            case 0x2076B0u: goto label_2076b0;
            case 0x2076B4u: goto label_2076b4;
            case 0x2076B8u: goto label_2076b8;
            case 0x2076BCu: goto label_2076bc;
            case 0x2076C0u: goto label_2076c0;
            case 0x2076C4u: goto label_2076c4;
            case 0x2076C8u: goto label_2076c8;
            case 0x2076CCu: goto label_2076cc;
            case 0x2076D0u: goto label_2076d0;
            case 0x2076D4u: goto label_2076d4;
            case 0x2076D8u: goto label_2076d8;
            case 0x2076DCu: goto label_2076dc;
            case 0x2076E0u: goto label_2076e0;
            case 0x2076E4u: goto label_2076e4;
            case 0x2076E8u: goto label_2076e8;
            case 0x2076ECu: goto label_2076ec;
            case 0x2076F0u: goto label_2076f0;
            case 0x2076F4u: goto label_2076f4;
            case 0x2076F8u: goto label_2076f8;
            case 0x2076FCu: goto label_2076fc;
            case 0x207700u: goto label_207700;
            case 0x207704u: goto label_207704;
            case 0x207708u: goto label_207708;
            case 0x20770Cu: goto label_20770c;
            case 0x207710u: goto label_207710;
            case 0x207714u: goto label_207714;
            case 0x207718u: goto label_207718;
            case 0x20771Cu: goto label_20771c;
            case 0x207720u: goto label_207720;
            case 0x207724u: goto label_207724;
            case 0x207728u: goto label_207728;
            case 0x20772Cu: goto label_20772c;
            case 0x207730u: goto label_207730;
            case 0x207734u: goto label_207734;
            case 0x207738u: goto label_207738;
            case 0x20773Cu: goto label_20773c;
            case 0x207740u: goto label_207740;
            case 0x207744u: goto label_207744;
            case 0x207748u: goto label_207748;
            case 0x20774Cu: goto label_20774c;
            case 0x207750u: goto label_207750;
            case 0x207754u: goto label_207754;
            case 0x207758u: goto label_207758;
            case 0x20775Cu: goto label_20775c;
            case 0x207760u: goto label_207760;
            case 0x207764u: goto label_207764;
            case 0x207768u: goto label_207768;
            case 0x20776Cu: goto label_20776c;
            case 0x207770u: goto label_207770;
            case 0x207774u: goto label_207774;
            case 0x207778u: goto label_207778;
            case 0x20777Cu: goto label_20777c;
            case 0x207780u: goto label_207780;
            case 0x207784u: goto label_207784;
            case 0x207788u: goto label_207788;
            case 0x20778Cu: goto label_20778c;
            case 0x207790u: goto label_207790;
            case 0x207794u: goto label_207794;
            case 0x207798u: goto label_207798;
            case 0x20779Cu: goto label_20779c;
            case 0x2077A0u: goto label_2077a0;
            case 0x2077A4u: goto label_2077a4;
            case 0x2077A8u: goto label_2077a8;
            case 0x2077ACu: goto label_2077ac;
            case 0x2077B0u: goto label_2077b0;
            case 0x2077B4u: goto label_2077b4;
            case 0x2077B8u: goto label_2077b8;
            case 0x2077BCu: goto label_2077bc;
            case 0x2077C0u: goto label_2077c0;
            case 0x2077C4u: goto label_2077c4;
            case 0x2077C8u: goto label_2077c8;
            case 0x2077CCu: goto label_2077cc;
            case 0x2077D0u: goto label_2077d0;
            case 0x2077D4u: goto label_2077d4;
            case 0x2077D8u: goto label_2077d8;
            case 0x2077DCu: goto label_2077dc;
            case 0x2077E0u: goto label_2077e0;
            case 0x2077E4u: goto label_2077e4;
            case 0x2077E8u: goto label_2077e8;
            case 0x2077ECu: goto label_2077ec;
            case 0x2077F0u: goto label_2077f0;
            case 0x2077F4u: goto label_2077f4;
            case 0x2077F8u: goto label_2077f8;
            case 0x2077FCu: goto label_2077fc;
            case 0x207800u: goto label_207800;
            case 0x207804u: goto label_207804;
            case 0x207808u: goto label_207808;
            case 0x20780Cu: goto label_20780c;
            case 0x207810u: goto label_207810;
            case 0x207814u: goto label_207814;
            case 0x207818u: goto label_207818;
            case 0x20781Cu: goto label_20781c;
            case 0x207820u: goto label_207820;
            case 0x207824u: goto label_207824;
            case 0x207828u: goto label_207828;
            case 0x20782Cu: goto label_20782c;
            case 0x207830u: goto label_207830;
            case 0x207834u: goto label_207834;
            case 0x207838u: goto label_207838;
            case 0x20783Cu: goto label_20783c;
            case 0x207840u: goto label_207840;
            case 0x207844u: goto label_207844;
            case 0x207848u: goto label_207848;
            case 0x20784Cu: goto label_20784c;
            case 0x207850u: goto label_207850;
            case 0x207854u: goto label_207854;
            case 0x207858u: goto label_207858;
            case 0x20785Cu: goto label_20785c;
            case 0x207860u: goto label_207860;
            case 0x207864u: goto label_207864;
            case 0x207868u: goto label_207868;
            case 0x20786Cu: goto label_20786c;
            case 0x207870u: goto label_207870;
            case 0x207874u: goto label_207874;
            case 0x207878u: goto label_207878;
            case 0x20787Cu: goto label_20787c;
            case 0x207880u: goto label_207880;
            case 0x207884u: goto label_207884;
            case 0x207888u: goto label_207888;
            case 0x20788Cu: goto label_20788c;
            case 0x207890u: goto label_207890;
            case 0x207894u: goto label_207894;
            case 0x207898u: goto label_207898;
            case 0x20789Cu: goto label_20789c;
            case 0x2078A0u: goto label_2078a0;
            case 0x2078A4u: goto label_2078a4;
            case 0x2078A8u: goto label_2078a8;
            case 0x2078ACu: goto label_2078ac;
            case 0x2078B0u: goto label_2078b0;
            case 0x2078B4u: goto label_2078b4;
            case 0x2078B8u: goto label_2078b8;
            case 0x2078BCu: goto label_2078bc;
            case 0x2078C0u: goto label_2078c0;
            case 0x2078C4u: goto label_2078c4;
            case 0x2078C8u: goto label_2078c8;
            case 0x2078CCu: goto label_2078cc;
            case 0x2078D0u: goto label_2078d0;
            case 0x2078D4u: goto label_2078d4;
            case 0x2078D8u: goto label_2078d8;
            case 0x2078DCu: goto label_2078dc;
            case 0x2078E0u: goto label_2078e0;
            case 0x2078E4u: goto label_2078e4;
            case 0x2078E8u: goto label_2078e8;
            case 0x2078ECu: goto label_2078ec;
            case 0x2078F0u: goto label_2078f0;
            case 0x2078F4u: goto label_2078f4;
            case 0x2078F8u: goto label_2078f8;
            case 0x2078FCu: goto label_2078fc;
            case 0x207900u: goto label_207900;
            case 0x207904u: goto label_207904;
            case 0x207908u: goto label_207908;
            case 0x20790Cu: goto label_20790c;
            case 0x207910u: goto label_207910;
            case 0x207914u: goto label_207914;
            case 0x207918u: goto label_207918;
            case 0x20791Cu: goto label_20791c;
            case 0x207920u: goto label_207920;
            case 0x207924u: goto label_207924;
            case 0x207928u: goto label_207928;
            case 0x20792Cu: goto label_20792c;
            case 0x207930u: goto label_207930;
            case 0x207934u: goto label_207934;
            case 0x207938u: goto label_207938;
            case 0x20793Cu: goto label_20793c;
            case 0x207940u: goto label_207940;
            case 0x207944u: goto label_207944;
            case 0x207948u: goto label_207948;
            case 0x20794Cu: goto label_20794c;
            case 0x207950u: goto label_207950;
            case 0x207954u: goto label_207954;
            case 0x207958u: goto label_207958;
            case 0x20795Cu: goto label_20795c;
            case 0x207960u: goto label_207960;
            case 0x207964u: goto label_207964;
            case 0x207968u: goto label_207968;
            case 0x20796Cu: goto label_20796c;
            case 0x207970u: goto label_207970;
            case 0x207974u: goto label_207974;
            case 0x207978u: goto label_207978;
            case 0x20797Cu: goto label_20797c;
            case 0x207980u: goto label_207980;
            case 0x207984u: goto label_207984;
            case 0x207988u: goto label_207988;
            case 0x20798Cu: goto label_20798c;
            case 0x207990u: goto label_207990;
            case 0x207994u: goto label_207994;
            case 0x207998u: goto label_207998;
            case 0x20799Cu: goto label_20799c;
            case 0x2079A0u: goto label_2079a0;
            case 0x2079A4u: goto label_2079a4;
            case 0x2079A8u: goto label_2079a8;
            case 0x2079ACu: goto label_2079ac;
            case 0x2079B0u: goto label_2079b0;
            case 0x2079B4u: goto label_2079b4;
            case 0x2079B8u: goto label_2079b8;
            case 0x2079BCu: goto label_2079bc;
            case 0x2079C0u: goto label_2079c0;
            case 0x2079C4u: goto label_2079c4;
            case 0x2079C8u: goto label_2079c8;
            case 0x2079CCu: goto label_2079cc;
            case 0x2079D0u: goto label_2079d0;
            case 0x2079D4u: goto label_2079d4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2075B0u; }
            if (ctx->pc != 0x2075B0u) { return; }
        }
        }
    }
    ctx->pc = 0x2075B0u;
label_2075b0:
    // 0x2075b0: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x2075b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_2075b4:
    // 0x2075b4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2075b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2075b8:
    // 0x2075b8: 0x104000fe  beqz        $v0, . + 4 + (0xFE << 2)
label_2075bc:
    if (ctx->pc == 0x2075BCu) {
        ctx->pc = 0x2075BCu;
            // 0x2075bc: 0x8e230048  lw          $v1, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->pc = 0x2075C0u;
        goto label_2075c0;
    }
    ctx->pc = 0x2075B8u;
    {
        const bool branch_taken_0x2075b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2075BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2075B8u;
            // 0x2075bc: 0x8e230048  lw          $v1, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2075b8) {
            ctx->pc = 0x2079B4u;
            goto label_2079b4;
        }
    }
    ctx->pc = 0x2075C0u;
label_2075c0:
    // 0x2075c0: 0x8c6202d8  lw          $v0, 0x2D8($v1)
    ctx->pc = 0x2075c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 728)));
label_2075c4:
    // 0x2075c4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x2075c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_2075c8:
    // 0x2075c8: 0x144000fb  bnez        $v0, . + 4 + (0xFB << 2)
label_2075cc:
    if (ctx->pc == 0x2075CCu) {
        ctx->pc = 0x2075CCu;
            // 0x2075cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2075D0u;
        goto label_2075d0;
    }
    ctx->pc = 0x2075C8u;
    {
        const bool branch_taken_0x2075c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2075CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2075C8u;
            // 0x2075cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2075c8) {
            ctx->pc = 0x2079B8u;
            goto label_2079b8;
        }
    }
    ctx->pc = 0x2075D0u;
label_2075d0:
    // 0x2075d0: 0x8243001f  lb          $v1, 0x1F($s2)
    ctx->pc = 0x2075d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 31)));
label_2075d4:
    // 0x2075d4: 0x1060003a  beqz        $v1, . + 4 + (0x3A << 2)
label_2075d8:
    if (ctx->pc == 0x2075D8u) {
        ctx->pc = 0x2075D8u;
            // 0x2075d8: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x2075DCu;
        goto label_2075dc;
    }
    ctx->pc = 0x2075D4u;
    {
        const bool branch_taken_0x2075d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2075D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2075D4u;
            // 0x2075d8: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2075d4) {
            ctx->pc = 0x2076C0u;
            goto label_2076c0;
        }
    }
    ctx->pc = 0x2075DCu;
label_2075dc:
    // 0x2075dc: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_2075e0:
    if (ctx->pc == 0x2075E0u) {
        ctx->pc = 0x2075E0u;
            // 0x2075e0: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->pc = 0x2075E4u;
        goto label_2075e4;
    }
    ctx->pc = 0x2075DCu;
    {
        const bool branch_taken_0x2075dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2075E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2075DCu;
            // 0x2075e0: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2075dc) {
            ctx->pc = 0x207600u;
            goto label_207600;
        }
    }
    ctx->pc = 0x2075E4u;
label_2075e4:
    // 0x2075e4: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x2075e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
label_2075e8:
    // 0x2075e8: 0x94422d42  lhu         $v0, 0x2D42($v0)
    ctx->pc = 0x2075e8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 11586)));
label_2075ec:
    // 0x2075ec: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x2075ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_2075f0:
    // 0x2075f0: 0x54400035  bnel        $v0, $zero, . + 4 + (0x35 << 2)
label_2075f4:
    if (ctx->pc == 0x2075F4u) {
        ctx->pc = 0x2075F4u;
            // 0x2075f4: 0x8245001e  lb          $a1, 0x1E($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 30)));
        ctx->pc = 0x2075F8u;
        goto label_2075f8;
    }
    ctx->pc = 0x2075F0u;
    {
        const bool branch_taken_0x2075f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2075f0) {
            ctx->pc = 0x2075F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2075F0u;
            // 0x2075f4: 0x8245001e  lb          $a1, 0x1E($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 30)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2076C8u;
            goto label_2076c8;
        }
    }
    ctx->pc = 0x2075F8u;
label_2075f8:
    // 0x2075f8: 0x100000ef  b           . + 4 + (0xEF << 2)
label_2075fc:
    if (ctx->pc == 0x2075FCu) {
        ctx->pc = 0x2075FCu;
            // 0x2075fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x207600u;
        goto label_207600;
    }
    ctx->pc = 0x2075F8u;
    {
        const bool branch_taken_0x2075f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2075FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2075F8u;
            // 0x2075fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2075f8) {
            ctx->pc = 0x2079B8u;
            goto label_2079b8;
        }
    }
    ctx->pc = 0x207600u;
label_207600:
    // 0x207600: 0x90422d3e  lbu         $v0, 0x2D3E($v0)
    ctx->pc = 0x207600u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11582)));
label_207604:
    // 0x207604: 0x144300ec  bne         $v0, $v1, . + 4 + (0xEC << 2)
label_207608:
    if (ctx->pc == 0x207608u) {
        ctx->pc = 0x207608u;
            // 0x207608: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20760Cu;
        goto label_20760c;
    }
    ctx->pc = 0x207604u;
    {
        const bool branch_taken_0x207604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x207608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207604u;
            // 0x207608: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207604) {
            ctx->pc = 0x2079B8u;
            goto label_2079b8;
        }
    }
    ctx->pc = 0x20760Cu;
label_20760c:
    // 0x20760c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x20760cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_207610:
    // 0x207610: 0xc076200  jal         func_1D8800
label_207614:
    if (ctx->pc == 0x207614u) {
        ctx->pc = 0x207614u;
            // 0x207614: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x207618u;
        goto label_207618;
    }
    ctx->pc = 0x207610u;
    SET_GPR_U32(ctx, 31, 0x207618u);
    ctx->pc = 0x207614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207610u;
            // 0x207614: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8800u;
    if (runtime->hasFunction(0x1D8800u)) {
        auto targetFn = runtime->lookupFunction(0x1D8800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207618u; }
        if (ctx->pc != 0x207618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1d8800_0x1d89f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207618u; }
        if (ctx->pc != 0x207618u) { return; }
    }
    ctx->pc = 0x207618u;
label_207618:
    // 0x207618: 0x5440002b  bnel        $v0, $zero, . + 4 + (0x2B << 2)
label_20761c:
    if (ctx->pc == 0x20761Cu) {
        ctx->pc = 0x20761Cu;
            // 0x20761c: 0x8245001e  lb          $a1, 0x1E($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 30)));
        ctx->pc = 0x207620u;
        goto label_207620;
    }
    ctx->pc = 0x207618u;
    {
        const bool branch_taken_0x207618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x207618) {
            ctx->pc = 0x20761Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x207618u;
            // 0x20761c: 0x8245001e  lb          $a1, 0x1E($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 30)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2076C8u;
            goto label_2076c8;
        }
    }
    ctx->pc = 0x207620u;
label_207620:
    // 0x207620: 0x8243001c  lb          $v1, 0x1C($s2)
    ctx->pc = 0x207620u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 28)));
label_207624:
    // 0x207624: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x207624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_207628:
    // 0x207628: 0x146200e3  bne         $v1, $v0, . + 4 + (0xE3 << 2)
label_20762c:
    if (ctx->pc == 0x20762Cu) {
        ctx->pc = 0x20762Cu;
            // 0x20762c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x207630u;
        goto label_207630;
    }
    ctx->pc = 0x207628u;
    {
        const bool branch_taken_0x207628 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20762Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207628u;
            // 0x20762c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207628) {
            ctx->pc = 0x2079B8u;
            goto label_2079b8;
        }
    }
    ctx->pc = 0x207630u;
label_207630:
    // 0x207630: 0x520000e2  beql        $s0, $zero, . + 4 + (0xE2 << 2)
label_207634:
    if (ctx->pc == 0x207634u) {
        ctx->pc = 0x207634u;
            // 0x207634: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x207638u;
        goto label_207638;
    }
    ctx->pc = 0x207630u;
    {
        const bool branch_taken_0x207630 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x207630) {
            ctx->pc = 0x207634u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x207630u;
            // 0x207634: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2079BCu;
            goto label_2079bc;
        }
    }
    ctx->pc = 0x207638u;
label_207638:
    // 0x207638: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x207638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_20763c:
    // 0x20763c: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x20763cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_207640:
    // 0x207640: 0x431826  xor         $v1, $v0, $v1
    ctx->pc = 0x207640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_207644:
    // 0x207644: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x207644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_207648:
    // 0x207648: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x207648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_20764c:
    // 0x20764c: 0x104000d9  beqz        $v0, . + 4 + (0xD9 << 2)
label_207650:
    if (ctx->pc == 0x207650u) {
        ctx->pc = 0x207650u;
            // 0x207650: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->pc = 0x207654u;
        goto label_207654;
    }
    ctx->pc = 0x20764Cu;
    {
        const bool branch_taken_0x20764c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20764Cu;
            // 0x207650: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20764c) {
            ctx->pc = 0x2079B4u;
            goto label_2079b4;
        }
    }
    ctx->pc = 0x207654u;
label_207654:
    // 0x207654: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x207654u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
label_207658:
    // 0x207658: 0x8c43ed58  lw          $v1, -0x12A8($v0)
    ctx->pc = 0x207658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962520)));
label_20765c:
    // 0x20765c: 0x8ca2e43c  lw          $v0, -0x1BC4($a1)
    ctx->pc = 0x20765cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960188)));
label_207660:
    // 0x207660: 0x104300d4  beq         $v0, $v1, . + 4 + (0xD4 << 2)
label_207664:
    if (ctx->pc == 0x207664u) {
        ctx->pc = 0x207664u;
            // 0x207664: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->pc = 0x207668u;
        goto label_207668;
    }
    ctx->pc = 0x207660u;
    {
        const bool branch_taken_0x207660 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x207664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207660u;
            // 0x207664: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207660) {
            ctx->pc = 0x2079B4u;
            goto label_2079b4;
        }
    }
    ctx->pc = 0x207668u;
label_207668:
    // 0x207668: 0x8e240048  lw          $a0, 0x48($s1)
    ctx->pc = 0x207668u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_20766c:
    // 0x20766c: 0xaca3e43c  sw          $v1, -0x1BC4($a1)
    ctx->pc = 0x20766cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294960188), GPR_U32(ctx, 3));
label_207670:
    // 0x207670: 0x8c43e84c  lw          $v1, -0x17B4($v0)
    ctx->pc = 0x207670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
label_207674:
    // 0x207674: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x207674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_207678:
    // 0x207678: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x207678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_20767c:
    // 0x20767c: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x20767cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_207680:
    // 0x207680: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x207680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_207684:
    // 0x207684: 0x40f809  jalr        $v0
label_207688:
    if (ctx->pc == 0x207688u) {
        ctx->pc = 0x207688u;
            // 0x207688: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->pc = 0x20768Cu;
        goto label_20768c;
    }
    ctx->pc = 0x207684u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20768Cu);
        ctx->pc = 0x207688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207684u;
            // 0x207688: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20768Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2072A0u: goto label_2072a0;
            case 0x2072A4u: goto label_2072a4;
            case 0x2072A8u: goto label_2072a8;
            case 0x2072ACu: goto label_2072ac;
            case 0x2072B0u: goto label_2072b0;
            case 0x2072B4u: goto label_2072b4;
            case 0x2072B8u: goto label_2072b8;
            case 0x2072BCu: goto label_2072bc;
            case 0x2072C0u: goto label_2072c0;
            case 0x2072C4u: goto label_2072c4;
            case 0x2072C8u: goto label_2072c8;
            case 0x2072CCu: goto label_2072cc;
            case 0x2072D0u: goto label_2072d0;
            case 0x2072D4u: goto label_2072d4;
            case 0x2072D8u: goto label_2072d8;
            case 0x2072DCu: goto label_2072dc;
            case 0x2072E0u: goto label_2072e0;
            case 0x2072E4u: goto label_2072e4;
            case 0x2072E8u: goto label_2072e8;
            case 0x2072ECu: goto label_2072ec;
            case 0x2072F0u: goto label_2072f0;
            case 0x2072F4u: goto label_2072f4;
            case 0x2072F8u: goto label_2072f8;
            case 0x2072FCu: goto label_2072fc;
            case 0x207300u: goto label_207300;
            case 0x207304u: goto label_207304;
            case 0x207308u: goto label_207308;
            case 0x20730Cu: goto label_20730c;
            case 0x207310u: goto label_207310;
            case 0x207314u: goto label_207314;
            case 0x207318u: goto label_207318;
            case 0x20731Cu: goto label_20731c;
            case 0x207320u: goto label_207320;
            case 0x207324u: goto label_207324;
            case 0x207328u: goto label_207328;
            case 0x20732Cu: goto label_20732c;
            case 0x207330u: goto label_207330;
            case 0x207334u: goto label_207334;
            case 0x207338u: goto label_207338;
            case 0x20733Cu: goto label_20733c;
            case 0x207340u: goto label_207340;
            case 0x207344u: goto label_207344;
            case 0x207348u: goto label_207348;
            case 0x20734Cu: goto label_20734c;
            case 0x207350u: goto label_207350;
            case 0x207354u: goto label_207354;
            case 0x207358u: goto label_207358;
            case 0x20735Cu: goto label_20735c;
            case 0x207360u: goto label_207360;
            case 0x207364u: goto label_207364;
            case 0x207368u: goto label_207368;
            case 0x20736Cu: goto label_20736c;
            case 0x207370u: goto label_207370;
            case 0x207374u: goto label_207374;
            case 0x207378u: goto label_207378;
            case 0x20737Cu: goto label_20737c;
            case 0x207380u: goto label_207380;
            case 0x207384u: goto label_207384;
            case 0x207388u: goto label_207388;
            case 0x20738Cu: goto label_20738c;
            case 0x207390u: goto label_207390;
            case 0x207394u: goto label_207394;
            case 0x207398u: goto label_207398;
            case 0x20739Cu: goto label_20739c;
            case 0x2073A0u: goto label_2073a0;
            case 0x2073A4u: goto label_2073a4;
            case 0x2073A8u: goto label_2073a8;
            case 0x2073ACu: goto label_2073ac;
            case 0x2073B0u: goto label_2073b0;
            case 0x2073B4u: goto label_2073b4;
            case 0x2073B8u: goto label_2073b8;
            case 0x2073BCu: goto label_2073bc;
            case 0x2073C0u: goto label_2073c0;
            case 0x2073C4u: goto label_2073c4;
            case 0x2073C8u: goto label_2073c8;
            case 0x2073CCu: goto label_2073cc;
            case 0x2073D0u: goto label_2073d0;
            case 0x2073D4u: goto label_2073d4;
            case 0x2073D8u: goto label_2073d8;
            case 0x2073DCu: goto label_2073dc;
            case 0x2073E0u: goto label_2073e0;
            case 0x2073E4u: goto label_2073e4;
            case 0x2073E8u: goto label_2073e8;
            case 0x2073ECu: goto label_2073ec;
            case 0x2073F0u: goto label_2073f0;
            case 0x2073F4u: goto label_2073f4;
            case 0x2073F8u: goto label_2073f8;
            case 0x2073FCu: goto label_2073fc;
            case 0x207400u: goto label_207400;
            case 0x207404u: goto label_207404;
            case 0x207408u: goto label_207408;
            case 0x20740Cu: goto label_20740c;
            case 0x207410u: goto label_207410;
            case 0x207414u: goto label_207414;
            case 0x207418u: goto label_207418;
            case 0x20741Cu: goto label_20741c;
            case 0x207420u: goto label_207420;
            case 0x207424u: goto label_207424;
            case 0x207428u: goto label_207428;
            case 0x20742Cu: goto label_20742c;
            case 0x207430u: goto label_207430;
            case 0x207434u: goto label_207434;
            case 0x207438u: goto label_207438;
            case 0x20743Cu: goto label_20743c;
            case 0x207440u: goto label_207440;
            case 0x207444u: goto label_207444;
            case 0x207448u: goto label_207448;
            case 0x20744Cu: goto label_20744c;
            case 0x207450u: goto label_207450;
            case 0x207454u: goto label_207454;
            case 0x207458u: goto label_207458;
            case 0x20745Cu: goto label_20745c;
            case 0x207460u: goto label_207460;
            case 0x207464u: goto label_207464;
            case 0x207468u: goto label_207468;
            case 0x20746Cu: goto label_20746c;
            case 0x207470u: goto label_207470;
            case 0x207474u: goto label_207474;
            case 0x207478u: goto label_207478;
            case 0x20747Cu: goto label_20747c;
            case 0x207480u: goto label_207480;
            case 0x207484u: goto label_207484;
            case 0x207488u: goto label_207488;
            case 0x20748Cu: goto label_20748c;
            case 0x207490u: goto label_207490;
            case 0x207494u: goto label_207494;
            case 0x207498u: goto label_207498;
            case 0x20749Cu: goto label_20749c;
            case 0x2074A0u: goto label_2074a0;
            case 0x2074A4u: goto label_2074a4;
            case 0x2074A8u: goto label_2074a8;
            case 0x2074ACu: goto label_2074ac;
            case 0x2074B0u: goto label_2074b0;
            case 0x2074B4u: goto label_2074b4;
            case 0x2074B8u: goto label_2074b8;
            case 0x2074BCu: goto label_2074bc;
            case 0x2074C0u: goto label_2074c0;
            case 0x2074C4u: goto label_2074c4;
            case 0x2074C8u: goto label_2074c8;
            case 0x2074CCu: goto label_2074cc;
            case 0x2074D0u: goto label_2074d0;
            case 0x2074D4u: goto label_2074d4;
            case 0x2074D8u: goto label_2074d8;
            case 0x2074DCu: goto label_2074dc;
            case 0x2074E0u: goto label_2074e0;
            case 0x2074E4u: goto label_2074e4;
            case 0x2074E8u: goto label_2074e8;
            case 0x2074ECu: goto label_2074ec;
            case 0x2074F0u: goto label_2074f0;
            case 0x2074F4u: goto label_2074f4;
            case 0x2074F8u: goto label_2074f8;
            case 0x2074FCu: goto label_2074fc;
            case 0x207500u: goto label_207500;
            case 0x207504u: goto label_207504;
            case 0x207508u: goto label_207508;
            case 0x20750Cu: goto label_20750c;
            case 0x207510u: goto label_207510;
            case 0x207514u: goto label_207514;
            case 0x207518u: goto label_207518;
            case 0x20751Cu: goto label_20751c;
            case 0x207520u: goto label_207520;
            case 0x207524u: goto label_207524;
            case 0x207528u: goto label_207528;
            case 0x20752Cu: goto label_20752c;
            case 0x207530u: goto label_207530;
            case 0x207534u: goto label_207534;
            case 0x207538u: goto label_207538;
            case 0x20753Cu: goto label_20753c;
            case 0x207540u: goto label_207540;
            case 0x207544u: goto label_207544;
            case 0x207548u: goto label_207548;
            case 0x20754Cu: goto label_20754c;
            case 0x207550u: goto label_207550;
            case 0x207554u: goto label_207554;
            case 0x207558u: goto label_207558;
            case 0x20755Cu: goto label_20755c;
            case 0x207560u: goto label_207560;
            case 0x207564u: goto label_207564;
            case 0x207568u: goto label_207568;
            case 0x20756Cu: goto label_20756c;
            case 0x207570u: goto label_207570;
            case 0x207574u: goto label_207574;
            case 0x207578u: goto label_207578;
            case 0x20757Cu: goto label_20757c;
            case 0x207580u: goto label_207580;
            case 0x207584u: goto label_207584;
            case 0x207588u: goto label_207588;
            case 0x20758Cu: goto label_20758c;
            case 0x207590u: goto label_207590;
            case 0x207594u: goto label_207594;
            case 0x207598u: goto label_207598;
            case 0x20759Cu: goto label_20759c;
            case 0x2075A0u: goto label_2075a0;
            case 0x2075A4u: goto label_2075a4;
            case 0x2075A8u: goto label_2075a8;
            case 0x2075ACu: goto label_2075ac;
            case 0x2075B0u: goto label_2075b0;
            case 0x2075B4u: goto label_2075b4;
            case 0x2075B8u: goto label_2075b8;
            case 0x2075BCu: goto label_2075bc;
            case 0x2075C0u: goto label_2075c0;
            case 0x2075C4u: goto label_2075c4;
            case 0x2075C8u: goto label_2075c8;
            case 0x2075CCu: goto label_2075cc;
            case 0x2075D0u: goto label_2075d0;
            case 0x2075D4u: goto label_2075d4;
            case 0x2075D8u: goto label_2075d8;
            case 0x2075DCu: goto label_2075dc;
            case 0x2075E0u: goto label_2075e0;
            case 0x2075E4u: goto label_2075e4;
            case 0x2075E8u: goto label_2075e8;
            case 0x2075ECu: goto label_2075ec;
            case 0x2075F0u: goto label_2075f0;
            case 0x2075F4u: goto label_2075f4;
            case 0x2075F8u: goto label_2075f8;
            case 0x2075FCu: goto label_2075fc;
            case 0x207600u: goto label_207600;
            case 0x207604u: goto label_207604;
            case 0x207608u: goto label_207608;
            case 0x20760Cu: goto label_20760c;
            case 0x207610u: goto label_207610;
            case 0x207614u: goto label_207614;
            case 0x207618u: goto label_207618;
            case 0x20761Cu: goto label_20761c;
            case 0x207620u: goto label_207620;
            case 0x207624u: goto label_207624;
            case 0x207628u: goto label_207628;
            case 0x20762Cu: goto label_20762c;
            case 0x207630u: goto label_207630;
            case 0x207634u: goto label_207634;
            case 0x207638u: goto label_207638;
            case 0x20763Cu: goto label_20763c;
            case 0x207640u: goto label_207640;
            case 0x207644u: goto label_207644;
            case 0x207648u: goto label_207648;
            case 0x20764Cu: goto label_20764c;
            case 0x207650u: goto label_207650;
            case 0x207654u: goto label_207654;
            case 0x207658u: goto label_207658;
            case 0x20765Cu: goto label_20765c;
            case 0x207660u: goto label_207660;
            case 0x207664u: goto label_207664;
            case 0x207668u: goto label_207668;
            case 0x20766Cu: goto label_20766c;
            case 0x207670u: goto label_207670;
            case 0x207674u: goto label_207674;
            case 0x207678u: goto label_207678;
            case 0x20767Cu: goto label_20767c;
            case 0x207680u: goto label_207680;
            case 0x207684u: goto label_207684;
            case 0x207688u: goto label_207688;
            case 0x20768Cu: goto label_20768c;
            case 0x207690u: goto label_207690;
            case 0x207694u: goto label_207694;
            case 0x207698u: goto label_207698;
            case 0x20769Cu: goto label_20769c;
            case 0x2076A0u: goto label_2076a0;
            case 0x2076A4u: goto label_2076a4;
            case 0x2076A8u: goto label_2076a8;
            case 0x2076ACu: goto label_2076ac;
            case 0x2076B0u: goto label_2076b0;
            case 0x2076B4u: goto label_2076b4;
            case 0x2076B8u: goto label_2076b8;
            case 0x2076BCu: goto label_2076bc;
            case 0x2076C0u: goto label_2076c0;
            case 0x2076C4u: goto label_2076c4;
            case 0x2076C8u: goto label_2076c8;
            case 0x2076CCu: goto label_2076cc;
            case 0x2076D0u: goto label_2076d0;
            case 0x2076D4u: goto label_2076d4;
            case 0x2076D8u: goto label_2076d8;
            case 0x2076DCu: goto label_2076dc;
            case 0x2076E0u: goto label_2076e0;
            case 0x2076E4u: goto label_2076e4;
            case 0x2076E8u: goto label_2076e8;
            case 0x2076ECu: goto label_2076ec;
            case 0x2076F0u: goto label_2076f0;
            case 0x2076F4u: goto label_2076f4;
            case 0x2076F8u: goto label_2076f8;
            case 0x2076FCu: goto label_2076fc;
            case 0x207700u: goto label_207700;
            case 0x207704u: goto label_207704;
            case 0x207708u: goto label_207708;
            case 0x20770Cu: goto label_20770c;
            case 0x207710u: goto label_207710;
            case 0x207714u: goto label_207714;
            case 0x207718u: goto label_207718;
            case 0x20771Cu: goto label_20771c;
            case 0x207720u: goto label_207720;
            case 0x207724u: goto label_207724;
            case 0x207728u: goto label_207728;
            case 0x20772Cu: goto label_20772c;
            case 0x207730u: goto label_207730;
            case 0x207734u: goto label_207734;
            case 0x207738u: goto label_207738;
            case 0x20773Cu: goto label_20773c;
            case 0x207740u: goto label_207740;
            case 0x207744u: goto label_207744;
            case 0x207748u: goto label_207748;
            case 0x20774Cu: goto label_20774c;
            case 0x207750u: goto label_207750;
            case 0x207754u: goto label_207754;
            case 0x207758u: goto label_207758;
            case 0x20775Cu: goto label_20775c;
            case 0x207760u: goto label_207760;
            case 0x207764u: goto label_207764;
            case 0x207768u: goto label_207768;
            case 0x20776Cu: goto label_20776c;
            case 0x207770u: goto label_207770;
            case 0x207774u: goto label_207774;
            case 0x207778u: goto label_207778;
            case 0x20777Cu: goto label_20777c;
            case 0x207780u: goto label_207780;
            case 0x207784u: goto label_207784;
            case 0x207788u: goto label_207788;
            case 0x20778Cu: goto label_20778c;
            case 0x207790u: goto label_207790;
            case 0x207794u: goto label_207794;
            case 0x207798u: goto label_207798;
            case 0x20779Cu: goto label_20779c;
            case 0x2077A0u: goto label_2077a0;
            case 0x2077A4u: goto label_2077a4;
            case 0x2077A8u: goto label_2077a8;
            case 0x2077ACu: goto label_2077ac;
            case 0x2077B0u: goto label_2077b0;
            case 0x2077B4u: goto label_2077b4;
            case 0x2077B8u: goto label_2077b8;
            case 0x2077BCu: goto label_2077bc;
            case 0x2077C0u: goto label_2077c0;
            case 0x2077C4u: goto label_2077c4;
            case 0x2077C8u: goto label_2077c8;
            case 0x2077CCu: goto label_2077cc;
            case 0x2077D0u: goto label_2077d0;
            case 0x2077D4u: goto label_2077d4;
            case 0x2077D8u: goto label_2077d8;
            case 0x2077DCu: goto label_2077dc;
            case 0x2077E0u: goto label_2077e0;
            case 0x2077E4u: goto label_2077e4;
            case 0x2077E8u: goto label_2077e8;
            case 0x2077ECu: goto label_2077ec;
            case 0x2077F0u: goto label_2077f0;
            case 0x2077F4u: goto label_2077f4;
            case 0x2077F8u: goto label_2077f8;
            case 0x2077FCu: goto label_2077fc;
            case 0x207800u: goto label_207800;
            case 0x207804u: goto label_207804;
            case 0x207808u: goto label_207808;
            case 0x20780Cu: goto label_20780c;
            case 0x207810u: goto label_207810;
            case 0x207814u: goto label_207814;
            case 0x207818u: goto label_207818;
            case 0x20781Cu: goto label_20781c;
            case 0x207820u: goto label_207820;
            case 0x207824u: goto label_207824;
            case 0x207828u: goto label_207828;
            case 0x20782Cu: goto label_20782c;
            case 0x207830u: goto label_207830;
            case 0x207834u: goto label_207834;
            case 0x207838u: goto label_207838;
            case 0x20783Cu: goto label_20783c;
            case 0x207840u: goto label_207840;
            case 0x207844u: goto label_207844;
            case 0x207848u: goto label_207848;
            case 0x20784Cu: goto label_20784c;
            case 0x207850u: goto label_207850;
            case 0x207854u: goto label_207854;
            case 0x207858u: goto label_207858;
            case 0x20785Cu: goto label_20785c;
            case 0x207860u: goto label_207860;
            case 0x207864u: goto label_207864;
            case 0x207868u: goto label_207868;
            case 0x20786Cu: goto label_20786c;
            case 0x207870u: goto label_207870;
            case 0x207874u: goto label_207874;
            case 0x207878u: goto label_207878;
            case 0x20787Cu: goto label_20787c;
            case 0x207880u: goto label_207880;
            case 0x207884u: goto label_207884;
            case 0x207888u: goto label_207888;
            case 0x20788Cu: goto label_20788c;
            case 0x207890u: goto label_207890;
            case 0x207894u: goto label_207894;
            case 0x207898u: goto label_207898;
            case 0x20789Cu: goto label_20789c;
            case 0x2078A0u: goto label_2078a0;
            case 0x2078A4u: goto label_2078a4;
            case 0x2078A8u: goto label_2078a8;
            case 0x2078ACu: goto label_2078ac;
            case 0x2078B0u: goto label_2078b0;
            case 0x2078B4u: goto label_2078b4;
            case 0x2078B8u: goto label_2078b8;
            case 0x2078BCu: goto label_2078bc;
            case 0x2078C0u: goto label_2078c0;
            case 0x2078C4u: goto label_2078c4;
            case 0x2078C8u: goto label_2078c8;
            case 0x2078CCu: goto label_2078cc;
            case 0x2078D0u: goto label_2078d0;
            case 0x2078D4u: goto label_2078d4;
            case 0x2078D8u: goto label_2078d8;
            case 0x2078DCu: goto label_2078dc;
            case 0x2078E0u: goto label_2078e0;
            case 0x2078E4u: goto label_2078e4;
            case 0x2078E8u: goto label_2078e8;
            case 0x2078ECu: goto label_2078ec;
            case 0x2078F0u: goto label_2078f0;
            case 0x2078F4u: goto label_2078f4;
            case 0x2078F8u: goto label_2078f8;
            case 0x2078FCu: goto label_2078fc;
            case 0x207900u: goto label_207900;
            case 0x207904u: goto label_207904;
            case 0x207908u: goto label_207908;
            case 0x20790Cu: goto label_20790c;
            case 0x207910u: goto label_207910;
            case 0x207914u: goto label_207914;
            case 0x207918u: goto label_207918;
            case 0x20791Cu: goto label_20791c;
            case 0x207920u: goto label_207920;
            case 0x207924u: goto label_207924;
            case 0x207928u: goto label_207928;
            case 0x20792Cu: goto label_20792c;
            case 0x207930u: goto label_207930;
            case 0x207934u: goto label_207934;
            case 0x207938u: goto label_207938;
            case 0x20793Cu: goto label_20793c;
            case 0x207940u: goto label_207940;
            case 0x207944u: goto label_207944;
            case 0x207948u: goto label_207948;
            case 0x20794Cu: goto label_20794c;
            case 0x207950u: goto label_207950;
            case 0x207954u: goto label_207954;
            case 0x207958u: goto label_207958;
            case 0x20795Cu: goto label_20795c;
            case 0x207960u: goto label_207960;
            case 0x207964u: goto label_207964;
            case 0x207968u: goto label_207968;
            case 0x20796Cu: goto label_20796c;
            case 0x207970u: goto label_207970;
            case 0x207974u: goto label_207974;
            case 0x207978u: goto label_207978;
            case 0x20797Cu: goto label_20797c;
            case 0x207980u: goto label_207980;
            case 0x207984u: goto label_207984;
            case 0x207988u: goto label_207988;
            case 0x20798Cu: goto label_20798c;
            case 0x207990u: goto label_207990;
            case 0x207994u: goto label_207994;
            case 0x207998u: goto label_207998;
            case 0x20799Cu: goto label_20799c;
            case 0x2079A0u: goto label_2079a0;
            case 0x2079A4u: goto label_2079a4;
            case 0x2079A8u: goto label_2079a8;
            case 0x2079ACu: goto label_2079ac;
            case 0x2079B0u: goto label_2079b0;
            case 0x2079B4u: goto label_2079b4;
            case 0x2079B8u: goto label_2079b8;
            case 0x2079BCu: goto label_2079bc;
            case 0x2079C0u: goto label_2079c0;
            case 0x2079C4u: goto label_2079c4;
            case 0x2079C8u: goto label_2079c8;
            case 0x2079CCu: goto label_2079cc;
            case 0x2079D0u: goto label_2079d0;
            case 0x2079D4u: goto label_2079d4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20768Cu; }
            if (ctx->pc != 0x20768Cu) { return; }
        }
        }
    }
    ctx->pc = 0x20768Cu;
label_20768c:
    // 0x20768c: 0x8c440088  lw          $a0, 0x88($v0)
    ctx->pc = 0x20768cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
label_207690:
    // 0x207690: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x207690u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
label_207694:
    // 0x207694: 0xc061a06  jal         func_186818
label_207698:
    if (ctx->pc == 0x207698u) {
        ctx->pc = 0x207698u;
            // 0x207698: 0x24a53938  addiu       $a1, $a1, 0x3938 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14648));
        ctx->pc = 0x20769Cu;
        goto label_20769c;
    }
    ctx->pc = 0x207694u;
    SET_GPR_U32(ctx, 31, 0x20769Cu);
    ctx->pc = 0x207698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x207694u;
            // 0x207698: 0x24a53938  addiu       $a1, $a1, 0x3938 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186818u;
    if (runtime->hasFunction(0x186818u)) {
        auto targetFn = runtime->lookupFunction(0x186818u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20769Cu; }
        if (ctx->pc != 0x20769Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00186818_0x186818(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20769Cu; }
        if (ctx->pc != 0x20769Cu) { return; }
    }
    ctx->pc = 0x20769Cu;
label_20769c:
    // 0x20769c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20769cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2076a0:
    // 0x2076a0: 0x10a000c5  beqz        $a1, . + 4 + (0xC5 << 2)
label_2076a4:
    if (ctx->pc == 0x2076A4u) {
        ctx->pc = 0x2076A4u;
            // 0x2076a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2076A8u;
        goto label_2076a8;
    }
    ctx->pc = 0x2076A0u;
    {
        const bool branch_taken_0x2076a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2076A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2076A0u;
            // 0x2076a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2076a0) {
            ctx->pc = 0x2079B8u;
            goto label_2079b8;
        }
    }
    ctx->pc = 0x2076A8u;
label_2076a8:
    // 0x2076a8: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x2076a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_2076ac:
    // 0x2076ac: 0xc05c294  jal         func_170A50
label_2076b0:
    if (ctx->pc == 0x2076B0u) {
        ctx->pc = 0x2076B0u;
            // 0x2076b0: 0x8c4401a0  lw          $a0, 0x1A0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 416)));
        ctx->pc = 0x2076B4u;
        goto label_2076b4;
    }
    ctx->pc = 0x2076ACu;
    SET_GPR_U32(ctx, 31, 0x2076B4u);
    ctx->pc = 0x2076B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2076ACu;
            // 0x2076b0: 0x8c4401a0  lw          $a0, 0x1A0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 416)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170A50u;
    if (runtime->hasFunction(0x170A50u)) {
        auto targetFn = runtime->lookupFunction(0x170A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2076B4u; }
        if (ctx->pc != 0x2076B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170A50_0x170a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2076B4u; }
        if (ctx->pc != 0x2076B4u) { return; }
    }
    ctx->pc = 0x2076B4u;
label_2076b4:
    // 0x2076b4: 0x100000c0  b           . + 4 + (0xC0 << 2)
label_2076b8:
    if (ctx->pc == 0x2076B8u) {
        ctx->pc = 0x2076B8u;
            // 0x2076b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2076BCu;
        goto label_2076bc;
    }
    ctx->pc = 0x2076B4u;
    {
        const bool branch_taken_0x2076b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2076B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2076B4u;
            // 0x2076b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2076b4) {
            ctx->pc = 0x2079B8u;
            goto label_2079b8;
        }
    }
    ctx->pc = 0x2076BCu;
label_2076bc:
    // 0x2076bc: 0x0  nop
    ctx->pc = 0x2076bcu;
    // NOP
label_2076c0:
    // 0x2076c0: 0x8245001e  lb          $a1, 0x1E($s2)
    ctx->pc = 0x2076c0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 30)));
label_2076c4:
    // 0x2076c4: 0x0  nop
    ctx->pc = 0x2076c4u;
    // NOP
label_2076c8:
    // 0x2076c8: 0x24a2fff7  addiu       $v0, $a1, -0x9
    ctx->pc = 0x2076c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967287));
label_2076cc:
    // 0x2076cc: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x2076ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_2076d0:
    // 0x2076d0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2076d4:
    if (ctx->pc == 0x2076D4u) {
        ctx->pc = 0x2076D4u;
            // 0x2076d4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->pc = 0x2076D8u;
        goto label_2076d8;
    }
    ctx->pc = 0x2076D0u;
    {
        const bool branch_taken_0x2076d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2076D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2076D0u;
            // 0x2076d4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2076d0) {
            ctx->pc = 0x207708u;
            goto label_207708;
        }
    }
    ctx->pc = 0x2076D8u;
label_2076d8:
    // 0x2076d8: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x2076d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
label_2076dc:
    // 0x2076dc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2076dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2076e0:
    // 0x2076e0: 0x784200e0  lq          $v0, 0xE0($v0)
    ctx->pc = 0x2076e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 224)));
label_2076e4:
    // 0x2076e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2076e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2076e8:
    // 0x2076e8: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x2076e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_2076ec:
    // 0x2076ec: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x2076ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_2076f0:
    // 0x2076f0: 0x8c42e2a4  lw          $v0, -0x1D5C($v0)
    ctx->pc = 0x2076f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959780)));
label_2076f4:
    // 0x2076f4: 0x84420004  lh          $v0, 0x4($v0)
    ctx->pc = 0x2076f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
label_2076f8:
    // 0x2076f8: 0x10430007  beq         $v0, $v1, . + 4 + (0x7 << 2)
label_2076fc:
    if (ctx->pc == 0x2076FCu) {
        ctx->pc = 0x2076FCu;
            // 0x2076fc: 0x24a5fff8  addiu       $a1, $a1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
        ctx->pc = 0x207700u;
        goto label_207700;
    }
    ctx->pc = 0x2076F8u;
    {
        const bool branch_taken_0x2076f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2076FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2076F8u;
            // 0x2076fc: 0x24a5fff8  addiu       $a1, $a1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2076f8) {
            ctx->pc = 0x207718u;
            goto label_207718;
        }
    }
    ctx->pc = 0x207700u;
label_207700:
    // 0x207700: 0x100000ad  b           . + 4 + (0xAD << 2)
label_207704:
    if (ctx->pc == 0x207704u) {
        ctx->pc = 0x207704u;
            // 0x207704: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x207708u;
        goto label_207708;
    }
    ctx->pc = 0x207700u;
    {
        const bool branch_taken_0x207700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207700u;
            // 0x207704: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207700) {
            ctx->pc = 0x2079B8u;
            goto label_2079b8;
        }
    }
    ctx->pc = 0x207708u;
label_207708:
    // 0x207708: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x207708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
label_20770c:
    // 0x20770c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x20770cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_207710:
    // 0x207710: 0x784200d0  lq          $v0, 0xD0($v0)
    ctx->pc = 0x207710u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 208)));
label_207714:
    // 0x207714: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x207714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
label_207718:
    // 0x207718: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_20771c:
    if (ctx->pc == 0x20771Cu) {
        ctx->pc = 0x20771Cu;
            // 0x20771c: 0xc6610050  lwc1        $f1, 0x50($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->pc = 0x207720u;
        goto label_207720;
    }
    ctx->pc = 0x207718u;
    {
        const bool branch_taken_0x207718 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x20771Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207718u;
            // 0x20771c: 0xc6610050  lwc1        $f1, 0x50($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x207718) {
            ctx->pc = 0x207730u;
            goto label_207730;
        }
    }
    ctx->pc = 0x207720u;
label_207720:
    // 0x207720: 0xdba10050  lqc2        $vf1, 0x50($sp)
    ctx->pc = 0x207720u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_207724:
    // 0x207724: 0x4a21086c  vsub.w      $vf1, $vf1, $vf1
    ctx->pc = 0x207724u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_207728:
    // 0x207728: 0xfba10050  sqc2        $vf1, 0x50($sp)
    ctx->pc = 0x207728u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[1]));
label_20772c:
    // 0x20772c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x20772cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_207730:
    // 0x207730: 0x2ca20010  sltiu       $v0, $a1, 0x10
    ctx->pc = 0x207730u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_207734:
    // 0x207734: 0x1040009f  beqz        $v0, . + 4 + (0x9F << 2)
label_207738:
    if (ctx->pc == 0x207738u) {
        ctx->pc = 0x207738u;
            // 0x207738: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->pc = 0x20773Cu;
        goto label_20773c;
    }
    ctx->pc = 0x207734u;
    {
        const bool branch_taken_0x207734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207734u;
            // 0x207738: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207734) {
            ctx->pc = 0x2079B4u;
            goto label_2079b4;
        }
    }
    ctx->pc = 0x20773Cu;
label_20773c:
    // 0x20773c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x20773cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_207740:
    // 0x207740: 0x24427bc0  addiu       $v0, $v0, 0x7BC0
    ctx->pc = 0x207740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31680));
label_207744:
    // 0x207744: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x207744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_207748:
    // 0x207748: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x207748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20774c:
    // 0x20774c: 0x400008  jr          $v0
label_207750:
    if (ctx->pc == 0x207750u) {
        ctx->pc = 0x207754u;
        goto label_207754;
    }
    ctx->pc = 0x20774Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x207754u: goto label_207754;
            case 0x20775Cu: goto label_20775c;
            case 0x207788u: goto label_207788;
            case 0x2077C0u: goto label_2077c0;
            case 0x207840u: goto label_207840;
            case 0x2078B8u: goto label_2078b8;
            case 0x207900u: goto label_207900;
            case 0x207978u: goto label_207978;
            case 0x20798Cu: goto label_20798c;
            case 0x2079A0u: goto label_2079a0;
            case 0x2079B4u: goto label_2079b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x207754u;
label_207754:
    // 0x207754: 0x10000098  b           . + 4 + (0x98 << 2)
label_207758:
    if (ctx->pc == 0x207758u) {
        ctx->pc = 0x207758u;
            // 0x207758: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20775Cu;
        goto label_20775c;
    }
    ctx->pc = 0x207754u;
    {
        const bool branch_taken_0x207754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207754u;
            // 0x207758: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207754) {
            ctx->pc = 0x2079B8u;
            goto label_2079b8;
        }
    }
    ctx->pc = 0x20775Cu;
label_20775c:
    // 0x20775c: 0xdba20050  lqc2        $vf2, 0x50($sp)
    ctx->pc = 0x20775cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_207760:
    // 0x207760: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x207760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_207764:
    // 0x207764: 0x4b020043  vaddw.x     $vf1, $vf0, $vf2w
    ctx->pc = 0x207764u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_207768:
    // 0x207768: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x207768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_20776c:
    // 0x20776c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x20776cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_207770:
    // 0x207770: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x207770u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_207774:
    // 0x207774: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x207774u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_207778:
    // 0x207778: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x207778u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20777c:
    // 0x20777c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x20777cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_207780:
    // 0x207780: 0x1000000b  b           . + 4 + (0xB << 2)
label_207784:
    if (ctx->pc == 0x207784u) {
        ctx->pc = 0x207788u;
        goto label_207788;
    }
    ctx->pc = 0x207780u;
    {
        const bool branch_taken_0x207780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x207780) {
            ctx->pc = 0x2077B0u;
            goto label_2077b0;
        }
    }
    ctx->pc = 0x207788u;
label_207788:
    // 0x207788: 0xdba20050  lqc2        $vf2, 0x50($sp)
    ctx->pc = 0x207788u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20778c:
    // 0x20778c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20778cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_207790:
    // 0x207790: 0x4b020043  vaddw.x     $vf1, $vf0, $vf2w
    ctx->pc = 0x207790u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_207794:
    // 0x207794: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x207794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_207798:
    // 0x207798: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x207798u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_20779c:
    // 0x20779c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20779cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2077a0:
    // 0x2077a0: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2077a0u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_2077a4:
    // 0x2077a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2077a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2077a8:
    // 0x2077a8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2077a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2077ac:
    // 0x2077ac: 0x0  nop
    ctx->pc = 0x2077acu;
    // NOP
label_2077b0:
    // 0x2077b0: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
label_2077b4:
    if (ctx->pc == 0x2077B4u) {
        ctx->pc = 0x2077B4u;
            // 0x2077b4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2077B8u;
        goto label_2077b8;
    }
    ctx->pc = 0x2077B0u;
    {
        const bool branch_taken_0x2077b0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2077b0) {
            ctx->pc = 0x2077B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2077B0u;
            // 0x2077b4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2077B8u;
            goto label_2077b8;
        }
    }
    ctx->pc = 0x2077B8u;
label_2077b8:
    // 0x2077b8: 0x1000007f  b           . + 4 + (0x7F << 2)
label_2077bc:
    if (ctx->pc == 0x2077BCu) {
        ctx->pc = 0x2077BCu;
            // 0x2077bc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2077C0u;
        goto label_2077c0;
    }
    ctx->pc = 0x2077B8u;
    {
        const bool branch_taken_0x2077b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2077BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2077B8u;
            // 0x2077bc: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2077b8) {
            ctx->pc = 0x2079B8u;
            goto label_2079b8;
        }
    }
    ctx->pc = 0x2077C0u;
label_2077c0:
    // 0x2077c0: 0xdba20050  lqc2        $vf2, 0x50($sp)
    ctx->pc = 0x2077c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2077c4:
    // 0x2077c4: 0x4b020043  vaddw.x     $vf1, $vf0, $vf2w
    ctx->pc = 0x2077c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2077c8:
    // 0x2077c8: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x2077c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_2077cc:
    // 0x2077cc: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2077ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2077d0:
    // 0x2077d0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2077d0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2077d4:
    // 0x2077d4: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2077d4u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_2077d8:
    // 0x2077d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2077d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2077dc:
    // 0x2077dc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2077dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2077e0:
    // 0x2077e0: 0x0  nop
    ctx->pc = 0x2077e0u;
    // NOP
label_2077e4:
    // 0x2077e4: 0x45000074  bc1f        . + 4 + (0x74 << 2)
label_2077e8:
    if (ctx->pc == 0x2077E8u) {
        ctx->pc = 0x2077E8u;
            // 0x2077e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2077ECu;
        goto label_2077ec;
    }
    ctx->pc = 0x2077E4u;
    {
        const bool branch_taken_0x2077e4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2077E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2077E4u;
            // 0x2077e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2077e4) {
            ctx->pc = 0x2079B8u;
            goto label_2079b8;
        }
    }
    ctx->pc = 0x2077ECu;
label_2077ec:
    // 0x2077ec: 0xc0909c4  jal         func_242710
label_2077f0:
    if (ctx->pc == 0x2077F0u) {
        ctx->pc = 0x2077F0u;
            // 0x2077f0: 0x8e240048  lw          $a0, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->pc = 0x2077F4u;
        goto label_2077f4;
    }
    ctx->pc = 0x2077ECu;
    SET_GPR_U32(ctx, 31, 0x2077F4u);
    ctx->pc = 0x2077F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2077ECu;
            // 0x2077f0: 0x8e240048  lw          $a0, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242710u;
    if (runtime->hasFunction(0x242710u)) {
        auto targetFn = runtime->lookupFunction(0x242710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2077F4u; }
        if (ctx->pc != 0x2077F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242710_0x242720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2077F4u; }
        if (ctx->pc != 0x2077F4u) { return; }
    }
    ctx->pc = 0x2077F4u;
label_2077f4:
    // 0x2077f4: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2077f4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2077f8:
    // 0x2077f8: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x2077f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2077fc:
    // 0x2077fc: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x2077fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
label_207800:
    // 0x207800: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x207800u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_207804:
    // 0x207804: 0xdba10050  lqc2        $vf1, 0x50($sp)
    ctx->pc = 0x207804u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_207808:
    // 0x207808: 0x4be208aa  vmul.xyzw   $vf2, $vf1, $vf2
    ctx->pc = 0x207808u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_20780c:
    // 0x20780c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x20780cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_207810:
    // 0x207810: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x207810u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_207814:
    // 0x207814: 0x3c013f34  lui         $at, 0x3F34
    ctx->pc = 0x207814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16180 << 16));
label_207818:
    // 0x207818: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x207818u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
label_20781c:
    // 0x20781c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20781cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_207820:
    // 0x207820: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x207820u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_207824:
    // 0x207824: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x207824u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_207828:
    // 0x207828: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x207828u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20782c:
    // 0x20782c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20782cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_207830:
    // 0x207830: 0x45020061  bc1fl       . + 4 + (0x61 << 2)
label_207834:
    if (ctx->pc == 0x207834u) {
        ctx->pc = 0x207834u;
            // 0x207834: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x207838u;
        goto label_207838;
    }
    ctx->pc = 0x207830u;
    {
        const bool branch_taken_0x207830 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x207830) {
            ctx->pc = 0x207834u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x207830u;
            // 0x207834: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2079B8u;
            goto label_2079b8;
        }
    }
    ctx->pc = 0x207838u;
label_207838:
    // 0x207838: 0x10000060  b           . + 4 + (0x60 << 2)
label_20783c:
    if (ctx->pc == 0x20783Cu) {
        ctx->pc = 0x20783Cu;
            // 0x20783c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x207840u;
        goto label_207840;
    }
    ctx->pc = 0x207838u;
    {
        const bool branch_taken_0x207838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20783Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207838u;
            // 0x20783c: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207838) {
            ctx->pc = 0x2079BCu;
            goto label_2079bc;
        }
    }
    ctx->pc = 0x207840u;
label_207840:
    // 0x207840: 0xdba20050  lqc2        $vf2, 0x50($sp)
    ctx->pc = 0x207840u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_207844:
    // 0x207844: 0x4b020043  vaddw.x     $vf1, $vf0, $vf2w
    ctx->pc = 0x207844u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_207848:
    // 0x207848: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x207848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_20784c:
    // 0x20784c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x20784cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_207850:
    // 0x207850: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x207850u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_207854:
    // 0x207854: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x207854u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_207858:
    // 0x207858: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x207858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20785c:
    // 0x20785c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20785cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_207860:
    // 0x207860: 0x0  nop
    ctx->pc = 0x207860u;
    // NOP
label_207864:
    // 0x207864: 0x45000054  bc1f        . + 4 + (0x54 << 2)
label_207868:
    if (ctx->pc == 0x207868u) {
        ctx->pc = 0x207868u;
            // 0x207868: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20786Cu;
        goto label_20786c;
    }
    ctx->pc = 0x207864u;
    {
        const bool branch_taken_0x207864 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x207868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207864u;
            // 0x207868: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207864) {
            ctx->pc = 0x2079B8u;
            goto label_2079b8;
        }
    }
    ctx->pc = 0x20786Cu;
label_20786c:
    // 0x20786c: 0xc0909c4  jal         func_242710
label_207870:
    if (ctx->pc == 0x207870u) {
        ctx->pc = 0x207870u;
            // 0x207870: 0x8e240048  lw          $a0, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->pc = 0x207874u;
        goto label_207874;
    }
    ctx->pc = 0x20786Cu;
    SET_GPR_U32(ctx, 31, 0x207874u);
    ctx->pc = 0x207870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20786Cu;
            // 0x207870: 0x8e240048  lw          $a0, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242710u;
    if (runtime->hasFunction(0x242710u)) {
        auto targetFn = runtime->lookupFunction(0x242710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207874u; }
        if (ctx->pc != 0x207874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242710_0x242720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207874u; }
        if (ctx->pc != 0x207874u) { return; }
    }
    ctx->pc = 0x207874u;
label_207874:
    // 0x207874: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x207874u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_207878:
    // 0x207878: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x207878u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_20787c:
    // 0x20787c: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x20787cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
label_207880:
    // 0x207880: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x207880u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_207884:
    // 0x207884: 0xdba10050  lqc2        $vf1, 0x50($sp)
    ctx->pc = 0x207884u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_207888:
    // 0x207888: 0x4be208aa  vmul.xyzw   $vf2, $vf1, $vf2
    ctx->pc = 0x207888u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_20788c:
    // 0x20788c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x20788cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_207890:
    // 0x207890: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x207890u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_207894:
    // 0x207894: 0x3c01bf34  lui         $at, 0xBF34
    ctx->pc = 0x207894u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48948 << 16));
label_207898:
    // 0x207898: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x207898u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
label_20789c:
    // 0x20789c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20789cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2078a0:
    // 0x2078a0: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x2078a0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_2078a4:
    // 0x2078a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2078a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2078a8:
    // 0x2078a8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2078a8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2078ac:
    // 0x2078ac: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
label_2078b0:
    if (ctx->pc == 0x2078B0u) {
        ctx->pc = 0x2078B0u;
            // 0x2078b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2078B4u;
        goto label_2078b4;
    }
    ctx->pc = 0x2078ACu;
    {
        const bool branch_taken_0x2078ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2078B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2078ACu;
            // 0x2078b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2078ac) {
            ctx->pc = 0x207830u;
            runtime->cooperativeGuestYield();
            goto label_207830;
        }
    }
    ctx->pc = 0x2078B4u;
label_2078b4:
    // 0x2078b4: 0x0  nop
    ctx->pc = 0x2078b4u;
    // NOP
label_2078b8:
    // 0x2078b8: 0xdba20050  lqc2        $vf2, 0x50($sp)
    ctx->pc = 0x2078b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2078bc:
    // 0x2078bc: 0x4b020043  vaddw.x     $vf1, $vf0, $vf2w
    ctx->pc = 0x2078bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_2078c0:
    // 0x2078c0: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x2078c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_2078c4:
    // 0x2078c4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x2078c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_2078c8:
    // 0x2078c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2078c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2078cc:
    // 0x2078cc: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x2078ccu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_2078d0:
    // 0x2078d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2078d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2078d4:
    // 0x2078d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2078d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2078d8:
    // 0x2078d8: 0x0  nop
    ctx->pc = 0x2078d8u;
    // NOP
label_2078dc:
    // 0x2078dc: 0x45000036  bc1f        . + 4 + (0x36 << 2)
label_2078e0:
    if (ctx->pc == 0x2078E0u) {
        ctx->pc = 0x2078E0u;
            // 0x2078e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2078E4u;
        goto label_2078e4;
    }
    ctx->pc = 0x2078DCu;
    {
        const bool branch_taken_0x2078dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2078E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2078DCu;
            // 0x2078e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2078dc) {
            ctx->pc = 0x2079B8u;
            goto label_2079b8;
        }
    }
    ctx->pc = 0x2078E4u;
label_2078e4:
    // 0x2078e4: 0xc0909c4  jal         func_242710
label_2078e8:
    if (ctx->pc == 0x2078E8u) {
        ctx->pc = 0x2078E8u;
            // 0x2078e8: 0x8e240048  lw          $a0, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->pc = 0x2078ECu;
        goto label_2078ec;
    }
    ctx->pc = 0x2078E4u;
    SET_GPR_U32(ctx, 31, 0x2078ECu);
    ctx->pc = 0x2078E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2078E4u;
            // 0x2078e8: 0x8e240048  lw          $a0, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242710u;
    if (runtime->hasFunction(0x242710u)) {
        auto targetFn = runtime->lookupFunction(0x242710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2078ECu; }
        if (ctx->pc != 0x2078ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242710_0x242720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2078ECu; }
        if (ctx->pc != 0x2078ECu) { return; }
    }
    ctx->pc = 0x2078ECu;
label_2078ec:
    // 0x2078ec: 0xd8410020  lqc2        $vf1, 0x20($v0)
    ctx->pc = 0x2078ecu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_2078f0:
    // 0x2078f0: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x2078f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_2078f4:
    // 0x2078f4: 0x1000ffc2  b           . + 4 + (-0x3E << 2)
label_2078f8:
    if (ctx->pc == 0x2078F8u) {
        ctx->pc = 0x2078F8u;
            // 0x2078f8: 0xfba10030  sqc2        $vf1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->pc = 0x2078FCu;
        goto label_2078fc;
    }
    ctx->pc = 0x2078F4u;
    {
        const bool branch_taken_0x2078f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2078F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2078F4u;
            // 0x2078f8: 0xfba10030  sqc2        $vf1, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2078f4) {
            ctx->pc = 0x207800u;
            runtime->cooperativeGuestYield();
            goto label_207800;
        }
    }
    ctx->pc = 0x2078FCu;
label_2078fc:
    // 0x2078fc: 0x0  nop
    ctx->pc = 0x2078fcu;
    // NOP
label_207900:
    // 0x207900: 0xdba20050  lqc2        $vf2, 0x50($sp)
    ctx->pc = 0x207900u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_207904:
    // 0x207904: 0x4b020043  vaddw.x     $vf1, $vf0, $vf2w
    ctx->pc = 0x207904u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_207908:
    // 0x207908: 0x3c013f4c  lui         $at, 0x3F4C
    ctx->pc = 0x207908u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16204 << 16));
label_20790c:
    // 0x20790c: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x20790cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_207910:
    // 0x207910: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x207910u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_207914:
    // 0x207914: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x207914u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
label_207918:
    // 0x207918: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x207918u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20791c:
    // 0x20791c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x20791cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_207920:
    // 0x207920: 0x0  nop
    ctx->pc = 0x207920u;
    // NOP
label_207924:
    // 0x207924: 0x45000024  bc1f        . + 4 + (0x24 << 2)
label_207928:
    if (ctx->pc == 0x207928u) {
        ctx->pc = 0x207928u;
            // 0x207928: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20792Cu;
        goto label_20792c;
    }
    ctx->pc = 0x207924u;
    {
        const bool branch_taken_0x207924 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x207928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207924u;
            // 0x207928: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207924) {
            ctx->pc = 0x2079B8u;
            goto label_2079b8;
        }
    }
    ctx->pc = 0x20792Cu;
label_20792c:
    // 0x20792c: 0xc0909c4  jal         func_242710
label_207930:
    if (ctx->pc == 0x207930u) {
        ctx->pc = 0x207930u;
            // 0x207930: 0x8e240048  lw          $a0, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->pc = 0x207934u;
        goto label_207934;
    }
    ctx->pc = 0x20792Cu;
    SET_GPR_U32(ctx, 31, 0x207934u);
    ctx->pc = 0x207930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20792Cu;
            // 0x207930: 0x8e240048  lw          $a0, 0x48($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242710u;
    if (runtime->hasFunction(0x242710u)) {
        auto targetFn = runtime->lookupFunction(0x242710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207934u; }
        if (ctx->pc != 0x207934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242710_0x242720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x207934u; }
        if (ctx->pc != 0x207934u) { return; }
    }
    ctx->pc = 0x207934u;
label_207934:
    // 0x207934: 0xd8410020  lqc2        $vf1, 0x20($v0)
    ctx->pc = 0x207934u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_207938:
    // 0x207938: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x207938u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_20793c:
    // 0x20793c: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x20793cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
label_207940:
    // 0x207940: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x207940u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_207944:
    // 0x207944: 0xdba10050  lqc2        $vf1, 0x50($sp)
    ctx->pc = 0x207944u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_207948:
    // 0x207948: 0x4be208aa  vmul.xyzw   $vf2, $vf1, $vf2
    ctx->pc = 0x207948u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
label_20794c:
    // 0x20794c: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x20794cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_207950:
    // 0x207950: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x207950u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
label_207954:
    // 0x207954: 0x3c01bf34  lui         $at, 0xBF34
    ctx->pc = 0x207954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48948 << 16));
label_207958:
    // 0x207958: 0x3421fdf4  ori         $at, $at, 0xFDF4
    ctx->pc = 0x207958u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65012);
label_20795c:
    // 0x20795c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20795cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_207960:
    // 0x207960: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x207960u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
label_207964:
    // 0x207964: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x207964u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_207968:
    // 0x207968: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x207968u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20796c:
    // 0x20796c: 0x1000ffb0  b           . + 4 + (-0x50 << 2)
label_207970:
    if (ctx->pc == 0x207970u) {
        ctx->pc = 0x207970u;
            // 0x207970: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x207974u;
        goto label_207974;
    }
    ctx->pc = 0x20796Cu;
    {
        const bool branch_taken_0x20796c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20796Cu;
            // 0x207970: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20796c) {
            ctx->pc = 0x207830u;
            runtime->cooperativeGuestYield();
            goto label_207830;
        }
    }
    ctx->pc = 0x207974u;
label_207974:
    // 0x207974: 0x0  nop
    ctx->pc = 0x207974u;
    // NOP
label_207978:
    // 0x207978: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x207978u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
label_20797c:
    // 0x20797c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20797cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_207980:
    // 0x207980: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x207980u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_207984:
    // 0x207984: 0x1000ffaa  b           . + 4 + (-0x56 << 2)
label_207988:
    if (ctx->pc == 0x207988u) {
        ctx->pc = 0x207988u;
            // 0x207988: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20798Cu;
        goto label_20798c;
    }
    ctx->pc = 0x207984u;
    {
        const bool branch_taken_0x207984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x207988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207984u;
            // 0x207988: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207984) {
            ctx->pc = 0x207830u;
            runtime->cooperativeGuestYield();
            goto label_207830;
        }
    }
    ctx->pc = 0x20798Cu;
label_20798c:
    // 0x20798c: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x20798cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
label_207990:
    // 0x207990: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x207990u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_207994:
    // 0x207994: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x207994u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_207998:
    // 0x207998: 0x1000ffa5  b           . + 4 + (-0x5B << 2)
label_20799c:
    if (ctx->pc == 0x20799Cu) {
        ctx->pc = 0x20799Cu;
            // 0x20799c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2079A0u;
        goto label_2079a0;
    }
    ctx->pc = 0x207998u;
    {
        const bool branch_taken_0x207998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20799Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207998u;
            // 0x20799c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207998) {
            ctx->pc = 0x207830u;
            runtime->cooperativeGuestYield();
            goto label_207830;
        }
    }
    ctx->pc = 0x2079A0u;
label_2079a0:
    // 0x2079a0: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x2079a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_2079a4:
    // 0x2079a4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2079a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2079a8:
    // 0x2079a8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2079a8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2079ac:
    // 0x2079ac: 0x1000ffa0  b           . + 4 + (-0x60 << 2)
label_2079b0:
    if (ctx->pc == 0x2079B0u) {
        ctx->pc = 0x2079B0u;
            // 0x2079b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2079B4u;
        goto label_2079b4;
    }
    ctx->pc = 0x2079ACu;
    {
        const bool branch_taken_0x2079ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2079B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2079ACu;
            // 0x2079b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2079ac) {
            ctx->pc = 0x207830u;
            runtime->cooperativeGuestYield();
            goto label_207830;
        }
    }
    ctx->pc = 0x2079B4u;
label_2079b4:
    // 0x2079b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2079b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2079b8:
    // 0x2079b8: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2079b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2079bc:
    // 0x2079bc: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2079bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2079c0:
    // 0x2079c0: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2079c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2079c4:
    // 0x2079c4: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2079c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2079c8:
    // 0x2079c8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2079c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2079cc:
    // 0x2079cc: 0x3e00008  jr          $ra
label_2079d0:
    if (ctx->pc == 0x2079D0u) {
        ctx->pc = 0x2079D0u;
            // 0x2079d0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x2079D4u;
        goto label_2079d4;
    }
    ctx->pc = 0x2079CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2079D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2079CCu;
            // 0x2079d0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2072A0u: goto label_2072a0;
            case 0x2072A4u: goto label_2072a4;
            case 0x2072A8u: goto label_2072a8;
            case 0x2072ACu: goto label_2072ac;
            case 0x2072B0u: goto label_2072b0;
            case 0x2072B4u: goto label_2072b4;
            case 0x2072B8u: goto label_2072b8;
            case 0x2072BCu: goto label_2072bc;
            case 0x2072C0u: goto label_2072c0;
            case 0x2072C4u: goto label_2072c4;
            case 0x2072C8u: goto label_2072c8;
            case 0x2072CCu: goto label_2072cc;
            case 0x2072D0u: goto label_2072d0;
            case 0x2072D4u: goto label_2072d4;
            case 0x2072D8u: goto label_2072d8;
            case 0x2072DCu: goto label_2072dc;
            case 0x2072E0u: goto label_2072e0;
            case 0x2072E4u: goto label_2072e4;
            case 0x2072E8u: goto label_2072e8;
            case 0x2072ECu: goto label_2072ec;
            case 0x2072F0u: goto label_2072f0;
            case 0x2072F4u: goto label_2072f4;
            case 0x2072F8u: goto label_2072f8;
            case 0x2072FCu: goto label_2072fc;
            case 0x207300u: goto label_207300;
            case 0x207304u: goto label_207304;
            case 0x207308u: goto label_207308;
            case 0x20730Cu: goto label_20730c;
            case 0x207310u: goto label_207310;
            case 0x207314u: goto label_207314;
            case 0x207318u: goto label_207318;
            case 0x20731Cu: goto label_20731c;
            case 0x207320u: goto label_207320;
            case 0x207324u: goto label_207324;
            case 0x207328u: goto label_207328;
            case 0x20732Cu: goto label_20732c;
            case 0x207330u: goto label_207330;
            case 0x207334u: goto label_207334;
            case 0x207338u: goto label_207338;
            case 0x20733Cu: goto label_20733c;
            case 0x207340u: goto label_207340;
            case 0x207344u: goto label_207344;
            case 0x207348u: goto label_207348;
            case 0x20734Cu: goto label_20734c;
            case 0x207350u: goto label_207350;
            case 0x207354u: goto label_207354;
            case 0x207358u: goto label_207358;
            case 0x20735Cu: goto label_20735c;
            case 0x207360u: goto label_207360;
            case 0x207364u: goto label_207364;
            case 0x207368u: goto label_207368;
            case 0x20736Cu: goto label_20736c;
            case 0x207370u: goto label_207370;
            case 0x207374u: goto label_207374;
            case 0x207378u: goto label_207378;
            case 0x20737Cu: goto label_20737c;
            case 0x207380u: goto label_207380;
            case 0x207384u: goto label_207384;
            case 0x207388u: goto label_207388;
            case 0x20738Cu: goto label_20738c;
            case 0x207390u: goto label_207390;
            case 0x207394u: goto label_207394;
            case 0x207398u: goto label_207398;
            case 0x20739Cu: goto label_20739c;
            case 0x2073A0u: goto label_2073a0;
            case 0x2073A4u: goto label_2073a4;
            case 0x2073A8u: goto label_2073a8;
            case 0x2073ACu: goto label_2073ac;
            case 0x2073B0u: goto label_2073b0;
            case 0x2073B4u: goto label_2073b4;
            case 0x2073B8u: goto label_2073b8;
            case 0x2073BCu: goto label_2073bc;
            case 0x2073C0u: goto label_2073c0;
            case 0x2073C4u: goto label_2073c4;
            case 0x2073C8u: goto label_2073c8;
            case 0x2073CCu: goto label_2073cc;
            case 0x2073D0u: goto label_2073d0;
            case 0x2073D4u: goto label_2073d4;
            case 0x2073D8u: goto label_2073d8;
            case 0x2073DCu: goto label_2073dc;
            case 0x2073E0u: goto label_2073e0;
            case 0x2073E4u: goto label_2073e4;
            case 0x2073E8u: goto label_2073e8;
            case 0x2073ECu: goto label_2073ec;
            case 0x2073F0u: goto label_2073f0;
            case 0x2073F4u: goto label_2073f4;
            case 0x2073F8u: goto label_2073f8;
            case 0x2073FCu: goto label_2073fc;
            case 0x207400u: goto label_207400;
            case 0x207404u: goto label_207404;
            case 0x207408u: goto label_207408;
            case 0x20740Cu: goto label_20740c;
            case 0x207410u: goto label_207410;
            case 0x207414u: goto label_207414;
            case 0x207418u: goto label_207418;
            case 0x20741Cu: goto label_20741c;
            case 0x207420u: goto label_207420;
            case 0x207424u: goto label_207424;
            case 0x207428u: goto label_207428;
            case 0x20742Cu: goto label_20742c;
            case 0x207430u: goto label_207430;
            case 0x207434u: goto label_207434;
            case 0x207438u: goto label_207438;
            case 0x20743Cu: goto label_20743c;
            case 0x207440u: goto label_207440;
            case 0x207444u: goto label_207444;
            case 0x207448u: goto label_207448;
            case 0x20744Cu: goto label_20744c;
            case 0x207450u: goto label_207450;
            case 0x207454u: goto label_207454;
            case 0x207458u: goto label_207458;
            case 0x20745Cu: goto label_20745c;
            case 0x207460u: goto label_207460;
            case 0x207464u: goto label_207464;
            case 0x207468u: goto label_207468;
            case 0x20746Cu: goto label_20746c;
            case 0x207470u: goto label_207470;
            case 0x207474u: goto label_207474;
            case 0x207478u: goto label_207478;
            case 0x20747Cu: goto label_20747c;
            case 0x207480u: goto label_207480;
            case 0x207484u: goto label_207484;
            case 0x207488u: goto label_207488;
            case 0x20748Cu: goto label_20748c;
            case 0x207490u: goto label_207490;
            case 0x207494u: goto label_207494;
            case 0x207498u: goto label_207498;
            case 0x20749Cu: goto label_20749c;
            case 0x2074A0u: goto label_2074a0;
            case 0x2074A4u: goto label_2074a4;
            case 0x2074A8u: goto label_2074a8;
            case 0x2074ACu: goto label_2074ac;
            case 0x2074B0u: goto label_2074b0;
            case 0x2074B4u: goto label_2074b4;
            case 0x2074B8u: goto label_2074b8;
            case 0x2074BCu: goto label_2074bc;
            case 0x2074C0u: goto label_2074c0;
            case 0x2074C4u: goto label_2074c4;
            case 0x2074C8u: goto label_2074c8;
            case 0x2074CCu: goto label_2074cc;
            case 0x2074D0u: goto label_2074d0;
            case 0x2074D4u: goto label_2074d4;
            case 0x2074D8u: goto label_2074d8;
            case 0x2074DCu: goto label_2074dc;
            case 0x2074E0u: goto label_2074e0;
            case 0x2074E4u: goto label_2074e4;
            case 0x2074E8u: goto label_2074e8;
            case 0x2074ECu: goto label_2074ec;
            case 0x2074F0u: goto label_2074f0;
            case 0x2074F4u: goto label_2074f4;
            case 0x2074F8u: goto label_2074f8;
            case 0x2074FCu: goto label_2074fc;
            case 0x207500u: goto label_207500;
            case 0x207504u: goto label_207504;
            case 0x207508u: goto label_207508;
            case 0x20750Cu: goto label_20750c;
            case 0x207510u: goto label_207510;
            case 0x207514u: goto label_207514;
            case 0x207518u: goto label_207518;
            case 0x20751Cu: goto label_20751c;
            case 0x207520u: goto label_207520;
            case 0x207524u: goto label_207524;
            case 0x207528u: goto label_207528;
            case 0x20752Cu: goto label_20752c;
            case 0x207530u: goto label_207530;
            case 0x207534u: goto label_207534;
            case 0x207538u: goto label_207538;
            case 0x20753Cu: goto label_20753c;
            case 0x207540u: goto label_207540;
            case 0x207544u: goto label_207544;
            case 0x207548u: goto label_207548;
            case 0x20754Cu: goto label_20754c;
            case 0x207550u: goto label_207550;
            case 0x207554u: goto label_207554;
            case 0x207558u: goto label_207558;
            case 0x20755Cu: goto label_20755c;
            case 0x207560u: goto label_207560;
            case 0x207564u: goto label_207564;
            case 0x207568u: goto label_207568;
            case 0x20756Cu: goto label_20756c;
            case 0x207570u: goto label_207570;
            case 0x207574u: goto label_207574;
            case 0x207578u: goto label_207578;
            case 0x20757Cu: goto label_20757c;
            case 0x207580u: goto label_207580;
            case 0x207584u: goto label_207584;
            case 0x207588u: goto label_207588;
            case 0x20758Cu: goto label_20758c;
            case 0x207590u: goto label_207590;
            case 0x207594u: goto label_207594;
            case 0x207598u: goto label_207598;
            case 0x20759Cu: goto label_20759c;
            case 0x2075A0u: goto label_2075a0;
            case 0x2075A4u: goto label_2075a4;
            case 0x2075A8u: goto label_2075a8;
            case 0x2075ACu: goto label_2075ac;
            case 0x2075B0u: goto label_2075b0;
            case 0x2075B4u: goto label_2075b4;
            case 0x2075B8u: goto label_2075b8;
            case 0x2075BCu: goto label_2075bc;
            case 0x2075C0u: goto label_2075c0;
            case 0x2075C4u: goto label_2075c4;
            case 0x2075C8u: goto label_2075c8;
            case 0x2075CCu: goto label_2075cc;
            case 0x2075D0u: goto label_2075d0;
            case 0x2075D4u: goto label_2075d4;
            case 0x2075D8u: goto label_2075d8;
            case 0x2075DCu: goto label_2075dc;
            case 0x2075E0u: goto label_2075e0;
            case 0x2075E4u: goto label_2075e4;
            case 0x2075E8u: goto label_2075e8;
            case 0x2075ECu: goto label_2075ec;
            case 0x2075F0u: goto label_2075f0;
            case 0x2075F4u: goto label_2075f4;
            case 0x2075F8u: goto label_2075f8;
            case 0x2075FCu: goto label_2075fc;
            case 0x207600u: goto label_207600;
            case 0x207604u: goto label_207604;
            case 0x207608u: goto label_207608;
            case 0x20760Cu: goto label_20760c;
            case 0x207610u: goto label_207610;
            case 0x207614u: goto label_207614;
            case 0x207618u: goto label_207618;
            case 0x20761Cu: goto label_20761c;
            case 0x207620u: goto label_207620;
            case 0x207624u: goto label_207624;
            case 0x207628u: goto label_207628;
            case 0x20762Cu: goto label_20762c;
            case 0x207630u: goto label_207630;
            case 0x207634u: goto label_207634;
            case 0x207638u: goto label_207638;
            case 0x20763Cu: goto label_20763c;
            case 0x207640u: goto label_207640;
            case 0x207644u: goto label_207644;
            case 0x207648u: goto label_207648;
            case 0x20764Cu: goto label_20764c;
            case 0x207650u: goto label_207650;
            case 0x207654u: goto label_207654;
            case 0x207658u: goto label_207658;
            case 0x20765Cu: goto label_20765c;
            case 0x207660u: goto label_207660;
            case 0x207664u: goto label_207664;
            case 0x207668u: goto label_207668;
            case 0x20766Cu: goto label_20766c;
            case 0x207670u: goto label_207670;
            case 0x207674u: goto label_207674;
            case 0x207678u: goto label_207678;
            case 0x20767Cu: goto label_20767c;
            case 0x207680u: goto label_207680;
            case 0x207684u: goto label_207684;
            case 0x207688u: goto label_207688;
            case 0x20768Cu: goto label_20768c;
            case 0x207690u: goto label_207690;
            case 0x207694u: goto label_207694;
            case 0x207698u: goto label_207698;
            case 0x20769Cu: goto label_20769c;
            case 0x2076A0u: goto label_2076a0;
            case 0x2076A4u: goto label_2076a4;
            case 0x2076A8u: goto label_2076a8;
            case 0x2076ACu: goto label_2076ac;
            case 0x2076B0u: goto label_2076b0;
            case 0x2076B4u: goto label_2076b4;
            case 0x2076B8u: goto label_2076b8;
            case 0x2076BCu: goto label_2076bc;
            case 0x2076C0u: goto label_2076c0;
            case 0x2076C4u: goto label_2076c4;
            case 0x2076C8u: goto label_2076c8;
            case 0x2076CCu: goto label_2076cc;
            case 0x2076D0u: goto label_2076d0;
            case 0x2076D4u: goto label_2076d4;
            case 0x2076D8u: goto label_2076d8;
            case 0x2076DCu: goto label_2076dc;
            case 0x2076E0u: goto label_2076e0;
            case 0x2076E4u: goto label_2076e4;
            case 0x2076E8u: goto label_2076e8;
            case 0x2076ECu: goto label_2076ec;
            case 0x2076F0u: goto label_2076f0;
            case 0x2076F4u: goto label_2076f4;
            case 0x2076F8u: goto label_2076f8;
            case 0x2076FCu: goto label_2076fc;
            case 0x207700u: goto label_207700;
            case 0x207704u: goto label_207704;
            case 0x207708u: goto label_207708;
            case 0x20770Cu: goto label_20770c;
            case 0x207710u: goto label_207710;
            case 0x207714u: goto label_207714;
            case 0x207718u: goto label_207718;
            case 0x20771Cu: goto label_20771c;
            case 0x207720u: goto label_207720;
            case 0x207724u: goto label_207724;
            case 0x207728u: goto label_207728;
            case 0x20772Cu: goto label_20772c;
            case 0x207730u: goto label_207730;
            case 0x207734u: goto label_207734;
            case 0x207738u: goto label_207738;
            case 0x20773Cu: goto label_20773c;
            case 0x207740u: goto label_207740;
            case 0x207744u: goto label_207744;
            case 0x207748u: goto label_207748;
            case 0x20774Cu: goto label_20774c;
            case 0x207750u: goto label_207750;
            case 0x207754u: goto label_207754;
            case 0x207758u: goto label_207758;
            case 0x20775Cu: goto label_20775c;
            case 0x207760u: goto label_207760;
            case 0x207764u: goto label_207764;
            case 0x207768u: goto label_207768;
            case 0x20776Cu: goto label_20776c;
            case 0x207770u: goto label_207770;
            case 0x207774u: goto label_207774;
            case 0x207778u: goto label_207778;
            case 0x20777Cu: goto label_20777c;
            case 0x207780u: goto label_207780;
            case 0x207784u: goto label_207784;
            case 0x207788u: goto label_207788;
            case 0x20778Cu: goto label_20778c;
            case 0x207790u: goto label_207790;
            case 0x207794u: goto label_207794;
            case 0x207798u: goto label_207798;
            case 0x20779Cu: goto label_20779c;
            case 0x2077A0u: goto label_2077a0;
            case 0x2077A4u: goto label_2077a4;
            case 0x2077A8u: goto label_2077a8;
            case 0x2077ACu: goto label_2077ac;
            case 0x2077B0u: goto label_2077b0;
            case 0x2077B4u: goto label_2077b4;
            case 0x2077B8u: goto label_2077b8;
            case 0x2077BCu: goto label_2077bc;
            case 0x2077C0u: goto label_2077c0;
            case 0x2077C4u: goto label_2077c4;
            case 0x2077C8u: goto label_2077c8;
            case 0x2077CCu: goto label_2077cc;
            case 0x2077D0u: goto label_2077d0;
            case 0x2077D4u: goto label_2077d4;
            case 0x2077D8u: goto label_2077d8;
            case 0x2077DCu: goto label_2077dc;
            case 0x2077E0u: goto label_2077e0;
            case 0x2077E4u: goto label_2077e4;
            case 0x2077E8u: goto label_2077e8;
            case 0x2077ECu: goto label_2077ec;
            case 0x2077F0u: goto label_2077f0;
            case 0x2077F4u: goto label_2077f4;
            case 0x2077F8u: goto label_2077f8;
            case 0x2077FCu: goto label_2077fc;
            case 0x207800u: goto label_207800;
            case 0x207804u: goto label_207804;
            case 0x207808u: goto label_207808;
            case 0x20780Cu: goto label_20780c;
            case 0x207810u: goto label_207810;
            case 0x207814u: goto label_207814;
            case 0x207818u: goto label_207818;
            case 0x20781Cu: goto label_20781c;
            case 0x207820u: goto label_207820;
            case 0x207824u: goto label_207824;
            case 0x207828u: goto label_207828;
            case 0x20782Cu: goto label_20782c;
            case 0x207830u: goto label_207830;
            case 0x207834u: goto label_207834;
            case 0x207838u: goto label_207838;
            case 0x20783Cu: goto label_20783c;
            case 0x207840u: goto label_207840;
            case 0x207844u: goto label_207844;
            case 0x207848u: goto label_207848;
            case 0x20784Cu: goto label_20784c;
            case 0x207850u: goto label_207850;
            case 0x207854u: goto label_207854;
            case 0x207858u: goto label_207858;
            case 0x20785Cu: goto label_20785c;
            case 0x207860u: goto label_207860;
            case 0x207864u: goto label_207864;
            case 0x207868u: goto label_207868;
            case 0x20786Cu: goto label_20786c;
            case 0x207870u: goto label_207870;
            case 0x207874u: goto label_207874;
            case 0x207878u: goto label_207878;
            case 0x20787Cu: goto label_20787c;
            case 0x207880u: goto label_207880;
            case 0x207884u: goto label_207884;
            case 0x207888u: goto label_207888;
            case 0x20788Cu: goto label_20788c;
            case 0x207890u: goto label_207890;
            case 0x207894u: goto label_207894;
            case 0x207898u: goto label_207898;
            case 0x20789Cu: goto label_20789c;
            case 0x2078A0u: goto label_2078a0;
            case 0x2078A4u: goto label_2078a4;
            case 0x2078A8u: goto label_2078a8;
            case 0x2078ACu: goto label_2078ac;
            case 0x2078B0u: goto label_2078b0;
            case 0x2078B4u: goto label_2078b4;
            case 0x2078B8u: goto label_2078b8;
            case 0x2078BCu: goto label_2078bc;
            case 0x2078C0u: goto label_2078c0;
            case 0x2078C4u: goto label_2078c4;
            case 0x2078C8u: goto label_2078c8;
            case 0x2078CCu: goto label_2078cc;
            case 0x2078D0u: goto label_2078d0;
            case 0x2078D4u: goto label_2078d4;
            case 0x2078D8u: goto label_2078d8;
            case 0x2078DCu: goto label_2078dc;
            case 0x2078E0u: goto label_2078e0;
            case 0x2078E4u: goto label_2078e4;
            case 0x2078E8u: goto label_2078e8;
            case 0x2078ECu: goto label_2078ec;
            case 0x2078F0u: goto label_2078f0;
            case 0x2078F4u: goto label_2078f4;
            case 0x2078F8u: goto label_2078f8;
            case 0x2078FCu: goto label_2078fc;
            case 0x207900u: goto label_207900;
            case 0x207904u: goto label_207904;
            case 0x207908u: goto label_207908;
            case 0x20790Cu: goto label_20790c;
            case 0x207910u: goto label_207910;
            case 0x207914u: goto label_207914;
            case 0x207918u: goto label_207918;
            case 0x20791Cu: goto label_20791c;
            case 0x207920u: goto label_207920;
            case 0x207924u: goto label_207924;
            case 0x207928u: goto label_207928;
            case 0x20792Cu: goto label_20792c;
            case 0x207930u: goto label_207930;
            case 0x207934u: goto label_207934;
            case 0x207938u: goto label_207938;
            case 0x20793Cu: goto label_20793c;
            case 0x207940u: goto label_207940;
            case 0x207944u: goto label_207944;
            case 0x207948u: goto label_207948;
            case 0x20794Cu: goto label_20794c;
            case 0x207950u: goto label_207950;
            case 0x207954u: goto label_207954;
            case 0x207958u: goto label_207958;
            case 0x20795Cu: goto label_20795c;
            case 0x207960u: goto label_207960;
            case 0x207964u: goto label_207964;
            case 0x207968u: goto label_207968;
            case 0x20796Cu: goto label_20796c;
            case 0x207970u: goto label_207970;
            case 0x207974u: goto label_207974;
            case 0x207978u: goto label_207978;
            case 0x20797Cu: goto label_20797c;
            case 0x207980u: goto label_207980;
            case 0x207984u: goto label_207984;
            case 0x207988u: goto label_207988;
            case 0x20798Cu: goto label_20798c;
            case 0x207990u: goto label_207990;
            case 0x207994u: goto label_207994;
            case 0x207998u: goto label_207998;
            case 0x20799Cu: goto label_20799c;
            case 0x2079A0u: goto label_2079a0;
            case 0x2079A4u: goto label_2079a4;
            case 0x2079A8u: goto label_2079a8;
            case 0x2079ACu: goto label_2079ac;
            case 0x2079B0u: goto label_2079b0;
            case 0x2079B4u: goto label_2079b4;
            case 0x2079B8u: goto label_2079b8;
            case 0x2079BCu: goto label_2079bc;
            case 0x2079C0u: goto label_2079c0;
            case 0x2079C4u: goto label_2079c4;
            case 0x2079C8u: goto label_2079c8;
            case 0x2079CCu: goto label_2079cc;
            case 0x2079D0u: goto label_2079d0;
            case 0x2079D4u: goto label_2079d4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2079D4u;
label_2079d4:
    // 0x2079d4: 0x0  nop
    ctx->pc = 0x2079d4u;
    // NOP
}
