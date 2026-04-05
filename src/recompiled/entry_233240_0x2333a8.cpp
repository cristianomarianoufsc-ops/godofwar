#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_233240
// Address: 0x233240 - 0x2333a8
void entry_233240_0x2333a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_233240_0x2333a8");
#endif

    ctx->pc = 0x233240u;

    // 0x233240: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x233240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x233244: 0x5040003d  beql        $v0, $zero, . + 4 + (0x3D << 2)
    ctx->pc = 0x233244u;
    {
        const bool branch_taken_0x233244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233244) {
            ctx->pc = 0x233248u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x233244u;
            // 0x233248: 0x8c860000  lw          $a2, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23333Cu;
            goto label_23333c;
        }
    }
    ctx->pc = 0x23324Cu;
    // 0x23324c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x23324cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x233250: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x233250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x233254: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x233254u;
    {
        const bool branch_taken_0x233254 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233254u;
            // 0x233258: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233254) {
            ctx->pc = 0x2332E0u;
            goto label_2332e0;
        }
    }
    ctx->pc = 0x23325Cu;
    // 0x23325c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x23325cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x233260: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x233260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x233264: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x233264u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x233268: 0x0  nop
    ctx->pc = 0x233268u;
    // NOP
    // 0x23326c: 0x4500001d  bc1f        . + 4 + (0x1D << 2)
    ctx->pc = 0x23326Cu;
    {
        const bool branch_taken_0x23326c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x233270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23326Cu;
            // 0x233270: 0x8c870000  lw          $a3, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23326c) {
            ctx->pc = 0x2332E4u;
            goto label_2332e4;
        }
    }
    ctx->pc = 0x233274u;
    // 0x233274: 0x58e00014  blezl       $a3, . + 4 + (0x14 << 2)
    ctx->pc = 0x233274u;
    {
        const bool branch_taken_0x233274 = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x233274) {
            ctx->pc = 0x233278u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x233274u;
            // 0x233278: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2332C8u;
            goto label_2332c8;
        }
    }
    ctx->pc = 0x23327Cu;
    // 0x23327c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x23327cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_233280:
    // 0x233280: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x233280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x233284: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x233284u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x233288: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x233288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x23328c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23328cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x233290: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x233290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x233294: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x233294u;
    {
        const bool branch_taken_0x233294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233294) {
            ctx->pc = 0x233298u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x233294u;
            // 0x233298: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2332C8u;
            goto label_2332c8;
        }
    }
    ctx->pc = 0x23329Cu;
    // 0x23329c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x23329cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2332a0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2332a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2332a4: 0x0  nop
    ctx->pc = 0x2332a4u;
    // NOP
    // 0x2332a8: 0x45020007  bc1fl       . + 4 + (0x7 << 2)
    ctx->pc = 0x2332A8u;
    {
        const bool branch_taken_0x2332a8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2332a8) {
            ctx->pc = 0x2332ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2332A8u;
            // 0x2332ac: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2332C8u;
            goto label_2332c8;
        }
    }
    ctx->pc = 0x2332B0u;
    // 0x2332b0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2332b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2332b4: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x2332b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x2332b8: 0x1040fff1  beqz        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2332B8u;
    {
        const bool branch_taken_0x2332b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2332BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2332B8u;
            // 0x2332bc: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2332b8) {
            ctx->pc = 0x233280u;
            runtime->cooperativeGuestYield();
            goto label_233280;
        }
    }
    ctx->pc = 0x2332C0u;
    // 0x2332c0: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2332c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x2332c4: 0x0  nop
    ctx->pc = 0x2332c4u;
    // NOP
label_2332c8:
    // 0x2332c8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x2332c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x2332cc: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2332ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2332d0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2332d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2332d4: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x2332D4u;
    {
        const bool branch_taken_0x2332d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2332D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2332D4u;
            // 0x2332d8: 0x8c43000c  lw          $v1, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2332d4) {
            ctx->pc = 0x233350u;
            goto label_233350;
        }
    }
    ctx->pc = 0x2332DCu;
    // 0x2332dc: 0x0  nop
    ctx->pc = 0x2332dcu;
    // NOP
