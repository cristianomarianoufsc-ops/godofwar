#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002894F4
// Address: 0x2894f4 - 0x289624
void sub_002894F4_0x2894f4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002894F4_0x2894f4");
#endif

    ctx->pc = 0x2894f4u;

    // 0x2894f4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2894f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2894f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2894f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2894fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2894fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289500: 0x32020007  andi        $v0, $s0, 0x7
    ctx->pc = 0x289500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x289504: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x289504u;
    {
        const bool branch_taken_0x289504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x289508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289504u;
            // 0x289508: 0x7fbf0010  sq          $ra, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289504) {
            ctx->pc = 0x2895F0u;
            goto label_2895f0;
        }
    }
    ctx->pc = 0x28950Cu;
    // 0x28950c: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x28950cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x289510: 0x34038080  ori         $v1, $zero, 0x8080
    ctx->pc = 0x289510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x289514: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x289514u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x289518: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x289518u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x28951c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x28951cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x289520: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x289520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x289524: 0x31a78  dsll        $v1, $v1, 9
    ctx->pc = 0x289524u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 9);
    // 0x289528: 0x34630101  ori         $v1, $v1, 0x101
    ctx->pc = 0x289528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)257);
    // 0x28952c: 0x34048080  ori         $a0, $zero, 0x8080
    ctx->pc = 0x28952cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x289530: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x289530u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x289534: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x289534u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x289538: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x289538u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x28953c: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x28953cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x289540: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x289540u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x289544: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x289544u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x289548: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x289548u;
    {
        const bool branch_taken_0x289548 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28954Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289548u;
            // 0x28954c: 0xde060000  ld          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289548) {
            ctx->pc = 0x2895ACu;
            goto label_2895ac;
        }
    }
    ctx->pc = 0x289550u;
    // 0x289550: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x289550u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x289554: 0x70633b89  pcpyld      $a3, $v1, $v1
    ctx->pc = 0x289554u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
    // 0x289558: 0x70844389  pcpyld      $t0, $a0, $a0
    ctx->pc = 0x289558u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 4)));
    // 0x28955c: 0x70471a48  psubb       $v1, $v0, $a3
    ctx->pc = 0x28955cu;
    SET_GPR_VEC(ctx, 3, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x289560: 0x700214e9  pnor        $v0, $zero, $v0
    ctx->pc = 0x289560u;
    SET_GPR_VEC(ctx, 2, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x289564: 0x70621c89  pand        $v1, $v1, $v0
    ctx->pc = 0x289564u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x289568: 0x70681c89  pand        $v1, $v1, $t0
    ctx->pc = 0x289568u;
    SET_GPR_VEC(ctx, 3, PS2_PAND(GPR_VEC(ctx, 3), GPR_VEC(ctx, 8)));
    // 0x28956c: 0x706313a9  pcpyud      $v0, $v1, $v1
    ctx->pc = 0x28956cu;
    SET_GPR_VEC(ctx, 2, _mm_unpackhi_epi64(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
    // 0x289570: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x289570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x289574: 0x1460001e  bnez        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x289574u;
    {
        const bool branch_taken_0x289574 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x289578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289574u;
            // 0x289578: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289574) {
            ctx->pc = 0x2895F0u;
            goto label_2895f0;
        }
    }
    ctx->pc = 0x28957Cu;
    // 0x28957c: 0x24860010  addiu       $a2, $a0, 0x10
    ctx->pc = 0x28957cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_289580:
    // 0x289580: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x289580u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x289584: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x289584u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x289588: 0x70471248  psubb       $v0, $v0, $a3
    ctx->pc = 0x289588u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x28958c: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x28958cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x289590: 0x70481489  pand        $v0, $v0, $t0
    ctx->pc = 0x289590u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x289594: 0x70421ba9  pcpyud      $v1, $v0, $v0
    ctx->pc = 0x289594u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x289598: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x289598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x28959c: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x28959Cu;
    {
        const bool branch_taken_0x28959c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28959c) {
            ctx->pc = 0x2895A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28959Cu;
            // 0x2895a0: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x289580u;
            runtime->cooperativeGuestYield();
            goto label_289580;
        }
    }
    ctx->pc = 0x2895A4u;
    // 0x2895a4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x2895A4u;
    {
        const bool branch_taken_0x2895a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2895A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2895A4u;
            // 0x2895a8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2895a4) {
            ctx->pc = 0x2895F0u;
            goto label_2895f0;
        }
    }
    ctx->pc = 0x2895ACu;
label_2895ac:
    // 0x2895ac: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x2895acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2895b0: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x2895b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2895b4: 0xc3182f  dsubu       $v1, $a2, $v1
    ctx->pc = 0x2895b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) - GPR_U64(ctx, 3));
    // 0x2895b8: 0x61027  nor         $v0, $zero, $a2
    ctx->pc = 0x2895b8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 6)));
    // 0x2895bc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2895bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2895c0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2895c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2895c4: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x2895C4u;
    {
        const bool branch_taken_0x2895c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2895C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2895C4u;
            // 0x2895c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2895c4) {
            ctx->pc = 0x2895F0u;
            goto label_2895f0;
        }
    }
    ctx->pc = 0x2895CCu;
    // 0x2895cc: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x2895ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_2895d0:
    // 0x2895d0: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x2895d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2895d4: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x2895d4u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2895d8: 0x47102f  dsubu       $v0, $v0, $a3
    ctx->pc = 0x2895d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 7));
    // 0x2895dc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2895dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2895e0: 0x481024  and         $v0, $v0, $t0
    ctx->pc = 0x2895e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x2895e4: 0x5040fffa  beql        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2895E4u;
    {
        const bool branch_taken_0x2895e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2895e4) {
            ctx->pc = 0x2895E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2895E4u;
            // 0x2895e8: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2895D0u;
            runtime->cooperativeGuestYield();
            goto label_2895d0;
        }
    }
    ctx->pc = 0x2895ECu;
    // 0x2895ec: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x2895ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2895f0:
    // 0x2895f0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x2895f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2895f4: 0x0  nop
    ctx->pc = 0x2895f4u;
    // NOP
    // 0x2895f8: 0x0  nop
    ctx->pc = 0x2895f8u;
    // NOP
    // 0x2895fc: 0x0  nop
    ctx->pc = 0x2895fcu;
    // NOP
    // 0x289600: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x289600u;
    {
        const bool branch_taken_0x289600 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x289600) {
            ctx->pc = 0x289604u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x289600u;
            // 0x289604: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2895F0u;
            runtime->cooperativeGuestYield();
            goto label_2895f0;
        }
    }
    ctx->pc = 0x289608u;
    // 0x289608: 0xc0a2644  jal         func_289910
    ctx->pc = 0x289608u;
    SET_GPR_U32(ctx, 31, 0x289610u);
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289610u; }
        if (ctx->pc != 0x289610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x289610u; }
        if (ctx->pc != 0x289610u) { return; }
    }
    ctx->pc = 0x289610u;
    // 0x289610: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x289610u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289614: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x289614u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x289618: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x289618u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28961c: 0x3e00008  jr          $ra
    ctx->pc = 0x28961Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28961Cu;
            // 0x289620: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x289580u: goto label_289580;
            case 0x2895ACu: goto label_2895ac;
            case 0x2895D0u: goto label_2895d0;
            case 0x2895F0u: goto label_2895f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x289624u;
}
