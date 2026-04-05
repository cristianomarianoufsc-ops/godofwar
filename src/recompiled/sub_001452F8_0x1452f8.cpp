#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001452F8
// Address: 0x1452f8 - 0x1460c0
void sub_001452F8_0x1452f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001452F8_0x1452f8");
#endif

    ctx->pc = 0x1452f8u;

label_1452f8:
    // 0x1452f8: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1452f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x1452fc: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x1452fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x145300: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x145300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145304: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x145304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x145308: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x145308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14530c: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x14530cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x145310: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x145310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x145314: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x145314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x145318: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x145318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x14531c: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x14531cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x145320: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x145320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x145324: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x145324u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x145328: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x145328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x14532c: 0xc0526c4  jal         func_149B10
    ctx->pc = 0x14532Cu;
    SET_GPR_U32(ctx, 31, 0x145334u);
    ctx->pc = 0x145330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14532Cu;
            // 0x145330: 0xe7b400f0  swc1        $f20, 0xF0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x149B10u;
    if (runtime->hasFunction(0x149B10u)) {
        auto targetFn = runtime->lookupFunction(0x149B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145334u; }
        if (ctx->pc != 0x145334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00149B10_0x149b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145334u; }
        if (ctx->pc != 0x145334u) { return; }
    }
    ctx->pc = 0x145334u;
    // 0x145334: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x145334u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145338: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x145338u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x14533c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x14533cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x145340: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x145340u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x145344: 0x8c45ed58  lw          $a1, -0x12A8($v0)
    ctx->pc = 0x145344u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962520)));
    // 0x145348: 0x248418f8  addiu       $a0, $a0, 0x18F8
    ctx->pc = 0x145348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6392));
    // 0x14534c: 0x8fc70010  lw          $a3, 0x10($fp)
    ctx->pc = 0x14534cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
    // 0x145350: 0x3c0b02d  daddu       $s6, $fp, $zero
    ctx->pc = 0x145350u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145354: 0xc090508  jal         func_241420
    ctx->pc = 0x145354u;
    SET_GPR_U32(ctx, 31, 0x14535Cu);
    ctx->pc = 0x145358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145354u;
            // 0x145358: 0x8fd50020  lw          $s5, 0x20($fp) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x241420u;
    if (runtime->hasFunction(0x241420u)) {
        auto targetFn = runtime->lookupFunction(0x241420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14535Cu; }
        if (ctx->pc != 0x14535Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00241420_0x241420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14535Cu; }
        if (ctx->pc != 0x14535Cu) { return; }
    }
    ctx->pc = 0x14535Cu;
    // 0x14535c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x14535cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x145360: 0x10400349  beqz        $v0, . + 4 + (0x349 << 2)
    ctx->pc = 0x145360u;
    {
        const bool branch_taken_0x145360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x145364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145360u;
            // 0x145364: 0xafb00040  sw          $s0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145360) {
            ctx->pc = 0x146088u;
            goto label_146088;
        }
    }
    ctx->pc = 0x145368u;
    // 0x145368: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x145368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14536c: 0x0  nop
    ctx->pc = 0x14536cu;
    // NOP
label_145370:
    // 0x145370: 0x90850000  lbu         $a1, 0x0($a0)
    ctx->pc = 0x145370u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x145374: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x145374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x145378: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x145378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x14537c: 0x30a20080  andi        $v0, $a1, 0x80
    ctx->pc = 0x14537cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x145380: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x145380u;
    {
        const bool branch_taken_0x145380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x145384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145380u;
            // 0x145384: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145380) {
            ctx->pc = 0x14539Cu;
            goto label_14539c;
        }
    }
    ctx->pc = 0x145388u;
    // 0x145388: 0x88820004  lwl         $v0, 0x4($a0)
    ctx->pc = 0x145388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x14538c: 0x24830003  addiu       $v1, $a0, 0x3
    ctx->pc = 0x14538cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x145390: 0x98820001  lwr         $v0, 0x1($a0)
    ctx->pc = 0x145390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 1); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x145394: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x145394u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x145398: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x145398u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_14539c:
    // 0x14539c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x14539cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1453a0: 0x24a3fffc  addiu       $v1, $a1, -0x4
    ctx->pc = 0x1453a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x1453a4: 0x2c62009c  sltiu       $v0, $v1, 0x9C
    ctx->pc = 0x1453a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)156) ? 1 : 0);
    // 0x1453a8: 0x10400333  beqz        $v0, . + 4 + (0x333 << 2)
    ctx->pc = 0x1453A8u;
    {
        const bool branch_taken_0x1453a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1453ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1453A8u;
            // 0x1453ac: 0x90b821  addu        $s7, $a0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1453a8) {
            ctx->pc = 0x146078u;
            goto label_146078;
        }
    }
    ctx->pc = 0x1453B0u;
    // 0x1453b0: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1453b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1453b4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1453b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1453b8: 0x244219b0  addiu       $v0, $v0, 0x19B0
    ctx->pc = 0x1453b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6576));
    // 0x1453bc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1453bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1453c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1453c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1453c4: 0x400008  jr          $v0
    ctx->pc = 0x1453C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1453CCu: goto label_1453cc;
            case 0x145404u: goto label_145404;
            case 0x145434u: goto label_145434;
            case 0x14545Cu: goto label_14545c;
            case 0x145484u: goto label_145484;
            case 0x1454A0u: goto label_1454a0;
            case 0x1454BCu: goto label_1454bc;
            case 0x1454D8u: goto label_1454d8;
            case 0x1454F4u: goto label_1454f4;
            case 0x145550u: goto label_145550;
            case 0x1455ACu: goto label_1455ac;
            case 0x1455D8u: goto label_1455d8;
            case 0x145600u: goto label_145600;
            case 0x145630u: goto label_145630;
            case 0x145650u: goto label_145650;
            case 0x14568Cu: goto label_14568c;
            case 0x1456E0u: goto label_1456e0;
            case 0x1457C8u: goto label_1457c8;
            case 0x1457F0u: goto label_1457f0;
            case 0x145810u: goto label_145810;
            case 0x145888u: goto label_145888;
            case 0x145918u: goto label_145918;
            case 0x145958u: goto label_145958;
            case 0x1459E0u: goto label_1459e0;
            case 0x145A34u: goto label_145a34;
            case 0x145A8Cu: goto label_145a8c;
            case 0x145AA8u: goto label_145aa8;
            case 0x145AE4u: goto label_145ae4;
            case 0x145B34u: goto label_145b34;
            case 0x145B5Cu: goto label_145b5c;
            case 0x145B8Cu: goto label_145b8c;
            case 0x145C1Cu: goto label_145c1c;
            case 0x145C50u: goto label_145c50;
            case 0x145C90u: goto label_145c90;
            case 0x145C9Cu: goto label_145c9c;
            case 0x145CD0u: goto label_145cd0;
            case 0x145D20u: goto label_145d20;
            case 0x145D64u: goto label_145d64;
            case 0x145DDCu: goto label_145ddc;
            case 0x145DFCu: goto label_145dfc;
            case 0x145E4Cu: goto label_145e4c;
            case 0x145EB8u: goto label_145eb8;
            case 0x145FC8u: goto label_145fc8;
            case 0x146074u: goto label_146074;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1453CCu;
label_1453cc:
    // 0x1453cc: 0x52c0032b  beql        $s6, $zero, . + 4 + (0x32B << 2)
    ctx->pc = 0x1453CCu;
    {
        const bool branch_taken_0x1453cc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1453cc) {
            ctx->pc = 0x1453D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1453CCu;
            // 0x1453d0: 0xafb70040  sw          $s7, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14607Cu;
            goto label_14607c;
        }
    }
    ctx->pc = 0x1453D4u;
    // 0x1453d4: 0x8ec2001c  lw          $v0, 0x1C($s6)
    ctx->pc = 0x1453d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 28)));
    // 0x1453d8: 0x8ec30010  lw          $v1, 0x10($s6)
    ctx->pc = 0x1453d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x1453dc: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1453dcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1453e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1453e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1453e4: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1453e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1453e8: 0x50400324  beql        $v0, $zero, . + 4 + (0x324 << 2)
    ctx->pc = 0x1453E8u;
    {
        const bool branch_taken_0x1453e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1453e8) {
            ctx->pc = 0x1453ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1453E8u;
            // 0x1453ec: 0xafb70040  sw          $s7, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14607Cu;
            goto label_14607c;
        }
    }
    ctx->pc = 0x1453F0u;
    // 0x1453f0: 0x8ec2000c  lw          $v0, 0xC($s6)
    ctx->pc = 0x1453f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x1453f4: 0x14400320  bnez        $v0, . + 4 + (0x320 << 2)
    ctx->pc = 0x1453F4u;
    {
        const bool branch_taken_0x1453f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1453F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1453F4u;
            // 0x1453f8: 0xaec30014  sw          $v1, 0x14($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1453f4) {
            ctx->pc = 0x146078u;
            goto label_146078;
        }
    }
    ctx->pc = 0x1453FCu;
    // 0x1453fc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1453FCu;
    {
        const bool branch_taken_0x1453fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1453FCu;
            // 0x145400: 0x24020082  addiu       $v0, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1453fc) {
            ctx->pc = 0x14542Cu;
            goto label_14542c;
        }
    }
    ctx->pc = 0x145404u;
label_145404:
    // 0x145404: 0x52c0031d  beql        $s6, $zero, . + 4 + (0x31D << 2)
    ctx->pc = 0x145404u;
    {
        const bool branch_taken_0x145404 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x145404) {
            ctx->pc = 0x145408u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x145404u;
            // 0x145408: 0xafb70040  sw          $s7, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14607Cu;
            goto label_14607c;
        }
    }
    ctx->pc = 0x14540Cu;
    // 0x14540c: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x14540cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x145410: 0x5040031a  beql        $v0, $zero, . + 4 + (0x31A << 2)
    ctx->pc = 0x145410u;
    {
        const bool branch_taken_0x145410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145410) {
            ctx->pc = 0x145414u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x145410u;
            // 0x145414: 0xafb70040  sw          $s7, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14607Cu;
            goto label_14607c;
        }
    }
    ctx->pc = 0x145418u;
    // 0x145418: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x145418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14541c: 0x8ec3000c  lw          $v1, 0xC($s6)
    ctx->pc = 0x14541cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x145420: 0x14600315  bnez        $v1, . + 4 + (0x315 << 2)
    ctx->pc = 0x145420u;
    {
        const bool branch_taken_0x145420 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x145424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145420u;
            // 0x145424: 0xaec20014  sw          $v0, 0x14($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145420) {
            ctx->pc = 0x146078u;
            goto label_146078;
        }
    }
    ctx->pc = 0x145428u;
    // 0x145428: 0x24020082  addiu       $v0, $zero, 0x82
    ctx->pc = 0x145428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
label_14542c:
    // 0x14542c: 0x10000312  b           . + 4 + (0x312 << 2)
    ctx->pc = 0x14542Cu;
    {
        const bool branch_taken_0x14542c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14542Cu;
            // 0x145430: 0xaec20018  sw          $v0, 0x18($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14542c) {
            ctx->pc = 0x146078u;
            goto label_146078;
        }
    }
    ctx->pc = 0x145434u;
label_145434:
    // 0x145434: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x145434u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x145438: 0xc090508  jal         func_241420
    ctx->pc = 0x145438u;
    SET_GPR_U32(ctx, 31, 0x145440u);
    ctx->pc = 0x14543Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145438u;
            // 0x14543c: 0x24841918  addiu       $a0, $a0, 0x1918 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6424));
        ctx->in_delay_slot = false;
    ctx->pc = 0x241420u;
    if (runtime->hasFunction(0x241420u)) {
        auto targetFn = runtime->lookupFunction(0x241420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145440u; }
        if (ctx->pc != 0x145440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00241420_0x241420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145440u; }
        if (ctx->pc != 0x145440u) { return; }
    }
    ctx->pc = 0x145440u;
    // 0x145440: 0x52c0030e  beql        $s6, $zero, . + 4 + (0x30E << 2)
    ctx->pc = 0x145440u;
    {
        const bool branch_taken_0x145440 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x145440) {
            ctx->pc = 0x145444u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x145440u;
            // 0x145444: 0xafb70040  sw          $s7, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14607Cu;
            goto label_14607c;
        }
    }
    ctx->pc = 0x145448u;
    // 0x145448: 0x8ec20018  lw          $v0, 0x18($s6)
    ctx->pc = 0x145448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x14544c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x14544cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x145450: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x145450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x145454: 0x10000308  b           . + 4 + (0x308 << 2)
    ctx->pc = 0x145454u;
    {
        const bool branch_taken_0x145454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145454u;
            // 0x145458: 0xaec20018  sw          $v0, 0x18($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145454) {
            ctx->pc = 0x146078u;
            goto label_146078;
        }
    }
    ctx->pc = 0x14545Cu;
label_14545c:
    // 0x14545c: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x14545cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x145460: 0xc090508  jal         func_241420
    ctx->pc = 0x145460u;
    SET_GPR_U32(ctx, 31, 0x145468u);
    ctx->pc = 0x145464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145460u;
            // 0x145464: 0x24841920  addiu       $a0, $a0, 0x1920 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x241420u;
    if (runtime->hasFunction(0x241420u)) {
        auto targetFn = runtime->lookupFunction(0x241420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145468u; }
        if (ctx->pc != 0x145468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00241420_0x241420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145468u; }
        if (ctx->pc != 0x145468u) { return; }
    }
    ctx->pc = 0x145468u;
    // 0x145468: 0x52c00304  beql        $s6, $zero, . + 4 + (0x304 << 2)
    ctx->pc = 0x145468u;
    {
        const bool branch_taken_0x145468 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x145468) {
            ctx->pc = 0x14546Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x145468u;
            // 0x14546c: 0xafb70040  sw          $s7, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14607Cu;
            goto label_14607c;
        }
    }
    ctx->pc = 0x145470u;
    // 0x145470: 0x8ec20018  lw          $v0, 0x18($s6)
    ctx->pc = 0x145470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
    // 0x145474: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x145474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x145478: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x145478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x14547c: 0x100002fe  b           . + 4 + (0x2FE << 2)
    ctx->pc = 0x14547Cu;
    {
        const bool branch_taken_0x14547c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14547Cu;
            // 0x145480: 0xaec20018  sw          $v0, 0x18($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14547c) {
            ctx->pc = 0x146078u;
            goto label_146078;
        }
    }
    ctx->pc = 0x145484u;
label_145484:
    // 0x145484: 0x8ea20d34  lw          $v0, 0xD34($s5)
    ctx->pc = 0x145484u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3380)));
    // 0x145488: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x145488u;
    {
        const bool branch_taken_0x145488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14548Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145488u;
            // 0x14548c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145488) {
            ctx->pc = 0x145498u;
            goto label_145498;
        }
    }
    ctx->pc = 0x145490u;
    // 0x145490: 0x100002f9  b           . + 4 + (0x2F9 << 2)
    ctx->pc = 0x145490u;
    {
        const bool branch_taken_0x145490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145490u;
            // 0x145494: 0xaea00d34  sw          $zero, 0xD34($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 3380), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145490) {
            ctx->pc = 0x146078u;
            goto label_146078;
        }
    }
    ctx->pc = 0x145498u;
label_145498:
    // 0x145498: 0x100002f7  b           . + 4 + (0x2F7 << 2)
    ctx->pc = 0x145498u;
    {
        const bool branch_taken_0x145498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14549Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145498u;
            // 0x14549c: 0xaea20d34  sw          $v0, 0xD34($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 3380), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145498) {
            ctx->pc = 0x146078u;
            goto label_146078;
        }
    }
    ctx->pc = 0x1454A0u;
label_1454a0:
    // 0x1454a0: 0xc05115e  jal         func_144578
    ctx->pc = 0x1454A0u;
    SET_GPR_U32(ctx, 31, 0x1454A8u);
    ctx->pc = 0x1454A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1454A0u;
            // 0x1454a4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144578u;
    if (runtime->hasFunction(0x144578u)) {
        auto targetFn = runtime->lookupFunction(0x144578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1454A8u; }
        if (ctx->pc != 0x1454A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144578_0x144578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1454A8u; }
        if (ctx->pc != 0x1454A8u) { return; }
    }
    ctx->pc = 0x1454A8u;
    // 0x1454a8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1454a8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1454ac: 0xc05115e  jal         func_144578
    ctx->pc = 0x1454ACu;
    SET_GPR_U32(ctx, 31, 0x1454B4u);
    ctx->pc = 0x1454B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1454ACu;
            // 0x1454b0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144578u;
    if (runtime->hasFunction(0x144578u)) {
        auto targetFn = runtime->lookupFunction(0x144578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1454B4u; }
        if (ctx->pc != 0x1454B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144578_0x144578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1454B4u; }
        if (ctx->pc != 0x1454B4u) { return; }
    }
    ctx->pc = 0x1454B4u;
    // 0x1454b4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1454B4u;
    {
        const bool branch_taken_0x1454b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1454B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1454B4u;
            // 0x1454b8: 0x46140300  add.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1454b4) {
            ctx->pc = 0x14553Cu;
            goto label_14553c;
        }
    }
    ctx->pc = 0x1454BCu;
