#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002708A0
// Address: 0x2708a0 - 0x270cc0
void sub_002708A0_0x2708a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002708A0_0x2708a0");
#endif

    ctx->pc = 0x2708a0u;

    // 0x2708a0: 0x27bdfe50  addiu       $sp, $sp, -0x1B0
    ctx->pc = 0x2708a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966864));
    // 0x2708a4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2708a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2708a8: 0xffbe0190  sd          $fp, 0x190($sp)
    ctx->pc = 0x2708a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 30));
    // 0x2708ac: 0xffb40150  sd          $s4, 0x150($sp)
    ctx->pc = 0x2708acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 20));
    // 0x2708b0: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x2708b0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2708b4: 0xffb20130  sd          $s2, 0x130($sp)
    ctx->pc = 0x2708b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 18));
    // 0x2708b8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2708b8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2708bc: 0xffbf01a0  sd          $ra, 0x1A0($sp)
    ctx->pc = 0x2708bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 31));
    // 0x2708c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2708c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2708c4: 0xffb70180  sd          $s7, 0x180($sp)
    ctx->pc = 0x2708c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 23));
    // 0x2708c8: 0xffb60170  sd          $s6, 0x170($sp)
    ctx->pc = 0x2708c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 22));
    // 0x2708cc: 0xffb50160  sd          $s5, 0x160($sp)
    ctx->pc = 0x2708ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 21));
    // 0x2708d0: 0xffb30140  sd          $s3, 0x140($sp)
    ctx->pc = 0x2708d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 19));
    // 0x2708d4: 0xffb10120  sd          $s1, 0x120($sp)
    ctx->pc = 0x2708d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 17));
    // 0x2708d8: 0xffb00110  sd          $s0, 0x110($sp)
    ctx->pc = 0x2708d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 16));
    // 0x2708dc: 0x8e430184  lw          $v1, 0x184($s2)
    ctx->pc = 0x2708dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 388)));
    // 0x2708e0: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2708E0u;
    {
        const bool branch_taken_0x2708e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2708E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2708E0u;
            // 0x2708e4: 0xafa00100  sw          $zero, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2708e0) {
            ctx->pc = 0x2708FCu;
            goto label_2708fc;
        }
    }
    ctx->pc = 0x2708E8u;
    // 0x2708e8: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x2708e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2708ec: 0x280a82d  daddu       $s5, $s4, $zero
    ctx->pc = 0x2708ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2708f0: 0x3c0b02d  daddu       $s6, $fp, $zero
    ctx->pc = 0x2708f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2708f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2708F4u;
    {
        const bool branch_taken_0x2708f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2708F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2708F4u;
            // 0x2708f8: 0xafa20100  sw          $v0, 0x100($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2708f4) {
            ctx->pc = 0x270904u;
            goto label_270904;
        }
    }
    ctx->pc = 0x2708FCu;
