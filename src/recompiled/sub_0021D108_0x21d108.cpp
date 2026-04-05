#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021D108
// Address: 0x21d108 - 0x21d3e0
void sub_0021D108_0x21d108(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D108_0x21d108");
#endif

    ctx->pc = 0x21d108u;

    // 0x21d108: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21d108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21d10c: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x21d10cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x21d110: 0x8c42e560  lw          $v0, -0x1AA0($v0)
    ctx->pc = 0x21d110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960480)));
    // 0x21d114: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x21d114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x21d118: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x21d118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x21d11c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x21d11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x21d120: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x21d120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x21d124: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x21d124u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x21d128: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x21d128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x21d12c: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x21d12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x21d130: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x21D130u;
    {
        const bool branch_taken_0x21d130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D130u;
            // 0x21d134: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d130) {
            ctx->pc = 0x21D15Cu;
            goto label_21d15c;
        }
    }
    ctx->pc = 0x21D138u;
    // 0x21d138: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21d138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21d13c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x21d13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21d140: 0x8c43cb94  lw          $v1, -0x346C($v0)
    ctx->pc = 0x21d140u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x21d144: 0x8c62020c  lw          $v0, 0x20C($v1)
    ctx->pc = 0x21d144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    // 0x21d148: 0x50440001  beql        $v0, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x21D148u;
    {
        const bool branch_taken_0x21d148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x21d148) {
            ctx->pc = 0x21D14Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21D148u;
            // 0x21d14c: 0x8c641574  lw          $a0, 0x1574($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5492)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21D150u;
            goto label_21d150;
        }
    }
    ctx->pc = 0x21D150u;
label_21d150:
    // 0x21d150: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21d150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21d154: 0x14820099  bne         $a0, $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x21D154u;
    {
        const bool branch_taken_0x21d154 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x21D158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D154u;
            // 0x21d158: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d154) {
            ctx->pc = 0x21D3BCu;
            goto label_21d3bc;
        }
    }
    ctx->pc = 0x21D15Cu;
label_21d15c:
    // 0x21d15c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21d15cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21d160: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x21d160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x21d164: 0x8c42be50  lw          $v0, -0x41B0($v0)
    ctx->pc = 0x21d164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950480)));
    // 0x21d168: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x21d168u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21d16c: 0x8c71ed58  lw          $s1, -0x12A8($v1)
    ctx->pc = 0x21d16cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294962520)));
    // 0x21d170: 0x8c430278  lw          $v1, 0x278($v0)
    ctx->pc = 0x21d170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 632)));
    // 0x21d174: 0x10720038  beq         $v1, $s2, . + 4 + (0x38 << 2)
    ctx->pc = 0x21D174u;
    {
        const bool branch_taken_0x21d174 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        ctx->pc = 0x21D178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D174u;
            // 0x21d178: 0x2c620003  sltiu       $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d174) {
            ctx->pc = 0x21D258u;
            goto label_21d258;
        }
    }
    ctx->pc = 0x21D17Cu;
    // 0x21d17c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21D17Cu;
    {
        const bool branch_taken_0x21d17c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D17Cu;
            // 0x21d180: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d17c) {
            ctx->pc = 0x21D194u;
            goto label_21d194;
        }
    }
    ctx->pc = 0x21D184u;
    // 0x21d184: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x21D184u;
    {
        const bool branch_taken_0x21d184 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D184u;
            // 0x21d188: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d184) {
            ctx->pc = 0x21D1A4u;
            goto label_21d1a4;
        }
    }
    ctx->pc = 0x21D18Cu;
    // 0x21d18c: 0x1000008c  b           . + 4 + (0x8C << 2)
    ctx->pc = 0x21D18Cu;
    {
        const bool branch_taken_0x21d18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D18Cu;
            // 0x21d190: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d18c) {
            ctx->pc = 0x21D3C0u;
            goto label_21d3c0;
        }
    }
    ctx->pc = 0x21D194u;