label_1454bc:
    // 0x1454bc: 0xc05115e  jal         func_144578
    ctx->pc = 0x1454BCu;
    SET_GPR_U32(ctx, 31, 0x1454C4u);
    ctx->pc = 0x1454C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1454BCu;
            // 0x1454c0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144578u;
    if (runtime->hasFunction(0x144578u)) {
        auto targetFn = runtime->lookupFunction(0x144578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1454C4u; }
        if (ctx->pc != 0x1454C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144578_0x144578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1454C4u; }
        if (ctx->pc != 0x1454C4u) { return; }
    }
    ctx->pc = 0x1454C4u;
    // 0x1454c4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1454c4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1454c8: 0xc05115e  jal         func_144578
    ctx->pc = 0x1454C8u;
    SET_GPR_U32(ctx, 31, 0x1454D0u);
    ctx->pc = 0x1454CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1454C8u;
            // 0x1454cc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144578u;
    if (runtime->hasFunction(0x144578u)) {
        auto targetFn = runtime->lookupFunction(0x144578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1454D0u; }
        if (ctx->pc != 0x1454D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144578_0x144578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1454D0u; }
        if (ctx->pc != 0x1454D0u) { return; }
    }
    ctx->pc = 0x1454D0u;
    // 0x1454d0: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1454D0u;
    {
        const bool branch_taken_0x1454d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1454D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1454D0u;
            // 0x1454d4: 0x46140301  sub.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1454d0) {
            ctx->pc = 0x14553Cu;
            goto label_14553c;
        }
    }
    ctx->pc = 0x1454D8u;
label_1454d8:
    // 0x1454d8: 0xc05115e  jal         func_144578
    ctx->pc = 0x1454D8u;
    SET_GPR_U32(ctx, 31, 0x1454E0u);
    ctx->pc = 0x1454DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1454D8u;
            // 0x1454dc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144578u;
    if (runtime->hasFunction(0x144578u)) {
        auto targetFn = runtime->lookupFunction(0x144578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1454E0u; }
        if (ctx->pc != 0x1454E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144578_0x144578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1454E0u; }
        if (ctx->pc != 0x1454E0u) { return; }
    }
    ctx->pc = 0x1454E0u;
    // 0x1454e0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1454e0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1454e4: 0xc05115e  jal         func_144578
    ctx->pc = 0x1454E4u;
    SET_GPR_U32(ctx, 31, 0x1454ECu);
    ctx->pc = 0x1454E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1454E4u;
            // 0x1454e8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144578u;
    if (runtime->hasFunction(0x144578u)) {
        auto targetFn = runtime->lookupFunction(0x144578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1454ECu; }
        if (ctx->pc != 0x1454ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144578_0x144578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1454ECu; }
        if (ctx->pc != 0x1454ECu) { return; }
    }
    ctx->pc = 0x1454ECu;
    // 0x1454ec: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1454ECu;
    {
        const bool branch_taken_0x1454ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1454F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1454ECu;
            // 0x1454f0: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1454ec) {
            ctx->pc = 0x14553Cu;
            goto label_14553c;
        }
    }
    ctx->pc = 0x1454F4u;
label_1454f4:
    // 0x1454f4: 0xc05115e  jal         func_144578
    ctx->pc = 0x1454F4u;
    SET_GPR_U32(ctx, 31, 0x1454FCu);
    ctx->pc = 0x1454F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1454F4u;
            // 0x1454f8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144578u;
    if (runtime->hasFunction(0x144578u)) {
        auto targetFn = runtime->lookupFunction(0x144578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1454FCu; }
        if (ctx->pc != 0x1454FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144578_0x144578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1454FCu; }
        if (ctx->pc != 0x1454FCu) { return; }
    }
    ctx->pc = 0x1454FCu;
    // 0x1454fc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1454fcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x145500: 0xc05115e  jal         func_144578
    ctx->pc = 0x145500u;
    SET_GPR_U32(ctx, 31, 0x145508u);
    ctx->pc = 0x145504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145500u;
            // 0x145504: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144578u;
    if (runtime->hasFunction(0x144578u)) {
        auto targetFn = runtime->lookupFunction(0x144578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145508u; }
        if (ctx->pc != 0x145508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144578_0x144578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145508u; }
        if (ctx->pc != 0x145508u) { return; }
    }
    ctx->pc = 0x145508u;
    // 0x145508: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x145508u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x14550c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x14550cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145510: 0x4600a032  c.eq.s      $f20, $f0
    ctx->pc = 0x145510u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x145514: 0x0  nop
    ctx->pc = 0x145514u;
    // NOP
    // 0x145518: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x145518u;
    {
        const bool branch_taken_0x145518 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14551Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145518u;
            // 0x14551c: 0x3c05002b  lui         $a1, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145518) {
            ctx->pc = 0x145538u;
            goto label_145538;
        }
    }
    ctx->pc = 0x145520u;
    // 0x145520: 0x26a400c8  addiu       $a0, $s5, 0xC8
    ctx->pc = 0x145520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 200));
    // 0x145524: 0x24a51928  addiu       $a1, $a1, 0x1928
    ctx->pc = 0x145524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6440));
    // 0x145528: 0xc051114  jal         func_144450
    ctx->pc = 0x145528u;
    SET_GPR_U32(ctx, 31, 0x145530u);
    ctx->pc = 0x14552Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145528u;
            // 0x14552c: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144450u;
    if (runtime->hasFunction(0x144450u)) {
        auto targetFn = runtime->lookupFunction(0x144450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145530u; }
        if (ctx->pc != 0x145530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_144450_0x144520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145530u; }
        if (ctx->pc != 0x145530u) { return; }
    }
    ctx->pc = 0x145530u;
    // 0x145530: 0x100002d2  b           . + 4 + (0x2D2 << 2)
    ctx->pc = 0x145530u;
    {
        const bool branch_taken_0x145530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145530u;
            // 0x145534: 0xafb70040  sw          $s7, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145530) {
            ctx->pc = 0x14607Cu;
            goto label_14607c;
        }
    }
    ctx->pc = 0x145538u;
label_145538:
    // 0x145538: 0x46146303  div.s       $f12, $f12, $f20
    ctx->pc = 0x145538u;
    if (ctx->f[20] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[20];
label_14553c:
    // 0x14553c: 0x26a400c8  addiu       $a0, $s5, 0xC8
    ctx->pc = 0x14553cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 200));
label_145540:
    // 0x145540: 0xc051104  jal         func_144410
    ctx->pc = 0x145540u;
    SET_GPR_U32(ctx, 31, 0x145548u);
    ctx->pc = 0x144410u;
    if (runtime->hasFunction(0x144410u)) {
        auto targetFn = runtime->lookupFunction(0x144410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145548u; }
        if (ctx->pc != 0x145548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_144410_0x144450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145548u; }
        if (ctx->pc != 0x145548u) { return; }
    }
    ctx->pc = 0x145548u;
    // 0x145548: 0x100002cc  b           . + 4 + (0x2CC << 2)
    ctx->pc = 0x145548u;
    {
        const bool branch_taken_0x145548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14554Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145548u;
            // 0x14554c: 0xafb70040  sw          $s7, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145548) {
            ctx->pc = 0x14607Cu;
            goto label_14607c;
        }
    }
    ctx->pc = 0x145550u;
label_145550:
    // 0x145550: 0xc05115e  jal         func_144578
    ctx->pc = 0x145550u;
    SET_GPR_U32(ctx, 31, 0x145558u);
    ctx->pc = 0x145554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145550u;
            // 0x145554: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144578u;
    if (runtime->hasFunction(0x144578u)) {
        auto targetFn = runtime->lookupFunction(0x144578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145558u; }
        if (ctx->pc != 0x145558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144578_0x144578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145558u; }
        if (ctx->pc != 0x145558u) { return; }
    }
    ctx->pc = 0x145558u;
    // 0x145558: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x145558u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x14555c: 0xc05115e  jal         func_144578
    ctx->pc = 0x14555Cu;
    SET_GPR_U32(ctx, 31, 0x145564u);
    ctx->pc = 0x145560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14555Cu;
            // 0x145560: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144578u;
    if (runtime->hasFunction(0x144578u)) {
        auto targetFn = runtime->lookupFunction(0x144578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145564u; }
        if (ctx->pc != 0x145564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144578_0x144578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145564u; }
        if (ctx->pc != 0x145564u) { return; }
    }
    ctx->pc = 0x145564u;
    // 0x145564: 0x46140041  sub.s       $f1, $f0, $f20
    ctx->pc = 0x145564u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x145568: 0x26a400c8  addiu       $a0, $s5, 0xC8
    ctx->pc = 0x145568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 200));
    // 0x14556c: 0x3c01b586  lui         $at, 0xB586
    ctx->pc = 0x14556cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)46470 << 16));
    // 0x145570: 0x342137bd  ori         $at, $at, 0x37BD
    ctx->pc = 0x145570u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14269);
    // 0x145574: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x145574u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145578: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x145578u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x14557c: 0x0  nop
    ctx->pc = 0x14557cu;
    // NOP
    // 0x145580: 0x4500002f  bc1f        . + 4 + (0x2F << 2)
    ctx->pc = 0x145580u;
    {
        const bool branch_taken_0x145580 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x145584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145580u;
            // 0x145584: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145580) {
            ctx->pc = 0x145640u;
            goto label_145640;
        }
    }
    ctx->pc = 0x145588u;
    // 0x145588: 0x3c013586  lui         $at, 0x3586
    ctx->pc = 0x145588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)13702 << 16));
    // 0x14558c: 0x342137bd  ori         $at, $at, 0x37BD
    ctx->pc = 0x14558cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)14269);
    // 0x145590: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x145590u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x145594: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x145594u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x145598: 0x0  nop
    ctx->pc = 0x145598u;
    // NOP
    // 0x14559c: 0x45030028  bc1tl       . + 4 + (0x28 << 2)
    ctx->pc = 0x14559Cu;
    {
        const bool branch_taken_0x14559c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14559c) {
            ctx->pc = 0x1455A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x14559Cu;
            // 0x1455a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x145640u;
            goto label_145640;
        }
    }
    ctx->pc = 0x1455A4u;
    // 0x1455a4: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x1455A4u;
    {
        const bool branch_taken_0x1455a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1455a4) {
            ctx->pc = 0x145640u;
            goto label_145640;
        }
    }
    ctx->pc = 0x1455ACu;
label_1455ac:
    // 0x1455ac: 0xc05115e  jal         func_144578
    ctx->pc = 0x1455ACu;
    SET_GPR_U32(ctx, 31, 0x1455B4u);
    ctx->pc = 0x1455B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1455ACu;
            // 0x1455b0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144578u;
    if (runtime->hasFunction(0x144578u)) {
        auto targetFn = runtime->lookupFunction(0x144578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1455B4u; }
        if (ctx->pc != 0x1455B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144578_0x144578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1455B4u; }
        if (ctx->pc != 0x1455B4u) { return; }
    }
    ctx->pc = 0x1455B4u;
    // 0x1455b4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1455b4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1455b8: 0xc05115e  jal         func_144578
    ctx->pc = 0x1455B8u;
    SET_GPR_U32(ctx, 31, 0x1455C0u);
    ctx->pc = 0x1455BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1455B8u;
            // 0x1455bc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144578u;
    if (runtime->hasFunction(0x144578u)) {
        auto targetFn = runtime->lookupFunction(0x144578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1455C0u; }
        if (ctx->pc != 0x1455C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144578_0x144578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1455C0u; }
        if (ctx->pc != 0x1455C0u) { return; }
    }
    ctx->pc = 0x1455C0u;
    // 0x1455c0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x1455c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1455c4: 0x26a400c8  addiu       $a0, $s5, 0xC8
    ctx->pc = 0x1455c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 200));
    // 0x1455c8: 0x4501001d  bc1t        . + 4 + (0x1D << 2)
    ctx->pc = 0x1455C8u;
    {
        const bool branch_taken_0x1455c8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1455CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1455C8u;
            // 0x1455cc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1455c8) {
            ctx->pc = 0x145640u;
            goto label_145640;
        }
    }
    ctx->pc = 0x1455D0u;
    // 0x1455d0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1455D0u;
    {
        const bool branch_taken_0x1455d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1455D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1455D0u;
            // 0x1455d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1455d0) {
            ctx->pc = 0x145640u;
            goto label_145640;
        }
    }
    ctx->pc = 0x1455D8u;
label_1455d8:
    // 0x1455d8: 0xc051148  jal         func_144520
    ctx->pc = 0x1455D8u;
    SET_GPR_U32(ctx, 31, 0x1455E0u);
    ctx->pc = 0x1455DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1455D8u;
            // 0x1455dc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144520u;
    if (runtime->hasFunction(0x144520u)) {
        auto targetFn = runtime->lookupFunction(0x144520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1455E0u; }
        if (ctx->pc != 0x1455E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144520_0x144520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1455E0u; }
        if (ctx->pc != 0x1455E0u) { return; }
    }
    ctx->pc = 0x1455E0u;
    // 0x1455e0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1455e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1455e4: 0xc051148  jal         func_144520
    ctx->pc = 0x1455E4u;
    SET_GPR_U32(ctx, 31, 0x1455ECu);
    ctx->pc = 0x1455E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1455E4u;
            // 0x1455e8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144520u;
    if (runtime->hasFunction(0x144520u)) {
        auto targetFn = runtime->lookupFunction(0x144520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1455ECu; }
        if (ctx->pc != 0x1455ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144520_0x144520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1455ECu; }
        if (ctx->pc != 0x1455ECu) { return; }
    }
    ctx->pc = 0x1455ECu;
    // 0x1455ec: 0x26a400c8  addiu       $a0, $s5, 0xC8
    ctx->pc = 0x1455ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 200));
    // 0x1455f0: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1455F0u;
    {
        const bool branch_taken_0x1455f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1455F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1455F0u;
            // 0x1455f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1455f0) {
            ctx->pc = 0x145640u;
            goto label_145640;
        }
    }
    ctx->pc = 0x1455F8u;
    // 0x1455f8: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1455F8u;
    {
        const bool branch_taken_0x1455f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1455FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1455F8u;
            // 0x1455fc: 0x10282b  sltu        $a1, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1455f8) {
            ctx->pc = 0x145640u;
            goto label_145640;
        }
    }
    ctx->pc = 0x145600u;
label_145600:
    // 0x145600: 0xc051148  jal         func_144520
    ctx->pc = 0x145600u;
    SET_GPR_U32(ctx, 31, 0x145608u);
    ctx->pc = 0x145604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145600u;
            // 0x145604: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144520u;
    if (runtime->hasFunction(0x144520u)) {
        auto targetFn = runtime->lookupFunction(0x144520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145608u; }
        if (ctx->pc != 0x145608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144520_0x144520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145608u; }
        if (ctx->pc != 0x145608u) { return; }
    }
    ctx->pc = 0x145608u;
    // 0x145608: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x145608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14560c: 0xc051148  jal         func_144520
    ctx->pc = 0x14560Cu;
    SET_GPR_U32(ctx, 31, 0x145614u);
    ctx->pc = 0x145610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14560Cu;
            // 0x145610: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144520u;
    if (runtime->hasFunction(0x144520u)) {
        auto targetFn = runtime->lookupFunction(0x144520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145614u; }
        if (ctx->pc != 0x145614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144520_0x144520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145614u; }
        if (ctx->pc != 0x145614u) { return; }
    }
    ctx->pc = 0x145614u;
    // 0x145614: 0x26a400c8  addiu       $a0, $s5, 0xC8
    ctx->pc = 0x145614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 200));
    // 0x145618: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x145618u;
    {
        const bool branch_taken_0x145618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14561Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145618u;
            // 0x14561c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145618) {
            ctx->pc = 0x145628u;
            goto label_145628;
        }
    }
    ctx->pc = 0x145620u;
    // 0x145620: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x145620u;
    {
        const bool branch_taken_0x145620 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x145620) {
            ctx->pc = 0x145640u;
            goto label_145640;
        }
    }
    ctx->pc = 0x145628u;
label_145628:
    // 0x145628: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x145628u;
    {
        const bool branch_taken_0x145628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14562Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145628u;
            // 0x14562c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145628) {
            ctx->pc = 0x145640u;
            goto label_145640;
        }
    }
    ctx->pc = 0x145630u;
label_145630:
    // 0x145630: 0xc051148  jal         func_144520
    ctx->pc = 0x145630u;
    SET_GPR_U32(ctx, 31, 0x145638u);
    ctx->pc = 0x145634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145630u;
            // 0x145634: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144520u;
    if (runtime->hasFunction(0x144520u)) {
        auto targetFn = runtime->lookupFunction(0x144520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145638u; }
        if (ctx->pc != 0x145638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144520_0x144520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145638u; }
        if (ctx->pc != 0x145638u) { return; }
    }
    ctx->pc = 0x145638u;
    // 0x145638: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x145638u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x14563c: 0x26a400c8  addiu       $a0, $s5, 0xC8
    ctx->pc = 0x14563cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 200));
label_145640:
    // 0x145640: 0xc0510f2  jal         func_1443C8
    ctx->pc = 0x145640u;
    SET_GPR_U32(ctx, 31, 0x145648u);
    ctx->pc = 0x1443C8u;
    if (runtime->hasFunction(0x1443C8u)) {
        auto targetFn = runtime->lookupFunction(0x1443C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145648u; }
        if (ctx->pc != 0x145648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1443c8_0x144410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145648u; }
        if (ctx->pc != 0x145648u) { return; }
    }
    ctx->pc = 0x145648u;
    // 0x145648: 0x1000028c  b           . + 4 + (0x28C << 2)
    ctx->pc = 0x145648u;
    {
        const bool branch_taken_0x145648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14564Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145648u;
            // 0x14564c: 0xafb70040  sw          $s7, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145648) {
            ctx->pc = 0x14607Cu;
            goto label_14607c;
        }
    }
    ctx->pc = 0x145650u;
