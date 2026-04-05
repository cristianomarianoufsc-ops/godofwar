#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00183360
// Address: 0x183360 - 0x1837b8
void sub_00183360_0x183360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00183360_0x183360");
#endif

    ctx->pc = 0x183360u;

    // 0x183360: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x183360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x183364: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x183364u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x183368: 0x8c42f1b4  lw          $v0, -0xE4C($v0)
    ctx->pc = 0x183368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963636)));
    // 0x18336c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18336cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x183370: 0xdfa40000  ld          $a0, 0x0($sp)
    ctx->pc = 0x183370u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x183374: 0x2407fffe  addiu       $a3, $zero, -0x2
    ctx->pc = 0x183374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x183378: 0xdfa30010  ld          $v1, 0x10($sp)
    ctx->pc = 0x183378u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18337c: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x18337cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
    // 0x183380: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x183380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x183384: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x183384u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x183388: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x183388u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x18338c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x18338cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x183390: 0x2405ffe3  addiu       $a1, $zero, -0x1D
    ctx->pc = 0x183390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967267));
    // 0x183394: 0x3c0b0033  lui         $t3, 0x33
    ctx->pc = 0x183394u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)51 << 16));
    // 0x183398: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x183398u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x18339c: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x18339cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1833a0: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x1833a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1833a4: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x1833a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1833a8: 0x9d664f5c  lwu         $a2, 0x4F5C($t3)
    ctx->pc = 0x1833a8u;
    SET_GPR_U32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 11), 20316)));
    // 0x1833ac: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x1833acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x1833b0: 0x2402ffbf  addiu       $v0, $zero, -0x41
    ctx->pc = 0x1833b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x1833b4: 0x2405fff3  addiu       $a1, $zero, -0xD
    ctx->pc = 0x1833b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x1833b8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1833b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1833bc: 0x30c60001  andi        $a2, $a2, 0x1
    ctx->pc = 0x1833bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1);
    // 0x1833c0: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x1833c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x1833c4: 0x63078  dsll        $a2, $a2, 1
    ctx->pc = 0x1833c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 1);
    // 0x1833c8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1833c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1833cc: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x1833ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
    // 0x1833d0: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x1833d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
    // 0x1833d4: 0x8d624f5c  lw          $v0, 0x4F5C($t3)
    ctx->pc = 0x1833d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 20316)));
    // 0x1833d8: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x1833d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
    // 0x1833dc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1833DCu;
    {
        const bool branch_taken_0x1833dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1833E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1833DCu;
            // 0x1833e0: 0xffa30010  sd          $v1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1833dc) {
            ctx->pc = 0x1833FCu;
            goto label_1833fc;
        }
    }
    ctx->pc = 0x1833E4u;
    // 0x1833e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1833e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1833e8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x1833e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1833ec: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1833ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1833f0: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x1833f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x1833f4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1833F4u;
    {
        const bool branch_taken_0x1833f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1833F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1833F4u;
            // 0x1833f8: 0xa3a30011  sb          $v1, 0x11($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1833f4) {
            ctx->pc = 0x183408u;
            goto label_183408;
        }
    }
    ctx->pc = 0x1833FCu;
label_1833fc:
    // 0x1833fc: 0x671024  and         $v0, $v1, $a3
    ctx->pc = 0x1833fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x183400: 0xffa20010  sd          $v0, 0x10($sp)
    ctx->pc = 0x183400u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
    // 0x183404: 0xa3a00011  sb          $zero, 0x11($sp)
    ctx->pc = 0x183404u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 0));