label_2708fc:
    // 0x2708fc: 0x3c0a82d  daddu       $s5, $fp, $zero
    ctx->pc = 0x2708fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270900: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x270900u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_270904:
    // 0x270904: 0x8e530868  lw          $s3, 0x868($s2)
    ctx->pc = 0x270904u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2152)));
    // 0x270908: 0x8e49008c  lw          $t1, 0x8C($s2)
    ctx->pc = 0x270908u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x27090c: 0x26630018  addiu       $v1, $s3, 0x18
    ctx->pc = 0x27090cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
    // 0x270910: 0x26620020  addiu       $v0, $s3, 0x20
    ctx->pc = 0x270910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x270914: 0x26770010  addiu       $s7, $s3, 0x10
    ctx->pc = 0x270914u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
    // 0x270918: 0xafa30104  sw          $v1, 0x104($sp)
    ctx->pc = 0x270918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 3));
    // 0x27091c: 0x11200024  beqz        $t1, . + 4 + (0x24 << 2)
    ctx->pc = 0x27091Cu;
    {
        const bool branch_taken_0x27091c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x270920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27091Cu;
            // 0x270920: 0xafa20108  sw          $v0, 0x108($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27091c) {
            ctx->pc = 0x2709B0u;
            goto label_2709b0;
        }
    }
    ctx->pc = 0x270924u;
    // 0x270924: 0xdea30018  ld          $v1, 0x18($s5)
    ctx->pc = 0x270924u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x270928: 0x4630025  bgezl       $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x270928u;
    {
        const bool branch_taken_0x270928 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x270928) {
            ctx->pc = 0x27092Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x270928u;
            // 0x27092c: 0xfee30000  sd          $v1, 0x0($s7) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2709C0u;
            goto label_2709c0;
        }
    }
    ctx->pc = 0x270930u;
    // 0x270930: 0x8e420098  lw          $v0, 0x98($s2)
    ctx->pc = 0x270930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x270934: 0x4420022  bltzl       $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x270934u;
    {
        const bool branch_taken_0x270934 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x270934) {
            ctx->pc = 0x270938u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x270934u;
            // 0x270938: 0xfee30000  sd          $v1, 0x0($s7) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2709C0u;
            goto label_2709c0;
        }
    }
    ctx->pc = 0x27093Cu;
    // 0x27093c: 0xde4500a0  ld          $a1, 0xA0($s2)
    ctx->pc = 0x27093cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x270940: 0x8e50009c  lw          $s0, 0x9C($s2)
    ctx->pc = 0x270940u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x270944: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x270944u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x270948: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x270948u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x27094c: 0xde440090  ld          $a0, 0x90($s2)
    ctx->pc = 0x27094cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x270950: 0x30b10001  andi        $s1, $a1, 0x1
    ctx->pc = 0x270950u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x270954: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x270954u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x270958: 0x2308024  and         $s0, $s1, $s0
    ctx->pc = 0x270958u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    // 0x27095c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x27095cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x270960: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x270960u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x270964: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x270964u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x270968: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x270968u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x27096c: 0xc0a0fac  jal         func_283EB0
    ctx->pc = 0x27096Cu;
    SET_GPR_U32(ctx, 31, 0x270974u);
    ctx->pc = 0x270970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27096Cu;
            // 0x270970: 0xa0282d  daddu       $a1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283EB0u;
    if (runtime->hasFunction(0x283EB0u)) {
        auto targetFn = runtime->lookupFunction(0x283EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270974u; }
        if (ctx->pc != 0x270974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_283eb0_0x283f18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270974u; }
        if (ctx->pc != 0x270974u) { return; }
    }
    ctx->pc = 0x270974u;
    // 0x270974: 0x217f8  dsll        $v0, $v0, 31
    ctx->pc = 0x270974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 31);
    // 0x270978: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x270978u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x27097c: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x27097cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x270980: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x270980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x270984: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x270984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x270988: 0xfe630010  sd          $v1, 0x10($s3)
    ctx->pc = 0x270988u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 16), GPR_U64(ctx, 3));
    // 0x27098c: 0xde420090  ld          $v0, 0x90($s2)
    ctx->pc = 0x27098cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x270990: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x270990u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x270994: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x270994u;
    {
        const bool branch_taken_0x270994 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x270998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270994u;
            // 0x270998: 0x8e530868  lw          $s3, 0x868($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270994) {
            ctx->pc = 0x2709BCu;
            goto label_2709bc;
        }
    }
    ctx->pc = 0x27099Cu;
    // 0x27099c: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x27099cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x2709a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2709a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2709a4: 0x8e49008c  lw          $t1, 0x8C($s2)
    ctx->pc = 0x2709a4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x2709a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2709A8u;
    {
        const bool branch_taken_0x2709a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2709ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2709A8u;
            // 0x2709ac: 0xae42009c  sw          $v0, 0x9C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2709a8) {
            ctx->pc = 0x2709C0u;
            goto label_2709c0;
        }
    }
    ctx->pc = 0x2709B0u;
