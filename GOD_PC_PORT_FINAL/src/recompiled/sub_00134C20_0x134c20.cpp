#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00134C20
// Address: 0x134c20 - 0x135358
void sub_00134C20_0x134c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00134C20_0x134c20");
#endif

    ctx->pc = 0x134c20u;

    // 0x134c20: 0x27bdfbe0  addiu       $sp, $sp, -0x420
    ctx->pc = 0x134c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966240));
    // 0x134c24: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x134c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x134c28: 0x7fb303d0  sq          $s3, 0x3D0($sp)
    ctx->pc = 0x134c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 976), GPR_VEC(ctx, 19));
    // 0x134c2c: 0x7fb503b0  sq          $s5, 0x3B0($sp)
    ctx->pc = 0x134c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 944), GPR_VEC(ctx, 21));
    // 0x134c30: 0x27b30080  addiu       $s3, $sp, 0x80
    ctx->pc = 0x134c30u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x134c34: 0x7fb603a0  sq          $s6, 0x3A0($sp)
    ctx->pc = 0x134c34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 928), GPR_VEC(ctx, 22));
    // 0x134c38: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x134c38u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134c3c: 0x7fb00400  sq          $s0, 0x400($sp)
    ctx->pc = 0x134c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1024), GPR_VEC(ctx, 16));
    // 0x134c40: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x134c40u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134c44: 0x7fb103f0  sq          $s1, 0x3F0($sp)
    ctx->pc = 0x134c44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1008), GPR_VEC(ctx, 17));
    // 0x134c48: 0x7fb203e0  sq          $s2, 0x3E0($sp)
    ctx->pc = 0x134c48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 992), GPR_VEC(ctx, 18));
    // 0x134c4c: 0x7fb403c0  sq          $s4, 0x3C0($sp)
    ctx->pc = 0x134c4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 960), GPR_VEC(ctx, 20));
    // 0x134c50: 0x7fb70390  sq          $s7, 0x390($sp)
    ctx->pc = 0x134c50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 912), GPR_VEC(ctx, 23));
    // 0x134c54: 0xffbf0380  sd          $ra, 0x380($sp)
    ctx->pc = 0x134c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 896), GPR_U64(ctx, 31));
    // 0x134c58: 0xe7b40410  swc1        $f20, 0x410($sp)
    ctx->pc = 0x134c58u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1040), bits); }
    // 0x134c5c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x134c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x134c60: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x134c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x134c64: 0x0  nop
    ctx->pc = 0x134c64u;
    // NOP
label_134c68:
    // 0x134c68: 0x0  nop
    ctx->pc = 0x134c68u;
    // NOP
    // 0x134c6c: 0x0  nop
    ctx->pc = 0x134c6cu;
    // NOP
    // 0x134c70: 0x0  nop
    ctx->pc = 0x134c70u;
    // NOP
    // 0x134c74: 0x0  nop
    ctx->pc = 0x134c74u;
    // NOP
    // 0x134c78: 0x0  nop
    ctx->pc = 0x134c78u;
    // NOP
    // 0x134c7c: 0x5462fffa  bnel        $v1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x134C7Cu;
    {
        const bool branch_taken_0x134c7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x134c7c) {
            ctx->pc = 0x134C80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x134C7Cu;
            // 0x134c80: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x134C68u;
            runtime->cooperativeGuestYield();
            goto label_134c68;
        }
    }
    ctx->pc = 0x134C84u;
    // 0x134c84: 0x26b70024  addiu       $s7, $s5, 0x24
    ctx->pc = 0x134c84u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), 36));
    // 0x134c88: 0xae630080  sw          $v1, 0x80($s3)
    ctx->pc = 0x134c88u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 128), GPR_U32(ctx, 3));
    // 0x134c8c: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x134c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x134c90: 0xafa00104  sw          $zero, 0x104($sp)
    ctx->pc = 0x134c90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
    // 0x134c94: 0x8c4400b4  lw          $a0, 0xB4($v0)
    ctx->pc = 0x134c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x134c98: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x134C98u;
    {
        const bool branch_taken_0x134c98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x134C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134C98u;
            // 0x134c9c: 0x8fa20100  lw          $v0, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134c98) {
            ctx->pc = 0x134CECu;
            goto label_134cec;
        }
    }
    ctx->pc = 0x134CA0u;
    // 0x134ca0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x134ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x134ca4: 0x10440010  beq         $v0, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x134CA4u;
    {
        const bool branch_taken_0x134ca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x134CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134CA4u;
            // 0x134ca8: 0x8fa20100  lw          $v0, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134ca4) {
            ctx->pc = 0x134CE8u;
            goto label_134ce8;
        }
    }
    ctx->pc = 0x134CACu;
    // 0x134cac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x134cacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x134cb0: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x134cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x134cb4: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x134cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x134cb8: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x134cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x134cbc: 0x6ba20117  ldl         $v0, 0x117($sp)
    ctx->pc = 0x134cbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x134cc0: 0x6fa20110  ldr         $v0, 0x110($sp)
    ctx->pc = 0x134cc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x134cc4: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x134cc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x134cc8: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x134cc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x134ccc: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x134cccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x134cd0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x134cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x134cd4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x134cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x134cd8: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x134cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x134cdc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x134cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x134ce0: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x134ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x134ce4: 0x0  nop
    ctx->pc = 0x134ce4u;
    // NOP
