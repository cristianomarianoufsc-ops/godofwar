#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_289d38
// Address: 0x289d38 - 0x289f10
void entry_289d38_0x289f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_289d38_0x289f10");
#endif

    ctx->pc = 0x289d38u;

    // 0x289d38: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x289d38u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289d3c: 0xa43825  or          $a3, $a1, $a0
    ctx->pc = 0x289d3cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x289d40: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x289d40u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x289d44: 0x30e20007  andi        $v0, $a3, 0x7
    ctx->pc = 0x289d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)7);
    // 0x289d48: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x289d48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x289d4c: 0x14400058  bnez        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x289D4Cu;
    {
        const bool branch_taken_0x289d4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x289D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289D4Cu;
            // 0x289d50: 0x30e2000f  andi        $v0, $a3, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x289d4c) {
            ctx->pc = 0x289EB0u;
            goto label_289eb0;
        }
    }
    ctx->pc = 0x289D54u;
    // 0x289d54: 0x142480a  movz        $t1, $t2, $v0
    ctx->pc = 0x289d54u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 10));
    // 0x289d58: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x289D58u;
    {
        const bool branch_taken_0x289d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x289D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289D58u;
            // 0x289d5c: 0xc9102b  sltu        $v0, $a2, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x289d58) {
            ctx->pc = 0x289E14u;
            goto label_289e14;
        }
    }
    ctx->pc = 0x289D60u;
    // 0x289d60: 0x14400053  bnez        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x289D60u;
    {
        const bool branch_taken_0x289d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x289d60) {
            ctx->pc = 0x289EB0u;
            goto label_289eb0;
        }
    }
    ctx->pc = 0x289D68u;
    // 0x289d68: 0x34078080  ori         $a3, $zero, 0x8080
    ctx->pc = 0x289d68u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x289d6c: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x289d6cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x289d70: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x289d70u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x289d74: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x289d74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x289d78: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x289d78u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x289d7c: 0x73a78  dsll        $a3, $a3, 9
    ctx->pc = 0x289d7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 9);
    // 0x289d80: 0x34e70101  ori         $a3, $a3, 0x101
    ctx->pc = 0x289d80u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)257);
    // 0x289d84: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x289d84u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x289d88: 0x70e74b89  pcpyld      $t1, $a3, $a3
    ctx->pc = 0x289d88u;
    SET_GPR_VEC(ctx, 9, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 7)));
    // 0x289d8c: 0x70031ce9  pnor        $v1, $zero, $v1
    ctx->pc = 0x289d8cu;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 3)));
    // 0x289d90: 0x34078080  ori         $a3, $zero, 0x8080
    ctx->pc = 0x289d90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x289d94: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x289d94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x289d98: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x289d98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x289d9c: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x289d9cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x289da0: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x289da0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x289da4: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x289da4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x289da8: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x289da8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x289dac: 0x70691248  psubb       $v0, $v1, $t1
    ctx->pc = 0x289dacu;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x289db0: 0x70e75389  pcpyld      $t2, $a3, $a3
    ctx->pc = 0x289db0u;
    SET_GPR_VEC(ctx, 10, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 7)));
    // 0x289db4: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x289db4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x289db8: 0x704a1489  pand        $v0, $v0, $t2
    ctx->pc = 0x289db8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x289dbc: 0x70441ba9  pcpyud      $v1, $v0, $a0
    ctx->pc = 0x289dbcu;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x289dc0: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x289dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x289dc4: 0x14600039  bnez        $v1, . + 4 + (0x39 << 2)
    ctx->pc = 0x289DC4u;
    {
        const bool branch_taken_0x289dc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x289DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289DC4u;
            // 0x289dc8: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289dc4) {
            ctx->pc = 0x289EACu;
            goto label_289eac;
        }
    }
    ctx->pc = 0x289DCCu;
    // 0x289dcc: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x289dccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x289dd0: 0x24c6fff0  addiu       $a2, $a2, -0x10
    ctx->pc = 0x289dd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967280));
    // 0x289dd4: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x289dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x289dd8: 0x2cc20010  sltiu       $v0, $a2, 0x10
    ctx->pc = 0x289dd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x289ddc: 0x7ce30000  sq          $v1, 0x0($a3)
    ctx->pc = 0x289ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 3));
    // 0x289de0: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x289DE0u;
    {
        const bool branch_taken_0x289de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x289DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289DE0u;
            // 0x289de4: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289de0) {
            ctx->pc = 0x289EACu;
            goto label_289eac;
        }
    }
    ctx->pc = 0x289DE8u;
    // 0x289de8: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x289de8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x289dec: 0x70021ce9  pnor        $v1, $zero, $v0
    ctx->pc = 0x289decu;
    SET_GPR_VEC(ctx, 3, PS2_PNOR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x289df0: 0x70491248  psubb       $v0, $v0, $t1
    ctx->pc = 0x289df0u;
    SET_GPR_VEC(ctx, 2, PS2_PSUBB(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x289df4: 0x70431489  pand        $v0, $v0, $v1
    ctx->pc = 0x289df4u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x289df8: 0x704a1489  pand        $v0, $v0, $t2
    ctx->pc = 0x289df8u;
    SET_GPR_VEC(ctx, 2, PS2_PAND(GPR_VEC(ctx, 2), GPR_VEC(ctx, 10)));
    // 0x289dfc: 0x70441ba9  pcpyud      $v1, $v0, $a0
    ctx->pc = 0x289dfcu;
    SET_GPR_VEC(ctx, 3, _mm_unpackhi_epi64(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x289e00: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x289e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x289e04: 0x5040001c  beql        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x289E04u;
    {
        const bool branch_taken_0x289e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x289e04) {
            ctx->pc = 0x289E08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x289E04u;
            // 0x289e08: 0x78a30000  lq          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x289E78u;
            goto label_289e78;
        }
    }
    ctx->pc = 0x289E0Cu;
    // 0x289e0c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x289E0Cu;
    {
        const bool branch_taken_0x289e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x289E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289E0Cu;
            // 0x289e10: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289e0c) {
            ctx->pc = 0x289EB0u;
            goto label_289eb0;
        }
    }
    ctx->pc = 0x289E14u;
label_289e14:
    // 0x289e14: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x289E14u;
    {
        const bool branch_taken_0x289e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x289e14) {
            ctx->pc = 0x289EB0u;
            goto label_289eb0;
        }
    }
    ctx->pc = 0x289E1Cu;
    // 0x289e1c: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x289e1cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x289e20: 0x34098080  ori         $t1, $zero, 0x8080
    ctx->pc = 0x289e20u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x289e24: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x289e24u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x289e28: 0x35298080  ori         $t1, $t1, 0x8080
    ctx->pc = 0x289e28u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32896);
    // 0x289e2c: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x289e2cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x289e30: 0x35298080  ori         $t1, $t1, 0x8080
    ctx->pc = 0x289e30u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32896);
    // 0x289e34: 0x94a78  dsll        $t1, $t1, 9
    ctx->pc = 0x289e34u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 9);
    // 0x289e38: 0x35290101  ori         $t1, $t1, 0x101
    ctx->pc = 0x289e38u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)257);
    // 0x289e3c: 0x340a8080  ori         $t2, $zero, 0x8080
    ctx->pc = 0x289e3cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32896);
    // 0x289e40: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x289e40u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x289e44: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x289e44u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x289e48: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x289e48u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x289e4c: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x289e4cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x289e50: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x289e50u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x289e54: 0x354a8080  ori         $t2, $t2, 0x8080
    ctx->pc = 0x289e54u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32896);
    // 0x289e58: 0x69102f  dsubu       $v0, $v1, $t1
    ctx->pc = 0x289e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) - GPR_U64(ctx, 9));
    // 0x289e5c: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x289e5cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x289e60: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x289e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x289e64: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x289e64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x289e68: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x289E68u;
    {
        const bool branch_taken_0x289e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x289E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289E68u;
            // 0x289e6c: 0x100382d  daddu       $a3, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289e68) {
            ctx->pc = 0x289EACu;
            goto label_289eac;
        }
    }
    ctx->pc = 0x289E70u;
    // 0x289e70: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x289e70u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x289e74: 0x0  nop
    ctx->pc = 0x289e74u;
    // NOP
