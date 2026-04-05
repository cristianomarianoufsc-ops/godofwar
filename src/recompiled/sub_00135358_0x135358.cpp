#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00135358
// Address: 0x135358 - 0x135cc8
void sub_00135358_0x135358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00135358_0x135358");
#endif

    ctx->pc = 0x135358u;

label_135358:
    // 0x135358: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x135358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
    // 0x13535c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x13535cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135360: 0x7fb20150  sq          $s2, 0x150($sp)
    ctx->pc = 0x135360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 18));
    // 0x135364: 0x27a70080  addiu       $a3, $sp, 0x80
    ctx->pc = 0x135364u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x135368: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x135368u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13536c: 0x7fb00170  sq          $s0, 0x170($sp)
    ctx->pc = 0x13536cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 16));
    // 0x135370: 0x7fb10160  sq          $s1, 0x160($sp)
    ctx->pc = 0x135370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 17));
    // 0x135374: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x135374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x135378: 0xffbf0140  sd          $ra, 0x140($sp)
    ctx->pc = 0x135378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 31));
    // 0x13537c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x13537cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x135380: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x135380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x135384: 0x0  nop
    ctx->pc = 0x135384u;
    // NOP
label_135388:
    // 0x135388: 0x0  nop
    ctx->pc = 0x135388u;
    // NOP
    // 0x13538c: 0x0  nop
    ctx->pc = 0x13538cu;
    // NOP
    // 0x135390: 0x0  nop
    ctx->pc = 0x135390u;
    // NOP
    // 0x135394: 0x0  nop
    ctx->pc = 0x135394u;
    // NOP
    // 0x135398: 0x0  nop
    ctx->pc = 0x135398u;
    // NOP
    // 0x13539c: 0x5482fffa  bnel        $a0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13539Cu;
    {
        const bool branch_taken_0x13539c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x13539c) {
            ctx->pc = 0x1353A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13539Cu;
            // 0x1353a0: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x135388u;
            runtime->cooperativeGuestYield();
            goto label_135388;
        }
    }
    ctx->pc = 0x1353A4u;
    // 0x1353a4: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x1353a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1353a8: 0xace40080  sw          $a0, 0x80($a3)
    ctx->pc = 0x1353a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 128), GPR_U32(ctx, 4));
    // 0x1353ac: 0x8c4400b4  lw          $a0, 0xB4($v0)
    ctx->pc = 0x1353acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
    // 0x1353b0: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1353B0u;
    {
        const bool branch_taken_0x1353b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1353B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1353B0u;
            // 0x1353b4: 0xafa00104  sw          $zero, 0x104($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1353b0) {
            ctx->pc = 0x135400u;
            goto label_135400;
        }
    }
    ctx->pc = 0x1353B8u;
    // 0x1353b8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1353b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1353bc: 0x10440010  beq         $v0, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1353BCu;
    {
        const bool branch_taken_0x1353bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1353C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1353BCu;
            // 0x1353c0: 0x8fa20100  lw          $v0, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1353bc) {
            ctx->pc = 0x135400u;
            goto label_135400;
        }
    }
    ctx->pc = 0x1353C4u;
    // 0x1353c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1353c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1353c8: 0x218c0  sll         $v1, $v0, 3
    ctx->pc = 0x1353c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1353cc: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x1353ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x1353d0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x1353d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1353d4: 0x6ba20117  ldl         $v0, 0x117($sp)
    ctx->pc = 0x1353d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 279); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1353d8: 0x6fa20110  ldr         $v0, 0x110($sp)
    ctx->pc = 0x1353d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1353dc: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x1353dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1353e0: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x1353e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1353e4: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x1353e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1353e8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1353e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1353ec: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x1353ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1353f0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1353f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1353f4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1353f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1353f8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1353f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1353fc: 0x0  nop
    ctx->pc = 0x1353fcu;
    // NOP
label_135400:
    // 0x135400: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x135400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x135404: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x135404u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x135408: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x135408u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x13540c: 0x10400043  beqz        $v0, . + 4 + (0x43 << 2)
    ctx->pc = 0x13540Cu;
    {
        const bool branch_taken_0x13540c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x135410u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13540Cu;
            // 0x135410: 0xb1080  sll         $v0, $t3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13540c) {
            ctx->pc = 0x13551Cu;
            goto label_13551c;
        }
    }
    ctx->pc = 0x135414u;
    // 0x135414: 0x5d5021  addu        $t2, $v0, $sp
    ctx->pc = 0x135414u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x135418: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x135418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x13541c: 0x0  nop
    ctx->pc = 0x13541cu;
    // NOP
label_135420:
    // 0x135420: 0x8fa80100  lw          $t0, 0x100($sp)
    ctx->pc = 0x135420u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x135424: 0x818c0  sll         $v1, $t0, 3
    ctx->pc = 0x135424u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
    // 0x135428: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x135428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13542c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x13542cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x135430: 0x8c490008  lw          $t1, 0x8($v0)
    ctx->pc = 0x135430u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x135434: 0xe32021  addu        $a0, $a3, $v1
    ctx->pc = 0x135434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x135438: 0x8c860004  lw          $a2, 0x4($a0)
    ctx->pc = 0x135438u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13543c: 0x8fa30104  lw          $v1, 0x104($sp)
    ctx->pc = 0x13543cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x135440: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x135440u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x135444: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x135444u;
    {
        const bool branch_taken_0x135444 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x135448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135444u;
            // 0x135448: 0x8c4500b4  lw          $a1, 0xB4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 180)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135444) {
            ctx->pc = 0x135498u;
            goto label_135498;
        }
    }
    ctx->pc = 0x13544Cu;
    // 0x13544c: 0x50a00013  beql        $a1, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x13544Cu;
    {
        const bool branch_taken_0x13544c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x13544c) {
            ctx->pc = 0x135450u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13544Cu;
            // 0x135450: 0x8cc20000  lw          $v0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13549Cu;
            goto label_13549c;
        }
    }
    ctx->pc = 0x135454u;
    // 0x135454: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x135454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x135458: 0x1045000f  beq         $v0, $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x135458u;
    {
        const bool branch_taken_0x135458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x13545Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135458u;
            // 0x13545c: 0x25030001  addiu       $v1, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135458) {
            ctx->pc = 0x135498u;
            goto label_135498;
        }
    }
    ctx->pc = 0x135460u;
    // 0x135460: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x135460u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x135464: 0xafa30100  sw          $v1, 0x100($sp)
    ctx->pc = 0x135464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 3));
    // 0x135468: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x135468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x13546c: 0x6ba30127  ldl         $v1, 0x127($sp)
    ctx->pc = 0x13546cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x135470: 0x6fa30120  ldr         $v1, 0x120($sp)
    ctx->pc = 0x135470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x135474: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x135474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x135478: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x135478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13547c: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x13547cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x135480: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x135480u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x135484: 0xe21021  addu        $v0, $a3, $v0
    ctx->pc = 0x135484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x135488: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x135488u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x13548c: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x13548cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x135490: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x135490u;
    {
        const bool branch_taken_0x135490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135490u;
            // 0x135494: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135490) {
            ctx->pc = 0x1354E4u;
            goto label_1354e4;
        }
    }
    ctx->pc = 0x135498u;
label_135498:
    // 0x135498: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x135498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_13549c:
    // 0x13549c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x13549cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1354a0: 0x14430010  bne         $v0, $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1354A0u;
    {
        const bool branch_taken_0x1354a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1354A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1354A0u;
            // 0x1354a4: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1354a0) {
            ctx->pc = 0x1354E4u;
            goto label_1354e4;
        }
    }
    ctx->pc = 0x1354A8u;
    // 0x1354a8: 0x8fa50100  lw          $a1, 0x100($sp)
    ctx->pc = 0x1354a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x1354ac: 0x0  nop
    ctx->pc = 0x1354acu;
    // NOP
label_1354b0:
    // 0x1354b0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1354b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x1354b4: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x1354b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x1354b8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1354b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1354bc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1354BCu;
    {
        const bool branch_taken_0x1354bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1354C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1354BCu;
            // 0x1354c0: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1354bc) {
            ctx->pc = 0x1354E0u;
            goto label_1354e0;
        }
    }
    ctx->pc = 0x1354C4u;
    // 0x1354c4: 0xe22021  addu        $a0, $a3, $v0
    ctx->pc = 0x1354c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x1354c8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1354c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1354cc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1354ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1354d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1354d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1354d4: 0x1043fff6  beq         $v0, $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1354D4u;
    {
        const bool branch_taken_0x1354d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1354D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1354D4u;
            // 0x1354d8: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1354d4) {
            ctx->pc = 0x1354B0u;
            runtime->cooperativeGuestYield();
            goto label_1354b0;
        }
    }
    ctx->pc = 0x1354DCu;
    // 0x1354dc: 0x0  nop
    ctx->pc = 0x1354dcu;
    // NOP
label_1354e0:
    // 0x1354e0: 0xafa50100  sw          $a1, 0x100($sp)
    ctx->pc = 0x1354e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 5));
label_1354e4:
    // 0x1354e4: 0xafa00104  sw          $zero, 0x104($sp)
    ctx->pc = 0x1354e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
    // 0x1354e8: 0x8d22001c  lw          $v0, 0x1C($t1)
    ctx->pc = 0x1354e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 28)));
    // 0x1354ec: 0x84420060  lh          $v0, 0x60($v0)
    ctx->pc = 0x1354ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1354f0: 0x4400008  bltz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1354F0u;
    {
        const bool branch_taken_0x1354f0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1354F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1354F0u;
            // 0x1354f4: 0x8fa20100  lw          $v0, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1354f0) {
            ctx->pc = 0x135514u;
            goto label_135514;
        }
    }
    ctx->pc = 0x1354F8u;
    // 0x1354f8: 0x8d220018  lw          $v0, 0x18($t1)
    ctx->pc = 0x1354f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 24)));
    // 0x1354fc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1354FCu;
    {
        const bool branch_taken_0x1354fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x135500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1354FCu;
            // 0x135500: 0x8fa20100  lw          $v0, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1354fc) {
            ctx->pc = 0x135514u;
            goto label_135514;
        }
    }
    ctx->pc = 0x135504u;
    // 0x135504: 0xad490000  sw          $t1, 0x0($t2)
    ctx->pc = 0x135504u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 9));
    // 0x135508: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x135508u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x13550c: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x13550cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x135510: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x135510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_135514:
    // 0x135514: 0x441ffc2  bgez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x135514u;
    {
        const bool branch_taken_0x135514 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x135518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135514u;
            // 0x135518: 0x27a20080  addiu       $v0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135514) {
            ctx->pc = 0x135420u;
            runtime->cooperativeGuestYield();
            goto label_135420;
        }
    }
    ctx->pc = 0x13551Cu;