label_145650:
    // 0x145650: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x145650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145654: 0xc05118a  jal         func_144628
    ctx->pc = 0x145654u;
    SET_GPR_U32(ctx, 31, 0x14565Cu);
    ctx->pc = 0x145658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145654u;
            // 0x145658: 0x26b200c8  addiu       $s2, $s5, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144628u;
    if (runtime->hasFunction(0x144628u)) {
        auto targetFn = runtime->lookupFunction(0x144628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14565Cu; }
        if (ctx->pc != 0x14565Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144628_0x144628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14565Cu; }
        if (ctx->pc != 0x14565Cu) { return; }
    }
    ctx->pc = 0x14565Cu;
    // 0x14565c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14565cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145660: 0xc05118a  jal         func_144628
    ctx->pc = 0x145660u;
    SET_GPR_U32(ctx, 31, 0x145668u);
    ctx->pc = 0x145664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145660u;
            // 0x145664: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144628u;
    if (runtime->hasFunction(0x144628u)) {
        auto targetFn = runtime->lookupFunction(0x144628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145668u; }
        if (ctx->pc != 0x145668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144628_0x144628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145668u; }
        if (ctx->pc != 0x145668u) { return; }
    }
    ctx->pc = 0x145668u;
    // 0x145668: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x145668u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14566c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x14566cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145670: 0xc0a25f1  jal         func_2897C4
    ctx->pc = 0x145670u;
    SET_GPR_U32(ctx, 31, 0x145678u);
    ctx->pc = 0x145674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145670u;
            // 0x145674: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2897C4u;
    if (runtime->hasFunction(0x2897C4u)) {
        auto targetFn = runtime->lookupFunction(0x2897C4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145678u; }
        if (ctx->pc != 0x145678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2897c4_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145678u; }
        if (ctx->pc != 0x145678u) { return; }
    }
    ctx->pc = 0x145678u;
    // 0x145678: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x145678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14567c: 0xc0510f2  jal         func_1443C8
    ctx->pc = 0x14567Cu;
    SET_GPR_U32(ctx, 31, 0x145684u);
    ctx->pc = 0x145680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14567Cu;
            // 0x145680: 0x2c450001  sltiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1443C8u;
    if (runtime->hasFunction(0x1443C8u)) {
        auto targetFn = runtime->lookupFunction(0x1443C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145684u; }
        if (ctx->pc != 0x145684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1443c8_0x144410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145684u; }
        if (ctx->pc != 0x145684u) { return; }
    }
    ctx->pc = 0x145684u;
    // 0x145684: 0x100001eb  b           . + 4 + (0x1EB << 2)
    ctx->pc = 0x145684u;
    {
        const bool branch_taken_0x145684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145684) {
            ctx->pc = 0x145E34u;
            goto label_145e34;
        }
    }
    ctx->pc = 0x14568Cu;
label_14568c:
    // 0x14568c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x14568cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145690: 0xc05118a  jal         func_144628
    ctx->pc = 0x145690u;
    SET_GPR_U32(ctx, 31, 0x145698u);
    ctx->pc = 0x145694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145690u;
            // 0x145694: 0x26b100c8  addiu       $s1, $s5, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144628u;
    if (runtime->hasFunction(0x144628u)) {
        auto targetFn = runtime->lookupFunction(0x144628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145698u; }
        if (ctx->pc != 0x145698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144628_0x144628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145698u; }
        if (ctx->pc != 0x145698u) { return; }
    }
    ctx->pc = 0x145698u;
    // 0x145698: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x145698u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14569c: 0xc0a268a  jal         func_289A28
    ctx->pc = 0x14569Cu;
    SET_GPR_U32(ctx, 31, 0x1456A4u);
    ctx->pc = 0x1456A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14569Cu;
            // 0x1456a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289A28u;
    if (runtime->hasFunction(0x289A28u)) {
        auto targetFn = runtime->lookupFunction(0x289A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1456A4u; }
        if (ctx->pc != 0x1456A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289a28_0x289b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1456A4u; }
        if (ctx->pc != 0x1456A4u) { return; }
    }
    ctx->pc = 0x1456A4u;
    // 0x1456a4: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1456A4u;
    {
        const bool branch_taken_0x1456a4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1456A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1456A4u;
            // 0x1456a8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1456a4) {
            ctx->pc = 0x1456BCu;
            goto label_1456bc;
        }
    }
    ctx->pc = 0x1456ACu;
    // 0x1456ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1456acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1456b0: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1456b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1456b4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1456B4u;
    {
        const bool branch_taken_0x1456b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1456b4) {
            ctx->pc = 0x1456D0u;
            goto label_1456d0;
        }
    }
    ctx->pc = 0x1456BCu;
label_1456bc:
    // 0x1456bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1456bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1456c0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1456c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1456c4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1456c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1456c8: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1456c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1456cc: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x1456ccu;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_1456d0:
    // 0x1456d0: 0xc051104  jal         func_144410
    ctx->pc = 0x1456D0u;
    SET_GPR_U32(ctx, 31, 0x1456D8u);
    ctx->pc = 0x1456D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1456D0u;
            // 0x1456d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144410u;
    if (runtime->hasFunction(0x144410u)) {
        auto targetFn = runtime->lookupFunction(0x144410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1456D8u; }
        if (ctx->pc != 0x1456D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_144410_0x144450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1456D8u; }
        if (ctx->pc != 0x1456D8u) { return; }
    }
    ctx->pc = 0x1456D8u;
    // 0x1456d8: 0x1000019e  b           . + 4 + (0x19E << 2)
    ctx->pc = 0x1456D8u;
    {
        const bool branch_taken_0x1456d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1456d8) {
            ctx->pc = 0x145D54u;
            goto label_145d54;
        }
    }
    ctx->pc = 0x1456E0u;
label_1456e0:
    // 0x1456e0: 0xc05115e  jal         func_144578
    ctx->pc = 0x1456E0u;
    SET_GPR_U32(ctx, 31, 0x1456E8u);
    ctx->pc = 0x1456E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1456E0u;
            // 0x1456e4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144578u;
    if (runtime->hasFunction(0x144578u)) {
        auto targetFn = runtime->lookupFunction(0x144578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1456E8u; }
        if (ctx->pc != 0x1456E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144578_0x144578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1456E8u; }
        if (ctx->pc != 0x1456E8u) { return; }
    }
    ctx->pc = 0x1456E8u;
    // 0x1456e8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1456e8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1456ec: 0xc05115e  jal         func_144578
    ctx->pc = 0x1456ECu;
    SET_GPR_U32(ctx, 31, 0x1456F4u);
    ctx->pc = 0x1456F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1456ECu;
            // 0x1456f0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144578u;
    if (runtime->hasFunction(0x144578u)) {
        auto targetFn = runtime->lookupFunction(0x144578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1456F4u; }
        if (ctx->pc != 0x1456F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144578_0x144578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1456F4u; }
        if (ctx->pc != 0x1456F4u) { return; }
    }
    ctx->pc = 0x1456F4u;
    // 0x1456f4: 0x4600a064  .word       0x4600A064                   # cvt.w.s     $f1, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1456f4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1456f8: 0x44130800  mfc1        $s3, $f1
    ctx->pc = 0x1456f8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 19, bits); }
    // 0x1456fc: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1456fcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x145700: 0xc05118a  jal         func_144628
    ctx->pc = 0x145700u;
    SET_GPR_U32(ctx, 31, 0x145708u);
    ctx->pc = 0x145704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145700u;
            // 0x145704: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144628u;
    if (runtime->hasFunction(0x144628u)) {
        auto targetFn = runtime->lookupFunction(0x144628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145708u; }
        if (ctx->pc != 0x145708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144628_0x144628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145708u; }
        if (ctx->pc != 0x145708u) { return; }
    }
    ctx->pc = 0x145708u;
    // 0x145708: 0x4600a024  .word       0x4600A024                   # cvt.w.s     $f0, $f20 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x145708u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[20]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x14570c: 0x44120000  mfc1        $s2, $f0
    ctx->pc = 0x14570cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 18, bits); }
    // 0x145710: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x145710u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145714: 0xc0a268a  jal         func_289A28
    ctx->pc = 0x145714u;
    SET_GPR_U32(ctx, 31, 0x14571Cu);
    ctx->pc = 0x145718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145714u;
            // 0x145718: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289A28u;
    if (runtime->hasFunction(0x289A28u)) {
        auto targetFn = runtime->lookupFunction(0x289A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14571Cu; }
        if (ctx->pc != 0x14571Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289a28_0x289b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14571Cu; }
        if (ctx->pc != 0x14571Cu) { return; }
    }
    ctx->pc = 0x14571Cu;
    // 0x14571c: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x14571Cu;
    {
        const bool branch_taken_0x14571c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x145720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14571Cu;
            // 0x145720: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14571c) {
            ctx->pc = 0x145730u;
            goto label_145730;
        }
    }
    ctx->pc = 0x145724u;
    // 0x145724: 0x92102a  slt         $v0, $a0, $s2
    ctx->pc = 0x145724u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x145728: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x145728u;
    {
        const bool branch_taken_0x145728 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14572Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145728u;
            // 0x14572c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145728) {
            ctx->pc = 0x14574Cu;
            goto label_14574c;
        }
    }
    ctx->pc = 0x145730u;
label_145730:
    // 0x145730: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x145730u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x145734: 0x26a400c8  addiu       $a0, $s5, 0xC8
    ctx->pc = 0x145734u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 200));
    // 0x145738: 0x24a51300  addiu       $a1, $a1, 0x1300
    ctx->pc = 0x145738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4864));
    // 0x14573c: 0xc051114  jal         func_144450
    ctx->pc = 0x14573Cu;
    SET_GPR_U32(ctx, 31, 0x145744u);
    ctx->pc = 0x145740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14573Cu;
            // 0x145740: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144450u;
    if (runtime->hasFunction(0x144450u)) {
        auto targetFn = runtime->lookupFunction(0x144450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145744u; }
        if (ctx->pc != 0x145744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_144450_0x144520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145744u; }
        if (ctx->pc != 0x145744u) { return; }
    }
    ctx->pc = 0x145744u;
    // 0x145744: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x145744u;
    {
        const bool branch_taken_0x145744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145744) {
            ctx->pc = 0x1457B8u;
            goto label_1457b8;
        }
    }
    ctx->pc = 0x14574Cu;
label_14574c:
    // 0x14574c: 0x12102a  slt         $v0, $zero, $s2
    ctx->pc = 0x14574cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x145750: 0x6600006  bltz        $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x145750u;
    {
        const bool branch_taken_0x145750 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x145754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145750u;
            // 0x145754: 0x62900a  movz        $s2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145750) {
            ctx->pc = 0x14576Cu;
            goto label_14576c;
        }
    }
    ctx->pc = 0x145758u;
    // 0x145758: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x145758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x14575c: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x14575cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x145760: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x145760u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x145764: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x145764u;
    {
        const bool branch_taken_0x145764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x145768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145764u;
            // 0x145768: 0x26710001  addiu       $s1, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145764) {
            ctx->pc = 0x145778u;
            goto label_145778;
        }
    }
    ctx->pc = 0x14576Cu;
label_14576c:
    // 0x14576c: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x14576cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x145770: 0x529823  subu        $s3, $v0, $s2
    ctx->pc = 0x145770u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x145774: 0x26710001  addiu       $s1, $s3, 0x1
    ctx->pc = 0x145774u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_145778:
    // 0x145778: 0xc050f16  jal         func_143C58
    ctx->pc = 0x145778u;
    SET_GPR_U32(ctx, 31, 0x145780u);
    ctx->pc = 0x14577Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145778u;
            // 0x14577c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143C58u;
    if (runtime->hasFunction(0x143C58u)) {
        auto targetFn = runtime->lookupFunction(0x143C58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145780u; }
        if (ctx->pc != 0x145780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143C58_0x143c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145780u; }
        if (ctx->pc != 0x145780u) { return; }
    }
    ctx->pc = 0x145780u;
    // 0x145780: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x145780u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145784: 0x2645ffff  addiu       $a1, $s2, -0x1
    ctx->pc = 0x145784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x145788: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x145788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x14578c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x14578cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145790: 0xc0a274e  jal         func_289D38
    ctx->pc = 0x145790u;
    SET_GPR_U32(ctx, 31, 0x145798u);
    ctx->pc = 0x145794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145790u;
            // 0x145794: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289D38u;
    if (runtime->hasFunction(0x289D38u)) {
        auto targetFn = runtime->lookupFunction(0x289D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145798u; }
        if (ctx->pc != 0x145798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289d38_0x289f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145798u; }
        if (ctx->pc != 0x145798u) { return; }
    }
    ctx->pc = 0x145798u;
    // 0x145798: 0x2131021  addu        $v0, $s0, $s3
    ctx->pc = 0x145798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x14579c: 0x26a400c8  addiu       $a0, $s5, 0xC8
    ctx->pc = 0x14579cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 200));
    // 0x1457a0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1457a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1457a4: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x1457a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1457a8: 0xc051114  jal         func_144450
    ctx->pc = 0x1457A8u;
    SET_GPR_U32(ctx, 31, 0x1457B0u);
    ctx->pc = 0x1457ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1457A8u;
            // 0x1457ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144450u;
    if (runtime->hasFunction(0x144450u)) {
        auto targetFn = runtime->lookupFunction(0x144450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1457B0u; }
        if (ctx->pc != 0x1457B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_144450_0x144520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1457B0u; }
        if (ctx->pc != 0x1457B0u) { return; }
    }
    ctx->pc = 0x1457B0u;
    // 0x1457b0: 0xc050f1e  jal         func_143C78
    ctx->pc = 0x1457B0u;
    SET_GPR_U32(ctx, 31, 0x1457B8u);
    ctx->pc = 0x1457B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1457B0u;
            // 0x1457b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143C78u;
    if (runtime->hasFunction(0x143C78u)) {
        auto targetFn = runtime->lookupFunction(0x143C78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1457B8u; }
        if (ctx->pc != 0x1457B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143C78_0x143c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1457B8u; }
        if (ctx->pc != 0x1457B8u) { return; }
    }
    ctx->pc = 0x1457B8u;
label_1457b8:
    // 0x1457b8: 0xc050f1e  jal         func_143C78
    ctx->pc = 0x1457B8u;
    SET_GPR_U32(ctx, 31, 0x1457C0u);
    ctx->pc = 0x1457BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1457B8u;
            // 0x1457bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143C78u;
    if (runtime->hasFunction(0x143C78u)) {
        auto targetFn = runtime->lookupFunction(0x143C78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1457C0u; }
        if (ctx->pc != 0x1457C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143C78_0x143c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1457C0u; }
        if (ctx->pc != 0x1457C0u) { return; }
    }
    ctx->pc = 0x1457C0u;
    // 0x1457c0: 0x1000022e  b           . + 4 + (0x22E << 2)
    ctx->pc = 0x1457C0u;
    {
        const bool branch_taken_0x1457c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1457C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1457C0u;
            // 0x1457c4: 0xafb70040  sw          $s7, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1457c0) {
            ctx->pc = 0x14607Cu;
            goto label_14607c;
        }
    }
    ctx->pc = 0x1457C8u;
label_1457c8:
    // 0x1457c8: 0x26a400c8  addiu       $a0, $s5, 0xC8
    ctx->pc = 0x1457c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 200));
    // 0x1457cc: 0x8c820c00  lw          $v0, 0xC00($a0)
    ctx->pc = 0x1457ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3072)));
    // 0x1457d0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1457d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1457d4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1457d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1457d8: 0xac820c00  sw          $v0, 0xC00($a0)
    ctx->pc = 0x1457d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3072), GPR_U32(ctx, 2));
    // 0x1457dc: 0x2a31821  addu        $v1, $s5, $v1
    ctx->pc = 0x1457dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x1457e0: 0x946200ca  lhu         $v0, 0xCA($v1)
    ctx->pc = 0x1457e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 202)));
    // 0x1457e4: 0x10000224  b           . + 4 + (0x224 << 2)
    ctx->pc = 0x1457E4u;
    {
        const bool branch_taken_0x1457e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1457E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1457E4u;
            // 0x1457e8: 0xac820c04  sw          $v0, 0xC04($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 3076), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1457e4) {
            ctx->pc = 0x146078u;
            goto label_146078;
        }
    }
    ctx->pc = 0x1457ECu;
    // 0x1457ec: 0x0  nop
    ctx->pc = 0x1457ecu;
    // NOP