label_134ce8:
    // 0x134ce8: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x134ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_134cec:
    // 0x134cec: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x134cecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x134cf0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x134cf0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x134cf4: 0x50400120  beql        $v0, $zero, . + 4 + (0x120 << 2)
    ctx->pc = 0x134CF4u;
    {
        const bool branch_taken_0x134cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x134cf4) {
            ctx->pc = 0x134CF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x134CF4u;
            // 0x134cf8: 0x8ea30028  lw          $v1, 0x28($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x135178u;
            goto label_135178;
        }
    }
    ctx->pc = 0x134CFCu;
    // 0x134cfc: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x134cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_134d00:
    // 0x134d00: 0x8fa70100  lw          $a3, 0x100($sp)
    ctx->pc = 0x134d00u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x134d04: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x134d04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x134d08: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x134d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x134d0c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x134d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x134d10: 0x8c510008  lw          $s1, 0x8($v0)
    ctx->pc = 0x134d10u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x134d14: 0x2632021  addu        $a0, $s3, $v1
    ctx->pc = 0x134d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x134d18: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x134d18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x134d1c: 0x8fa30104  lw          $v1, 0x104($sp)
    ctx->pc = 0x134d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x134d20: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x134d20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x134d24: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x134D24u;
    {
        const bool branch_taken_0x134d24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x134D28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134D24u;
            // 0x134d28: 0x8c4500b4  lw          $a1, 0xB4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134d24) {
            ctx->pc = 0x134D78u;
            goto label_134d78;
        }
    }
    ctx->pc = 0x134D2Cu;
    // 0x134d2c: 0x50a00013  beql        $a1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x134D2Cu;
    {
        const bool branch_taken_0x134d2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x134d2c) {
            ctx->pc = 0x134D30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x134D2Cu;
            // 0x134d30: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x134D7Cu;
            goto label_134d7c;
        }
    }
    ctx->pc = 0x134D34u;
    // 0x134d34: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x134d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x134d38: 0x1045000f  beq         $v0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x134D38u;
    {
        const bool branch_taken_0x134d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x134D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134D38u;
            // 0x134d3c: 0x24e30001  addiu       $v1, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134d38) {
            ctx->pc = 0x134D78u;
            goto label_134d78;
        }
    }
    ctx->pc = 0x134D40u;
    // 0x134d40: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x134d40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x134d44: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x134d44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
    // 0x134d48: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x134d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x134d4c: 0x6ba80127  ldl         $t0, 0x127($sp)
    ctx->pc = 0x134d4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x134d50: 0x6fa80120  ldr         $t0, 0x120($sp)
    ctx->pc = 0x134d50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x134d54: 0xb0480007  sdl         $t0, 0x7($v0)
    ctx->pc = 0x134d54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x134d58: 0xb4480000  sdr         $t0, 0x0($v0)
    ctx->pc = 0x134d58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x134d5c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x134d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x134d60: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x134d60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x134d64: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x134d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x134d68: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x134d68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x134d6c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x134d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x134d70: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x134D70u;
    {
        const bool branch_taken_0x134d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134D74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134D70u;
            // 0x134d74: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134d70) {
            ctx->pc = 0x134DC4u;
            goto label_134dc4;
        }
    }
    ctx->pc = 0x134D78u;
label_134d78:
    // 0x134d78: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x134d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_134d7c:
    // 0x134d7c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x134d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x134d80: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x134D80u;
    {
        const bool branch_taken_0x134d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x134D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134D80u;
            // 0x134d84: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134d80) {
            ctx->pc = 0x134DC4u;
            goto label_134dc4;
        }
    }
    ctx->pc = 0x134D88u;
    // 0x134d88: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x134d88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x134d8c: 0x0  nop
    ctx->pc = 0x134d8cu;
    // NOP
label_134d90:
    // 0x134d90: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x134d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x134d94: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x134d94u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x134d98: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x134d98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x134d9c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x134D9Cu;
    {
        const bool branch_taken_0x134d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134D9Cu;
            // 0x134da0: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134d9c) {
            ctx->pc = 0x134DC0u;
            goto label_134dc0;
        }
    }
    ctx->pc = 0x134DA4u;
    // 0x134da4: 0x2622021  addu        $a0, $s3, $v0
    ctx->pc = 0x134da4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x134da8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x134da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x134dac: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x134dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x134db0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x134db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x134db4: 0x1043fff6  beq         $v0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x134DB4u;
    {
        const bool branch_taken_0x134db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x134DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134DB4u;
            // 0x134db8: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134db4) {
            ctx->pc = 0x134D90u;
            runtime->cooperativeGuestYield();
            goto label_134d90;
        }
    }
    ctx->pc = 0x134DBCu;
    // 0x134dbc: 0x0  nop
    ctx->pc = 0x134dbcu;
    // NOP
label_134dc0:
    // 0x134dc0: 0xafa50100  sw          $a1, 0x100($sp)
    ctx->pc = 0x134dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 5));
label_134dc4:
    // 0x134dc4: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x134dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x134dc8: 0x144000e7  bnez        $v0, . + 4 + (0xE7 << 2)
    ctx->pc = 0x134DC8u;
    {
        const bool branch_taken_0x134dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x134DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134DC8u;
            // 0x134dcc: 0xafa00104  sw          $zero, 0x104($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134dc8) {
            ctx->pc = 0x135168u;
            goto label_135168;
        }
    }
    ctx->pc = 0x134DD0u;
    // 0x134dd0: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x134dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x134dd4: 0x84500060  lh          $s0, 0x60($v0)
    ctx->pc = 0x134dd4u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x134dd8: 0x60000e3  bltz        $s0, . + 4 + (0xE3 << 2)
    ctx->pc = 0x134DD8u;
    {
        const bool branch_taken_0x134dd8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x134DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134DD8u;
            // 0x134ddc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134dd8) {
            ctx->pc = 0x135168u;
            goto label_135168;
        }
    }
    ctx->pc = 0x134DE0u;
    // 0x134de0: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x134de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x134de4: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x134de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x134de8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x134de8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x134dec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x134decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_134df0:
    // 0x134df0: 0x0  nop
    ctx->pc = 0x134df0u;
    // NOP
    // 0x134df4: 0x0  nop
    ctx->pc = 0x134df4u;
    // NOP
    // 0x134df8: 0x0  nop
    ctx->pc = 0x134df8u;
    // NOP
    // 0x134dfc: 0x0  nop
    ctx->pc = 0x134dfcu;
    // NOP
    // 0x134e00: 0x0  nop
    ctx->pc = 0x134e00u;
    // NOP
    // 0x134e04: 0x5482fffa  bnel        $a0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x134E04u;
    {
        const bool branch_taken_0x134e04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x134e04) {
            ctx->pc = 0x134E08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x134E04u;
            // 0x134e08: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x134DF0u;
            runtime->cooperativeGuestYield();
            goto label_134df0;
        }
    }
    ctx->pc = 0x134E0Cu;
    // 0x134e0c: 0x8ee20004  lw          $v0, 0x4($s7)
    ctx->pc = 0x134e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x134e10: 0xaca40080  sw          $a0, 0x80($a1)
    ctx->pc = 0x134e10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 4));
    // 0x134e14: 0x8c4400b4  lw          $a0, 0xB4($v0)
    ctx->pc = 0x134e14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x134e18: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x134E18u;
    {
        const bool branch_taken_0x134e18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x134E1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134E18u;
            // 0x134e1c: 0xafa001b4  sw          $zero, 0x1B4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134e18) {
            ctx->pc = 0x134E68u;
            goto label_134e68;
        }
    }
    ctx->pc = 0x134E20u;
    // 0x134e20: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x134e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x134e24: 0x10440010  beq         $v0, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x134E24u;
    {
        const bool branch_taken_0x134e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x134E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134E24u;
            // 0x134e28: 0x8fa201b0  lw          $v0, 0x1B0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134e24) {
            ctx->pc = 0x134E68u;
            goto label_134e68;
        }
    }
    ctx->pc = 0x134E2Cu;
    // 0x134e2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x134e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x134e30: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x134e30u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x134e34: 0xafa201b0  sw          $v0, 0x1B0($sp)
    ctx->pc = 0x134e34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
    // 0x134e38: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x134e38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x134e3c: 0x6ba701c7  ldl         $a3, 0x1C7($sp)
    ctx->pc = 0x134e3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 455); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x134e40: 0x6fa701c0  ldr         $a3, 0x1C0($sp)
    ctx->pc = 0x134e40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 448); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x134e44: 0xb0670007  sdl         $a3, 0x7($v1)
    ctx->pc = 0x134e44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x134e48: 0xb4670000  sdr         $a3, 0x0($v1)
    ctx->pc = 0x134e48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x134e4c: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x134e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x134e50: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x134e50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x134e54: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x134e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x134e58: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x134e58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x134e5c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x134e5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x134e60: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x134e60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x134e64: 0x0  nop
    ctx->pc = 0x134e64u;
    // NOP
