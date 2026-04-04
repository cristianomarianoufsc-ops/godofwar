#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022D2F0
// Address: 0x22d2f0 - 0x22d388
void sub_0022D2F0_0x22d2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022D2F0_0x22d2f0");
#endif

    ctx->pc = 0x22d2f0u;

    // 0x22d2f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x22d2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x22d2f4: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x22d2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x22d2f8: 0x2444aec0  addiu       $a0, $v0, -0x5140
    ctx->pc = 0x22d2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946496));
    // 0x22d2fc: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x22d2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x22d300: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x22d300u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x22d304: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x22d304u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x22d308: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x22d308u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x22d30c: 0x8c621214  lw          $v0, 0x1214($v1)
    ctx->pc = 0x22d30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4628)));
    // 0x22d310: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x22d310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x22d314: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22d314u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d318: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x22d318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x22d31c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x22D31Cu;
    {
        const bool branch_taken_0x22d31c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22D320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D31Cu;
            // 0x22d320: 0xae44120c  sw          $a0, 0x120C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4620), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22d31c) {
            ctx->pc = 0x22D35Cu;
            goto label_22d35c;
        }
    }
    ctx->pc = 0x22D324u;
    // 0x22d324: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x22d324u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x22d328: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x22d328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x22d32c: 0x8c431218  lw          $v1, 0x1218($v0)
    ctx->pc = 0x22d32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4632)));
    // 0x22d330: 0x8e05121c  lw          $a1, 0x121C($s0)
    ctx->pc = 0x22d330u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4636)));
    // 0x22d334: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x22d334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x22d338: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22d338u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d33c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x22d33cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x22d340: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x22d340u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x22d344: 0x62880a  movz        $s1, $v1, $v0
    ctx->pc = 0x22d344u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x22d348: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x22D348u;
    SET_GPR_U32(ctx, 31, 0x22D350u);
    ctx->pc = 0x22D34Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22D348u;
            // 0x22d34c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D350u; }
        if (ctx->pc != 0x22D350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22D350u; }
        if (ctx->pc != 0x22D350u) { return; }
    }
    ctx->pc = 0x22D350u;
    // 0x22d350: 0x8e02121c  lw          $v0, 0x121C($s0)
    ctx->pc = 0x22d350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4636)));
    // 0x22d354: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x22d354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x22d358: 0xae02121c  sw          $v0, 0x121C($s0)
    ctx->pc = 0x22d358u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4636), GPR_U32(ctx, 2));
label_22d35c:
    // 0x22d35c: 0x8e43120c  lw          $v1, 0x120C($s2)
    ctx->pc = 0x22d35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4620)));
    // 0x22d360: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x22d360u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22d364: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x22d364u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x22d368: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x22d368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22d36c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x22d36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x22d370: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x22d370u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22d374: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x22d374u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22d378: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22d378u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22d37c: 0xac831210  sw          $v1, 0x1210($a0)
    ctx->pc = 0x22d37cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4624), GPR_U32(ctx, 3));
    // 0x22d380: 0x3e00008  jr          $ra
    ctx->pc = 0x22D380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22D384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22D380u;
            // 0x22d384: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x22D35Cu: goto label_22d35c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x22D388u;
}
