#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_15a0b0
// Address: 0x15a0b0 - 0x15a160
void entry_15a0b0_0x15a160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_15a0b0_0x15a160");
#endif

    ctx->pc = 0x15a0b0u;

    // 0x15a0b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15a0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15a0b4: 0x10a20014  beq         $a1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x15A0B4u;
    {
        const bool branch_taken_0x15a0b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x15A0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A0B4u;
            // 0x15a0b8: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a0b4) {
            ctx->pc = 0x15A108u;
            goto label_15a108;
        }
    }
    ctx->pc = 0x15A0BCu;
    // 0x15a0bc: 0x28a20002  slti        $v0, $a1, 0x2
    ctx->pc = 0x15a0bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x15a0c0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15A0C0u;
    {
        const bool branch_taken_0x15a0c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A0C0u;
            // 0x15a0c4: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a0c0) {
            ctx->pc = 0x15A0D4u;
            goto label_15a0d4;
        }
    }
    ctx->pc = 0x15A0C8u;
    // 0x15a0c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x15a0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x15a0cc: 0x10a20017  beq         $a1, $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x15A0CCu;
    {
        const bool branch_taken_0x15a0cc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x15A0D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A0CCu;
            // 0x15a0d0: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a0cc) {
            ctx->pc = 0x15A12Cu;
            goto label_15a12c;
        }
    }
    ctx->pc = 0x15A0D4u;
label_15a0d4:
    // 0x15a0d4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15a0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15a0d8: 0xe22818  mult        $a1, $a3, $v0
    ctx->pc = 0x15a0d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x15a0dc: 0xa81821  addu        $v1, $a1, $t0
    ctx->pc = 0x15a0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x15a0e0: 0xc22818  mult        $a1, $a2, $v0
    ctx->pc = 0x15a0e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x15a0e4: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x15a0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a0e8: 0xa81021  addu        $v0, $a1, $t0
    ctx->pc = 0x15a0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x15a0ec: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x15a0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_15a0f0:
    // 0x15a0f0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x15a0f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15a0f4: 0x0  nop
    ctx->pc = 0x15a0f4u;
    // NOP
    // 0x15a0f8: 0x45020001  bc1fl       . + 4 + (0x1 << 2)
    ctx->pc = 0x15A0F8u;
    {
        const bool branch_taken_0x15a0f8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x15a0f8) {
            ctx->pc = 0x15A0FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15A0F8u;
            // 0x15a0fc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15A100u;
            goto label_15a100;
        }
    }
    ctx->pc = 0x15A100u;
label_15a100:
    // 0x15a100: 0x3e00008  jr          $ra
    ctx->pc = 0x15A100u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A100u;
            // 0x15a104: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15A0D4u: goto label_15a0d4;
            case 0x15A0F0u: goto label_15a0f0;
            case 0x15A100u: goto label_15a100;
            case 0x15A108u: goto label_15a108;
            case 0x15A12Cu: goto label_15a12c;
            case 0x15A158u: goto label_15a158;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15A108u;
label_15a108:
    // 0x15a108: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x15a108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x15a10c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x15a10cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15a110: 0xe22818  mult        $a1, $a3, $v0
    ctx->pc = 0x15a110u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x15a114: 0xa81821  addu        $v1, $a1, $t0
    ctx->pc = 0x15a114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x15a118: 0xc22818  mult        $a1, $a2, $v0
    ctx->pc = 0x15a118u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x15a11c: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x15a11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a120: 0xa81021  addu        $v0, $a1, $t0
    ctx->pc = 0x15a120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x15a124: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x15A124u;
    {
        const bool branch_taken_0x15a124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A124u;
            // 0x15a128: 0xc440000c  lwc1        $f0, 0xC($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a124) {
            ctx->pc = 0x15A0F0u;
            runtime->cooperativeGuestYield();
            goto label_15a0f0;
        }
    }
    ctx->pc = 0x15A12Cu;
label_15a12c:
    // 0x15a12c: 0xe22818  mult        $a1, $a3, $v0
    ctx->pc = 0x15a12cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x15a130: 0xa81821  addu        $v1, $a1, $t0
    ctx->pc = 0x15a130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x15a134: 0xc22818  mult        $a1, $a2, $v0
    ctx->pc = 0x15a134u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x15a138: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x15a138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15a13c: 0xa81021  addu        $v0, $a1, $t0
    ctx->pc = 0x15a13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
    // 0x15a140: 0xc4400010  lwc1        $f0, 0x10($v0)
    ctx->pc = 0x15a140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15a144: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x15a144u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15a148: 0x0  nop
    ctx->pc = 0x15a148u;
    // NOP
    // 0x15a14c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x15A14Cu;
    {
        const bool branch_taken_0x15a14c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x15A150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A14Cu;
            // 0x15a150: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a14c) {
            ctx->pc = 0x15A158u;
            goto label_15a158;
        }
    }
    ctx->pc = 0x15A154u;
    // 0x15a154: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x15a154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15a158:
    // 0x15a158: 0x3e00008  jr          $ra
    ctx->pc = 0x15A158u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A15Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A158u;
            // 0x15a15c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15A0D4u: goto label_15a0d4;
            case 0x15A0F0u: goto label_15a0f0;
            case 0x15A100u: goto label_15a100;
            case 0x15A108u: goto label_15a108;
            case 0x15A12Cu: goto label_15a12c;
            case 0x15A158u: goto label_15a158;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15A160u;
}
