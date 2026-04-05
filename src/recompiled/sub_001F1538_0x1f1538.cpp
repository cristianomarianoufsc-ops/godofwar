#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F1538
// Address: 0x1f1538 - 0x1f1908
void sub_001F1538_0x1f1538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F1538_0x1f1538");
#endif

    ctx->pc = 0x1f1538u;

    // 0x1f1538: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x1f1538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
    // 0x1f153c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f153cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f1540: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x1f1540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x1f1544: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x1f1544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x1f1548: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x1f1548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x1f154c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f154cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1550: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x1f1550u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x1f1554: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x1f1554u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1558: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x1f1558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
    // 0x1f155c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1f155cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1560: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x1f1560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
    // 0x1f1564: 0x3c150030  lui         $s5, 0x30
    ctx->pc = 0x1f1564u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)48 << 16));
    // 0x1f1568: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x1f1568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
    // 0x1f156c: 0x26a45570  addiu       $a0, $s5, 0x5570
    ctx->pc = 0x1f156cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 21872));
    // 0x1f1570: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x1f1570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
    // 0x1f1574: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x1f1574u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f1578: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1f1578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x1f157c: 0xe7b70148  swc1        $f23, 0x148($sp)
    ctx->pc = 0x1f157cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 328), bits); }
    // 0x1f1580: 0xe7b60140  swc1        $f22, 0x140($sp)
    ctx->pc = 0x1f1580u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 320), bits); }
    // 0x1f1584: 0xe7b50138  swc1        $f21, 0x138($sp)
    ctx->pc = 0x1f1584u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x1f1588: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x1f1588u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x1f158c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1f158cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1f1590: 0x7fa60090  sq          $a2, 0x90($sp)
    ctx->pc = 0x1f1590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 6));
    // 0x1f1594: 0x7fa80060  sq          $t0, 0x60($sp)
    ctx->pc = 0x1f1594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 8));
    // 0x1f1598: 0x24500010  addiu       $s0, $v0, 0x10
    ctx->pc = 0x1f1598u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x1f159c: 0x16400026  bnez        $s2, . + 4 + (0x26 << 2)
    ctx->pc = 0x1F159Cu;
    {
        const bool branch_taken_0x1f159c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F15A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F159Cu;
            // 0x1f15a0: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f159c) {
            ctx->pc = 0x1F1638u;
            goto label_1f1638;
        }
    }
    ctx->pc = 0x1F15A4u;
    // 0x1f15a4: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1f15a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1f15a8: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x1f15a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f15ac: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x1f15acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x1f15b0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f15b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f15b4: 0x245206c8  addiu       $s2, $v0, 0x6C8
    ctx->pc = 0x1f15b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1736));
    // 0x1f15b8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1f15b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f15bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f15bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f15c0: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x1f15c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x1f15c4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x1F15C4u;
    {
        const bool branch_taken_0x1f15c4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F15C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F15C4u;
            // 0x1f15c8: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f15c4) {
            ctx->pc = 0x1F15E8u;
            goto label_1f15e8;
        }
    }
    ctx->pc = 0x1F15CCu;
    // 0x1f15cc: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x1f15ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f15d0: 0x3c0142b4  lui         $at, 0x42B4
    ctx->pc = 0x1f15d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17076 << 16));
    // 0x1f15d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f15d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f15d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f15d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f15dc: 0x0  nop
    ctx->pc = 0x1f15dcu;
    // NOP
    // 0x1f15e0: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1F15E0u;
    {
        const bool branch_taken_0x1f15e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F15E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F15E0u;
            // 0x1f15e4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f15e0) {
            ctx->pc = 0x1F1608u;
            goto label_1f1608;
        }
    }
    ctx->pc = 0x1F15E8u;
label_1f15e8:
    // 0x1f15e8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1f15e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f15ec: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1f15ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1f15f0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1f15f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x1f15f4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F15F4u;
    {
        const bool branch_taken_0x1f15f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F15F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F15F4u;
            // 0x1f15f8: 0x24720a90  addiu       $s2, $v1, 0xA90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 2704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f15f4) {
            ctx->pc = 0x1F1604u;
            goto label_1f1604;
        }
    }
    ctx->pc = 0x1F15FCu;
    // 0x1f15fc: 0x3c02001f  lui         $v0, 0x1F
    ctx->pc = 0x1f15fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31 << 16));
    // 0x1f1600: 0x24520738  addiu       $s2, $v0, 0x738
    ctx->pc = 0x1f1600u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 1848));
