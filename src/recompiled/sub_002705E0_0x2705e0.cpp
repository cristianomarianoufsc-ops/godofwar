#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002705E0
// Address: 0x2705e0 - 0x2708a0
void sub_002705E0_0x2705e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002705E0_0x2705e0");
#endif

    ctx->pc = 0x2705e0u;

    // 0x2705e0: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x2705e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x2705e4: 0xffb70170  sd          $s7, 0x170($sp)
    ctx->pc = 0x2705e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 23));
    // 0x2705e8: 0xffb60160  sd          $s6, 0x160($sp)
    ctx->pc = 0x2705e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 22));
    // 0x2705ec: 0xffb50150  sd          $s5, 0x150($sp)
    ctx->pc = 0x2705ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 21));
    // 0x2705f0: 0xffb30130  sd          $s3, 0x130($sp)
    ctx->pc = 0x2705f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 19));
    // 0x2705f4: 0xffb20120  sd          $s2, 0x120($sp)
    ctx->pc = 0x2705f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 18));
    // 0x2705f8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2705f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2705fc: 0xffbf0180  sd          $ra, 0x180($sp)
    ctx->pc = 0x2705fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 31));
    // 0x270600: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x270600u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270604: 0xffb10110  sd          $s1, 0x110($sp)
    ctx->pc = 0x270604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 17));
    // 0x270608: 0xffb00100  sd          $s0, 0x100($sp)
    ctx->pc = 0x270608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 16));
    // 0x27060c: 0xffb40140  sd          $s4, 0x140($sp)
    ctx->pc = 0x27060cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 20));
    // 0x270610: 0x8e540868  lw          $s4, 0x868($s2)
    ctx->pc = 0x270610u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2152)));
    // 0x270614: 0x8e42008c  lw          $v0, 0x8C($s2)
    ctx->pc = 0x270614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x270618: 0x26950010  addiu       $s5, $s4, 0x10
    ctx->pc = 0x270618u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), 16));
    // 0x27061c: 0x26960018  addiu       $s6, $s4, 0x18
    ctx->pc = 0x27061cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
    // 0x270620: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x270620u;
    {
        const bool branch_taken_0x270620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270620u;
            // 0x270624: 0x26970020  addiu       $s7, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270620) {
            ctx->pc = 0x2706B0u;
            goto label_2706b0;
        }
    }
    ctx->pc = 0x270628u;
    // 0x270628: 0xde630018  ld          $v1, 0x18($s3)
    ctx->pc = 0x270628u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x27062c: 0x4630022  bgezl       $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x27062Cu;
    {
        const bool branch_taken_0x27062c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x27062c) {
            ctx->pc = 0x270630u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27062Cu;
            // 0x270630: 0xfea30000  sd          $v1, 0x0($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2706B8u;
            goto label_2706b8;
        }
    }
    ctx->pc = 0x270634u;
    // 0x270634: 0x8e420098  lw          $v0, 0x98($s2)
    ctx->pc = 0x270634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x270638: 0x442001f  bltzl       $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x270638u;
    {
        const bool branch_taken_0x270638 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x270638) {
            ctx->pc = 0x27063Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x270638u;
            // 0x27063c: 0xfea30000  sd          $v1, 0x0($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2706B8u;
            goto label_2706b8;
        }
    }
    ctx->pc = 0x270640u;
    // 0x270640: 0xde4500a0  ld          $a1, 0xA0($s2)
    ctx->pc = 0x270640u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 160)));
    // 0x270644: 0x8e50009c  lw          $s0, 0x9C($s2)
    ctx->pc = 0x270644u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x270648: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x270648u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x27064c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x27064cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x270650: 0xde440090  ld          $a0, 0x90($s2)
    ctx->pc = 0x270650u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x270654: 0x30b10001  andi        $s1, $a1, 0x1
    ctx->pc = 0x270654u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x270658: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x270658u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x27065c: 0x2308024  and         $s0, $s1, $s0
    ctx->pc = 0x27065cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    // 0x270660: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x270660u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x270664: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x270664u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x270668: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x270668u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x27066c: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x27066cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x270670: 0xc0a0fac  jal         func_283EB0
    ctx->pc = 0x270670u;
    SET_GPR_U32(ctx, 31, 0x270678u);
    ctx->pc = 0x270674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270670u;
            // 0x270674: 0xa0282d  daddu       $a1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283EB0u;
    if (runtime->hasFunction(0x283EB0u)) {
        auto targetFn = runtime->lookupFunction(0x283EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270678u; }
        if (ctx->pc != 0x270678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_283eb0_0x283f18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270678u; }
        if (ctx->pc != 0x270678u) { return; }
    }
    ctx->pc = 0x270678u;
    // 0x270678: 0x217f8  dsll        $v0, $v0, 31
    ctx->pc = 0x270678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 31);
    // 0x27067c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x27067cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x270680: 0x8e430098  lw          $v1, 0x98($s2)
    ctx->pc = 0x270680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 152)));
    // 0x270684: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x270684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x270688: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x270688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x27068c: 0xfe830010  sd          $v1, 0x10($s4)
    ctx->pc = 0x27068cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 3));
    // 0x270690: 0xde420090  ld          $v0, 0x90($s2)
    ctx->pc = 0x270690u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 144)));
    // 0x270694: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x270694u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x270698: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x270698u;
    {
        const bool branch_taken_0x270698 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x27069Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270698u;
            // 0x27069c: 0x8e540868  lw          $s4, 0x868($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270698) {
            ctx->pc = 0x2706B8u;
            goto label_2706b8;
        }
    }
    ctx->pc = 0x2706A0u;
    // 0x2706a0: 0x8e42009c  lw          $v0, 0x9C($s2)
    ctx->pc = 0x2706a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    // 0x2706a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2706a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2706a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2706A8u;
    {
        const bool branch_taken_0x2706a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2706ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2706A8u;
            // 0x2706ac: 0xae42009c  sw          $v0, 0x9C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2706a8) {
            ctx->pc = 0x2706B8u;
            goto label_2706b8;
        }
    }
    ctx->pc = 0x2706B0u;