label_13551c:
    // 0x13551c: 0x5960000b  blezl       $t3, . + 4 + (0xB << 2)
    ctx->pc = 0x13551Cu;
    {
        const bool branch_taken_0x13551c = (GPR_S32(ctx, 11) <= 0);
        if (branch_taken_0x13551c) {
            ctx->pc = 0x135520u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13551Cu;
            // 0x135520: 0x8e430080  lw          $v1, 0x80($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13554Cu;
            goto label_13554c;
        }
    }
    ctx->pc = 0x135524u;
    // 0x135524: 0x160882d  daddu       $s1, $t3, $zero
    ctx->pc = 0x135524u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135528: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x135528u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13552c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x13552cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_135530:
    // 0x135530: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x135530u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x135534: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x135534u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x135538: 0xc04c55c  jal         func_131570
    ctx->pc = 0x135538u;
    SET_GPR_U32(ctx, 31, 0x135540u);
    ctx->pc = 0x13553Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135538u;
            // 0x13553c: 0x8ca40018  lw          $a0, 0x18($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131570u;
    if (runtime->hasFunction(0x131570u)) {
        auto targetFn = runtime->lookupFunction(0x131570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135540u; }
        if (ctx->pc != 0x135540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131570_0x131570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135540u; }
        if (ctx->pc != 0x135540u) { return; }
    }
    ctx->pc = 0x135540u;
    // 0x135540: 0x5620fffb  bnel        $s1, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x135540u;
    {
        const bool branch_taken_0x135540 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x135540) {
            ctx->pc = 0x135544u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x135540u;
            // 0x135544: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x135530u;
            runtime->cooperativeGuestYield();
            goto label_135530;
        }
    }
    ctx->pc = 0x135548u;
    // 0x135548: 0x8e430080  lw          $v1, 0x80($s2)
    ctx->pc = 0x135548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_13554c:
    // 0x13554c: 0x26420080  addiu       $v0, $s2, 0x80
    ctx->pc = 0x13554cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x135550: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x135550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
    // 0x135554: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x135554u;
    {
        const bool branch_taken_0x135554 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x135558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135554u;
            // 0x135558: 0xafa30134  sw          $v1, 0x134($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135554) {
            ctx->pc = 0x135590u;
            goto label_135590;
        }
    }
    ctx->pc = 0x13555Cu;
    // 0x13555c: 0x8fa20134  lw          $v0, 0x134($sp)
    ctx->pc = 0x13555cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_135560:
    // 0x135560: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x135560u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x135564: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x135564u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x135568: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x135568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13556c: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x13556cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x135570: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x135570u;
    {
        const bool branch_taken_0x135570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x135574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135570u;
            // 0x135574: 0xafa20134  sw          $v0, 0x134($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 308), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135570) {
            ctx->pc = 0x135580u;
            goto label_135580;
        }
    }
    ctx->pc = 0x135578u;
    // 0x135578: 0xc04d4d6  jal         func_135358
    ctx->pc = 0x135578u;
    SET_GPR_U32(ctx, 31, 0x135580u);
    ctx->pc = 0x13557Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135578u;
            // 0x13557c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135358u;
    runtime->cooperativeGuestYield();
    goto label_135358;
    ctx->pc = 0x135580u;
label_135580:
    // 0x135580: 0x8fa30134  lw          $v1, 0x134($sp)
    ctx->pc = 0x135580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
    // 0x135584: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x135584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x135588: 0x1462fff5  bne         $v1, $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x135588u;
    {
        const bool branch_taken_0x135588 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13558Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135588u;
            // 0x13558c: 0x8fa20134  lw          $v0, 0x134($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135588) {
            ctx->pc = 0x135560u;
            runtime->cooperativeGuestYield();
            goto label_135560;
        }
    }
    ctx->pc = 0x135590u;
label_135590:
    // 0x135590: 0x7bb00170  lq          $s0, 0x170($sp)
    ctx->pc = 0x135590u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x135594: 0x7bb10160  lq          $s1, 0x160($sp)
    ctx->pc = 0x135594u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x135598: 0x7bb20150  lq          $s2, 0x150($sp)
    ctx->pc = 0x135598u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x13559c: 0xdfbf0140  ld          $ra, 0x140($sp)
    ctx->pc = 0x13559cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x1355a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1355A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1355A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1355A0u;
            // 0x1355a4: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x135358u: goto label_135358;
            case 0x135388u: goto label_135388;
            case 0x135400u: goto label_135400;
            case 0x135420u: goto label_135420;
            case 0x135498u: goto label_135498;
            case 0x13549Cu: goto label_13549c;
            case 0x1354B0u: goto label_1354b0;
            case 0x1354E0u: goto label_1354e0;
            case 0x1354E4u: goto label_1354e4;
            case 0x135514u: goto label_135514;
            case 0x13551Cu: goto label_13551c;
            case 0x135530u: goto label_135530;
            case 0x13554Cu: goto label_13554c;
            case 0x135560u: goto label_135560;
            case 0x135580u: goto label_135580;
            case 0x135590u: goto label_135590;
            case 0x135628u: goto label_135628;
            case 0x135648u: goto label_135648;
            case 0x135688u: goto label_135688;
            case 0x1356A8u: goto label_1356a8;
            case 0x1356E0u: goto label_1356e0;
            case 0x135760u: goto label_135760;
            case 0x135774u: goto label_135774;
            case 0x1357A0u: goto label_1357a0;
            case 0x1357A8u: goto label_1357a8;
            case 0x1357ACu: goto label_1357ac;
            case 0x1357E0u: goto label_1357e0;
            case 0x135850u: goto label_135850;
            case 0x1358B0u: goto label_1358b0;
            case 0x1358B4u: goto label_1358b4;
            case 0x1358C0u: goto label_1358c0;
            case 0x1358D4u: goto label_1358d4;
            case 0x135938u: goto label_135938;
            case 0x135950u: goto label_135950;
            case 0x135998u: goto label_135998;
            case 0x13599Cu: goto label_13599c;
            case 0x1359ACu: goto label_1359ac;
            case 0x1359D0u: goto label_1359d0;
            case 0x135A18u: goto label_135a18;
            case 0x135A60u: goto label_135a60;
            case 0x135A70u: goto label_135a70;
            case 0x135A78u: goto label_135a78;
            case 0x135A98u: goto label_135a98;
            case 0x135AA8u: goto label_135aa8;
            case 0x135ACCu: goto label_135acc;
            case 0x135B70u: goto label_135b70;
            case 0x135BC0u: goto label_135bc0;
            case 0x135BE0u: goto label_135be0;
            case 0x135C08u: goto label_135c08;
            case 0x135C48u: goto label_135c48;
            case 0x135CA0u: goto label_135ca0;
            case 0x135CA8u: goto label_135ca8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1355A8u;
    // 0x1355a8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1355a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1355ac: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1355acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x1355b0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1355b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x1355b4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1355b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1355b8: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x1355b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x1355bc: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1355bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1355c0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1355c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x1355c4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x1355c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1355c8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1355c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x1355cc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1355ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1355d0: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x1355d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x1355d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1355d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1355d8: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x1355d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x1355dc: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1355dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1355e0: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1355e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1355e4: 0x40f809  jalr        $v0
    ctx->pc = 0x1355E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1355ECu);
        ctx->pc = 0x1355E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1355E4u;
            // 0x1355e8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1355ECu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x135358u: goto label_135358;
            case 0x135388u: goto label_135388;
            case 0x135400u: goto label_135400;
            case 0x135420u: goto label_135420;
            case 0x135498u: goto label_135498;
            case 0x13549Cu: goto label_13549c;
            case 0x1354B0u: goto label_1354b0;
            case 0x1354E0u: goto label_1354e0;
            case 0x1354E4u: goto label_1354e4;
            case 0x135514u: goto label_135514;
            case 0x13551Cu: goto label_13551c;
            case 0x135530u: goto label_135530;
            case 0x13554Cu: goto label_13554c;
            case 0x135560u: goto label_135560;
            case 0x135580u: goto label_135580;
            case 0x135590u: goto label_135590;
            case 0x135628u: goto label_135628;
            case 0x135648u: goto label_135648;
            case 0x135688u: goto label_135688;
            case 0x1356A8u: goto label_1356a8;
            case 0x1356E0u: goto label_1356e0;
            case 0x135760u: goto label_135760;
            case 0x135774u: goto label_135774;
            case 0x1357A0u: goto label_1357a0;
            case 0x1357A8u: goto label_1357a8;
            case 0x1357ACu: goto label_1357ac;
            case 0x1357E0u: goto label_1357e0;
            case 0x135850u: goto label_135850;
            case 0x1358B0u: goto label_1358b0;
            case 0x1358B4u: goto label_1358b4;
            case 0x1358C0u: goto label_1358c0;
            case 0x1358D4u: goto label_1358d4;
            case 0x135938u: goto label_135938;
            case 0x135950u: goto label_135950;
            case 0x135998u: goto label_135998;
            case 0x13599Cu: goto label_13599c;
            case 0x1359ACu: goto label_1359ac;
            case 0x1359D0u: goto label_1359d0;
            case 0x135A18u: goto label_135a18;
            case 0x135A60u: goto label_135a60;
            case 0x135A70u: goto label_135a70;
            case 0x135A78u: goto label_135a78;
            case 0x135A98u: goto label_135a98;
            case 0x135AA8u: goto label_135aa8;
            case 0x135ACCu: goto label_135acc;
            case 0x135B70u: goto label_135b70;
            case 0x135BC0u: goto label_135bc0;
            case 0x135BE0u: goto label_135be0;
            case 0x135C08u: goto label_135c08;
            case 0x135C48u: goto label_135c48;
            case 0x135CA0u: goto label_135ca0;
            case 0x135CA8u: goto label_135ca8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1355ECu; }
            if (ctx->pc != 0x1355ECu) { return; }
        }
        }
    }
    ctx->pc = 0x1355ECu;
    // 0x1355ec: 0x8ea60030  lw          $a2, 0x30($s5)
    ctx->pc = 0x1355ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x1355f0: 0x24c70034  addiu       $a3, $a2, 0x34
    ctx->pc = 0x1355f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 52));
    // 0x1355f4: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x1355f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x1355f8: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x1355f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x1355fc: 0x54a2000a  bnel        $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1355FCu;
    {
        const bool branch_taken_0x1355fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1355fc) {
            ctx->pc = 0x135600u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1355FCu;
            // 0x135600: 0x8cc30034  lw          $v1, 0x34($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x135628u;
            goto label_135628;
        }
    }
    ctx->pc = 0x135604u;
    // 0x135604: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x135604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x135608: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x135608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x13560c: 0x8cc20044  lw          $v0, 0x44($a2)
    ctx->pc = 0x13560cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 68)));
    // 0x135610: 0x8cc30024  lw          $v1, 0x24($a2)
    ctx->pc = 0x135610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x135614: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x135614u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x135618: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x135618u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13561c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x13561Cu;
    {
        const bool branch_taken_0x13561c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13561Cu;
            // 0x135620: 0x8c670004  lw          $a3, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13561c) {
            ctx->pc = 0x135648u;
            goto label_135648;
        }
    }
    ctx->pc = 0x135624u;
    // 0x135624: 0x0  nop
    ctx->pc = 0x135624u;
    // NOP
label_135628:
    // 0x135628: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x135628u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x13562c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13562cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x135630: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x135630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x135634: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x135634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x135638: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x135638u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x13563c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13563cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x135640: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x135640u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135644: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x135644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_135648:
    // 0x135648: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x135648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13564c: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x13564Cu;
    {
        const bool branch_taken_0x13564c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13564c) {
            ctx->pc = 0x135650u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13564Cu;
            // 0x135650: 0x8cc30044  lw          $v1, 0x44($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 68)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x135688u;
            goto label_135688;
        }
    }
    ctx->pc = 0x135654u;
    // 0x135654: 0x8cc20044  lw          $v0, 0x44($a2)
    ctx->pc = 0x135654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 68)));
    // 0x135658: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x135658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x13565c: 0x8cc40024  lw          $a0, 0x24($a2)
    ctx->pc = 0x13565cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x135660: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x135660u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x135664: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x135664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x135668: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x135668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13566c: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x13566cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x135670: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x135670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x135674: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x135674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x135678: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x135678u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x13567c: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x13567cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
    // 0x135680: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x135680u;
    {
        const bool branch_taken_0x135680 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135680u;
            // 0x135684: 0xac830004  sw          $v1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135680) {
            ctx->pc = 0x1356A8u;
            goto label_1356a8;
        }
    }
    ctx->pc = 0x135688u;
label_135688:
    // 0x135688: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x135688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x13568c: 0x8cc20024  lw          $v0, 0x24($a2)
    ctx->pc = 0x13568cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 36)));
    // 0x135690: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x135690u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x135694: 0x651818  mult        $v1, $v1, $a1
    ctx->pc = 0x135694u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x135698: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x135698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13569c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13569cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1356a0: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x1356a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1356a4: 0xac920000  sw          $s2, 0x0($a0)
    ctx->pc = 0x1356a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 18));
