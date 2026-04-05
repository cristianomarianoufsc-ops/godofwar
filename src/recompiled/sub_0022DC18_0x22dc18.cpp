#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022DC18
// Address: 0x22dc18 - 0x22e088
void sub_0022DC18_0x22dc18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022DC18_0x22dc18");
#endif

    ctx->pc = 0x22dc18u;

    // 0x22dc18: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x22dc18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x22dc1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22dc1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22dc20: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x22dc20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x22dc24: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x22dc24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x22dc28: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x22dc28u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22dc2c: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x22dc2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x22dc30: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x22dc30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x22dc34: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x22dc34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22dc38: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x22dc38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x22dc3c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x22dc3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22dc40: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x22dc40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x22dc44: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x22dc44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x22dc48: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x22dc48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x22dc4c: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x22dc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x22dc50: 0x7fbe0040  sq          $fp, 0x40($sp)
    ctx->pc = 0x22dc50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 30));
    // 0x22dc54: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x22dc54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x22dc58: 0xc0a250f  jal         func_28943C
    ctx->pc = 0x22DC58u;
    SET_GPR_U32(ctx, 31, 0x22DC60u);
    ctx->pc = 0x22DC5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22DC58u;
            // 0x22dc5c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28943Cu;
    if (runtime->hasFunction(0x28943Cu)) {
        auto targetFn = runtime->lookupFunction(0x28943Cu);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DC60u; }
        if (ctx->pc != 0x22DC60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28943c_0x2894f4(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DC60u; }
        if (ctx->pc != 0x22DC60u) { return; }
    }
    ctx->pc = 0x22DC60u;
