#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DBE98
// Address: 0x1dbe98 - 0x1dbf60
void sub_001DBE98_0x1dbe98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DBE98_0x1dbe98");
#endif

    ctx->pc = 0x1dbe98u;

    // 0x1dbe98: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1dbe98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1dbe9c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1dbe9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dbea0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1dbea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1dbea4: 0xe7b40020  swc1        $f20, 0x20($sp)
    ctx->pc = 0x1dbea4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x1dbea8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1dbea8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1dbeac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1dbeacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1dbeb0: 0xc090c5c  jal         func_243170
    ctx->pc = 0x1DBEB0u;
    SET_GPR_U32(ctx, 31, 0x1DBEB8u);
    ctx->pc = 0x1DBEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBEB0u;
            // 0x1dbeb4: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x243170u;
    if (runtime->hasFunction(0x243170u)) {
        auto targetFn = runtime->lookupFunction(0x243170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBEB8u; }
        if (ctx->pc != 0x1DBEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_243170_0x243188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DBEB8u; }
        if (ctx->pc != 0x1DBEB8u) { return; }
    }
    ctx->pc = 0x1DBEB8u;
    // 0x1dbeb8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1DBEB8u;
    {
        const bool branch_taken_0x1dbeb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DBEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBEB8u;
            // 0x1dbebc: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbeb8) {
            ctx->pc = 0x1DBEE8u;
            goto label_1dbee8;
        }
    }
    ctx->pc = 0x1DBEC0u;
    // 0x1dbec0: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x1dbec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x1dbec4: 0x90432d3d  lbu         $v1, 0x2D3D($v0)
    ctx->pc = 0x1dbec4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 11581)));
    // 0x1dbec8: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1dbec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1dbecc: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1dbeccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1dbed0: 0x24422940  addiu       $v0, $v0, 0x2940
    ctx->pc = 0x1dbed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10560));
    // 0x1dbed4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1dbed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1dbed8: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x1dbed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x1dbedc: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1DBEDCu;
    {
        const bool branch_taken_0x1dbedc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dbedc) {
            ctx->pc = 0x1DBEE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBEDCu;
            // 0x1dbee0: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DBF10u;
            goto label_1dbf10;
        }
    }
    ctx->pc = 0x1DBEE4u;
    // 0x1dbee4: 0x0  nop
    ctx->pc = 0x1dbee4u;
    // NOP
label_1dbee8:
    // 0x1dbee8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1dbee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1dbeec: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1dbeecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1dbef0: 0x8c42cb94  lw          $v0, -0x346C($v0)
    ctx->pc = 0x1dbef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x1dbef4: 0x24632b20  addiu       $v1, $v1, 0x2B20
    ctx->pc = 0x1dbef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11040));
    // 0x1dbef8: 0x8c4201c4  lw          $v0, 0x1C4($v0)
    ctx->pc = 0x1dbef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 452)));
    // 0x1dbefc: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1dbefcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1dbf00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1dbf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1dbf04: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1dbf04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1dbf08: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1DBF08u;
    {
        const bool branch_taken_0x1dbf08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1dbf08) {
            ctx->pc = 0x1DBF0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBF08u;
            // 0x1dbf0c: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DBF10u;
            goto label_1dbf10;
        }
    }
    ctx->pc = 0x1DBF10u;
label_1dbf10:
    // 0x1dbf10: 0x1600000f  bnez        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x1DBF10u;
    {
        const bool branch_taken_0x1dbf10 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DBF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBF10u;
            // 0x1dbf14: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dbf10) {
            ctx->pc = 0x1DBF50u;
            goto label_1dbf50;
        }
    }
    ctx->pc = 0x1DBF18u;
    // 0x1dbf18: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x1dbf18u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x1dbf1c: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x1dbf1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x1dbf20: 0x24842cc0  addiu       $a0, $a0, 0x2CC0
    ctx->pc = 0x1dbf20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11456));
    // 0x1dbf24: 0x246328e0  addiu       $v1, $v1, 0x28E0
    ctx->pc = 0x1dbf24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 10464));
    // 0x1dbf28: 0x90820077  lbu         $v0, 0x77($a0)
    ctx->pc = 0x1dbf28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 119)));
    // 0x1dbf2c: 0xc480005c  lwc1        $f0, 0x5C($a0)
    ctx->pc = 0x1dbf2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dbf30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1dbf30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1dbf34: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1dbf34u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1dbf38: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1dbf38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1dbf3c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1dbf3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1dbf40: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x1dbf40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1dbf44: 0x46020028  max.s       $f0, $f0, $f2
    ctx->pc = 0x1dbf44u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[2]);
    // 0x1dbf48: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x1dbf48u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x1dbf4c: 0xe480005c  swc1        $f0, 0x5C($a0)
    ctx->pc = 0x1dbf4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 92), bits); }
label_1dbf50:
    // 0x1dbf50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1dbf50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dbf54: 0xc7b40020  lwc1        $f20, 0x20($sp)
    ctx->pc = 0x1dbf54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1dbf58: 0x3e00008  jr          $ra
    ctx->pc = 0x1DBF58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DBF5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DBF58u;
            // 0x1dbf5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DBEE8u: goto label_1dbee8;
            case 0x1DBF10u: goto label_1dbf10;
            case 0x1DBF50u: goto label_1dbf50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1DBF60u;
}
