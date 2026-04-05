#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B9F08
// Address: 0x1b9f08 - 0x1ba220
void sub_001B9F08_0x1b9f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B9F08_0x1b9f08");
#endif

    ctx->pc = 0x1b9f08u;

    // 0x1b9f08: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1b9f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1b9f0c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1b9f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1b9f10: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1b9f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1b9f14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1b9f14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9f18: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1b9f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x1b9f1c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b9f1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9f20: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1b9f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1b9f24: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1b9f24u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9f28: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1b9f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1b9f2c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1b9f2cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9f30: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x1b9f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x1b9f34: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1b9f34u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9f38: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x1b9f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x1b9f3c: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1b9f3cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9f40: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x1b9f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x1b9f44: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x1b9f44u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9f48: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1b9f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x1b9f4c: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x1b9f4cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b9f50: 0x6800009  bltz        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x1B9F50u;
    {
        const bool branch_taken_0x1b9f50 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x1B9F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9F50u;
            // 0x1b9f54: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9f50) {
            ctx->pc = 0x1B9F78u;
            goto label_1b9f78;
        }
    }
    ctx->pc = 0x1B9F58u;
    // 0x1b9f58: 0x8e0214cc  lw          $v0, 0x14CC($s0)
    ctx->pc = 0x1b9f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5324)));
    // 0x1b9f5c: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x1b9f5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b9f60: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1B9F60u;
    {
        const bool branch_taken_0x1b9f60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9F64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9F60u;
            // 0x1b9f64: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9f60) {
            ctx->pc = 0x1B9F78u;
            goto label_1b9f78;
        }
    }
    ctx->pc = 0x1B9F68u;
    // 0x1b9f68: 0x8e0414bc  lw          $a0, 0x14BC($s0)
    ctx->pc = 0x1b9f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5308)));
    // 0x1b9f6c: 0xc06e338  jal         func_1B8CE0
    ctx->pc = 0x1B9F6Cu;
    SET_GPR_U32(ctx, 31, 0x1B9F74u);
    ctx->pc = 0x1B9F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9F6Cu;
            // 0x1b9f70: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8CE0u;
    if (runtime->hasFunction(0x1B8CE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B8CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9F74u; }
        if (ctx->pc != 0x1B9F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8CE0_0x1b8ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9F74u; }
        if (ctx->pc != 0x1B9F74u) { return; }
    }
    ctx->pc = 0x1B9F74u;
    // 0x1b9f74: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1b9f74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b9f78:
    // 0x1b9f78: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x1b9f78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1b9f7c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1B9F7Cu;
    {
        const bool branch_taken_0x1b9f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B9F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9F7Cu;
            // 0x1b9f80: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9f7c) {
            ctx->pc = 0x1B9FA0u;
            goto label_1b9fa0;
        }
    }
    ctx->pc = 0x1B9F84u;
    // 0x1b9f84: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1b9f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b9f88: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1b9f88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1b9f8c: 0x8c63cba4  lw          $v1, -0x345C($v1)
    ctx->pc = 0x1b9f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953892)));
    // 0x1b9f90: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1b9f90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1b9f94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1b9f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b9f98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1B9F98u;
    {
        const bool branch_taken_0x1b9f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9F98u;
            // 0x1b9f9c: 0x8c520008  lw          $s2, 0x8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9f98) {
            ctx->pc = 0x1B9FA4u;
            goto label_1b9fa4;
        }
    }
    ctx->pc = 0x1B9FA0u;
label_1b9fa0:
    // 0x1b9fa0: 0x24521300  addiu       $s2, $v0, 0x1300
    ctx->pc = 0x1b9fa0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
