#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1f0080
// Address: 0x1f0080 - 0x1f0148
void entry_1f0080_0x1f0148(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1f0080_0x1f0148");
#endif

    ctx->pc = 0x1f0080u;

    // 0x1f0080: 0x460d7001  sub.s       $f0, $f14, $f13
    ctx->pc = 0x1f0080u;
    ctx->f[0] = FPU_SUB_S(ctx->f[14], ctx->f[13]);
    // 0x1f0084: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x1f0084u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x1f0088: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x1f0088u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1f008c: 0x46001836  c.le.s      $f3, $f0
    ctx->pc = 0x1f008cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0090: 0x0  nop
    ctx->pc = 0x1f0090u;
    // NOP
    // 0x1f0094: 0x4501002a  bc1t        . + 4 + (0x2A << 2)
    ctx->pc = 0x1F0094u;
    {
        const bool branch_taken_0x1f0094 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F0098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0094u;
            // 0x1f0098: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0094) {
            ctx->pc = 0x1F0140u;
            goto label_1f0140;
        }
    }
    ctx->pc = 0x1F009Cu;
    // 0x1f009c: 0x3c01c334  lui         $at, 0xC334
    ctx->pc = 0x1f009cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49972 << 16));
    // 0x1f00a0: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x1f00a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x1f00a4: 0x46056834  c.lt.s      $f13, $f5
    ctx->pc = 0x1f00a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f00a8: 0x0  nop
    ctx->pc = 0x1f00a8u;
    // NOP
    // 0x1f00ac: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F00ACu;
    {
        const bool branch_taken_0x1f00ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f00ac) {
            ctx->pc = 0x1F00B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F00ACu;
            // 0x1f00b0: 0x46036b40  add.s       $f13, $f13, $f3 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[3]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F00B4u;
            goto label_1f00b4;
        }
    }
    ctx->pc = 0x1F00B4u;
label_1f00b4:
    // 0x1f00b4: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x1f00b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x1f00b8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1f00b8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x1f00bc: 0x460e2034  c.lt.s      $f4, $f14
    ctx->pc = 0x1f00bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f00c0: 0x0  nop
    ctx->pc = 0x1f00c0u;
    // NOP
    // 0x1f00c4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F00C4u;
    {
        const bool branch_taken_0x1f00c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f00c4) {
            ctx->pc = 0x1F00C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F00C4u;
            // 0x1f00c8: 0x46037381  sub.s       $f14, $f14, $f3 (Delay Slot)
        ctx->f[14] = FPU_SUB_S(ctx->f[14], ctx->f[3]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F00CCu;
            goto label_1f00cc;
        }
    }
    ctx->pc = 0x1F00CCu;
