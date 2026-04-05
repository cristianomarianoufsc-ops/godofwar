#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00151420
// Address: 0x151420 - 0x1516f0
void sub_00151420_0x151420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151420_0x151420");
#endif

    ctx->pc = 0x151420u;

    // 0x151420: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x151420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x151424: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x151424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x151428: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x151428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x15142c: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x15142cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
    // 0x151430: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x151430u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151434: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x151434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
    // 0x151438: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x151438u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15143c: 0x7fb30100  sq          $s3, 0x100($sp)
    ctx->pc = 0x15143cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 19));
    // 0x151440: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x151440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x151444: 0xa6420004  sh          $v0, 0x4($s2)
    ctx->pc = 0x151444u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x151448: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x151448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x15144c: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x15144cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
    // 0x151450: 0x31402  srl         $v0, $v1, 16
    ctx->pc = 0x151450u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x151454: 0xa6430000  sh          $v1, 0x0($s2)
    ctx->pc = 0x151454u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x151458: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x151458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x15145c: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x15145cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x151460: 0xa6420002  sh          $v0, 0x2($s2)
    ctx->pc = 0x151460u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x151464: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x151464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x151468: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x151468u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x15146c: 0x70461b89  pcpyld      $v1, $v0, $a2
    ctx->pc = 0x15146cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x151470: 0x8e070018  lw          $a3, 0x18($s0)
    ctx->pc = 0x151470u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x151474: 0x8e080014  lw          $t0, 0x14($s0)
    ctx->pc = 0x151474u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x151478: 0x70e81389  pcpyld      $v0, $a3, $t0
    ctx->pc = 0x151478u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x15147c: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x15147cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x151480: 0x7e420010  sq          $v0, 0x10($s2)
    ctx->pc = 0x151480u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), GPR_VEC(ctx, 2));
    // 0x151484: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x151484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x151488: 0x7fa20080  sq          $v0, 0x80($sp)
    ctx->pc = 0x151488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 2));
    // 0x15148c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x15148cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x151490: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x151490u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x151494: 0x70461b89  pcpyld      $v1, $v0, $a2
    ctx->pc = 0x151494u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x151498: 0x8e070028  lw          $a3, 0x28($s0)
    ctx->pc = 0x151498u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x15149c: 0x8e080024  lw          $t0, 0x24($s0)
    ctx->pc = 0x15149cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1514a0: 0x70e81389  pcpyld      $v0, $a3, $t0
    ctx->pc = 0x1514a0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x1514a4: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1514a4u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1514a8: 0x7e420020  sq          $v0, 0x20($s2)
    ctx->pc = 0x1514a8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 32), GPR_VEC(ctx, 2));
    // 0x1514ac: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1514acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1514b0: 0x7fa20090  sq          $v0, 0x90($sp)
    ctx->pc = 0x1514b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 2));
    // 0x1514b4: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1514b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1514b8: 0x8e06002c  lw          $a2, 0x2C($s0)
    ctx->pc = 0x1514b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1514bc: 0x70461b89  pcpyld      $v1, $v0, $a2
    ctx->pc = 0x1514bcu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x1514c0: 0x8e070038  lw          $a3, 0x38($s0)
    ctx->pc = 0x1514c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1514c4: 0x8e080034  lw          $t0, 0x34($s0)
    ctx->pc = 0x1514c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1514c8: 0x70e81389  pcpyld      $v0, $a3, $t0
    ctx->pc = 0x1514c8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x1514cc: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x1514ccu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x1514d0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x1514d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1514d4: 0x7e420030  sq          $v0, 0x30($s2)
    ctx->pc = 0x1514d4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), GPR_VEC(ctx, 2));
    // 0x1514d8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1514d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1514dc: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x1514dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x1514e0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1514e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x1514e4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1514e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1514e8:
    // 0x1514e8: 0x0  nop
    ctx->pc = 0x1514e8u;
    // NOP
    // 0x1514ec: 0x0  nop
    ctx->pc = 0x1514ecu;
    // NOP
    // 0x1514f0: 0x0  nop
    ctx->pc = 0x1514f0u;
    // NOP
    // 0x1514f4: 0x0  nop
    ctx->pc = 0x1514f4u;
    // NOP
    // 0x1514f8: 0x0  nop
    ctx->pc = 0x1514f8u;
    // NOP
    // 0x1514fc: 0x5482fffa  bnel        $a0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1514FCu;
    {
        const bool branch_taken_0x1514fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x1514fc) {
            ctx->pc = 0x151500u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1514FCu;
            // 0x151500: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1514E8u;
            runtime->cooperativeGuestYield();
            goto label_1514e8;
        }
    }
    ctx->pc = 0x151504u;
    // 0x151504: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x151504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x151508: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x151508u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x15150c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15150cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_151510:
    // 0x151510: 0x0  nop
    ctx->pc = 0x151510u;
    // NOP
    // 0x151514: 0x0  nop
    ctx->pc = 0x151514u;
    // NOP
    // 0x151518: 0x0  nop
    ctx->pc = 0x151518u;
    // NOP
    // 0x15151c: 0x0  nop
    ctx->pc = 0x15151cu;
    // NOP
    // 0x151520: 0x0  nop
    ctx->pc = 0x151520u;
    // NOP
    // 0x151524: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x151524u;
    {
        const bool branch_taken_0x151524 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x151528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151524u;
            // 0x151528: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151524) {
            ctx->pc = 0x151510u;
            runtime->cooperativeGuestYield();
            goto label_151510;
        }
    }
    ctx->pc = 0x15152Cu;
    // 0x15152c: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x15152cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151530: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x151530u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151534: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x151534u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x151538: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x151538u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15153c: 0xe64000c4  swc1        $f0, 0xC4($s2)
    ctx->pc = 0x15153cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 196), bits); }
    // 0x151540: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x151540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x151544: 0xc6000040  lwc1        $f0, 0x40($s0)
    ctx->pc = 0x151544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151548: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x151548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x15154c: 0xe64000c8  swc1        $f0, 0xC8($s2)
    ctx->pc = 0x15154cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 200), bits); }
    // 0x151550: 0xae4200c0  sw          $v0, 0xC0($s2)
    ctx->pc = 0x151550u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 192), GPR_U32(ctx, 2));
    // 0x151554: 0xc6000044  lwc1        $f0, 0x44($s0)
    ctx->pc = 0x151554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x151558: 0xe64100e0  swc1        $f1, 0xE0($s2)
    ctx->pc = 0x151558u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 224), bits); }
    // 0x15155c: 0xe64000cc  swc1        $f0, 0xCC($s2)
    ctx->pc = 0x15155cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 204), bits); }
    // 0x151560: 0xae4000dc  sw          $zero, 0xDC($s2)
    ctx->pc = 0x151560u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 0));
    // 0x151564: 0xa64300d0  sh          $v1, 0xD0($s2)
    ctx->pc = 0x151564u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 208), (uint16_t)GPR_U32(ctx, 3));
    // 0x151568: 0xc6000054  lwc1        $f0, 0x54($s0)
    ctx->pc = 0x151568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15156c: 0xe64000e4  swc1        $f0, 0xE4($s2)
    ctx->pc = 0x15156cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 228), bits); }
    // 0x151570: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x151570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x151574: 0x8e07001c  lw          $a3, 0x1C($s0)
    ctx->pc = 0x151574u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x151578: 0x70471b89  pcpyld      $v1, $v0, $a3
    ctx->pc = 0x151578u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x15157c: 0x8e080028  lw          $t0, 0x28($s0)
    ctx->pc = 0x15157cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x151580: 0x8e070024  lw          $a3, 0x24($s0)
    ctx->pc = 0x151580u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x151584: 0x71071389  pcpyld      $v0, $t0, $a3
    ctx->pc = 0x151584u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 7)));
    // 0x151588: 0xc64100dc  lwc1        $f1, 0xDC($s2)
    ctx->pc = 0x151588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x15158c: 0x70431cc8  ppacw       $v1, $v0, $v1
    ctx->pc = 0x15158cu;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x151590: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x151590u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151594: 0x7fa30030  sq          $v1, 0x30($sp)
    ctx->pc = 0x151594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 3));
    // 0x151598: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x151598u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15159c: 0x0  nop
    ctx->pc = 0x15159cu;
    // NOP
    // 0x1515a0: 0x4500000f  bc1f        . + 4 + (0xF << 2)
    ctx->pc = 0x1515A0u;
    {
        const bool branch_taken_0x1515a0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1515A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1515A0u;
            // 0x1515a4: 0x7fa300b0  sq          $v1, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1515a0) {
            ctx->pc = 0x1515E0u;
            goto label_1515e0;
        }
    }
    ctx->pc = 0x1515A8u;
    // 0x1515a8: 0x700317c9  prot3w      $v0, $v1
    ctx->pc = 0x1515a8u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x1515ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1515acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1515b0: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x1515b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x1515b4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1515b4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1515b8: 0x0  nop
    ctx->pc = 0x1515b8u;
    // NOP
    // 0x1515bc: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x1515BCu;
    {
        const bool branch_taken_0x1515bc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1515C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1515BCu;
            // 0x1515c0: 0x7fa300c0  sq          $v1, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1515bc) {
            ctx->pc = 0x1515E0u;
            goto label_1515e0;
        }
    }
    ctx->pc = 0x1515C4u;
    // 0x1515c4: 0x70031789  pexew       $v0, $v1
    ctx->pc = 0x1515c4u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x1515c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1515c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1515cc: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x1515ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x1515d0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1515d0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1515d4: 0x0  nop
    ctx->pc = 0x1515d4u;
    // NOP
    // 0x1515d8: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x1515D8u;
    {
        const bool branch_taken_0x1515d8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1515DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1515D8u;
            // 0x1515dc: 0x7fa300d0  sq          $v1, 0xD0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1515d8) {
            ctx->pc = 0x1515E4u;
            goto label_1515e4;
        }
    }
    ctx->pc = 0x1515E0u;
