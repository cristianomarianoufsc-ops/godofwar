#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B14B8
// Address: 0x1b14b8 - 0x1b19e8
void sub_001B14B8_0x1b14b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B14B8_0x1b14b8");
#endif

    ctx->pc = 0x1b14b8u;

    // 0x1b14b8: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x1b14b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x1b14bc: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x1b14bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x1b14c0: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x1b14c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x1b14c4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1b14c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b14c8: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x1b14c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x1b14cc: 0x24970028  addiu       $s7, $a0, 0x28
    ctx->pc = 0x1b14ccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    // 0x1b14d0: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x1b14d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x1b14d4: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x1b14d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x1b14d8: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x1b14d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x1b14dc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1b14dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x1b14e0: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x1b14e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x1b14e4: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x1b14e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x1b14e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1b14e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1b14ec: 0xe7b600d0  swc1        $f22, 0xD0($sp)
    ctx->pc = 0x1b14ecu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x1b14f0: 0xe7b500c8  swc1        $f21, 0xC8($sp)
    ctx->pc = 0x1b14f0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x1b14f4: 0xe7b400c0  swc1        $f20, 0xC0($sp)
    ctx->pc = 0x1b14f4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x1b14f8: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1b14f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1b14fc: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x1b14fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x1b1500: 0xafb70000  sw          $s7, 0x0($sp)
    ctx->pc = 0x1b1500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 23));
    // 0x1b1504: 0x94420024  lhu         $v0, 0x24($v0)
    ctx->pc = 0x1b1504u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x1b1508: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x1b1508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x1b150c: 0x1077001b  beq         $v1, $s7, . + 4 + (0x1B << 2)
    ctx->pc = 0x1B150Cu;
    {
        const bool branch_taken_0x1b150c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 23));
        ctx->pc = 0x1B1510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B150Cu;
            // 0x1b1510: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b150c) {
            ctx->pc = 0x1B157Cu;
            goto label_1b157c;
        }
    }
    ctx->pc = 0x1B1514u;
    // 0x1b1514: 0x0  nop
    ctx->pc = 0x1b1514u;
    // NOP
label_1b1518:
    // 0x1b1518: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x1b1518u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1b151c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1b151cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b1520: 0x94c2000c  lhu         $v0, 0xC($a2)
    ctx->pc = 0x1b1520u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x1b1524: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1B1524u;
    {
        const bool branch_taken_0x1b1524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B1528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1524u;
            // 0x1b1528: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1524) {
            ctx->pc = 0x1B1570u;
            goto label_1b1570;
        }
    }
    ctx->pc = 0x1B152Cu;
    // 0x1b152c: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x1b152cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1b1530: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1b1530u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1b1534: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1b1534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1b1538: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1b1538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1b153c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1b153cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1b1540: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x1b1540u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
    // 0x1b1544: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x1B1544u;
    {
        const bool branch_taken_0x1b1544 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1544u;
            // 0x1b1548: 0xacc00004  sw          $zero, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1544) {
            ctx->pc = 0x1B157Cu;
            goto label_1b157c;
        }
    }
    ctx->pc = 0x1B154Cu;
    // 0x1b154c: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x1b154cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1b1550: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1b1550u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1b1554: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x1b1554u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b1558: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1b1558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1b155c: 0x40f809  jalr        $v0
    ctx->pc = 0x1B155Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B1564u);
        ctx->pc = 0x1B1560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B155Cu;
            // 0x1b1560: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B1564u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B1518u: goto label_1b1518;
            case 0x1B1570u: goto label_1b1570;
            case 0x1B157Cu: goto label_1b157c;
            case 0x1B1580u: goto label_1b1580;
            case 0x1B1598u: goto label_1b1598;
            case 0x1B15D0u: goto label_1b15d0;
            case 0x1B160Cu: goto label_1b160c;
            case 0x1B162Cu: goto label_1b162c;
            case 0x1B1634u: goto label_1b1634;
            case 0x1B1638u: goto label_1b1638;
            case 0x1B1650u: goto label_1b1650;
            case 0x1B1678u: goto label_1b1678;
            case 0x1B16D4u: goto label_1b16d4;
            case 0x1B16DCu: goto label_1b16dc;
            case 0x1B16E4u: goto label_1b16e4;
            case 0x1B16ECu: goto label_1b16ec;
            case 0x1B16F0u: goto label_1b16f0;
            case 0x1B16F4u: goto label_1b16f4;
            case 0x1B1700u: goto label_1b1700;
            case 0x1B1730u: goto label_1b1730;
            case 0x1B1750u: goto label_1b1750;
            case 0x1B175Cu: goto label_1b175c;
            case 0x1B1780u: goto label_1b1780;
            case 0x1B17B8u: goto label_1b17b8;
            case 0x1B17BCu: goto label_1b17bc;
            case 0x1B17DCu: goto label_1b17dc;
            case 0x1B1820u: goto label_1b1820;
            case 0x1B1838u: goto label_1b1838;
            case 0x1B1844u: goto label_1b1844;
            case 0x1B1848u: goto label_1b1848;
            case 0x1B18A0u: goto label_1b18a0;
            case 0x1B18C0u: goto label_1b18c0;
            case 0x1B18E8u: goto label_1b18e8;
            case 0x1B18ECu: goto label_1b18ec;
            case 0x1B1904u: goto label_1b1904;
            case 0x1B1924u: goto label_1b1924;
            case 0x1B1960u: goto label_1b1960;
            case 0x1B19B0u: goto label_1b19b0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B1564u; }
            if (ctx->pc != 0x1B1564u) { return; }
        }
        }
    }
    ctx->pc = 0x1B1564u;
    // 0x1b1564: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B1564u;
    {
        const bool branch_taken_0x1b1564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1564u;
            // 0x1b1568: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1564) {
            ctx->pc = 0x1B1580u;
            goto label_1b1580;
        }
    }
    ctx->pc = 0x1B156Cu;
    // 0x1b156c: 0x0  nop
    ctx->pc = 0x1b156cu;
    // NOP