label_2709b0:
    // 0x2709b0: 0xdea30018  ld          $v1, 0x18($s5)
    ctx->pc = 0x2709b0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 24)));
    // 0x2709b4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2709B4u;
    {
        const bool branch_taken_0x2709b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2709B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2709B4u;
            // 0x2709b8: 0xfee30000  sd          $v1, 0x0($s7) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2709b4) {
            ctx->pc = 0x2709C0u;
            goto label_2709c0;
        }
    }
    ctx->pc = 0x2709BCu;
label_2709bc:
    // 0x2709bc: 0x8e49008c  lw          $t1, 0x8C($s2)
    ctx->pc = 0x2709bcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_2709c0:
    // 0x2709c0: 0x8e430108  lw          $v1, 0x108($s2)
    ctx->pc = 0x2709c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
    // 0x2709c4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2709c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2709c8: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2709C8u;
    {
        const bool branch_taken_0x2709c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2709c8) {
            ctx->pc = 0x2709CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2709C8u;
            // 0x2709cc: 0x8ea60040  lw          $a2, 0x40($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2709F0u;
            goto label_2709f0;
        }
    }
    ctx->pc = 0x2709D0u;
    // 0x2709d0: 0xde420100  ld          $v0, 0x100($s2)
    ctx->pc = 0x2709d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x2709d4: 0x4420006  bltzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2709D4u;
    {
        const bool branch_taken_0x2709d4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2709d4) {
            ctx->pc = 0x2709D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2709D4u;
            // 0x2709d8: 0x8ea60040  lw          $a2, 0x40($s5) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2709F0u;
            goto label_2709f0;
        }
    }
    ctx->pc = 0x2709DCu;
    // 0x2709dc: 0xfee20000  sd          $v0, 0x0($s7)
    ctx->pc = 0x2709dcu;
    WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 2));
    // 0x2709e0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2709e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2709e4: 0xae400108  sw          $zero, 0x108($s2)
    ctx->pc = 0x2709e4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 0));
    // 0x2709e8: 0xfe420100  sd          $v0, 0x100($s2)
    ctx->pc = 0x2709e8u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 256), GPR_U64(ctx, 2));
    // 0x2709ec: 0x8ea60040  lw          $a2, 0x40($s5)
    ctx->pc = 0x2709ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 64)));
