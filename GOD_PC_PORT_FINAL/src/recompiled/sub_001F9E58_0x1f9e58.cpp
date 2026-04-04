#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F9E58
// Address: 0x1f9e58 - 0x1fa410
void sub_001F9E58_0x1f9e58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9E58_0x1f9e58");
#endif

    ctx->pc = 0x1f9e58u;

    // 0x1f9e58: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x1f9e58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x1f9e5c: 0x7fb200a0  sq          $s2, 0xA0($sp)
    ctx->pc = 0x1f9e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 18));
    // 0x1f9e60: 0x7fb30090  sq          $s3, 0x90($sp)
    ctx->pc = 0x1f9e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 19));
    // 0x1f9e64: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1f9e64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9e68: 0x7fb40080  sq          $s4, 0x80($sp)
    ctx->pc = 0x1f9e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 20));
    // 0x1f9e6c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1f9e6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9e70: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x1f9e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x1f9e74: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1f9e74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9e78: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1f9e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x1f9e7c: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1f9e7cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9e80: 0x7fb000c0  sq          $s0, 0xC0($sp)
    ctx->pc = 0x1f9e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 16));
    // 0x1f9e84: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x1f9e84u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9e88: 0x7fb100b0  sq          $s1, 0xB0($sp)
    ctx->pc = 0x1f9e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 17));
    // 0x1f9e8c: 0x7fb70050  sq          $s7, 0x50($sp)
    ctx->pc = 0x1f9e8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 23));
    // 0x1f9e90: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f9e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1f9e94: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x1f9e94u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x1f9e98: 0x2611e848  addiu       $s1, $s0, -0x17B8
    ctx->pc = 0x1f9e98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
    // 0x1f9e9c: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x1f9e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x1f9ea0: 0x8e23006c  lw          $v1, 0x6C($s1)
    ctx->pc = 0x1f9ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
    // 0x1f9ea4: 0x8c6600d4  lw          $a2, 0xD4($v1)
    ctx->pc = 0x1f9ea4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x1f9ea8: 0x8c640044  lw          $a0, 0x44($v1)
    ctx->pc = 0x1f9ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1f9eac: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1f9eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1f9eb0: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x1f9eb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1f9eb4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x1f9eb4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x1f9eb8: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1f9eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x1f9ebc: 0x24a56a00  addiu       $a1, $a1, 0x6A00
    ctx->pc = 0x1f9ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27136));
    // 0x1f9ec0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1f9ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f9ec4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1f9ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f9ec8: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x1f9ec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1f9ecc: 0xc061e64  jal         func_187990
    ctx->pc = 0x1F9ECCu;
    SET_GPR_U32(ctx, 31, 0x1F9ED4u);
    ctx->pc = 0x1F9ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9ECCu;
            // 0x1f9ed0: 0x8cc40000  lw          $a0, 0x0($a2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187990u;
    if (runtime->hasFunction(0x187990u)) {
        auto targetFn = runtime->lookupFunction(0x187990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9ED4u; }
        if (ctx->pc != 0x1F9ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187990_0x187990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9ED4u; }
        if (ctx->pc != 0x1F9ED4u) { return; }
    }
    ctx->pc = 0x1F9ED4u;
    // 0x1f9ed4: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1f9ed4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f9ed8: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x1f9ed8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9edc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1f9edcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f9ee0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f9ee0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9ee4: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x1f9ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1f9ee8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1f9ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f9eec: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1f9eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1f9ef0: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x1f9ef0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1f9ef4: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x1f9ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1f9ef8: 0x40f809  jalr        $v0
    ctx->pc = 0x1F9EF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F9F00u);
        ctx->pc = 0x1F9EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9EF8u;
            // 0x1f9efc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F9F00u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F9F50u: goto label_1f9f50;
            case 0x1F9F58u: goto label_1f9f58;
            case 0x1F9F98u: goto label_1f9f98;
            case 0x1F9FF0u: goto label_1f9ff0;
            case 0x1F9FF8u: goto label_1f9ff8;
            case 0x1FA040u: goto label_1fa040;
            case 0x1FA0A8u: goto label_1fa0a8;
            case 0x1FA0B0u: goto label_1fa0b0;
            case 0x1FA0F0u: goto label_1fa0f0;
            case 0x1FA158u: goto label_1fa158;
            case 0x1FA160u: goto label_1fa160;
            case 0x1FA1A0u: goto label_1fa1a0;
            case 0x1FA230u: goto label_1fa230;
            case 0x1FA2B4u: goto label_1fa2b4;
            case 0x1FA2F4u: goto label_1fa2f4;
            case 0x1FA30Cu: goto label_1fa30c;
            case 0x1FA334u: goto label_1fa334;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F9F00u; }
            if (ctx->pc != 0x1F9F00u) { return; }
        }
        }
    }
    ctx->pc = 0x1F9F00u;
    // 0x1f9f00: 0xc05e996  jal         func_17A658
    ctx->pc = 0x1F9F00u;
    SET_GPR_U32(ctx, 31, 0x1F9F08u);
    ctx->pc = 0x1F9F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9F00u;
            // 0x1f9f04: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9F08u; }
        if (ctx->pc != 0x1F9F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9F08u; }
        if (ctx->pc != 0x1F9F08u) { return; }
    }
    ctx->pc = 0x1F9F08u;
    // 0x1f9f08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f9f08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9f0c: 0x8e6200b4  lw          $v0, 0xB4($s3)
    ctx->pc = 0x1f9f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
    // 0x1f9f10: 0x8c420184  lw          $v0, 0x184($v0)
    ctx->pc = 0x1f9f10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 388)));
    // 0x1f9f14: 0x8c52001c  lw          $s2, 0x1C($v0)
    ctx->pc = 0x1f9f14u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1f9f18: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x1f9f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1f9f1c: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x1f9f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1f9f20: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1f9f20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f9f24: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x1f9f24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1f9f28: 0x24c2fffc  addiu       $v0, $a2, -0x4
    ctx->pc = 0x1f9f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x1f9f2c: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F9F2Cu;
    {
        const bool branch_taken_0x1f9f2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F9F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9F2Cu;
            // 0x1f9f30: 0x24850004  addiu       $a1, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9f2c) {
            ctx->pc = 0x1F9F50u;
            goto label_1f9f50;
        }
    }
    ctx->pc = 0x1F9F34u;
    // 0x1f9f34: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x1f9f34u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1f9f38: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x1f9f38u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
    // 0x1f9f3c: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x1F9F3Cu;
    SET_GPR_U32(ctx, 31, 0x1F9F44u);
    ctx->pc = 0x1F9F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9F3Cu;
            // 0x1f9f40: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9F44u; }
        if (ctx->pc != 0x1F9F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9F44u; }
        if (ctx->pc != 0x1F9F44u) { return; }
    }
    ctx->pc = 0x1F9F44u;
    // 0x1f9f44: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x1f9f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1f9f48: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F9F48u;
    {
        const bool branch_taken_0x1f9f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9F4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9F48u;
            // 0x1f9f4c: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9f48) {
            ctx->pc = 0x1F9F58u;
            goto label_1f9f58;
        }
    }
    ctx->pc = 0x1F9F50u;
