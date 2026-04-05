#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00133450
// Address: 0x133450 - 0x1335f8
void sub_00133450_0x133450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00133450_0x133450");
#endif

    ctx->pc = 0x133450u;

    // 0x133450: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x133450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x133454: 0x24840024  addiu       $a0, $a0, 0x24
    ctx->pc = 0x133454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x133458: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x133458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x13345c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x13345cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133460: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x133460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x133464: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x133464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x133468: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x133468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13346c: 0x0  nop
    ctx->pc = 0x13346cu;
    // NOP
label_133470:
    // 0x133470: 0x0  nop
    ctx->pc = 0x133470u;
    // NOP
    // 0x133474: 0x0  nop
    ctx->pc = 0x133474u;
    // NOP
    // 0x133478: 0x0  nop
    ctx->pc = 0x133478u;
    // NOP
    // 0x13347c: 0x0  nop
    ctx->pc = 0x13347cu;
    // NOP
    // 0x133480: 0x0  nop
    ctx->pc = 0x133480u;
    // NOP
    // 0x133484: 0x54a2fffa  bnel        $a1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x133484u;
    {
        const bool branch_taken_0x133484 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x133484) {
            ctx->pc = 0x133488u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x133484u;
            // 0x133488: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x133470u;
            runtime->cooperativeGuestYield();
            goto label_133470;
        }
    }
    ctx->pc = 0x13348Cu;
    // 0x13348c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x13348cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x133490: 0xacc50080  sw          $a1, 0x80($a2)
    ctx->pc = 0x133490u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 5));
    // 0x133494: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x133494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x133498: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x133498u;
    {
        const bool branch_taken_0x133498 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13349Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133498u;
            // 0x13349c: 0xacc00084  sw          $zero, 0x84($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133498) {
            ctx->pc = 0x1334D8u;
            goto label_1334d8;
        }
    }
    ctx->pc = 0x1334A0u;
    // 0x1334a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1334a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1334a4: 0x1043000d  beq         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1334A4u;
    {
        const bool branch_taken_0x1334a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1334A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1334A4u;
            // 0x1334a8: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1334a4) {
            ctx->pc = 0x1334DCu;
            goto label_1334dc;
        }
    }
    ctx->pc = 0x1334ACu;
    // 0x1334ac: 0xacc00080  sw          $zero, 0x80($a2)
    ctx->pc = 0x1334acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 0));
    // 0x1334b0: 0x6ba20097  ldl         $v0, 0x97($sp)
    ctx->pc = 0x1334b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1334b4: 0x6fa20090  ldr         $v0, 0x90($sp)
    ctx->pc = 0x1334b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1334b8: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x1334b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1334bc: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x1334bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1334c0: 0x8cc20080  lw          $v0, 0x80($a2)
    ctx->pc = 0x1334c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x1334c4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1334c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1334c8: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1334c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1334cc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1334ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1334d0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1334d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1334d4: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1334d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_1334d8:
    // 0x1334d8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1334d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1334dc:
    // 0x1334dc: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x1334dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x1334e0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1334e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1334e4: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1334E4u;
    {
        const bool branch_taken_0x1334e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1334E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1334E4u;
            // 0x1334e8: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1334e4) {
            ctx->pc = 0x1335F0u;
            goto label_1335f0;
        }
    }
    ctx->pc = 0x1334ECu;
    // 0x1334ec: 0x0  nop
    ctx->pc = 0x1334ecu;
    // NOP
label_1334f0:
    // 0x1334f0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1334f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1334f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1334f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1334f8: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1334f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1334fc: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x1334fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x133500: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x133500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x133504: 0x2462fff8  addiu       $v0, $v1, -0x8
    ctx->pc = 0x133504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x133508: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x133508u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x13350c: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x13350cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x133510: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x133510u;
    {
        const bool branch_taken_0x133510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x133514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133510u;
            // 0x133514: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133510) {
            ctx->pc = 0x133528u;
            goto label_133528;
        }
    }
    ctx->pc = 0x133518u;
    // 0x133518: 0x40f809  jalr        $v0
    ctx->pc = 0x133518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x133520u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x133520u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133470u: goto label_133470;
            case 0x1334D8u: goto label_1334d8;
            case 0x1334DCu: goto label_1334dc;
            case 0x1334F0u: goto label_1334f0;
            case 0x133528u: goto label_133528;
            case 0x133598u: goto label_133598;
            case 0x13359Cu: goto label_13359c;
            case 0x1335A8u: goto label_1335a8;
            case 0x1335E0u: goto label_1335e0;
            case 0x1335F0u: goto label_1335f0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x133520u; }
            if (ctx->pc != 0x133520u) { return; }
        }
        }
    }
    ctx->pc = 0x133520u;
    // 0x133520: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x133520u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133524: 0x0  nop
    ctx->pc = 0x133524u;
    // NOP
