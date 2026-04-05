#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001335F8
// Address: 0x1335f8 - 0x133c58
void sub_001335F8_0x1335f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001335F8_0x1335f8");
#endif

    ctx->pc = 0x1335f8u;

label_1335f8:
    // 0x1335f8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1335f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1335fc: 0x24840024  addiu       $a0, $a0, 0x24
    ctx->pc = 0x1335fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x133600: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x133600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x133604: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x133604u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133608: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x133608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x13360c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x13360cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x133610: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x133610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x133614: 0x0  nop
    ctx->pc = 0x133614u;
    // NOP
label_133618:
    // 0x133618: 0x0  nop
    ctx->pc = 0x133618u;
    // NOP
    // 0x13361c: 0x0  nop
    ctx->pc = 0x13361cu;
    // NOP
    // 0x133620: 0x0  nop
    ctx->pc = 0x133620u;
    // NOP
    // 0x133624: 0x0  nop
    ctx->pc = 0x133624u;
    // NOP
    // 0x133628: 0x0  nop
    ctx->pc = 0x133628u;
    // NOP
    // 0x13362c: 0x54a2fffa  bnel        $a1, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x13362Cu;
    {
        const bool branch_taken_0x13362c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x13362c) {
            ctx->pc = 0x133630u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13362Cu;
            // 0x133630: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x133618u;
            runtime->cooperativeGuestYield();
            goto label_133618;
        }
    }
    ctx->pc = 0x133634u;
    // 0x133634: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x133634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x133638: 0xacc50080  sw          $a1, 0x80($a2)
    ctx->pc = 0x133638u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 5));
    // 0x13363c: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x13363cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x133640: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x133640u;
    {
        const bool branch_taken_0x133640 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x133644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133640u;
            // 0x133644: 0xacc00084  sw          $zero, 0x84($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133640) {
            ctx->pc = 0x133680u;
            goto label_133680;
        }
    }
    ctx->pc = 0x133648u;
    // 0x133648: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x133648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13364c: 0x1043000d  beq         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x13364Cu;
    {
        const bool branch_taken_0x13364c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x133650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13364Cu;
            // 0x133650: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13364c) {
            ctx->pc = 0x133684u;
            goto label_133684;
        }
    }
    ctx->pc = 0x133654u;
    // 0x133654: 0xacc00080  sw          $zero, 0x80($a2)
    ctx->pc = 0x133654u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 0));
    // 0x133658: 0x6ba20097  ldl         $v0, 0x97($sp)
    ctx->pc = 0x133658u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x13365c: 0x6fa20090  ldr         $v0, 0x90($sp)
    ctx->pc = 0x13365cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x133660: 0xb0c20007  sdl         $v0, 0x7($a2)
    ctx->pc = 0x133660u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x133664: 0xb4c20000  sdr         $v0, 0x0($a2)
    ctx->pc = 0x133664u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x133668: 0x8cc20080  lw          $v0, 0x80($a2)
    ctx->pc = 0x133668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x13366c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x13366cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x133670: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x133670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x133674: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x133674u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x133678: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x133678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13367c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x13367cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_133680:
    // 0x133680: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x133680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_133684:
    // 0x133684: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x133684u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x133688: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x133688u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x13368c: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x13368Cu;
    {
        const bool branch_taken_0x13368c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x133690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13368Cu;
            // 0x133690: 0xdfbf00b0  ld          $ra, 0xB0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13368c) {
            ctx->pc = 0x133798u;
            goto label_133798;
        }
    }
    ctx->pc = 0x133694u;
    // 0x133694: 0x0  nop
    ctx->pc = 0x133694u;
    // NOP
label_133698:
    // 0x133698: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x133698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13369c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13369cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1336a0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1336a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1336a4: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x1336a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1336a8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1336a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1336ac: 0x2462fff8  addiu       $v0, $v1, -0x8
    ctx->pc = 0x1336acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x1336b0: 0x43200b  movn        $a0, $v0, $v1
    ctx->pc = 0x1336b0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
    // 0x1336b4: 0x8c820038  lw          $v0, 0x38($a0)
    ctx->pc = 0x1336b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x1336b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1336B8u;
    {
        const bool branch_taken_0x1336b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1336BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1336B8u;
            // 0x1336bc: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1336b8) {
            ctx->pc = 0x1336D0u;
            goto label_1336d0;
        }
    }
    ctx->pc = 0x1336C0u;
    // 0x1336c0: 0x40f809  jalr        $v0
    ctx->pc = 0x1336C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1336C8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1336C8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1335F8u: goto label_1335f8;
            case 0x133618u: goto label_133618;
            case 0x133680u: goto label_133680;
            case 0x133684u: goto label_133684;
            case 0x133698u: goto label_133698;
            case 0x1336D0u: goto label_1336d0;
            case 0x133740u: goto label_133740;
            case 0x133744u: goto label_133744;
            case 0x133750u: goto label_133750;
            case 0x133788u: goto label_133788;
            case 0x133798u: goto label_133798;
            case 0x133810u: goto label_133810;
            case 0x133888u: goto label_133888;
            case 0x1338D0u: goto label_1338d0;
            case 0x133908u: goto label_133908;
            case 0x133940u: goto label_133940;
            case 0x1339A0u: goto label_1339a0;
            case 0x1339E0u: goto label_1339e0;
            case 0x1339E8u: goto label_1339e8;
            case 0x133A08u: goto label_133a08;
            case 0x133A20u: goto label_133a20;
            case 0x133A40u: goto label_133a40;
            case 0x133A7Cu: goto label_133a7c;
            case 0x133AF0u: goto label_133af0;
            case 0x133B08u: goto label_133b08;
            case 0x133B50u: goto label_133b50;
            case 0x133B54u: goto label_133b54;
            case 0x133B68u: goto label_133b68;
            case 0x133BB0u: goto label_133bb0;
            case 0x133BF8u: goto label_133bf8;
            case 0x133C08u: goto label_133c08;
            case 0x133C10u: goto label_133c10;
            case 0x133C30u: goto label_133c30;
            case 0x133C40u: goto label_133c40;
            case 0x133C44u: goto label_133c44;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1336C8u; }
            if (ctx->pc != 0x1336C8u) { return; }
        }
        }
    }
    ctx->pc = 0x1336C8u;
    // 0x1336c8: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x1336c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1336cc: 0x0  nop
    ctx->pc = 0x1336ccu;
    // NOP