label_1f9f50:
    // 0x1f9f50: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1f9f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1f9f54: 0x0  nop
    ctx->pc = 0x1f9f54u;
    // NOP
label_1f9f58:
    // 0x1f9f58: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x1f9f58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    // 0x1f9f5c: 0x26510014  addiu       $s1, $s2, 0x14
    ctx->pc = 0x1f9f5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x1f9f60: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x1f9f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1f9f64: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1f9f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1f9f68: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1f9f68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1f9f6c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1F9F6Cu;
    {
        const bool branch_taken_0x1f9f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f9f6c) {
            ctx->pc = 0x1F9F70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9F6Cu;
            // 0x1f9f70: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F9F98u;
            goto label_1f9f98;
        }
    }
    ctx->pc = 0x1F9F74u;
    // 0x1f9f74: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x1f9f74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1f9f78: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F9F78u;
    {
        const bool branch_taken_0x1f9f78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f9f78) {
            ctx->pc = 0x1F9F7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9F78u;
            // 0x1f9f7c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F9F98u;
            goto label_1f9f98;
        }
    }
    ctx->pc = 0x1F9F80u;
    // 0x1f9f80: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1f9f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1f9f84: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1f9f84u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1f9f88: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1f9f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1f9f8c: 0x40f809  jalr        $v0
    ctx->pc = 0x1F9F8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F9F94u);
        ctx->pc = 0x1F9F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9F8Cu;
            // 0x1f9f90: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F9F94u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F9F50u: goto label_1f9f50;
            case 0x1F9F58u: goto label_1f9f58;
            case 0x1F9F98u: goto label_1f9f98;
            case 0x1F9FF0u: goto label_1f9ff0;
            case 0x1F9FF8u: goto label_1f9ff8;
            case 0x1FA040u: goto label_1fa040;
            case 0x1FA0A8u: goto label_1fa0a8;
            case 0x1FA0B0u: goto label_1fa0b0;
            case 0x1FA0F0u: goto label_1fa0f0;
            case 0x1FA158u: goto label_1fa158;
            case 0x1FA160u: goto label_1fa160;
            case 0x1FA1A0u: goto label_1fa1a0;
            case 0x1FA230u: goto label_1fa230;
            case 0x1FA2B4u: goto label_1fa2b4;
            case 0x1FA2F4u: goto label_1fa2f4;
            case 0x1FA30Cu: goto label_1fa30c;
            case 0x1FA334u: goto label_1fa334;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F9F94u; }
            if (ctx->pc != 0x1F9F94u) { return; }
        }
        }
    }
    ctx->pc = 0x1F9F94u;
    // 0x1f9f94: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1f9f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f9f98:
    // 0x1f9f98: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1f9f98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1f9f9c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1f9f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1f9fa0: 0x8e7200bc  lw          $s2, 0xBC($s3)
    ctx->pc = 0x1f9fa0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
    // 0x1f9fa4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f9fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f9fa8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1f9fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f9fac: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1f9facu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x1f9fb0: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x1f9fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x1f9fb4: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x1f9fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1f9fb8: 0x8e470018  lw          $a3, 0x18($s2)
    ctx->pc = 0x1f9fb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x1f9fbc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1f9fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1f9fc0: 0x473021  addu        $a2, $v0, $a3
    ctx->pc = 0x1f9fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x1f9fc4: 0x24c2fffc  addiu       $v0, $a2, -0x4
    ctx->pc = 0x1f9fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x1f9fc8: 0x10e20009  beq         $a3, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F9FC8u;
    {
        const bool branch_taken_0x1f9fc8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x1F9FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9FC8u;
            // 0x1f9fcc: 0x24e50004  addiu       $a1, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9fc8) {
            ctx->pc = 0x1F9FF0u;
            goto label_1f9ff0;
        }
    }
    ctx->pc = 0x1F9FD0u;
    // 0x1f9fd0: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1f9fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9fd4: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x1f9fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1f9fd8: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x1f9fd8u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
    // 0x1f9fdc: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x1F9FDCu;
    SET_GPR_U32(ctx, 31, 0x1F9FE4u);
    ctx->pc = 0x1F9FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9FDCu;
            // 0x1f9fe0: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9FE4u; }
        if (ctx->pc != 0x1F9FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9FE4u; }
        if (ctx->pc != 0x1F9FE4u) { return; }
    }
    ctx->pc = 0x1F9FE4u;
    // 0x1f9fe4: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x1f9fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1f9fe8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1F9FE8u;
    {
        const bool branch_taken_0x1f9fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9FE8u;
            // 0x1f9fec: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f9fe8) {
            ctx->pc = 0x1F9FF8u;
            goto label_1f9ff8;
        }
    }
    ctx->pc = 0x1F9FF0u;
label_1f9ff0:
    // 0x1f9ff0: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1f9ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1f9ff4: 0x0  nop
    ctx->pc = 0x1f9ff4u;
    // NOP
