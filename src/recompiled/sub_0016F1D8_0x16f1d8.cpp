#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016F1D8
// Address: 0x16f1d8 - 0x170070
void sub_0016F1D8_0x16f1d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016F1D8_0x16f1d8");
#endif

    ctx->pc = 0x16f1d8u;

    // 0x16f1d8: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x16f1d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
    // 0x16f1dc: 0x7fb001c0  sq          $s0, 0x1C0($sp)
    ctx->pc = 0x16f1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 16));
    // 0x16f1e0: 0x7fb30190  sq          $s3, 0x190($sp)
    ctx->pc = 0x16f1e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 19));
    // 0x16f1e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16f1e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f1e8: 0x7fb40180  sq          $s4, 0x180($sp)
    ctx->pc = 0x16f1e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 20));
    // 0x16f1ec: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x16f1ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f1f0: 0x7fb50170  sq          $s5, 0x170($sp)
    ctx->pc = 0x16f1f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 21));
    // 0x16f1f4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x16f1f4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f1f8: 0x7fb101b0  sq          $s1, 0x1B0($sp)
    ctx->pc = 0x16f1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 17));
    // 0x16f1fc: 0x24150004  addiu       $s5, $zero, 0x4
    ctx->pc = 0x16f1fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x16f200: 0x7fb201a0  sq          $s2, 0x1A0($sp)
    ctx->pc = 0x16f200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 18));
    // 0x16f204: 0xffbf0160  sd          $ra, 0x160($sp)
    ctx->pc = 0x16f204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 31));
    // 0x16f208: 0xafa50150  sw          $a1, 0x150($sp)
    ctx->pc = 0x16f208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 5));
    // 0x16f20c: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x16F20Cu;
    {
        const bool branch_taken_0x16f20c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x16F210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F20Cu;
            // 0x16f210: 0xafa00140  sw          $zero, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f20c) {
            ctx->pc = 0x16F21Cu;
            goto label_16f21c;
        }
    }
    ctx->pc = 0x16F214u;
    // 0x16f214: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x16f214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16f218: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x16f218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
label_16f21c:
    // 0x16f21c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x16f21cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f220: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x16f220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x16f224: 0x0  nop
    ctx->pc = 0x16f224u;
    // NOP
label_16f228:
    // 0x16f228: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x16f228u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16f22c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16f22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16f230: 0xafa20150  sw          $v0, 0x150($sp)
    ctx->pc = 0x16f230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
    // 0x16f234: 0x2c62003b  sltiu       $v0, $v1, 0x3B
    ctx->pc = 0x16f234u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)59) ? 1 : 0);
    // 0x16f238: 0x10400355  beqz        $v0, . + 4 + (0x355 << 2)
    ctx->pc = 0x16F238u;
    {
        const bool branch_taken_0x16f238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F23Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F238u;
            // 0x16f23c: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f238) {
            ctx->pc = 0x16FF90u;
            goto label_16ff90;
        }
    }
    ctx->pc = 0x16F240u;
    // 0x16f240: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16f240u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16f244: 0x24422460  addiu       $v0, $v0, 0x2460
    ctx->pc = 0x16f244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9312));
    // 0x16f248: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16f248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16f24c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16f24cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16f250: 0x400008  jr          $v0
    ctx->pc = 0x16F250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16F258u: goto label_16f258;
            case 0x16F290u: goto label_16f290;
            case 0x16F2C0u: goto label_16f2c0;
            case 0x16F2F8u: goto label_16f2f8;
            case 0x16F328u: goto label_16f328;
            case 0x16F358u: goto label_16f358;
            case 0x16F388u: goto label_16f388;
            case 0x16F3B8u: goto label_16f3b8;
            case 0x16F3F0u: goto label_16f3f0;
            case 0x16F428u: goto label_16f428;
            case 0x16F460u: goto label_16f460;
            case 0x16F498u: goto label_16f498;
            case 0x16F4D0u: goto label_16f4d0;
            case 0x16F518u: goto label_16f518;
            case 0x16F53Cu: goto label_16f53c;
            case 0x16F558u: goto label_16f558;
            case 0x16F570u: goto label_16f570;
            case 0x16F598u: goto label_16f598;
            case 0x16F5C8u: goto label_16f5c8;
            case 0x16F608u: goto label_16f608;
            case 0x16F648u: goto label_16f648;
            case 0x16F688u: goto label_16f688;
            case 0x16F6C8u: goto label_16f6c8;
            case 0x16F708u: goto label_16f708;
            case 0x16F748u: goto label_16f748;
            case 0x16F798u: goto label_16f798;
            case 0x16F808u: goto label_16f808;
            case 0x16F880u: goto label_16f880;
            case 0x16F8E0u: goto label_16f8e0;
            case 0x16F908u: goto label_16f908;
            case 0x16F940u: goto label_16f940;
            case 0x16F988u: goto label_16f988;
            case 0x16F9B0u: goto label_16f9b0;
            case 0x16F9E0u: goto label_16f9e0;
            case 0x16FA08u: goto label_16fa08;
            case 0x16FA48u: goto label_16fa48;
            case 0x16FAB8u: goto label_16fab8;
            case 0x16FAF8u: goto label_16faf8;
            case 0x16FB30u: goto label_16fb30;
            case 0x16FB78u: goto label_16fb78;
            case 0x16FBB0u: goto label_16fbb0;
            case 0x16FBE8u: goto label_16fbe8;
            case 0x16FC30u: goto label_16fc30;
            case 0x16FC68u: goto label_16fc68;
            case 0x16FCC0u: goto label_16fcc0;
            case 0x16FD08u: goto label_16fd08;
            case 0x16FD40u: goto label_16fd40;
            case 0x16FD78u: goto label_16fd78;
            case 0x16FDC0u: goto label_16fdc0;
            case 0x16FDF8u: goto label_16fdf8;
            case 0x16FE40u: goto label_16fe40;
            case 0x16FEA0u: goto label_16fea0;
            case 0x16FEFCu: goto label_16fefc;
            case 0x16FF20u: goto label_16ff20;
            case 0x16FF90u: goto label_16ff90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16F258u;
label_16f258:
    // 0x16f258: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x16f258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x16f25c: 0x88620003  lwl         $v0, 0x3($v1)
    ctx->pc = 0x16f25cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x16f260: 0x98620000  lwr         $v0, 0x0($v1)
    ctx->pc = 0x16f260u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x16f264: 0xafa20154  sw          $v0, 0x154($sp)
    ctx->pc = 0x16f264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
    // 0x16f268: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x16f268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x16f26c: 0xafa30150  sw          $v1, 0x150($sp)
    ctx->pc = 0x16f26cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 3));
    // 0x16f270: 0xc7a00154  lwc1        $f0, 0x154($sp)
    ctx->pc = 0x16f270u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f274: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16f274u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16f278: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x16f278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x16f27c: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x16f27cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x16f280: 0xa0400100  sb          $zero, 0x100($v0)
    ctx->pc = 0x16f280u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 256), (uint8_t)GPR_U32(ctx, 0));
    // 0x16f284: 0x100002ff  b           . + 4 + (0x2FF << 2)
    ctx->pc = 0x16F284u;
    {
        const bool branch_taken_0x16f284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F284u;
            // 0x16f288: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f284) {
            ctx->pc = 0x16FE84u;
            goto label_16fe84;
        }
    }
    ctx->pc = 0x16F28Cu;
    // 0x16f28c: 0x0  nop
    ctx->pc = 0x16f28cu;
    // NOP
label_16f290:
    // 0x16f290: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x16f290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x16f294: 0x88440003  lwl         $a0, 0x3($v0)
    ctx->pc = 0x16f294u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x16f298: 0x98440000  lwr         $a0, 0x0($v0)
    ctx->pc = 0x16f298u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x16f29c: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x16f29cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x16f2a0: 0xafa30150  sw          $v1, 0x150($sp)
    ctx->pc = 0x16f2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 3));
    // 0x16f2a4: 0xafa40154  sw          $a0, 0x154($sp)
    ctx->pc = 0x16f2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 4));
    // 0x16f2a8: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16f2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16f2ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16f2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f2b0: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x16f2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x16f2b4: 0x100002f3  b           . + 4 + (0x2F3 << 2)
    ctx->pc = 0x16F2B4u;
    {
        const bool branch_taken_0x16f2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F2B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F2B4u;
            // 0x16f2b8: 0xa0430100  sb          $v1, 0x100($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 256), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f2b4) {
            ctx->pc = 0x16FE84u;
            goto label_16fe84;
        }
    }
    ctx->pc = 0x16F2BCu;
    // 0x16f2bc: 0x0  nop
    ctx->pc = 0x16f2bcu;
    // NOP
label_16f2c0:
    // 0x16f2c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16f2c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f2c4: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x16f2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x16f2c8: 0xc05c01c  jal         func_170070
    ctx->pc = 0x16F2C8u;
    SET_GPR_U32(ctx, 31, 0x16F2D0u);
    ctx->pc = 0x16F2CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F2C8u;
            // 0x16f2cc: 0x27a60154  addiu       $a2, $sp, 0x154 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170070u;
    if (runtime->hasFunction(0x170070u)) {
        auto targetFn = runtime->lookupFunction(0x170070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F2D0u; }
        if (ctx->pc != 0x16F2D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170070_0x170070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F2D0u; }
        if (ctx->pc != 0x16F2D0u) { return; }
    }
    ctx->pc = 0x16F2D0u;
    // 0x16f2d0: 0x54400331  bnel        $v0, $zero, . + 4 + (0x331 << 2)
    ctx->pc = 0x16F2D0u;
    {
        const bool branch_taken_0x16f2d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f2d0) {
            ctx->pc = 0x16F2D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16F2D0u;
            // 0x16f2d4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16FF98u;
            goto label_16ff98;
        }
    }
    ctx->pc = 0x16F2D8u;
    // 0x16f2d8: 0xc7a00154  lwc1        $f0, 0x154($sp)
    ctx->pc = 0x16f2d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f2dc: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16f2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16f2e0: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x16f2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x16f2e4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x16f2e4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x16f2e8: 0xa0400100  sb          $zero, 0x100($v0)
    ctx->pc = 0x16f2e8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 256), (uint8_t)GPR_U32(ctx, 0));
    // 0x16f2ec: 0x100002e5  b           . + 4 + (0x2E5 << 2)
    ctx->pc = 0x16F2ECu;
    {
        const bool branch_taken_0x16f2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F2F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F2ECu;
            // 0x16f2f0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f2ec) {
            ctx->pc = 0x16FE84u;
            goto label_16fe84;
        }
    }
    ctx->pc = 0x16F2F4u;
    // 0x16f2f4: 0x0  nop
    ctx->pc = 0x16f2f4u;
    // NOP