label_289e78:
    // 0x289e78: 0x24c6fff8  addiu       $a2, $a2, -0x8
    ctx->pc = 0x289e78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967288));
    // 0x289e7c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x289e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x289e80: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x289e80u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x289e84: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x289e84u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x289e88: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x289E88u;
    {
        const bool branch_taken_0x289e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x289E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289E88u;
            // 0x289e8c: 0x24e70008  addiu       $a3, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289e88) {
            ctx->pc = 0x289EACu;
            goto label_289eac;
        }
    }
    ctx->pc = 0x289E90u;
    // 0x289e90: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x289e90u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x289e94: 0x21827  nor         $v1, $zero, $v0
    ctx->pc = 0x289e94u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x289e98: 0x49102f  dsubu       $v0, $v0, $t1
    ctx->pc = 0x289e98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 9));
    // 0x289e9c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x289e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x289ea0: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x289ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x289ea4: 0x5040fff4  beql        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x289EA4u;
    {
        const bool branch_taken_0x289ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x289ea4) {
            ctx->pc = 0x289EA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x289EA4u;
            // 0x289ea8: 0xdca30000  ld          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x289E78u;
            runtime->cooperativeGuestYield();
            goto label_289e78;
        }
    }
    ctx->pc = 0x289EACu;
label_289eac:
    // 0x289eac: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x289eacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_289eb0:
    // 0x289eb0: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x289EB0u;
    {
        const bool branch_taken_0x289eb0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x289EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289EB0u;
            // 0x289eb4: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289eb0) {
            ctx->pc = 0x289EF8u;
            goto label_289ef8;
        }
    }
    ctx->pc = 0x289EB8u;
    // 0x289eb8: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x289eb8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x289ebc: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x289ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x289ec0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x289ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x289ec4: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x289ec4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x289ec8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x289ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x289ecc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x289ECCu;
    {
        const bool branch_taken_0x289ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x289ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289ECCu;
            // 0x289ed0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289ecc) {
            ctx->pc = 0x289EB0u;
            runtime->cooperativeGuestYield();
            goto label_289eb0;
        }
    }
    ctx->pc = 0x289ED4u;
    // 0x289ed4: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x289ed4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289ed8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x289ED8u;
    {
        const bool branch_taken_0x289ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x289EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289ED8u;
            // 0x289edc: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289ed8) {
            ctx->pc = 0x289EF8u;
            goto label_289ef8;
        }
    }
    ctx->pc = 0x289EE0u;
label_289ee0:
    // 0x289ee0: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x289ee0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x289ee4: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x289ee4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x289ee8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x289ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x289eec: 0x0  nop
    ctx->pc = 0x289eecu;
    // NOP
    // 0x289ef0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x289EF0u;
    {
        const bool branch_taken_0x289ef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x289EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289EF0u;
            // 0x289ef4: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x289ef0) {
            ctx->pc = 0x289EE0u;
            runtime->cooperativeGuestYield();
            goto label_289ee0;
        }
    }
    ctx->pc = 0x289EF8u;
label_289ef8:
    // 0x289ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x289EF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x289EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x289EF8u;
            // 0x289efc: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x289E14u: goto label_289e14;
            case 0x289E78u: goto label_289e78;
            case 0x289EACu: goto label_289eac;
            case 0x289EB0u: goto label_289eb0;
            case 0x289EE0u: goto label_289ee0;
            case 0x289EF8u: goto label_289ef8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x289F00u;
    // 0x289f00: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x289f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x289f04: 0x0  nop
    ctx->pc = 0x289f04u;
    // NOP
    // 0x289f08: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x289f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x289f0c: 0x0  nop
    ctx->pc = 0x289f0cu;
    // NOP
}
