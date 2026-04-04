#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_29a0d0
// Address: 0x29a0d0 - 0x29a180
void entry_29a0d0_0x29a180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_29a0d0_0x29a180");
#endif

    ctx->pc = 0x29a0d0u;

    // 0x29a0d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29a0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x29a0d4: 0x41282  srl         $v0, $a0, 10
    ctx->pc = 0x29a0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 10));
    // 0x29a0d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29a0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x29a0dc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x29a0dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x29a0e0: 0x28180  sll         $s0, $v0, 6
    ctx->pc = 0x29a0e0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x29a0e4: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29A0E4u;
    {
        const bool branch_taken_0x29a0e4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x29A0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A0E4u;
            // 0x29a0e8: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a0e4) {
            ctx->pc = 0x29A0FCu;
            goto label_29a0fc;
        }
    }
    ctx->pc = 0x29A0ECu;
    // 0x29a0ec: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x29a0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29a0f0: 0x308203ff  andi        $v0, $a0, 0x3FF
    ctx->pc = 0x29a0f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1023);
    // 0x29a0f4: 0x50430004  beql        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x29A0F4u;
    {
        const bool branch_taken_0x29a0f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x29a0f4) {
            ctx->pc = 0x29A0F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29A0F4u;
            // 0x29a0f8: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29A108u;
            goto label_29a108;
        }
    }
    ctx->pc = 0x29A0FCu;
label_29a0fc:
    // 0x29a0fc: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x29a0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x29a100: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x29A100u;
    {
        const bool branch_taken_0x29a100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A100u;
            // 0x29a104: 0x34428002  ori         $v0, $v0, 0x8002 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32770);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a100) {
            ctx->pc = 0x29A168u;
            goto label_29a168;
        }
    }
    ctx->pc = 0x29A108u;
label_29a108:
    // 0x29a108: 0x24425af8  addiu       $v0, $v0, 0x5AF8
    ctx->pc = 0x29a108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23288));
    // 0x29a10c: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x29a10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x29a110: 0x54640004  bnel        $v1, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29A110u;
    {
        const bool branch_taken_0x29a110 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x29a110) {
            ctx->pc = 0x29A114u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29A110u;
            // 0x29a114: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29A124u;
            goto label_29a124;
        }
    }
    ctx->pc = 0x29A118u;
    // 0x29a118: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x29a118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x29a11c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x29A11Cu;
    {
        const bool branch_taken_0x29a11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A11Cu;
            // 0x29a120: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a11c) {
            ctx->pc = 0x29A168u;
            goto label_29a168;
        }
    }
    ctx->pc = 0x29A124u;
label_29a124:
    // 0x29a124: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x29a124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x29a128: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x29A128u;
    {
        const bool branch_taken_0x29a128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29A12Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A128u;
            // 0x29a12c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a128) {
            ctx->pc = 0x29A168u;
            goto label_29a168;
        }
    }
    ctx->pc = 0x29A130u;
    // 0x29a130: 0xc0a67ec  jal         func_299FB0
    ctx->pc = 0x29A130u;
    SET_GPR_U32(ctx, 31, 0x29A138u);
    ctx->pc = 0x299FB0u;
    if (runtime->hasFunction(0x299FB0u)) {
        auto targetFn = runtime->lookupFunction(0x299FB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A138u; }
        if (ctx->pc != 0x29A138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299fb0_0x29a008(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A138u; }
        if (ctx->pc != 0x29A138u) { return; }
    }
    ctx->pc = 0x29A138u;
    // 0x29a138: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29a138u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29a13c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x29a13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x29a140: 0xfe110010  sd          $s1, 0x10($s0)
    ctx->pc = 0x29a140u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 17));
    // 0x29a144: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x29a144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x29a148: 0x30430002  andi        $v1, $v0, 0x2
    ctx->pc = 0x29a148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x29a14c: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x29A14Cu;
    {
        const bool branch_taken_0x29a14c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29A150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A14Cu;
            // 0x29a150: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29a14c) {
            ctx->pc = 0x29A164u;
            goto label_29a164;
        }
    }
    ctx->pc = 0x29A154u;
    // 0x29a154: 0xc0a6712  jal         func_299C48
    ctx->pc = 0x29A154u;
    SET_GPR_U32(ctx, 31, 0x29A15Cu);
    ctx->pc = 0x29A158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A154u;
            // 0x29a158: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299C48u;
    if (runtime->hasFunction(0x299C48u)) {
        auto targetFn = runtime->lookupFunction(0x299C48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A15Cu; }
        if (ctx->pc != 0x29A15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299c48_0x299cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A15Cu; }
        if (ctx->pc != 0x29A15Cu) { return; }
    }
    ctx->pc = 0x29A15Cu;
    // 0x29a15c: 0xc0a66ae  jal         func_299AB8
    ctx->pc = 0x29A15Cu;
    SET_GPR_U32(ctx, 31, 0x29A164u);
    ctx->pc = 0x29A160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29A15Cu;
            // 0x29a160: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299AB8u;
    if (runtime->hasFunction(0x299AB8u)) {
        auto targetFn = runtime->lookupFunction(0x299AB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A164u; }
        if (ctx->pc != 0x29A164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299ab8_0x299c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29A164u; }
        if (ctx->pc != 0x29A164u) { return; }
    }
    ctx->pc = 0x29A164u;
label_29a164:
    // 0x29a164: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29a164u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29a168:
    // 0x29a168: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x29a168u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29a16c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x29a16cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29a170: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x29a170u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29a174: 0x3e00008  jr          $ra
    ctx->pc = 0x29A174u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29A178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29A174u;
            // 0x29a178: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29A0FCu: goto label_29a0fc;
            case 0x29A108u: goto label_29a108;
            case 0x29A124u: goto label_29a124;
            case 0x29A164u: goto label_29a164;
            case 0x29A168u: goto label_29a168;
            default: break;
        }
        return;
    }
    ctx->pc = 0x29A17Cu;
    // 0x29a17c: 0x0  nop
    ctx->pc = 0x29a17cu;
    // NOP
}
