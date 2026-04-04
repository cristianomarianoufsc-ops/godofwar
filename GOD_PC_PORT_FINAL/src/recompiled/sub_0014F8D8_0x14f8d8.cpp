#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0014F8D8
// Address: 0x14f8d8 - 0x14fcd8
void sub_0014F8D8_0x14f8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014F8D8_0x14f8d8");
#endif

    ctx->pc = 0x14f8d8u;

    // 0x14f8d8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x14f8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x14f8dc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x14f8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x14f8e0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x14f8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x14f8e4: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x14f8e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x14f8e8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x14f8e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f8ec: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x14f8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x14f8f0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x14f8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x14f8f4: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x14f8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x14f8f8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x14f8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x14f8fc: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x14f8fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x14f900: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x14f900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x14f904: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x14f904u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x14f908: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14f908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14f90c: 0xac403828  sw          $zero, 0x3828($v0)
    ctx->pc = 0x14f90cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 14376), GPR_U32(ctx, 0));
    // 0x14f910: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x14f910u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f914: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x14f914u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14f918:
    // 0x14f918: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x14f918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x14f91c: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x14f91cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x14f920: 0x2842018  mult        $a0, $s4, $a0
    ctx->pc = 0x14f920u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x14f924: 0x151900  sll         $v1, $s5, 4
    ctx->pc = 0x14f924u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x14f928: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14f928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14f92c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x14f92cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14f930: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x14f930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x14f934: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x14f934u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x14f938: 0x246310b8  addiu       $v1, $v1, 0x10B8
    ctx->pc = 0x14f938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4280));
    // 0x14f93c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x14f93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x14f940: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14f940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14f944: 0x2a640004  slti        $a0, $s3, 0x4
    ctx->pc = 0x14f944u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x14f948: 0x1480fff3  bnez        $a0, . + 4 + (-0xD << 2)
    ctx->pc = 0x14F948u;
    {
        const bool branch_taken_0x14f948 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F94Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F948u;
            // 0x14f94c: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f948) {
            ctx->pc = 0x14F918u;
            runtime->cooperativeGuestYield();
            goto label_14f918;
        }
    }
    ctx->pc = 0x14F950u;
    // 0x14f950: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x14f950u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x14f954: 0x2aa2000a  slti        $v0, $s5, 0xA
    ctx->pc = 0x14f954u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x14f958: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x14F958u;
    {
        const bool branch_taken_0x14f958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F95Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F958u;
            // 0x14f95c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f958) {
            ctx->pc = 0x14F918u;
            runtime->cooperativeGuestYield();
            goto label_14f918;
        }
    }
    ctx->pc = 0x14F960u;
    // 0x14f960: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x14f960u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x14f964: 0x2a82000a  slti        $v0, $s4, 0xA
    ctx->pc = 0x14f964u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x14f968: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x14F968u;
    {
        const bool branch_taken_0x14f968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14F96Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F968u;
            // 0x14f96c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f968) {
            ctx->pc = 0x14F918u;
            runtime->cooperativeGuestYield();
            goto label_14f918;
        }
    }
    ctx->pc = 0x14F970u;
    // 0x14f970: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x14f970u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14f974: 0x0  nop
    ctx->pc = 0x14f974u;
    // NOP