label_1336d0:
    // 0x1336d0: 0x8fa70080  lw          $a3, 0x80($sp)
    ctx->pc = 0x1336d0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1336d4: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x1336d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x1336d8: 0x8fa30084  lw          $v1, 0x84($sp)
    ctx->pc = 0x1336d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x1336dc: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x1336dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1336e0: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x1336e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1336e4: 0x24a2fff8  addiu       $v0, $a1, -0x8
    ctx->pc = 0x1336e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967288));
    // 0x1336e8: 0x5100a  movz        $v0, $zero, $a1
    ctx->pc = 0x1336e8u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1336ec: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x1336ECu;
    {
        const bool branch_taken_0x1336ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1336F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1336ECu;
            // 0x1336f0: 0x8c460024  lw          $a2, 0x24($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1336ec) {
            ctx->pc = 0x133740u;
            goto label_133740;
        }
    }
    ctx->pc = 0x1336F4u;
    // 0x1336f4: 0x50c00013  beql        $a2, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x1336F4u;
    {
        const bool branch_taken_0x1336f4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1336f4) {
            ctx->pc = 0x1336F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1336F4u;
            // 0x1336f8: 0x8ca20000  lw          $v0, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x133744u;
            goto label_133744;
        }
    }
    ctx->pc = 0x1336FCu;
    // 0x1336fc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x1336fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x133700: 0x1046000f  beq         $v0, $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x133700u;
    {
        const bool branch_taken_0x133700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x133704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133700u;
            // 0x133704: 0x24e30001  addiu       $v1, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133700) {
            ctx->pc = 0x133740u;
            goto label_133740;
        }
    }
    ctx->pc = 0x133708u;
    // 0x133708: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x133708u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x13370c: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x13370cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
    // 0x133710: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x133710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x133714: 0x6ba300a7  ldl         $v1, 0xA7($sp)
    ctx->pc = 0x133714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x133718: 0x6fa300a0  ldr         $v1, 0xA0($sp)
    ctx->pc = 0x133718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x13371c: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x13371cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x133720: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x133720u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x133724: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x133724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x133728: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x133728u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x13372c: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x13372cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x133730: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x133730u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x133734: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x133734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x133738: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x133738u;
    {
        const bool branch_taken_0x133738 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13373Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133738u;
            // 0x13373c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133738) {
            ctx->pc = 0x133788u;
            goto label_133788;
        }
    }
    ctx->pc = 0x133740u;
label_133740:
    // 0x133740: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x133740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_133744:
    // 0x133744: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x133744u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x133748: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x133748u;
    {
        const bool branch_taken_0x133748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x13374Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133748u;
            // 0x13374c: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133748) {
            ctx->pc = 0x133788u;
            goto label_133788;
        }
    }
    ctx->pc = 0x133750u;
label_133750:
    // 0x133750: 0x8d020080  lw          $v0, 0x80($t0)
    ctx->pc = 0x133750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 128)));
    // 0x133754: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x133754u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x133758: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x133758u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x13375c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x13375cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x133760: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x133760u;
    {
        const bool branch_taken_0x133760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x133764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133760u;
            // 0x133764: 0xad030080  sw          $v1, 0x80($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133760) {
            ctx->pc = 0x133788u;
            goto label_133788;
        }
    }
    ctx->pc = 0x133768u;
    // 0x133768: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x133768u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x13376c: 0x1022021  addu        $a0, $t0, $v0
    ctx->pc = 0x13376cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x133770: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x133770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x133774: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x133774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x133778: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x133778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13377c: 0x1043fff4  beq         $v0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x13377Cu;
    {
        const bool branch_taken_0x13377c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x133780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13377Cu;
            // 0x133780: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13377c) {
            ctx->pc = 0x133750u;
            runtime->cooperativeGuestYield();
            goto label_133750;
        }
    }
    ctx->pc = 0x133784u;
    // 0x133784: 0x0  nop
    ctx->pc = 0x133784u;
    // NOP
label_133788:
    // 0x133788: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x133788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13378c: 0x441ffc2  bgez        $v0, . + 4 + (-0x3E << 2)
    ctx->pc = 0x13378Cu;
    {
        const bool branch_taken_0x13378c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x133790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13378Cu;
            // 0x133790: 0xad000084  sw          $zero, 0x84($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13378c) {
            ctx->pc = 0x133698u;
            runtime->cooperativeGuestYield();
            goto label_133698;
        }
    }
    ctx->pc = 0x133794u;
    // 0x133794: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x133794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_133798:
    // 0x133798: 0x3e00008  jr          $ra
    ctx->pc = 0x133798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13379Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133798u;
            // 0x13379c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1335F8u: goto label_1335f8;
            case 0x133618u: goto label_133618;
            case 0x133680u: goto label_133680;
            case 0x133684u: goto label_133684;
            case 0x133698u: goto label_133698;
            case 0x1336D0u: goto label_1336d0;
            case 0x133740u: goto label_133740;
            case 0x133744u: goto label_133744;
            case 0x133750u: goto label_133750;
            case 0x133788u: goto label_133788;
            case 0x133798u: goto label_133798;
            case 0x133810u: goto label_133810;
            case 0x133888u: goto label_133888;
            case 0x1338D0u: goto label_1338d0;
            case 0x133908u: goto label_133908;
            case 0x133940u: goto label_133940;
            case 0x1339A0u: goto label_1339a0;
            case 0x1339E0u: goto label_1339e0;
            case 0x1339E8u: goto label_1339e8;
            case 0x133A08u: goto label_133a08;
            case 0x133A20u: goto label_133a20;
            case 0x133A40u: goto label_133a40;
            case 0x133A7Cu: goto label_133a7c;
            case 0x133AF0u: goto label_133af0;
            case 0x133B08u: goto label_133b08;
            case 0x133B50u: goto label_133b50;
            case 0x133B54u: goto label_133b54;
            case 0x133B68u: goto label_133b68;
            case 0x133BB0u: goto label_133bb0;
            case 0x133BF8u: goto label_133bf8;
            case 0x133C08u: goto label_133c08;
            case 0x133C10u: goto label_133c10;
            case 0x133C30u: goto label_133c30;
            case 0x133C40u: goto label_133c40;
            case 0x133C44u: goto label_133c44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1337A0u;
    // 0x1337a0: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1337a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1337a4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1337a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1337a8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x1337a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x1337ac: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1337acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x1337b0: 0x8c50ed5c  lw          $s0, -0x12A4($v0)
    ctx->pc = 0x1337b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962524)));
    // 0x1337b4: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x1337b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x1337b8: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x1337b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x1337bc: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x1337bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x1337c0: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x1337c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x1337c4: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x1337c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x1337c8: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x1337c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x1337cc: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x1337ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x1337d0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1337d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1337d4: 0x3c160033  lui         $s6, 0x33
    ctx->pc = 0x1337d4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)51 << 16));
    // 0x1337d8: 0x8ec3ed60  lw          $v1, -0x12A0($s6)
    ctx->pc = 0x1337d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294962528)));
    // 0x1337dc: 0x2c620100  sltiu       $v0, $v1, 0x100
    ctx->pc = 0x1337dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x1337e0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1337e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1337e4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1337E4u;
    {
        const bool branch_taken_0x1337e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1337E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1337E4u;
            // 0x1337e8: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1337e4) {
            ctx->pc = 0x133810u;
            goto label_133810;
        }
    }
    ctx->pc = 0x1337ECu;
    // 0x1337ec: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1337ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1337f0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1337f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1337f4: 0x2442ed68  addiu       $v0, $v0, -0x1298
    ctx->pc = 0x1337f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962536));
    // 0x1337f8: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1337f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x1337fc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1337fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x133800: 0x8c84f168  lw          $a0, -0xE98($a0)
    ctx->pc = 0x133800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294963560)));
    // 0x133804: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x133804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x133808: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x133808u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x13380c: 0x8ec3ed60  lw          $v1, -0x12A0($s6)
    ctx->pc = 0x13380cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294962528)));