label_1f1604:
    // 0x1f1604: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1f1604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1f1608:
    // 0x1f1608: 0x8c42e2c4  lw          $v0, -0x1D3C($v0)
    ctx->pc = 0x1f1608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959812)));
    // 0x1f160c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x1f160cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1f1610: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1F1610u;
    {
        const bool branch_taken_0x1f1610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f1610) {
            ctx->pc = 0x1F1614u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1610u;
            // 0x1f1614: 0x86230060  lh          $v1, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F163Cu;
            goto label_1f163c;
        }
    }
    ctx->pc = 0x1F1618u;
    // 0x1f1618: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1f1618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1f161c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1f161cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1f1620: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1f1620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1f1624: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F1624u;
    {
        const bool branch_taken_0x1f1624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F1628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1624u;
            // 0x1f1628: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1624) {
            ctx->pc = 0x1F1638u;
            goto label_1f1638;
        }
    }
    ctx->pc = 0x1F162Cu;
    // 0x1f162c: 0x3c03001f  lui         $v1, 0x1F
    ctx->pc = 0x1f162cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31 << 16));
    // 0x1f1630: 0xac52e2b8  sw          $s2, -0x1D48($v0)
    ctx->pc = 0x1f1630u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294959800), GPR_U32(ctx, 18));
    // 0x1f1634: 0x24720e18  addiu       $s2, $v1, 0xE18
    ctx->pc = 0x1f1634u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 3608));
label_1f1638:
    // 0x1f1638: 0x86230060  lh          $v1, 0x60($s1)
    ctx->pc = 0x1f1638u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 96)));
label_1f163c:
    // 0x1f163c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f163cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f1640: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F1640u;
    {
        const bool branch_taken_0x1f1640 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F1644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1640u;
            // 0x1f1644: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1640) {
            ctx->pc = 0x1F1650u;
            goto label_1f1650;
        }
    }
    ctx->pc = 0x1F1648u;
    // 0x1f1648: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1F1648u;
    {
        const bool branch_taken_0x1f1648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F164Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1648u;
            // 0x1f164c: 0x26220020  addiu       $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1648) {
            ctx->pc = 0x1F166Cu;
            goto label_1f166c;
        }
    }
    ctx->pc = 0x1F1650u;
