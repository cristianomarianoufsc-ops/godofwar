#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001493E8
// Address: 0x1493e8 - 0x149958
void sub_001493E8_0x1493e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001493E8_0x1493e8");
#endif

    ctx->pc = 0x1493e8u;

    // 0x1493e8: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x1493e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
    // 0x1493ec: 0x7fb40170  sq          $s4, 0x170($sp)
    ctx->pc = 0x1493ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 20));
    // 0x1493f0: 0xafa70108  sw          $a3, 0x108($sp)
    ctx->pc = 0x1493f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 7));
    // 0x1493f4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1493f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1493f8: 0x7fb001b0  sq          $s0, 0x1B0($sp)
    ctx->pc = 0x1493f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 16));
    // 0x1493fc: 0x7fb101a0  sq          $s1, 0x1A0($sp)
    ctx->pc = 0x1493fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 17));
    // 0x149400: 0x7fb20190  sq          $s2, 0x190($sp)
    ctx->pc = 0x149400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 18));
    // 0x149404: 0x7fb30180  sq          $s3, 0x180($sp)
    ctx->pc = 0x149404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 19));
    // 0x149408: 0x7fb50160  sq          $s5, 0x160($sp)
    ctx->pc = 0x149408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 21));
    // 0x14940c: 0x7fb60150  sq          $s6, 0x150($sp)
    ctx->pc = 0x14940cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 22));
    // 0x149410: 0x7fb70140  sq          $s7, 0x140($sp)
    ctx->pc = 0x149410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 23));
    // 0x149414: 0x7fbe0130  sq          $fp, 0x130($sp)
    ctx->pc = 0x149414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 30));
    // 0x149418: 0xffbf0120  sd          $ra, 0x120($sp)
    ctx->pc = 0x149418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 31));
    // 0x14941c: 0xe7b401c0  swc1        $f20, 0x1C0($sp)
    ctx->pc = 0x14941cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 448), bits); }
    // 0x149420: 0xafa50100  sw          $a1, 0x100($sp)
    ctx->pc = 0x149420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 5));
    // 0x149424: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x149424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x149428: 0xafa60104  sw          $a2, 0x104($sp)
    ctx->pc = 0x149428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 6));
    // 0x14942c: 0xafa2010c  sw          $v0, 0x10C($sp)
    ctx->pc = 0x14942cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 2));
    // 0x149430: 0x8c440cd0  lw          $a0, 0xCD0($v0)
    ctx->pc = 0x149430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3280)));
    // 0x149434: 0x96820004  lhu         $v0, 0x4($s4)
    ctx->pc = 0x149434u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x149438: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x149438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x14943c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14943cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x149440: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x149440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x149444: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x149444u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x149448: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x149448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x14944c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x14944cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x149450: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x149450u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x149454: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x149454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149458: 0x439821  addu        $s3, $v0, $v1
    ctx->pc = 0x149458u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14945c: 0x9662000c  lhu         $v0, 0xC($s3)
    ctx->pc = 0x14945cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x149460: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x149460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x149464: 0xc0524d0  jal         func_149340
    ctx->pc = 0x149464u;
    SET_GPR_U32(ctx, 31, 0x14946Cu);
    ctx->pc = 0x149468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149464u;
            // 0x149468: 0xafa20110  sw          $v0, 0x110($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149340u;
    if (runtime->hasFunction(0x149340u)) {
        auto targetFn = runtime->lookupFunction(0x149340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14946Cu; }
        if (ctx->pc != 0x14946Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00149340_0x149340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14946Cu; }
        if (ctx->pc != 0x14946Cu) { return; }
    }
    ctx->pc = 0x14946Cu;
    // 0x14946c: 0xc0a268a  jal         func_289A28
    ctx->pc = 0x14946Cu;
    SET_GPR_U32(ctx, 31, 0x149474u);
    ctx->pc = 0x149470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14946Cu;
            // 0x149470: 0x8fa40108  lw          $a0, 0x108($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289A28u;
    if (runtime->hasFunction(0x289A28u)) {
        auto targetFn = runtime->lookupFunction(0x289A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149474u; }
        if (ctx->pc != 0x149474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289a28_0x289b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149474u; }
        if (ctx->pc != 0x149474u) { return; }
    }
    ctx->pc = 0x149474u;
    // 0x149474: 0x9683000c  lhu         $v1, 0xC($s4)
    ctx->pc = 0x149474u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x149478: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x149478u;
    {
        const bool branch_taken_0x149478 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14947Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149478u;
            // 0x14947c: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149478) {
            ctx->pc = 0x149490u;
            goto label_149490;
        }
    }
    ctx->pc = 0x149480u;
    // 0x149480: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x149480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149484: 0x9e182a  slt         $v1, $a0, $fp
    ctx->pc = 0x149484u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x149488: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x149488u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14948c: 0x43f00a  movz        $fp, $v0, $v1
    ctx->pc = 0x14948cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 2));
