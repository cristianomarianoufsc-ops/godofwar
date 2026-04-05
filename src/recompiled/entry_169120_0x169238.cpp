#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_169120
// Address: 0x169120 - 0x169238
void entry_169120_0x169238(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_169120_0x169238");
#endif

    ctx->pc = 0x169120u;

    // 0x169120: 0x460f7001  sub.s       $f0, $f14, $f15
    ctx->pc = 0x169120u;
    ctx->f[0] = FPU_SUB_S(ctx->f[14], ctx->f[15]);
    // 0x169124: 0xc4830384  lwc1        $f3, 0x384($a0)
    ctx->pc = 0x169124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x169128: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x169128u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16912c: 0x0  nop
    ctx->pc = 0x16912cu;
    // NOP
    // 0x169130: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
    ctx->pc = 0x169130u;
    {
        const bool branch_taken_0x169130 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x169130) {
            ctx->pc = 0x169134u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x169130u;
            // 0x169134: 0x460f7080  add.s       $f2, $f14, $f15 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[14], ctx->f[15]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x169144u;
            goto label_169144;
        }
    }
    ctx->pc = 0x169138u;
label_169138:
    // 0x169138: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x169138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
label_16913c:
    // 0x16913c: 0x3e00008  jr          $ra
    ctx->pc = 0x16913Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x169138u: goto label_169138;
            case 0x16913Cu: goto label_16913c;
            case 0x169144u: goto label_169144;
            case 0x169180u: goto label_169180;
            case 0x1691DCu: goto label_1691dc;
            case 0x16922Cu: goto label_16922c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x169144u;
label_169144:
    // 0x169144: 0xc4810388  lwc1        $f1, 0x388($a0)
    ctx->pc = 0x169144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x169148: 0x46011036  c.le.s      $f2, $f1
    ctx->pc = 0x169148u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x16914c: 0x4501fffa  bc1t        . + 4 + (-0x6 << 2)
    ctx->pc = 0x16914Cu;
    {
        const bool branch_taken_0x16914c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16914c) {
            ctx->pc = 0x169138u;
            runtime->cooperativeGuestYield();
            goto label_169138;
        }
    }
    ctx->pc = 0x169154u;
    // 0x169154: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x169154u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x169158: 0x0  nop
    ctx->pc = 0x169158u;
    // NOP
    // 0x16915c: 0x45020008  bc1fl       . + 4 + (0x8 << 2)
    ctx->pc = 0x16915Cu;
    {
        const bool branch_taken_0x16915c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16915c) {
            ctx->pc = 0x169160u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16915Cu;
            // 0x169160: 0xc48002c8  lwc1        $f0, 0x2C8($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x169180u;
            goto label_169180;
        }
    }
    ctx->pc = 0x169164u;
    // 0x169164: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x169164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x169168: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x169168u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16916c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16916cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x169170: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x169170u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x169174: 0x4501fff0  bc1t        . + 4 + (-0x10 << 2)
    ctx->pc = 0x169174u;
    {
        const bool branch_taken_0x169174 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x169174) {
            ctx->pc = 0x169138u;
            runtime->cooperativeGuestYield();
            goto label_169138;
        }
    }
    ctx->pc = 0x16917Cu;
    // 0x16917c: 0xc48002c8  lwc1        $f0, 0x2C8($a0)
    ctx->pc = 0x16917cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_169180:
    // 0x169180: 0xc48102c0  lwc1        $f1, 0x2C0($a0)
    ctx->pc = 0x169180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x169184: 0x46007002  mul.s       $f0, $f14, $f0
    ctx->pc = 0x169184u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x169188: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x169188u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x16918c: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x16918cu;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x169190: 0x460f0000  add.s       $f0, $f0, $f15
    ctx->pc = 0x169190u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[15]);
    // 0x169194: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x169194u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x169198: 0x4501ffe7  bc1t        . + 4 + (-0x19 << 2)
    ctx->pc = 0x169198u;
    {
        const bool branch_taken_0x169198 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x169198) {
            ctx->pc = 0x169138u;
            runtime->cooperativeGuestYield();
            goto label_169138;
        }
    }
    ctx->pc = 0x1691A0u;
    // 0x1691a0: 0xc48002d8  lwc1        $f0, 0x2D8($a0)
    ctx->pc = 0x1691a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1691a4: 0xc48102d4  lwc1        $f1, 0x2D4($a0)
    ctx->pc = 0x1691a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1691a8: 0x46007002  mul.s       $f0, $f14, $f0
    ctx->pc = 0x1691a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x1691ac: 0x46016842  mul.s       $f1, $f13, $f1
    ctx->pc = 0x1691acu;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
    // 0x1691b0: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x1691b0u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x1691b4: 0x460f0000  add.s       $f0, $f0, $f15
    ctx->pc = 0x1691b4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[15]);
    // 0x1691b8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1691b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1691bc: 0x4501ffde  bc1t        . + 4 + (-0x22 << 2)
    ctx->pc = 0x1691BCu;
    {
        const bool branch_taken_0x1691bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1691bc) {
            ctx->pc = 0x169138u;
            runtime->cooperativeGuestYield();
            goto label_169138;
        }
    }
    ctx->pc = 0x1691C4u;
    // 0x1691c4: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x1691c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1691c8: 0x0  nop
    ctx->pc = 0x1691c8u;
    // NOP
    // 0x1691cc: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x1691CCu;
    {
        const bool branch_taken_0x1691cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1691cc) {
            ctx->pc = 0x1691D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1691CCu;
            // 0x1691d0: 0xc48002e8  lwc1        $f0, 0x2E8($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1691DCu;
            goto label_1691dc;
        }
    }
    ctx->pc = 0x1691D4u;
    // 0x1691d4: 0x3e00008  jr          $ra
    ctx->pc = 0x1691D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1691D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1691D4u;
            // 0x1691d8: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x169138u: goto label_169138;
            case 0x16913Cu: goto label_16913c;
            case 0x169144u: goto label_169144;
            case 0x169180u: goto label_169180;
            case 0x1691DCu: goto label_1691dc;
            case 0x16922Cu: goto label_16922c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1691DCu;
