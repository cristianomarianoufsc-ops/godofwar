#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_186300
// Address: 0x186300 - 0x1863b8
void entry_186300_0x1863b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_186300_0x1863b8");
#endif

    ctx->pc = 0x186300u;

    // 0x186300: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x186300u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186304: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x186304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x186308: 0x8c43c800  lw          $v1, -0x3800($v0)
    ctx->pc = 0x186308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952960)));
    // 0x18630c: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x18630cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x186310: 0x8ce44f60  lw          $a0, 0x4F60($a3)
    ctx->pc = 0x186310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20320)));
    // 0x186314: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x186314u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x186318: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x186318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x18631c: 0x104202b  sltu        $a0, $t0, $a0
    ctx->pc = 0x18631cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x186320: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x186320u;
    {
        const bool branch_taken_0x186320 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x186324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186320u;
            // 0x186324: 0xac43c800  sw          $v1, -0x3800($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294952960), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186320) {
            ctx->pc = 0x186354u;
            goto label_186354;
        }
    }
    ctx->pc = 0x186328u;
    // 0x186328: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x186328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x18632c: 0x0  nop
    ctx->pc = 0x18632cu;
    // NOP
label_186330:
    // 0x186330: 0x28c20014  slti        $v0, $a2, 0x14
    ctx->pc = 0x186330u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x186334: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x186334u;
    {
        const bool branch_taken_0x186334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x186338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186334u;
            // 0x186338: 0x24e24f60  addiu       $v0, $a3, 0x4F60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 20320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186334) {
            ctx->pc = 0x186354u;
            goto label_186354;
        }
    }
    ctx->pc = 0x18633Cu;
    // 0x18633c: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x18633cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x186340: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x186340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x186344: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x186344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x186348: 0x102102b  sltu        $v0, $t0, $v0
    ctx->pc = 0x186348u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x18634c: 0x5040fff8  beql        $v0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x18634Cu;
    {
        const bool branch_taken_0x18634c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x18634c) {
            ctx->pc = 0x186350u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18634Cu;
            // 0x186350: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x186330u;
            runtime->cooperativeGuestYield();
            goto label_186330;
        }
    }
    ctx->pc = 0x186354u;
label_186354:
    // 0x186354: 0x28c20013  slti        $v0, $a2, 0x13
    ctx->pc = 0x186354u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)19) ? 1 : 0);
    // 0x186358: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x186358u;
    {
        const bool branch_taken_0x186358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x18635Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x186358u;
            // 0x18635c: 0x24070013  addiu       $a3, $zero, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x186358) {
            ctx->pc = 0x186394u;
            goto label_186394;
        }
    }
    ctx->pc = 0x186360u;
label_186360:
    // 0x186360: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x186360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x186364: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x186364u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x186368: 0x24424f60  addiu       $v0, $v0, 0x4F60
    ctx->pc = 0x186368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20320));
    // 0x18636c: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x18636cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x186370: 0x2444fff8  addiu       $a0, $v0, -0x8
    ctx->pc = 0x186370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x186374: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x186374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x186378: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x186378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18637c: 0x68690007  ldl         $t1, 0x7($v1)
    ctx->pc = 0x18637cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x186380: 0x6c690000  ldr         $t1, 0x0($v1)
    ctx->pc = 0x186380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x186384: 0xb0490007  sdl         $t1, 0x7($v0)
    ctx->pc = 0x186384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x186388: 0xc7202a  slt         $a0, $a2, $a3
    ctx->pc = 0x186388u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x18638c: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x18638Cu;
    {
        const bool branch_taken_0x18638c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x186390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18638Cu;
            // 0x186390: 0xb4490000  sdr         $t1, 0x0($v0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x18638c) {
            ctx->pc = 0x186360u;
            runtime->cooperativeGuestYield();
            goto label_186360;
        }
    }
    ctx->pc = 0x186394u;
label_186394:
    // 0x186394: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x186394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x186398: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x186398u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x18639c: 0x24424f60  addiu       $v0, $v0, 0x4F60
    ctx->pc = 0x18639cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20320));
    // 0x1863a0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x1863a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1863a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1863a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1863a8: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x1863a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
    // 0x1863ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1863ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1863B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1863ACu;
            // 0x1863b0: 0xac680000  sw          $t0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x186330u: goto label_186330;
            case 0x186354u: goto label_186354;
            case 0x186360u: goto label_186360;
            case 0x186394u: goto label_186394;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1863B4u;
    // 0x1863b4: 0x0  nop
    ctx->pc = 0x1863b4u;
    // NOP
}
