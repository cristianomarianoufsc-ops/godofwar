#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_27d990
// Address: 0x27d990 - 0x27dac0
void entry_27d990_0x27dac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_27d990_0x27dac0");
#endif

    ctx->pc = 0x27d990u;

    // 0x27d990: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x27d990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27d994: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x27d994u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x27d998: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x27d998u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x27d99c: 0x24a300ff  addiu       $v1, $a1, 0xFF
    ctx->pc = 0x27d99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 255));
    // 0x27d9a0: 0xa2180b  movn        $v1, $a1, $v0
    ctx->pc = 0x27d9a0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
    // 0x27d9a4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x27d9a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x27d9a8: 0x39a03  sra         $s3, $v1, 8
    ctx->pc = 0x27d9a8u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 3), 8));
    // 0x27d9ac: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x27d9acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
    // 0x27d9b0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x27d9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x27d9b4: 0x131200  sll         $v0, $s3, 8
    ctx->pc = 0x27d9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 8));
    // 0x27d9b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27d9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27d9bc: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x27d9bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d9c0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x27d9c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d9c4: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x27d9c4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d9c8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x27d9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27d9cc: 0xa29823  subu        $s3, $a1, $v0
    ctx->pc = 0x27d9ccu;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x27d9d0: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x27d9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x27d9d4: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x27d9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x27d9d8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x27d9d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d9dc: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x27d9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x27d9e0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x27d9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x27d9e4: 0xc09f586  jal         func_27D618
    ctx->pc = 0x27D9E4u;
    SET_GPR_U32(ctx, 31, 0x27D9ECu);
    ctx->pc = 0x27D9E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D9E4u;
            // 0x27d9e8: 0xffb20020  sd          $s2, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D618u;
    if (runtime->hasFunction(0x27D618u)) {
        auto targetFn = runtime->lookupFunction(0x27D618u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D9ECu; }
        if (ctx->pc != 0x27D9ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027D618_0x27d618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D9ECu; }
        if (ctx->pc != 0x27D9ECu) { return; }
    }
    ctx->pc = 0x27D9ECu;
    // 0x27d9ec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27d9ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d9f0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x27d9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x27d9f4: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x27D9F4u;
    {
        const bool branch_taken_0x27d9f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D9F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D9F4u;
            // 0x27d9f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d9f4) {
            ctx->pc = 0x27DA90u;
            goto label_27da90;
        }
    }
    ctx->pc = 0x27D9FCu;
    // 0x27d9fc: 0x24020898  addiu       $v0, $zero, 0x898
    ctx->pc = 0x27d9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
    // 0x27da00: 0x3c170032  lui         $s7, 0x32
    ctx->pc = 0x27da00u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)50 << 16));
    // 0x27da04: 0x2029018  mult        $s2, $s0, $v0
    ctx->pc = 0x27da04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x27da08: 0x26f6c9c8  addiu       $s6, $s7, -0x3638
    ctx->pc = 0x27da08u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 23), 4294953416));
    // 0x27da0c: 0x26c20800  addiu       $v0, $s6, 0x800
    ctx->pc = 0x27da0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 2048));
    // 0x27da10: 0x242a821  addu        $s5, $s2, $v0
    ctx->pc = 0x27da10u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x27da14: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x27da14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x27da18: 0x10710012  beq         $v1, $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x27DA18u;
    {
        const bool branch_taken_0x27da18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        ctx->pc = 0x27DA1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DA18u;
            // 0x27da1c: 0x24040898  addiu       $a0, $zero, 0x898 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27da18) {
            ctx->pc = 0x27DA64u;
            goto label_27da64;
        }
    }
    ctx->pc = 0x27DA20u;
    // 0x27da20: 0xc09f5ce  jal         func_27D738
    ctx->pc = 0x27DA20u;
    SET_GPR_U32(ctx, 31, 0x27DA28u);
    ctx->pc = 0x27DA24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DA20u;
            // 0x27da24: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D738u;
    if (runtime->hasFunction(0x27D738u)) {
        auto targetFn = runtime->lookupFunction(0x27D738u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DA28u; }
        if (ctx->pc != 0x27DA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027D738_0x27d738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DA28u; }
        if (ctx->pc != 0x27DA28u) { return; }
    }
    ctx->pc = 0x27DA28u;
    // 0x27da28: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27DA28u;
    {
        const bool branch_taken_0x27da28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DA28u;
            // 0x27da2c: 0x26c50400  addiu       $a1, $s6, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27da28) {
            ctx->pc = 0x27DA4Cu;
            goto label_27da4c;
        }
    }
    ctx->pc = 0x27DA30u;
    // 0x27da30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27da30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27da34: 0x2452821  addu        $a1, $s2, $a1
    ctx->pc = 0x27da34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
    // 0x27da38: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27da38u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27da3c: 0xc0a05f8  jal         func_2817E0
    ctx->pc = 0x27DA3Cu;
    SET_GPR_U32(ctx, 31, 0x27DA44u);
    ctx->pc = 0x27DA40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DA3Cu;
            // 0x27da40: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2817E0u;
    if (runtime->hasFunction(0x2817E0u)) {
        auto targetFn = runtime->lookupFunction(0x2817E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DA44u; }
        if (ctx->pc != 0x27DA44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2817e0_0x281820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DA44u; }
        if (ctx->pc != 0x27DA44u) { return; }
    }
    ctx->pc = 0x27DA44u;
    // 0x27da44: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x27DA44u;
    {
        const bool branch_taken_0x27da44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27da44) {
            ctx->pc = 0x27DA48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27DA44u;
            // 0x27da48: 0xaeb10000  sw          $s1, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27DA60u;
            goto label_27da60;
        }
    }
    ctx->pc = 0x27DA4Cu;