label_21d194:
    // 0x21d194: 0x1062005c  beq         $v1, $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x21D194u;
    {
        const bool branch_taken_0x21d194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x21D198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D194u;
            // 0x21d198: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d194) {
            ctx->pc = 0x21D308u;
            goto label_21d308;
        }
    }
    ctx->pc = 0x21D19Cu;
    // 0x21d19c: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x21D19Cu;
    {
        const bool branch_taken_0x21d19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D1A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D19Cu;
            // 0x21d1a0: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d19c) {
            ctx->pc = 0x21D3C0u;
            goto label_21d3c0;
        }
    }
    ctx->pc = 0x21D1A4u;
label_21d1a4:
    // 0x21d1a4: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x21d1a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
    // 0x21d1a8: 0x8e02e564  lw          $v0, -0x1A9C($s0)
    ctx->pc = 0x21d1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960484)));
    // 0x21d1ac: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21D1ACu;
    {
        const bool branch_taken_0x21d1ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D1B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D1ACu;
            // 0x21d1b0: 0x3c12002a  lui         $s2, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d1ac) {
            ctx->pc = 0x21D1C4u;
            goto label_21d1c4;
        }
    }
    ctx->pc = 0x21D1B4u;
    // 0x21d1b4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21d1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21d1b8: 0x8c42e568  lw          $v0, -0x1A98($v0)
    ctx->pc = 0x21d1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960488)));
    // 0x21d1bc: 0x1040007f  beqz        $v0, . + 4 + (0x7F << 2)
    ctx->pc = 0x21D1BCu;
    {
        const bool branch_taken_0x21d1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D1C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D1BCu;
            // 0x21d1c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d1bc) {
            ctx->pc = 0x21D3BCu;
            goto label_21d3bc;
        }
    }
    ctx->pc = 0x21D1C4u;
label_21d1c4:
    // 0x21d1c4: 0x2623fffc  addiu       $v1, $s1, -0x4
    ctx->pc = 0x21d1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x21d1c8: 0x8e42e5f8  lw          $v0, -0x1A08($s2)
    ctx->pc = 0x21d1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960632)));
    // 0x21d1cc: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x21d1ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x21d1d0: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x21D1D0u;
    {
        const bool branch_taken_0x21d1d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D1D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D1D0u;
            // 0x21d1d4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d1d0) {
            ctx->pc = 0x21D3B8u;
            goto label_21d3b8;
        }
    }
    ctx->pc = 0x21D1D8u;
    // 0x21d1d8: 0x8c42cb94  lw          $v0, -0x346C($v0)
    ctx->pc = 0x21d1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x21d1dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21d1dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d1e0: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x21D1E0u;
    SET_GPR_U32(ctx, 31, 0x21D1E8u);
    ctx->pc = 0x21D1E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D1E0u;
            // 0x21d1e4: 0xac40026c  sw          $zero, 0x26C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 620), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D1E8u; }
        if (ctx->pc != 0x21D1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D1E8u; }
        if (ctx->pc != 0x21D1E8u) { return; }
    }
    ctx->pc = 0x21D1E8u;
    // 0x21d1e8: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x21d1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x21d1ec: 0x8c82e56c  lw          $v0, -0x1A94($a0)
    ctx->pc = 0x21d1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960492)));
    // 0x21d1f0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x21D1F0u;
    {
        const bool branch_taken_0x21d1f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D1F0u;
            // 0x21d1f4: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d1f0) {
            ctx->pc = 0x21D21Cu;
            goto label_21d21c;
        }
    }
    ctx->pc = 0x21D1F8u;
    // 0x21d1f8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21d1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21d1fc: 0x8c42e570  lw          $v0, -0x1A90($v0)
    ctx->pc = 0x21d1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960496)));
    // 0x21d200: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21D200u;
    {
        const bool branch_taken_0x21d200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D200u;
            // 0x21d204: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d200) {
            ctx->pc = 0x21D21Cu;
            goto label_21d21c;
        }
    }
    ctx->pc = 0x21D208u;
    // 0x21d208: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21d208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21d20c: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x21d20cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x21d210: 0x8c42e5f4  lw          $v0, -0x1A0C($v0)
    ctx->pc = 0x21d210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960628)));
    // 0x21d214: 0xac62f1f0  sw          $v0, -0xE10($v1)
    ctx->pc = 0x21d214u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963696), GPR_U32(ctx, 2));
    // 0x21d218: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21d218u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_21d21c:
    // 0x21d21c: 0x8c83e56c  lw          $v1, -0x1A94($a0)
    ctx->pc = 0x21d21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960492)));
    // 0x21d220: 0xae00e564  sw          $zero, -0x1A9C($s0)
    ctx->pc = 0x21d220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294960484), GPR_U32(ctx, 0));
    // 0x21d224: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x21D224u;
    {
        const bool branch_taken_0x21d224 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D224u;
            // 0x21d228: 0xac40e568  sw          $zero, -0x1A98($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294960488), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d224) {
            ctx->pc = 0x21D250u;
            goto label_21d250;
        }
    }
    ctx->pc = 0x21D22Cu;
    // 0x21d22c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21d22cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21d230: 0x8c42e570  lw          $v0, -0x1A90($v0)
    ctx->pc = 0x21d230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960496)));
    // 0x21d234: 0x54400060  bnel        $v0, $zero, . + 4 + (0x60 << 2)
    ctx->pc = 0x21D234u;
    {
        const bool branch_taken_0x21d234 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21d234) {
            ctx->pc = 0x21D238u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21D234u;
            // 0x21d238: 0xae51e5f8  sw          $s1, -0x1A08($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294960632), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21D3B8u;
            goto label_21d3b8;
        }
    }
    ctx->pc = 0x21D23Cu;
    // 0x21d23c: 0xc08757e  jal         func_21D5F8
    ctx->pc = 0x21D23Cu;
    SET_GPR_U32(ctx, 31, 0x21D244u);
    ctx->pc = 0x21D240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D23Cu;
            // 0x21d240: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D5F8u;
    if (runtime->hasFunction(0x21D5F8u)) {
        auto targetFn = runtime->lookupFunction(0x21D5F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D244u; }
        if (ctx->pc != 0x21D244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021D5F8_0x21d5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D244u; }
        if (ctx->pc != 0x21D244u) { return; }
    }
    ctx->pc = 0x21D244u;
    // 0x21d244: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x21d244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x21d248: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21d248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21d24c: 0xac62e5f0  sw          $v0, -0x1A10($v1)
    ctx->pc = 0x21d24cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960624), GPR_U32(ctx, 2));
