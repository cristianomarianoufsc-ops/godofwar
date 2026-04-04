#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00144278
// Address: 0x144278 - 0x1443c8
void sub_00144278_0x144278(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00144278_0x144278");
#endif

    ctx->pc = 0x144278u;

    // 0x144278: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x144278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x14427c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14427cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x144280: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x144280u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x144284: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x144284u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144288: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x144288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x14428c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x14428cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144290: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x144290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x144294: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x144294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144298: 0x2e22000a  sltiu       $v0, $s1, 0xA
    ctx->pc = 0x144298u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x14429c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x14429Cu;
    {
        const bool branch_taken_0x14429c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1442A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14429Cu;
            // 0x1442a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14429c) {
            ctx->pc = 0x1442E8u;
            goto label_1442e8;
        }
    }
    ctx->pc = 0x1442A4u;
    // 0x1442a4: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1442a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1442a8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1442a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1442ac: 0x244217d0  addiu       $v0, $v0, 0x17D0
    ctx->pc = 0x1442acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6096));
    // 0x1442b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1442b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1442b4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1442b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1442b8: 0x400008  jr          $v0
    ctx->pc = 0x1442B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1442C0u: goto label_1442c0;
            case 0x1442DCu: goto label_1442dc;
            case 0x1442E4u: goto label_1442e4;
            case 0x1442E8u: goto label_1442e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1442C0u;
label_1442c0:
    // 0x1442c0: 0x16400002  bnez        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1442C0u;
    {
        const bool branch_taken_0x1442c0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1442C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1442C0u;
            // 0x1442c4: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1442c0) {
            ctx->pc = 0x1442CCu;
            goto label_1442cc;
        }
    }
    ctx->pc = 0x1442C8u;
    // 0x1442c8: 0x245217c0  addiu       $s2, $v0, 0x17C0
    ctx->pc = 0x1442c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 6080));
label_1442cc:
    // 0x1442cc: 0xc0a268a  jal         func_289A28
    ctx->pc = 0x1442CCu;
    SET_GPR_U32(ctx, 31, 0x1442D4u);
    ctx->pc = 0x1442D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1442CCu;
            // 0x1442d0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289A28u;
    if (runtime->hasFunction(0x289A28u)) {
        auto targetFn = runtime->lookupFunction(0x289A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1442D4u; }
        if (ctx->pc != 0x1442D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289a28_0x289b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1442D4u; }
        if (ctx->pc != 0x1442D4u) { return; }
    }
    ctx->pc = 0x1442D4u;
    // 0x1442d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1442D4u;
    {
        const bool branch_taken_0x1442d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1442D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1442D4u;
            // 0x1442d8: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1442d4) {
            ctx->pc = 0x1442E8u;
            goto label_1442e8;
        }
    }
    ctx->pc = 0x1442DCu;
label_1442dc:
    // 0x1442dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1442DCu;
    {
        const bool branch_taken_0x1442dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1442E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1442DCu;
            // 0x1442e0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1442dc) {
            ctx->pc = 0x1442E8u;
            goto label_1442e8;
        }
    }
    ctx->pc = 0x1442E4u;
label_1442e4:
    // 0x1442e4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1442e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1442e8:
    // 0x1442e8: 0x8e020c00  lw          $v0, 0xC00($s0)
    ctx->pc = 0x1442e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3072)));
    // 0x1442ec: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1442ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1442f0: 0x2032021  addu        $a0, $s0, $v1
    ctx->pc = 0x1442f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1442f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1442f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1442f8: 0xa4910000  sh          $s1, 0x0($a0)
    ctx->pc = 0x1442f8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 17));
    // 0x1442fc: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1442fcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144300: 0xae020c00  sw          $v0, 0xC00($s0)
    ctx->pc = 0x144300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3072), GPR_U32(ctx, 2));
    // 0x144304: 0x96020c04  lhu         $v0, 0xC04($s0)
    ctx->pc = 0x144304u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 3076)));
    // 0x144308: 0x10c00028  beqz        $a2, . + 4 + (0x28 << 2)
    ctx->pc = 0x144308u;
    {
        const bool branch_taken_0x144308 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x14430Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144308u;
            // 0x14430c: 0xa4620002  sh          $v0, 0x2($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144308) {
            ctx->pc = 0x1443ACu;
            goto label_1443ac;
        }
    }
    ctx->pc = 0x144310u;
    // 0x144310: 0x32420003  andi        $v0, $s2, 0x3
    ctx->pc = 0x144310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
    // 0x144314: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x144314u;
    {
        const bool branch_taken_0x144314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x144318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144314u;
            // 0x144318: 0x8e020c04  lw          $v0, 0xC04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144314) {
            ctx->pc = 0x144364u;
            goto label_144364;
        }
    }
    ctx->pc = 0x14431Cu;
    // 0x14431c: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x14431cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x144320: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x144320u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x144324: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x144324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x144328: 0x460001a  bltz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x144328u;
    {
        const bool branch_taken_0x144328 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x14432Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144328u;
            // 0x14432c: 0x2021021  addu        $v0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144328) {
            ctx->pc = 0x144394u;
            goto label_144394;
        }
    }
    ctx->pc = 0x144330u;
    // 0x144330: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x144330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144334: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x144334u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144338: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x144338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x14433c: 0x0  nop
    ctx->pc = 0x14433cu;
    // NOP