label_133810:
    // 0x133810: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x133810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x133814: 0x2445ed68  addiu       $a1, $v0, -0x1298
    ctx->pc = 0x133814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962536));
    // 0x133818: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x133818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13381c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x13381cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x133820: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x133820u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x133824: 0xaec3ed60  sw          $v1, -0x12A0($s6)
    ctx->pc = 0x133824u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294962528), GPR_U32(ctx, 3));
    // 0x133828: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x133828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x13382c: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x13382Cu;
    SET_GPR_U32(ctx, 31, 0x133834u);
    ctx->pc = 0x133830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13382Cu;
            // 0x133830: 0xac500000  sw          $s0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133834u; }
        if (ctx->pc != 0x133834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133834u; }
        if (ctx->pc != 0x133834u) { return; }
    }
    ctx->pc = 0x133834u;
    // 0x133834: 0x3c06002d  lui         $a2, 0x2D
    ctx->pc = 0x133834u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)45 << 16));
    // 0x133838: 0x26050018  addiu       $a1, $s0, 0x18
    ctx->pc = 0x133838u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x13383c: 0x24c4bb98  addiu       $a0, $a2, -0x4468
    ctx->pc = 0x13383cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949784));
    // 0x133840: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x133840u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x133844: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x133844u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133848: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x133848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13384c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x13384cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x133850: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x133850u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x133854: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x133854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x133858: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x133858u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x13385c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x13385cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x133860: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x133860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x133864: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x133864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x133868: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x133868u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x13386c: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x13386cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x133870: 0x40f809  jalr        $v0
    ctx->pc = 0x133870u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x133878u);
        ctx->pc = 0x133874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133870u;
            // 0x133874: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x133878u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1335F8u: goto label_1335f8;
            case 0x133618u: goto label_133618;
            case 0x133680u: goto label_133680;
            case 0x133684u: goto label_133684;
            case 0x133698u: goto label_133698;
            case 0x1336D0u: goto label_1336d0;
            case 0x133740u: goto label_133740;
            case 0x133744u: goto label_133744;
            case 0x133750u: goto label_133750;
            case 0x133788u: goto label_133788;
            case 0x133798u: goto label_133798;
            case 0x133810u: goto label_133810;
            case 0x133888u: goto label_133888;
            case 0x1338D0u: goto label_1338d0;
            case 0x133908u: goto label_133908;
            case 0x133940u: goto label_133940;
            case 0x1339A0u: goto label_1339a0;
            case 0x1339E0u: goto label_1339e0;
            case 0x1339E8u: goto label_1339e8;
            case 0x133A08u: goto label_133a08;
            case 0x133A20u: goto label_133a20;
            case 0x133A40u: goto label_133a40;
            case 0x133A7Cu: goto label_133a7c;
            case 0x133AF0u: goto label_133af0;
            case 0x133B08u: goto label_133b08;
            case 0x133B50u: goto label_133b50;
            case 0x133B54u: goto label_133b54;
            case 0x133B68u: goto label_133b68;
            case 0x133BB0u: goto label_133bb0;
            case 0x133BF8u: goto label_133bf8;
            case 0x133C08u: goto label_133c08;
            case 0x133C10u: goto label_133c10;
            case 0x133C30u: goto label_133c30;
            case 0x133C40u: goto label_133c40;
            case 0x133C44u: goto label_133c44;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x133878u; }
            if (ctx->pc != 0x133878u) { return; }
        }
        }
    }
    ctx->pc = 0x133878u;
    // 0x133878: 0x8e920024  lw          $s2, 0x24($s4)
    ctx->pc = 0x133878u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x13387c: 0x1240005a  beqz        $s2, . + 4 + (0x5A << 2)
    ctx->pc = 0x13387Cu;
    {
        const bool branch_taken_0x13387c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x133880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13387Cu;
            // 0x133880: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13387c) {
            ctx->pc = 0x1339E8u;
            goto label_1339e8;
        }
    }
    ctx->pc = 0x133884u;
    // 0x133884: 0x2642fff8  addiu       $v0, $s2, -0x8
    ctx->pc = 0x133884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
label_133888:
    // 0x133888: 0x8e570000  lw          $s7, 0x0($s2)
    ctx->pc = 0x133888u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13388c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x13388cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133890: 0x52800b  movn        $s0, $v0, $s2
    ctx->pc = 0x133890u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x133894: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x133894u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x133898: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x133898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x13389c: 0x14400050  bnez        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x13389Cu;
    {
        const bool branch_taken_0x13389c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1338A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13389Cu;
            // 0x1338a0: 0x2e0902d  daddu       $s2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13389c) {
            ctx->pc = 0x1339E0u;
            goto label_1339e0;
        }
    }
    ctx->pc = 0x1338A4u;
    // 0x1338a4: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x1338a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x1338a8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1338A8u;
    {
        const bool branch_taken_0x1338a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1338ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1338A8u;
            // 0x1338ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1338a8) {
            ctx->pc = 0x1338D0u;
            goto label_1338d0;
        }
    }
    ctx->pc = 0x1338B0u;
    // 0x1338b0: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x1338b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x1338b4: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1338b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1338b8: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1338b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1338bc: 0x40f809  jalr        $v0
    ctx->pc = 0x1338BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1338C4u);
        ctx->pc = 0x1338C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1338BCu;
            // 0x1338c0: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1338C4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1335F8u: goto label_1335f8;
            case 0x133618u: goto label_133618;
            case 0x133680u: goto label_133680;
            case 0x133684u: goto label_133684;
            case 0x133698u: goto label_133698;
            case 0x1336D0u: goto label_1336d0;
            case 0x133740u: goto label_133740;
            case 0x133744u: goto label_133744;
            case 0x133750u: goto label_133750;
            case 0x133788u: goto label_133788;
            case 0x133798u: goto label_133798;
            case 0x133810u: goto label_133810;
            case 0x133888u: goto label_133888;
            case 0x1338D0u: goto label_1338d0;
            case 0x133908u: goto label_133908;
            case 0x133940u: goto label_133940;
            case 0x1339A0u: goto label_1339a0;
            case 0x1339E0u: goto label_1339e0;
            case 0x1339E8u: goto label_1339e8;
            case 0x133A08u: goto label_133a08;
            case 0x133A20u: goto label_133a20;
            case 0x133A40u: goto label_133a40;
            case 0x133A7Cu: goto label_133a7c;
            case 0x133AF0u: goto label_133af0;
            case 0x133B08u: goto label_133b08;
            case 0x133B50u: goto label_133b50;
            case 0x133B54u: goto label_133b54;
            case 0x133B68u: goto label_133b68;
            case 0x133BB0u: goto label_133bb0;
            case 0x133BF8u: goto label_133bf8;
            case 0x133C08u: goto label_133c08;
            case 0x133C10u: goto label_133c10;
            case 0x133C30u: goto label_133c30;
            case 0x133C40u: goto label_133c40;
            case 0x133C44u: goto label_133c44;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1338C4u; }
            if (ctx->pc != 0x1338C4u) { return; }
        }
        }
    }
    ctx->pc = 0x1338C4u;
    // 0x1338c4: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1338C4u;
    {
        const bool branch_taken_0x1338c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1338c4) {
            ctx->pc = 0x1339E0u;
            goto label_1339e0;
        }
    }
    ctx->pc = 0x1338CCu;
    // 0x1338cc: 0x0  nop
    ctx->pc = 0x1338ccu;
    // NOP