label_1f9ff8:
    // 0x1f9ff8: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x1f9ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
    // 0x1f9ffc: 0x8e6200bc  lw          $v0, 0xBC($s3)
    ctx->pc = 0x1f9ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 188)));
    // 0x1fa000: 0x24510014  addiu       $s1, $v0, 0x14
    ctx->pc = 0x1fa000u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1fa004: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1fa004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1fa008: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1fa008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1fa00c: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1fa00cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1fa010: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1FA010u;
    {
        const bool branch_taken_0x1fa010 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa010) {
            ctx->pc = 0x1FA014u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA010u;
            // 0x1fa014: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FA040u;
            goto label_1fa040;
        }
    }
    ctx->pc = 0x1FA018u;
    // 0x1fa018: 0x8e250014  lw          $a1, 0x14($s1)
    ctx->pc = 0x1fa018u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1fa01c: 0x50a00008  beql        $a1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FA01Cu;
    {
        const bool branch_taken_0x1fa01c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa01c) {
            ctx->pc = 0x1FA020u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA01Cu;
            // 0x1fa020: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FA040u;
            goto label_1fa040;
        }
    }
    ctx->pc = 0x1FA024u;
    // 0x1fa024: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x1fa024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1fa028: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1fa028u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1fa02c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1fa02cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1fa030: 0x40f809  jalr        $v0
    ctx->pc = 0x1FA030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FA038u);
        ctx->pc = 0x1FA034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA030u;
            // 0x1fa034: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FA038u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F9F50u: goto label_1f9f50;
            case 0x1F9F58u: goto label_1f9f58;
            case 0x1F9F98u: goto label_1f9f98;
            case 0x1F9FF0u: goto label_1f9ff0;
            case 0x1F9FF8u: goto label_1f9ff8;
            case 0x1FA040u: goto label_1fa040;
            case 0x1FA0A8u: goto label_1fa0a8;
            case 0x1FA0B0u: goto label_1fa0b0;
            case 0x1FA0F0u: goto label_1fa0f0;
            case 0x1FA158u: goto label_1fa158;
            case 0x1FA160u: goto label_1fa160;
            case 0x1FA1A0u: goto label_1fa1a0;
            case 0x1FA230u: goto label_1fa230;
            case 0x1FA2B4u: goto label_1fa2b4;
            case 0x1FA2F4u: goto label_1fa2f4;
            case 0x1FA30Cu: goto label_1fa30c;
            case 0x1FA334u: goto label_1fa334;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FA038u; }
            if (ctx->pc != 0x1FA038u) { return; }
        }
        }
    }
    ctx->pc = 0x1FA038u;
    // 0x1fa038: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1fa038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1fa03c: 0x0  nop
    ctx->pc = 0x1fa03cu;
    // NOP
label_1fa040:
    // 0x1fa040: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1fa040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa044: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1fa044u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1fa048: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1fa048u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fa04c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1fa04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1fa050: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fa050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fa054: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1fa054u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1fa058: 0xc05e996  jal         func_17A658
    ctx->pc = 0x1FA058u;
    SET_GPR_U32(ctx, 31, 0x1FA060u);
    ctx->pc = 0x1FA05Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA058u;
            // 0x1fa05c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA060u; }
        if (ctx->pc != 0x1FA060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA060u; }
        if (ctx->pc != 0x1FA060u) { return; }
    }
    ctx->pc = 0x1FA060u;
    // 0x1fa060: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fa060u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa064: 0x8e6200c0  lw          $v0, 0xC0($s3)
    ctx->pc = 0x1fa064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 192)));
    // 0x1fa068: 0x8c51001c  lw          $s1, 0x1C($v0)
    ctx->pc = 0x1fa068u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1fa06c: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1fa06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1fa070: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x1fa070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1fa074: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1fa074u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fa078: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x1fa078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1fa07c: 0x24c2fffc  addiu       $v0, $a2, -0x4
    ctx->pc = 0x1fa07cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x1fa080: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FA080u;
    {
        const bool branch_taken_0x1fa080 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FA084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA080u;
            // 0x1fa084: 0x24850004  addiu       $a1, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa080) {
            ctx->pc = 0x1FA0A8u;
            goto label_1fa0a8;
        }
    }
    ctx->pc = 0x1FA088u;
    // 0x1fa088: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x1fa088u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1fa08c: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x1fa08cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
    // 0x1fa090: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x1FA090u;
    SET_GPR_U32(ctx, 31, 0x1FA098u);
    ctx->pc = 0x1FA094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA090u;
            // 0x1fa094: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA098u; }
        if (ctx->pc != 0x1FA098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA098u; }
        if (ctx->pc != 0x1FA098u) { return; }
    }
    ctx->pc = 0x1FA098u;
    // 0x1fa098: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1fa098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1fa09c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FA09Cu;
    {
        const bool branch_taken_0x1fa09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA0A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA09Cu;
            // 0x1fa0a0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa09c) {
            ctx->pc = 0x1FA0B0u;
            goto label_1fa0b0;
        }
    }
    ctx->pc = 0x1FA0A4u;
    // 0x1fa0a4: 0x0  nop
    ctx->pc = 0x1fa0a4u;
    // NOP
label_1fa0a8:
    // 0x1fa0a8: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1fa0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1fa0ac: 0x0  nop
    ctx->pc = 0x1fa0acu;
    // NOP