label_1457f0:
    // 0x1457f0: 0xc05115e  jal         func_144578
    ctx->pc = 0x1457F0u;
    SET_GPR_U32(ctx, 31, 0x1457F8u);
    ctx->pc = 0x1457F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1457F0u;
            // 0x1457f4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144578u;
    if (runtime->hasFunction(0x144578u)) {
        auto targetFn = runtime->lookupFunction(0x144578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1457F8u; }
        if (ctx->pc != 0x1457F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144578_0x144578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1457F8u; }
        if (ctx->pc != 0x1457F8u) { return; }
    }
    ctx->pc = 0x1457F8u;
    // 0x1457f8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x1457f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x1457fc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1457fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x145800: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x145800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x145804: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x145804u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x145808: 0x1000ff4d  b           . + 4 + (-0xB3 << 2)
    ctx->pc = 0x145808u;
    {
        const bool branch_taken_0x145808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14580Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145808u;
            // 0x14580c: 0x26a400c8  addiu       $a0, $s5, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145808) {
            ctx->pc = 0x145540u;
            runtime->cooperativeGuestYield();
            goto label_145540;
        }
    }
    ctx->pc = 0x145810u;
label_145810:
    // 0x145810: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x145810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x145814: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x145814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x145818: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x145818u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
    // 0x14581c: 0x26b000c8  addiu       $s0, $s5, 0xC8
    ctx->pc = 0x14581cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 200));
    // 0x145820: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x145820u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x145824: 0x8e020c00  lw          $v0, 0xC00($s0)
    ctx->pc = 0x145824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3072)));
    // 0x145828: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x145828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x14582c: 0xae020c00  sw          $v0, 0xC00($s0)
    ctx->pc = 0x14582cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3072), GPR_U32(ctx, 2));
    // 0x145830: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x145830u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x145834: 0x2a31021  addu        $v0, $s5, $v1
    ctx->pc = 0x145834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x145838: 0x944200ca  lhu         $v0, 0xCA($v0)
    ctx->pc = 0x145838u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 202)));
    // 0x14583c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x14583cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x145840: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x145840u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x145844: 0xae020c04  sw          $v0, 0xC04($s0)
    ctx->pc = 0x145844u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3076), GPR_U32(ctx, 2));
    // 0x145848: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x145848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x14584c: 0x8e020c04  lw          $v0, 0xC04($s0)
    ctx->pc = 0x14584cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
    // 0x145850: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x145850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x145854: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x145854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x145858: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x145858u;
    {
        const bool branch_taken_0x145858 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x14585Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145858u;
            // 0x14585c: 0xafa50014  sw          $a1, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145858) {
            ctx->pc = 0x145870u;
            goto label_145870;
        }
    }
    ctx->pc = 0x145860u;
    // 0x145860: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x145860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145864: 0x27a60018  addiu       $a2, $sp, 0x18
    ctx->pc = 0x145864u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x145868: 0xc051288  jal         func_144A20
    ctx->pc = 0x145868u;
    SET_GPR_U32(ctx, 31, 0x145870u);
    ctx->pc = 0x14586Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145868u;
            // 0x14586c: 0x27a7001c  addiu       $a3, $sp, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144A20u;
    if (runtime->hasFunction(0x144A20u)) {
        auto targetFn = runtime->lookupFunction(0x144A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145870u; }
        if (ctx->pc != 0x145870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144A20_0x144a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145870u; }
        if (ctx->pc != 0x145870u) { return; }
    }
    ctx->pc = 0x145870u;
label_145870:
    // 0x145870: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x145870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x145874: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x145874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145878: 0xc05109e  jal         func_144278
    ctx->pc = 0x145878u;
    SET_GPR_U32(ctx, 31, 0x145880u);
    ctx->pc = 0x14587Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145878u;
            // 0x14587c: 0x8fa6001c  lw          $a2, 0x1C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144278u;
    if (runtime->hasFunction(0x144278u)) {
        auto targetFn = runtime->lookupFunction(0x144278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145880u; }
        if (ctx->pc != 0x145880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144278_0x144278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145880u; }
        if (ctx->pc != 0x145880u) { return; }
    }
    ctx->pc = 0x145880u;
    // 0x145880: 0x100001fe  b           . + 4 + (0x1FE << 2)
    ctx->pc = 0x145880u;
    {
        const bool branch_taken_0x145880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145880u;
            // 0x145884: 0xafb70040  sw          $s7, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145880) {
            ctx->pc = 0x14607Cu;
            goto label_14607c;
        }
    }
    ctx->pc = 0x145888u;
label_145888:
    // 0x145888: 0x26a400c8  addiu       $a0, $s5, 0xC8
    ctx->pc = 0x145888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 200));
    // 0x14588c: 0x8c820c00  lw          $v0, 0xC00($a0)
    ctx->pc = 0x14588cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3072)));
    // 0x145890: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x145890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x145894: 0x26a500ca  addiu       $a1, $s5, 0xCA
    ctx->pc = 0x145894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 202));
    // 0x145898: 0xac820c00  sw          $v0, 0xC00($a0)
    ctx->pc = 0x145898u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3072), GPR_U32(ctx, 2));
    // 0x14589c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x14589cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1458a0: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x1458a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1458a4: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1458a4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1458a8: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1458a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1458ac: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1458acu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1458b0: 0xac820c04  sw          $v0, 0xC04($a0)
    ctx->pc = 0x1458b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3076), GPR_U32(ctx, 2));
    // 0x1458b4: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x1458b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x1458b8: 0x8c820c04  lw          $v0, 0xC04($a0)
    ctx->pc = 0x1458b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3076)));
    // 0x1458bc: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x1458bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x1458c0: 0x823821  addu        $a3, $a0, $v0
    ctx->pc = 0x1458c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1458c4: 0xafa70024  sw          $a3, 0x24($sp)
    ctx->pc = 0x1458c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 7));
    // 0x1458c8: 0x8c820c00  lw          $v0, 0xC00($a0)
    ctx->pc = 0x1458c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3072)));
    // 0x1458cc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1458ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1458d0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1458d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1458d4: 0xac820c00  sw          $v0, 0xC00($a0)
    ctx->pc = 0x1458d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3072), GPR_U32(ctx, 2));
    // 0x1458d8: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x1458d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x1458dc: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x1458dcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1458e0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1458e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x1458e4: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x1458e4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1458e8: 0xac820c04  sw          $v0, 0xC04($a0)
    ctx->pc = 0x1458e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3076), GPR_U32(ctx, 2));
    // 0x1458ec: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x1458ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x1458f0: 0x8c820c04  lw          $v0, 0xC04($a0)
    ctx->pc = 0x1458f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3076)));
    // 0x1458f4: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x1458f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x1458f8: 0x822821  addu        $a1, $a0, $v0
    ctx->pc = 0x1458f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1458fc: 0x12c001de  beqz        $s6, . + 4 + (0x1DE << 2)
    ctx->pc = 0x1458FCu;
    {
        const bool branch_taken_0x1458fc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x145900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1458FCu;
            // 0x145900: 0xafa5002c  sw          $a1, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1458fc) {
            ctx->pc = 0x146078u;
            goto label_146078;
        }
    }
    ctx->pc = 0x145904u;
    // 0x145904: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x145904u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x145908: 0xc0512fa  jal         func_144BE8
    ctx->pc = 0x145908u;
    SET_GPR_U32(ctx, 31, 0x145910u);
    ctx->pc = 0x14590Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145908u;
            // 0x14590c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144BE8u;
    if (runtime->hasFunction(0x144BE8u)) {
        auto targetFn = runtime->lookupFunction(0x144BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145910u; }
        if (ctx->pc != 0x145910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144BE8_0x144be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145910u; }
        if (ctx->pc != 0x145910u) { return; }
    }
    ctx->pc = 0x145910u;
    // 0x145910: 0x100001da  b           . + 4 + (0x1DA << 2)
    ctx->pc = 0x145910u;
    {
        const bool branch_taken_0x145910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145910u;
            // 0x145914: 0xafb70040  sw          $s7, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145910) {
            ctx->pc = 0x14607Cu;
            goto label_14607c;
        }
    }
    ctx->pc = 0x145918u;
label_145918:
    // 0x145918: 0x26a400c8  addiu       $a0, $s5, 0xC8
    ctx->pc = 0x145918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 200));
    // 0x14591c: 0x8c820c00  lw          $v0, 0xC00($a0)
    ctx->pc = 0x14591cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3072)));
    // 0x145920: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x145920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x145924: 0xac820c00  sw          $v0, 0xC00($a0)
    ctx->pc = 0x145924u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3072), GPR_U32(ctx, 2));
    // 0x145928: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x145928u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14592c: 0x2a31021  addu        $v0, $s5, $v1
    ctx->pc = 0x14592cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x145930: 0x944200ca  lhu         $v0, 0xCA($v0)
    ctx->pc = 0x145930u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 202)));
    // 0x145934: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x145934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x145938: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x145938u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14593c: 0xac820c04  sw          $v0, 0xC04($a0)
    ctx->pc = 0x14593cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 3076), GPR_U32(ctx, 2));
    // 0x145940: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x145940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x145944: 0x8c820c04  lw          $v0, 0xC04($a0)
    ctx->pc = 0x145944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3076)));
    // 0x145948: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x145948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x14594c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x14594cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x145950: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x145950u;
    {
        const bool branch_taken_0x145950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145950u;
            // 0x145954: 0xafa40034  sw          $a0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145950) {
            ctx->pc = 0x145CC0u;
            goto label_145cc0;
        }
    }
    ctx->pc = 0x145958u;
label_145958:
    // 0x145958: 0xc05118a  jal         func_144628
    ctx->pc = 0x145958u;
    SET_GPR_U32(ctx, 31, 0x145960u);
    ctx->pc = 0x14595Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145958u;
            // 0x14595c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144628u;
    if (runtime->hasFunction(0x144628u)) {
        auto targetFn = runtime->lookupFunction(0x144628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145960u; }
        if (ctx->pc != 0x145960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144628_0x144628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145960u; }
        if (ctx->pc != 0x145960u) { return; }
    }
    ctx->pc = 0x145960u;
    // 0x145960: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x145960u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145964: 0xc05118a  jal         func_144628
    ctx->pc = 0x145964u;
    SET_GPR_U32(ctx, 31, 0x14596Cu);
    ctx->pc = 0x145968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145964u;
            // 0x145968: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144628u;
    if (runtime->hasFunction(0x144628u)) {
        auto targetFn = runtime->lookupFunction(0x144628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14596Cu; }
        if (ctx->pc != 0x14596Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144628_0x144628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14596Cu; }
        if (ctx->pc != 0x14596Cu) { return; }
    }
    ctx->pc = 0x14596Cu;
    // 0x14596c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x14596cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145970: 0xc0a268a  jal         func_289A28
    ctx->pc = 0x145970u;
    SET_GPR_U32(ctx, 31, 0x145978u);
    ctx->pc = 0x145974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145970u;
            // 0x145974: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289A28u;
    if (runtime->hasFunction(0x289A28u)) {
        auto targetFn = runtime->lookupFunction(0x289A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145978u; }
        if (ctx->pc != 0x145978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289a28_0x289b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145978u; }
        if (ctx->pc != 0x145978u) { return; }
    }
    ctx->pc = 0x145978u;
    // 0x145978: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x145978u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14597c: 0xc0a268a  jal         func_289A28
    ctx->pc = 0x14597Cu;
    SET_GPR_U32(ctx, 31, 0x145984u);
    ctx->pc = 0x145980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14597Cu;
            // 0x145980: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289A28u;
    if (runtime->hasFunction(0x289A28u)) {
        auto targetFn = runtime->lookupFunction(0x289A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145984u; }
        if (ctx->pc != 0x145984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289a28_0x289b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145984u; }
        if (ctx->pc != 0x145984u) { return; }
    }
    ctx->pc = 0x145984u;
    // 0x145984: 0x2828021  addu        $s0, $s4, $v0
    ctx->pc = 0x145984u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x145988: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x145988u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14598c: 0xc050f16  jal         func_143C58
    ctx->pc = 0x14598Cu;
    SET_GPR_U32(ctx, 31, 0x145994u);
    ctx->pc = 0x145990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14598Cu;
            // 0x145990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143C58u;
    if (runtime->hasFunction(0x143C58u)) {
        auto targetFn = runtime->lookupFunction(0x143C58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145994u; }
        if (ctx->pc != 0x145994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143C58_0x143c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145994u; }
        if (ctx->pc != 0x145994u) { return; }
    }
    ctx->pc = 0x145994u;
    // 0x145994: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x145994u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145998: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x145998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14599c: 0xc0a2644  jal         func_289910
    ctx->pc = 0x14599Cu;
    SET_GPR_U32(ctx, 31, 0x1459A4u);
    ctx->pc = 0x1459A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14599Cu;
            // 0x1459a0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1459A4u; }
        if (ctx->pc != 0x1459A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1459A4u; }
        if (ctx->pc != 0x1459A4u) { return; }
    }
    ctx->pc = 0x1459A4u;
    // 0x1459a4: 0x2342021  addu        $a0, $s1, $s4
    ctx->pc = 0x1459a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 20)));
    // 0x1459a8: 0xc0a2644  jal         func_289910
    ctx->pc = 0x1459A8u;
    SET_GPR_U32(ctx, 31, 0x1459B0u);
    ctx->pc = 0x1459ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1459A8u;
            // 0x1459ac: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1459B0u; }
        if (ctx->pc != 0x1459B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1459B0u; }
        if (ctx->pc != 0x1459B0u) { return; }
    }
    ctx->pc = 0x1459B0u;
    // 0x1459b0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1459b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1459b4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1459b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1459b8: 0xc051114  jal         func_144450
    ctx->pc = 0x1459B8u;
    SET_GPR_U32(ctx, 31, 0x1459C0u);
    ctx->pc = 0x1459BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1459B8u;
            // 0x1459bc: 0x26a400c8  addiu       $a0, $s5, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144450u;
    if (runtime->hasFunction(0x144450u)) {
        auto targetFn = runtime->lookupFunction(0x144450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1459C0u; }
        if (ctx->pc != 0x1459C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_144450_0x144520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1459C0u; }
        if (ctx->pc != 0x1459C0u) { return; }
    }
    ctx->pc = 0x1459C0u;
    // 0x1459c0: 0xc050f1e  jal         func_143C78
    ctx->pc = 0x1459C0u;
    SET_GPR_U32(ctx, 31, 0x1459C8u);
    ctx->pc = 0x1459C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1459C0u;
            // 0x1459c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143C78u;
    if (runtime->hasFunction(0x143C78u)) {
        auto targetFn = runtime->lookupFunction(0x143C78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1459C8u; }
        if (ctx->pc != 0x1459C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143C78_0x143c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1459C8u; }
        if (ctx->pc != 0x1459C8u) { return; }
    }
    ctx->pc = 0x1459C8u;
    // 0x1459c8: 0xc050f1e  jal         func_143C78
    ctx->pc = 0x1459C8u;
    SET_GPR_U32(ctx, 31, 0x1459D0u);
    ctx->pc = 0x1459CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1459C8u;
            // 0x1459cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143C78u;
    if (runtime->hasFunction(0x143C78u)) {
        auto targetFn = runtime->lookupFunction(0x143C78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1459D0u; }
        if (ctx->pc != 0x1459D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143C78_0x143c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1459D0u; }
        if (ctx->pc != 0x1459D0u) { return; }
    }
    ctx->pc = 0x1459D0u;
    // 0x1459d0: 0xc050f1e  jal         func_143C78
    ctx->pc = 0x1459D0u;
    SET_GPR_U32(ctx, 31, 0x1459D8u);
    ctx->pc = 0x1459D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1459D0u;
            // 0x1459d4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143C78u;
    if (runtime->hasFunction(0x143C78u)) {
        auto targetFn = runtime->lookupFunction(0x143C78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1459D8u; }
        if (ctx->pc != 0x1459D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143C78_0x143c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1459D8u; }
        if (ctx->pc != 0x1459D8u) { return; }
    }
    ctx->pc = 0x1459D8u;
    // 0x1459d8: 0x100001a8  b           . + 4 + (0x1A8 << 2)
    ctx->pc = 0x1459D8u;
    {
        const bool branch_taken_0x1459d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1459DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1459D8u;
            // 0x1459dc: 0xafb70040  sw          $s7, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1459d8) {
            ctx->pc = 0x14607Cu;
            goto label_14607c;
        }
    }
    ctx->pc = 0x1459E0u;