label_1338d0:
    // 0x1338d0: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x1338d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1338d4: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x1338D4u;
    {
        const bool branch_taken_0x1338d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1338d4) {
            ctx->pc = 0x1339E0u;
            goto label_1339e0;
        }
    }
    ctx->pc = 0x1338DCu;
    // 0x1338dc: 0x8e110088  lw          $s1, 0x88($s0)
    ctx->pc = 0x1338dcu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 136)));
    // 0x1338e0: 0x12710017  beq         $s3, $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1338E0u;
    {
        const bool branch_taken_0x1338e0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 17));
        ctx->pc = 0x1338E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1338E0u;
            // 0x1338e4: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1338e0) {
            ctx->pc = 0x133940u;
            goto label_133940;
        }
    }
    ctx->pc = 0x1338E8u;
    // 0x1338e8: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x1338E8u;
    {
        const bool branch_taken_0x1338e8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1338ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1338E8u;
            // 0x1338ec: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1338e8) {
            ctx->pc = 0x133908u;
            goto label_133908;
        }
    }
    ctx->pc = 0x1338F0u;
    // 0x1338f0: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x1338f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x1338f4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1338f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1338f8: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x1338f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1338fc: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x1338fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x133900: 0x40f809  jalr        $v0
    ctx->pc = 0x133900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x133908u);
        ctx->pc = 0x133904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133900u;
            // 0x133904: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x133908u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1335F8u: goto label_1335f8;
            case 0x133618u: goto label_133618;
            case 0x133680u: goto label_133680;
            case 0x133684u: goto label_133684;
            case 0x133698u: goto label_133698;
            case 0x1336D0u: goto label_1336d0;
            case 0x133740u: goto label_133740;
            case 0x133744u: goto label_133744;
            case 0x133750u: goto label_133750;
            case 0x133788u: goto label_133788;
            case 0x133798u: goto label_133798;
            case 0x133810u: goto label_133810;
            case 0x133888u: goto label_133888;
            case 0x1338D0u: goto label_1338d0;
            case 0x133908u: goto label_133908;
            case 0x133940u: goto label_133940;
            case 0x1339A0u: goto label_1339a0;
            case 0x1339E0u: goto label_1339e0;
            case 0x1339E8u: goto label_1339e8;
            case 0x133A08u: goto label_133a08;
            case 0x133A20u: goto label_133a20;
            case 0x133A40u: goto label_133a40;
            case 0x133A7Cu: goto label_133a7c;
            case 0x133AF0u: goto label_133af0;
            case 0x133B08u: goto label_133b08;
            case 0x133B50u: goto label_133b50;
            case 0x133B54u: goto label_133b54;
            case 0x133B68u: goto label_133b68;
            case 0x133BB0u: goto label_133bb0;
            case 0x133BF8u: goto label_133bf8;
            case 0x133C08u: goto label_133c08;
            case 0x133C10u: goto label_133c10;
            case 0x133C30u: goto label_133c30;
            case 0x133C40u: goto label_133c40;
            case 0x133C44u: goto label_133c44;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x133908u; }
            if (ctx->pc != 0x133908u) { return; }
        }
        }
    }
    ctx->pc = 0x133908u;
label_133908:
    // 0x133908: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x133908u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13390c: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x13390cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x133910: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x133910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x133914: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x133914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x133918: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x133918u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13391c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x13391cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x133920: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x133920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133924: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x133924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x133928: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x133928u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13392c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x13392cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x133930: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x133930u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x133934: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x133934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x133938: 0x40f809  jalr        $v0
    ctx->pc = 0x133938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x133940u);
        ctx->pc = 0x13393Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133938u;
            // 0x13393c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x133940u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1335F8u: goto label_1335f8;
            case 0x133618u: goto label_133618;
            case 0x133680u: goto label_133680;
            case 0x133684u: goto label_133684;
            case 0x133698u: goto label_133698;
            case 0x1336D0u: goto label_1336d0;
            case 0x133740u: goto label_133740;
            case 0x133744u: goto label_133744;
            case 0x133750u: goto label_133750;
            case 0x133788u: goto label_133788;
            case 0x133798u: goto label_133798;
            case 0x133810u: goto label_133810;
            case 0x133888u: goto label_133888;
            case 0x1338D0u: goto label_1338d0;
            case 0x133908u: goto label_133908;
            case 0x133940u: goto label_133940;
            case 0x1339A0u: goto label_1339a0;
            case 0x1339E0u: goto label_1339e0;
            case 0x1339E8u: goto label_1339e8;
            case 0x133A08u: goto label_133a08;
            case 0x133A20u: goto label_133a20;
            case 0x133A40u: goto label_133a40;
            case 0x133A7Cu: goto label_133a7c;
            case 0x133AF0u: goto label_133af0;
            case 0x133B08u: goto label_133b08;
            case 0x133B50u: goto label_133b50;
            case 0x133B54u: goto label_133b54;
            case 0x133B68u: goto label_133b68;
            case 0x133BB0u: goto label_133bb0;
            case 0x133BF8u: goto label_133bf8;
            case 0x133C08u: goto label_133c08;
            case 0x133C10u: goto label_133c10;
            case 0x133C30u: goto label_133c30;
            case 0x133C40u: goto label_133c40;
            case 0x133C44u: goto label_133c44;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x133940u; }
            if (ctx->pc != 0x133940u) { return; }
        }
        }
    }
    ctx->pc = 0x133940u;
