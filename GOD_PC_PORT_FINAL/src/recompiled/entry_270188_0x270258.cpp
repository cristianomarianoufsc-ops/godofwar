#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_270188
// Address: 0x270188 - 0x270258
void entry_270188_0x270258(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_270188_0x270258");
#endif

    ctx->pc = 0x270188u;

    // 0x270188: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x270188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27018c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x27018cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x270190: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x270190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x270194: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x270194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x270198: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x270198u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27019c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x27019cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2701a0: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x2701a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x2701a4: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2701A4u;
    {
        const bool branch_taken_0x2701a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2701A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2701A4u;
            // 0x2701a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2701a4) {
            ctx->pc = 0x2701D0u;
            goto label_2701d0;
        }
    }
    ctx->pc = 0x2701ACu;
    // 0x2701ac: 0x8e020130  lw          $v0, 0x130($s0)
    ctx->pc = 0x2701acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x2701b0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2701B0u;
    {
        const bool branch_taken_0x2701b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2701B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2701B0u;
            // 0x2701b4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2701b0) {
            ctx->pc = 0x2701D0u;
            goto label_2701d0;
        }
    }
    ctx->pc = 0x2701B8u;
    // 0x2701b8: 0x3c05002c  lui         $a1, 0x2C
    ctx->pc = 0x2701b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
    // 0x2701bc: 0xc09d0e6  jal         func_274398
    ctx->pc = 0x2701BCu;
    SET_GPR_U32(ctx, 31, 0x2701C4u);
    ctx->pc = 0x2701C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2701BCu;
            // 0x2701c0: 0x24a543f8  addiu       $a1, $a1, 0x43F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x274398u;
    if (runtime->hasFunction(0x274398u)) {
        auto targetFn = runtime->lookupFunction(0x274398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2701C4u; }
        if (ctx->pc != 0x2701C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00274398_0x274398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2701C4u; }
        if (ctx->pc != 0x2701C4u) { return; }
    }
    ctx->pc = 0x2701C4u;
    // 0x2701c4: 0xae000130  sw          $zero, 0x130($s0)
    ctx->pc = 0x2701c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 304), GPR_U32(ctx, 0));
    // 0x2701c8: 0x8e030184  lw          $v1, 0x184($s0)
    ctx->pc = 0x2701c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 388)));
    // 0x2701cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2701ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2701d0:
    // 0x2701d0: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2701D0u;
    {
        const bool branch_taken_0x2701d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2701D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2701D0u;
            // 0x2701d4: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2701d0) {
            ctx->pc = 0x27020Cu;
            goto label_27020c;
        }
    }
    ctx->pc = 0x2701D8u;
    // 0x2701d8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2701D8u;
    {
        const bool branch_taken_0x2701d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2701DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2701D8u;
            // 0x2701dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2701d8) {
            ctx->pc = 0x2701F0u;
            goto label_2701f0;
        }
    }
    ctx->pc = 0x2701E0u;
    // 0x2701e0: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2701E0u;
    {
        const bool branch_taken_0x2701e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2701E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2701E0u;
            // 0x2701e4: 0x3c05002c  lui         $a1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2701e0) {
            ctx->pc = 0x270204u;
            goto label_270204;
        }
    }
    ctx->pc = 0x2701E8u;
    // 0x2701e8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2701E8u;
    {
        const bool branch_taken_0x2701e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2701ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2701E8u;
            // 0x2701ec: 0x8e1101d0  lw          $s1, 0x1D0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2701e8) {
            ctx->pc = 0x270218u;
            goto label_270218;
        }
    }
    ctx->pc = 0x2701F0u;
label_2701f0:
    // 0x2701f0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2701f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2701f4: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2701F4u;
    {
        const bool branch_taken_0x2701f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2701F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2701F4u;
            // 0x2701f8: 0x3c05002c  lui         $a1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2701f4) {
            ctx->pc = 0x270214u;
            goto label_270214;
        }
    }
    ctx->pc = 0x2701FCu;
    // 0x2701fc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2701FCu;
    {
        const bool branch_taken_0x2701fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2701FCu;
            // 0x270200: 0x8e1101d0  lw          $s1, 0x1D0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2701fc) {
            ctx->pc = 0x270224u;
            goto label_270224;
        }
    }
    ctx->pc = 0x270204u;
label_270204:
    // 0x270204: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x270204u;
    {
        const bool branch_taken_0x270204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270204u;
            // 0x270208: 0x8e1101e0  lw          $s1, 0x1E0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 480)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270204) {
            ctx->pc = 0x270224u;
            goto label_270224;
        }
    }
    ctx->pc = 0x27020Cu;
label_27020c:
    // 0x27020c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x27020Cu;
    {
        const bool branch_taken_0x27020c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27020Cu;
            // 0x270210: 0x8e1101f0  lw          $s1, 0x1F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27020c) {
            ctx->pc = 0x270224u;
            goto label_270224;
        }
    }
    ctx->pc = 0x270214u;
label_270214:
    // 0x270214: 0x8e1101d0  lw          $s1, 0x1D0($s0)
    ctx->pc = 0x270214u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 464)));
label_270218:
    // 0x270218: 0x24a54418  addiu       $a1, $a1, 0x4418
    ctx->pc = 0x270218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17432));
    // 0x27021c: 0xc09d0e6  jal         func_274398
    ctx->pc = 0x27021Cu;
    SET_GPR_U32(ctx, 31, 0x270224u);
    ctx->pc = 0x270220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27021Cu;
            // 0x270220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x274398u;
    if (runtime->hasFunction(0x274398u)) {
        auto targetFn = runtime->lookupFunction(0x274398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270224u; }
        if (ctx->pc != 0x270224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00274398_0x274398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x270224u; }
        if (ctx->pc != 0x270224u) { return; }
    }
    ctx->pc = 0x270224u;
label_270224:
    // 0x270224: 0xc09d56e  jal         func_2755B8
    ctx->pc = 0x270224u;
    SET_GPR_U32(ctx, 31, 0x27022Cu);
    ctx->pc = 0x270228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x270224u;
            // 0x270228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2755B8u;
    if (runtime->hasFunction(0x2755B8u)) {
        auto targetFn = runtime->lookupFunction(0x2755B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27022Cu; }
        if (ctx->pc != 0x27022Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2755b8_0x2757f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27022Cu; }
        if (ctx->pc != 0x27022Cu) { return; }
    }
    ctx->pc = 0x27022Cu;
    // 0x27022c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x27022cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270230: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x270230u;
    {
        const bool branch_taken_0x270230 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x270234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x270230u;
            // 0x270234: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270230) {
            ctx->pc = 0x27023Cu;
            goto label_27023c;
        }
    }
    ctx->pc = 0x270238u;
    // 0x270238: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x270238u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_27023c:
    // 0x27023c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x27023cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x270240: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x270240u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x270244: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x270244u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x270248: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x270248u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27024c: 0x3e00008  jr          $ra
    ctx->pc = 0x27024Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27024Cu;
            // 0x270250: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2701D0u: goto label_2701d0;
            case 0x2701F0u: goto label_2701f0;
            case 0x270204u: goto label_270204;
            case 0x27020Cu: goto label_27020c;
            case 0x270214u: goto label_270214;
            case 0x270218u: goto label_270218;
            case 0x270224u: goto label_270224;
            case 0x27023Cu: goto label_27023c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x270254u;
    // 0x270254: 0x0  nop
    ctx->pc = 0x270254u;
    // NOP
}