label_1fa0b0:
    // 0x1fa0b0: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x1fa0b0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x1fa0b4: 0x26320014  addiu       $s2, $s1, 0x14
    ctx->pc = 0x1fa0b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1fa0b8: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1fa0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1fa0bc: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x1fa0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1fa0c0: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1fa0c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1fa0c4: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1FA0C4u;
    {
        const bool branch_taken_0x1fa0c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa0c4) {
            ctx->pc = 0x1FA0C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA0C4u;
            // 0x1fa0c8: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FA0F0u;
            goto label_1fa0f0;
        }
    }
    ctx->pc = 0x1FA0CCu;
    // 0x1fa0cc: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x1fa0ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1fa0d0: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FA0D0u;
    {
        const bool branch_taken_0x1fa0d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa0d0) {
            ctx->pc = 0x1FA0D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA0D0u;
            // 0x1fa0d4: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FA0F0u;
            goto label_1fa0f0;
        }
    }
    ctx->pc = 0x1FA0D8u;
    // 0x1fa0d8: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1fa0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1fa0dc: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1fa0dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1fa0e0: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1fa0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1fa0e4: 0x40f809  jalr        $v0
    ctx->pc = 0x1FA0E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FA0ECu);
        ctx->pc = 0x1FA0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA0E4u;
            // 0x1fa0e8: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FA0ECu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F9F50u: goto label_1f9f50;
            case 0x1F9F58u: goto label_1f9f58;
            case 0x1F9F98u: goto label_1f9f98;
            case 0x1F9FF0u: goto label_1f9ff0;
            case 0x1F9FF8u: goto label_1f9ff8;
            case 0x1FA040u: goto label_1fa040;
            case 0x1FA0A8u: goto label_1fa0a8;
            case 0x1FA0B0u: goto label_1fa0b0;
            case 0x1FA0F0u: goto label_1fa0f0;
            case 0x1FA158u: goto label_1fa158;
            case 0x1FA160u: goto label_1fa160;
            case 0x1FA1A0u: goto label_1fa1a0;
            case 0x1FA230u: goto label_1fa230;
            case 0x1FA2B4u: goto label_1fa2b4;
            case 0x1FA2F4u: goto label_1fa2f4;
            case 0x1FA30Cu: goto label_1fa30c;
            case 0x1FA334u: goto label_1fa334;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FA0ECu; }
            if (ctx->pc != 0x1FA0ECu) { return; }
        }
        }
    }
    ctx->pc = 0x1FA0ECu;
    // 0x1fa0ec: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1fa0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1fa0f0:
    // 0x1fa0f0: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1fa0f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa0f4: 0x8e450004  lw          $a1, 0x4($s2)
    ctx->pc = 0x1fa0f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1fa0f8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1fa0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fa0fc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1fa0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x1fa100: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fa100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fa104: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1fa104u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1fa108: 0xc05e996  jal         func_17A658
    ctx->pc = 0x1FA108u;
    SET_GPR_U32(ctx, 31, 0x1FA110u);
    ctx->pc = 0x1FA10Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA108u;
            // 0x1fa10c: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA110u; }
        if (ctx->pc != 0x1FA110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA110u; }
        if (ctx->pc != 0x1FA110u) { return; }
    }
    ctx->pc = 0x1FA110u;
    // 0x1fa110: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1fa110u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa114: 0x8e6200c8  lw          $v0, 0xC8($s3)
    ctx->pc = 0x1fa114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 200)));
    // 0x1fa118: 0x8c51001c  lw          $s1, 0x1C($v0)
    ctx->pc = 0x1fa118u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x1fa11c: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1fa11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1fa120: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x1fa120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1fa124: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1fa124u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fa128: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x1fa128u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1fa12c: 0x24c2fffc  addiu       $v0, $a2, -0x4
    ctx->pc = 0x1fa12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x1fa130: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1FA130u;
    {
        const bool branch_taken_0x1fa130 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1FA134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA130u;
            // 0x1fa134: 0x24850004  addiu       $a1, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa130) {
            ctx->pc = 0x1FA158u;
            goto label_1fa158;
        }
    }
    ctx->pc = 0x1FA138u;
    // 0x1fa138: 0xc53023  subu        $a2, $a2, $a1
    ctx->pc = 0x1fa138u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x1fa13c: 0x63083  sra         $a2, $a2, 2
    ctx->pc = 0x1fa13cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 2));
    // 0x1fa140: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x1FA140u;
    SET_GPR_U32(ctx, 31, 0x1FA148u);
    ctx->pc = 0x1FA144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA140u;
            // 0x1fa144: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA148u; }
        if (ctx->pc != 0x1FA148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA148u; }
        if (ctx->pc != 0x1FA148u) { return; }
    }
    ctx->pc = 0x1FA148u;
    // 0x1fa148: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1fa148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1fa14c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1FA14Cu;
    {
        const bool branch_taken_0x1fa14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA14Cu;
            // 0x1fa150: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa14c) {
            ctx->pc = 0x1FA160u;
            goto label_1fa160;
        }
    }
    ctx->pc = 0x1FA154u;
    // 0x1fa154: 0x0  nop
    ctx->pc = 0x1fa154u;
    // NOP
label_1fa158:
    // 0x1fa158: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x1fa158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1fa15c: 0x0  nop
    ctx->pc = 0x1fa15cu;
    // NOP