label_133940:
    // 0x133940: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x133940u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x133944: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x133944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x133948: 0x2471e848  addiu       $s1, $v1, -0x17B8
    ctx->pc = 0x133948u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961224));
    // 0x13394c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13394cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x133950: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x133950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x133954: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x133954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x133958: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x133958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x13395c: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x13395cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x133960: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x133960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x133964: 0x40f809  jalr        $v0
    ctx->pc = 0x133964u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13396Cu);
        ctx->pc = 0x133968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133964u;
            // 0x133968: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x13396Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1335F8u: goto label_1335f8;
            case 0x133618u: goto label_133618;
            case 0x133680u: goto label_133680;
            case 0x133684u: goto label_133684;
            case 0x133698u: goto label_133698;
            case 0x1336D0u: goto label_1336d0;
            case 0x133740u: goto label_133740;
            case 0x133744u: goto label_133744;
            case 0x133750u: goto label_133750;
            case 0x133788u: goto label_133788;
            case 0x133798u: goto label_133798;
            case 0x133810u: goto label_133810;
            case 0x133888u: goto label_133888;
            case 0x1338D0u: goto label_1338d0;
            case 0x133908u: goto label_133908;
            case 0x133940u: goto label_133940;
            case 0x1339A0u: goto label_1339a0;
            case 0x1339E0u: goto label_1339e0;
            case 0x1339E8u: goto label_1339e8;
            case 0x133A08u: goto label_133a08;
            case 0x133A20u: goto label_133a20;
            case 0x133A40u: goto label_133a40;
            case 0x133A7Cu: goto label_133a7c;
            case 0x133AF0u: goto label_133af0;
            case 0x133B08u: goto label_133b08;
            case 0x133B50u: goto label_133b50;
            case 0x133B54u: goto label_133b54;
            case 0x133B68u: goto label_133b68;
            case 0x133BB0u: goto label_133bb0;
            case 0x133BF8u: goto label_133bf8;
            case 0x133C08u: goto label_133c08;
            case 0x133C10u: goto label_133c10;
            case 0x133C30u: goto label_133c30;
            case 0x133C40u: goto label_133c40;
            case 0x133C44u: goto label_133c44;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13396Cu; }
            if (ctx->pc != 0x13396Cu) { return; }
        }
        }
    }
    ctx->pc = 0x13396Cu;
    // 0x13396c: 0x1050000c  beq         $v0, $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x13396Cu;
    {
        const bool branch_taken_0x13396c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x133970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13396Cu;
            // 0x133970: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13396c) {
            ctx->pc = 0x1339A0u;
            goto label_1339a0;
        }
    }
    ctx->pc = 0x133974u;
    // 0x133974: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x133974u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x133978: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x133978u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13397c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x13397cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x133980: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x133980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x133984: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x133984u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x133988: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x133988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x13398c: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x13398cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x133990: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x133990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x133994: 0x40f809  jalr        $v0
    ctx->pc = 0x133994u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x13399Cu);
        ctx->pc = 0x133998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133994u;
            // 0x133998: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x13399Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1335F8u: goto label_1335f8;
            case 0x133618u: goto label_133618;
            case 0x133680u: goto label_133680;
            case 0x133684u: goto label_133684;
            case 0x133698u: goto label_133698;
            case 0x1336D0u: goto label_1336d0;
            case 0x133740u: goto label_133740;
            case 0x133744u: goto label_133744;
            case 0x133750u: goto label_133750;
            case 0x133788u: goto label_133788;
            case 0x133798u: goto label_133798;
            case 0x133810u: goto label_133810;
            case 0x133888u: goto label_133888;
            case 0x1338D0u: goto label_1338d0;
            case 0x133908u: goto label_133908;
            case 0x133940u: goto label_133940;
            case 0x1339A0u: goto label_1339a0;
            case 0x1339E0u: goto label_1339e0;
            case 0x1339E8u: goto label_1339e8;
            case 0x133A08u: goto label_133a08;
            case 0x133A20u: goto label_133a20;
            case 0x133A40u: goto label_133a40;
            case 0x133A7Cu: goto label_133a7c;
            case 0x133AF0u: goto label_133af0;
            case 0x133B08u: goto label_133b08;
            case 0x133B50u: goto label_133b50;
            case 0x133B54u: goto label_133b54;
            case 0x133B68u: goto label_133b68;
            case 0x133BB0u: goto label_133bb0;
            case 0x133BF8u: goto label_133bf8;
            case 0x133C08u: goto label_133c08;
            case 0x133C10u: goto label_133c10;
            case 0x133C30u: goto label_133c30;
            case 0x133C40u: goto label_133c40;
            case 0x133C44u: goto label_133c44;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x13399Cu; }
            if (ctx->pc != 0x13399Cu) { return; }
        }
        }
    }
    ctx->pc = 0x13399Cu;
    // 0x13399c: 0x0  nop
    ctx->pc = 0x13399cu;
    // NOP
label_1339a0:
    // 0x1339a0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1339a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1339a4: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x1339a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x1339a8: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x1339a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1339ac: 0x40f809  jalr        $v0
    ctx->pc = 0x1339ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1339B4u);
        ctx->pc = 0x1339B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1339ACu;
            // 0x1339b0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1339B4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1335F8u: goto label_1335f8;
            case 0x133618u: goto label_133618;
            case 0x133680u: goto label_133680;
            case 0x133684u: goto label_133684;
            case 0x133698u: goto label_133698;
            case 0x1336D0u: goto label_1336d0;
            case 0x133740u: goto label_133740;
            case 0x133744u: goto label_133744;
            case 0x133750u: goto label_133750;
            case 0x133788u: goto label_133788;
            case 0x133798u: goto label_133798;
            case 0x133810u: goto label_133810;
            case 0x133888u: goto label_133888;
            case 0x1338D0u: goto label_1338d0;
            case 0x133908u: goto label_133908;
            case 0x133940u: goto label_133940;
            case 0x1339A0u: goto label_1339a0;
            case 0x1339E0u: goto label_1339e0;
            case 0x1339E8u: goto label_1339e8;
            case 0x133A08u: goto label_133a08;
            case 0x133A20u: goto label_133a20;
            case 0x133A40u: goto label_133a40;
            case 0x133A7Cu: goto label_133a7c;
            case 0x133AF0u: goto label_133af0;
            case 0x133B08u: goto label_133b08;
            case 0x133B50u: goto label_133b50;
            case 0x133B54u: goto label_133b54;
            case 0x133B68u: goto label_133b68;
            case 0x133BB0u: goto label_133bb0;
            case 0x133BF8u: goto label_133bf8;
            case 0x133C08u: goto label_133c08;
            case 0x133C10u: goto label_133c10;
            case 0x133C30u: goto label_133c30;
            case 0x133C40u: goto label_133c40;
            case 0x133C44u: goto label_133c44;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1339B4u; }
            if (ctx->pc != 0x1339B4u) { return; }
        }
        }
    }
    ctx->pc = 0x1339B4u;
    // 0x1339b4: 0x13c0000a  beqz        $fp, . + 4 + (0xA << 2)
    ctx->pc = 0x1339B4u;
    {
        const bool branch_taken_0x1339b4 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x1339b4) {
            ctx->pc = 0x1339E0u;
            goto label_1339e0;
        }
    }
    ctx->pc = 0x1339BCu;
    // 0x1339bc: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x1339bcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1339c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1339c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1339c4: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1339c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1339c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1339c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1339cc: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1339ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1339d0: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x1339d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1339d4: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x1339d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x1339d8: 0x40f809  jalr        $v0
    ctx->pc = 0x1339D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1339E0u);
        ctx->pc = 0x1339DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1339D8u;
            // 0x1339dc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1339E0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1335F8u: goto label_1335f8;
            case 0x133618u: goto label_133618;
            case 0x133680u: goto label_133680;
            case 0x133684u: goto label_133684;
            case 0x133698u: goto label_133698;
            case 0x1336D0u: goto label_1336d0;
            case 0x133740u: goto label_133740;
            case 0x133744u: goto label_133744;
            case 0x133750u: goto label_133750;
            case 0x133788u: goto label_133788;
            case 0x133798u: goto label_133798;
            case 0x133810u: goto label_133810;
            case 0x133888u: goto label_133888;
            case 0x1338D0u: goto label_1338d0;
            case 0x133908u: goto label_133908;
            case 0x133940u: goto label_133940;
            case 0x1339A0u: goto label_1339a0;
            case 0x1339E0u: goto label_1339e0;
            case 0x1339E8u: goto label_1339e8;
            case 0x133A08u: goto label_133a08;
            case 0x133A20u: goto label_133a20;
            case 0x133A40u: goto label_133a40;
            case 0x133A7Cu: goto label_133a7c;
            case 0x133AF0u: goto label_133af0;
            case 0x133B08u: goto label_133b08;
            case 0x133B50u: goto label_133b50;
            case 0x133B54u: goto label_133b54;
            case 0x133B68u: goto label_133b68;
            case 0x133BB0u: goto label_133bb0;
            case 0x133BF8u: goto label_133bf8;
            case 0x133C08u: goto label_133c08;
            case 0x133C10u: goto label_133c10;
            case 0x133C30u: goto label_133c30;
            case 0x133C40u: goto label_133c40;
            case 0x133C44u: goto label_133c44;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1339E0u; }
            if (ctx->pc != 0x1339E0u) { return; }
        }
        }
    }
    ctx->pc = 0x1339E0u;
label_1339e0:
    // 0x1339e0: 0x16e0ffa9  bnez        $s7, . + 4 + (-0x57 << 2)
    ctx->pc = 0x1339E0u;
    {
        const bool branch_taken_0x1339e0 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x1339E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1339E0u;
            // 0x1339e4: 0x2642fff8  addiu       $v0, $s2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1339e0) {
            ctx->pc = 0x133888u;
            runtime->cooperativeGuestYield();
            goto label_133888;
        }
    }
    ctx->pc = 0x1339E8u;