label_149490:
    // 0x149490: 0xafa00114  sw          $zero, 0x114($sp)
    ctx->pc = 0x149490u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 0));
    // 0x149494: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x149494u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x149498: 0xafa00118  sw          $zero, 0x118($sp)
    ctx->pc = 0x149498u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 0));
    // 0x14949c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x14949cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1494a0: 0x1bc00064  blez        $fp, . + 4 + (0x64 << 2)
    ctx->pc = 0x1494A0u;
    {
        const bool branch_taken_0x1494a0 = (GPR_S32(ctx, 30) <= 0);
        ctx->pc = 0x1494A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1494A0u;
            // 0x1494a4: 0xafa0011c  sw          $zero, 0x11C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1494a0) {
            ctx->pc = 0x149634u;
            goto label_149634;
        }
    }
    ctx->pc = 0x1494A8u;
    // 0x1494a8: 0x8fb60108  lw          $s6, 0x108($sp)
    ctx->pc = 0x1494a8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1494ac: 0x3a0b82d  daddu       $s7, $sp, $zero
    ctx->pc = 0x1494acu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1494b0:
    // 0x1494b0: 0x82c30000  lb          $v1, 0x0($s6)
    ctx->pc = 0x1494b0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1494b4: 0x2402005b  addiu       $v0, $zero, 0x5B
    ctx->pc = 0x1494b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x1494b8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1494B8u;
    {
        const bool branch_taken_0x1494b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1494BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1494B8u;
            // 0x1494bc: 0x2402005d  addiu       $v0, $zero, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1494b8) {
            ctx->pc = 0x1494C8u;
            goto label_1494c8;
        }
    }
    ctx->pc = 0x1494C0u;
    // 0x1494c0: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x1494C0u;
    {
        const bool branch_taken_0x1494c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1494C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1494C0u;
            // 0x1494c4: 0x26350001  addiu       $s5, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1494c0) {
            ctx->pc = 0x149624u;
            goto label_149624;
        }
    }
    ctx->pc = 0x1494C8u;