label_1fa160:
    // 0x1fa160: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x1fa160u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
    // 0x1fa164: 0x26320014  addiu       $s2, $s1, 0x14
    ctx->pc = 0x1fa164u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x1fa168: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x1fa168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1fa16c: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x1fa16cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x1fa170: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x1fa170u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1fa174: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1FA174u;
    {
        const bool branch_taken_0x1fa174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1fa174) {
            ctx->pc = 0x1FA178u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA174u;
            // 0x1fa178: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FA1A0u;
            goto label_1fa1a0;
        }
    }
    ctx->pc = 0x1FA17Cu;
    // 0x1fa17c: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x1fa17cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x1fa180: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FA180u;
    {
        const bool branch_taken_0x1fa180 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa180) {
            ctx->pc = 0x1FA184u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA180u;
            // 0x1fa184: 0x8e430000  lw          $v1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FA1A0u;
            goto label_1fa1a0;
        }
    }
    ctx->pc = 0x1FA188u;
    // 0x1fa188: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1fa188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1fa18c: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x1fa18cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1fa190: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1fa190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x1fa194: 0x40f809  jalr        $v0
    ctx->pc = 0x1FA194u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FA19Cu);
        ctx->pc = 0x1FA198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA194u;
            // 0x1fa198: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FA19Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F9F50u: goto label_1f9f50;
            case 0x1F9F58u: goto label_1f9f58;
            case 0x1F9F98u: goto label_1f9f98;
            case 0x1F9FF0u: goto label_1f9ff0;
            case 0x1F9FF8u: goto label_1f9ff8;
            case 0x1FA040u: goto label_1fa040;
            case 0x1FA0A8u: goto label_1fa0a8;
            case 0x1FA0B0u: goto label_1fa0b0;
            case 0x1FA0F0u: goto label_1fa0f0;
            case 0x1FA158u: goto label_1fa158;
            case 0x1FA160u: goto label_1fa160;
            case 0x1FA1A0u: goto label_1fa1a0;
            case 0x1FA230u: goto label_1fa230;
            case 0x1FA2B4u: goto label_1fa2b4;
            case 0x1FA2F4u: goto label_1fa2f4;
            case 0x1FA30Cu: goto label_1fa30c;
            case 0x1FA334u: goto label_1fa334;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FA19Cu; }
            if (ctx->pc != 0x1FA19Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1FA19Cu;
    // 0x1fa19c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1fa19cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1fa1a0:
    // 0x1fa1a0: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x1fa1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1fa1a4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1fa1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1fa1a8: 0x8e650080  lw          $a1, 0x80($s3)
    ctx->pc = 0x1fa1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x1fa1ac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1fa1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1fa1b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1fa1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1fa1b4: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1fa1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1fa1b8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1fa1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1fa1bc: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x1fa1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x1fa1c0: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1fa1c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
    // 0x1fa1c4: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x1fa1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x1fa1c8: 0x40f809  jalr        $v0
    ctx->pc = 0x1FA1C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FA1D0u);
        ctx->pc = 0x1FA1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA1C8u;
            // 0x1fa1cc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FA1D0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F9F50u: goto label_1f9f50;
            case 0x1F9F58u: goto label_1f9f58;
            case 0x1F9F98u: goto label_1f9f98;
            case 0x1F9FF0u: goto label_1f9ff0;
            case 0x1F9FF8u: goto label_1f9ff8;
            case 0x1FA040u: goto label_1fa040;
            case 0x1FA0A8u: goto label_1fa0a8;
            case 0x1FA0B0u: goto label_1fa0b0;
            case 0x1FA0F0u: goto label_1fa0f0;
            case 0x1FA158u: goto label_1fa158;
            case 0x1FA160u: goto label_1fa160;
            case 0x1FA1A0u: goto label_1fa1a0;
            case 0x1FA230u: goto label_1fa230;
            case 0x1FA2B4u: goto label_1fa2b4;
            case 0x1FA2F4u: goto label_1fa2f4;
            case 0x1FA30Cu: goto label_1fa30c;
            case 0x1FA334u: goto label_1fa334;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FA1D0u; }
            if (ctx->pc != 0x1FA1D0u) { return; }
        }
        }
    }
    ctx->pc = 0x1FA1D0u;
    // 0x1fa1d0: 0x86630090  lh          $v1, 0x90($s3)
    ctx->pc = 0x1fa1d0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 144)));
    // 0x1fa1d4: 0x24040034  addiu       $a0, $zero, 0x34
    ctx->pc = 0x1fa1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x1fa1d8: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1fa1d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1fa1dc: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x1fa1dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1fa1e0: 0xc080406  jal         func_201018
    ctx->pc = 0x1FA1E0u;
    SET_GPR_U32(ctx, 31, 0x1FA1E8u);
    ctx->pc = 0x1FA1E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA1E0u;
            // 0x1fa1e4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201018u;
    if (runtime->hasFunction(0x201018u)) {
        auto targetFn = runtime->lookupFunction(0x201018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA1E8u; }
        if (ctx->pc != 0x1FA1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00201018_0x201018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA1E8u; }
        if (ctx->pc != 0x1FA1E8u) { return; }
    }
    ctx->pc = 0x1FA1E8u;
    // 0x1fa1e8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1fa1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1fa1ec: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1fa1ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1fa1f0: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x1fa1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1fa1f4: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x1fa1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x1fa1f8: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x1fa1f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1fa1fc: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x1fa1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x1fa200: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x1fa200u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1fa204: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x1fa204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1fa208: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x1fa208u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1fa20c: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1fa20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x1fa210: 0xc04c9da  jal         func_132768
    ctx->pc = 0x1FA210u;
    SET_GPR_U32(ctx, 31, 0x1FA218u);
    ctx->pc = 0x1FA214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA210u;
            // 0x1fa214: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132768u;
    if (runtime->hasFunction(0x132768u)) {
        auto targetFn = runtime->lookupFunction(0x132768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA218u; }
        if (ctx->pc != 0x1FA218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132768_0x132768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA218u; }
        if (ctx->pc != 0x1FA218u) { return; }
    }
    ctx->pc = 0x1FA218u;
    // 0x1fa218: 0xc04c942  jal         func_132508
    ctx->pc = 0x1FA218u;
    SET_GPR_U32(ctx, 31, 0x1FA220u);
    ctx->pc = 0x1FA21Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA218u;
            // 0x1fa21c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132508u;
    if (runtime->hasFunction(0x132508u)) {
        auto targetFn = runtime->lookupFunction(0x132508u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA220u; }
        if (ctx->pc != 0x1FA220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132508_0x132508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA220u; }
        if (ctx->pc != 0x1FA220u) { return; }
    }
    ctx->pc = 0x1FA220u;
    // 0x1fa220: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FA220u;
    {
        const bool branch_taken_0x1fa220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA220u;
            // 0x1fa224: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa220) {
            ctx->pc = 0x1FA230u;
            goto label_1fa230;
        }
    }
    ctx->pc = 0x1FA228u;
    // 0x1fa228: 0xc04c9ee  jal         func_1327B8
    ctx->pc = 0x1FA228u;
    SET_GPR_U32(ctx, 31, 0x1FA230u);
    ctx->pc = 0x1FA22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA228u;
            // 0x1fa22c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1327B8u;
    if (runtime->hasFunction(0x1327B8u)) {
        auto targetFn = runtime->lookupFunction(0x1327B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA230u; }
        if (ctx->pc != 0x1FA230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001327B8_0x1327b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA230u; }
        if (ctx->pc != 0x1FA230u) { return; }
    }
    ctx->pc = 0x1FA230u;
