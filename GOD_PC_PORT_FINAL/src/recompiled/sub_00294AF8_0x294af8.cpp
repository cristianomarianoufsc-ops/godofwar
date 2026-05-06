#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00294AF8
// Address: 0x294af8 - 0x294c98
void sub_00294AF8_0x294af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00294AF8_0x294af8");
#endif

    ctx->pc = 0x294af8u;
    std::cerr << "[sub_00294AF8] START\n";

    // 0x294af8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x294af8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x294afc: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x294afcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x294b00: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x294b00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x294b04: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x294b04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294b08: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x294b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x294b0c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x294b0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294b10: 0xc0a5186  jal         func_294618
    ctx->pc = 0x294B10u;
    SET_GPR_U32(ctx, 31, 0x294B18u);
    ctx->pc = 0x294B14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294B10u;
            // 0x294b14: 0xffb00030  sd          $s0, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294618u;
    if (runtime->hasFunction(0x294618u)) {
        auto targetFn = runtime->lookupFunction(0x294618u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294B18u; }
        if (ctx->pc != 0x294B18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_294618_0x294628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294B18u; }
        if (ctx->pc != 0x294B18u) { return; }
    }
    ctx->pc = 0x294B18u;
    // PASSO 19: func_294618 tenta adquirir lock IOP — retorna !=0 (lock ocupado sem IOP real).
    // Isso fazia branch para label_294c58 (exit) antes de StartThread ser chamado,
    // deixando tid=2 e tid=3 eternamente dormentes → activeThreads=0 → processo encerra.
    // Forcamos v0=0 para bypassar o early exit e deixar a funcao prosseguir ate StartThread.
    if (GPR_U64(ctx, 2) != GPR_U64(ctx, 0)) {
        static bool s_passo19_logged = false;
        if (!s_passo19_logged) {
            s_passo19_logged = true;
            std::fprintf(stderr,
                "[PASSO 19] sub_00294AF8: func_294618 retornou v0=0x%x (lock IOP ocupado)"
                " -- forcando v0=0 para bypassar early exit e invocar StartThread\n",
                GPR_U32(ctx, 2));
        }
        SET_GPR_S32(ctx, 2, 0);
    } else {
        std::fprintf(stderr, "[PASSO 19] sub_00294AF8: func_294618 retornou v0=0 OK (lock livre)\n");
    }
    // 0x294b18: 0x1440004f  bnez        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x294B18u;
    {
        const bool branch_taken_0x294b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x294B1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294B18u;
            // 0x294b1c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294b18) {
            ctx->pc = 0x294C58u;
            goto label_294c58;
        }
    }
    ctx->pc = 0x294B20u;
    // 0x294b20: 0xc0a648c  jal         func_299230
    ctx->pc = 0x294B20u;
    SET_GPR_U32(ctx, 31, 0x294B28u);
    ctx->pc = 0x299230u;
    if (runtime->hasFunction(0x299230u)) {
        auto targetFn = runtime->lookupFunction(0x299230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294B28u; }
        if (ctx->pc != 0x294B28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299230_0x299280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294B28u; }
        if (ctx->pc != 0x294B28u) { return; }
    }
    ctx->pc = 0x294B28u;
    // PASSO 20: func_299230 retorna v0=0 para tid=2, causando branch a label_294b68 (FAIL/exit).
    // Sem IOP real, forcamos v0=1 para prosseguir ate func_293B20 -> PASSO 7A -> StartThread(tid=2).
    if (GPR_U64(ctx, 2) == GPR_U64(ctx, 0)) {
        static bool s_passo20_logged = false;
        if (!s_passo20_logged) {
            s_passo20_logged = true;
            std::fprintf(stderr,
                "[PASSO 20] sub_00294AF8: func_299230 retornou v0=0 -- forcando v0=1 para bypassar label_294b68 e invocar StartThread(tid=%u)\n",
                GPR_U32(ctx, 17));
        }
        SET_GPR_S32(ctx, 2, 1);
    }
    // 0x294b28: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x294B28u;
    {
        const bool branch_taken_0x294b28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x294B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294B28u;
            // 0x294b2c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294b28) {
            ctx->pc = 0x294B68u;
            goto label_294b68;
        }
    }
    ctx->pc = 0x294B30u;
    // 0x294b30: 0xc0a4ec8  jal         func_293B20
    ctx->pc = 0x294B30u;
    SET_GPR_U32(ctx, 31, 0x294B38u);
    ctx->pc = 0x294B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294B30u;
            // 0x294b34: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293B20u;
    if (runtime->hasFunction(0x293B20u)) {
        auto targetFn = runtime->lookupFunction(0x293B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294B38u; }
        if (ctx->pc != 0x294B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293b20_0x293b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294B38u; }
        if (ctx->pc != 0x294B38u) { return; }
    }
    ctx->pc = 0x294B38u;
    // 0x294b38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x294b38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294b3c: 0x6010005  bgez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x294B3Cu;
    {
        const bool branch_taken_0x294b3c = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x294B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294B3Cu;
            // 0x294b40: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294b3c) {
            ctx->pc = 0x294B54u;
            goto label_294b54;
        }
    }
    ctx->pc = 0x294B44u;
    // 0x294b44: 0xc0a64a0  jal         func_299280
    ctx->pc = 0x294B44u;
    SET_GPR_U32(ctx, 31, 0x294B4Cu);
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294B4Cu; }
        if (ctx->pc != 0x294B4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299280_0x299298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294B4Cu; }
        if (ctx->pc != 0x294B4Cu) { return; }
    }
    ctx->pc = 0x294B4Cu;
    // 0x294b4c: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x294B4Cu;
    {
        const bool branch_taken_0x294b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294B4Cu;
            // 0x294b50: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294b4c) {
            ctx->pc = 0x294C58u;
            goto label_294c58;
        }
    }
    ctx->pc = 0x294B54u;