label_1356a8:
    // 0x1356a8: 0xae47001c  sw          $a3, 0x1C($s2)
    ctx->pc = 0x1356a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 7));
    // 0x1356ac: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1356acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1356b0: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x1356b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x1356b4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1356b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1356b8: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1356b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x1356bc: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x1356bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x1356c0: 0x40f809  jalr        $v0
    ctx->pc = 0x1356C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1356C8u);
        ctx->pc = 0x1356C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1356C0u;
            // 0x1356c4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1356C8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x135358u: goto label_135358;
            case 0x135388u: goto label_135388;
            case 0x135400u: goto label_135400;
            case 0x135420u: goto label_135420;
            case 0x135498u: goto label_135498;
            case 0x13549Cu: goto label_13549c;
            case 0x1354B0u: goto label_1354b0;
            case 0x1354E0u: goto label_1354e0;
            case 0x1354E4u: goto label_1354e4;
            case 0x135514u: goto label_135514;
            case 0x13551Cu: goto label_13551c;
            case 0x135530u: goto label_135530;
            case 0x13554Cu: goto label_13554c;
            case 0x135560u: goto label_135560;
            case 0x135580u: goto label_135580;
            case 0x135590u: goto label_135590;
            case 0x135628u: goto label_135628;
            case 0x135648u: goto label_135648;
            case 0x135688u: goto label_135688;
            case 0x1356A8u: goto label_1356a8;
            case 0x1356E0u: goto label_1356e0;
            case 0x135760u: goto label_135760;
            case 0x135774u: goto label_135774;
            case 0x1357A0u: goto label_1357a0;
            case 0x1357A8u: goto label_1357a8;
            case 0x1357ACu: goto label_1357ac;
            case 0x1357E0u: goto label_1357e0;
            case 0x135850u: goto label_135850;
            case 0x1358B0u: goto label_1358b0;
            case 0x1358B4u: goto label_1358b4;
            case 0x1358C0u: goto label_1358c0;
            case 0x1358D4u: goto label_1358d4;
            case 0x135938u: goto label_135938;
            case 0x135950u: goto label_135950;
            case 0x135998u: goto label_135998;
            case 0x13599Cu: goto label_13599c;
            case 0x1359ACu: goto label_1359ac;
            case 0x1359D0u: goto label_1359d0;
            case 0x135A18u: goto label_135a18;
            case 0x135A60u: goto label_135a60;
            case 0x135A70u: goto label_135a70;
            case 0x135A78u: goto label_135a78;
            case 0x135A98u: goto label_135a98;
            case 0x135AA8u: goto label_135aa8;
            case 0x135ACCu: goto label_135acc;
            case 0x135B70u: goto label_135b70;
            case 0x135BC0u: goto label_135bc0;
            case 0x135BE0u: goto label_135be0;
            case 0x135C08u: goto label_135c08;
            case 0x135C48u: goto label_135c48;
            case 0x135CA0u: goto label_135ca0;
            case 0x135CA8u: goto label_135ca8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1356C8u; }
            if (ctx->pc != 0x1356C8u) { return; }
        }
        }
    }
    ctx->pc = 0x1356C8u;
    // 0x1356c8: 0x96a30006  lhu         $v1, 0x6($s5)
    ctx->pc = 0x1356c8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 6)));
    // 0x1356cc: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x1356ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x1356d0: 0xae420088  sw          $v0, 0x88($s2)
    ctx->pc = 0x1356d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 2));
    // 0x1356d4: 0x14800002  bnez        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1356D4u;
    {
        const bool branch_taken_0x1356d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1356D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1356D4u;
            // 0x1356d8: 0xa6430006  sh          $v1, 0x6($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1356d4) {
            ctx->pc = 0x1356E0u;
            goto label_1356e0;
        }
    }
    ctx->pc = 0x1356DCu;
    // 0x1356dc: 0xae720018  sw          $s2, 0x18($s3)
    ctx->pc = 0x1356dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 18));
label_1356e0:
    // 0x1356e0: 0xae53007c  sw          $s3, 0x7C($s2)
    ctx->pc = 0x1356e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 124), GPR_U32(ctx, 19));
    // 0x1356e4: 0x8262001c  lb          $v0, 0x1C($s3)
    ctx->pc = 0x1356e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x1356e8: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x1356E8u;
    {
        const bool branch_taken_0x1356e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1356ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1356E8u;
            // 0x1356ec: 0x2670001c  addiu       $s0, $s3, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1356e8) {
            ctx->pc = 0x1357A8u;
            goto label_1357a8;
        }
    }
    ctx->pc = 0x1356F0u;
    // 0x1356f0: 0x8ea30030  lw          $v1, 0x30($s5)
    ctx->pc = 0x1356f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x1356f4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1356f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1356f8: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x1356f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x1356fc: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x1356fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x135700: 0x40f809  jalr        $v0
    ctx->pc = 0x135700u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x135708u);
        ctx->pc = 0x135704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135700u;
            // 0x135704: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x135708u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x135358u: goto label_135358;
            case 0x135388u: goto label_135388;
            case 0x135400u: goto label_135400;
            case 0x135420u: goto label_135420;
            case 0x135498u: goto label_135498;
            case 0x13549Cu: goto label_13549c;
            case 0x1354B0u: goto label_1354b0;
            case 0x1354E0u: goto label_1354e0;
            case 0x1354E4u: goto label_1354e4;
            case 0x135514u: goto label_135514;
            case 0x13551Cu: goto label_13551c;
            case 0x135530u: goto label_135530;
            case 0x13554Cu: goto label_13554c;
            case 0x135560u: goto label_135560;
            case 0x135580u: goto label_135580;
            case 0x135590u: goto label_135590;
            case 0x135628u: goto label_135628;
            case 0x135648u: goto label_135648;
            case 0x135688u: goto label_135688;
            case 0x1356A8u: goto label_1356a8;
            case 0x1356E0u: goto label_1356e0;
            case 0x135760u: goto label_135760;
            case 0x135774u: goto label_135774;
            case 0x1357A0u: goto label_1357a0;
            case 0x1357A8u: goto label_1357a8;
            case 0x1357ACu: goto label_1357ac;
            case 0x1357E0u: goto label_1357e0;
            case 0x135850u: goto label_135850;
            case 0x1358B0u: goto label_1358b0;
            case 0x1358B4u: goto label_1358b4;
            case 0x1358C0u: goto label_1358c0;
            case 0x1358D4u: goto label_1358d4;
            case 0x135938u: goto label_135938;
            case 0x135950u: goto label_135950;
            case 0x135998u: goto label_135998;
            case 0x13599Cu: goto label_13599c;
            case 0x1359ACu: goto label_1359ac;
            case 0x1359D0u: goto label_1359d0;
            case 0x135A18u: goto label_135a18;
            case 0x135A60u: goto label_135a60;
            case 0x135A70u: goto label_135a70;
            case 0x135A78u: goto label_135a78;
            case 0x135A98u: goto label_135a98;
            case 0x135AA8u: goto label_135aa8;
            case 0x135ACCu: goto label_135acc;
            case 0x135B70u: goto label_135b70;
            case 0x135BC0u: goto label_135bc0;
            case 0x135BE0u: goto label_135be0;
            case 0x135C08u: goto label_135c08;
            case 0x135C48u: goto label_135c48;
            case 0x135CA0u: goto label_135ca0;
            case 0x135CA8u: goto label_135ca8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x135708u; }
            if (ctx->pc != 0x135708u) { return; }
        }
        }
    }
    ctx->pc = 0x135708u;
    // 0x135708: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x135708u;
    {
        const bool branch_taken_0x135708 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x135708) {
            ctx->pc = 0x13570Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x135708u;
            // 0x13570c: 0x8e740004  lw          $s4, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1357ACu;
            goto label_1357ac;
        }
    }
    ctx->pc = 0x135710u;
    // 0x135710: 0x8263001c  lb          $v1, 0x1C($s3)
    ctx->pc = 0x135710u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x135714: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x135714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x135718: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x135718u;
    {
        const bool branch_taken_0x135718 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x13571Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135718u;
            // 0x13571c: 0x3c04002c  lui         $a0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135718) {
            ctx->pc = 0x135760u;
            goto label_135760;
        }
    }
    ctx->pc = 0x135720u;
    // 0x135720: 0x8ea20030  lw          $v0, 0x30($s5)
    ctx->pc = 0x135720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x135724: 0x24420048  addiu       $v0, $v0, 0x48
    ctx->pc = 0x135724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x135728: 0x8c430080  lw          $v1, 0x80($v0)
    ctx->pc = 0x135728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x13572c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13572cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x135730: 0x8c847910  lw          $a0, 0x7910($a0)
    ctx->pc = 0x135730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 30992)));
    // 0x135734: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x135734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x135738: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x135738u;
    SET_GPR_U32(ctx, 31, 0x135740u);
    ctx->pc = 0x13573Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135738u;
            // 0x13573c: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135740u; }
        if (ctx->pc != 0x135740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135740u; }
        if (ctx->pc != 0x135740u) { return; }
    }
    ctx->pc = 0x135740u;
    // 0x135740: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x135740u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x135744: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x135744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x135748: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x135748u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x13574c: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x13574cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
    // 0x135750: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x135750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x135754: 0xae020080  sw          $v0, 0x80($s0)
    ctx->pc = 0x135754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 128), GPR_U32(ctx, 2));
    // 0x135758: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x135758u;
    {
        const bool branch_taken_0x135758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13575Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135758u;
            // 0x13575c: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135758) {
            ctx->pc = 0x1357A0u;
            goto label_1357a0;
        }
    }
    ctx->pc = 0x135760u;
label_135760:
    // 0x135760: 0xc05e996  jal         func_17A658
    ctx->pc = 0x135760u;
    SET_GPR_U32(ctx, 31, 0x135768u);
    ctx->pc = 0x135764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135760u;
            // 0x135764: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135768u; }
        if (ctx->pc != 0x135768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135768u; }
        if (ctx->pc != 0x135768u) { return; }
    }
    ctx->pc = 0x135768u;
    // 0x135768: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x135768u;
    {
        const bool branch_taken_0x135768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13576Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135768u;
            // 0x13576c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135768) {
            ctx->pc = 0x135774u;
            goto label_135774;
        }
    }
    ctx->pc = 0x135770u;
    // 0x135770: 0x8c510018  lw          $s1, 0x18($v0)
    ctx->pc = 0x135770u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_135774:
    // 0x135774: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x135774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x135778: 0x26300080  addiu       $s0, $s1, 0x80
    ctx->pc = 0x135778u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x13577c: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x13577Cu;
    SET_GPR_U32(ctx, 31, 0x135784u);
    ctx->pc = 0x135780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13577Cu;
            // 0x135780: 0x8c447910  lw          $a0, 0x7910($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135784u; }
        if (ctx->pc != 0x135784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135784u; }
        if (ctx->pc != 0x135784u) { return; }
    }
    ctx->pc = 0x135784u;
    // 0x135784: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x135784u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x135788: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x135788u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x13578c: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x13578cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
    // 0x135790: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x135790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x135794: 0xae220080  sw          $v0, 0x80($s1)
    ctx->pc = 0x135794u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 128), GPR_U32(ctx, 2));
    // 0x135798: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x135798u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x13579c: 0x0  nop
    ctx->pc = 0x13579cu;
    // NOP
