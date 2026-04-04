#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00129820
// Address: 0x129820 - 0x1298f0
void sub_00129820_0x129820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00129820_0x129820");
#endif

    ctx->pc = 0x129820u;

    // 0x129820: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x129820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x129824: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x129824u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x129828: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x129828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12982c: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x12982cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x129830: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x129830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x129834: 0x8c42ec94  lw          $v0, -0x136C($v0)
    ctx->pc = 0x129834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962324)));
    // 0x129838: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x129838u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x12983c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x12983cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x129840: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x129840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x129844: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x129844u;
    {
        const bool branch_taken_0x129844 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x129848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129844u;
            // 0x129848: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129844) {
            ctx->pc = 0x129858u;
            goto label_129858;
        }
    }
    ctx->pc = 0x12984Cu;
    // 0x12984c: 0x2462ffec  addiu       $v0, $v1, -0x14
    ctx->pc = 0x12984cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x129850: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x129850u;
    {
        const bool branch_taken_0x129850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x129854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129850u;
            // 0x129854: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129850) {
            ctx->pc = 0x12985Cu;
            goto label_12985c;
        }
    }
    ctx->pc = 0x129858u;
label_129858:
    // 0x129858: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x129858u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12985c:
    // 0x12985c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x12985cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x129860: 0x3c07dfff  lui         $a3, 0xDFFF
    ctx->pc = 0x129860u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)57343 << 16));
    // 0x129864: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x129864u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x129868: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x129868u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x12986c: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x12986cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x129870: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x129870u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x129874: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x129874u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x129878: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x129878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x12987c: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x12987cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x129880: 0xb2020007  sdl         $v0, 0x7($s0)
    ctx->pc = 0x129880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x129884: 0xb6020000  sdr         $v0, 0x0($s0)
    ctx->pc = 0x129884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x129888: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x129888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x12988c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12988cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129890: 0xdc4300c0  ld          $v1, 0xC0($v0)
    ctx->pc = 0x129890u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x129894: 0x244600c0  addiu       $a2, $v0, 0xC0
    ctx->pc = 0x129894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x129898: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x129898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12989c: 0xac4000d4  sw          $zero, 0xD4($v0)
    ctx->pc = 0x12989cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 212), GPR_U32(ctx, 0));
    // 0x1298a0: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x1298a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x1298a4: 0xfc4300c0  sd          $v1, 0xC0($v0)
    ctx->pc = 0x1298a4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 192), GPR_U64(ctx, 3));
    // 0x1298a8: 0xdcc20008  ld          $v0, 0x8($a2)
    ctx->pc = 0x1298a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1298ac: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x1298acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x1298b0: 0xc0541a6  jal         func_150698
    ctx->pc = 0x1298B0u;
    SET_GPR_U32(ctx, 31, 0x1298B8u);
    ctx->pc = 0x1298B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1298B0u;
            // 0x1298b4: 0xfcc20008  sd          $v0, 0x8($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x150698u;
    if (runtime->hasFunction(0x150698u)) {
        auto targetFn = runtime->lookupFunction(0x150698u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1298B8u; }
        if (ctx->pc != 0x1298B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00150698_0x150698(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1298B8u; }
        if (ctx->pc != 0x1298B8u) { return; }
    }
    ctx->pc = 0x1298B8u;
    // 0x1298b8: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1298b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1298bc: 0xc05420c  jal         func_150830
    ctx->pc = 0x1298BCu;
    SET_GPR_U32(ctx, 31, 0x1298C4u);
    ctx->pc = 0x1298C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1298BCu;
            // 0x1298c0: 0x8c8500d8  lw          $a1, 0xD8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x150830u;
    if (runtime->hasFunction(0x150830u)) {
        auto targetFn = runtime->lookupFunction(0x150830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1298C4u; }
        if (ctx->pc != 0x1298C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_150830_0x1508a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1298C4u; }
        if (ctx->pc != 0x1298C4u) { return; }
    }
    ctx->pc = 0x1298C4u;
    // 0x1298c4: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x1298c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x1298c8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1298c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1298cc: 0x8c83bde4  lw          $v1, -0x421C($a0)
    ctx->pc = 0x1298ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294950372)));
    // 0x1298d0: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x1298d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x1298d4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1298d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x1298d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1298d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1298dc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1298dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1298e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1298e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1298e4: 0xac83bde4  sw          $v1, -0x421C($a0)
    ctx->pc = 0x1298e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294950372), GPR_U32(ctx, 3));
    // 0x1298e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1298E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1298ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1298E8u;
            // 0x1298ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x129858u: goto label_129858;
            case 0x12985Cu: goto label_12985c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1298F0u;
}
