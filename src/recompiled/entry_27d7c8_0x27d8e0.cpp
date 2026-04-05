#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_27d7c8
// Address: 0x27d7c8 - 0x27d8e0
void entry_27d7c8_0x27d8e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_27d7c8_0x27d8e0");
#endif

    ctx->pc = 0x27d7c8u;

    // 0x27d7c8: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x27d7c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d7cc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x27d7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27d7d0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x27d7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x27d7d4: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x27d7d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x27d7d8: 0x24e300ff  addiu       $v1, $a3, 0xFF
    ctx->pc = 0x27d7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 255));
    // 0x27d7dc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x27d7dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x27d7e0: 0xe2180b  movn        $v1, $a3, $v0
    ctx->pc = 0x27d7e0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x27d7e4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x27d7e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x27d7e8: 0x39203  sra         $s2, $v1, 8
    ctx->pc = 0x27d7e8u;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 3), 8));
    // 0x27d7ec: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x27d7ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27d7f0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x27d7f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d7f4: 0x121200  sll         $v0, $s2, 8
    ctx->pc = 0x27d7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 8));
    // 0x27d7f8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27d7f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d7fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27d7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27d800: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x27d800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x27d804: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x27d804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x27d808: 0xe29023  subu        $s2, $a3, $v0
    ctx->pc = 0x27d808u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
    // 0x27d80c: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x27d80cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x27d810: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x27d810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x27d814: 0xc09f586  jal         func_27D618
    ctx->pc = 0x27D814u;
    SET_GPR_U32(ctx, 31, 0x27D81Cu);
    ctx->pc = 0x27D818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D814u;
            // 0x27d818: 0xffb40040  sd          $s4, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D618u;
    if (runtime->hasFunction(0x27D618u)) {
        auto targetFn = runtime->lookupFunction(0x27D618u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D81Cu; }
        if (ctx->pc != 0x27D81Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027D618_0x27d618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D81Cu; }
        if (ctx->pc != 0x27D81Cu) { return; }
    }
    ctx->pc = 0x27D81Cu;
    // 0x27d81c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x27d81cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x27d820: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27d820u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d824: 0x14600023  bnez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x27D824u;
    {
        const bool branch_taken_0x27d824 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D824u;
            // 0x27d828: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d824) {
            ctx->pc = 0x27D8B4u;
            goto label_27d8b4;
        }
    }
    ctx->pc = 0x27D82Cu;
    // 0x27d82c: 0x24020898  addiu       $v0, $zero, 0x898
    ctx->pc = 0x27d82cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
    // 0x27d830: 0x3c170032  lui         $s7, 0x32
    ctx->pc = 0x27d830u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)50 << 16));
    // 0x27d834: 0x222a018  mult        $s4, $s1, $v0
    ctx->pc = 0x27d834u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 20, (int32_t)result); }
    // 0x27d838: 0x26f6c9c8  addiu       $s6, $s7, -0x3638
    ctx->pc = 0x27d838u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 23), 4294953416));
    // 0x27d83c: 0x26c20800  addiu       $v0, $s6, 0x800
    ctx->pc = 0x27d83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 2048));
    // 0x27d840: 0x282a821  addu        $s5, $s4, $v0
    ctx->pc = 0x27d840u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x27d844: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x27d844u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x27d848: 0x10700012  beq         $v1, $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x27D848u;
    {
        const bool branch_taken_0x27d848 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x27D84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D848u;
            // 0x27d84c: 0x24030898  addiu       $v1, $zero, 0x898 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d848) {
            ctx->pc = 0x27D894u;
            goto label_27d894;
        }
    }
    ctx->pc = 0x27D850u;
    // 0x27d850: 0xc09f5ce  jal         func_27D738
    ctx->pc = 0x27D850u;
    SET_GPR_U32(ctx, 31, 0x27D858u);
    ctx->pc = 0x27D854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D850u;
            // 0x27d854: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D738u;
    if (runtime->hasFunction(0x27D738u)) {
        auto targetFn = runtime->lookupFunction(0x27D738u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D858u; }
        if (ctx->pc != 0x27D858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027D738_0x27d738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D858u; }
        if (ctx->pc != 0x27D858u) { return; }
    }
    ctx->pc = 0x27D858u;
    // 0x27d858: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x27D858u;
    {
        const bool branch_taken_0x27d858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D85Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D858u;
            // 0x27d85c: 0x26c50400  addiu       $a1, $s6, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d858) {
            ctx->pc = 0x27D87Cu;
            goto label_27d87c;
        }
    }
    ctx->pc = 0x27D860u;
    // 0x27d860: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27d860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d864: 0x2852821  addu        $a1, $s4, $a1
    ctx->pc = 0x27d864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x27d868: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27d868u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d86c: 0xc0a05f8  jal         func_2817E0
    ctx->pc = 0x27D86Cu;
    SET_GPR_U32(ctx, 31, 0x27D874u);
    ctx->pc = 0x27D870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D86Cu;
            // 0x27d870: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2817E0u;
    if (runtime->hasFunction(0x2817E0u)) {
        auto targetFn = runtime->lookupFunction(0x2817E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D874u; }
        if (ctx->pc != 0x27D874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2817e0_0x281820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D874u; }
        if (ctx->pc != 0x27D874u) { return; }
    }
    ctx->pc = 0x27D874u;
    // 0x27d874: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x27D874u;
    {
        const bool branch_taken_0x27d874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d874) {
            ctx->pc = 0x27D878u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27D874u;
            // 0x27d878: 0xaeb00000  sw          $s0, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27D890u;
            goto label_27d890;
        }
    }
    ctx->pc = 0x27D87Cu;