label_1459e0:
    // 0x1459e0: 0xc051174  jal         func_1445D0
    ctx->pc = 0x1459E0u;
    SET_GPR_U32(ctx, 31, 0x1459E8u);
    ctx->pc = 0x1459E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1459E0u;
            // 0x1459e4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1445D0u;
    if (runtime->hasFunction(0x1445D0u)) {
        auto targetFn = runtime->lookupFunction(0x1445D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1459E8u; }
        if (ctx->pc != 0x1459E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001445D0_0x1445d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1459E8u; }
        if (ctx->pc != 0x1459E8u) { return; }
    }
    ctx->pc = 0x1459E8u;
    // 0x1459e8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1459e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1459ec: 0xc05118a  jal         func_144628
    ctx->pc = 0x1459ECu;
    SET_GPR_U32(ctx, 31, 0x1459F4u);
    ctx->pc = 0x1459F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1459ECu;
            // 0x1459f0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144628u;
    if (runtime->hasFunction(0x144628u)) {
        auto targetFn = runtime->lookupFunction(0x144628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1459F4u; }
        if (ctx->pc != 0x1459F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144628_0x144628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1459F4u; }
        if (ctx->pc != 0x1459F4u) { return; }
    }
    ctx->pc = 0x1459F4u;
    // 0x1459f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1459f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1459f8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x1459f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1459fc: 0xc051228  jal         func_1448A0
    ctx->pc = 0x1459FCu;
    SET_GPR_U32(ctx, 31, 0x145A04u);
    ctx->pc = 0x145A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1459FCu;
            // 0x145a00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1448A0u;
    if (runtime->hasFunction(0x1448A0u)) {
        auto targetFn = runtime->lookupFunction(0x1448A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145A04u; }
        if (ctx->pc != 0x145A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001448A0_0x1448a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145A04u; }
        if (ctx->pc != 0x145A04u) { return; }
    }
    ctx->pc = 0x145A04u;
    // 0x145a04: 0x1040010d  beqz        $v0, . + 4 + (0x10D << 2)
    ctx->pc = 0x145A04u;
    {
        const bool branch_taken_0x145a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x145A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145A04u;
            // 0x145a08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145a04) {
            ctx->pc = 0x145E3Cu;
            goto label_145e3c;
        }
    }
    ctx->pc = 0x145A0Cu;
    // 0x145a0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x145a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145a10: 0x27a60038  addiu       $a2, $sp, 0x38
    ctx->pc = 0x145a10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x145a14: 0xc0513c6  jal         func_144F18
    ctx->pc = 0x145A14u;
    SET_GPR_U32(ctx, 31, 0x145A1Cu);
    ctx->pc = 0x145A18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145A14u;
            // 0x145a18: 0x27a7003c  addiu       $a3, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144F18u;
    if (runtime->hasFunction(0x144F18u)) {
        auto targetFn = runtime->lookupFunction(0x144F18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145A1Cu; }
        if (ctx->pc != 0x145A1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144F18_0x144f18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145A1Cu; }
        if (ctx->pc != 0x145A1Cu) { return; }
    }
    ctx->pc = 0x145A1Cu;
    // 0x145a1c: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x145a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x145a20: 0x26a400c8  addiu       $a0, $s5, 0xC8
    ctx->pc = 0x145a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 200));
    // 0x145a24: 0xc05109e  jal         func_144278
    ctx->pc = 0x145A24u;
    SET_GPR_U32(ctx, 31, 0x145A2Cu);
    ctx->pc = 0x145A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145A24u;
            // 0x145a28: 0x8fa6003c  lw          $a2, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144278u;
    if (runtime->hasFunction(0x144278u)) {
        auto targetFn = runtime->lookupFunction(0x144278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145A2Cu; }
        if (ctx->pc != 0x145A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144278_0x144278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145A2Cu; }
        if (ctx->pc != 0x145A2Cu) { return; }
    }
    ctx->pc = 0x145A2Cu;
    // 0x145a2c: 0x10000103  b           . + 4 + (0x103 << 2)
    ctx->pc = 0x145A2Cu;
    {
        const bool branch_taken_0x145a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145a2c) {
            ctx->pc = 0x145E3Cu;
            goto label_145e3c;
        }
    }
    ctx->pc = 0x145A34u;
label_145a34:
    // 0x145a34: 0xc05118a  jal         func_144628
    ctx->pc = 0x145A34u;
    SET_GPR_U32(ctx, 31, 0x145A3Cu);
    ctx->pc = 0x145A38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145A34u;
            // 0x145a38: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144628u;
    if (runtime->hasFunction(0x144628u)) {
        auto targetFn = runtime->lookupFunction(0x144628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145A3Cu; }
        if (ctx->pc != 0x145A3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144628_0x144628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145A3Cu; }
        if (ctx->pc != 0x145A3Cu) { return; }
    }
    ctx->pc = 0x145A3Cu;
    // 0x145a3c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x145a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145a40: 0xc051174  jal         func_1445D0
    ctx->pc = 0x145A40u;
    SET_GPR_U32(ctx, 31, 0x145A48u);
    ctx->pc = 0x145A44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145A40u;
            // 0x145a44: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1445D0u;
    if (runtime->hasFunction(0x1445D0u)) {
        auto targetFn = runtime->lookupFunction(0x1445D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145A48u; }
        if (ctx->pc != 0x145A48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001445D0_0x1445d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145A48u; }
        if (ctx->pc != 0x145A48u) { return; }
    }
    ctx->pc = 0x145A48u;
    // 0x145a48: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x145a48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145a4c: 0xc05118a  jal         func_144628
    ctx->pc = 0x145A4Cu;
    SET_GPR_U32(ctx, 31, 0x145A54u);
    ctx->pc = 0x145A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145A4Cu;
            // 0x145a50: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144628u;
    if (runtime->hasFunction(0x144628u)) {
        auto targetFn = runtime->lookupFunction(0x144628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145A54u; }
        if (ctx->pc != 0x145A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144628_0x144628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145A54u; }
        if (ctx->pc != 0x145A54u) { return; }
    }
    ctx->pc = 0x145A54u;
    // 0x145a54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x145a54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145a58: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x145a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145a5c: 0xc051228  jal         func_1448A0
    ctx->pc = 0x145A5Cu;
    SET_GPR_U32(ctx, 31, 0x145A64u);
    ctx->pc = 0x145A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145A5Cu;
            // 0x145a60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1448A0u;
    if (runtime->hasFunction(0x1448A0u)) {
        auto targetFn = runtime->lookupFunction(0x1448A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145A64u; }
        if (ctx->pc != 0x145A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001448A0_0x1448a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145A64u; }
        if (ctx->pc != 0x145A64u) { return; }
    }
    ctx->pc = 0x145A64u;
    // 0x145a64: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x145A64u;
    {
        const bool branch_taken_0x145a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x145A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145A64u;
            // 0x145a68: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145a64) {
            ctx->pc = 0x145A7Cu;
            goto label_145a7c;
        }
    }
    ctx->pc = 0x145A6Cu;
    // 0x145a6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x145a6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145a70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x145a70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145a74: 0xc051478  jal         func_1451E0
    ctx->pc = 0x145A74u;
    SET_GPR_U32(ctx, 31, 0x145A7Cu);
    ctx->pc = 0x145A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145A74u;
            // 0x145a78: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1451E0u;
    if (runtime->hasFunction(0x1451E0u)) {
        auto targetFn = runtime->lookupFunction(0x1451E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145A7Cu; }
        if (ctx->pc != 0x145A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001451E0_0x1451e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145A7Cu; }
        if (ctx->pc != 0x145A7Cu) { return; }
    }
    ctx->pc = 0x145A7Cu;
label_145a7c:
    // 0x145a7c: 0xc050f1e  jal         func_143C78
    ctx->pc = 0x145A7Cu;
    SET_GPR_U32(ctx, 31, 0x145A84u);
    ctx->pc = 0x145A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145A7Cu;
            // 0x145a80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143C78u;
    if (runtime->hasFunction(0x143C78u)) {
        auto targetFn = runtime->lookupFunction(0x143C78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145A84u; }
        if (ctx->pc != 0x145A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143C78_0x143c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145A84u; }
        if (ctx->pc != 0x145A84u) { return; }
    }
    ctx->pc = 0x145A84u;
    // 0x145a84: 0x1000014c  b           . + 4 + (0x14C << 2)
    ctx->pc = 0x145A84u;
    {
        const bool branch_taken_0x145a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145a84) {
            ctx->pc = 0x145FB8u;
            goto label_145fb8;
        }
    }
    ctx->pc = 0x145A8Cu;
label_145a8c:
    // 0x145a8c: 0xc05118a  jal         func_144628
    ctx->pc = 0x145A8Cu;
    SET_GPR_U32(ctx, 31, 0x145A94u);
    ctx->pc = 0x145A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145A8Cu;
            // 0x145a90: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144628u;
    if (runtime->hasFunction(0x144628u)) {
        auto targetFn = runtime->lookupFunction(0x144628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145A94u; }
        if (ctx->pc != 0x145A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144628_0x144628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145A94u; }
        if (ctx->pc != 0x145A94u) { return; }
    }
    ctx->pc = 0x145A94u;
    // 0x145a94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x145a94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145a98: 0xc0514bc  jal         func_1452F0
    ctx->pc = 0x145A98u;
    SET_GPR_U32(ctx, 31, 0x145AA0u);
    ctx->pc = 0x145A9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145A98u;
            // 0x145a9c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1452F0u;
    if (runtime->hasFunction(0x1452F0u)) {
        auto targetFn = runtime->lookupFunction(0x1452F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145AA0u; }
        if (ctx->pc != 0x145AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1452f0_0x1452f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145AA0u; }
        if (ctx->pc != 0x145AA0u) { return; }
    }
    ctx->pc = 0x145AA0u;
    // 0x145aa0: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x145AA0u;
    {
        const bool branch_taken_0x145aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145aa0) {
            ctx->pc = 0x145D54u;
            goto label_145d54;
        }
    }
    ctx->pc = 0x145AA8u;
label_145aa8:
    // 0x145aa8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x145aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145aac: 0xc05118a  jal         func_144628
    ctx->pc = 0x145AACu;
    SET_GPR_U32(ctx, 31, 0x145AB4u);
    ctx->pc = 0x145AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145AACu;
            // 0x145ab0: 0x26b200c8  addiu       $s2, $s5, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), 200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144628u;
    if (runtime->hasFunction(0x144628u)) {
        auto targetFn = runtime->lookupFunction(0x144628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145AB4u; }
        if (ctx->pc != 0x145AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144628_0x144628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145AB4u; }
        if (ctx->pc != 0x145AB4u) { return; }
    }
    ctx->pc = 0x145AB4u;
    // 0x145ab4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x145ab4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145ab8: 0xc05118a  jal         func_144628
    ctx->pc = 0x145AB8u;
    SET_GPR_U32(ctx, 31, 0x145AC0u);
    ctx->pc = 0x145ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145AB8u;
            // 0x145abc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144628u;
    if (runtime->hasFunction(0x144628u)) {
        auto targetFn = runtime->lookupFunction(0x144628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145AC0u; }
        if (ctx->pc != 0x145AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144628_0x144628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145AC0u; }
        if (ctx->pc != 0x145AC0u) { return; }
    }
    ctx->pc = 0x145AC0u;
    // 0x145ac0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x145ac0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145ac4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x145ac4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145ac8: 0xc0a25f1  jal         func_2897C4
    ctx->pc = 0x145AC8u;
    SET_GPR_U32(ctx, 31, 0x145AD0u);
    ctx->pc = 0x145ACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145AC8u;
            // 0x145acc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2897C4u;
    if (runtime->hasFunction(0x2897C4u)) {
        auto targetFn = runtime->lookupFunction(0x2897C4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145AD0u; }
        if (ctx->pc != 0x145AD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2897c4_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145AD0u; }
        if (ctx->pc != 0x145AD0u) { return; }
    }
    ctx->pc = 0x145AD0u;
    // 0x145ad0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x145ad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145ad4: 0xc0510f2  jal         func_1443C8
    ctx->pc = 0x145AD4u;
    SET_GPR_U32(ctx, 31, 0x145ADCu);
    ctx->pc = 0x145AD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145AD4u;
            // 0x145ad8: 0x22fc2  srl         $a1, $v0, 31 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1443C8u;
    if (runtime->hasFunction(0x1443C8u)) {
        auto targetFn = runtime->lookupFunction(0x1443C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145ADCu; }
        if (ctx->pc != 0x145ADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1443c8_0x144410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145ADCu; }
        if (ctx->pc != 0x145ADCu) { return; }
    }
    ctx->pc = 0x145ADCu;
    // 0x145adc: 0x100000d5  b           . + 4 + (0xD5 << 2)
    ctx->pc = 0x145ADCu;
    {
        const bool branch_taken_0x145adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145adc) {
            ctx->pc = 0x145E34u;
            goto label_145e34;
        }
    }
    ctx->pc = 0x145AE4u;
label_145ae4:
    // 0x145ae4: 0xc05115e  jal         func_144578
    ctx->pc = 0x145AE4u;
    SET_GPR_U32(ctx, 31, 0x145AECu);
    ctx->pc = 0x145AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145AE4u;
            // 0x145ae8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144578u;
    if (runtime->hasFunction(0x144578u)) {
        auto targetFn = runtime->lookupFunction(0x144578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145AECu; }
        if (ctx->pc != 0x145AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144578_0x144578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145AECu; }
        if (ctx->pc != 0x145AECu) { return; }
    }
    ctx->pc = 0x145AECu;
    // 0x145aec: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x145aecu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x145af0: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x145af0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x145af4: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x145af4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x145af8: 0xc04f99c  jal         func_13E670
    ctx->pc = 0x145AF8u;
    SET_GPR_U32(ctx, 31, 0x145B00u);
    ctx->pc = 0x145AFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145AF8u;
            // 0x145afc: 0x2484b950  addiu       $a0, $a0, -0x46B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E670u;
    if (runtime->hasFunction(0x13E670u)) {
        auto targetFn = runtime->lookupFunction(0x13E670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145B00u; }
        if (ctx->pc != 0x145B00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E670_0x13e670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145B00u; }
        if (ctx->pc != 0x145B00u) { return; }
    }
    ctx->pc = 0x145B00u;
    // 0x145b00: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x145B00u;
    {
        const bool branch_taken_0x145b00 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x145B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145B00u;
            // 0x145b04: 0x26a400c8  addiu       $a0, $s5, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145b00) {
            ctx->pc = 0x145B18u;
            goto label_145b18;
        }
    }
    ctx->pc = 0x145B08u;
    // 0x145b08: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x145b08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x145b0c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x145b0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x145b10: 0x1000fe8b  b           . + 4 + (-0x175 << 2)
    ctx->pc = 0x145B10u;
    {
        const bool branch_taken_0x145b10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145b10) {
            ctx->pc = 0x145540u;
            runtime->cooperativeGuestYield();
            goto label_145540;
        }
    }
    ctx->pc = 0x145B18u;
label_145b18:
    // 0x145b18: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x145b18u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x145b1c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x145b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x145b20: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x145b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x145b24: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x145b24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x145b28: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x145b28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x145b2c: 0x1000fe84  b           . + 4 + (-0x17C << 2)
    ctx->pc = 0x145B2Cu;
    {
        const bool branch_taken_0x145b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145B2Cu;
            // 0x145b30: 0x460c6300  add.s       $f12, $f12, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x145b2c) {
            ctx->pc = 0x145540u;
            runtime->cooperativeGuestYield();
            goto label_145540;
        }
    }
    ctx->pc = 0x145B34u;
label_145b34:
    // 0x145b34: 0xc05118a  jal         func_144628
    ctx->pc = 0x145B34u;
    SET_GPR_U32(ctx, 31, 0x145B3Cu);
    ctx->pc = 0x145B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145B34u;
            // 0x145b38: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144628u;
    if (runtime->hasFunction(0x144628u)) {
        auto targetFn = runtime->lookupFunction(0x144628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145B3Cu; }
        if (ctx->pc != 0x145B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144628_0x144628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145B3Cu; }
        if (ctx->pc != 0x145B3Cu) { return; }
    }
    ctx->pc = 0x145B3Cu;
    // 0x145b3c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x145b3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145b40: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x145b40u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x145b44: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x145b44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x145b48: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x145b48u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x145b4c: 0xc051104  jal         func_144410
    ctx->pc = 0x145B4Cu;
    SET_GPR_U32(ctx, 31, 0x145B54u);
    ctx->pc = 0x145B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145B4Cu;
            // 0x145b50: 0x26a400c8  addiu       $a0, $s5, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144410u;
    if (runtime->hasFunction(0x144410u)) {
        auto targetFn = runtime->lookupFunction(0x144410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145B54u; }
        if (ctx->pc != 0x145B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_144410_0x144450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145B54u; }
        if (ctx->pc != 0x145B54u) { return; }
    }
    ctx->pc = 0x145B54u;
    // 0x145b54: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x145B54u;
    {
        const bool branch_taken_0x145b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145b54) {
            ctx->pc = 0x145D54u;
            goto label_145d54;
        }
    }
    ctx->pc = 0x145B5Cu;
label_145b5c:
    // 0x145b5c: 0xc05115e  jal         func_144578
    ctx->pc = 0x145B5Cu;
    SET_GPR_U32(ctx, 31, 0x145B64u);
    ctx->pc = 0x145B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145B5Cu;
            // 0x145b60: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144578u;
    if (runtime->hasFunction(0x144578u)) {
        auto targetFn = runtime->lookupFunction(0x144578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145B64u; }
        if (ctx->pc != 0x145B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144578_0x144578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145B64u; }
        if (ctx->pc != 0x145B64u) { return; }
    }
    ctx->pc = 0x145B64u;
    // 0x145b64: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x145b64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x145b68: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x145b68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x145b6c: 0xa3a00001  sb          $zero, 0x1($sp)
    ctx->pc = 0x145b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x145b70: 0x26a400c8  addiu       $a0, $s5, 0xC8
    ctx->pc = 0x145b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 200));
    // 0x145b74: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x145b74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145b78: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x145b78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x145b7c: 0xc051114  jal         func_144450
    ctx->pc = 0x145B7Cu;
    SET_GPR_U32(ctx, 31, 0x145B84u);
    ctx->pc = 0x145B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145B7Cu;
            // 0x145b80: 0xa3a20000  sb          $v0, 0x0($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144450u;
    if (runtime->hasFunction(0x144450u)) {
        auto targetFn = runtime->lookupFunction(0x144450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145B84u; }
        if (ctx->pc != 0x145B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_144450_0x144520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145B84u; }
        if (ctx->pc != 0x145B84u) { return; }
    }
    ctx->pc = 0x145B84u;
    // 0x145b84: 0x1000013d  b           . + 4 + (0x13D << 2)
    ctx->pc = 0x145B84u;
    {
        const bool branch_taken_0x145b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145B88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145B84u;
            // 0x145b88: 0xafb70040  sw          $s7, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145b84) {
            ctx->pc = 0x14607Cu;
            goto label_14607c;
        }
    }
    ctx->pc = 0x145B8Cu;