label_14f978:
    // 0x14f978: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x14f978u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f97c: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x14f97cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14f980:
    // 0x14f980: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x14f980u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f984: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x14f984u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14f988:
    // 0x14f988: 0x240300a0  addiu       $v1, $zero, 0xA0
    ctx->pc = 0x14f988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x14f98c: 0x151100  sll         $v0, $s5, 4
    ctx->pc = 0x14f98cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x14f990: 0x2831818  mult        $v1, $s4, $v1
    ctx->pc = 0x14f990u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x14f994: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x14f994u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x14f998: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x14f998u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x14f99c: 0x3c21021  addu        $v0, $fp, $v0
    ctx->pc = 0x14f99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
    // 0x14f9a0: 0x24a410b8  addiu       $a0, $a1, 0x10B8
    ctx->pc = 0x14f9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4280));
    // 0x14f9a4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x14f9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14f9a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14f9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14f9ac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x14f9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x14f9b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14f9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14f9b4: 0x5445009d  bnel        $v0, $a1, . + 4 + (0x9D << 2)
    ctx->pc = 0x14F9B4u;
    {
        const bool branch_taken_0x14f9b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x14f9b4) {
            ctx->pc = 0x14F9B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14F9B4u;
            // 0x14f9b8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14FC2Cu;
            goto label_14fc2c;
        }
    }
    ctx->pc = 0x14F9BCu;
    // 0x14f9bc: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x14f9bcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
    // 0x14f9c0: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x14f9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x14f9c4: 0x8e423828  lw          $v0, 0x3828($s2)
    ctx->pc = 0x14f9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 14376)));
    // 0x14f9c8: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x14f9c8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x14f9cc: 0x26073128  addiu       $a3, $s0, 0x3128
    ctx->pc = 0x14f9ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 12584));
    // 0x14f9d0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14f9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14f9d4: 0x433018  mult        $a2, $v0, $v1
    ctx->pc = 0x14f9d4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x14f9d8: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x14f9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x14f9dc: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x14f9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x14f9e0: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x14f9e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
    // 0x14f9e4: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x14f9e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14f9e8: 0xac770004  sw          $s7, 0x4($v1)
    ctx->pc = 0x14f9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 23));
    // 0x14f9ec: 0x12640018  beq         $s3, $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x14F9ECu;
    {
        const bool branch_taken_0x14f9ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 4));
        ctx->pc = 0x14F9F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F9ECu;
            // 0x14f9f0: 0xac530008  sw          $s3, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f9ec) {
            ctx->pc = 0x14FA50u;
            goto label_14fa50;
        }
    }
    ctx->pc = 0x14F9F4u;
    // 0x14f9f4: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x14f9f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x14f9f8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14F9F8u;
    {
        const bool branch_taken_0x14f9f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14F9FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14F9F8u;
            // 0x14f9fc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14f9f8) {
            ctx->pc = 0x14FA10u;
            goto label_14fa10;
        }
    }
    ctx->pc = 0x14FA00u;
    // 0x14fa00: 0x1260000a  beqz        $s3, . + 4 + (0xA << 2)
    ctx->pc = 0x14FA00u;
    {
        const bool branch_taken_0x14fa00 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FA00u;
            // 0x14fa04: 0x2d71818  mult        $v1, $s6, $s7 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fa00) {
            ctx->pc = 0x14FA2Cu;
            goto label_14fa2c;
        }
    }
    ctx->pc = 0x14FA08u;
    // 0x14fa08: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x14FA08u;
    {
        const bool branch_taken_0x14fa08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FA08u;
            // 0x14fa0c: 0x8e473828  lw          $a3, 0x3828($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 14376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fa08) {
            ctx->pc = 0x14FA98u;
            goto label_14fa98;
        }
    }
    ctx->pc = 0x14FA10u;
label_14fa10:
    // 0x14fa10: 0x12620016  beq         $s3, $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x14FA10u;
    {
        const bool branch_taken_0x14fa10 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x14FA14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FA10u;
            // 0x14fa14: 0x2d71018  mult        $v0, $s6, $s7 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fa10) {
            ctx->pc = 0x14FA6Cu;
            goto label_14fa6c;
        }
    }
    ctx->pc = 0x14FA18u;
    // 0x14fa18: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x14fa18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x14fa1c: 0x12620018  beq         $s3, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x14FA1Cu;
    {
        const bool branch_taken_0x14fa1c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x14FA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FA1Cu;
            // 0x14fa20: 0x2d71018  mult        $v0, $s6, $s7 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fa1c) {
            ctx->pc = 0x14FA80u;
            goto label_14fa80;
        }
    }
    ctx->pc = 0x14FA24u;
    // 0x14fa24: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x14FA24u;
    {
        const bool branch_taken_0x14fa24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FA28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FA24u;
            // 0x14fa28: 0x8e473828  lw          $a3, 0x3828($s2) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 14376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fa24) {
            ctx->pc = 0x14FA98u;
            goto label_14fa98;
        }
    }
    ctx->pc = 0x14FA2Cu;
label_14fa2c:
    // 0x14fa2c: 0xe62021  addu        $a0, $a3, $a2
    ctx->pc = 0x14fa2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x14fa30: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x14fa30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x14fa34: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x14fa34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fa38: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x14fa38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x14fa3c: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x14fa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x14fa40: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14fa40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14fa44: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x14fa44u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x14fa48: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x14FA48u;
    {
        const bool branch_taken_0x14fa48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FA4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FA48u;
            // 0x14fa4c: 0xaca30010  sw          $v1, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fa48) {
            ctx->pc = 0x14FA94u;
            goto label_14fa94;
        }
    }
    ctx->pc = 0x14FA50u;