label_1494c8:
    // 0x1494c8: 0x14620033  bne         $v1, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x1494C8u;
    {
        const bool branch_taken_0x1494c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1494c8) {
            ctx->pc = 0x149598u;
            goto label_149598;
        }
    }
    ctx->pc = 0x1494D0u;
    // 0x1494d0: 0x6a00033  bltz        $s5, . + 4 + (0x33 << 2)
    ctx->pc = 0x1494D0u;
    {
        const bool branch_taken_0x1494d0 = (GPR_S32(ctx, 21) < 0);
        ctx->pc = 0x1494D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1494D0u;
            // 0x1494d4: 0x2b1102a  slt         $v0, $s5, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1494d0) {
            ctx->pc = 0x1495A0u;
            goto label_1495a0;
        }
    }
    ctx->pc = 0x1494D8u;
    // 0x1494d8: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1494D8u;
    {
        const bool branch_taken_0x1494d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1494DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1494D8u;
            // 0x1494dc: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1494d8) {
            ctx->pc = 0x149598u;
            goto label_149598;
        }
    }
    ctx->pc = 0x1494E0u;
    // 0x1494e0: 0x2351823  subu        $v1, $s1, $s5
    ctx->pc = 0x1494e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
    // 0x1494e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1494e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1494e8: 0x27b000e0  addiu       $s0, $sp, 0xE0
    ctx->pc = 0x1494e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x1494ec: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x1494ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1494f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1494f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1494f4: 0x62900a  movz        $s2, $v1, $v0
    ctx->pc = 0x1494f4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
    // 0x1494f8: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x1494f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1494fc: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1494fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149500: 0xc0a274e  jal         func_289D38
    ctx->pc = 0x149500u;
    SET_GPR_U32(ctx, 31, 0x149508u);
    ctx->pc = 0x149504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149500u;
            // 0x149504: 0x752821  addu        $a1, $v1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289D38u;
    if (runtime->hasFunction(0x289D38u)) {
        auto targetFn = runtime->lookupFunction(0x289D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149508u; }
        if (ctx->pc != 0x149508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289d38_0x289f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149508u; }
        if (ctx->pc != 0x149508u) { return; }
    }
    ctx->pc = 0x149508u;
    // 0x149508: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x149508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x14950c: 0x2403002a  addiu       $v1, $zero, 0x2A
    ctx->pc = 0x14950cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x149510: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x149510u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x149514: 0x83a200e0  lb          $v0, 0xE0($sp)
    ctx->pc = 0x149514u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x149518: 0x50430042  beql        $v0, $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x149518u;
    {
        const bool branch_taken_0x149518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x149518) {
            ctx->pc = 0x14951Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x149518u;
            // 0x14951c: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x149624u;
            goto label_149624;
        }
    }
    ctx->pc = 0x149520u;
    // 0x149520: 0x8fa4010c  lw          $a0, 0x10C($sp)
    ctx->pc = 0x149520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x149524: 0xc052ace  jal         func_14AB38
    ctx->pc = 0x149524u;
    SET_GPR_U32(ctx, 31, 0x14952Cu);
    ctx->pc = 0x149528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149524u;
            // 0x149528: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14AB38u;
    if (runtime->hasFunction(0x14AB38u)) {
        auto targetFn = runtime->lookupFunction(0x14AB38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14952Cu; }
        if (ctx->pc != 0x14952Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014AB38_0x14ab38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14952Cu; }
        if (ctx->pc != 0x14952Cu) { return; }
    }
    ctx->pc = 0x14952Cu;
    // 0x14952c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x14952cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149530: 0x50e0003c  beql        $a3, $zero, . + 4 + (0x3C << 2)
    ctx->pc = 0x149530u;
    {
        const bool branch_taken_0x149530 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x149530) {
            ctx->pc = 0x149534u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x149530u;
            // 0x149534: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x149624u;
            goto label_149624;
        }
    }
    ctx->pc = 0x149538u;
    // 0x149538: 0x8fa80118  lw          $t0, 0x118($sp)
    ctx->pc = 0x149538u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x14953c: 0x94e6000a  lhu         $a2, 0xA($a3)
    ctx->pc = 0x14953cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 10)));
    // 0x149540: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x149540u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x149544: 0x82840  sll         $a1, $t0, 1
    ctx->pc = 0x149544u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
    // 0x149548: 0x8fa8011c  lw          $t0, 0x11C($sp)
    ctx->pc = 0x149548u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x14954c: 0x3a41821  addu        $v1, $sp, $a0
    ctx->pc = 0x14954cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x149550: 0xac750040  sw          $s5, 0x40($v1)
    ctx->pc = 0x149550u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 21));
    // 0x149554: 0x3a52021  addu        $a0, $sp, $a1
    ctx->pc = 0x149554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    // 0x149558: 0x1061021  addu        $v0, $t0, $a2
    ctx->pc = 0x149558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
    // 0x14955c: 0xaee70000  sw          $a3, 0x0($s7)
    ctx->pc = 0x14955cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 7));
    // 0x149560: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x149560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x149564: 0xac720080  sw          $s2, 0x80($v1)
    ctx->pc = 0x149564u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 128), GPR_U32(ctx, 18));
    // 0x149568: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x149568u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x14956c: 0xafa2011c  sw          $v0, 0x11C($sp)
    ctx->pc = 0x14956cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 2));
    // 0x149570: 0xa48600c0  sh          $a2, 0xC0($a0)
    ctx->pc = 0x149570u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 192), (uint16_t)GPR_U32(ctx, 6));
    // 0x149574: 0x8fa20118  lw          $v0, 0x118($sp)
    ctx->pc = 0x149574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x149578: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x149578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x14957c: 0xafa20118  sw          $v0, 0x118($sp)
    ctx->pc = 0x14957cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
    // 0x149580: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x149580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x149584: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x149584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x149588: 0x1062002a  beq         $v1, $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x149588u;
    {
        const bool branch_taken_0x149588 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14958Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149588u;
            // 0x14958c: 0x26f70004  addiu       $s7, $s7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149588) {
            ctx->pc = 0x149634u;
            goto label_149634;
        }
    }
    ctx->pc = 0x149590u;
    // 0x149590: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x149590u;
    {
        const bool branch_taken_0x149590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149590u;
            // 0x149594: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149590) {
            ctx->pc = 0x149624u;
            goto label_149624;
        }
    }
    ctx->pc = 0x149598u;
label_149598:
    // 0x149598: 0x6a30023  bgezl       $s5, . + 4 + (0x23 << 2)
    ctx->pc = 0x149598u;
    {
        const bool branch_taken_0x149598 = (GPR_S32(ctx, 21) >= 0);
        if (branch_taken_0x149598) {
            ctx->pc = 0x14959Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x149598u;
            // 0x14959c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x149628u;
            goto label_149628;
        }
    }
    ctx->pc = 0x1495A0u;
label_1495a0:
    // 0x1495a0: 0x8fa40110  lw          $a0, 0x110($sp)
    ctx->pc = 0x1495a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1495a4: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1495A4u;
    {
        const bool branch_taken_0x1495a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1495a4) {
            ctx->pc = 0x1495A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1495A4u;
            // 0x1495a8: 0x92c50000  lbu         $a1, 0x0($s6) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1495C4u;
            goto label_1495c4;
        }
    }
    ctx->pc = 0x1495ACu;
    // 0x1495ac: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x1495acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1495b0: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x1495b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1495b4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1495b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1495b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1495b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1495bc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1495BCu;
    {
        const bool branch_taken_0x1495bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1495C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1495BCu;
            // 0x1495c0: 0x94440000  lhu         $a0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1495bc) {
            ctx->pc = 0x1495DCu;
            goto label_1495dc;
        }
    }
    ctx->pc = 0x1495C4u;
