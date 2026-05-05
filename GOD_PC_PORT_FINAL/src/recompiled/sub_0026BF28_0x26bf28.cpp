#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026BF28
// Address: 0x26bf28 - 0x26c150
void sub_0026BF28_0x26bf28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026BF28_0x26bf28");
#endif

    ctx->pc = 0x26bf28u;

    // 0x26bf28: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x26bf28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x26bf2c: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x26bf2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bf30: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x26bf30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x26bf34: 0x24020068  addiu       $v0, $zero, 0x68
    ctx->pc = 0x26bf34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
    // 0x26bf38: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x26bf38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x26bf3c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x26bf3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bf40: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x26bf40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x26bf44: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x26bf44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bf48: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x26bf48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x26bf4c: 0x1262000f  beq         $s3, $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x26BF4Cu;
    {
        const bool branch_taken_0x26bf4c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x26BF50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BF4Cu;
            // 0x26bf50: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bf4c) {
            ctx->pc = 0x26BF8Cu;
            goto label_26bf8c;
        }
    }
    ctx->pc = 0x26BF54u;
    // 0x26bf54: 0x1a20002b  blez        $s1, . + 4 + (0x2B << 2)
    ctx->pc = 0x26BF54u;
    {
        const bool branch_taken_0x26bf54 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x26BF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BF54u;
            // 0x26bf58: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bf54) {
            ctx->pc = 0x26C004u;
            goto label_26c004;
        }
    }
    ctx->pc = 0x26BF5Cu;
    // 0x26bf5c: 0xe51821  addu        $v1, $a3, $a1
    ctx->pc = 0x26bf5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_26bf60:
    // 0x26bf60: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x26bf60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x26bf64: 0x24425640  addiu       $v0, $v0, 0x5640
    ctx->pc = 0x26bf64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22080));
    // 0x26bf68: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x26bf68u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26bf6c: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x26bf6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x26bf70: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x26bf70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x26bf74: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x26bf74u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x26bf78: 0xb1102a  slt         $v0, $a1, $s1
    ctx->pc = 0x26bf78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x26bf7c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x26BF7Cu;
    {
        const bool branch_taken_0x26bf7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26BF80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BF7Cu;
            // 0x26bf80: 0xe51821  addu        $v1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bf7c) {
            ctx->pc = 0x26BF60u;
            runtime->cooperativeGuestYield();
            goto label_26bf60;
        }
    }
    ctx->pc = 0x26BF84u;
    // 0x26bf84: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x26BF84u;
    {
        const bool branch_taken_0x26bf84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26BF88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BF84u;
            // 0x26bf88: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bf84) {
            ctx->pc = 0x26C008u;
            goto label_26c008;
        }
    }
    ctx->pc = 0x26BF8Cu;
label_26bf8c:
    // 0x26bf8c: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x26bf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x26bf90: 0x2442000c  addiu       $v0, $v0, 0xC
    ctx->pc = 0x26bf90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x26bf94: 0x2c420201  sltiu       $v0, $v0, 0x201
    ctx->pc = 0x26bf94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)513) ? 1 : 0);
    // 0x26bf98: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x26BF98u;
    {
        const bool branch_taken_0x26bf98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26BF9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BF98u;
            // 0x26bf9c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bf98) {
            ctx->pc = 0x26BFCCu;
            goto label_26bfcc;
        }
    }
    ctx->pc = 0x26BFA0u;
    // 0x26bfa0: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x26bfa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
    // 0x26bfa4: 0xc0a2832  jal         func_28A0C8
    ctx->pc = 0x26BFA4u;
    SET_GPR_U32(ctx, 31, 0x26BFACu);
    ctx->pc = 0x26BFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BFA4u;
            // 0x26bfa8: 0x24844218  addiu       $a0, $a0, 0x4218 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A0C8u;
    if (runtime->hasFunction(0x28A0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28A0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BFACu; }
        if (ctx->pc != 0x26BFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28a0c8_0x28a128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BFACu; }
        if (ctx->pc != 0x26BFACu) { return; }
    }
    ctx->pc = 0x26BFACu;
    // 0x26bfac: 0x0  nop
    ctx->pc = 0x26bfacu;
    // NOP