label_134e68:
    // 0x134e68: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x134e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x134e6c: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x134e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x134e70: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x134e70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x134e74: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x134E74u;
    {
        const bool branch_taken_0x134e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x134e74) {
            ctx->pc = 0x134F68u;
            goto label_134f68;
        }
    }
    ctx->pc = 0x134E7Cu;
    // 0x134e7c: 0x0  nop
    ctx->pc = 0x134e7cu;
    // NOP
label_134e80:
    // 0x134e80: 0x27a70130  addiu       $a3, $sp, 0x130
    ctx->pc = 0x134e80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x134e84: 0x8fa801b0  lw          $t0, 0x1B0($sp)
    ctx->pc = 0x134e84u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x134e88: 0x810c0  sll         $v0, $t0, 3
    ctx->pc = 0x134e88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x134e8c: 0xe22021  addu        $a0, $a3, $v0
    ctx->pc = 0x134e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x134e90: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x134e90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x134e94: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x134e94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x134e98: 0x10b10005  beq         $a1, $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x134E98u;
    {
        const bool branch_taken_0x134e98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 17));
        ctx->pc = 0x134E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134E98u;
            // 0x134e9c: 0x3203ffff  andi        $v1, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x134e98) {
            ctx->pc = 0x134EB0u;
            goto label_134eb0;
        }
    }
    ctx->pc = 0x134EA0u;
    // 0x134ea0: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x134ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x134ea4: 0x94420024  lhu         $v0, 0x24($v0)
    ctx->pc = 0x134ea4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x134ea8: 0x5043002f  beql        $v0, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x134EA8u;
    {
        const bool branch_taken_0x134ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x134ea8) {
            ctx->pc = 0x134EACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x134EA8u;
            // 0x134eac: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x134F68u;
            goto label_134f68;
        }
    }
    ctx->pc = 0x134EB0u;
label_134eb0:
    // 0x134eb0: 0x8fa201b4  lw          $v0, 0x1B4($sp)
    ctx->pc = 0x134eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 436)));
    // 0x134eb4: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x134eb4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134eb8: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x134EB8u;
    {
        const bool branch_taken_0x134eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x134EBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134EB8u;
            // 0x134ebc: 0x8ca500b4  lw          $a1, 0xB4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134eb8) {
            ctx->pc = 0x134F10u;
            goto label_134f10;
        }
    }
    ctx->pc = 0x134EC0u;
    // 0x134ec0: 0x50a00014  beql        $a1, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x134EC0u;
    {
        const bool branch_taken_0x134ec0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x134ec0) {
            ctx->pc = 0x134EC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x134EC0u;
            // 0x134ec4: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x134F14u;
            goto label_134f14;
        }
    }
    ctx->pc = 0x134EC8u;
    // 0x134ec8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x134ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x134ecc: 0x50450011  beql        $v0, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x134ECCu;
    {
        const bool branch_taken_0x134ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x134ecc) {
            ctx->pc = 0x134ED0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x134ECCu;
            // 0x134ed0: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x134F14u;
            goto label_134f14;
        }
    }
    ctx->pc = 0x134ED4u;
    // 0x134ed4: 0x25030001  addiu       $v1, $t0, 0x1
    ctx->pc = 0x134ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x134ed8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x134ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x134edc: 0xafa301b0  sw          $v1, 0x1B0($sp)
    ctx->pc = 0x134edcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 3));
    // 0x134ee0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x134ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x134ee4: 0x6ba801d7  ldl         $t0, 0x1D7($sp)
    ctx->pc = 0x134ee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 471); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x134ee8: 0x6fa801d0  ldr         $t0, 0x1D0($sp)
    ctx->pc = 0x134ee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 464); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x134eec: 0xb0480007  sdl         $t0, 0x7($v0)
    ctx->pc = 0x134eecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x134ef0: 0xb4480000  sdr         $t0, 0x0($v0)
    ctx->pc = 0x134ef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x134ef4: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x134ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x134ef8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x134ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x134efc: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x134efcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x134f00: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x134f00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x134f04: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x134f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x134f08: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x134F08u;
    {
        const bool branch_taken_0x134f08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134F0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134F08u;
            // 0x134f0c: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134f08) {
            ctx->pc = 0x134F5Cu;
            goto label_134f5c;
        }
    }
    ctx->pc = 0x134F10u;
label_134f10:
    // 0x134f10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x134f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_134f14:
    // 0x134f14: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x134f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x134f18: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x134F18u;
    {
        const bool branch_taken_0x134f18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x134F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134F18u;
            // 0x134f1c: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134f18) {
            ctx->pc = 0x134F5Cu;
            goto label_134f5c;
        }
    }
    ctx->pc = 0x134F20u;
    // 0x134f20: 0x8fa501b0  lw          $a1, 0x1B0($sp)
    ctx->pc = 0x134f20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x134f24: 0x0  nop
    ctx->pc = 0x134f24u;
    // NOP
