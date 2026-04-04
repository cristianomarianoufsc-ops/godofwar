#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002045E8
// Address: 0x2045e8 - 0x2046d8
void sub_002045E8_0x2045e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002045E8_0x2045e8");
#endif

    ctx->pc = 0x2045e8u;

    // 0x2045e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2045e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2045ec: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2045ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2045f0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2045f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2045f4: 0x24e601c0  addiu       $a2, $a3, 0x1C0
    ctx->pc = 0x2045f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 448));
    // 0x2045f8: 0x90c20005  lbu         $v0, 0x5($a2)
    ctx->pc = 0x2045f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
    // 0x2045fc: 0x384200ff  xori        $v0, $v0, 0xFF
    ctx->pc = 0x2045fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)255);
    // 0x204600: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x204600u;
    {
        const bool branch_taken_0x204600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204600u;
            // 0x204604: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204600) {
            ctx->pc = 0x2046CCu;
            goto label_2046cc;
        }
    }
    ctx->pc = 0x204608u;
    // 0x204608: 0x90c20005  lbu         $v0, 0x5($a2)
    ctx->pc = 0x204608u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
    // 0x20460c: 0x0  nop
    ctx->pc = 0x20460cu;
    // NOP
label_204610:
    // 0x204610: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x204610u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x204614: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x204614u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x204618: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x204618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20461c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x20461cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x204620: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x204620u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x204624: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x204624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x204628: 0x68440007  ldl         $a0, 0x7($v0)
    ctx->pc = 0x204628u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x20462c: 0x6c440000  ldr         $a0, 0x0($v0)
    ctx->pc = 0x20462cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x204630: 0xb3a40017  sdl         $a0, 0x17($sp)
    ctx->pc = 0x204630u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x204634: 0xb7a40010  sdr         $a0, 0x10($sp)
    ctx->pc = 0x204634u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x204638: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x204638u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x20463c: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x20463cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x204640: 0x9fa40010  lwu         $a0, 0x10($sp)
    ctx->pc = 0x204640u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x204644: 0x9fa20014  lwu         $v0, 0x14($sp)
    ctx->pc = 0x204644u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x204648: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x204648u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x20464c: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x20464cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x204650: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x204650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x204654: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x204654u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x204658: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x204658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x20465c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x20465cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x204660: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x204660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x204664: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x204664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x204668: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x204668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x20466c: 0x6ba20027  ldl         $v0, 0x27($sp)
    ctx->pc = 0x20466cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x204670: 0x6fa20020  ldr         $v0, 0x20($sp)
    ctx->pc = 0x204670u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x204674: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x204674u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x204678: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x204678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x20467c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x20467cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x204680: 0x90c20005  lbu         $v0, 0x5($a2)
    ctx->pc = 0x204680u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
    // 0x204684: 0x90c30004  lbu         $v1, 0x4($a2)
    ctx->pc = 0x204684u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x204688: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x204688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20468c: 0x90c40006  lbu         $a0, 0x6($a2)
    ctx->pc = 0x20468cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x204690: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x204690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x204694: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x204694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x204698: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x204698u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x20469c: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20469Cu;
    {
        const bool branch_taken_0x20469c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x2046A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20469Cu;
            // 0x2046a0: 0xa0c20005  sb          $v0, 0x5($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20469c) {
            ctx->pc = 0x2046B0u;
            goto label_2046b0;
        }
    }
    ctx->pc = 0x2046A4u;
    // 0x2046a4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2046a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2046a8: 0xa0c00006  sb          $zero, 0x6($a2)
    ctx->pc = 0x2046a8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x2046ac: 0xa0c20005  sb          $v0, 0x5($a2)
    ctx->pc = 0x2046acu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 5), (uint8_t)GPR_U32(ctx, 2));
label_2046b0:
    // 0x2046b0: 0x90c20005  lbu         $v0, 0x5($a2)
    ctx->pc = 0x2046b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
    // 0x2046b4: 0x384200ff  xori        $v0, $v0, 0xFF
    ctx->pc = 0x2046b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)255);
    // 0x2046b8: 0x5440ffd5  bnel        $v0, $zero, . + 4 + (-0x2B << 2)
    ctx->pc = 0x2046B8u;
    {
        const bool branch_taken_0x2046b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2046b8) {
            ctx->pc = 0x2046BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2046B8u;
            // 0x2046bc: 0x90c20005  lbu         $v0, 0x5($a2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 5)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x204610u;
            runtime->cooperativeGuestYield();
            goto label_204610;
        }
    }
    ctx->pc = 0x2046C0u;
    // 0x2046c0: 0xc08223a  jal         func_2088E8
    ctx->pc = 0x2046C0u;
    SET_GPR_U32(ctx, 31, 0x2046C8u);
    ctx->pc = 0x2046C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2046C0u;
            // 0x2046c4: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2088E8u;
    if (runtime->hasFunction(0x2088E8u)) {
        auto targetFn = runtime->lookupFunction(0x2088E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2046C8u; }
        if (ctx->pc != 0x2046C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002088E8_0x2088e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2046C8u; }
        if (ctx->pc != 0x2046C8u) { return; }
    }
    ctx->pc = 0x2046C8u;
    // 0x2046c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2046c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2046cc:
    // 0x2046cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2046CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2046D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2046CCu;
            // 0x2046d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x204610u: goto label_204610;
            case 0x2046B0u: goto label_2046b0;
            case 0x2046CCu: goto label_2046cc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2046D4u;
    // 0x2046d4: 0x0  nop
    ctx->pc = 0x2046d4u;
    // NOP
}