label_16f2f8:
    // 0x16f2f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16f2f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f2fc: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x16f2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x16f300: 0xc05c01c  jal         func_170070
    ctx->pc = 0x16F300u;
    SET_GPR_U32(ctx, 31, 0x16F308u);
    ctx->pc = 0x16F304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F300u;
            // 0x16f304: 0x27a60154  addiu       $a2, $sp, 0x154 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170070u;
    if (runtime->hasFunction(0x170070u)) {
        auto targetFn = runtime->lookupFunction(0x170070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F308u; }
        if (ctx->pc != 0x16F308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170070_0x170070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F308u; }
        if (ctx->pc != 0x16F308u) { return; }
    }
    ctx->pc = 0x16F308u;
    // 0x16f308: 0x54400323  bnel        $v0, $zero, . + 4 + (0x323 << 2)
    ctx->pc = 0x16F308u;
    {
        const bool branch_taken_0x16f308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f308) {
            ctx->pc = 0x16F30Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16F308u;
            // 0x16f30c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16FF98u;
            goto label_16ff98;
        }
    }
    ctx->pc = 0x16F310u;
    // 0x16f310: 0x8fa40154  lw          $a0, 0x154($sp)
    ctx->pc = 0x16f310u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x16f314: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16f314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16f318: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16f318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f31c: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x16f31cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x16f320: 0x100002d8  b           . + 4 + (0x2D8 << 2)
    ctx->pc = 0x16F320u;
    {
        const bool branch_taken_0x16f320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F320u;
            // 0x16f324: 0xa0430100  sb          $v1, 0x100($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 256), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f320) {
            ctx->pc = 0x16FE84u;
            goto label_16fe84;
        }
    }
    ctx->pc = 0x16F328u;
label_16f328:
    // 0x16f328: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16f328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f32c: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x16f32cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x16f330: 0xc05c01c  jal         func_170070
    ctx->pc = 0x16F330u;
    SET_GPR_U32(ctx, 31, 0x16F338u);
    ctx->pc = 0x16F334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F330u;
            // 0x16f334: 0x27a60154  addiu       $a2, $sp, 0x154 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170070u;
    if (runtime->hasFunction(0x170070u)) {
        auto targetFn = runtime->lookupFunction(0x170070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F338u; }
        if (ctx->pc != 0x16F338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170070_0x170070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F338u; }
        if (ctx->pc != 0x16F338u) { return; }
    }
    ctx->pc = 0x16F338u;
    // 0x16f338: 0x54400317  bnel        $v0, $zero, . + 4 + (0x317 << 2)
    ctx->pc = 0x16F338u;
    {
        const bool branch_taken_0x16f338 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f338) {
            ctx->pc = 0x16F33Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16F338u;
            // 0x16f33c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16FF98u;
            goto label_16ff98;
        }
    }
    ctx->pc = 0x16F340u;
    // 0x16f340: 0x8fa40154  lw          $a0, 0x154($sp)
    ctx->pc = 0x16f340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x16f344: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16f344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16f348: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16f348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16f34c: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x16f34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x16f350: 0x100002cc  b           . + 4 + (0x2CC << 2)
    ctx->pc = 0x16F350u;
    {
        const bool branch_taken_0x16f350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F350u;
            // 0x16f354: 0xa0430100  sb          $v1, 0x100($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 256), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f350) {
            ctx->pc = 0x16FE84u;
            goto label_16fe84;
        }
    }
    ctx->pc = 0x16F358u;
label_16f358:
    // 0x16f358: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16f358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f35c: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x16f35cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x16f360: 0xc05c01c  jal         func_170070
    ctx->pc = 0x16F360u;
    SET_GPR_U32(ctx, 31, 0x16F368u);
    ctx->pc = 0x16F364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F360u;
            // 0x16f364: 0x27a60154  addiu       $a2, $sp, 0x154 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170070u;
    if (runtime->hasFunction(0x170070u)) {
        auto targetFn = runtime->lookupFunction(0x170070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F368u; }
        if (ctx->pc != 0x16F368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170070_0x170070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F368u; }
        if (ctx->pc != 0x16F368u) { return; }
    }
    ctx->pc = 0x16F368u;
    // 0x16f368: 0x5440030b  bnel        $v0, $zero, . + 4 + (0x30B << 2)
    ctx->pc = 0x16F368u;
    {
        const bool branch_taken_0x16f368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f368) {
            ctx->pc = 0x16F36Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16F368u;
            // 0x16f36c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16FF98u;
            goto label_16ff98;
        }
    }
    ctx->pc = 0x16F370u;
    // 0x16f370: 0x8fa40154  lw          $a0, 0x154($sp)
    ctx->pc = 0x16f370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x16f374: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16f374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16f378: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x16f378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16f37c: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x16f37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x16f380: 0x100002c0  b           . + 4 + (0x2C0 << 2)
    ctx->pc = 0x16F380u;
    {
        const bool branch_taken_0x16f380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F380u;
            // 0x16f384: 0xa0430100  sb          $v1, 0x100($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 256), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f380) {
            ctx->pc = 0x16FE84u;
            goto label_16fe84;
        }
    }
    ctx->pc = 0x16F388u;
label_16f388:
    // 0x16f388: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16f388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16f38c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16f38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f390: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x16f390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x16f394: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16f394u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16f398: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16f398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16f39c: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x16f39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x16f3a0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x16f3a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f3a4: 0xc05c04c  jal         func_170130
    ctx->pc = 0x16F3A4u;
    SET_GPR_U32(ctx, 31, 0x16F3ACu);
    ctx->pc = 0x16F3A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F3A4u;
            // 0x16f3a8: 0xafa20154  sw          $v0, 0x154($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x170130u;
    if (runtime->hasFunction(0x170130u)) {
        auto targetFn = runtime->lookupFunction(0x170130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F3ACu; }
        if (ctx->pc != 0x16F3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00170130_0x170130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F3ACu; }
        if (ctx->pc != 0x16F3ACu) { return; }
    }
    ctx->pc = 0x16F3ACu;
    // 0x16f3ac: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16f3acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f3b0: 0x100002f9  b           . + 4 + (0x2F9 << 2)
    ctx->pc = 0x16F3B0u;
    {
        const bool branch_taken_0x16f3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F3B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F3B0u;
            // 0x16f3b4: 0x62900b  movn        $s2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f3b0) {
            ctx->pc = 0x16FF98u;
            goto label_16ff98;
        }
    }
    ctx->pc = 0x16F3B8u;
label_16f3b8:
    // 0x16f3b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16f3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f3bc: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x16f3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x16f3c0: 0x27a60154  addiu       $a2, $sp, 0x154
    ctx->pc = 0x16f3c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
    // 0x16f3c4: 0xc05c07a  jal         func_1701E8
    ctx->pc = 0x16F3C4u;
    SET_GPR_U32(ctx, 31, 0x16F3CCu);
    ctx->pc = 0x16F3C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F3C4u;
            // 0x16f3c8: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1701E8u;
    if (runtime->hasFunction(0x1701E8u)) {
        auto targetFn = runtime->lookupFunction(0x1701E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F3CCu; }
        if (ctx->pc != 0x16F3CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001701E8_0x1701e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F3CCu; }
        if (ctx->pc != 0x16F3CCu) { return; }
    }
    ctx->pc = 0x16F3CCu;
    // 0x16f3cc: 0x544002f2  bnel        $v0, $zero, . + 4 + (0x2F2 << 2)
    ctx->pc = 0x16F3CCu;
    {
        const bool branch_taken_0x16f3cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f3cc) {
            ctx->pc = 0x16F3D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16F3CCu;
            // 0x16f3d0: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16FF98u;
            goto label_16ff98;
        }
    }
    ctx->pc = 0x16F3D4u;
    // 0x16f3d4: 0xc7a00154  lwc1        $f0, 0x154($sp)
    ctx->pc = 0x16f3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f3d8: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16f3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16f3dc: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x16f3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x16f3e0: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x16f3e0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x16f3e4: 0xa0400100  sb          $zero, 0x100($v0)
    ctx->pc = 0x16f3e4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 256), (uint8_t)GPR_U32(ctx, 0));
    // 0x16f3e8: 0x100002a6  b           . + 4 + (0x2A6 << 2)
    ctx->pc = 0x16F3E8u;
    {
        const bool branch_taken_0x16f3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F3E8u;
            // 0x16f3ec: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f3e8) {
            ctx->pc = 0x16FE84u;
            goto label_16fe84;
        }
    }
    ctx->pc = 0x16F3F0u;
label_16f3f0:
    // 0x16f3f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16f3f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f3f4: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x16f3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x16f3f8: 0x27a60154  addiu       $a2, $sp, 0x154
    ctx->pc = 0x16f3f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
    // 0x16f3fc: 0xc05c07a  jal         func_1701E8
    ctx->pc = 0x16F3FCu;
    SET_GPR_U32(ctx, 31, 0x16F404u);
    ctx->pc = 0x16F400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F3FCu;
            // 0x16f400: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1701E8u;
    if (runtime->hasFunction(0x1701E8u)) {
        auto targetFn = runtime->lookupFunction(0x1701E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F404u; }
        if (ctx->pc != 0x16F404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001701E8_0x1701e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F404u; }
        if (ctx->pc != 0x16F404u) { return; }
    }
    ctx->pc = 0x16F404u;
    // 0x16f404: 0x544002e4  bnel        $v0, $zero, . + 4 + (0x2E4 << 2)
    ctx->pc = 0x16F404u;
    {
        const bool branch_taken_0x16f404 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f404) {
            ctx->pc = 0x16F408u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16F404u;
            // 0x16f408: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16FF98u;
            goto label_16ff98;
        }
    }
    ctx->pc = 0x16F40Cu;
    // 0x16f40c: 0x8fa40154  lw          $a0, 0x154($sp)
    ctx->pc = 0x16f40cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x16f410: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16f410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16f414: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16f414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f418: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x16f418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x16f41c: 0x10000299  b           . + 4 + (0x299 << 2)
    ctx->pc = 0x16F41Cu;
    {
        const bool branch_taken_0x16f41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F41Cu;
            // 0x16f420: 0xa0430100  sb          $v1, 0x100($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 256), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f41c) {
            ctx->pc = 0x16FE84u;
            goto label_16fe84;
        }
    }
    ctx->pc = 0x16F424u;
    // 0x16f424: 0x0  nop
    ctx->pc = 0x16f424u;
    // NOP
label_16f428:
    // 0x16f428: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16f428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f42c: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x16f42cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x16f430: 0x27a60154  addiu       $a2, $sp, 0x154
    ctx->pc = 0x16f430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
    // 0x16f434: 0xc05c07a  jal         func_1701E8
    ctx->pc = 0x16F434u;
    SET_GPR_U32(ctx, 31, 0x16F43Cu);
    ctx->pc = 0x16F438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F434u;
            // 0x16f438: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1701E8u;
    if (runtime->hasFunction(0x1701E8u)) {
        auto targetFn = runtime->lookupFunction(0x1701E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F43Cu; }
        if (ctx->pc != 0x16F43Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001701E8_0x1701e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F43Cu; }
        if (ctx->pc != 0x16F43Cu) { return; }
    }
    ctx->pc = 0x16F43Cu;
    // 0x16f43c: 0x544002d6  bnel        $v0, $zero, . + 4 + (0x2D6 << 2)
    ctx->pc = 0x16F43Cu;
    {
        const bool branch_taken_0x16f43c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f43c) {
            ctx->pc = 0x16F440u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16F43Cu;
            // 0x16f440: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16FF98u;
            goto label_16ff98;
        }
    }
    ctx->pc = 0x16F444u;
    // 0x16f444: 0x8fa40154  lw          $a0, 0x154($sp)
    ctx->pc = 0x16f444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x16f448: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16f448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16f44c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16f44cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16f450: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x16f450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x16f454: 0x1000028b  b           . + 4 + (0x28B << 2)
    ctx->pc = 0x16F454u;
    {
        const bool branch_taken_0x16f454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F454u;
            // 0x16f458: 0xa0430100  sb          $v1, 0x100($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 256), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f454) {
            ctx->pc = 0x16FE84u;
            goto label_16fe84;
        }
    }
    ctx->pc = 0x16F45Cu;
    // 0x16f45c: 0x0  nop
    ctx->pc = 0x16f45cu;
    // NOP
