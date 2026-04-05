#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_143a18
// Address: 0x143a18 - 0x143b38
void entry_143a18_0x143b38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_143a18_0x143b38");
#endif

    ctx->pc = 0x143a18u;

    // 0x143a18: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x143a18u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x143a1c: 0x44050000  mfc1        $a1, $f0
    ctx->pc = 0x143a1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x143a20: 0x3c01447a  lui         $at, 0x447A
    ctx->pc = 0x143a20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17530 << 16));
    // 0x143a24: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x143a24u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x143a28: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x143a28u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143a2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x143a2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x143a30: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x143a30u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x143a34: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x143a34u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x143a38: 0x46006024  .word       0x46006024                   # cvt.w.s     $f0, $f12 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x143a38u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[12]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x143a3c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x143a3cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x143a40: 0x4a10004  bgez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x143A40u;
    {
        const bool branch_taken_0x143a40 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x143A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143A40u;
            // 0x143a44: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143a40) {
            ctx->pc = 0x143A54u;
            goto label_143a54;
        }
    }
    ctx->pc = 0x143A48u;
    // 0x143a48: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x143a48u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143a4c: 0x52823  negu        $a1, $a1
    ctx->pc = 0x143a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x143a50: 0x42023  negu        $a0, $a0
    ctx->pc = 0x143a50u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
label_143a54:
    // 0x143a54: 0x3c070030  lui         $a3, 0x30
    ctx->pc = 0x143a54u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)48 << 16));
    // 0x143a58: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x143a58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x143a5c: 0x24e24928  addiu       $v0, $a3, 0x4928
    ctx->pc = 0x143a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 18728));
    // 0x143a60: 0x1080001f  beqz        $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x143A60u;
    {
        const bool branch_taken_0x143a60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x143A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143A60u;
            // 0x143a64: 0xa040001f  sb          $zero, 0x1F($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 31), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143a60) {
            ctx->pc = 0x143AE0u;
            goto label_143ae0;
        }
    }
    ctx->pc = 0x143A68u;
    // 0x143a68: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x143a68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x143a6c: 0x0  nop
    ctx->pc = 0x143a6cu;
    // NOP
label_143a70:
    // 0x143a70: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x143a70u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x143a74: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x143A74u;
    {
        const bool branch_taken_0x143a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x143a74) {
            ctx->pc = 0x143A78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x143A74u;
            // 0x143a78: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x143A7Cu;
            goto label_143a7c;
        }
    }
    ctx->pc = 0x143A7Cu;
label_143a7c:
    // 0x143a7c: 0x1810  mfhi        $v1
    ctx->pc = 0x143a7cu;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x143a80: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x143A80u;
    {
        const bool branch_taken_0x143a80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x143A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143A80u;
            // 0x143a84: 0x24e24928  addiu       $v0, $a3, 0x4928 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 18728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143a80) {
            ctx->pc = 0x143A94u;
            goto label_143a94;
        }
    }
    ctx->pc = 0x143A88u;
    // 0x143a88: 0x28c2001f  slti        $v0, $a2, 0x1F
    ctx->pc = 0x143a88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)31) ? 1 : 0);
    // 0x143a8c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x143A8Cu;
    {
        const bool branch_taken_0x143a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x143A90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143A8Cu;
            // 0x143a90: 0x24e24928  addiu       $v0, $a3, 0x4928 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 18728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143a8c) {
            ctx->pc = 0x143AA4u;
            goto label_143aa4;
        }
    }
    ctx->pc = 0x143A94u;
label_143a94:
    // 0x143a94: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x143a94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x143a98: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x143a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x143a9c: 0x24630030  addiu       $v1, $v1, 0x30
    ctx->pc = 0x143a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x143aa0: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x143aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_143aa4:
    // 0x143aa4: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x143aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x143aa8: 0x82001a  div         $zero, $a0, $v0
    ctx->pc = 0x143aa8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x143aac: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x143AACu;
    {
        const bool branch_taken_0x143aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x143aac) {
            ctx->pc = 0x143AB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x143AACu;
            // 0x143ab0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x143AB4u;
            goto label_143ab4;
        }
    }
    ctx->pc = 0x143AB4u;
