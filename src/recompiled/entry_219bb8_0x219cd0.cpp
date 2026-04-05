#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_219bb8
// Address: 0x219bb8 - 0x219cd0
void entry_219bb8_0x219cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_219bb8_0x219cd0");
#endif

    ctx->pc = 0x219bb8u;

    // 0x219bb8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x219bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x219bbc: 0x3c013c88  lui         $at, 0x3C88
    ctx->pc = 0x219bbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15496 << 16));
    // 0x219bc0: 0x34218889  ori         $at, $at, 0x8889
    ctx->pc = 0x219bc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)34953);
    // 0x219bc4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x219bc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x219bc8: 0xc441c658  lwc1        $f1, -0x39A8($v0)
    ctx->pc = 0x219bc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x219bcc: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x219bccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219bd0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x219bd0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219bd4: 0x46000868  max.s       $f1, $f1, $f0
    ctx->pc = 0x219bd4u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[0]);
    // 0x219bd8: 0x46020869  min.s       $f1, $f1, $f2
    ctx->pc = 0x219bd8u;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[2]);
    // 0x219bdc: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x219bdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x219be0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x219be0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x219be4: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x219be4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x219be8: 0xc502000c  lwc1        $f2, 0xC($t0)
    ctx->pc = 0x219be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x219bec: 0x8d020014  lw          $v0, 0x14($t0)
    ctx->pc = 0x219becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 20)));
    // 0x219bf0: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x219bf0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x219bf4: 0x3c014000  lui         $at, 0x4000
    ctx->pc = 0x219bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16384 << 16));
    // 0x219bf8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x219bf8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x219bfc: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x219bfcu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[2];
    // 0x219c00: 0x244bffff  addiu       $t3, $v0, -0x1
    ctx->pc = 0x219c00u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x219c04: 0x8d060010  lw          $a2, 0x10($t0)
    ctx->pc = 0x219c04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x219c08: 0x14b102a  slt         $v0, $t2, $t3
    ctx->pc = 0x219c08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x219c0c: 0x46010942  mul.s       $f5, $f1, $f1
    ctx->pc = 0x219c0cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[1]);
    // 0x219c10: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x219c10u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x219c14: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x219C14u;
    {
        const bool branch_taken_0x219c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219C14u;
            // 0x219c18: 0x46001981  sub.s       $f6, $f3, $f0 (Delay Slot)
        ctx->f[6] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x219c14) {
            ctx->pc = 0x219CC8u;
            goto label_219cc8;
        }
    }
    ctx->pc = 0x219C1Cu;
    // 0x219c1c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x219c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x219c20: 0x24470004  addiu       $a3, $v0, 0x4
    ctx->pc = 0x219c20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x219c24: 0x8d040018  lw          $a0, 0x18($t0)
    ctx->pc = 0x219c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
label_219c28:
    // 0x219c28: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x219c28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x219c2c: 0x8d03001c  lw          $v1, 0x1C($t0)
    ctx->pc = 0x219c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x219c30: 0x24c2ffff  addiu       $v0, $a2, -0x1
    ctx->pc = 0x219c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x219c34: 0x122102a  slt         $v0, $t1, $v0
    ctx->pc = 0x219c34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x219c38: 0x872021  addu        $a0, $a0, $a3
    ctx->pc = 0x219c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x219c3c: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x219C3Cu;
    {
        const bool branch_taken_0x219c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x219C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219C3Cu;
            // 0x219c40: 0x672821  addu        $a1, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219c3c) {
            ctx->pc = 0x219CB0u;
            goto label_219cb0;
        }
    }
    ctx->pc = 0x219C44u;
    // 0x219c44: 0x24c9fffe  addiu       $t1, $a2, -0x2
    ctx->pc = 0x219c44u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967294));
label_219c48:
    // 0x219c48: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x219c48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x219c4c: 0xc4a2fffc  lwc1        $f2, -0x4($a1)
    ctx->pc = 0x219c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x219c50: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x219c50u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x219c54: 0xc4a30004  lwc1        $f3, 0x4($a1)
    ctx->pc = 0x219c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x219c58: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x219c58u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x219c5c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x219c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x219c60: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x219c60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x219c64: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x219c64u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x219c68: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x219c68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x219c6c: 0xc4840000  lwc1        $f4, 0x0($a0)
    ctx->pc = 0x219c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x219c70: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x219c70u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x219c74: 0xc4a10000  lwc1        $f1, 0x0($a1)
    ctx->pc = 0x219c74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x219c78: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x219c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x219c7c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x219c7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x219c80: 0x46013042  mul.s       $f1, $f6, $f1
    ctx->pc = 0x219c80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[1]);
    // 0x219c84: 0x3c013f7d  lui         $at, 0x3F7D
    ctx->pc = 0x219c84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16253 << 16));
    // 0x219c88: 0x342170a4  ori         $at, $at, 0x70A4
    ctx->pc = 0x219c88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)28836);
    // 0x219c8c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x219c8cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x219c90: 0x46030000  add.s       $f0, $f0, $f3
    ctx->pc = 0x219c90u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x219c94: 0x46002802  mul.s       $f0, $f5, $f0
    ctx->pc = 0x219c94u;
    ctx->f[0] = FPU_MUL_S(ctx->f[5], ctx->f[0]);
    // 0x219c98: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x219c98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x219c9c: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x219c9cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x219ca0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x219ca0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x219ca4: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x219ca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x219ca8: 0x1520ffe7  bnez        $t1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x219CA8u;
    {
        const bool branch_taken_0x219ca8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x219CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x219CA8u;
            // 0x219cac: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x219ca8) {
            ctx->pc = 0x219C48u;
            runtime->cooperativeGuestYield();
            goto label_219c48;
        }
    }
    ctx->pc = 0x219CB0u;
label_219cb0:
    // 0x219cb0: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x219cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x219cb4: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x219cb4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x219cb8: 0xe23821  addu        $a3, $a3, $v0
    ctx->pc = 0x219cb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x219cbc: 0x14b102a  slt         $v0, $t2, $t3
    ctx->pc = 0x219cbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x219cc0: 0x5440ffd9  bnel        $v0, $zero, . + 4 + (-0x27 << 2)
    ctx->pc = 0x219CC0u;
    {
        const bool branch_taken_0x219cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x219cc0) {
            ctx->pc = 0x219CC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x219CC0u;
            // 0x219cc4: 0x8d040018  lw          $a0, 0x18($t0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x219C28u;
            runtime->cooperativeGuestYield();
            goto label_219c28;
        }
    }
    ctx->pc = 0x219CC8u;
label_219cc8:
    // 0x219cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x219CC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x219C28u: goto label_219c28;
            case 0x219C48u: goto label_219c48;
            case 0x219CB0u: goto label_219cb0;
            case 0x219CC8u: goto label_219cc8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x219CD0u;
}