label_1f1650:
    // 0x1f1650: 0xde230068  ld          $v1, 0x68($s1)
    ctx->pc = 0x1f1650u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x1f1654: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1f1654u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1f1658: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F1658u;
    {
        const bool branch_taken_0x1f1658 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1F165Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1658u;
            // 0x1f165c: 0x26220070  addiu       $v0, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1658) {
            ctx->pc = 0x1F166Cu;
            goto label_1f166c;
        }
    }
    ctx->pc = 0x1F1660u;
    // 0x1f1660: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1F1660u;
    SET_GPR_U32(ctx, 31, 0x1F1668u);
    ctx->pc = 0x1F1664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1660u;
            // 0x1f1664: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1668u; }
        if (ctx->pc != 0x1F1668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1668u; }
        if (ctx->pc != 0x1F1668u) { return; }
    }
    ctx->pc = 0x1F1668u;
    // 0x1f1668: 0x26220070  addiu       $v0, $s1, 0x70
    ctx->pc = 0x1f1668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_1f166c:
    // 0x1f166c: 0xd8410020  lqc2        $vf1, 0x20($v0)
    ctx->pc = 0x1f166cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1f1670: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x1f1670u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f1674: 0xfba20070  sqc2        $vf2, 0x70($sp)
    ctx->pc = 0x1f1674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f1678: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1f1678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f167c: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1f167cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f1680: 0x78450010  lq          $a1, 0x10($v0)
    ctx->pc = 0x1f1680u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1f1684: 0x48241000  qmfc2.ni    $a0, $vf2
    ctx->pc = 0x1f1684u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f1688: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x1f1688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1f168c: 0xc07c0ca  jal         func_1F0328
    ctx->pc = 0x1F168Cu;
    SET_GPR_U32(ctx, 31, 0x1F1694u);
    ctx->pc = 0x1F1690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F168Cu;
            // 0x1f1690: 0x27a70034  addiu       $a3, $sp, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F0328u;
    if (runtime->hasFunction(0x1F0328u)) {
        auto targetFn = runtime->lookupFunction(0x1F0328u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1694u; }
        if (ctx->pc != 0x1F1694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F0328_0x1f0328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F1694u; }
        if (ctx->pc != 0x1F1694u) { return; }
    }
    ctx->pc = 0x1F1694u;
    // 0x1f1694: 0x4480a800  mtc1        $zero, $f21
    ctx->pc = 0x1f1694u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1f1698: 0xc6000014  lwc1        $f0, 0x14($s0)
    ctx->pc = 0x1f1698u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f169c: 0x26a35570  addiu       $v1, $s5, 0x5570
    ctx->pc = 0x1f169cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 21872));
    // 0x1f16a0: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1f16a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1f16a4: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1f16a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1f16a8: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x1f16a8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f16ac: 0xc7a10034  lwc1        $f1, 0x34($sp)
    ctx->pc = 0x1f16acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f16b0: 0x4600adc6  mov.s       $f23, $f21
    ctx->pc = 0x1f16b0u;
    ctx->f[23] = FPU_MOV_S(ctx->f[21]);
    // 0x1f16b4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1f16b4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1f16b8: 0xc7a20030  lwc1        $f2, 0x30($sp)
    ctx->pc = 0x1f16b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1f16bc: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1f16bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1f16c0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1f16c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f16c4: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x1f16c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1f16c8: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x1f16c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x1f16cc: 0x28880  sll         $s1, $v0, 2
    ctx->pc = 0x1f16ccu;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f16d0: 0x2242021  addu        $a0, $s1, $a0
    ctx->pc = 0x1f16d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x1f16d4: 0xaeb35570  sw          $s3, 0x5570($s5)
    ctx->pc = 0x1f16d4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 21872), GPR_U32(ctx, 19));
    // 0x1f16d8: 0xc6000010  lwc1        $f0, 0x10($s0)
    ctx->pc = 0x1f16d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f16dc: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x1f16dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x1f16e0: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x1f16e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x1f16e4: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1f16e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f16e8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f16e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f16ec: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x1f16ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
    // 0x1f16f0: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x1f16f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f16f4: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x1f16f4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f16f8: 0xe4610014  swc1        $f1, 0x14($v1)
    ctx->pc = 0x1f16f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
    // 0x1f16fc: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x1f16fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f1700: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x1f1700u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x1f1704: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x1f1704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x1f1708: 0xc6000024  lwc1        $f0, 0x24($s0)
    ctx->pc = 0x1f1708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f170c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1f170cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x1f1710: 0xe462001c  swc1        $f2, 0x1C($v1)
    ctx->pc = 0x1f1710u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
    // 0x1f1714: 0x620006b  bltz        $s1, . + 4 + (0x6B << 2)
    ctx->pc = 0x1F1714u;
    {
        const bool branch_taken_0x1f1714 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1F1718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1714u;
            // 0x1f1718: 0xc496fffc  lwc1        $f22, -0x4($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1714) {
            ctx->pc = 0x1F18C4u;
            goto label_1f18c4;
        }
    }
    ctx->pc = 0x1F171Cu;
    // 0x1f171c: 0x0  nop
    ctx->pc = 0x1f171cu;
    // NOP
