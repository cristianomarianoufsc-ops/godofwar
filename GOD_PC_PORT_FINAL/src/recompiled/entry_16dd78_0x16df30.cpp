#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_16dd78
// Address: 0x16dd78 - 0x16df30
void entry_16dd78_0x16df30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_16dd78_0x16df30");
#endif

    ctx->pc = 0x16dd78u;

    // 0x16dd78: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x16dd78u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16dd7c: 0x8d620008  lw          $v0, 0x8($t3)
    ctx->pc = 0x16dd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x16dd80: 0x944c005c  lhu         $t4, 0x5C($v0)
    ctx->pc = 0x16dd80u;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 92)));
    // 0x16dd84: 0x11800067  beqz        $t4, . + 4 + (0x67 << 2)
    ctx->pc = 0x16DD84u;
    {
        const bool branch_taken_0x16dd84 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DD88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DD84u;
            // 0x16dd88: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dd84) {
            ctx->pc = 0x16DF24u;
            goto label_16df24;
        }
    }
    ctx->pc = 0x16DD8Cu;
    // 0x16dd8c: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x16dd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_16dd90:
    // 0x16dd90: 0x8d630030  lw          $v1, 0x30($t3)
    ctx->pc = 0x16dd90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 48)));
    // 0x16dd94: 0x1421018  mult        $v0, $t2, $v0
    ctx->pc = 0x16dd94u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16dd98: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x16dd98u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16dd9c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16dd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16dda0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x16dda0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16dda4: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16dda4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16dda8: 0x0  nop
    ctx->pc = 0x16dda8u;
    // NOP
    // 0x16ddac: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x16DDACu;
    {
        const bool branch_taken_0x16ddac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16DDB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DDACu;
            // 0x16ddb0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ddac) {
            ctx->pc = 0x16DDC8u;
            goto label_16ddc8;
        }
    }
    ctx->pc = 0x16DDB4u;
    // 0x16ddb4: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x16ddb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ddb8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16ddb8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16ddbc: 0x0  nop
    ctx->pc = 0x16ddbcu;
    // NOP
    // 0x16ddc0: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x16DDC0u;
    {
        const bool branch_taken_0x16ddc0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16ddc0) {
            ctx->pc = 0x16DDC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16DDC0u;
            // 0x16ddc4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16DDC8u;
            goto label_16ddc8;
        }
    }
    ctx->pc = 0x16DDC8u;
label_16ddc8:
    // 0x16ddc8: 0x50800053  beql        $a0, $zero, . + 4 + (0x53 << 2)
    ctx->pc = 0x16DDC8u;
    {
        const bool branch_taken_0x16ddc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x16ddc8) {
            ctx->pc = 0x16DDCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16DDC8u;
            // 0x16ddcc: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16DF18u;
            goto label_16df18;
        }
    }
    ctx->pc = 0x16DDD0u;
    // 0x16ddd0: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x16ddd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ddd4: 0x700517c9  prot3w      $v0, $a1
    ctx->pc = 0x16ddd4u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x16ddd8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16ddd8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16dddc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16dddcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16dde0: 0x0  nop
    ctx->pc = 0x16dde0u;
    // NOP
    // 0x16dde4: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x16DDE4u;
    {
        const bool branch_taken_0x16dde4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16DDE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DDE4u;
            // 0x16dde8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dde4) {
            ctx->pc = 0x16DE00u;
            goto label_16de00;
        }
    }
    ctx->pc = 0x16DDECu;
    // 0x16ddec: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x16ddecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16ddf0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16ddf0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16ddf4: 0x0  nop
    ctx->pc = 0x16ddf4u;
    // NOP
    // 0x16ddf8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x16DDF8u;
    {
        const bool branch_taken_0x16ddf8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16ddf8) {
            ctx->pc = 0x16DDFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16DDF8u;
            // 0x16ddfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16DE00u;
            goto label_16de00;
        }
    }
    ctx->pc = 0x16DE00u;
label_16de00:
    // 0x16de00: 0x50400045  beql        $v0, $zero, . + 4 + (0x45 << 2)
    ctx->pc = 0x16DE00u;
    {
        const bool branch_taken_0x16de00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16de00) {
            ctx->pc = 0x16DE04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16DE00u;
            // 0x16de04: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16DF18u;
            goto label_16df18;
        }
    }
    ctx->pc = 0x16DE08u;
    // 0x16de08: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x16de08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16de0c: 0x70051789  pexew       $v0, $a1
    ctx->pc = 0x16de0cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x16de10: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16de10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x16de14: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16de14u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16de18: 0x0  nop
    ctx->pc = 0x16de18u;
    // NOP
    // 0x16de1c: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x16DE1Cu;
    {
        const bool branch_taken_0x16de1c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16DE20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DE1Cu;
            // 0x16de20: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16de1c) {
            ctx->pc = 0x16DE38u;
            goto label_16de38;
        }
    }
    ctx->pc = 0x16DE24u;
    // 0x16de24: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x16de24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x16de28: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x16de28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16de2c: 0x0  nop
    ctx->pc = 0x16de2cu;
    // NOP
    // 0x16de30: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x16DE30u;
    {
        const bool branch_taken_0x16de30 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16de30) {
            ctx->pc = 0x16DE34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16DE30u;
            // 0x16de34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16DE38u;
            goto label_16de38;
        }
    }
    ctx->pc = 0x16DE38u;