label_22dc60:
    // 0x22dc60: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x22dc60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x22dc64: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x22dc64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x22dc68: 0x2c31818  mult        $v1, $s6, $v1
    ctx->pc = 0x22dc68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x22dc6c: 0x3c170036  lui         $s7, 0x36
    ctx->pc = 0x22dc6cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)54 << 16));
    // 0x22dc70: 0x159900  sll         $s3, $s5, 4
    ctx->pc = 0x22dc70u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
    // 0x22dc74: 0x90461300  lbu         $a2, 0x1300($v0)
    ctx->pc = 0x22dc74u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4864)));
    // 0x22dc78: 0x26e8be80  addiu       $t0, $s7, -0x4180
    ctx->pc = 0x22dc78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 23), 4294950528));
    // 0x22dc7c: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x22dc7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x22dc80: 0x3c1e002c  lui         $fp, 0x2C
    ctx->pc = 0x22dc80u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)44 << 16));
    // 0x22dc84: 0x3c14002c  lui         $s4, 0x2C
    ctx->pc = 0x22dc84u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)44 << 16));
    // 0x22dc88: 0x2633821  addu        $a3, $s3, $v1
    ctx->pc = 0x22dc88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x22dc8c: 0x26847608  addiu       $a0, $s4, 0x7608
    ctx->pc = 0x22dc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 30216));
    // 0x22dc90: 0xe81021  addu        $v0, $a3, $t0
    ctx->pc = 0x22dc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
    // 0x22dc94: 0x27c37688  addiu       $v1, $fp, 0x7688
    ctx->pc = 0x22dc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 30344));
    // 0x22dc98: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x22dc98u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x22dc9c: 0x2431821  addu        $v1, $s2, $v1
    ctx->pc = 0x22dc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x22dca0: 0x24a27708  addiu       $v0, $a1, 0x7708
    ctx->pc = 0x22dca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 30472));
    // 0x22dca4: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x22dca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x22dca8: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x22dca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x22dcac: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x22dcacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x22dcb0: 0xa0460000  sb          $a2, 0x0($v0)
    ctx->pc = 0x22dcb0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x22dcb4: 0xa0660000  sb          $a2, 0x0($v1)
    ctx->pc = 0x22dcb4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 6));
    // 0x22dcb8: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x22dcb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x22dcbc: 0x24a38370  addiu       $v1, $a1, -0x7C90
    ctx->pc = 0x22dcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935408));
    // 0x22dcc0: 0x88660003  lwl         $a2, 0x3($v1)
    ctx->pc = 0x22dcc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 6) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 6, (int32_t)merged); }
    // 0x22dcc4: 0x98660000  lwr         $a2, 0x0($v1)
    ctx->pc = 0x22dcc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 6) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 6) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 6, merged64); }
    // 0x22dcc8: 0x80690004  lb          $t1, 0x4($v1)
    ctx->pc = 0x22dcc8u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x22dccc: 0x806a0005  lb          $t2, 0x5($v1)
    ctx->pc = 0x22dcccu;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
    // 0x22dcd0: 0xa8860003  swl         $a2, 0x3($a0)
    ctx->pc = 0x22dcd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x22dcd4: 0xb8860000  swr         $a2, 0x0($a0)
    ctx->pc = 0x22dcd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 6); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x22dcd8: 0xa0890004  sb          $t1, 0x4($a0)
    ctx->pc = 0x22dcd8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4), (uint8_t)GPR_U32(ctx, 9));
    // 0x22dcdc: 0xa08a0005  sb          $t2, 0x5($a0)
    ctx->pc = 0x22dcdcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 5), (uint8_t)GPR_U32(ctx, 10));
    // 0x22dce0: 0x1040007a  beqz        $v0, . + 4 + (0x7A << 2)
    ctx->pc = 0x22DCE0u;
    {
        const bool branch_taken_0x22dce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DCE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DCE0u;
            // 0x22dce4: 0x1071021  addu        $v0, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dce0) {
            ctx->pc = 0x22DECCu;
            goto label_22decc;
        }
    }
    ctx->pc = 0x22DCE8u;
    // 0x22dce8: 0x3c03cafe  lui         $v1, 0xCAFE
    ctx->pc = 0x22dce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51966 << 16));
    // 0x22dcec: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x22dcecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x22dcf0: 0x3463bad1  ori         $v1, $v1, 0xBAD1
    ctx->pc = 0x22dcf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47825);
    // 0x22dcf4: 0x14430076  bne         $v0, $v1, . + 4 + (0x76 << 2)
    ctx->pc = 0x22DCF4u;
    {
        const bool branch_taken_0x22dcf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x22DCF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DCF4u;
            // 0x22dcf8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dcf4) {
            ctx->pc = 0x22DED0u;
            goto label_22ded0;
        }
    }
    ctx->pc = 0x22DCFCu;
    // 0x22dcfc: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x22dcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x22dd00: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x22dd00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x22dd04: 0x2451bf08  addiu       $s1, $v0, -0x40F8
    ctx->pc = 0x22dd04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950664));
    // 0x22dd08: 0x3a32021  addu        $a0, $sp, $v1
    ctx->pc = 0x22dd08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x22dd0c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22dd0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22dd10: 0x26220230  addiu       $v0, $s1, 0x230
    ctx->pc = 0x22dd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 560));
    // 0x22dd14: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x22dd14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x22dd18: 0x1040006c  beqz        $v0, . + 4 + (0x6C << 2)
    ctx->pc = 0x22DD18u;
    {
        const bool branch_taken_0x22dd18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DD1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DD18u;
            // 0x22dd1c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dd18) {
            ctx->pc = 0x22DECCu;
            goto label_22decc;
        }
    }
    ctx->pc = 0x22DD20u;
    // 0x22dd20: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x22dd20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x22dd24: 0x0  nop
    ctx->pc = 0x22dd24u;
    // NOP