label_1495c4:
    // 0x1495c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1495c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1495c8: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x1495c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x1495cc: 0x52e03  sra         $a1, $a1, 24
    ctx->pc = 0x1495ccu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
    // 0x1495d0: 0xc052102  jal         func_148408
    ctx->pc = 0x1495D0u;
    SET_GPR_U32(ctx, 31, 0x1495D8u);
    ctx->pc = 0x1495D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1495D0u;
            // 0x1495d4: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x148408u;
    if (runtime->hasFunction(0x148408u)) {
        auto targetFn = runtime->lookupFunction(0x148408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1495D8u; }
        if (ctx->pc != 0x1495D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_148408_0x148458(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1495D8u; }
        if (ctx->pc != 0x1495D8u) { return; }
    }
    ctx->pc = 0x1495D8u;
    // 0x1495d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1495d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1495dc:
    // 0x1495dc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1495dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1495e0: 0x50820011  beql        $a0, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1495E0u;
    {
        const bool branch_taken_0x1495e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x1495e0) {
            ctx->pc = 0x1495E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1495E0u;
            // 0x1495e4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x149628u;
            goto label_149628;
        }
    }
    ctx->pc = 0x1495E8u;
    // 0x1495e8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1495e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1495ec: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x1495ecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1495f0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1495F0u;
    {
        const bool branch_taken_0x1495f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1495F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1495F0u;
            // 0x1495f4: 0x8fa70114  lw          $a3, 0x114($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1495f0) {
            ctx->pc = 0x149624u;
            goto label_149624;
        }
    }
    ctx->pc = 0x1495F8u;
    // 0x1495f8: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x1495f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1495fc: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x1495fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x149600: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x149600u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x149604: 0x8fa8011c  lw          $t0, 0x11C($sp)
    ctx->pc = 0x149604u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
    // 0x149608: 0xafa70114  sw          $a3, 0x114($sp)
    ctx->pc = 0x149608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 7));
    // 0x14960c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14960cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x149610: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x149610u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x149614: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x149614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x149618: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x149618u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x14961c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x14961cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x149620: 0xafa2011c  sw          $v0, 0x11C($sp)
    ctx->pc = 0x149620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 2));
label_149624:
    // 0x149624: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x149624u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_149628:
    // 0x149628: 0x23e102a  slt         $v0, $s1, $fp
    ctx->pc = 0x149628u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x14962c: 0x1440ffa0  bnez        $v0, . + 4 + (-0x60 << 2)
    ctx->pc = 0x14962Cu;
    {
        const bool branch_taken_0x14962c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14962Cu;
            // 0x149630: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14962c) {
            ctx->pc = 0x1494B0u;
            runtime->cooperativeGuestYield();
            goto label_1494b0;
        }
    }
    ctx->pc = 0x149634u;
label_149634:
    // 0x149634: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x149634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x149638: 0x8fa50114  lw          $a1, 0x114($sp)
    ctx->pc = 0x149638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x14963c: 0x8fa60118  lw          $a2, 0x118($sp)
    ctx->pc = 0x14963cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x149640: 0xc05245a  jal         func_149168
    ctx->pc = 0x149640u;
    SET_GPR_U32(ctx, 31, 0x149648u);
    ctx->pc = 0x149644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149640u;
            // 0x149644: 0x8fa70108  lw          $a3, 0x108($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149168u;
    if (runtime->hasFunction(0x149168u)) {
        auto targetFn = runtime->lookupFunction(0x149168u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149648u; }
        if (ctx->pc != 0x149648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00149168_0x149168(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149648u; }
        if (ctx->pc != 0x149648u) { return; }
    }
    ctx->pc = 0x149648u;
    // 0x149648: 0x8fa30114  lw          $v1, 0x114($sp)
    ctx->pc = 0x149648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x14964c: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x14964cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x149650: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x149650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x149654: 0x104000b4  beqz        $v0, . + 4 + (0xB4 << 2)
    ctx->pc = 0x149654u;
    {
        const bool branch_taken_0x149654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149654u;
            // 0x149658: 0x7bb001b0  lq          $s0, 0x1B0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149654) {
            ctx->pc = 0x149928u;
            goto label_149928;
        }
    }
    ctx->pc = 0x14965Cu;
    // 0x14965c: 0x96820006  lhu         $v0, 0x6($s4)
    ctx->pc = 0x14965cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
    // 0x149660: 0x9683000e  lhu         $v1, 0xE($s4)
    ctx->pc = 0x149660u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 14)));
    // 0x149664: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x149664u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x149668: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x149668u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x14966c: 0x96840012  lhu         $a0, 0x12($s4)
    ctx->pc = 0x14966cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 18)));
    // 0x149670: 0x96820016  lhu         $v0, 0x16($s4)
    ctx->pc = 0x149670u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 22)));
    // 0x149674: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x149674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x149678: 0x3c013a80  lui         $at, 0x3A80
    ctx->pc = 0x149678u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)14976 << 16));
    // 0x14967c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x14967cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x149680: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x149680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x149684: 0x9286001e  lbu         $a2, 0x1E($s4)
    ctx->pc = 0x149684u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 30)));
    // 0x149688: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x149688u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x14968c: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x14968cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x149690: 0x10c00018  beqz        $a2, . + 4 + (0x18 << 2)
    ctx->pc = 0x149690u;
    {
        const bool branch_taken_0x149690 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x149694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149690u;
            // 0x149694: 0x29403  sra         $s2, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149690) {
            ctx->pc = 0x1496F4u;
            goto label_1496f4;
        }
    }
    ctx->pc = 0x149698u;
    // 0x149698: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x149698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x14969c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14969cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1496a0: 0x9683001a  lhu         $v1, 0x1A($s4)
    ctx->pc = 0x1496a0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 26)));
    // 0x1496a4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1496a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1496a8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1496a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1496ac: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1496acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1496b0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1496b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1496b4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1496b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1496b8: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1496b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1496bc: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1496bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1496c0: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x1496c0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
    // 0x1496c4: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x1496c4u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1496c8: 0x14c50003  bne         $a2, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1496C8u;
    {
        const bool branch_taken_0x1496c8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        ctx->pc = 0x1496CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1496C8u;
            // 0x1496cc: 0x4180a  movz        $v1, $zero, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1496c8) {
            ctx->pc = 0x1496D8u;
            goto label_1496d8;
        }
    }
    ctx->pc = 0x1496D0u;
    // 0x1496d0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1496D0u;
    {
        const bool branch_taken_0x1496d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1496D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1496D0u;
            // 0x1496d4: 0x2431021  addu        $v0, $s2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1496d0) {
            ctx->pc = 0x1496ECu;
            goto label_1496ec;
        }
    }
    ctx->pc = 0x1496D8u;
