#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_12eda8
// Address: 0x12eda8 - 0x12eeb0
void entry_12eda8_0x12eeb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_12eda8_0x12eeb0");
#endif

    ctx->pc = 0x12eda8u;

    // 0x12eda8: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x12eda8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12edac: 0x8cc20080  lw          $v0, 0x80($a2)
    ctx->pc = 0x12edacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x12edb0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x12EDB0u;
    {
        const bool branch_taken_0x12edb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x12EDB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EDB0u;
            // 0x12edb4: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12edb0) {
            ctx->pc = 0x12EE30u;
            goto label_12ee30;
        }
    }
    ctx->pc = 0x12EDB8u;
    // 0x12edb8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x12edb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x12edbc: 0x78e40000  lq          $a0, 0x0($a3)
    ctx->pc = 0x12edbcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12edc0: 0x8c43bde8  lw          $v1, -0x4218($v0)
    ctx->pc = 0x12edc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950376)));
    // 0x12edc4: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x12edc4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x12edc8: 0x78e20010  lq          $v0, 0x10($a3)
    ctx->pc = 0x12edc8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x12edcc: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x12edccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
    // 0x12edd0: 0x78e20020  lq          $v0, 0x20($a3)
    ctx->pc = 0x12edd0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x12edd4: 0x7c620020  sq          $v0, 0x20($v1)
    ctx->pc = 0x12edd4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 2));
    // 0x12edd8: 0x78e20030  lq          $v0, 0x30($a3)
    ctx->pc = 0x12edd8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x12eddc: 0x7c620030  sq          $v0, 0x30($v1)
    ctx->pc = 0x12eddcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 2));
    // 0x12ede0: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x12ede0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x12ede4: 0xc4c0008c  lwc1        $f0, 0x8C($a2)
    ctx->pc = 0x12ede4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ede8: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x12ede8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x12edec: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x12edecu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
    // 0x12edf0: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x12edf0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x12edf4: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x12edf4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
    // 0x12edf8: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x12edf8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x12edfc: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x12edfcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
    // 0x12ee00: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x12ee00u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12ee04: 0x7cc20040  sq          $v0, 0x40($a2)
    ctx->pc = 0x12ee04u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 2));
    // 0x12ee08: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x12ee08u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x12ee0c: 0x7cc20050  sq          $v0, 0x50($a2)
    ctx->pc = 0x12ee0cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 80), GPR_VEC(ctx, 2));
    // 0x12ee10: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x12ee10u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x12ee14: 0x7cc20060  sq          $v0, 0x60($a2)
    ctx->pc = 0x12ee14u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 96), GPR_VEC(ctx, 2));
    // 0x12ee18: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x12ee18u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x12ee1c: 0xe4c00084  swc1        $f0, 0x84($a2)
    ctx->pc = 0x12ee1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 132), bits); }
    // 0x12ee20: 0x7cc20070  sq          $v0, 0x70($a2)
    ctx->pc = 0x12ee20u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 112), GPR_VEC(ctx, 2));
    // 0x12ee24: 0xacc00080  sw          $zero, 0x80($a2)
    ctx->pc = 0x12ee24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 0));
    // 0x12ee28: 0x3e00008  jr          $ra
    ctx->pc = 0x12EE28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12EE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EE28u;
            // 0x12ee2c: 0xe4c00088  swc1        $f0, 0x88($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 136), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12EE30u: goto label_12ee30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12EE30u;
label_12ee30:
    // 0x12ee30: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x12ee30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x12ee34: 0x78c20000  lq          $v0, 0x0($a2)
    ctx->pc = 0x12ee34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x12ee38: 0x8c63bde8  lw          $v1, -0x4218($v1)
    ctx->pc = 0x12ee38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950376)));
    // 0x12ee3c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x12ee3cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x12ee40: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x12ee40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x12ee44: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x12ee44u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
    // 0x12ee48: 0x78c20020  lq          $v0, 0x20($a2)
    ctx->pc = 0x12ee48u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x12ee4c: 0x7c620020  sq          $v0, 0x20($v1)
    ctx->pc = 0x12ee4cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 2));
    // 0x12ee50: 0x78c20030  lq          $v0, 0x30($a2)
    ctx->pc = 0x12ee50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x12ee54: 0x7c620030  sq          $v0, 0x30($v1)
    ctx->pc = 0x12ee54u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 2));
    // 0x12ee58: 0x78c20040  lq          $v0, 0x40($a2)
    ctx->pc = 0x12ee58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 64)));
    // 0x12ee5c: 0x78c30050  lq          $v1, 0x50($a2)
    ctx->pc = 0x12ee5cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 80)));
    // 0x12ee60: 0x78c40060  lq          $a0, 0x60($a2)
    ctx->pc = 0x12ee60u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x12ee64: 0x78c50070  lq          $a1, 0x70($a2)
    ctx->pc = 0x12ee64u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 6), 112)));
    // 0x12ee68: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x12ee68u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x12ee6c: 0x7cc30010  sq          $v1, 0x10($a2)
    ctx->pc = 0x12ee6cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 3));
    // 0x12ee70: 0x7cc40020  sq          $a0, 0x20($a2)
    ctx->pc = 0x12ee70u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 4));
    // 0x12ee74: 0x7cc50030  sq          $a1, 0x30($a2)
    ctx->pc = 0x12ee74u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 5));
    // 0x12ee78: 0xc4c00088  lwc1        $f0, 0x88($a2)
    ctx->pc = 0x12ee78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12ee7c: 0x78e20000  lq          $v0, 0x0($a3)
    ctx->pc = 0x12ee7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x12ee80: 0xc4c1008c  lwc1        $f1, 0x8C($a2)
    ctx->pc = 0x12ee80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12ee84: 0x7cc20040  sq          $v0, 0x40($a2)
    ctx->pc = 0x12ee84u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 2));
    // 0x12ee88: 0x78e20010  lq          $v0, 0x10($a3)
    ctx->pc = 0x12ee88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x12ee8c: 0x7cc20050  sq          $v0, 0x50($a2)
    ctx->pc = 0x12ee8cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 80), GPR_VEC(ctx, 2));
    // 0x12ee90: 0x78e20020  lq          $v0, 0x20($a3)
    ctx->pc = 0x12ee90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 32)));
    // 0x12ee94: 0x7cc20060  sq          $v0, 0x60($a2)
    ctx->pc = 0x12ee94u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 96), GPR_VEC(ctx, 2));
    // 0x12ee98: 0x78e20030  lq          $v0, 0x30($a3)
    ctx->pc = 0x12ee98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 48)));
    // 0x12ee9c: 0xe4c00084  swc1        $f0, 0x84($a2)
    ctx->pc = 0x12ee9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 132), bits); }
    // 0x12eea0: 0x7cc20070  sq          $v0, 0x70($a2)
    ctx->pc = 0x12eea0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 112), GPR_VEC(ctx, 2));
    // 0x12eea4: 0xe4c10088  swc1        $f1, 0x88($a2)
    ctx->pc = 0x12eea4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 136), bits); }
    // 0x12eea8: 0x3e00008  jr          $ra
    ctx->pc = 0x12EEA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12EEACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12EEA8u;
            // 0x12eeac: 0xacc0008c  sw          $zero, 0x8C($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 140), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12EE30u: goto label_12ee30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12EEB0u;
}