label_145b8c:
    // 0x145b8c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x145b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x145b90: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x145b90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x145b94: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x145b94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x145b98: 0x8cc27908  lw          $v0, 0x7908($a2)
    ctx->pc = 0x145b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 30984)));
    // 0x145b9c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x145b9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x145ba0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x145BA0u;
    {
        const bool branch_taken_0x145ba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x145BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145BA0u;
            // 0x145ba4: 0x3c030001  lui         $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145ba0) {
            ctx->pc = 0x145BB8u;
            goto label_145bb8;
        }
    }
    ctx->pc = 0x145BA8u;
    // 0x145ba8: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x145ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x145bac: 0xdc823628  ld          $v0, 0x3628($a0)
    ctx->pc = 0x145bacu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 13864)));
    // 0x145bb0: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x145bb0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x145bb4: 0xfc823628  sd          $v0, 0x3628($a0)
    ctx->pc = 0x145bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 13864), GPR_U64(ctx, 2));
label_145bb8:
    // 0x145bb8: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x145bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x145bbc: 0x5203c  dsll32      $a0, $a1, 0
    ctx->pc = 0x145bbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) << (32 + 0));
    // 0x145bc0: 0xdc423628  ld          $v0, 0x3628($v0)
    ctx->pc = 0x145bc0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 13864)));
    // 0x145bc4: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x145bc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x145bc8: 0xacc57908  sw          $a1, 0x7908($a2)
    ctx->pc = 0x145bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 30984), GPR_U32(ctx, 5));
    // 0x145bcc: 0x44202d  daddu       $a0, $v0, $a0
    ctx->pc = 0x145bccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x145bd0: 0xc0a0fc6  jal         func_283F18
    ctx->pc = 0x145BD0u;
    SET_GPR_U32(ctx, 31, 0x145BD8u);
    ctx->pc = 0x145BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145BD0u;
            // 0x145bd4: 0x2405024a  addiu       $a1, $zero, 0x24A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 586));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283F18u;
    if (runtime->hasFunction(0x283F18u)) {
        auto targetFn = runtime->lookupFunction(0x283F18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145BD8u; }
        if (ctx->pc != 0x145BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_283f18_0x2844e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145BD8u; }
        if (ctx->pc != 0x145BD8u) { return; }
    }
    ctx->pc = 0x145BD8u;
    // 0x145bd8: 0x8ea30cf0  lw          $v1, 0xCF0($s5)
    ctx->pc = 0x145bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 3312)));
    // 0x145bdc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x145bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x145be0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x145be0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x145be4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x145be4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x145be8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x145BE8u;
    {
        const bool branch_taken_0x145be8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x145BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145BE8u;
            // 0x145bec: 0x26a400c8  addiu       $a0, $s5, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145be8) {
            ctx->pc = 0x145C00u;
            goto label_145c00;
        }
    }
    ctx->pc = 0x145BF0u;
    // 0x145bf0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x145bf0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x145bf4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x145bf4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x145bf8: 0x1000fe51  b           . + 4 + (-0x1AF << 2)
    ctx->pc = 0x145BF8u;
    {
        const bool branch_taken_0x145bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145bf8) {
            ctx->pc = 0x145540u;
            runtime->cooperativeGuestYield();
            goto label_145540;
        }
    }
    ctx->pc = 0x145C00u;
label_145c00:
    // 0x145c00: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x145c00u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x145c04: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x145c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x145c08: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x145c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x145c0c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x145c0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x145c10: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x145c10u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x145c14: 0x1000fe4a  b           . + 4 + (-0x1B6 << 2)
    ctx->pc = 0x145C14u;
    {
        const bool branch_taken_0x145c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145C14u;
            // 0x145c18: 0x460c6300  add.s       $f12, $f12, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x145c14) {
            ctx->pc = 0x145540u;
            runtime->cooperativeGuestYield();
            goto label_145540;
        }
    }
    ctx->pc = 0x145C1Cu;
label_145c1c:
    // 0x145c1c: 0x88820003  lwl         $v0, 0x3($a0)
    ctx->pc = 0x145c1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x145c20: 0x24830002  addiu       $v1, $a0, 0x2
    ctx->pc = 0x145c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x145c24: 0x98820000  lwr         $v0, 0x0($a0)
    ctx->pc = 0x145c24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x145c28: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x145c28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x145c2c: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x145c2cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x145c30: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x145c30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x145c34: 0x24841930  addiu       $a0, $a0, 0x1930
    ctx->pc = 0x145c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6448));
    // 0x145c38: 0xc090508  jal         func_241420
    ctx->pc = 0x145C38u;
    SET_GPR_U32(ctx, 31, 0x145C40u);
    ctx->pc = 0x145C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145C38u;
            // 0x145c3c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x241420u;
    if (runtime->hasFunction(0x241420u)) {
        auto targetFn = runtime->lookupFunction(0x241420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145C40u; }
        if (ctx->pc != 0x145C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00241420_0x241420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145C40u; }
        if (ctx->pc != 0x145C40u) { return; }
    }
    ctx->pc = 0x145C40u;
    // 0x145c40: 0x52c0010e  beql        $s6, $zero, . + 4 + (0x10E << 2)
    ctx->pc = 0x145C40u;
    {
        const bool branch_taken_0x145c40 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x145c40) {
            ctx->pc = 0x145C44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x145C40u;
            // 0x145c44: 0xafb70040  sw          $s7, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14607Cu;
            goto label_14607c;
        }
    }
    ctx->pc = 0x145C48u;
    // 0x145c48: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x145C48u;
    {
        const bool branch_taken_0x145c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145C48u;
            // 0x145c4c: 0x24020082  addiu       $v0, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145c48) {
            ctx->pc = 0x145D14u;
            goto label_145d14;
        }
    }
    ctx->pc = 0x145C50u;
label_145c50:
    // 0x145c50: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x145c50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x145c54: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x145c54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145c58: 0xc050f02  jal         func_143C08
    ctx->pc = 0x145C58u;
    SET_GPR_U32(ctx, 31, 0x145C60u);
    ctx->pc = 0x145C5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145C58u;
            // 0x145c5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143C08u;
    if (runtime->hasFunction(0x143C08u)) {
        auto targetFn = runtime->lookupFunction(0x143C08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145C60u; }
        if (ctx->pc != 0x145C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_143c08_0x143c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145C60u; }
        if (ctx->pc != 0x145C60u) { return; }
    }
    ctx->pc = 0x145C60u;
    // 0x145c60: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x145c60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145c64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x145c64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145c68: 0xc050f02  jal         func_143C08
    ctx->pc = 0x145C68u;
    SET_GPR_U32(ctx, 31, 0x145C70u);
    ctx->pc = 0x145C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145C68u;
            // 0x145c6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143C08u;
    if (runtime->hasFunction(0x143C08u)) {
        auto targetFn = runtime->lookupFunction(0x143C08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145C70u; }
        if (ctx->pc != 0x145C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_143c08_0x143c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145C70u; }
        if (ctx->pc != 0x145C70u) { return; }
    }
    ctx->pc = 0x145C70u;
    // 0x145c70: 0x52c00102  beql        $s6, $zero, . + 4 + (0x102 << 2)
    ctx->pc = 0x145C70u;
    {
        const bool branch_taken_0x145c70 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x145c70) {
            ctx->pc = 0x145C74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x145C70u;
            // 0x145c74: 0xafb70040  sw          $s7, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14607Cu;
            goto label_14607c;
        }
    }
    ctx->pc = 0x145C78u;
    // 0x145c78: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x145c78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145c7c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x145c7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145c80: 0xc051390  jal         func_144E40
    ctx->pc = 0x145C80u;
    SET_GPR_U32(ctx, 31, 0x145C88u);
    ctx->pc = 0x145C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145C80u;
            // 0x145c84: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144E40u;
    if (runtime->hasFunction(0x144E40u)) {
        auto targetFn = runtime->lookupFunction(0x144E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145C88u; }
        if (ctx->pc != 0x145C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144E40_0x144e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145C88u; }
        if (ctx->pc != 0x145C88u) { return; }
    }
    ctx->pc = 0x145C88u;
    // 0x145c88: 0x100000fc  b           . + 4 + (0xFC << 2)
    ctx->pc = 0x145C88u;
    {
        const bool branch_taken_0x145c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145C88u;
            // 0x145c8c: 0xafb70040  sw          $s7, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145c88) {
            ctx->pc = 0x14607Cu;
            goto label_14607c;
        }
    }
    ctx->pc = 0x145C90u;
label_145c90:
    // 0x145c90: 0x24820003  addiu       $v0, $a0, 0x3
    ctx->pc = 0x145c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x145c94: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x145C94u;
    {
        const bool branch_taken_0x145c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145C94u;
            // 0x145c98: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145c94) {
            ctx->pc = 0x146078u;
            goto label_146078;
        }
    }
    ctx->pc = 0x145C9Cu;
label_145c9c:
    // 0x145c9c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x145c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x145ca0: 0xc050f02  jal         func_143C08
    ctx->pc = 0x145CA0u;
    SET_GPR_U32(ctx, 31, 0x145CA8u);
    ctx->pc = 0x145CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145CA0u;
            // 0x145ca4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143C08u;
    if (runtime->hasFunction(0x143C08u)) {
        auto targetFn = runtime->lookupFunction(0x143C08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145CA8u; }
        if (ctx->pc != 0x145CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_143c08_0x143c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145CA8u; }
        if (ctx->pc != 0x145CA8u) { return; }
    }
    ctx->pc = 0x145CA8u;
    // 0x145ca8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x145ca8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145cac: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x145cacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x145cb0: 0x24841940  addiu       $a0, $a0, 0x1940
    ctx->pc = 0x145cb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6464));
    // 0x145cb4: 0xc090508  jal         func_241420
    ctx->pc = 0x145CB4u;
    SET_GPR_U32(ctx, 31, 0x145CBCu);
    ctx->pc = 0x145CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145CB4u;
            // 0x145cb8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x241420u;
    if (runtime->hasFunction(0x241420u)) {
        auto targetFn = runtime->lookupFunction(0x241420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145CBCu; }
        if (ctx->pc != 0x145CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00241420_0x241420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145CBCu; }
        if (ctx->pc != 0x145CBCu) { return; }
    }
    ctx->pc = 0x145CBCu;
    // 0x145cbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x145cbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_145cc0:
    // 0x145cc0: 0xc051228  jal         func_1448A0
    ctx->pc = 0x145CC0u;
    SET_GPR_U32(ctx, 31, 0x145CC8u);
    ctx->pc = 0x145CC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145CC0u;
            // 0x145cc4: 0x3c0282d  daddu       $a1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1448A0u;
    if (runtime->hasFunction(0x1448A0u)) {
        auto targetFn = runtime->lookupFunction(0x1448A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145CC8u; }
        if (ctx->pc != 0x145CC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001448A0_0x1448a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145CC8u; }
        if (ctx->pc != 0x145CC8u) { return; }
    }
    ctx->pc = 0x145CC8u;
    // 0x145cc8: 0x100000eb  b           . + 4 + (0xEB << 2)
    ctx->pc = 0x145CC8u;
    {
        const bool branch_taken_0x145cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145CC8u;
            // 0x145ccc: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145cc8) {
            ctx->pc = 0x146078u;
            goto label_146078;
        }
    }
    ctx->pc = 0x145CD0u;
label_145cd0:
    // 0x145cd0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x145cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x145cd4: 0xc050f02  jal         func_143C08
    ctx->pc = 0x145CD4u;
    SET_GPR_U32(ctx, 31, 0x145CDCu);
    ctx->pc = 0x145CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145CD4u;
            // 0x145cd8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143C08u;
    if (runtime->hasFunction(0x143C08u)) {
        auto targetFn = runtime->lookupFunction(0x143C08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145CDCu; }
        if (ctx->pc != 0x145CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_143c08_0x143c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145CDCu; }
        if (ctx->pc != 0x145CDCu) { return; }
    }
    ctx->pc = 0x145CDCu;
    // 0x145cdc: 0x12c000e6  beqz        $s6, . + 4 + (0xE6 << 2)
    ctx->pc = 0x145CDCu;
    {
        const bool branch_taken_0x145cdc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x145CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145CDCu;
            // 0x145ce0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145cdc) {
            ctx->pc = 0x146078u;
            goto label_146078;
        }
    }
    ctx->pc = 0x145CE4u;
    // 0x145ce4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x145ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145ce8: 0xc051348  jal         func_144D20
    ctx->pc = 0x145CE8u;
    SET_GPR_U32(ctx, 31, 0x145CF0u);
    ctx->pc = 0x145CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145CE8u;
            // 0x145cec: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144D20u;
    if (runtime->hasFunction(0x144D20u)) {
        auto targetFn = runtime->lookupFunction(0x144D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145CF0u; }
        if (ctx->pc != 0x145CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144D20_0x144d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145CF0u; }
        if (ctx->pc != 0x145CF0u) { return; }
    }
    ctx->pc = 0x145CF0u;
    // 0x145cf0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x145cf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145cf4: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x145cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x145cf8: 0x24841950  addiu       $a0, $a0, 0x1950
    ctx->pc = 0x145cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6480));
    // 0x145cfc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x145cfcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145d00: 0xc090508  jal         func_241420
    ctx->pc = 0x145D00u;
    SET_GPR_U32(ctx, 31, 0x145D08u);
    ctx->pc = 0x145D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145D00u;
            // 0x145d04: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x241420u;
    if (runtime->hasFunction(0x241420u)) {
        auto targetFn = runtime->lookupFunction(0x241420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145D08u; }
        if (ctx->pc != 0x145D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00241420_0x241420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145D08u; }
        if (ctx->pc != 0x145D08u) { return; }
    }
    ctx->pc = 0x145D08u;
    // 0x145d08: 0x60200dc  bltzl       $s0, . + 4 + (0xDC << 2)
    ctx->pc = 0x145D08u;
    {
        const bool branch_taken_0x145d08 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x145d08) {
            ctx->pc = 0x145D0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x145D08u;
            // 0x145d0c: 0xafb70040  sw          $s7, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14607Cu;
            goto label_14607c;
        }
    }
    ctx->pc = 0x145D10u;
    // 0x145d10: 0x24020082  addiu       $v0, $zero, 0x82
    ctx->pc = 0x145d10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
label_145d14:
    // 0x145d14: 0xaed00014  sw          $s0, 0x14($s6)
    ctx->pc = 0x145d14u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 20), GPR_U32(ctx, 16));
    // 0x145d18: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x145D18u;
    {
        const bool branch_taken_0x145d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145D18u;
            // 0x145d1c: 0xaec20018  sw          $v0, 0x18($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145d18) {
            ctx->pc = 0x146078u;
            goto label_146078;
        }
    }
    ctx->pc = 0x145D20u;
label_145d20:
    // 0x145d20: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x145d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x145d24: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x145d24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145d28: 0xc05118a  jal         func_144628
    ctx->pc = 0x145D28u;
    SET_GPR_U32(ctx, 31, 0x145D30u);
    ctx->pc = 0x145D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145D28u;
            // 0x145d2c: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144628u;
    if (runtime->hasFunction(0x144628u)) {
        auto targetFn = runtime->lookupFunction(0x144628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145D30u; }
        if (ctx->pc != 0x145D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144628_0x144628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145D30u; }
        if (ctx->pc != 0x145D30u) { return; }
    }
    ctx->pc = 0x145D30u;
    // 0x145d30: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x145d30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145d34: 0x2405003a  addiu       $a1, $zero, 0x3A
    ctx->pc = 0x145d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
    // 0x145d38: 0xc0a2589  jal         func_289624
    ctx->pc = 0x145D38u;
    SET_GPR_U32(ctx, 31, 0x145D40u);
    ctx->pc = 0x145D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145D38u;
            // 0x145d3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289624u;
    if (runtime->hasFunction(0x289624u)) {
        auto targetFn = runtime->lookupFunction(0x289624u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145D40u; }
        if (ctx->pc != 0x145D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289624_0x2897c4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145D40u; }
        if (ctx->pc != 0x145D40u) { return; }
    }
    ctx->pc = 0x145D40u;
    // 0x145d40: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x145D40u;
    {
        const bool branch_taken_0x145d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x145D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145D40u;
            // 0x145d44: 0x502823  subu        $a1, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145d40) {
            ctx->pc = 0x145D54u;
            goto label_145d54;
        }
    }
    ctx->pc = 0x145D48u;
    // 0x145d48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x145d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145d4c: 0xc051274  jal         func_1449D0
    ctx->pc = 0x145D4Cu;
    SET_GPR_U32(ctx, 31, 0x145D54u);
    ctx->pc = 0x145D50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145D4Cu;
            // 0x145d50: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1449D0u;
    if (runtime->hasFunction(0x1449D0u)) {
        auto targetFn = runtime->lookupFunction(0x1449D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145D54u; }
        if (ctx->pc != 0x145D54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001449D0_0x1449d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145D54u; }
        if (ctx->pc != 0x145D54u) { return; }
    }
    ctx->pc = 0x145D54u;
