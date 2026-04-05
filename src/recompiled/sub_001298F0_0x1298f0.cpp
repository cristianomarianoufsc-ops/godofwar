#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001298F0
// Address: 0x1298f0 - 0x129990
void sub_001298F0_0x1298f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001298F0_0x1298f0");
#endif

    ctx->pc = 0x1298f0u;

    // 0x1298f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1298f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1298f4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1298f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1298f8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1298f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1298fc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1298fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129900: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x129900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x129904: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x129904u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129908: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x129908u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12990c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x12990cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x129910: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x129910u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x129914: 0x0  nop
    ctx->pc = 0x129914u;
    // NOP
label_129918:
    // 0x129918: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x129918u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x12991c: 0x2442c088  addiu       $v0, $v0, -0x3F78
    ctx->pc = 0x12991cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951048));
    // 0x129920: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x129920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x129924: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x129924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x129928: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x129928u;
    {
        const bool branch_taken_0x129928 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x12992Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129928u;
            // 0x12992c: 0x2231021  addu        $v0, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129928) {
            ctx->pc = 0x129944u;
            goto label_129944;
        }
    }
    ctx->pc = 0x129930u;
    // 0x129930: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x129930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x129934: 0x50a00004  beql        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x129934u;
    {
        const bool branch_taken_0x129934 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x129934) {
            ctx->pc = 0x129938u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x129934u;
            // 0x129938: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x129948u;
            goto label_129948;
        }
    }
    ctx->pc = 0x12993Cu;
    // 0x12993c: 0xc04aab4  jal         func_12AAD0
    ctx->pc = 0x12993Cu;
    SET_GPR_U32(ctx, 31, 0x129944u);
    ctx->pc = 0x12AAD0u;
    if (runtime->hasFunction(0x12AAD0u)) {
        auto targetFn = runtime->lookupFunction(0x12AAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129944u; }
        if (ctx->pc != 0x129944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012AAD0_0x12aad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129944u; }
        if (ctx->pc != 0x129944u) { return; }
    }
    ctx->pc = 0x129944u;
label_129944:
    // 0x129944: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x129944u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_129948:
    // 0x129948: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x129948u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x12994c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x12994Cu;
    {
        const bool branch_taken_0x12994c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x129950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12994Cu;
            // 0x129950: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12994c) {
            ctx->pc = 0x129918u;
            runtime->cooperativeGuestYield();
            goto label_129918;
        }
    }
    ctx->pc = 0x129954u;
    // 0x129954: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x129954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x129958: 0x32440001  andi        $a0, $s2, 0x1
    ctx->pc = 0x129958u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x12995c: 0x8c43bde4  lw          $v1, -0x421C($v0)
    ctx->pc = 0x12995cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950372)));
    // 0x129960: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x129960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x129964: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x129964u;
    {
        const bool branch_taken_0x129964 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x129968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129964u;
            // 0x129968: 0xac43bde4  sw          $v1, -0x421C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294950372), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x129964) {
            ctx->pc = 0x129974u;
            goto label_129974;
        }
    }
    ctx->pc = 0x12996Cu;
    // 0x12996c: 0xc04f59a  jal         func_13D668
    ctx->pc = 0x12996Cu;
    SET_GPR_U32(ctx, 31, 0x129974u);
    ctx->pc = 0x129970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12996Cu;
            // 0x129970: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D668u;
    if (runtime->hasFunction(0x13D668u)) {
        auto targetFn = runtime->lookupFunction(0x13D668u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129974u; }
        if (ctx->pc != 0x129974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D668_0x13d668(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x129974u; }
        if (ctx->pc != 0x129974u) { return; }
    }
    ctx->pc = 0x129974u;
label_129974:
    // 0x129974: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x129974u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x129978: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x129978u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12997c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x12997cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x129980: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x129980u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x129984: 0x3e00008  jr          $ra
    ctx->pc = 0x129984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x129988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x129984u;
            // 0x129988: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x129918u: goto label_129918;
            case 0x129944u: goto label_129944;
            case 0x129948u: goto label_129948;
            case 0x129974u: goto label_129974;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12998Cu;
    // 0x12998c: 0x0  nop
    ctx->pc = 0x12998cu;
    // NOP
}