label_14fa50:
    // 0x14fa50: 0x2d72818  mult        $a1, $s6, $s7
    ctx->pc = 0x14fa50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x14fa54: 0xe62021  addu        $a0, $a3, $a2
    ctx->pc = 0x14fa54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x14fa58: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x14fa58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x14fa5c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x14fa5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fa60: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x14fa60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x14fa64: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x14FA64u;
    {
        const bool branch_taken_0x14fa64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FA64u;
            // 0x14fa68: 0xac650010  sw          $a1, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fa64) {
            ctx->pc = 0x14FA94u;
            goto label_14fa94;
        }
    }
    ctx->pc = 0x14FA6Cu;
label_14fa6c:
    // 0x14fa6c: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x14fa6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x14fa70: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x14fa70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fa74: 0xac73000c  sw          $s3, 0xC($v1)
    ctx->pc = 0x14fa74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 19));
    // 0x14fa78: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x14FA78u;
    {
        const bool branch_taken_0x14fa78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FA7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FA78u;
            // 0x14fa7c: 0x21040  sll         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fa78) {
            ctx->pc = 0x14FA90u;
            goto label_14fa90;
        }
    }
    ctx->pc = 0x14FA80u;
label_14fa80:
    // 0x14fa80: 0xe61821  addu        $v1, $a3, $a2
    ctx->pc = 0x14fa80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
    // 0x14fa84: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x14fa84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fa88: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x14fa88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x14fa8c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14fa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_14fa90:
    // 0x14fa90: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x14fa90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
label_14fa94:
    // 0x14fa94: 0x8e473828  lw          $a3, 0x3828($s2)
    ctx->pc = 0x14fa94u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 14376)));
label_14fa98:
    // 0x14fa98: 0x2411001c  addiu       $s1, $zero, 0x1C
    ctx->pc = 0x14fa98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x14fa9c: 0x26103128  addiu       $s0, $s0, 0x3128
    ctx->pc = 0x14fa9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12584));
    // 0x14faa0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x14faa0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14faa4: 0xf13818  mult        $a3, $a3, $s1
    ctx->pc = 0x14faa4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x14faa8: 0x260a0018  addiu       $t2, $s0, 0x18
    ctx->pc = 0x14faa8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x14faac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x14faacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fab0: 0x2071821  addu        $v1, $s0, $a3
    ctx->pc = 0x14fab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x14fab4: 0xf01021  addu        $v0, $a3, $s0
    ctx->pc = 0x14fab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
    // 0x14fab8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x14fab8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fabc: 0x84650004  lh          $a1, 0x4($v1)
    ctx->pc = 0x14fabcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x14fac0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x14fac0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14fac4: 0xea3821  addu        $a3, $a3, $t2
    ctx->pc = 0x14fac4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 10)));
    // 0x14fac8: 0xc0534de  jal         func_14D378
    ctx->pc = 0x14FAC8u;
    SET_GPR_U32(ctx, 31, 0x14FAD0u);
    ctx->pc = 0x14FACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14FAC8u;
            // 0x14facc: 0x94c6000c  lhu         $a2, 0xC($a2) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14D378u;
    if (runtime->hasFunction(0x14D378u)) {
        auto targetFn = runtime->lookupFunction(0x14D378u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FAD0u; }
        if (ctx->pc != 0x14FAD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014D378_0x14d378(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FAD0u; }
        if (ctx->pc != 0x14FAD0u) { return; }
    }
    ctx->pc = 0x14FAD0u;
    // 0x14fad0: 0x8e433828  lw          $v1, 0x3828($s2)
    ctx->pc = 0x14fad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 14376)));
    // 0x14fad4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x14fad4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fad8: 0x712018  mult        $a0, $v1, $s1
    ctx->pc = 0x14fad8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x14fadc: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x14fadcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fae0: 0x908821  addu        $s1, $a0, $s0
    ctx->pc = 0x14fae0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x14fae4: 0x19000034  blez        $t0, . + 4 + (0x34 << 2)
    ctx->pc = 0x14FAE4u;
    {
        const bool branch_taken_0x14fae4 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x14FAE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FAE4u;
            // 0x14fae8: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fae4) {
            ctx->pc = 0x14FBB8u;
            goto label_14fbb8;
        }
    }
    ctx->pc = 0x14FAECu;
    // 0x14faec: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x14faecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_14faf0:
    // 0x14faf0: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x14faf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x14faf4: 0x8c473828  lw          $a3, 0x3828($v0)
    ctx->pc = 0x14faf4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14376)));
    // 0x14faf8: 0x3c090033  lui         $t1, 0x33
    ctx->pc = 0x14faf8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)51 << 16));
    // 0x14fafc: 0xa41018  mult        $v0, $a1, $a0
    ctx->pc = 0x14fafcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x14fb00: 0x25233128  addiu       $v1, $t1, 0x3128
    ctx->pc = 0x14fb00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 12584));
    // 0x14fb04: 0xe43018  mult        $a2, $a3, $a0
    ctx->pc = 0x14fb04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x14fb08: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x14fb08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x14fb0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14fb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14fb10: 0xc32021  addu        $a0, $a2, $v1
    ctx->pc = 0x14fb10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x14fb14: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x14fb14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14fb18: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x14fb18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14fb1c: 0x14620020  bne         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x14FB1Cu;
    {
        const bool branch_taken_0x14fb1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x14FB20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FB1Cu;
            // 0x14fb20: 0x120602d  daddu       $t4, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fb1c) {
            ctx->pc = 0x14FBA0u;
            goto label_14fba0;
        }
    }
    ctx->pc = 0x14FB24u;
    // 0x14fb24: 0x18600017  blez        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x14FB24u;
    {
        const bool branch_taken_0x14fb24 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x14FB28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FB24u;
            // 0x14fb28: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fb24) {
            ctx->pc = 0x14FB84u;
            goto label_14fb84;
        }
    }
    ctx->pc = 0x14FB2Cu;
    // 0x14fb2c: 0xe0582d  daddu       $t3, $a3, $zero
    ctx->pc = 0x14fb2cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14fb30: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x14fb30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x14fb34: 0x258a3128  addiu       $t2, $t4, 0x3128
    ctx->pc = 0x14fb34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 12), 12584));