label_1b1570:
    // 0x1b1570: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1b1570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b1574: 0x1443ffe8  bne         $v0, $v1, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1B1574u;
    {
        const bool branch_taken_0x1b1574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1B1578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1574u;
            // 0x1b1578: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1574) {
            ctx->pc = 0x1B1518u;
            runtime->cooperativeGuestYield();
            goto label_1b1518;
        }
    }
    ctx->pc = 0x1B157Cu;
label_1b157c:
    // 0x1b157c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1b157cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
label_1b1580:
    // 0x1b1580: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1b1580u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1584: 0x8c62cb28  lw          $v0, -0x34D8($v1)
    ctx->pc = 0x1b1584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953768)));
    // 0x1b1588: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x1B1588u;
    {
        const bool branch_taken_0x1b1588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B158Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1588u;
            // 0x1b158c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1588) {
            ctx->pc = 0x1B1650u;
            goto label_1b1650;
        }
    }
    ctx->pc = 0x1B1590u;
    // 0x1b1590: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b1590u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1594: 0x0  nop
    ctx->pc = 0x1b1594u;
    // NOP
label_1b1598:
    // 0x1b1598: 0x2462cb28  addiu       $v0, $v1, -0x34D8
    ctx->pc = 0x1b1598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953768));
    // 0x1b159c: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1b159cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1b15a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1b15a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b15a4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1b15a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1b15a8: 0x2442ec58  addiu       $v0, $v0, -0x13A8
    ctx->pc = 0x1b15a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962264));
    // 0x1b15ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b15acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b15b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b15b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b15b4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b15b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b15b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b15b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b15bc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1b15bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1b15c0: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x1b15c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1b15c4: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1B15C4u;
    {
        const bool branch_taken_0x1b15c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B15C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B15C4u;
            // 0x1b15c8: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b15c4) {
            ctx->pc = 0x1B1638u;
            goto label_1b1638;
        }
    }
    ctx->pc = 0x1B15CCu;
    // 0x1b15cc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1b15ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1b15d0:
    // 0x1b15d0: 0x2483ffec  addiu       $v1, $a0, -0x14
    ctx->pc = 0x1b15d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
    // 0x1b15d4: 0x2442cb28  addiu       $v0, $v0, -0x34D8
    ctx->pc = 0x1b15d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953768));
    // 0x1b15d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b15d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b15dc: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1b15dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1b15e0: 0x64280b  movn        $a1, $v1, $a0
    ctx->pc = 0x1b15e0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x1b15e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b15e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b15e8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1b15e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b15ec: 0x54430007  bnel        $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B15ECu;
    {
        const bool branch_taken_0x1b15ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1b15ec) {
            ctx->pc = 0x1B15F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B15ECu;
            // 0x1b15f0: 0x94a20004  lhu         $v0, 0x4($a1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B160Cu;
            goto label_1b160c;
        }
    }
    ctx->pc = 0x1B15F4u;
    // 0x1b15f4: 0x3c02001a  lui         $v0, 0x1A
    ctx->pc = 0x1b15f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)26 << 16));
    // 0x1b15f8: 0x8ca30030  lw          $v1, 0x30($a1)
    ctx->pc = 0x1b15f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x1b15fc: 0x244271a8  addiu       $v0, $v0, 0x71A8
    ctx->pc = 0x1b15fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29096));
    // 0x1b1600: 0x5062000a  beql        $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B1600u;
    {
        const bool branch_taken_0x1b1600 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1b1600) {
            ctx->pc = 0x1B1604u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1600u;
            // 0x1b1604: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B162Cu;
            goto label_1b162c;
        }
    }
    ctx->pc = 0x1B1608u;
    // 0x1b1608: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x1b1608u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
label_1b160c:
    // 0x1b160c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1b160cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1b1610: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B1610u;
    {
        const bool branch_taken_0x1b1610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1610) {
            ctx->pc = 0x1B1614u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1610u;
            // 0x1b1614: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B162Cu;
            goto label_1b162c;
        }
    }
    ctx->pc = 0x1B1618u;
    // 0x1b1618: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b1618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b161c: 0xc21004  sllv        $v0, $v0, $a2
    ctx->pc = 0x1b161cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x1b1620: 0x2c21025  or          $v0, $s6, $v0
    ctx->pc = 0x1b1620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
    // 0x1b1624: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1624u;
    {
        const bool branch_taken_0x1b1624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1624u;
            // 0x1b1628: 0x3056ffff  andi        $s6, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1624) {
            ctx->pc = 0x1B1634u;
            goto label_1b1634;
        }
    }
    ctx->pc = 0x1B162Cu;