label_144340:
    // 0x144340: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x144340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x144344: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x144344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x144348: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x144348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x14434c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x14434cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x144350: 0x0  nop
    ctx->pc = 0x144350u;
    // NOP
    // 0x144354: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x144354u;
    {
        const bool branch_taken_0x144354 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x144358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x144354u;
            // 0x144358: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x144354) {
            ctx->pc = 0x144340u;
            runtime->cooperativeGuestYield();
            goto label_144340;
        }
    }
    ctx->pc = 0x14435Cu;
    // 0x14435c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x14435Cu;
    {
        const bool branch_taken_0x14435c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x144360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14435Cu;
            // 0x144360: 0x8e030c04  lw          $v1, 0xC04($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14435c) {
            ctx->pc = 0x144398u;
            goto label_144398;
        }
    }
    ctx->pc = 0x144364u;
label_144364:
    // 0x144364: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x144364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x144368: 0x24420400  addiu       $v0, $v0, 0x400
    ctx->pc = 0x144368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
    // 0x14436c: 0x18c00009  blez        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x14436Cu;
    {
        const bool branch_taken_0x14436c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x144370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14436Cu;
            // 0x144370: 0x2023821  addu        $a3, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14436c) {
            ctx->pc = 0x144394u;
            goto label_144394;
        }
    }
    ctx->pc = 0x144374u;
    // 0x144374: 0x0  nop
    ctx->pc = 0x144374u;
    // NOP
label_144378:
    // 0x144378: 0x2451021  addu        $v0, $s2, $a1
    ctx->pc = 0x144378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x14437c: 0xe52021  addu        $a0, $a3, $a1
    ctx->pc = 0x14437cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x144380: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x144380u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x144384: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x144384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x144388: 0xa6102a  slt         $v0, $a1, $a2
    ctx->pc = 0x144388u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x14438c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14438Cu;
    {
        const bool branch_taken_0x14438c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x144390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14438Cu;
            // 0x144390: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14438c) {
            ctx->pc = 0x144378u;
            runtime->cooperativeGuestYield();
            goto label_144378;
        }
    }
    ctx->pc = 0x144394u;
label_144394:
    // 0x144394: 0x8e030c04  lw          $v1, 0xC04($s0)
    ctx->pc = 0x144394u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3076)));
label_144398:
    // 0x144398: 0x24c20003  addiu       $v0, $a2, 0x3
    ctx->pc = 0x144398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 3));
    // 0x14439c: 0x2404fffc  addiu       $a0, $zero, -0x4
    ctx->pc = 0x14439cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1443a0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x1443a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x1443a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1443a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1443a8: 0xae030c04  sw          $v1, 0xC04($s0)
    ctx->pc = 0x1443a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3076), GPR_U32(ctx, 3));
label_1443ac:
    // 0x1443ac: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1443acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1443b0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1443b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1443b4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1443b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1443b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1443b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1443bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1443BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1443C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1443BCu;
            // 0x1443c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1442C0u: goto label_1442c0;
            case 0x1442CCu: goto label_1442cc;
            case 0x1442DCu: goto label_1442dc;
            case 0x1442E4u: goto label_1442e4;
            case 0x1442E8u: goto label_1442e8;
            case 0x144340u: goto label_144340;
            case 0x144364u: goto label_144364;
            case 0x144378u: goto label_144378;
            case 0x144394u: goto label_144394;
            case 0x144398u: goto label_144398;
            case 0x1443ACu: goto label_1443ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1443C4u;
    // 0x1443c4: 0x0  nop
    ctx->pc = 0x1443c4u;
    // NOP
}