label_14fb38:
    // 0x14fb38: 0x1641818  mult        $v1, $t3, $a0
    ctx->pc = 0x14fb38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 11) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x14fb3c: 0xa43818  mult        $a3, $a1, $a0
    ctx->pc = 0x14fb3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x14fb40: 0x25420014  addiu       $v0, $t2, 0x14
    ctx->pc = 0x14fb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 20));
    // 0x14fb44: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x14fb44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14fb48: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x14fb48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x14fb4c: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x14fb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x14fb50: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14fb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14fb54: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x14fb54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x14fb58: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x14fb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14fb5c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14fb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14fb60: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x14fb60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14fb64: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x14fb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14fb68: 0x14820006  bne         $a0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14FB68u;
    {
        const bool branch_taken_0x14fb68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x14FB6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FB68u;
            // 0x14fb6c: 0x1471021  addu        $v0, $t2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fb68) {
            ctx->pc = 0x14FB84u;
            goto label_14fb84;
        }
    }
    ctx->pc = 0x14FB70u;
    // 0x14fb70: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x14fb70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x14fb74: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x14fb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x14fb78: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x14fb78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14fb7c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x14FB7Cu;
    {
        const bool branch_taken_0x14fb7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14FB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FB7Cu;
            // 0x14fb80: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fb7c) {
            ctx->pc = 0x14FB38u;
            runtime->cooperativeGuestYield();
            goto label_14fb38;
        }
    }
    ctx->pc = 0x14FB84u;
label_14fb84:
    // 0x14fb84: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x14fb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x14fb88: 0x25233128  addiu       $v1, $t1, 0x3128
    ctx->pc = 0x14fb88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 12584));
    // 0x14fb8c: 0xa21018  mult        $v0, $a1, $v0
    ctx->pc = 0x14fb8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x14fb90: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14fb90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14fb94: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x14fb94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x14fb98: 0x50c20007  beql        $a2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x14FB98u;
    {
        const bool branch_taken_0x14fb98 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x14fb98) {
            ctx->pc = 0x14FB9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14FB98u;
            // 0x14fb9c: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14FBB8u;
            goto label_14fbb8;
        }
    }
    ctx->pc = 0x14FBA0u;
label_14fba0:
    // 0x14fba0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x14fba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x14fba4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x14fba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14fba8: 0x8c423828  lw          $v0, 0x3828($v0)
    ctx->pc = 0x14fba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 14376)));
    // 0x14fbac: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x14fbacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14fbb0: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x14FBB0u;
    {
        const bool branch_taken_0x14fbb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14FBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FBB0u;
            // 0x14fbb4: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fbb0) {
            ctx->pc = 0x14FAF0u;
            runtime->cooperativeGuestYield();
            goto label_14faf0;
        }
    }
    ctx->pc = 0x14FBB8u;