label_1357a0:
    // 0x1357a0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1357a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1357a4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1357a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1357a8:
    // 0x1357a8: 0x8e740004  lw          $s4, 0x4($s3)
    ctx->pc = 0x1357a8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1357ac:
    // 0x1357ac: 0x12800049  beqz        $s4, . + 4 + (0x49 << 2)
    ctx->pc = 0x1357ACu;
    {
        const bool branch_taken_0x1357ac = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1357B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1357ACu;
            // 0x1357b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1357ac) {
            ctx->pc = 0x1358D4u;
            goto label_1358d4;
        }
    }
    ctx->pc = 0x1357B4u;
    // 0x1357b4: 0x8ea30030  lw          $v1, 0x30($s5)
    ctx->pc = 0x1357b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x1357b8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1357b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1357bc: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x1357bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1357c0: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x1357c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1357c4: 0x40f809  jalr        $v0
    ctx->pc = 0x1357C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1357CCu);
        ctx->pc = 0x1357C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1357C4u;
            // 0x1357c8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1357CCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x135358u: goto label_135358;
            case 0x135388u: goto label_135388;
            case 0x135400u: goto label_135400;
            case 0x135420u: goto label_135420;
            case 0x135498u: goto label_135498;
            case 0x13549Cu: goto label_13549c;
            case 0x1354B0u: goto label_1354b0;
            case 0x1354E0u: goto label_1354e0;
            case 0x1354E4u: goto label_1354e4;
            case 0x135514u: goto label_135514;
            case 0x13551Cu: goto label_13551c;
            case 0x135530u: goto label_135530;
            case 0x13554Cu: goto label_13554c;
            case 0x135560u: goto label_135560;
            case 0x135580u: goto label_135580;
            case 0x135590u: goto label_135590;
            case 0x135628u: goto label_135628;
            case 0x135648u: goto label_135648;
            case 0x135688u: goto label_135688;
            case 0x1356A8u: goto label_1356a8;
            case 0x1356E0u: goto label_1356e0;
            case 0x135760u: goto label_135760;
            case 0x135774u: goto label_135774;
            case 0x1357A0u: goto label_1357a0;
            case 0x1357A8u: goto label_1357a8;
            case 0x1357ACu: goto label_1357ac;
            case 0x1357E0u: goto label_1357e0;
            case 0x135850u: goto label_135850;
            case 0x1358B0u: goto label_1358b0;
            case 0x1358B4u: goto label_1358b4;
            case 0x1358C0u: goto label_1358c0;
            case 0x1358D4u: goto label_1358d4;
            case 0x135938u: goto label_135938;
            case 0x135950u: goto label_135950;
            case 0x135998u: goto label_135998;
            case 0x13599Cu: goto label_13599c;
            case 0x1359ACu: goto label_1359ac;
            case 0x1359D0u: goto label_1359d0;
            case 0x135A18u: goto label_135a18;
            case 0x135A60u: goto label_135a60;
            case 0x135A70u: goto label_135a70;
            case 0x135A78u: goto label_135a78;
            case 0x135A98u: goto label_135a98;
            case 0x135AA8u: goto label_135aa8;
            case 0x135ACCu: goto label_135acc;
            case 0x135B70u: goto label_135b70;
            case 0x135BC0u: goto label_135bc0;
            case 0x135BE0u: goto label_135be0;
            case 0x135C08u: goto label_135c08;
            case 0x135C48u: goto label_135c48;
            case 0x135CA0u: goto label_135ca0;
            case 0x135CA8u: goto label_135ca8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1357CCu; }
            if (ctx->pc != 0x1357CCu) { return; }
        }
        }
    }
    ctx->pc = 0x1357CCu;
    // 0x1357cc: 0x8e930000  lw          $s3, 0x0($s4)
    ctx->pc = 0x1357ccu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1357d0: 0x5274003b  beql        $s3, $s4, . + 4 + (0x3B << 2)
    ctx->pc = 0x1357D0u;
    {
        const bool branch_taken_0x1357d0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 20));
        if (branch_taken_0x1357d0) {
            ctx->pc = 0x1357D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1357D0u;
            // 0x1357d4: 0x8ea30030  lw          $v1, 0x30($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1358C0u;
            goto label_1358c0;
        }
    }
    ctx->pc = 0x1357D8u;
    // 0x1357d8: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x1357d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x1357dc: 0x0  nop
    ctx->pc = 0x1357dcu;
    // NOP
label_1357e0:
    // 0x1357e0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x1357e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1357e4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1357e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1357e8: 0x2476e848  addiu       $s6, $v1, -0x17B8
    ctx->pc = 0x1357e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961224));
    // 0x1357ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1357ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1357f0: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x1357f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x1357f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1357f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1357f8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1357f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1357fc: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x1357fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x135800: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x135800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x135804: 0x40f809  jalr        $v0
    ctx->pc = 0x135804u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13580Cu);
        ctx->pc = 0x135808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135804u;
            // 0x135808: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x13580Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x135358u: goto label_135358;
            case 0x135388u: goto label_135388;
            case 0x135400u: goto label_135400;
            case 0x135420u: goto label_135420;
            case 0x135498u: goto label_135498;
            case 0x13549Cu: goto label_13549c;
            case 0x1354B0u: goto label_1354b0;
            case 0x1354E0u: goto label_1354e0;
            case 0x1354E4u: goto label_1354e4;
            case 0x135514u: goto label_135514;
            case 0x13551Cu: goto label_13551c;
            case 0x135530u: goto label_135530;
            case 0x13554Cu: goto label_13554c;
            case 0x135560u: goto label_135560;
            case 0x135580u: goto label_135580;
            case 0x135590u: goto label_135590;
            case 0x135628u: goto label_135628;
            case 0x135648u: goto label_135648;
            case 0x135688u: goto label_135688;
            case 0x1356A8u: goto label_1356a8;
            case 0x1356E0u: goto label_1356e0;
            case 0x135760u: goto label_135760;
            case 0x135774u: goto label_135774;
            case 0x1357A0u: goto label_1357a0;
            case 0x1357A8u: goto label_1357a8;
            case 0x1357ACu: goto label_1357ac;
            case 0x1357E0u: goto label_1357e0;
            case 0x135850u: goto label_135850;
            case 0x1358B0u: goto label_1358b0;
            case 0x1358B4u: goto label_1358b4;
            case 0x1358C0u: goto label_1358c0;
            case 0x1358D4u: goto label_1358d4;
            case 0x135938u: goto label_135938;
            case 0x135950u: goto label_135950;
            case 0x135998u: goto label_135998;
            case 0x13599Cu: goto label_13599c;
            case 0x1359ACu: goto label_1359ac;
            case 0x1359D0u: goto label_1359d0;
            case 0x135A18u: goto label_135a18;
            case 0x135A60u: goto label_135a60;
            case 0x135A70u: goto label_135a70;
            case 0x135A78u: goto label_135a78;
            case 0x135A98u: goto label_135a98;
            case 0x135AA8u: goto label_135aa8;
            case 0x135ACCu: goto label_135acc;
            case 0x135B70u: goto label_135b70;
            case 0x135BC0u: goto label_135bc0;
            case 0x135BE0u: goto label_135be0;
            case 0x135C08u: goto label_135c08;
            case 0x135C48u: goto label_135c48;
            case 0x135CA0u: goto label_135ca0;
            case 0x135CA8u: goto label_135ca8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13580Cu; }
            if (ctx->pc != 0x13580Cu) { return; }
        }
        }
    }
    ctx->pc = 0x13580Cu;
    // 0x13580c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13580cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135810: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x135810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x135814: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x135814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x135818: 0x440000d  bltz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x135818u;
    {
        const bool branch_taken_0x135818 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x13581Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135818u;
            // 0x13581c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135818) {
            ctx->pc = 0x135850u;
            goto label_135850;
        }
    }
    ctx->pc = 0x135820u;
    // 0x135820: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x135820u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x135824: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x135824u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x135828: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x135828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x13582c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13582cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x135830: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x135830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x135834: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x135834u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x135838: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x135838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x13583c: 0x40f809  jalr        $v0
    ctx->pc = 0x13583Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x135844u);
        ctx->pc = 0x135840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13583Cu;
            // 0x135840: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x135844u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x135358u: goto label_135358;
            case 0x135388u: goto label_135388;
            case 0x135400u: goto label_135400;
            case 0x135420u: goto label_135420;
            case 0x135498u: goto label_135498;
            case 0x13549Cu: goto label_13549c;
            case 0x1354B0u: goto label_1354b0;
            case 0x1354E0u: goto label_1354e0;
            case 0x1354E4u: goto label_1354e4;
            case 0x135514u: goto label_135514;
            case 0x13551Cu: goto label_13551c;
            case 0x135530u: goto label_135530;
            case 0x13554Cu: goto label_13554c;
            case 0x135560u: goto label_135560;
            case 0x135580u: goto label_135580;
            case 0x135590u: goto label_135590;
            case 0x135628u: goto label_135628;
            case 0x135648u: goto label_135648;
            case 0x135688u: goto label_135688;
            case 0x1356A8u: goto label_1356a8;
            case 0x1356E0u: goto label_1356e0;
            case 0x135760u: goto label_135760;
            case 0x135774u: goto label_135774;
            case 0x1357A0u: goto label_1357a0;
            case 0x1357A8u: goto label_1357a8;
            case 0x1357ACu: goto label_1357ac;
            case 0x1357E0u: goto label_1357e0;
            case 0x135850u: goto label_135850;
            case 0x1358B0u: goto label_1358b0;
            case 0x1358B4u: goto label_1358b4;
            case 0x1358C0u: goto label_1358c0;
            case 0x1358D4u: goto label_1358d4;
            case 0x135938u: goto label_135938;
            case 0x135950u: goto label_135950;
            case 0x135998u: goto label_135998;
            case 0x13599Cu: goto label_13599c;
            case 0x1359ACu: goto label_1359ac;
            case 0x1359D0u: goto label_1359d0;
            case 0x135A18u: goto label_135a18;
            case 0x135A60u: goto label_135a60;
            case 0x135A70u: goto label_135a70;
            case 0x135A78u: goto label_135a78;
            case 0x135A98u: goto label_135a98;
            case 0x135AA8u: goto label_135aa8;
            case 0x135ACCu: goto label_135acc;
            case 0x135B70u: goto label_135b70;
            case 0x135BC0u: goto label_135bc0;
            case 0x135BE0u: goto label_135be0;
            case 0x135C08u: goto label_135c08;
            case 0x135C48u: goto label_135c48;
            case 0x135CA0u: goto label_135ca0;
            case 0x135CA8u: goto label_135ca8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x135844u; }
            if (ctx->pc != 0x135844u) { return; }
        }
        }
    }
    ctx->pc = 0x135844u;
    // 0x135844: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x135844u;
    {
        const bool branch_taken_0x135844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135848u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135844u;
            // 0x135848: 0x8e730000  lw          $s3, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135844) {
            ctx->pc = 0x1358B4u;
            goto label_1358b4;
        }
    }
    ctx->pc = 0x13584Cu;
    // 0x13584c: 0x0  nop
    ctx->pc = 0x13584cu;
    // NOP
label_135850:
    // 0x135850: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x135850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x135854: 0x26500080  addiu       $s0, $s2, 0x80
    ctx->pc = 0x135854u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
    // 0x135858: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x135858u;
    SET_GPR_U32(ctx, 31, 0x135860u);
    ctx->pc = 0x13585Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135858u;
            // 0x13585c: 0x8c447910  lw          $a0, 0x7910($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135860u; }
        if (ctx->pc != 0x135860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135860u; }
        if (ctx->pc != 0x135860u) { return; }
    }
    ctx->pc = 0x135860u;
    // 0x135860: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x135860u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x135864: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x135864u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x135868: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x135868u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
    // 0x13586c: 0x8e430080  lw          $v1, 0x80($s2)
    ctx->pc = 0x13586cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x135870: 0xae420080  sw          $v0, 0x80($s2)
    ctx->pc = 0x135870u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 2));
    // 0x135874: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x135874u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x135878: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x135878u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x13587c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x13587cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x135880: 0x96230000  lhu         $v1, 0x0($s1)
    ctx->pc = 0x135880u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x135884: 0x96a20002  lhu         $v0, 0x2($s5)
    ctx->pc = 0x135884u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 2)));
    // 0x135888: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x135888u;
    {
        const bool branch_taken_0x135888 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x13588Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135888u;
            // 0x13588c: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135888) {
            ctx->pc = 0x1358B0u;
            goto label_1358b0;
        }
    }
    ctx->pc = 0x135890u;
    // 0x135890: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x135890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135894: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x135894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x135898: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x135898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13589c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x13589cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1358a0: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x1358a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1358a4: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x1358a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1358a8: 0x40f809  jalr        $v0
    ctx->pc = 0x1358A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1358B0u);
        ctx->pc = 0x1358ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1358A8u;
            // 0x1358ac: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1358B0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x135358u: goto label_135358;
            case 0x135388u: goto label_135388;
            case 0x135400u: goto label_135400;
            case 0x135420u: goto label_135420;
            case 0x135498u: goto label_135498;
            case 0x13549Cu: goto label_13549c;
            case 0x1354B0u: goto label_1354b0;
            case 0x1354E0u: goto label_1354e0;
            case 0x1354E4u: goto label_1354e4;
            case 0x135514u: goto label_135514;
            case 0x13551Cu: goto label_13551c;
            case 0x135530u: goto label_135530;
            case 0x13554Cu: goto label_13554c;
            case 0x135560u: goto label_135560;
            case 0x135580u: goto label_135580;
            case 0x135590u: goto label_135590;
            case 0x135628u: goto label_135628;
            case 0x135648u: goto label_135648;
            case 0x135688u: goto label_135688;
            case 0x1356A8u: goto label_1356a8;
            case 0x1356E0u: goto label_1356e0;
            case 0x135760u: goto label_135760;
            case 0x135774u: goto label_135774;
            case 0x1357A0u: goto label_1357a0;
            case 0x1357A8u: goto label_1357a8;
            case 0x1357ACu: goto label_1357ac;
            case 0x1357E0u: goto label_1357e0;
            case 0x135850u: goto label_135850;
            case 0x1358B0u: goto label_1358b0;
            case 0x1358B4u: goto label_1358b4;
            case 0x1358C0u: goto label_1358c0;
            case 0x1358D4u: goto label_1358d4;
            case 0x135938u: goto label_135938;
            case 0x135950u: goto label_135950;
            case 0x135998u: goto label_135998;
            case 0x13599Cu: goto label_13599c;
            case 0x1359ACu: goto label_1359ac;
            case 0x1359D0u: goto label_1359d0;
            case 0x135A18u: goto label_135a18;
            case 0x135A60u: goto label_135a60;
            case 0x135A70u: goto label_135a70;
            case 0x135A78u: goto label_135a78;
            case 0x135A98u: goto label_135a98;
            case 0x135AA8u: goto label_135aa8;
            case 0x135ACCu: goto label_135acc;
            case 0x135B70u: goto label_135b70;
            case 0x135BC0u: goto label_135bc0;
            case 0x135BE0u: goto label_135be0;
            case 0x135C08u: goto label_135c08;
            case 0x135C48u: goto label_135c48;
            case 0x135CA0u: goto label_135ca0;
            case 0x135CA8u: goto label_135ca8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1358B0u; }
            if (ctx->pc != 0x1358B0u) { return; }
        }
        }
    }
    ctx->pc = 0x1358B0u;