label_1496d8:
    // 0x1496d8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1496d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1496dc: 0x54c20006  bnel        $a2, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1496DCu;
    {
        const bool branch_taken_0x1496dc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        if (branch_taken_0x1496dc) {
            ctx->pc = 0x1496E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1496DCu;
            // 0x1496e0: 0x9663000c  lhu         $v1, 0xC($s3) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1496F8u;
            goto label_1496f8;
        }
    }
    ctx->pc = 0x1496E4u;
    // 0x1496e4: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x1496e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
    // 0x1496e8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x1496e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_1496ec:
    // 0x1496ec: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1496ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1496f0: 0x29403  sra         $s2, $v0, 16
    ctx->pc = 0x1496f0u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 16));
label_1496f4:
    // 0x1496f4: 0x9663000c  lhu         $v1, 0xC($s3)
    ctx->pc = 0x1496f4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
label_1496f8:
    // 0x1496f8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1496f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1496fc: 0x30630006  andi        $v1, $v1, 0x6
    ctx->pc = 0x1496fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)6);
    // 0x149700: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x149700u;
    {
        const bool branch_taken_0x149700 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x149704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149700u;
            // 0x149704: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149700) {
            ctx->pc = 0x149790u;
            goto label_149790;
        }
    }
    ctx->pc = 0x149708u;
    // 0x149708: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x149708u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x14970c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x14970Cu;
    {
        const bool branch_taken_0x14970c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14970Cu;
            // 0x149710: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14970c) {
            ctx->pc = 0x149724u;
            goto label_149724;
        }
    }
    ctx->pc = 0x149714u;
    // 0x149714: 0x5062001f  beql        $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x149714u;
    {
        const bool branch_taken_0x149714 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x149714) {
            ctx->pc = 0x149718u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x149714u;
            // 0x149718: 0x8e760010  lw          $s6, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x149794u;
            goto label_149794;
        }
    }
    ctx->pc = 0x14971Cu;
    // 0x14971c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x14971Cu;
    {
        const bool branch_taken_0x14971c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14971Cu;
            // 0x149720: 0xafa00114  sw          $zero, 0x114($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14971c) {
            ctx->pc = 0x149798u;
            goto label_149798;
        }
    }
    ctx->pc = 0x149724u;