label_14fbb8:
    // 0x14fbb8: 0x240300a0  addiu       $v1, $zero, 0xA0
    ctx->pc = 0x14fbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x14fbbc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x14fbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x14fbc0: 0x2831818  mult        $v1, $s4, $v1
    ctx->pc = 0x14fbc0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x14fbc4: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x14fbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x14fbc8: 0x3c41021  addu        $v0, $fp, $a0
    ctx->pc = 0x14fbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 4)));
    // 0x14fbcc: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x14fbccu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
    // 0x14fbd0: 0x24a410b8  addiu       $a0, $a1, 0x10B8
    ctx->pc = 0x14fbd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4280));
    // 0x14fbd4: 0x8e453828  lw          $a1, 0x3828($s2)
    ctx->pc = 0x14fbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 14376)));
    // 0x14fbd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14fbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14fbdc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x14fbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x14fbe0: 0x15050005  bne         $t0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14FBE0u;
    {
        const bool branch_taken_0x14fbe0 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 5));
        ctx->pc = 0x14FBE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FBE0u;
            // 0x14fbe4: 0xac480000  sw          $t0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fbe0) {
            ctx->pc = 0x14FBF8u;
            goto label_14fbf8;
        }
    }
    ctx->pc = 0x14FBE8u;
    // 0x14fbe8: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x14fbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14fbec: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x14fbecu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x14fbf0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x14FBF0u;
    {
        const bool branch_taken_0x14fbf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14FBF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FBF0u;
            // 0x14fbf4: 0xae423828  sw          $v0, 0x3828($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 14376), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fbf0) {
            ctx->pc = 0x14FC2Cu;
            goto label_14fc2c;
        }
    }
    ctx->pc = 0x14FBF8u;
label_14fbf8:
    // 0x14fbf8: 0x2411001c  addiu       $s1, $zero, 0x1C
    ctx->pc = 0x14fbf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x14fbfc: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x14fbfcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x14fc00: 0xb11018  mult        $v0, $a1, $s1
    ctx->pc = 0x14fc00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x14fc04: 0x26103128  addiu       $s0, $s0, 0x3128
    ctx->pc = 0x14fc04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12584));
    // 0x14fc08: 0x26100014  addiu       $s0, $s0, 0x14
    ctx->pc = 0x14fc08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x14fc0c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x14fc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x14fc10: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x14FC10u;
    SET_GPR_U32(ctx, 31, 0x14FC18u);
    ctx->pc = 0x14FC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14FC10u;
            // 0x14fc14: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FC18u; }
        if (ctx->pc != 0x14FC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FC18u; }
        if (ctx->pc != 0x14FC18u) { return; }
    }
    ctx->pc = 0x14FC18u;
    // 0x14fc18: 0x8e423828  lw          $v0, 0x3828($s2)
    ctx->pc = 0x14fc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 14376)));
    // 0x14fc1c: 0x511818  mult        $v1, $v0, $s1
    ctx->pc = 0x14fc1cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x14fc20: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x14fc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x14fc24: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x14fc24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x14fc28: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x14fc28u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_14fc2c:
    // 0x14fc2c: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x14fc2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x14fc30: 0x1440ff55  bnez        $v0, . + 4 + (-0xAB << 2)
    ctx->pc = 0x14FC30u;
    {
        const bool branch_taken_0x14fc30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14FC34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FC30u;
            // 0x14fc34: 0x27de0004  addiu       $fp, $fp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fc30) {
            ctx->pc = 0x14F988u;
            runtime->cooperativeGuestYield();
            goto label_14f988;
        }
    }
    ctx->pc = 0x14FC38u;
    // 0x14fc38: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x14fc38u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x14fc3c: 0x2a82000a  slti        $v0, $s4, 0xA
    ctx->pc = 0x14fc3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x14fc40: 0x1440ff4f  bnez        $v0, . + 4 + (-0xB1 << 2)
    ctx->pc = 0x14FC40u;
    {
        const bool branch_taken_0x14fc40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14FC44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FC40u;
            // 0x14fc44: 0x16b040  sll         $s6, $s6, 1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fc40) {
            ctx->pc = 0x14F980u;
            runtime->cooperativeGuestYield();
            goto label_14f980;
        }
    }
    ctx->pc = 0x14FC48u;
    // 0x14fc48: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x14fc48u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x14fc4c: 0x2aa2000a  slti        $v0, $s5, 0xA
    ctx->pc = 0x14fc4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x14fc50: 0x1440ff49  bnez        $v0, . + 4 + (-0xB7 << 2)
    ctx->pc = 0x14FC50u;
    {
        const bool branch_taken_0x14fc50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14FC54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FC50u;
            // 0x14fc54: 0x17b840  sll         $s7, $s7, 1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fc50) {
            ctx->pc = 0x14F978u;
            runtime->cooperativeGuestYield();
            goto label_14f978;
        }
    }
    ctx->pc = 0x14FC58u;
    // 0x14fc58: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x14fc58u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x14fc5c: 0x8e223828  lw          $v0, 0x3828($s1)
    ctx->pc = 0x14fc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 14376)));
    // 0x14fc60: 0x1840000e  blez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x14FC60u;
    {
        const bool branch_taken_0x14fc60 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x14FC64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FC60u;
            // 0x14fc64: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fc60) {
            ctx->pc = 0x14FC9Cu;
            goto label_14fc9c;
        }
    }
    ctx->pc = 0x14FC68u;