label_1b162c:
    // 0x1b162c: 0x1480ffe8  bnez        $a0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1B162Cu;
    {
        const bool branch_taken_0x1b162c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B162Cu;
            // 0x1b1630: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b162c) {
            ctx->pc = 0x1B15D0u;
            runtime->cooperativeGuestYield();
            goto label_1b15d0;
        }
    }
    ctx->pc = 0x1B1634u;
label_1b1634:
    // 0x1b1634: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1b1634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
label_1b1638:
    // 0x1b1638: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x1b1638u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x1b163c: 0x2462cb28  addiu       $v0, $v1, -0x34D8
    ctx->pc = 0x1b163cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953768));
    // 0x1b1640: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1b1640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1b1644: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b1644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b1648: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x1B1648u;
    {
        const bool branch_taken_0x1b1648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B164Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1648u;
            // 0x1b164c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1648) {
            ctx->pc = 0x1B1598u;
            runtime->cooperativeGuestYield();
            goto label_1b1598;
        }
    }
    ctx->pc = 0x1B1650u;
label_1b1650:
    // 0x1b1650: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x1b1650u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
    // 0x1b1654: 0x2642ec58  addiu       $v0, $s2, -0x13A8
    ctx->pc = 0x1b1654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962264));
    // 0x1b1658: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1b1658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1b165c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b165cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b1660: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1b1660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1b1664: 0x8c5000c0  lw          $s0, 0xC0($v0)
    ctx->pc = 0x1b1664u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1b1668: 0x52000025  beql        $s0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x1B1668u;
    {
        const bool branch_taken_0x1b1668 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1668) {
            ctx->pc = 0x1B166Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1668u;
            // 0x1b166c: 0x8e220104  lw          $v0, 0x104($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B1700u;
            goto label_1b1700;
        }
    }
    ctx->pc = 0x1B1670u;
    // 0x1b1670: 0x2602ffec  addiu       $v0, $s0, -0x14
    ctx->pc = 0x1b1670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
    // 0x1b1674: 0x0  nop
    ctx->pc = 0x1b1674u;
    // NOP
label_1b1678:
    // 0x1b1678: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1b1678u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b167c: 0x50180b  movn        $v1, $v0, $s0
    ctx->pc = 0x1b167cu;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x1b1680: 0x94620004  lhu         $v0, 0x4($v1)
    ctx->pc = 0x1b1680u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1b1684: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1b1684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1b1688: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x1B1688u;
    {
        const bool branch_taken_0x1b1688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1688) {
            ctx->pc = 0x1B168Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1688u;
            // 0x1b168c: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B16F4u;
            goto label_1b16f4;
        }
    }
    ctx->pc = 0x1B1690u;
    // 0x1b1690: 0x8c630048  lw          $v1, 0x48($v1)
    ctx->pc = 0x1b1690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x1b1694: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1b1694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1b1698: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1b1698u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1b169c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1b169cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1b16a0: 0x40f809  jalr        $v0
    ctx->pc = 0x1B16A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1B16A8u);
        ctx->pc = 0x1B16A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B16A0u;
            // 0x1b16a4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B16A8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B1518u: goto label_1b1518;
            case 0x1B1570u: goto label_1b1570;
            case 0x1B157Cu: goto label_1b157c;
            case 0x1B1580u: goto label_1b1580;
            case 0x1B1598u: goto label_1b1598;
            case 0x1B15D0u: goto label_1b15d0;
            case 0x1B160Cu: goto label_1b160c;
            case 0x1B162Cu: goto label_1b162c;
            case 0x1B1634u: goto label_1b1634;
            case 0x1B1638u: goto label_1b1638;
            case 0x1B1650u: goto label_1b1650;
            case 0x1B1678u: goto label_1b1678;
            case 0x1B16D4u: goto label_1b16d4;
            case 0x1B16DCu: goto label_1b16dc;
            case 0x1B16E4u: goto label_1b16e4;
            case 0x1B16ECu: goto label_1b16ec;
            case 0x1B16F0u: goto label_1b16f0;
            case 0x1B16F4u: goto label_1b16f4;
            case 0x1B1700u: goto label_1b1700;
            case 0x1B1730u: goto label_1b1730;
            case 0x1B1750u: goto label_1b1750;
            case 0x1B175Cu: goto label_1b175c;
            case 0x1B1780u: goto label_1b1780;
            case 0x1B17B8u: goto label_1b17b8;
            case 0x1B17BCu: goto label_1b17bc;
            case 0x1B17DCu: goto label_1b17dc;
            case 0x1B1820u: goto label_1b1820;
            case 0x1B1838u: goto label_1b1838;
            case 0x1B1844u: goto label_1b1844;
            case 0x1B1848u: goto label_1b1848;
            case 0x1B18A0u: goto label_1b18a0;
            case 0x1B18C0u: goto label_1b18c0;
            case 0x1B18E8u: goto label_1b18e8;
            case 0x1B18ECu: goto label_1b18ec;
            case 0x1B1904u: goto label_1b1904;
            case 0x1B1924u: goto label_1b1924;
            case 0x1B1960u: goto label_1b1960;
            case 0x1B19B0u: goto label_1b19b0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B16A8u; }
            if (ctx->pc != 0x1B16A8u) { return; }
        }
        }
    }
    ctx->pc = 0x1B16A8u;
    // 0x1b16a8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1b16a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b16ac: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x1b16acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x1b16b0: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1B16B0u;
    {
        const bool branch_taken_0x1b16b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b16b0) {
            ctx->pc = 0x1B16B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B16B0u;
            // 0x1b16b4: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B16F4u;
            goto label_1b16f4;
        }
    }
    ctx->pc = 0x1B16B8u;
    // 0x1b16b8: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1b16b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1b16bc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b16bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b16c0: 0x244247d0  addiu       $v0, $v0, 0x47D0
    ctx->pc = 0x1b16c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18384));
    // 0x1b16c4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b16c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b16c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b16c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b16cc: 0x400008  jr          $v0
    ctx->pc = 0x1B16CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B16D4u: goto label_1b16d4;
            case 0x1B16DCu: goto label_1b16dc;
            case 0x1B16E4u: goto label_1b16e4;
            case 0x1B16ECu: goto label_1b16ec;
            case 0x1B16F0u: goto label_1b16f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B16D4u;