label_16f460:
    // 0x16f460: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16f460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f464: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x16f464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x16f468: 0x27a60154  addiu       $a2, $sp, 0x154
    ctx->pc = 0x16f468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
    // 0x16f46c: 0xc05c07a  jal         func_1701E8
    ctx->pc = 0x16F46Cu;
    SET_GPR_U32(ctx, 31, 0x16F474u);
    ctx->pc = 0x16F470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F46Cu;
            // 0x16f470: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1701E8u;
    if (runtime->hasFunction(0x1701E8u)) {
        auto targetFn = runtime->lookupFunction(0x1701E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F474u; }
        if (ctx->pc != 0x16F474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001701E8_0x1701e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F474u; }
        if (ctx->pc != 0x16F474u) { return; }
    }
    ctx->pc = 0x16F474u;
    // 0x16f474: 0x544002c8  bnel        $v0, $zero, . + 4 + (0x2C8 << 2)
    ctx->pc = 0x16F474u;
    {
        const bool branch_taken_0x16f474 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16f474) {
            ctx->pc = 0x16F478u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16F474u;
            // 0x16f478: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16FF98u;
            goto label_16ff98;
        }
    }
    ctx->pc = 0x16F47Cu;
    // 0x16f47c: 0x8fa40154  lw          $a0, 0x154($sp)
    ctx->pc = 0x16f47cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x16f480: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16f480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16f484: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x16f484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16f488: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x16f488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x16f48c: 0x1000027d  b           . + 4 + (0x27D << 2)
    ctx->pc = 0x16F48Cu;
    {
        const bool branch_taken_0x16f48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F48Cu;
            // 0x16f490: 0xa0430100  sb          $v1, 0x100($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 256), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f48c) {
            ctx->pc = 0x16FE84u;
            goto label_16fe84;
        }
    }
    ctx->pc = 0x16F494u;
    // 0x16f494: 0x0  nop
    ctx->pc = 0x16f494u;
    // NOP
label_16f498:
    // 0x16f498: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x16f498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x16f49c: 0x88620003  lwl         $v0, 0x3($v1)
    ctx->pc = 0x16f49cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x16f4a0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x16f4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x16f4a4: 0x98620000  lwr         $v0, 0x0($v1)
    ctx->pc = 0x16f4a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x16f4a8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16f4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16f4ac: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x16f4acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x16f4b0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x16f4b0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x16f4b4: 0xafa30150  sw          $v1, 0x150($sp)
    ctx->pc = 0x16f4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 3));
    // 0x16f4b8: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x16f4b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16f4bc: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16f4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16f4c0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x16f4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x16f4c4: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x16f4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x16f4c8: 0x1000026e  b           . + 4 + (0x26E << 2)
    ctx->pc = 0x16F4C8u;
    {
        const bool branch_taken_0x16f4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F4CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F4C8u;
            // 0x16f4cc: 0xa0430100  sb          $v1, 0x100($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 256), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f4c8) {
            ctx->pc = 0x16FE84u;
            goto label_16fe84;
        }
    }
    ctx->pc = 0x16F4D0u;
label_16f4d0:
    // 0x16f4d0: 0x8fa20150  lw          $v0, 0x150($sp)
    ctx->pc = 0x16f4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x16f4d4: 0x88430003  lwl         $v1, 0x3($v0)
    ctx->pc = 0x16f4d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x16f4d8: 0x98430000  lwr         $v1, 0x0($v0)
    ctx->pc = 0x16f4d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x16f4dc: 0x24440002  addiu       $a0, $v0, 0x2
    ctx->pc = 0x16f4dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x16f4e0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x16f4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x16f4e4: 0xafa40150  sw          $a0, 0x150($sp)
    ctx->pc = 0x16f4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 4));
    // 0x16f4e8: 0x32c03  sra         $a1, $v1, 16
    ctx->pc = 0x16f4e8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 16));
    // 0x16f4ec: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16f4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16f4f0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x16f4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x16f4f4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x16f4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16f4f8: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x16f4f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
    // 0x16f4fc: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x16f4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x16f500: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16f500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16f504: 0x144002a4  bnez        $v0, . + 4 + (0x2A4 << 2)
    ctx->pc = 0x16F504u;
    {
        const bool branch_taken_0x16f504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16F508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F504u;
            // 0x16f508: 0x851021  addu        $v0, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f504) {
            ctx->pc = 0x16FF98u;
            goto label_16ff98;
        }
    }
    ctx->pc = 0x16F50Cu;
    // 0x16f50c: 0x100002a2  b           . + 4 + (0x2A2 << 2)
    ctx->pc = 0x16F50Cu;
    {
        const bool branch_taken_0x16f50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F50Cu;
            // 0x16f510: 0xafa20150  sw          $v0, 0x150($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f50c) {
            ctx->pc = 0x16FF98u;
            goto label_16ff98;
        }
    }
    ctx->pc = 0x16F514u;
    // 0x16f514: 0x0  nop
    ctx->pc = 0x16f514u;
    // NOP
label_16f518:
    // 0x16f518: 0x8fa30150  lw          $v1, 0x150($sp)
    ctx->pc = 0x16f518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x16f51c: 0x88620003  lwl         $v0, 0x3($v1)
    ctx->pc = 0x16f51cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x16f520: 0x98620000  lwr         $v0, 0x0($v1)
    ctx->pc = 0x16f520u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x16f524: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x16f524u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x16f528: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x16f528u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x16f52c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x16f52cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x16f530: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16f530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16f534: 0x10000298  b           . + 4 + (0x298 << 2)
    ctx->pc = 0x16F534u;
    {
        const bool branch_taken_0x16f534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F534u;
            // 0x16f538: 0xafa30150  sw          $v1, 0x150($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f534) {
            ctx->pc = 0x16FF98u;
            goto label_16ff98;
        }
    }
    ctx->pc = 0x16F53Cu;
label_16f53c:
    // 0x16f53c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16f53cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f540: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16f540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16f544: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16f544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16f548: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x16f548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x16f54c: 0x1000024d  b           . + 4 + (0x24D << 2)
    ctx->pc = 0x16F54Cu;
    {
        const bool branch_taken_0x16f54c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F54Cu;
            // 0x16f550: 0xa0430100  sb          $v1, 0x100($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 256), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f54c) {
            ctx->pc = 0x16FE84u;
            goto label_16fe84;
        }
    }
    ctx->pc = 0x16F554u;
    // 0x16f554: 0x0  nop
    ctx->pc = 0x16f554u;
    // NOP
label_16f558:
    // 0x16f558: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16f558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16f55c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16f55cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16f560: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x16f560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x16f564: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x16F564u;
    {
        const bool branch_taken_0x16f564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F564u;
            // 0x16f568: 0xa0430100  sb          $v1, 0x100($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 256), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f564) {
            ctx->pc = 0x16F844u;
            goto label_16f844;
        }
    }
    ctx->pc = 0x16F56Cu;
    // 0x16f56c: 0x0  nop
    ctx->pc = 0x16f56cu;
    // NOP
label_16f570:
    // 0x16f570: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x16f570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16f574: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x16f574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16f578: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x16f578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x16f57c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16f57cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16f580: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16f580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16f584: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16f584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16f588: 0x42023  negu        $a0, $a0
    ctx->pc = 0x16f588u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
    // 0x16f58c: 0x3a31821  addu        $v1, $sp, $v1
    ctx->pc = 0x16f58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x16f590: 0x1000023b  b           . + 4 + (0x23B << 2)
    ctx->pc = 0x16F590u;
    {
        const bool branch_taken_0x16f590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F590u;
            // 0x16f594: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f590) {
            ctx->pc = 0x16FE80u;
            goto label_16fe80;
        }
    }
    ctx->pc = 0x16F598u;
label_16f598:
    // 0x16f598: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x16f598u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16f59c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x16f59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16f5a0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16f5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16f5a4: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x16f5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x16f5a8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16f5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16f5ac: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x16f5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f5b0: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x16f5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x16f5b4: 0xa0400100  sb          $zero, 0x100($v0)
    ctx->pc = 0x16f5b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 256), (uint8_t)GPR_U32(ctx, 0));
    // 0x16f5b8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x16f5b8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x16f5bc: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x16f5bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x16f5c0: 0x10000231  b           . + 4 + (0x231 << 2)
    ctx->pc = 0x16F5C0u;
    {
        const bool branch_taken_0x16f5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F5C0u;
            // 0x16f5c4: 0x8fa20140  lw          $v0, 0x140($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f5c0) {
            ctx->pc = 0x16FE88u;
            goto label_16fe88;
        }
    }
    ctx->pc = 0x16F5C8u;
label_16f5c8:
    // 0x16f5c8: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x16f5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16f5cc: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x16f5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x16f5d0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16f5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16f5d4: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x16f5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x16f5d8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16f5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16f5dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16f5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16f5e0: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x16f5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x16f5e4: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x16f5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
    // 0x16f5e8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x16f5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16f5ec: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16f5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16f5f0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x16f5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16f5f4: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x16f5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x16f5f8: 0x3a41821  addu        $v1, $sp, $a0
    ctx->pc = 0x16f5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x16f5fc: 0x100001a8  b           . + 4 + (0x1A8 << 2)
    ctx->pc = 0x16F5FCu;
    {
        const bool branch_taken_0x16f5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F5FCu;
            // 0x16f600: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f5fc) {
            ctx->pc = 0x16FCA0u;
            goto label_16fca0;
        }
    }
    ctx->pc = 0x16F604u;
    // 0x16f604: 0x0  nop
    ctx->pc = 0x16f604u;
    // NOP
label_16f608:
    // 0x16f608: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x16f608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16f60c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x16f60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16f610: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16f610u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16f614: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16f614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16f618: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x16f618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16f61c: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x16f61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x16f620: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16f620u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16f624: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x16f624u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x16f628: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16f628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16f62c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x16f62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f630: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x16f630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x16f634: 0xa0400100  sb          $zero, 0x100($v0)
    ctx->pc = 0x16f634u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 256), (uint8_t)GPR_U32(ctx, 0));
    // 0x16f638: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16f638u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x16f63c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x16f63cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x16f640: 0x10000211  b           . + 4 + (0x211 << 2)
    ctx->pc = 0x16F640u;
    {
        const bool branch_taken_0x16f640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F640u;
            // 0x16f644: 0x8fa20140  lw          $v0, 0x140($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f640) {
            ctx->pc = 0x16FE88u;
            goto label_16fe88;
        }
    }
    ctx->pc = 0x16F648u;