label_1f1720:
    // 0x1f1720: 0x44940000  mtc1        $s4, $f0
    ctx->pc = 0x1f1720u;
    { uint32_t bits = GPR_U32(ctx, 20); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1724: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f1724u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f1728: 0x44910800  mtc1        $s1, $f1
    ctx->pc = 0x1f1728u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f172c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1f172cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f1730: 0x4600b002  mul.s       $f0, $f22, $f0
    ctx->pc = 0x1f1730u;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
    // 0x1f1734: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x1f1734u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[20] = ctx->f[0] / ctx->f[1];
    // 0x1f1738: 0x4614a042  mul.s       $f1, $f20, $f20
    ctx->pc = 0x1f1738u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[20]);
    // 0x1f173c: 0x46140802  mul.s       $f0, $f1, $f20
    ctx->pc = 0x1f173cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x1f1740: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x1f1740u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x1f1744: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x1f1744u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x1f1748: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x1f1748u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1f174c: 0x70461b89  pcpyld      $v1, $v0, $a2
    ctx->pc = 0x1f174cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x1f1750: 0x4406a000  mfc1        $a2, $f20
    ctx->pc = 0x1f1750u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[20], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x1f1754: 0x70e61389  pcpyld      $v0, $a3, $a2
    ctx->pc = 0x1f1754u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 6)));
    // 0x1f1758: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1f1758u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1f175c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1f175cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x1f1760: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x1f1760u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1f1764: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1f1764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1f1768: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x1f1768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x1f176c: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x1f176cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1f1770: 0x18400013  blez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F1770u;
    {
        const bool branch_taken_0x1f1770 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1F1774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1770u;
            // 0x1f1774: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1770) {
            ctx->pc = 0x1F17C0u;
            goto label_1f17c0;
        }
    }
    ctx->pc = 0x1F1778u;
    // 0x1f1778: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x1f1778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1f177c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1f177cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f1780: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x1f1780u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f1784: 0x0  nop
    ctx->pc = 0x1f1784u;
    // NOP
    // 0x1f1788: 0x4503000e  bc1tl       . + 4 + (0xE << 2)
    ctx->pc = 0x1F1788u;
    {
        const bool branch_taken_0x1f1788 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f1788) {
            ctx->pc = 0x1F178Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1788u;
            // 0x1f178c: 0x8e630008  lw          $v1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F17C4u;
            goto label_1f17c4;
        }
    }
    ctx->pc = 0x1F1790u;
    // 0x1f1790: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f1790u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f1794: 0x0  nop
    ctx->pc = 0x1f1794u;
    // NOP
label_1f1798:
    // 0x1f1798: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x1f1798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1f179c: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1f179cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f17a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F17A0u;
    {
        const bool branch_taken_0x1f17a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F17A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F17A0u;
            // 0x1f17a4: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f17a0) {
            ctx->pc = 0x1F17C0u;
            goto label_1f17c0;
        }
    }
    ctx->pc = 0x1F17A8u;
    // 0x1f17a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f17a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f17ac: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1f17acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f17b0: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x1f17b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f17b4: 0x0  nop
    ctx->pc = 0x1f17b4u;
    // NOP
    // 0x1f17b8: 0x4502fff7  bc1fl       . + 4 + (-0x9 << 2)
    ctx->pc = 0x1F17B8u;
    {
        const bool branch_taken_0x1f17b8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f17b8) {
            ctx->pc = 0x1F17BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F17B8u;
            // 0x1f17bc: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F1798u;
            runtime->cooperativeGuestYield();
            goto label_1f1798;
        }
    }
    ctx->pc = 0x1F17C0u;