label_1f00cc:
    // 0x1f00cc: 0x460e6840  add.s       $f1, $f13, $f14
    ctx->pc = 0x1f00ccu;
    ctx->f[1] = FPU_ADD_S(ctx->f[13], ctx->f[14]);
    // 0x1f00d0: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x1f00d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x1f00d4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1f00d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f00d8: 0x460d7034  c.lt.s      $f14, $f13
    ctx->pc = 0x1f00d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[14], ctx->f[13])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f00dc: 0x0  nop
    ctx->pc = 0x1f00dcu;
    // NOP
    // 0x1f00e0: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1F00E0u;
    {
        const bool branch_taken_0x1f00e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1F00E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F00E0u;
            // 0x1f00e4: 0x46000882  mul.s       $f2, $f1, $f0 (Delay Slot)
        ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f00e0) {
            ctx->pc = 0x1F0104u;
            goto label_1f0104;
        }
    }
    ctx->pc = 0x1F00E8u;
    // 0x1f00e8: 0x46026034  c.lt.s      $f12, $f2
    ctx->pc = 0x1f00e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f00ec: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1F00ECu;
    {
        const bool branch_taken_0x1f00ec = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f00ec) {
            ctx->pc = 0x1F00FCu;
            goto label_1f00fc;
        }
    }
    ctx->pc = 0x1F00F4u;
    // 0x1f00f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F00F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F00F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F00F4u;
            // 0x1f00f8: 0x460c7029  min.s       $f0, $f14, $f12 (Delay Slot)
        ctx->f[0] = std::min(ctx->f[14], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F00B4u: goto label_1f00b4;
            case 0x1F00CCu: goto label_1f00cc;
            case 0x1F00FCu: goto label_1f00fc;
            case 0x1F0104u: goto label_1f0104;
            case 0x1F011Cu: goto label_1f011c;
            case 0x1F012Cu: goto label_1f012c;
            case 0x1F0140u: goto label_1f0140;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F00FCu;
label_1f00fc:
    // 0x1f00fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F00FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F0100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F00FCu;
            // 0x1f0100: 0x460c6828  max.s       $f0, $f13, $f12 (Delay Slot)
        ctx->f[0] = std::max(ctx->f[13], ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F00B4u: goto label_1f00b4;
            case 0x1F00CCu: goto label_1f00cc;
            case 0x1F00FCu: goto label_1f00fc;
            case 0x1F0104u: goto label_1f0104;
            case 0x1F011Cu: goto label_1f011c;
            case 0x1F012Cu: goto label_1f012c;
            case 0x1F0140u: goto label_1f0140;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F0104u;
label_1f0104:
    // 0x1f0104: 0x46026301  sub.s       $f12, $f12, $f2
    ctx->pc = 0x1f0104u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[2]);
    // 0x1f0108: 0x46056034  c.lt.s      $f12, $f5
    ctx->pc = 0x1f0108u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f010c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1F010Cu;
    {
        const bool branch_taken_0x1f010c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f010c) {
            ctx->pc = 0x1F011Cu;
            goto label_1f011c;
        }
    }
    ctx->pc = 0x1F0114u;
    // 0x1f0114: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1F0114u;
    {
        const bool branch_taken_0x1f0114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F0118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0114u;
            // 0x1f0118: 0x46036300  add.s       $f12, $f12, $f3 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[3]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f0114) {
            ctx->pc = 0x1F012Cu;
            goto label_1f012c;
        }
    }
    ctx->pc = 0x1F011Cu;
label_1f011c:
    // 0x1f011c: 0x460c2034  c.lt.s      $f4, $f12
    ctx->pc = 0x1f011cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[4], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f0120: 0x0  nop
    ctx->pc = 0x1f0120u;
    // NOP
    // 0x1f0124: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x1F0124u;
    {
        const bool branch_taken_0x1f0124 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f0124) {
            ctx->pc = 0x1F0128u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F0124u;
            // 0x1f0128: 0x46036301  sub.s       $f12, $f12, $f3 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[3]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F012Cu;
            goto label_1f012c;
        }
    }
    ctx->pc = 0x1F012Cu;
label_1f012c:
    // 0x1f012c: 0x46027041  sub.s       $f1, $f14, $f2
    ctx->pc = 0x1f012cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[14], ctx->f[2]);
    // 0x1f0130: 0x46026801  sub.s       $f0, $f13, $f2
    ctx->pc = 0x1f0130u;
    ctx->f[0] = FPU_SUB_S(ctx->f[13], ctx->f[2]);
    // 0x1f0134: 0x46006028  max.s       $f0, $f12, $f0
    ctx->pc = 0x1f0134u;
    ctx->f[0] = std::max(ctx->f[12], ctx->f[0]);
    // 0x1f0138: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x1f0138u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x1f013c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1f013cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1f0140:
    // 0x1f0140: 0x3e00008  jr          $ra
    ctx->pc = 0x1F0140u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F00B4u: goto label_1f00b4;
            case 0x1F00CCu: goto label_1f00cc;
            case 0x1F00FCu: goto label_1f00fc;
            case 0x1F0104u: goto label_1f0104;
            case 0x1F011Cu: goto label_1f011c;
            case 0x1F012Cu: goto label_1f012c;
            case 0x1F0140u: goto label_1f0140;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1F0148u;
}
