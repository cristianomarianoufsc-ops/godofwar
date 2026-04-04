#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002718A0
// Address: 0x2718a0 - 0x271f48
void sub_002718A0_0x2718a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002718A0_0x2718a0");
#endif

    ctx->pc = 0x2718a0u;

    // 0x2718a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2718a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2718a4: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2718a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2718a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2718a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2718ac: 0xa0682d  daddu       $t5, $a1, $zero
    ctx->pc = 0x2718acu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2718b0: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x2718b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2718b4: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x2718b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x2718b8: 0x210bc  dsll32      $v0, $v0, 2
    ctx->pc = 0x2718b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 2));
    // 0x2718bc: 0x2463ffde  addiu       $v1, $v1, -0x22
    ctx->pc = 0x2718bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967262));
    // 0x2718c0: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x2718c0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x2718c4: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2718c4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2718c8: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2718C8u;
    {
        const bool branch_taken_0x2718c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2718CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2718C8u;
            // 0x2718cc: 0xacc30018  sw          $v1, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2718c8) {
            ctx->pc = 0x27192Cu;
            goto label_27192c;
        }
    }
    ctx->pc = 0x2718D0u;
    // 0x2718d0: 0x8cc80020  lw          $t0, 0x20($a2)
    ctx->pc = 0x2718d0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2718d4: 0xdcc90008  ld          $t1, 0x8($a2)
    ctx->pc = 0x2718d4u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 8)));
label_2718d8:
    // 0x2718d8: 0x8cc50014  lw          $a1, 0x14($a2)
    ctx->pc = 0x2718d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x2718dc: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x2718dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x2718e0: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x2718e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x2718e4: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x2718e4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2718e8: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x2718e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2718ec: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x2718ecu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2718f0: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x2718f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x2718f4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2718f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2718f8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2718f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2718fc: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x2718fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x271900: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x271900u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x271904: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x271904u;
    {
        const bool branch_taken_0x271904 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271904u;
            // 0x271908: 0xacc50014  sw          $a1, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271904) {
            ctx->pc = 0x271914u;
            goto label_271914;
        }
    }
    ctx->pc = 0x27190Cu;
    // 0x27190c: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x27190cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x271910: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x271910u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_271914:
    // 0x271914: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x271914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x271918: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x271918u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x27191c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x27191Cu;
    {
        const bool branch_taken_0x27191c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x271920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27191Cu;
            // 0x271920: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27191c) {
            ctx->pc = 0x2718D8u;
            runtime->cooperativeGuestYield();
            goto label_2718d8;
        }
    }
    ctx->pc = 0x271924u;
    // 0x271924: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x271924u;
    {
        const bool branch_taken_0x271924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271924u;
            // 0x271928: 0xdcc20000  ld          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271924) {
            ctx->pc = 0x271934u;
            goto label_271934;
        }
    }
    ctx->pc = 0x27192Cu;
label_27192c:
    // 0x27192c: 0xdcc90008  ld          $t1, 0x8($a2)
    ctx->pc = 0x27192cu;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x271930: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x271930u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_271934:
    // 0x271934: 0x65270022  daddiu      $a3, $t1, 0x22
    ctx->pc = 0x271934u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)34);
    // 0x271938: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x271938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x27193c: 0x22f7e  dsrl32      $a1, $v0, 29
    ctx->pc = 0x27193cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 29));
    // 0x271940: 0xfcc70008  sd          $a3, 0x8($a2)
    ctx->pc = 0x271940u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 7));
    // 0x271944: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x271944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x271948: 0x210f8  dsll        $v0, $v0, 3
    ctx->pc = 0x271948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 3);
    // 0x27194c: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x27194cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x271950: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x271950u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x271954: 0x1080001b  beqz        $a0, . + 4 + (0x1B << 2)
    ctx->pc = 0x271954u;
    {
        const bool branch_taken_0x271954 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x271958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271954u;
            // 0x271958: 0xacc30018  sw          $v1, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271954) {
            ctx->pc = 0x2719C4u;
            goto label_2719c4;
        }
    }
    ctx->pc = 0x27195Cu;
    // 0x27195c: 0x8cc80020  lw          $t0, 0x20($a2)
    ctx->pc = 0x27195cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x271960: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x271960u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271964: 0x57882  srl         $t7, $a1, 2
    ctx->pc = 0x271964u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x271968: 0x57780  sll         $t6, $a1, 30
    ctx->pc = 0x271968u;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 5), 30));
    // 0x27196c: 0x0  nop
    ctx->pc = 0x27196cu;
    // NOP