label_26bfb0:
    // 0x26bfb0: 0x0  nop
    ctx->pc = 0x26bfb0u;
    // NOP
    // 0x26bfb4: 0x0  nop
    ctx->pc = 0x26bfb4u;
    // NOP
    // 0x26bfb8: 0x0  nop
    ctx->pc = 0x26bfb8u;
    // NOP
    // 0x26bfbc: 0x0  nop
    ctx->pc = 0x26bfbcu;
    // NOP
    // 0x26bfc0: 0x0  nop
    ctx->pc = 0x26bfc0u;
    // NOP
    // 0x26bfc4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x26BFC4u;
    {
        const bool branch_taken_0x26bfc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26bfc4) {
            ctx->pc = 0x26BFB0u;
            runtime->cooperativeGuestYield();
            goto label_26bfb0;
        }
    }
    ctx->pc = 0x26BFCCu;
label_26bfcc:
    // 0x26bfcc: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x26bfccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
label_26bfd0:
    // 0x26bfd0: 0xe51821  addu        $v1, $a3, $a1
    ctx->pc = 0x26bfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x26bfd4: 0x24445640  addiu       $a0, $v0, 0x5640
    ctx->pc = 0x26bfd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 22080));
    // 0x26bfd8: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x26bfd8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26bfdc: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x26bfdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x26bfe0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x26bfe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x26bfe4: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x26bfe4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x26bfe8: 0x28a2000c  slti        $v0, $a1, 0xC
    ctx->pc = 0x26bfe8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x26bfec: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x26BFECu;
    {
        const bool branch_taken_0x26bfec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26BFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BFECu;
            // 0x26bff0: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26bfec) {
            ctx->pc = 0x26BFD0u;
            runtime->cooperativeGuestYield();
            goto label_26bfd0;
        }
    }
    ctx->pc = 0x26BFF4u;
    // 0x26bff4: 0x8ce60008  lw          $a2, 0x8($a3)
    ctx->pc = 0x26bff4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x26bff8: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x26bff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x26bffc: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x26BFFCu;
    SET_GPR_U32(ctx, 31, 0x26C004u);
    ctx->pc = 0x26C000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BFFCu;
            // 0x26c000: 0x8ce5000c  lw          $a1, 0xC($a3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C004u; }
        if (ctx->pc != 0x26C004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C004u; }
        if (ctx->pc != 0x26C004u) { return; }
    }
    ctx->pc = 0x26C004u;
label_26c004:
    // 0x26c004: 0x3c10002a  lui         $s0, 0x2A
    ctx->pc = 0x26c004u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
label_26c008:
    // 0x26c008: 0x8e021338  lw          $v0, 0x1338($s0)
    ctx->pc = 0x26c008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4920)));
    // [PASSO 14] 0x2A1338 e a fila IOP de modulos — sem IOP real nunca e zerada.
    // O loop label_26c018 espera 0x2A1338==0; sem bypass => loop infinito.
    // Forcamos 0x2A1338=0 aqui para liberar o caminho label_26c034 (sub_0026BC40).
    {
        uint32_t _v0_1338 = GPR_U32(ctx, 2);
        if (_v0_1338 != 0) {
            std::cerr << "[PASSO 14] sub_0026BF28: 0x2A1338=0x" << std::hex << _v0_1338
                      << " != 0 — forcando 0 (IOP fila-modulo simulada, libera label_26c034)\n";
            WRITE32(ADD32(GPR_U32(ctx, 16), 4920), 0u);
            SET_GPR_S32(ctx, 2, 0);
        } else {
            std::cerr << "[PASSO 14] sub_0026BF28: 0x2A1338=0 ja OK\n";
        }
    }
    // 0x26c00c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x26C00Cu;
    {
        const bool branch_taken_0x26c00c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C00Cu;
            // 0x26c010: 0x3c120030  lui         $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c00c) {
            ctx->pc = 0x26C034u;
            goto label_26c034;
        }
    }
    ctx->pc = 0x26C014u;
    // 0x26c014: 0x0  nop
    ctx->pc = 0x26c014u;
    // NOP
label_26c018:
    // 0x26c018: 0xc09ae46  jal         func_26B918
    ctx->pc = 0x26C018u;
    SET_GPR_U32(ctx, 31, 0x26C020u);
    ctx->pc = 0x26B918u;
    if (runtime->hasFunction(0x26B918u)) {
        auto targetFn = runtime->lookupFunction(0x26B918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C020u; }
        if (ctx->pc != 0x26C020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026B918_0x26b918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C020u; }
        if (ctx->pc != 0x26C020u) { return; }
    }
    ctx->pc = 0x26C020u;
    // 0x26c020: 0xc0a4fa8  jal         func_293EA0
    ctx->pc = 0x26C020u;
    SET_GPR_U32(ctx, 31, 0x26C028u);
    ctx->pc = 0x26C024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C020u;
            // 0x26c024: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293EA0u;
    if (runtime->hasFunction(0x293EA0u)) {
        auto targetFn = runtime->lookupFunction(0x293EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C028u; }
        if (ctx->pc != 0x26C028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293ea0_0x293ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C028u; }
        if (ctx->pc != 0x26C028u) { return; }
    }
    ctx->pc = 0x26C028u;
    // 0x26c028: 0x8e021338  lw          $v0, 0x1338($s0)
    ctx->pc = 0x26c028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4920)));
    // 0x26c02c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x26C02Cu;
    {
        const bool branch_taken_0x26c02c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C02Cu;
            // 0x26c030: 0x3c120030  lui         $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c02c) {
            ctx->pc = 0x26C018u;
            runtime->cooperativeGuestYield();
            goto label_26c018;
        }
    }
    ctx->pc = 0x26C034u;