label_22dd28:
    // 0x22dd28: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x22dd28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x22dd2c: 0x24a58378  addiu       $a1, $a1, -0x7C88
    ctx->pc = 0x22dd2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935416));
    // 0x22dd30: 0xc0a34bc  jal         func_28D2F0
    ctx->pc = 0x22DD30u;
    SET_GPR_U32(ctx, 31, 0x22DD38u);
    ctx->pc = 0x22DD34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22DD30u;
            // 0x22dd34: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D2F0u;
    if (runtime->hasFunction(0x28D2F0u)) {
        auto targetFn = runtime->lookupFunction(0x28D2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DD38u; }
        if (ctx->pc != 0x22DD38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D2F0_0x28d2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DD38u; }
        if (ctx->pc != 0x22DD38u) { return; }
    }
    ctx->pc = 0x22DD38u;
    // 0x22dd38: 0x1440005f  bnez        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x22DD38u;
    {
        const bool branch_taken_0x22dd38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22DD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DD38u;
            // 0x22dd3c: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dd38) {
            ctx->pc = 0x22DEB8u;
            goto label_22deb8;
        }
    }
    ctx->pc = 0x22DD40u;
    // 0x22dd40: 0x8222001c  lb          $v0, 0x1C($s1)
    ctx->pc = 0x22dd40u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x22dd44: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x22dd44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x22dd48: 0x1602005b  bne         $s0, $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x22DD48u;
    {
        const bool branch_taken_0x22dd48 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x22DD4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DD48u;
            // 0x22dd4c: 0x3c020036  lui         $v0, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dd48) {
            ctx->pc = 0x22DEB8u;
            goto label_22deb8;
        }
    }
    ctx->pc = 0x22DD50u;
    // 0x22dd50: 0x24020044  addiu       $v0, $zero, 0x44
    ctx->pc = 0x22dd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x22dd54: 0x26e3be80  addiu       $v1, $s7, -0x4180
    ctx->pc = 0x22dd54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294950528));
    // 0x22dd58: 0x2c22018  mult        $a0, $s6, $v0
    ctx->pc = 0x22dd58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x22dd5c: 0x931021  addu        $v0, $a0, $s3
    ctx->pc = 0x22dd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x22dd60: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22dd60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22dd64: 0x8450000c  lh          $s0, 0xC($v0)
    ctx->pc = 0x22dd64u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x22dd68: 0x1e000015  bgtz        $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x22DD68u;
    {
        const bool branch_taken_0x22dd68 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x22DD6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DD68u;
            // 0x22dd6c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dd68) {
            ctx->pc = 0x22DDC0u;
            goto label_22ddc0;
        }
    }
    ctx->pc = 0x22DD70u;
    // 0x22dd70: 0x26827608  addiu       $v0, $s4, 0x7608
    ctx->pc = 0x22dd70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 30216));
    // 0x22dd74: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x22dd74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x22dd78: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x22dd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x22dd7c: 0x24698380  addiu       $t1, $v1, -0x7C80
    ctx->pc = 0x22dd7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935424));
    // 0x22dd80: 0x69250007  ldl         $a1, 0x7($t1)
    ctx->pc = 0x22dd80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x22dd84: 0x6d250000  ldr         $a1, 0x0($t1)
    ctx->pc = 0x22dd84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x22dd88: 0x6926000f  ldl         $a2, 0xF($t1)
    ctx->pc = 0x22dd88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x22dd8c: 0x6d260008  ldr         $a2, 0x8($t1)
    ctx->pc = 0x22dd8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x22dd90: 0x89270013  lwl         $a3, 0x13($t1)
    ctx->pc = 0x22dd90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x22dd94: 0x99270010  lwr         $a3, 0x10($t1)
    ctx->pc = 0x22dd94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x22dd98: 0xb0450007  sdl         $a1, 0x7($v0)
    ctx->pc = 0x22dd98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22dd9c: 0xb4450000  sdr         $a1, 0x0($v0)
    ctx->pc = 0x22dd9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22dda0: 0xb046000f  sdl         $a2, 0xF($v0)
    ctx->pc = 0x22dda0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22dda4: 0xb4460008  sdr         $a2, 0x8($v0)
    ctx->pc = 0x22dda4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22dda8: 0xa8470013  swl         $a3, 0x13($v0)
    ctx->pc = 0x22dda8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x22ddac: 0xb8470010  swr         $a3, 0x10($v0)
    ctx->pc = 0x22ddacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x22ddb0: 0x81250014  lb          $a1, 0x14($t1)
    ctx->pc = 0x22ddb0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 20)));
    // 0x22ddb4: 0xa0450014  sb          $a1, 0x14($v0)
    ctx->pc = 0x22ddb4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 20), (uint8_t)GPR_U32(ctx, 5));
    // 0x22ddb8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x22DDB8u;
    {
        const bool branch_taken_0x22ddb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DDBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DDB8u;
            // 0x22ddbc: 0x26240008  addiu       $a0, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ddb8) {
            ctx->pc = 0x22DE14u;
            goto label_22de14;
        }
    }
    ctx->pc = 0x22DDC0u;