label_134f28:
    // 0x134f28: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x134f28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x134f2c: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x134f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x134f30: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x134f30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x134f34: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x134F34u;
    {
        const bool branch_taken_0x134f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134F34u;
            // 0x134f38: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134f34) {
            ctx->pc = 0x134F58u;
            goto label_134f58;
        }
    }
    ctx->pc = 0x134F3Cu;
    // 0x134f3c: 0xe22021  addu        $a0, $a3, $v0
    ctx->pc = 0x134f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x134f40: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x134f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x134f44: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x134f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x134f48: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x134f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x134f4c: 0x1043fff6  beq         $v0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x134F4Cu;
    {
        const bool branch_taken_0x134f4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x134F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134F4Cu;
            // 0x134f50: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134f4c) {
            ctx->pc = 0x134F28u;
            runtime->cooperativeGuestYield();
            goto label_134f28;
        }
    }
    ctx->pc = 0x134F54u;
    // 0x134f54: 0x0  nop
    ctx->pc = 0x134f54u;
    // NOP
label_134f58:
    // 0x134f58: 0xafa501b0  sw          $a1, 0x1B0($sp)
    ctx->pc = 0x134f58u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 5));
label_134f5c:
    // 0x134f5c: 0x8fa201b0  lw          $v0, 0x1B0($sp)
    ctx->pc = 0x134f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x134f60: 0x441ffc7  bgez        $v0, . + 4 + (-0x39 << 2)
    ctx->pc = 0x134F60u;
    {
        const bool branch_taken_0x134f60 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x134F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134F60u;
            // 0x134f64: 0xafa001b4  sw          $zero, 0x1B4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134f60) {
            ctx->pc = 0x134E80u;
            runtime->cooperativeGuestYield();
            goto label_134e80;
        }
    }
    ctx->pc = 0x134F68u;
label_134f68:
    // 0x134f68: 0x56400015  bnel        $s2, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x134F68u;
    {
        const bool branch_taken_0x134f68 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x134f68) {
            ctx->pc = 0x134F6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x134F68u;
            // 0x134f6c: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x134FC0u;
            goto label_134fc0;
        }
    }
    ctx->pc = 0x134F70u;
    // 0x134f70: 0xc05d656  jal         func_175958
    ctx->pc = 0x134F70u;
    SET_GPR_U32(ctx, 31, 0x134F78u);
    ctx->pc = 0x175958u;
    if (runtime->hasFunction(0x175958u)) {
        auto targetFn = runtime->lookupFunction(0x175958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134F78u; }
        if (ctx->pc != 0x134F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175958_0x175978(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134F78u; }
        if (ctx->pc != 0x134F78u) { return; }
    }
    ctx->pc = 0x134F78u;
    // 0x134f78: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x134f78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x134f7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x134f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134f80: 0xc05d6ac  jal         func_175AB0
    ctx->pc = 0x134F80u;
    SET_GPR_U32(ctx, 31, 0x134F88u);
    ctx->pc = 0x134F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134F80u;
            // 0x134f84: 0x24a515f8  addiu       $a1, $a1, 0x15F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175AB0u;
    if (runtime->hasFunction(0x175AB0u)) {
        auto targetFn = runtime->lookupFunction(0x175AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134F88u; }
        if (ctx->pc != 0x134F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00175AB0_0x175ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134F88u; }
        if (ctx->pc != 0x134F88u) { return; }
    }
    ctx->pc = 0x134F88u;
    // 0x134f88: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x134F88u;
    {
        const bool branch_taken_0x134f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x134F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134F88u;
            // 0x134f8c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134f88) {
            ctx->pc = 0x134F94u;
            goto label_134f94;
        }
    }
    ctx->pc = 0x134F90u;
    // 0x134f90: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x134f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_134f94:
    // 0x134f94: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x134F94u;
    {
        const bool branch_taken_0x134f94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x134f94) {
            ctx->pc = 0x134F98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x134F94u;
            // 0x134f98: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x134FC0u;
            goto label_134fc0;
        }
    }
    ctx->pc = 0x134F9Cu;
    // 0x134f9c: 0x8ea50088  lw          $a1, 0x88($s5)
    ctx->pc = 0x134f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
    // 0x134fa0: 0xc04d2a2  jal         func_134A88
    ctx->pc = 0x134FA0u;
    SET_GPR_U32(ctx, 31, 0x134FA8u);
    ctx->pc = 0x134FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134FA0u;
            // 0x134fa4: 0x3206ffff  andi        $a2, $s0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134A88u;
    if (runtime->hasFunction(0x134A88u)) {
        auto targetFn = runtime->lookupFunction(0x134A88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134FA8u; }
        if (ctx->pc != 0x134FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_134a88_0x134c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134FA8u; }
        if (ctx->pc != 0x134FA8u) { return; }
    }
    ctx->pc = 0x134FA8u;
    // 0x134fa8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x134fa8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134fac: 0x161080  sll         $v0, $s6, 2
    ctx->pc = 0x134facu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x134fb0: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x134fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x134fb4: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x134fb4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x134fb8: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x134fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x134fbc: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x134fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_134fc0:
    // 0x134fc0: 0x94540062  lhu         $s4, 0x62($v0)
    ctx->pc = 0x134fc0u;
    SET_GPR_U32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 98)));
    // 0x134fc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x134fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134fc8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x134fc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134fcc: 0xc04c518  jal         func_131460
    ctx->pc = 0x134FCCu;
    SET_GPR_U32(ctx, 31, 0x134FD4u);
    ctx->pc = 0x134FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x134FCCu;
            // 0x134fd0: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131460u;
    if (runtime->hasFunction(0x131460u)) {
        auto targetFn = runtime->lookupFunction(0x131460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134FD4u; }
        if (ctx->pc != 0x134FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131460_0x131460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x134FD4u; }
        if (ctx->pc != 0x134FD4u) { return; }
    }
    ctx->pc = 0x134FD4u;
    // 0x134fd4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x134fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x134fd8: 0x8c42ec64  lw          $v0, -0x139C($v0)
    ctx->pc = 0x134fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962276)));
    // 0x134fdc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x134fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x134fe0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x134fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x134fe4: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x134fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x134fe8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x134FE8u;
    {
        const bool branch_taken_0x134fe8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x134FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134FE8u;
            // 0x134fec: 0x2482ffec  addiu       $v0, $a0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134fe8) {
            ctx->pc = 0x135000u;
            goto label_135000;
        }
    }
    ctx->pc = 0x134FF0u;
    // 0x134ff0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x134ff0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x134ff4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x134FF4u;
    {
        const bool branch_taken_0x134ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x134FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x134FF4u;
            // 0x134ff8: 0x44800b  movn        $s0, $v0, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x134ff4) {
            ctx->pc = 0x135004u;
            goto label_135004;
        }
    }
    ctx->pc = 0x134FFCu;
    // 0x134ffc: 0x0  nop
    ctx->pc = 0x134ffcu;
    // NOP
