#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_278e28
// Address: 0x278e28 - 0x278f80
void entry_278e28_0x278f80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_278e28_0x278f80");
#endif

    ctx->pc = 0x278e28u;

    // 0x278e28: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x278e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x278e2c: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x278e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x278e30: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x278e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x278e34: 0x241701b3  addiu       $s7, $zero, 0x1B3
    ctx->pc = 0x278e34u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 435));
    // 0x278e38: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x278e38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x278e3c: 0x24160005  addiu       $s6, $zero, 0x5
    ctx->pc = 0x278e3cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x278e40: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x278e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x278e44: 0x24150100  addiu       $s5, $zero, 0x100
    ctx->pc = 0x278e44u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x278e48: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x278e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x278e4c: 0x241401b7  addiu       $s4, $zero, 0x1B7
    ctx->pc = 0x278e4cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 439));
    // 0x278e50: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x278e50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x278e54: 0x241301b8  addiu       $s3, $zero, 0x1B8
    ctx->pc = 0x278e54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 440));
    // 0x278e58: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x278e58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x278e5c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x278e5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x278e60: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x278e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x278e64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x278e64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278e68: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x278e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x278e6c: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x278e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
label_278e70:
    // 0x278e70: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x278E70u;
    {
        const bool branch_taken_0x278e70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x278E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278E70u;
            // 0x278e74: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278e70) {
            ctx->pc = 0x278F50u;
            goto label_278f50;
        }
    }
    ctx->pc = 0x278E78u;
    // 0x278e78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278e7c: 0xc09e3e2  jal         func_278F88
    ctx->pc = 0x278E7Cu;
    SET_GPR_U32(ctx, 31, 0x278E84u);
    ctx->pc = 0x278E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278E7Cu;
            // 0x278e80: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x278F88u;
    if (runtime->hasFunction(0x278F88u)) {
        auto targetFn = runtime->lookupFunction(0x278F88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278E84u; }
        if (ctx->pc != 0x278E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_278f88_0x278fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278E84u; }
        if (ctx->pc != 0x278E84u) { return; }
    }
    ctx->pc = 0x278E84u;
    // 0x278e84: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x278E84u;
    {
        const bool branch_taken_0x278e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278E84u;
            // 0x278e88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278e84) {
            ctx->pc = 0x278E9Cu;
            goto label_278e9c;
        }
    }
    ctx->pc = 0x278E8Cu;
    // 0x278e8c: 0x0  nop
    ctx->pc = 0x278e8cu;
    // NOP
label_278e90:
    // 0x278e90: 0xc09e388  jal         func_278E20
    ctx->pc = 0x278E90u;
    SET_GPR_U32(ctx, 31, 0x278E98u);
    ctx->pc = 0x278E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278E90u;
            // 0x278e94: 0x24050008  addiu       $a1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x278E20u;
    if (runtime->hasFunction(0x278E20u)) {
        auto targetFn = runtime->lookupFunction(0x278E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278E98u; }
        if (ctx->pc != 0x278E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_278e20_0x278e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278E98u; }
        if (ctx->pc != 0x278E98u) { return; }
    }
    ctx->pc = 0x278E98u;
    // 0x278e98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x278e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_278e9c:
    // 0x278e9c: 0xc09dae4  jal         func_276B90
    ctx->pc = 0x278E9Cu;
    SET_GPR_U32(ctx, 31, 0x278EA4u);
    ctx->pc = 0x278EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278E9Cu;
            // 0x278ea0: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276B90u;
    if (runtime->hasFunction(0x276B90u)) {
        auto targetFn = runtime->lookupFunction(0x276B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278EA4u; }
        if (ctx->pc != 0x278EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276B90_0x276b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278EA4u; }
        if (ctx->pc != 0x278EA4u) { return; }
    }
    ctx->pc = 0x278EA4u;
    // 0x278ea4: 0x10510004  beq         $v0, $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x278EA4u;
    {
        const bool branch_taken_0x278ea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x278EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278EA4u;
            // 0x278ea8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278ea4) {
            ctx->pc = 0x278EB8u;
            goto label_278eb8;
        }
    }
    ctx->pc = 0x278EACu;
    // 0x278eac: 0x8e020878  lw          $v0, 0x878($s0)
    ctx->pc = 0x278eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
    // 0x278eb0: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x278EB0u;
    {
        const bool branch_taken_0x278eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x278eb0) {
            ctx->pc = 0x278E90u;
            runtime->cooperativeGuestYield();
            goto label_278e90;
        }
    }
    ctx->pc = 0x278EB8u;