label_21d250:
    // 0x21d250: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x21D250u;
    {
        const bool branch_taken_0x21d250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D250u;
            // 0x21d254: 0xae51e5f8  sw          $s1, -0x1A08($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294960632), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d250) {
            ctx->pc = 0x21D3B8u;
            goto label_21d3b8;
        }
    }
    ctx->pc = 0x21D258u;
label_21d258:
    // 0x21d258: 0x3c13002a  lui         $s3, 0x2A
    ctx->pc = 0x21d258u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)42 << 16));
    // 0x21d25c: 0x8e62e564  lw          $v0, -0x1A9C($s3)
    ctx->pc = 0x21d25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294960484)));
    // 0x21d260: 0x14400056  bnez        $v0, . + 4 + (0x56 << 2)
    ctx->pc = 0x21D260u;
    {
        const bool branch_taken_0x21d260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D260u;
            // 0x21d264: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d260) {
            ctx->pc = 0x21D3BCu;
            goto label_21d3bc;
        }
    }
    ctx->pc = 0x21D268u;
    // 0x21d268: 0x3c12002a  lui         $s2, 0x2A
    ctx->pc = 0x21d268u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)42 << 16));
    // 0x21d26c: 0x2623fffc  addiu       $v1, $s1, -0x4
    ctx->pc = 0x21d26cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x21d270: 0x8e42e5f8  lw          $v0, -0x1A08($s2)
    ctx->pc = 0x21d270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294960632)));
    // 0x21d274: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x21d274u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x21d278: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x21D278u;
    {
        const bool branch_taken_0x21d278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D27Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D278u;
            // 0x21d27c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d278) {
            ctx->pc = 0x21D3B0u;
            goto label_21d3b0;
        }
    }
    ctx->pc = 0x21D280u;
    // 0x21d280: 0xc08757e  jal         func_21D5F8
    ctx->pc = 0x21D280u;
    SET_GPR_U32(ctx, 31, 0x21D288u);
    ctx->pc = 0x21D284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D280u;
            // 0x21d284: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D5F8u;
    if (runtime->hasFunction(0x21D5F8u)) {
        auto targetFn = runtime->lookupFunction(0x21D5F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D288u; }
        if (ctx->pc != 0x21D288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021D5F8_0x21d5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D288u; }
        if (ctx->pc != 0x21D288u) { return; }
    }
    ctx->pc = 0x21D288u;
    // 0x21d288: 0x8e02cb94  lw          $v0, -0x346C($s0)
    ctx->pc = 0x21d288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953876)));
    // 0x21d28c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21d28cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21d290: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21d290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d294: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x21D294u;
    SET_GPR_U32(ctx, 31, 0x21D29Cu);
    ctx->pc = 0x21D298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D294u;
            // 0x21d298: 0xac43026c  sw          $v1, 0x26C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 620), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D29Cu; }
        if (ctx->pc != 0x21D29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D29Cu; }
        if (ctx->pc != 0x21D29Cu) { return; }
    }
    ctx->pc = 0x21D29Cu;
    // 0x21d29c: 0x8e04cb94  lw          $a0, -0x346C($s0)
    ctx->pc = 0x21d29cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953876)));
    // 0x21d2a0: 0xc06e642  jal         func_1B9908
    ctx->pc = 0x21D2A0u;
    SET_GPR_U32(ctx, 31, 0x21D2A8u);
    ctx->pc = 0x21D2A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D2A0u;
            // 0x21d2a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9908u;
    if (runtime->hasFunction(0x1B9908u)) {
        auto targetFn = runtime->lookupFunction(0x1B9908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D2A8u; }
        if (ctx->pc != 0x21D2A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9908_0x1b9908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D2A8u; }
        if (ctx->pc != 0x21D2A8u) { return; }
    }
    ctx->pc = 0x21D2A8u;
    // 0x21d2a8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21d2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21d2ac: 0x8c42e56c  lw          $v0, -0x1A94($v0)
    ctx->pc = 0x21d2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960492)));
    // 0x21d2b0: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x21D2B0u;
    {
        const bool branch_taken_0x21d2b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D2B0u;
            // 0x21d2b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d2b0) {
            ctx->pc = 0x21D2F0u;
            goto label_21d2f0;
        }
    }
    ctx->pc = 0x21D2B8u;
    // 0x21d2b8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21d2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21d2bc: 0x8c42e570  lw          $v0, -0x1A90($v0)
    ctx->pc = 0x21d2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960496)));
    // 0x21d2c0: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x21D2C0u;
    {
        const bool branch_taken_0x21d2c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D2C0u;
            // 0x21d2c4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d2c0) {
            ctx->pc = 0x21D2F0u;
            goto label_21d2f0;
        }
    }
    ctx->pc = 0x21D2C8u;
    // 0x21d2c8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21d2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21d2cc: 0x8c42e568  lw          $v0, -0x1A98($v0)
    ctx->pc = 0x21d2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960488)));
    // 0x21d2d0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x21D2D0u;
    {
        const bool branch_taken_0x21d2d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D2D0u;
            // 0x21d2d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d2d0) {
            ctx->pc = 0x21D2F0u;
            goto label_21d2f0;
        }
    }
    ctx->pc = 0x21D2D8u;
    // 0x21d2d8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x21d2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x21d2dc: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x21d2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x21d2e0: 0x8c43f1f0  lw          $v1, -0xE10($v0)
    ctx->pc = 0x21d2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963696)));
    // 0x21d2e4: 0xac40f1f0  sw          $zero, -0xE10($v0)
    ctx->pc = 0x21d2e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294963696), GPR_U32(ctx, 0));
    // 0x21d2e8: 0xac83e5f4  sw          $v1, -0x1A0C($a0)
    ctx->pc = 0x21d2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294960628), GPR_U32(ctx, 3));
    // 0x21d2ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21d2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21d2f0:
    // 0x21d2f0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x21d2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x21d2f4: 0xae62e564  sw          $v0, -0x1A9C($s3)
    ctx->pc = 0x21d2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294960484), GPR_U32(ctx, 2));
    // 0x21d2f8: 0xac60e568  sw          $zero, -0x1A98($v1)
    ctx->pc = 0x21d2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960488), GPR_U32(ctx, 0));
    // 0x21d2fc: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x21D2FCu;
    {
        const bool branch_taken_0x21d2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D2FCu;
            // 0x21d300: 0xae51e5f8  sw          $s1, -0x1A08($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294960632), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d2fc) {
            ctx->pc = 0x21D3B0u;
            goto label_21d3b0;
        }
    }
    ctx->pc = 0x21D304u;
    // 0x21d304: 0x0  nop
    ctx->pc = 0x21d304u;
    // NOP