label_1515e0:
    // 0x1515e0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1515e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1515e4:
    // 0x1515e4: 0x50c00010  beql        $a2, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x1515E4u;
    {
        const bool branch_taken_0x1515e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1515e4) {
            ctx->pc = 0x1515E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1515E4u;
            // 0x1515e8: 0x8e060004  lw          $a2, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x151628u;
            goto label_151628;
        }
    }
    ctx->pc = 0x1515ECu;
    // 0x1515ec: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1515ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x1515f0: 0x8e080020  lw          $t0, 0x20($s0)
    ctx->pc = 0x1515f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1515f4: 0x8e060028  lw          $a2, 0x28($s0)
    ctx->pc = 0x1515f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1515f8: 0x71021b89  pcpyld      $v1, $t0, $v0
    ctx->pc = 0x1515f8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 2)));
    // 0x1515fc: 0x8e070024  lw          $a3, 0x24($s0)
    ctx->pc = 0x1515fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x151600: 0x70c71389  pcpyld      $v0, $a2, $a3
    ctx->pc = 0x151600u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
    // 0x151604: 0xc60c004c  lwc1        $f12, 0x4C($s0)
    ctx->pc = 0x151604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x151608: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x151608u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x15160c: 0xc60d0050  lwc1        $f13, 0x50($s0)
    ctx->pc = 0x15160cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x151610: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x151610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151614: 0x70022ca9  por         $a1, $zero, $v0
    ctx->pc = 0x151614u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 2)));
    // 0x151618: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x151618u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x15161c: 0xc054636  jal         func_1518D8
    ctx->pc = 0x15161Cu;
    SET_GPR_U32(ctx, 31, 0x151624u);
    ctx->pc = 0x151620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15161Cu;
            // 0x151620: 0x7fa200e0  sq          $v0, 0xE0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1518D8u;
    if (runtime->hasFunction(0x1518D8u)) {
        auto targetFn = runtime->lookupFunction(0x1518D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151624u; }
        if (ctx->pc != 0x151624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1518d8_0x151be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x151624u; }
        if (ctx->pc != 0x151624u) { return; }
    }
    ctx->pc = 0x151624u;
    // 0x151624: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x151624u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_151628:
    // 0x151628: 0xae4000e8  sw          $zero, 0xE8($s2)
    ctx->pc = 0x151628u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 232), GPR_U32(ctx, 0));
    // 0x15162c: 0x10c0000e  beqz        $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x15162Cu;
    {
        const bool branch_taken_0x15162c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x151630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15162Cu;
            // 0x151630: 0xae4000ec  sw          $zero, 0xEC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 236), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15162c) {
            ctx->pc = 0x151668u;
            goto label_151668;
        }
    }
    ctx->pc = 0x151634u;
    // 0x151634: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x151634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x151638: 0x5086000c  beql        $a0, $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x151638u;
    {
        const bool branch_taken_0x151638 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 6));
        if (branch_taken_0x151638) {
            ctx->pc = 0x15163Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x151638u;
            // 0x15163c: 0x8e110004  lw          $s1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15166Cu;
            goto label_15166c;
        }
    }
    ctx->pc = 0x151640u;
    // 0x151640: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x151640u;
    {
        const bool branch_taken_0x151640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151640u;
            // 0x151644: 0x8c850008  lw          $a1, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151640) {
            ctx->pc = 0x151654u;
            goto label_151654;
        }
    }
    ctx->pc = 0x151648u;
