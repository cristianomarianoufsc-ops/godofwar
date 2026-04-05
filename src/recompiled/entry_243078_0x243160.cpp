#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_243078
// Address: 0x243078 - 0x243160
void entry_243078_0x243160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_243078_0x243160");
#endif

    ctx->pc = 0x243078u;

    // 0x243078: 0x3e00008  jr          $ra
    ctx->pc = 0x243078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24307Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243078u;
            // 0x24307c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x243080u;
    // 0x243080: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x243080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x243084: 0x0  nop
    ctx->pc = 0x243084u;
    // NOP
    // 0x243088: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x243088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x24308c: 0x0  nop
    ctx->pc = 0x24308cu;
    // NOP
    // 0x243090: 0x8c421158  lw          $v0, 0x1158($v0)
    ctx->pc = 0x243090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4440)));
    // 0x243094: 0x0  nop
    ctx->pc = 0x243094u;
    // NOP
    // 0x243098: 0x8c421160  lw          $v0, 0x1160($v0)
    ctx->pc = 0x243098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4448)));
    // 0x24309c: 0x0  nop
    ctx->pc = 0x24309cu;
    // NOP
    // 0x2430a0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x2430a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2430a4: 0x0  nop
    ctx->pc = 0x2430a4u;
    // NOP
    // 0x2430a8: 0x9042bb3e  lbu         $v0, -0x44C2($v0)
    ctx->pc = 0x2430a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294949694)));
    // 0x2430ac: 0x0  nop
    ctx->pc = 0x2430acu;
    // NOP
    // 0x2430b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2430b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2430b4: 0x0  nop
    ctx->pc = 0x2430b4u;
    // NOP
    // 0x2430b8: 0x9042bb36  lbu         $v0, -0x44CA($v0)
    ctx->pc = 0x2430b8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294949686)));
    // 0x2430bc: 0x0  nop
    ctx->pc = 0x2430bcu;
    // NOP
    // 0x2430c0: 0x9042bb37  lbu         $v0, -0x44C9($v0)
    ctx->pc = 0x2430c0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294949687)));
    // 0x2430c4: 0x0  nop
    ctx->pc = 0x2430c4u;
    // NOP
    // 0x2430c8: 0xc440bb0c  lwc1        $f0, -0x44F4($v0)
    ctx->pc = 0x2430c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294949644)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2430cc: 0x0  nop
    ctx->pc = 0x2430ccu;
    // NOP
    // 0x2430d0: 0xe44cbb0c  swc1        $f12, -0x44F4($v0)
    ctx->pc = 0x2430d0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294949644), bits); }
    // 0x2430d4: 0x0  nop
    ctx->pc = 0x2430d4u;
    // NOP
    // 0x2430d8: 0xc440bb20  lwc1        $f0, -0x44E0($v0)
    ctx->pc = 0x2430d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294949664)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2430dc: 0x0  nop
    ctx->pc = 0x2430dcu;
    // NOP
    // 0x2430e0: 0xc440bb1c  lwc1        $f0, -0x44E4($v0)
    ctx->pc = 0x2430e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294949660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2430e4: 0x0  nop
    ctx->pc = 0x2430e4u;
    // NOP
    // 0x2430e8: 0xe48c005c  swc1        $f12, 0x5C($a0)
    ctx->pc = 0x2430e8u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 92), bits); }
    // 0x2430ec: 0x0  nop
    ctx->pc = 0x2430ecu;
    // NOP
    // 0x2430f0: 0xe44cbb24  swc1        $f12, -0x44DC($v0)
    ctx->pc = 0x2430f0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294949668), bits); }
    // 0x2430f4: 0x0  nop
    ctx->pc = 0x2430f4u;
    // NOP
    // 0x2430f8: 0xc440bb24  lwc1        $f0, -0x44DC($v0)
    ctx->pc = 0x2430f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294949668)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2430fc: 0x0  nop
    ctx->pc = 0x2430fcu;
    // NOP
    // 0x243100: 0x9042bb3d  lbu         $v0, -0x44C3($v0)
    ctx->pc = 0x243100u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294949693)));
    // 0x243104: 0x0  nop
    ctx->pc = 0x243104u;
    // NOP
    // 0x243108: 0xc4600044  lwc1        $f0, 0x44($v1)
    ctx->pc = 0x243108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24310c: 0x0  nop
    ctx->pc = 0x24310cu;
    // NOP
    // 0x243110: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x243110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x243114: 0x0  nop
    ctx->pc = 0x243114u;
    // NOP
    // 0x243118: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x243118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24311c: 0x0  nop
    ctx->pc = 0x24311cu;
    // NOP
    // 0x243120: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x243120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x243124: 0x0  nop
    ctx->pc = 0x243124u;
    // NOP
    // 0x243128: 0x9442bb28  lhu         $v0, -0x44D8($v0)
    ctx->pc = 0x243128u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294949672)));
    // 0x24312c: 0x0  nop
    ctx->pc = 0x24312cu;
    // NOP
    // 0x243130: 0x9442bab4  lhu         $v0, -0x454C($v0)
    ctx->pc = 0x243130u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294949556)));
    // 0x243134: 0x0  nop
    ctx->pc = 0x243134u;
    // NOP
    // 0x243138: 0x8442b728  lh          $v0, -0x48D8($v0)
    ctx->pc = 0x243138u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294948648)));
    // 0x24313c: 0x0  nop
    ctx->pc = 0x24313cu;
    // NOP
    // 0x243140: 0xc440b730  lwc1        $f0, -0x48D0($v0)
    ctx->pc = 0x243140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294948656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x243144: 0x0  nop
    ctx->pc = 0x243144u;
    // NOP
    // 0x243148: 0xac45bb10  sw          $a1, -0x44F0($v0)
    ctx->pc = 0x243148u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294949648), GPR_U32(ctx, 5));
    // 0x24314c: 0x0  nop
    ctx->pc = 0x24314cu;
    // NOP
    // 0x243150: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x243150u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x243154: 0x0  nop
    ctx->pc = 0x243154u;
    // NOP
    // 0x243158: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x243158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
    // 0x24315c: 0x0  nop
    ctx->pc = 0x24315cu;
    // NOP
}