label_26c034:
    // 0x26c034: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x26c034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26c038: 0xc09af10  jal         func_26BC40
    ctx->pc = 0x26C038u;
    SET_GPR_U32(ctx, 31, 0x26C040u);
    ctx->pc = 0x26C03Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C038u;
            // 0x26c03c: 0x26445600  addiu       $a0, $s2, 0x5600 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 22016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26BC40u;
    if (runtime->hasFunction(0x26BC40u)) {
        auto targetFn = runtime->lookupFunction(0x26BC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C040u; }
        if (ctx->pc != 0x26C040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026BC40_0x26bc40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C040u; }
        if (ctx->pc != 0x26C040u) { return; }
    }
    ctx->pc = 0x26C040u;
    // 0x26c040: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x26C040u;
    {
        const bool branch_taken_0x26c040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C040u;
            // 0x26c044: 0x3c100030  lui         $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c040) {
            ctx->pc = 0x26C06Cu;
            goto label_26c06c;
        }
    }
    ctx->pc = 0x26C048u;
label_26c048:
    // 0x26c048: 0x8c4213b0  lw          $v0, 0x13B0($v0)
    ctx->pc = 0x26c048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5040)));
    // 0x26c04c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26C04Cu;
    {
        const bool branch_taken_0x26c04c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C04Cu;
            // 0x26c050: 0x3c04002c  lui         $a0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c04c) {
            ctx->pc = 0x26C05Cu;
            goto label_26c05c;
        }
    }
    ctx->pc = 0x26C054u;
    // 0x26c054: 0xc0a2832  jal         func_28A0C8
    ctx->pc = 0x26C054u;
    SET_GPR_U32(ctx, 31, 0x26C05Cu);
    ctx->pc = 0x26C058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C054u;
            // 0x26c058: 0x24843e40  addiu       $a0, $a0, 0x3E40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A0C8u;
    if (runtime->hasFunction(0x28A0C8u)) {
        auto targetFn = runtime->lookupFunction(0x28A0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C05Cu; }
        if (ctx->pc != 0x26C05Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28a0c8_0x28a128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C05Cu; }
        if (ctx->pc != 0x26C05Cu) { return; }
    }
    ctx->pc = 0x26C05Cu;
label_26c05c:
    // 0x26c05c: 0xc09ae46  jal         func_26B918
    ctx->pc = 0x26C05Cu;
    SET_GPR_U32(ctx, 31, 0x26C064u);
    ctx->pc = 0x26C060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C05Cu;
            // 0x26c060: 0x3c100030  lui         $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B918u;
    if (runtime->hasFunction(0x26B918u)) {
        auto targetFn = runtime->lookupFunction(0x26B918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C064u; }
        if (ctx->pc != 0x26C064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026B918_0x26b918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C064u; }
        if (ctx->pc != 0x26C064u) { return; }
    }
    ctx->pc = 0x26C064u;
    // 0x26c064: 0xc0a4fa8  jal         func_293EA0
    ctx->pc = 0x26C064u;
    SET_GPR_U32(ctx, 31, 0x26C06Cu);
    ctx->pc = 0x26C068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C064u;
            // 0x26c068: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293EA0u;
    if (runtime->hasFunction(0x293EA0u)) {
        auto targetFn = runtime->lookupFunction(0x293EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C06Cu; }
        if (ctx->pc != 0x26C06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293ea0_0x293ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C06Cu; }
        if (ctx->pc != 0x26C06Cu) { return; }
    }
    ctx->pc = 0x26C06Cu;