label_271970:
    // 0x271970: 0x8cc50014  lw          $a1, 0x14($a2)
    ctx->pc = 0x271970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x271974: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x271974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x271978: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x271978u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x27197c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x27197cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x271980: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x271980u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x271984: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x271984u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x271988: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x271988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x27198c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x27198cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x271990: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x271990u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x271994: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x271994u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x271998: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x271998u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x27199c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27199Cu;
    {
        const bool branch_taken_0x27199c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2719A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27199Cu;
            // 0x2719a0: 0xacc50014  sw          $a1, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27199c) {
            ctx->pc = 0x2719ACu;
            goto label_2719ac;
        }
    }
    ctx->pc = 0x2719A4u;
    // 0x2719a4: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x2719a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x2719a8: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x2719a8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_2719ac:
    // 0x2719ac: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x2719acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x2719b0: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x2719b0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2719b4: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2719B4u;
    {
        const bool branch_taken_0x2719b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2719B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2719B4u;
            // 0x2719b8: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2719b4) {
            ctx->pc = 0x271970u;
            runtime->cooperativeGuestYield();
            goto label_271970;
        }
    }
    ctx->pc = 0x2719BCu;
    // 0x2719bc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2719BCu;
    {
        const bool branch_taken_0x2719bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2719C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2719BCu;
            // 0x2719c0: 0xdcc20000  ld          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2719bc) {
            ctx->pc = 0x2719D4u;
            goto label_2719d4;
        }
    }
    ctx->pc = 0x2719C4u;
label_2719c4:
    // 0x2719c4: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x2719c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2719c8: 0x57882  srl         $t7, $a1, 2
    ctx->pc = 0x2719c8u;
    SET_GPR_S32(ctx, 15, (int32_t)SRL32(GPR_U32(ctx, 5), 2));
    // 0x2719cc: 0x57780  sll         $t6, $a1, 30
    ctx->pc = 0x2719ccu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 5), 30));
    // 0x2719d0: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x2719d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_2719d4:
    // 0x2719d4: 0x65250003  daddiu      $a1, $t1, 0x3
    ctx->pc = 0x2719d4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)3);
    // 0x2719d8: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x2719d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x2719dc: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x2719dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x2719e0: 0xfcc50008  sd          $a1, 0x8($a2)
    ctx->pc = 0x2719e0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 5));
    // 0x2719e4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2719e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x2719e8: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x2719e8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x2719ec: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x2719ecu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x2719f0: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2719F0u;
    {
        const bool branch_taken_0x2719f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2719F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2719F0u;
            // 0x2719f4: 0xacc30018  sw          $v1, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2719f0) {
            ctx->pc = 0x271A54u;
            goto label_271a54;
        }
    }
    ctx->pc = 0x2719F8u;
    // 0x2719f8: 0x8cc80020  lw          $t0, 0x20($a2)
    ctx->pc = 0x2719f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x2719fc: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x2719fcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_271a00:
    // 0x271a00: 0x8cc50014  lw          $a1, 0x14($a2)
    ctx->pc = 0x271a00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x271a04: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x271a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x271a08: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x271a08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x271a0c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x271a0cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x271a10: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x271a10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x271a14: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x271a14u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x271a18: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x271a18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x271a1c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x271a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x271a20: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x271a20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x271a24: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x271a24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x271a28: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x271a28u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x271a2c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x271A2Cu;
    {
        const bool branch_taken_0x271a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271A2Cu;
            // 0x271a30: 0xacc50014  sw          $a1, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271a2c) {
            ctx->pc = 0x271A3Cu;
            goto label_271a3c;
        }
    }
    ctx->pc = 0x271A34u;
    // 0x271a34: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x271a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x271a38: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x271a38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_271a3c:
    // 0x271a3c: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x271a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x271a40: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x271a40u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x271a44: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x271A44u;
    {
        const bool branch_taken_0x271a44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x271A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271A44u;
            // 0x271a48: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271a44) {
            ctx->pc = 0x271A00u;
            runtime->cooperativeGuestYield();
            goto label_271a00;
        }
    }
    ctx->pc = 0x271A4Cu;
    // 0x271a4c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x271A4Cu;
    {
        const bool branch_taken_0x271a4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271A4Cu;
            // 0x271a50: 0xdcc20000  ld          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271a4c) {
            ctx->pc = 0x271A5Cu;
            goto label_271a5c;
        }
    }
    ctx->pc = 0x271A54u;
label_271a54:
    // 0x271a54: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x271a54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271a58: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x271a58u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_271a5c:
    // 0x271a5c: 0x65250001  daddiu      $a1, $t1, 0x1
    ctx->pc = 0x271a5cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)1);
    // 0x271a60: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x271a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x271a64: 0x23c7e  dsrl32      $a3, $v0, 17
    ctx->pc = 0x271a64u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> (32 + 17));
    // 0x271a68: 0xfcc50008  sd          $a1, 0x8($a2)
    ctx->pc = 0x271a68u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 5));
    // 0x271a6c: 0x2463fff1  addiu       $v1, $v1, -0xF
    ctx->pc = 0x271a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967281));
    // 0x271a70: 0x213f8  dsll        $v0, $v0, 15
    ctx->pc = 0x271a70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 15);
    // 0x271a74: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x271a74u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x271a78: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x271a78u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x271a7c: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x271A7Cu;
    {
        const bool branch_taken_0x271a7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x271A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271A7Cu;
            // 0x271a80: 0xacc30018  sw          $v1, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271a7c) {
            ctx->pc = 0x271AE4u;
            goto label_271ae4;
        }
    }
    ctx->pc = 0x271A84u;
    // 0x271a84: 0x8cc80020  lw          $t0, 0x20($a2)
    ctx->pc = 0x271a84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x271a88: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x271a88u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271a8c: 0x75bc0  sll         $t3, $a3, 15
    ctx->pc = 0x271a8cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 7), 15));
