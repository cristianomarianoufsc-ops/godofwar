#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026BB98
// Address: 0x26bb98 - 0x26bc40
void sub_0026BB98_0x26bb98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026BB98_0x26bb98");
#endif

    ctx->pc = 0x26bb98u;

    // [PASSO 17] sub_0026BB98 = verificador "IOP modulo carregado?".
    // func_293EA0 re-enfileira modulos setando 0x2A1338 != 0 a cada chamada.
    // entry_297670(0x3055C8) retorna !=0 (busy) sem IOP real → loop eterno.
    // Sem IOP real, a resposta e sempre "sim, pronto" → v0=1, retorna imediato.
    SET_GPR_S32(ctx, 2, 1);
    std::cerr << "[PASSO 17] sub_0026BB98: stub retornou v0=1 (IOP modulo pronto simulado)\n";
    return;

    // 0x26bb98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26bb98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26bb9c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x26bb9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bba0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x26bba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x26bba4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26bba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26bba8: 0xc0a4fa8  jal         func_293EA0
    ctx->pc = 0x26BBA8u;
    SET_GPR_U32(ctx, 31, 0x26BBB0u);
    ctx->pc = 0x26BBACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BBA8u;
            // 0x26bbac: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293EA0u;
    if (runtime->hasFunction(0x293EA0u)) {
        auto targetFn = runtime->lookupFunction(0x293EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BBB0u; }
        if (ctx->pc != 0x26BBB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293ea0_0x293ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BBB0u; }
        if (ctx->pc != 0x26BBB0u) { return; }
    }
    ctx->pc = 0x26BBB0u;
    // 0x26bbb0: 0x8e021338  lw          $v0, 0x1338($s0)
    ctx->pc = 0x26bbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4920)));
    // 0x26bbb4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26BBB4u;
    {
        const bool branch_taken_0x26bbb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26BBB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BBB4u;
            // 0x26bbb8: 0x3c040030  lui         $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bbb4) {
            ctx->pc = 0x26BBC4u;
            goto label_26bbc4;
        }
    }
    ctx->pc = 0x26BBBCu;
    // 0x26bbbc: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x26BBBCu;
    {
        const bool branch_taken_0x26bbbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BBC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BBBCu;
            // 0x26bbc0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bbbc) {
            ctx->pc = 0x26BC30u;
            goto label_26bc30;
        }
    }
    ctx->pc = 0x26BBC4u;
label_26bbc4:
    // 0x26bbc4: 0xc0a5d9c  jal         func_297670
    ctx->pc = 0x26BBC4u;
    SET_GPR_U32(ctx, 31, 0x26BBCCu);
    ctx->pc = 0x26BBC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BBC4u;
            // 0x26bbc8: 0x248455c8  addiu       $a0, $a0, 0x55C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297670u;
    if (runtime->hasFunction(0x297670u)) {
        auto targetFn = runtime->lookupFunction(0x297670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BBCCu; }
        if (ctx->pc != 0x26BBCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_297670_0x2976c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BBCCu; }
        if (ctx->pc != 0x26BBCCu) { return; }
    }
    ctx->pc = 0x26BBCCu;
    // 0x26bbcc: 0x14400018  bnez        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x26BBCCu;
    {
        const bool branch_taken_0x26bbcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26BBD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BBCCu;
            // 0x26bbd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bbcc) {
            ctx->pc = 0x26BC30u;
            goto label_26bc30;
        }
    }
    ctx->pc = 0x26BBD4u;
    // 0x26bbd4: 0x8e041338  lw          $a0, 0x1338($s0)
    ctx->pc = 0x26bbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4920)));
    // 0x26bbd8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x26bbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x26bbdc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26bbdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26bbe0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x26bbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26bbe4: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x26BBE4u;
    {
        const bool branch_taken_0x26bbe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26BBE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BBE4u;
            // 0x26bbe8: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bbe4) {
            ctx->pc = 0x26BC14u;
            goto label_26bc14;
        }
    }
    ctx->pc = 0x26BBECu;
    // 0x26bbec: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x26bbecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x26bbf0: 0x8c42133c  lw          $v0, 0x133C($v0)
    ctx->pc = 0x26bbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4924)));
    // 0x26bbf4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26bbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26bbf8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x26bbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x26bbfc: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x26bbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26bc00: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x26BC00u;
    {
        const bool branch_taken_0x26bc00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x26BC04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BC00u;
            // 0x26bc04: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bc00) {
            ctx->pc = 0x26BC14u;
            goto label_26bc14;
        }
    }
    ctx->pc = 0x26BC08u;
    // 0x26bc08: 0xae001338  sw          $zero, 0x1338($s0)
    ctx->pc = 0x26bc08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4920), GPR_U32(ctx, 0));
    // 0x26bc0c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x26BC0Cu;
    {
        const bool branch_taken_0x26bc0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BC10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BC0Cu;
            // 0x26bc10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bc0c) {
            ctx->pc = 0x26BC30u;
            goto label_26bc30;
        }
    }
    ctx->pc = 0x26BC14u;
label_26bc14:
    // 0x26bc14: 0x8c4213b0  lw          $v0, 0x13B0($v0)
    ctx->pc = 0x26bc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5040)));
    // 0x26bc18: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x26BC18u;
    {
        const bool branch_taken_0x26bc18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26BC1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BC18u;
            // 0x26bc1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bc18) {
            ctx->pc = 0x26BC30u;
            goto label_26bc30;
        }
    }
    ctx->pc = 0x26BC20u;
    // 0x26bc20: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x26bc20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x26bc24: 0xc0a2832  jal         func_28A0C8
    ctx->pc = 0x26BC24u;
    SET_GPR_U32(ctx, 31, 0x26BC2Cu);
    ctx->pc = 0x26BC28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BC24u;
            // 0x26bc28: 0x24843db8  addiu       $a0, $a0, 0x3DB8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A0C8u;
    if (runtime->hasFunction(0x28A0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28A0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BC2Cu; }
        if (ctx->pc != 0x26BC2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28a0c8_0x28a128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BC2Cu; }
        if (ctx->pc != 0x26BC2Cu) { return; }
    }
    ctx->pc = 0x26BC2Cu;
    // 0x26bc2c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26bc2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26bc30:
    // 0x26bc30: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x26bc30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26bc34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26bc34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26bc38: 0x3e00008  jr          $ra
    ctx->pc = 0x26BC38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BC3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BC38u;
            // 0x26bc3c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26BBC4u: goto label_26bbc4;
            case 0x26BC14u: goto label_26bc14;
            case 0x26BC30u: goto label_26bc30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26BC40u;
}
