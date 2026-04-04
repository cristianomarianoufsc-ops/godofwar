#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00200E60
// Address: 0x200e60 - 0x201018
void sub_00200E60_0x200e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200E60_0x200e60");
#endif

    ctx->pc = 0x200e60u;

    // 0x200e60: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x200e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x200e64: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x200e64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200e68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x200e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x200e6c: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x200e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x200e70: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x200e70u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200e74: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x200e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x200e78: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x200e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x200e7c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x200e7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x200e80: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x200e80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x200e84: 0x0  nop
    ctx->pc = 0x200e84u;
    // NOP
label_200e88:
    // 0x200e88: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x200e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x200e8c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x200e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x200e90: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x200e90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
    // 0x200e94: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x200e94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x200e98: 0x0  nop
    ctx->pc = 0x200e98u;
    // NOP
    // 0x200e9c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x200E9Cu;
    {
        const bool branch_taken_0x200e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200E9Cu;
            // 0x200ea0: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200e9c) {
            ctx->pc = 0x200E88u;
            runtime->cooperativeGuestYield();
            goto label_200e88;
        }
    }
    ctx->pc = 0x200EA4u;
    // 0x200ea4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x200ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x200ea8: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x200ea8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x200eac: 0x2622ec58  addiu       $v0, $s1, -0x13A8
    ctx->pc = 0x200eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962264));
    // 0x200eb0: 0x8c420078  lw          $v0, 0x78($v0)
    ctx->pc = 0x200eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x200eb4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x200eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x200eb8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x200eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x200ebc: 0x8c5000c0  lw          $s0, 0xC0($v0)
    ctx->pc = 0x200ebcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x200ec0: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x200EC0u;
    {
        const bool branch_taken_0x200ec0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x200EC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200EC0u;
            // 0x200ec4: 0x2622ec58  addiu       $v0, $s1, -0x13A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200ec0) {
            ctx->pc = 0x200F08u;
            goto label_200f08;
        }
    }
    ctx->pc = 0x200EC8u;
    // 0x200ec8: 0x2602ffec  addiu       $v0, $s0, -0x14
    ctx->pc = 0x200ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
    // 0x200ecc: 0x0  nop
    ctx->pc = 0x200eccu;
    // NOP
label_200ed0:
    // 0x200ed0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x200ed0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200ed4: 0x50300b  movn        $a2, $v0, $s0
    ctx->pc = 0x200ed4u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x200ed8: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x200ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x200edc: 0x94c20002  lhu         $v0, 0x2($a2)
    ctx->pc = 0x200edcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x200ee0: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x200EE0u;
    {
        const bool branch_taken_0x200ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x200ee0) {
            ctx->pc = 0x200EE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x200EE0u;
            // 0x200ee4: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x200EF8u;
            goto label_200ef8;
        }
    }
    ctx->pc = 0x200EE8u;
    // 0x200ee8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x200ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200eec: 0xc0804e0  jal         func_201380
    ctx->pc = 0x200EECu;
    SET_GPR_U32(ctx, 31, 0x200EF4u);
    ctx->pc = 0x200EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200EECu;
            // 0x200ef0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201380u;
    if (runtime->hasFunction(0x201380u)) {
        auto targetFn = runtime->lookupFunction(0x201380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200EF4u; }
        if (ctx->pc != 0x200EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00201380_0x201380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200EF4u; }
        if (ctx->pc != 0x200EF4u) { return; }
    }
    ctx->pc = 0x200EF4u;
    // 0x200ef4: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x200ef4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_200ef8:
    // 0x200ef8: 0x1600fff5  bnez        $s0, . + 4 + (-0xB << 2)
    ctx->pc = 0x200EF8u;
    {
        const bool branch_taken_0x200ef8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x200EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200EF8u;
            // 0x200efc: 0x2602ffec  addiu       $v0, $s0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200ef8) {
            ctx->pc = 0x200ED0u;
            runtime->cooperativeGuestYield();
            goto label_200ed0;
        }
    }
    ctx->pc = 0x200F00u;
    // 0x200f00: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x200f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x200f04: 0x2622ec58  addiu       $v0, $s1, -0x13A8
    ctx->pc = 0x200f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294962264));
label_200f08:
    // 0x200f08: 0x8c420078  lw          $v0, 0x78($v0)
    ctx->pc = 0x200f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x200f0c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x200f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x200f10: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x200f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x200f14: 0x8c5300c0  lw          $s3, 0xC0($v0)
    ctx->pc = 0x200f14u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x200f18: 0x12600032  beqz        $s3, . + 4 + (0x32 << 2)
    ctx->pc = 0x200F18u;
    {
        const bool branch_taken_0x200f18 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x200F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200F18u;
            // 0x200f1c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200f18) {
            ctx->pc = 0x200FE4u;
            goto label_200fe4;
        }
    }
    ctx->pc = 0x200F20u;
    // 0x200f20: 0x2662ffec  addiu       $v0, $s3, -0x14
    ctx->pc = 0x200f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967276));
    // 0x200f24: 0x0  nop
    ctx->pc = 0x200f24u;
    // NOP