label_1b16d4:
    // 0x1b16d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B16D4u;
    {
        const bool branch_taken_0x1b16d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B16D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B16D4u;
            // 0x1b16d8: 0x36d60100  ori         $s6, $s6, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b16d4) {
            ctx->pc = 0x1B16F0u;
            goto label_1b16f0;
        }
    }
    ctx->pc = 0x1B16DCu;
label_1b16dc:
    // 0x1b16dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1B16DCu;
    {
        const bool branch_taken_0x1b16dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B16E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B16DCu;
            // 0x1b16e0: 0x36d60200  ori         $s6, $s6, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b16dc) {
            ctx->pc = 0x1B16F0u;
            goto label_1b16f0;
        }
    }
    ctx->pc = 0x1B16E4u;
label_1b16e4:
    // 0x1b16e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B16E4u;
    {
        const bool branch_taken_0x1b16e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B16E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B16E4u;
            // 0x1b16e8: 0x36d60400  ori         $s6, $s6, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b16e4) {
            ctx->pc = 0x1B16F0u;
            goto label_1b16f0;
        }
    }
    ctx->pc = 0x1B16ECu;
label_1b16ec:
    // 0x1b16ec: 0x36d60800  ori         $s6, $s6, 0x800
    ctx->pc = 0x1b16ecu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)2048);
label_1b16f0:
    // 0x1b16f0: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1b16f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1b16f4:
    // 0x1b16f4: 0x1600ffe0  bnez        $s0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x1B16F4u;
    {
        const bool branch_taken_0x1b16f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B16F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B16F4u;
            // 0x1b16f8: 0x2602ffec  addiu       $v0, $s0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b16f4) {
            ctx->pc = 0x1B1678u;
            runtime->cooperativeGuestYield();
            goto label_1b1678;
        }
    }
    ctx->pc = 0x1B16FCu;
    // 0x1b16fc: 0x8e220104  lw          $v0, 0x104($s1)
    ctx->pc = 0x1b16fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 260)));
label_1b1700:
    // 0x1b1700: 0x3c14ffff  lui         $s4, 0xFFFF
    ctx->pc = 0x1b1700u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)65535 << 16));
    // 0x1b1704: 0x8c450054  lw          $a1, 0x54($v0)
    ctx->pc = 0x1b1704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1b1708: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1B1708u;
    {
        const bool branch_taken_0x1b1708 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B170Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1708u;
            // 0x1b170c: 0x3694ffff  ori         $s4, $s4, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1708) {
            ctx->pc = 0x1B175Cu;
            goto label_1b175c;
        }
    }
    ctx->pc = 0x1B1710u;
    // 0x1b1710: 0x9444005c  lhu         $a0, 0x5C($v0)
    ctx->pc = 0x1b1710u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x1b1714: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1b1714u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1b1718: 0x28820021  slti        $v0, $a0, 0x21
    ctx->pc = 0x1b1718u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)33) ? 1 : 0);
    // 0x1b171c: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x1b171cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x1b1720: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x1B1720u;
    {
        const bool branch_taken_0x1b1720 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1720u;
            // 0x1b1724: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1720) {
            ctx->pc = 0x1B175Cu;
            goto label_1b175c;
        }
    }
    ctx->pc = 0x1B1728u;
    // 0x1b1728: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1b1728u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b172c: 0x0  nop
    ctx->pc = 0x1b172cu;
    // NOP
label_1b1730:
    // 0x1b1730: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b1730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b1734: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B1734u;
    {
        const bool branch_taken_0x1b1734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1734) {
            ctx->pc = 0x1B1738u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1734u;
            // 0x1b1738: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1B1750u;
            goto label_1b1750;
        }
    }
    ctx->pc = 0x1B173Cu;
    // 0x1b173c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1b173cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1b1740: 0xc21004  sllv        $v0, $v0, $a2
    ctx->pc = 0x1b1740u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 6) & 0x1F));
    // 0x1b1744: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x1b1744u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x1b1748: 0x282a024  and         $s4, $s4, $v0
    ctx->pc = 0x1b1748u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x1b174c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1b174cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1b1750:
    // 0x1b1750: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x1b1750u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1b1754: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x1B1754u;
    {
        const bool branch_taken_0x1b1754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1754u;
            // 0x1b1758: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1754) {
            ctx->pc = 0x1B1730u;
            runtime->cooperativeGuestYield();
            goto label_1b1730;
        }
    }
    ctx->pc = 0x1B175Cu;
