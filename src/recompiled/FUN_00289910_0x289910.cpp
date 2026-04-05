#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: FUN_00289910
// Address: 0x289910 - 0x289a28
void FUN_00289910_0x289910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("FUN_00289910_0x289910");
#endif

    ctx->pc = 0x289910u;

    // 0x289910: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x289910u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289914: 0xa74025  or          $t0, $a1, $a3
    ctx->pc = 0x289914u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x289918: 0x31020007  andi        $v0, $t0, 0x7
    ctx->pc = 0x289918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)7);
    // 0x28991c: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x28991Cu;
    {
        const bool branch_taken_0x28991c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x289920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28991Cu;
            // 0x289920: 0xe0182d  daddu       $v1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28991c) {
            ctx->pc = 0x289A08u;
            goto label_289a08;
        }
    }
    ctx->pc = 0x289924u;
    // 0x289924: 0x3102000f  andi        $v0, $t0, 0xF
    ctx->pc = 0x289924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15);
    // 0x289928: 0x34098080  ori         $t1, $zero, 0x8080
    ctx->pc = 0x289928u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x28992c: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x28992cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x289930: 0x35298080  ori         $t1, $t1, 0x8080
    ctx->pc = 0x289930u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32896);
    // 0x289934: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x289934u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x289938: 0x35298080  ori         $t1, $t1, 0x8080
    ctx->pc = 0x289938u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32896);
    // 0x28993c: 0x94a78  dsll        $t1, $t1, 9
    ctx->pc = 0x28993cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 9);
    // 0x289940: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x289940u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x289944: 0x34048080  ori         $a0, $zero, 0x8080
    ctx->pc = 0x289944u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x289948: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x289948u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x28994c: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x28994cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x289950: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x289950u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x289954: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x289954u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x289958: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x289958u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x28995c: 0x34848080  ori         $a0, $a0, 0x8080
    ctx->pc = 0x28995cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32896);
    // 0x289960: 0x54400019  bnel        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x289960u;
    {
        const bool branch_taken_0x289960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x289960) {
            ctx->pc = 0x289964u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x289960u;
            // 0x289964: 0xdcaa0000  ld          $t2, 0x0($a1) (Delay Slot)
        SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2899C8u;
            goto label_2899c8;
        }
    }
    ctx->pc = 0x289968u;
    // 0x289968: 0x71295389  pcpyld      $t2, $t1, $t1
    ctx->pc = 0x289968u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 9)));
    // 0x28996c: 0x78a90000  lq          $t1, 0x0($a1)
    ctx->pc = 0x28996cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x289970: 0x70844389  pcpyld      $t0, $a0, $a0
    ctx->pc = 0x289970u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 4)));
    // 0x289974: 0x712a1248  psubb       $v0, $t1, $t2
    ctx->pc = 0x289974u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x289978: 0x70091ce9  pnor        $v1, $zero, $t1
    ctx->pc = 0x289978u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
    // 0x28997c: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x28997cu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x289980: 0x70481489  pand        $v0, $v0, $t0
    ctx->pc = 0x289980u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x289984: 0x704923a9  pcpyud      $a0, $v0, $t1
    ctx->pc = 0x289984u;
    SET_GPR_VEC(ctx, 4, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x289988: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x289988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x28998c: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
    ctx->pc = 0x28998Cu;
    {
        const bool branch_taken_0x28998c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x289990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28998Cu;
            // 0x289990: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28998c) {
            ctx->pc = 0x289A04u;
            goto label_289a04;
        }
    }
    ctx->pc = 0x289994u;
