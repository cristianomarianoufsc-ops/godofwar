#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011F870
// Address: 0x11f870 - 0x11f990
void sub_0011F870_0x11f870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011F870_0x11f870");
#endif

    ctx->pc = 0x11f870u;

    // 0x11f870: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11f870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11f874: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x11f874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x11f878: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x11f878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x11f87c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x11f87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x11f880: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11f880u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11f884: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11f884u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f888: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x11f888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x11f88c: 0x2630162c  addiu       $s0, $s1, 0x162C
    ctx->pc = 0x11f88cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 5676));
    // 0x11f890: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11f890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11f894: 0x96224632  lhu         $v0, 0x4632($s1)
    ctx->pc = 0x11f894u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 17970)));
    // 0x11f898: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x11f898u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x11f89c: 0x2442162c  addiu       $v0, $v0, 0x162C
    ctx->pc = 0x11f89cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5676));
    // 0x11f8a0: 0x2229021  addu        $s2, $s1, $v0
    ctx->pc = 0x11f8a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x11f8a4: 0x12120015  beq         $s0, $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x11F8A4u;
    {
        const bool branch_taken_0x11f8a4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        ctx->pc = 0x11F8A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F8A4u;
            // 0x11f8a8: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f8a4) {
            ctx->pc = 0x11F8FCu;
            goto label_11f8fc;
        }
    }
    ctx->pc = 0x11F8ACu;
    // 0x11f8ac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x11f8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_11f8b0:
    // 0x11f8b0: 0x54530010  bnel        $v0, $s3, . + 4 + (0x10 << 2)
    ctx->pc = 0x11F8B0u;
    {
        const bool branch_taken_0x11f8b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x11f8b0) {
            ctx->pc = 0x11F8B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11F8B0u;
            // 0x11f8b4: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11F8F4u;
            goto label_11f8f4;
        }
    }
    ctx->pc = 0x11F8B8u;
    // 0x11f8b8: 0x3c02aaaa  lui         $v0, 0xAAAA
    ctx->pc = 0x11f8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43690 << 16));
    // 0x11f8bc: 0x2503023  subu        $a2, $s2, $s0
    ctx->pc = 0x11f8bcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x11f8c0: 0x3442aaab  ori         $v0, $v0, 0xAAAB
    ctx->pc = 0x11f8c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)43691);
    // 0x11f8c4: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x11f8c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x11f8c8: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x11f8c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x11f8cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11f8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f8d0: 0x26050018  addiu       $a1, $s0, 0x18
    ctx->pc = 0x11f8d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x11f8d4: 0x630c3  sra         $a2, $a2, 3
    ctx->pc = 0x11f8d4u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 3));
    // 0x11f8d8: 0xc30018  mult        $zero, $a2, $v1
    ctx->pc = 0x11f8d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x11f8dc: 0x3012  mflo        $a2
    ctx->pc = 0x11f8dcu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x11f8e0: 0xc0a24d0  jal         func_289340
    ctx->pc = 0x11F8E0u;
    SET_GPR_U32(ctx, 31, 0x11F8E8u);
    ctx->pc = 0x11F8E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F8E0u;
            // 0x11f8e4: 0x2652ffe8  addiu       $s2, $s2, -0x18 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289340u;
    if (runtime->hasFunction(0x289340u)) {
        auto targetFn = runtime->lookupFunction(0x289340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F8E8u; }
        if (ctx->pc != 0x11F8E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289340_0x28943c(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F8E8u; }
        if (ctx->pc != 0x11F8E8u) { return; }
    }
    ctx->pc = 0x11F8E8u;
    // 0x11f8e8: 0x96224632  lhu         $v0, 0x4632($s1)
    ctx->pc = 0x11f8e8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 17970)));
    // 0x11f8ec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11f8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11f8f0: 0xa6224632  sh          $v0, 0x4632($s1)
    ctx->pc = 0x11f8f0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 17970), (uint16_t)GPR_U32(ctx, 2));
label_11f8f4:
    // 0x11f8f4: 0x5612ffee  bnel        $s0, $s2, . + 4 + (-0x12 << 2)
    ctx->pc = 0x11F8F4u;
    {
        const bool branch_taken_0x11f8f4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x11f8f4) {
            ctx->pc = 0x11F8F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11F8F4u;
            // 0x11f8f8: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11F8B0u;
            runtime->cooperativeGuestYield();
            goto label_11f8b0;
        }
    }
    ctx->pc = 0x11F8FCu;