label_278eb8:
    // 0x278eb8: 0xc09daaa  jal         func_276AA8
    ctx->pc = 0x278EB8u;
    SET_GPR_U32(ctx, 31, 0x278EC0u);
    ctx->pc = 0x278EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278EB8u;
            // 0x278ebc: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x276AA8u;
    if (runtime->hasFunction(0x276AA8u)) {
        auto targetFn = runtime->lookupFunction(0x276AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278EC0u; }
        if (ctx->pc != 0x278EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00276AA8_0x276aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278EC0u; }
        if (ctx->pc != 0x278EC0u) { return; }
    }
    ctx->pc = 0x278EC0u;
    // 0x278ec0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x278ec0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278ec4: 0x1077000d  beq         $v1, $s7, . + 4 + (0xD << 2)
    ctx->pc = 0x278EC4u;
    {
        const bool branch_taken_0x278ec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 23));
        ctx->pc = 0x278EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278EC4u;
            // 0x278ec8: 0x2c6201b4  sltiu       $v0, $v1, 0x1B4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)436) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x278ec4) {
            ctx->pc = 0x278EFCu;
            goto label_278efc;
        }
    }
    ctx->pc = 0x278ECCu;
    // 0x278ecc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x278ECCu;
    {
        const bool branch_taken_0x278ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x278ecc) {
            ctx->pc = 0x278EE4u;
            goto label_278ee4;
        }
    }
    ctx->pc = 0x278ED4u;
    // 0x278ed4: 0x10750011  beq         $v1, $s5, . + 4 + (0x11 << 2)
    ctx->pc = 0x278ED4u;
    {
        const bool branch_taken_0x278ed4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        if (branch_taken_0x278ed4) {
            ctx->pc = 0x278F1Cu;
            goto label_278f1c;
        }
    }
    ctx->pc = 0x278EDCu;
    // 0x278edc: 0x1000ffe4  b           . + 4 + (-0x1C << 2)
    ctx->pc = 0x278EDCu;
    {
        const bool branch_taken_0x278edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278EE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278EDCu;
            // 0x278ee0: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278edc) {
            ctx->pc = 0x278E70u;
            runtime->cooperativeGuestYield();
            goto label_278e70;
        }
    }
    ctx->pc = 0x278EE4u;
label_278ee4:
    // 0x278ee4: 0x1074001a  beq         $v1, $s4, . + 4 + (0x1A << 2)
    ctx->pc = 0x278EE4u;
    {
        const bool branch_taken_0x278ee4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        ctx->pc = 0x278EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278EE4u;
            // 0x278ee8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278ee4) {
            ctx->pc = 0x278F50u;
            goto label_278f50;
        }
    }
    ctx->pc = 0x278EECu;
    // 0x278eec: 0x10730007  beq         $v1, $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x278EECu;
    {
        const bool branch_taken_0x278eec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        if (branch_taken_0x278eec) {
            ctx->pc = 0x278F0Cu;
            goto label_278f0c;
        }
    }
    ctx->pc = 0x278EF4u;
    // 0x278ef4: 0x1000ffde  b           . + 4 + (-0x22 << 2)
    ctx->pc = 0x278EF4u;
    {
        const bool branch_taken_0x278ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278EF4u;
            // 0x278ef8: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278ef4) {
            ctx->pc = 0x278E70u;
            runtime->cooperativeGuestYield();
            goto label_278e70;
        }
    }
    ctx->pc = 0x278EFCu;
label_278efc:
    // 0x278efc: 0xc09e0cc  jal         func_278330
    ctx->pc = 0x278EFCu;
    SET_GPR_U32(ctx, 31, 0x278F04u);
    ctx->pc = 0x278F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278EFCu;
            // 0x278f00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x278330u;
    if (runtime->hasFunction(0x278330u)) {
        auto targetFn = runtime->lookupFunction(0x278330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278F04u; }
        if (ctx->pc != 0x278F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00278330_0x278330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278F04u; }
        if (ctx->pc != 0x278F04u) { return; }
    }
    ctx->pc = 0x278F04u;
    // 0x278f04: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x278F04u;
    {
        const bool branch_taken_0x278f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278F04u;
            // 0x278f08: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278f04) {
            ctx->pc = 0x278E70u;
            runtime->cooperativeGuestYield();
            goto label_278e70;
        }
    }
    ctx->pc = 0x278F0Cu;
