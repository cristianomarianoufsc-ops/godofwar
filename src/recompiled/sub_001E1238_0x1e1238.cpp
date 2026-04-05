#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E1238
// Address: 0x1e1238 - 0x1e1370
void sub_001E1238_0x1e1238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1238_0x1e1238");
#endif

    ctx->pc = 0x1e1238u;

    // 0x1e1238: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e1238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e123c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e123cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e1240: 0x8ca6002c  lw          $a2, 0x2C($a1)
    ctx->pc = 0x1e1240u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 44)));
    // 0x1e1244: 0x10c0001c  beqz        $a2, . + 4 + (0x1C << 2)
    ctx->pc = 0x1E1244u;
    {
        const bool branch_taken_0x1e1244 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1244u;
            // 0x1e1248: 0x80382d  daddu       $a3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1244) {
            ctx->pc = 0x1E12B8u;
            goto label_1e12b8;
        }
    }
    ctx->pc = 0x1E124Cu;
    // 0x1e124c: 0x8ce20174  lw          $v0, 0x174($a3)
    ctx->pc = 0x1e124cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 372)));
    // 0x1e1250: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E1250u;
    {
        const bool branch_taken_0x1e1250 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1e1250) {
            ctx->pc = 0x1E1254u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1250u;
            // 0x1e1254: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E1268u;
            goto label_1e1268;
        }
    }
    ctx->pc = 0x1E1258u;
    // 0x1e1258: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1e1258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1e125c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1E125Cu;
    {
        const bool branch_taken_0x1e125c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E125Cu;
            // 0x1e1260: 0x8c425e88  lw          $v0, 0x5E88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24200)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e125c) {
            ctx->pc = 0x1E1270u;
            goto label_1e1270;
        }
    }
    ctx->pc = 0x1E1264u;
    // 0x1e1264: 0x0  nop
    ctx->pc = 0x1e1264u;
    // NOP
label_1e1268:
    // 0x1e1268: 0x8c425e8c  lw          $v0, 0x5E8C($v0)
    ctx->pc = 0x1e1268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24204)));
    // 0x1e126c: 0x0  nop
    ctx->pc = 0x1e126cu;
    // NOP
label_1e1270:
    // 0x1e1270: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1e1270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1e1274: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1e1274u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e1278: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1E1278u;
    {
        const bool branch_taken_0x1e1278 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E127Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1278u;
            // 0x1e127c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1278) {
            ctx->pc = 0x1E12BCu;
            goto label_1e12bc;
        }
    }
    ctx->pc = 0x1E1280u;
    // 0x1e1280: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x1e1280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1e1284: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x1e1284u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1e1288: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1e1288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1e128c: 0x846400a8  lh          $a0, 0xA8($v1)
    ctx->pc = 0x1e128cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 168)));
    // 0x1e1290: 0x8c425e7c  lw          $v0, 0x5E7C($v0)
    ctx->pc = 0x1e1290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24188)));
    // 0x1e1294: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1e1294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1e1298: 0xe42021  addu        $a0, $a3, $a0
    ctx->pc = 0x1e1298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x1e129c: 0x8c6300ac  lw          $v1, 0xAC($v1)
    ctx->pc = 0x1e129cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 172)));
    // 0x1e12a0: 0x78a50010  lq          $a1, 0x10($a1)
    ctx->pc = 0x1e12a0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x1e12a4: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x1e12a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x1e12a8: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1e12a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e12ac: 0x60f809  jalr        $v1
    ctx->pc = 0x1E12ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1E12B4u);
        ctx->pc = 0x1E12B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E12ACu;
            // 0x1e12b0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E12B4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E1268u: goto label_1e1268;
            case 0x1E1270u: goto label_1e1270;
            case 0x1E12B8u: goto label_1e12b8;
            case 0x1E12BCu: goto label_1e12bc;
            case 0x1E1300u: goto label_1e1300;
            case 0x1E1338u: goto label_1e1338;
            case 0x1E133Cu: goto label_1e133c;
            case 0x1E1368u: goto label_1e1368;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E12B4u; }
            if (ctx->pc != 0x1E12B4u) { return; }
        }
        }
    }
    ctx->pc = 0x1E12B4u;
    // 0x1e12b4: 0x0  nop
    ctx->pc = 0x1e12b4u;
    // NOP
