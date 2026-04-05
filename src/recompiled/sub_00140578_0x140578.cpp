#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00140578
// Address: 0x140578 - 0x140878
void sub_00140578_0x140578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00140578_0x140578");
#endif

    ctx->pc = 0x140578u;

    // 0x140578: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x140578u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x14057c: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x14057cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x140580: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x140580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x140584: 0x24c60660  addiu       $a2, $a2, 0x660
    ctx->pc = 0x140584u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1632));
    // 0x140588: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x140588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14058c: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x14058cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x140590: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x140590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140594: 0xc04fed2  jal         func_13FB48
    ctx->pc = 0x140594u;
    SET_GPR_U32(ctx, 31, 0x14059Cu);
    ctx->pc = 0x140598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140594u;
            // 0x140598: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FB48u;
    if (runtime->hasFunction(0x13FB48u)) {
        auto targetFn = runtime->lookupFunction(0x13FB48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14059Cu; }
        if (ctx->pc != 0x14059Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013FB48_0x13fb48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14059Cu; }
        if (ctx->pc != 0x14059Cu) { return; }
    }
    ctx->pc = 0x14059Cu;
    // 0x14059c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x14059cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1405a0: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x1405a0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x1405a4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1405a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1405a8: 0xac62103c  sw          $v0, 0x103C($v1)
    ctx->pc = 0x1405a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4156), GPR_U32(ctx, 2));
    // 0x1405ac: 0x24c60918  addiu       $a2, $a2, 0x918
    ctx->pc = 0x1405acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2328));
    // 0x1405b0: 0x24040200  addiu       $a0, $zero, 0x200
    ctx->pc = 0x1405b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1405b4: 0xc04fed2  jal         func_13FB48
    ctx->pc = 0x1405B4u;
    SET_GPR_U32(ctx, 31, 0x1405BCu);
    ctx->pc = 0x1405B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1405B4u;
            // 0x1405b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FB48u;
    if (runtime->hasFunction(0x13FB48u)) {
        auto targetFn = runtime->lookupFunction(0x13FB48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1405BCu; }
        if (ctx->pc != 0x1405BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013FB48_0x13fb48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1405BCu; }
        if (ctx->pc != 0x1405BCu) { return; }
    }
    ctx->pc = 0x1405BCu;
    // 0x1405bc: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1405bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1405c0: 0x24040660  addiu       $a0, $zero, 0x660
    ctx->pc = 0x1405c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1632));
    // 0x1405c4: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x1405C4u;
    SET_GPR_U32(ctx, 31, 0x1405CCu);
    ctx->pc = 0x1405C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1405C4u;
            // 0x1405c8: 0xac621040  sw          $v0, 0x1040($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1405CCu; }
        if (ctx->pc != 0x1405CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1405CCu; }
        if (ctx->pc != 0x1405CCu) { return; }
    }
    ctx->pc = 0x1405CCu;
    // 0x1405cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1405ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1405d0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1405d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1405d4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1405d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1405d8: 0x26040018  addiu       $a0, $s0, 0x18
    ctx->pc = 0x1405d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x1405dc: 0x2442fd30  addiu       $v0, $v0, -0x2D0
    ctx->pc = 0x1405dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966576));
    // 0x1405e0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1405e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1405e4: 0xae020658  sw          $v0, 0x658($s0)
    ctx->pc = 0x1405e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1624), GPR_U32(ctx, 2));
    // 0x1405e8: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1405e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1405ec: 0x0  nop
    ctx->pc = 0x1405ecu;
    // NOP