label_200f28:
    // 0x200f28: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x200f28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200f2c: 0x53880b  movn        $s1, $v0, $s3
    ctx->pc = 0x200f2cu;
    if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x200f30: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x200f30u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x200f34: 0x2c42000b  sltiu       $v0, $v0, 0xB
    ctx->pc = 0x200f34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x200f38: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x200F38u;
    {
        const bool branch_taken_0x200f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x200F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200F38u;
            // 0x200f3c: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200f38) {
            ctx->pc = 0x200FD4u;
            goto label_200fd4;
        }
    }
    ctx->pc = 0x200F40u;
    // 0x200f40: 0x8e2200a8  lw          $v0, 0xA8($s1)
    ctx->pc = 0x200f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
    // 0x200f44: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x200f44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x200f48: 0x24a579f0  addiu       $a1, $a1, 0x79F0
    ctx->pc = 0x200f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31216));
    // 0x200f4c: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x200f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x200f50: 0x24500028  addiu       $s0, $v0, 0x28
    ctx->pc = 0x200f50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x200f54: 0xc0a34bc  jal         func_28D2F0
    ctx->pc = 0x200F54u;
    SET_GPR_U32(ctx, 31, 0x200F5Cu);
    ctx->pc = 0x200F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200F54u;
            // 0x200f58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D2F0u;
    if (runtime->hasFunction(0x28D2F0u)) {
        auto targetFn = runtime->lookupFunction(0x28D2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200F5Cu; }
        if (ctx->pc != 0x200F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D2F0_0x28d2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200F5Cu; }
        if (ctx->pc != 0x200F5Cu) { return; }
    }
    ctx->pc = 0x200F5Cu;
    // 0x200f5c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x200F5Cu;
    {
        const bool branch_taken_0x200f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200F5Cu;
            // 0x200f60: 0x3c05002b  lui         $a1, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200f5c) {
            ctx->pc = 0x200F7Cu;
            goto label_200f7c;
        }
    }
    ctx->pc = 0x200F64u;
    // 0x200f64: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x200f64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200f68: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x200f68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200f6c: 0xc0804e0  jal         func_201380
    ctx->pc = 0x200F6Cu;
    SET_GPR_U32(ctx, 31, 0x200F74u);
    ctx->pc = 0x200F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200F6Cu;
            // 0x200f70: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201380u;
    if (runtime->hasFunction(0x201380u)) {
        auto targetFn = runtime->lookupFunction(0x201380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200F74u; }
        if (ctx->pc != 0x200F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00201380_0x201380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200F74u; }
        if (ctx->pc != 0x200F74u) { return; }
    }
    ctx->pc = 0x200F74u;
    // 0x200f74: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x200F74u;
    {
        const bool branch_taken_0x200f74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200F78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200F74u;
            // 0x200f78: 0x8e730000  lw          $s3, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200f74) {
            ctx->pc = 0x200FD8u;
            goto label_200fd8;
        }
    }
    ctx->pc = 0x200F7Cu;
label_200f7c:
    // 0x200f7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x200f7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200f80: 0x24a57a00  addiu       $a1, $a1, 0x7A00
    ctx->pc = 0x200f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31232));
    // 0x200f84: 0xc0a34bc  jal         func_28D2F0
    ctx->pc = 0x200F84u;
    SET_GPR_U32(ctx, 31, 0x200F8Cu);
    ctx->pc = 0x200F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200F84u;
            // 0x200f88: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D2F0u;
    if (runtime->hasFunction(0x28D2F0u)) {
        auto targetFn = runtime->lookupFunction(0x28D2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200F8Cu; }
        if (ctx->pc != 0x200F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D2F0_0x28d2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200F8Cu; }
        if (ctx->pc != 0x200F8Cu) { return; }
    }
    ctx->pc = 0x200F8Cu;
    // 0x200f8c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x200F8Cu;
    {
        const bool branch_taken_0x200f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x200F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200F8Cu;
            // 0x200f90: 0x3c05002b  lui         $a1, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200f8c) {
            ctx->pc = 0x200FACu;
            goto label_200fac;
        }
    }
    ctx->pc = 0x200F94u;
    // 0x200f94: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x200f94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200f98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x200f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200f9c: 0xc0804e0  jal         func_201380
    ctx->pc = 0x200F9Cu;
    SET_GPR_U32(ctx, 31, 0x200FA4u);
    ctx->pc = 0x200FA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200F9Cu;
            // 0x200fa0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201380u;
    if (runtime->hasFunction(0x201380u)) {
        auto targetFn = runtime->lookupFunction(0x201380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200FA4u; }
        if (ctx->pc != 0x200FA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00201380_0x201380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200FA4u; }
        if (ctx->pc != 0x200FA4u) { return; }
    }
    ctx->pc = 0x200FA4u;
    // 0x200fa4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x200FA4u;
    {
        const bool branch_taken_0x200fa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x200FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200FA4u;
            // 0x200fa8: 0x8e730000  lw          $s3, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200fa4) {
            ctx->pc = 0x200FD8u;
            goto label_200fd8;
        }
    }
    ctx->pc = 0x200FACu;