label_16f648:
    // 0x16f648: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x16f648u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16f64c: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x16f64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x16f650: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16f650u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16f654: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x16f654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x16f658: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16f658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16f65c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16f65cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16f660: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x16f660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x16f664: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x16f664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
    // 0x16f668: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x16f668u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16f66c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16f66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16f670: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x16f670u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16f674: 0xa32823  subu        $a1, $a1, $v1
    ctx->pc = 0x16f674u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x16f678: 0x3a41821  addu        $v1, $sp, $a0
    ctx->pc = 0x16f678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x16f67c: 0x10000188  b           . + 4 + (0x188 << 2)
    ctx->pc = 0x16F67Cu;
    {
        const bool branch_taken_0x16f67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F67Cu;
            // 0x16f680: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f67c) {
            ctx->pc = 0x16FCA0u;
            goto label_16fca0;
        }
    }
    ctx->pc = 0x16F684u;
    // 0x16f684: 0x0  nop
    ctx->pc = 0x16f684u;
    // NOP
label_16f688:
    // 0x16f688: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x16f688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16f68c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x16f68cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16f690: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16f690u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16f694: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16f694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16f698: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x16f698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16f69c: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x16f69cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x16f6a0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16f6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16f6a4: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x16f6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x16f6a8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16f6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16f6ac: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x16f6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f6b0: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x16f6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x16f6b4: 0xa0400100  sb          $zero, 0x100($v0)
    ctx->pc = 0x16f6b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 256), (uint8_t)GPR_U32(ctx, 0));
    // 0x16f6b8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x16f6b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x16f6bc: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x16f6bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x16f6c0: 0x100001f1  b           . + 4 + (0x1F1 << 2)
    ctx->pc = 0x16F6C0u;
    {
        const bool branch_taken_0x16f6c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F6C0u;
            // 0x16f6c4: 0x8fa20140  lw          $v0, 0x140($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f6c0) {
            ctx->pc = 0x16FE88u;
            goto label_16fe88;
        }
    }
    ctx->pc = 0x16F6C8u;
label_16f6c8:
    // 0x16f6c8: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x16f6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16f6cc: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x16f6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x16f6d0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16f6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16f6d4: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x16f6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x16f6d8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16f6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16f6dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16f6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16f6e0: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x16f6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x16f6e4: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x16f6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
    // 0x16f6e8: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x16f6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16f6ec: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16f6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16f6f0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x16f6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16f6f4: 0xa32818  mult        $a1, $a1, $v1
    ctx->pc = 0x16f6f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x16f6f8: 0x3a41821  addu        $v1, $sp, $a0
    ctx->pc = 0x16f6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x16f6fc: 0x10000168  b           . + 4 + (0x168 << 2)
    ctx->pc = 0x16F6FCu;
    {
        const bool branch_taken_0x16f6fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F6FCu;
            // 0x16f700: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f6fc) {
            ctx->pc = 0x16FCA0u;
            goto label_16fca0;
        }
    }
    ctx->pc = 0x16F704u;
    // 0x16f704: 0x0  nop
    ctx->pc = 0x16f704u;
    // NOP
label_16f708:
    // 0x16f708: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x16f708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16f70c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x16f70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16f710: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16f710u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16f714: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16f714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16f718: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x16f718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16f71c: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x16f71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x16f720: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16f720u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16f724: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x16f724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x16f728: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16f728u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16f72c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x16f72cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f730: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x16f730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x16f734: 0xa0400100  sb          $zero, 0x100($v0)
    ctx->pc = 0x16f734u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 256), (uint8_t)GPR_U32(ctx, 0));
    // 0x16f738: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x16f738u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x16f73c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x16f73cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x16f740: 0x100001d1  b           . + 4 + (0x1D1 << 2)
    ctx->pc = 0x16F740u;
    {
        const bool branch_taken_0x16f740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F740u;
            // 0x16f744: 0x8fa20140  lw          $v0, 0x140($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f740) {
            ctx->pc = 0x16FE88u;
            goto label_16fe88;
        }
    }
    ctx->pc = 0x16F748u;
label_16f748:
    // 0x16f748: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x16f748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16f74c: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x16f74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x16f750: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16f750u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16f754: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x16f754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x16f758: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16f758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16f75c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16f75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16f760: 0x2485fffe  addiu       $a1, $a0, -0x2
    ctx->pc = 0x16f760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x16f764: 0xafa50140  sw          $a1, 0x140($sp)
    ctx->pc = 0x16f764u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 5));
    // 0x16f768: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x16f768u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x16f76c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16f76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16f770: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x16F770u;
    {
        const bool branch_taken_0x16f770 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F770u;
            // 0x16f774: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f770) {
            ctx->pc = 0x16F838u;
            goto label_16f838;
        }
    }
    ctx->pc = 0x16F778u;
    // 0x16f778: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x16f778u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x16f77c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x16F77Cu;
    {
        const bool branch_taken_0x16f77c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f77c) {
            ctx->pc = 0x16F780u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16F77Cu;
            // 0x16f780: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x16F784u;
            goto label_16f784;
        }
    }
    ctx->pc = 0x16F784u;
label_16f784:
    // 0x16f784: 0x2012  mflo        $a0
    ctx->pc = 0x16f784u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x16f788: 0x3a51821  addu        $v1, $sp, $a1
    ctx->pc = 0x16f788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    // 0x16f78c: 0x100001bc  b           . + 4 + (0x1BC << 2)
    ctx->pc = 0x16F78Cu;
    {
        const bool branch_taken_0x16f78c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F78Cu;
            // 0x16f790: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f78c) {
            ctx->pc = 0x16FE80u;
            goto label_16fe80;
        }
    }
    ctx->pc = 0x16F794u;
    // 0x16f794: 0x0  nop
    ctx->pc = 0x16f794u;
    // NOP
label_16f798:
    // 0x16f798: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16f798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16f79c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x16f79cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x16f7a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16f7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16f7a4: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x16f7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x16f7a8: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x16f7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16f7ac: 0x2443fffe  addiu       $v1, $v0, -0x2
    ctx->pc = 0x16f7acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x16f7b0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x16f7b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x16f7b4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16f7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16f7b8: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x16f7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x16f7bc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16f7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16f7c0: 0x46020832  c.eq.s      $f1, $f2
    ctx->pc = 0x16f7c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16f7c4: 0x0  nop
    ctx->pc = 0x16f7c4u;
    // NOP
    // 0x16f7c8: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x16F7C8u;
    {
        const bool branch_taken_0x16f7c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16F7CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F7C8u;
            // 0x16f7cc: 0xc4400000  lwc1        $f0, 0x0($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f7c8) {
            ctx->pc = 0x16F7E8u;
            goto label_16f7e8;
        }
    }
    ctx->pc = 0x16F7D0u;
    // 0x16f7d0: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x16f7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x16f7d4: 0xa0400100  sb          $zero, 0x100($v0)
    ctx->pc = 0x16f7d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 256), (uint8_t)GPR_U32(ctx, 0));
    // 0x16f7d8: 0x44031000  mfc1        $v1, $f2
    ctx->pc = 0x16f7d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x16f7dc: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16f7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16f7e0: 0x100001a9  b           . + 4 + (0x1A9 << 2)
    ctx->pc = 0x16F7E0u;
    {
        const bool branch_taken_0x16f7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F7E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F7E0u;
            // 0x16f7e4: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f7e0) {
            ctx->pc = 0x16FE88u;
            goto label_16fe88;
        }
    }
    ctx->pc = 0x16F7E8u;
label_16f7e8:
    // 0x16f7e8: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x16f7e8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x16f7ec: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x16f7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x16f7f0: 0xa0400100  sb          $zero, 0x100($v0)
    ctx->pc = 0x16f7f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 256), (uint8_t)GPR_U32(ctx, 0));
    // 0x16f7f4: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16f7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16f7f8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x16f7f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x16f7fc: 0x100001a3  b           . + 4 + (0x1A3 << 2)
    ctx->pc = 0x16F7FCu;
    {
        const bool branch_taken_0x16f7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F7FCu;
            // 0x16f800: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f7fc) {
            ctx->pc = 0x16FE8Cu;
            goto label_16fe8c;
        }
    }
    ctx->pc = 0x16F804u;
    // 0x16f804: 0x0  nop
    ctx->pc = 0x16f804u;
    // NOP
label_16f808:
    // 0x16f808: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x16f808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16f80c: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x16f80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x16f810: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16f810u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16f814: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x16f814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x16f818: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16f818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16f81c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16f81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16f820: 0x2485fffe  addiu       $a1, $a0, -0x2
    ctx->pc = 0x16f820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x16f824: 0xafa50140  sw          $a1, 0x140($sp)
    ctx->pc = 0x16f824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 5));
    // 0x16f828: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x16f828u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x16f82c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16f82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16f830: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x16F830u;
    {
        const bool branch_taken_0x16f830 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16F834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F830u;
            // 0x16f834: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f830) {
            ctx->pc = 0x16F860u;
            goto label_16f860;
        }
    }
    ctx->pc = 0x16F838u;
label_16f838:
    // 0x16f838: 0x3a51821  addu        $v1, $sp, $a1
    ctx->pc = 0x16f838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    // 0x16f83c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16f83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f840: 0xa0620100  sb          $v0, 0x100($v1)
    ctx->pc = 0x16f840u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 256), (uint8_t)GPR_U32(ctx, 2));
label_16f844:
    // 0x16f844: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16f844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16f848: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x16f848u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16f84c: 0x3a31821  addu        $v1, $sp, $v1
    ctx->pc = 0x16f84cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x16f850: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16f850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16f854: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x16f854u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x16f858: 0x100001cf  b           . + 4 + (0x1CF << 2)
    ctx->pc = 0x16F858u;
    {
        const bool branch_taken_0x16f858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F858u;
            // 0x16f85c: 0xafa20140  sw          $v0, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f858) {
            ctx->pc = 0x16FF98u;
            goto label_16ff98;
        }
    }
    ctx->pc = 0x16F860u;
label_16f860:
    // 0x16f860: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x16f860u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x16f864: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x16F864u;
    {
        const bool branch_taken_0x16f864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f864) {
            ctx->pc = 0x16F868u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16F864u;
            // 0x16f868: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x16F86Cu;
            goto label_16f86c;
        }
    }
    ctx->pc = 0x16F86Cu;
label_16f86c:
    // 0x16f86c: 0x2010  mfhi        $a0
    ctx->pc = 0x16f86cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x16f870: 0x3a51821  addu        $v1, $sp, $a1
    ctx->pc = 0x16f870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
    // 0x16f874: 0x10000182  b           . + 4 + (0x182 << 2)
    ctx->pc = 0x16F874u;
    {
        const bool branch_taken_0x16f874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F874u;
            // 0x16f878: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f874) {
            ctx->pc = 0x16FE80u;
            goto label_16fe80;
        }
    }
    ctx->pc = 0x16F87Cu;
    // 0x16f87c: 0x0  nop
    ctx->pc = 0x16f87cu;
    // NOP