label_27d87c:
    // 0x27d87c: 0x3c038101  lui         $v1, 0x8101
    ctx->pc = 0x27d87cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33025 << 16));
    // 0x27d880: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27d880u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d884: 0x3463006f  ori         $v1, $v1, 0x6F
    ctx->pc = 0x27d884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)111);
    // 0x27d888: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x27D888u;
    {
        const bool branch_taken_0x27d888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D88Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D888u;
            // 0x27d88c: 0xae630000  sw          $v1, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d888) {
            ctx->pc = 0x27D8B4u;
            goto label_27d8b4;
        }
    }
    ctx->pc = 0x27D890u;
label_27d890:
    // 0x27d890: 0x24030898  addiu       $v1, $zero, 0x898
    ctx->pc = 0x27d890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
label_27d894:
    // 0x27d894: 0x122080  sll         $a0, $s2, 2
    ctx->pc = 0x27d894u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x27d898: 0x2231818  mult        $v1, $s1, $v1
    ctx->pc = 0x27d898u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x27d89c: 0x26e2c9c8  addiu       $v0, $s7, -0x3638
    ctx->pc = 0x27d89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 4294953416));
    // 0x27d8a0: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x27d8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x27d8a4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x27d8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x27d8a8: 0x8c500400  lw          $s0, 0x400($v0)
    ctx->pc = 0x27d8a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1024)));
    // 0x27d8ac: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x27d8acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x27d8b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x27d8b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27d8b4:
    // 0x27d8b4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x27d8b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27d8b8: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x27d8b8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27d8bc: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x27d8bcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27d8c0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x27d8c0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27d8c4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x27d8c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27d8c8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x27d8c8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27d8cc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x27d8ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27d8d0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x27d8d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27d8d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27d8d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27d8d8: 0x3e00008  jr          $ra
    ctx->pc = 0x27D8D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D8DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D8D8u;
            // 0x27d8dc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27D87Cu: goto label_27d87c;
            case 0x27D890u: goto label_27d890;
            case 0x27D894u: goto label_27d894;
            case 0x27D8B4u: goto label_27d8b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27D8E0u;
}