label_1339e8:
    // 0x1339e8: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x1339E8u;
    {
        const bool branch_taken_0x1339e8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1339ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1339E8u;
            // 0x1339ec: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1339e8) {
            ctx->pc = 0x133A08u;
            goto label_133a08;
        }
    }
    ctx->pc = 0x1339F0u;
    // 0x1339f0: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x1339f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x1339f4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1339f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1339f8: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x1339f8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1339fc: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x1339fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x133a00: 0x40f809  jalr        $v0
    ctx->pc = 0x133A00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x133A08u);
        ctx->pc = 0x133A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133A00u;
            // 0x133a04: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x133A08u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1335F8u: goto label_1335f8;
            case 0x133618u: goto label_133618;
            case 0x133680u: goto label_133680;
            case 0x133684u: goto label_133684;
            case 0x133698u: goto label_133698;
            case 0x1336D0u: goto label_1336d0;
            case 0x133740u: goto label_133740;
            case 0x133744u: goto label_133744;
            case 0x133750u: goto label_133750;
            case 0x133788u: goto label_133788;
            case 0x133798u: goto label_133798;
            case 0x133810u: goto label_133810;
            case 0x133888u: goto label_133888;
            case 0x1338D0u: goto label_1338d0;
            case 0x133908u: goto label_133908;
            case 0x133940u: goto label_133940;
            case 0x1339A0u: goto label_1339a0;
            case 0x1339E0u: goto label_1339e0;
            case 0x1339E8u: goto label_1339e8;
            case 0x133A08u: goto label_133a08;
            case 0x133A20u: goto label_133a20;
            case 0x133A40u: goto label_133a40;
            case 0x133A7Cu: goto label_133a7c;
            case 0x133AF0u: goto label_133af0;
            case 0x133B08u: goto label_133b08;
            case 0x133B50u: goto label_133b50;
            case 0x133B54u: goto label_133b54;
            case 0x133B68u: goto label_133b68;
            case 0x133BB0u: goto label_133bb0;
            case 0x133BF8u: goto label_133bf8;
            case 0x133C08u: goto label_133c08;
            case 0x133C10u: goto label_133c10;
            case 0x133C30u: goto label_133c30;
            case 0x133C40u: goto label_133c40;
            case 0x133C44u: goto label_133c44;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x133A08u; }
            if (ctx->pc != 0x133A08u) { return; }
        }
        }
    }
    ctx->pc = 0x133A08u;
label_133a08:
    // 0x133a08: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x133a08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x133a0c: 0x8c64f168  lw          $a0, -0xE98($v1)
    ctx->pc = 0x133a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294963560)));
    // 0x133a10: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x133a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x133a14: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x133A14u;
    {
        const bool branch_taken_0x133a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x133A18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133A14u;
            // 0x133a18: 0x8ec2ed60  lw          $v0, -0x12A0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294962528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133a14) {
            ctx->pc = 0x133A40u;
            goto label_133a40;
        }
    }
    ctx->pc = 0x133A1Cu;
    // 0x133a1c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x133a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_133a20:
    // 0x133a20: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x133a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x133a24: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x133a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x133a28: 0x0  nop
    ctx->pc = 0x133a28u;
    // NOP
    // 0x133a2c: 0x0  nop
    ctx->pc = 0x133a2cu;
    // NOP
    // 0x133a30: 0x0  nop
    ctx->pc = 0x133a30u;
    // NOP
    // 0x133a34: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x133A34u;
    {
        const bool branch_taken_0x133a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x133a34) {
            ctx->pc = 0x133A38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x133A34u;
            // 0x133a38: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x133A20u;
            runtime->cooperativeGuestYield();
            goto label_133a20;
        }
    }
    ctx->pc = 0x133A3Cu;
    // 0x133a3c: 0x8ec2ed60  lw          $v0, -0x12A0($s6)
    ctx->pc = 0x133a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294962528)));
label_133a40:
    // 0x133a40: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x133a40u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x133a44: 0x24c5ed68  addiu       $a1, $a2, -0x1298
    ctx->pc = 0x133a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962536));
    // 0x133a48: 0xac64f168  sw          $a0, -0xE98($v1)
    ctx->pc = 0x133a48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963560), GPR_U32(ctx, 4));
    // 0x133a4c: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x133a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x133a50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x133a50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x133a54: 0xaec6ed60  sw          $a2, -0x12A0($s6)
    ctx->pc = 0x133a54u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294962528), GPR_U32(ctx, 6));
    // 0x133a58: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x133a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x133a5c: 0x2cc30100  sltiu       $v1, $a2, 0x100
    ctx->pc = 0x133a5cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x133a60: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x133a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x133a64: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x133A64u;
    {
        const bool branch_taken_0x133a64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x133A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133A64u;
            // 0x133a68: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133a64) {
            ctx->pc = 0x133A7Cu;
            goto label_133a7c;
        }
    }
    ctx->pc = 0x133A6Cu;
    // 0x133a6c: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x133a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x133a70: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x133a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x133a74: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x133A74u;
    SET_GPR_U32(ctx, 31, 0x133A7Cu);
    ctx->pc = 0x133A78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x133A74u;
            // 0x133a78: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133A7Cu; }
        if (ctx->pc != 0x133A7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133A7Cu; }
        if (ctx->pc != 0x133A7Cu) { return; }
    }
    ctx->pc = 0x133A7Cu;
label_133a7c:
    // 0x133a7c: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x133a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x133a80: 0x2443bb98  addiu       $v1, $v0, -0x4468
    ctx->pc = 0x133a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949784));
    // 0x133a84: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x133a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x133a88: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x133a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x133a8c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x133a8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x133a90: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x133a90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x133a94: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x133a94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x133a98: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x133a98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x133a9c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x133a9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x133aa0: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x133aa0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x133aa4: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x133aa4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x133aa8: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x133aa8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x133aac: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x133aacu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133ab0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x133ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133ab4: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x133ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x133ab8: 0x3e00008  jr          $ra
    ctx->pc = 0x133AB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133AB8u;
            // 0x133abc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1335F8u: goto label_1335f8;
            case 0x133618u: goto label_133618;
            case 0x133680u: goto label_133680;
            case 0x133684u: goto label_133684;
            case 0x133698u: goto label_133698;
            case 0x1336D0u: goto label_1336d0;
            case 0x133740u: goto label_133740;
            case 0x133744u: goto label_133744;
            case 0x133750u: goto label_133750;
            case 0x133788u: goto label_133788;
            case 0x133798u: goto label_133798;
            case 0x133810u: goto label_133810;
            case 0x133888u: goto label_133888;
            case 0x1338D0u: goto label_1338d0;
            case 0x133908u: goto label_133908;
            case 0x133940u: goto label_133940;
            case 0x1339A0u: goto label_1339a0;
            case 0x1339E0u: goto label_1339e0;
            case 0x1339E8u: goto label_1339e8;
            case 0x133A08u: goto label_133a08;
            case 0x133A20u: goto label_133a20;
            case 0x133A40u: goto label_133a40;
            case 0x133A7Cu: goto label_133a7c;
            case 0x133AF0u: goto label_133af0;
            case 0x133B08u: goto label_133b08;
            case 0x133B50u: goto label_133b50;
            case 0x133B54u: goto label_133b54;
            case 0x133B68u: goto label_133b68;
            case 0x133BB0u: goto label_133bb0;
            case 0x133BF8u: goto label_133bf8;
            case 0x133C08u: goto label_133c08;
            case 0x133C10u: goto label_133c10;
            case 0x133C30u: goto label_133c30;
            case 0x133C40u: goto label_133c40;
            case 0x133C44u: goto label_133c44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x133AC0u;
    // 0x133ac0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x133ac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x133ac4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x133ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x133ac8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x133ac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x133acc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x133accu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133ad0: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x133ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x133ad4: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x133ad4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x133ad8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x133ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x133adc: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x133adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x133ae0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x133AE0u;
    {
        const bool branch_taken_0x133ae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x133AE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133AE0u;
            // 0x133ae4: 0xae020078  sw          $v0, 0x78($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133ae0) {
            ctx->pc = 0x133AF0u;
            goto label_133af0;
        }
    }
    ctx->pc = 0x133AE8u;
    // 0x133ae8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x133AE8u;
    {
        const bool branch_taken_0x133ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133AE8u;
            // 0x133aec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133ae8) {
            ctx->pc = 0x133B54u;
            goto label_133b54;
        }
    }
    ctx->pc = 0x133AF0u;