label_22ddc0:
    // 0x22ddc0: 0x26050258  addiu       $a1, $s0, 0x258
    ctx->pc = 0x22ddc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 600));
    // 0x22ddc4: 0x8c44cb94  lw          $a0, -0x346C($v0)
    ctx->pc = 0x22ddc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x22ddc8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22ddc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ddcc: 0xc06e362  jal         func_1B8D88
    ctx->pc = 0x22DDCCu;
    SET_GPR_U32(ctx, 31, 0x22DDD4u);
    ctx->pc = 0x22DDD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22DDCCu;
            // 0x22ddd0: 0x27a70020  addiu       $a3, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8D88u;
    if (runtime->hasFunction(0x1B8D88u)) {
        auto targetFn = runtime->lookupFunction(0x1B8D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DDD4u; }
        if (ctx->pc != 0x22DDD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8D88_0x1b8d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DDD4u; }
        if (ctx->pc != 0x22DDD4u) { return; }
    }
    ctx->pc = 0x22DDD4u;
    // 0x22ddd4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x22DDD4u;
    {
        const bool branch_taken_0x22ddd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DDD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DDD4u;
            // 0x22ddd8: 0x8fa50020  lw          $a1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ddd4) {
            ctx->pc = 0x22DDF8u;
            goto label_22ddf8;
        }
    }
    ctx->pc = 0x22DDDCu;
    // 0x22dddc: 0x26907608  addiu       $s0, $s4, 0x7608
    ctx->pc = 0x22dddcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 30216));
    // 0x22dde0: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x22dde0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x22dde4: 0xc0a274e  jal         func_289D38
    ctx->pc = 0x22DDE4u;
    SET_GPR_U32(ctx, 31, 0x22DDECu);
    ctx->pc = 0x22DDE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22DDE4u;
            // 0x22dde8: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289D38u;
    if (runtime->hasFunction(0x289D38u)) {
        auto targetFn = runtime->lookupFunction(0x289D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DDECu; }
        if (ctx->pc != 0x22DDECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289d38_0x289f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DDECu; }
        if (ctx->pc != 0x22DDECu) { return; }
    }
    ctx->pc = 0x22DDECu;
    // 0x22ddec: 0x2128021  addu        $s0, $s0, $s2
    ctx->pc = 0x22ddecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x22ddf0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x22DDF0u;
    {
        const bool branch_taken_0x22ddf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DDF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DDF0u;
            // 0x22ddf4: 0xa200001f  sb          $zero, 0x1F($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 31), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ddf0) {
            ctx->pc = 0x22DE10u;
            goto label_22de10;
        }
    }
    ctx->pc = 0x22DDF8u;
label_22ddf8:
    // 0x22ddf8: 0x26847608  addiu       $a0, $s4, 0x7608
    ctx->pc = 0x22ddf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 30216));
    // 0x22ddfc: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x22ddfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x22de00: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x22de00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x22de04: 0x24a58398  addiu       $a1, $a1, -0x7C68
    ctx->pc = 0x22de04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935448));
    // 0x22de08: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x22DE08u;
    SET_GPR_U32(ctx, 31, 0x22DE10u);
    ctx->pc = 0x22DE0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22DE08u;
            // 0x22de0c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DE10u; }
        if (ctx->pc != 0x22DE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DE10u; }
        if (ctx->pc != 0x22DE10u) { return; }
    }
    ctx->pc = 0x22DE10u;
label_22de10:
    // 0x22de10: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x22de10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_22de14:
    // 0x22de14: 0xc08b65a  jal         func_22D968
    ctx->pc = 0x22DE14u;
    SET_GPR_U32(ctx, 31, 0x22DE1Cu);
    ctx->pc = 0x22DE18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22DE14u;
            // 0x22de18: 0x27d07688  addiu       $s0, $fp, 0x7688 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 30344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D968u;
    if (runtime->hasFunction(0x22D968u)) {
        auto targetFn = runtime->lookupFunction(0x22D968u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DE1Cu; }
        if (ctx->pc != 0x22DE1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D968_0x22d968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DE1Cu; }
        if (ctx->pc != 0x22DE1Cu) { return; }
    }
    ctx->pc = 0x22DE1Cu;
    // 0x22de1c: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x22de1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x22de20: 0xc0a2644  jal         func_289910
    ctx->pc = 0x22DE20u;
    SET_GPR_U32(ctx, 31, 0x22DE28u);
    ctx->pc = 0x22DE24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22DE20u;
            // 0x22de24: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289910u;
    if (runtime->hasFunction(0x289910u)) {
        auto targetFn = runtime->lookupFunction(0x289910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DE28u; }
        if (ctx->pc != 0x22DE28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_00289910_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DE28u; }
        if (ctx->pc != 0x22DE28u) { return; }
    }
    ctx->pc = 0x22DE28u;
    // 0x22de28: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x22de28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x22de2c: 0x24070e10  addiu       $a3, $zero, 0xE10
    ctx->pc = 0x22de2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3600));
    // 0x22de30: 0x2c31018  mult        $v0, $s6, $v1
    ctx->pc = 0x22de30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x22de34: 0x50e00001  beql        $a3, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x22DE34u;
    {
        const bool branch_taken_0x22de34 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x22de34) {
            ctx->pc = 0x22DE38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22DE34u;
            // 0x22de38: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x22DE3Cu;
            goto label_22de3c;
        }
    }
    ctx->pc = 0x22DE3Cu;
