#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_144450
// Address: 0x144450 - 0x144520
void entry_144450_0x144520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_144450_0x144520");
#endif

    ctx->pc = 0x144450u;

    // 0x144450: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x144450u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144454: 0x8d020c00  lw          $v0, 0xC00($t0)
    ctx->pc = 0x144454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 3072)));
    // 0x144458: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x144458u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14445c: 0x1032021  addu        $a0, $t0, $v1
    ctx->pc = 0x14445cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x144460: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x144460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x144464: 0xa4800000  sh          $zero, 0x0($a0)
    ctx->pc = 0x144464u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x144468: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x144468u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14446c: 0xad020c00  sw          $v0, 0xC00($t0)
    ctx->pc = 0x14446cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 3072), GPR_U32(ctx, 2));
    // 0x144470: 0x95020c04  lhu         $v0, 0xC04($t0)
    ctx->pc = 0x144470u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 3076)));
    // 0x144474: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x144474u;
    {
        const bool branch_taken_0x144474 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x144478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144474u;
            // 0x144478: 0xa4620002  sh          $v0, 0x2($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144474) {
            ctx->pc = 0x144484u;
            goto label_144484;
        }
    }
    ctx->pc = 0x14447Cu;
    // 0x14447c: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x14447cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x144480: 0x244517c0  addiu       $a1, $v0, 0x17C0
    ctx->pc = 0x144480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6080));
label_144484:
    // 0x144484: 0x30a20003  andi        $v0, $a1, 0x3
    ctx->pc = 0x144484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
    // 0x144488: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x144488u;
    {
        const bool branch_taken_0x144488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14448Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144488u;
            // 0x14448c: 0x8d020c04  lw          $v0, 0xC04($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 3076)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144488) {
            ctx->pc = 0x1444D4u;
            goto label_1444d4;
        }
    }
    ctx->pc = 0x144490u;
    // 0x144490: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x144490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x144494: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x144494u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x144498: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x144498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x14449c: 0x4600019  bltz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x14449Cu;
    {
        const bool branch_taken_0x14449c = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x1444A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14449Cu;
            // 0x1444a0: 0x1021021  addu        $v0, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14449c) {
            ctx->pc = 0x144504u;
            goto label_144504;
        }
    }
    ctx->pc = 0x1444A4u;
    // 0x1444a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1444a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1444a8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1444a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1444ac: 0x0  nop
    ctx->pc = 0x1444acu;
    // NOP
label_1444b0:
    // 0x1444b0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1444b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1444b4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1444b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1444b8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1444b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x1444bc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x1444bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x1444c0: 0x0  nop
    ctx->pc = 0x1444c0u;
    // NOP
    // 0x1444c4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1444C4u;
    {
        const bool branch_taken_0x1444c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1444C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1444C4u;
            // 0x1444c8: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1444c4) {
            ctx->pc = 0x1444B0u;
            runtime->cooperativeGuestYield();
            goto label_1444b0;
        }
    }
    ctx->pc = 0x1444CCu;
    // 0x1444cc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1444CCu;
    {
        const bool branch_taken_0x1444cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1444D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1444CCu;
            // 0x1444d0: 0x8d030c04  lw          $v1, 0xC04($t0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 3076)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1444cc) {
            ctx->pc = 0x144508u;
            goto label_144508;
        }
    }
    ctx->pc = 0x1444D4u;
label_1444d4:
    // 0x1444d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1444d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1444d8: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x1444d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x1444dc: 0x18c00009  blez        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x1444DCu;
    {
        const bool branch_taken_0x1444dc = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1444E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1444DCu;
            // 0x1444e0: 0x1024821  addu        $t1, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1444dc) {
            ctx->pc = 0x144504u;
            goto label_144504;
        }
    }
    ctx->pc = 0x1444E4u;
    // 0x1444e4: 0x0  nop
    ctx->pc = 0x1444e4u;
    // NOP
label_1444e8:
    // 0x1444e8: 0xa71021  addu        $v0, $a1, $a3
    ctx->pc = 0x1444e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1444ec: 0x1272021  addu        $a0, $t1, $a3
    ctx->pc = 0x1444ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
    // 0x1444f0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1444f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1444f4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1444f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1444f8: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x1444f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x1444fc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1444FCu;
    {
        const bool branch_taken_0x1444fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x144500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1444FCu;
            // 0x144500: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1444fc) {
            ctx->pc = 0x1444E8u;
            runtime->cooperativeGuestYield();
            goto label_1444e8;
        }
    }
    ctx->pc = 0x144504u;
label_144504:
    // 0x144504: 0x8d030c04  lw          $v1, 0xC04($t0)
    ctx->pc = 0x144504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 3076)));
label_144508:
    // 0x144508: 0x24c20003  addiu       $v0, $a2, 0x3
    ctx->pc = 0x144508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x14450c: 0x2404fffc  addiu       $a0, $zero, -0x4
    ctx->pc = 0x14450cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x144510: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x144510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x144514: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x144514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x144518: 0x3e00008  jr          $ra
    ctx->pc = 0x144518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14451Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144518u;
            // 0x14451c: 0xad030c04  sw          $v1, 0xC04($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 3076), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x144484u: goto label_144484;
            case 0x1444B0u: goto label_1444b0;
            case 0x1444D4u: goto label_1444d4;
            case 0x1444E8u: goto label_1444e8;
            case 0x144504u: goto label_144504;
            case 0x144508u: goto label_144508;
            default: break;
        }
        return;
    }
    ctx->pc = 0x144520u;
}