label_1358b0:
    // 0x1358b0: 0x8e730000  lw          $s3, 0x0($s3)
    ctx->pc = 0x1358b0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1358b4:
    // 0x1358b4: 0x5674ffca  bnel        $s3, $s4, . + 4 + (-0x36 << 2)
    ctx->pc = 0x1358B4u;
    {
        const bool branch_taken_0x1358b4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 20));
        if (branch_taken_0x1358b4) {
            ctx->pc = 0x1358B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1358B4u;
            // 0x1358b8: 0x8e650008  lw          $a1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1357E0u;
            runtime->cooperativeGuestYield();
            goto label_1357e0;
        }
    }
    ctx->pc = 0x1358BCu;
    // 0x1358bc: 0x8ea30030  lw          $v1, 0x30($s5)
    ctx->pc = 0x1358bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 48)));
label_1358c0:
    // 0x1358c0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1358c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1358c4: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x1358c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1358c8: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x1358c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x1358cc: 0x40f809  jalr        $v0
    ctx->pc = 0x1358CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1358D4u);
        ctx->pc = 0x1358D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1358CCu;
            // 0x1358d0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1358D4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x135358u: goto label_135358;
            case 0x135388u: goto label_135388;
            case 0x135400u: goto label_135400;
            case 0x135420u: goto label_135420;
            case 0x135498u: goto label_135498;
            case 0x13549Cu: goto label_13549c;
            case 0x1354B0u: goto label_1354b0;
            case 0x1354E0u: goto label_1354e0;
            case 0x1354E4u: goto label_1354e4;
            case 0x135514u: goto label_135514;
            case 0x13551Cu: goto label_13551c;
            case 0x135530u: goto label_135530;
            case 0x13554Cu: goto label_13554c;
            case 0x135560u: goto label_135560;
            case 0x135580u: goto label_135580;
            case 0x135590u: goto label_135590;
            case 0x135628u: goto label_135628;
            case 0x135648u: goto label_135648;
            case 0x135688u: goto label_135688;
            case 0x1356A8u: goto label_1356a8;
            case 0x1356E0u: goto label_1356e0;
            case 0x135760u: goto label_135760;
            case 0x135774u: goto label_135774;
            case 0x1357A0u: goto label_1357a0;
            case 0x1357A8u: goto label_1357a8;
            case 0x1357ACu: goto label_1357ac;
            case 0x1357E0u: goto label_1357e0;
            case 0x135850u: goto label_135850;
            case 0x1358B0u: goto label_1358b0;
            case 0x1358B4u: goto label_1358b4;
            case 0x1358C0u: goto label_1358c0;
            case 0x1358D4u: goto label_1358d4;
            case 0x135938u: goto label_135938;
            case 0x135950u: goto label_135950;
            case 0x135998u: goto label_135998;
            case 0x13599Cu: goto label_13599c;
            case 0x1359ACu: goto label_1359ac;
            case 0x1359D0u: goto label_1359d0;
            case 0x135A18u: goto label_135a18;
            case 0x135A60u: goto label_135a60;
            case 0x135A70u: goto label_135a70;
            case 0x135A78u: goto label_135a78;
            case 0x135A98u: goto label_135a98;
            case 0x135AA8u: goto label_135aa8;
            case 0x135ACCu: goto label_135acc;
            case 0x135B70u: goto label_135b70;
            case 0x135BC0u: goto label_135bc0;
            case 0x135BE0u: goto label_135be0;
            case 0x135C08u: goto label_135c08;
            case 0x135C48u: goto label_135c48;
            case 0x135CA0u: goto label_135ca0;
            case 0x135CA8u: goto label_135ca8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1358D4u; }
            if (ctx->pc != 0x1358D4u) { return; }
        }
        }
    }
    ctx->pc = 0x1358D4u;
label_1358d4:
    // 0x1358d4: 0xc04d308  jal         func_134C20
    ctx->pc = 0x1358D4u;
    SET_GPR_U32(ctx, 31, 0x1358DCu);
    ctx->pc = 0x1358D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1358D4u;
            // 0x1358d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C20u;
    if (runtime->hasFunction(0x134C20u)) {
        auto targetFn = runtime->lookupFunction(0x134C20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1358DCu; }
        if (ctx->pc != 0x1358DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00134C20_0x134c20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1358DCu; }
        if (ctx->pc != 0x1358DCu) { return; }
    }
    ctx->pc = 0x1358DCu;
    // 0x1358dc: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1358dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1358e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1358e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1358e4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1358e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1358e8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1358e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1358ec: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1358ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1358f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1358f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1358f4: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1358f4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1358f8: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x1358f8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1358fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1358fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x135900: 0x3e00008  jr          $ra
    ctx->pc = 0x135900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135900u;
            // 0x135904: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x135358u: goto label_135358;
            case 0x135388u: goto label_135388;
            case 0x135400u: goto label_135400;
            case 0x135420u: goto label_135420;
            case 0x135498u: goto label_135498;
            case 0x13549Cu: goto label_13549c;
            case 0x1354B0u: goto label_1354b0;
            case 0x1354E0u: goto label_1354e0;
            case 0x1354E4u: goto label_1354e4;
            case 0x135514u: goto label_135514;
            case 0x13551Cu: goto label_13551c;
            case 0x135530u: goto label_135530;
            case 0x13554Cu: goto label_13554c;
            case 0x135560u: goto label_135560;
            case 0x135580u: goto label_135580;
            case 0x135590u: goto label_135590;
            case 0x135628u: goto label_135628;
            case 0x135648u: goto label_135648;
            case 0x135688u: goto label_135688;
            case 0x1356A8u: goto label_1356a8;
            case 0x1356E0u: goto label_1356e0;
            case 0x135760u: goto label_135760;
            case 0x135774u: goto label_135774;
            case 0x1357A0u: goto label_1357a0;
            case 0x1357A8u: goto label_1357a8;
            case 0x1357ACu: goto label_1357ac;
            case 0x1357E0u: goto label_1357e0;
            case 0x135850u: goto label_135850;
            case 0x1358B0u: goto label_1358b0;
            case 0x1358B4u: goto label_1358b4;
            case 0x1358C0u: goto label_1358c0;
            case 0x1358D4u: goto label_1358d4;
            case 0x135938u: goto label_135938;
            case 0x135950u: goto label_135950;
            case 0x135998u: goto label_135998;
            case 0x13599Cu: goto label_13599c;
            case 0x1359ACu: goto label_1359ac;
            case 0x1359D0u: goto label_1359d0;
            case 0x135A18u: goto label_135a18;
            case 0x135A60u: goto label_135a60;
            case 0x135A70u: goto label_135a70;
            case 0x135A78u: goto label_135a78;
            case 0x135A98u: goto label_135a98;
            case 0x135AA8u: goto label_135aa8;
            case 0x135ACCu: goto label_135acc;
            case 0x135B70u: goto label_135b70;
            case 0x135BC0u: goto label_135bc0;
            case 0x135BE0u: goto label_135be0;
            case 0x135C08u: goto label_135c08;
            case 0x135C48u: goto label_135c48;
            case 0x135CA0u: goto label_135ca0;
            case 0x135CA8u: goto label_135ca8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x135908u;
    // 0x135908: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x135908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13590c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x13590cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x135910: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x135910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x135914: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x135914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135918: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x135918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x13591c: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x13591cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x135920: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x135920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x135924: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x135924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x135928: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x135928u;
    {
        const bool branch_taken_0x135928 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13592Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135928u;
            // 0x13592c: 0xae020078  sw          $v0, 0x78($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135928) {
            ctx->pc = 0x135938u;
            goto label_135938;
        }
    }
    ctx->pc = 0x135930u;
    // 0x135930: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x135930u;
    {
        const bool branch_taken_0x135930 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135930u;
            // 0x135934: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135930) {
            ctx->pc = 0x13599Cu;
            goto label_13599c;
        }
    }
    ctx->pc = 0x135938u;
label_135938:
    // 0x135938: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x135938u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x13593c: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x13593cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x135940: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x135940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x135944: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x135944u;
    {
        const bool branch_taken_0x135944 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x135948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135944u;
            // 0x135948: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135944) {
            ctx->pc = 0x135998u;
            goto label_135998;
        }
    }
    ctx->pc = 0x13594Cu;
    // 0x13594c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x13594cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_135950:
    // 0x135950: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x135950u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x135954: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x135954u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x135958: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x135958u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13595c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x13595cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x135960: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x135960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x135964: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x135964u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x135968: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x135968u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13596c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13596cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x135970: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x135970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x135974: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x135974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x135978: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x135978u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x13597c: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x13597cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x135980: 0x40f809  jalr        $v0
    ctx->pc = 0x135980u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x135988u);
        ctx->pc = 0x135984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135980u;
            // 0x135984: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x135988u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x135358u: goto label_135358;
            case 0x135388u: goto label_135388;
            case 0x135400u: goto label_135400;
            case 0x135420u: goto label_135420;
            case 0x135498u: goto label_135498;
            case 0x13549Cu: goto label_13549c;
            case 0x1354B0u: goto label_1354b0;
            case 0x1354E0u: goto label_1354e0;
            case 0x1354E4u: goto label_1354e4;
            case 0x135514u: goto label_135514;
            case 0x13551Cu: goto label_13551c;
            case 0x135530u: goto label_135530;
            case 0x13554Cu: goto label_13554c;
            case 0x135560u: goto label_135560;
            case 0x135580u: goto label_135580;
            case 0x135590u: goto label_135590;
            case 0x135628u: goto label_135628;
            case 0x135648u: goto label_135648;
            case 0x135688u: goto label_135688;
            case 0x1356A8u: goto label_1356a8;
            case 0x1356E0u: goto label_1356e0;
            case 0x135760u: goto label_135760;
            case 0x135774u: goto label_135774;
            case 0x1357A0u: goto label_1357a0;
            case 0x1357A8u: goto label_1357a8;
            case 0x1357ACu: goto label_1357ac;
            case 0x1357E0u: goto label_1357e0;
            case 0x135850u: goto label_135850;
            case 0x1358B0u: goto label_1358b0;
            case 0x1358B4u: goto label_1358b4;
            case 0x1358C0u: goto label_1358c0;
            case 0x1358D4u: goto label_1358d4;
            case 0x135938u: goto label_135938;
            case 0x135950u: goto label_135950;
            case 0x135998u: goto label_135998;
            case 0x13599Cu: goto label_13599c;
            case 0x1359ACu: goto label_1359ac;
            case 0x1359D0u: goto label_1359d0;
            case 0x135A18u: goto label_135a18;
            case 0x135A60u: goto label_135a60;
            case 0x135A70u: goto label_135a70;
            case 0x135A78u: goto label_135a78;
            case 0x135A98u: goto label_135a98;
            case 0x135AA8u: goto label_135aa8;
            case 0x135ACCu: goto label_135acc;
            case 0x135B70u: goto label_135b70;
            case 0x135BC0u: goto label_135bc0;
            case 0x135BE0u: goto label_135be0;
            case 0x135C08u: goto label_135c08;
            case 0x135C48u: goto label_135c48;
            case 0x135CA0u: goto label_135ca0;
            case 0x135CA8u: goto label_135ca8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x135988u; }
            if (ctx->pc != 0x135988u) { return; }
        }
        }
    }
    ctx->pc = 0x135988u;
    // 0x135988: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x135988u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x13598c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x13598cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135990: 0x1462ffef  bne         $v1, $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x135990u;
    {
        const bool branch_taken_0x135990 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x135994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135990u;
            // 0x135994: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135990) {
            ctx->pc = 0x135950u;
            runtime->cooperativeGuestYield();
            goto label_135950;
        }
    }
    ctx->pc = 0x135998u;