label_16de38:
    // 0x16de38: 0x50400037  beql        $v0, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x16DE38u;
    {
        const bool branch_taken_0x16de38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16de38) {
            ctx->pc = 0x16DE3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16DE38u;
            // 0x16de3c: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16DF18u;
            goto label_16df18;
        }
    }
    ctx->pc = 0x16DE40u;
    // 0x16de40: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x16de40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x16de44: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x16de44u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16de48: 0x8d630010  lw          $v1, 0x10($t3)
    ctx->pc = 0x16de48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 16)));
    // 0x16de4c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x16de4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x16de50: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x16de50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16de54: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x16de54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x16de58: 0x94890000  lhu         $t1, 0x0($a0)
    ctx->pc = 0x16de58u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16de5c: 0x1120002d  beqz        $t1, . + 4 + (0x2D << 2)
    ctx->pc = 0x16DE5Cu;
    {
        const bool branch_taken_0x16de5c = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DE60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DE5Cu;
            // 0x16de60: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16de5c) {
            ctx->pc = 0x16DF14u;
            goto label_16df14;
        }
    }
    ctx->pc = 0x16DE64u;
    // 0x16de64: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x16de64u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_16de68:
    // 0x16de68: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x16de68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x16de6c: 0x94870000  lhu         $a3, 0x0($a0)
    ctx->pc = 0x16de6cu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16de70: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x16de70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x16de74: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x16DE74u;
    {
        const bool branch_taken_0x16de74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DE78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DE74u;
            // 0x16de78: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16de74) {
            ctx->pc = 0x16DF00u;
            goto label_16df00;
        }
    }
    ctx->pc = 0x16DE7Cu;
    // 0x16de7c: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x16de7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x16de80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16de80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16de84: 0x24422430  addiu       $v0, $v0, 0x2430
    ctx->pc = 0x16de84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9264));
    // 0x16de88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16de88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16de8c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16de8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16de90: 0x400008  jr          $v0
    ctx->pc = 0x16DE90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16DE98u: goto label_16de98;
            case 0x16DEA4u: goto label_16dea4;
            case 0x16DEE8u: goto label_16dee8;
            case 0x16DEF0u: goto label_16def0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16DE98u;
label_16de98:
    // 0x16de98: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x16de98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x16de9c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x16DE9Cu;
    {
        const bool branch_taken_0x16de9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DEA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DE9Cu;
            // 0x16dea0: 0x822021  addu        $a0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16de9c) {
            ctx->pc = 0x16DF00u;
            goto label_16df00;
        }
    }
    ctx->pc = 0x16DEA4u;
label_16dea4:
    // 0x16dea4: 0x10e00016  beqz        $a3, . + 4 + (0x16 << 2)
    ctx->pc = 0x16DEA4u;
    {
        const bool branch_taken_0x16dea4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DEA4u;
            // 0x16dea8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dea4) {
            ctx->pc = 0x16DF00u;
            goto label_16df00;
        }
    }
    ctx->pc = 0x16DEACu;
    // 0x16deac: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x16deacu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_16deb0:
    // 0x16deb0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16deb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16deb4: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x16deb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x16deb8: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x16deb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x16debc: 0x14460003  bne         $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x16DEBCu;
    {
        const bool branch_taken_0x16debc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x16DEC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DEBCu;
            // 0x16dec0: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16debc) {
            ctx->pc = 0x16DECCu;
            goto label_16decc;
        }
    }
    ctx->pc = 0x16DEC4u;
    // 0x16dec4: 0x3e00008  jr          $ra
    ctx->pc = 0x16DEC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DEC4u;
            // 0x16dec8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16DD90u: goto label_16dd90;
            case 0x16DDC8u: goto label_16ddc8;
            case 0x16DE00u: goto label_16de00;
            case 0x16DE38u: goto label_16de38;
            case 0x16DE68u: goto label_16de68;
            case 0x16DE98u: goto label_16de98;
            case 0x16DEA4u: goto label_16dea4;
            case 0x16DEB0u: goto label_16deb0;
            case 0x16DECCu: goto label_16decc;
            case 0x16DEE8u: goto label_16dee8;
            case 0x16DEF0u: goto label_16def0;
            case 0x16DEF4u: goto label_16def4;
            case 0x16DF00u: goto label_16df00;
            case 0x16DF04u: goto label_16df04;
            case 0x16DF14u: goto label_16df14;
            case 0x16DF18u: goto label_16df18;
            case 0x16DF24u: goto label_16df24;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16DECCu;