label_1b9fa4:
    // 0x1b9fa4: 0xc0a268a  jal         func_289A28
    ctx->pc = 0x1B9FA4u;
    SET_GPR_U32(ctx, 31, 0x1B9FACu);
    ctx->pc = 0x1B9FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9FA4u;
            // 0x1b9fa8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289A28u;
    if (runtime->hasFunction(0x289A28u)) {
        auto targetFn = runtime->lookupFunction(0x289A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9FACu; }
        if (ctx->pc != 0x1B9FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289a28_0x289b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B9FACu; }
        if (ctx->pc != 0x1B9FACu) { return; }
    }
    ctx->pc = 0x1B9FACu;
    // 0x1b9fac: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x1b9facu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1b9fb0: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x1B9FB0u;
    {
        const bool branch_taken_0x1b9fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b9fb0) {
            ctx->pc = 0x1BA090u;
            goto label_1ba090;
        }
    }
    ctx->pc = 0x1B9FB8u;
    // 0x1b9fb8: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x1b9fb8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1b9fbc: 0x82430001  lb          $v1, 0x1($s2)
    ctx->pc = 0x1b9fbcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
    // 0x1b9fc0: 0x2442ffbe  addiu       $v0, $v0, -0x42
    ctx->pc = 0x1b9fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967230));
    // 0x1b9fc4: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1b9fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1b9fc8: 0x2464ffcf  addiu       $a0, $v1, -0x31
    ctx->pc = 0x1b9fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967247));
    // 0x1b9fcc: 0x21e03  sra         $v1, $v0, 24
    ctx->pc = 0x1b9fccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 24));
    // 0x1b9fd0: 0x2c620016  sltiu       $v0, $v1, 0x16
    ctx->pc = 0x1b9fd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)22) ? 1 : 0);
    // 0x1b9fd4: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1B9FD4u;
    {
        const bool branch_taken_0x1b9fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9FD4u;
            // 0x1b9fd8: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9fd4) {
            ctx->pc = 0x1BA090u;
            goto label_1ba090;
        }
    }
    ctx->pc = 0x1B9FDCu;
    // 0x1b9fdc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1b9fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b9fe0: 0x24425800  addiu       $v0, $v0, 0x5800
    ctx->pc = 0x1b9fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22528));
    // 0x1b9fe4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1b9fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b9fe8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1b9fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b9fec: 0x400008  jr          $v0
    ctx->pc = 0x1B9FECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B9FF4u: goto label_1b9ff4;
            case 0x1BA000u: goto label_1ba000;
            case 0x1BA00Cu: goto label_1ba00c;
            case 0x1BA020u: goto label_1ba020;
            case 0x1BA034u: goto label_1ba034;
            case 0x1BA048u: goto label_1ba048;
            case 0x1BA05Cu: goto label_1ba05c;
            case 0x1BA070u: goto label_1ba070;
            case 0x1BA090u: goto label_1ba090;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1B9FF4u;
label_1b9ff4:
    // 0x1b9ff4: 0x8e020200  lw          $v0, 0x200($s0)
    ctx->pc = 0x1b9ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x1b9ff8: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x1B9FF8u;
    {
        const bool branch_taken_0x1b9ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B9FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B9FF8u;
            // 0x1b9ffc: 0x44882a  slt         $s1, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b9ff8) {
            ctx->pc = 0x1BA090u;
            goto label_1ba090;
        }
    }
    ctx->pc = 0x1BA000u;
label_1ba000:
    // 0x1ba000: 0x8e02006c  lw          $v0, 0x6C($s0)
    ctx->pc = 0x1ba000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1ba004: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x1BA004u;
    {
        const bool branch_taken_0x1ba004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA004u;
            // 0x1ba008: 0x2c510001  sltiu       $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba004) {
            ctx->pc = 0x1BA090u;
            goto label_1ba090;
        }
    }
    ctx->pc = 0x1BA00Cu;
label_1ba00c:
    // 0x1ba00c: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x1ba00cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x1ba010: 0x8c422d10  lw          $v0, 0x2D10($v0)
    ctx->pc = 0x1ba010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11536)));
    // 0x1ba014: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x1ba014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x1ba018: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1BA018u;
    {
        const bool branch_taken_0x1ba018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA01Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA018u;
            // 0x1ba01c: 0x2c510001  sltiu       $s1, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba018) {
            ctx->pc = 0x1BA090u;
            goto label_1ba090;
        }
    }
    ctx->pc = 0x1BA020u;
label_1ba020:
    // 0x1ba020: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x1ba020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x1ba024: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1BA024u;
    {
        const bool branch_taken_0x1ba024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA024u;
            // 0x1ba028: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba024) {
            ctx->pc = 0x1BA08Cu;
            goto label_1ba08c;
        }
    }
    ctx->pc = 0x1BA02Cu;
    // 0x1ba02c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1BA02Cu;
    {
        const bool branch_taken_0x1ba02c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA02Cu;
            // 0x1ba030: 0x8e0201ec  lw          $v0, 0x1EC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 492)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba02c) {
            ctx->pc = 0x1BA080u;
            goto label_1ba080;
        }
    }
    ctx->pc = 0x1BA034u;