label_14fc68:
    // 0x14fc68: 0x2410001c  addiu       $s0, $zero, 0x1C
    ctx->pc = 0x14fc68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x14fc6c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x14fc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x14fc70: 0x2908018  mult        $s0, $s4, $s0
    ctx->pc = 0x14fc70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x14fc74: 0x24423128  addiu       $v0, $v0, 0x3128
    ctx->pc = 0x14fc74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12584));
    // 0x14fc78: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x14fc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x14fc7c: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x14fc7cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x14fc80: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x14fc80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x14fc84: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x14FC84u;
    SET_GPR_U32(ctx, 31, 0x14FC8Cu);
    ctx->pc = 0x14FC88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14FC84u;
            // 0x14fc88: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FC8Cu; }
        if (ctx->pc != 0x14FC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14FC8Cu; }
        if (ctx->pc != 0x14FC8Cu) { return; }
    }
    ctx->pc = 0x14FC8Cu;
    // 0x14fc8c: 0x8e223828  lw          $v0, 0x3828($s1)
    ctx->pc = 0x14fc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 14376)));
    // 0x14fc90: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x14fc90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14fc94: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x14FC94u;
    {
        const bool branch_taken_0x14fc94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14FC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FC94u;
            // 0x14fc98: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14fc94) {
            ctx->pc = 0x14FC68u;
            runtime->cooperativeGuestYield();
            goto label_14fc68;
        }
    }
    ctx->pc = 0x14FC9Cu;
label_14fc9c:
    // 0x14fc9c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x14fc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x14fca0: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x14fca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x14fca4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x14fca4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x14fca8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x14fca8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x14fcac: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x14fcacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x14fcb0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x14fcb0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14fcb4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x14fcb4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14fcb8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x14fcb8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14fcbc: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x14fcbcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14fcc0: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x14fcc0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14fcc4: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x14fcc4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14fcc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14fcc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14fccc: 0xac623138  sw          $v0, 0x3138($v1)
    ctx->pc = 0x14fcccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12600), GPR_U32(ctx, 2));
    // 0x14fcd0: 0x3e00008  jr          $ra
    ctx->pc = 0x14FCD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14FCD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14FCD0u;
            // 0x14fcd4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14F918u: goto label_14f918;
            case 0x14F978u: goto label_14f978;
            case 0x14F980u: goto label_14f980;
            case 0x14F988u: goto label_14f988;
            case 0x14FA10u: goto label_14fa10;
            case 0x14FA2Cu: goto label_14fa2c;
            case 0x14FA50u: goto label_14fa50;
            case 0x14FA6Cu: goto label_14fa6c;
            case 0x14FA80u: goto label_14fa80;
            case 0x14FA90u: goto label_14fa90;
            case 0x14FA94u: goto label_14fa94;
            case 0x14FA98u: goto label_14fa98;
            case 0x14FAF0u: goto label_14faf0;
            case 0x14FB38u: goto label_14fb38;
            case 0x14FB84u: goto label_14fb84;
            case 0x14FBA0u: goto label_14fba0;
            case 0x14FBB8u: goto label_14fbb8;
            case 0x14FBF8u: goto label_14fbf8;
            case 0x14FC2Cu: goto label_14fc2c;
            case 0x14FC68u: goto label_14fc68;
            case 0x14FC9Cu: goto label_14fc9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14FCD8u;
}