label_151648:
    // 0x151648: 0x10460007  beq         $v0, $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x151648u;
    {
        const bool branch_taken_0x151648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x15164Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x151648u;
            // 0x15164c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151648) {
            ctx->pc = 0x151668u;
            goto label_151668;
        }
    }
    ctx->pc = 0x151650u;
    // 0x151650: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x151650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_151654:
    // 0x151654: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x151654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x151658: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x151658u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x15165c: 0x5443fffa  bnel        $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x15165Cu;
    {
        const bool branch_taken_0x15165c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x15165c) {
            ctx->pc = 0x151660u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15165Cu;
            // 0x151660: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x151648u;
            runtime->cooperativeGuestYield();
            goto label_151648;
        }
    }
    ctx->pc = 0x151664u;
    // 0x151664: 0xae4500ec  sw          $a1, 0xEC($s2)
    ctx->pc = 0x151664u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 236), GPR_U32(ctx, 5));
label_151668:
    // 0x151668: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x151668u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_15166c:
    // 0x15166c: 0x52200018  beql        $s1, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x15166Cu;
    {
        const bool branch_taken_0x15166c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x15166c) {
            ctx->pc = 0x151670u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15166Cu;
            // 0x151670: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1516D0u;
            goto label_1516d0;
        }
    }
    ctx->pc = 0x151674u;
    // 0x151674: 0xc05e394  jal         func_178E50
    ctx->pc = 0x151674u;
    SET_GPR_U32(ctx, 31, 0x15167Cu);
    ctx->pc = 0x151678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x151674u;
            // 0x151678: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178E50u;
    if (runtime->hasFunction(0x178E50u)) {
        auto targetFn = runtime->lookupFunction(0x178E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15167Cu; }
        if (ctx->pc != 0x15167Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_178e50_0x178e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15167Cu; }
        if (ctx->pc != 0x15167Cu) { return; }
    }
    ctx->pc = 0x15167Cu;
    // 0x15167c: 0xafb10070  sw          $s1, 0x70($sp)
    ctx->pc = 0x15167cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 17));
    // 0x151680: 0x27b30070  addiu       $s3, $sp, 0x70
    ctx->pc = 0x151680u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x151684: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x151684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x151688: 0xae620004  sw          $v0, 0x4($s3)
    ctx->pc = 0x151688u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
    // 0x15168c: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x15168cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x151690: 0x5051000b  beql        $v0, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x151690u;
    {
        const bool branch_taken_0x151690 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x151690) {
            ctx->pc = 0x151694u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x151690u;
            // 0x151694: 0xae310000  sw          $s1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1516C0u;
            goto label_1516c0;
        }
    }
    ctx->pc = 0x151698u;
    // 0x151698: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x151698u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x15169c: 0x0  nop
    ctx->pc = 0x15169cu;
    // NOP