label_2709f0:
    // 0x2709f0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2709f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2709f4: 0x8ea5003c  lw          $a1, 0x3C($s5)
    ctx->pc = 0x2709f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
    // 0x2709f8: 0x266a0028  addiu       $t2, $s3, 0x28
    ctx->pc = 0x2709f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), 40));
    // 0x2709fc: 0x8ea40038  lw          $a0, 0x38($s5)
    ctx->pc = 0x2709fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x270a00: 0x63178  dsll        $a2, $a2, 5
    ctx->pc = 0x270a00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 5);
    // 0x270a04: 0x8ea30030  lw          $v1, 0x30($s5)
    ctx->pc = 0x270a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x270a08: 0x529b8  dsll        $a1, $a1, 6
    ctx->pc = 0x270a08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 6);
    // 0x270a0c: 0x421f8  dsll        $a0, $a0, 7
    ctx->pc = 0x270a0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 7);
    // 0x270a10: 0x8ea20034  lw          $v0, 0x34($s5)
    ctx->pc = 0x270a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 52)));
    // 0x270a14: 0x318f8  dsll        $v1, $v1, 3
    ctx->pc = 0x270a14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 3);
    // 0x270a18: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x270a18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x270a1c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x270a1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x270a20: 0xdea50020  ld          $a1, 0x20($s5)
    ctx->pc = 0x270a20u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 21), 32)));
    // 0x270a24: 0x8fa30104  lw          $v1, 0x104($sp)
    ctx->pc = 0x270a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x270a28: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x270a28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x270a2c: 0x8ea7002c  lw          $a3, 0x2C($s5)
    ctx->pc = 0x270a2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 44)));
    // 0x270a30: 0x266b0030  addiu       $t3, $s3, 0x30
    ctx->pc = 0x270a30u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
    // 0x270a34: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x270a34u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
    // 0x270a38: 0x266c0038  addiu       $t4, $s3, 0x38
    ctx->pc = 0x270a38u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 19), 56));
    // 0x270a3c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x270a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x270a40: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x270a40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x270a44: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x270a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x270a48: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x270a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x270a4c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x270a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x270a50: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x270a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x270a54: 0xfe4800a0  sd          $t0, 0xA0($s2)
    ctx->pc = 0x270a54u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 160), GPR_U64(ctx, 8));
    // 0x270a58: 0x11200018  beqz        $t1, . + 4 + (0x18 << 2)
    ctx->pc = 0x270A58u;
    {
        const bool branch_taken_0x270a58 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x270A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270A58u;
            // 0x270a5c: 0xae430098  sw          $v1, 0x98($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270a58) {
            ctx->pc = 0x270ABCu;
            goto label_270abc;
        }
    }
    ctx->pc = 0x270A60u;
    // 0x270a60: 0xdec20018  ld          $v0, 0x18($s6)
    ctx->pc = 0x270a60u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x270a64: 0x4430017  bgezl       $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x270A64u;
    {
        const bool branch_taken_0x270a64 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x270a64) {
            ctx->pc = 0x270A68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x270A64u;
            // 0x270a68: 0xfd420000  sd          $v0, 0x0($t2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x270AC4u;
            goto label_270ac4;
        }
    }
    ctx->pc = 0x270A6Cu;
    // 0x270a6c: 0x4620015  bltzl       $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x270A6Cu;
    {
        const bool branch_taken_0x270a6c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x270a6c) {
            ctx->pc = 0x270A70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x270A6Cu;
            // 0x270a70: 0xfd420000  sd          $v0, 0x0($t2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x270AC4u;
            goto label_270ac4;
        }
    }
    ctx->pc = 0x270A74u;
    // 0x270a74: 0xde440090  ld          $a0, 0x90($s2)
    ctx->pc = 0x270a74u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x270a78: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x270a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x270a7c: 0x30850001  andi        $a1, $a0, 0x1
    ctx->pc = 0x270a7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x270a80: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x270a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x270a84: 0x427f8  dsll        $a0, $a0, 31
    ctx->pc = 0x270a84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 31);
    // 0x270a88: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x270a88u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x270a8c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x270a8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x270a90: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x270a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x270a94: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x270a94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x270a98: 0xfe630028  sd          $v1, 0x28($s3)
    ctx->pc = 0x270a98u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 40), GPR_U64(ctx, 3));
    // 0x270a9c: 0xde420090  ld          $v0, 0x90($s2)
    ctx->pc = 0x270a9cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x270aa0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x270aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x270aa4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x270AA4u;
    {
        const bool branch_taken_0x270aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270AA4u;
            // 0x270aa8: 0x8e530868  lw          $s3, 0x868($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270aa4) {
            ctx->pc = 0x270AC4u;
            goto label_270ac4;
        }
    }
    ctx->pc = 0x270AACu;
    // 0x270aac: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x270aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x270ab0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x270ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x270ab4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x270AB4u;
    {
        const bool branch_taken_0x270ab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270AB4u;
            // 0x270ab8: 0xae42009c  sw          $v0, 0x9C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270ab4) {
            ctx->pc = 0x270AC4u;
            goto label_270ac4;
        }
    }
    ctx->pc = 0x270ABCu;
label_270abc:
    // 0x270abc: 0xdec20018  ld          $v0, 0x18($s6)
    ctx->pc = 0x270abcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x270ac0: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x270ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
