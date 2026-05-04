#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027C100
// Address: 0x27c100 - 0x27c2a0
void sub_0027C100_0x27c100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027C100_0x27c100");
#endif

    ctx->pc = 0x27c100u;
    std::cerr << "[sub_0027C100] START\n";

    // 0x27c100: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x27c100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x27c104: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x27c104u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x27c108: 0xffb300b0  sd          $s3, 0xB0($sp)
    ctx->pc = 0x27c108u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 19));
    // 0x27c10c: 0x8ca23310  lw          $v0, 0x3310($a1)
    ctx->pc = 0x27c10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 13072)));
    // 0x27c110: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x27c110u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27c114: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x27c114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x27c118: 0xffb400c0  sd          $s4, 0xC0($sp)
    ctx->pc = 0x27c118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 20));
    // 0x27c11c: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x27c11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x27c120: 0xffb10090  sd          $s1, 0x90($sp)
    ctx->pc = 0x27c120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 17));
    // 0x27c124: 0x10530054  beq         $v0, $s3, . + 4 + (0x54 << 2)
    ctx->pc = 0x27C124u;
    {
        const bool branch_taken_0x27c124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x27C128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C124u;
            // 0x27c128: 0xffb00080  sd          $s0, 0x80($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c124) {
            ctx->pc = 0x27C278u;
            goto label_27c278;
        }
    }
    ctx->pc = 0x27C12Cu;
    // 0x27c12c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x27C12Cu;
    {
        const bool branch_taken_0x27c12c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C12Cu;
            // 0x27c130: 0x3c140031  lui         $s4, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)49 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c12c) {
            ctx->pc = 0x27C140u;
            goto label_27c140;
        }
    }
    ctx->pc = 0x27C134u;
    // 0x27c134: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27c134u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27c138: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x27C138u;
    {
        const bool branch_taken_0x27c138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C13Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C138u;
            // 0x27c13c: 0x34420016  ori         $v0, $v0, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c138) {
            ctx->pc = 0x27C27Cu;
            goto label_27c27c;
        }
    }
    ctx->pc = 0x27C140u;
