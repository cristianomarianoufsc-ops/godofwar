#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001825E0
// Address: 0x1825e0 - 0x1827c0
void sub_001825E0_0x1825e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001825E0_0x1825e0");
#endif

    ctx->pc = 0x1825e0u;

    // 0x1825e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1825e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1825e4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1825e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1825e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1825e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1825ec: 0x2442ea98  addiu       $v0, $v0, -0x1568
    ctx->pc = 0x1825ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961816));
    // 0x1825f0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1825f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1825f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1825f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1825f8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1825f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1825fc: 0x26500012  addiu       $s0, $s2, 0x12
    ctx->pc = 0x1825fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 18));
    // 0x182600: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x182600u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x182604: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182608: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x182608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18260c: 0xae520000  sw          $s2, 0x0($s2)
    ctx->pc = 0x18260cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 18));
    // 0x182610: 0xae520004  sw          $s2, 0x4($s2)
    ctx->pc = 0x182610u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 18));
    // 0x182614: 0xae400034  sw          $zero, 0x34($s2)
    ctx->pc = 0x182614u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
    // 0x182618: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x182618u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x18261c: 0xa6400010  sh          $zero, 0x10($s2)
    ctx->pc = 0x18261cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 0));
    // 0x182620: 0xc0a2644  jal         func_289910
    ctx->pc = 0x182620u;
    SET_GPR_U32(ctx, 31, 0x182628u);
    ctx->pc = 0x182624u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182620u;
            // 0x182624: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182628u; }
        if (ctx->pc != 0x182628u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182628u; }
        if (ctx->pc != 0x182628u) { return; }
    }
    ctx->pc = 0x182628u;
    // 0x182628: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x182628u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x18262c: 0xc05f9de  jal         func_17E778
    ctx->pc = 0x18262Cu;
    SET_GPR_U32(ctx, 31, 0x182634u);
    ctx->pc = 0x182630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18262Cu;
            // 0x182630: 0x24842d48  addiu       $a0, $a0, 0x2D48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E778u;
    if (runtime->hasFunction(0x17E778u)) {
        auto targetFn = runtime->lookupFunction(0x17E778u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182634u; }
        if (ctx->pc != 0x182634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_17e778_0x17e7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182634u; }
        if (ctx->pc != 0x182634u) { return; }
    }
    ctx->pc = 0x182634u;
    // 0x182634: 0xc05fa5e  jal         func_17E978
    ctx->pc = 0x182634u;
    SET_GPR_U32(ctx, 31, 0x18263Cu);
    ctx->pc = 0x182638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182634u;
            // 0x182638: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E978u;
    if (runtime->hasFunction(0x17E978u)) {
        auto targetFn = runtime->lookupFunction(0x17E978u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18263Cu; }
        if (ctx->pc != 0x18263Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E978_0x17e978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18263Cu; }
        if (ctx->pc != 0x18263Cu) { return; }
    }
    ctx->pc = 0x18263Cu;
    // 0x18263c: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x18263Cu;
    SET_GPR_U32(ctx, 31, 0x182644u);
    ctx->pc = 0x182640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18263Cu;
            // 0x182640: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182644u; }
        if (ctx->pc != 0x182644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182644u; }
        if (ctx->pc != 0x182644u) { return; }
    }
    ctx->pc = 0x182644u;
    // 0x182644: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x182644u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182648: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x182648u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18264c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18264cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182650: 0xc060284  jal         func_180A10
    ctx->pc = 0x182650u;
    SET_GPR_U32(ctx, 31, 0x182658u);
    ctx->pc = 0x182654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182650u;
            // 0x182654: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180A10u;
    if (runtime->hasFunction(0x180A10u)) {
        auto targetFn = runtime->lookupFunction(0x180A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182658u; }
        if (ctx->pc != 0x182658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180A10_0x180a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182658u; }
        if (ctx->pc != 0x182658u) { return; }
    }
    ctx->pc = 0x182658u;
    // 0x182658: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x182658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x18265c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x18265cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x182660: 0x8c64c74c  lw          $a0, -0x38B4($v1)
    ctx->pc = 0x182660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294952780)));
    // 0x182664: 0x244203d0  addiu       $v0, $v0, 0x3D0
    ctx->pc = 0x182664u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 976));
    // 0x182668: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x182668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x18266c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x18266cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x182670: 0xa623001c  sh          $v1, 0x1C($s1)
    ctx->pc = 0x182670u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 28), (uint16_t)GPR_U32(ctx, 3));
    // 0x182674: 0xae200014  sw          $zero, 0x14($s1)
    ctx->pc = 0x182674u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    // 0x182678: 0xa6200020  sh          $zero, 0x20($s1)
    ctx->pc = 0x182678u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x18267c: 0xa6200022  sh          $zero, 0x22($s1)
    ctx->pc = 0x18267cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x182680: 0xae330004  sw          $s3, 0x4($s1)
    ctx->pc = 0x182680u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 19));
    // 0x182684: 0xa623001e  sh          $v1, 0x1E($s1)
    ctx->pc = 0x182684u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 30), (uint16_t)GPR_U32(ctx, 3));
    // 0x182688: 0xae200018  sw          $zero, 0x18($s1)
    ctx->pc = 0x182688u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
    // 0x18268c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18268Cu;
    {
        const bool branch_taken_0x18268c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x182690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18268Cu;
            // 0x182690: 0xae240010  sw          $a0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18268c) {
            ctx->pc = 0x18269Cu;
            goto label_18269c;
        }
    }
    ctx->pc = 0x182694u;
    // 0x182694: 0xc05fb38  jal         func_17ECE0
    ctx->pc = 0x182694u;
    SET_GPR_U32(ctx, 31, 0x18269Cu);
    ctx->pc = 0x182698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182694u;
            // 0x182698: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17ECE0u;
    if (runtime->hasFunction(0x17ECE0u)) {
        auto targetFn = runtime->lookupFunction(0x17ECE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18269Cu; }
        if (ctx->pc != 0x18269Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017ECE0_0x17ece0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18269Cu; }
        if (ctx->pc != 0x18269Cu) { return; }
    }
    ctx->pc = 0x18269Cu;