label_270ac4:
    // 0x270ac4: 0x8e430108  lw          $v1, 0x108($s2)
    ctx->pc = 0x270ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
    // 0x270ac8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x270ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x270acc: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x270ACCu;
    {
        const bool branch_taken_0x270acc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x270acc) {
            ctx->pc = 0x270AD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x270ACCu;
            // 0x270ad0: 0x8ec60040  lw          $a2, 0x40($s6) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x270AF4u;
            goto label_270af4;
        }
    }
    ctx->pc = 0x270AD4u;
    // 0x270ad4: 0xde420100  ld          $v0, 0x100($s2)
    ctx->pc = 0x270ad4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x270ad8: 0x4420006  bltzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x270AD8u;
    {
        const bool branch_taken_0x270ad8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x270ad8) {
            ctx->pc = 0x270ADCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x270AD8u;
            // 0x270adc: 0x8ec60040  lw          $a2, 0x40($s6) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x270AF4u;
            goto label_270af4;
        }
    }
    ctx->pc = 0x270AE0u;
    // 0x270ae0: 0xfd420000  sd          $v0, 0x0($t2)
    ctx->pc = 0x270ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 2));
    // 0x270ae4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x270ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x270ae8: 0xae400108  sw          $zero, 0x108($s2)
    ctx->pc = 0x270ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 0));
    // 0x270aec: 0xfe420100  sd          $v0, 0x100($s2)
    ctx->pc = 0x270aecu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 256), GPR_U64(ctx, 2));
    // 0x270af0: 0x8ec60040  lw          $a2, 0x40($s6)
    ctx->pc = 0x270af0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 64)));
label_270af4:
    // 0x270af4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x270af4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x270af8: 0x8ec5003c  lw          $a1, 0x3C($s6)
    ctx->pc = 0x270af8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 60)));
    // 0x270afc: 0x8ec20034  lw          $v0, 0x34($s6)
    ctx->pc = 0x270afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 52)));
    // 0x270b00: 0x63178  dsll        $a2, $a2, 5
    ctx->pc = 0x270b00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 5);
    // 0x270b04: 0x8ec7002c  lw          $a3, 0x2C($s6)
    ctx->pc = 0x270b04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
    // 0x270b08: 0x529b8  dsll        $a1, $a1, 6
    ctx->pc = 0x270b08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 6);
    // 0x270b0c: 0x8ec40038  lw          $a0, 0x38($s6)
    ctx->pc = 0x270b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 56)));
    // 0x270b10: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x270b10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x270b14: 0x8ec30030  lw          $v1, 0x30($s6)
    ctx->pc = 0x270b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 48)));
    // 0x270b18: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x270b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x270b1c: 0xdec50020  ld          $a1, 0x20($s6)
    ctx->pc = 0x270b1cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 22), 32)));
    // 0x270b20: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x270b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x270b24: 0x318f8  dsll        $v1, $v1, 3
    ctx->pc = 0x270b24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 3);
    // 0x270b28: 0x421f8  dsll        $a0, $a0, 7
    ctx->pc = 0x270b28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 7);
    // 0x270b2c: 0x8fa80100  lw          $t0, 0x100($sp)
    ctx->pc = 0x270b2cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x270b30: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x270b30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x270b34: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x270b34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x270b38: 0xfd650000  sd          $a1, 0x0($t3)
    ctx->pc = 0x270b38u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 0), GPR_U64(ctx, 5));
    // 0x270b3c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x270b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x270b40: 0x8e4500f4  lw          $a1, 0xF4($s2)
    ctx->pc = 0x270b40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 244)));
    // 0x270b44: 0xfd820000  sd          $v0, 0x0($t4)
    ctx->pc = 0x270b44u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 0), GPR_U64(ctx, 2));
    // 0x270b48: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x270b48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x270b4c: 0xfe4900a0  sd          $t1, 0xA0($s2)
    ctx->pc = 0x270b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 160), GPR_U64(ctx, 9));
    // 0x270b50: 0xae430098  sw          $v1, 0x98($s2)
    ctx->pc = 0x270b50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 3));
    // 0x270b54: 0xde620020  ld          $v0, 0x20($s3)
    ctx->pc = 0x270b54u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x270b58: 0x8ea4005c  lw          $a0, 0x5C($s5)
    ctx->pc = 0x270b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 92)));
    // 0x270b5c: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x270b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x270b60: 0xde630038  ld          $v1, 0x38($s3)
    ctx->pc = 0x270b60u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x270b64: 0xae4400e0  sw          $a0, 0xE0($s2)
    ctx->pc = 0x270b64u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 4));
    // 0x270b68: 0xfe620020  sd          $v0, 0x20($s3)
    ctx->pc = 0x270b68u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 32), GPR_U64(ctx, 2));
    // 0x270b6c: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x270b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x270b70: 0x8ea40060  lw          $a0, 0x60($s5)
    ctx->pc = 0x270b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x270b74: 0xfe630038  sd          $v1, 0x38($s3)
    ctx->pc = 0x270b74u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 56), GPR_U64(ctx, 3));
    // 0x270b78: 0xae4400e4  sw          $a0, 0xE4($s2)
    ctx->pc = 0x270b78u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 4));
    // 0x270b7c: 0x8ea20044  lw          $v0, 0x44($s5)
    ctx->pc = 0x270b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x270b80: 0xae4200c8  sw          $v0, 0xC8($s2)
    ctx->pc = 0x270b80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 2));
    // 0x270b84: 0x8ec30048  lw          $v1, 0x48($s6)
    ctx->pc = 0x270b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 72)));
    // 0x270b88: 0xae4300cc  sw          $v1, 0xCC($s2)
    ctx->pc = 0x270b88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 3));
    // 0x270b8c: 0x8ea20050  lw          $v0, 0x50($s5)
    ctx->pc = 0x270b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 80)));
    // 0x270b90: 0xae4200d4  sw          $v0, 0xD4($s2)
    ctx->pc = 0x270b90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 2));
    // 0x270b94: 0x8ec30054  lw          $v1, 0x54($s6)
    ctx->pc = 0x270b94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 84)));
    // 0x270b98: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x270B98u;
    {
        const bool branch_taken_0x270b98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x270B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270B98u;
            // 0x270b9c: 0xae4300d8  sw          $v1, 0xD8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270b98) {
            ctx->pc = 0x270BC4u;
            goto label_270bc4;
        }
    }
    ctx->pc = 0x270BA0u;
    // 0x270ba0: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x270ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x270ba4: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x270ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x270ba8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x270ba8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x270bac: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x270BACu;
    {
        const bool branch_taken_0x270bac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x270BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270BACu;
            // 0x270bb0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270bac) {
            ctx->pc = 0x270BDCu;
            goto label_270bdc;
        }
    }
    ctx->pc = 0x270BB4u;
    // 0x270bb4: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x270bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x270bb8: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x270bb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x270bbc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x270BBCu;
    {
        const bool branch_taken_0x270bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270BBCu;
            // 0x270bc0: 0x38500001  xori        $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x270bbc) {
            ctx->pc = 0x270BDCu;
            goto label_270bdc;
        }
    }
    ctx->pc = 0x270BC4u;