label_16f880:
    // 0x16f880: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16f880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16f884: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16f884u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16f888: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x16f888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x16f88c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x16f88cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16f890: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x16f890u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
    // 0x16f894: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x16f894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
    // 0x16f898: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16f898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16f89c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16F89Cu;
    {
        const bool branch_taken_0x16f89c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F8A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F89Cu;
            // 0x16f8a0: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f89c) {
            ctx->pc = 0x16F8B0u;
            goto label_16f8b0;
        }
    }
    ctx->pc = 0x16F8A4u;
    // 0x16f8a4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x16f8a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x16f8a8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x16f8a8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16f8ac: 0x0  nop
    ctx->pc = 0x16f8acu;
    // NOP
label_16f8b0:
    // 0x16f8b0: 0x8ca20140  lw          $v0, 0x140($a1)
    ctx->pc = 0x16f8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 320)));
    // 0x16f8b4: 0x44030000  mfc1        $v1, $f0
    ctx->pc = 0x16f8b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x16f8b8: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x16f8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x16f8bc: 0xa0400100  sb          $zero, 0x100($v0)
    ctx->pc = 0x16f8bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 256), (uint8_t)GPR_U32(ctx, 0));
    // 0x16f8c0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x16f8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16f8c4: 0x8ca30140  lw          $v1, 0x140($a1)
    ctx->pc = 0x16f8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 320)));
    // 0x16f8c8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16f8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16f8cc: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x16f8ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x16f8d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16f8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16f8d4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x16f8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x16f8d8: 0x100001af  b           . + 4 + (0x1AF << 2)
    ctx->pc = 0x16F8D8u;
    {
        const bool branch_taken_0x16f8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F8DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F8D8u;
            // 0x16f8dc: 0xaca30140  sw          $v1, 0x140($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 320), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f8d8) {
            ctx->pc = 0x16FF98u;
            goto label_16ff98;
        }
    }
    ctx->pc = 0x16F8E0u;
label_16f8e0:
    // 0x16f8e0: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x16f8e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16f8e4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x16f8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16f8e8: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x16f8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x16f8ec: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16f8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16f8f0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16f8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16f8f4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16f8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16f8f8: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x16f8f8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x16f8fc: 0x3a31821  addu        $v1, $sp, $v1
    ctx->pc = 0x16f8fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x16f900: 0x1000015f  b           . + 4 + (0x15F << 2)
    ctx->pc = 0x16F900u;
    {
        const bool branch_taken_0x16f900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F900u;
            // 0x16f904: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f900) {
            ctx->pc = 0x16FE80u;
            goto label_16fe80;
        }
    }
    ctx->pc = 0x16F908u;
label_16f908:
    // 0x16f908: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16f908u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16f90c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x16f90cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16f910: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x16f910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x16f914: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16f914u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16f918: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x16f918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x16f91c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16f91cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16f920: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x16f920u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f924: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x16f924u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16f928: 0x0  nop
    ctx->pc = 0x16f928u;
    // NOP
    // 0x16f92c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x16F92Cu;
    {
        const bool branch_taken_0x16f92c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16F930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F92Cu;
            // 0x16f930: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f92c) {
            ctx->pc = 0x16F938u;
            goto label_16f938;
        }
    }
    ctx->pc = 0x16F934u;
    // 0x16f934: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16f934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16f938:
    // 0x16f938: 0x10000150  b           . + 4 + (0x150 << 2)
    ctx->pc = 0x16F938u;
    {
        const bool branch_taken_0x16f938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F93Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F938u;
            // 0x16f93c: 0x3a31821  addu        $v1, $sp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f938) {
            ctx->pc = 0x16FE7Cu;
            goto label_16fe7c;
        }
    }
    ctx->pc = 0x16F940u;
label_16f940:
    // 0x16f940: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x16f940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16f944: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x16f944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16f948: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16f948u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16f94c: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x16f94cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x16f950: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16f950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16f954: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x16f954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f958: 0x3a31821  addu        $v1, $sp, $v1
    ctx->pc = 0x16f958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x16f95c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16f95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16f960: 0xa0620100  sb          $v0, 0x100($v1)
    ctx->pc = 0x16f960u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 256), (uint8_t)GPR_U32(ctx, 2));
    // 0x16f964: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16f964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16f968: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x16f968u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16f96c: 0x3a31821  addu        $v1, $sp, $v1
    ctx->pc = 0x16f96cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x16f970: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16f970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16f974: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16f974u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x16f978: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x16f978u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x16f97c: 0x10000186  b           . + 4 + (0x186 << 2)
    ctx->pc = 0x16F97Cu;
    {
        const bool branch_taken_0x16f97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F97Cu;
            // 0x16f980: 0xafa20140  sw          $v0, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f97c) {
            ctx->pc = 0x16FF98u;
            goto label_16ff98;
        }
    }
    ctx->pc = 0x16F984u;
    // 0x16f984: 0x0  nop
    ctx->pc = 0x16f984u;
    // NOP
label_16f988:
    // 0x16f988: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x16f988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16f98c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x16f98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16f990: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x16f990u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x16f994: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16f994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16f998: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16f998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16f99c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16f99cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16f9a0: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x16f9a0u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x16f9a4: 0x10000135  b           . + 4 + (0x135 << 2)
    ctx->pc = 0x16F9A4u;
    {
        const bool branch_taken_0x16f9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F9A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F9A4u;
            // 0x16f9a8: 0x3a31821  addu        $v1, $sp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f9a4) {
            ctx->pc = 0x16FE7Cu;
            goto label_16fe7c;
        }
    }
    ctx->pc = 0x16F9ACu;
    // 0x16f9ac: 0x0  nop
    ctx->pc = 0x16f9acu;
    // NOP
label_16f9b0:
    // 0x16f9b0: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x16f9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16f9b4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x16f9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16f9b8: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x16f9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x16f9bc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16f9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16f9c0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16f9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16f9c4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x16f9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16f9c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16f9c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16f9cc: 0x3a31021  addu        $v0, $sp, $v1
    ctx->pc = 0x16f9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x16f9d0: 0xa0400100  sb          $zero, 0x100($v0)
    ctx->pc = 0x16f9d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 256), (uint8_t)GPR_U32(ctx, 0));
    // 0x16f9d4: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x16f9d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x16f9d8: 0x1000012a  b           . + 4 + (0x12A << 2)
    ctx->pc = 0x16F9D8u;
    {
        const bool branch_taken_0x16f9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F9DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F9D8u;
            // 0x16f9dc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f9d8) {
            ctx->pc = 0x16FE84u;
            goto label_16fe84;
        }
    }
    ctx->pc = 0x16F9E0u;
label_16f9e0:
    // 0x16f9e0: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x16f9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16f9e4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x16f9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16f9e8: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x16f9e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x16f9ec: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16f9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16f9f0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16f9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16f9f4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16f9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16f9f8: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x16f9f8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x16f9fc: 0x1000011f  b           . + 4 + (0x11F << 2)
    ctx->pc = 0x16F9FCu;
    {
        const bool branch_taken_0x16f9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FA00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F9FCu;
            // 0x16fa00: 0x3a31821  addu        $v1, $sp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f9fc) {
            ctx->pc = 0x16FE7Cu;
            goto label_16fe7c;
        }
    }
    ctx->pc = 0x16FA04u;
    // 0x16fa04: 0x0  nop
    ctx->pc = 0x16fa04u;
    // NOP
label_16fa08:
    // 0x16fa08: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x16fa08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16fa0c: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x16fa0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x16fa10: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16fa10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16fa14: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x16fa14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x16fa18: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16fa18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16fa1c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16fa1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16fa20: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x16fa20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x16fa24: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x16fa24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
    // 0x16fa28: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x16fa28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16fa2c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16fa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16fa30: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16fa30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16fa34: 0x10400098  beqz        $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x16FA34u;
    {
        const bool branch_taken_0x16fa34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FA38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FA34u;
            // 0x16fa38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fa34) {
            ctx->pc = 0x16FC98u;
            goto label_16fc98;
        }
    }
    ctx->pc = 0x16FA3Cu;
    // 0x16fa3c: 0x10000096  b           . + 4 + (0x96 << 2)
    ctx->pc = 0x16FA3Cu;
    {
        const bool branch_taken_0x16fa3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FA40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FA3Cu;
            // 0x16fa40: 0x3282b  sltu        $a1, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fa3c) {
            ctx->pc = 0x16FC98u;
            goto label_16fc98;
        }
    }
    ctx->pc = 0x16FA44u;
    // 0x16fa44: 0x0  nop
    ctx->pc = 0x16fa44u;
    // NOP
label_16fa48:
    // 0x16fa48: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x16fa48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16fa4c: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x16fa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16fa50: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x16fa50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16fa54: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x16fa54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
    // 0x16fa58: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16fa58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16fa5c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x16fa5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16fa60: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x16fa60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x16fa64: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16fa64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16fa68: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x16fa68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x16fa6c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16fa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16fa70: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x16fa70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fa74: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16fa74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16fa78: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x16FA78u;
    {
        const bool branch_taken_0x16fa78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16FA7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FA78u;
            // 0x16fa7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fa78) {
            ctx->pc = 0x16FA88u;
            goto label_16fa88;
        }
    }
    ctx->pc = 0x16FA80u;
    // 0x16fa80: 0x50a00003  beql        $a1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x16FA80u;
    {
        const bool branch_taken_0x16fa80 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x16fa80) {
            ctx->pc = 0x16FA84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16FA80u;
            // 0x16fa84: 0x8c820140  lw          $v0, 0x140($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 320)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16FA90u;
            goto label_16fa90;
        }
    }
    ctx->pc = 0x16FA88u;
label_16fa88:
    // 0x16fa88: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x16fa88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16fa8c: 0x8c820140  lw          $v0, 0x140($a0)
    ctx->pc = 0x16fa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 320)));
label_16fa90:
    // 0x16fa90: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16fa90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16fa94: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x16fa94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16fa98: 0xa0430100  sb          $v1, 0x100($v0)
    ctx->pc = 0x16fa98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 256), (uint8_t)GPR_U32(ctx, 3));
    // 0x16fa9c: 0x8c830140  lw          $v1, 0x140($a0)
    ctx->pc = 0x16fa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 320)));
    // 0x16faa0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16faa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16faa4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x16faa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x16faa8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16faa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16faac: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x16faacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x16fab0: 0x10000139  b           . + 4 + (0x139 << 2)
    ctx->pc = 0x16FAB0u;
    {
        const bool branch_taken_0x16fab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FAB0u;
            // 0x16fab4: 0xac830140  sw          $v1, 0x140($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 320), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fab0) {
            ctx->pc = 0x16FF98u;
            goto label_16ff98;
        }
    }
    ctx->pc = 0x16FAB8u;
label_16fab8:
    // 0x16fab8: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x16fab8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16fabc: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x16fabcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x16fac0: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16fac0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16fac4: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x16fac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x16fac8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16fac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16facc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16faccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16fad0: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x16fad0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x16fad4: 0x24a5fffe  addiu       $a1, $a1, -0x2
    ctx->pc = 0x16fad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x16fad8: 0xafa50140  sw          $a1, 0x140($sp)
    ctx->pc = 0x16fad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 5));
    // 0x16fadc: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x16fadcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x16fae0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16fae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16fae4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16fae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16fae8: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x16fae8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x16faec: 0x100000e2  b           . + 4 + (0xE2 << 2)
    ctx->pc = 0x16FAECu;
    {
        const bool branch_taken_0x16faec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FAF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FAECu;
            // 0x16faf0: 0x832026  xor         $a0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16faec) {
            ctx->pc = 0x16FE78u;
            goto label_16fe78;
        }
    }
    ctx->pc = 0x16FAF4u;
    // 0x16faf4: 0x0  nop
    ctx->pc = 0x16faf4u;
    // NOP