label_1b175c:
    // 0x1b175c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1b175cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1b1760: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b1760u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b1764: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x1b1764u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1b1768: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b1768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b176c: 0x8c82cb48  lw          $v0, -0x34B8($a0)
    ctx->pc = 0x1b176cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294953800)));
    // 0x1b1770: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1B1770u;
    {
        const bool branch_taken_0x1b1770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1770u;
            // 0x1b1774: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1770) {
            ctx->pc = 0x1B17DCu;
            goto label_1b17dc;
        }
    }
    ctx->pc = 0x1B1778u;
    // 0x1b1778: 0x2483cb48  addiu       $v1, $a0, -0x34B8
    ctx->pc = 0x1b1778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953800));
    // 0x1b177c: 0x0  nop
    ctx->pc = 0x1b177cu;
    // NOP
label_1b1780:
    // 0x1b1780: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x1b1780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1b1784: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b1784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b1788: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b1788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b178c: 0x2643ec58  addiu       $v1, $s2, -0x13A8
    ctx->pc = 0x1b178cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294962264));
    // 0x1b1790: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b1790u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b1794: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b1794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b1798: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b1798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b179c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b179cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b17a0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1b17a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1b17a4: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x1b17a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1b17a8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B17A8u;
    {
        const bool branch_taken_0x1b17a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B17ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B17A8u;
            // 0x1b17ac: 0x2462ffec  addiu       $v0, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b17a8) {
            ctx->pc = 0x1B17B8u;
            goto label_1b17b8;
        }
    }
    ctx->pc = 0x1B17B0u;
    // 0x1b17b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B17B0u;
    {
        const bool branch_taken_0x1b17b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B17B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B17B0u;
            // 0x1b17b4: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b17b0) {
            ctx->pc = 0x1B17BCu;
            goto label_1b17bc;
        }
    }
    ctx->pc = 0x1B17B8u;
label_1b17b8:
    // 0x1b17b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b17b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b17bc:
    // 0x1b17bc: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1B17BCu;
    {
        const bool branch_taken_0x1b17bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B17C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B17BCu;
            // 0x1b17c0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b17bc) {
            ctx->pc = 0x1B1820u;
            goto label_1b1820;
        }
    }
    ctx->pc = 0x1B17C4u;
    // 0x1b17c4: 0x2482cb48  addiu       $v0, $a0, -0x34B8
    ctx->pc = 0x1b17c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953800));
    // 0x1b17c8: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1b17c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1b17cc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b17ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b17d0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b17d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b17d4: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1B17D4u;
    {
        const bool branch_taken_0x1b17d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B17D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B17D4u;
            // 0x1b17d8: 0x2483cb48  addiu       $v1, $a0, -0x34B8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953800));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b17d4) {
            ctx->pc = 0x1B1780u;
            runtime->cooperativeGuestYield();
            goto label_1b1780;
        }
    }
    ctx->pc = 0x1B17DCu;
label_1b17dc:
    // 0x1b17dc: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1b17dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1b17e0: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x1b17e0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1b17e4: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1b17e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1b17e8: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1b17e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1b17ec: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x1b17ecu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x1b17f0: 0x2602ec58  addiu       $v0, $s0, -0x13A8
    ctx->pc = 0x1b17f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962264));
    // 0x1b17f4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1b17f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1b17f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b17f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b17fc: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1b17fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1b1800: 0x8c4200c0  lw          $v0, 0xC0($v0)
    ctx->pc = 0x1b1800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1b1804: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1B1804u;
    {
        const bool branch_taken_0x1b1804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1804u;
            // 0x1b1808: 0x4600a586  mov.s       $f22, $f20 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1804) {
            ctx->pc = 0x1B1844u;
            goto label_1b1844;
        }
    }
    ctx->pc = 0x1B180Cu;
    // 0x1b180c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B180Cu;
    {
        const bool branch_taken_0x1b180c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B180Cu;
            // 0x1b1810: 0x2444ffec  addiu       $a0, $v0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b180c) {
            ctx->pc = 0x1B1838u;
            goto label_1b1838;
        }
    }
    ctx->pc = 0x1B1814u;
    // 0x1b1814: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1B1814u;
    {
        const bool branch_taken_0x1b1814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1814u;
            // 0x1b1818: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1814) {
            ctx->pc = 0x1B1848u;
            goto label_1b1848;
        }
    }
    ctx->pc = 0x1B181Cu;
    // 0x1b181c: 0x0  nop
    ctx->pc = 0x1b181cu;
    // NOP