label_22de3c:
    // 0x22de3c: 0x2408003c  addiu       $t0, $zero, 0x3C
    ctx->pc = 0x22de3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x22de40: 0x26e5be80  addiu       $a1, $s7, -0x4180
    ctx->pc = 0x22de40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294950528));
    // 0x22de44: 0x2404003c  addiu       $a0, $zero, 0x3C
    ctx->pc = 0x22de44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x22de48: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x22de48u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x22de4c: 0x24c6cca0  addiu       $a2, $a2, -0x3360
    ctx->pc = 0x22de4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954144));
    // 0x22de50: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x22de50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x22de54: 0x24020e10  addiu       $v0, $zero, 0xE10
    ctx->pc = 0x22de54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3600));
    // 0x22de58: 0xa31021  addu        $v0, $a1, $v1
    ctx->pc = 0x22de58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x22de5c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x22de5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22de60: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x22de60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x22de64: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x22de64u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x22de68: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x22de68u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x22de6c: 0x9063000e  lbu         $v1, 0xE($v1)
    ctx->pc = 0x22de6cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 14)));
    // 0x22de70: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x22de70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x22de74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x22de74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x22de78: 0x24a47708  addiu       $a0, $a1, 0x7708
    ctx->pc = 0x22de78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 30472));
    // 0x22de7c: 0x47001a  div         $zero, $v0, $a3
    ctx->pc = 0x22de7cu;
    { int32_t divisor = GPR_S32(ctx, 7);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x22de80: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x22de80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x22de84: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x22de84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x22de88: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x22de88u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22de8c: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x22de8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
    // 0x22de90: 0x5010  mfhi        $t2
    ctx->pc = 0x22de90u;
    SET_GPR_U64(ctx, 10, ctx->hi);
    // 0x22de94: 0x3812  mflo        $a3
    ctx->pc = 0x22de94u;
    SET_GPR_U64(ctx, 7, ctx->lo);
    // 0x22de98: 0x48001a  div         $zero, $v0, $t0
    ctx->pc = 0x22de98u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x22de9c: 0x4810  mfhi        $t1
    ctx->pc = 0x22de9cu;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x22dea0: 0x148001a  div         $zero, $t2, $t0
    ctx->pc = 0x22dea0u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 10);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x22dea4: 0x4012  mflo        $t0
    ctx->pc = 0x22dea4u;
    SET_GPR_U64(ctx, 8, ctx->lo);
    // 0x22dea8: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x22DEA8u;
    SET_GPR_U32(ctx, 31, 0x22DEB0u);
    ctx->pc = 0x22DEACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22DEA8u;
            // 0x22deac: 0x24a583a8  addiu       $a1, $a1, -0x7C58 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DEB0u; }
        if (ctx->pc != 0x22DEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DEB0u; }
        if (ctx->pc != 0x22DEB0u) { return; }
    }
    ctx->pc = 0x22DEB0u;
    // 0x22deb0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x22DEB0u;
    {
        const bool branch_taken_0x22deb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DEB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DEB0u;
            // 0x22deb4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22deb0) {
            ctx->pc = 0x22DED0u;
            goto label_22ded0;
        }
    }
    ctx->pc = 0x22DEB8u;
label_22deb8:
    // 0x22deb8: 0x26310038  addiu       $s1, $s1, 0x38
    ctx->pc = 0x22deb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x22debc: 0x2442c138  addiu       $v0, $v0, -0x3EC8
    ctx->pc = 0x22debcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951224));
    // 0x22dec0: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x22dec0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x22dec4: 0x1440ff98  bnez        $v0, . + 4 + (-0x68 << 2)
    ctx->pc = 0x22DEC4u;
    {
        const bool branch_taken_0x22dec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22DEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DEC4u;
            // 0x22dec8: 0x3c05002c  lui         $a1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dec4) {
            ctx->pc = 0x22DD28u;
            runtime->cooperativeGuestYield();
            goto label_22dd28;
        }
    }
    ctx->pc = 0x22DECCu;