label_16faf8:
    // 0x16faf8: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x16faf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16fafc: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x16fafcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x16fb00: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16fb00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16fb04: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x16fb04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x16fb08: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16fb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16fb0c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16fb0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16fb10: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x16fb10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x16fb14: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x16fb14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
    // 0x16fb18: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x16fb18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16fb1c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16fb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16fb20: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x16fb20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16fb24: 0x1000005c  b           . + 4 + (0x5C << 2)
    ctx->pc = 0x16FB24u;
    {
        const bool branch_taken_0x16fb24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FB28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FB24u;
            // 0x16fb28: 0xa3282a  slt         $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fb24) {
            ctx->pc = 0x16FC98u;
            goto label_16fc98;
        }
    }
    ctx->pc = 0x16FB2Cu;
    // 0x16fb2c: 0x0  nop
    ctx->pc = 0x16fb2cu;
    // NOP
label_16fb30:
    // 0x16fb30: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x16fb30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16fb34: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x16fb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16fb38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16fb38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16fb3c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16fb3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16fb40: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x16fb40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16fb44: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x16fb44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x16fb48: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16fb48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16fb4c: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x16fb4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x16fb50: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16fb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16fb54: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x16fb54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16fb58: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16fb58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16fb5c: 0x0  nop
    ctx->pc = 0x16fb5cu;
    // NOP
    // 0x16fb60: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x16FB60u;
    {
        const bool branch_taken_0x16fb60 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16FB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FB60u;
            // 0x16fb64: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fb60) {
            ctx->pc = 0x16FB70u;
            goto label_16fb70;
        }
    }
    ctx->pc = 0x16FB68u;
    // 0x16fb68: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16fb68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fb6c: 0x0  nop
    ctx->pc = 0x16fb6cu;
    // NOP
label_16fb70:
    // 0x16fb70: 0x100000c2  b           . + 4 + (0xC2 << 2)
    ctx->pc = 0x16FB70u;
    {
        const bool branch_taken_0x16fb70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FB74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FB70u;
            // 0x16fb74: 0x3a31821  addu        $v1, $sp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fb70) {
            ctx->pc = 0x16FE7Cu;
            goto label_16fe7c;
        }
    }
    ctx->pc = 0x16FB78u;
label_16fb78:
    // 0x16fb78: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x16fb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16fb7c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x16fb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16fb80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16fb80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16fb84: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16fb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16fb88: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x16fb88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16fb8c: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x16fb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x16fb90: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16fb90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16fb94: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x16fb94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x16fb98: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16fb98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16fb9c: 0xc0a25f1  jal         func_2897C4
    ctx->pc = 0x16FB9Cu;
    SET_GPR_U32(ctx, 31, 0x16FBA4u);
    ctx->pc = 0x16FBA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16FB9Cu;
            // 0x16fba0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2897C4u;
    if (runtime->hasFunction(0x2897C4u)) {
        auto targetFn = runtime->lookupFunction(0x2897C4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FBA4u; }
        if (ctx->pc != 0x16FBA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2897c4_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FBA4u; }
        if (ctx->pc != 0x16FBA4u) { return; }
    }
    ctx->pc = 0x16FBA4u;
    // 0x16fba4: 0x100000ca  b           . + 4 + (0xCA << 2)
    ctx->pc = 0x16FBA4u;
    {
        const bool branch_taken_0x16fba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FBA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FBA4u;
            // 0x16fba8: 0x217c2  srl         $v0, $v0, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fba4) {
            ctx->pc = 0x16FED0u;
            goto label_16fed0;
        }
    }
    ctx->pc = 0x16FBACu;
    // 0x16fbac: 0x0  nop
    ctx->pc = 0x16fbacu;
    // NOP
label_16fbb0:
    // 0x16fbb0: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x16fbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16fbb4: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x16fbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x16fbb8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16fbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16fbbc: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x16fbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x16fbc0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16fbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16fbc4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x16fbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16fbc8: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x16fbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x16fbcc: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x16fbccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
    // 0x16fbd0: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x16fbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16fbd4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16fbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16fbd8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16fbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16fbdc: 0xa2282a  slt         $a1, $a1, $v0
    ctx->pc = 0x16fbdcu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x16fbe0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x16FBE0u;
    {
        const bool branch_taken_0x16fbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FBE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FBE0u;
            // 0x16fbe4: 0x38a50001  xori        $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fbe0) {
            ctx->pc = 0x16FC98u;
            goto label_16fc98;
        }
    }
    ctx->pc = 0x16FBE8u;
label_16fbe8:
    // 0x16fbe8: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x16fbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16fbec: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x16fbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16fbf0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16fbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16fbf4: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16fbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16fbf8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x16fbf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16fbfc: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x16fbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x16fc00: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16fc00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16fc04: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x16fc04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x16fc08: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16fc08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16fc0c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x16fc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16fc10: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16fc10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16fc14: 0x0  nop
    ctx->pc = 0x16fc14u;
    // NOP
    // 0x16fc18: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x16FC18u;
    {
        const bool branch_taken_0x16fc18 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16FC1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FC18u;
            // 0x16fc1c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fc18) {
            ctx->pc = 0x16FC28u;
            goto label_16fc28;
        }
    }
    ctx->pc = 0x16FC20u;
    // 0x16fc20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16fc20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fc24: 0x0  nop
    ctx->pc = 0x16fc24u;
    // NOP
label_16fc28:
    // 0x16fc28: 0x10000094  b           . + 4 + (0x94 << 2)
    ctx->pc = 0x16FC28u;
    {
        const bool branch_taken_0x16fc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FC2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FC28u;
            // 0x16fc2c: 0x3a31821  addu        $v1, $sp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fc28) {
            ctx->pc = 0x16FE7Cu;
            goto label_16fe7c;
        }
    }
    ctx->pc = 0x16FC30u;
label_16fc30:
    // 0x16fc30: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x16fc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16fc34: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x16fc34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16fc38: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16fc38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16fc3c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16fc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16fc40: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x16fc40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16fc44: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x16fc44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x16fc48: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16fc48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16fc4c: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x16fc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x16fc50: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16fc50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16fc54: 0xc0a25f1  jal         func_2897C4
    ctx->pc = 0x16FC54u;
    SET_GPR_U32(ctx, 31, 0x16FC5Cu);
    ctx->pc = 0x16FC58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16FC54u;
            // 0x16fc58: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2897C4u;
    if (runtime->hasFunction(0x2897C4u)) {
        auto targetFn = runtime->lookupFunction(0x2897C4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FC5Cu; }
        if (ctx->pc != 0x16FC5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2897c4_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FC5Cu; }
        if (ctx->pc != 0x16FC5Cu) { return; }
    }
    ctx->pc = 0x16FC5Cu;
    // 0x16fc5c: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x16FC5Cu;
    {
        const bool branch_taken_0x16fc5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FC60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FC5Cu;
            // 0x16fc60: 0x28420001  slti        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fc5c) {
            ctx->pc = 0x16FED0u;
            goto label_16fed0;
        }
    }
    ctx->pc = 0x16FC64u;
    // 0x16fc64: 0x0  nop
    ctx->pc = 0x16fc64u;
    // NOP
label_16fc68:
    // 0x16fc68: 0x8fa40140  lw          $a0, 0x140($sp)
    ctx->pc = 0x16fc68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16fc6c: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x16fc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x16fc70: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16fc70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16fc74: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x16fc74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x16fc78: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16fc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16fc7c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x16fc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16fc80: 0x2484fffe  addiu       $a0, $a0, -0x2
    ctx->pc = 0x16fc80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
    // 0x16fc84: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x16fc84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
    // 0x16fc88: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x16fc88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x16fc8c: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16fc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16fc90: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16fc90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16fc94: 0xa2282a  slt         $a1, $a1, $v0
    ctx->pc = 0x16fc94u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_16fc98:
    // 0x16fc98: 0x3a41821  addu        $v1, $sp, $a0
    ctx->pc = 0x16fc98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x16fc9c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16fc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16fca0:
    // 0x16fca0: 0xa0620100  sb          $v0, 0x100($v1)
    ctx->pc = 0x16fca0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 256), (uint8_t)GPR_U32(ctx, 2));
    // 0x16fca4: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16fca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16fca8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x16fca8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16fcac: 0x3a31821  addu        $v1, $sp, $v1
    ctx->pc = 0x16fcacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x16fcb0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16fcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16fcb4: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x16fcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x16fcb8: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x16FCB8u;
    {
        const bool branch_taken_0x16fcb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FCBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FCB8u;
            // 0x16fcbc: 0xafa20140  sw          $v0, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fcb8) {
            ctx->pc = 0x16FF98u;
            goto label_16ff98;
        }
    }
    ctx->pc = 0x16FCC0u;
label_16fcc0:
    // 0x16fcc0: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x16fcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16fcc4: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x16fcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16fcc8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16fcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16fccc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16fcccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16fcd0: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x16fcd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16fcd4: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x16fcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x16fcd8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16fcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16fcdc: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x16fcdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x16fce0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16fce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16fce4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x16fce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16fce8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16fce8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16fcec: 0x0  nop
    ctx->pc = 0x16fcecu;
    // NOP
    // 0x16fcf0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x16FCF0u;
    {
        const bool branch_taken_0x16fcf0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16FCF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FCF0u;
            // 0x16fcf4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fcf0) {
            ctx->pc = 0x16FD00u;
            goto label_16fd00;
        }
    }
    ctx->pc = 0x16FCF8u;
    // 0x16fcf8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16fcf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fcfc: 0x0  nop
    ctx->pc = 0x16fcfcu;
    // NOP
label_16fd00:
    // 0x16fd00: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x16FD00u;
    {
        const bool branch_taken_0x16fd00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FD04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FD00u;
            // 0x16fd04: 0x3a31821  addu        $v1, $sp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fd00) {
            ctx->pc = 0x16FE7Cu;
            goto label_16fe7c;
        }
    }
    ctx->pc = 0x16FD08u;
label_16fd08:
    // 0x16fd08: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x16fd08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16fd0c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x16fd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16fd10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16fd10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16fd14: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16fd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16fd18: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x16fd18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16fd1c: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x16fd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x16fd20: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16fd20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16fd24: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x16fd24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x16fd28: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16fd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16fd2c: 0xc0a25f1  jal         func_2897C4
    ctx->pc = 0x16FD2Cu;
    SET_GPR_U32(ctx, 31, 0x16FD34u);
    ctx->pc = 0x16FD30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16FD2Cu;
            // 0x16fd30: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2897C4u;
    if (runtime->hasFunction(0x2897C4u)) {
        auto targetFn = runtime->lookupFunction(0x2897C4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FD34u; }
        if (ctx->pc != 0x16FD34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2897c4_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FD34u; }
        if (ctx->pc != 0x16FD34u) { return; }
    }
    ctx->pc = 0x16FD34u;
    // 0x16fd34: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x16FD34u;
    {
        const bool branch_taken_0x16fd34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FD38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FD34u;
            // 0x16fd38: 0x2102a  slt         $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fd34) {
            ctx->pc = 0x16FED0u;
            goto label_16fed0;
        }
    }
    ctx->pc = 0x16FD3Cu;
    // 0x16fd3c: 0x0  nop
    ctx->pc = 0x16fd3cu;
    // NOP
