#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_195590
// Address: 0x195590 - 0x195670
void entry_195590_0x195670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_195590_0x195670");
#endif

    ctx->pc = 0x195590u;

    // 0x195590: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x195590u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x195594: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x195594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x195598: 0xc442c658  lwc1        $f2, -0x39A8($v0)
    ctx->pc = 0x195598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x19559c: 0xc4a05044  lwc1        $f0, 0x5044($a1)
    ctx->pc = 0x19559cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1955a0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1955a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1955a4: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1955a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1955a8: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1955a8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1955ac: 0x8c44e2a4  lw          $a0, -0x1D5C($v0)
    ctx->pc = 0x1955acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959780)));
    // 0x1955b0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x1955b0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1955b4: 0x0  nop
    ctx->pc = 0x1955b4u;
    // NOP
    // 0x1955b8: 0x45000011  bc1f        . + 4 + (0x11 << 2)
    ctx->pc = 0x1955B8u;
    {
        const bool branch_taken_0x1955b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1955BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1955B8u;
            // 0x1955bc: 0xe4a05044  swc1        $f0, 0x5044($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20548), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1955b8) {
            ctx->pc = 0x195600u;
            goto label_195600;
        }
    }
    ctx->pc = 0x1955C0u;
    // 0x1955c0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1955c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1955c4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1955c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1955c8: 0x8442503c  lh          $v0, 0x503C($v0)
    ctx->pc = 0x1955c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20540)));
    // 0x1955cc: 0x54430001  bnel        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x1955CCu;
    {
        const bool branch_taken_0x1955cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1955cc) {
            ctx->pc = 0x1955D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1955CCu;
            // 0x1955d0: 0xac820910  sw          $v0, 0x910($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1955D4u;
            goto label_1955d4;
        }
    }
    ctx->pc = 0x1955D4u;
label_1955d4:
    // 0x1955d4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1955d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1955d8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1955d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1955dc: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1955dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1955e0: 0x84425042  lh          $v0, 0x5042($v0)
    ctx->pc = 0x1955e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20546)));
    // 0x1955e4: 0xc4a05044  lwc1        $f0, 0x5044($a1)
    ctx->pc = 0x1955e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20548)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1955e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1955e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1955ec: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1955ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1955f0: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x1955f0u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[2] = ctx->f[2] / ctx->f[1];
    // 0x1955f4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1955f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x1955f8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1955F8u;
    {
        const bool branch_taken_0x1955f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1955FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1955F8u;
            // 0x1955fc: 0xe4a05044  swc1        $f0, 0x5044($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 20548), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1955f8) {
            ctx->pc = 0x195614u;
            goto label_195614;
        }
    }
    ctx->pc = 0x195600u;
label_195600:
    // 0x195600: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x195600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x195604: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x195604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x195608: 0x8442503e  lh          $v0, 0x503E($v0)
    ctx->pc = 0x195608u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20542)));
    // 0x19560c: 0x54430001  bnel        $v0, $v1, . + 4 + (0x1 << 2)
    ctx->pc = 0x19560Cu;
    {
        const bool branch_taken_0x19560c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19560c) {
            ctx->pc = 0x195610u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19560Cu;
            // 0x195610: 0xac820910  sw          $v0, 0x910($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x195614u;
            goto label_195614;
        }
    }
    ctx->pc = 0x195614u;
label_195614:
    // 0x195614: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x195614u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x195618: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x195618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x19561c: 0x84425040  lh          $v0, 0x5040($v0)
    ctx->pc = 0x19561cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20544)));
    // 0x195620: 0x10430011  beq         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x195620u;
    {
        const bool branch_taken_0x195620 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x195624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195620u;
            // 0x195624: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195620) {
            ctx->pc = 0x195668u;
            goto label_195668;
        }
    }
    ctx->pc = 0x195628u;
    // 0x195628: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x195628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x19562c: 0x8c44bde0  lw          $a0, -0x4220($v0)
    ctx->pc = 0x19562cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950368)));
    // 0x195630: 0x2465dfb0  addiu       $a1, $v1, -0x2050
    ctx->pc = 0x195630u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959024));
    // 0x195634: 0x8c820110  lw          $v0, 0x110($a0)
    ctx->pc = 0x195634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 272)));
    // 0x195638: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x195638u;
    {
        const bool branch_taken_0x195638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x19563Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x195638u;
            // 0x19563c: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x195638) {
            ctx->pc = 0x195654u;
            goto label_195654;
        }
    }
    ctx->pc = 0x195640u;
    // 0x195640: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x195640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x195644: 0xac850110  sw          $a1, 0x110($a0)
    ctx->pc = 0x195644u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 272), GPR_U32(ctx, 5));
    // 0x195648: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x195648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x19564c: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x19564cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x195650: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x195650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_195654:
    // 0x195654: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x195654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x195658: 0x8c42ed58  lw          $v0, -0x12A8($v0)
    ctx->pc = 0x195658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962520)));
    // 0x19565c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x19565cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x195660: 0xaca3008c  sw          $v1, 0x8C($a1)
    ctx->pc = 0x195660u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 140), GPR_U32(ctx, 3));
    // 0x195664: 0xaca20084  sw          $v0, 0x84($a1)
    ctx->pc = 0x195664u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 2));
label_195668:
    // 0x195668: 0x3e00008  jr          $ra
    ctx->pc = 0x195668u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1955D4u: goto label_1955d4;
            case 0x195600u: goto label_195600;
            case 0x195614u: goto label_195614;
            case 0x195654u: goto label_195654;
            case 0x195668u: goto label_195668;
            default: break;
        }
        return;
    }
    ctx->pc = 0x195670u;
}