label_145d54:
    // 0x145d54: 0xc050f1e  jal         func_143C78
    ctx->pc = 0x145D54u;
    SET_GPR_U32(ctx, 31, 0x145D5Cu);
    ctx->pc = 0x145D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145D54u;
            // 0x145d58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143C78u;
    if (runtime->hasFunction(0x143C78u)) {
        auto targetFn = runtime->lookupFunction(0x143C78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145D5Cu; }
        if (ctx->pc != 0x145D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143C78_0x143c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145D5Cu; }
        if (ctx->pc != 0x145D5Cu) { return; }
    }
    ctx->pc = 0x145D5Cu;
    // 0x145d5c: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x145D5Cu;
    {
        const bool branch_taken_0x145d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145D5Cu;
            // 0x145d60: 0xafb70040  sw          $s7, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145d5c) {
            ctx->pc = 0x14607Cu;
            goto label_14607c;
        }
    }
    ctx->pc = 0x145D64u;
label_145d64:
    // 0x145d64: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x145d64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145d68: 0xb7102b  sltu        $v0, $a1, $s7
    ctx->pc = 0x145d68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x145d6c: 0x504000c3  beql        $v0, $zero, . + 4 + (0xC3 << 2)
    ctx->pc = 0x145D6Cu;
    {
        const bool branch_taken_0x145d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145d6c) {
            ctx->pc = 0x145D70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x145D6Cu;
            // 0x145d70: 0xafb70040  sw          $s7, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14607Cu;
            goto label_14607c;
        }
    }
    ctx->pc = 0x145D74u;
    // 0x145d74: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x145d74u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_145d78:
    // 0x145d78: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x145d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x145d7c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x145d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x145d80: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x145D80u;
    {
        const bool branch_taken_0x145d80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x145D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145D80u;
            // 0x145d84: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145d80) {
            ctx->pc = 0x145DACu;
            goto label_145dac;
        }
    }
    ctx->pc = 0x145D88u;
    // 0x145d88: 0x88a20004  lwl         $v0, 0x4($a1)
    ctx->pc = 0x145d88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x145d8c: 0x24a30005  addiu       $v1, $a1, 0x5
    ctx->pc = 0x145d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
    // 0x145d90: 0x98a20001  lwr         $v0, 0x1($a1)
    ctx->pc = 0x145d90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 1); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x145d94: 0x26a400c8  addiu       $a0, $s5, 0xC8
    ctx->pc = 0x145d94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 200));
    // 0x145d98: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x145d98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x145d9c: 0xc051104  jal         func_144410
    ctx->pc = 0x145D9Cu;
    SET_GPR_U32(ctx, 31, 0x145DA4u);
    ctx->pc = 0x145DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145D9Cu;
            // 0x145da0: 0xafa30040  sw          $v1, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144410u;
    if (runtime->hasFunction(0x144410u)) {
        auto targetFn = runtime->lookupFunction(0x144410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145DA4u; }
        if (ctx->pc != 0x145DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_144410_0x144450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145DA4u; }
        if (ctx->pc != 0x145DA4u) { return; }
    }
    ctx->pc = 0x145DA4u;
    // 0x145da4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x145DA4u;
    {
        const bool branch_taken_0x145da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145DA4u;
            // 0x145da8: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145da4) {
            ctx->pc = 0x145DC8u;
            goto label_145dc8;
        }
    }
    ctx->pc = 0x145DACu;
label_145dac:
    // 0x145dac: 0xc050f02  jal         func_143C08
    ctx->pc = 0x145DACu;
    SET_GPR_U32(ctx, 31, 0x145DB4u);
    ctx->pc = 0x145DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145DACu;
            // 0x145db0: 0x27a50044  addiu       $a1, $sp, 0x44 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143C08u;
    if (runtime->hasFunction(0x143C08u)) {
        auto targetFn = runtime->lookupFunction(0x143C08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145DB4u; }
        if (ctx->pc != 0x145DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_143c08_0x143c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145DB4u; }
        if (ctx->pc != 0x145DB4u) { return; }
    }
    ctx->pc = 0x145DB4u;
    // 0x145db4: 0x8fa60044  lw          $a2, 0x44($sp)
    ctx->pc = 0x145db4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x145db8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x145db8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145dbc: 0xc051114  jal         func_144450
    ctx->pc = 0x145DBCu;
    SET_GPR_U32(ctx, 31, 0x145DC4u);
    ctx->pc = 0x145DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145DBCu;
            // 0x145dc0: 0x26a400c8  addiu       $a0, $s5, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144450u;
    if (runtime->hasFunction(0x144450u)) {
        auto targetFn = runtime->lookupFunction(0x144450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145DC4u; }
        if (ctx->pc != 0x145DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_144450_0x144520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145DC4u; }
        if (ctx->pc != 0x145DC4u) { return; }
    }
    ctx->pc = 0x145DC4u;
    // 0x145dc4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x145dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_145dc8:
    // 0x145dc8: 0xb7102b  sltu        $v0, $a1, $s7
    ctx->pc = 0x145dc8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x145dcc: 0x5440ffea  bnel        $v0, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x145DCCu;
    {
        const bool branch_taken_0x145dcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145dcc) {
            ctx->pc = 0x145DD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x145DCCu;
            // 0x145dd0: 0x90a30000  lbu         $v1, 0x0($a1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x145D78u;
            runtime->cooperativeGuestYield();
            goto label_145d78;
        }
    }
    ctx->pc = 0x145DD4u;
    // 0x145dd4: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x145DD4u;
    {
        const bool branch_taken_0x145dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145DD4u;
            // 0x145dd8: 0xafb70040  sw          $s7, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145dd4) {
            ctx->pc = 0x14607Cu;
            goto label_14607c;
        }
    }
    ctx->pc = 0x145DDCu;
label_145ddc:
    // 0x145ddc: 0x88820003  lwl         $v0, 0x3($a0)
    ctx->pc = 0x145ddcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x145de0: 0x24830002  addiu       $v1, $a0, 0x2
    ctx->pc = 0x145de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x145de4: 0x98820000  lwr         $v0, 0x0($a0)
    ctx->pc = 0x145de4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x145de8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x145de8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x145dec: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x145decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
    // 0x145df0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x145df0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x145df4: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x145DF4u;
    {
        const bool branch_taken_0x145df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145DF4u;
            // 0x145df8: 0x2e2b821  addu        $s7, $s7, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145df4) {
            ctx->pc = 0x146078u;
            goto label_146078;
        }
    }
    ctx->pc = 0x145DFCu;
label_145dfc:
    // 0x145dfc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x145dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x145e00: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x145e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145e04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x145e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x145e08: 0xc05118a  jal         func_144628
    ctx->pc = 0x145E08u;
    SET_GPR_U32(ctx, 31, 0x145E10u);
    ctx->pc = 0x145E0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145E08u;
            // 0x145e0c: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144628u;
    if (runtime->hasFunction(0x144628u)) {
        auto targetFn = runtime->lookupFunction(0x144628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145E10u; }
        if (ctx->pc != 0x145E10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144628_0x144628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145E10u; }
        if (ctx->pc != 0x145E10u) { return; }
    }
    ctx->pc = 0x145E10u;
    // 0x145e10: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x145e10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145e14: 0xc05118a  jal         func_144628
    ctx->pc = 0x145E14u;
    SET_GPR_U32(ctx, 31, 0x145E1Cu);
    ctx->pc = 0x145E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145E14u;
            // 0x145e18: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144628u;
    if (runtime->hasFunction(0x144628u)) {
        auto targetFn = runtime->lookupFunction(0x144628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145E1Cu; }
        if (ctx->pc != 0x145E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144628_0x144628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145E1Cu; }
        if (ctx->pc != 0x145E1Cu) { return; }
    }
    ctx->pc = 0x145E1Cu;
    // 0x145e1c: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x145E1Cu;
    {
        const bool branch_taken_0x145e1c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x145E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145E1Cu;
            // 0x145e20: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145e1c) {
            ctx->pc = 0x145E34u;
            goto label_145e34;
        }
    }
    ctx->pc = 0x145E24u;
    // 0x145e24: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x145e24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145e28: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x145e28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145e2c: 0xc051390  jal         func_144E40
    ctx->pc = 0x145E2Cu;
    SET_GPR_U32(ctx, 31, 0x145E34u);
    ctx->pc = 0x145E30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145E2Cu;
            // 0x145e30: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144E40u;
    if (runtime->hasFunction(0x144E40u)) {
        auto targetFn = runtime->lookupFunction(0x144E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145E34u; }
        if (ctx->pc != 0x145E34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144E40_0x144e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145E34u; }
        if (ctx->pc != 0x145E34u) { return; }
    }
    ctx->pc = 0x145E34u;
label_145e34:
    // 0x145e34: 0xc050f1e  jal         func_143C78
    ctx->pc = 0x145E34u;
    SET_GPR_U32(ctx, 31, 0x145E3Cu);
    ctx->pc = 0x145E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145E34u;
            // 0x145e38: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143C78u;
    if (runtime->hasFunction(0x143C78u)) {
        auto targetFn = runtime->lookupFunction(0x143C78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145E3Cu; }
        if (ctx->pc != 0x145E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143C78_0x143c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145E3Cu; }
        if (ctx->pc != 0x145E3Cu) { return; }
    }
    ctx->pc = 0x145E3Cu;
label_145e3c:
    // 0x145e3c: 0xc050f1e  jal         func_143C78
    ctx->pc = 0x145E3Cu;
    SET_GPR_U32(ctx, 31, 0x145E44u);
    ctx->pc = 0x145E40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145E3Cu;
            // 0x145e40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143C78u;
    if (runtime->hasFunction(0x143C78u)) {
        auto targetFn = runtime->lookupFunction(0x143C78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145E44u; }
        if (ctx->pc != 0x145E44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143C78_0x143c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145E44u; }
        if (ctx->pc != 0x145E44u) { return; }
    }
    ctx->pc = 0x145E44u;
    // 0x145e44: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x145E44u;
    {
        const bool branch_taken_0x145e44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145E48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145E44u;
            // 0x145e48: 0xafb70040  sw          $s7, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145e44) {
            ctx->pc = 0x14607Cu;
            goto label_14607c;
        }
    }
    ctx->pc = 0x145E4Cu;
label_145e4c:
    // 0x145e4c: 0x88900003  lwl         $s0, 0x3($a0)
    ctx->pc = 0x145e4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
    // 0x145e50: 0x24820002  addiu       $v0, $a0, 0x2
    ctx->pc = 0x145e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x145e54: 0x98900000  lwr         $s0, 0x0($a0)
    ctx->pc = 0x145e54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
    // 0x145e58: 0x26a600c8  addiu       $a2, $s5, 0xC8
    ctx->pc = 0x145e58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 200));
    // 0x145e5c: 0x108400  sll         $s0, $s0, 16
    ctx->pc = 0x145e5cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 16));
    // 0x145e60: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x145e60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x145e64: 0x108403  sra         $s0, $s0, 16
    ctx->pc = 0x145e64u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 16));
    // 0x145e68: 0x8cc20c00  lw          $v0, 0xC00($a2)
    ctx->pc = 0x145e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3072)));
    // 0x145e6c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x145e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x145e70: 0xacc20c00  sw          $v0, 0xC00($a2)
    ctx->pc = 0x145e70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 3072), GPR_U32(ctx, 2));
    // 0x145e74: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x145e74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x145e78: 0x2a31021  addu        $v0, $s5, $v1
    ctx->pc = 0x145e78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 3)));
    // 0x145e7c: 0x944200ca  lhu         $v0, 0xCA($v0)
    ctx->pc = 0x145e7cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 202)));
    // 0x145e80: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x145e80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x145e84: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x145e84u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x145e88: 0xacc20c04  sw          $v0, 0xC04($a2)
    ctx->pc = 0x145e88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 3076), GPR_U32(ctx, 2));
    // 0x145e8c: 0xafa40048  sw          $a0, 0x48($sp)
    ctx->pc = 0x145e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 4));
    // 0x145e90: 0x8cc20c04  lw          $v0, 0xC04($a2)
    ctx->pc = 0x145e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 3076)));
    // 0x145e94: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x145e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x145e98: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x145e98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x145e9c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x145e9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145ea0: 0xc050f26  jal         func_143C98
    ctx->pc = 0x145EA0u;
    SET_GPR_U32(ctx, 31, 0x145EA8u);
    ctx->pc = 0x145EA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145EA0u;
            // 0x145ea4: 0xafa6004c  sw          $a2, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143C98u;
    if (runtime->hasFunction(0x143C98u)) {
        auto targetFn = runtime->lookupFunction(0x143C98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145EA8u; }
        if (ctx->pc != 0x145EA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143C98_0x143c98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145EA8u; }
        if (ctx->pc != 0x145EA8u) { return; }
    }
    ctx->pc = 0x145EA8u;
    // 0x145ea8: 0x2f08021  addu        $s0, $s7, $s0
    ctx->pc = 0x145ea8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
    // 0x145eac: 0x10000072  b           . + 4 + (0x72 << 2)
    ctx->pc = 0x145EACu;
    {
        const bool branch_taken_0x145eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145EACu;
            // 0x145eb0: 0x202b80b  movn        $s7, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145eac) {
            ctx->pc = 0x146078u;
            goto label_146078;
        }
    }
    ctx->pc = 0x145EB4u;
    // 0x145eb4: 0x0  nop
    ctx->pc = 0x145eb4u;
    // NOP
label_145eb8:
    // 0x145eb8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x145eb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145ebc: 0xc05118a  jal         func_144628
    ctx->pc = 0x145EBCu;
    SET_GPR_U32(ctx, 31, 0x145EC4u);
    ctx->pc = 0x145EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145EBCu;
            // 0x145ec0: 0x2c0982d  daddu       $s3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144628u;
    if (runtime->hasFunction(0x144628u)) {
        auto targetFn = runtime->lookupFunction(0x144628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145EC4u; }
        if (ctx->pc != 0x145EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144628_0x144628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145EC4u; }
        if (ctx->pc != 0x145EC4u) { return; }
    }
    ctx->pc = 0x145EC4u;
    // 0x145ec4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x145ec4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145ec8: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x145ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x145ecc: 0x24841968  addiu       $a0, $a0, 0x1968
    ctx->pc = 0x145eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6504));
    // 0x145ed0: 0xc090508  jal         func_241420
    ctx->pc = 0x145ED0u;
    SET_GPR_U32(ctx, 31, 0x145ED8u);
    ctx->pc = 0x145ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145ED0u;
            // 0x145ed4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x241420u;
    if (runtime->hasFunction(0x241420u)) {
        auto targetFn = runtime->lookupFunction(0x241420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145ED8u; }
        if (ctx->pc != 0x145ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00241420_0x241420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145ED8u; }
        if (ctx->pc != 0x145ED8u) { return; }
    }
    ctx->pc = 0x145ED8u;
    // 0x145ed8: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x145ed8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145edc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x145edcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145ee0: 0xc0a2589  jal         func_289624
    ctx->pc = 0x145EE0u;
    SET_GPR_U32(ctx, 31, 0x145EE8u);
    ctx->pc = 0x145EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145EE0u;
            // 0x145ee4: 0x2405003a  addiu       $a1, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289624u;
    if (runtime->hasFunction(0x289624u)) {
        auto targetFn = runtime->lookupFunction(0x289624u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145EE8u; }
        if (ctx->pc != 0x145EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289624_0x2897c4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145EE8u; }
        if (ctx->pc != 0x145EE8u) { return; }
    }
    ctx->pc = 0x145EE8u;
    // 0x145ee8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x145ee8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145eec: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x145EECu;
    {
        const bool branch_taken_0x145eec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x145EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145EECu;
            // 0x145ef0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145eec) {
            ctx->pc = 0x145F08u;
            goto label_145f08;
        }
    }
    ctx->pc = 0x145EF4u;
    // 0x145ef4: 0x2122823  subu        $a1, $s0, $s2
    ctx->pc = 0x145ef4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x145ef8: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x145ef8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145efc: 0xc051274  jal         func_1449D0
    ctx->pc = 0x145EFCu;
    SET_GPR_U32(ctx, 31, 0x145F04u);
    ctx->pc = 0x145F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145EFCu;
            // 0x145f00: 0x26110001  addiu       $s1, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1449D0u;
    if (runtime->hasFunction(0x1449D0u)) {
        auto targetFn = runtime->lookupFunction(0x1449D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145F04u; }
        if (ctx->pc != 0x145F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001449D0_0x1449d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145F04u; }
        if (ctx->pc != 0x145F04u) { return; }
    }
    ctx->pc = 0x145F04u;
    // 0x145f04: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x145f04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_145f08:
    // 0x145f08: 0x1260002b  beqz        $s3, . + 4 + (0x2B << 2)
    ctx->pc = 0x145F08u;
    {
        const bool branch_taken_0x145f08 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x145F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145F08u;
            // 0x145f0c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145f08) {
            ctx->pc = 0x145FB8u;
            goto label_145fb8;
        }
    }
    ctx->pc = 0x145F10u;
    // 0x145f10: 0xc05137a  jal         func_144DE8
    ctx->pc = 0x145F10u;
    SET_GPR_U32(ctx, 31, 0x145F18u);
    ctx->pc = 0x145F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145F10u;
            // 0x145f14: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144DE8u;
    if (runtime->hasFunction(0x144DE8u)) {
        auto targetFn = runtime->lookupFunction(0x144DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145F18u; }
        if (ctx->pc != 0x145F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144DE8_0x144de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145F18u; }
        if (ctx->pc != 0x145F18u) { return; }
    }
    ctx->pc = 0x145F18u;
    // 0x145f18: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x145f18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145f1c: 0x4c00026  bltz        $a2, . + 4 + (0x26 << 2)
    ctx->pc = 0x145F1Cu;
    {
        const bool branch_taken_0x145f1c = (GPR_S32(ctx, 6) < 0);
        if (branch_taken_0x145f1c) {
            ctx->pc = 0x145FB8u;
            goto label_145fb8;
        }
    }
    ctx->pc = 0x145F24u;
    // 0x145f24: 0x8e65001c  lw          $a1, 0x1C($s3)
    ctx->pc = 0x145f24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x145f28: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x145f28u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x145f2c: 0xc2102a  slt         $v0, $a2, $v0
    ctx->pc = 0x145f2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x145f30: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x145F30u;
    {
        const bool branch_taken_0x145f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x145f30) {
            ctx->pc = 0x145FB8u;
            goto label_145fb8;
        }
    }
    ctx->pc = 0x145F38u;
    // 0x145f38: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x145f38u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x145f3c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x145F3Cu;
    {
        const bool branch_taken_0x145f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x145F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145F3Cu;
            // 0x145f40: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145f3c) {
            ctx->pc = 0x145FB8u;
            goto label_145fb8;
        }
    }
    ctx->pc = 0x145F44u;
    // 0x145f44: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x145f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_145f48:
    // 0x145f48: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x145f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x145f4c: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x145f4cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x145f50: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x145f50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x145f54: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x145f54u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x145f58: 0x14c20011  bne         $a2, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x145F58u;
    {
        const bool branch_taken_0x145f58 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x145F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145F58u;
            // 0x145f5c: 0xc2102a  slt         $v0, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x145f58) {
            ctx->pc = 0x145FA0u;
            goto label_145fa0;
        }
    }
    ctx->pc = 0x145F60u;
    // 0x145f60: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x145f60u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x145f64: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x145F64u;
    {
        const bool branch_taken_0x145f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x145F68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145F64u;
            // 0x145f68: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145f64) {
            ctx->pc = 0x145FB8u;
            goto label_145fb8;
        }
    }
    ctx->pc = 0x145F6Cu;
    // 0x145f6c: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x145f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_145f70:
    // 0x145f70: 0x1010c0  sll         $v0, $s0, 3
    ctx->pc = 0x145f70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x145f74: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x145f74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145f78: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x145f78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x145f7c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x145f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x145f80: 0xc0514be  jal         func_1452F8
    ctx->pc = 0x145F80u;
    SET_GPR_U32(ctx, 31, 0x145F88u);
    ctx->pc = 0x145F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145F80u;
            // 0x145f84: 0x8c440004  lw          $a0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1452F8u;
    runtime->cooperativeGuestYield();
    goto label_1452f8;
    ctx->pc = 0x145F88u;