label_1f17c0:
    // 0x1f17c0: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x1f17c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1f17c4:
    // 0x1f17c4: 0x41180  sll         $v0, $a0, 6
    ctx->pc = 0x1f17c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
    // 0x1f17c8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f17c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f17cc: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x1f17ccu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f17d0: 0x4be309bc  vmulax.xyzw $ACC, $vf1, $vf3x
    ctx->pc = 0x1f17d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1f17d4: 0xd8420030  lqc2        $vf2, 0x30($v0)
    ctx->pc = 0x1f17d4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1f17d8: 0xd8410010  lqc2        $vf1, 0x10($v0)
    ctx->pc = 0x1f17d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1f17dc: 0x4be308bd  vmadday.xyzw $ACC, $vf1, $vf3y
    ctx->pc = 0x1f17dcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f17e0: 0xd8410020  lqc2        $vf1, 0x20($v0)
    ctx->pc = 0x1f17e0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x1f17e4: 0x4be308be  vmaddaz.xyzw $ACC, $vf1, $vf3z
    ctx->pc = 0x1f17e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1f17e8: 0x4be3108b  vmaddw.xyzw $vf2, $vf2, $vf3w
    ctx->pc = 0x1f17e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1f17ec: 0xfba20050  sqc2        $vf2, 0x50($sp)
    ctx->pc = 0x1f17ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f17f0: 0x4b020043  vaddw.x     $vf1, $vf0, $vf2w
    ctx->pc = 0x1f17f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f17f4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1f17f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1f17f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f17f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f17fc: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1f17fcu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f1800: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1f1800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f1804: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1f1804u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[1];
    // 0x1f1808: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x1f1808u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x1f180c: 0x48a70800  qmtc2.ni    $a3, $vf1
    ctx->pc = 0x1f180cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x1f1810: 0x4be110d8  vmulx.xyzw  $vf3, $vf2, $vf1x
    ctx->pc = 0x1f1810u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1f1814: 0xfba30080  sqc2        $vf3, 0x80($sp)
    ctx->pc = 0x1f1814u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1f1818: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1f1818u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1f181c: 0x7ba40090  lq          $a0, 0x90($sp)
    ctx->pc = 0x1f181cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f1820: 0x240f809  jalr        $s2
    ctx->pc = 0x1F1820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x1F1828u);
        ctx->pc = 0x1F1824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1820u;
            // 0x1f1824: 0x7ba50080  lq          $a1, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F1828u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F15E8u: goto label_1f15e8;
            case 0x1F1604u: goto label_1f1604;
            case 0x1F1608u: goto label_1f1608;
            case 0x1F1638u: goto label_1f1638;
            case 0x1F163Cu: goto label_1f163c;
            case 0x1F1650u: goto label_1f1650;
            case 0x1F166Cu: goto label_1f166c;
            case 0x1F1720u: goto label_1f1720;
            case 0x1F1798u: goto label_1f1798;
            case 0x1F17C0u: goto label_1f17c0;
            case 0x1F17C4u: goto label_1f17c4;
            case 0x1F1890u: goto label_1f1890;
            case 0x1F18ACu: goto label_1f18ac;
            case 0x1F18B8u: goto label_1f18b8;
            case 0x1F18C4u: goto label_1f18c4;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F1828u; }
            if (ctx->pc != 0x1F1828u) { return; }
        }
        }
    }
    ctx->pc = 0x1F1828u;
    // 0x1f1828: 0x12e00019  beqz        $s7, . + 4 + (0x19 << 2)
    ctx->pc = 0x1F1828u;
    {
        const bool branch_taken_0x1f1828 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F182Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1828u;
            // 0x1f182c: 0x46000086  mov.s       $f2, $f0 (Delay Slot)
        ctx->f[2] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f1828) {
            ctx->pc = 0x1F1890u;
            goto label_1f1890;
        }
    }
    ctx->pc = 0x1F1830u;
    // 0x1f1830: 0xdba10090  lqc2        $vf1, 0x90($sp)
    ctx->pc = 0x1f1830u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1f1834: 0xdba30080  lqc2        $vf3, 0x80($sp)
    ctx->pc = 0x1f1834u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1f1838: 0x4be308ac  vsub.xyzw   $vf2, $vf1, $vf3
    ctx->pc = 0x1f1838u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[1], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f183c: 0x4be210ea  vmul.xyzw   $vf3, $vf2, $vf2
    ctx->pc = 0x1f183cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x1f1840: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x1f1840u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f1844: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x1f1844u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f1848: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x1f1848u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x1f184c: 0x4a0003bf  vwaitq
    ctx->pc = 0x1f184cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x1f1850: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x1f1850u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f1854: 0x4a0002ff  vnop
    ctx->pc = 0x1f1854u;
    // NOP operation, no action needed for VU0
    // 0x1f1858: 0x4a0002ff  vnop
    ctx->pc = 0x1f1858u;
    // NOP operation, no action needed for VU0
    // 0x1f185c: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1f185cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1f1860: 0xdba10060  lqc2        $vf1, 0x60($sp)
    ctx->pc = 0x1f1860u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f1864: 0xdba30070  lqc2        $vf3, 0x70($sp)
    ctx->pc = 0x1f1864u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1f1868: 0x4be1186c  vsub.xyzw   $vf1, $vf3, $vf1
    ctx->pc = 0x1f1868u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f186c: 0x4be110aa  vmul.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1f186cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1f1870: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1f1870u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f1874: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1f1874u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1f1878: 0x3c0142c8  lui         $at, 0x42C8
    ctx->pc = 0x1f1878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17096 << 16));
    // 0x1f187c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1f187cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1f1880: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1f1880u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1f1884: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1f1884u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f1888: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1f1888u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1f188c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x1f188cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_1f1890:
    // 0x1f1890: 0x6c20006  bltzl       $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F1890u;
    {
        const bool branch_taken_0x1f1890 = (GPR_S32(ctx, 22) < 0);
        if (branch_taken_0x1f1890) {
            ctx->pc = 0x1F1894u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F1890u;
            // 0x1f1894: 0x460015c6  mov.s       $f23, $f2 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F18ACu;
            goto label_1f18ac;
        }
    }
    ctx->pc = 0x1F1898u;
    // 0x1f1898: 0x46171034  c.lt.s      $f2, $f23
    ctx->pc = 0x1f1898u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[23])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f189c: 0x0  nop
    ctx->pc = 0x1f189cu;
    // NOP
    // 0x1f18a0: 0x45020005  bc1fl       . + 4 + (0x5 << 2)
    ctx->pc = 0x1F18A0u;
    {
        const bool branch_taken_0x1f18a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f18a0) {
            ctx->pc = 0x1F18A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F18A0u;
            // 0x1f18a4: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F18B8u;
            goto label_1f18b8;
        }
    }
    ctx->pc = 0x1F18A8u;
    // 0x1f18a8: 0x460015c6  mov.s       $f23, $f2
    ctx->pc = 0x1f18a8u;
    ctx->f[23] = FPU_MOV_S(ctx->f[2]);