label_183408:
    // 0x183408: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x183408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x18340c: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x18340cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x183410: 0x9c441074  lwu         $a0, 0x1074($v0)
    ctx->pc = 0x183410u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 4212)));
    // 0x183414: 0x2405fe00  addiu       $a1, $zero, -0x200
    ctx->pc = 0x183414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966784));
    // 0x183418: 0x8ccadd50  lw          $t2, -0x22B0($a2)
    ctx->pc = 0x183418u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294958416)));
    // 0x18341c: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x18341cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x183420: 0xdfa20040  ld          $v0, 0x40($sp)
    ctx->pc = 0x183420u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x183424: 0x308401ff  andi        $a0, $a0, 0x1FF
    ctx->pc = 0x183424u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)511);
    // 0x183428: 0xa1982  srl         $v1, $t2, 6
    ctx->pc = 0x183428u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 10), 6));
    // 0x18342c: 0x24c6dd50  addiu       $a2, $a2, -0x22B0
    ctx->pc = 0x18342cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958416));
    // 0x183430: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x183430u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x183434: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x183434u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x183438: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x183438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x18343c: 0x240581ff  addiu       $a1, $zero, -0x7E01
    ctx->pc = 0x18343cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294935039));
    // 0x183440: 0x31a78  dsll        $v1, $v1, 9
    ctx->pc = 0x183440u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 9);
    // 0x183444: 0x9ce41070  lwu         $a0, 0x1070($a3)
    ctx->pc = 0x183444u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 4208)));
    // 0x183448: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x183448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x18344c: 0x8cc80004  lw          $t0, 0x4($a2)
    ctx->pc = 0x18344cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x183450: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x183450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x183454: 0x3084001f  andi        $a0, $a0, 0x1F
    ctx->pc = 0x183454u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
    // 0x183458: 0x3c03fff0  lui         $v1, 0xFFF0
    ctx->pc = 0x183458u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65520 << 16));
    // 0x18345c: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x18345cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x183460: 0x423f8  dsll        $a0, $a0, 15
    ctx->pc = 0x183460u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 15);
    // 0x183464: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x183464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x183468: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x183468u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18346c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x18346cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x183470: 0x2403f800  addiu       $v1, $zero, -0x800
    ctx->pc = 0x183470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294965248));
    // 0x183474: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x183474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x183478: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x183478u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x18347c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x18347cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x183480: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x183480u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x183484: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x183484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x183488: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x183488u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x18348c: 0x3c03ffc0  lui         $v1, 0xFFC0
    ctx->pc = 0x18348cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65472 << 16));
    // 0x183490: 0x346307ff  ori         $v1, $v1, 0x7FF
    ctx->pc = 0x183490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2047);
    // 0x183494: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x183494u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x183498: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x183498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x18349c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x18349cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x1834a0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1834a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1834a4: 0x8c841078  lw          $a0, 0x1078($a0)
    ctx->pc = 0x1834a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4216)));
    // 0x1834a8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1834a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1834ac: 0xa7a00012  sh          $zero, 0x12($sp)
    ctx->pc = 0x1834acu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 18), (uint16_t)GPR_U32(ctx, 0));
    // 0x1834b0: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x1834b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1834b4: 0xffa20040  sd          $v0, 0x40($sp)
    ctx->pc = 0x1834b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 2));
    // 0x1834b8: 0x14830034  bne         $a0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x1834B8u;
    {
        const bool branch_taken_0x1834b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x1834BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1834B8u;
            // 0x1834bc: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1834b8) {
            ctx->pc = 0x18358Cu;
            goto label_18358c;
        }
    }
    ctx->pc = 0x1834C0u;
    // 0x1834c0: 0x2404060e  addiu       $a0, $zero, 0x60E
    ctx->pc = 0x1834c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1550));
    // 0x1834c4: 0xdfa20050  ld          $v0, 0x50($sp)
    ctx->pc = 0x1834c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1834c8: 0x8a001b  divu        $zero, $a0, $t2
    ctx->pc = 0x1834c8u;
    { uint32_t divisor = GPR_U32(ctx, 10); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x1834cc: 0x2403f000  addiu       $v1, $zero, -0x1000
    ctx->pc = 0x1834ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x1834d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1834d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1834d4: 0x3c05f87f  lui         $a1, 0xF87F
    ctx->pc = 0x1834d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63615 << 16));
    // 0x1834d8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1834d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1834dc: 0x24030138  addiu       $v1, $zero, 0x138
    ctx->pc = 0x1834dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 312));
    // 0x1834e0: 0x3c07e7ff  lui         $a3, 0xE7FF
    ctx->pc = 0x1834e0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)59391 << 16));
    // 0x1834e4: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x1834e4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x1834e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1834e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1834ec: 0x2506ffff  addiu       $a2, $t0, -0x1
    ctx->pc = 0x1834ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x1834f0: 0x3c03ff80  lui         $v1, 0xFF80
    ctx->pc = 0x1834f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65408 << 16));
    // 0x1834f4: 0x34630fff  ori         $v1, $v1, 0xFFF
    ctx->pc = 0x1834f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4095);
    // 0x1834f8: 0x30c607ff  andi        $a2, $a2, 0x7FF
    ctx->pc = 0x1834f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)2047);
    // 0x1834fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1834fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x183500: 0x3c08ff80  lui         $t0, 0xFF80
    ctx->pc = 0x183500u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65408 << 16));
    // 0x183504: 0x35080fff  ori         $t0, $t0, 0xFFF
    ctx->pc = 0x183504u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)4095);
    // 0x183508: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x183508u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x18350c: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x18350cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x183510: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x183510u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x183514: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x183514u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x183518: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x183518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x18351c: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x18351cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x183520: 0x6333c  dsll32      $a2, $a2, 12
    ctx->pc = 0x183520u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 12));
    // 0x183524: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x183524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x183528: 0x452824  and         $a1, $v0, $a1
    ctx->pc = 0x183528u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x18352c: 0xffa20050  sd          $v0, 0x50($sp)
    ctx->pc = 0x18352cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 2));
    // 0x183530: 0x2403f000  addiu       $v1, $zero, -0x1000
    ctx->pc = 0x183530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x183534: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x183534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x183538: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x183538u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x18353c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x18353cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x183540: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x183540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x183544: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x183544u;
    {
        const bool branch_taken_0x183544 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x183544) {
            ctx->pc = 0x183548u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x183544u;
            // 0x183548: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x18354Cu;
            goto label_18354c;
        }
    }
    ctx->pc = 0x18354Cu;