label_27c140:
    // 0x27c140: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x27c140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27c144: 0xacb33310  sw          $s3, 0x3310($a1)
    ctx->pc = 0x27c144u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 13072), GPR_U32(ctx, 19));
    // 0x27c148: 0x269208a0  addiu       $s2, $s4, 0x8A0
    ctx->pc = 0x27c148u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 2208));
    // 0x27c14c: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x27c14cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x27c150: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x27c150u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x27c154: 0x24635010  addiu       $v1, $v1, 0x5010
    ctx->pc = 0x27c154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20496));
    // 0x27c158: 0xae8208a0  sw          $v0, 0x8A0($s4)
    ctx->pc = 0x27c158u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 2208), GPR_U32(ctx, 2));
    // 0x27c15c: 0xafa30074  sw          $v1, 0x74($sp)
    ctx->pc = 0x27c15cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 3));
    // 0x27c160: 0x27b00060  addiu       $s0, $sp, 0x60
    ctx->pc = 0x27c160u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x27c164: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x27c164u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x27c168: 0x2411007f  addiu       $s1, $zero, 0x7F
    ctx->pc = 0x27c168u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x27c16c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27c16cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c170: 0xafb30068  sw          $s3, 0x68($sp)
    ctx->pc = 0x27c170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 19));
    // 0x27c174: 0xc0a4f08  jal         func_293C20
    ctx->pc = 0x27C174u;
    SET_GPR_U32(ctx, 31, 0x27C17Cu);
    ctx->pc = 0x27C178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C174u;
            // 0x27c178: 0xafb10064  sw          $s1, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C20u;
    if (runtime->hasFunction(0x293C20u)) {
        auto targetFn = runtime->lookupFunction(0x293C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C17Cu; }
        if (ctx->pc != 0x27C17Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293c20_0x293c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C17Cu; }
        if (ctx->pc != 0x27C17Cu) { return; }
    }
    ctx->pc = 0x27C17Cu;
    // 0x27c17c: 0x3c030031  lui         $v1, 0x31
    ctx->pc = 0x27c17cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49 << 16));
    // 0x27c180: 0x4400033  bltz        $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x27C180u;
    {
        const bool branch_taken_0x27c180 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x27C184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C180u;
            // 0x27c184: 0xac6208ac  sw          $v0, 0x8AC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 2220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c180) {
            ctx->pc = 0x27C250u;
            goto label_27c250;
        }
    }
    ctx->pc = 0x27C188u;
    // 0x27c188: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x27c188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x27c18c: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x27c18cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x27c190: 0x24425028  addiu       $v0, $v0, 0x5028
    ctx->pc = 0x27c190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20520));
    // 0x27c194: 0xafb10064  sw          $s1, 0x64($sp)
    ctx->pc = 0x27c194u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 17));
    // 0x27c198: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x27c198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x27c19c: 0xc0a4f08  jal         func_293C20
    ctx->pc = 0x27C19Cu;
    SET_GPR_U32(ctx, 31, 0x27C1A4u);
    ctx->pc = 0x27C1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C19Cu;
            // 0x27c1a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C20u;
    if (runtime->hasFunction(0x293C20u)) {
        auto targetFn = runtime->lookupFunction(0x293C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C1A4u; }
        if (ctx->pc != 0x27C1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293c20_0x293c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C1A4u; }
        if (ctx->pc != 0x27C1A4u) { return; }
    }
    ctx->pc = 0x27C1A4u;
    // 0x27c1a4: 0x440002a  bltz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x27C1A4u;
    {
        const bool branch_taken_0x27c1a4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x27C1A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C1A4u;
            // 0x27c1a8: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c1a4) {
            ctx->pc = 0x27C250u;
            goto label_27c250;
        }
    }
    ctx->pc = 0x27C1ACu;
    // 0x27c1ac: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x27c1acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x27c1b0: 0xafb10064  sw          $s1, 0x64($sp)
    ctx->pc = 0x27c1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 17));
    // 0x27c1b4: 0x24425040  addiu       $v0, $v0, 0x5040
    ctx->pc = 0x27c1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20544));
    // 0x27c1b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27c1b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c1bc: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x27c1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x27c1c0: 0xc0a4f08  jal         func_293C20
    ctx->pc = 0x27C1C0u;
    SET_GPR_U32(ctx, 31, 0x27C1C8u);
    ctx->pc = 0x27C1C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C1C0u;
            // 0x27c1c4: 0xafa00068  sw          $zero, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C20u;
    if (runtime->hasFunction(0x293C20u)) {
        auto targetFn = runtime->lookupFunction(0x293C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C1C8u; }
        if (ctx->pc != 0x27C1C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293c20_0x293c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C1C8u; }
        if (ctx->pc != 0x27C1C8u) { return; }
    }
    ctx->pc = 0x27C1C8u;
    // 0x27c1c8: 0x440001f  bltz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x27C1C8u;
    {
        const bool branch_taken_0x27c1c8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x27C1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C1C8u;
            // 0x27c1cc: 0xae420008  sw          $v0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c1c8) {
            ctx->pc = 0x27C248u;
            goto label_27c248;
        }
    }
    ctx->pc = 0x27C1D0u;
    // 0x27c1d0: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x27c1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x27c1d4: 0x3c050031  lui         $a1, 0x31
    ctx->pc = 0x27c1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49 << 16));
    // 0x27c1d8: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x27c1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
    // 0x27c1dc: 0x3c07002c  lui         $a3, 0x2C
    ctx->pc = 0x27c1dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)44 << 16));
    // 0x27c1e0: 0x2463cbd0  addiu       $v1, $v1, -0x3430
    ctx->pc = 0x27c1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953936));
    // 0x27c1e4: 0x24a508c0  addiu       $a1, $a1, 0x8C0
    ctx->pc = 0x27c1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2240));
    // 0x27c1e8: 0x24c6f070  addiu       $a2, $a2, -0xF90
    ctx->pc = 0x27c1e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963312));
    // 0x27c1ec: 0x24e75050  addiu       $a3, $a3, 0x5050
    ctx->pc = 0x27c1ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 20560));
    // 0x27c1f0: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x27c1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x27c1f4: 0x3408c000  ori         $t0, $zero, 0xC000
    ctx->pc = 0x27c1f4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49152);
    // 0x27c1f8: 0xac400384  sw          $zero, 0x384($v0)
    ctx->pc = 0x27c1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 900), GPR_U32(ctx, 0));
    // 0x27c1fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x27c1fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c200: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x27c200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x27c204: 0xafa50008  sw          $a1, 0x8($sp)
    ctx->pc = 0x27c204u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 5));
    // 0x27c208: 0xafa8000c  sw          $t0, 0xC($sp)
    ctx->pc = 0x27c208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 8));
    // 0x27c20c: 0xafa60010  sw          $a2, 0x10($sp)
    ctx->pc = 0x27c20cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
    // 0x27c210: 0xafa70020  sw          $a3, 0x20($sp)
    ctx->pc = 0x27c210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
    // 0x27c214: 0xc0a4e88  jal         func_293A20
    ctx->pc = 0x27C214u;
    SET_GPR_U32(ctx, 31, 0x27C21Cu);
    ctx->pc = 0x27C218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C214u;
            // 0x27c218: 0xafb30014  sw          $s3, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293A20u;
    if (runtime->hasFunction(0x293A20u)) {
        auto targetFn = runtime->lookupFunction(0x293A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C21Cu; }
        if (ctx->pc != 0x27C21Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293a20_0x293a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C21Cu; }
        if (ctx->pc != 0x27C21Cu) { return; }
    }
    ctx->pc = 0x27C21Cu;
    // 0x27c21c: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27C21Cu;
    {
        const bool branch_taken_0x27c21c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x27C220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C21Cu;
            // 0x27c220: 0xae8208a0  sw          $v0, 0x8A0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 2208), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c21c) {
            ctx->pc = 0x27C238u;
            goto label_27c238;
        }
    }
    ctx->pc = 0x27C224u;
    // 0x27c224: 0xc09f0a8  jal         func_27C2A0
    ctx->pc = 0x27C224u;
    SET_GPR_U32(ctx, 31, 0x27C22Cu);
    ctx->pc = 0x27C2A0u;
    if (runtime->hasFunction(0x27C2A0u)) {
        auto targetFn = runtime->lookupFunction(0x27C2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C22Cu; }
        if (ctx->pc != 0x27C22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027C2A0_0x27c2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C22Cu; }
        if (ctx->pc != 0x27C22Cu) { return; }
    }
    ctx->pc = 0x27C22Cu;
    // 0x27c22c: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27c22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27c230: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x27C230u;
    {
        const bool branch_taken_0x27c230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C230u;
            // 0x27c234: 0x34428004  ori         $v0, $v0, 0x8004 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32772);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c230) {
            ctx->pc = 0x27C27Cu;
            goto label_27c27c;
        }
    }
    ctx->pc = 0x27C238u;