label_18269c:
    // 0x18269c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x18269cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1826a0: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x1826a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x1826a4: 0x2442eb60  addiu       $v0, $v0, -0x14A0
    ctx->pc = 0x1826a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962016));
    // 0x1826a8: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x1826a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x1826ac: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x1826acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
    // 0x1826b0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1826b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1826b4: 0xae200030  sw          $zero, 0x30($s1)
    ctx->pc = 0x1826b4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 0));
    // 0x1826b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1826b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1826bc: 0xae510038  sw          $s1, 0x38($s2)
    ctx->pc = 0x1826bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 17));
    // 0x1826c0: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x1826c0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x1826c4: 0xc05fd12  jal         func_17F448
    ctx->pc = 0x1826C4u;
    SET_GPR_U32(ctx, 31, 0x1826CCu);
    ctx->pc = 0x1826C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1826C4u;
            // 0x1826c8: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F448u;
    if (runtime->hasFunction(0x17F448u)) {
        auto targetFn = runtime->lookupFunction(0x17F448u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1826CCu; }
        if (ctx->pc != 0x1826CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017F448_0x17f448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1826CCu; }
        if (ctx->pc != 0x1826CCu) { return; }
    }
    ctx->pc = 0x1826CCu;
    // 0x1826cc: 0x8e02c708  lw          $v0, -0x38F8($s0)
    ctx->pc = 0x1826ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952712)));
    // 0x1826d0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1826D0u;
    {
        const bool branch_taken_0x1826d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1826d0) {
            ctx->pc = 0x1826E4u;
            goto label_1826e4;
        }
    }
    ctx->pc = 0x1826D8u;
    // 0x1826d8: 0xc05fa6e  jal         func_17E9B8
    ctx->pc = 0x1826D8u;
    SET_GPR_U32(ctx, 31, 0x1826E0u);
    ctx->pc = 0x1826DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1826D8u;
            // 0x1826dc: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E9B8u;
    if (runtime->hasFunction(0x17E9B8u)) {
        auto targetFn = runtime->lookupFunction(0x17E9B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1826E0u; }
        if (ctx->pc != 0x1826E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E9B8_0x17e9b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1826E0u; }
        if (ctx->pc != 0x1826E0u) { return; }
    }
    ctx->pc = 0x1826E0u;
    // 0x1826e0: 0xae02c708  sw          $v0, -0x38F8($s0)
    ctx->pc = 0x1826e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294952712), GPR_U32(ctx, 2));