label_270bc4:
    // 0x270bc4: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x270bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x270bc8: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x270bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x270bcc: 0x8e4200f8  lw          $v0, 0xF8($s2)
    ctx->pc = 0x270bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x270bd0: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x270bd0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x270bd4: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x270bd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x270bd8: 0x38500001  xori        $s0, $v0, 0x1
    ctx->pc = 0x270bd8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_270bdc:
    // 0x270bdc: 0x5600000e  bnel        $s0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x270BDCu;
    {
        const bool branch_taken_0x270bdc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x270bdc) {
            ctx->pc = 0x270BE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x270BDCu;
            // 0x270be0: 0x8e830028  lw          $v1, 0x28($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x270C18u;
            goto label_270c18;
        }
    }
    ctx->pc = 0x270BE4u;
    // 0x270be4: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x270be4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x270be8: 0x8e870004  lw          $a3, 0x4($s4)
    ctx->pc = 0x270be8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x270bec: 0x8e880008  lw          $t0, 0x8($s4)
    ctx->pc = 0x270becu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x270bf0: 0x24c64458  addiu       $a2, $a2, 0x4458
    ctx->pc = 0x270bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17496));
    // 0x270bf4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x270bf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270bf8: 0xc0a58de  jal         func_296378
    ctx->pc = 0x270BF8u;
    SET_GPR_U32(ctx, 31, 0x270C00u);
    ctx->pc = 0x270BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270BF8u;
            // 0x270bfc: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296378u;
    if (runtime->hasFunction(0x296378u)) {
        auto targetFn = runtime->lookupFunction(0x296378u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270C00u; }
        if (ctx->pc != 0x270C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00296378_0x296378(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270C00u; }
        if (ctx->pc != 0x270C00u) { return; }
    }
    ctx->pc = 0x270C00u;
    // 0x270c00: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x270c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270c04: 0xc09d0e6  jal         func_274398
    ctx->pc = 0x270C04u;
    SET_GPR_U32(ctx, 31, 0x270C0Cu);
    ctx->pc = 0x270C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270C04u;
            // 0x270c08: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x274398u;
    if (runtime->hasFunction(0x274398u)) {
        auto targetFn = runtime->lookupFunction(0x274398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270C0Cu; }
        if (ctx->pc != 0x270C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00274398_0x274398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270C0Cu; }
        if (ctx->pc != 0x270C0Cu) { return; }
    }
    ctx->pc = 0x270C0Cu;
    // 0x270c0c: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x270C0Cu;
    {
        const bool branch_taken_0x270c0c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x270C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270C0Cu;
            // 0x270c10: 0xdfbf01a0  ld          $ra, 0x1A0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270c0c) {
            ctx->pc = 0x270C94u;
            goto label_270c94;
        }
    }
    ctx->pc = 0x270C14u;
    // 0x270c14: 0x8e830028  lw          $v1, 0x28($s4)
    ctx->pc = 0x270c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 40)));