label_27c238:
    // 0x27c238: 0xc0a0852  jal         func_282148
    ctx->pc = 0x27C238u;
    SET_GPR_U32(ctx, 31, 0x27C240u);
    ctx->pc = 0x282148u;
    if (runtime->hasFunction(0x282148u)) {
        auto targetFn = runtime->lookupFunction(0x282148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C240u; }
        if (ctx->pc != 0x27C240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00282148_0x282148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C240u; }
        if (ctx->pc != 0x27C240u) { return; }
    }
    ctx->pc = 0x27C240u;
    std::cerr << "[sub_0027C100] 282148_ret=" << std::dec << (int32_t)GPR_U32(ctx, 2) << "\n";
    // 0x27c240: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x27C240u;
    {
        const bool branch_taken_0x27c240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27c240) {
            ctx->pc = 0x27C25Cu;
            goto label_27c25c;
        }
    }
    ctx->pc = 0x27C248u;
label_27c248:
    std::cerr << "[sub_0027C100] PATH=cleanup\n";
    // 0x27c248: 0xc09f0a8  jal         func_27C2A0
    ctx->pc = 0x27C248u;
    SET_GPR_U32(ctx, 31, 0x27C250u);
    ctx->pc = 0x27C2A0u;
    if (runtime->hasFunction(0x27C2A0u)) {
        auto targetFn = runtime->lookupFunction(0x27C2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C250u; }
        if (ctx->pc != 0x27C250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027C2A0_0x27c2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C250u; }
        if (ctx->pc != 0x27C250u) { return; }
    }
    ctx->pc = 0x27C250u;