label_135000:
    // 0x135000: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x135000u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_135004:
    // 0x135004: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x135004u;
    {
        const bool branch_taken_0x135004 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x135008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135004u;
            // 0x135008: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135004) {
            ctx->pc = 0x13502Cu;
            goto label_13502c;
        }
    }
    ctx->pc = 0x13500Cu;
    // 0x13500c: 0xc614003c  lwc1        $f20, 0x3C($s0)
    ctx->pc = 0x13500cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x135010: 0xc440c658  lwc1        $f0, -0x39A8($v0)
    ctx->pc = 0x135010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x135014: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x135014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135018: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x135018u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x13501c: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x13501cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = copysignf(INFINITY, ctx->f[20] * 0.0f); } else ctx->f[20] = ctx->f[20] / ctx->f[0];
    // 0x135020: 0xc040622  jal         func_101888
    ctx->pc = 0x135020u;
    SET_GPR_U32(ctx, 31, 0x135028u);
    ctx->pc = 0x135024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135020u;
            // 0x135024: 0xae00003c  sw          $zero, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101888u;
    if (runtime->hasFunction(0x101888u)) {
        auto targetFn = runtime->lookupFunction(0x101888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135028u; }
        if (ctx->pc != 0x135028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101888_0x101888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135028u; }
        if (ctx->pc != 0x135028u) { return; }
    }
    ctx->pc = 0x135028u;
    // 0x135028: 0xe614003c  swc1        $f20, 0x3C($s0)
    ctx->pc = 0x135028u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
label_13502c:
    // 0x13502c: 0x8e500104  lw          $s0, 0x104($s2)
    ctx->pc = 0x13502cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
    // 0x135030: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x135030u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x135034: 0xde45bdf8  ld          $a1, -0x4208($s2)
    ctx->pc = 0x135034u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 18), 4294950392)));
    // 0x135038: 0xde020040  ld          $v0, 0x40($s0)
    ctx->pc = 0x135038u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x13503c: 0x50450004  beql        $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13503Cu;
    {
        const bool branch_taken_0x13503c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x13503c) {
            ctx->pc = 0x135040u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13503Cu;
            // 0x135040: 0x8e03008c  lw          $v1, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x135050u;
            goto label_135050;
        }
    }
    ctx->pc = 0x135044u;
    // 0x135044: 0xc04da64  jal         func_136990
    ctx->pc = 0x135044u;
    SET_GPR_U32(ctx, 31, 0x13504Cu);
    ctx->pc = 0x135048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135044u;
            // 0x135048: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13504Cu; }
        if (ctx->pc != 0x13504Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13504Cu; }
        if (ctx->pc != 0x13504Cu) { return; }
    }
    ctx->pc = 0x13504Cu;
    // 0x13504c: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x13504cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_135050:
    // 0x135050: 0x141180  sll         $v0, $s4, 6
    ctx->pc = 0x135050u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 6));
    // 0x135054: 0x26260020  addiu       $a2, $s1, 0x20
    ctx->pc = 0x135054u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x135058: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x135058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x13505c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13505cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x135060: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x135060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x135064: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x135064u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x135068: 0x7fa201e0  sq          $v0, 0x1E0($sp)
    ctx->pc = 0x135068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 2));
    // 0x13506c: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x13506cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x135070: 0x7fa201f0  sq          $v0, 0x1F0($sp)
    ctx->pc = 0x135070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 2));
    // 0x135074: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x135074u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x135078: 0x7fa20200  sq          $v0, 0x200($sp)
    ctx->pc = 0x135078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 2));
    // 0x13507c: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x13507cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x135080: 0x7fa20210  sq          $v0, 0x210($sp)
    ctx->pc = 0x135080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 2));
    // 0x135084: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x135084u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x135088: 0x7fa20220  sq          $v0, 0x220($sp)
    ctx->pc = 0x135088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 544), GPR_VEC(ctx, 2));
    // 0x13508c: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x13508cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x135090: 0x7fa20230  sq          $v0, 0x230($sp)
    ctx->pc = 0x135090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 560), GPR_VEC(ctx, 2));
    // 0x135094: 0x78c20020  lq          $v0, 0x20($a2)
    ctx->pc = 0x135094u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x135098: 0x7fa20240  sq          $v0, 0x240($sp)
    ctx->pc = 0x135098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 2));
    // 0x13509c: 0x78c20030  lq          $v0, 0x30($a2)
    ctx->pc = 0x13509cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x1350a0: 0xc0614f6  jal         func_1853D8
    ctx->pc = 0x1350A0u;
    SET_GPR_U32(ctx, 31, 0x1350A8u);
    ctx->pc = 0x1350A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1350A0u;
            // 0x1350a4: 0x7fa20250  sq          $v0, 0x250($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1853D8u;
    if (runtime->hasFunction(0x1853D8u)) {
        auto targetFn = runtime->lookupFunction(0x1853D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1350A8u; }
        if (ctx->pc != 0x1350A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1853d8_0x1855e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1350A8u; }
        if (ctx->pc != 0x1350A8u) { return; }
    }
    ctx->pc = 0x1350A8u;
    // 0x1350a8: 0xdba602a0  lqc2        $vf6, 0x2A0($sp)
    ctx->pc = 0x1350a8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1350ac: 0xdba702b0  lqc2        $vf7, 0x2B0($sp)
    ctx->pc = 0x1350acu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1350b0: 0xdba802c0  lqc2        $vf8, 0x2C0($sp)
    ctx->pc = 0x1350b0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x1350b4: 0xdba402d0  lqc2        $vf4, 0x2D0($sp)
    ctx->pc = 0x1350b4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x1350b8: 0xdba30220  lqc2        $vf3, 0x220($sp)
    ctx->pc = 0x1350b8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 544)));
    // 0x1350bc: 0xdba10230  lqc2        $vf1, 0x230($sp)
    ctx->pc = 0x1350bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x1350c0: 0xdba20240  lqc2        $vf2, 0x240($sp)
    ctx->pc = 0x1350c0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x1350c4: 0xdba50250  lqc2        $vf5, 0x250($sp)
    ctx->pc = 0x1350c4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 592)));
    // 0x1350c8: 0x4be331bc  vmulax.xyzw $ACC, $vf6, $vf3x
    ctx->pc = 0x1350c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1350cc: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x1350ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1350d0: 0x4be340be  vmaddaz.xyzw $ACC, $vf8, $vf3z
    ctx->pc = 0x1350d0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1350d4: 0x4be320cb  vmaddw.xyzw $vf3, $vf4, $vf3w
    ctx->pc = 0x1350d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1350d8: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x1350d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1350dc: 0xfba302e0  sqc2        $vf3, 0x2E0($sp)
    ctx->pc = 0x1350dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x1350e0: 0x4be138bd  vmadday.xyzw $ACC, $vf7, $vf1y
    ctx->pc = 0x1350e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1350e4: 0x4be140be  vmaddaz.xyzw $ACC, $vf8, $vf1z
    ctx->pc = 0x1350e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1350e8: 0x4be1204b  vmaddw.xyzw $vf1, $vf4, $vf1w
    ctx->pc = 0x1350e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x1350ec: 0x4be231bc  vmulax.xyzw $ACC, $vf6, $vf2x
    ctx->pc = 0x1350ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x1350f0: 0xfba102f0  sqc2        $vf1, 0x2F0($sp)
    ctx->pc = 0x1350f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1350f4: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x1350f4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1350f8: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x1350f8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x1350fc: 0x4be2208b  vmaddw.xyzw $vf2, $vf4, $vf2w
    ctx->pc = 0x1350fcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x135100: 0x4be531bc  vmulax.xyzw $ACC, $vf6, $vf5x
    ctx->pc = 0x135100u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x135104: 0xfba20300  sqc2        $vf2, 0x300($sp)
    ctx->pc = 0x135104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x135108: 0x4be538bd  vmadday.xyzw $ACC, $vf7, $vf5y
    ctx->pc = 0x135108u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x13510c: 0x4be540be  vmaddaz.xyzw $ACC, $vf8, $vf5z
    ctx->pc = 0x13510cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x135110: 0x4be5210b  vmaddw.xyzw $vf4, $vf4, $vf5w
    ctx->pc = 0x135110u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x135114: 0xfba40310  sqc2        $vf4, 0x310($sp)
    ctx->pc = 0x135114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x135118: 0xfba30260  sqc2        $vf3, 0x260($sp)
    ctx->pc = 0x135118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 608), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x13511c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13511cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135120: 0xfba10270  sqc2        $vf1, 0x270($sp)
    ctx->pc = 0x135120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 624), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x135124: 0xfba20280  sqc2        $vf2, 0x280($sp)
    ctx->pc = 0x135124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x135128: 0xfba40290  sqc2        $vf4, 0x290($sp)
    ctx->pc = 0x135128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x13512c: 0xfa230020  sqc2        $vf3, 0x20($s1)
    ctx->pc = 0x13512cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x135130: 0xde44bdf8  ld          $a0, -0x4208($s2)
    ctx->pc = 0x135130u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 4294950392)));
    // 0x135134: 0x86230060  lh          $v1, 0x60($s1)
    ctx->pc = 0x135134u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x135138: 0x7ba20270  lq          $v0, 0x270($sp)
    ctx->pc = 0x135138u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x13513c: 0x64840001  daddiu      $a0, $a0, 0x1
    ctx->pc = 0x13513cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
    // 0x135140: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x135140u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x135144: 0x7e220030  sq          $v0, 0x30($s1)
    ctx->pc = 0x135144u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 2));
    // 0x135148: 0x83380a  movz        $a3, $a0, $v1
    ctx->pc = 0x135148u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
    // 0x13514c: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x13514cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135150: 0x7ba20280  lq          $v0, 0x280($sp)
    ctx->pc = 0x135150u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x135154: 0x7e220040  sq          $v0, 0x40($s1)
    ctx->pc = 0x135154u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 2));
    // 0x135158: 0x7ba20290  lq          $v0, 0x290($sp)
    ctx->pc = 0x135158u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x13515c: 0x7e220050  sq          $v0, 0x50($s1)
    ctx->pc = 0x13515cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), GPR_VEC(ctx, 2));
    // 0x135160: 0xfe44bdf8  sd          $a0, -0x4208($s2)
    ctx->pc = 0x135160u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 4294950392), GPR_U64(ctx, 4));
    // 0x135164: 0xfe230068  sd          $v1, 0x68($s1)
    ctx->pc = 0x135164u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 104), GPR_U64(ctx, 3));