label_16decc:
    // 0x16decc: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x16deccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x16ded0: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x16ded0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16ded4: 0x67102b  sltu        $v0, $v1, $a3
    ctx->pc = 0x16ded4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x16ded8: 0x5440fff5  bnel        $v0, $zero, . + 4 + (-0xB << 2)
    ctx->pc = 0x16DED8u;
    {
        const bool branch_taken_0x16ded8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ded8) {
            ctx->pc = 0x16DEDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16DED8u;
            // 0x16dedc: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16DEB0u;
            runtime->cooperativeGuestYield();
            goto label_16deb0;
        }
    }
    ctx->pc = 0x16DEE0u;
    // 0x16dee0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16DEE0u;
    {
        const bool branch_taken_0x16dee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DEE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DEE0u;
            // 0x16dee4: 0x25020001  addiu       $v0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dee0) {
            ctx->pc = 0x16DF04u;
            goto label_16df04;
        }
    }
    ctx->pc = 0x16DEE8u;
label_16dee8:
    // 0x16dee8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16DEE8u;
    {
        const bool branch_taken_0x16dee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16DEECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DEE8u;
            // 0x16deec: 0x2402001a  addiu       $v0, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16dee8) {
            ctx->pc = 0x16DEF4u;
            goto label_16def4;
        }
    }
    ctx->pc = 0x16DEF0u;
label_16def0:
    // 0x16def0: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x16def0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_16def4:
    // 0x16def4: 0xe21818  mult        $v1, $a3, $v0
    ctx->pc = 0x16def4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16def8: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x16def8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x16defc: 0x0  nop
    ctx->pc = 0x16defcu;
    // NOP
label_16df00:
    // 0x16df00: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x16df00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_16df04:
    // 0x16df04: 0x3048ffff  andi        $t0, $v0, 0xFFFF
    ctx->pc = 0x16df04u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16df08: 0x109102b  sltu        $v0, $t0, $t1
    ctx->pc = 0x16df08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x16df0c: 0x5440ffd6  bnel        $v0, $zero, . + 4 + (-0x2A << 2)
    ctx->pc = 0x16DF0Cu;
    {
        const bool branch_taken_0x16df0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16df0c) {
            ctx->pc = 0x16DF10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16DF0Cu;
            // 0x16df10: 0x94830000  lhu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16DE68u;
            runtime->cooperativeGuestYield();
            goto label_16de68;
        }
    }
    ctx->pc = 0x16DF14u;
label_16df14:
    // 0x16df14: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x16df14u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_16df18:
    // 0x16df18: 0x14c102a  slt         $v0, $t2, $t4
    ctx->pc = 0x16df18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x16df1c: 0x1440ff9c  bnez        $v0, . + 4 + (-0x64 << 2)
    ctx->pc = 0x16DF1Cu;
    {
        const bool branch_taken_0x16df1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16DF20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DF1Cu;
            // 0x16df20: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16df1c) {
            ctx->pc = 0x16DD90u;
            runtime->cooperativeGuestYield();
            goto label_16dd90;
        }
    }
    ctx->pc = 0x16DF24u;
label_16df24:
    // 0x16df24: 0x3e00008  jr          $ra
    ctx->pc = 0x16DF24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16DF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16DF24u;
            // 0x16df28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16DD90u: goto label_16dd90;
            case 0x16DDC8u: goto label_16ddc8;
            case 0x16DE00u: goto label_16de00;
            case 0x16DE38u: goto label_16de38;
            case 0x16DE68u: goto label_16de68;
            case 0x16DE98u: goto label_16de98;
            case 0x16DEA4u: goto label_16dea4;
            case 0x16DEB0u: goto label_16deb0;
            case 0x16DECCu: goto label_16decc;
            case 0x16DEE8u: goto label_16dee8;
            case 0x16DEF0u: goto label_16def0;
            case 0x16DEF4u: goto label_16def4;
            case 0x16DF00u: goto label_16df00;
            case 0x16DF04u: goto label_16df04;
            case 0x16DF14u: goto label_16df14;
            case 0x16DF18u: goto label_16df18;
            case 0x16DF24u: goto label_16df24;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16DF2Cu;
    // 0x16df2c: 0x0  nop
    ctx->pc = 0x16df2cu;
    // NOP
}