label_1ba034:
    // 0x1ba034: 0x8e020074  lw          $v0, 0x74($s0)
    ctx->pc = 0x1ba034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 116)));
    // 0x1ba038: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x1BA038u;
    {
        const bool branch_taken_0x1ba038 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA038u;
            // 0x1ba03c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba038) {
            ctx->pc = 0x1BA08Cu;
            goto label_1ba08c;
        }
    }
    ctx->pc = 0x1BA040u;
    // 0x1ba040: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1BA040u;
    {
        const bool branch_taken_0x1ba040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA040u;
            // 0x1ba044: 0x8e0201f0  lw          $v0, 0x1F0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba040) {
            ctx->pc = 0x1BA080u;
            goto label_1ba080;
        }
    }
    ctx->pc = 0x1BA048u;
label_1ba048:
    // 0x1ba048: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x1ba048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
    // 0x1ba04c: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x1BA04Cu;
    {
        const bool branch_taken_0x1ba04c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA04Cu;
            // 0x1ba050: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba04c) {
            ctx->pc = 0x1BA08Cu;
            goto label_1ba08c;
        }
    }
    ctx->pc = 0x1BA054u;
    // 0x1ba054: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1BA054u;
    {
        const bool branch_taken_0x1ba054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA054u;
            // 0x1ba058: 0x8e0201f4  lw          $v0, 0x1F4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 500)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba054) {
            ctx->pc = 0x1BA080u;
            goto label_1ba080;
        }
    }
    ctx->pc = 0x1BA05Cu;
label_1ba05c:
    // 0x1ba05c: 0x8e020080  lw          $v0, 0x80($s0)
    ctx->pc = 0x1ba05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x1ba060: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1BA060u;
    {
        const bool branch_taken_0x1ba060 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA060u;
            // 0x1ba064: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba060) {
            ctx->pc = 0x1BA08Cu;
            goto label_1ba08c;
        }
    }
    ctx->pc = 0x1BA068u;
    // 0x1ba068: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1BA068u;
    {
        const bool branch_taken_0x1ba068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA068u;
            // 0x1ba06c: 0x8e0201fc  lw          $v0, 0x1FC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba068) {
            ctx->pc = 0x1BA080u;
            goto label_1ba080;
        }
    }
    ctx->pc = 0x1BA070u;
label_1ba070:
    // 0x1ba070: 0x8e02007c  lw          $v0, 0x7C($s0)
    ctx->pc = 0x1ba070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
    // 0x1ba074: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1BA074u;
    {
        const bool branch_taken_0x1ba074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA074u;
            // 0x1ba078: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba074) {
            ctx->pc = 0x1BA08Cu;
            goto label_1ba08c;
        }
    }
    ctx->pc = 0x1BA07Cu;
    // 0x1ba07c: 0x8e0201f8  lw          $v0, 0x1F8($s0)
    ctx->pc = 0x1ba07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 504)));
label_1ba080:
    // 0x1ba080: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x1ba080u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1ba084: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BA084u;
    {
        const bool branch_taken_0x1ba084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba084) {
            ctx->pc = 0x1BA090u;
            goto label_1ba090;
        }
    }
    ctx->pc = 0x1BA08Cu;