label_135168:
    // 0x135168: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x135168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x13516c: 0x441fee4  bgez        $v0, . + 4 + (-0x11C << 2)
    ctx->pc = 0x13516Cu;
    {
        const bool branch_taken_0x13516c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x135170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13516Cu;
            // 0x135170: 0x27a20080  addiu       $v0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13516c) {
            ctx->pc = 0x134D00u;
            runtime->cooperativeGuestYield();
            goto label_134d00;
        }
    }
    ctx->pc = 0x135174u;
    // 0x135174: 0x8ea30028  lw          $v1, 0x28($s5)
    ctx->pc = 0x135174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
label_135178:
    // 0x135178: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x135178u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x13517c: 0xafa00104  sw          $zero, 0x104($sp)
    ctx->pc = 0x13517cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
    // 0x135180: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x135180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x135184: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x135184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x135188: 0x8c6400b4  lw          $a0, 0xB4($v1)
    ctx->pc = 0x135188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 180)));
    // 0x13518c: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x13518Cu;
    {
        const bool branch_taken_0x13518c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x135190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13518Cu;
            // 0x135190: 0x8fa20100  lw          $v0, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13518c) {
            ctx->pc = 0x1351DCu;
            goto label_1351dc;
        }
    }
    ctx->pc = 0x135194u;
    // 0x135194: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x135194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x135198: 0x1044000f  beq         $v0, $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x135198u;
    {
        const bool branch_taken_0x135198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x13519Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135198u;
            // 0x13519c: 0x8fa20100  lw          $v0, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135198) {
            ctx->pc = 0x1351D8u;
            goto label_1351d8;
        }
    }
    ctx->pc = 0x1351A0u;
    // 0x1351a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1351a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1351a4: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1351a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1351a8: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x1351a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x1351ac: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1351acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1351b0: 0x6ba80327  ldl         $t0, 0x327($sp)
    ctx->pc = 0x1351b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 807); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1351b4: 0x6fa80320  ldr         $t0, 0x320($sp)
    ctx->pc = 0x1351b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 800); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1351b8: 0xb0680007  sdl         $t0, 0x7($v1)
    ctx->pc = 0x1351b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1351bc: 0xb4680000  sdr         $t0, 0x0($v1)
    ctx->pc = 0x1351bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1351c0: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1351c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1351c4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1351c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1351c8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1351c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1351cc: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1351ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1351d0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1351d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1351d4: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1351d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_1351d8:
    // 0x1351d8: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1351d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_1351dc:
    // 0x1351dc: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x1351dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x1351e0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1351e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1351e4: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x1351E4u;
    {
        const bool branch_taken_0x1351e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1351E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1351E4u;
            // 0x1351e8: 0x27a20080  addiu       $v0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1351e4) {
            ctx->pc = 0x1352E4u;
            goto label_1352e4;
        }
    }
    ctx->pc = 0x1351ECu;
    // 0x1351ec: 0x0  nop
    ctx->pc = 0x1351ecu;
    // NOP