label_133af0:
    // 0x133af0: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x133af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x133af4: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x133af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x133af8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x133af8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x133afc: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x133AFCu;
    {
        const bool branch_taken_0x133afc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x133B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133AFCu;
            // 0x133b00: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133afc) {
            ctx->pc = 0x133B50u;
            goto label_133b50;
        }
    }
    ctx->pc = 0x133B04u;
    // 0x133b04: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x133b04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_133b08:
    // 0x133b08: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x133b08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x133b0c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x133b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x133b10: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x133b10u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x133b14: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x133b14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x133b18: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x133b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x133b1c: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x133b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x133b20: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x133b20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x133b24: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x133b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x133b28: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x133b28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x133b2c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x133b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x133b30: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x133b30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x133b34: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x133b34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x133b38: 0x40f809  jalr        $v0
    ctx->pc = 0x133B38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x133B40u);
        ctx->pc = 0x133B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133B38u;
            // 0x133b3c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x133B40u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1335F8u: goto label_1335f8;
            case 0x133618u: goto label_133618;
            case 0x133680u: goto label_133680;
            case 0x133684u: goto label_133684;
            case 0x133698u: goto label_133698;
            case 0x1336D0u: goto label_1336d0;
            case 0x133740u: goto label_133740;
            case 0x133744u: goto label_133744;
            case 0x133750u: goto label_133750;
            case 0x133788u: goto label_133788;
            case 0x133798u: goto label_133798;
            case 0x133810u: goto label_133810;
            case 0x133888u: goto label_133888;
            case 0x1338D0u: goto label_1338d0;
            case 0x133908u: goto label_133908;
            case 0x133940u: goto label_133940;
            case 0x1339A0u: goto label_1339a0;
            case 0x1339E0u: goto label_1339e0;
            case 0x1339E8u: goto label_1339e8;
            case 0x133A08u: goto label_133a08;
            case 0x133A20u: goto label_133a20;
            case 0x133A40u: goto label_133a40;
            case 0x133A7Cu: goto label_133a7c;
            case 0x133AF0u: goto label_133af0;
            case 0x133B08u: goto label_133b08;
            case 0x133B50u: goto label_133b50;
            case 0x133B54u: goto label_133b54;
            case 0x133B68u: goto label_133b68;
            case 0x133BB0u: goto label_133bb0;
            case 0x133BF8u: goto label_133bf8;
            case 0x133C08u: goto label_133c08;
            case 0x133C10u: goto label_133c10;
            case 0x133C30u: goto label_133c30;
            case 0x133C40u: goto label_133c40;
            case 0x133C44u: goto label_133c44;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x133B40u; }
            if (ctx->pc != 0x133B40u) { return; }
        }
        }
    }
    ctx->pc = 0x133B40u;
    // 0x133b40: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x133b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x133b44: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x133b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133b48: 0x1462ffef  bne         $v1, $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x133B48u;
    {
        const bool branch_taken_0x133b48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x133B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133B48u;
            // 0x133b4c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133b48) {
            ctx->pc = 0x133B08u;
            runtime->cooperativeGuestYield();
            goto label_133b08;
        }
    }
    ctx->pc = 0x133B50u;
