#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_289624
// Address: 0x289624 - 0x2897c4
void entry_289624_0x2897c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_289624_0x2897c4");
#endif

    ctx->pc = 0x289624u;

    // 0x289624: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x289624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x289628: 0x1440005e  bnez        $v0, . + 4 + (0x5E << 2)
    ctx->pc = 0x289628u;
    {
        const bool branch_taken_0x289628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28962Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289628u;
            // 0x28962c: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x289628) {
            ctx->pc = 0x2897A4u;
            goto label_2897a4;
        }
    }
    ctx->pc = 0x289630u;
    // 0x289630: 0x51a38  dsll        $v1, $a1, 8
    ctx->pc = 0x289630u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 8);
    // 0x289634: 0x34068080  ori         $a2, $zero, 0x8080
    ctx->pc = 0x289634u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x289638: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x289638u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x28963c: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x28963cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x289640: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x289640u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x289644: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x289644u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x289648: 0x63278  dsll        $a2, $a2, 9
    ctx->pc = 0x289648u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 9);
    // 0x28964c: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x28964cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
    // 0x289650: 0x65502d  daddu       $t2, $v1, $a1
    ctx->pc = 0x289650u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
    // 0x289654: 0x3083000f  andi        $v1, $a0, 0xF
    ctx->pc = 0x289654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x289658: 0xa1438  dsll        $v0, $t2, 16
    ctx->pc = 0x289658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << 16);
    // 0x28965c: 0x34088080  ori         $t0, $zero, 0x8080
    ctx->pc = 0x28965cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x289660: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x289660u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x289664: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x289664u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x289668: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x289668u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x28966c: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x28966cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x289670: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x289670u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x289674: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x289674u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x289678: 0x4a102d  daddu       $v0, $v0, $t2
    ctx->pc = 0x289678u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 10));
    // 0x28967c: 0x2503c  dsll32      $t2, $v0, 0
    ctx->pc = 0x28967cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) << (32 + 0));
    // 0x289680: 0x14600026  bnez        $v1, . + 4 + (0x26 << 2)
    ctx->pc = 0x289680u;
    {
        const bool branch_taken_0x289680 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x289684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289680u;
            // 0x289684: 0x4a382d  daddu       $a3, $v0, $t2 (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289680) {
            ctx->pc = 0x28971Cu;
            goto label_28971c;
        }
    }
    ctx->pc = 0x289688u;
label_289688:
    // 0x289688: 0x78890000  lq          $t1, 0x0($a0)
    ctx->pc = 0x289688u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28968c: 0x70c65389  pcpyld      $t2, $a2, $a2
    ctx->pc = 0x28968cu;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 6)));
    // 0x289690: 0x70091ce9  pnor        $v1, $zero, $t1
    ctx->pc = 0x289690u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
    // 0x289694: 0x712a1248  psubb       $v0, $t1, $t2
    ctx->pc = 0x289694u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x289698: 0x71083389  pcpyld      $a2, $t0, $t0
    ctx->pc = 0x289698u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x28969c: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x28969cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x2896a0: 0x70e74389  pcpyld      $t0, $a3, $a3
    ctx->pc = 0x2896a0u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 7)));
    // 0x2896a4: 0x70461489  pand        $v0, $v0, $a2
    ctx->pc = 0x2896a4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x2896a8: 0x70471ba9  pcpyud      $v1, $v0, $a3
    ctx->pc = 0x2896a8u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x2896ac: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x2896acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2896b0: 0x5460003d  bnel        $v1, $zero, . + 4 + (0x3D << 2)
    ctx->pc = 0x2896B0u;
    {
        const bool branch_taken_0x2896b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2896b0) {
            ctx->pc = 0x2896B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2896B0u;
            // 0x2896b4: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2897A8u;
            goto label_2897a8;
        }
    }
    ctx->pc = 0x2896B8u;
    // 0x2896b8: 0x712814c9  pxor        $v0, $t1, $t0
    ctx->pc = 0x2896b8u;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 9), GPR_VEC(ctx, 8)));
    // 0x2896bc: 0x704a1a48  psubb       $v1, $v0, $t2
    ctx->pc = 0x2896bcu;
    SET_GPR_VEC(ctx, 3, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x2896c0: 0x700214e9  pnor        $v0, $zero, $v0
    ctx->pc = 0x2896c0u;
    SET_GPR_VEC(ctx, 2, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x2896c4: 0x34088080  ori         $t0, $zero, 0x8080
    ctx->pc = 0x2896c4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x2896c8: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x2896c8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x2896cc: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x2896ccu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x2896d0: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x2896d0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x2896d4: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x2896d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x2896d8: 0x84438  dsll        $t0, $t0, 16
    ctx->pc = 0x2896d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 16);
    // 0x2896dc: 0x35088080  ori         $t0, $t0, 0x8080
    ctx->pc = 0x2896dcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32896);
    // 0x2896e0: 0x70621c89  pand        $v1, $v1, $v0
    ctx->pc = 0x2896e0u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x2896e4: 0x70661c89  pand        $v1, $v1, $a2
    ctx->pc = 0x2896e4u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x2896e8: 0x34068080  ori         $a2, $zero, 0x8080
    ctx->pc = 0x2896e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x2896ec: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2896ecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2896f0: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x2896f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x2896f4: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x2896f4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x2896f8: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x2896f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x2896fc: 0x63278  dsll        $a2, $a2, 9
    ctx->pc = 0x2896fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 9);
    // 0x289700: 0x34c60101  ori         $a2, $a2, 0x101
    ctx->pc = 0x289700u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)257);
    // 0x289704: 0x706513a9  pcpyud      $v0, $v1, $a1
    ctx->pc = 0x289704u;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 5)));
    // 0x289708: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x289708u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28970c: 0x5060ffde  beql        $v1, $zero, . + 4 + (-0x22 << 2)
    ctx->pc = 0x28970Cu;
    {
        const bool branch_taken_0x28970c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28970c) {
            ctx->pc = 0x289710u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28970Cu;
            // 0x289710: 0x24840010  addiu       $a0, $a0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x289688u;
            runtime->cooperativeGuestYield();
            goto label_289688;
        }
    }
    ctx->pc = 0x289714u;
    // 0x289714: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x289714u;
    {
        const bool branch_taken_0x289714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289714u;
            // 0x289718: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289714) {
            ctx->pc = 0x2897A8u;
            goto label_2897a8;
        }
    }
    ctx->pc = 0x28971Cu;