label_271a90:
    // 0x271a90: 0x8cc50014  lw          $a1, 0x14($a2)
    ctx->pc = 0x271a90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x271a94: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x271a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x271a98: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x271a98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x271a9c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x271a9cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x271aa0: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x271aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x271aa4: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x271aa4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x271aa8: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x271aa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x271aac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x271aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x271ab0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x271ab0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x271ab4: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x271ab4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x271ab8: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x271ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x271abc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x271ABCu;
    {
        const bool branch_taken_0x271abc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271ABCu;
            // 0x271ac0: 0xacc50014  sw          $a1, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271abc) {
            ctx->pc = 0x271ACCu;
            goto label_271acc;
        }
    }
    ctx->pc = 0x271AC4u;
    // 0x271ac4: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x271ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x271ac8: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x271ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_271acc:
    // 0x271acc: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x271accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x271ad0: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x271ad0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x271ad4: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x271AD4u;
    {
        const bool branch_taken_0x271ad4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x271AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271AD4u;
            // 0x271ad8: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271ad4) {
            ctx->pc = 0x271A90u;
            runtime->cooperativeGuestYield();
            goto label_271a90;
        }
    }
    ctx->pc = 0x271ADCu;
    // 0x271adc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x271ADCu;
    {
        const bool branch_taken_0x271adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271ADCu;
            // 0x271ae0: 0xdcc20000  ld          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271adc) {
            ctx->pc = 0x271AF0u;
            goto label_271af0;
        }
    }
    ctx->pc = 0x271AE4u;
label_271ae4:
    // 0x271ae4: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x271ae4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271ae8: 0x75bc0  sll         $t3, $a3, 15
    ctx->pc = 0x271ae8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 7), 15));
    // 0x271aec: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x271aecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_271af0:
    // 0x271af0: 0x6525000f  daddiu      $a1, $t1, 0xF
    ctx->pc = 0x271af0u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)15);
    // 0x271af4: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x271af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x271af8: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x271af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x271afc: 0xfcc50008  sd          $a1, 0x8($a2)
    ctx->pc = 0x271afcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 5));
    // 0x271b00: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x271b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x271b04: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x271b04u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x271b08: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x271b08u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x271b0c: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x271B0Cu;
    {
        const bool branch_taken_0x271b0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x271B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271B0Cu;
            // 0x271b10: 0xacc30018  sw          $v1, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271b0c) {
            ctx->pc = 0x271B74u;
            goto label_271b74;
        }
    }
    ctx->pc = 0x271B14u;
    // 0x271b14: 0x8cc80020  lw          $t0, 0x20($a2)
    ctx->pc = 0x271b14u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x271b18: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x271b18u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271b1c: 0x0  nop
    ctx->pc = 0x271b1cu;
    // NOP
label_271b20:
    // 0x271b20: 0x8cc50014  lw          $a1, 0x14($a2)
    ctx->pc = 0x271b20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x271b24: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x271b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x271b28: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x271b28u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x271b2c: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x271b2cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x271b30: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x271b30u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x271b34: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x271b34u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x271b38: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x271b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x271b3c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x271b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x271b40: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x271b40u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x271b44: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x271b44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x271b48: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x271b48u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x271b4c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x271B4Cu;
    {
        const bool branch_taken_0x271b4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271B4Cu;
            // 0x271b50: 0xacc50014  sw          $a1, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271b4c) {
            ctx->pc = 0x271B5Cu;
            goto label_271b5c;
        }
    }
    ctx->pc = 0x271B54u;
    // 0x271b54: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x271b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x271b58: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x271b58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_271b5c:
    // 0x271b5c: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x271b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x271b60: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x271b60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x271b64: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x271B64u;
    {
        const bool branch_taken_0x271b64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x271B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271B64u;
            // 0x271b68: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271b64) {
            ctx->pc = 0x271B20u;
            runtime->cooperativeGuestYield();
            goto label_271b20;
        }
    }
    ctx->pc = 0x271B6Cu;
    // 0x271b6c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x271B6Cu;
    {
        const bool branch_taken_0x271b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271B6Cu;
            // 0x271b70: 0xdcc20000  ld          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271b6c) {
            ctx->pc = 0x271B7Cu;
            goto label_271b7c;
        }
    }
    ctx->pc = 0x271B74u;