label_149724:
    // 0x149724: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x149724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x149728: 0x5462001b  bnel        $v1, $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x149728u;
    {
        const bool branch_taken_0x149728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x149728) {
            ctx->pc = 0x14972Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x149728u;
            // 0x14972c: 0xafa00114  sw          $zero, 0x114($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x149798u;
            goto label_149798;
        }
    }
    ctx->pc = 0x149730u;
    // 0x149730: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x149730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x149734: 0x4403a000  mfc1        $v1, $f20
    ctx->pc = 0x149734u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x149738: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x149738u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14973c: 0x48a31000  qmtc2.ni    $v1, $vf2
    ctx->pc = 0x14973cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 3));
    // 0x149740: 0x4b020858  vmulx.x     $vf1, $vf1, $vf2x
    ctx->pc = 0x149740u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x149744: 0x8fa70104  lw          $a3, 0x104($sp)
    ctx->pc = 0x149744u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x149748: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x149748u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x14974c: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x14974cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x149750: 0xd8e10010  lqc2        $vf1, 0x10($a3)
    ctx->pc = 0x149750u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x149754: 0x4a820858  vmulx.y     $vf1, $vf1, $vf2x
    ctx->pc = 0x149754u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x149758: 0x48280800  qmfc2.ni    $t0, $vf1
    ctx->pc = 0x149758u;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x14975c: 0x46010842  mul.s       $f1, $f1, $f1
    ctx->pc = 0x14975cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x149760: 0x700817c9  prot3w      $v0, $t0
    ctx->pc = 0x149760u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x149764: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x149764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x149768: 0xc6620020  lwc1        $f2, 0x20($s3)
    ctx->pc = 0x149768u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x14976c: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x14976cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x149770: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x149770u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x149774: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x149774u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x149778: 0x0  nop
    ctx->pc = 0x149778u;
    // NOP
    // 0x14977c: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x14977Cu;
    {
        const bool branch_taken_0x14977c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14977c) {
            ctx->pc = 0x149780u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14977Cu;
            // 0x149780: 0x8e760014  lw          $s6, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x149794u;
            goto label_149794;
        }
    }
    ctx->pc = 0x149784u;
    // 0x149784: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x149784u;
    {
        const bool branch_taken_0x149784 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149784u;
            // 0x149788: 0x8e760010  lw          $s6, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x149784) {
            ctx->pc = 0x149794u;
            goto label_149794;
        }
    }
    ctx->pc = 0x14978Cu;
    // 0x14978c: 0x0  nop
    ctx->pc = 0x14978cu;
    // NOP
label_149790:
    // 0x149790: 0x8e760014  lw          $s6, 0x14($s3)
    ctx->pc = 0x149790u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_149794:
    // 0x149794: 0xafa00114  sw          $zero, 0x114($sp)
    ctx->pc = 0x149794u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 0));
label_149798:
    // 0x149798: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x149798u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14979c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x14979cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1497a0: 0x1bc00060  blez        $fp, . + 4 + (0x60 << 2)
    ctx->pc = 0x1497A0u;
    {
        const bool branch_taken_0x1497a0 = (GPR_S32(ctx, 30) <= 0);
        ctx->pc = 0x1497A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1497A0u;
            // 0x1497a4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1497a0) {
            ctx->pc = 0x149924u;
            goto label_149924;
        }
    }
    ctx->pc = 0x1497A8u;
    // 0x1497a8: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x1497a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1497ac: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x1497acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
label_1497b0:
    // 0x1497b0: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x1497b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1497b4: 0x80650000  lb          $a1, 0x0($v1)
    ctx->pc = 0x1497b4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1497b8: 0x2402005b  addiu       $v0, $zero, 0x5B
    ctx->pc = 0x1497b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 91));
    // 0x1497bc: 0x14a2002d  bne         $a1, $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x1497BCu;
    {
        const bool branch_taken_0x1497bc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1497C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1497BCu;
            // 0x1497c0: 0x8fa20110  lw          $v0, 0x110($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1497bc) {
            ctx->pc = 0x149874u;
            goto label_149874;
        }
    }
    ctx->pc = 0x1497C4u;
    // 0x1497c4: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x1497c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x1497c8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1497c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1497cc: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x1497ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1497d0: 0x911821  addu        $v1, $a0, $s1
    ctx->pc = 0x1497d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1497d4: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x1497d4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1497d8: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1497D8u;
    {
        const bool branch_taken_0x1497d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1497DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1497D8u;
            // 0x1497dc: 0x8fa70118  lw          $a3, 0x118($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1497d8) {
            ctx->pc = 0x149808u;
            goto label_149808;
        }
    }
    ctx->pc = 0x1497E0u;
    // 0x1497e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1497e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1497e4: 0x2403005d  addiu       $v1, $zero, 0x5D
    ctx->pc = 0x1497e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 93));
    // 0x1497e8: 0x911021  addu        $v0, $a0, $s1
    ctx->pc = 0x1497e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1497ec: 0x80480000  lb          $t0, 0x0($v0)
    ctx->pc = 0x1497ecu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1497f0: 0x11030048  beq         $t0, $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x1497F0u;
    {
        const bool branch_taken_0x1497f0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 3));
        ctx->pc = 0x1497F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1497F0u;
            // 0x1497f4: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1497f0) {
            ctx->pc = 0x149914u;
            goto label_149914;
        }
    }
    ctx->pc = 0x1497F8u;
    // 0x1497f8: 0x2517ffd0  addiu       $s7, $t0, -0x30
    ctx->pc = 0x1497f8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967248));
    // 0x1497fc: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x1497FCu;
    {
        const bool branch_taken_0x1497fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1497FCu;
            // 0x149800: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1497fc) {
            ctx->pc = 0x149914u;
            goto label_149914;
        }
    }
    ctx->pc = 0x149804u;
    // 0x149804: 0x0  nop
    ctx->pc = 0x149804u;
    // NOP