label_133b50:
    // 0x133b50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x133b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_133b54:
    // 0x133b54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x133B54u;
    {
        const bool branch_taken_0x133b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x133B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133B54u;
            // 0x133b58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133b54) {
            ctx->pc = 0x133B68u;
            goto label_133b68;
        }
    }
    ctx->pc = 0x133B5Cu;
    // 0x133b5c: 0xc04cd14  jal         func_133450
    ctx->pc = 0x133B5Cu;
    SET_GPR_U32(ctx, 31, 0x133B64u);
    ctx->pc = 0x133B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x133B5Cu;
            // 0x133b60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133450u;
    if (runtime->hasFunction(0x133450u)) {
        auto targetFn = runtime->lookupFunction(0x133450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133B64u; }
        if (ctx->pc != 0x133B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133450_0x133450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133B64u; }
        if (ctx->pc != 0x133B64u) { return; }
    }
    ctx->pc = 0x133B64u;
    // 0x133b64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x133b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_133b68:
    // 0x133b68: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x133b68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x133b6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x133b6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133b70: 0x3e00008  jr          $ra
    ctx->pc = 0x133B70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133B70u;
            // 0x133b74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1335F8u: goto label_1335f8;
            case 0x133618u: goto label_133618;
            case 0x133680u: goto label_133680;
            case 0x133684u: goto label_133684;
            case 0x133698u: goto label_133698;
            case 0x1336D0u: goto label_1336d0;
            case 0x133740u: goto label_133740;
            case 0x133744u: goto label_133744;
            case 0x133750u: goto label_133750;
            case 0x133788u: goto label_133788;
            case 0x133798u: goto label_133798;
            case 0x133810u: goto label_133810;
            case 0x133888u: goto label_133888;
            case 0x1338D0u: goto label_1338d0;
            case 0x133908u: goto label_133908;
            case 0x133940u: goto label_133940;
            case 0x1339A0u: goto label_1339a0;
            case 0x1339E0u: goto label_1339e0;
            case 0x1339E8u: goto label_1339e8;
            case 0x133A08u: goto label_133a08;
            case 0x133A20u: goto label_133a20;
            case 0x133A40u: goto label_133a40;
            case 0x133A7Cu: goto label_133a7c;
            case 0x133AF0u: goto label_133af0;
            case 0x133B08u: goto label_133b08;
            case 0x133B50u: goto label_133b50;
            case 0x133B54u: goto label_133b54;
            case 0x133B68u: goto label_133b68;
            case 0x133BB0u: goto label_133bb0;
            case 0x133BF8u: goto label_133bf8;
            case 0x133C08u: goto label_133c08;
            case 0x133C10u: goto label_133c10;
            case 0x133C30u: goto label_133c30;
            case 0x133C40u: goto label_133c40;
            case 0x133C44u: goto label_133c44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x133B78u;
    // 0x133b78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x133b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x133b7c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x133b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x133b80: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x133b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x133b84: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x133b84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133b88: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x133b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x133b8c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x133b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x133b90: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x133B90u;
    {
        const bool branch_taken_0x133b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x133B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133B90u;
            // 0x133b94: 0xae020078  sw          $v0, 0x78($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133b90) {
            ctx->pc = 0x133C10u;
            goto label_133c10;
        }
    }
    ctx->pc = 0x133B98u;
    // 0x133b98: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x133b98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x133b9c: 0x26020080  addiu       $v0, $s0, 0x80
    ctx->pc = 0x133b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x133ba0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x133ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x133ba4: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x133BA4u;
    {
        const bool branch_taken_0x133ba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x133BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133BA4u;
            // 0x133ba8: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133ba4) {
            ctx->pc = 0x133C08u;
            goto label_133c08;
        }
    }
    ctx->pc = 0x133BACu;
    // 0x133bac: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x133bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_133bb0:
    // 0x133bb0: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x133bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x133bb4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x133bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x133bb8: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x133bb8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x133bbc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x133bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x133bc0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x133BC0u;
    {
        const bool branch_taken_0x133bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x133BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133BC0u;
            // 0x133bc4: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133bc0) {
            ctx->pc = 0x133BF8u;
            goto label_133bf8;
        }
    }
    ctx->pc = 0x133BC8u;
    // 0x133bc8: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x133bc8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x133bcc: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x133bccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x133bd0: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x133bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x133bd4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x133bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x133bd8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x133bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x133bdc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x133bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x133be0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x133be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x133be4: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x133be4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x133be8: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x133be8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x133bec: 0x40f809  jalr        $v0
    ctx->pc = 0x133BECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x133BF4u);
        ctx->pc = 0x133BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133BECu;
            // 0x133bf0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x133BF4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1335F8u: goto label_1335f8;
            case 0x133618u: goto label_133618;
            case 0x133680u: goto label_133680;
            case 0x133684u: goto label_133684;
            case 0x133698u: goto label_133698;
            case 0x1336D0u: goto label_1336d0;
            case 0x133740u: goto label_133740;
            case 0x133744u: goto label_133744;
            case 0x133750u: goto label_133750;
            case 0x133788u: goto label_133788;
            case 0x133798u: goto label_133798;
            case 0x133810u: goto label_133810;
            case 0x133888u: goto label_133888;
            case 0x1338D0u: goto label_1338d0;
            case 0x133908u: goto label_133908;
            case 0x133940u: goto label_133940;
            case 0x1339A0u: goto label_1339a0;
            case 0x1339E0u: goto label_1339e0;
            case 0x1339E8u: goto label_1339e8;
            case 0x133A08u: goto label_133a08;
            case 0x133A20u: goto label_133a20;
            case 0x133A40u: goto label_133a40;
            case 0x133A7Cu: goto label_133a7c;
            case 0x133AF0u: goto label_133af0;
            case 0x133B08u: goto label_133b08;
            case 0x133B50u: goto label_133b50;
            case 0x133B54u: goto label_133b54;
            case 0x133B68u: goto label_133b68;
            case 0x133BB0u: goto label_133bb0;
            case 0x133BF8u: goto label_133bf8;
            case 0x133C08u: goto label_133c08;
            case 0x133C10u: goto label_133c10;
            case 0x133C30u: goto label_133c30;
            case 0x133C40u: goto label_133c40;
            case 0x133C44u: goto label_133c44;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x133BF4u; }
            if (ctx->pc != 0x133BF4u) { return; }
        }
        }
    }
    ctx->pc = 0x133BF4u;
    // 0x133bf4: 0x0  nop
    ctx->pc = 0x133bf4u;
    // NOP
label_133bf8:
    // 0x133bf8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x133bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x133bfc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x133bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133c00: 0x1462ffeb  bne         $v1, $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x133C00u;
    {
        const bool branch_taken_0x133c00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x133C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133C00u;
            // 0x133c04: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133c00) {
            ctx->pc = 0x133BB0u;
            runtime->cooperativeGuestYield();
            goto label_133bb0;
        }
    }
    ctx->pc = 0x133C08u;
label_133c08:
    // 0x133c08: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x133C08u;
    {
        const bool branch_taken_0x133c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133C08u;
            // 0x133c0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133c08) {
            ctx->pc = 0x133C30u;
            goto label_133c30;
        }
    }
    ctx->pc = 0x133C10u;
label_133c10:
    // 0x133c10: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x133c10u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x133c14: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x133c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x133c18: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x133C18u;
    {
        const bool branch_taken_0x133c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x133C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133C18u;
            // 0x133c1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133c18) {
            ctx->pc = 0x133C30u;
            goto label_133c30;
        }
    }
    ctx->pc = 0x133C20u;
    // 0x133c20: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x133c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x133c24: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x133c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x133c28: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x133c28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x133c2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x133c2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_133c30:
    // 0x133c30: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x133C30u;
    {
        const bool branch_taken_0x133c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x133C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133C30u;
            // 0x133c34: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133c30) {
            ctx->pc = 0x133C44u;
            goto label_133c44;
        }
    }
    ctx->pc = 0x133C38u;
    // 0x133c38: 0xc04cd7e  jal         func_1335F8
    ctx->pc = 0x133C38u;
    SET_GPR_U32(ctx, 31, 0x133C40u);
    ctx->pc = 0x133C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x133C38u;
            // 0x133c3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1335F8u;
    runtime->cooperativeGuestYield();
    goto label_1335f8;
    ctx->pc = 0x133C40u;
label_133c40:
    // 0x133c40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x133c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_133c44:
    // 0x133c44: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x133c44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x133c48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x133c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x133C4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133C4Cu;
            // 0x133c50: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1335F8u: goto label_1335f8;
            case 0x133618u: goto label_133618;
            case 0x133680u: goto label_133680;
            case 0x133684u: goto label_133684;
            case 0x133698u: goto label_133698;
            case 0x1336D0u: goto label_1336d0;
            case 0x133740u: goto label_133740;
            case 0x133744u: goto label_133744;
            case 0x133750u: goto label_133750;
            case 0x133788u: goto label_133788;
            case 0x133798u: goto label_133798;
            case 0x133810u: goto label_133810;
            case 0x133888u: goto label_133888;
            case 0x1338D0u: goto label_1338d0;
            case 0x133908u: goto label_133908;
            case 0x133940u: goto label_133940;
            case 0x1339A0u: goto label_1339a0;
            case 0x1339E0u: goto label_1339e0;
            case 0x1339E8u: goto label_1339e8;
            case 0x133A08u: goto label_133a08;
            case 0x133A20u: goto label_133a20;
            case 0x133A40u: goto label_133a40;
            case 0x133A7Cu: goto label_133a7c;
            case 0x133AF0u: goto label_133af0;
            case 0x133B08u: goto label_133b08;
            case 0x133B50u: goto label_133b50;
            case 0x133B54u: goto label_133b54;
            case 0x133B68u: goto label_133b68;
            case 0x133BB0u: goto label_133bb0;
            case 0x133BF8u: goto label_133bf8;
            case 0x133C08u: goto label_133c08;
            case 0x133C10u: goto label_133c10;
            case 0x133C30u: goto label_133c30;
            case 0x133C40u: goto label_133c40;
            case 0x133C44u: goto label_133c44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x133C54u;
    // 0x133c54: 0x0  nop
    ctx->pc = 0x133c54u;
    // NOP
}