label_2706b0:
    // 0x2706b0: 0xde630018  ld          $v1, 0x18($s3)
    ctx->pc = 0x2706b0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x2706b4: 0xfea30000  sd          $v1, 0x0($s5)
    ctx->pc = 0x2706b4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 3));
label_2706b8:
    // 0x2706b8: 0x8e430108  lw          $v1, 0x108($s2)
    ctx->pc = 0x2706b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
    // 0x2706bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2706bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2706c0: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2706C0u;
    {
        const bool branch_taken_0x2706c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2706c0) {
            ctx->pc = 0x2706C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2706C0u;
            // 0x2706c4: 0x8e660040  lw          $a2, 0x40($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2706E8u;
            goto label_2706e8;
        }
    }
    ctx->pc = 0x2706C8u;
    // 0x2706c8: 0xde420100  ld          $v0, 0x100($s2)
    ctx->pc = 0x2706c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x2706cc: 0x4420006  bltzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2706CCu;
    {
        const bool branch_taken_0x2706cc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2706cc) {
            ctx->pc = 0x2706D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2706CCu;
            // 0x2706d0: 0x8e660040  lw          $a2, 0x40($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2706E8u;
            goto label_2706e8;
        }
    }
    ctx->pc = 0x2706D4u;
    // 0x2706d4: 0xfea20000  sd          $v0, 0x0($s5)
    ctx->pc = 0x2706d4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 0), GPR_U64(ctx, 2));
    // 0x2706d8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2706d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2706dc: 0xae400108  sw          $zero, 0x108($s2)
    ctx->pc = 0x2706dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 264), GPR_U32(ctx, 0));
    // 0x2706e0: 0xfe420100  sd          $v0, 0x100($s2)
    ctx->pc = 0x2706e0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 256), GPR_U64(ctx, 2));
    // 0x2706e4: 0x8e660040  lw          $a2, 0x40($s3)
    ctx->pc = 0x2706e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_2706e8:
    // 0x2706e8: 0x3c08002a  lui         $t0, 0x2A
    ctx->pc = 0x2706e8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)42 << 16));
    // 0x2706ec: 0x8e65003c  lw          $a1, 0x3C($s3)
    ctx->pc = 0x2706ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x2706f0: 0x25081460  addiu       $t0, $t0, 0x1460
    ctx->pc = 0x2706f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 5216));
    // 0x2706f4: 0x8e620034  lw          $v0, 0x34($s3)
    ctx->pc = 0x2706f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x2706f8: 0x63178  dsll        $a2, $a2, 5
    ctx->pc = 0x2706f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 5);
    // 0x2706fc: 0x8e67002c  lw          $a3, 0x2C($s3)
    ctx->pc = 0x2706fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x270700: 0x529b8  dsll        $a1, $a1, 6
    ctx->pc = 0x270700u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 6);
    // 0x270704: 0x8e640038  lw          $a0, 0x38($s3)
    ctx->pc = 0x270704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x270708: 0xc53025  or          $a2, $a2, $a1
    ctx->pc = 0x270708u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 5));
    // 0x27070c: 0x8e630030  lw          $v1, 0x30($s3)
    ctx->pc = 0x27070cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x270710: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x270710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x270714: 0xde650020  ld          $a1, 0x20($s3)
    ctx->pc = 0x270714u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x270718: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x270718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x27071c: 0x318f8  dsll        $v1, $v1, 3
    ctx->pc = 0x27071cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 3);
    // 0x270720: 0x421f8  dsll        $a0, $a0, 7
    ctx->pc = 0x270720u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 7);
    // 0x270724: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x270724u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x270728: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x270728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x27072c: 0xfec50000  sd          $a1, 0x0($s6)
    ctx->pc = 0x27072cu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 5));
    // 0x270730: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x270730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x270734: 0xfee20000  sd          $v0, 0x0($s7)
    ctx->pc = 0x270734u;
    WRITE64(ADD32(GPR_U32(ctx, 23), 0), GPR_U64(ctx, 2));
    // 0x270738: 0x8e4500f4  lw          $a1, 0xF4($s2)
    ctx->pc = 0x270738u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 244)));
    // 0x27073c: 0xde820020  ld          $v0, 0x20($s4)
    ctx->pc = 0x27073cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x270740: 0x8e830010  lw          $v1, 0x10($s4)
    ctx->pc = 0x270740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x270744: 0x216f8  dsll        $v0, $v0, 27
    ctx->pc = 0x270744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 27);
    // 0x270748: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x270748u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x27074c: 0xae430098  sw          $v1, 0x98($s2)
    ctx->pc = 0x27074cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 152), GPR_U32(ctx, 3));
    // 0x270750: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x270750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x270754: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x270754u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x270758: 0x8e63005c  lw          $v1, 0x5C($s3)
    ctx->pc = 0x270758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 92)));
    // 0x27075c: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x27075cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x270760: 0x9c440000  lwu         $a0, 0x0($v0)
    ctx->pc = 0x270760u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x270764: 0xae4300e0  sw          $v1, 0xE0($s2)
    ctx->pc = 0x270764u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 3));
    // 0x270768: 0xfe4400a0  sd          $a0, 0xA0($s2)
    ctx->pc = 0x270768u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 160), GPR_U64(ctx, 4));
    // 0x27076c: 0x8e620060  lw          $v0, 0x60($s3)
    ctx->pc = 0x27076cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x270770: 0xae4200e4  sw          $v0, 0xE4($s2)
    ctx->pc = 0x270770u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 2));
    // 0x270774: 0x8e630044  lw          $v1, 0x44($s3)
    ctx->pc = 0x270774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 68)));
    // 0x270778: 0xae4300c8  sw          $v1, 0xC8($s2)
    ctx->pc = 0x270778u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 3));
    // 0x27077c: 0x8e620048  lw          $v0, 0x48($s3)
    ctx->pc = 0x27077cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 72)));
    // 0x270780: 0xae4200cc  sw          $v0, 0xCC($s2)
    ctx->pc = 0x270780u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 204), GPR_U32(ctx, 2));
    // 0x270784: 0x8e63004c  lw          $v1, 0x4C($s3)
    ctx->pc = 0x270784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x270788: 0xae4300d0  sw          $v1, 0xD0($s2)
    ctx->pc = 0x270788u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 208), GPR_U32(ctx, 3));
    // 0x27078c: 0x8e620050  lw          $v0, 0x50($s3)
    ctx->pc = 0x27078cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x270790: 0xae4200d4  sw          $v0, 0xD4($s2)
    ctx->pc = 0x270790u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 2));
    // 0x270794: 0x8e630054  lw          $v1, 0x54($s3)
    ctx->pc = 0x270794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x270798: 0xae4300d8  sw          $v1, 0xD8($s2)
    ctx->pc = 0x270798u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 3));
    // 0x27079c: 0x8e620058  lw          $v0, 0x58($s3)
    ctx->pc = 0x27079cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 88)));
    // 0x2707a0: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x2707A0u;
    {
        const bool branch_taken_0x2707a0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2707A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2707A0u;
            // 0x2707a4: 0xae4200dc  sw          $v0, 0xDC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2707a0) {
            ctx->pc = 0x2707CCu;
            goto label_2707cc;
        }
    }
    ctx->pc = 0x2707A8u;
    // 0x2707a8: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x2707a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x2707ac: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x2707acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2707b0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2707b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2707b4: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2707B4u;
    {
        const bool branch_taken_0x2707b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2707B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2707B4u;
            // 0x2707b8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2707b4) {
            ctx->pc = 0x2707E4u;
            goto label_2707e4;
        }
    }
    ctx->pc = 0x2707BCu;
    // 0x2707bc: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x2707bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2707c0: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2707c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2707c4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2707C4u;
    {
        const bool branch_taken_0x2707c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2707C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2707C4u;
            // 0x2707c8: 0x38500001  xori        $s0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2707c4) {
            ctx->pc = 0x2707E4u;
            goto label_2707e4;
        }
    }
    ctx->pc = 0x2707CCu;