label_143ab4:
    // 0x143ab4: 0x1812  mflo        $v1
    ctx->pc = 0x143ab4u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x143ab8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x143ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143abc: 0x1c80ffec  bgtz        $a0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x143ABCu;
    {
        const bool branch_taken_0x143abc = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x143AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143ABCu;
            // 0x143ac0: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143abc) {
            ctx->pc = 0x143A70u;
            runtime->cooperativeGuestYield();
            goto label_143a70;
        }
    }
    ctx->pc = 0x143AC4u;
    // 0x143ac4: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x143ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x143ac8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x143ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x143acc: 0x24424928  addiu       $v0, $v0, 0x4928
    ctx->pc = 0x143accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18728));
    // 0x143ad0: 0x2403002e  addiu       $v1, $zero, 0x2E
    ctx->pc = 0x143ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x143ad4: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x143ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x143ad8: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x143ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x143adc: 0x0  nop
    ctx->pc = 0x143adcu;
    // NOP
label_143ae0:
    // 0x143ae0: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x143ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_143ae4:
    // 0x143ae4: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x143ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x143ae8: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x143ae8u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x143aec: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x143AECu;
    {
        const bool branch_taken_0x143aec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x143aec) {
            ctx->pc = 0x143AF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x143AECu;
            // 0x143af0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x143AF4u;
            goto label_143af4;
        }
    }
    ctx->pc = 0x143AF4u;
label_143af4:
    // 0x143af4: 0x24674928  addiu       $a3, $v1, 0x4928
    ctx->pc = 0x143af4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 18728));
    // 0x143af8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x143af8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x143afc: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x143afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x143b00: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x143b00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x143b04: 0x2010  mfhi        $a0
    ctx->pc = 0x143b04u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x143b08: 0x2812  mflo        $a1
    ctx->pc = 0x143b08u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x143b0c: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x143b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x143b10: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x143b10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x143b14: 0x5ca0fff3  bgtzl       $a1, . + 4 + (-0xD << 2)
    ctx->pc = 0x143B14u;
    {
        const bool branch_taken_0x143b14 = (GPR_S32(ctx, 5) > 0);
        if (branch_taken_0x143b14) {
            ctx->pc = 0x143B18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x143B14u;
            // 0x143b18: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
            ctx->pc = 0x143AE4u;
            runtime->cooperativeGuestYield();
            goto label_143ae4;
        }
    }
    ctx->pc = 0x143B1Cu;
    // 0x143b1c: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x143B1Cu;
    {
        const bool branch_taken_0x143b1c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x143B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143B1Cu;
            // 0x143b20: 0x2403002d  addiu       $v1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143b1c) {
            ctx->pc = 0x143B30u;
            goto label_143b30;
        }
    }
    ctx->pc = 0x143B24u;
    // 0x143b24: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x143b24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x143b28: 0xc71021  addu        $v0, $a2, $a3
    ctx->pc = 0x143b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x143b2c: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x143b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
label_143b30:
    // 0x143b30: 0x3e00008  jr          $ra
    ctx->pc = 0x143B30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143B30u;
            // 0x143b34: 0xc71021  addu        $v0, $a2, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x143A54u: goto label_143a54;
            case 0x143A70u: goto label_143a70;
            case 0x143A7Cu: goto label_143a7c;
            case 0x143A94u: goto label_143a94;
            case 0x143AA4u: goto label_143aa4;
            case 0x143AB4u: goto label_143ab4;
            case 0x143AE0u: goto label_143ae0;
            case 0x143AE4u: goto label_143ae4;
            case 0x143AF4u: goto label_143af4;
            case 0x143B30u: goto label_143b30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x143B38u;
}