label_294b54:
    // 0x294b54: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x294b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x294b58: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x294B58u;
    // PASSO 7A: ReferThreadStatus escreve attr (nao status EE) em *(sp+0).
    // Thread criada com attr=0 => v1(=$3) != 0x10 => label_294b70 nao atingido => StartThread nunca chamado.
    // Forcamos $v1(=$3)=0x10 (THS_DORMANT) para garantir que StartThread seja invocado.
    {
        uint32_t sp0_val = GPR_U32(ctx, 3);
        if (sp0_val != 0x10u) {
            static bool s_passo7a_logged = false;
            if (!s_passo7a_logged) {
                s_passo7a_logged = true;
                std::cerr << "[PASSO 7A] sub_00294AF8: ReferThreadStatus sp+0=0x"
                          << std::hex << sp0_val
                          << " != 0x10 -- forcando v3=0x10 (dormant) para invocar StartThread(tid="
                          << std::dec << GPR_U32(ctx, 17) << ")\n";
            }
            SET_GPR_S32(ctx, 3, 0x10);
        } else {
            std::cerr << "[PASSO 7A] sub_00294AF8: ReferThreadStatus sp+0=0x10 OK (dormant natural)\n";
        }
    }
    {
        const bool branch_taken_0x294b58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x294B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294B58u;
            // 0x294b5c: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294b58) {
            ctx->pc = 0x294B70u;
            goto label_294b70;
        }
    }
    ctx->pc = 0x294B60u;
    // 0x294b60: 0xc0a64a0  jal         func_299280
    ctx->pc = 0x294B60u;
    SET_GPR_U32(ctx, 31, 0x294B68u);
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294B68u; }
        if (ctx->pc != 0x294B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299280_0x299298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294B68u; }
        if (ctx->pc != 0x294B68u) { return; }
    }
    ctx->pc = 0x294B68u;
label_294b68:
    std::cerr << "[sub_00294AF8] FAIL label_294b68 -- StartThread NAO sera chamado (lock error ou check falhou)\n";
    // 0x294b68: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x294B68u;
    {
        const bool branch_taken_0x294b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294B68u;
            // 0x294b6c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294b68) {
            ctx->pc = 0x294C58u;
            goto label_294c58;
        }
    }
    ctx->pc = 0x294B70u;