label_1b1820:
    // 0x1b1820: 0xd84100b0  lqc2        $vf1, 0xB0($v0)
    ctx->pc = 0x1b1820u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 176)));
    // 0x1b1824: 0x4b010043  vaddw.x     $vf1, $vf0, $vf1w
    ctx->pc = 0x1b1824u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1b1828: 0x48220800  qmfc2.ni    $v0, $vf1
    ctx->pc = 0x1b1828u;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1b182c: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x1b182cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x1b1830: 0x1000ffea  b           . + 4 + (-0x16 << 2)
    ctx->pc = 0x1B1830u;
    {
        const bool branch_taken_0x1b1830 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b1830) {
            ctx->pc = 0x1B17DCu;
            runtime->cooperativeGuestYield();
            goto label_1b17dc;
        }
    }
    ctx->pc = 0x1B1838u;
label_1b1838:
    // 0x1b1838: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b1838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b183c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B183Cu;
    {
        const bool branch_taken_0x1b183c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B1840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B183Cu;
            // 0x1b1840: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b183c) {
            ctx->pc = 0x1B1848u;
            goto label_1b1848;
        }
    }
    ctx->pc = 0x1B1844u;
label_1b1844:
    // 0x1b1844: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1b1844u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b1848:
    // 0x1b1848: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B1848u;
    {
        const bool branch_taken_0x1b1848 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B184Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1848u;
            // 0x1b184c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1848) {
            ctx->pc = 0x1B18A0u;
            goto label_1b18a0;
        }
    }
    ctx->pc = 0x1B1850u;
    // 0x1b1850: 0x96420004  lhu         $v0, 0x4($s2)
    ctx->pc = 0x1b1850u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1b1854: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b1854u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1858: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1b1858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1b185c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x1b185cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1b1860: 0xc040314  jal         func_100C50
    ctx->pc = 0x1B1860u;
    SET_GPR_U32(ctx, 31, 0x1B1868u);
    ctx->pc = 0x1B1864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1860u;
            // 0x1b1864: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100C50u;
    if (runtime->hasFunction(0x100C50u)) {
        auto targetFn = runtime->lookupFunction(0x100C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1868u; }
        if (ctx->pc != 0x1B1868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100C50_0x100c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1868u; }
        if (ctx->pc != 0x1B1868u) { return; }
    }
    ctx->pc = 0x1B1868u;
    // 0x1b1868: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1b1868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1b186c: 0xc641003c  lwc1        $f1, 0x3C($s2)
    ctx->pc = 0x1b186cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1b1870: 0xc442c658  lwc1        $f2, -0x39A8($v0)
    ctx->pc = 0x1b1870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1b1874: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x1b1874u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
    // 0x1b1878: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x1b1878u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x1b187c: 0x46020d03  div.s       $f20, $f1, $f2
    ctx->pc = 0x1b187cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[20] = ctx->f[1] / ctx->f[2];
    // 0x1b1880: 0xc0402ae  jal         func_100AB8
    ctx->pc = 0x1B1880u;
    SET_GPR_U32(ctx, 31, 0x1B1888u);
    ctx->pc = 0x1B1884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1880u;
            // 0x1b1884: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100AB8u;
    if (runtime->hasFunction(0x100AB8u)) {
        auto targetFn = runtime->lookupFunction(0x100AB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1888u; }
        if (ctx->pc != 0x1B1888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100AB8_0x100ab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1888u; }
        if (ctx->pc != 0x1B1888u) { return; }
    }
    ctx->pc = 0x1B1888u;
    // 0x1b1888: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x1b1888u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x1b188c: 0xc06c67a  jal         func_1B19E8
    ctx->pc = 0x1B188Cu;
    SET_GPR_U32(ctx, 31, 0x1B1894u);
    ctx->pc = 0x1B1890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B188Cu;
            // 0x1b1890: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B19E8u;
    if (runtime->hasFunction(0x1B19E8u)) {
        auto targetFn = runtime->lookupFunction(0x1B19E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1894u; }
        if (ctx->pc != 0x1B1894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B19E8_0x1b19e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1894u; }
        if (ctx->pc != 0x1B1894u) { return; }
    }
    ctx->pc = 0x1B1894u;
    // 0x1b1894: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x1b1894u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x1b1898: 0x2f403  sra         $fp, $v0, 16
    ctx->pc = 0x1b1898u;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1b189c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1b189cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b18a0:
    // 0x1b18a0: 0x2602ec58  addiu       $v0, $s0, -0x13A8
    ctx->pc = 0x1b18a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294962264));
    // 0x1b18a4: 0x8c420068  lw          $v0, 0x68($v0)
    ctx->pc = 0x1b18a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1b18a8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b18a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b18ac: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1b18acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1b18b0: 0x8c5000c0  lw          $s0, 0xC0($v0)
    ctx->pc = 0x1b18b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1b18b4: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1B18B4u;
    {
        const bool branch_taken_0x1b18b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B18B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B18B4u;
            // 0x1b18b8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b18b4) {
            ctx->pc = 0x1B1924u;
            goto label_1b1924;
        }
    }
    ctx->pc = 0x1B18BCu;
    // 0x1b18bc: 0x2602ffec  addiu       $v0, $s0, -0x14
    ctx->pc = 0x1b18bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