label_1e12b8:
    // 0x1e12b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e12b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e12bc:
    // 0x1e12bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E12BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E12C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E12BCu;
            // 0x1e12c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E1268u: goto label_1e1268;
            case 0x1E1270u: goto label_1e1270;
            case 0x1E12B8u: goto label_1e12b8;
            case 0x1E12BCu: goto label_1e12bc;
            case 0x1E1300u: goto label_1e1300;
            case 0x1E1338u: goto label_1e1338;
            case 0x1E133Cu: goto label_1e133c;
            case 0x1E1368u: goto label_1e1368;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E12C4u;
    // 0x1e12c4: 0x0  nop
    ctx->pc = 0x1e12c4u;
    // NOP
    // 0x1e12c8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1e12c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1e12cc: 0x8c4377bc  lw          $v1, 0x77BC($v0)
    ctx->pc = 0x1e12ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30652)));
    // 0x1e12d0: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1E12D0u;
    {
        const bool branch_taken_0x1e12d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E12D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E12D0u;
            // 0x1e12d4: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e12d0) {
            ctx->pc = 0x1E1300u;
            goto label_1e1300;
        }
    }
    ctx->pc = 0x1E12D8u;
    // 0x1e12d8: 0x8c425e6c  lw          $v0, 0x5E6C($v0)
    ctx->pc = 0x1e12d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24172)));
    // 0x1e12dc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e12dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e12e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e12e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e12e4: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1e12e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1e12e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E12E8u;
    {
        const bool branch_taken_0x1e12e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E12ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E12E8u;
            // 0x1e12ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e12e8) {
            ctx->pc = 0x1E1300u;
            goto label_1e1300;
        }
    }
    ctx->pc = 0x1E12F0u;
    // 0x1e12f0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1e12f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1e12f4: 0xac62d2a8  sw          $v0, -0x2D58($v1)
    ctx->pc = 0x1e12f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294955688), GPR_U32(ctx, 2));
    // 0x1e12f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1E12F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E12FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E12F8u;
            // 0x1e12fc: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E1268u: goto label_1e1268;
            case 0x1E1270u: goto label_1e1270;
            case 0x1E12B8u: goto label_1e12b8;
            case 0x1E12BCu: goto label_1e12bc;
            case 0x1E1300u: goto label_1e1300;
            case 0x1E1338u: goto label_1e1338;
            case 0x1E133Cu: goto label_1e133c;
            case 0x1E1368u: goto label_1e1368;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E1300u;
label_1e1300:
    // 0x1e1300: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1300u;
            // 0x1e1304: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E1268u: goto label_1e1268;
            case 0x1E1270u: goto label_1e1270;
            case 0x1E12B8u: goto label_1e12b8;
            case 0x1E12BCu: goto label_1e12bc;
            case 0x1E1300u: goto label_1e1300;
            case 0x1E1338u: goto label_1e1338;
            case 0x1E133Cu: goto label_1e133c;
            case 0x1E1368u: goto label_1e1368;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E1308u;
    // 0x1e1308: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1e1308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1e130c: 0x8c4377bc  lw          $v1, 0x77BC($v0)
    ctx->pc = 0x1e130cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30652)));
    // 0x1e1310: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E1310u;
    {
        const bool branch_taken_0x1e1310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E1314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1310u;
            // 0x1e1314: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1310) {
            ctx->pc = 0x1E1338u;
            goto label_1e1338;
        }
    }
    ctx->pc = 0x1E1318u;
    // 0x1e1318: 0x8c425e6c  lw          $v0, 0x5E6C($v0)
    ctx->pc = 0x1e1318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24172)));
    // 0x1e131c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1e131cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1e1320: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e1320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e1324: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1e1324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x1e1328: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E1328u;
    {
        const bool branch_taken_0x1e1328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E132Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1328u;
            // 0x1e132c: 0x3c03002c  lui         $v1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e1328) {
            ctx->pc = 0x1E133Cu;
            goto label_1e133c;
        }
    }
    ctx->pc = 0x1E1330u;
    // 0x1e1330: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1330u;
            // 0x1e1334: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E1268u: goto label_1e1268;
            case 0x1E1270u: goto label_1e1270;
            case 0x1E12B8u: goto label_1e12b8;
            case 0x1E12BCu: goto label_1e12bc;
            case 0x1E1300u: goto label_1e1300;
            case 0x1E1338u: goto label_1e1338;
            case 0x1E133Cu: goto label_1e133c;
            case 0x1E1368u: goto label_1e1368;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E1338u;
label_1e1338:
    // 0x1e1338: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x1e1338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
label_1e133c:
    // 0x1e133c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1e133cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1e1340: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1e1340u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1e1344: 0x246377a0  addiu       $v1, $v1, 0x77A0
    ctx->pc = 0x1e1344u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30624));
    // 0x1e1348: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1e1348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1e134c: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x1e134cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e1350: 0x70031fc9  prot3w      $v1, $v1
    ctx->pc = 0x1e1350u;
    SET_GPR_VEC(ctx, 3, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1e1354: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1e1354u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e1358: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1e1358u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1e135c: 0x0  nop
    ctx->pc = 0x1e135cu;
    // NOP
    // 0x1e1360: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1E1360u;
    {
        const bool branch_taken_0x1e1360 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1e1360) {
            ctx->pc = 0x1E1364u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E1360u;
            // 0x1e1364: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E1368u;
            goto label_1e1368;
        }
    }
    ctx->pc = 0x1E1368u;
label_1e1368:
    // 0x1e1368: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1368u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E1268u: goto label_1e1268;
            case 0x1E1270u: goto label_1e1270;
            case 0x1E12B8u: goto label_1e12b8;
            case 0x1E12BCu: goto label_1e12bc;
            case 0x1E1300u: goto label_1e1300;
            case 0x1E1338u: goto label_1e1338;
            case 0x1E133Cu: goto label_1e133c;
            case 0x1E1368u: goto label_1e1368;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1E1370u;
}