label_27c250:
    // 0x27c250: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x27c250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x27c254: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x27C254u;
    {
        const bool branch_taken_0x27c254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C254u;
            // 0x27c258: 0x34428003  ori         $v0, $v0, 0x8003 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32771);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c254) {
            ctx->pc = 0x27C27Cu;
            goto label_27c27c;
        }
    }
    ctx->pc = 0x27C25Cu;
label_27c25c:
    std::cerr << "[sub_0027C100] PATH=full\n";
    // 0x27c25c: 0xc0a0544  jal         func_281510
    ctx->pc = 0x27C25Cu;
    SET_GPR_U32(ctx, 31, 0x27C264u);
    ctx->pc = 0x281510u;
    if (runtime->hasFunction(0x281510u)) {
        auto targetFn = runtime->lookupFunction(0x281510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C264u; }
        if (ctx->pc != 0x27C264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_281510_0x281548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C264u; }
        if (ctx->pc != 0x27C264u) { return; }
    }
    ctx->pc = 0x27C264u;
    // 0x27c264: 0xc09f56e  jal         func_27D5B8
    ctx->pc = 0x27C264u;
    SET_GPR_U32(ctx, 31, 0x27C26Cu);
    ctx->pc = 0x27D5B8u;
    if (runtime->hasFunction(0x27D5B8u)) {
        auto targetFn = runtime->lookupFunction(0x27D5B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C26Cu; }
        if (ctx->pc != 0x27C26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_27d5b8_0x27d618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C26Cu; }
        if (ctx->pc != 0x27C26Cu) { return; }
    }
    ctx->pc = 0x27C26Cu;
    // 0x27c26c: 0x8e8408a0  lw          $a0, 0x8A0($s4)
    ctx->pc = 0x27c26cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 2208)));
    // 0x27c270: 0xc0a52be  jal         func_294AF8
    ctx->pc = 0x27C270u;
    SET_GPR_U32(ctx, 31, 0x27C278u);
    ctx->pc = 0x27C274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C270u;
            // 0x27c274: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294AF8u;
    if (runtime->hasFunction(0x294AF8u)) {
        auto targetFn = runtime->lookupFunction(0x294AF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C278u; }
        if (ctx->pc != 0x27C278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00294AF8_0x294af8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C278u; }
        if (ctx->pc != 0x27C278u) { return; }
    }
    ctx->pc = 0x27C278u;
label_27c278:
    std::cerr << "[sub_0027C100] DONE\n";
    // 0x27c278: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27c278u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27c27c:
    // 0x27c27c: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x27c27cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x27c280: 0xdfb400c0  ld          $s4, 0xC0($sp)
    ctx->pc = 0x27c280u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x27c284: 0xdfb300b0  ld          $s3, 0xB0($sp)
    ctx->pc = 0x27c284u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x27c288: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x27c288u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x27c28c: 0xdfb10090  ld          $s1, 0x90($sp)
    ctx->pc = 0x27c28cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x27c290: 0xdfb00080  ld          $s0, 0x80($sp)
    ctx->pc = 0x27c290u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27c294: 0x3e00008  jr          $ra
    ctx->pc = 0x27C294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27C298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C294u;
            // 0x27c298: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27C140u: goto label_27c140;
            case 0x27C238u: goto label_27c238;
            case 0x27C248u: goto label_27c248;
            case 0x27C250u: goto label_27c250;
            case 0x27C25Cu: goto label_27c25c;
            case 0x27C278u: goto label_27c278;
            case 0x27C27Cu: goto label_27c27c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27C29Cu;
    // 0x27c29c: 0x0  nop
    ctx->pc = 0x27c29cu;
    // NOP
}