label_2707cc:
    // 0x2707cc: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x2707ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x2707d0: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x2707d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x2707d4: 0x8e4200f8  lw          $v0, 0xF8($s2)
    ctx->pc = 0x2707d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x2707d8: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x2707d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2707dc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2707dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x2707e0: 0x38500001  xori        $s0, $v0, 0x1
    ctx->pc = 0x2707e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2707e4:
    // 0x2707e4: 0x5600000e  bnel        $s0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2707E4u;
    {
        const bool branch_taken_0x2707e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2707e4) {
            ctx->pc = 0x2707E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2707E4u;
            // 0x2707e8: 0x8e630028  lw          $v1, 0x28($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x270820u;
            goto label_270820;
        }
    }
    ctx->pc = 0x2707ECu;
    // 0x2707ec: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x2707ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x2707f0: 0x8e670004  lw          $a3, 0x4($s3)
    ctx->pc = 0x2707f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x2707f4: 0x8e680008  lw          $t0, 0x8($s3)
    ctx->pc = 0x2707f4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x2707f8: 0x24c64458  addiu       $a2, $a2, 0x4458
    ctx->pc = 0x2707f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17496));
    // 0x2707fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2707fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270800: 0xc0a58de  jal         func_296378
    ctx->pc = 0x270800u;
    SET_GPR_U32(ctx, 31, 0x270808u);
    ctx->pc = 0x270804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270800u;
            // 0x270804: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296378u;
    if (runtime->hasFunction(0x296378u)) {
        auto targetFn = runtime->lookupFunction(0x296378u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270808u; }
        if (ctx->pc != 0x270808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00296378_0x296378(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270808u; }
        if (ctx->pc != 0x270808u) { return; }
    }
    ctx->pc = 0x270808u;
    // 0x270808: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x270808u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27080c: 0xc09d0e6  jal         func_274398
    ctx->pc = 0x27080Cu;
    SET_GPR_U32(ctx, 31, 0x270814u);
    ctx->pc = 0x270810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27080Cu;
            // 0x270810: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x274398u;
    if (runtime->hasFunction(0x274398u)) {
        auto targetFn = runtime->lookupFunction(0x274398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270814u; }
        if (ctx->pc != 0x270814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00274398_0x274398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270814u; }
        if (ctx->pc != 0x270814u) { return; }
    }
    ctx->pc = 0x270814u;
    // 0x270814: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x270814u;
    {
        const bool branch_taken_0x270814 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x270818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270814u;
            // 0x270818: 0xdfbf0180  ld          $ra, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270814) {
            ctx->pc = 0x270878u;
            goto label_270878;
        }
    }
    ctx->pc = 0x27081Cu;
    // 0x27081c: 0x8e630028  lw          $v1, 0x28($s3)
    ctx->pc = 0x27081cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_270820:
    // 0x270820: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x270820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x270824: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x270824u;
    {
        const bool branch_taken_0x270824 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x270828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270824u;
            // 0x270828: 0xdfbf0180  ld          $ra, 0x180($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270824) {
            ctx->pc = 0x270878u;
            goto label_270878;
        }
    }
    ctx->pc = 0x27082Cu;
    // 0x27082c: 0x8e4200c4  lw          $v0, 0xC4($s2)
    ctx->pc = 0x27082cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 196)));
    // 0x270830: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x270830u;
    {
        const bool branch_taken_0x270830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270830u;
            // 0x270834: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270830) {
            ctx->pc = 0x270848u;
            goto label_270848;
        }
    }
    ctx->pc = 0x270838u;
    // 0x270838: 0xc09c3f4  jal         func_270FD0
    ctx->pc = 0x270838u;
    SET_GPR_U32(ctx, 31, 0x270840u);
    ctx->pc = 0x27083Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270838u;
            // 0x27083c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x270FD0u;
    if (runtime->hasFunction(0x270FD0u)) {
        auto targetFn = runtime->lookupFunction(0x270FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270840u; }
        if (ctx->pc != 0x270840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00270FD0_0x270fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270840u; }
        if (ctx->pc != 0x270840u) { return; }
    }
    ctx->pc = 0x270840u;
    // 0x270840: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x270840u;
    {
        const bool branch_taken_0x270840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270840u;
            // 0x270844: 0x8e420008  lw          $v0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270840) {
            ctx->pc = 0x270854u;
            goto label_270854;
        }
    }
    ctx->pc = 0x270848u;