label_2332e0:
    // 0x2332e0: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x2332e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2332e4:
    // 0x2332e4: 0x58e00015  blezl       $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x2332E4u;
    {
        const bool branch_taken_0x2332e4 = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x2332e4) {
            ctx->pc = 0x2332E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2332E4u;
            // 0x2332e8: 0x8c860000  lw          $a2, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23333Cu;
            goto label_23333c;
        }
    }
    ctx->pc = 0x2332ECu;
    // 0x2332ec: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x2332ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2332f0:
    // 0x2332f0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x2332f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2332f4: 0x2463000c  addiu       $v1, $v1, 0xC
    ctx->pc = 0x2332f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x2332f8: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x2332f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2332fc: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2332fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x233300: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x233300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x233304: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x233304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x233308: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x233308u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x23330c: 0x0  nop
    ctx->pc = 0x23330cu;
    // NOP
    // 0x233310: 0x45020006  bc1fl       . + 4 + (0x6 << 2)
    ctx->pc = 0x233310u;
    {
        const bool branch_taken_0x233310 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x233310) {
            ctx->pc = 0x233314u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x233310u;
            // 0x233314: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23332Cu;
            goto label_23332c;
        }
    }
    ctx->pc = 0x233318u;
    // 0x233318: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x233318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x23331c: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x23331cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x233320: 0x5040fff3  beql        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x233320u;
    {
        const bool branch_taken_0x233320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233320) {
            ctx->pc = 0x233324u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x233320u;
            // 0x233324: 0x8c830010  lw          $v1, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2332F0u;
            runtime->cooperativeGuestYield();
            goto label_2332f0;
        }
    }
    ctx->pc = 0x233328u;
    // 0x233328: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x233328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23332c:
    // 0x23332c: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x23332cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x233330: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x233330u;
    {
        const bool branch_taken_0x233330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233330u;
            // 0x233334: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233330) {
            ctx->pc = 0x233344u;
            goto label_233344;
        }
    }
    ctx->pc = 0x233338u;
    // 0x233338: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x233338u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_23333c:
    // 0x23333c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x23333Cu;
    {
        const bool branch_taken_0x23333c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23333Cu;
            // 0x233340: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23333c) {
            ctx->pc = 0x233350u;
            goto label_233350;
        }
    }
    ctx->pc = 0x233344u;
label_233344:
    // 0x233344: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x233344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x233348: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x233348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x23334c: 0x0  nop
    ctx->pc = 0x23334cu;
    // NOP
label_233350:
    // 0x233350: 0x4c00012  bltz        $a2, . + 4 + (0x12 << 2)
    ctx->pc = 0x233350u;
    {
        const bool branch_taken_0x233350 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x233354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233350u;
            // 0x233354: 0x63880  sll         $a3, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233350) {
            ctx->pc = 0x23339Cu;
            goto label_23339c;
        }
    }
    ctx->pc = 0x233358u;
label_233358:
    // 0x233358: 0x671021  addu        $v0, $v1, $a3
    ctx->pc = 0x233358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x23335c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x23335cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x233360: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x233360u;
    {
        const bool branch_taken_0x233360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233360) {
            ctx->pc = 0x233364u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x233360u;
            // 0x233364: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x233388u;
            goto label_233388;
        }
    }
    ctx->pc = 0x233368u;
    // 0x233368: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x233368u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23336c: 0xc4a00000  lwc1        $f0, 0x0($a1)
    ctx->pc = 0x23336cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x233370: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x233370u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x233374: 0x0  nop
    ctx->pc = 0x233374u;
    // NOP
    // 0x233378: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x233378u;
    {
        const bool branch_taken_0x233378 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x233378) {
            ctx->pc = 0x23337Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x233378u;
            // 0x23337c: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x233388u;
            goto label_233388;
        }
    }
    ctx->pc = 0x233380u;
    // 0x233380: 0x1000fff5  b           . + 4 + (-0xB << 2)
    ctx->pc = 0x233380u;
    {
        const bool branch_taken_0x233380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233380u;
            // 0x233384: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233380) {
            ctx->pc = 0x233358u;
            runtime->cooperativeGuestYield();
            goto label_233358;
        }
    }
    ctx->pc = 0x233388u;
label_233388:
    // 0x233388: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x233388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x23338c: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x23338cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x233390: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x233390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x233394: 0x4c1fff0  bgez        $a2, . + 4 + (-0x10 << 2)
    ctx->pc = 0x233394u;
    {
        const bool branch_taken_0x233394 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x233398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233394u;
            // 0x233398: 0x24e7fffc  addiu       $a3, $a3, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233394) {
            ctx->pc = 0x233358u;
            runtime->cooperativeGuestYield();
            goto label_233358;
        }
    }
    ctx->pc = 0x23339Cu;
label_23339c:
    // 0x23339c: 0x3e00008  jr          $ra
    ctx->pc = 0x23339Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2333A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23339Cu;
            // 0x2333a0: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x233280u: goto label_233280;
            case 0x2332C8u: goto label_2332c8;
            case 0x2332E0u: goto label_2332e0;
            case 0x2332E4u: goto label_2332e4;
            case 0x2332F0u: goto label_2332f0;
            case 0x23332Cu: goto label_23332c;
            case 0x23333Cu: goto label_23333c;
            case 0x233344u: goto label_233344;
            case 0x233350u: goto label_233350;
            case 0x233358u: goto label_233358;
            case 0x233388u: goto label_233388;
            case 0x23339Cu: goto label_23339c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2333A4u;
    // 0x2333a4: 0x0  nop
    ctx->pc = 0x2333a4u;
    // NOP
}
