#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_27d148
// Address: 0x27d148 - 0x27d2c8
void entry_27d148_0x27d2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_27d148_0x27d2c8");
#endif

    ctx->pc = 0x27d148u;

label_27d148:
    // 0x27d148: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x27d148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x27d14c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x27d14cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x27d150: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x27d150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x27d154: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x27d154u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d158: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x27d158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x27d15c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x27d15cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d160: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x27d160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x27d164: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x27D164u;
    {
        const bool branch_taken_0x27d164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D164u;
            // 0x27d168: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d164) {
            ctx->pc = 0x27D274u;
            goto label_27d274;
        }
    }
    ctx->pc = 0x27D16Cu;
    // 0x27d16c: 0x0  nop
    ctx->pc = 0x27d16cu;
    // NOP
label_27d170:
    // 0x27d170: 0x6400005  bltz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x27D170u;
    {
        const bool branch_taken_0x27d170 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x27D174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D170u;
            // 0x27d174: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d170) {
            ctx->pc = 0x27D188u;
            goto label_27d188;
        }
    }
    ctx->pc = 0x27D178u;
    // 0x27d178: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D178u;
    {
        const bool branch_taken_0x27d178 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x27D17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D178u;
            // 0x27d17c: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d178) {
            ctx->pc = 0x27D188u;
            goto label_27d188;
        }
    }
    ctx->pc = 0x27D180u;
    // 0x27d180: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x27d180u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x27d184: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x27d184u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
label_27d188:
    // 0x27d188: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27d188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d18c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27d18cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d190: 0xc0a26dc  jal         func_289B70
    ctx->pc = 0x27D190u;
    SET_GPR_U32(ctx, 31, 0x27D198u);
    ctx->pc = 0x27D194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D190u;
            // 0x27d194: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289B70u;
    if (runtime->hasFunction(0x289B70u)) {
        auto targetFn = runtime->lookupFunction(0x289B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D198u; }
        if (ctx->pc != 0x27D198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289b70_0x289d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D198u; }
        if (ctx->pc != 0x27D198u) { return; }
    }
    ctx->pc = 0x27D198u;
    // 0x27d198: 0x14400044  bnez        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x27D198u;
    {
        const bool branch_taken_0x27d198 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27D19Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D198u;
            // 0x27d19c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d198) {
            ctx->pc = 0x27D2ACu;
            goto label_27d2ac;
        }
    }
    ctx->pc = 0x27D1A0u;
    // 0x27d1a0: 0x2308821  addu        $s1, $s1, $s0
    ctx->pc = 0x27d1a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x27d1a4: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x27d1a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x27d1a8: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x27d1a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27d1ac: 0x2402003f  addiu       $v0, $zero, 0x3F
    ctx->pc = 0x27d1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x27d1b0: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x27D1B0u;
    {
        const bool branch_taken_0x27d1b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x27D1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D1B0u;
            // 0x27d1b4: 0x92250000  lbu         $a1, 0x0($s1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d1b0) {
            ctx->pc = 0x27D1DCu;
            goto label_27d1dc;
        }
    }
    ctx->pc = 0x27D1B8u;
    // 0x27d1b8: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x27d1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x27d1bc: 0x0  nop
    ctx->pc = 0x27d1bcu;
    // NOP
label_27d1c0:
    // 0x27d1c0: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x27d1c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x27d1c4: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x27D1C4u;
    {
        const bool branch_taken_0x27d1c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D1C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D1C4u;
            // 0x27d1c8: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d1c4) {
            ctx->pc = 0x27D244u;
            goto label_27d244;
        }
    }
    ctx->pc = 0x27D1CCu;
    // 0x27d1cc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x27d1ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x27d1d0: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x27d1d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27d1d4: 0x1043fffa  beq         $v0, $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27D1D4u;
    {
        const bool branch_taken_0x27d1d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x27D1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D1D4u;
            // 0x27d1d8: 0x92250000  lbu         $a1, 0x0($s1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d1d4) {
            ctx->pc = 0x27D1C0u;
            runtime->cooperativeGuestYield();
            goto label_27d1c0;
        }
    }
    ctx->pc = 0x27D1DCu;