label_1516a0:
    // 0x1516a0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1516a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1516a4: 0xc05e374  jal         func_178DD0
    ctx->pc = 0x1516A4u;
    SET_GPR_U32(ctx, 31, 0x1516ACu);
    ctx->pc = 0x1516A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1516A4u;
            // 0x1516a8: 0xae620004  sw          $v0, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x178DD0u;
    if (runtime->hasFunction(0x178DD0u)) {
        auto targetFn = runtime->lookupFunction(0x178DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1516ACu; }
        if (ctx->pc != 0x1516ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_178dd0_0x178df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1516ACu; }
        if (ctx->pc != 0x1516ACu) { return; }
    }
    ctx->pc = 0x1516ACu;
    // 0x1516ac: 0x8fa30074  lw          $v1, 0x74($sp)
    ctx->pc = 0x1516acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x1516b0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1516b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1516b4: 0x1462fffa  bne         $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1516B4u;
    {
        const bool branch_taken_0x1516b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1516B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1516B4u;
            // 0x1516b8: 0x8fa40074  lw          $a0, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1516b4) {
            ctx->pc = 0x1516A0u;
            runtime->cooperativeGuestYield();
            goto label_1516a0;
        }
    }
    ctx->pc = 0x1516BCu;
    // 0x1516bc: 0xae310000  sw          $s1, 0x0($s1)
    ctx->pc = 0x1516bcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 17));
