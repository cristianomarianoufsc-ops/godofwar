#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_291130
// Address: 0x291130 - 0x291220
void entry_291130_0x291220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_291130_0x291220");
#endif

    ctx->pc = 0x291130u;

    // 0x291130: 0x2cc20010  sltiu       $v0, $a2, 0x10
    ctx->pc = 0x291130u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x291134: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x291134u;
    {
        const bool branch_taken_0x291134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x291138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291134u;
            // 0x291138: 0x30a500ff  andi        $a1, $a1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x291134) {
            ctx->pc = 0x2911D8u;
            goto label_2911d8;
        }
    }
    ctx->pc = 0x29113Cu;
    // 0x29113c: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x29113cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x291140: 0x14400025  bnez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x291140u;
    {
        const bool branch_taken_0x291140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x291144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291140u;
            // 0x291144: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291140) {
            ctx->pc = 0x2911D8u;
            goto label_2911d8;
        }
    }
    ctx->pc = 0x291148u;
    // 0x291148: 0x51a38  dsll        $v1, $a1, 8
    ctx->pc = 0x291148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 8);
    // 0x29114c: 0x34028080  ori         $v0, $zero, 0x8080
    ctx->pc = 0x29114cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x291150: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x291150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x291154: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x291154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x291158: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x291158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x29115c: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x29115cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x291160: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x291160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x291164: 0x34420101  ori         $v0, $v0, 0x101
    ctx->pc = 0x291164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
    // 0x291168: 0x65502d  daddu       $t2, $v1, $a1
    ctx->pc = 0x291168u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
    // 0x29116c: 0x34038080  ori         $v1, $zero, 0x8080
    ctx->pc = 0x29116cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x291170: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x291170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x291174: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x291174u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x291178: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x291178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x29117c: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x29117cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x291180: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x291180u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x291184: 0x34638080  ori         $v1, $v1, 0x8080
    ctx->pc = 0x291184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32896);
    // 0x291188: 0x700a46e9  pcpyh       $t0, $t2
    ctx->pc = 0x291188u;
    { __m128i src = GPR_VEC(ctx, 0); uint16_t l = _mm_extract_epi16(src, 0); uint16_t h = _mm_extract_epi16(src, 4); 
   SET_GPR_VEC(ctx, 8, _mm_set_epi16(h,h,h,h, l,l,l,l)); }
    // 0x29118c: 0x71084b89  pcpyld      $t1, $t0, $t0
    ctx->pc = 0x29118cu;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 8)));
    // 0x291190: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x291190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x291194: 0x70634389  pcpyld      $t0, $v1, $v1
    ctx->pc = 0x291194u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
label_291198:
    // 0x291198: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x291198u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x29119c: 0x704914c9  pxor        $v0, $v0, $t1
    ctx->pc = 0x29119cu;
    SET_GPR_VEC(ctx, 2, PS2_PXOR(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x2911a0: 0x70845389  pcpyld      $t2, $a0, $a0
    ctx->pc = 0x2911a0u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 4)));
    // 0x2911a4: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x2911a4u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x2911a8: 0x704a1248  psubb       $v0, $v0, $t2
    ctx->pc = 0x2911a8u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x2911ac: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x2911acu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x2911b0: 0x70481489  pand        $v0, $v0, $t0
    ctx->pc = 0x2911b0u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x2911b4: 0x70491ba9  pcpyud      $v1, $v0, $t1
    ctx->pc = 0x2911b4u;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x2911b8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2911b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2911bc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x2911BCu;
    {
        const bool branch_taken_0x2911bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2911bc) {
            ctx->pc = 0x2911C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2911BCu;
            // 0x2911c0: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2911D8u;
            goto label_2911d8;
        }
    }
    ctx->pc = 0x2911C4u;
    // 0x2911c4: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x2911c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x2911c8: 0x2cc20010  sltiu       $v0, $a2, 0x10
    ctx->pc = 0x2911c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2911cc: 0x1040fff2  beqz        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2911CCu;
    {
        const bool branch_taken_0x2911cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2911D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2911CCu;
            // 0x2911d0: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2911cc) {
            ctx->pc = 0x291198u;
            runtime->cooperativeGuestYield();
            goto label_291198;
        }
    }
    ctx->pc = 0x2911D4u;
    // 0x2911d4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2911d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2911d8:
    // 0x2911d8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2911d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2911dc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2911dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2911e0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2911e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2911e4: 0x10c20009  beq         $a2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2911E4u;
    {
        const bool branch_taken_0x2911e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x2911e4) {
            ctx->pc = 0x29120Cu;
            goto label_29120c;
        }
    }
    ctx->pc = 0x2911ECu;
    // 0x2911ec: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2911ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2911f0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2911f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2911f4:
    // 0x2911f4: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2911f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2911f8: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2911F8u;
    {
        const bool branch_taken_0x2911f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x2911FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2911F8u;
            // 0x2911fc: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2911f8) {
            ctx->pc = 0x291214u;
            goto label_291214;
        }
    }
    ctx->pc = 0x291200u;
    // 0x291200: 0x0  nop
    ctx->pc = 0x291200u;
    // NOP
    // 0x291204: 0x14c3fffb  bne         $a2, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x291204u;
    {
        const bool branch_taken_0x291204 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x291208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291204u;
            // 0x291208: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x291204) {
            ctx->pc = 0x2911F4u;
            runtime->cooperativeGuestYield();
            goto label_2911f4;
        }
    }
    ctx->pc = 0x29120Cu;
label_29120c:
    // 0x29120c: 0x3e00008  jr          $ra
    ctx->pc = 0x29120Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29120Cu;
            // 0x291210: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x291198u: goto label_291198;
            case 0x2911D8u: goto label_2911d8;
            case 0x2911F4u: goto label_2911f4;
            case 0x29120Cu: goto label_29120c;
            case 0x291214u: goto label_291214;
            default: break;
        }
        return;
    }
    ctx->pc = 0x291214u;
label_291214:
    // 0x291214: 0x3e00008  jr          $ra
    ctx->pc = 0x291214u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x291218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x291214u;
            // 0x291218: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x291198u: goto label_291198;
            case 0x2911D8u: goto label_2911d8;
            case 0x2911F4u: goto label_2911f4;
            case 0x29120Cu: goto label_29120c;
            case 0x291214u: goto label_291214;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29121Cu;
    // 0x29121c: 0x0  nop
    ctx->pc = 0x29121cu;
    // NOP
}