label_18354c:
    // 0x18354c: 0x2012  mflo        $a0
    ctx->pc = 0x18354cu;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x183550: 0x1441018  mult        $v0, $t2, $a0
    ctx->pc = 0x183550u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x183554: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x183554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x183558: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x183558u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x18355c: 0x425f8  dsll        $a0, $a0, 23
    ctx->pc = 0x18355cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 23);
    // 0x183560: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x183560u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x183564: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x183564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x183568: 0xa72824  and         $a1, $a1, $a3
    ctx->pc = 0x183568u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x18356c: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x18356cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x183570: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x183570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x183574: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x183574u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x183578: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x183578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x18357c: 0xffa50050  sd          $a1, 0x50($sp)
    ctx->pc = 0x18357cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 5));
    // 0x183580: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x183580u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x183584: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x183584u;
    {
        const bool branch_taken_0x183584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183584u;
            // 0x183588: 0x661825  or          $v1, $v1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183584) {
            ctx->pc = 0x18368Cu;
            goto label_18368c;
        }
    }
    ctx->pc = 0x18358Cu;
label_18358c:
    // 0x18358c: 0x252409ff  addiu       $a0, $t1, 0x9FF
    ctx->pc = 0x18358cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 2559));
    // 0x183590: 0xdfa20050  ld          $v0, 0x50($sp)
    ctx->pc = 0x183590u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x183594: 0x89001b  divu        $zero, $a0, $t1
    ctx->pc = 0x183594u;
    { uint32_t divisor = GPR_U32(ctx, 9); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x183598: 0x2403f000  addiu       $v1, $zero, -0x1000
    ctx->pc = 0x183598u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x18359c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x18359cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1835a0: 0x3c05e7ff  lui         $a1, 0xE7FF
    ctx->pc = 0x1835a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59391 << 16));
    // 0x1835a4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1835a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1835a8: 0x2403027c  addiu       $v1, $zero, 0x27C
    ctx->pc = 0x1835a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 636));
    // 0x1835ac: 0x2406f000  addiu       $a2, $zero, -0x1000
    ctx->pc = 0x1835acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x1835b0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x1835b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x1835b4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1835b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x1835b8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x1835b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x1835bc: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1835bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x1835c0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1835c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1835c4: 0x3c03ff80  lui         $v1, 0xFF80
    ctx->pc = 0x1835c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65408 << 16));
    // 0x1835c8: 0x34630fff  ori         $v1, $v1, 0xFFF
    ctx->pc = 0x1835c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4095);
    // 0x1835cc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1835ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1835d0: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x1835d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x1835d4: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x1835d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
    // 0x1835d8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1835d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1835dc: 0x3c03f87f  lui         $v1, 0xF87F
    ctx->pc = 0x1835dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63615 << 16));
    // 0x1835e0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1835e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1835e4: 0xffa20050  sd          $v0, 0x50($sp)
    ctx->pc = 0x1835e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 2));
    // 0x1835e8: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x1835e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1835ec: 0x51200001  beql        $t1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1835ECu;
    {
        const bool branch_taken_0x1835ec = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1835ec) {
            ctx->pc = 0x1835F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1835ECu;
            // 0x1835f0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1835F4u;
            goto label_1835f4;
        }
    }
    ctx->pc = 0x1835F4u;