label_270848:
    // 0x270848: 0xc09c0d4  jal         func_270350
    ctx->pc = 0x270848u;
    SET_GPR_U32(ctx, 31, 0x270850u);
    ctx->pc = 0x27084Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270848u;
            // 0x27084c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x270350u;
    if (runtime->hasFunction(0x270350u)) {
        auto targetFn = runtime->lookupFunction(0x270350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270850u; }
        if (ctx->pc != 0x270850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00270350_0x270350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270850u; }
        if (ctx->pc != 0x270850u) { return; }
    }
    ctx->pc = 0x270850u;
    // 0x270850: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x270850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_270854:
    // 0x270854: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x270854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x270858: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x270858u;
    {
        const bool branch_taken_0x270858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x27085Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270858u;
            // 0x27085c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270858) {
            ctx->pc = 0x270870u;
            goto label_270870;
        }
    }
    ctx->pc = 0x270860u;
    // 0x270860: 0x8e420128  lw          $v0, 0x128($s2)
    ctx->pc = 0x270860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 296)));
    // 0x270864: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x270864u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x270868: 0xae4200c0  sw          $v0, 0xC0($s2)
    ctx->pc = 0x270868u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 2));
    // 0x27086c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27086cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_270870:
    // 0x270870: 0xae420834  sw          $v0, 0x834($s2)
    ctx->pc = 0x270870u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 2100), GPR_U32(ctx, 2));
    // 0x270874: 0xdfbf0180  ld          $ra, 0x180($sp)
    ctx->pc = 0x270874u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 384)));