label_1ba08c:
    // 0x1ba08c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1ba08cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ba090:
    // 0x1ba090: 0xc0a268a  jal         func_289A28
    ctx->pc = 0x1BA090u;
    SET_GPR_U32(ctx, 31, 0x1BA098u);
    ctx->pc = 0x1BA094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA090u;
            // 0x1ba094: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289A28u;
    if (runtime->hasFunction(0x289A28u)) {
        auto targetFn = runtime->lookupFunction(0x289A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA098u; }
        if (ctx->pc != 0x1BA098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289a28_0x289b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BA098u; }
        if (ctx->pc != 0x1BA098u) { return; }
    }
    ctx->pc = 0x1BA098u;
    // 0x1ba098: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x1ba098u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x1ba09c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA09Cu;
    {
        const bool branch_taken_0x1ba09c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba09c) {
            ctx->pc = 0x1BA0B0u;
            goto label_1ba0b0;
        }
    }
    ctx->pc = 0x1BA0A4u;
    // 0x1ba0a4: 0x82420002  lb          $v0, 0x2($s2)
    ctx->pc = 0x1ba0a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
    // 0x1ba0a8: 0x38420048  xori        $v0, $v0, 0x48
    ctx->pc = 0x1ba0a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)72);
    // 0x1ba0ac: 0x2c550001  sltiu       $s5, $v0, 0x1
    ctx->pc = 0x1ba0acu;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1ba0b0:
    // 0x1ba0b0: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x1BA0B0u;
    {
        const bool branch_taken_0x1ba0b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba0b0) {
            ctx->pc = 0x1BA0DCu;
            goto label_1ba0dc;
        }
    }
    ctx->pc = 0x1BA0B8u;
    // 0x1ba0b8: 0x52a00002  beql        $s5, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BA0B8u;
    {
        const bool branch_taken_0x1ba0b8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ba0b8) {
            ctx->pc = 0x1BA0BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA0B8u;
            // 0x1ba0bc: 0x8e0214ec  lw          $v0, 0x14EC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5356)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BA0C4u;
            goto label_1ba0c4;
        }
    }
    ctx->pc = 0x1BA0C0u;
    // 0x1ba0c0: 0x8e0214e4  lw          $v0, 0x14E4($s0)
    ctx->pc = 0x1ba0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5348)));
label_1ba0c4:
    // 0x1ba0c4: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BA0C4u;
    {
        const bool branch_taken_0x1ba0c4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA0C4u;
            // 0x1ba0c8: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba0c4) {
            ctx->pc = 0x1BA0D4u;
            goto label_1ba0d4;
        }
    }
    ctx->pc = 0x1BA0CCu;
    // 0x1ba0cc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1BA0CCu;
    {
        const bool branch_taken_0x1ba0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA0D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA0CCu;
            // 0x1ba0d0: 0x8e1314e0  lw          $s3, 0x14E0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba0cc) {
            ctx->pc = 0x1BA0FCu;
            goto label_1ba0fc;
        }
    }
    ctx->pc = 0x1BA0D4u;
label_1ba0d4:
    // 0x1ba0d4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1BA0D4u;
    {
        const bool branch_taken_0x1ba0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA0D4u;
            // 0x1ba0d8: 0x8e1314e8  lw          $s3, 0x14E8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5352)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba0d4) {
            ctx->pc = 0x1BA0FCu;
            goto label_1ba0fc;
        }
    }
    ctx->pc = 0x1BA0DCu;
label_1ba0dc:
    // 0x1ba0dc: 0x16800007  bnez        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BA0DCu;
    {
        const bool branch_taken_0x1ba0dc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BA0E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA0DCu;
            // 0x1ba0e0: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba0dc) {
            ctx->pc = 0x1BA0FCu;
            goto label_1ba0fc;
        }
    }
    ctx->pc = 0x1BA0E4u;
    // 0x1ba0e4: 0x8e030200  lw          $v1, 0x200($s0)
    ctx->pc = 0x1ba0e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 512)));
    // 0x1ba0e8: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BA0E8u;
    {
        const bool branch_taken_0x1ba0e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ba0e8) {
            ctx->pc = 0x1BA0FCu;
            goto label_1ba0fc;
        }
    }
    ctx->pc = 0x1BA0F0u;
    // 0x1ba0f0: 0x8e0214d8  lw          $v0, 0x14D8($s0)
    ctx->pc = 0x1ba0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5336)));
    // 0x1ba0f4: 0x8e1314dc  lw          $s3, 0x14DC($s0)
    ctx->pc = 0x1ba0f4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 5340)));
    // 0x1ba0f8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1ba0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1ba0fc:
    // 0x1ba0fc: 0x1a600007  blez        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x1BA0FCu;
    {
        const bool branch_taken_0x1ba0fc = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x1BA100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA0FCu;
            // 0x1ba100: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba0fc) {
            ctx->pc = 0x1BA11Cu;
            goto label_1ba11c;
        }
    }
    ctx->pc = 0x1BA104u;
    // 0x1ba104: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1ba104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1ba108: 0x8c63cba4  lw          $v1, -0x345C($v1)
    ctx->pc = 0x1ba108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953892)));
    // 0x1ba10c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ba10cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ba110: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ba110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ba114: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1BA114u;
    {
        const bool branch_taken_0x1ba114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA114u;
            // 0x1ba118: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba114) {
            ctx->pc = 0x1BA124u;
            goto label_1ba124;
        }
    }
    ctx->pc = 0x1BA11Cu;