label_16fd40:
    // 0x16fd40: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x16fd40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16fd44: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x16fd44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x16fd48: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16fd48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16fd4c: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x16fd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x16fd50: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16fd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16fd54: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16fd54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16fd58: 0x24a5fffe  addiu       $a1, $a1, -0x2
    ctx->pc = 0x16fd58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x16fd5c: 0xafa50140  sw          $a1, 0x140($sp)
    ctx->pc = 0x16fd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 5));
    // 0x16fd60: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x16fd60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x16fd64: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16fd64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16fd68: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16fd68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16fd6c: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x16fd6cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x16fd70: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x16FD70u;
    {
        const bool branch_taken_0x16fd70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FD74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FD70u;
            // 0x16fd74: 0x38840001  xori        $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fd70) {
            ctx->pc = 0x16FE78u;
            goto label_16fe78;
        }
    }
    ctx->pc = 0x16FD78u;
label_16fd78:
    // 0x16fd78: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x16fd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16fd7c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x16fd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16fd80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16fd80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16fd84: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16fd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16fd88: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x16fd88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16fd8c: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x16fd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x16fd90: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16fd90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16fd94: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x16fd94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x16fd98: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16fd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16fd9c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x16fd9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16fda0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16fda0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16fda4: 0x0  nop
    ctx->pc = 0x16fda4u;
    // NOP
    // 0x16fda8: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x16FDA8u;
    {
        const bool branch_taken_0x16fda8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16FDACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FDA8u;
            // 0x16fdac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fda8) {
            ctx->pc = 0x16FDB8u;
            goto label_16fdb8;
        }
    }
    ctx->pc = 0x16FDB0u;
    // 0x16fdb0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16fdb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fdb4: 0x0  nop
    ctx->pc = 0x16fdb4u;
    // NOP
label_16fdb8:
    // 0x16fdb8: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x16FDB8u;
    {
        const bool branch_taken_0x16fdb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FDBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FDB8u;
            // 0x16fdbc: 0x3a31821  addu        $v1, $sp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fdb8) {
            ctx->pc = 0x16FE7Cu;
            goto label_16fe7c;
        }
    }
    ctx->pc = 0x16FDC0u;
label_16fdc0:
    // 0x16fdc0: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x16fdc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16fdc4: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x16fdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16fdc8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16fdc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16fdcc: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16fdccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16fdd0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x16fdd0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16fdd4: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x16fdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x16fdd8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16fdd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16fddc: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x16fddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x16fde0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16fde0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16fde4: 0xc0a25f1  jal         func_2897C4
    ctx->pc = 0x16FDE4u;
    SET_GPR_U32(ctx, 31, 0x16FDECu);
    ctx->pc = 0x16FDE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16FDE4u;
            // 0x16fde8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2897C4u;
    if (runtime->hasFunction(0x2897C4u)) {
        auto targetFn = runtime->lookupFunction(0x2897C4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FDECu; }
        if (ctx->pc != 0x16FDECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2897c4_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FDECu; }
        if (ctx->pc != 0x16FDECu) { return; }
    }
    ctx->pc = 0x16FDECu;
    // 0x16fdec: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x16fdecu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x16fdf0: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x16FDF0u;
    {
        const bool branch_taken_0x16fdf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FDF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FDF0u;
            // 0x16fdf4: 0x217c2  srl         $v0, $v0, 31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fdf0) {
            ctx->pc = 0x16FED0u;
            goto label_16fed0;
        }
    }
    ctx->pc = 0x16FDF8u;
label_16fdf8:
    // 0x16fdf8: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x16fdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16fdfc: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x16fdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16fe00: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16fe00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16fe04: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16fe04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16fe08: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x16fe08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16fe0c: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x16fe0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x16fe10: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16fe10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16fe14: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x16fe14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x16fe18: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16fe18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16fe1c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x16fe1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16fe20: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x16fe20u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16fe24: 0x0  nop
    ctx->pc = 0x16fe24u;
    // NOP
    // 0x16fe28: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x16FE28u;
    {
        const bool branch_taken_0x16fe28 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16FE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FE28u;
            // 0x16fe2c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fe28) {
            ctx->pc = 0x16FE38u;
            goto label_16fe38;
        }
    }
    ctx->pc = 0x16FE30u;
    // 0x16fe30: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x16fe30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16fe34: 0x0  nop
    ctx->pc = 0x16fe34u;
    // NOP
label_16fe38:
    // 0x16fe38: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x16FE38u;
    {
        const bool branch_taken_0x16fe38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FE38u;
            // 0x16fe3c: 0x3a31821  addu        $v1, $sp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fe38) {
            ctx->pc = 0x16FE7Cu;
            goto label_16fe7c;
        }
    }
    ctx->pc = 0x16FE40u;
label_16fe40:
    // 0x16fe40: 0x8fa50140  lw          $a1, 0x140($sp)
    ctx->pc = 0x16fe40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16fe44: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x16fe44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x16fe48: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16fe48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16fe4c: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x16fe4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x16fe50: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16fe50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16fe54: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16fe54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16fe58: 0x24a5fffe  addiu       $a1, $a1, -0x2
    ctx->pc = 0x16fe58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x16fe5c: 0xafa50140  sw          $a1, 0x140($sp)
    ctx->pc = 0x16fe5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 5));
    // 0x16fe60: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x16fe60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x16fe64: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16fe64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16fe68: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16fe68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16fe6c: 0x832026  xor         $a0, $a0, $v1
    ctx->pc = 0x16fe6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x16fe70: 0x2c840001  sltiu       $a0, $a0, 0x1
    ctx->pc = 0x16fe70u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x16fe74: 0x0  nop
    ctx->pc = 0x16fe74u;
    // NOP
label_16fe78:
    // 0x16fe78: 0x3a51821  addu        $v1, $sp, $a1
    ctx->pc = 0x16fe78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 5)));
label_16fe7c:
    // 0x16fe7c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16fe7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16fe80:
    // 0x16fe80: 0xa0620100  sb          $v0, 0x100($v1)
    ctx->pc = 0x16fe80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 256), (uint8_t)GPR_U32(ctx, 2));
label_16fe84:
    // 0x16fe84: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16fe84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_16fe88:
    // 0x16fe88: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x16fe88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_16fe8c:
    // 0x16fe8c: 0x3a31821  addu        $v1, $sp, $v1
    ctx->pc = 0x16fe8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x16fe90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16fe90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16fe94: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x16fe94u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x16fe98: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x16FE98u;
    {
        const bool branch_taken_0x16fe98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FE98u;
            // 0x16fe9c: 0xafa20140  sw          $v0, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fe98) {
            ctx->pc = 0x16FF98u;
            goto label_16ff98;
        }
    }
    ctx->pc = 0x16FEA0u;
label_16fea0:
    // 0x16fea0: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x16fea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16fea4: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x16fea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16fea8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16fea8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16feac: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16feacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16feb0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x16feb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16feb4: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x16feb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x16feb8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16feb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16febc: 0xafa30140  sw          $v1, 0x140($sp)
    ctx->pc = 0x16febcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
    // 0x16fec0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16fec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16fec4: 0xc0a25f1  jal         func_2897C4
    ctx->pc = 0x16FEC4u;
    SET_GPR_U32(ctx, 31, 0x16FECCu);
    ctx->pc = 0x16FEC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16FEC4u;
            // 0x16fec8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2897C4u;
    if (runtime->hasFunction(0x2897C4u)) {
        auto targetFn = runtime->lookupFunction(0x2897C4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FECCu; }
        if (ctx->pc != 0x16FECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2897c4_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16FECCu; }
        if (ctx->pc != 0x16FECCu) { return; }
    }
    ctx->pc = 0x16FECCu;
    // 0x16fecc: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x16feccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_16fed0:
    // 0x16fed0: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x16fed0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16fed4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x16fed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16fed8: 0x3a31821  addu        $v1, $sp, $v1
    ctx->pc = 0x16fed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x16fedc: 0xa0640100  sb          $a0, 0x100($v1)
    ctx->pc = 0x16fedcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 256), (uint8_t)GPR_U32(ctx, 4));
    // 0x16fee0: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x16fee0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16fee4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x16fee4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16fee8: 0x3a42021  addu        $a0, $sp, $a0
    ctx->pc = 0x16fee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 4)));
    // 0x16feec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16feecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16fef0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x16fef0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x16fef4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x16FEF4u;
    {
        const bool branch_taken_0x16fef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FEF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FEF4u;
            // 0x16fef8: 0xafa30140  sw          $v1, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fef4) {
            ctx->pc = 0x16FF98u;
            goto label_16ff98;
        }
    }
    ctx->pc = 0x16FEFCu;
label_16fefc:
    // 0x16fefc: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16fefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16ff00: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x16ff00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x16ff04: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x16ff04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x16ff08: 0x90750100  lbu         $s5, 0x100($v1)
    ctx->pc = 0x16ff08u;
    SET_GPR_U32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x16ff0c: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x16ff0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
    // 0x16ff10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16ff10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16ff14: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x16ff14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x16ff18: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x16FF18u;
    {
        const bool branch_taken_0x16ff18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FF1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FF18u;
            // 0x16ff1c: 0x8c530000  lw          $s3, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ff18) {
            ctx->pc = 0x16FF98u;
            goto label_16ff98;
        }
    }
    ctx->pc = 0x16FF20u;
label_16ff20:
    // 0x16ff20: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16ff20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16ff24: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x16ff24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x16ff28: 0x2443fffe  addiu       $v1, $v0, -0x2
    ctx->pc = 0x16ff28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x16ff2c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x16ff2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x16ff30: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16ff30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16ff34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16ff34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16ff38: 0x3a31821  addu        $v1, $sp, $v1
    ctx->pc = 0x16ff38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x16ff3c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x16ff3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16ff40: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x16ff40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x16ff44: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x16ff44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16ff48: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x16ff48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x16ff4c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16ff4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16ff50: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x16ff50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x16ff54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16ff54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16ff58: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x16ff58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x16ff5c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x16ff5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x16ff60: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16ff60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16ff64: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x16ff64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16ff68: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x16ff68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x16ff6c: 0x9063fffe  lbu         $v1, -0x2($v1)
    ctx->pc = 0x16ff6cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294967294)));
    // 0x16ff70: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x16ff70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x16ff74: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x16ff74u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16ff78: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x16ff78u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x16ff7c: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x16ff7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x16ff80: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x16ff80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16ff84: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x16FF84u;
    {
        const bool branch_taken_0x16ff84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FF88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FF84u;
            // 0x16ff88: 0xa044fffe  sb          $a0, -0x2($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294967294), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ff84) {
            ctx->pc = 0x16FF98u;
            goto label_16ff98;
        }
    }
    ctx->pc = 0x16FF8Cu;
    // 0x16ff8c: 0x0  nop
    ctx->pc = 0x16ff8cu;
    // NOP