label_1516c0:
    // 0x1516c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1516c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1516c4: 0xc08e204  jal         func_238810
    ctx->pc = 0x1516C4u;
    SET_GPR_U32(ctx, 31, 0x1516CCu);
    ctx->pc = 0x1516C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1516C4u;
            // 0x1516c8: 0xae310004  sw          $s1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238810u;
    if (runtime->hasFunction(0x238810u)) {
        auto targetFn = runtime->lookupFunction(0x238810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1516CCu; }
        if (ctx->pc != 0x1516CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238810_0x238810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1516CCu; }
        if (ctx->pc != 0x1516CCu) { return; }
    }
    ctx->pc = 0x1516CCu;
    // 0x1516cc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1516ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1516d0:
    // 0x1516d0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1516d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1516d4: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x1516d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x1516d8: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x1516d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x1516dc: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x1516dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x1516e0: 0x7bb30100  lq          $s3, 0x100($sp)
    ctx->pc = 0x1516e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1516e4: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x1516e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x1516e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1516E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1516ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1516E8u;
            // 0x1516ec: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1514E8u: goto label_1514e8;
            case 0x151510u: goto label_151510;
            case 0x1515E0u: goto label_1515e0;
            case 0x1515E4u: goto label_1515e4;
            case 0x151628u: goto label_151628;
            case 0x151648u: goto label_151648;
            case 0x151654u: goto label_151654;
            case 0x151668u: goto label_151668;
            case 0x15166Cu: goto label_15166c;
            case 0x1516A0u: goto label_1516a0;
            case 0x1516C0u: goto label_1516c0;
            case 0x1516D0u: goto label_1516d0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1516F0u;
}