label_270878:
    // 0x270878: 0xdfb70170  ld          $s7, 0x170($sp)
    ctx->pc = 0x270878u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x27087c: 0xdfb60160  ld          $s6, 0x160($sp)
    ctx->pc = 0x27087cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x270880: 0xdfb50150  ld          $s5, 0x150($sp)
    ctx->pc = 0x270880u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x270884: 0xdfb40140  ld          $s4, 0x140($sp)
    ctx->pc = 0x270884u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x270888: 0xdfb30130  ld          $s3, 0x130($sp)
    ctx->pc = 0x270888u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x27088c: 0xdfb20120  ld          $s2, 0x120($sp)
    ctx->pc = 0x27088cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x270890: 0xdfb10110  ld          $s1, 0x110($sp)
    ctx->pc = 0x270890u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x270894: 0xdfb00100  ld          $s0, 0x100($sp)
    ctx->pc = 0x270894u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x270898: 0x3e00008  jr          $ra
    ctx->pc = 0x270898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27089Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270898u;
            // 0x27089c: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2706B0u: goto label_2706b0;
            case 0x2706B8u: goto label_2706b8;
            case 0x2706E8u: goto label_2706e8;
            case 0x2707CCu: goto label_2707cc;
            case 0x2707E4u: goto label_2707e4;
            case 0x270820u: goto label_270820;
            case 0x270848u: goto label_270848;
            case 0x270854u: goto label_270854;
            case 0x270870u: goto label_270870;
            case 0x270878u: goto label_270878;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2708A0u;
}
