#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00211228
// Address: 0x211228 - 0x2112c0
void sub_00211228_0x211228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00211228_0x211228");
#endif

    ctx->pc = 0x211228u;

    // 0x211228: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x211228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21122c: 0xe7b40030  swc1        $f20, 0x30($sp)
    ctx->pc = 0x21122cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x211230: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x211230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x211234: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x211234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x211238: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x211238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21123c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x21123cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x211240: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x211240u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x211244: 0x8c42ecd0  lw          $v0, -0x1330($v0)
    ctx->pc = 0x211244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962384)));
    // 0x211248: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x211248u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21124c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21124cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x211250: 0x8c5000c0  lw          $s0, 0xC0($v0)
    ctx->pc = 0x211250u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x211254: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x211254u;
    {
        const bool branch_taken_0x211254 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x211258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211254u;
            // 0x211258: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x211254) {
            ctx->pc = 0x2112A4u;
            goto label_2112a4;
        }
    }
    ctx->pc = 0x21125Cu;
    // 0x21125c: 0x2602ffec  addiu       $v0, $s0, -0x14
    ctx->pc = 0x21125cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
label_211260:
    // 0x211260: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x211260u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x211264: 0x50880b  movn        $s1, $v0, $s0
    ctx->pc = 0x211264u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x211268: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x211268u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x21126c: 0x2c42000b  sltiu       $v0, $v0, 0xB
    ctx->pc = 0x21126cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x211270: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x211270u;
    {
        const bool branch_taken_0x211270 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x211274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x211270u;
            // 0x211274: 0x3c05002b  lui         $a1, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x211270) {
            ctx->pc = 0x211298u;
            goto label_211298;
        }
    }
    ctx->pc = 0x211278u;
    // 0x211278: 0x8e2200a8  lw          $v0, 0xA8($s1)
    ctx->pc = 0x211278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
    // 0x21127c: 0x24a57d68  addiu       $a1, $a1, 0x7D68
    ctx->pc = 0x21127cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32104));
    // 0x211280: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x211280u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x211284: 0x8c44001c  lw          $a0, 0x1C($v0)
    ctx->pc = 0x211284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x211288: 0xc0a34bc  jal         func_28D2F0
    ctx->pc = 0x211288u;
    SET_GPR_U32(ctx, 31, 0x211290u);
    ctx->pc = 0x21128Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x211288u;
            // 0x21128c: 0x24840028  addiu       $a0, $a0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D2F0u;
    if (runtime->hasFunction(0x28D2F0u)) {
        auto targetFn = runtime->lookupFunction(0x28D2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211290u; }
        if (ctx->pc != 0x211290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D2F0_0x28d2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x211290u; }
        if (ctx->pc != 0x211290u) { return; }
    }
    ctx->pc = 0x211290u;
    // 0x211290: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x211290u;
    {
        const bool branch_taken_0x211290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x211290) {
            ctx->pc = 0x211294u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x211290u;
            // 0x211294: 0xe63400b4  swc1        $f20, 0xB4($s1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 180), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x211298u;
            goto label_211298;
        }
    }
    ctx->pc = 0x211298u;
label_211298:
    // 0x211298: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x211298u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21129c: 0x1600fff0  bnez        $s0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x21129Cu;
    {
        const bool branch_taken_0x21129c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2112A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21129Cu;
            // 0x2112a0: 0x2602ffec  addiu       $v0, $s0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21129c) {
            ctx->pc = 0x211260u;
            runtime->cooperativeGuestYield();
            goto label_211260;
        }
    }
    ctx->pc = 0x2112A4u;
label_2112a4:
    // 0x2112a4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2112a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2112a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2112a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2112ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2112acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2112b0: 0xc7b40030  lwc1        $f20, 0x30($sp)
    ctx->pc = 0x2112b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2112b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2112B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2112B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2112B4u;
            // 0x2112b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x211260u: goto label_211260;
            case 0x211298u: goto label_211298;
            case 0x2112A4u: goto label_2112a4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2112BCu;
    // 0x2112bc: 0x0  nop
    ctx->pc = 0x2112bcu;
    // NOP
}