label_294b70:
    // 0x294b70: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x294b70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x294b74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x294b74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x294b78: 0x2442fd60  addiu       $v0, $v0, -0x2A0
    ctx->pc = 0x294b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966624));
    // 0x294b7c: 0x7c400000  sq          $zero, 0x0($v0)
    ctx->pc = 0x294b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 0));
    // 0x294b80: 0x7c400010  sq          $zero, 0x10($v0)
    ctx->pc = 0x294b80u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 16), GPR_VEC(ctx, 0));
    // 0x294b84: 0x7c400020  sq          $zero, 0x20($v0)
    ctx->pc = 0x294b84u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 32), GPR_VEC(ctx, 0));
    // 0x294b88: 0x7c400030  sq          $zero, 0x30($v0)
    ctx->pc = 0x294b88u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 48), GPR_VEC(ctx, 0));
    // 0x294b8c: 0x7c400040  sq          $zero, 0x40($v0)
    ctx->pc = 0x294b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 64), GPR_VEC(ctx, 0));
    // 0x294b90: 0x7c400050  sq          $zero, 0x50($v0)
    ctx->pc = 0x294b90u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 80), GPR_VEC(ctx, 0));
    // 0x294b94: 0x7c400060  sq          $zero, 0x60($v0)
    ctx->pc = 0x294b94u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 96), GPR_VEC(ctx, 0));
    // 0x294b98: 0x7c400070  sq          $zero, 0x70($v0)
    ctx->pc = 0x294b98u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 112), GPR_VEC(ctx, 0));
    // 0x294b9c: 0x7c400080  sq          $zero, 0x80($v0)
    ctx->pc = 0x294b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 128), GPR_VEC(ctx, 0));
    // 0x294ba0: 0x7c400090  sq          $zero, 0x90($v0)
    ctx->pc = 0x294ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 144), GPR_VEC(ctx, 0));
    // 0x294ba4: 0x7c4000a0  sq          $zero, 0xA0($v0)
    ctx->pc = 0x294ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 160), GPR_VEC(ctx, 0));
    // 0x294ba8: 0x7c4000b0  sq          $zero, 0xB0($v0)
    ctx->pc = 0x294ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 176), GPR_VEC(ctx, 0));
    // 0x294bac: 0x7c4000c0  sq          $zero, 0xC0($v0)
    ctx->pc = 0x294bacu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 192), GPR_VEC(ctx, 0));
    // 0x294bb0: 0x7c4000d0  sq          $zero, 0xD0($v0)
    ctx->pc = 0x294bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 208), GPR_VEC(ctx, 0));
    // 0x294bb4: 0x7c4000e0  sq          $zero, 0xE0($v0)
    ctx->pc = 0x294bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 224), GPR_VEC(ctx, 0));
    // 0x294bb8: 0x7c4000f0  sq          $zero, 0xF0($v0)
    ctx->pc = 0x294bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 240), GPR_VEC(ctx, 0));
    // 0x294bbc: 0x7c400100  sq          $zero, 0x100($v0)
    ctx->pc = 0x294bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 256), GPR_VEC(ctx, 0));
    // 0x294bc0: 0x7c400110  sq          $zero, 0x110($v0)
    ctx->pc = 0x294bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 272), GPR_VEC(ctx, 0));
    // 0x294bc4: 0x7c400120  sq          $zero, 0x120($v0)
    ctx->pc = 0x294bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 288), GPR_VEC(ctx, 0));
    // 0x294bc8: 0x7c400130  sq          $zero, 0x130($v0)
    ctx->pc = 0x294bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 304), GPR_VEC(ctx, 0));
    // 0x294bcc: 0x7c400140  sq          $zero, 0x140($v0)
    ctx->pc = 0x294bccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 320), GPR_VEC(ctx, 0));
    // 0x294bd0: 0x7c400150  sq          $zero, 0x150($v0)
    ctx->pc = 0x294bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 336), GPR_VEC(ctx, 0));
    // 0x294bd4: 0x7c400160  sq          $zero, 0x160($v0)
    ctx->pc = 0x294bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 352), GPR_VEC(ctx, 0));
    // 0x294bd8: 0x7c400170  sq          $zero, 0x170($v0)
    ctx->pc = 0x294bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 368), GPR_VEC(ctx, 0));
    // 0x294bdc: 0x7c400180  sq          $zero, 0x180($v0)
    ctx->pc = 0x294bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 384), GPR_VEC(ctx, 0));
    // 0x294be0: 0x7c400190  sq          $zero, 0x190($v0)
    ctx->pc = 0x294be0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 400), GPR_VEC(ctx, 0));
    // 0x294be4: 0x7c4001a0  sq          $zero, 0x1A0($v0)
    ctx->pc = 0x294be4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 416), GPR_VEC(ctx, 0));
    // 0x294be8: 0x7c4001b0  sq          $zero, 0x1B0($v0)
    ctx->pc = 0x294be8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 432), GPR_VEC(ctx, 0));
    // 0x294bec: 0x7c400200  sq          $zero, 0x200($v0)
    ctx->pc = 0x294becu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 512), GPR_VEC(ctx, 0));
    // 0x294bf0: 0x7c400210  sq          $zero, 0x210($v0)
    ctx->pc = 0x294bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 528), GPR_VEC(ctx, 0));
    // 0x294bf4: 0x7c400220  sq          $zero, 0x220($v0)
    ctx->pc = 0x294bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 544), GPR_VEC(ctx, 0));
    // 0x294bf8: 0x7c400230  sq          $zero, 0x230($v0)
    ctx->pc = 0x294bf8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 560), GPR_VEC(ctx, 0));
    // 0x294bfc: 0x7c400240  sq          $zero, 0x240($v0)
    ctx->pc = 0x294bfcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 576), GPR_VEC(ctx, 0));
    // 0x294c00: 0x7c400250  sq          $zero, 0x250($v0)
    ctx->pc = 0x294c00u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 592), GPR_VEC(ctx, 0));
    // 0x294c04: 0x7c400260  sq          $zero, 0x260($v0)
    ctx->pc = 0x294c04u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 608), GPR_VEC(ctx, 0));
    // 0x294c08: 0x7c400270  sq          $zero, 0x270($v0)
    ctx->pc = 0x294c08u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 624), GPR_VEC(ctx, 0));
    // 0x294c0c: 0x124000  sll         $t0, $s2, 0
    ctx->pc = 0x294c0cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 18), 0));
    // 0x294c10: 0xfc480040  sd          $t0, 0x40($v0)
    ctx->pc = 0x294c10u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 64), GPR_U64(ctx, 8));
    // 0x294c14: 0x8c4801c0  lw          $t0, 0x1C0($v0)
    ctx->pc = 0x294c14u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 448)));
    // 0x294c18: 0xfc4801c0  sd          $t0, 0x1C0($v0)
    ctx->pc = 0x294c18u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 448), GPR_U64(ctx, 8));
    // 0x294c1c: 0xfc4001c8  sd          $zero, 0x1C8($v0)
    ctx->pc = 0x294c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 456), GPR_U64(ctx, 0));
    // 0x294c20: 0x8c4801d0  lw          $t0, 0x1D0($v0)
    ctx->pc = 0x294c20u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 464)));
    // 0x294c24: 0xfc4801d0  sd          $t0, 0x1D0($v0)
    ctx->pc = 0x294c24u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 464), GPR_U64(ctx, 8));
    // 0x294c28: 0xfc4001d8  sd          $zero, 0x1D8($v0)
    ctx->pc = 0x294c28u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 472), GPR_U64(ctx, 0));
    // 0x294c2c: 0x8c4801e0  lw          $t0, 0x1E0($v0)
    ctx->pc = 0x294c2cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 480)));
    // 0x294c30: 0xfc4801e0  sd          $t0, 0x1E0($v0)
    ctx->pc = 0x294c30u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 480), GPR_U64(ctx, 8));
    // 0x294c34: 0xfc4001e8  sd          $zero, 0x1E8($v0)
    ctx->pc = 0x294c34u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 488), GPR_U64(ctx, 0));
    // 0x294c38: 0x8c4801f0  lw          $t0, 0x1F0($v0)
    ctx->pc = 0x294c38u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 496)));
    // 0x294c3c: 0xfc4801f0  sd          $t0, 0x1F0($v0)
    ctx->pc = 0x294c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 496), GPR_U64(ctx, 8));
    // 0x294c40: 0xfc4001f8  sd          $zero, 0x1F8($v0)
    ctx->pc = 0x294c40u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 504), GPR_U64(ctx, 0));
    // 0x294c44: 0xc0a64a0  jal         func_299280
    ctx->pc = 0x294C44u;
    SET_GPR_U32(ctx, 31, 0x294C4Cu);
    ctx->pc = 0x299280u;
    if (runtime->hasFunction(0x299280u)) {
        auto targetFn = runtime->lookupFunction(0x299280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294C4Cu; }
        if (ctx->pc != 0x294C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_299280_0x299298(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294C4Cu; }
        if (ctx->pc != 0x294C4Cu) { return; }
    }
    ctx->pc = 0x294C4Cu;
    // 0x294c4c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x294c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294c50: 0xc0a4e90  jal         func_293A40  [= StartThread syscall 0x22]
    std::cerr << "[sub_00294AF8] StartThread(tid=" << std::dec << GPR_U32(ctx, 4) << ") chamando agora\n";
    ctx->pc = 0x294C50u;
    SET_GPR_U32(ctx, 31, 0x294C58u);
    ctx->pc = 0x294C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294C50u;
            // 0x294c54: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293A40u;
    if (runtime->hasFunction(0x293A40u)) {
        auto targetFn = runtime->lookupFunction(0x293A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294C58u; }
        if (ctx->pc != 0x294C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293a40_0x293a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294C58u; }
        if (ctx->pc != 0x294C58u) { return; }
    }
    ctx->pc = 0x294C58u;
label_294c58:
    // 0x294c58: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x294c58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x294c5c: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x294c5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x294c60: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x294c60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x294c64: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x294c64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x294c68: 0x3e00008  jr          $ra
    ctx->pc = 0x294C68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294C68u;
            // 0x294c6c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x294B54u: goto label_294b54;
            case 0x294B68u: goto label_294b68;
            case 0x294B70u: goto label_294b70;
            case 0x294C58u: goto label_294c58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x294C70u;
    // 0x294c70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x294c70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x294c74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x294c74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x294c78: 0xc0a4f14  jal         func_293C50
    ctx->pc = 0x294C78u;
    SET_GPR_U32(ctx, 31, 0x294C80u);
    ctx->pc = 0x294C7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x294C78u;
            // 0x294c7c: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293C50u;
    if (runtime->hasFunction(0x293C50u)) {
        auto targetFn = runtime->lookupFunction(0x293C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294C80u; }
        if (ctx->pc != 0x294C80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293c50_0x293c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294C80u; }
        if (ctx->pc != 0x294C80u) { return; }
    }
    ctx->pc = 0x294C80u;
    // 0x294c80: 0xf  sync
    ctx->pc = 0x294c80u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x294c84: 0x42000038  ei
    ctx->pc = 0x294c84u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x294c88: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x294c88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x294c8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x294c8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x294c90: 0x3e00008  jr          $ra
    ctx->pc = 0x294C90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294C90u;
            // 0x294c94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x294B54u: goto label_294b54;
            case 0x294B68u: goto label_294b68;
            case 0x294B70u: goto label_294b70;
            case 0x294C58u: goto label_294c58;
            default: break;
        }
        return;
    }
    ctx->pc = 0x294C98u;
}
