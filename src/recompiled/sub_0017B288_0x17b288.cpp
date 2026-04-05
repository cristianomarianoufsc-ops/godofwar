#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017B288
// Address: 0x17b288 - 0x17b368
void sub_0017B288_0x17b288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017B288_0x17b288");
#endif

    ctx->pc = 0x17b288u;

    // 0x17b288: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17b288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17b28c: 0x46006046  mov.s       $f1, $f12
    ctx->pc = 0x17b28cu;
    ctx->f[1] = FPU_MOV_S(ctx->f[12]);
    // 0x17b290: 0x2c820007  sltiu       $v0, $a0, 0x7
    ctx->pc = 0x17b290u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x17b294: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17B294u;
    {
        const bool branch_taken_0x17b294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B294u;
            // 0x17b298: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b294) {
            ctx->pc = 0x17B2B8u;
            goto label_17b2b8;
        }
    }
    ctx->pc = 0x17B29Cu;
    // 0x17b29c: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x17b29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x17b2a0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x17b2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x17b2a4: 0x24422990  addiu       $v0, $v0, 0x2990
    ctx->pc = 0x17b2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10640));
    // 0x17b2a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17b2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17b2ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x17b2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17b2b0: 0x400008  jr          $v0
    ctx->pc = 0x17B2B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17B2B8u: goto label_17b2b8;
            case 0x17B2C4u: goto label_17b2c4;
            case 0x17B2D4u: goto label_17b2d4;
            case 0x17B2F4u: goto label_17b2f4;
            case 0x17B320u: goto label_17b320;
            case 0x17B334u: goto label_17b334;
            case 0x17B34Cu: goto label_17b34c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17B2B8u;
label_17b2b8:
    // 0x17b2b8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17b2b8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b2bc: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x17B2BCu;
    {
        const bool branch_taken_0x17b2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B2C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B2BCu;
            // 0x17b2c0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b2bc) {
            ctx->pc = 0x17B35Cu;
            goto label_17b35c;
        }
    }
    ctx->pc = 0x17B2C4u;
label_17b2c4:
    // 0x17b2c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17b2c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x17b2c8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17b2c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b2cc: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x17B2CCu;
    {
        const bool branch_taken_0x17b2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B2D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B2CCu;
            // 0x17b2d0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b2cc) {
            ctx->pc = 0x17B35Cu;
            goto label_17b35c;
        }
    }
    ctx->pc = 0x17B2D4u;
label_17b2d4:
    // 0x17b2d4: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x17b2d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x17b2d8: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x17b2d8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x17b2dc: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x17b2dcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x17b2e0: 0x460c0b02  mul.s       $f12, $f1, $f12
    ctx->pc = 0x17b2e0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[12]);
    // 0x17b2e4: 0xc060e80  jal         func_183A00
    ctx->pc = 0x17B2E4u;
    SET_GPR_U32(ctx, 31, 0x17B2ECu);
    ctx->pc = 0x17B2E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17B2E4u;
            // 0x17b2e8: 0x460c6300  add.s       $f12, $f12, $f12 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x183A00u;
    if (runtime->hasFunction(0x183A00u)) {
        auto targetFn = runtime->lookupFunction(0x183A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B2ECu; }
        if (ctx->pc != 0x17B2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183a00_0x183ab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17B2ECu; }
        if (ctx->pc != 0x17B2ECu) { return; }
    }
    ctx->pc = 0x17B2ECu;
    // 0x17b2ec: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x17B2ECu;
    {
        const bool branch_taken_0x17b2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B2F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B2ECu;
            // 0x17b2f0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b2ec) {
            ctx->pc = 0x17B35Cu;
            goto label_17b35c;
        }
    }
    ctx->pc = 0x17B2F4u;
label_17b2f4:
    // 0x17b2f4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x17b2f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x17b2f8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17b2f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b2fc: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x17b2fcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17b300: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17b300u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17b304: 0x0  nop
    ctx->pc = 0x17b304u;
    // NOP
    // 0x17b308: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x17B308u;
    {
        const bool branch_taken_0x17b308 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x17B30Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B308u;
            // 0x17b30c: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b308) {
            ctx->pc = 0x17B358u;
            goto label_17b358;
        }
    }
    ctx->pc = 0x17B310u;
    // 0x17b310: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17b310u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x17b314: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x17b314u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x17b318: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x17B318u;
    {
        const bool branch_taken_0x17b318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B318u;
            // 0x17b31c: 0x46001006  mov.s       $f0, $f2 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b318) {
            ctx->pc = 0x17B358u;
            goto label_17b358;
        }
    }
    ctx->pc = 0x17B320u;
label_17b320:
    // 0x17b320: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x17b320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x17b324: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17b324u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b328: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x17b328u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17b32c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x17B32Cu;
    {
        const bool branch_taken_0x17b32c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17b32c) {
            ctx->pc = 0x17B33Cu;
            goto label_17b33c;
        }
    }
    ctx->pc = 0x17B334u;
label_17b334:
    // 0x17b334: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17B334u;
    {
        const bool branch_taken_0x17b334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B334u;
            // 0x17b338: 0x46000806  mov.s       $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b334) {
            ctx->pc = 0x17B358u;
            goto label_17b358;
        }
    }
    ctx->pc = 0x17B33Cu;
label_17b33c:
    // 0x17b33c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17b33cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x17b340: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17b340u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b344: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17B344u;
    {
        const bool branch_taken_0x17b344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B344u;
            // 0x17b348: 0x46010001  sub.s       $f0, $f0, $f1 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b344) {
            ctx->pc = 0x17B358u;
            goto label_17b358;
        }
    }
    ctx->pc = 0x17B34Cu;
label_17b34c:
    // 0x17b34c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x17b34cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x17b350: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x17b350u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17b354: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x17b354u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_17b358:
    // 0x17b358: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17b358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17b35c:
    // 0x17b35c: 0x3e00008  jr          $ra
    ctx->pc = 0x17B35Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17B35Cu;
            // 0x17b360: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17B2B8u: goto label_17b2b8;
            case 0x17B2C4u: goto label_17b2c4;
            case 0x17B2D4u: goto label_17b2d4;
            case 0x17B2F4u: goto label_17b2f4;
            case 0x17B320u: goto label_17b320;
            case 0x17B334u: goto label_17b334;
            case 0x17B33Cu: goto label_17b33c;
            case 0x17B34Cu: goto label_17b34c;
            case 0x17B358u: goto label_17b358;
            case 0x17B35Cu: goto label_17b35c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17B364u;
    // 0x17b364: 0x0  nop
    ctx->pc = 0x17b364u;
    // NOP
}