label_1691dc:
    // 0x1691dc: 0xc48102e0  lwc1        $f1, 0x2E0($a0)
    ctx->pc = 0x1691dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1691e0: 0x46007002  mul.s       $f0, $f14, $f0
    ctx->pc = 0x1691e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x1691e4: 0x46016042  mul.s       $f1, $f12, $f1
    ctx->pc = 0x1691e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x1691e8: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x1691e8u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x1691ec: 0x460f0001  sub.s       $f0, $f0, $f15
    ctx->pc = 0x1691ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[15]);
    // 0x1691f0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1691f0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1691f4: 0x0  nop
    ctx->pc = 0x1691f4u;
    // NOP
    // 0x1691f8: 0x4501ffd0  bc1t        . + 4 + (-0x30 << 2)
    ctx->pc = 0x1691F8u;
    {
        const bool branch_taken_0x1691f8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1691FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1691F8u;
            // 0x1691fc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1691f8) {
            ctx->pc = 0x16913Cu;
            runtime->cooperativeGuestYield();
            goto label_16913c;
        }
    }
    ctx->pc = 0x169200u;
    // 0x169200: 0xc48002f8  lwc1        $f0, 0x2F8($a0)
    ctx->pc = 0x169200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169204: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x169204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x169208: 0xc48102f4  lwc1        $f1, 0x2F4($a0)
    ctx->pc = 0x169208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 756)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16920c: 0x46007002  mul.s       $f0, $f14, $f0
    ctx->pc = 0x16920cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[14], ctx->f[0]);
    // 0x169210: 0x46016842  mul.s       $f1, $f13, $f1
    ctx->pc = 0x169210u;
    ctx->f[1] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
    // 0x169214: 0x46000845  abs.s       $f1, $f1
    ctx->pc = 0x169214u;
    ctx->f[1] = FPU_ABS_S(ctx->f[1]);
    // 0x169218: 0x460f0001  sub.s       $f0, $f0, $f15
    ctx->pc = 0x169218u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[15]);
    // 0x16921c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x16921cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x169220: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x169220u;
    {
        const bool branch_taken_0x169220 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x169220) {
            ctx->pc = 0x16922Cu;
            goto label_16922c;
        }
    }
    ctx->pc = 0x169228u;
    // 0x169228: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x169228u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16922c:
    // 0x16922c: 0x3e00008  jr          $ra
    ctx->pc = 0x16922Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x169138u: goto label_169138;
            case 0x16913Cu: goto label_16913c;
            case 0x169144u: goto label_169144;
            case 0x169180u: goto label_169180;
            case 0x1691DCu: goto label_1691dc;
            case 0x16922Cu: goto label_16922c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x169234u;
    // 0x169234: 0x0  nop
    ctx->pc = 0x169234u;
    // NOP
}
