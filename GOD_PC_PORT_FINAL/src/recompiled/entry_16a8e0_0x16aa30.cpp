#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_16a8e0
// Address: 0x16a8e0 - 0x16aa30
void entry_16a8e0_0x16aa30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_16a8e0_0x16aa30");
#endif

    ctx->pc = 0x16a8e0u;

    // 0x16a8e0: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x16a8e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a8e4: 0xc0582d  daddu       $t3, $a2, $zero
    ctx->pc = 0x16a8e4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a8e8: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x16a8e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x16a8ec: 0xa61018  mult        $v0, $a1, $a2
    ctx->pc = 0x16a8ecu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16a8f0: 0x24420310  addiu       $v0, $v0, 0x310
    ctx->pc = 0x16a8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 784));
    // 0x16a8f4: 0x1024821  addu        $t1, $t0, $v0
    ctx->pc = 0x16a8f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x16a8f8: 0x8d24000c  lw          $a0, 0xC($t1)
    ctx->pc = 0x16a8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x16a8fc: 0x482000a  bltzl       $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x16A8FCu;
    {
        const bool branch_taken_0x16a8fc = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x16a8fc) {
            ctx->pc = 0x16A900u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16A8FCu;
            // 0x16a900: 0x8d02000c  lw          $v0, 0xC($t0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16A928u;
            goto label_16a928;
        }
    }
    ctx->pc = 0x16A904u;
    // 0x16a904: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x16a904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x16a908: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x16a908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x16a90c: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x16a90cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16a910: 0x11600003  beqz        $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x16A910u;
    {
        const bool branch_taken_0x16a910 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A910u;
            // 0x16a914: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a910) {
            ctx->pc = 0x16A920u;
            goto label_16a920;
        }
    }
    ctx->pc = 0x16A918u;
    // 0x16a918: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x16a918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x16a91c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16a91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_16a920:
    // 0x16a920: 0x3e00008  jr          $ra
    ctx->pc = 0x16A920u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A920u;
            // 0x16a924: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16A920u: goto label_16a920;
            case 0x16A928u: goto label_16a928;
            case 0x16A944u: goto label_16a944;
            case 0x16A970u: goto label_16a970;
            case 0x16A9B0u: goto label_16a9b0;
            case 0x16A9CCu: goto label_16a9cc;
            case 0x16AA28u: goto label_16aa28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16A928u;
label_16a928:
    // 0x16a928: 0x8d030000  lw          $v1, 0x0($t0)
    ctx->pc = 0x16a928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x16a92c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16a92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16a930: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x16a930u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x16a934: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16A934u;
    {
        const bool branch_taken_0x16a934 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A934u;
            // 0x16a938: 0xad02000c  sw          $v0, 0xC($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a934) {
            ctx->pc = 0x16A944u;
            goto label_16a944;
        }
    }
    ctx->pc = 0x16A93Cu;
    // 0x16a93c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16a93cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a940: 0xad02000c  sw          $v0, 0xC($t0)
    ctx->pc = 0x16a940u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
label_16a944:
    // 0x16a944: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x16a944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x16a948: 0x25040210  addiu       $a0, $t0, 0x210
    ctx->pc = 0x16a948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 528));
    // 0x16a94c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16a94cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16a950: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x16a950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16a954: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16a954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16a958: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16A958u;
    {
        const bool branch_taken_0x16a958 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x16A95Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A958u;
            // 0x16a95c: 0x463818  mult        $a3, $v0, $a2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a958) {
            ctx->pc = 0x16A970u;
            goto label_16a970;
        }
    }
    ctx->pc = 0x16A960u;
    // 0x16a960: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16a960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16a964: 0xe81821  addu        $v1, $a3, $t0
    ctx->pc = 0x16a964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x16a968: 0xac62031c  sw          $v0, 0x31C($v1)
    ctx->pc = 0x16a968u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 796), GPR_U32(ctx, 2));
    // 0x16a96c: 0x0  nop
    ctx->pc = 0x16a96cu;
    // NOP