label_1fa230:
    // 0x1fa230: 0xc04c992  jal         func_132648
    ctx->pc = 0x1FA230u;
    SET_GPR_U32(ctx, 31, 0x1FA238u);
    ctx->pc = 0x1FA234u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA230u;
            // 0x1fa234: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132648u;
    if (runtime->hasFunction(0x132648u)) {
        auto targetFn = runtime->lookupFunction(0x132648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA238u; }
        if (ctx->pc != 0x1FA238u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132648_0x132648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA238u; }
        if (ctx->pc != 0x1FA238u) { return; }
    }
    ctx->pc = 0x1FA238u;
    // 0x1fa238: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1fa238u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa23c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1fa23cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1fa240: 0x8e620080  lw          $v0, 0x80($s3)
    ctx->pc = 0x1fa240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 128)));
    // 0x1fa244: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1fa244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa248: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x1fa248u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x1fa24c: 0xc04c518  jal         func_131460
    ctx->pc = 0x1FA24Cu;
    SET_GPR_U32(ctx, 31, 0x1FA254u);
    ctx->pc = 0x1FA250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA24Cu;
            // 0x1fa250: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131460u;
    if (runtime->hasFunction(0x131460u)) {
        auto targetFn = runtime->lookupFunction(0x131460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA254u; }
        if (ctx->pc != 0x1FA254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131460_0x131460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA254u; }
        if (ctx->pc != 0x1FA254u) { return; }
    }
    ctx->pc = 0x1FA254u;
    // 0x1fa254: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x1fa254u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fa258: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1fa258u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1fa25c: 0xdca4bdf8  ld          $a0, -0x4208($a1)
    ctx->pc = 0x1fa25cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 4294950392)));
    // 0x1fa260: 0x7e220020  sq          $v0, 0x20($s1)
    ctx->pc = 0x1fa260u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), GPR_VEC(ctx, 2));
    // 0x1fa264: 0x86230060  lh          $v1, 0x60($s1)
    ctx->pc = 0x1fa264u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x1fa268: 0x64840001  daddiu      $a0, $a0, 0x1
    ctx->pc = 0x1fa268u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
    // 0x1fa26c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x1fa26cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fa270: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x1fa270u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x1fa274: 0x7e220030  sq          $v0, 0x30($s1)
    ctx->pc = 0x1fa274u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 2));
    // 0x1fa278: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1fa278u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa27c: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x1fa27cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1fa280: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1fa280u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa284: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x1fa284u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fa288: 0x7e220040  sq          $v0, 0x40($s1)
    ctx->pc = 0x1fa288u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 64), GPR_VEC(ctx, 2));
    // 0x1fa28c: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x1fa28cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1fa290: 0x7e220050  sq          $v0, 0x50($s1)
    ctx->pc = 0x1fa290u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 80), GPR_VEC(ctx, 2));
    // 0x1fa294: 0xfca4bdf8  sd          $a0, -0x4208($a1)
    ctx->pc = 0x1fa294u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 4294950392), GPR_U64(ctx, 4));
    // 0x1fa298: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x1fa298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x1fa29c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1fa29cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1fa2a0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FA2A0u;
    {
        const bool branch_taken_0x1fa2a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA2A0u;
            // 0x1fa2a4: 0xfe230068  sd          $v1, 0x68($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 104), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa2a0) {
            ctx->pc = 0x1FA2B4u;
            goto label_1fa2b4;
        }
    }
    ctx->pc = 0x1FA2A8u;
    // 0x1fa2a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fa2a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa2ac: 0xc080592  jal         func_201648
    ctx->pc = 0x1FA2ACu;
    SET_GPR_U32(ctx, 31, 0x1FA2B4u);
    ctx->pc = 0x1FA2B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA2ACu;
            // 0x1fa2b0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201648u;
    if (runtime->hasFunction(0x201648u)) {
        auto targetFn = runtime->lookupFunction(0x201648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA2B4u; }
        if (ctx->pc != 0x1FA2B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00201648_0x201648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA2B4u; }
        if (ctx->pc != 0x1FA2B4u) { return; }
    }
    ctx->pc = 0x1FA2B4u;
label_1fa2b4:
    // 0x1fa2b4: 0xc080398  jal         func_200E60
    ctx->pc = 0x1FA2B4u;
    SET_GPR_U32(ctx, 31, 0x1FA2BCu);
    ctx->pc = 0x1FA2B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA2B4u;
            // 0x1fa2b8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200E60u;
    if (runtime->hasFunction(0x200E60u)) {
        auto targetFn = runtime->lookupFunction(0x200E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA2BCu; }
        if (ctx->pc != 0x1FA2BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00200E60_0x200e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA2BCu; }
        if (ctx->pc != 0x1FA2BCu) { return; }
    }
    ctx->pc = 0x1FA2BCu;
    // 0x1fa2bc: 0x8e6600b4  lw          $a2, 0xB4($s3)
    ctx->pc = 0x1fa2bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 180)));
    // 0x1fa2c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fa2c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa2c4: 0xc0804e0  jal         func_201380
    ctx->pc = 0x1FA2C4u;
    SET_GPR_U32(ctx, 31, 0x1FA2CCu);
    ctx->pc = 0x1FA2C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA2C4u;
            // 0x1fa2c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201380u;
    if (runtime->hasFunction(0x201380u)) {
        auto targetFn = runtime->lookupFunction(0x201380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA2CCu; }
        if (ctx->pc != 0x1FA2CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00201380_0x201380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA2CCu; }
        if (ctx->pc != 0x1FA2CCu) { return; }
    }
    ctx->pc = 0x1FA2CCu;
    // 0x1fa2cc: 0x86620090  lh          $v0, 0x90($s3)
    ctx->pc = 0x1fa2ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 144)));
    // 0x1fa2d0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FA2D0u;
    {
        const bool branch_taken_0x1fa2d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FA2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA2D0u;
            // 0x1fa2d4: 0xae6000ac  sw          $zero, 0xAC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 172), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa2d0) {
            ctx->pc = 0x1FA2F4u;
            goto label_1fa2f4;
        }
    }
    ctx->pc = 0x1FA2D8u;
    // 0x1fa2d8: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1fa2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1fa2dc: 0xc05e996  jal         func_17A658
    ctx->pc = 0x1FA2DCu;
    SET_GPR_U32(ctx, 31, 0x1FA2E4u);
    ctx->pc = 0x1FA2E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA2DCu;
            // 0x1fa2e0: 0x248478a8  addiu       $a0, $a0, 0x78A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30888));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA2E4u; }
        if (ctx->pc != 0x1FA2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA2E4u; }
        if (ctx->pc != 0x1FA2E4u) { return; }
    }
    ctx->pc = 0x1FA2E4u;
    // 0x1fa2e4: 0x8e2300f4  lw          $v1, 0xF4($s1)
    ctx->pc = 0x1fa2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x1fa2e8: 0xae6200ac  sw          $v0, 0xAC($s3)
    ctx->pc = 0x1fa2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 172), GPR_U32(ctx, 2));
    // 0x1fa2ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1FA2ECu;
    {
        const bool branch_taken_0x1fa2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FA2F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA2ECu;
            // 0x1fa2f0: 0x34630100  ori         $v1, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1fa2ec) {
            ctx->pc = 0x1FA30Cu;
            goto label_1fa30c;
        }
    }
    ctx->pc = 0x1FA2F4u;
