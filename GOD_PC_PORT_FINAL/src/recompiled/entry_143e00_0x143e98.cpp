#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_143e00
// Address: 0x143e00 - 0x143e98
void entry_143e00_0x143e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_143e00_0x143e98");
#endif

    ctx->pc = 0x143e00u;

    // 0x143e00: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x143e00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143e04: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x143e04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x143e08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x143e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x143e0c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x143e0cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143e10: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x143e10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x143e14: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x143E14u;
    {
        const bool branch_taken_0x143e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x143E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143E14u;
            // 0x143e18: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143e14) {
            ctx->pc = 0x143E88u;
            goto label_143e88;
        }
    }
    ctx->pc = 0x143E1Cu;
    // 0x143e1c: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x143e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x143e20: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x143e20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x143e24: 0x24421770  addiu       $v0, $v0, 0x1770
    ctx->pc = 0x143e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6000));
    // 0x143e28: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x143e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x143e2c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x143e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x143e30: 0x400008  jr          $v0
    ctx->pc = 0x143E30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x143E38u: goto label_143e38;
            case 0x143E48u: goto label_143e48;
            case 0x143E50u: goto label_143e50;
            case 0x143E60u: goto label_143e60;
            case 0x143E80u: goto label_143e80;
            case 0x143E88u: goto label_143e88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x143E38u;
label_143e38:
    // 0x143e38: 0xc050ece  jal         func_143B38
    ctx->pc = 0x143E38u;
    SET_GPR_U32(ctx, 31, 0x143E40u);
    ctx->pc = 0x143B38u;
    if (runtime->hasFunction(0x143B38u)) {
        auto targetFn = runtime->lookupFunction(0x143B38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143E40u; }
        if (ctx->pc != 0x143E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_143b38_0x143c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143E40u; }
        if (ctx->pc != 0x143E40u) { return; }
    }
    ctx->pc = 0x143E40u;
    // 0x143e40: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x143E40u;
    {
        const bool branch_taken_0x143e40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143E40u;
            // 0x143e44: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143e40) {
            ctx->pc = 0x143E8Cu;
            goto label_143e8c;
        }
    }
    ctx->pc = 0x143E48u;
label_143e48:
    // 0x143e48: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x143E48u;
    {
        const bool branch_taken_0x143e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143E48u;
            // 0x143e4c: 0xc4800000  lwc1        $f0, 0x0($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x143e48) {
            ctx->pc = 0x143E88u;
            goto label_143e88;
        }
    }
    ctx->pc = 0x143E50u;
label_143e50:
    // 0x143e50: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x143e50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x143e54: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x143e54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x143e58: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x143E58u;
    {
        const bool branch_taken_0x143e58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x143E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143E58u;
            // 0x143e5c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143e58) {
            ctx->pc = 0x143E8Cu;
            goto label_143e8c;
        }
    }
    ctx->pc = 0x143E60u;
label_143e60:
    // 0x143e60: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x143e60u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x143e64: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x143e64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143e68: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x143E68u;
    {
        const bool branch_taken_0x143e68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x143E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143E68u;
            // 0x143e6c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143e68) {
            ctx->pc = 0x143E8Cu;
            goto label_143e8c;
        }
    }
    ctx->pc = 0x143E70u;
    // 0x143e70: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x143e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x143e74: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x143e74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143e78: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x143E78u;
    {
        const bool branch_taken_0x143e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x143e78) {
            ctx->pc = 0x143E8Cu;
            goto label_143e8c;
        }
    }
    ctx->pc = 0x143E80u;
label_143e80:
    // 0x143e80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x143e80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x143e84: 0x0  nop
    ctx->pc = 0x143e84u;
    // NOP
label_143e88:
    // 0x143e88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x143e88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_143e8c:
    // 0x143e8c: 0x3e00008  jr          $ra
    ctx->pc = 0x143E8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143E8Cu;
            // 0x143e90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x143E38u: goto label_143e38;
            case 0x143E48u: goto label_143e48;
            case 0x143E50u: goto label_143e50;
            case 0x143E60u: goto label_143e60;
            case 0x143E80u: goto label_143e80;
            case 0x143E88u: goto label_143e88;
            case 0x143E8Cu: goto label_143e8c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x143E94u;
    // 0x143e94: 0x0  nop
    ctx->pc = 0x143e94u;
    // NOP
}