label_28971c:
    // 0x28971c: 0xdc890000  ld          $t1, 0x0($a0)
    ctx->pc = 0x28971cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x289720: 0x91827  nor         $v1, $zero, $t1
    ctx->pc = 0x289720u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 9)));
    // 0x289724: 0x126102f  dsubu       $v0, $t1, $a2
    ctx->pc = 0x289724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) - GPR_U64(ctx, 6));
    // 0x289728: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x289728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28972c: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x28972cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x289730: 0x5440001d  bnel        $v0, $zero, . + 4 + (0x1D << 2)
    ctx->pc = 0x289730u;
    {
        const bool branch_taken_0x289730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x289730) {
            ctx->pc = 0x289734u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x289730u;
            // 0x289734: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2897A8u;
            goto label_2897a8;
        }
    }
    ctx->pc = 0x289738u;
    // 0x289738: 0x1271026  xor         $v0, $t1, $a3
    ctx->pc = 0x289738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 7));
    // 0x28973c: 0x46182f  dsubu       $v1, $v0, $a2
    ctx->pc = 0x28973cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) - GPR_U64(ctx, 6));
    // 0x289740: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x289740u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x289744: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x289744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x289748: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x289748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x28974c: 0x54600016  bnel        $v1, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x28974Cu;
    {
        const bool branch_taken_0x28974c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28974c) {
            ctx->pc = 0x289750u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28974Cu;
            // 0x289750: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2897A8u;
            goto label_2897a8;
        }
    }
    ctx->pc = 0x289754u;
    // 0x289754: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x289754u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289758: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x289758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_28975c:
    // 0x28975c: 0xdc860000  ld          $a2, 0x0($a0)
    ctx->pc = 0x28975cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x289760: 0xc9102f  dsubu       $v0, $a2, $t1
    ctx->pc = 0x289760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) - GPR_U64(ctx, 9));
    // 0x289764: 0x61827  nor         $v1, $zero, $a2
    ctx->pc = 0x289764u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
    // 0x289768: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x289768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28976c: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x28976cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x289770: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x289770u;
    {
        const bool branch_taken_0x289770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x289774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289770u;
            // 0x289774: 0xc71026  xor         $v0, $a2, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289770) {
            ctx->pc = 0x2897A4u;
            goto label_2897a4;
        }
    }
    ctx->pc = 0x289778u;
    // 0x289778: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x289778u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x28977c: 0x49102f  dsubu       $v0, $v0, $t1
    ctx->pc = 0x28977cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 9));
    // 0x289780: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x289780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x289784: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x289784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x289788: 0x5040fff4  beql        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x289788u;
    {
        const bool branch_taken_0x289788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x289788) {
            ctx->pc = 0x28978Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x289788u;
            // 0x28978c: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28975Cu;
            runtime->cooperativeGuestYield();
            goto label_28975c;
        }
    }
    ctx->pc = 0x289790u;
    // 0x289790: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x289790u;
    {
        const bool branch_taken_0x289790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289790u;
            // 0x289794: 0x90820000  lbu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289790) {
            ctx->pc = 0x2897A8u;
            goto label_2897a8;
        }
    }
    ctx->pc = 0x289798u;
label_289798:
    // 0x289798: 0x50450006  beql        $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x289798u;
    {
        const bool branch_taken_0x289798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x289798) {
            ctx->pc = 0x28979Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x289798u;
            // 0x28979c: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2897B4u;
            goto label_2897b4;
        }
    }
    ctx->pc = 0x2897A0u;
    // 0x2897a0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2897a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2897a4:
    // 0x2897a4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2897a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2897a8:
    // 0x2897a8: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2897A8u;
    {
        const bool branch_taken_0x2897a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2897a8) {
            ctx->pc = 0x289798u;
            runtime->cooperativeGuestYield();
            goto label_289798;
        }
    }
    ctx->pc = 0x2897B0u;
    // 0x2897b0: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x2897b0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2897b4:
    // 0x2897b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2897b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2897b8: 0x651826  xor         $v1, $v1, $a1
    ctx->pc = 0x2897b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x2897bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2897BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2897C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2897BCu;
            // 0x2897c0: 0x83100a  movz        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x289688u: goto label_289688;
            case 0x28971Cu: goto label_28971c;
            case 0x28975Cu: goto label_28975c;
            case 0x289798u: goto label_289798;
            case 0x2897A4u: goto label_2897a4;
            case 0x2897A8u: goto label_2897a8;
            case 0x2897B4u: goto label_2897b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2897C4u;
}
