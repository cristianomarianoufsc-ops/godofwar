#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_120740
// Address: 0x120740 - 0x120800
void entry_120740_0x120800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_120740_0x120800");
#endif

    ctx->pc = 0x120740u;

    // 0x120740: 0xc0682d  daddu       $t5, $a2, $zero
    ctx->pc = 0x120740u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120744: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x120744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x120748: 0x1a41023  subu        $v0, $t5, $a0
    ctx->pc = 0x120748u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
    // 0x12074c: 0x3c0c0033  lui         $t4, 0x33
    ctx->pc = 0x12074cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)51 << 16));
    // 0x120750: 0x244601ff  addiu       $a2, $v0, 0x1FF
    ctx->pc = 0x120750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 511));
    // 0x120754: 0x24090055  addiu       $t1, $zero, 0x55
    ctx->pc = 0x120754u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x120758: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x120758u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x12075c: 0x244203fe  addiu       $v0, $v0, 0x3FE
    ctx->pc = 0x12075cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1022));
    // 0x120760: 0xc3100b  movn        $v0, $a2, $v1
    ctx->pc = 0x120760u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x120764: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x120764u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x120768: 0x25243  sra         $t2, $v0, 9
    ctx->pc = 0x120768u;
    SET_GPR_S32(ctx, 10, SRA32(GPR_S32(ctx, 2), 9));
    // 0x12076c: 0x8d86f168  lw          $a2, -0xE98($t4)
    ctx->pc = 0x12076cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294963560)));
    // 0x120770: 0x3c022123  lui         $v0, 0x2123
    ctx->pc = 0x120770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8483 << 16));
    // 0x120774: 0x35438000  ori         $v1, $t2, 0x8000
    ctx->pc = 0x120774u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)32768);
    // 0x120778: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x120778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x12077c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x12077cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x120780: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x120780u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x120784: 0xacc90008  sw          $t1, 0x8($a2)
    ctx->pc = 0x120784u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 9));
    // 0x120788: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x120788u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x12078c: 0x25660200  addiu       $a2, $t3, 0x200
    ctx->pc = 0x12078cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 512));
    // 0x120790: 0x8d82f168  lw          $v0, -0xE98($t4)
    ctx->pc = 0x120790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294963560)));
    // 0x120794: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x120794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x120798: 0x19400016  blez        $t2, . + 4 + (0x16 << 2)
    ctx->pc = 0x120798u;
    {
        const bool branch_taken_0x120798 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x12079Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x120798u;
            // 0x12079c: 0xad82f168  sw          $v0, -0xE98($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x120798) {
            ctx->pc = 0x1207F4u;
            goto label_1207f4;
        }
    }
    ctx->pc = 0x1207A0u;
    // 0x1207a0: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x1207a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1207a4: 0x0  nop
    ctx->pc = 0x1207a4u;
    // NOP
label_1207a8:
    // 0x1207a8: 0x8d82f168  lw          $v0, -0xE98($t4)
    ctx->pc = 0x1207a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294963560)));
    // 0x1207ac: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x1207acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x1207b0: 0xac4b0000  sw          $t3, 0x0($v0)
    ctx->pc = 0x1207b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 11));
    // 0x1207b4: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1207b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1207b8: 0x256b0200  addiu       $t3, $t3, 0x200
    ctx->pc = 0x1207b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 512));
    // 0x1207bc: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x1207bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x1207c0: 0xac480008  sw          $t0, 0x8($v0)
    ctx->pc = 0x1207c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 8));
    // 0x1207c4: 0x8d82f168  lw          $v0, -0xE98($t4)
    ctx->pc = 0x1207c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4294963560)));
    // 0x1207c8: 0xac460010  sw          $a2, 0x10($v0)
    ctx->pc = 0x1207c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 6));
    // 0x1207cc: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x1207ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x1207d0: 0x24c60200  addiu       $a2, $a2, 0x200
    ctx->pc = 0x1207d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 512));
    // 0x1207d4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x1207d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1207d8: 0x1a6182a  slt         $v1, $t5, $a2
    ctx->pc = 0x1207d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1207dc: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1207dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1207e0: 0xad84f168  sw          $a0, -0xE98($t4)
    ctx->pc = 0x1207e0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4294963560), GPR_U32(ctx, 4));
    // 0x1207e4: 0x1a3300b  movn        $a2, $t5, $v1
    ctx->pc = 0x1207e4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 13));
    // 0x1207e8: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x1207e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
    // 0x1207ec: 0x1520ffee  bnez        $t1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1207ECu;
    {
        const bool branch_taken_0x1207ec = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x1207F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1207ECu;
            // 0x1207f0: 0xac480008  sw          $t0, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1207ec) {
            ctx->pc = 0x1207A8u;
            runtime->cooperativeGuestYield();
            goto label_1207a8;
        }
    }
    ctx->pc = 0x1207F4u;
label_1207f4:
    // 0x1207f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1207F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1207A8u: goto label_1207a8;
            case 0x1207F4u: goto label_1207f4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1207FCu;
    // 0x1207fc: 0x0  nop
    ctx->pc = 0x1207fcu;
    // NOP
}