label_27d1dc:
    // 0x27d1dc: 0x51600  sll         $v0, $a1, 24
    ctx->pc = 0x27d1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
    // 0x27d1e0: 0x2403002a  addiu       $v1, $zero, 0x2A
    ctx->pc = 0x27d1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x27d1e4: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x27d1e4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x27d1e8: 0x14430023  bne         $v0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x27D1E8u;
    {
        const bool branch_taken_0x27d1e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x27D1ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D1E8u;
            // 0x27d1ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d1e8) {
            ctx->pc = 0x27D278u;
            goto label_27d278;
        }
    }
    ctx->pc = 0x27D1F0u;
    // 0x27d1f0: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x27d1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x27d1f4: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x27d1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
label_27d1f8:
    // 0x27d1f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x27d1f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_27d1fc:
    // 0x27d1fc: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x27d1fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27d200: 0x92250000  lbu         $a1, 0x0($s1)
    ctx->pc = 0x27d200u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27d204: 0x0  nop
    ctx->pc = 0x27d204u;
    // NOP
    // 0x27d208: 0x0  nop
    ctx->pc = 0x27d208u;
    // NOP
    // 0x27d20c: 0x1044fffa  beq         $v0, $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x27D20Cu;
    {
        const bool branch_taken_0x27d20c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x27d20c) {
            ctx->pc = 0x27D1F8u;
            runtime->cooperativeGuestYield();
            goto label_27d1f8;
        }
    }
    ctx->pc = 0x27D214u;
    // 0x27d214: 0x5043fff9  beql        $v0, $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x27D214u;
    {
        const bool branch_taken_0x27d214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x27d214) {
            ctx->pc = 0x27D218u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27D214u;
            // 0x27d218: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27D1FCu;
            runtime->cooperativeGuestYield();
            goto label_27d1fc;
        }
    }
    ctx->pc = 0x27D21Cu;
    // 0x27d21c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x27D21Cu;
    {
        const bool branch_taken_0x27d21c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D21Cu;
            // 0x27d220: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d21c) {
            ctx->pc = 0x27D244u;
            goto label_27d244;
        }
    }
    ctx->pc = 0x27D224u;
    // 0x27d224: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x27D224u;
    {
        const bool branch_taken_0x27d224 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D224u;
            // 0x27d228: 0x52e00  sll         $a1, $a1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d224) {
            ctx->pc = 0x27D254u;
            goto label_27d254;
        }
    }
    ctx->pc = 0x27D22Cu;
    // 0x27d22c: 0x0  nop
    ctx->pc = 0x27d22cu;
    // NOP
label_27d230:
    // 0x27d230: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27d230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d234: 0xc09f452  jal         func_27D148
    ctx->pc = 0x27D234u;
    SET_GPR_U32(ctx, 31, 0x27D23Cu);
    ctx->pc = 0x27D238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D234u;
            // 0x27d238: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D148u;
    runtime->cooperativeGuestYield();
    goto label_27d148;
    ctx->pc = 0x27D23Cu;
label_27d23c:
    // 0x27d23c: 0x54520003  bnel        $v0, $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x27D23Cu;
    {
        const bool branch_taken_0x27d23c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x27d23c) {
            ctx->pc = 0x27D240u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27D23Cu;
            // 0x27d240: 0x92250000  lbu         $a1, 0x0($s1) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27D24Cu;
            goto label_27d24c;
        }
    }
    ctx->pc = 0x27D244u;
label_27d244:
    // 0x27d244: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x27D244u;
    {
        const bool branch_taken_0x27d244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D244u;
            // 0x27d248: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d244) {
            ctx->pc = 0x27D2ACu;
            goto label_27d2ac;
        }
    }
    ctx->pc = 0x27D24Cu;
label_27d24c:
    // 0x27d24c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x27d24cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x27d250: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x27d250u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_27d254:
    // 0x27d254: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27d254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d258: 0xc09f406  jal         func_27D018
    ctx->pc = 0x27D258u;
    SET_GPR_U32(ctx, 31, 0x27D260u);
    ctx->pc = 0x27D25Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D258u;
            // 0x27d25c: 0x52e03  sra         $a1, $a1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D018u;
    if (runtime->hasFunction(0x27D018u)) {
        auto targetFn = runtime->lookupFunction(0x27D018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D260u; }
        if (ctx->pc != 0x27D260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_27d018_0x27d078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D260u; }
        if (ctx->pc != 0x27D260u) { return; }
    }
    ctx->pc = 0x27D260u;
    // 0x27d260: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27d260u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d264: 0x601fff2  bgez        $s0, . + 4 + (-0xE << 2)
    ctx->pc = 0x27D264u;
    {
        const bool branch_taken_0x27d264 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x27D268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D264u;
            // 0x27d268: 0x2709821  addu        $s3, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d264) {
            ctx->pc = 0x27D230u;
            runtime->cooperativeGuestYield();
            goto label_27d230;
        }
    }
    ctx->pc = 0x27D26Cu;
    // 0x27d26c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x27D26Cu;
    {
        const bool branch_taken_0x27d26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D26Cu;
            // 0x27d270: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d26c) {
            ctx->pc = 0x27D2ACu;
            goto label_27d2ac;
        }
    }
    ctx->pc = 0x27D274u;