label_270c18:
    // 0x270c18: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x270c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x270c1c: 0x1462001d  bne         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x270C1Cu;
    {
        const bool branch_taken_0x270c1c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x270C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270C1Cu;
            // 0x270c20: 0xdfbf01a0  ld          $ra, 0x1A0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 416)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270c1c) {
            ctx->pc = 0x270C94u;
            goto label_270c94;
        }
    }
    ctx->pc = 0x270C24u;
    // 0x270c24: 0x8fc20028  lw          $v0, 0x28($fp)
    ctx->pc = 0x270c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 40)));
    // 0x270c28: 0x5443001b  bnel        $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x270C28u;
    {
        const bool branch_taken_0x270c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x270c28) {
            ctx->pc = 0x270C2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x270C28u;
            // 0x270c2c: 0xdfbe0190  ld          $fp, 0x190($sp) (Delay Slot)
        SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 400)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x270C98u;
            goto label_270c98;
        }
    }
    ctx->pc = 0x270C30u;
    // 0x270c30: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x270c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x270c34: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x270c34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x270c38: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x270c38u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
    // 0x270c3c: 0x8e4300c4  lw          $v1, 0xC4($s2)
    ctx->pc = 0x270c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x270c40: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x270C40u;
    {
        const bool branch_taken_0x270c40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x270C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270C40u;
            // 0x270c44: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270c40) {
            ctx->pc = 0x270C58u;
            goto label_270c58;
        }
    }
    ctx->pc = 0x270C48u;
    // 0x270c48: 0xc09c3f4  jal         func_270FD0
    ctx->pc = 0x270C48u;
    SET_GPR_U32(ctx, 31, 0x270C50u);
    ctx->pc = 0x270C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270C48u;
            // 0x270c4c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x270FD0u;
    if (runtime->hasFunction(0x270FD0u)) {
        auto targetFn = runtime->lookupFunction(0x270FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270C50u; }
        if (ctx->pc != 0x270C50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00270FD0_0x270fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270C50u; }
        if (ctx->pc != 0x270C50u) { return; }
    }
    ctx->pc = 0x270C50u;
    // 0x270c50: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x270C50u;
    {
        const bool branch_taken_0x270c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270C50u;
            // 0x270c54: 0x8e820010  lw          $v0, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270c50) {
            ctx->pc = 0x270C64u;
            goto label_270c64;
        }
    }
    ctx->pc = 0x270C58u;