label_135998:
    // 0x135998: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x135998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_13599c:
    // 0x13599c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13599Cu;
    {
        const bool branch_taken_0x13599c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1359A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13599Cu;
            // 0x1359a0: 0x24020079  addiu       $v0, $zero, 0x79 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13599c) {
            ctx->pc = 0x1359ACu;
            goto label_1359ac;
        }
    }
    ctx->pc = 0x1359A4u;
    // 0x1359a4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1359A4u;
    {
        const bool branch_taken_0x1359a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1359A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1359A4u;
            // 0x1359a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1359a4) {
            ctx->pc = 0x1359D0u;
            goto label_1359d0;
        }
    }
    ctx->pc = 0x1359ACu;
label_1359ac:
    // 0x1359ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1359acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1359b0: 0xa7a20010  sh          $v0, 0x10($sp)
    ctx->pc = 0x1359b0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x1359b4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1359b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1359b8: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1359b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x1359bc: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x1359bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x1359c0: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x1359c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x1359c4: 0xc04d294  jal         func_134A50
    ctx->pc = 0x1359C4u;
    SET_GPR_U32(ctx, 31, 0x1359CCu);
    ctx->pc = 0x1359C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1359C4u;
            // 0x1359c8: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134A50u;
    if (runtime->hasFunction(0x134A50u)) {
        auto targetFn = runtime->lookupFunction(0x134A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1359CCu; }
        if (ctx->pc != 0x1359CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00134A50_0x134a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1359CCu; }
        if (ctx->pc != 0x1359CCu) { return; }
    }
    ctx->pc = 0x1359CCu;
    // 0x1359cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1359ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1359d0:
    // 0x1359d0: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x1359d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1359d4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1359d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1359d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1359D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1359DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1359D8u;
            // 0x1359dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x135358u: goto label_135358;
            case 0x135388u: goto label_135388;
            case 0x135400u: goto label_135400;
            case 0x135420u: goto label_135420;
            case 0x135498u: goto label_135498;
            case 0x13549Cu: goto label_13549c;
            case 0x1354B0u: goto label_1354b0;
            case 0x1354E0u: goto label_1354e0;
            case 0x1354E4u: goto label_1354e4;
            case 0x135514u: goto label_135514;
            case 0x13551Cu: goto label_13551c;
            case 0x135530u: goto label_135530;
            case 0x13554Cu: goto label_13554c;
            case 0x135560u: goto label_135560;
            case 0x135580u: goto label_135580;
            case 0x135590u: goto label_135590;
            case 0x135628u: goto label_135628;
            case 0x135648u: goto label_135648;
            case 0x135688u: goto label_135688;
            case 0x1356A8u: goto label_1356a8;
            case 0x1356E0u: goto label_1356e0;
            case 0x135760u: goto label_135760;
            case 0x135774u: goto label_135774;
            case 0x1357A0u: goto label_1357a0;
            case 0x1357A8u: goto label_1357a8;
            case 0x1357ACu: goto label_1357ac;
            case 0x1357E0u: goto label_1357e0;
            case 0x135850u: goto label_135850;
            case 0x1358B0u: goto label_1358b0;
            case 0x1358B4u: goto label_1358b4;
            case 0x1358C0u: goto label_1358c0;
            case 0x1358D4u: goto label_1358d4;
            case 0x135938u: goto label_135938;
            case 0x135950u: goto label_135950;
            case 0x135998u: goto label_135998;
            case 0x13599Cu: goto label_13599c;
            case 0x1359ACu: goto label_1359ac;
            case 0x1359D0u: goto label_1359d0;
            case 0x135A18u: goto label_135a18;
            case 0x135A60u: goto label_135a60;
            case 0x135A70u: goto label_135a70;
            case 0x135A78u: goto label_135a78;
            case 0x135A98u: goto label_135a98;
            case 0x135AA8u: goto label_135aa8;
            case 0x135ACCu: goto label_135acc;
            case 0x135B70u: goto label_135b70;
            case 0x135BC0u: goto label_135bc0;
            case 0x135BE0u: goto label_135be0;
            case 0x135C08u: goto label_135c08;
            case 0x135C48u: goto label_135c48;
            case 0x135CA0u: goto label_135ca0;
            case 0x135CA8u: goto label_135ca8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1359E0u;
    // 0x1359e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1359e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1359e4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1359e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1359e8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1359e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1359ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1359ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1359f0: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x1359f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x1359f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1359f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1359f8: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1359F8u;
    {
        const bool branch_taken_0x1359f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1359FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1359F8u;
            // 0x1359fc: 0xae020078  sw          $v0, 0x78($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1359f8) {
            ctx->pc = 0x135A78u;
            goto label_135a78;
        }
    }
    ctx->pc = 0x135A00u;
    // 0x135a00: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x135a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x135a04: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x135a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x135a08: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x135a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x135a0c: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x135A0Cu;
    {
        const bool branch_taken_0x135a0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x135A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135A0Cu;
            // 0x135a10: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135a0c) {
            ctx->pc = 0x135A70u;
            goto label_135a70;
        }
    }
    ctx->pc = 0x135A14u;
    // 0x135a14: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x135a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_135a18:
    // 0x135a18: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x135a18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x135a1c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x135a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x135a20: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x135a20u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x135a24: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x135a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x135a28: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x135A28u;
    {
        const bool branch_taken_0x135a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x135A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135A28u;
            // 0x135a2c: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135a28) {
            ctx->pc = 0x135A60u;
            goto label_135a60;
        }
    }
    ctx->pc = 0x135A30u;
    // 0x135a30: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x135a30u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x135a34: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x135a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x135a38: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x135a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x135a3c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x135a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x135a40: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x135a40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x135a44: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x135a44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x135a48: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x135a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x135a4c: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x135a4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x135a50: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x135a50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x135a54: 0x40f809  jalr        $v0
    ctx->pc = 0x135A54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x135A5Cu);
        ctx->pc = 0x135A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135A54u;
            // 0x135a58: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x135A5Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x135358u: goto label_135358;
            case 0x135388u: goto label_135388;
            case 0x135400u: goto label_135400;
            case 0x135420u: goto label_135420;
            case 0x135498u: goto label_135498;
            case 0x13549Cu: goto label_13549c;
            case 0x1354B0u: goto label_1354b0;
            case 0x1354E0u: goto label_1354e0;
            case 0x1354E4u: goto label_1354e4;
            case 0x135514u: goto label_135514;
            case 0x13551Cu: goto label_13551c;
            case 0x135530u: goto label_135530;
            case 0x13554Cu: goto label_13554c;
            case 0x135560u: goto label_135560;
            case 0x135580u: goto label_135580;
            case 0x135590u: goto label_135590;
            case 0x135628u: goto label_135628;
            case 0x135648u: goto label_135648;
            case 0x135688u: goto label_135688;
            case 0x1356A8u: goto label_1356a8;
            case 0x1356E0u: goto label_1356e0;
            case 0x135760u: goto label_135760;
            case 0x135774u: goto label_135774;
            case 0x1357A0u: goto label_1357a0;
            case 0x1357A8u: goto label_1357a8;
            case 0x1357ACu: goto label_1357ac;
            case 0x1357E0u: goto label_1357e0;
            case 0x135850u: goto label_135850;
            case 0x1358B0u: goto label_1358b0;
            case 0x1358B4u: goto label_1358b4;
            case 0x1358C0u: goto label_1358c0;
            case 0x1358D4u: goto label_1358d4;
            case 0x135938u: goto label_135938;
            case 0x135950u: goto label_135950;
            case 0x135998u: goto label_135998;
            case 0x13599Cu: goto label_13599c;
            case 0x1359ACu: goto label_1359ac;
            case 0x1359D0u: goto label_1359d0;
            case 0x135A18u: goto label_135a18;
            case 0x135A60u: goto label_135a60;
            case 0x135A70u: goto label_135a70;
            case 0x135A78u: goto label_135a78;
            case 0x135A98u: goto label_135a98;
            case 0x135AA8u: goto label_135aa8;
            case 0x135ACCu: goto label_135acc;
            case 0x135B70u: goto label_135b70;
            case 0x135BC0u: goto label_135bc0;
            case 0x135BE0u: goto label_135be0;
            case 0x135C08u: goto label_135c08;
            case 0x135C48u: goto label_135c48;
            case 0x135CA0u: goto label_135ca0;
            case 0x135CA8u: goto label_135ca8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x135A5Cu; }
            if (ctx->pc != 0x135A5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x135A5Cu;
    // 0x135a5c: 0x0  nop
    ctx->pc = 0x135a5cu;
    // NOP
label_135a60:
    // 0x135a60: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x135a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x135a64: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x135a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x135a68: 0x1462ffeb  bne         $v1, $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x135A68u;
    {
        const bool branch_taken_0x135a68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x135A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135A68u;
            // 0x135a6c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135a68) {
            ctx->pc = 0x135A18u;
            runtime->cooperativeGuestYield();
            goto label_135a18;
        }
    }
    ctx->pc = 0x135A70u;
label_135a70:
    // 0x135a70: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x135A70u;
    {
        const bool branch_taken_0x135a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135A70u;
            // 0x135a74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135a70) {
            ctx->pc = 0x135A98u;
            goto label_135a98;
        }
    }
    ctx->pc = 0x135A78u;
label_135a78:
    // 0x135a78: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x135a78u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x135a7c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x135a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x135a80: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x135A80u;
    {
        const bool branch_taken_0x135a80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x135A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135A80u;
            // 0x135a84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135a80) {
            ctx->pc = 0x135A98u;
            goto label_135a98;
        }
    }
    ctx->pc = 0x135A88u;
    // 0x135a88: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x135a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x135a8c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x135a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x135a90: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x135a90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x135a94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x135a94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_135a98:
    // 0x135a98: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x135A98u;
    {
        const bool branch_taken_0x135a98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x135A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135A98u;
            // 0x135a9c: 0x2402007a  addiu       $v0, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135a98) {
            ctx->pc = 0x135AA8u;
            goto label_135aa8;
        }
    }
    ctx->pc = 0x135AA0u;
    // 0x135aa0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x135AA0u;
    {
        const bool branch_taken_0x135aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135AA0u;
            // 0x135aa4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135aa0) {
            ctx->pc = 0x135ACCu;
            goto label_135acc;
        }
    }
    ctx->pc = 0x135AA8u;