label_149808:
    // 0x149808: 0x2a7102a  slt         $v0, $s5, $a3
    ctx->pc = 0x149808u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x14980c: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x14980Cu;
    {
        const bool branch_taken_0x14980c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14980Cu;
            // 0x149810: 0x151880  sll         $v1, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14980c) {
            ctx->pc = 0x149914u;
            goto label_149914;
        }
    }
    ctx->pc = 0x149814u;
    // 0x149814: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x149814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x149818: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x149818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x14981c: 0x5451003e  bnel        $v0, $s1, . + 4 + (0x3E << 2)
    ctx->pc = 0x14981Cu;
    {
        const bool branch_taken_0x14981c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x14981c) {
            ctx->pc = 0x149820u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14981Cu;
            // 0x149820: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x149918u;
            goto label_149918;
        }
    }
    ctx->pc = 0x149824u;
    // 0x149824: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x149824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x149828: 0x8e850000  lw          $a1, 0x0($s4)
    ctx->pc = 0x149828u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x14982c: 0x8c420080  lw          $v0, 0x80($v0)
    ctx->pc = 0x14982cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x149830: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x149830u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x149834: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x149834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x149838: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x149838u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14983c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x14983cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x149840: 0xc052472  jal         func_1491C8
    ctx->pc = 0x149840u;
    SET_GPR_U32(ctx, 31, 0x149848u);
    ctx->pc = 0x149844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149840u;
            // 0x149844: 0x2e0402d  daddu       $t0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1491C8u;
    if (runtime->hasFunction(0x1491C8u)) {
        auto targetFn = runtime->lookupFunction(0x1491C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149848u; }
        if (ctx->pc != 0x149848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001491C8_0x1491c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x149848u; }
        if (ctx->pc != 0x149848u) { return; }
    }
    ctx->pc = 0x149848u;
    // 0x149848: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x149848u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x14984c: 0x151040  sll         $v0, $s5, 1
    ctx->pc = 0x14984cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
    // 0x149850: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x149850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x149854: 0x844200c0  lh          $v0, 0xC0($v0)
    ctx->pc = 0x149854u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x149858: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x149858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14985c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x14985cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x149860: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x149860u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x149864: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x149864u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x149868: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x149868u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x14986c: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x14986Cu;
    {
        const bool branch_taken_0x14986c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14986Cu;
            // 0x149870: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14986c) {
            ctx->pc = 0x149908u;
            goto label_149908;
        }
    }
    ctx->pc = 0x149874u;
label_149874:
    // 0x149874: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x149874u;
    {
        const bool branch_taken_0x149874 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x149878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149874u;
            // 0x149878: 0x30a5ffff  andi        $a1, $a1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x149874) {
            ctx->pc = 0x149894u;
            goto label_149894;
        }
    }
    ctx->pc = 0x14987Cu;
    // 0x14987c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x14987cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x149880: 0x8e63001c  lw          $v1, 0x1C($s3)
    ctx->pc = 0x149880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x149884: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x149884u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x149888: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x149888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14988c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14988Cu;
    {
        const bool branch_taken_0x14988c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x149890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14988Cu;
            // 0x149890: 0x94500000  lhu         $s0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14988c) {
            ctx->pc = 0x1498A0u;
            goto label_1498a0;
        }
    }
    ctx->pc = 0x149894u;
label_149894:
    // 0x149894: 0xc052102  jal         func_148408
    ctx->pc = 0x149894u;
    SET_GPR_U32(ctx, 31, 0x14989Cu);
    ctx->pc = 0x149898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x149894u;
            // 0x149898: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148408u;
    if (runtime->hasFunction(0x148408u)) {
        auto targetFn = runtime->lookupFunction(0x148408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14989Cu; }
        if (ctx->pc != 0x14989Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_148408_0x148458(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14989Cu; }
        if (ctx->pc != 0x14989Cu) { return; }
    }
    ctx->pc = 0x14989Cu;
    // 0x14989c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x14989cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1498a0:
    // 0x1498a0: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1498a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1498a4: 0x5202001c  beql        $s0, $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1498A4u;
    {
        const bool branch_taken_0x1498a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x1498a4) {
            ctx->pc = 0x1498A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1498A4u;
            // 0x1498a8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x149918u;
            goto label_149918;
        }
    }
    ctx->pc = 0x1498ACu;
    // 0x1498ac: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1498acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1498b0: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x1498b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1498b4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x1498B4u;
    {
        const bool branch_taken_0x1498b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1498B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1498B4u;
            // 0x1498b8: 0x8fa60114  lw          $a2, 0x114($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1498b4) {
            ctx->pc = 0x149914u;
            goto label_149914;
        }
    }
    ctx->pc = 0x1498BCu;
    // 0x1498bc: 0x1028c0  sll         $a1, $s0, 3
    ctx->pc = 0x1498bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1498c0: 0x8fa40100  lw          $a0, 0x100($sp)
    ctx->pc = 0x1498c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1498c4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x1498c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1498c8: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x1498c8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1498cc: 0x2c52821  addu        $a1, $s6, $a1
    ctx->pc = 0x1498ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 5)));
    // 0x1498d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1498d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1498d4: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x1498d4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1498d8: 0xc052468  jal         func_1491A0
    ctx->pc = 0x1498D8u;
    SET_GPR_U32(ctx, 31, 0x1498E0u);
    ctx->pc = 0x1498DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1498D8u;
            // 0x1498dc: 0xafa30114  sw          $v1, 0x114($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1491A0u;
    if (runtime->hasFunction(0x1491A0u)) {
        auto targetFn = runtime->lookupFunction(0x1491A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1498E0u; }
        if (ctx->pc != 0x1498E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1491a0_0x1491c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1498E0u; }
        if (ctx->pc != 0x1498E0u) { return; }
    }
    ctx->pc = 0x1498E0u;
    // 0x1498e0: 0x8e630018  lw          $v1, 0x18($s3)
    ctx->pc = 0x1498e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x1498e4: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x1498e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x1498e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1498e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1498ec: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1498ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1498f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1498f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1498f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1498f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1498f8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1498f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1498fc: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1498fcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x149900: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x149900u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x149904: 0x0  nop
    ctx->pc = 0x149904u;
    // NOP