label_1826e4:
    // 0x1826e4: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x1826E4u;
    SET_GPR_U32(ctx, 31, 0x1826ECu);
    ctx->pc = 0x1826E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1826E4u;
            // 0x1826e8: 0x8e04c708  lw          $a0, -0x38F8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294952712)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1826ECu; }
        if (ctx->pc != 0x1826ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1826ECu; }
        if (ctx->pc != 0x1826ECu) { return; }
    }
    ctx->pc = 0x1826ECu;
    // 0x1826ec: 0x26510010  addiu       $s1, $s2, 0x10
    ctx->pc = 0x1826ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1826f0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1826f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1826f4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1826f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1826f8: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1826f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1826fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1826fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182700: 0xc060284  jal         func_180A10
    ctx->pc = 0x182700u;
    SET_GPR_U32(ctx, 31, 0x182708u);
    ctx->pc = 0x182704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182700u;
            // 0x182704: 0x24a52d58  addiu       $a1, $a1, 0x2D58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180A10u;
    if (runtime->hasFunction(0x180A10u)) {
        auto targetFn = runtime->lookupFunction(0x180A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182708u; }
        if (ctx->pc != 0x182708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180A10_0x180a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182708u; }
        if (ctx->pc != 0x182708u) { return; }
    }
    ctx->pc = 0x182708u;
    // 0x182708: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x182708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x18270c: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x18270cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x182710: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x182710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x182714: 0x24630290  addiu       $v1, $v1, 0x290
    ctx->pc = 0x182714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 656));
    // 0x182718: 0xae110018  sw          $s1, 0x18($s0)
    ctx->pc = 0x182718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 17));
    // 0x18271c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18271cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182720: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x182720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x182724: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x182724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x182728: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x182728u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x18272c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18272cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182730: 0xc05fd12  jal         func_17F448
    ctx->pc = 0x182730u;
    SET_GPR_U32(ctx, 31, 0x182738u);
    ctx->pc = 0x182734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182730u;
            // 0x182734: 0xac520028  sw          $s2, 0x28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F448u;
    if (runtime->hasFunction(0x17F448u)) {
        auto targetFn = runtime->lookupFunction(0x17F448u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182738u; }
        if (ctx->pc != 0x182738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017F448_0x17f448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182738u; }
        if (ctx->pc != 0x182738u) { return; }
    }
    ctx->pc = 0x182738u;
    // 0x182738: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x182738u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x18273c: 0xc05fa66  jal         func_17E998
    ctx->pc = 0x18273Cu;
    SET_GPR_U32(ctx, 31, 0x182744u);
    ctx->pc = 0x182740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18273Cu;
            // 0x182740: 0xac50002c  sw          $s0, 0x2C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E998u;
    if (runtime->hasFunction(0x17E998u)) {
        auto targetFn = runtime->lookupFunction(0x17E998u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182744u; }
        if (ctx->pc != 0x182744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017E998_0x17e998(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182744u; }
        if (ctx->pc != 0x182744u) { return; }
    }
    ctx->pc = 0x182744u;
    // 0x182744: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x182744u;
    SET_GPR_U32(ctx, 31, 0x18274Cu);
    ctx->pc = 0x182748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182744u;
            // 0x182748: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18274Cu; }
        if (ctx->pc != 0x18274Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18274Cu; }
        if (ctx->pc != 0x18274Cu) { return; }
    }
    ctx->pc = 0x18274Cu;
    // 0x18274c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x18274cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182750: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x182750u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x182754: 0x3c110018  lui         $s1, 0x18
    ctx->pc = 0x182754u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)24 << 16));
    // 0x182758: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x182758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18275c: 0x26312830  addiu       $s1, $s1, 0x2830
    ctx->pc = 0x18275cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 10288));
    // 0x182760: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x182760u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x182764: 0xc060284  jal         func_180A10
    ctx->pc = 0x182764u;
    SET_GPR_U32(ctx, 31, 0x18276Cu);
    ctx->pc = 0x182768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182764u;
            // 0x182768: 0x24a52d68  addiu       $a1, $a1, 0x2D68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x180A10u;
    if (runtime->hasFunction(0x180A10u)) {
        auto targetFn = runtime->lookupFunction(0x180A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18276Cu; }
        if (ctx->pc != 0x18276Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00180A10_0x180a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18276Cu; }
        if (ctx->pc != 0x18276Cu) { return; }
    }
    ctx->pc = 0x18276Cu;
    // 0x18276c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x18276cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x182770: 0xae110010  sw          $s1, 0x10($s0)
    ctx->pc = 0x182770u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 17));
    // 0x182774: 0x24420430  addiu       $v0, $v0, 0x430
    ctx->pc = 0x182774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1072));
    // 0x182778: 0xae120014  sw          $s2, 0x14($s0)
    ctx->pc = 0x182778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 18));
    // 0x18277c: 0x8e440038  lw          $a0, 0x38($s2)
    ctx->pc = 0x18277cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x182780: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x182780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182784: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x182784u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x182788: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x182788u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x18278c: 0xc05fd12  jal         func_17F448
    ctx->pc = 0x18278Cu;
    SET_GPR_U32(ctx, 31, 0x182794u);
    ctx->pc = 0x182790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18278Cu;
            // 0x182790: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17F448u;
    if (runtime->hasFunction(0x17F448u)) {
        auto targetFn = runtime->lookupFunction(0x17F448u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182794u; }
        if (ctx->pc != 0x182794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017F448_0x17f448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182794u; }
        if (ctx->pc != 0x182794u) { return; }
    }
    ctx->pc = 0x182794u;
    // 0x182794: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x182794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x182798: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x182798u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18279c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x18279cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1827a0: 0xac700024  sw          $s0, 0x24($v1)
    ctx->pc = 0x1827a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 16));
    // 0x1827a4: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1827a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1827a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1827a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1827ac: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x1827acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1827b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1827b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1827b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1827B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1827B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1827B4u;
            // 0x1827b8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x18269Cu: goto label_18269c;
            case 0x1826E4u: goto label_1826e4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1827BCu;
    // 0x1827bc: 0x0  nop
    ctx->pc = 0x1827bcu;
    // NOP
}