label_1fa2f4:
    // 0x1fa2f4: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x1fa2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
    // 0x1fa2f8: 0xc05e996  jal         func_17A658
    ctx->pc = 0x1FA2F8u;
    SET_GPR_U32(ctx, 31, 0x1FA300u);
    ctx->pc = 0x1FA2FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA2F8u;
            // 0x1fa2fc: 0x248478b8  addiu       $a0, $a0, 0x78B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA300u; }
        if (ctx->pc != 0x1FA300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA300u; }
        if (ctx->pc != 0x1FA300u) { return; }
    }
    ctx->pc = 0x1FA300u;
    // 0x1fa300: 0x8e2300f4  lw          $v1, 0xF4($s1)
    ctx->pc = 0x1fa300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 244)));
    // 0x1fa304: 0xae6200ac  sw          $v0, 0xAC($s3)
    ctx->pc = 0x1fa304u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 172), GPR_U32(ctx, 2));
    // 0x1fa308: 0x34630200  ori         $v1, $v1, 0x200
    ctx->pc = 0x1fa308u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)512);
label_1fa30c:
    // 0x1fa30c: 0xae2300f4  sw          $v1, 0xF4($s1)
    ctx->pc = 0x1fa30cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 244), GPR_U32(ctx, 3));
    // 0x1fa310: 0x8e6600ac  lw          $a2, 0xAC($s3)
    ctx->pc = 0x1fa310u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 172)));
    // 0x1fa314: 0x50c00007  beql        $a2, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x1FA314u;
    {
        const bool branch_taken_0x1fa314 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fa314) {
            ctx->pc = 0x1FA318u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA314u;
            // 0x1fa318: 0x8e6200a8  lw          $v0, 0xA8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 168)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1FA334u;
            goto label_1fa334;
        }
    }
    ctx->pc = 0x1FA31Cu;
    // 0x1fa31c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1fa31cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa320: 0xc0804e0  jal         func_201380
    ctx->pc = 0x1FA320u;
    SET_GPR_U32(ctx, 31, 0x1FA328u);
    ctx->pc = 0x1FA324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA320u;
            // 0x1fa324: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201380u;
    if (runtime->hasFunction(0x201380u)) {
        auto targetFn = runtime->lookupFunction(0x201380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA328u; }
        if (ctx->pc != 0x1FA328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00201380_0x201380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA328u; }
        if (ctx->pc != 0x1FA328u) { return; }
    }
    ctx->pc = 0x1FA328u;
    // 0x1fa328: 0x8e6200ac  lw          $v0, 0xAC($s3)
    ctx->pc = 0x1fa328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 172)));
    // 0x1fa32c: 0xac4000e0  sw          $zero, 0xE0($v0)
    ctx->pc = 0x1fa32cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 224), GPR_U32(ctx, 0));
    // 0x1fa330: 0x8e6200a8  lw          $v0, 0xA8($s3)
    ctx->pc = 0x1fa330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 168)));