label_271b74:
    // 0x271b74: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x271b74u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271b78: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x271b78u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_271b7c:
    // 0x271b7c: 0x65250001  daddiu      $a1, $t1, 0x1
    ctx->pc = 0x271b7cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)1);
    // 0x271b80: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x271b80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x271b84: 0x2c47e  dsrl32      $t8, $v0, 17
    ctx->pc = 0x271b84u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 2) >> (32 + 17));
    // 0x271b88: 0xfcc50008  sd          $a1, 0x8($a2)
    ctx->pc = 0x271b88u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 5));
    // 0x271b8c: 0x2463fff1  addiu       $v1, $v1, -0xF
    ctx->pc = 0x271b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967281));
    // 0x271b90: 0x213f8  dsll        $v0, $v0, 15
    ctx->pc = 0x271b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 15);
    // 0x271b94: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x271b94u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x271b98: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x271b98u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x271b9c: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x271B9Cu;
    {
        const bool branch_taken_0x271b9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x271BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271B9Cu;
            // 0x271ba0: 0xacc30018  sw          $v1, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271b9c) {
            ctx->pc = 0x271C04u;
            goto label_271c04;
        }
    }
    ctx->pc = 0x271BA4u;
    // 0x271ba4: 0x8cc80020  lw          $t0, 0x20($a2)
    ctx->pc = 0x271ba4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x271ba8: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x271ba8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271bac: 0x0  nop
    ctx->pc = 0x271bacu;
    // NOP
label_271bb0:
    // 0x271bb0: 0x8cc50014  lw          $a1, 0x14($a2)
    ctx->pc = 0x271bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x271bb4: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x271bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x271bb8: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x271bb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x271bbc: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x271bbcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x271bc0: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x271bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x271bc4: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x271bc4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x271bc8: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x271bc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x271bcc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x271bccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x271bd0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x271bd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x271bd4: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x271bd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x271bd8: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x271bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x271bdc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x271BDCu;
    {
        const bool branch_taken_0x271bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271BDCu;
            // 0x271be0: 0xacc50014  sw          $a1, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271bdc) {
            ctx->pc = 0x271BECu;
            goto label_271bec;
        }
    }
    ctx->pc = 0x271BE4u;
    // 0x271be4: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x271be4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x271be8: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x271be8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_271bec:
    // 0x271bec: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x271becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x271bf0: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x271bf0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x271bf4: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x271BF4u;
    {
        const bool branch_taken_0x271bf4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x271BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271BF4u;
            // 0x271bf8: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271bf4) {
            ctx->pc = 0x271BB0u;
            runtime->cooperativeGuestYield();
            goto label_271bb0;
        }
    }
    ctx->pc = 0x271BFCu;
    // 0x271bfc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x271BFCu;
    {
        const bool branch_taken_0x271bfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271BFCu;
            // 0x271c00: 0xdcc20000  ld          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271bfc) {
            ctx->pc = 0x271C0Cu;
            goto label_271c0c;
        }
    }
    ctx->pc = 0x271C04u;
label_271c04:
    // 0x271c04: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x271c04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271c08: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x271c08u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_271c0c:
    // 0x271c0c: 0x6525000f  daddiu      $a1, $t1, 0xF
    ctx->pc = 0x271c0cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)15);
    // 0x271c10: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x271c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x271c14: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x271c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x271c18: 0xfcc50008  sd          $a1, 0x8($a2)
    ctx->pc = 0x271c18u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 5));
    // 0x271c1c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x271c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x271c20: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x271c20u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x271c24: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x271c24u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x271c28: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x271C28u;
    {
        const bool branch_taken_0x271c28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x271C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271C28u;
            // 0x271c2c: 0xacc30018  sw          $v1, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271c28) {
            ctx->pc = 0x271C8Cu;
            goto label_271c8c;
        }
    }
    ctx->pc = 0x271C30u;
    // 0x271c30: 0x8cc80020  lw          $t0, 0x20($a2)
    ctx->pc = 0x271c30u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x271c34: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x271c34u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_271c38:
    // 0x271c38: 0x8cc50014  lw          $a1, 0x14($a2)
    ctx->pc = 0x271c38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x271c3c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x271c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x271c40: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x271c40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x271c44: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x271c44u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x271c48: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x271c48u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x271c4c: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x271c4cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x271c50: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x271c50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x271c54: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x271c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x271c58: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x271c58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x271c5c: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x271c5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x271c60: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x271c60u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x271c64: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x271C64u;
    {
        const bool branch_taken_0x271c64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271C64u;
            // 0x271c68: 0xacc50014  sw          $a1, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271c64) {
            ctx->pc = 0x271C74u;
            goto label_271c74;
        }
    }
    ctx->pc = 0x271C6Cu;
    // 0x271c6c: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x271c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x271c70: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x271c70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_271c74:
    // 0x271c74: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x271c74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x271c78: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x271c78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x271c7c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x271C7Cu;
    {
        const bool branch_taken_0x271c7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x271C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271C7Cu;
            // 0x271c80: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271c7c) {
            ctx->pc = 0x271C38u;
            runtime->cooperativeGuestYield();
            goto label_271c38;
        }
    }
    ctx->pc = 0x271C84u;
    // 0x271c84: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x271C84u;
    {
        const bool branch_taken_0x271c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271C84u;
            // 0x271c88: 0xdcc20000  ld          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271c84) {
            ctx->pc = 0x271C94u;
            goto label_271c94;
        }
    }
    ctx->pc = 0x271C8Cu;