label_26c06c:
    // 0x26c06c: 0xc0a5d9c  jal         func_297670
    ctx->pc = 0x26C06Cu;
    SET_GPR_U32(ctx, 31, 0x26C074u);
    ctx->pc = 0x26C070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C06Cu;
            // 0x26c070: 0x260455c8  addiu       $a0, $s0, 0x55C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 21960));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297670u;
    if (runtime->hasFunction(0x297670u)) {
        auto targetFn = runtime->lookupFunction(0x297670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C074u; }
        if (ctx->pc != 0x26C074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_297670_0x2976c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C074u; }
        if (ctx->pc != 0x26C074u) { return; }
    }
    ctx->pc = 0x26C074u;
    // 0x26c074: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x26C074u;
    {
        const bool branch_taken_0x26c074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C074u;
            // 0x26c078: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c074) {
            ctx->pc = 0x26C048u;
            runtime->cooperativeGuestYield();
            goto label_26c048;
        }
    }
    ctx->pc = 0x26C07Cu;
    // 0x26c07c: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x26C07Cu;
    {
        const bool branch_taken_0x26c07c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C080u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C07Cu;
            // 0x26c080: 0x3c070030  lui         $a3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c07c) {
            ctx->pc = 0x26C0B4u;
            goto label_26c0b4;
        }
    }
    ctx->pc = 0x26C084u;
    // 0x26c084: 0x260455c8  addiu       $a0, $s0, 0x55C8
    ctx->pc = 0x26c084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 21960));
    // 0x26c088: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x26c088u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c08c: 0x24e75640  addiu       $a3, $a3, 0x5640
    ctx->pc = 0x26c08cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 22080));
    // 0x26c090: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x26c090u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c094: 0x26495600  addiu       $t1, $s2, 0x5600
    ctx->pc = 0x26c094u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 22016));
    // 0x26c098: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x26c098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x26c09c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26c09cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26c0a0: 0x240a000c  addiu       $t2, $zero, 0xC
    ctx->pc = 0x26c0a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x26c0a4: 0xc0a5d1c  jal         func_297470
    ctx->pc = 0x26C0A4u;
    SET_GPR_U32(ctx, 31, 0x26C0ACu);
    ctx->pc = 0x26C0A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C0A4u;
            // 0x26c0a8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297470u;
    if (runtime->hasFunction(0x297470u)) {
        auto targetFn = runtime->lookupFunction(0x297470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C0ACu; }
        if (ctx->pc != 0x26C0ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297470_0x297470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C0ACu; }
        if (ctx->pc != 0x26C0ACu) { return; }
    }
    ctx->pc = 0x26C0ACu;
    // 0x26c0ac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x26C0ACu;
    {
        const bool branch_taken_0x26c0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c0ac) {
            ctx->pc = 0x26C0E0u;
            goto label_26c0e0;
        }
    }
    ctx->pc = 0x26C0B4u;
label_26c0b4:
    // 0x26c0b4: 0x260455c8  addiu       $a0, $s0, 0x55C8
    ctx->pc = 0x26c0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 21960));
    // 0x26c0b8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x26c0b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c0bc: 0x26495600  addiu       $t1, $s2, 0x5600
    ctx->pc = 0x26c0bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 22016));
    // 0x26c0c0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x26c0c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x26c0c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x26c0c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26c0c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26c0c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c0cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x26c0ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c0d0: 0x240a000c  addiu       $t2, $zero, 0xC
    ctx->pc = 0x26c0d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x26c0d4: 0xc0a5d1c  jal         func_297470
    ctx->pc = 0x26C0D4u;
    SET_GPR_U32(ctx, 31, 0x26C0DCu);
    ctx->pc = 0x26C0D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26C0D4u;
            // 0x26c0d8: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x297470u;
    if (runtime->hasFunction(0x297470u)) {
        auto targetFn = runtime->lookupFunction(0x297470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C0DCu; }
        if (ctx->pc != 0x26C0DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00297470_0x297470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C0DCu; }
        if (ctx->pc != 0x26C0DCu) { return; }
    }
    ctx->pc = 0x26C0DCu;
    // 0x26c0dc: 0x0  nop
    ctx->pc = 0x26c0dcu;
    // NOP