label_11f8fc:
    // 0x11f8fc: 0x9622462e  lhu         $v0, 0x462E($s1)
    ctx->pc = 0x11f8fcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 17966)));
    // 0x11f900: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x11F900u;
    {
        const bool branch_taken_0x11f900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F900u;
            // 0x11f904: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f900) {
            ctx->pc = 0x11F964u;
            goto label_11f964;
        }
    }
    ctx->pc = 0x11F908u;
    // 0x11f908: 0x2623022c  addiu       $v1, $s1, 0x22C
    ctx->pc = 0x11f908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 556));
    // 0x11f90c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11f90cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f910: 0x10c00014  beqz        $a2, . + 4 + (0x14 << 2)
    ctx->pc = 0x11F910u;
    {
        const bool branch_taken_0x11f910 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F910u;
            // 0x11f914: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f910) {
            ctx->pc = 0x11F964u;
            goto label_11f964;
        }
    }
    ctx->pc = 0x11F918u;
    // 0x11f918: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11f918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11f91c: 0x0  nop
    ctx->pc = 0x11f91cu;
    // NOP
label_11f920:
    // 0x11f920: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x11F920u;
    {
        const bool branch_taken_0x11f920 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f920) {
            ctx->pc = 0x11F924u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11F920u;
            // 0x11f924: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11F94Cu;
            goto label_11f94c;
        }
    }
    ctx->pc = 0x11F928u;
    // 0x11f928: 0x14530006  bne         $v0, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x11F928u;
    {
        const bool branch_taken_0x11f928 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x11F92Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F928u;
            // 0x11f92c: 0x24820001  addiu       $v0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f928) {
            ctx->pc = 0x11F944u;
            goto label_11f944;
        }
    }
    ctx->pc = 0x11F930u;
    // 0x11f930: 0x9622462e  lhu         $v0, 0x462E($s1)
    ctx->pc = 0x11f930u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 17966)));
    // 0x11f934: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x11f934u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x11f938: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11f938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11f93c: 0xa622462e  sh          $v0, 0x462E($s1)
    ctx->pc = 0x11f93cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 17966), (uint16_t)GPR_U32(ctx, 2));
    // 0x11f940: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x11f940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_11f944:
    // 0x11f944: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x11f944u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x11f948: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x11f948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_11f94c:
    // 0x11f94c: 0x28a20100  slti        $v0, $a1, 0x100
    ctx->pc = 0x11f94cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x11f950: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11F950u;
    {
        const bool branch_taken_0x11f950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F950u;
            // 0x11f954: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f950) {
            ctx->pc = 0x11F964u;
            goto label_11f964;
        }
    }
    ctx->pc = 0x11F958u;
    // 0x11f958: 0x86102b  sltu        $v0, $a0, $a2
    ctx->pc = 0x11f958u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x11f95c: 0x5440fff0  bnel        $v0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x11F95Cu;
    {
        const bool branch_taken_0x11f95c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11f95c) {
            ctx->pc = 0x11F960u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11F95Cu;
            // 0x11f960: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11F920u;
            runtime->cooperativeGuestYield();
            goto label_11f920;
        }
    }
    ctx->pc = 0x11F964u;
label_11f964:
    // 0x11f964: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11f964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f968: 0xc047d26  jal         func_11F498
    ctx->pc = 0x11F968u;
    SET_GPR_U32(ctx, 31, 0x11F970u);
    ctx->pc = 0x11F96Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11F968u;
            // 0x11f96c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F498u;
    if (runtime->hasFunction(0x11F498u)) {
        auto targetFn = runtime->lookupFunction(0x11F498u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F970u; }
        if (ctx->pc != 0x11F970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f498_0x11f598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11F970u; }
        if (ctx->pc != 0x11F970u) { return; }
    }
    ctx->pc = 0x11F970u;
    // 0x11f970: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x11f970u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11f974: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x11f974u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11f978: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11f978u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11f97c: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x11f97cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f980: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11f980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f984: 0x3e00008  jr          $ra
    ctx->pc = 0x11F984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11F984u;
            // 0x11f988: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11F8B0u: goto label_11f8b0;
            case 0x11F8F4u: goto label_11f8f4;
            case 0x11F8FCu: goto label_11f8fc;
            case 0x11F920u: goto label_11f920;
            case 0x11F944u: goto label_11f944;
            case 0x11F94Cu: goto label_11f94c;
            case 0x11F964u: goto label_11f964;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11F98Cu;
    // 0x11f98c: 0x0  nop
    ctx->pc = 0x11f98cu;
    // NOP
}