label_1835f4:
    // 0x1835f4: 0x2012  mflo        $a0
    ctx->pc = 0x1835f4u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x1835f8: 0x891018  mult        $v0, $a0, $t1
    ctx->pc = 0x1835f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x1835fc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1835fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x183600: 0x3084000f  andi        $a0, $a0, 0xF
    ctx->pc = 0x183600u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x183604: 0x425f8  dsll        $a0, $a0, 23
    ctx->pc = 0x183604u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 23);
    // 0x183608: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x183608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x18360c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x18360cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x183610: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x183610u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x183614: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x183614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x183618: 0xffa30050  sd          $v1, 0x50($sp)
    ctx->pc = 0x183618u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 3));
    // 0x18361c: 0x662024  and         $a0, $v1, $a2
    ctx->pc = 0x18361cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x183620: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x183620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x183624: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x183624u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x183628: 0x8d634f5c  lw          $v1, 0x4F5C($t3)
    ctx->pc = 0x183628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 20316)));
    // 0x18362c: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x18362Cu;
    {
        const bool branch_taken_0x18362c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x183630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18362Cu;
            // 0x183630: 0xffa40050  sd          $a0, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18362c) {
            ctx->pc = 0x18365Cu;
            goto label_18365c;
        }
    }
    ctx->pc = 0x183634u;
    // 0x183634: 0x2502ffff  addiu       $v0, $t0, -0x1
    ctx->pc = 0x183634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x183638: 0x3c03ff80  lui         $v1, 0xFF80
    ctx->pc = 0x183638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65408 << 16));
    // 0x18363c: 0x34630fff  ori         $v1, $v1, 0xFFF
    ctx->pc = 0x18363cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4095);
    // 0x183640: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x183640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x183644: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x183644u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x183648: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x183648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x18364c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x18364cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x183650: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x183650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x183654: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x183654u;
    {
        const bool branch_taken_0x183654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x183658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x183654u;
            // 0x183658: 0x831824  and         $v1, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x183654) {
            ctx->pc = 0x183684u;
            goto label_183684;
        }
    }
    ctx->pc = 0x18365Cu;
label_18365c:
    // 0x18365c: 0x81040  sll         $v0, $t0, 1
    ctx->pc = 0x18365cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x183660: 0x3c03ff80  lui         $v1, 0xFF80
    ctx->pc = 0x183660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65408 << 16));
    // 0x183664: 0x34630fff  ori         $v1, $v1, 0xFFF
    ctx->pc = 0x183664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4095);
    // 0x183668: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x183668u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x18366c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x18366cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x183670: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x183670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x183674: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x183674u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x183678: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x183678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x18367c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x18367cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x183680: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x183680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
label_183684:
    // 0x183684: 0x2133c  dsll32      $v0, $v0, 12
    ctx->pc = 0x183684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 12));
    // 0x183688: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x183688u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_18368c:
    // 0x18368c: 0xffa30050  sd          $v1, 0x50($sp)
    ctx->pc = 0x18368cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 3));
    // 0x183690: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x183690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x183694: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x183694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x183698: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x183698u;
    {
        const bool branch_taken_0x183698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x183698) {
            ctx->pc = 0x183738u;
            goto label_183738;
        }
    }
    ctx->pc = 0x1836A0u;
    // 0x1836a0: 0x6ba20047  ldl         $v0, 0x47($sp)
    ctx->pc = 0x1836a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1836a4: 0x6fa20040  ldr         $v0, 0x40($sp)
    ctx->pc = 0x1836a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1836a8: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x1836a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1836ac: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x1836acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1836b0: 0x3c04ffc0  lui         $a0, 0xFFC0
    ctx->pc = 0x1836b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65472 << 16));
    // 0x1836b4: 0x348407ff  ori         $a0, $a0, 0x7FF
    ctx->pc = 0x1836b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2047);
    // 0x1836b8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x1836b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x1836bc: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1836bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1836c0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x1836c0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x1836c4: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x1836c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x1836c8: 0x3c05ff80  lui         $a1, 0xFF80
    ctx->pc = 0x1836c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65408 << 16));
    // 0x1836cc: 0x34a50fff  ori         $a1, $a1, 0xFFF
    ctx->pc = 0x1836ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4095);
    // 0x1836d0: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1836d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x1836d4: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1836d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1836d8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x1836d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x1836dc: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1836dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1836e0: 0xdfa30020  ld          $v1, 0x20($sp)
    ctx->pc = 0x1836e0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1836e4: 0x312fe  dsrl32      $v0, $v1, 11
    ctx->pc = 0x1836e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> (32 + 11));
    // 0x1836e8: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x1836e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x1836ec: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x1836ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x1836f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1836f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1836f4: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x1836f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x1836f8: 0x212fc  dsll32      $v0, $v0, 11
    ctx->pc = 0x1836f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 11));
    // 0x1836fc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1836fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x183700: 0xffa30020  sd          $v1, 0x20($sp)
    ctx->pc = 0x183700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 3));
    // 0x183704: 0x6ba60057  ldl         $a2, 0x57($sp)
    ctx->pc = 0x183704u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x183708: 0x6fa60050  ldr         $a2, 0x50($sp)
    ctx->pc = 0x183708u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x18370c: 0xb3a60037  sdl         $a2, 0x37($sp)
    ctx->pc = 0x18370cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x183710: 0xb7a60030  sdr         $a2, 0x30($sp)
    ctx->pc = 0x183710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x183714: 0xdfa30030  ld          $v1, 0x30($sp)
    ctx->pc = 0x183714u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x183718: 0x3133e  dsrl32      $v0, $v1, 12
    ctx->pc = 0x183718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> (32 + 12));
    // 0x18371c: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x18371cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x183720: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x183720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x183724: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x183724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x183728: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x183728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x18372c: 0x2133c  dsll32      $v0, $v0, 12
    ctx->pc = 0x18372cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 12));
    // 0x183730: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x183730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x183734: 0xffa30030  sd          $v1, 0x30($sp)
    ctx->pc = 0x183734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 3));