label_1ba11c:
    // 0x1ba11c: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x1ba11cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x1ba120: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x1ba120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
label_1ba124:
    // 0x1ba124: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x1ba124u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
    // 0x1ba128: 0x2a620002  slti        $v0, $s3, 0x2
    ctx->pc = 0x1ba128u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1ba12c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BA12Cu;
    {
        const bool branch_taken_0x1ba12c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba12c) {
            ctx->pc = 0x1BA130u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA12Cu;
            // 0x1ba130: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BA150u;
            goto label_1ba150;
        }
    }
    ctx->pc = 0x1BA134u;
    // 0x1ba134: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1ba134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba138: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1ba138u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1ba13c: 0x8c63cba4  lw          $v1, -0x345C($v1)
    ctx->pc = 0x1ba13cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953892)));
    // 0x1ba140: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ba140u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ba144: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ba144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ba148: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BA148u;
    {
        const bool branch_taken_0x1ba148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA14Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA148u;
            // 0x1ba14c: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba148) {
            ctx->pc = 0x1BA154u;
            goto label_1ba154;
        }
    }
    ctx->pc = 0x1BA150u;
label_1ba150:
    // 0x1ba150: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x1ba150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
label_1ba154:
    // 0x1ba154: 0x13c00025  beqz        $fp, . + 4 + (0x25 << 2)
    ctx->pc = 0x1BA154u;
    {
        const bool branch_taken_0x1ba154 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA154u;
            // 0x1ba158: 0xaee20000  sw          $v0, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba154) {
            ctx->pc = 0x1BA1ECu;
            goto label_1ba1ec;
        }
    }
    ctx->pc = 0x1BA15Cu;
    // 0x1ba15c: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x1ba15cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x1ba160: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BA160u;
    {
        const bool branch_taken_0x1ba160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba160) {
            ctx->pc = 0x1BA164u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA160u;
            // 0x1ba164: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BA184u;
            goto label_1ba184;
        }
    }
    ctx->pc = 0x1BA168u;
    // 0x1ba168: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1ba168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba16c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1ba16cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1ba170: 0x8c63cba4  lw          $v1, -0x345C($v1)
    ctx->pc = 0x1ba170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953892)));
    // 0x1ba174: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ba174u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ba178: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ba178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ba17c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BA17Cu;
    {
        const bool branch_taken_0x1ba17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA17Cu;
            // 0x1ba180: 0x8c42000c  lw          $v0, 0xC($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba17c) {
            ctx->pc = 0x1BA188u;
            goto label_1ba188;
        }
    }
    ctx->pc = 0x1BA184u;
label_1ba184:
    // 0x1ba184: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x1ba184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
label_1ba188:
    // 0x1ba188: 0xae02019c  sw          $v0, 0x19C($s0)
    ctx->pc = 0x1ba188u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 2));
    // 0x1ba18c: 0x2a620005  slti        $v0, $s3, 0x5
    ctx->pc = 0x1ba18cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1ba190: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BA190u;
    {
        const bool branch_taken_0x1ba190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba190) {
            ctx->pc = 0x1BA194u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA190u;
            // 0x1ba194: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BA1B4u;
            goto label_1ba1b4;
        }
    }
    ctx->pc = 0x1BA198u;
    // 0x1ba198: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1ba198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba19c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1ba19cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1ba1a0: 0x8c63cba4  lw          $v1, -0x345C($v1)
    ctx->pc = 0x1ba1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953892)));
    // 0x1ba1a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ba1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ba1a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ba1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ba1ac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BA1ACu;
    {
        const bool branch_taken_0x1ba1ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA1B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA1ACu;
            // 0x1ba1b0: 0x8c420010  lw          $v0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba1ac) {
            ctx->pc = 0x1BA1B8u;
            goto label_1ba1b8;
        }
    }
    ctx->pc = 0x1BA1B4u;