label_21d308:
    // 0x21d308: 0x3c14002a  lui         $s4, 0x2A
    ctx->pc = 0x21d308u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)42 << 16));
    // 0x21d30c: 0x8e82e568  lw          $v0, -0x1A98($s4)
    ctx->pc = 0x21d30cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294960488)));
    // 0x21d310: 0x1440002a  bnez        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x21D310u;
    {
        const bool branch_taken_0x21d310 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D310u;
            // 0x21d314: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d310) {
            ctx->pc = 0x21D3BCu;
            goto label_21d3bc;
        }
    }
    ctx->pc = 0x21D318u;
    // 0x21d318: 0x3c13002a  lui         $s3, 0x2A
    ctx->pc = 0x21d318u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)42 << 16));
    // 0x21d31c: 0x2623fffc  addiu       $v1, $s1, -0x4
    ctx->pc = 0x21d31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
    // 0x21d320: 0x8e62e5f8  lw          $v0, -0x1A08($s3)
    ctx->pc = 0x21d320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294960632)));
    // 0x21d324: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x21d324u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x21d328: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x21D328u;
    {
        const bool branch_taken_0x21d328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D328u;
            // 0x21d32c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d328) {
            ctx->pc = 0x21D3B0u;
            goto label_21d3b0;
        }
    }
    ctx->pc = 0x21D330u;
    // 0x21d330: 0xc08757e  jal         func_21D5F8
    ctx->pc = 0x21D330u;
    SET_GPR_U32(ctx, 31, 0x21D338u);
    ctx->pc = 0x21D334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D330u;
            // 0x21d334: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D5F8u;
    if (runtime->hasFunction(0x21D5F8u)) {
        auto targetFn = runtime->lookupFunction(0x21D5F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D338u; }
        if (ctx->pc != 0x21D338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021D5F8_0x21d5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D338u; }
        if (ctx->pc != 0x21D338u) { return; }
    }
    ctx->pc = 0x21D338u;
    // 0x21d338: 0x8e02cb94  lw          $v0, -0x346C($s0)
    ctx->pc = 0x21d338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953876)));
    // 0x21d33c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21d33cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d340: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x21D340u;
    SET_GPR_U32(ctx, 31, 0x21D348u);
    ctx->pc = 0x21D344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D340u;
            // 0x21d344: 0xac52026c  sw          $s2, 0x26C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 620), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D348u; }
        if (ctx->pc != 0x21D348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D348u; }
        if (ctx->pc != 0x21D348u) { return; }
    }
    ctx->pc = 0x21D348u;
    // 0x21d348: 0x8e04cb94  lw          $a0, -0x346C($s0)
    ctx->pc = 0x21d348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953876)));
    // 0x21d34c: 0xc06e642  jal         func_1B9908
    ctx->pc = 0x21D34Cu;
    SET_GPR_U32(ctx, 31, 0x21D354u);
    ctx->pc = 0x21D350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D34Cu;
            // 0x21d350: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9908u;
    if (runtime->hasFunction(0x1B9908u)) {
        auto targetFn = runtime->lookupFunction(0x1B9908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D354u; }
        if (ctx->pc != 0x21D354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9908_0x1b9908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D354u; }
        if (ctx->pc != 0x21D354u) { return; }
    }
    ctx->pc = 0x21D354u;
    // 0x21d354: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21d354u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21d358: 0x8c42e56c  lw          $v0, -0x1A94($v0)
    ctx->pc = 0x21d358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960492)));
    // 0x21d35c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x21D35Cu;
    {
        const bool branch_taken_0x21d35c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D35Cu;
            // 0x21d360: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d35c) {
            ctx->pc = 0x21D39Cu;
            goto label_21d39c;
        }
    }
    ctx->pc = 0x21D364u;
    // 0x21d364: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21d364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21d368: 0x8c42e570  lw          $v0, -0x1A90($v0)
    ctx->pc = 0x21d368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960496)));
    // 0x21d36c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x21D36Cu;
    {
        const bool branch_taken_0x21d36c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D36Cu;
            // 0x21d370: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d36c) {
            ctx->pc = 0x21D3A0u;
            goto label_21d3a0;
        }
    }
    ctx->pc = 0x21D374u;
    // 0x21d374: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21d374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21d378: 0x8c42e564  lw          $v0, -0x1A9C($v0)
    ctx->pc = 0x21d378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960484)));
    // 0x21d37c: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x21D37Cu;
    {
        const bool branch_taken_0x21d37c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21d37c) {
            ctx->pc = 0x21D380u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21D37Cu;
            // 0x21d380: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21D3A0u;
            goto label_21d3a0;
        }
    }
    ctx->pc = 0x21D384u;
    // 0x21d384: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x21d384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x21d388: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x21d388u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x21d38c: 0x8c43f1f0  lw          $v1, -0xE10($v0)
    ctx->pc = 0x21d38cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963696)));
    // 0x21d390: 0xac40f1f0  sw          $zero, -0xE10($v0)
    ctx->pc = 0x21d390u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294963696), GPR_U32(ctx, 0));
    // 0x21d394: 0xac83e5f4  sw          $v1, -0x1A0C($a0)
    ctx->pc = 0x21d394u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294960628), GPR_U32(ctx, 3));
    // 0x21d398: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x21d398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