label_133528:
    // 0x133528: 0x8fa70080  lw          $a3, 0x80($sp)
    ctx->pc = 0x133528u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13352c: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x13352cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x133530: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x133530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x133534: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x133534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x133538: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x133538u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13353c: 0x24a2fff8  addiu       $v0, $a1, -0x8
    ctx->pc = 0x13353cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
    // 0x133540: 0x5100a  movz        $v0, $zero, $a1
    ctx->pc = 0x133540u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x133544: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x133544u;
    {
        const bool branch_taken_0x133544 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x133548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133544u;
            // 0x133548: 0x8c460024  lw          $a2, 0x24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133544) {
            ctx->pc = 0x133598u;
            goto label_133598;
        }
    }
    ctx->pc = 0x13354Cu;
    // 0x13354c: 0x50c00013  beql        $a2, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x13354Cu;
    {
        const bool branch_taken_0x13354c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x13354c) {
            ctx->pc = 0x133550u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13354Cu;
            // 0x133550: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13359Cu;
            goto label_13359c;
        }
    }
    ctx->pc = 0x133554u;
    // 0x133554: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x133554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x133558: 0x1046000f  beq         $v0, $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x133558u;
    {
        const bool branch_taken_0x133558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x13355Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133558u;
            // 0x13355c: 0x24e30001  addiu       $v1, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133558) {
            ctx->pc = 0x133598u;
            goto label_133598;
        }
    }
    ctx->pc = 0x133560u;
    // 0x133560: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x133560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x133564: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x133564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
    // 0x133568: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x133568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x13356c: 0x6ba300a7  ldl         $v1, 0xA7($sp)
    ctx->pc = 0x13356cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x133570: 0x6fa300a0  ldr         $v1, 0xA0($sp)
    ctx->pc = 0x133570u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x133574: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x133574u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x133578: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x133578u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13357c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x13357cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x133580: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x133580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x133584: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x133584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x133588: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x133588u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x13358c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x13358cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x133590: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x133590u;
    {
        const bool branch_taken_0x133590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133590u;
            // 0x133594: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133590) {
            ctx->pc = 0x1335E0u;
            goto label_1335e0;
        }
    }
    ctx->pc = 0x133598u;
label_133598:
    // 0x133598: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x133598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_13359c:
    // 0x13359c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x13359cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1335a0: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1335A0u;
    {
        const bool branch_taken_0x1335a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1335A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1335A0u;
            // 0x1335a4: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1335a0) {
            ctx->pc = 0x1335E0u;
            goto label_1335e0;
        }
    }
    ctx->pc = 0x1335A8u;
label_1335a8:
    // 0x1335a8: 0x8d020080  lw          $v0, 0x80($t0)
    ctx->pc = 0x1335a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 128)));
    // 0x1335ac: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x1335acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1335b0: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x1335b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1335b4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1335b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x1335b8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1335B8u;
    {
        const bool branch_taken_0x1335b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1335BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1335B8u;
            // 0x1335bc: 0xad030080  sw          $v1, 0x80($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1335b8) {
            ctx->pc = 0x1335E0u;
            goto label_1335e0;
        }
    }
    ctx->pc = 0x1335C0u;
    // 0x1335c0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1335c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1335c4: 0x1022021  addu        $a0, $t0, $v0
    ctx->pc = 0x1335c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1335c8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1335c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1335cc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1335ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1335d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1335d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1335d4: 0x1043fff4  beq         $v0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1335D4u;
    {
        const bool branch_taken_0x1335d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1335D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1335D4u;
            // 0x1335d8: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1335d4) {
            ctx->pc = 0x1335A8u;
            runtime->cooperativeGuestYield();
            goto label_1335a8;
        }
    }
    ctx->pc = 0x1335DCu;
    // 0x1335dc: 0x0  nop
    ctx->pc = 0x1335dcu;
    // NOP
label_1335e0:
    // 0x1335e0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1335e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1335e4: 0x441ffc2  bgez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x1335E4u;
    {
        const bool branch_taken_0x1335e4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1335E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1335E4u;
            // 0x1335e8: 0xad000084  sw          $zero, 0x84($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1335e4) {
            ctx->pc = 0x1334F0u;
            runtime->cooperativeGuestYield();
            goto label_1334f0;
        }
    }
    ctx->pc = 0x1335ECu;
    // 0x1335ec: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1335ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1335f0:
    // 0x1335f0: 0x3e00008  jr          $ra
    ctx->pc = 0x1335F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1335F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1335F0u;
            // 0x1335f4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x133470u: goto label_133470;
            case 0x1334D8u: goto label_1334d8;
            case 0x1334DCu: goto label_1334dc;
            case 0x1334F0u: goto label_1334f0;
            case 0x133528u: goto label_133528;
            case 0x133598u: goto label_133598;
            case 0x13359Cu: goto label_13359c;
            case 0x1335A8u: goto label_1335a8;
            case 0x1335E0u: goto label_1335e0;
            case 0x1335F0u: goto label_1335f0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1335F8u;
}