label_271c8c:
    // 0x271c8c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x271c8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271c90: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x271c90u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_271c94:
    // 0x271c94: 0x65250001  daddiu      $a1, $t1, 0x1
    ctx->pc = 0x271c94u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)1);
    // 0x271c98: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x271c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x271c9c: 0x255fe  dsrl32      $t2, $v0, 23
    ctx->pc = 0x271c9cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) >> (32 + 23));
    // 0x271ca0: 0xfcc50008  sd          $a1, 0x8($a2)
    ctx->pc = 0x271ca0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 5));
    // 0x271ca4: 0x2463fff7  addiu       $v1, $v1, -0x9
    ctx->pc = 0x271ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967287));
    // 0x271ca8: 0x21278  dsll        $v0, $v0, 9
    ctx->pc = 0x271ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 9);
    // 0x271cac: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x271cacu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x271cb0: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x271cb0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x271cb4: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x271CB4u;
    {
        const bool branch_taken_0x271cb4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x271CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271CB4u;
            // 0x271cb8: 0xacc30018  sw          $v1, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271cb4) {
            ctx->pc = 0x271D1Cu;
            goto label_271d1c;
        }
    }
    ctx->pc = 0x271CBCu;
    // 0x271cbc: 0x8cc80020  lw          $t0, 0x20($a2)
    ctx->pc = 0x271cbcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x271cc0: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x271cc0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271cc4: 0x0  nop
    ctx->pc = 0x271cc4u;
    // NOP
label_271cc8:
    // 0x271cc8: 0x8cc50014  lw          $a1, 0x14($a2)
    ctx->pc = 0x271cc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x271ccc: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x271cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x271cd0: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x271cd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x271cd4: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x271cd4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x271cd8: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x271cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x271cdc: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x271cdcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x271ce0: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x271ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x271ce4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x271ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x271ce8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x271ce8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x271cec: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x271cecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x271cf0: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x271cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x271cf4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x271CF4u;
    {
        const bool branch_taken_0x271cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271CF4u;
            // 0x271cf8: 0xacc50014  sw          $a1, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271cf4) {
            ctx->pc = 0x271D04u;
            goto label_271d04;
        }
    }
    ctx->pc = 0x271CFCu;
    // 0x271cfc: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x271cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x271d00: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x271d00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_271d04:
    // 0x271d04: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x271d04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x271d08: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x271d08u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x271d0c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x271D0Cu;
    {
        const bool branch_taken_0x271d0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x271D10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271D0Cu;
            // 0x271d10: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271d0c) {
            ctx->pc = 0x271CC8u;
            runtime->cooperativeGuestYield();
            goto label_271cc8;
        }
    }
    ctx->pc = 0x271D14u;
    // 0x271d14: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x271D14u;
    {
        const bool branch_taken_0x271d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271D14u;
            // 0x271d18: 0xadaa0000  sw          $t2, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271d14) {
            ctx->pc = 0x271D24u;
            goto label_271d24;
        }
    }
    ctx->pc = 0x271D1Cu;
label_271d1c:
    // 0x271d1c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x271d1cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271d20: 0xadaa0000  sw          $t2, 0x0($t5)
    ctx->pc = 0x271d20u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 10));
label_271d24:
    // 0x271d24: 0x65250009  daddiu      $a1, $t1, 0x9
    ctx->pc = 0x271d24u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)9);
    // 0x271d28: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x271d28u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x271d2c: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x271d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x271d30: 0x217b8  dsll        $v0, $v0, 30
    ctx->pc = 0x271d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 30);
    // 0x271d34: 0xfcc50008  sd          $a1, 0x8($a2)
    ctx->pc = 0x271d34u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 5));
    // 0x271d38: 0x2463ffe2  addiu       $v1, $v1, -0x1E
    ctx->pc = 0x271d38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967266));
    // 0x271d3c: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x271d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x271d40: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x271d40u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x271d44: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x271D44u;
    {
        const bool branch_taken_0x271d44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x271D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271D44u;
            // 0x271d48: 0xacc30018  sw          $v1, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271d44) {
            ctx->pc = 0x271DACu;
            goto label_271dac;
        }
    }
    ctx->pc = 0x271D4Cu;
    // 0x271d4c: 0x8cc80020  lw          $t0, 0x20($a2)
    ctx->pc = 0x271d4cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x271d50: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x271d50u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271d54: 0x0  nop
    ctx->pc = 0x271d54u;
    // NOP