label_149908:
    // 0x149908: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x149908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x14990c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x14990cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x149910: 0x29403  sra         $s2, $v0, 16
    ctx->pc = 0x149910u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 2), 16));
label_149914:
    // 0x149914: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x149914u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_149918:
    // 0x149918: 0x23e102a  slt         $v0, $s1, $fp
    ctx->pc = 0x149918u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
    // 0x14991c: 0x1440ffa4  bnez        $v0, . + 4 + (-0x5C << 2)
    ctx->pc = 0x14991Cu;
    {
        const bool branch_taken_0x14991c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x149920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14991Cu;
            // 0x149920: 0x8fa20108  lw          $v0, 0x108($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14991c) {
            ctx->pc = 0x1497B0u;
            runtime->cooperativeGuestYield();
            goto label_1497b0;
        }
    }
    ctx->pc = 0x149924u;
label_149924:
    // 0x149924: 0x7bb001b0  lq          $s0, 0x1B0($sp)
    ctx->pc = 0x149924u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 432)));
label_149928:
    // 0x149928: 0x7bb101a0  lq          $s1, 0x1A0($sp)
    ctx->pc = 0x149928u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x14992c: 0x7bb20190  lq          $s2, 0x190($sp)
    ctx->pc = 0x14992cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x149930: 0x7bb30180  lq          $s3, 0x180($sp)
    ctx->pc = 0x149930u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x149934: 0x7bb40170  lq          $s4, 0x170($sp)
    ctx->pc = 0x149934u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x149938: 0x7bb50160  lq          $s5, 0x160($sp)
    ctx->pc = 0x149938u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x14993c: 0x7bb60150  lq          $s6, 0x150($sp)
    ctx->pc = 0x14993cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x149940: 0x7bb70140  lq          $s7, 0x140($sp)
    ctx->pc = 0x149940u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x149944: 0x7bbe0130  lq          $fp, 0x130($sp)
    ctx->pc = 0x149944u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x149948: 0xdfbf0120  ld          $ra, 0x120($sp)
    ctx->pc = 0x149948u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x14994c: 0xc7b401c0  lwc1        $f20, 0x1C0($sp)
    ctx->pc = 0x14994cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x149950: 0x3e00008  jr          $ra
    ctx->pc = 0x149950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x149954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x149950u;
            // 0x149954: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x149490u: goto label_149490;
            case 0x1494B0u: goto label_1494b0;
            case 0x1494C8u: goto label_1494c8;
            case 0x149598u: goto label_149598;
            case 0x1495A0u: goto label_1495a0;
            case 0x1495C4u: goto label_1495c4;
            case 0x1495DCu: goto label_1495dc;
            case 0x149624u: goto label_149624;
            case 0x149628u: goto label_149628;
            case 0x149634u: goto label_149634;
            case 0x1496D8u: goto label_1496d8;
            case 0x1496ECu: goto label_1496ec;
            case 0x1496F4u: goto label_1496f4;
            case 0x1496F8u: goto label_1496f8;
            case 0x149724u: goto label_149724;
            case 0x149790u: goto label_149790;
            case 0x149794u: goto label_149794;
            case 0x149798u: goto label_149798;
            case 0x1497B0u: goto label_1497b0;
            case 0x149808u: goto label_149808;
            case 0x149874u: goto label_149874;
            case 0x149894u: goto label_149894;
            case 0x1498A0u: goto label_1498a0;
            case 0x149908u: goto label_149908;
            case 0x149914u: goto label_149914;
            case 0x149918u: goto label_149918;
            case 0x149924u: goto label_149924;
            case 0x149928u: goto label_149928;
            default: break;
        }
        return;
    }
    ctx->pc = 0x149958u;
}