label_27da4c:
    // 0x27da4c: 0x3c038101  lui         $v1, 0x8101
    ctx->pc = 0x27da4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33025 << 16));
    // 0x27da50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27da50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27da54: 0x3463006f  ori         $v1, $v1, 0x6F
    ctx->pc = 0x27da54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)111);
    // 0x27da58: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x27DA58u;
    {
        const bool branch_taken_0x27da58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DA58u;
            // 0x27da5c: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27da58) {
            ctx->pc = 0x27DA90u;
            goto label_27da90;
        }
    }
    ctx->pc = 0x27DA60u;
label_27da60:
    // 0x27da60: 0x24040898  addiu       $a0, $zero, 0x898
    ctx->pc = 0x27da60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
label_27da64:
    // 0x27da64: 0x132880  sll         $a1, $s3, 2
    ctx->pc = 0x27da64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x27da68: 0x2042018  mult        $a0, $s0, $a0
    ctx->pc = 0x27da68u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x27da6c: 0x26e3c9c8  addiu       $v1, $s7, -0x3638
    ctx->pc = 0x27da6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294953416));
    // 0x27da70: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x27da70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27da74: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27da74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27da78: 0xa42821  addu        $a1, $a1, $a0
    ctx->pc = 0x27da78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x27da7c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x27da7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x27da80: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x27da80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x27da84: 0xac7e0400  sw          $fp, 0x400($v1)
    ctx->pc = 0x27da84u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1024), GPR_U32(ctx, 30));
    // 0x27da88: 0xac860894  sw          $a2, 0x894($a0)
    ctx->pc = 0x27da88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2196), GPR_U32(ctx, 6));
    // 0x27da8c: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x27da8cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_27da90:
    // 0x27da90: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x27da90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x27da94: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x27da94u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27da98: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x27da98u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27da9c: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x27da9cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27daa0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x27daa0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27daa4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x27daa4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27daa8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x27daa8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27daac: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x27daacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27dab0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x27dab0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27dab4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27dab4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27dab8: 0x3e00008  jr          $ra
    ctx->pc = 0x27DAB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27DABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DAB8u;
            // 0x27dabc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27DA4Cu: goto label_27da4c;
            case 0x27DA60u: goto label_27da60;
            case 0x27DA64u: goto label_27da64;
            case 0x27DA90u: goto label_27da90;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27DAC0u;
}