label_16a970:
    // 0x16a970: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x16a970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x16a974: 0xad22000c  sw          $v0, 0xC($t1)
    ctx->pc = 0x16a974u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 2));
    // 0x16a978: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x16a978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x16a97c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16a97cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16a980: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x16a980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16a984: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x16a984u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x16a988: 0x8d250004  lw          $a1, 0x4($t1)
    ctx->pc = 0x16a988u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x16a98c: 0x51842  srl         $v1, $a1, 1
    ctx->pc = 0x16a98cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x16a990: 0x3c023000  lui         $v0, 0x3000
    ctx->pc = 0x16a990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)12288 << 16));
    // 0x16a994: 0x3c0a0033  lui         $t2, 0x33
    ctx->pc = 0x16a994u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)51 << 16));
    // 0x16a998: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x16a998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x16a99c: 0x8d47f168  lw          $a3, -0xE98($t2)
    ctx->pc = 0x16a99cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294963560)));
    // 0x16a9a0: 0x30e2000f  andi        $v0, $a3, 0xF
    ctx->pc = 0x16a9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    // 0x16a9a4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16A9A4u;
    {
        const bool branch_taken_0x16a9a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A9A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A9A4u;
            // 0x16a9a8: 0x8d240008  lw          $a0, 0x8($t1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a9a4) {
            ctx->pc = 0x16A9CCu;
            goto label_16a9cc;
        }
    }
    ctx->pc = 0x16A9ACu;
    // 0x16a9ac: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x16a9acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_16a9b0:
    // 0x16a9b0: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x16a9b0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x16a9b4: 0x30e2000f  andi        $v0, $a3, 0xF
    ctx->pc = 0x16a9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)15);
    // 0x16a9b8: 0x0  nop
    ctx->pc = 0x16a9b8u;
    // NOP
    // 0x16a9bc: 0x0  nop
    ctx->pc = 0x16a9bcu;
    // NOP
    // 0x16a9c0: 0x0  nop
    ctx->pc = 0x16a9c0u;
    // NOP
    // 0x16a9c4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16A9C4u;
    {
        const bool branch_taken_0x16a9c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a9c4) {
            ctx->pc = 0x16A9C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16A9C4u;
            // 0x16a9c8: 0xace00000  sw          $zero, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16A9B0u;
            runtime->cooperativeGuestYield();
            goto label_16a9b0;
        }
    }
    ctx->pc = 0x16A9CCu;
label_16a9cc:
    // 0x16a9cc: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x16a9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
    // 0x16a9d0: 0x24e20010  addiu       $v0, $a3, 0x10
    ctx->pc = 0x16a9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x16a9d4: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x16a9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
    // 0x16a9d8: 0x3c064a00  lui         $a2, 0x4A00
    ctx->pc = 0x16a9d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)18944 << 16));
    // 0x16a9dc: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x16a9dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x16a9e0: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x16a9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x16a9e4: 0xad42f168  sw          $v0, -0xE98($t2)
    ctx->pc = 0x16a9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4294963560), GPR_U32(ctx, 2));
    // 0x16a9e8: 0x8d03000c  lw          $v1, 0xC($t0)
    ctx->pc = 0x16a9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x16a9ec: 0x8d040004  lw          $a0, 0x4($t0)
    ctx->pc = 0x16a9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x16a9f0: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x16a9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x16a9f4: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x16a9f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16a9f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16a9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16a9fc: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x16a9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x16aa00: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x16aa00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x16aa04: 0xace5000c  sw          $a1, 0xC($a3)
    ctx->pc = 0x16aa04u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 5));
    // 0x16aa08: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x16aa08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x16aa0c: 0x8d030004  lw          $v1, 0x4($t0)
    ctx->pc = 0x16aa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x16aa10: 0x8d040008  lw          $a0, 0x8($t0)
    ctx->pc = 0x16aa10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x16aa14: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x16aa14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16aa18: 0x11600003  beqz        $t3, . + 4 + (0x3 << 2)
    ctx->pc = 0x16AA18u;
    {
        const bool branch_taken_0x16aa18 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AA1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AA18u;
            // 0x16aa1c: 0x821821  addu        $v1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aa18) {
            ctx->pc = 0x16AA28u;
            goto label_16aa28;
        }
    }
    ctx->pc = 0x16AA20u;
    // 0x16aa20: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x16aa20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x16aa24: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16aa24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_16aa28:
    // 0x16aa28: 0x3e00008  jr          $ra
    ctx->pc = 0x16AA28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AA28u;
            // 0x16aa2c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16A920u: goto label_16a920;
            case 0x16A928u: goto label_16a928;
            case 0x16A944u: goto label_16a944;
            case 0x16A970u: goto label_16a970;
            case 0x16A9B0u: goto label_16a9b0;
            case 0x16A9CCu: goto label_16a9cc;
            case 0x16AA28u: goto label_16aa28;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16AA30u;
}
