#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001558F0
// Address: 0x1558f0 - 0x1559d0
void sub_001558F0_0x1558f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001558F0_0x1558f0");
#endif

    ctx->pc = 0x1558f0u;

    // 0x1558f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1558f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1558f4: 0x18a00033  blez        $a1, . + 4 + (0x33 << 2)
    ctx->pc = 0x1558F4u;
    {
        const bool branch_taken_0x1558f4 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x1558F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1558F4u;
            // 0x1558f8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1558f4) {
            ctx->pc = 0x1559C4u;
            goto label_1559c4;
        }
    }
    ctx->pc = 0x1558FCu;
    // 0x1558fc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1558fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_155900:
    // 0x155900: 0xa1880  sll         $v1, $t2, 2
    ctx->pc = 0x155900u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x155904: 0x244239a8  addiu       $v0, $v0, 0x39A8
    ctx->pc = 0x155904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14760));
    // 0x155908: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x155908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15590c: 0x8c680000  lw          $t0, 0x0($v1)
    ctx->pc = 0x15590cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x155910: 0x8d020060  lw          $v0, 0x60($t0)
    ctx->pc = 0x155910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 96)));
    // 0x155914: 0x3403a000  ori         $v1, $zero, 0xA000
    ctx->pc = 0x155914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x155918: 0x31b7c  dsll32      $v1, $v1, 13
    ctx->pc = 0x155918u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 13));
    // 0x15591c: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x15591cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x155920: 0xffa60000  sd          $a2, 0x0($sp)
    ctx->pc = 0x155920u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 6));
    // 0x155924: 0xc31824  and         $v1, $a2, $v1
    ctx->pc = 0x155924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x155928: 0xdc420008  ld          $v0, 0x8($v0)
    ctx->pc = 0x155928u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x15592c: 0x10600021  beqz        $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x15592Cu;
    {
        const bool branch_taken_0x15592c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x155930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15592Cu;
            // 0x155930: 0xffa20008  sd          $v0, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15592c) {
            ctx->pc = 0x1559B4u;
            goto label_1559b4;
        }
    }
    ctx->pc = 0x155934u;
    // 0x155934: 0x9502003c  lhu         $v0, 0x3C($t0)
    ctx->pc = 0x155934u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 60)));
    // 0x155938: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x155938u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15593c: 0x304b7fff  andi        $t3, $v0, 0x7FFF
    ctx->pc = 0x15593cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x155940: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x155940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x155944: 0x0  nop
    ctx->pc = 0x155944u;
    // NOP
label_155948:
    // 0x155948: 0x71940  sll         $v1, $a3, 5
    ctx->pc = 0x155948u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 5));
    // 0x15594c: 0x244949a8  addiu       $t1, $v0, 0x49A8
    ctx->pc = 0x15594cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 18856));
    // 0x155950: 0x692021  addu        $a0, $v1, $t1
    ctx->pc = 0x155950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x155954: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x155954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x155958: 0x162102b  sltu        $v0, $t3, $v0
    ctx->pc = 0x155958u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x15595c: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x15595Cu;
    {
        const bool branch_taken_0x15595c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15595c) {
            ctx->pc = 0x155960u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15595Cu;
            // 0x155960: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1559A8u;
            goto label_1559a8;
        }
    }
    ctx->pc = 0x155964u;
    // 0x155964: 0x1231021  addu        $v0, $t1, $v1
    ctx->pc = 0x155964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x155968: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x155968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x15596c: 0x4b102b  sltu        $v0, $v0, $t3
    ctx->pc = 0x15596cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 11)) ? 1 : 0);
    // 0x155970: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x155970u;
    {
        const bool branch_taken_0x155970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x155970) {
            ctx->pc = 0x155974u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x155970u;
            // 0x155974: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1559A8u;
            goto label_1559a8;
        }
    }
    ctx->pc = 0x155978u;
    // 0x155978: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x155978u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x15597c: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x15597cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x155980: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x155980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x155984: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x155984u;
    {
        const bool branch_taken_0x155984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x155984) {
            ctx->pc = 0x155988u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x155984u;
            // 0x155988: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x155994u;
            goto label_155994;
        }
    }
    ctx->pc = 0x15598Cu;
    // 0x15598c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15598Cu;
    {
        const bool branch_taken_0x15598c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x155990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15598Cu;
            // 0x155990: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15598c) {
            ctx->pc = 0x15599Cu;
            goto label_15599c;
        }
    }
    ctx->pc = 0x155994u;
label_155994:
    // 0x155994: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x155994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x155998: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x155998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_15599c:
    // 0x15599c: 0xa502003c  sh          $v0, 0x3C($t0)
    ctx->pc = 0x15599cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 60), (uint16_t)GPR_U32(ctx, 2));
    // 0x1559a0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1559A0u;
    {
        const bool branch_taken_0x1559a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1559A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1559A0u;
            // 0x1559a4: 0xa500003e  sh          $zero, 0x3E($t0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 8), 62), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1559a0) {
            ctx->pc = 0x1559B4u;
            goto label_1559b4;
        }
    }
    ctx->pc = 0x1559A8u;
label_1559a8:
    // 0x1559a8: 0x28e20005  slti        $v0, $a3, 0x5
    ctx->pc = 0x1559a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1559ac: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x1559ACu;
    {
        const bool branch_taken_0x1559ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1559B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1559ACu;
            // 0x1559b0: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1559ac) {
            ctx->pc = 0x155948u;
            runtime->cooperativeGuestYield();
            goto label_155948;
        }
    }
    ctx->pc = 0x1559B4u;
label_1559b4:
    // 0x1559b4: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x1559b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x1559b8: 0x145102a  slt         $v0, $t2, $a1
    ctx->pc = 0x1559b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1559bc: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x1559BCu;
    {
        const bool branch_taken_0x1559bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1559C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1559BCu;
            // 0x1559c0: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1559bc) {
            ctx->pc = 0x155900u;
            runtime->cooperativeGuestYield();
            goto label_155900;
        }
    }
    ctx->pc = 0x1559C4u;
label_1559c4:
    // 0x1559c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1559C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1559C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1559C4u;
            // 0x1559c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x155900u: goto label_155900;
            case 0x155948u: goto label_155948;
            case 0x155994u: goto label_155994;
            case 0x15599Cu: goto label_15599c;
            case 0x1559A8u: goto label_1559a8;
            case 0x1559B4u: goto label_1559b4;
            case 0x1559C4u: goto label_1559c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1559CCu;
    // 0x1559cc: 0x0  nop
    ctx->pc = 0x1559ccu;
    // NOP
}