label_278f0c:
    // 0x278f0c: 0xc09e178  jal         func_2785E0
    ctx->pc = 0x278F0Cu;
    SET_GPR_U32(ctx, 31, 0x278F14u);
    ctx->pc = 0x278F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278F0Cu;
            // 0x278f10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2785E0u;
    if (runtime->hasFunction(0x2785E0u)) {
        auto targetFn = runtime->lookupFunction(0x2785E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278F14u; }
        if (ctx->pc != 0x278F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002785E0_0x2785e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278F14u; }
        if (ctx->pc != 0x278F14u) { return; }
    }
    ctx->pc = 0x278F14u;
    // 0x278f14: 0x1000ffd6  b           . + 4 + (-0x2A << 2)
    ctx->pc = 0x278F14u;
    {
        const bool branch_taken_0x278f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x278F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278F14u;
            // 0x278f18: 0x8e020878  lw          $v0, 0x878($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x278f14) {
            ctx->pc = 0x278E70u;
            runtime->cooperativeGuestYield();
            goto label_278e70;
        }
    }
    ctx->pc = 0x278F1Cu;
label_278f1c:
    // 0x278f1c: 0xc09e1a0  jal         func_278680
    ctx->pc = 0x278F1Cu;
    SET_GPR_U32(ctx, 31, 0x278F24u);
    ctx->pc = 0x278F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278F1Cu;
            // 0x278f20: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x278680u;
    if (runtime->hasFunction(0x278680u)) {
        auto targetFn = runtime->lookupFunction(0x278680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278F24u; }
        if (ctx->pc != 0x278F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00278680_0x278680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278F24u; }
        if (ctx->pc != 0x278F24u) { return; }
    }
    ctx->pc = 0x278F24u;
    // 0x278f24: 0x8e040868  lw          $a0, 0x868($s0)
    ctx->pc = 0x278f24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2152)));
    // 0x278f28: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x278f28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x278f2c: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x278f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
    // 0x278f30: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x278f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x278f34: 0xc09bff4  jal         func_26FFD0
    ctx->pc = 0x278F34u;
    SET_GPR_U32(ctx, 31, 0x278F3Cu);
    ctx->pc = 0x278F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x278F34u;
            // 0x278f38: 0xffb20008  sd          $s2, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26FFD0u;
    if (runtime->hasFunction(0x26FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x26FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278F3Cu; }
        if (ctx->pc != 0x278F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_26ffd0_0x270048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x278F3Cu; }
        if (ctx->pc != 0x278F3Cu) { return; }
    }
    ctx->pc = 0x278F3Cu;
    // 0x278f3c: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x278f3cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278f40: 0xdfa30008  ld          $v1, 0x8($sp)
    ctx->pc = 0x278f40u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x278f44: 0xfe020840  sd          $v0, 0x840($s0)
    ctx->pc = 0x278f44u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2112), GPR_U64(ctx, 2));
    // 0x278f48: 0xfe030838  sd          $v1, 0x838($s0)
    ctx->pc = 0x278f48u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 2104), GPR_U64(ctx, 3));
    // 0x278f4c: 0x8e020160  lw          $v0, 0x160($s0)
    ctx->pc = 0x278f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 352)));
label_278f50:
    // 0x278f50: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x278f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x278f54: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x278f54u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x278f58: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x278f58u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x278f5c: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x278f5cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x278f60: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x278f60u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x278f64: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x278f64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x278f68: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x278f68u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x278f6c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x278f6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x278f70: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x278f70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x278f74: 0x3e00008  jr          $ra
    ctx->pc = 0x278F74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x278F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x278F74u;
            // 0x278f78: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x278E70u: goto label_278e70;
            case 0x278E90u: goto label_278e90;
            case 0x278E9Cu: goto label_278e9c;
            case 0x278EB8u: goto label_278eb8;
            case 0x278EE4u: goto label_278ee4;
            case 0x278EFCu: goto label_278efc;
            case 0x278F0Cu: goto label_278f0c;
            case 0x278F1Cu: goto label_278f1c;
            case 0x278F50u: goto label_278f50;
            default: break;
        }
        return;
    }
    ctx->pc = 0x278F7Cu;
    // 0x278f7c: 0x0  nop
    ctx->pc = 0x278f7cu;
    // NOP
}
