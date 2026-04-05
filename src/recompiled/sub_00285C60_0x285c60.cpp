#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00285C60
// Address: 0x285c60 - 0x285cf0
void sub_00285C60_0x285c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285C60_0x285c60");
#endif

    ctx->pc = 0x285c60u;

    // 0x285c60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x285c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x285c64: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x285c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x285c68: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x285c68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285c6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x285c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x285c70: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x285c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x285c74: 0xc0a1c0a  jal         func_287028
    ctx->pc = 0x285C74u;
    SET_GPR_U32(ctx, 31, 0x285C7Cu);
    ctx->pc = 0x285C78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285C74u;
            // 0x285c78: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287028u;
    if (runtime->hasFunction(0x287028u)) {
        auto targetFn = runtime->lookupFunction(0x287028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285C7Cu; }
        if (ctx->pc != 0x285C7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00287028_0x287028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285C7Cu; }
        if (ctx->pc != 0x285C7Cu) { return; }
    }
    ctx->pc = 0x285C7Cu;
    // 0x285c7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x285c7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285c80: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x285C80u;
    {
        const bool branch_taken_0x285c80 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x285c80) {
            ctx->pc = 0x285C84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x285C80u;
            // 0x285c84: 0x96040298  lhu         $a0, 0x298($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 664)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x285C90u;
            goto label_285c90;
        }
    }
    ctx->pc = 0x285C88u;
    // 0x285c88: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x285C88u;
    {
        const bool branch_taken_0x285c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285C88u;
            // 0x285c8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285c88) {
            ctx->pc = 0x285CD8u;
            goto label_285cd8;
        }
    }
    ctx->pc = 0x285C90u;
label_285c90:
    // 0x285c90: 0x2241021  addu        $v0, $s1, $a0
    ctx->pc = 0x285c90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
    // 0x285c94: 0x8043029c  lb          $v1, 0x29C($v0)
    ctx->pc = 0x285c94u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 668)));
    // 0x285c98: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x285C98u;
    {
        const bool branch_taken_0x285c98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x285C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285C98u;
            // 0x285c9c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285c98) {
            ctx->pc = 0x285CBCu;
            goto label_285cbc;
        }
    }
    ctx->pc = 0x285CA0u;
    // 0x285ca0: 0xc0a16d6  jal         func_285B58
    ctx->pc = 0x285CA0u;
    SET_GPR_U32(ctx, 31, 0x285CA8u);
    ctx->pc = 0x285CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285CA0u;
            // 0x285ca4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285B58u;
    if (runtime->hasFunction(0x285B58u)) {
        auto targetFn = runtime->lookupFunction(0x285B58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285CA8u; }
        if (ctx->pc != 0x285CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285B58_0x285b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285CA8u; }
        if (ctx->pc != 0x285CA8u) { return; }
    }
    ctx->pc = 0x285CA8u;
    // 0x285ca8: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x285ca8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x285cac: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x285cacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x285cb0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x285cb0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x285cb4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x285CB4u;
    {
        const bool branch_taken_0x285cb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285CB4u;
            // 0x285cb8: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285cb4) {
            ctx->pc = 0x285CC4u;
            goto label_285cc4;
        }
    }
    ctx->pc = 0x285CBCu;
label_285cbc:
    // 0x285cbc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x285cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x285cc0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x285cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_285cc4:
    // 0x285cc4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x285cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x285cc8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x285cc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x285ccc: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x285cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x285cd0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x285cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x285cd4: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x285cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_285cd8:
    // 0x285cd8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x285cd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x285cdc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x285cdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x285ce0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x285ce0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x285ce4: 0x3e00008  jr          $ra
    ctx->pc = 0x285CE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x285CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285CE4u;
            // 0x285ce8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x285C90u: goto label_285c90;
            case 0x285CBCu: goto label_285cbc;
            case 0x285CC4u: goto label_285cc4;
            case 0x285CD8u: goto label_285cd8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x285CECu;
    // 0x285cec: 0x0  nop
    ctx->pc = 0x285cecu;
    // NOP
}