label_26c0e0:
    // 0x26c0e0: 0xc09aee6  jal         func_26BB98
    ctx->pc = 0x26C0E0u;
    SET_GPR_U32(ctx, 31, 0x26C0E8u);
    ctx->pc = 0x26BB98u;
    if (runtime->hasFunction(0x26BB98u)) {
        auto targetFn = runtime->lookupFunction(0x26BB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C0E8u; }
        if (ctx->pc != 0x26C0E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026BB98_0x26bb98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C0E8u; }
        if (ctx->pc != 0x26C0E8u) { return; }
    }
    ctx->pc = 0x26C0E8u;
    // 0x26c0e8: 0x1040fffd  beqz        $v0, . + 4 + (-0x3 << 2)
    ctx->pc = 0x26C0E8u;
    {
        const bool branch_taken_0x26c0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C0E8u;
            // 0x26c0ec: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c0e8) {
            ctx->pc = 0x26C0E0u;
            runtime->cooperativeGuestYield();
            goto label_26c0e0;
        }
    }
    ctx->pc = 0x26C0F0u;
    // [PASSO 15] Diagnóstico após label_26c0e0 sair (sub_0026BB98 retornou v0!=0)
    {
        uint32_t _p15_idx = (uint32_t)READ32(0x2A0000u + 0x1378u);
        std::cerr << "[PASSO 15] sub_0026BF28: 0x2A1378(idx)=0x" << std::hex << _p15_idx
                  << " 0x2A137C=0x" << (uint32_t)READ32(0x2A0000u + 0x137Cu)
                  << " — verificando tabela modulo em 0x2A1358\n" << std::dec;
    }
    // 0x26c0f0: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x26c0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x26c0f4: 0x8c421378  lw          $v0, 0x1378($v0)
    ctx->pc = 0x26c0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4984)));
    // 0x26c0f8: 0x24631358  addiu       $v1, $v1, 0x1358
    ctx->pc = 0x26c0f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4952));
    // 0x26c0fc: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x26c0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x26c100: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26c100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x26c104: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26c104u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x26c108: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26c108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26c10c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x26c10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26c110: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26C110u;
    {
        const bool branch_taken_0x26c110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C110u;
            // 0x26c114: 0x8c905604  lw          $s0, 0x5604($a0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22020)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c110) {
            ctx->pc = 0x26C130u;
            goto label_26c130;
        }
    }
    ctx->pc = 0x26C118u;
    // 0x26c118: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x26c118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x26c11c: 0x8c42137c  lw          $v0, 0x137C($v0)
    ctx->pc = 0x26c11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4988)));
    // 0x26c120: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26C120u;
    {
        const bool branch_taken_0x26c120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C120u;
            // 0x26c124: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c120) {
            ctx->pc = 0x26C134u;
            goto label_26c134;
        }
    }
    ctx->pc = 0x26C128u;
    // 0x26c128: 0xc09b12e  jal         func_26C4B8
    std::cerr << "[PASSO 15C] sub_0026BF28: chamando sub_0026C4B8 — s0=0x" << std::hex
              << GPR_U32(ctx, 16) << " 0x2A137C=0x" << (uint32_t)READ32(0x2A0000u + 0x137Cu) << "\n" << std::dec;
    ctx->pc = 0x26C128u;
    SET_GPR_U32(ctx, 31, 0x26C130u);
    ctx->pc = 0x26C4B8u;
    if (runtime->hasFunction(0x26C4B8u)) {
        auto targetFn = runtime->lookupFunction(0x26C4B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C130u; }
        if (ctx->pc != 0x26C130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C4B8_0x26c4b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26C130u; }
        if (ctx->pc != 0x26C130u) {
            std::cerr << "[PASSO 15C] sub_0026C4B8 retornou ctx->pc=0x" << std::hex << ctx->pc
                      << " != 0x26C130 — retorno DESVIO\n" << std::dec;
            return;
        }
    }
    std::cerr << "[PASSO 15C] sub_0026C4B8 retornou OK\n";
    ctx->pc = 0x26C130u;
label_26c130:
    // 0x26c130: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x26c130u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26c134:
    // 0x26c134: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x26c134u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26c138: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x26c138u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26c13c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x26c13cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26c140: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x26c140u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26c144: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26c144u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26c148: 0x3e00008  jr          $ra
    ctx->pc = 0x26C148u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C14Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26C148u;
            // 0x26c14c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26BF60u: goto label_26bf60;
            case 0x26BF8Cu: goto label_26bf8c;
            case 0x26BFB0u: goto label_26bfb0;
            case 0x26BFCCu: goto label_26bfcc;
            case 0x26BFD0u: goto label_26bfd0;
            case 0x26C004u: goto label_26c004;
            case 0x26C008u: goto label_26c008;
            case 0x26C018u: goto label_26c018;
            case 0x26C034u: goto label_26c034;
            case 0x26C048u: goto label_26c048;
            case 0x26C05Cu: goto label_26c05c;
            case 0x26C06Cu: goto label_26c06c;
            case 0x26C0B4u: goto label_26c0b4;
            case 0x26C0E0u: goto label_26c0e0;
            case 0x26C130u: goto label_26c130;
            case 0x26C134u: goto label_26c134;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26C150u;
}
