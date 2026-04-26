#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013FAB8
// Address: 0x13fab8 - 0x13fb48
void sub_0013FAB8_0x13fab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013FAB8_0x13fab8");
#endif

    ctx->pc = 0x13fab8u;

    fprintf(stderr, "[13FAB8] ENTRADA a0=0x%x\n", GPR_U32(ctx,4)); fflush(stderr);
    // 0x13fab8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13fab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13fabc: 0x3c05002d  lui         $a1, 0x2D
    ctx->pc = 0x13fabcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)45 << 16));
    // 0x13fac0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x13fac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x13fac4: 0x24a2bbb0  addiu       $v0, $a1, -0x4450
    ctx->pc = 0x13fac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949808));
    // 0x13fac8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13fac8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13facc: 0x8cb0bbb0  lw          $s0, -0x4450($a1)
    ctx->pc = 0x13faccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294949808)));
    // 0x13fad0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x13fad0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    {
        uint32_t sentinel_addr = ADD32(GPR_U32(ctx,5), 4294949808);
        fprintf(stderr, "[13FAB8] sentinel_addr=0x%x READ32(sentinel)=0x%x (s0=0x%x)\n",
            sentinel_addr, GPR_U32(ctx,16), GPR_U32(ctx,16));
        fprintf(stderr, "[13FAB8] s1(a0)=0x%x, s1+4=0x%x\n",
            GPR_U32(ctx,17), READ32(ADD32(GPR_U32(ctx,17), 4)));
        fflush(stderr);
    }
    // 0x13fad4: 0x1202000c  beq         $s0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x13FAD4u;
    {
        const bool branch_taken_0x13fad4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x13FAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FAD4u;
            // 0x13fad8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fad4) {
            ctx->pc = 0x13FB08u;
            goto label_13fb08;
        }
    }
    ctx->pc = 0x13FADCu;
    // 0x13fadc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x13fadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x13fae0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x13FAE0u;
    {
        const bool branch_taken_0x13fae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FAE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FAE0u;
            // 0x13fae4: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fae0) {
            ctx->pc = 0x13FAF8u;
            goto label_13faf8;
        }
    }
    ctx->pc = 0x13FAE8u;
    { static int loop_cnt_13fab8 = 0; loop_cnt_13fab8 = 0; }
label_13fae8:
    {
        static int loop_cnt_13fab8 = 0;
        loop_cnt_13fab8++;
        if (loop_cnt_13fab8 <= 5 || loop_cnt_13fab8 % 100000 == 0) {
            fprintf(stderr, "[13FAB8] loop iter=%d s0=0x%x s0+4=0x%x\n",
                loop_cnt_13fab8, GPR_U32(ctx,16),
                READ32(ADD32(GPR_U32(ctx,16), 4))); fflush(stderr);
        }
        // -----------------------------------------------------------------
        // TRAVA DE SEGURANCA (2026-04-26 PARTE 3)
        // -----------------------------------------------------------------
        // Se o loop passar de 1 milhao de iteracoes, e provavel que a
        // sentinela em 0x2cbbb0 nao esteja inicializada (Fix 6 do boot stub
        // foi pulado, ordem errada, ou um codepath novo escreveu zero ali).
        // Em vez de travar o PC do usuario indefinidamente, abortamos a
        // funcao e seguimos como se a lista estivesse vazia (goto path de
        // insercao no inicio). Isso pode causar bugs sutis depois, mas
        // permite ver no log onde o problema realmente esta.
        if (loop_cnt_13fab8 > 1000000) {
            fprintf(stderr, "\n[13FAB8] !!! TRAVA DE SEGURANCA DISPARADA !!!\n");
            fprintf(stderr, "[13FAB8] loop excedeu 1M iter — sentinela em 0x2cbbb0 nao inicializada?\n");
            fprintf(stderr, "[13FAB8] *0x2cbbb0 = 0x%x (esperado: 0x2cbbb0 para lista vazia)\n",
                    READ32(0x2cbbb0));
            fprintf(stderr, "[13FAB8] verificar se Fix 6 do boot_stub esta ativo\n");
            fprintf(stderr, "[13FAB8] forcando saida via path 'lista vazia' (label_13fb08)\n");
            fflush(stderr);
            loop_cnt_13fab8 = 0; // reset para nao spammar nas proximas chamadas
            ctx->pc = 0x13FB08u;
            goto label_13fb08;
        }
    }
    // 0x13fae8: 0x24a2bbb0  addiu       $v0, $a1, -0x4450
    ctx->pc = 0x13fae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949808));
    // 0x13faec: 0x12020007  beq         $s0, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13FAECu;
    {
        const bool branch_taken_0x13faec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x13FAF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FAECu;
            // 0x13faf0: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13faec) {
            ctx->pc = 0x13FB0Cu;
            goto label_13fb0c;
        }
    }
    ctx->pc = 0x13FAF4u;
    // 0x13faf4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x13faf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_13faf8:
    // 0x13faf8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x13faf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13fafc: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x13fafcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x13fb00: 0x5440fff9  bnel        $v0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x13FB00u;
    {
        const bool branch_taken_0x13fb00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13fb00) {
            ctx->pc = 0x13FB04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13FB00u;
            // 0x13fb04: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13FAE8u;
            runtime->cooperativeGuestYield();
            goto label_13fae8;
        }
    }
    ctx->pc = 0x13FB08u;
label_13fb08:
    // 0x13fb08: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x13fb08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
label_13fb0c:
    // 0x13fb0c: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x13FB0Cu;
    SET_GPR_U32(ctx, 31, 0x13FB14u);
    ctx->pc = 0x13FB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13FB0Cu;
            // 0x13fb10: 0x8c447910  lw          $a0, 0x7910($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FB14u; }
        if (ctx->pc != 0x13FB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FB14u; }
        if (ctx->pc != 0x13FB14u) { return; }
    }
    ctx->pc = 0x13FB14u;
    // 0x13fb14: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x13fb14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x13fb18: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x13fb18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x13fb1c: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x13fb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
    // 0x13fb20: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x13fb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x13fb24: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x13fb24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x13fb28: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x13fb28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x13fb2c: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x13fb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x13fb30: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x13fb30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13fb34: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13fb34u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13fb38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13fb38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13fb3c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x13fb3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x13fb40: 0x3e00008  jr          $ra
    ctx->pc = 0x13FB40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13FB44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FB40u;
            // 0x13fb44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13FAE8u: goto label_13fae8;
            case 0x13FAF8u: goto label_13faf8;
            case 0x13FB08u: goto label_13fb08;
            case 0x13FB0Cu: goto label_13fb0c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13FB48u;
}