label_22decc:
    // 0x22decc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x22deccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22ded0:
    // 0x22ded0: 0x12a20018  beq         $s5, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x22DED0u;
    {
        const bool branch_taken_0x22ded0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x22DED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DED0u;
            // 0x22ded4: 0x2aa20002  slti        $v0, $s5, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ded0) {
            ctx->pc = 0x22DF34u;
            goto label_22df34;
        }
    }
    ctx->pc = 0x22DED8u;
    // 0x22ded8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22DED8u;
    {
        const bool branch_taken_0x22ded8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DED8u;
            // 0x22dedc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ded8) {
            ctx->pc = 0x22DEF0u;
            goto label_22def0;
        }
    }
    ctx->pc = 0x22DEE0u;
    // 0x22dee0: 0x12a00009  beqz        $s5, . + 4 + (0x9 << 2)
    ctx->pc = 0x22DEE0u;
    {
        const bool branch_taken_0x22dee0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DEE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DEE0u;
            // 0x22dee4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dee0) {
            ctx->pc = 0x22DF08u;
            goto label_22df08;
        }
    }
    ctx->pc = 0x22DEE8u;
    // 0x22dee8: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x22DEE8u;
    {
        const bool branch_taken_0x22dee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DEECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DEE8u;
            // 0x22deec: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dee8) {
            ctx->pc = 0x22DFE4u;
            goto label_22dfe4;
        }
    }
    ctx->pc = 0x22DEF0u;
label_22def0:
    // 0x22def0: 0x12a2001f  beq         $s5, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x22DEF0u;
    {
        const bool branch_taken_0x22def0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x22DEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DEF0u;
            // 0x22def4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22def0) {
            ctx->pc = 0x22DF70u;
            goto label_22df70;
        }
    }
    ctx->pc = 0x22DEF8u;
    // 0x22def8: 0x12a2002c  beq         $s5, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x22DEF8u;
    {
        const bool branch_taken_0x22def8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x22DEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DEF8u;
            // 0x22defc: 0x3c05002a  lui         $a1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22def8) {
            ctx->pc = 0x22DFACu;
            goto label_22dfac;
        }
    }
    ctx->pc = 0x22DF00u;
    // 0x22df00: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x22DF00u;
    {
        const bool branch_taken_0x22df00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DF00u;
            // 0x22df04: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22df00) {
            ctx->pc = 0x22DFE4u;
            goto label_22dfe4;
        }
    }
    ctx->pc = 0x22DF08u;
label_22df08:
    // 0x22df08: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x22df08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x22df0c: 0x8c45cb94  lw          $a1, -0x346C($v0)
    ctx->pc = 0x22df0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x22df10: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x22df10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x22df14: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x22df14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x22df18: 0x24847608  addiu       $a0, $a0, 0x7608
    ctx->pc = 0x22df18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30216));
    // 0x22df1c: 0x24637688  addiu       $v1, $v1, 0x7688
    ctx->pc = 0x22df1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30344));
    // 0x22df20: 0x24427708  addiu       $v0, $v0, 0x7708
    ctx->pc = 0x22df20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30472));
    // 0x22df24: 0xaca20100  sw          $v0, 0x100($a1)
    ctx->pc = 0x22df24u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 256), GPR_U32(ctx, 2));
    // 0x22df28: 0xaca400e0  sw          $a0, 0xE0($a1)
    ctx->pc = 0x22df28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 224), GPR_U32(ctx, 4));
    // 0x22df2c: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x22DF2Cu;
    {
        const bool branch_taken_0x22df2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DF30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DF2Cu;
            // 0x22df30: 0xaca300f0  sw          $v1, 0xF0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 240), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22df2c) {
            ctx->pc = 0x22DFE0u;
            goto label_22dfe0;
        }
    }
    ctx->pc = 0x22DF34u;
