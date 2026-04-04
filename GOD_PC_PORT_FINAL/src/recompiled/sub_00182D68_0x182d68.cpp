#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00182D68
// Address: 0x182d68 - 0x182e88
void sub_00182D68_0x182d68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182D68_0x182d68");
#endif

    ctx->pc = 0x182d68u;

    // 0x182d68: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x182d68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x182d6c: 0x3c0555b0  lui         $a1, 0x55B0
    ctx->pc = 0x182d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)21936 << 16));
    // 0x182d70: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x182d70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x182d74: 0x34a50cf6  ori         $a1, $a1, 0xCF6
    ctx->pc = 0x182d74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3318);
    // 0x182d78: 0x3c10002c  lui         $s0, 0x2C
    ctx->pc = 0x182d78u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)44 << 16));
    // 0x182d7c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x182d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x182d80: 0x2610ead8  addiu       $s0, $s0, -0x1528
    ctx->pc = 0x182d80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961880));
    // 0x182d84: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x182d84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x182d88: 0xafb00014  sw          $s0, 0x14($sp)
    ctx->pc = 0x182d88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 16));
    // 0x182d8c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x182d8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x182d90: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x182d90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x182d94: 0x37a70004  ori         $a3, $sp, 0x4
    ctx->pc = 0x182d94u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x182d98: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x182d98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x182d9c: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x182d9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x182da0: 0xc06085e  jal         func_182178
    ctx->pc = 0x182DA0u;
    SET_GPR_U32(ctx, 31, 0x182DA8u);
    ctx->pc = 0x182DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182DA0u;
            // 0x182da4: 0xa7a00010  sh          $zero, 0x10($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 16), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182178u;
    if (runtime->hasFunction(0x182178u)) {
        auto targetFn = runtime->lookupFunction(0x182178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182DA8u; }
        if (ctx->pc != 0x182DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182178_0x182178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182DA8u; }
        if (ctx->pc != 0x182DA8u) { return; }
    }
    ctx->pc = 0x182DA8u;
    // 0x182da8: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x182da8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x182dac: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x182DACu;
    {
        const bool branch_taken_0x182dac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x182DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182DACu;
            // 0x182db0: 0xafb00014  sw          $s0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182dac) {
            ctx->pc = 0x182DBCu;
            goto label_182dbc;
        }
    }
    ctx->pc = 0x182DB4u;
    // 0x182db4: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x182DB4u;
    SET_GPR_U32(ctx, 31, 0x182DBCu);
    ctx->pc = 0x182DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x182DB4u;
            // 0x182db8: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182DBCu; }
        if (ctx->pc != 0x182DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x182DBCu; }
        if (ctx->pc != 0x182DBCu) { return; }
    }
    ctx->pc = 0x182DBCu;
label_182dbc:
    // 0x182dbc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x182dbcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x182dc0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x182dc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x182dc4: 0x3e00008  jr          $ra
    ctx->pc = 0x182DC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182DC4u;
            // 0x182dc8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x182DBCu: goto label_182dbc;
            case 0x182E34u: goto label_182e34;
            case 0x182E68u: goto label_182e68;
            case 0x182E78u: goto label_182e78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x182DCCu;
    // 0x182dcc: 0x0  nop
    ctx->pc = 0x182dccu;
    // NOP
    // 0x182dd0: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x182dd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x182dd4: 0x0  nop
    ctx->pc = 0x182dd4u;
    // NOP
    // 0x182dd8: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x182dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x182ddc: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x182ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x182de0: 0xdc420000  ld          $v0, 0x0($v0)
    ctx->pc = 0x182de0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x182de4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x182de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x182de8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x182DE8u;
    {
        const bool branch_taken_0x182de8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182DE8u;
            // 0x182dec: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182de8) {
            ctx->pc = 0x182E78u;
            goto label_182e78;
        }
    }
    ctx->pc = 0x182DF0u;
    // 0x182df0: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x182df0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x182df4: 0x8c42f1b4  lw          $v0, -0xE4C($v0)
    ctx->pc = 0x182df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963636)));
    // 0x182df8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x182df8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x182dfc: 0xac83c7d0  sw          $v1, -0x3830($a0)
    ctx->pc = 0x182dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294952912), GPR_U32(ctx, 3));
    // 0x182e00: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x182e00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x182e04: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x182E04u;
    {
        const bool branch_taken_0x182e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182E04u;
            // 0x182e08: 0x3c07002c  lui         $a3, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182e04) {
            ctx->pc = 0x182E68u;
            goto label_182e68;
        }
    }
    ctx->pc = 0x182E0Cu;
    // 0x182e0c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x182e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x182e10: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x182e10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x182e14: 0x8ce27908  lw          $v0, 0x7908($a3)
    ctx->pc = 0x182e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 30984)));
    // 0x182e18: 0xc2102b  sltu        $v0, $a2, $v0
    ctx->pc = 0x182e18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x182e1c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x182E1Cu;
    {
        const bool branch_taken_0x182e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x182E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182E1Cu;
            // 0x182e20: 0x3c040030  lui         $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182e1c) {
            ctx->pc = 0x182E34u;
            goto label_182e34;
        }
    }
    ctx->pc = 0x182E24u;
    // 0x182e24: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x182e24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x182e28: 0xdc823628  ld          $v0, 0x3628($a0)
    ctx->pc = 0x182e28u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 13864)));
    // 0x182e2c: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x182e2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x182e30: 0xfc823628  sd          $v0, 0x3628($a0)
    ctx->pc = 0x182e30u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 13864), GPR_U64(ctx, 2));
label_182e34:
    // 0x182e34: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x182e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x182e38: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x182e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x182e3c: 0xdc423628  ld          $v0, 0x3628($v0)
    ctx->pc = 0x182e3cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 13864)));
    // 0x182e40: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x182e40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x182e44: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x182e44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x182e48: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x182e48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x182e4c: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x182e4cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x182e50: 0xace67908  sw          $a2, 0x7908($a3)
    ctx->pc = 0x182e50u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 30984), GPR_U32(ctx, 6));
    // 0x182e54: 0x8c834f54  lw          $v1, 0x4F54($a0)
    ctx->pc = 0x182e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20308)));
    // 0x182e58: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x182e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x182e5c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x182e5cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x182e60: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x182e60u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182e64: 0xaca2c66c  sw          $v0, -0x3994($a1)
    ctx->pc = 0x182e64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294952556), GPR_U32(ctx, 2));
label_182e68:
    // 0x182e68: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x182e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x182e6c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x182e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x182e70: 0x34421000  ori         $v0, $v0, 0x1000
    ctx->pc = 0x182e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4096);
    // 0x182e74: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x182e74u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
label_182e78:
    // 0x182e78: 0xf  sync
    ctx->pc = 0x182e78u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x182e7c: 0x42000038  ei
    ctx->pc = 0x182e7cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x182e80: 0x3e00008  jr          $ra
    ctx->pc = 0x182E80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x182E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182E80u;
            // 0x182e84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x182DBCu: goto label_182dbc;
            case 0x182E34u: goto label_182e34;
            case 0x182E68u: goto label_182e68;
            case 0x182E78u: goto label_182e78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x182E88u;
}