label_145f88:
    // 0x145f88: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x145f88u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x145f8c: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x145f8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x145f90: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x145F90u;
    {
        const bool branch_taken_0x145f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x145f90) {
            ctx->pc = 0x145F94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x145F90u;
            // 0x145f94: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x145F70u;
            runtime->cooperativeGuestYield();
            goto label_145f70;
        }
    }
    ctx->pc = 0x145F98u;
    // 0x145f98: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x145F98u;
    {
        const bool branch_taken_0x145f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x145f98) {
            ctx->pc = 0x145FB8u;
            goto label_145fb8;
        }
    }
    ctx->pc = 0x145FA0u;
label_145fa0:
    // 0x145fa0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x145FA0u;
    {
        const bool branch_taken_0x145fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x145FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145FA0u;
            // 0x145fa4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145fa0) {
            ctx->pc = 0x145FB8u;
            goto label_145fb8;
        }
    }
    ctx->pc = 0x145FA8u;
    // 0x145fa8: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x145fa8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x145fac: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x145facu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x145fb0: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x145FB0u;
    {
        const bool branch_taken_0x145fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x145FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145FB0u;
            // 0x145fb4: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145fb0) {
            ctx->pc = 0x145F48u;
            runtime->cooperativeGuestYield();
            goto label_145f48;
        }
    }
    ctx->pc = 0x145FB8u;
label_145fb8:
    // 0x145fb8: 0xc050f1e  jal         func_143C78
    ctx->pc = 0x145FB8u;
    SET_GPR_U32(ctx, 31, 0x145FC0u);
    ctx->pc = 0x145FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145FB8u;
            // 0x145fbc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143C78u;
    if (runtime->hasFunction(0x143C78u)) {
        auto targetFn = runtime->lookupFunction(0x143C78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145FC0u; }
        if (ctx->pc != 0x145FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143C78_0x143c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145FC0u; }
        if (ctx->pc != 0x145FC0u) { return; }
    }
    ctx->pc = 0x145FC0u;
    // 0x145fc0: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x145FC0u;
    {
        const bool branch_taken_0x145fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145FC0u;
            // 0x145fc4: 0xafb70040  sw          $s7, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145fc0) {
            ctx->pc = 0x14607Cu;
            goto label_14607c;
        }
    }
    ctx->pc = 0x145FC8u;
label_145fc8:
    // 0x145fc8: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x145fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x145fcc: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x145fccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145fd0: 0x90540000  lbu         $s4, 0x0($v0)
    ctx->pc = 0x145fd0u;
    SET_GPR_U32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x145fd4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x145fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x145fd8: 0xc05118a  jal         func_144628
    ctx->pc = 0x145FD8u;
    SET_GPR_U32(ctx, 31, 0x145FE0u);
    ctx->pc = 0x145FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145FD8u;
            // 0x145fdc: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144628u;
    if (runtime->hasFunction(0x144628u)) {
        auto targetFn = runtime->lookupFunction(0x144628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145FE0u; }
        if (ctx->pc != 0x145FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144628_0x144628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145FE0u; }
        if (ctx->pc != 0x145FE0u) { return; }
    }
    ctx->pc = 0x145FE0u;
    // 0x145fe0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x145fe0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145fe4: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x145fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x145fe8: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x145FE8u;
    {
        const bool branch_taken_0x145fe8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x145FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145FE8u;
            // 0x145fec: 0x24441978  addiu       $a0, $v0, 0x1978 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145fe8) {
            ctx->pc = 0x145FFCu;
            goto label_145ffc;
        }
    }
    ctx->pc = 0x145FF0u;
    // 0x145ff0: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x145ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x145ff4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x145FF4u;
    {
        const bool branch_taken_0x145ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x145FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145FF4u;
            // 0x145ff8: 0x24461998  addiu       $a2, $v0, 0x1998 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 6552));
        ctx->in_delay_slot = false;
        if (branch_taken_0x145ff4) {
            ctx->pc = 0x146004u;
            goto label_146004;
        }
    }
    ctx->pc = 0x145FFCu;
label_145ffc:
    // 0x145ffc: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x145ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x146000: 0x244619a0  addiu       $a2, $v0, 0x19A0
    ctx->pc = 0x146000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 6560));
label_146004:
    // 0x146004: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x146004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146008: 0xc090508  jal         func_241420
    ctx->pc = 0x146008u;
    SET_GPR_U32(ctx, 31, 0x146010u);
    ctx->pc = 0x14600Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146008u;
            // 0x14600c: 0x2c0882d  daddu       $s1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x241420u;
    if (runtime->hasFunction(0x241420u)) {
        auto targetFn = runtime->lookupFunction(0x241420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146010u; }
        if (ctx->pc != 0x146010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00241420_0x241420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146010u; }
        if (ctx->pc != 0x146010u) { return; }
    }
    ctx->pc = 0x146010u;
    // 0x146010: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x146010u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146014: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x146014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146018: 0xc0a2589  jal         func_289624
    ctx->pc = 0x146018u;
    SET_GPR_U32(ctx, 31, 0x146020u);
    ctx->pc = 0x14601Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146018u;
            // 0x14601c: 0x2405003a  addiu       $a1, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289624u;
    if (runtime->hasFunction(0x289624u)) {
        auto targetFn = runtime->lookupFunction(0x289624u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146020u; }
        if (ctx->pc != 0x146020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289624_0x2897c4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146020u; }
        if (ctx->pc != 0x146020u) { return; }
    }
    ctx->pc = 0x146020u;
    // 0x146020: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x146020u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146024: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x146024u;
    {
        const bool branch_taken_0x146024 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x146028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146024u;
            // 0x146028: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146024) {
            ctx->pc = 0x146040u;
            goto label_146040;
        }
    }
    ctx->pc = 0x14602Cu;
    // 0x14602c: 0x2122823  subu        $a1, $s0, $s2
    ctx->pc = 0x14602cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x146030: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x146030u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146034: 0xc051274  jal         func_1449D0
    ctx->pc = 0x146034u;
    SET_GPR_U32(ctx, 31, 0x14603Cu);
    ctx->pc = 0x146038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146034u;
            // 0x146038: 0x26130001  addiu       $s3, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1449D0u;
    if (runtime->hasFunction(0x1449D0u)) {
        auto targetFn = runtime->lookupFunction(0x1449D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14603Cu; }
        if (ctx->pc != 0x14603Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001449D0_0x1449d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14603Cu; }
        if (ctx->pc != 0x14603Cu) { return; }
    }
    ctx->pc = 0x14603Cu;
    // 0x14603c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x14603cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_146040:
    // 0x146040: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x146040u;
    {
        const bool branch_taken_0x146040 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x146044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146040u;
            // 0x146044: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146040) {
            ctx->pc = 0x14606Cu;
            goto label_14606c;
        }
    }
    ctx->pc = 0x146048u;
    // 0x146048: 0xc05137a  jal         func_144DE8
    ctx->pc = 0x146048u;
    SET_GPR_U32(ctx, 31, 0x146050u);
    ctx->pc = 0x14604Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x146048u;
            // 0x14604c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144DE8u;
    if (runtime->hasFunction(0x144DE8u)) {
        auto targetFn = runtime->lookupFunction(0x144DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146050u; }
        if (ctx->pc != 0x146050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00144DE8_0x144de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146050u; }
        if (ctx->pc != 0x146050u) { return; }
    }
    ctx->pc = 0x146050u;
    // 0x146050: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x146050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146054: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x146054u;
    {
        const bool branch_taken_0x146054 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x146058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x146054u;
            // 0x146058: 0x24020082  addiu       $v0, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146054) {
            ctx->pc = 0x14606Cu;
            goto label_14606c;
        }
    }
    ctx->pc = 0x14605Cu;
    // 0x14605c: 0x24030081  addiu       $v1, $zero, 0x81
    ctx->pc = 0x14605cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
    // 0x146060: 0x74100b  movn        $v0, $v1, $s4
    ctx->pc = 0x146060u;
    if (GPR_U64(ctx, 20) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x146064: 0xae240014  sw          $a0, 0x14($s1)
    ctx->pc = 0x146064u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
    // 0x146068: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x146068u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
label_14606c:
    // 0x14606c: 0xc050f1e  jal         func_143C78
    ctx->pc = 0x14606Cu;
    SET_GPR_U32(ctx, 31, 0x146074u);
    ctx->pc = 0x146070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14606Cu;
            // 0x146070: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143C78u;
    if (runtime->hasFunction(0x143C78u)) {
        auto targetFn = runtime->lookupFunction(0x143C78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146074u; }
        if (ctx->pc != 0x146074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00143C78_0x143c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x146074u; }
        if (ctx->pc != 0x146074u) { return; }
    }
    ctx->pc = 0x146074u;
label_146074:
    // 0x146074: 0x0  nop
    ctx->pc = 0x146074u;
    // NOP
label_146078:
    // 0x146078: 0xafb70040  sw          $s7, 0x40($sp)
    ctx->pc = 0x146078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 23));
label_14607c:
    // 0x14607c: 0x92e20000  lbu         $v0, 0x0($s7)
    ctx->pc = 0x14607cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x146080: 0x5440fcbb  bnel        $v0, $zero, . + 4 + (-0x345 << 2)
    ctx->pc = 0x146080u;
    {
        const bool branch_taken_0x146080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x146080) {
            ctx->pc = 0x146084u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x146080u;
            // 0x146084: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x145370u;
            runtime->cooperativeGuestYield();
            goto label_145370;
        }
    }
    ctx->pc = 0x146088u;
label_146088:
    // 0x146088: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x146088u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x14608c: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x14608cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x146090: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x146090u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x146094: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x146094u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x146098: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x146098u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x14609c: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x14609cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1460a0: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x1460a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1460a4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1460a4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1460a8: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x1460a8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1460ac: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1460acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1460b0: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x1460b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1460b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1460B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1460B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1460B4u;
            // 0x1460b8: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1452F8u: goto label_1452f8;
            case 0x145370u: goto label_145370;
            case 0x14539Cu: goto label_14539c;
            case 0x1453CCu: goto label_1453cc;
            case 0x145404u: goto label_145404;
            case 0x14542Cu: goto label_14542c;
            case 0x145434u: goto label_145434;
            case 0x14545Cu: goto label_14545c;
            case 0x145484u: goto label_145484;
            case 0x145498u: goto label_145498;
            case 0x1454A0u: goto label_1454a0;
            case 0x1454BCu: goto label_1454bc;
            case 0x1454D8u: goto label_1454d8;
            case 0x1454F4u: goto label_1454f4;
            case 0x145538u: goto label_145538;
            case 0x14553Cu: goto label_14553c;
            case 0x145540u: goto label_145540;
            case 0x145550u: goto label_145550;
            case 0x1455ACu: goto label_1455ac;
            case 0x1455D8u: goto label_1455d8;
            case 0x145600u: goto label_145600;
            case 0x145628u: goto label_145628;
            case 0x145630u: goto label_145630;
            case 0x145640u: goto label_145640;
            case 0x145650u: goto label_145650;
            case 0x14568Cu: goto label_14568c;
            case 0x1456BCu: goto label_1456bc;
            case 0x1456D0u: goto label_1456d0;
            case 0x1456E0u: goto label_1456e0;
            case 0x145730u: goto label_145730;
            case 0x14574Cu: goto label_14574c;
            case 0x14576Cu: goto label_14576c;
            case 0x145778u: goto label_145778;
            case 0x1457B8u: goto label_1457b8;
            case 0x1457C8u: goto label_1457c8;
            case 0x1457F0u: goto label_1457f0;
            case 0x145810u: goto label_145810;
            case 0x145870u: goto label_145870;
            case 0x145888u: goto label_145888;
            case 0x145918u: goto label_145918;
            case 0x145958u: goto label_145958;
            case 0x1459E0u: goto label_1459e0;
            case 0x145A34u: goto label_145a34;
            case 0x145A7Cu: goto label_145a7c;
            case 0x145A8Cu: goto label_145a8c;
            case 0x145AA8u: goto label_145aa8;
            case 0x145AE4u: goto label_145ae4;
            case 0x145B18u: goto label_145b18;
            case 0x145B34u: goto label_145b34;
            case 0x145B5Cu: goto label_145b5c;
            case 0x145B8Cu: goto label_145b8c;
            case 0x145BB8u: goto label_145bb8;
            case 0x145C00u: goto label_145c00;
            case 0x145C1Cu: goto label_145c1c;
            case 0x145C50u: goto label_145c50;
            case 0x145C90u: goto label_145c90;
            case 0x145C9Cu: goto label_145c9c;
            case 0x145CC0u: goto label_145cc0;
            case 0x145CD0u: goto label_145cd0;
            case 0x145D14u: goto label_145d14;
            case 0x145D20u: goto label_145d20;
            case 0x145D54u: goto label_145d54;
            case 0x145D64u: goto label_145d64;
            case 0x145D78u: goto label_145d78;
            case 0x145DACu: goto label_145dac;
            case 0x145DC8u: goto label_145dc8;
            case 0x145DDCu: goto label_145ddc;
            case 0x145DFCu: goto label_145dfc;
            case 0x145E34u: goto label_145e34;
            case 0x145E3Cu: goto label_145e3c;
            case 0x145E4Cu: goto label_145e4c;
            case 0x145EB8u: goto label_145eb8;
            case 0x145F08u: goto label_145f08;
            case 0x145F48u: goto label_145f48;
            case 0x145F70u: goto label_145f70;
            case 0x145F88u: goto label_145f88;
            case 0x145FA0u: goto label_145fa0;
            case 0x145FB8u: goto label_145fb8;
            case 0x145FC8u: goto label_145fc8;
            case 0x145FFCu: goto label_145ffc;
            case 0x146004u: goto label_146004;
            case 0x146040u: goto label_146040;
            case 0x14606Cu: goto label_14606c;
            case 0x146074u: goto label_146074;
            case 0x146078u: goto label_146078;
            case 0x14607Cu: goto label_14607c;
            case 0x146088u: goto label_146088;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1460BCu;
    // 0x1460bc: 0x0  nop
    ctx->pc = 0x1460bcu;
    // NOP
}