label_289994:
    // 0x289994: 0x7cc90000  sq          $t1, 0x0($a2)
    ctx->pc = 0x289994u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 9));
    // 0x289998: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x289998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x28999c: 0x78a90000  lq          $t1, 0x0($a1)
    ctx->pc = 0x28999cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2899a0: 0x712a1248  psubb       $v0, $t1, $t2
    ctx->pc = 0x2899a0u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 9), GPR_VEC(ctx, 10)));
    // 0x2899a4: 0x70091ce9  pnor        $v1, $zero, $t1
    ctx->pc = 0x2899a4u;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 9)));
    // 0x2899a8: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x2899a8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x2899ac: 0x70481489  pand        $v0, $v0, $t0
    ctx->pc = 0x2899acu;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 8)));
    // 0x2899b0: 0x704923a9  pcpyud      $a0, $v0, $t1
    ctx->pc = 0x2899b0u;
    SET_GPR_VEC(ctx, 4, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x2899b4: 0x441825  or          $v1, $v0, $a0
    ctx->pc = 0x2899b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x2899b8: 0x1060fff6  beqz        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2899B8u;
    {
        const bool branch_taken_0x2899b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2899BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2899B8u;
            // 0x2899bc: 0x24c60010  addiu       $a2, $a2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2899b8) {
            ctx->pc = 0x289994u;
            runtime->cooperativeGuestYield();
            goto label_289994;
        }
    }
    ctx->pc = 0x2899C0u;
    // 0x2899c0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2899C0u;
    {
        const bool branch_taken_0x2899c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2899C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2899C0u;
            // 0x2899c4: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2899c0) {
            ctx->pc = 0x289A08u;
            goto label_289a08;
        }
    }
    ctx->pc = 0x2899C8u;
label_2899c8:
    // 0x2899c8: 0x149102f  dsubu       $v0, $t2, $t1
    ctx->pc = 0x2899c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) - GPR_U64(ctx, 9));
    // 0x2899cc: 0xa1827  nor         $v1, $zero, $t2
    ctx->pc = 0x2899ccu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 10)));
    // 0x2899d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2899d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2899d4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2899d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2899d8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2899D8u;
    {
        const bool branch_taken_0x2899d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2899DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2899D8u;
            // 0x2899dc: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2899d8) {
            ctx->pc = 0x289A04u;
            goto label_289a04;
        }
    }
    ctx->pc = 0x2899E0u;
label_2899e0:
    // 0x2899e0: 0xfcca0000  sd          $t2, 0x0($a2)
    ctx->pc = 0x2899e0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 10));
    // 0x2899e4: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x2899e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x2899e8: 0xdcaa0000  ld          $t2, 0x0($a1)
    ctx->pc = 0x2899e8u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2899ec: 0xa1027  nor         $v0, $zero, $t2
    ctx->pc = 0x2899ecu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 10)));
    // 0x2899f0: 0x149182f  dsubu       $v1, $t2, $t1
    ctx->pc = 0x2899f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) - GPR_U64(ctx, 9));
    // 0x2899f4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2899f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2899f8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2899f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2899fc: 0x1060fff8  beqz        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2899FCu;
    {
        const bool branch_taken_0x2899fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x289A00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2899FCu;
            // 0x289a00: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2899fc) {
            ctx->pc = 0x2899E0u;
            runtime->cooperativeGuestYield();
            goto label_2899e0;
        }
    }
    ctx->pc = 0x289A04u;
label_289a04:
    // 0x289a04: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x289a04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_289a08:
    // 0x289a08: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x289a08u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x289a0c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x289a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x289a10: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x289a10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x289a14: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x289a14u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x289a18: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x289A18u;
    {
        const bool branch_taken_0x289a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x289A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289A18u;
            // 0x289a1c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289a18) {
            ctx->pc = 0x289A08u;
            runtime->cooperativeGuestYield();
            goto label_289a08;
        }
    }
    ctx->pc = 0x289A20u;
    // 0x289a20: 0x3e00008  jr          $ra
    ctx->pc = 0x289A20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289A20u;
            // 0x289a24: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x289994u: goto label_289994;
            case 0x2899C8u: goto label_2899c8;
            case 0x2899E0u: goto label_2899e0;
            case 0x289A04u: goto label_289a04;
            case 0x289A08u: goto label_289a08;
            default: break;
        }
        return;
    }
    ctx->pc = 0x289A28u;
}