label_271d58:
    // 0x271d58: 0x8cc50014  lw          $a1, 0x14($a2)
    ctx->pc = 0x271d58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x271d5c: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x271d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x271d60: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x271d60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x271d64: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x271d64u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x271d68: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x271d68u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x271d6c: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x271d6cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x271d70: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x271d70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x271d74: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x271d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x271d78: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x271d78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x271d7c: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x271d7cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x271d80: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x271d80u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x271d84: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x271D84u;
    {
        const bool branch_taken_0x271d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271D84u;
            // 0x271d88: 0xacc50014  sw          $a1, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271d84) {
            ctx->pc = 0x271D94u;
            goto label_271d94;
        }
    }
    ctx->pc = 0x271D8Cu;
    // 0x271d8c: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x271d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x271d90: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x271d90u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_271d94:
    // 0x271d94: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x271d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x271d98: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x271d98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x271d9c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x271D9Cu;
    {
        const bool branch_taken_0x271d9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x271DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271D9Cu;
            // 0x271da0: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271d9c) {
            ctx->pc = 0x271D58u;
            runtime->cooperativeGuestYield();
            goto label_271d58;
        }
    }
    ctx->pc = 0x271DA4u;
    // 0x271da4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x271DA4u;
    {
        const bool branch_taken_0x271da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271DA4u;
            // 0x271da8: 0xdcc20000  ld          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271da4) {
            ctx->pc = 0x271DB4u;
            goto label_271db4;
        }
    }
    ctx->pc = 0x271DACu;
label_271dac:
    // 0x271dac: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x271dacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271db0: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x271db0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
label_271db4:
    // 0x271db4: 0x6525001e  daddiu      $a1, $t1, 0x1E
    ctx->pc = 0x271db4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)30);
    // 0x271db8: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x271db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x271dbc: 0x2677e  dsrl32      $t4, $v0, 29
    ctx->pc = 0x271dbcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) >> (32 + 29));
    // 0x271dc0: 0xfcc50008  sd          $a1, 0x8($a2)
    ctx->pc = 0x271dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 5));
    // 0x271dc4: 0x2463fffd  addiu       $v1, $v1, -0x3
    ctx->pc = 0x271dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967293));
    // 0x271dc8: 0x210f8  dsll        $v0, $v0, 3
    ctx->pc = 0x271dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 3);
    // 0x271dcc: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x271dccu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x271dd0: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x271dd0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x271dd4: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x271DD4u;
    {
        const bool branch_taken_0x271dd4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x271DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271DD4u;
            // 0x271dd8: 0xacc30018  sw          $v1, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271dd4) {
            ctx->pc = 0x271E3Cu;
            goto label_271e3c;
        }
    }
    ctx->pc = 0x271DDCu;
    // 0x271ddc: 0x8cc80020  lw          $t0, 0x20($a2)
    ctx->pc = 0x271ddcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x271de0: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x271de0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271de4: 0x0  nop
    ctx->pc = 0x271de4u;
    // NOP
label_271de8:
    // 0x271de8: 0x8cc50014  lw          $a1, 0x14($a2)
    ctx->pc = 0x271de8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x271dec: 0x24020038  addiu       $v0, $zero, 0x38
    ctx->pc = 0x271decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x271df0: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x271df0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x271df4: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x271df4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x271df8: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x271df8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x271dfc: 0xdcc40000  ld          $a0, 0x0($a2)
    ctx->pc = 0x271dfcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x271e00: 0x431814  dsllv       $v1, $v1, $v0
    ctx->pc = 0x271e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x271e04: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x271e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x271e08: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x271e08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x271e0c: 0xa8102b  sltu        $v0, $a1, $t0
    ctx->pc = 0x271e0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x271e10: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x271e10u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x271e14: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x271E14u;
    {
        const bool branch_taken_0x271e14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271E14u;
            // 0x271e18: 0xacc50014  sw          $a1, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271e14) {
            ctx->pc = 0x271E24u;
            goto label_271e24;
        }
    }
    ctx->pc = 0x271E1Cu;
    // 0x271e1c: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x271e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x271e20: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x271e20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_271e24:
    // 0x271e24: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x271e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x271e28: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x271e28u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x271e2c: 0x1460ffee  bnez        $v1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x271E2Cu;
    {
        const bool branch_taken_0x271e2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x271E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271E2Cu;
            // 0x271e30: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271e2c) {
            ctx->pc = 0x271DE8u;
            runtime->cooperativeGuestYield();
            goto label_271de8;
        }
    }
    ctx->pc = 0x271E34u;
    // 0x271e34: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x271E34u;
    {
        const bool branch_taken_0x271e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271E34u;
            // 0x271e38: 0x1cb1025  or          $v0, $t6, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) | GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271e34) {
            ctx->pc = 0x271E44u;
            goto label_271e44;
        }
    }
    ctx->pc = 0x271E3Cu;
label_271e3c:
    // 0x271e3c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x271e3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271e40: 0x1cb1025  or          $v0, $t6, $t3
    ctx->pc = 0x271e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) | GPR_U64(ctx, 11));