label_135aa8:
    // 0x135aa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x135aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135aac: 0xa7a20010  sh          $v0, 0x10($sp)
    ctx->pc = 0x135aacu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 16), (uint16_t)GPR_U32(ctx, 2));
    // 0x135ab0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x135ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x135ab4: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x135ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x135ab8: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x135ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x135abc: 0xafa0001c  sw          $zero, 0x1C($sp)
    ctx->pc = 0x135abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 0));
    // 0x135ac0: 0xc04d294  jal         func_134A50
    ctx->pc = 0x135AC0u;
    SET_GPR_U32(ctx, 31, 0x135AC8u);
    ctx->pc = 0x135AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135AC0u;
            // 0x135ac4: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134A50u;
    if (runtime->hasFunction(0x134A50u)) {
        auto targetFn = runtime->lookupFunction(0x134A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135AC8u; }
        if (ctx->pc != 0x135AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00134A50_0x134a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135AC8u; }
        if (ctx->pc != 0x135AC8u) { return; }
    }
    ctx->pc = 0x135AC8u;
    // 0x135ac8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x135ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_135acc:
    // 0x135acc: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x135accu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x135ad0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x135ad0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135ad4: 0x3e00008  jr          $ra
    ctx->pc = 0x135AD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135AD4u;
            // 0x135ad8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x135358u: goto label_135358;
            case 0x135388u: goto label_135388;
            case 0x135400u: goto label_135400;
            case 0x135420u: goto label_135420;
            case 0x135498u: goto label_135498;
            case 0x13549Cu: goto label_13549c;
            case 0x1354B0u: goto label_1354b0;
            case 0x1354E0u: goto label_1354e0;
            case 0x1354E4u: goto label_1354e4;
            case 0x135514u: goto label_135514;
            case 0x13551Cu: goto label_13551c;
            case 0x135530u: goto label_135530;
            case 0x13554Cu: goto label_13554c;
            case 0x135560u: goto label_135560;
            case 0x135580u: goto label_135580;
            case 0x135590u: goto label_135590;
            case 0x135628u: goto label_135628;
            case 0x135648u: goto label_135648;
            case 0x135688u: goto label_135688;
            case 0x1356A8u: goto label_1356a8;
            case 0x1356E0u: goto label_1356e0;
            case 0x135760u: goto label_135760;
            case 0x135774u: goto label_135774;
            case 0x1357A0u: goto label_1357a0;
            case 0x1357A8u: goto label_1357a8;
            case 0x1357ACu: goto label_1357ac;
            case 0x1357E0u: goto label_1357e0;
            case 0x135850u: goto label_135850;
            case 0x1358B0u: goto label_1358b0;
            case 0x1358B4u: goto label_1358b4;
            case 0x1358C0u: goto label_1358c0;
            case 0x1358D4u: goto label_1358d4;
            case 0x135938u: goto label_135938;
            case 0x135950u: goto label_135950;
            case 0x135998u: goto label_135998;
            case 0x13599Cu: goto label_13599c;
            case 0x1359ACu: goto label_1359ac;
            case 0x1359D0u: goto label_1359d0;
            case 0x135A18u: goto label_135a18;
            case 0x135A60u: goto label_135a60;
            case 0x135A70u: goto label_135a70;
            case 0x135A78u: goto label_135a78;
            case 0x135A98u: goto label_135a98;
            case 0x135AA8u: goto label_135aa8;
            case 0x135ACCu: goto label_135acc;
            case 0x135B70u: goto label_135b70;
            case 0x135BC0u: goto label_135bc0;
            case 0x135BE0u: goto label_135be0;
            case 0x135C08u: goto label_135c08;
            case 0x135C48u: goto label_135c48;
            case 0x135CA0u: goto label_135ca0;
            case 0x135CA8u: goto label_135ca8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x135ADCu;
    // 0x135adc: 0x0  nop
    ctx->pc = 0x135adcu;
    // NOP
    // 0x135ae0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x135ae0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x135ae4: 0x2402007b  addiu       $v0, $zero, 0x7B
    ctx->pc = 0x135ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    // 0x135ae8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x135ae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x135aec: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x135aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x135af0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x135af0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135af4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x135af4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135af8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x135af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x135afc: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x135afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x135b00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x135b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135b04: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x135b04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x135b08: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x135b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135b0c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x135b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x135b10: 0xa7a20000  sh          $v0, 0x0($sp)
    ctx->pc = 0x135b10u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x135b14: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x135b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x135b18: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x135b18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x135b1c: 0xc04d294  jal         func_134A50
    ctx->pc = 0x135B1Cu;
    SET_GPR_U32(ctx, 31, 0x135B24u);
    ctx->pc = 0x135B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135B1Cu;
            // 0x135b20: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134A50u;
    if (runtime->hasFunction(0x134A50u)) {
        auto targetFn = runtime->lookupFunction(0x134A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135B24u; }
        if (ctx->pc != 0x135B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00134A50_0x134a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135B24u; }
        if (ctx->pc != 0x135B24u) { return; }
    }
    ctx->pc = 0x135B24u;
    // 0x135b24: 0x8e220074  lw          $v0, 0x74($s1)
    ctx->pc = 0x135b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
    // 0x135b28: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x135b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x135b2c: 0x1440005c  bnez        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x135B2Cu;
    {
        const bool branch_taken_0x135b2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x135B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135B2Cu;
            // 0x135b30: 0xae220074  sw          $v0, 0x74($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135b2c) {
            ctx->pc = 0x135CA0u;
            goto label_135ca0;
        }
    }
    ctx->pc = 0x135B34u;
    // 0x135b34: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x135b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x135b38: 0x26300080  addiu       $s0, $s1, 0x80
    ctx->pc = 0x135b38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
    // 0x135b3c: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x135b3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x135b40: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x135b40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x135b44: 0x40f809  jalr        $v0
    ctx->pc = 0x135B44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x135B4Cu);
        ctx->pc = 0x135B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135B44u;
            // 0x135b48: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x135B4Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x135358u: goto label_135358;
            case 0x135388u: goto label_135388;
            case 0x135400u: goto label_135400;
            case 0x135420u: goto label_135420;
            case 0x135498u: goto label_135498;
            case 0x13549Cu: goto label_13549c;
            case 0x1354B0u: goto label_1354b0;
            case 0x1354E0u: goto label_1354e0;
            case 0x1354E4u: goto label_1354e4;
            case 0x135514u: goto label_135514;
            case 0x13551Cu: goto label_13551c;
            case 0x135530u: goto label_135530;
            case 0x13554Cu: goto label_13554c;
            case 0x135560u: goto label_135560;
            case 0x135580u: goto label_135580;
            case 0x135590u: goto label_135590;
            case 0x135628u: goto label_135628;
            case 0x135648u: goto label_135648;
            case 0x135688u: goto label_135688;
            case 0x1356A8u: goto label_1356a8;
            case 0x1356E0u: goto label_1356e0;
            case 0x135760u: goto label_135760;
            case 0x135774u: goto label_135774;
            case 0x1357A0u: goto label_1357a0;
            case 0x1357A8u: goto label_1357a8;
            case 0x1357ACu: goto label_1357ac;
            case 0x1357E0u: goto label_1357e0;
            case 0x135850u: goto label_135850;
            case 0x1358B0u: goto label_1358b0;
            case 0x1358B4u: goto label_1358b4;
            case 0x1358C0u: goto label_1358c0;
            case 0x1358D4u: goto label_1358d4;
            case 0x135938u: goto label_135938;
            case 0x135950u: goto label_135950;
            case 0x135998u: goto label_135998;
            case 0x13599Cu: goto label_13599c;
            case 0x1359ACu: goto label_1359ac;
            case 0x1359D0u: goto label_1359d0;
            case 0x135A18u: goto label_135a18;
            case 0x135A60u: goto label_135a60;
            case 0x135A70u: goto label_135a70;
            case 0x135A78u: goto label_135a78;
            case 0x135A98u: goto label_135a98;
            case 0x135AA8u: goto label_135aa8;
            case 0x135ACCu: goto label_135acc;
            case 0x135B70u: goto label_135b70;
            case 0x135BC0u: goto label_135bc0;
            case 0x135BE0u: goto label_135be0;
            case 0x135C08u: goto label_135c08;
            case 0x135C48u: goto label_135c48;
            case 0x135CA0u: goto label_135ca0;
            case 0x135CA8u: goto label_135ca8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x135B4Cu; }
            if (ctx->pc != 0x135B4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x135B4Cu;
    // 0x135b4c: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x135b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x135b50: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x135b50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x135b54: 0xafb00020  sw          $s0, 0x20($sp)
    ctx->pc = 0x135b54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 16));
    // 0x135b58: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x135b58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x135b5c: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x135b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x135b60: 0x50500017  beql        $v0, $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x135B60u;
    {
        const bool branch_taken_0x135b60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x135b60) {
            ctx->pc = 0x135B64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x135B60u;
            // 0x135b64: 0x8e220080  lw          $v0, 0x80($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x135BC0u;
            goto label_135bc0;
        }
    }
    ctx->pc = 0x135B68u;
    // 0x135b68: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x135b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x135b6c: 0x0  nop
    ctx->pc = 0x135b6cu;
    // NOP
label_135b70:
    // 0x135b70: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x135b70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x135b74: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x135b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x135b78: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x135b78u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x135b7c: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x135b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x135b80: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x135b80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x135b84: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x135b84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x135b88: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x135b88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x135b8c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x135b8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x135b90: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x135b90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x135b94: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x135b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x135b98: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x135b98u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x135b9c: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x135b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x135ba0: 0x40f809  jalr        $v0
    ctx->pc = 0x135BA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x135BA8u);
        ctx->pc = 0x135BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135BA0u;
            // 0x135ba4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x135BA8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x135358u: goto label_135358;
            case 0x135388u: goto label_135388;
            case 0x135400u: goto label_135400;
            case 0x135420u: goto label_135420;
            case 0x135498u: goto label_135498;
            case 0x13549Cu: goto label_13549c;
            case 0x1354B0u: goto label_1354b0;
            case 0x1354E0u: goto label_1354e0;
            case 0x1354E4u: goto label_1354e4;
            case 0x135514u: goto label_135514;
            case 0x13551Cu: goto label_13551c;
            case 0x135530u: goto label_135530;
            case 0x13554Cu: goto label_13554c;
            case 0x135560u: goto label_135560;
            case 0x135580u: goto label_135580;
            case 0x135590u: goto label_135590;
            case 0x135628u: goto label_135628;
            case 0x135648u: goto label_135648;
            case 0x135688u: goto label_135688;
            case 0x1356A8u: goto label_1356a8;
            case 0x1356E0u: goto label_1356e0;
            case 0x135760u: goto label_135760;
            case 0x135774u: goto label_135774;
            case 0x1357A0u: goto label_1357a0;
            case 0x1357A8u: goto label_1357a8;
            case 0x1357ACu: goto label_1357ac;
            case 0x1357E0u: goto label_1357e0;
            case 0x135850u: goto label_135850;
            case 0x1358B0u: goto label_1358b0;
            case 0x1358B4u: goto label_1358b4;
            case 0x1358C0u: goto label_1358c0;
            case 0x1358D4u: goto label_1358d4;
            case 0x135938u: goto label_135938;
            case 0x135950u: goto label_135950;
            case 0x135998u: goto label_135998;
            case 0x13599Cu: goto label_13599c;
            case 0x1359ACu: goto label_1359ac;
            case 0x1359D0u: goto label_1359d0;
            case 0x135A18u: goto label_135a18;
            case 0x135A60u: goto label_135a60;
            case 0x135A70u: goto label_135a70;
            case 0x135A78u: goto label_135a78;
            case 0x135A98u: goto label_135a98;
            case 0x135AA8u: goto label_135aa8;
            case 0x135ACCu: goto label_135acc;
            case 0x135B70u: goto label_135b70;
            case 0x135BC0u: goto label_135bc0;
            case 0x135BE0u: goto label_135be0;
            case 0x135C08u: goto label_135c08;
            case 0x135C48u: goto label_135c48;
            case 0x135CA0u: goto label_135ca0;
            case 0x135CA8u: goto label_135ca8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x135BA8u; }
            if (ctx->pc != 0x135BA8u) { return; }
        }
        }
    }
    ctx->pc = 0x135BA8u;
    // 0x135ba8: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x135ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x135bac: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x135bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x135bb0: 0x1462ffef  bne         $v1, $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x135BB0u;
    {
        const bool branch_taken_0x135bb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x135BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135BB0u;
            // 0x135bb4: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135bb0) {
            ctx->pc = 0x135B70u;
            runtime->cooperativeGuestYield();
            goto label_135b70;
        }
    }
    ctx->pc = 0x135BB8u;
    // 0x135bb8: 0x8e220080  lw          $v0, 0x80($s1)
    ctx->pc = 0x135bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
    // 0x135bbc: 0x0  nop
    ctx->pc = 0x135bbcu;
    // NOP
label_135bc0:
    // 0x135bc0: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x135bc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x135bc4: 0xafb00030  sw          $s0, 0x30($sp)
    ctx->pc = 0x135bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
    // 0x135bc8: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x135bc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x135bcc: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x135bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x135bd0: 0x5050000d  beql        $v0, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x135BD0u;
    {
        const bool branch_taken_0x135bd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x135bd0) {
            ctx->pc = 0x135BD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x135BD0u;
            // 0x135bd4: 0x8e650030  lw          $a1, 0x30($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x135C08u;
            goto label_135c08;
        }
    }
    ctx->pc = 0x135BD8u;
    // 0x135bd8: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x135bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x135bdc: 0x0  nop
    ctx->pc = 0x135bdcu;
    // NOP