label_22df34:
    // 0x22df34: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x22df34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x22df38: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x22df38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x22df3c: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x22df3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x22df40: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x22df40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x22df44: 0x8ca5cb94  lw          $a1, -0x346C($a1)
    ctx->pc = 0x22df44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294953876)));
    // 0x22df48: 0x24637608  addiu       $v1, $v1, 0x7608
    ctx->pc = 0x22df48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30216));
    // 0x22df4c: 0x24847688  addiu       $a0, $a0, 0x7688
    ctx->pc = 0x22df4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30344));
    // 0x22df50: 0x24427708  addiu       $v0, $v0, 0x7708
    ctx->pc = 0x22df50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30472));
    // 0x22df54: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x22df54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x22df58: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x22df58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x22df5c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x22df5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x22df60: 0xaca300e4  sw          $v1, 0xE4($a1)
    ctx->pc = 0x22df60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 228), GPR_U32(ctx, 3));
    // 0x22df64: 0xaca20104  sw          $v0, 0x104($a1)
    ctx->pc = 0x22df64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 260), GPR_U32(ctx, 2));
    // 0x22df68: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x22DF68u;
    {
        const bool branch_taken_0x22df68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DF68u;
            // 0x22df6c: 0xaca400f4  sw          $a0, 0xF4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 244), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22df68) {
            ctx->pc = 0x22DFE0u;
            goto label_22dfe0;
        }
    }
    ctx->pc = 0x22DF70u;
label_22df70:
    // 0x22df70: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x22df70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x22df74: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x22df74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x22df78: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x22df78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x22df7c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x22df7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x22df80: 0x8ca5cb94  lw          $a1, -0x346C($a1)
    ctx->pc = 0x22df80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294953876)));
    // 0x22df84: 0x24637608  addiu       $v1, $v1, 0x7608
    ctx->pc = 0x22df84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30216));
    // 0x22df88: 0x24847688  addiu       $a0, $a0, 0x7688
    ctx->pc = 0x22df88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30344));
    // 0x22df8c: 0x24427708  addiu       $v0, $v0, 0x7708
    ctx->pc = 0x22df8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30472));
    // 0x22df90: 0x24630040  addiu       $v1, $v1, 0x40
    ctx->pc = 0x22df90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x22df94: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x22df94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x22df98: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x22df98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x22df9c: 0xaca300e8  sw          $v1, 0xE8($a1)
    ctx->pc = 0x22df9cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 232), GPR_U32(ctx, 3));
    // 0x22dfa0: 0xaca20108  sw          $v0, 0x108($a1)
    ctx->pc = 0x22dfa0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 264), GPR_U32(ctx, 2));
    // 0x22dfa4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x22DFA4u;
    {
        const bool branch_taken_0x22dfa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DFA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DFA4u;
            // 0x22dfa8: 0xaca400f8  sw          $a0, 0xF8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 248), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dfa4) {
            ctx->pc = 0x22DFE0u;
            goto label_22dfe0;
        }
    }
    ctx->pc = 0x22DFACu;
label_22dfac:
    // 0x22dfac: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x22dfacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x22dfb0: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x22dfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x22dfb4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x22dfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x22dfb8: 0x8ca5cb94  lw          $a1, -0x346C($a1)
    ctx->pc = 0x22dfb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294953876)));
    // 0x22dfbc: 0x24637608  addiu       $v1, $v1, 0x7608
    ctx->pc = 0x22dfbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30216));
    // 0x22dfc0: 0x24847688  addiu       $a0, $a0, 0x7688
    ctx->pc = 0x22dfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30344));
    // 0x22dfc4: 0x24427708  addiu       $v0, $v0, 0x7708
    ctx->pc = 0x22dfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30472));
    // 0x22dfc8: 0x24630060  addiu       $v1, $v1, 0x60
    ctx->pc = 0x22dfc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
    // 0x22dfcc: 0x24840060  addiu       $a0, $a0, 0x60
    ctx->pc = 0x22dfccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
    // 0x22dfd0: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x22dfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x22dfd4: 0xaca300ec  sw          $v1, 0xEC($a1)
    ctx->pc = 0x22dfd4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 236), GPR_U32(ctx, 3));
    // 0x22dfd8: 0xaca2010c  sw          $v0, 0x10C($a1)
    ctx->pc = 0x22dfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 268), GPR_U32(ctx, 2));
    // 0x22dfdc: 0xaca400fc  sw          $a0, 0xFC($a1)
    ctx->pc = 0x22dfdcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 252), GPR_U32(ctx, 4));