label_271e44:
    // 0x271e44: 0x65230003  daddiu      $v1, $t1, 0x3
    ctx->pc = 0x271e44u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)3);
    // 0x271e48: 0x581025  or          $v0, $v0, $t8
    ctx->pc = 0x271e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 24));
    // 0x271e4c: 0xfcc30008  sd          $v1, 0x8($a2)
    ctx->pc = 0x271e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
    // 0x271e50: 0xada20004  sw          $v0, 0x4($t5)
    ctx->pc = 0x271e50u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4), GPR_U32(ctx, 2));
    // 0x271e54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x271e54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271e58: 0x1180002a  beqz        $t4, . + 4 + (0x2A << 2)
    ctx->pc = 0x271E58u;
    {
        const bool branch_taken_0x271e58 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x271E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271E58u;
            // 0x271e5c: 0xadaf0008  sw          $t7, 0x8($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 8), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271e58) {
            ctx->pc = 0x271F04u;
            goto label_271f04;
        }
    }
    ctx->pc = 0x271E60u;
    // 0x271e60: 0x240b0038  addiu       $t3, $zero, 0x38
    ctx->pc = 0x271e60u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x271e64: 0x0  nop
    ctx->pc = 0x271e64u;
    // NOP
label_271e68:
    // 0x271e68: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x271e68u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x271e6c: 0x8cc30018  lw          $v1, 0x18($a2)
    ctx->pc = 0x271e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x271e70: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x271e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x271e74: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x271e74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x271e78: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x271e78u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x271e7c: 0x28640039  slti        $a0, $v1, 0x39
    ctx->pc = 0x271e7cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x271e80: 0x10800019  beqz        $a0, . + 4 + (0x19 << 2)
    ctx->pc = 0x271E80u;
    {
        const bool branch_taken_0x271e80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x271E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271E80u;
            // 0x271e84: 0xacc30018  sw          $v1, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271e80) {
            ctx->pc = 0x271EE8u;
            goto label_271ee8;
        }
    }
    ctx->pc = 0x271E88u;
    // 0x271e88: 0x8cc80020  lw          $t0, 0x20($a2)
    ctx->pc = 0x271e88u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x271e8c: 0x24aa0001  addiu       $t2, $a1, 0x1
    ctx->pc = 0x271e8cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x271e90: 0xdcc90008  ld          $t1, 0x8($a2)
    ctx->pc = 0x271e90u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x271e94: 0x0  nop
    ctx->pc = 0x271e94u;
    // NOP
label_271e98:
    // 0x271e98: 0x8cc30014  lw          $v1, 0x14($a2)
    ctx->pc = 0x271e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x271e9c: 0x8cc70018  lw          $a3, 0x18($a2)
    ctx->pc = 0x271e9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    // 0x271ea0: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x271ea0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x271ea4: 0xdcc50000  ld          $a1, 0x0($a2)
    ctx->pc = 0x271ea4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x271ea8: 0x1671023  subu        $v0, $t3, $a3
    ctx->pc = 0x271ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x271eac: 0x442014  dsllv       $a0, $a0, $v0
    ctx->pc = 0x271eacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x271eb0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x271eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x271eb4: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x271eb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x271eb8: 0x68102b  sltu        $v0, $v1, $t0
    ctx->pc = 0x271eb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x271ebc: 0xfcc50000  sd          $a1, 0x0($a2)
    ctx->pc = 0x271ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 5));
    // 0x271ec0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x271EC0u;
    {
        const bool branch_taken_0x271ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271EC0u;
            // 0x271ec4: 0xacc30014  sw          $v1, 0x14($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271ec0) {
            ctx->pc = 0x271ED0u;
            goto label_271ed0;
        }
    }
    ctx->pc = 0x271EC8u;
    // 0x271ec8: 0x8cc2001c  lw          $v0, 0x1C($a2)
    ctx->pc = 0x271ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x271ecc: 0xacc20014  sw          $v0, 0x14($a2)
    ctx->pc = 0x271eccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 2));
label_271ed0:
    // 0x271ed0: 0x24e20008  addiu       $v0, $a3, 0x8
    ctx->pc = 0x271ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
    // 0x271ed4: 0x28430039  slti        $v1, $v0, 0x39
    ctx->pc = 0x271ed4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)57) ? 1 : 0);
    // 0x271ed8: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x271ED8u;
    {
        const bool branch_taken_0x271ed8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x271EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271ED8u;
            // 0x271edc: 0xacc20018  sw          $v0, 0x18($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271ed8) {
            ctx->pc = 0x271E98u;
            runtime->cooperativeGuestYield();
            goto label_271e98;
        }
    }
    ctx->pc = 0x271EE0u;
    // 0x271ee0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x271EE0u;
    {
        const bool branch_taken_0x271ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271EE0u;
            // 0x271ee4: 0x65230008  daddiu      $v1, $t1, 0x8 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x271ee0) {
            ctx->pc = 0x271EF4u;
            goto label_271ef4;
        }
    }
    ctx->pc = 0x271EE8u;
label_271ee8:
    // 0x271ee8: 0xdcc90008  ld          $t1, 0x8($a2)
    ctx->pc = 0x271ee8u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x271eec: 0x24aa0001  addiu       $t2, $a1, 0x1
    ctx->pc = 0x271eecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x271ef0: 0x65230008  daddiu      $v1, $t1, 0x8
    ctx->pc = 0x271ef0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 9) + (int64_t)(int32_t)8);
