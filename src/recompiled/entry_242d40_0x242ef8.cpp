#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_242d40
// Address: 0x242d40 - 0x242ef8
void entry_242d40_0x242ef8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_242d40_0x242ef8");
#endif

    ctx->pc = 0x242d40u;

    // 0x242d40: 0x8c8302d8  lw          $v1, 0x2D8($a0)
    ctx->pc = 0x242d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 728)));
    // 0x242d44: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x242d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x242d48: 0x3e00008  jr          $ra
    ctx->pc = 0x242D48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242D48u;
            // 0x242d4c: 0x621024  and         $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242E68u: goto label_242e68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242D50u;
    // 0x242d50: 0x0  nop
    ctx->pc = 0x242d50u;
    // NOP
    // 0x242d54: 0x0  nop
    ctx->pc = 0x242d54u;
    // NOP
    // 0x242d58: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x242d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x242d5c: 0x0  nop
    ctx->pc = 0x242d5cu;
    // NOP
    // 0x242d60: 0xac8202d8  sw          $v0, 0x2D8($a0)
    ctx->pc = 0x242d60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 728), GPR_U32(ctx, 2));
    // 0x242d64: 0x0  nop
    ctx->pc = 0x242d64u;
    // NOP
    // 0x242d68: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x242d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x242d6c: 0x0  nop
    ctx->pc = 0x242d6cu;
    // NOP
    // 0x242d70: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x242d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x242d74: 0x0  nop
    ctx->pc = 0x242d74u;
    // NOP
    // 0x242d78: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x242d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x242d7c: 0x0  nop
    ctx->pc = 0x242d7cu;
    // NOP
    // 0x242d80: 0xac8202d8  sw          $v0, 0x2D8($a0)
    ctx->pc = 0x242d80u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 728), GPR_U32(ctx, 2));
    // 0x242d84: 0x0  nop
    ctx->pc = 0x242d84u;
    // NOP
    // 0x242d88: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x242d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x242d8c: 0x0  nop
    ctx->pc = 0x242d8cu;
    // NOP
    // 0x242d90: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x242d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x242d94: 0x0  nop
    ctx->pc = 0x242d94u;
    // NOP
    // 0x242d98: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x242d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x242d9c: 0x0  nop
    ctx->pc = 0x242d9cu;
    // NOP
    // 0x242da0: 0xac8202d8  sw          $v0, 0x2D8($a0)
    ctx->pc = 0x242da0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 728), GPR_U32(ctx, 2));
    // 0x242da4: 0x0  nop
    ctx->pc = 0x242da4u;
    // NOP
    // 0x242da8: 0xac8202d8  sw          $v0, 0x2D8($a0)
    ctx->pc = 0x242da8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 728), GPR_U32(ctx, 2));
    // 0x242dac: 0x0  nop
    ctx->pc = 0x242dacu;
    // NOP
    // 0x242db0: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x242db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x242db4: 0x0  nop
    ctx->pc = 0x242db4u;
    // NOP
    // 0x242db8: 0xe48002a4  swc1        $f0, 0x2A4($a0)
    ctx->pc = 0x242db8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 676), bits); }
    // 0x242dbc: 0x0  nop
    ctx->pc = 0x242dbcu;
    // NOP
    // 0x242dc0: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x242dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x242dc4: 0x0  nop
    ctx->pc = 0x242dc4u;
    // NOP
    // 0x242dc8: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x242dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x242dcc: 0x0  nop
    ctx->pc = 0x242dccu;
    // NOP
    // 0x242dd0: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x242dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x242dd4: 0x0  nop
    ctx->pc = 0x242dd4u;
    // NOP
    // 0x242dd8: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x242dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x242ddc: 0x0  nop
    ctx->pc = 0x242ddcu;
    // NOP
    // 0x242de0: 0xac8202d8  sw          $v0, 0x2D8($a0)
    ctx->pc = 0x242de0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 728), GPR_U32(ctx, 2));
    // 0x242de4: 0x0  nop
    ctx->pc = 0x242de4u;
    // NOP
    // 0x242de8: 0xac8202d8  sw          $v0, 0x2D8($a0)
    ctx->pc = 0x242de8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 728), GPR_U32(ctx, 2));
    // 0x242dec: 0x0  nop
    ctx->pc = 0x242decu;
    // NOP
    // 0x242df0: 0xac8202d8  sw          $v0, 0x2D8($a0)
    ctx->pc = 0x242df0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 728), GPR_U32(ctx, 2));
    // 0x242df4: 0x0  nop
    ctx->pc = 0x242df4u;
    // NOP
    // 0x242df8: 0xac8202d8  sw          $v0, 0x2D8($a0)
    ctx->pc = 0x242df8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 728), GPR_U32(ctx, 2));
    // 0x242dfc: 0x0  nop
    ctx->pc = 0x242dfcu;
    // NOP
    // 0x242e00: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x242e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x242e04: 0x0  nop
    ctx->pc = 0x242e04u;
    // NOP
    // 0x242e08: 0xac8202d8  sw          $v0, 0x2D8($a0)
    ctx->pc = 0x242e08u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 728), GPR_U32(ctx, 2));
    // 0x242e0c: 0x0  nop
    ctx->pc = 0x242e0cu;
    // NOP
    // 0x242e10: 0xac8202d8  sw          $v0, 0x2D8($a0)
    ctx->pc = 0x242e10u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 728), GPR_U32(ctx, 2));
    // 0x242e14: 0x0  nop
    ctx->pc = 0x242e14u;
    // NOP
    // 0x242e18: 0xac8202d8  sw          $v0, 0x2D8($a0)
    ctx->pc = 0x242e18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 728), GPR_U32(ctx, 2));
    // 0x242e1c: 0x0  nop
    ctx->pc = 0x242e1cu;
    // NOP
    // 0x242e20: 0xac8202d8  sw          $v0, 0x2D8($a0)
    ctx->pc = 0x242e20u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 728), GPR_U32(ctx, 2));
    // 0x242e24: 0x0  nop
    ctx->pc = 0x242e24u;
    // NOP
    // 0x242e28: 0xac8202d8  sw          $v0, 0x2D8($a0)
    ctx->pc = 0x242e28u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 728), GPR_U32(ctx, 2));
    // 0x242e2c: 0x0  nop
    ctx->pc = 0x242e2cu;
    // NOP
    // 0x242e30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x242e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x242e34: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x242e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x242e38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x242e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x242e3c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x242e3cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242e40: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x242e40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242e44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x242e44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x242e48: 0xc05ee16  jal         func_17B858
    ctx->pc = 0x242E48u;
    SET_GPR_U32(ctx, 31, 0x242E50u);
    ctx->pc = 0x242E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242E48u;
            // 0x242e4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17B858u;
    if (runtime->hasFunction(0x17B858u)) {
        auto targetFn = runtime->lookupFunction(0x17B858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242E50u; }
        if (ctx->pc != 0x242E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017B858_0x17b858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242E50u; }
        if (ctx->pc != 0x242E50u) { return; }
    }
    ctx->pc = 0x242E50u;
    // 0x242e50: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x242e50u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x242e54: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x242E54u;
    {
        const bool branch_taken_0x242e54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x242E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242E54u;
            // 0x242e58: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242e54) {
            ctx->pc = 0x242E68u;
            goto label_242e68;
        }
    }
    ctx->pc = 0x242E5Cu;
    // 0x242e5c: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x242E5Cu;
    SET_GPR_U32(ctx, 31, 0x242E64u);
    ctx->pc = 0x242E60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242E5Cu;
            // 0x242e60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242E64u; }
        if (ctx->pc != 0x242E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242E64u; }
        if (ctx->pc != 0x242E64u) { return; }
    }
    ctx->pc = 0x242E64u;
    // 0x242e64: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x242e64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_242e68:
    // 0x242e68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x242e68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x242e6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x242e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x242e70: 0x3e00008  jr          $ra
    ctx->pc = 0x242E70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242E70u;
            // 0x242e74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x242E68u: goto label_242e68;
            default: break;
        }
        return;
    }
    ctx->pc = 0x242E78u;
    // 0x242e78: 0x7c8500a0  sq          $a1, 0xA0($a0)
    ctx->pc = 0x242e78u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 160), GPR_VEC(ctx, 5));
    // 0x242e7c: 0x0  nop
    ctx->pc = 0x242e7cu;
    // NOP
    // 0x242e80: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x242e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x242e84: 0x0  nop
    ctx->pc = 0x242e84u;
    // NOP
    // 0x242e88: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x242e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x242e8c: 0x0  nop
    ctx->pc = 0x242e8cu;
    // NOP
    // 0x242e90: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x242e90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x242e94: 0x0  nop
    ctx->pc = 0x242e94u;
    // NOP
    // 0x242e98: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x242e98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x242e9c: 0x0  nop
    ctx->pc = 0x242e9cu;
    // NOP
    // 0x242ea0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x242ea0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x242ea4: 0x0  nop
    ctx->pc = 0x242ea4u;
    // NOP
    // 0x242ea8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x242ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x242eac: 0x0  nop
    ctx->pc = 0x242eacu;
    // NOP
    // 0x242eb0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x242eb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x242eb4: 0x0  nop
    ctx->pc = 0x242eb4u;
    // NOP
    // 0x242eb8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x242eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x242ebc: 0x0  nop
    ctx->pc = 0x242ebcu;
    // NOP
    // 0x242ec0: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x242ec0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x242ec4: 0x0  nop
    ctx->pc = 0x242ec4u;
    // NOP
    // 0x242ec8: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x242ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
    // 0x242ecc: 0x0  nop
    ctx->pc = 0x242eccu;
    // NOP
    // 0x242ed0: 0x0  nop
    ctx->pc = 0x242ed0u;
    // NOP
    // 0x242ed4: 0x0  nop
    ctx->pc = 0x242ed4u;
    // NOP
    // 0x242ed8: 0x0  nop
    ctx->pc = 0x242ed8u;
    // NOP
    // 0x242edc: 0x0  nop
    ctx->pc = 0x242edcu;
    // NOP
    // 0x242ee0: 0x0  nop
    ctx->pc = 0x242ee0u;
    // NOP
    // 0x242ee4: 0x0  nop
    ctx->pc = 0x242ee4u;
    // NOP
    // 0x242ee8: 0x90422846  lbu         $v0, 0x2846($v0)
    ctx->pc = 0x242ee8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10310)));
    // 0x242eec: 0x0  nop
    ctx->pc = 0x242eecu;
    // NOP
    // 0x242ef0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x242ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x242ef4: 0x0  nop
    ctx->pc = 0x242ef4u;
    // NOP
}