label_1405f0:
    // 0x1405f0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1405f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1405f4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1405f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1405f8: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1405f8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1405fc: 0x2ca20063  sltiu       $v0, $a1, 0x63
    ctx->pc = 0x1405fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)99) ? 1 : 0);
    // 0x140600: 0x0  nop
    ctx->pc = 0x140600u;
    // NOP
    // 0x140604: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x140604u;
    {
        const bool branch_taken_0x140604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x140608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140604u;
            // 0x140608: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140604) {
            ctx->pc = 0x1405F0u;
            runtime->cooperativeGuestYield();
            goto label_1405f0;
        }
    }
    ctx->pc = 0x14060Cu;
    // 0x14060c: 0xfc800630  sd          $zero, 0x630($a0)
    ctx->pc = 0x14060cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 1584), GPR_U64(ctx, 0));
    // 0x140610: 0xc04f824  jal         func_13E090
    ctx->pc = 0x140610u;
    SET_GPR_U32(ctx, 31, 0x140618u);
    ctx->pc = 0x140614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140610u;
            // 0x140614: 0xfc800638  sd          $zero, 0x638($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 1592), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140618u; }
        if (ctx->pc != 0x140618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140618u; }
        if (ctx->pc != 0x140618u) { return; }
    }
    ctx->pc = 0x140618u;
    // 0x140618: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x140618u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x14061c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x14061cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140620: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x140620u;
    SET_GPR_U32(ctx, 31, 0x140628u);
    ctx->pc = 0x140624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140620u;
            // 0x140624: 0x24051400  addiu       $a1, $zero, 0x1400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140628u; }
        if (ctx->pc != 0x140628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140628u; }
        if (ctx->pc != 0x140628u) { return; }
    }
    ctx->pc = 0x140628u;
    // 0x140628: 0x24431400  addiu       $v1, $v0, 0x1400
    ctx->pc = 0x140628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 5120));
    // 0x14062c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14062cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140630: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x140630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x140634: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x140634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x140638: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x140638u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x14063c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x14063cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x140640: 0xc08eaac  jal         func_23AAB0
    ctx->pc = 0x140640u;
    SET_GPR_U32(ctx, 31, 0x140648u);
    ctx->pc = 0x140644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140640u;
            // 0x140644: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23AAB0u;
    if (runtime->hasFunction(0x23AAB0u)) {
        auto targetFn = runtime->lookupFunction(0x23AAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140648u; }
        if (ctx->pc != 0x140648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23aab0_0x23aac8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140648u; }
        if (ctx->pc != 0x140648u) { return; }
    }
    ctx->pc = 0x140648u;
    // 0x140648: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x140648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x14064c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14064cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140650: 0xac501044  sw          $s0, 0x1044($v0)
    ctx->pc = 0x140650u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4164), GPR_U32(ctx, 16));
    // 0x140654: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x140654u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140658: 0x3e00008  jr          $ra
    ctx->pc = 0x140658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14065Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140658u;
            // 0x14065c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1405F0u: goto label_1405f0;
            case 0x140760u: goto label_140760;
            default: break;
        }
        return;
    }
    ctx->pc = 0x140660u;
    // 0x140660: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x140660u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x140664: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x140664u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x140668: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x140668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x14066c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14066cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x140670: 0xc04fd50  jal         func_13F540
    ctx->pc = 0x140670u;
    SET_GPR_U32(ctx, 31, 0x140678u);
    ctx->pc = 0x140674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140670u;
            // 0x140674: 0x3c100033  lui         $s0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F540u;
    if (runtime->hasFunction(0x13F540u)) {
        auto targetFn = runtime->lookupFunction(0x13F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140678u; }
        if (ctx->pc != 0x140678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0013f540_0x13f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140678u; }
        if (ctx->pc != 0x140678u) { return; }
    }
    ctx->pc = 0x140678u;
    // 0x140678: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x140678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x14067c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x14067cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x140680: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x140680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x140684: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x140684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x140688: 0xc04fe88  jal         func_13FA20
    ctx->pc = 0x140688u;
    SET_GPR_U32(ctx, 31, 0x140690u);
    ctx->pc = 0x14068Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140688u;
            // 0x14068c: 0xae02f168  sw          $v0, -0xE98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA20u;
    if (runtime->hasFunction(0x13FA20u)) {
        auto targetFn = runtime->lookupFunction(0x13FA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140690u; }
        if (ctx->pc != 0x140690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa20_0x13fa48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140690u; }
        if (ctx->pc != 0x140690u) { return; }
    }
    ctx->pc = 0x140690u;
    // 0x140690: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x140690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x140694: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x140694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x140698: 0x3403800e  ori         $v1, $zero, 0x800E
    ctx->pc = 0x140698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32782);
    // 0x14069c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x14069cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1406a0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1406a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1406a4: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x1406a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x1406a8: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x1406a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x1406ac: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1406acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1406b0: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x1406b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x1406b4: 0x2466dd58  addiu       $a2, $v1, -0x22A8
    ctx->pc = 0x1406b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958424));
    // 0x1406b8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1406b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1406bc: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x1406bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1406c0: 0x3c080033  lui         $t0, 0x33
    ctx->pc = 0x1406c0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)51 << 16));
    // 0x1406c4: 0x3c0b0033  lui         $t3, 0x33
    ctx->pc = 0x1406c4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)51 << 16));
    // 0x1406c8: 0x8c64dd58  lw          $a0, -0x22A8($v1)
    ctx->pc = 0x1406c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294958424)));
    // 0x1406cc: 0x3c0c0033  lui         $t4, 0x33
    ctx->pc = 0x1406ccu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)51 << 16));
    // 0x1406d0: 0x8cca0004  lw          $t2, 0x4($a2)
    ctx->pc = 0x1406d0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1406d4: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x1406d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x1406d8: 0x9ce9f1ac  lwu         $t1, -0xE54($a3)
    ctx->pc = 0x1406d8u;
    SET_GPR_U32(ctx, 9, READ32(ADD32(GPR_U32(ctx, 7), 4294963628)));
    // 0x1406dc: 0xa1042  srl         $v0, $t2, 1
    ctx->pc = 0x1406dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x1406e0: 0xa31823  subu        $v1, $a1, $v1
    ctx->pc = 0x1406e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1406e4: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x1406e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x1406e8: 0x43182  srl         $a2, $a0, 6
    ctx->pc = 0x1406e8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
    // 0x1406ec: 0x9d02f1a8  lwu         $v0, -0xE58($t0)
    ctx->pc = 0x1406ecu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 8), 4294963624)));
    // 0x1406f0: 0x30c6003f  andi        $a2, $a2, 0x3F
    ctx->pc = 0x1406f0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63);
    // 0x1406f4: 0x9d67f19c  lwu         $a3, -0xE64($t3)
    ctx->pc = 0x1406f4u;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 11), 4294963612)));
    // 0x1406f8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1406f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1406fc: 0x8e08f168  lw          $t0, -0xE98($s0)
    ctx->pc = 0x1406fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x140700: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x140700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x140704: 0x9d8bf1a0  lwu         $t3, -0xE60($t4)
    ctx->pc = 0x140704u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 12), 4294963616)));
    // 0x140708: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x140708u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x14070c: 0x73e38  dsll        $a3, $a3, 24
    ctx->pc = 0x14070cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 24);
    // 0x140710: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x140710u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x140714: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x140714u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x140718: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x140718u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x14071c: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x14071cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x140720: 0x1264825  or          $t1, $t1, $a2
    ctx->pc = 0x140720u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
    // 0x140724: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x140724u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x140728: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x140728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x14072c: 0x1675825  or          $t3, $t3, $a3
    ctx->pc = 0x14072cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 7));
    // 0x140730: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x140730u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x140734: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x140734u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x140738: 0x4243a  dsrl        $a0, $a0, 16
    ctx->pc = 0x140738u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 16);
    // 0x14073c: 0xa543c  dsll32      $t2, $t2, 16
    ctx->pc = 0x14073cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << (32 + 16));
    // 0x140740: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x140740u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
    // 0x140744: 0x653825  or          $a3, $v1, $a1
    ctx->pc = 0x140744u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x140748: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x140748u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14074c: 0x8a2025  or          $a0, $a0, $t2
    ctx->pc = 0x14074cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 10));
    // 0x140750: 0xae08f168  sw          $t0, -0xE98($s0)
    ctx->pc = 0x140750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 8));
    // 0x140754: 0x3c080005  lui         $t0, 0x5
    ctx->pc = 0x140754u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)5 << 16));
    // 0x140758: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x140758u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14075c: 0x0  nop
    ctx->pc = 0x14075cu;
    // NOP