label_1ba1b4:
    // 0x1ba1b4: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x1ba1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
label_1ba1b8:
    // 0x1ba1b8: 0xae0201a0  sw          $v0, 0x1A0($s0)
    ctx->pc = 0x1ba1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 2));
    // 0x1ba1bc: 0x2a620006  slti        $v0, $s3, 0x6
    ctx->pc = 0x1ba1bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x1ba1c0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1BA1C0u;
    {
        const bool branch_taken_0x1ba1c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ba1c0) {
            ctx->pc = 0x1BA1C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA1C0u;
            // 0x1ba1c4: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BA1E4u;
            goto label_1ba1e4;
        }
    }
    ctx->pc = 0x1BA1C8u;
    // 0x1ba1c8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1ba1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ba1cc: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1ba1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1ba1d0: 0x8c63cba4  lw          $v1, -0x345C($v1)
    ctx->pc = 0x1ba1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294953892)));
    // 0x1ba1d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1ba1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1ba1d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ba1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1ba1dc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1BA1DCu;
    {
        const bool branch_taken_0x1ba1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BA1E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA1DCu;
            // 0x1ba1e0: 0x8c420014  lw          $v0, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ba1dc) {
            ctx->pc = 0x1BA1E8u;
            goto label_1ba1e8;
        }
    }
    ctx->pc = 0x1BA1E4u;
label_1ba1e4:
    // 0x1ba1e4: 0x24421300  addiu       $v0, $v0, 0x1300
    ctx->pc = 0x1ba1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4864));
label_1ba1e8:
    // 0x1ba1e8: 0xae0201a4  sw          $v0, 0x1A4($s0)
    ctx->pc = 0x1ba1e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 420), GPR_U32(ctx, 2));
label_1ba1ec:
    // 0x1ba1ec: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1ba1ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1ba1f0: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1ba1f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1ba1f4: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1ba1f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1ba1f8: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1ba1f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1ba1fc: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1ba1fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ba200: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1ba200u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1ba204: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x1ba204u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ba208: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x1ba208u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ba20c: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x1ba20cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ba210: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ba210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ba214: 0x3e00008  jr          $ra
    ctx->pc = 0x1BA214u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BA218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BA214u;
            // 0x1ba218: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1B9F78u: goto label_1b9f78;
            case 0x1B9FA0u: goto label_1b9fa0;
            case 0x1B9FA4u: goto label_1b9fa4;
            case 0x1B9FF4u: goto label_1b9ff4;
            case 0x1BA000u: goto label_1ba000;
            case 0x1BA00Cu: goto label_1ba00c;
            case 0x1BA020u: goto label_1ba020;
            case 0x1BA034u: goto label_1ba034;
            case 0x1BA048u: goto label_1ba048;
            case 0x1BA05Cu: goto label_1ba05c;
            case 0x1BA070u: goto label_1ba070;
            case 0x1BA080u: goto label_1ba080;
            case 0x1BA08Cu: goto label_1ba08c;
            case 0x1BA090u: goto label_1ba090;
            case 0x1BA0B0u: goto label_1ba0b0;
            case 0x1BA0C4u: goto label_1ba0c4;
            case 0x1BA0D4u: goto label_1ba0d4;
            case 0x1BA0DCu: goto label_1ba0dc;
            case 0x1BA0FCu: goto label_1ba0fc;
            case 0x1BA11Cu: goto label_1ba11c;
            case 0x1BA124u: goto label_1ba124;
            case 0x1BA150u: goto label_1ba150;
            case 0x1BA154u: goto label_1ba154;
            case 0x1BA184u: goto label_1ba184;
            case 0x1BA188u: goto label_1ba188;
            case 0x1BA1B4u: goto label_1ba1b4;
            case 0x1BA1B8u: goto label_1ba1b8;
            case 0x1BA1E4u: goto label_1ba1e4;
            case 0x1BA1E8u: goto label_1ba1e8;
            case 0x1BA1ECu: goto label_1ba1ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1BA21Cu;
    // 0x1ba21c: 0x0  nop
    ctx->pc = 0x1ba21cu;
    // NOP
}