label_22dfe0:
    // 0x22dfe0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x22dfe0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_22dfe4:
    // 0x22dfe4: 0x2aa20004  slti        $v0, $s5, 0x4
    ctx->pc = 0x22dfe4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x22dfe8: 0x1440ff1d  bnez        $v0, . + 4 + (-0xE3 << 2)
    ctx->pc = 0x22DFE8u;
    {
        const bool branch_taken_0x22dfe8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22DFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DFE8u;
            // 0x22dfec: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22dfe8) {
            ctx->pc = 0x22DC60u;
            runtime->cooperativeGuestYield();
            goto label_22dc60;
        }
    }
    ctx->pc = 0x22DFF0u;
    // 0x22dff0: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x22dff0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x22dff4: 0x162880  sll         $a1, $s6, 2
    ctx->pc = 0x22dff4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x22dff8: 0x24c2bc60  addiu       $v0, $a2, -0x43A0
    ctx->pc = 0x22dff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949984));
    // 0x22dffc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x22dffcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x22e000: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x22e000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22e004: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22e004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22e008: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x22e008u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x22e00c: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x22e00cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_22e010:
    // 0x22e010: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x22e010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22e014: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x22E014u;
    {
        const bool branch_taken_0x22e014 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e014) {
            ctx->pc = 0x22E018u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22E014u;
            // 0x22e018: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22E030u;
            goto label_22e030;
        }
    }
    ctx->pc = 0x22E01Cu;
    // 0x22e01c: 0x24c2bc60  addiu       $v0, $a2, -0x43A0
    ctx->pc = 0x22e01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949984));
    // 0x22e020: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x22e020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x22e024: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22E024u;
    {
        const bool branch_taken_0x22e024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E024u;
            // 0x22e028: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e024) {
            ctx->pc = 0x22E03Cu;
            goto label_22e03c;
        }
    }
    ctx->pc = 0x22E02Cu;
    // 0x22e02c: 0x0  nop
    ctx->pc = 0x22e02cu;
    // NOP
label_22e030:
    // 0x22e030: 0x28820005  slti        $v0, $a0, 0x5
    ctx->pc = 0x22e030u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x22e034: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x22E034u;
    {
        const bool branch_taken_0x22e034 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E034u;
            // 0x22e038: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e034) {
            ctx->pc = 0x22E010u;
            runtime->cooperativeGuestYield();
            goto label_22e010;
        }
    }
    ctx->pc = 0x22E03Cu;
label_22e03c:
    // 0x22e03c: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x22e03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
    // 0x22e040: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x22e040u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x22e044: 0x2442bc60  addiu       $v0, $v0, -0x43A0
    ctx->pc = 0x22e044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949984));
    // 0x22e048: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x22e048u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x22e04c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x22e04cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22e050: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x22e050u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x22e054: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x22e054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x22e058: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x22e058u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22e05c: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x22e05cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22e060: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x22e060u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x22e064: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x22e064u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22e068: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x22e068u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22e06c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x22e06cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22e070: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x22e070u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22e074: 0x7bbe0040  lq          $fp, 0x40($sp)
    ctx->pc = 0x22e074u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22e078: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x22e078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22e07c: 0x3e00008  jr          $ra
    ctx->pc = 0x22E07Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E07Cu;
            // 0x22e080: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22DC60u: goto label_22dc60;
            case 0x22DD28u: goto label_22dd28;
            case 0x22DDC0u: goto label_22ddc0;
            case 0x22DDF8u: goto label_22ddf8;
            case 0x22DE10u: goto label_22de10;
            case 0x22DE14u: goto label_22de14;
            case 0x22DE3Cu: goto label_22de3c;
            case 0x22DEB8u: goto label_22deb8;
            case 0x22DECCu: goto label_22decc;
            case 0x22DED0u: goto label_22ded0;
            case 0x22DEF0u: goto label_22def0;
            case 0x22DF08u: goto label_22df08;
            case 0x22DF34u: goto label_22df34;
            case 0x22DF70u: goto label_22df70;
            case 0x22DFACu: goto label_22dfac;
            case 0x22DFE0u: goto label_22dfe0;
            case 0x22DFE4u: goto label_22dfe4;
            case 0x22E010u: goto label_22e010;
            case 0x22E030u: goto label_22e030;
            case 0x22E03Cu: goto label_22e03c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22E084u;
    // 0x22e084: 0x0  nop
    ctx->pc = 0x22e084u;
    // NOP
}