label_1351f0:
    // 0x1351f0: 0x8fa80100  lw          $t0, 0x100($sp)
    ctx->pc = 0x1351f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1351f4: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x1351f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x1351f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1351f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1351fc: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1351fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x135200: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x135200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x135204: 0x2032821  addu        $a1, $s0, $v1
    ctx->pc = 0x135204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x135208: 0x8ca70004  lw          $a3, 0x4($a1)
    ctx->pc = 0x135208u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x13520c: 0x8fa30104  lw          $v1, 0x104($sp)
    ctx->pc = 0x13520cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x135210: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x135210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x135214: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x135214u;
    {
        const bool branch_taken_0x135214 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x135218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135214u;
            // 0x135218: 0x8c4600b4  lw          $a2, 0xB4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135214) {
            ctx->pc = 0x135268u;
            goto label_135268;
        }
    }
    ctx->pc = 0x13521Cu;
    // 0x13521c: 0x50c00013  beql        $a2, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x13521Cu;
    {
        const bool branch_taken_0x13521c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x13521c) {
            ctx->pc = 0x135220u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13521Cu;
            // 0x135220: 0x8ce20000  lw          $v0, 0x0($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13526Cu;
            goto label_13526c;
        }
    }
    ctx->pc = 0x135224u;
    // 0x135224: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x135224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x135228: 0x1046000f  beq         $v0, $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x135228u;
    {
        const bool branch_taken_0x135228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x13522Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135228u;
            // 0x13522c: 0x25030001  addiu       $v1, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135228) {
            ctx->pc = 0x135268u;
            goto label_135268;
        }
    }
    ctx->pc = 0x135230u;
    // 0x135230: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x135230u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x135234: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x135234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
    // 0x135238: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x135238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x13523c: 0x6ba70337  ldl         $a3, 0x337($sp)
    ctx->pc = 0x13523cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 823); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x135240: 0x6fa70330  ldr         $a3, 0x330($sp)
    ctx->pc = 0x135240u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 816); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x135244: 0xb0470007  sdl         $a3, 0x7($v0)
    ctx->pc = 0x135244u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x135248: 0xb4470000  sdr         $a3, 0x0($v0)
    ctx->pc = 0x135248u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13524c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x13524cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x135250: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x135250u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x135254: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x135254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x135258: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x135258u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
    // 0x13525c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x13525cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x135260: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x135260u;
    {
        const bool branch_taken_0x135260 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135260u;
            // 0x135264: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135260) {
            ctx->pc = 0x1352B4u;
            goto label_1352b4;
        }
    }
    ctx->pc = 0x135268u;
label_135268:
    // 0x135268: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x135268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_13526c:
    // 0x13526c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x13526cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x135270: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x135270u;
    {
        const bool branch_taken_0x135270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x135274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135270u;
            // 0x135274: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135270) {
            ctx->pc = 0x1352B4u;
            goto label_1352b4;
        }
    }
    ctx->pc = 0x135278u;
    // 0x135278: 0x8fa60100  lw          $a2, 0x100($sp)
    ctx->pc = 0x135278u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x13527c: 0x0  nop
    ctx->pc = 0x13527cu;
    // NOP
label_135280:
    // 0x135280: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x135280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x135284: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x135284u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x135288: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x135288u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x13528c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13528Cu;
    {
        const bool branch_taken_0x13528c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x135290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13528Cu;
            // 0x135290: 0x610c0  sll         $v0, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13528c) {
            ctx->pc = 0x1352B0u;
            goto label_1352b0;
        }
    }
    ctx->pc = 0x135294u;
    // 0x135294: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x135294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x135298: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x135298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x13529c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x13529cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1352a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1352a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1352a4: 0x1043fff6  beq         $v0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1352A4u;
    {
        const bool branch_taken_0x1352a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1352A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1352A4u;
            // 0x1352a8: 0xaca20004  sw          $v0, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1352a4) {
            ctx->pc = 0x135280u;
            runtime->cooperativeGuestYield();
            goto label_135280;
        }
    }
    ctx->pc = 0x1352ACu;
    // 0x1352ac: 0x0  nop
    ctx->pc = 0x1352acu;
    // NOP
label_1352b0:
    // 0x1352b0: 0xafa60100  sw          $a2, 0x100($sp)
    ctx->pc = 0x1352b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 6));
label_1352b4:
    // 0x1352b4: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1352b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1352b8: 0x27a50340  addiu       $a1, $sp, 0x340
    ctx->pc = 0x1352b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
    // 0x1352bc: 0xa7a20340  sh          $v0, 0x340($sp)
    ctx->pc = 0x1352bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 832), (uint16_t)GPR_U32(ctx, 2));
    // 0x1352c0: 0xafa00104  sw          $zero, 0x104($sp)
    ctx->pc = 0x1352c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
    // 0x1352c4: 0xafa00344  sw          $zero, 0x344($sp)
    ctx->pc = 0x1352c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 836), GPR_U32(ctx, 0));
    // 0x1352c8: 0xafa00348  sw          $zero, 0x348($sp)
    ctx->pc = 0x1352c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 840), GPR_U32(ctx, 0));
    // 0x1352cc: 0xafa0034c  sw          $zero, 0x34C($sp)
    ctx->pc = 0x1352ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 844), GPR_U32(ctx, 0));
    // 0x1352d0: 0xc04c57c  jal         func_1315F0
    ctx->pc = 0x1352D0u;
    SET_GPR_U32(ctx, 31, 0x1352D8u);
    ctx->pc = 0x1352D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1352D0u;
            // 0x1352d4: 0xafa00350  sw          $zero, 0x350($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 848), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315F0u;
    if (runtime->hasFunction(0x1315F0u)) {
        auto targetFn = runtime->lookupFunction(0x1315F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1352D8u; }
        if (ctx->pc != 0x1352D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001315F0_0x1315f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1352D8u; }
        if (ctx->pc != 0x1352D8u) { return; }
    }
    ctx->pc = 0x1352D8u;
    // 0x1352d8: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1352d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1352dc: 0x441ffc4  bgez        $v0, . + 4 + (-0x3C << 2)
    ctx->pc = 0x1352DCu;
    {
        const bool branch_taken_0x1352dc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1352E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1352DCu;
            // 0x1352e0: 0x27a20080  addiu       $v0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1352dc) {
            ctx->pc = 0x1351F0u;
            runtime->cooperativeGuestYield();
            goto label_1351f0;
        }
    }
    ctx->pc = 0x1352E4u;
