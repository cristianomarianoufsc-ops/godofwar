#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017A0E0
// Address: 0x17a0e0 - 0x17a1d0
void sub_0017A0E0_0x17a0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A0E0_0x17a0e0");
#endif

    ctx->pc = 0x17a0e0u;

    // 0x17a0e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x17a0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x17a0e4: 0x2404fffb  addiu       $a0, $zero, -0x5
    ctx->pc = 0x17a0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x17a0e8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17a0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x17a0ec: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x17a0ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x17a0f0: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x17a0f0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x17a0f4: 0x8c634f50  lw          $v1, 0x4F50($v1)
    ctx->pc = 0x17a0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20304)));
    // 0x17a0f8: 0x8e02f1b4  lw          $v0, -0xE4C($s0)
    ctx->pc = 0x17a0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963636)));
    // 0x17a0fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17a0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17a100: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x17a100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x17a104: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x17A104u;
    {
        const bool branch_taken_0x17a104 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A104u;
            // 0x17a108: 0xae02f1b4  sw          $v0, -0xE4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294963636), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a104) {
            ctx->pc = 0x17A114u;
            goto label_17a114;
        }
    }
    ctx->pc = 0x17A10Cu;
    // 0x17a10c: 0xc050252  jal         func_140948
    ctx->pc = 0x17A10Cu;
    SET_GPR_U32(ctx, 31, 0x17A114u);
    ctx->pc = 0x140948u;
    if (runtime->hasFunction(0x140948u)) {
        auto targetFn = runtime->lookupFunction(0x140948u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A114u; }
        if (ctx->pc != 0x17A114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140948_0x140948(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A114u; }
        if (ctx->pc != 0x17A114u) { return; }
    }
    ctx->pc = 0x17A114u;
label_17a114:
    // 0x17a114: 0x8e02f1b4  lw          $v0, -0xE4C($s0)
    ctx->pc = 0x17a114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963636)));
    // 0x17a118: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x17a118u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x17a11c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x17a11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17a120: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x17a120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x17a124: 0xac83c7d0  sw          $v1, -0x3830($a0)
    ctx->pc = 0x17a124u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294952912), GPR_U32(ctx, 3));
    // 0x17a128: 0xc060dee  jal         func_1837B8
    ctx->pc = 0x17A128u;
    SET_GPR_U32(ctx, 31, 0x17A130u);
    ctx->pc = 0x17A12Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17A128u;
            // 0x17a12c: 0xae02f1b4  sw          $v0, -0xE4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294963636), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1837B8u;
    if (runtime->hasFunction(0x1837B8u)) {
        auto targetFn = runtime->lookupFunction(0x1837B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A130u; }
        if (ctx->pc != 0x17A130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001837B8_0x1837b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A130u; }
        if (ctx->pc != 0x17A130u) { return; }
    }
    ctx->pc = 0x17A130u;
    // 0x17a130: 0x8e03f1b4  lw          $v1, -0xE4C($s0)
    ctx->pc = 0x17a130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963636)));
    // 0x17a134: 0x2404fff7  addiu       $a0, $zero, -0x9
    ctx->pc = 0x17a134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x17a138: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x17a138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x17a13c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x17a13cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x17a140: 0x8c42c4d4  lw          $v0, -0x3B2C($v0)
    ctx->pc = 0x17a140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952148)));
    // 0x17a144: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17A144u;
    {
        const bool branch_taken_0x17a144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A144u;
            // 0x17a148: 0xae03f1b4  sw          $v1, -0xE4C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294963636), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a144) {
            ctx->pc = 0x17A154u;
            goto label_17a154;
        }
    }
    ctx->pc = 0x17A14Cu;
    // 0x17a14c: 0x40f809  jalr        $v0
    ctx->pc = 0x17A14Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17A154u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x17A154u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A114u: goto label_17a114;
            case 0x17A154u: goto label_17a154;
            case 0x17A188u: goto label_17a188;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17A154u; }
            if (ctx->pc != 0x17A154u) { return; }
        }
        }
    }
    ctx->pc = 0x17A154u;
label_17a154:
    // 0x17a154: 0xc0500f2  jal         func_1403C8
    ctx->pc = 0x17A154u;
    SET_GPR_U32(ctx, 31, 0x17A15Cu);
    ctx->pc = 0x1403C8u;
    if (runtime->hasFunction(0x1403C8u)) {
        auto targetFn = runtime->lookupFunction(0x1403C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A15Cu; }
        if (ctx->pc != 0x17A15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001403C8_0x1403c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17A15Cu; }
        if (ctx->pc != 0x17A15Cu) { return; }
    }
    ctx->pc = 0x17A15Cu;
    // 0x17a15c: 0x3c07002c  lui         $a3, 0x2C
    ctx->pc = 0x17a15cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)44 << 16));
    // 0x17a160: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x17a160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x17a164: 0x8ce27908  lw          $v0, 0x7908($a3)
    ctx->pc = 0x17a164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 30984)));
    // 0x17a168: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x17a168u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17a16c: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x17a16cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x17a170: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17A170u;
    {
        const bool branch_taken_0x17a170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17A174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A170u;
            // 0x17a174: 0x3c040030  lui         $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17a170) {
            ctx->pc = 0x17A188u;
            goto label_17a188;
        }
    }
    ctx->pc = 0x17A178u;
    // 0x17a178: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x17a178u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x17a17c: 0xdc823628  ld          $v0, 0x3628($a0)
    ctx->pc = 0x17a17cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 13864)));
    // 0x17a180: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x17a180u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x17a184: 0xfc823628  sd          $v0, 0x3628($a0)
    ctx->pc = 0x17a184u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 13864), GPR_U64(ctx, 2));
label_17a188:
    // 0x17a188: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x17a188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x17a18c: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x17a18cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x17a190: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x17a190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x17a194: 0xdc633628  ld          $v1, 0x3628($v1)
    ctx->pc = 0x17a194u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 13864)));
    // 0x17a198: 0x8ca4c7dc  lw          $a0, -0x3824($a1)
    ctx->pc = 0x17a198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294952924)));
    // 0x17a19c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x17a19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x17a1a0: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x17a1a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
    // 0x17a1a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17a1a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a1a8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x17a1a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x17a1ac: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x17a1acu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x17a1b0: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x17a1b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x17a1b4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x17a1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x17a1b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17a1b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a1bc: 0xace67908  sw          $a2, 0x7908($a3)
    ctx->pc = 0x17a1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 30984), GPR_U32(ctx, 6));
    // 0x17a1c0: 0xac434f54  sw          $v1, 0x4F54($v0)
    ctx->pc = 0x17a1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20308), GPR_U32(ctx, 3));
    // 0x17a1c4: 0xaca4c7dc  sw          $a0, -0x3824($a1)
    ctx->pc = 0x17a1c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294952924), GPR_U32(ctx, 4));
    // 0x17a1c8: 0x3e00008  jr          $ra
    ctx->pc = 0x17A1C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17A1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17A1C8u;
            // 0x17a1cc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17A114u: goto label_17a114;
            case 0x17A154u: goto label_17a154;
            case 0x17A188u: goto label_17a188;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17A1D0u;
}