label_200fac:
    // 0x200fac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x200facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200fb0: 0x24a57a10  addiu       $a1, $a1, 0x7A10
    ctx->pc = 0x200fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31248));
    // 0x200fb4: 0xc0a34bc  jal         func_28D2F0
    ctx->pc = 0x200FB4u;
    SET_GPR_U32(ctx, 31, 0x200FBCu);
    ctx->pc = 0x200FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200FB4u;
            // 0x200fb8: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D2F0u;
    if (runtime->hasFunction(0x28D2F0u)) {
        auto targetFn = runtime->lookupFunction(0x28D2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200FBCu; }
        if (ctx->pc != 0x200FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028D2F0_0x28d2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200FBCu; }
        if (ctx->pc != 0x200FBCu) { return; }
    }
    ctx->pc = 0x200FBCu;
    // 0x200fbc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x200FBCu;
    {
        const bool branch_taken_0x200fbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x200fbc) {
            ctx->pc = 0x200FC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x200FBCu;
            // 0x200fc0: 0x8e730000  lw          $s3, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x200FD8u;
            goto label_200fd8;
        }
    }
    ctx->pc = 0x200FC4u;
    // 0x200fc4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x200fc4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200fc8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x200fc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200fcc: 0xc0804e0  jal         func_201380
    ctx->pc = 0x200FCCu;
    SET_GPR_U32(ctx, 31, 0x200FD4u);
    ctx->pc = 0x200FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200FCCu;
            // 0x200fd0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201380u;
    if (runtime->hasFunction(0x201380u)) {
        auto targetFn = runtime->lookupFunction(0x201380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200FD4u; }
        if (ctx->pc != 0x200FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00201380_0x201380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200FD4u; }
        if (ctx->pc != 0x200FD4u) { return; }
    }
    ctx->pc = 0x200FD4u;
label_200fd4:
    // 0x200fd4: 0x8e730000  lw          $s3, 0x0($s3)
    ctx->pc = 0x200fd4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_200fd8:
    // 0x200fd8: 0x1660ffd3  bnez        $s3, . + 4 + (-0x2D << 2)
    ctx->pc = 0x200FD8u;
    {
        const bool branch_taken_0x200fd8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x200FDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x200FD8u;
            // 0x200fdc: 0x2662ffec  addiu       $v0, $s3, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x200fd8) {
            ctx->pc = 0x200F28u;
            runtime->cooperativeGuestYield();
            goto label_200f28;
        }
    }
    ctx->pc = 0x200FE0u;
    // 0x200fe0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x200fe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_200fe4:
    // 0x200fe4: 0xc08048c  jal         func_201230
    ctx->pc = 0x200FE4u;
    SET_GPR_U32(ctx, 31, 0x200FECu);
    ctx->pc = 0x200FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200FE4u;
            // 0x200fe8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201230u;
    if (runtime->hasFunction(0x201230u)) {
        auto targetFn = runtime->lookupFunction(0x201230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200FECu; }
        if (ctx->pc != 0x200FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00201230_0x201230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200FECu; }
        if (ctx->pc != 0x200FECu) { return; }
    }
    ctx->pc = 0x200FECu;
    // 0x200fec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x200fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200ff0: 0xc08048c  jal         func_201230
    ctx->pc = 0x200FF0u;
    SET_GPR_U32(ctx, 31, 0x200FF8u);
    ctx->pc = 0x200FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x200FF0u;
            // 0x200ff4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201230u;
    if (runtime->hasFunction(0x201230u)) {
        auto targetFn = runtime->lookupFunction(0x201230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200FF8u; }
        if (ctx->pc != 0x200FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00201230_0x201230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x200FF8u; }
        if (ctx->pc != 0x200FF8u) { return; }
    }
    ctx->pc = 0x200FF8u;
    // 0x200ff8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x200ff8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x200ffc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x200ffcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x201000: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x201000u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x201004: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x201004u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201008: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x201008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20100c: 0x3e00008  jr          $ra
    ctx->pc = 0x20100Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20100Cu;
            // 0x201010: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x200E88u: goto label_200e88;
            case 0x200ED0u: goto label_200ed0;
            case 0x200EF8u: goto label_200ef8;
            case 0x200F08u: goto label_200f08;
            case 0x200F28u: goto label_200f28;
            case 0x200F7Cu: goto label_200f7c;
            case 0x200FACu: goto label_200fac;
            case 0x200FD4u: goto label_200fd4;
            case 0x200FD8u: goto label_200fd8;
            case 0x200FE4u: goto label_200fe4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x201014u;
    // 0x201014: 0x0  nop
    ctx->pc = 0x201014u;
    // NOP
}