label_140760:
    // 0x140760: 0x24a2004c  addiu       $v0, $a1, 0x4C
    ctx->pc = 0x140760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 76));
    // 0x140764: 0xfcc90000  sd          $t1, 0x0($a2)
    ctx->pc = 0x140764u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 9));
    // 0x140768: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x140768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x14076c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x14076cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x140770: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x140770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x140774: 0x24a3004e  addiu       $v1, $a1, 0x4E
    ctx->pc = 0x140774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 78));
    // 0x140778: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x140778u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x14077c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x14077cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x140780: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x140780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x140784: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x140784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x140788: 0xfccb0000  sd          $t3, 0x0($a2)
    ctx->pc = 0x140788u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 11));
    // 0x14078c: 0x24a20018  addiu       $v0, $a1, 0x18
    ctx->pc = 0x14078cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x140790: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x140790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x140794: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x140794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x140798: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x140798u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    // 0x14079c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x14079cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1407a0: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1407a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1407a4: 0x24a30040  addiu       $v1, $a1, 0x40
    ctx->pc = 0x1407a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x1407a8: 0xfcc70000  sd          $a3, 0x0($a2)
    ctx->pc = 0x1407a8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 7));
    // 0x1407ac: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1407acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1407b0: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1407b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1407b4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x1407b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x1407b8: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x1407b8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x1407bc: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1407bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1407c0: 0x24a20047  addiu       $v0, $a1, 0x47
    ctx->pc = 0x1407c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 71));
    // 0x1407c4: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x1407c4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x1407c8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1407c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1407cc: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1407ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1407d0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1407d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1407d4: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x1407d4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    // 0x1407d8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1407d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1407dc: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1407dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1407e0: 0x2ca30002  sltiu       $v1, $a1, 0x2
    ctx->pc = 0x1407e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1407e4: 0xfcc80000  sd          $t0, 0x0($a2)
    ctx->pc = 0x1407e4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 8));
    // 0x1407e8: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1407e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x1407ec: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x1407ecu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x1407f0: 0x1460ffdb  bnez        $v1, . + 4 + (-0x25 << 2)
    ctx->pc = 0x1407F0u;
    {
        const bool branch_taken_0x1407f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1407F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1407F0u;
            // 0x1407f4: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1407f0) {
            ctx->pc = 0x140760u;
            runtime->cooperativeGuestYield();
            goto label_140760;
        }
    }
    ctx->pc = 0x1407F8u;
    // 0x1407f8: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1407f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1407fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1407fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x140800: 0x34428080  ori         $v0, $v0, 0x8080
    ctx->pc = 0x140800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32896);
    // 0x140804: 0x2403003b  addiu       $v1, $zero, 0x3B
    ctx->pc = 0x140804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x140808: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x140808u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x14080c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x14080cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x140810: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x140810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x140814: 0x2402001a  addiu       $v0, $zero, 0x1A
    ctx->pc = 0x140814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x140818: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x140818u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    // 0x14081c: 0x24050045  addiu       $a1, $zero, 0x45
    ctx->pc = 0x14081cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x140820: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x140820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x140824: 0x24030046  addiu       $v1, $zero, 0x46
    ctx->pc = 0x140824u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x140828: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x140828u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x14082c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x14082cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x140830: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x140830u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x140834: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x140834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x140838: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x140838u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x14083c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x14083cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x140840: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x140840u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    // 0x140844: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x140844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x140848: 0xfcc00000  sd          $zero, 0x0($a2)
    ctx->pc = 0x140848u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 0));
    // 0x14084c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x14084cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x140850: 0xfcc50000  sd          $a1, 0x0($a2)
    ctx->pc = 0x140850u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 5));
    // 0x140854: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x140854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x140858: 0xc04fe92  jal         func_13FA48
    ctx->pc = 0x140858u;
    SET_GPR_U32(ctx, 31, 0x140860u);
    ctx->pc = 0x14085Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140858u;
            // 0x14085c: 0xae06f168  sw          $a2, -0xE98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA48u;
    if (runtime->hasFunction(0x13FA48u)) {
        auto targetFn = runtime->lookupFunction(0x13FA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140860u; }
        if (ctx->pc != 0x140860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa48_0x13fa78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140860u; }
        if (ctx->pc != 0x140860u) { return; }
    }
    ctx->pc = 0x140860u;
    // 0x140860: 0xc04fd78  jal         func_13F5E0
    ctx->pc = 0x140860u;
    SET_GPR_U32(ctx, 31, 0x140868u);
    ctx->pc = 0x13F5E0u;
    if (runtime->hasFunction(0x13F5E0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140868u; }
        if (ctx->pc != 0x140868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f5e0_0x13f648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140868u; }
        if (ctx->pc != 0x140868u) { return; }
    }
    ctx->pc = 0x140868u;
    // 0x140868: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x140868u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14086c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14086cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140870: 0x3e00008  jr          $ra
    ctx->pc = 0x140870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x140874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140870u;
            // 0x140874: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1405F0u: goto label_1405f0;
            case 0x140760u: goto label_140760;
            default: break;
        }
        return;
    }
    ctx->pc = 0x140878u;
}