label_1352e4:
    // 0x1352e4: 0x1ac00010  blez        $s6, . + 4 + (0x10 << 2)
    ctx->pc = 0x1352E4u;
    {
        const bool branch_taken_0x1352e4 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x1352E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1352E4u;
            // 0x1352e8: 0x2c0882d  daddu       $s1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1352e4) {
            ctx->pc = 0x135328u;
            goto label_135328;
        }
    }
    ctx->pc = 0x1352ECu;
    // 0x1352ec: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x1352ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1352f0: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1352f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x1352f4: 0x0  nop
    ctx->pc = 0x1352f4u;
    // NOP
label_1352f8:
    // 0x1352f8: 0xafa00370  sw          $zero, 0x370($sp)
    ctx->pc = 0x1352f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 880), GPR_U32(ctx, 0));
    // 0x1352fc: 0xa7a20360  sh          $v0, 0x360($sp)
    ctx->pc = 0x1352fcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 864), (uint16_t)GPR_U32(ctx, 2));
    // 0x135300: 0x27a50360  addiu       $a1, $sp, 0x360
    ctx->pc = 0x135300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
    // 0x135304: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x135304u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x135308: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x135308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x13530c: 0xafa00364  sw          $zero, 0x364($sp)
    ctx->pc = 0x13530cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 868), GPR_U32(ctx, 0));
    // 0x135310: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x135310u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x135314: 0xafa00368  sw          $zero, 0x368($sp)
    ctx->pc = 0x135314u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 872), GPR_U32(ctx, 0));
    // 0x135318: 0xc04c57c  jal         func_1315F0
    ctx->pc = 0x135318u;
    SET_GPR_U32(ctx, 31, 0x135320u);
    ctx->pc = 0x13531Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135318u;
            // 0x13531c: 0xafa0036c  sw          $zero, 0x36C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 876), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315F0u;
    if (runtime->hasFunction(0x1315F0u)) {
        auto targetFn = runtime->lookupFunction(0x1315F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135320u; }
        if (ctx->pc != 0x135320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001315F0_0x1315f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135320u; }
        if (ctx->pc != 0x135320u) { return; }
    }
    ctx->pc = 0x135320u;
    // 0x135320: 0x1620fff5  bnez        $s1, . + 4 + (-0xB << 2)
    ctx->pc = 0x135320u;
    {
        const bool branch_taken_0x135320 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x135324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135320u;
            // 0x135324: 0x24020078  addiu       $v0, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135320) {
            ctx->pc = 0x1352F8u;
            runtime->cooperativeGuestYield();
            goto label_1352f8;
        }
    }
    ctx->pc = 0x135328u;
label_135328:
    // 0x135328: 0x7bb00400  lq          $s0, 0x400($sp)
    ctx->pc = 0x135328u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1024)));
    // 0x13532c: 0x7bb103f0  lq          $s1, 0x3F0($sp)
    ctx->pc = 0x13532cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1008)));
    // 0x135330: 0x7bb203e0  lq          $s2, 0x3E0($sp)
    ctx->pc = 0x135330u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 992)));
    // 0x135334: 0x7bb303d0  lq          $s3, 0x3D0($sp)
    ctx->pc = 0x135334u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 976)));
    // 0x135338: 0x7bb403c0  lq          $s4, 0x3C0($sp)
    ctx->pc = 0x135338u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 960)));
    // 0x13533c: 0x7bb503b0  lq          $s5, 0x3B0($sp)
    ctx->pc = 0x13533cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 944)));
    // 0x135340: 0x7bb603a0  lq          $s6, 0x3A0($sp)
    ctx->pc = 0x135340u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 928)));
    // 0x135344: 0x7bb70390  lq          $s7, 0x390($sp)
    ctx->pc = 0x135344u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 912)));
    // 0x135348: 0xdfbf0380  ld          $ra, 0x380($sp)
    ctx->pc = 0x135348u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 896)));
    // 0x13534c: 0xc7b40410  lwc1        $f20, 0x410($sp)
    ctx->pc = 0x13534cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x135350: 0x3e00008  jr          $ra
    ctx->pc = 0x135350u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135350u;
            // 0x135354: 0x27bd0420  addiu       $sp, $sp, 0x420 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x134C68u: goto label_134c68;
            case 0x134CE8u: goto label_134ce8;
            case 0x134CECu: goto label_134cec;
            case 0x134D00u: goto label_134d00;
            case 0x134D78u: goto label_134d78;
            case 0x134D7Cu: goto label_134d7c;
            case 0x134D90u: goto label_134d90;
            case 0x134DC0u: goto label_134dc0;
            case 0x134DC4u: goto label_134dc4;
            case 0x134DF0u: goto label_134df0;
            case 0x134E68u: goto label_134e68;
            case 0x134E80u: goto label_134e80;
            case 0x134EB0u: goto label_134eb0;
            case 0x134F10u: goto label_134f10;
            case 0x134F14u: goto label_134f14;
            case 0x134F28u: goto label_134f28;
            case 0x134F58u: goto label_134f58;
            case 0x134F5Cu: goto label_134f5c;
            case 0x134F68u: goto label_134f68;
            case 0x134F94u: goto label_134f94;
            case 0x134FC0u: goto label_134fc0;
            case 0x135000u: goto label_135000;
            case 0x135004u: goto label_135004;
            case 0x13502Cu: goto label_13502c;
            case 0x135050u: goto label_135050;
            case 0x135168u: goto label_135168;
            case 0x135178u: goto label_135178;
            case 0x1351D8u: goto label_1351d8;
            case 0x1351DCu: goto label_1351dc;
            case 0x1351F0u: goto label_1351f0;
            case 0x135268u: goto label_135268;
            case 0x13526Cu: goto label_13526c;
            case 0x135280u: goto label_135280;
            case 0x1352B0u: goto label_1352b0;
            case 0x1352B4u: goto label_1352b4;
            case 0x1352E4u: goto label_1352e4;
            case 0x1352F8u: goto label_1352f8;
            case 0x135328u: goto label_135328;
            default: break;
        }
        return;
    }
    ctx->pc = 0x135358u;
}