label_270c58:
    // 0x270c58: 0xc09c0d4  jal         func_270350
    ctx->pc = 0x270C58u;
    SET_GPR_U32(ctx, 31, 0x270C60u);
    ctx->pc = 0x270C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270C58u;
            // 0x270c5c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x270350u;
    if (runtime->hasFunction(0x270350u)) {
        auto targetFn = runtime->lookupFunction(0x270350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270C60u; }
        if (ctx->pc != 0x270C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00270350_0x270350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270C60u; }
        if (ctx->pc != 0x270C60u) { return; }
    }
    ctx->pc = 0x270C60u;
    // 0x270c60: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x270c60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_270c64:
    // 0x270c64: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x270c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x270c68: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x270c68u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x270c6c: 0xae820010  sw          $v0, 0x10($s4)
    ctx->pc = 0x270c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 2));
    // 0x270c70: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x270c70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x270c74: 0x10640005  beq         $v1, $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x270C74u;
    {
        const bool branch_taken_0x270c74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x270C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270C74u;
            // 0x270c78: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270c74) {
            ctx->pc = 0x270C8Cu;
            goto label_270c8c;
        }
    }
    ctx->pc = 0x270C7Cu;
    // 0x270c7c: 0x8e420128  lw          $v0, 0x128($s2)
    ctx->pc = 0x270c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 296)));
    // 0x270c80: 0xae440008  sw          $a0, 0x8($s2)
    ctx->pc = 0x270c80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
    // 0x270c84: 0xae4200c0  sw          $v0, 0xC0($s2)
    ctx->pc = 0x270c84u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 2));
    // 0x270c88: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x270c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_270c8c:
    // 0x270c8c: 0xae420834  sw          $v0, 0x834($s2)
    ctx->pc = 0x270c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2100), GPR_U32(ctx, 2));
    // 0x270c90: 0xdfbf01a0  ld          $ra, 0x1A0($sp)
    ctx->pc = 0x270c90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 416)));
label_270c94:
    // 0x270c94: 0xdfbe0190  ld          $fp, 0x190($sp)
    ctx->pc = 0x270c94u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 400)));
label_270c98:
    // 0x270c98: 0xdfb70180  ld          $s7, 0x180($sp)
    ctx->pc = 0x270c98u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x270c9c: 0xdfb60170  ld          $s6, 0x170($sp)
    ctx->pc = 0x270c9cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x270ca0: 0xdfb50160  ld          $s5, 0x160($sp)
    ctx->pc = 0x270ca0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x270ca4: 0xdfb40150  ld          $s4, 0x150($sp)
    ctx->pc = 0x270ca4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x270ca8: 0xdfb30140  ld          $s3, 0x140($sp)
    ctx->pc = 0x270ca8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x270cac: 0xdfb20130  ld          $s2, 0x130($sp)
    ctx->pc = 0x270cacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x270cb0: 0xdfb10120  ld          $s1, 0x120($sp)
    ctx->pc = 0x270cb0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x270cb4: 0xdfb00110  ld          $s0, 0x110($sp)
    ctx->pc = 0x270cb4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x270cb8: 0x3e00008  jr          $ra
    ctx->pc = 0x270CB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270CB8u;
            // 0x270cbc: 0x27bd01b0  addiu       $sp, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2708FCu: goto label_2708fc;
            case 0x270904u: goto label_270904;
            case 0x2709B0u: goto label_2709b0;
            case 0x2709BCu: goto label_2709bc;
            case 0x2709C0u: goto label_2709c0;
            case 0x2709F0u: goto label_2709f0;
            case 0x270ABCu: goto label_270abc;
            case 0x270AC4u: goto label_270ac4;
            case 0x270AF4u: goto label_270af4;
            case 0x270BC4u: goto label_270bc4;
            case 0x270BDCu: goto label_270bdc;
            case 0x270C18u: goto label_270c18;
            case 0x270C58u: goto label_270c58;
            case 0x270C64u: goto label_270c64;
            case 0x270C8Cu: goto label_270c8c;
            case 0x270C94u: goto label_270c94;
            case 0x270C98u: goto label_270c98;
            default: break;
        }
        return;
    }
    ctx->pc = 0x270CC0u;
}