label_1b18c0:
    // 0x1b18c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b18c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b18c4: 0x50200b  movn        $a0, $v0, $s0
    ctx->pc = 0x1b18c4u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x1b18c8: 0x8c91009c  lw          $s1, 0x9C($a0)
    ctx->pc = 0x1b18c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 156)));
    // 0x1b18cc: 0x2623ffff  addiu       $v1, $s1, -0x1
    ctx->pc = 0x1b18ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x1b18d0: 0x2c620004  sltiu       $v0, $v1, 0x4
    ctx->pc = 0x1b18d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1b18d4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B18D4u;
    {
        const bool branch_taken_0x1b18d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B18D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B18D4u;
            // 0x1b18d8: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b18d4) {
            ctx->pc = 0x1B18E8u;
            goto label_1b18e8;
        }
    }
    ctx->pc = 0x1B18DCu;
    // 0x1b18dc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1b18dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1b18e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B18E0u;
    {
        const bool branch_taken_0x1b18e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B18E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B18E0u;
            // 0x1b18e4: 0x8c44008c  lw          $a0, 0x8C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b18e0) {
            ctx->pc = 0x1B18ECu;
            goto label_1b18ec;
        }
    }
    ctx->pc = 0x1B18E8u;
label_1b18e8:
    // 0x1b18e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1b18e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b18ec:
    // 0x1b18ec: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B18ECu;
    {
        const bool branch_taken_0x1b18ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B18F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B18ECu;
            // 0x1b18f0: 0x151080  sll         $v0, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b18ec) {
            ctx->pc = 0x1B1904u;
            goto label_1b1904;
        }
    }
    ctx->pc = 0x1B18F4u;
    // 0x1b18f4: 0xc05cd4a  jal         func_173528
    ctx->pc = 0x1B18F4u;
    SET_GPR_U32(ctx, 31, 0x1B18FCu);
    ctx->pc = 0x173528u;
    if (runtime->hasFunction(0x173528u)) {
        auto targetFn = runtime->lookupFunction(0x173528u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B18FCu; }
        if (ctx->pc != 0x1B18FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173528_0x173528(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B18FCu; }
        if (ctx->pc != 0x1B18FCu) { return; }
    }
    ctx->pc = 0x1B18FCu;
    // 0x1b18fc: 0x2880a  movz        $s1, $zero, $v0
    ctx->pc = 0x1b18fcu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
    // 0x1b1900: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x1b1900u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_1b1904:
    // 0x1b1904: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1b1904u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1b1908: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1b1908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x1b190c: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x1b190cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x1b1910: 0x12630004  beq         $s3, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B1910u;
    {
        const bool branch_taken_0x1b1910 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x1B1914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1910u;
            // 0x1b1914: 0x51a821  addu        $s5, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1910) {
            ctx->pc = 0x1B1924u;
            goto label_1b1924;
        }
    }
    ctx->pc = 0x1B1918u;
    // 0x1b1918: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1b1918u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1b191c: 0x1600ffe8  bnez        $s0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x1B191Cu;
    {
        const bool branch_taken_0x1b191c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B1920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B191Cu;
            // 0x1b1920: 0x2602ffec  addiu       $v0, $s0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b191c) {
            ctx->pc = 0x1B18C0u;
            runtime->cooperativeGuestYield();
            goto label_1b18c0;
        }
    }
    ctx->pc = 0x1B1924u;
label_1b1924:
    // 0x1b1924: 0x16c0000e  bnez        $s6, . + 4 + (0xE << 2)
    ctx->pc = 0x1B1924u;
    {
        const bool branch_taken_0x1b1924 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1924) {
            ctx->pc = 0x1B1960u;
            goto label_1b1960;
        }
    }
    ctx->pc = 0x1B192Cu;
    // 0x1b192c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1b192cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1b1930: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1b1930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1b1934: 0x1682000a  bne         $s4, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1B1934u;
    {
        const bool branch_taken_0x1b1934 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        if (branch_taken_0x1b1934) {
            ctx->pc = 0x1B1960u;
            goto label_1b1960;
        }
    }
    ctx->pc = 0x1B193Cu;
    // 0x1b193c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1b193cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1b1940: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1b1940u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b1944: 0x4600a832  c.eq.s      $f21, $f0
    ctx->pc = 0x1b1944u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1b1948: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x1B1948u;
    {
        const bool branch_taken_0x1b1948 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b1948) {
            ctx->pc = 0x1B1960u;
            goto label_1b1960;
        }
    }
    ctx->pc = 0x1B1950u;
    // 0x1b1950: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B1950u;
    {
        const bool branch_taken_0x1b1950 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b1950) {
            ctx->pc = 0x1B1960u;
            goto label_1b1960;
        }
    }
    ctx->pc = 0x1B1958u;
    // 0x1b1958: 0x12600015  beqz        $s3, . + 4 + (0x15 << 2)
    ctx->pc = 0x1B1958u;
    {
        const bool branch_taken_0x1b1958 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B195Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1958u;
            // 0x1b195c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b1958) {
            ctx->pc = 0x1B19B0u;
            goto label_1b19b0;
        }
    }
    ctx->pc = 0x1B1960u;