label_1f18ac:
    // 0x1f18ac: 0x4600a546  mov.s       $f21, $f20
    ctx->pc = 0x1f18acu;
    ctx->f[21] = FPU_MOV_S(ctx->f[20]);
    // 0x1f18b0: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x1f18b0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f18b4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1f18b4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1f18b8:
    // 0x1f18b8: 0x234102a  slt         $v0, $s1, $s4
    ctx->pc = 0x1f18b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x1f18bc: 0x1040ff98  beqz        $v0, . + 4 + (-0x68 << 2)
    ctx->pc = 0x1F18BCu;
    {
        const bool branch_taken_0x1f18bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f18bc) {
            ctx->pc = 0x1F1720u;
            runtime->cooperativeGuestYield();
            goto label_1f1720;
        }
    }
    ctx->pc = 0x1F18C4u;
label_1f18c4:
    // 0x1f18c4: 0x4600a806  mov.s       $f0, $f21
    ctx->pc = 0x1f18c4u;
    ctx->f[0] = FPU_MOV_S(ctx->f[21]);
    // 0x1f18c8: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x1f18c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1f18cc: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x1f18ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1f18d0: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x1f18d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1f18d4: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x1f18d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1f18d8: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x1f18d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x1f18dc: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x1f18dcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x1f18e0: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x1f18e0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1f18e4: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x1f18e4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1f18e8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1f18e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1f18ec: 0xc7b70148  lwc1        $f23, 0x148($sp)
    ctx->pc = 0x1f18ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x1f18f0: 0xc7b60140  lwc1        $f22, 0x140($sp)
    ctx->pc = 0x1f18f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1f18f4: 0xc7b50138  lwc1        $f21, 0x138($sp)
    ctx->pc = 0x1f18f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1f18f8: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x1f18f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1f18fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F18FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F1900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F18FCu;
            // 0x1f1900: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F15E8u: goto label_1f15e8;
            case 0x1F1604u: goto label_1f1604;
            case 0x1F1608u: goto label_1f1608;
            case 0x1F1638u: goto label_1f1638;
            case 0x1F163Cu: goto label_1f163c;
            case 0x1F1650u: goto label_1f1650;
            case 0x1F166Cu: goto label_1f166c;
            case 0x1F1720u: goto label_1f1720;
            case 0x1F1798u: goto label_1f1798;
            case 0x1F17C0u: goto label_1f17c0;
            case 0x1F17C4u: goto label_1f17c4;
            case 0x1F1890u: goto label_1f1890;
            case 0x1F18ACu: goto label_1f18ac;
            case 0x1F18B8u: goto label_1f18b8;
            case 0x1F18C4u: goto label_1f18c4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F1904u;
    // 0x1f1904: 0x0  nop
    ctx->pc = 0x1f1904u;
    // NOP
}