label_271ef4:
    // 0x271ef4: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x271ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271ef8: 0xac102b  sltu        $v0, $a1, $t4
    ctx->pc = 0x271ef8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 12)) ? 1 : 0);
    // 0x271efc: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
    ctx->pc = 0x271EFCu;
    {
        const bool branch_taken_0x271efc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x271F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271EFCu;
            // 0x271f00: 0xfcc30008  sd          $v1, 0x8($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271efc) {
            ctx->pc = 0x271E68u;
            runtime->cooperativeGuestYield();
            goto label_271e68;
        }
    }
    ctx->pc = 0x271F04u;
label_271f04:
    // 0x271f04: 0x9cc20004  lwu         $v0, 0x4($a2)
    ctx->pc = 0x271f04u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x271f08: 0x240301bb  addiu       $v1, $zero, 0x1BB
    ctx->pc = 0x271f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 443));
    // 0x271f0c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x271f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x271f10: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x271f10u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x271f14: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x271F14u;
    {
        const bool branch_taken_0x271f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x271f14) {
            ctx->pc = 0x271F18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x271F14u;
            // 0x271f18: 0xada0000c  sw          $zero, 0xC($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x271F38u;
            goto label_271f38;
        }
    }
    ctx->pc = 0x271F1Cu;
    // 0x271f1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x271f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271f20: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x271f20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271f24: 0xada2000c  sw          $v0, 0xC($t5)
    ctx->pc = 0x271f24u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 12), GPR_U32(ctx, 2));
    // 0x271f28: 0xc09c5b4  jal         func_2716D0
    ctx->pc = 0x271F28u;
    SET_GPR_U32(ctx, 31, 0x271F30u);
    ctx->pc = 0x271F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x271F28u;
            // 0x271f2c: 0x1a0282d  daddu       $a1, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2716D0u;
    if (runtime->hasFunction(0x2716D0u)) {
        auto targetFn = runtime->lookupFunction(0x2716D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271F30u; }
        if (ctx->pc != 0x271F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2716d0_0x2718a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x271F30u; }
        if (ctx->pc != 0x271F30u) { return; }
    }
    ctx->pc = 0x271F30u;
    // 0x271f30: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x271F30u;
    {
        const bool branch_taken_0x271f30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271F30u;
            // 0x271f34: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271f30) {
            ctx->pc = 0x271F3Cu;
            goto label_271f3c;
        }
    }
    ctx->pc = 0x271F38u;
label_271f38:
    // 0x271f38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x271f38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_271f3c:
    // 0x271f3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x271f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271f40: 0x3e00008  jr          $ra
    ctx->pc = 0x271F40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x271F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x271F40u;
            // 0x271f44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2718D8u: goto label_2718d8;
            case 0x271914u: goto label_271914;
            case 0x27192Cu: goto label_27192c;
            case 0x271934u: goto label_271934;
            case 0x271970u: goto label_271970;
            case 0x2719ACu: goto label_2719ac;
            case 0x2719C4u: goto label_2719c4;
            case 0x2719D4u: goto label_2719d4;
            case 0x271A00u: goto label_271a00;
            case 0x271A3Cu: goto label_271a3c;
            case 0x271A54u: goto label_271a54;
            case 0x271A5Cu: goto label_271a5c;
            case 0x271A90u: goto label_271a90;
            case 0x271ACCu: goto label_271acc;
            case 0x271AE4u: goto label_271ae4;
            case 0x271AF0u: goto label_271af0;
            case 0x271B20u: goto label_271b20;
            case 0x271B5Cu: goto label_271b5c;
            case 0x271B74u: goto label_271b74;
            case 0x271B7Cu: goto label_271b7c;
            case 0x271BB0u: goto label_271bb0;
            case 0x271BECu: goto label_271bec;
            case 0x271C04u: goto label_271c04;
            case 0x271C0Cu: goto label_271c0c;
            case 0x271C38u: goto label_271c38;
            case 0x271C74u: goto label_271c74;
            case 0x271C8Cu: goto label_271c8c;
            case 0x271C94u: goto label_271c94;
            case 0x271CC8u: goto label_271cc8;
            case 0x271D04u: goto label_271d04;
            case 0x271D1Cu: goto label_271d1c;
            case 0x271D24u: goto label_271d24;
            case 0x271D58u: goto label_271d58;
            case 0x271D94u: goto label_271d94;
            case 0x271DACu: goto label_271dac;
            case 0x271DB4u: goto label_271db4;
            case 0x271DE8u: goto label_271de8;
            case 0x271E24u: goto label_271e24;
            case 0x271E3Cu: goto label_271e3c;
            case 0x271E44u: goto label_271e44;
            case 0x271E68u: goto label_271e68;
            case 0x271E98u: goto label_271e98;
            case 0x271ED0u: goto label_271ed0;
            case 0x271EE8u: goto label_271ee8;
            case 0x271EF4u: goto label_271ef4;
            case 0x271F04u: goto label_271f04;
            case 0x271F38u: goto label_271f38;
            case 0x271F3Cu: goto label_271f3c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x271F48u;
}