label_1b1960:
    // 0x1b1960: 0xc06946a  jal         func_1A51A8
    ctx->pc = 0x1B1960u;
    SET_GPR_U32(ctx, 31, 0x1B1968u);
    ctx->pc = 0x1B1964u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1960u;
            // 0x1b1964: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A51A8u;
    if (runtime->hasFunction(0x1A51A8u)) {
        auto targetFn = runtime->lookupFunction(0x1A51A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1968u; }
        if (ctx->pc != 0x1B1968u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A51A8_0x1a51a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1968u; }
        if (ctx->pc != 0x1B1968u) { return; }
    }
    ctx->pc = 0x1B1968u;
    // 0x1b1968: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1b1968u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b196c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1b196cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1970: 0x8fa80014  lw          $t0, 0x14($sp)
    ctx->pc = 0x1b1970u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1b1974: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x1b1974u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1978: 0x8faa0018  lw          $t2, 0x18($sp)
    ctx->pc = 0x1b1978u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1b197c: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x1b197cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1980: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x1b1980u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x1b1984: 0x3c0482d  daddu       $t1, $fp, $zero
    ctx->pc = 0x1b1984u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b1988: 0x4600b346  mov.s       $f13, $f22
    ctx->pc = 0x1b1988u;
    ctx->f[13] = FPU_MOV_S(ctx->f[22]);
    // 0x1b198c: 0x4600a386  mov.s       $f14, $f20
    ctx->pc = 0x1b198cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[20]);
    // 0x1b1990: 0xc06942e  jal         func_1A50B8
    ctx->pc = 0x1B1990u;
    SET_GPR_U32(ctx, 31, 0x1B1998u);
    ctx->pc = 0x1B1994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B1990u;
            // 0x1b1994: 0x2a0582d  daddu       $t3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A50B8u;
    if (runtime->hasFunction(0x1A50B8u)) {
        auto targetFn = runtime->lookupFunction(0x1A50B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1998u; }
        if (ctx->pc != 0x1B1998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A50B8_0x1a50b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B1998u; }
        if (ctx->pc != 0x1B1998u) { return; }
    }
    ctx->pc = 0x1B1998u;
    // 0x1b1998: 0x8ee30004  lw          $v1, 0x4($s7)
    ctx->pc = 0x1b1998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x1b199c: 0xaee20004  sw          $v0, 0x4($s7)
    ctx->pc = 0x1b199cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4), GPR_U32(ctx, 2));
    // 0x1b19a0: 0xac570000  sw          $s7, 0x0($v0)
    ctx->pc = 0x1b19a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 23));
    // 0x1b19a4: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1b19a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1b19a8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1b19a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1b19ac: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x1b19acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1b19b0:
    // 0x1b19b0: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x1b19b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1b19b4: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x1b19b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1b19b8: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x1b19b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1b19bc: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x1b19bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1b19c0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1b19c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1b19c4: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x1b19c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1b19c8: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x1b19c8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1b19cc: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x1b19ccu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1b19d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1b19d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1b19d4: 0xc7b600d0  lwc1        $f22, 0xD0($sp)
    ctx->pc = 0x1b19d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x1b19d8: 0xc7b500c8  lwc1        $f21, 0xC8($sp)
    ctx->pc = 0x1b19d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x1b19dc: 0xc7b400c0  lwc1        $f20, 0xC0($sp)
    ctx->pc = 0x1b19dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1b19e0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B19E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B19E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B19E0u;
            // 0x1b19e4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B1518u: goto label_1b1518;
            case 0x1B1570u: goto label_1b1570;
            case 0x1B157Cu: goto label_1b157c;
            case 0x1B1580u: goto label_1b1580;
            case 0x1B1598u: goto label_1b1598;
            case 0x1B15D0u: goto label_1b15d0;
            case 0x1B160Cu: goto label_1b160c;
            case 0x1B162Cu: goto label_1b162c;
            case 0x1B1634u: goto label_1b1634;
            case 0x1B1638u: goto label_1b1638;
            case 0x1B1650u: goto label_1b1650;
            case 0x1B1678u: goto label_1b1678;
            case 0x1B16D4u: goto label_1b16d4;
            case 0x1B16DCu: goto label_1b16dc;
            case 0x1B16E4u: goto label_1b16e4;
            case 0x1B16ECu: goto label_1b16ec;
            case 0x1B16F0u: goto label_1b16f0;
            case 0x1B16F4u: goto label_1b16f4;
            case 0x1B1700u: goto label_1b1700;
            case 0x1B1730u: goto label_1b1730;
            case 0x1B1750u: goto label_1b1750;
            case 0x1B175Cu: goto label_1b175c;
            case 0x1B1780u: goto label_1b1780;
            case 0x1B17B8u: goto label_1b17b8;
            case 0x1B17BCu: goto label_1b17bc;
            case 0x1B17DCu: goto label_1b17dc;
            case 0x1B1820u: goto label_1b1820;
            case 0x1B1838u: goto label_1b1838;
            case 0x1B1844u: goto label_1b1844;
            case 0x1B1848u: goto label_1b1848;
            case 0x1B18A0u: goto label_1b18a0;
            case 0x1B18C0u: goto label_1b18c0;
            case 0x1B18E8u: goto label_1b18e8;
            case 0x1B18ECu: goto label_1b18ec;
            case 0x1B1904u: goto label_1b1904;
            case 0x1B1924u: goto label_1b1924;
            case 0x1B1960u: goto label_1b1960;
            case 0x1B19B0u: goto label_1b19b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B19E8u;
}
