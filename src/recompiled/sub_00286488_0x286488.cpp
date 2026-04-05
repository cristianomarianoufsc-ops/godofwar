#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00286488
// Address: 0x286488 - 0x286588
void sub_00286488_0x286488(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286488_0x286488");
#endif

    ctx->pc = 0x286488u;

    // 0x286488: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x286488u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28648c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28648cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x286490: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x286490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x286494: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x286494u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286498: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x286498u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28649c: 0x8cb80004  lw          $t8, 0x4($a1)
    ctx->pc = 0x28649cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2864a0: 0x13000033  beqz        $t8, . + 4 + (0x33 << 2)
    ctx->pc = 0x2864A0u;
    {
        const bool branch_taken_0x2864a0 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        ctx->pc = 0x2864A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2864A0u;
            // 0x2864a4: 0x300682d  daddu       $t5, $t8, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2864a0) {
            ctx->pc = 0x286570u;
            goto label_286570;
        }
    }
    ctx->pc = 0x2864A8u;
    // 0x2864a8: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x2864a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2864ac: 0x182080  sll         $a0, $t8, 2
    ctx->pc = 0x2864acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 24), 2));
    // 0x2864b0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x2864b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2864b4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2864b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2864b8: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x2864b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x2864bc: 0x320782d  daddu       $t7, $t9, $zero
    ctx->pc = 0x2864bcu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2864c0: 0x2442fffc  addiu       $v0, $v0, -0x4
    ctx->pc = 0x2864c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x2864c4: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x2864c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2864c8: 0x1e0902d  daddu       $s2, $t7, $zero
    ctx->pc = 0x2864c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2864cc: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x2864ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2864d0: 0x8f2021  addu        $a0, $a0, $t7
    ctx->pc = 0x2864d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 15)));
    // 0x2864d4: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2864d4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2864d8: 0x4f5821  addu        $t3, $v0, $t7
    ctx->pc = 0x2864d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x2864dc: 0x0  nop
    ctx->pc = 0x2864dcu;
    // NOP
label_2864e0:
    // 0x2864e0: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x2864e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x2864e4: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x2864e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x2864e8: 0x8cae0000  lw          $t6, 0x0($a1)
    ctx->pc = 0x2864e8u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2864ec: 0x11200019  beqz        $t1, . + 4 + (0x19 << 2)
    ctx->pc = 0x2864ECu;
    {
        const bool branch_taken_0x2864ec = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2864F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2864ECu;
            // 0x2864f0: 0x25adffff  addiu       $t5, $t5, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2864ec) {
            ctx->pc = 0x286554u;
            goto label_286554;
        }
    }
    ctx->pc = 0x2864F4u;
    // 0x2864f4: 0x8d630000  lw          $v1, 0x0($t3)
    ctx->pc = 0x2864f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2864f8: 0x8dc60008  lw          $a2, 0x8($t6)
    ctx->pc = 0x2864f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x2864fc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2864fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x286500: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x286500u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x286504: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x286504u;
    {
        const bool branch_taken_0x286504 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x286508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286504u;
            // 0x286508: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286504) {
            ctx->pc = 0x286554u;
            goto label_286554;
        }
    }
    ctx->pc = 0x28650Cu;
    // 0x28650c: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x28650cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286510: 0x444021  addu        $t0, $v0, $a0
    ctx->pc = 0x286510u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x286514: 0x1593821  addu        $a3, $t2, $t9
    ctx->pc = 0x286514u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 25)));
    // 0x286518: 0x1523021  addu        $a2, $t2, $s2
    ctx->pc = 0x286518u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 18)));
    // 0x28651c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x28651cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_286520:
    // 0x286520: 0x24e7fffc  addiu       $a3, $a3, -0x4
    ctx->pc = 0x286520u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
    // 0x286524: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x286524u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x286528: 0x256bfffc  addiu       $t3, $t3, -0x4
    ctx->pc = 0x286528u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967292));
    // 0x28652c: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x28652cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x286530: 0x254afffc  addiu       $t2, $t2, -0x4
    ctx->pc = 0x286530u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967292));
    // 0x286534: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x286534u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x286538: 0x11200006  beqz        $t1, . + 4 + (0x6 << 2)
    ctx->pc = 0x286538u;
    {
        const bool branch_taken_0x286538 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x28653Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286538u;
            // 0x28653c: 0x2508fffc  addiu       $t0, $t0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286538) {
            ctx->pc = 0x286554u;
            goto label_286554;
        }
    }
    ctx->pc = 0x286540u;
    // 0x286540: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x286540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x286544: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x286544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x286548: 0x4c1023  subu        $v0, $v0, $t4
    ctx->pc = 0x286548u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x28654c: 0x5c40fff4  bgtzl       $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x28654Cu;
    {
        const bool branch_taken_0x28654c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x28654c) {
            ctx->pc = 0x286550u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28654Cu;
            // 0x286550: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x286520u;
            runtime->cooperativeGuestYield();
            goto label_286520;
        }
    }
    ctx->pc = 0x286554u;
label_286554:
    // 0x286554: 0x12d1021  addu        $v0, $t1, $t5
    ctx->pc = 0x286554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 13)));
    // 0x286558: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x286558u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x28655c: 0x4f1021  addu        $v0, $v0, $t7
    ctx->pc = 0x28655cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 15)));
    // 0x286560: 0x15a0ffdf  bnez        $t5, . + 4 + (-0x21 << 2)
    ctx->pc = 0x286560u;
    {
        const bool branch_taken_0x286560 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x286564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286560u;
            // 0x286564: 0xac4e0000  sw          $t6, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286560) {
            ctx->pc = 0x2864E0u;
            runtime->cooperativeGuestYield();
            goto label_2864e0;
        }
    }
    ctx->pc = 0x286568u;
    // 0x286568: 0x2181021  addu        $v0, $s0, $t8
    ctx->pc = 0x286568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 24)));
    // 0x28656c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x28656cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_286570:
    // 0x286570: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x286570u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x286574: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x286574u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x286578: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x286578u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28657c: 0x3e00008  jr          $ra
    ctx->pc = 0x28657Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28657Cu;
            // 0x286580: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2864E0u: goto label_2864e0;
            case 0x286520u: goto label_286520;
            case 0x286554u: goto label_286554;
            case 0x286570u: goto label_286570;
            default: break;
        }
        return;
    }
    ctx->pc = 0x286584u;
    // 0x286584: 0x0  nop
    ctx->pc = 0x286584u;
    // NOP
}