label_135be0:
    // 0x135be0: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x135be0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x135be4: 0x8c447910  lw          $a0, 0x7910($v0)
    ctx->pc = 0x135be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x135be8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x135be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x135bec: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x135BECu;
    SET_GPR_U32(ctx, 31, 0x135BF4u);
    ctx->pc = 0x135BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x135BECu;
            // 0x135bf0: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135BF4u; }
        if (ctx->pc != 0x135BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x135BF4u; }
        if (ctx->pc != 0x135BF4u) { return; }
    }
    ctx->pc = 0x135BF4u;
    // 0x135bf4: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x135bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x135bf8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x135bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x135bfc: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x135BFCu;
    {
        const bool branch_taken_0x135bfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x135C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135BFCu;
            // 0x135c00: 0x8fa50034  lw          $a1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135bfc) {
            ctx->pc = 0x135BE0u;
            runtime->cooperativeGuestYield();
            goto label_135be0;
        }
    }
    ctx->pc = 0x135C04u;
    // 0x135c04: 0x8e650030  lw          $a1, 0x30($s3)
    ctx->pc = 0x135c04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_135c08:
    // 0x135c08: 0xae100004  sw          $s0, 0x4($s0)
    ctx->pc = 0x135c08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
    // 0x135c0c: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x135c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x135c10: 0xae100000  sw          $s0, 0x0($s0)
    ctx->pc = 0x135c10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
    // 0x135c14: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x135c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x135c18: 0x84640090  lh          $a0, 0x90($v1)
    ctx->pc = 0x135c18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x135c1c: 0x40f809  jalr        $v0
    ctx->pc = 0x135C1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x135C24u);
        ctx->pc = 0x135C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135C1Cu;
            // 0x135c20: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x135C24u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x135358u: goto label_135358;
            case 0x135388u: goto label_135388;
            case 0x135400u: goto label_135400;
            case 0x135420u: goto label_135420;
            case 0x135498u: goto label_135498;
            case 0x13549Cu: goto label_13549c;
            case 0x1354B0u: goto label_1354b0;
            case 0x1354E0u: goto label_1354e0;
            case 0x1354E4u: goto label_1354e4;
            case 0x135514u: goto label_135514;
            case 0x13551Cu: goto label_13551c;
            case 0x135530u: goto label_135530;
            case 0x13554Cu: goto label_13554c;
            case 0x135560u: goto label_135560;
            case 0x135580u: goto label_135580;
            case 0x135590u: goto label_135590;
            case 0x135628u: goto label_135628;
            case 0x135648u: goto label_135648;
            case 0x135688u: goto label_135688;
            case 0x1356A8u: goto label_1356a8;
            case 0x1356E0u: goto label_1356e0;
            case 0x135760u: goto label_135760;
            case 0x135774u: goto label_135774;
            case 0x1357A0u: goto label_1357a0;
            case 0x1357A8u: goto label_1357a8;
            case 0x1357ACu: goto label_1357ac;
            case 0x1357E0u: goto label_1357e0;
            case 0x135850u: goto label_135850;
            case 0x1358B0u: goto label_1358b0;
            case 0x1358B4u: goto label_1358b4;
            case 0x1358C0u: goto label_1358c0;
            case 0x1358D4u: goto label_1358d4;
            case 0x135938u: goto label_135938;
            case 0x135950u: goto label_135950;
            case 0x135998u: goto label_135998;
            case 0x13599Cu: goto label_13599c;
            case 0x1359ACu: goto label_1359ac;
            case 0x1359D0u: goto label_1359d0;
            case 0x135A18u: goto label_135a18;
            case 0x135A60u: goto label_135a60;
            case 0x135A70u: goto label_135a70;
            case 0x135A78u: goto label_135a78;
            case 0x135A98u: goto label_135a98;
            case 0x135AA8u: goto label_135aa8;
            case 0x135ACCu: goto label_135acc;
            case 0x135B70u: goto label_135b70;
            case 0x135BC0u: goto label_135bc0;
            case 0x135BE0u: goto label_135be0;
            case 0x135C08u: goto label_135c08;
            case 0x135C48u: goto label_135c48;
            case 0x135CA0u: goto label_135ca0;
            case 0x135CA8u: goto label_135ca8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x135C24u; }
            if (ctx->pc != 0x135C24u) { return; }
        }
        }
    }
    ctx->pc = 0x135C24u;
    // 0x135c24: 0x54510008  bnel        $v0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x135C24u;
    {
        const bool branch_taken_0x135c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x135c24) {
            ctx->pc = 0x135C28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x135C24u;
            // 0x135c28: 0x8e27001c  lw          $a3, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x135C48u;
            goto label_135c48;
        }
    }
    ctx->pc = 0x135C2Cu;
    // 0x135c2c: 0x8e630030  lw          $v1, 0x30($s3)
    ctx->pc = 0x135c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x135c30: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x135c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x135c34: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x135c34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x135c38: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x135c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x135c3c: 0x40f809  jalr        $v0
    ctx->pc = 0x135C3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x135C44u);
        ctx->pc = 0x135C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135C3Cu;
            // 0x135c40: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x135C44u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x135358u: goto label_135358;
            case 0x135388u: goto label_135388;
            case 0x135400u: goto label_135400;
            case 0x135420u: goto label_135420;
            case 0x135498u: goto label_135498;
            case 0x13549Cu: goto label_13549c;
            case 0x1354B0u: goto label_1354b0;
            case 0x1354E0u: goto label_1354e0;
            case 0x1354E4u: goto label_1354e4;
            case 0x135514u: goto label_135514;
            case 0x13551Cu: goto label_13551c;
            case 0x135530u: goto label_135530;
            case 0x13554Cu: goto label_13554c;
            case 0x135560u: goto label_135560;
            case 0x135580u: goto label_135580;
            case 0x135590u: goto label_135590;
            case 0x135628u: goto label_135628;
            case 0x135648u: goto label_135648;
            case 0x135688u: goto label_135688;
            case 0x1356A8u: goto label_1356a8;
            case 0x1356E0u: goto label_1356e0;
            case 0x135760u: goto label_135760;
            case 0x135774u: goto label_135774;
            case 0x1357A0u: goto label_1357a0;
            case 0x1357A8u: goto label_1357a8;
            case 0x1357ACu: goto label_1357ac;
            case 0x1357E0u: goto label_1357e0;
            case 0x135850u: goto label_135850;
            case 0x1358B0u: goto label_1358b0;
            case 0x1358B4u: goto label_1358b4;
            case 0x1358C0u: goto label_1358c0;
            case 0x1358D4u: goto label_1358d4;
            case 0x135938u: goto label_135938;
            case 0x135950u: goto label_135950;
            case 0x135998u: goto label_135998;
            case 0x13599Cu: goto label_13599c;
            case 0x1359ACu: goto label_1359ac;
            case 0x1359D0u: goto label_1359d0;
            case 0x135A18u: goto label_135a18;
            case 0x135A60u: goto label_135a60;
            case 0x135A70u: goto label_135a70;
            case 0x135A78u: goto label_135a78;
            case 0x135A98u: goto label_135a98;
            case 0x135AA8u: goto label_135aa8;
            case 0x135ACCu: goto label_135acc;
            case 0x135B70u: goto label_135b70;
            case 0x135BC0u: goto label_135bc0;
            case 0x135BE0u: goto label_135be0;
            case 0x135C08u: goto label_135c08;
            case 0x135C48u: goto label_135c48;
            case 0x135CA0u: goto label_135ca0;
            case 0x135CA8u: goto label_135ca8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x135C44u; }
            if (ctx->pc != 0x135C44u) { return; }
        }
        }
    }
    ctx->pc = 0x135C44u;
    // 0x135c44: 0x8e27001c  lw          $a3, 0x1C($s1)
    ctx->pc = 0x135c44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_135c48:
    // 0x135c48: 0x8e650030  lw          $a1, 0x30($s3)
    ctx->pc = 0x135c48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x135c4c: 0x8ca40044  lw          $a0, 0x44($a1)
    ctx->pc = 0x135c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x135c50: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x135c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x135c54: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x135c54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x135c58: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x135c58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x135c5c: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x135c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x135c60: 0x24a60034  addiu       $a2, $a1, 0x34
    ctx->pc = 0x135c60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 52));
    // 0x135c64: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x135c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x135c68: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x135c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x135c6c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x135c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x135c70: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x135c70u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x135c74: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x135c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x135c78: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x135c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x135c7c: 0x8ca40034  lw          $a0, 0x34($a1)
    ctx->pc = 0x135c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x135c80: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x135c80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x135c84: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x135c84u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x135c88: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x135c88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x135c8c: 0x8e22007c  lw          $v0, 0x7C($s1)
    ctx->pc = 0x135c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x135c90: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x135c90u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x135c94: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x135c94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x135c98: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x135C98u;
    {
        const bool branch_taken_0x135c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x135C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135C98u;
            // 0x135c9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x135c98) {
            ctx->pc = 0x135CA8u;
            goto label_135ca8;
        }
    }
    ctx->pc = 0x135CA0u;
label_135ca0:
    // 0x135ca0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x135ca0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x135ca4: 0x0  nop
    ctx->pc = 0x135ca4u;
    // NOP
label_135ca8:
    // 0x135ca8: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x135ca8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x135cac: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x135cacu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x135cb0: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x135cb0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x135cb4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x135cb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x135cb8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x135cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x135cbc: 0x3e00008  jr          $ra
    ctx->pc = 0x135CBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x135CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x135CBCu;
            // 0x135cc0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x135358u: goto label_135358;
            case 0x135388u: goto label_135388;
            case 0x135400u: goto label_135400;
            case 0x135420u: goto label_135420;
            case 0x135498u: goto label_135498;
            case 0x13549Cu: goto label_13549c;
            case 0x1354B0u: goto label_1354b0;
            case 0x1354E0u: goto label_1354e0;
            case 0x1354E4u: goto label_1354e4;
            case 0x135514u: goto label_135514;
            case 0x13551Cu: goto label_13551c;
            case 0x135530u: goto label_135530;
            case 0x13554Cu: goto label_13554c;
            case 0x135560u: goto label_135560;
            case 0x135580u: goto label_135580;
            case 0x135590u: goto label_135590;
            case 0x135628u: goto label_135628;
            case 0x135648u: goto label_135648;
            case 0x135688u: goto label_135688;
            case 0x1356A8u: goto label_1356a8;
            case 0x1356E0u: goto label_1356e0;
            case 0x135760u: goto label_135760;
            case 0x135774u: goto label_135774;
            case 0x1357A0u: goto label_1357a0;
            case 0x1357A8u: goto label_1357a8;
            case 0x1357ACu: goto label_1357ac;
            case 0x1357E0u: goto label_1357e0;
            case 0x135850u: goto label_135850;
            case 0x1358B0u: goto label_1358b0;
            case 0x1358B4u: goto label_1358b4;
            case 0x1358C0u: goto label_1358c0;
            case 0x1358D4u: goto label_1358d4;
            case 0x135938u: goto label_135938;
            case 0x135950u: goto label_135950;
            case 0x135998u: goto label_135998;
            case 0x13599Cu: goto label_13599c;
            case 0x1359ACu: goto label_1359ac;
            case 0x1359D0u: goto label_1359d0;
            case 0x135A18u: goto label_135a18;
            case 0x135A60u: goto label_135a60;
            case 0x135A70u: goto label_135a70;
            case 0x135A78u: goto label_135a78;
            case 0x135A98u: goto label_135a98;
            case 0x135AA8u: goto label_135aa8;
            case 0x135ACCu: goto label_135acc;
            case 0x135B70u: goto label_135b70;
            case 0x135BC0u: goto label_135bc0;
            case 0x135BE0u: goto label_135be0;
            case 0x135C08u: goto label_135c08;
            case 0x135C48u: goto label_135c48;
            case 0x135CA0u: goto label_135ca0;
            case 0x135CA8u: goto label_135ca8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x135CC4u;
    // 0x135cc4: 0x0  nop
    ctx->pc = 0x135cc4u;
    // NOP
}