label_1fa334:
    // 0x1fa334: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x1fa334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x1fa338: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1fa338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1fa33c: 0xae6200a8  sw          $v0, 0xA8($s3)
    ctx->pc = 0x1fa33cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 168), GPR_U32(ctx, 2));
    // 0x1fa340: 0x26e2e848  addiu       $v0, $s7, -0x17B8
    ctx->pc = 0x1fa340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961224));
    // 0x1fa344: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1fa344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x1fa348: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1fa348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1fa34c: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x1fa34cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1fa350: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x1fa350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x1fa354: 0x40f809  jalr        $v0
    ctx->pc = 0x1FA354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1FA35Cu);
        ctx->pc = 0x1FA358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA354u;
            // 0x1fa358: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1FA35Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F9F50u: goto label_1f9f50;
            case 0x1F9F58u: goto label_1f9f58;
            case 0x1F9F98u: goto label_1f9f98;
            case 0x1F9FF0u: goto label_1f9ff0;
            case 0x1F9FF8u: goto label_1f9ff8;
            case 0x1FA040u: goto label_1fa040;
            case 0x1FA0A8u: goto label_1fa0a8;
            case 0x1FA0B0u: goto label_1fa0b0;
            case 0x1FA0F0u: goto label_1fa0f0;
            case 0x1FA158u: goto label_1fa158;
            case 0x1FA160u: goto label_1fa160;
            case 0x1FA1A0u: goto label_1fa1a0;
            case 0x1FA230u: goto label_1fa230;
            case 0x1FA2B4u: goto label_1fa2b4;
            case 0x1FA2F4u: goto label_1fa2f4;
            case 0x1FA30Cu: goto label_1fa30c;
            case 0x1FA334u: goto label_1fa334;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1FA35Cu; }
            if (ctx->pc != 0x1FA35Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1FA35Cu;
    // 0x1fa35c: 0x7bb000c0  lq          $s0, 0xC0($sp)
    ctx->pc = 0x1fa35cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1fa360: 0x7bb100b0  lq          $s1, 0xB0($sp)
    ctx->pc = 0x1fa360u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1fa364: 0x7bb200a0  lq          $s2, 0xA0($sp)
    ctx->pc = 0x1fa364u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1fa368: 0x7bb30090  lq          $s3, 0x90($sp)
    ctx->pc = 0x1fa368u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1fa36c: 0x7bb40080  lq          $s4, 0x80($sp)
    ctx->pc = 0x1fa36cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1fa370: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x1fa370u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1fa374: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1fa374u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1fa378: 0x7bb70050  lq          $s7, 0x50($sp)
    ctx->pc = 0x1fa378u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1fa37c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1fa37cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1fa380: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA380u;
            // 0x1fa384: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F9F50u: goto label_1f9f50;
            case 0x1F9F58u: goto label_1f9f58;
            case 0x1F9F98u: goto label_1f9f98;
            case 0x1F9FF0u: goto label_1f9ff0;
            case 0x1F9FF8u: goto label_1f9ff8;
            case 0x1FA040u: goto label_1fa040;
            case 0x1FA0A8u: goto label_1fa0a8;
            case 0x1FA0B0u: goto label_1fa0b0;
            case 0x1FA0F0u: goto label_1fa0f0;
            case 0x1FA158u: goto label_1fa158;
            case 0x1FA160u: goto label_1fa160;
            case 0x1FA1A0u: goto label_1fa1a0;
            case 0x1FA230u: goto label_1fa230;
            case 0x1FA2B4u: goto label_1fa2b4;
            case 0x1FA2F4u: goto label_1fa2f4;
            case 0x1FA30Cu: goto label_1fa30c;
            case 0x1FA334u: goto label_1fa334;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FA388u;
    // 0x1fa388: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1fa388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1fa38c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1fa38cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1fa390: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1fa390u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1fa394: 0x3c10002c  lui         $s0, 0x2C
    ctx->pc = 0x1fa394u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)44 << 16));
    // 0x1fa398: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1fa398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1fa39c: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x1fa39cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x1fa3a0: 0x26107790  addiu       $s0, $s0, 0x7790
    ctx->pc = 0x1fa3a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 30608));
    // 0x1fa3a4: 0x2631f170  addiu       $s1, $s1, -0xE90
    ctx->pc = 0x1fa3a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294963568));
    // 0x1fa3a8: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x1fa3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1fa3ac: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1fa3acu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa3b0: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x1fa3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1fa3b4: 0x96060034  lhu         $a2, 0x34($s0)
    ctx->pc = 0x1fa3b4u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1fa3b8: 0x8e270014  lw          $a3, 0x14($s1)
    ctx->pc = 0x1fa3b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1fa3bc: 0x8e280020  lw          $t0, 0x20($s1)
    ctx->pc = 0x1fa3bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1fa3c0: 0xc080bd2  jal         func_202F48
    ctx->pc = 0x1FA3C0u;
    SET_GPR_U32(ctx, 31, 0x1FA3C8u);
    ctx->pc = 0x1FA3C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA3C0u;
            // 0x1fa3c4: 0x96290024  lhu         $t1, 0x24($s1) (Delay Slot)
        SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x202F48u;
    if (runtime->hasFunction(0x202F48u)) {
        auto targetFn = runtime->lookupFunction(0x202F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA3C8u; }
        if (ctx->pc != 0x1FA3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00202F48_0x202f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA3C8u; }
        if (ctx->pc != 0x1FA3C8u) { return; }
    }
    ctx->pc = 0x1FA3C8u;
    // 0x1fa3c8: 0x96290024  lhu         $t1, 0x24($s1)
    ctx->pc = 0x1fa3c8u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1fa3cc: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1fa3ccu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1fa3d0: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x1fa3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1fa3d4: 0x2408000b  addiu       $t0, $zero, 0xB
    ctx->pc = 0x1fa3d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1fa3d8: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x1fa3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1fa3dc: 0x96060034  lhu         $a2, 0x34($s0)
    ctx->pc = 0x1fa3dcu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x1fa3e0: 0xc080bd2  jal         func_202F48
    ctx->pc = 0x1FA3E0u;
    SET_GPR_U32(ctx, 31, 0x1FA3E8u);
    ctx->pc = 0x1FA3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA3E0u;
            // 0x1fa3e4: 0x8e270014  lw          $a3, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x202F48u;
    if (runtime->hasFunction(0x202F48u)) {
        auto targetFn = runtime->lookupFunction(0x202F48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA3E8u; }
        if (ctx->pc != 0x1FA3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00202F48_0x202f48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1FA3E8u; }
        if (ctx->pc != 0x1FA3E8u) { return; }
    }
    ctx->pc = 0x1FA3E8u;
    // 0x1fa3e8: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x1fa3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x1fa3ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fa3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fa3f0: 0xac626318  sw          $v0, 0x6318($v1)
    ctx->pc = 0x1fa3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 25368), GPR_U32(ctx, 2));
    // 0x1fa3f4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1fa3f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fa3f8: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1fa3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x1fa3fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1fa3fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fa400: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1fa400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fa404: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FA404u;
            // 0x1fa408: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1F9F50u: goto label_1f9f50;
            case 0x1F9F58u: goto label_1f9f58;
            case 0x1F9F98u: goto label_1f9f98;
            case 0x1F9FF0u: goto label_1f9ff0;
            case 0x1F9FF8u: goto label_1f9ff8;
            case 0x1FA040u: goto label_1fa040;
            case 0x1FA0A8u: goto label_1fa0a8;
            case 0x1FA0B0u: goto label_1fa0b0;
            case 0x1FA0F0u: goto label_1fa0f0;
            case 0x1FA158u: goto label_1fa158;
            case 0x1FA160u: goto label_1fa160;
            case 0x1FA1A0u: goto label_1fa1a0;
            case 0x1FA230u: goto label_1fa230;
            case 0x1FA2B4u: goto label_1fa2b4;
            case 0x1FA2F4u: goto label_1fa2f4;
            case 0x1FA30Cu: goto label_1fa30c;
            case 0x1FA334u: goto label_1fa334;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1FA40Cu;
    // 0x1fa40c: 0x0  nop
    ctx->pc = 0x1fa40cu;
    // NOP
}
