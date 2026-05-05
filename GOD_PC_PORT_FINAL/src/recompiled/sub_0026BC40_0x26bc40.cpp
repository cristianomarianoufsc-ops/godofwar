#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026BC40
// Address: 0x26bc40 - 0x26bcf0
void sub_0026BC40_0x26bc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026BC40_0x26bc40");
#endif

    ctx->pc = 0x26bc40u;

    // 0x26bc40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x26bc40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x26bc44: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x26bc44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x26bc48: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x26bc48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x26bc4c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26bc4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26bc50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26bc50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bc54: 0xac45133c  sw          $a1, 0x133C($v0)
    ctx->pc = 0x26bc54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4924), GPR_U32(ctx, 5));
    // 0x26bc58: 0x58880  sll         $s1, $a1, 2
    ctx->pc = 0x26bc58u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x26bc5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26bc5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26bc60: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x26bc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x26bc64: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x26bc64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x26bc68: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x26bc68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x26bc6c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x26bc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x26bc70: 0xac501338  sw          $s0, 0x1338($v0)
    ctx->pc = 0x26bc70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4920), GPR_U32(ctx, 16));
    // 0x26bc74: 0xc0a5118  jal         func_294460
    ctx->pc = 0x26BC74u;
    SET_GPR_U32(ctx, 31, 0x26BC7Cu);
    ctx->pc = 0x26BC78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BC74u;
            // 0x26bc78: 0x26050003  addiu       $a1, $s0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294460u;
    if (runtime->hasFunction(0x294460u)) {
        auto targetFn = runtime->lookupFunction(0x294460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BC7Cu; }
        if (ctx->pc != 0x26BC7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00294460_0x294460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BC7Cu; }
        if (ctx->pc != 0x26BC7Cu) { return; }
    }
    ctx->pc = 0x26BC7Cu;
    // 0x26bc7c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x26bc7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x26bc80: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x26bc80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x26bc84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26bc84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26bc88: 0xc0a5118  jal         func_294460
    ctx->pc = 0x26BC88u;
    SET_GPR_U32(ctx, 31, 0x26BC90u);
    ctx->pc = 0x26BC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26BC88u;
            // 0x26bc8c: 0x24850003  addiu       $a1, $a0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294460u;
    if (runtime->hasFunction(0x294460u)) {
        auto targetFn = runtime->lookupFunction(0x294460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BC90u; }
        if (ctx->pc != 0x26BC90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00294460_0x294460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26BC90u; }
        if (ctx->pc != 0x26BC90u) { return; }
    }
    // [PASSO 14B] Simula IOP/DMA completando instantaneamente.
    // No PS2 real: IOP escreveria 0xFFFFFFFF em queue_entry+0 e +8, depois zeraria 0x2A1338.
    // Sem IOP real, sub_0026BB98 veria 0x305600+0=0 (!=0xFFFFFFFF) e ficaria em loop eterno.
    // Aqui lemos 0x2A1338 para saber qual entrada está na fila, escrevemos as sentinelas
    // e zeramos 0x2A1338 — sub_0026BB98 encontrará tudo pronto e retornará v0=1 (OK).
    {
        uint32_t _q14b = (uint32_t)READ32(0x2A0000u + 0x1338u);
        if (_q14b != 0u) {
            std::cerr << "[PASSO 14B] sub_0026BC40: IOP DMA simulado — queue=0x" << std::hex << _q14b
                      << " — escrevendo 0xFFFFFFFF em +0 e +8, zerando 0x2A1338\n";
            WRITE32(_q14b + 0u, 0xFFFFFFFFu);
            WRITE32(_q14b + 8u, 0xFFFFFFFFu);
            WRITE32(0x2A0000u + 0x1338u, 0u);
        } else {
            std::cerr << "[PASSO 14B] sub_0026BC40: 0x2A1338 ja zero — sem acao\n";
        }
    }
    ctx->pc = 0x26BC90u;
    // 0x26bc90: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x26bc90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26bc94: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26bc94u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26bc98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26bc98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26bc9c: 0x3e00008  jr          $ra
    ctx->pc = 0x26BC9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26BCA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26BC9Cu;
            // 0x26bca0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26BCA4u;
    // 0x26bca4: 0x0  nop
    ctx->pc = 0x26bca4u;
    // NOP
    // 0x26bca8: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x26bca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x26bcac: 0x0  nop
    ctx->pc = 0x26bcacu;
    // NOP
    // 0x26bcb0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x26bcb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x26bcb4: 0x0  nop
    ctx->pc = 0x26bcb4u;
    // NOP
    // 0x26bcb8: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x26bcb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x26bcbc: 0x0  nop
    ctx->pc = 0x26bcbcu;
    // NOP
    // 0x26bcc0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x26bcc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x26bcc4: 0x0  nop
    ctx->pc = 0x26bcc4u;
    // NOP
    // 0x26bcc8: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x26bcc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x26bccc: 0x0  nop
    ctx->pc = 0x26bcccu;
    // NOP
    // 0x26bcd0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x26bcd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x26bcd4: 0x0  nop
    ctx->pc = 0x26bcd4u;
    // NOP
    // 0x26bcd8: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x26bcd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x26bcdc: 0x0  nop
    ctx->pc = 0x26bcdcu;
    // NOP
    // 0x26bce0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x26bce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x26bce4: 0x0  nop
    ctx->pc = 0x26bce4u;
    // NOP
    // 0x26bce8: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x26bce8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x26bcec: 0x0  nop
    ctx->pc = 0x26bcecu;
    // NOP
}