label_183738:
    // 0x183738: 0xdfa30000  ld          $v1, 0x0($sp)
    ctx->pc = 0x183738u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18373c: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x18373cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x183740: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x183740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
    // 0x183744: 0x3c041200  lui         $a0, 0x1200
    ctx->pc = 0x183744u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4608 << 16));
    // 0x183748: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x183748u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
    // 0x18374c: 0x3c061200  lui         $a2, 0x1200
    ctx->pc = 0x18374cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4608 << 16));
    // 0x183750: 0x3c031200  lui         $v1, 0x1200
    ctx->pc = 0x183750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4608 << 16));
    // 0x183754: 0x34c60080  ori         $a2, $a2, 0x80
    ctx->pc = 0x183754u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)128);
    // 0x183758: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x183758u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18375c: 0x34630070  ori         $v1, $v1, 0x70
    ctx->pc = 0x18375cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)112);
    // 0x183760: 0x3c051200  lui         $a1, 0x1200
    ctx->pc = 0x183760u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4608 << 16));
    // 0x183764: 0x3c071200  lui         $a3, 0x1200
    ctx->pc = 0x183764u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4608 << 16));
    // 0x183768: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x183768u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x18376c: 0x34a50090  ori         $a1, $a1, 0x90
    ctx->pc = 0x18376cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)144);
    // 0x183770: 0xa3a00060  sb          $zero, 0x60($sp)
    ctx->pc = 0x183770u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 96), (uint8_t)GPR_U32(ctx, 0));
    // 0x183774: 0x34e700a0  ori         $a3, $a3, 0xA0
    ctx->pc = 0x183774u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)160);
    // 0x183778: 0xdfa20020  ld          $v0, 0x20($sp)
    ctx->pc = 0x183778u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18377c: 0x348400e0  ori         $a0, $a0, 0xE0
    ctx->pc = 0x18377cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)224);
    // 0x183780: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x183780u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x183784: 0xa3a00061  sb          $zero, 0x61($sp)
    ctx->pc = 0x183784u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 97), (uint8_t)GPR_U32(ctx, 0));
    // 0x183788: 0xdfa20030  ld          $v0, 0x30($sp)
    ctx->pc = 0x183788u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18378c: 0xa3a00062  sb          $zero, 0x62($sp)
    ctx->pc = 0x18378cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 98), (uint8_t)GPR_U32(ctx, 0));
    // 0x183790: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x183790u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x183794: 0xdfa20040  ld          $v0, 0x40($sp)
    ctx->pc = 0x183794u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x183798: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x183798u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x18379c: 0xdfa20050  ld          $v0, 0x50($sp)
    ctx->pc = 0x18379cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1837a0: 0xfce20000  sd          $v0, 0x0($a3)
    ctx->pc = 0x1837a0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 2));
    // 0x1837a4: 0xdfa20060  ld          $v0, 0x60($sp)
    ctx->pc = 0x1837a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1837a8: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x1837a8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x1837ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1837ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1837B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1837ACu;
            // 0x1837b0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1833FCu: goto label_1833fc;
            case 0x183408u: goto label_183408;
            case 0x18354Cu: goto label_18354c;
            case 0x18358Cu: goto label_18358c;
            case 0x1835F4u: goto label_1835f4;
            case 0x18365Cu: goto label_18365c;
            case 0x183684u: goto label_183684;
            case 0x18368Cu: goto label_18368c;
            case 0x183738u: goto label_183738;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1837B4u;
    // 0x1837b4: 0x0  nop
    ctx->pc = 0x1837b4u;
    // NOP
}