label_21d39c:
    // 0x21d39c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21d39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21d3a0:
    // 0x21d3a0: 0xae82e568  sw          $v0, -0x1A98($s4)
    ctx->pc = 0x21d3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294960488), GPR_U32(ctx, 2));
    // 0x21d3a4: 0xac60e564  sw          $zero, -0x1A9C($v1)
    ctx->pc = 0x21d3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960484), GPR_U32(ctx, 0));
    // 0x21d3a8: 0xae71e5f8  sw          $s1, -0x1A08($s3)
    ctx->pc = 0x21d3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294960632), GPR_U32(ctx, 17));
    // 0x21d3ac: 0x0  nop
    ctx->pc = 0x21d3acu;
    // NOP
label_21d3b0:
    // 0x21d3b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21D3B0u;
    {
        const bool branch_taken_0x21d3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D3B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D3B0u;
            // 0x21d3b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d3b0) {
            ctx->pc = 0x21D3BCu;
            goto label_21d3bc;
        }
    }
    ctx->pc = 0x21D3B8u;
label_21d3b8:
    // 0x21d3b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21d3b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d3bc:
    // 0x21d3bc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x21d3bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_21d3c0:
    // 0x21d3c0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x21d3c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21d3c4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x21d3c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21d3c8: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x21d3c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21d3cc: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x21d3ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d3d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21d3d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d3d4: 0x3e00008  jr          $ra
    ctx->pc = 0x21D3D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D3D4u;
            // 0x21d3d8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21D150u: goto label_21d150;
            case 0x21D15Cu: goto label_21d15c;
            case 0x21D194u: goto label_21d194;
            case 0x21D1A4u: goto label_21d1a4;
            case 0x21D1C4u: goto label_21d1c4;
            case 0x21D21Cu: goto label_21d21c;
            case 0x21D250u: goto label_21d250;
            case 0x21D258u: goto label_21d258;
            case 0x21D2F0u: goto label_21d2f0;
            case 0x21D308u: goto label_21d308;
            case 0x21D39Cu: goto label_21d39c;
            case 0x21D3A0u: goto label_21d3a0;
            case 0x21D3B0u: goto label_21d3b0;
            case 0x21D3B8u: goto label_21d3b8;
            case 0x21D3BCu: goto label_21d3bc;
            case 0x21D3C0u: goto label_21d3c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21D3DCu;
    // 0x21d3dc: 0x0  nop
    ctx->pc = 0x21d3dcu;
    // NOP
}