label_27d274:
    // 0x27d274: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27d274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27d278:
    // 0x27d278: 0xc09f406  jal         func_27D018
    ctx->pc = 0x27D278u;
    SET_GPR_U32(ctx, 31, 0x27D280u);
    ctx->pc = 0x27D27Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D278u;
            // 0x27d27c: 0x2405003f  addiu       $a1, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D018u;
    if (runtime->hasFunction(0x27D018u)) {
        auto targetFn = runtime->lookupFunction(0x27D018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D280u; }
        if (ctx->pc != 0x27D280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_27d018_0x27d078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D280u; }
        if (ctx->pc != 0x27D280u) { return; }
    }
    ctx->pc = 0x27D280u;
    // 0x27d280: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27d280u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d284: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27d284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27d288: 0xc09f406  jal         func_27D018
    ctx->pc = 0x27D288u;
    SET_GPR_U32(ctx, 31, 0x27D290u);
    ctx->pc = 0x27D28Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D288u;
            // 0x27d28c: 0x2405002a  addiu       $a1, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D018u;
    if (runtime->hasFunction(0x27D018u)) {
        auto targetFn = runtime->lookupFunction(0x27D018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D290u; }
        if (ctx->pc != 0x27D290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_27d018_0x27d078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D290u; }
        if (ctx->pc != 0x27D290u) { return; }
    }
    ctx->pc = 0x27D290u;
    // 0x27d290: 0x641ffb7  bgez        $s2, . + 4 + (-0x49 << 2)
    ctx->pc = 0x27D290u;
    {
        const bool branch_taken_0x27d290 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x27D294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D290u;
            // 0x27d294: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d290) {
            ctx->pc = 0x27D170u;
            runtime->cooperativeGuestYield();
            goto label_27d170;
        }
    }
    ctx->pc = 0x27D298u;
    // 0x27d298: 0x461ffb5  bgez        $v1, . + 4 + (-0x4B << 2)
    ctx->pc = 0x27D298u;
    {
        const bool branch_taken_0x27d298 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x27D29Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D298u;
            // 0x27d29c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d298) {
            ctx->pc = 0x27D170u;
            runtime->cooperativeGuestYield();
            goto label_27d170;
        }
    }
    ctx->pc = 0x27D2A0u;
    // 0x27d2a0: 0xc0a25f1  jal         func_2897C4
    ctx->pc = 0x27D2A0u;
    SET_GPR_U32(ctx, 31, 0x27D2A8u);
    ctx->pc = 0x27D2A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D2A0u;
            // 0x27d2a4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2897C4u;
    if (runtime->hasFunction(0x2897C4u)) {
        auto targetFn = runtime->lookupFunction(0x2897C4u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D2A8u; }
        if (ctx->pc != 0x27D2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2897c4_0x289910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D2A8u; }
        if (ctx->pc != 0x27D2A8u) { return; }
    }
    ctx->pc = 0x27D2A8u;
    // 0x27d2a8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x27d2a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_27d2ac:
    // 0x27d2ac: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x27d2acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27d2b0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x27d2b0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27d2b4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x27d2b4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27d2b8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x27d2b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27d2bc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27d2bcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27d2c0: 0x3e00008  jr          $ra
    ctx->pc = 0x27D2C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D2C0u;
            // 0x27d2c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27D148u: goto label_27d148;
            case 0x27D170u: goto label_27d170;
            case 0x27D188u: goto label_27d188;
            case 0x27D1C0u: goto label_27d1c0;
            case 0x27D1DCu: goto label_27d1dc;
            case 0x27D1F8u: goto label_27d1f8;
            case 0x27D1FCu: goto label_27d1fc;
            case 0x27D230u: goto label_27d230;
            case 0x27D23Cu: goto label_27d23c;
            case 0x27D244u: goto label_27d244;
            case 0x27D24Cu: goto label_27d24c;
            case 0x27D254u: goto label_27d254;
            case 0x27D274u: goto label_27d274;
            case 0x27D278u: goto label_27d278;
            case 0x27D2ACu: goto label_27d2ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27D2C8u;
}