label_16ff90:
    // 0x16ff90: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x16ff90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16ff94: 0x0  nop
    ctx->pc = 0x16ff94u;
    // NOP
label_16ff98:
    // 0x16ff98: 0x1240fca3  beqz        $s2, . + 4 + (-0x35D << 2)
    ctx->pc = 0x16FF98u;
    {
        const bool branch_taken_0x16ff98 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FF9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FF98u;
            // 0x16ff9c: 0x8fa20150  lw          $v0, 0x150($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ff98) {
            ctx->pc = 0x16F228u;
            runtime->cooperativeGuestYield();
            goto label_16f228;
        }
    }
    ctx->pc = 0x16FFA0u;
    // 0x16ffa0: 0x16b40003  bne         $s5, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x16FFA0u;
    {
        const bool branch_taken_0x16ffa0 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 20));
        ctx->pc = 0x16FFA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FFA0u;
            // 0x16ffa4: 0x2e820005  sltiu       $v0, $s4, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ffa0) {
            ctx->pc = 0x16FFB0u;
            goto label_16ffb0;
        }
    }
    ctx->pc = 0x16FFA8u;
    // 0x16ffa8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x16FFA8u;
    {
        const bool branch_taken_0x16ffa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FFACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FFA8u;
            // 0x16ffac: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ffa8) {
            ctx->pc = 0x170048u;
            goto label_170048;
        }
    }
    ctx->pc = 0x16FFB0u;
label_16ffb0:
    // 0x16ffb0: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x16FFB0u;
    {
        const bool branch_taken_0x16ffb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FFB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FFB0u;
            // 0x16ffb4: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ffb0) {
            ctx->pc = 0x170044u;
            goto label_170044;
        }
    }
    ctx->pc = 0x16FFB8u;
    // 0x16ffb8: 0x141880  sll         $v1, $s4, 2
    ctx->pc = 0x16ffb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x16ffbc: 0x24422550  addiu       $v0, $v0, 0x2550
    ctx->pc = 0x16ffbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9552));
    // 0x16ffc0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16ffc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16ffc4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16ffc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16ffc8: 0x400008  jr          $v0
    ctx->pc = 0x16FFC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16FFD0u: goto label_16ffd0;
            case 0x16FFE8u: goto label_16ffe8;
            case 0x170008u: goto label_170008;
            case 0x170038u: goto label_170038;
            case 0x170040u: goto label_170040;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16FFD0u;
label_16ffd0:
    // 0x16ffd0: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x16ffd0u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16ffd4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16ffd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x16ffd8: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x16ffd8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x16ffdc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x16FFDCu;
    {
        const bool branch_taken_0x16ffdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16FFE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FFDCu;
            // 0x16ffe0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ffdc) {
            ctx->pc = 0x170048u;
            goto label_170048;
        }
    }
    ctx->pc = 0x16FFE4u;
    // 0x16ffe4: 0x0  nop
    ctx->pc = 0x16ffe4u;
    // NOP
label_16ffe8:
    // 0x16ffe8: 0x16a00016  bnez        $s5, . + 4 + (0x16 << 2)
    ctx->pc = 0x16FFE8u;
    {
        const bool branch_taken_0x16ffe8 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x16FFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FFE8u;
            // 0x16ffec: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ffe8) {
            ctx->pc = 0x170044u;
            goto label_170044;
        }
    }
    ctx->pc = 0x16FFF0u;
    // 0x16fff0: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x16fff0u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16fff4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x16fff4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x16fff8: 0x44110000  mfc1        $s1, $f0
    ctx->pc = 0x16fff8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 17, bits); }
    // 0x16fffc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x16FFFCu;
    {
        const bool branch_taken_0x16fffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FFFCu;
            // 0x170000: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16fffc) {
            ctx->pc = 0x170048u;
            goto label_170048;
        }
    }
    ctx->pc = 0x170004u;
    // 0x170004: 0x0  nop
    ctx->pc = 0x170004u;
    // NOP
label_170008:
    // 0x170008: 0x16a0000e  bnez        $s5, . + 4 + (0xE << 2)
    ctx->pc = 0x170008u;
    {
        const bool branch_taken_0x170008 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x17000Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170008u;
            // 0x17000c: 0x13882b  sltu        $s1, $zero, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x170008) {
            ctx->pc = 0x170044u;
            goto label_170044;
        }
    }
    ctx->pc = 0x170010u;
    // 0x170010: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x170010u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x170014: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x170014u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x170018: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x170018u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17001c: 0x0  nop
    ctx->pc = 0x17001cu;
    // NOP
    // 0x170020: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x170020u;
    {
        const bool branch_taken_0x170020 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x170024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170020u;
            // 0x170024: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170020) {
            ctx->pc = 0x170030u;
            goto label_170030;
        }
    }
    ctx->pc = 0x170028u;
    // 0x170028: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x170028u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17002c: 0x0  nop
    ctx->pc = 0x17002cu;
    // NOP
label_170030:
    // 0x170030: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x170030u;
    {
        const bool branch_taken_0x170030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x170034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170030u;
            // 0x170034: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170030) {
            ctx->pc = 0x170044u;
            goto label_170044;
        }
    }
    ctx->pc = 0x170038u;
label_170038:
    // 0x170038: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x170038u;
    {
        const bool branch_taken_0x170038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17003Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170038u;
            // 0x17003c: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x170038) {
            ctx->pc = 0x170044u;
            goto label_170044;
        }
    }
    ctx->pc = 0x170040u;
label_170040:
    // 0x170040: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x170040u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_170044:
    // 0x170044: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x170044u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_170048:
    // 0x170048: 0x7bb001c0  lq          $s0, 0x1C0($sp)
    ctx->pc = 0x170048u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x17004c: 0x7bb101b0  lq          $s1, 0x1B0($sp)
    ctx->pc = 0x17004cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x170050: 0x7bb201a0  lq          $s2, 0x1A0($sp)
    ctx->pc = 0x170050u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x170054: 0x7bb30190  lq          $s3, 0x190($sp)
    ctx->pc = 0x170054u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x170058: 0x7bb40180  lq          $s4, 0x180($sp)
    ctx->pc = 0x170058u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x17005c: 0x7bb50170  lq          $s5, 0x170($sp)
    ctx->pc = 0x17005cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x170060: 0xdfbf0160  ld          $ra, 0x160($sp)
    ctx->pc = 0x170060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x170064: 0x3e00008  jr          $ra
    ctx->pc = 0x170064u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x170068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x170064u;
            // 0x170068: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16F21Cu: goto label_16f21c;
            case 0x16F228u: goto label_16f228;
            case 0x16F258u: goto label_16f258;
            case 0x16F290u: goto label_16f290;
            case 0x16F2C0u: goto label_16f2c0;
            case 0x16F2F8u: goto label_16f2f8;
            case 0x16F328u: goto label_16f328;
            case 0x16F358u: goto label_16f358;
            case 0x16F388u: goto label_16f388;
            case 0x16F3B8u: goto label_16f3b8;
            case 0x16F3F0u: goto label_16f3f0;
            case 0x16F428u: goto label_16f428;
            case 0x16F460u: goto label_16f460;
            case 0x16F498u: goto label_16f498;
            case 0x16F4D0u: goto label_16f4d0;
            case 0x16F518u: goto label_16f518;
            case 0x16F53Cu: goto label_16f53c;
            case 0x16F558u: goto label_16f558;
            case 0x16F570u: goto label_16f570;
            case 0x16F598u: goto label_16f598;
            case 0x16F5C8u: goto label_16f5c8;
            case 0x16F608u: goto label_16f608;
            case 0x16F648u: goto label_16f648;
            case 0x16F688u: goto label_16f688;
            case 0x16F6C8u: goto label_16f6c8;
            case 0x16F708u: goto label_16f708;
            case 0x16F748u: goto label_16f748;
            case 0x16F784u: goto label_16f784;
            case 0x16F798u: goto label_16f798;
            case 0x16F7E8u: goto label_16f7e8;
            case 0x16F808u: goto label_16f808;
            case 0x16F838u: goto label_16f838;
            case 0x16F844u: goto label_16f844;
            case 0x16F860u: goto label_16f860;
            case 0x16F86Cu: goto label_16f86c;
            case 0x16F880u: goto label_16f880;
            case 0x16F8B0u: goto label_16f8b0;
            case 0x16F8E0u: goto label_16f8e0;
            case 0x16F908u: goto label_16f908;
            case 0x16F938u: goto label_16f938;
            case 0x16F940u: goto label_16f940;
            case 0x16F988u: goto label_16f988;
            case 0x16F9B0u: goto label_16f9b0;
            case 0x16F9E0u: goto label_16f9e0;
            case 0x16FA08u: goto label_16fa08;
            case 0x16FA48u: goto label_16fa48;
            case 0x16FA88u: goto label_16fa88;
            case 0x16FA90u: goto label_16fa90;
            case 0x16FAB8u: goto label_16fab8;
            case 0x16FAF8u: goto label_16faf8;
            case 0x16FB30u: goto label_16fb30;
            case 0x16FB70u: goto label_16fb70;
            case 0x16FB78u: goto label_16fb78;
            case 0x16FBB0u: goto label_16fbb0;
            case 0x16FBE8u: goto label_16fbe8;
            case 0x16FC28u: goto label_16fc28;
            case 0x16FC30u: goto label_16fc30;
            case 0x16FC68u: goto label_16fc68;
            case 0x16FC98u: goto label_16fc98;
            case 0x16FCA0u: goto label_16fca0;
            case 0x16FCC0u: goto label_16fcc0;
            case 0x16FD00u: goto label_16fd00;
            case 0x16FD08u: goto label_16fd08;
            case 0x16FD40u: goto label_16fd40;
            case 0x16FD78u: goto label_16fd78;
            case 0x16FDB8u: goto label_16fdb8;
            case 0x16FDC0u: goto label_16fdc0;
            case 0x16FDF8u: goto label_16fdf8;
            case 0x16FE38u: goto label_16fe38;
            case 0x16FE40u: goto label_16fe40;
            case 0x16FE78u: goto label_16fe78;
            case 0x16FE7Cu: goto label_16fe7c;
            case 0x16FE80u: goto label_16fe80;
            case 0x16FE84u: goto label_16fe84;
            case 0x16FE88u: goto label_16fe88;
            case 0x16FE8Cu: goto label_16fe8c;
            case 0x16FEA0u: goto label_16fea0;
            case 0x16FED0u: goto label_16fed0;
            case 0x16FEFCu: goto label_16fefc;
            case 0x16FF20u: goto label_16ff20;
            case 0x16FF90u: goto label_16ff90;
            case 0x16FF98u: goto label_16ff98;
            case 0x16FFB0u: goto label_16ffb0;
            case 0x16FFD0u: goto label_16ffd0;
            case 0x16FFE8u: goto label_16ffe8;
            case 0x170008u: goto label_170008;
            case 0x170030u: goto label_170030;
            case 0x170038u: goto label_170038;
            case 0x170040u: goto label_170040;
            case 0x170044u: goto label_170044;
            case 0x170048u: goto label_170048;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17006Cu;
    // 0x17006c: 0x0  nop
    ctx->pc = 0x17006cu;
    // NOP
}
