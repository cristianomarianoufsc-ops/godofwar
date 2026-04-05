#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_138e78
// Address: 0x138e78 - 0x138f78
void entry_138e78_0x138f78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_138e78_0x138f78");
#endif

    ctx->pc = 0x138e78u;

    // 0x138e78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x138e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x138e7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x138e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x138e80: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x138e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x138e84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x138e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x138e88: 0xc04f824  jal         func_13E090
    ctx->pc = 0x138E88u;
    SET_GPR_U32(ctx, 31, 0x138E90u);
    ctx->pc = 0x138E8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138E88u;
            // 0x138e8c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138E90u; }
        if (ctx->pc != 0x138E90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138E90u; }
        if (ctx->pc != 0x138E90u) { return; }
    }
    ctx->pc = 0x138E90u;
    // 0x138e90: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x138e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x138e94: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x138e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x138e98: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x138E98u;
    SET_GPR_U32(ctx, 31, 0x138EA0u);
    ctx->pc = 0x138E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138E98u;
            // 0x138e9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138EA0u; }
        if (ctx->pc != 0x138EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138EA0u; }
        if (ctx->pc != 0x138EA0u) { return; }
    }
    ctx->pc = 0x138EA0u;
    // 0x138ea0: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x138ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x138ea4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x138ea4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138ea8: 0x3c03dead  lui         $v1, 0xDEAD
    ctx->pc = 0x138ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57005 << 16));
    // 0x138eac: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x138eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x138eb0: 0x61402  srl         $v0, $a2, 16
    ctx->pc = 0x138eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 16));
    // 0x138eb4: 0x3463beef  ori         $v1, $v1, 0xBEEF
    ctx->pc = 0x138eb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48879);
    // 0x138eb8: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x138eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x138ebc: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x138ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x138ec0: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x138ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x138ec4: 0x26040014  addiu       $a0, $s0, 0x14
    ctx->pc = 0x138ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x138ec8: 0xa6050004  sh          $a1, 0x4($s0)
    ctx->pc = 0x138ec8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 5));
    // 0x138ecc: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x138eccu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x138ed0: 0xa6060000  sh          $a2, 0x0($s0)
    ctx->pc = 0x138ed0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 6));
    // 0x138ed4: 0xc08e43e  jal         func_2390F8
    ctx->pc = 0x138ED4u;
    SET_GPR_U32(ctx, 31, 0x138EDCu);
    ctx->pc = 0x138ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138ED4u;
            // 0x138ed8: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2390F8u;
    if (runtime->hasFunction(0x2390F8u)) {
        auto targetFn = runtime->lookupFunction(0x2390F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138EDCu; }
        if (ctx->pc != 0x138EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2390f8_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138EDCu; }
        if (ctx->pc != 0x138EDCu) { return; }
    }
    ctx->pc = 0x138EDCu;
    // 0x138edc: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x138edcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x138ee0: 0xae11001c  sw          $s1, 0x1C($s0)
    ctx->pc = 0x138ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 17));
    // 0x138ee4: 0xae000048  sw          $zero, 0x48($s0)
    ctx->pc = 0x138ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 0));
    // 0x138ee8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x138ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x138eec: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x138eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x138ef0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x138ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x138ef4: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x138ef4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x138ef8: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x138ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x138efc: 0x40f809  jalr        $v0
    ctx->pc = 0x138EFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x138F04u);
        ctx->pc = 0x138F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138EFCu;
            // 0x138f00: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x138F04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x138F04u; }
            if (ctx->pc != 0x138F04u) { return; }
        }
        }
    }
    ctx->pc = 0x138F04u;
    // 0x138f04: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x138f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x138f08: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x138f08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x138f0c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x138f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x138f10: 0xac600024  sw          $zero, 0x24($v1)
    ctx->pc = 0x138f10u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 0));
    // 0x138f14: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x138f14u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
    // 0x138f18: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x138f18u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x138f1c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x138f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x138f20: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x138f20u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x138f24: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x138f24u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
    // 0x138f28: 0xac600018  sw          $zero, 0x18($v1)
    ctx->pc = 0x138f28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
    // 0x138f2c: 0xac60001c  sw          $zero, 0x1C($v1)
    ctx->pc = 0x138f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 0));
    // 0x138f30: 0xac600020  sw          $zero, 0x20($v1)
    ctx->pc = 0x138f30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 0));
    // 0x138f34: 0xc04f824  jal         func_13E090
    ctx->pc = 0x138F34u;
    SET_GPR_U32(ctx, 31, 0x138F3Cu);
    ctx->pc = 0x138F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138F34u;
            // 0x138f38: 0xae02004c  sw          $v0, 0x4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138F3Cu; }
        if (ctx->pc != 0x138F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138F3Cu; }
        if (ctx->pc != 0x138F3Cu) { return; }
    }
    ctx->pc = 0x138F3Cu;
    // 0x138f3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x138f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138f40: 0x240500a0  addiu       $a1, $zero, 0xA0
    ctx->pc = 0x138f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x138f44: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x138F44u;
    SET_GPR_U32(ctx, 31, 0x138F4Cu);
    ctx->pc = 0x138F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138F44u;
            // 0x138f48: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138F4Cu; }
        if (ctx->pc != 0x138F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138F4Cu; }
        if (ctx->pc != 0x138F4Cu) { return; }
    }
    ctx->pc = 0x138F4Cu;
    // 0x138f4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x138f4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138f50: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x138f50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138f54: 0xc04e3f6  jal         func_138FD8
    ctx->pc = 0x138F54u;
    SET_GPR_U32(ctx, 31, 0x138F5Cu);
    ctx->pc = 0x138F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x138F54u;
            // 0x138f58: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138FD8u;
    if (runtime->hasFunction(0x138FD8u)) {
        auto targetFn = runtime->lookupFunction(0x138FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138F5Cu; }
        if (ctx->pc != 0x138F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00138FD8_0x138fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x138F5Cu; }
        if (ctx->pc != 0x138F5Cu) { return; }
    }
    ctx->pc = 0x138F5Cu;
    // 0x138f5c: 0xae020048  sw          $v0, 0x48($s0)
    ctx->pc = 0x138f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    // 0x138f60: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x138f60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x138f64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x138f64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x138f68: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x138f68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x138f6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x138f6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x138f70: 0x3e00008  jr          $ra
    ctx->pc = 0x138F70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x138F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x138F70u;
            // 0x138f74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x138F78u;
}
