#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_20bd48
// Address: 0x20bd48 - 0x20c1a0
void entry_20bd48_0x20c1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_20bd48_0x20c1a0");
#endif

    ctx->pc = 0x20bd48u;

    // 0x20bd48: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x20bd48u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bd4c: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x20bd4cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bd50: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x20bd50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20bd54: 0x0  nop
    ctx->pc = 0x20bd54u;
    // NOP
label_20bd58:
    // 0x20bd58: 0x2582001f  addiu       $v0, $t4, 0x1F
    ctx->pc = 0x20bd58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 12), 31));
    // 0x20bd5c: 0x6c182a  slt         $v1, $v1, $t4
    ctx->pc = 0x20bd5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x20bd60: 0x25ab0060  addiu       $t3, $t5, 0x60
    ctx->pc = 0x20bd60u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 96));
    // 0x20bd64: 0x183100b  movn        $v0, $t4, $v1
    ctx->pc = 0x20bd64u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 12));
    // 0x20bd68: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x20bd68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20bd6c: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x20bd6cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x20bd70: 0x22880  sll         $a1, $v0, 2
    ctx->pc = 0x20bd70u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20bd74: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x20bd74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x20bd78: 0xab1821  addu        $v1, $a1, $t3
    ctx->pc = 0x20bd78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 11)));
    // 0x20bd7c: 0x1821023  subu        $v0, $t4, $v0
    ctx->pc = 0x20bd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
    // 0x20bd80: 0x462004  sllv        $a0, $a2, $v0
    ctx->pc = 0x20bd80u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 2) & 0x1F));
    // 0x20bd84: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x20bd84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20bd88: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x20bd88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x20bd8c: 0x544000ff  bnel        $v0, $zero, . + 4 + (0xFF << 2)
    ctx->pc = 0x20BD8Cu;
    {
        const bool branch_taken_0x20bd8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20bd8c) {
            ctx->pc = 0x20BD90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20BD8Cu;
            // 0x20bd90: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20C18Cu;
            goto label_20c18c;
        }
    }
    ctx->pc = 0x20BD94u;
    // 0x20bd94: 0x1a51021  addu        $v0, $t5, $a1
    ctx->pc = 0x20bd94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 5)));
    // 0x20bd98: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x20bd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x20bd9c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x20bd9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x20bda0: 0x2300a  movz        $a2, $zero, $v0
    ctx->pc = 0x20bda0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 0));
    // 0x20bda4: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x20bda4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20bda8: 0x104000f7  beqz        $v0, . + 4 + (0xF7 << 2)
    ctx->pc = 0x20BDA8u;
    {
        const bool branch_taken_0x20bda8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BDACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BDA8u;
            // 0x20bdac: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bda8) {
            ctx->pc = 0x20C188u;
            goto label_20c188;
        }
    }
    ctx->pc = 0x20BDB0u;
    // 0x20bdb0: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x20bdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x20bdb4: 0x182001a  div         $zero, $t4, $v0
    ctx->pc = 0x20bdb4u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 12);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x20bdb8: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20BDB8u;
    {
        const bool branch_taken_0x20bdb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bdb8) {
            ctx->pc = 0x20BDBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20BDB8u;
            // 0x20bdbc: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20BDC0u;
            goto label_20bdc0;
        }
    }
    ctx->pc = 0x20BDC0u;
label_20bdc0:
    // 0x20bdc0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x20bdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20bdc4: 0x4812  mflo        $t1
    ctx->pc = 0x20bdc4u;
    SET_GPR_U64(ctx, 9, ctx->lo);
    // 0x20bdc8: 0x5010  mfhi        $t2
    ctx->pc = 0x20bdc8u;
    SET_GPR_U64(ctx, 10, ctx->hi);
    // 0x20bdcc: 0x15220034  bne         $t1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x20BDCCu;
    {
        const bool branch_taken_0x20bdcc = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x20BDD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BDCCu;
            // 0x20bdd0: 0x120402d  daddu       $t0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bdcc) {
            ctx->pc = 0x20BEA0u;
            goto label_20bea0;
        }
    }
    ctx->pc = 0x20BDD4u;
    // 0x20bdd4: 0x114900ec  beq         $t2, $t1, . + 4 + (0xEC << 2)
    ctx->pc = 0x20BDD4u;
    {
        const bool branch_taken_0x20bdd4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 9));
        ctx->pc = 0x20BDD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BDD4u;
            // 0x20bdd8: 0x29420005  slti        $v0, $t2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bdd4) {
            ctx->pc = 0x20C188u;
            goto label_20c188;
        }
    }
    ctx->pc = 0x20BDDCu;
    // 0x20bddc: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x20BDDCu;
    {
        const bool branch_taken_0x20bddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BDE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BDDCu;
            // 0x20bde0: 0x25470001  addiu       $a3, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bddc) {
            ctx->pc = 0x20BE40u;
            goto label_20be40;
        }
    }
    ctx->pc = 0x20BDE4u;
    // 0x20bde4: 0x194000e8  blez        $t2, . + 4 + (0xE8 << 2)
    ctx->pc = 0x20BDE4u;
    {
        const bool branch_taken_0x20bde4 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x20BDE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BDE4u;
            // 0x20bde8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bde4) {
            ctx->pc = 0x20C188u;
            goto label_20c188;
        }
    }
    ctx->pc = 0x20BDECu;
    // 0x20bdec: 0x0  nop
    ctx->pc = 0x20bdecu;
    // NOP
label_20bdf0:
    // 0x20bdf0: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x20bdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x20bdf4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x20bdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20bdf8: 0x1031018  mult        $v0, $t0, $v1
    ctx->pc = 0x20bdf8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x20bdfc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20bdfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20be00: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x20be00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x20be04: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x20be04u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x20be08: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x20be08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x20be0c: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x20be0cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x20be10: 0x652804  sllv        $a1, $a1, $v1
    ctx->pc = 0x20be10u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
    // 0x20be14: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x20be14u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x20be18: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x20be18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x20be1c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20be1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20be20: 0xea302a  slt         $a2, $a3, $t2
    ctx->pc = 0x20be20u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x20be24: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x20be24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x20be28: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20be28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20be2c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x20be2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x20be30: 0x14c0ffef  bnez        $a2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x20BE30u;
    {
        const bool branch_taken_0x20be30 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BE30u;
            // 0x20be34: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20be30) {
            ctx->pc = 0x20BDF0u;
            runtime->cooperativeGuestYield();
            goto label_20bdf0;
        }
    }
    ctx->pc = 0x20BE38u;
    // 0x20be38: 0x100000d4  b           . + 4 + (0xD4 << 2)
    ctx->pc = 0x20BE38u;
    {
        const bool branch_taken_0x20be38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BE3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BE38u;
            // 0x20be3c: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20be38) {
            ctx->pc = 0x20C18Cu;
            goto label_20c18c;
        }
    }
    ctx->pc = 0x20BE40u;
label_20be40:
    // 0x20be40: 0x28e2000b  slti        $v0, $a3, 0xB
    ctx->pc = 0x20be40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x20be44: 0x504000d1  beql        $v0, $zero, . + 4 + (0xD1 << 2)
    ctx->pc = 0x20BE44u;
    {
        const bool branch_taken_0x20be44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20be44) {
            ctx->pc = 0x20BE48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20BE44u;
            // 0x20be48: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20C18Cu;
            goto label_20c18c;
        }
    }
    ctx->pc = 0x20BE4Cu;
    // 0x20be4c: 0x0  nop
    ctx->pc = 0x20be4cu;
    // NOP
label_20be50:
    // 0x20be50: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x20be50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x20be54: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x20be54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20be58: 0x1031018  mult        $v0, $t0, $v1
    ctx->pc = 0x20be58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x20be5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20be5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20be60: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x20be60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x20be64: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x20be64u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x20be68: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x20be68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x20be6c: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x20be6cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x20be70: 0x652804  sllv        $a1, $a1, $v1
    ctx->pc = 0x20be70u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
    // 0x20be74: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x20be74u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x20be78: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x20be78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x20be7c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20be7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20be80: 0x28e6000b  slti        $a2, $a3, 0xB
    ctx->pc = 0x20be80u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x20be84: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x20be84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x20be88: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20be88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20be8c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x20be8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x20be90: 0x14c0ffef  bnez        $a2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x20BE90u;
    {
        const bool branch_taken_0x20be90 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BE90u;
            // 0x20be94: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20be90) {
            ctx->pc = 0x20BE50u;
            runtime->cooperativeGuestYield();
            goto label_20be50;
        }
    }
    ctx->pc = 0x20BE98u;
    // 0x20be98: 0x100000bc  b           . + 4 + (0xBC << 2)
    ctx->pc = 0x20BE98u;
    {
        const bool branch_taken_0x20be98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BE98u;
            // 0x20be9c: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20be98) {
            ctx->pc = 0x20C18Cu;
            goto label_20c18c;
        }
    }
    ctx->pc = 0x20BEA0u;
label_20bea0:
    // 0x20bea0: 0x15420033  bne         $t2, $v0, . + 4 + (0x33 << 2)
    ctx->pc = 0x20BEA0u;
    {
        const bool branch_taken_0x20bea0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 2));
        ctx->pc = 0x20BEA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BEA0u;
            // 0x20bea4: 0x29240005  slti        $a0, $t1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bea0) {
            ctx->pc = 0x20BF70u;
            goto label_20bf70;
        }
    }
    ctx->pc = 0x20BEA8u;
    // 0x20bea8: 0x29220005  slti        $v0, $t1, 0x5
    ctx->pc = 0x20bea8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x20beac: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x20BEACu;
    {
        const bool branch_taken_0x20beac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BEB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BEACu;
            // 0x20beb0: 0x25270001  addiu       $a3, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20beac) {
            ctx->pc = 0x20BF10u;
            goto label_20bf10;
        }
    }
    ctx->pc = 0x20BEB4u;
    // 0x20beb4: 0x192000b4  blez        $t1, . + 4 + (0xB4 << 2)
    ctx->pc = 0x20BEB4u;
    {
        const bool branch_taken_0x20beb4 = (GPR_S32(ctx, 9) <= 0);
        ctx->pc = 0x20BEB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BEB4u;
            // 0x20beb8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20beb4) {
            ctx->pc = 0x20C188u;
            goto label_20c188;
        }
    }
    ctx->pc = 0x20BEBCu;
    // 0x20bebc: 0x0  nop
    ctx->pc = 0x20bebcu;
    // NOP
label_20bec0:
    // 0x20bec0: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x20bec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x20bec4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x20bec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20bec8: 0xe31018  mult        $v0, $a3, $v1
    ctx->pc = 0x20bec8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x20becc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20beccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20bed0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x20bed0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x20bed4: 0xe9302a  slt         $a2, $a3, $t1
    ctx->pc = 0x20bed4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
    // 0x20bed8: 0x4a1821  addu        $v1, $v0, $t2
    ctx->pc = 0x20bed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x20bedc: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x20bedcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x20bee0: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x20bee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x20bee4: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x20bee4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x20bee8: 0x652804  sllv        $a1, $a1, $v1
    ctx->pc = 0x20bee8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
    // 0x20beec: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x20beecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x20bef0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20bef0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20bef4: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x20bef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x20bef8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20bef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20befc: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x20befcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x20bf00: 0x14c0ffef  bnez        $a2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x20BF00u;
    {
        const bool branch_taken_0x20bf00 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BF00u;
            // 0x20bf04: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bf00) {
            ctx->pc = 0x20BEC0u;
            runtime->cooperativeGuestYield();
            goto label_20bec0;
        }
    }
    ctx->pc = 0x20BF08u;
    // 0x20bf08: 0x100000a0  b           . + 4 + (0xA0 << 2)
    ctx->pc = 0x20BF08u;
    {
        const bool branch_taken_0x20bf08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BF0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BF08u;
            // 0x20bf0c: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bf08) {
            ctx->pc = 0x20C18Cu;
            goto label_20c18c;
        }
    }
    ctx->pc = 0x20BF10u;
label_20bf10:
    // 0x20bf10: 0x28e2000b  slti        $v0, $a3, 0xB
    ctx->pc = 0x20bf10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x20bf14: 0x5040009d  beql        $v0, $zero, . + 4 + (0x9D << 2)
    ctx->pc = 0x20BF14u;
    {
        const bool branch_taken_0x20bf14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20bf14) {
            ctx->pc = 0x20BF18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20BF14u;
            // 0x20bf18: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20C18Cu;
            goto label_20c18c;
        }
    }
    ctx->pc = 0x20BF1Cu;
    // 0x20bf1c: 0x0  nop
    ctx->pc = 0x20bf1cu;
    // NOP
label_20bf20:
    // 0x20bf20: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x20bf20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x20bf24: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x20bf24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20bf28: 0xe31018  mult        $v0, $a3, $v1
    ctx->pc = 0x20bf28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x20bf2c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20bf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20bf30: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x20bf30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x20bf34: 0x28e6000b  slti        $a2, $a3, 0xB
    ctx->pc = 0x20bf34u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x20bf38: 0x4a1821  addu        $v1, $v0, $t2
    ctx->pc = 0x20bf38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 10)));
    // 0x20bf3c: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x20bf3cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x20bf40: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x20bf40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x20bf44: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x20bf44u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x20bf48: 0x652804  sllv        $a1, $a1, $v1
    ctx->pc = 0x20bf48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
    // 0x20bf4c: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x20bf4cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x20bf50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20bf50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20bf54: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x20bf54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x20bf58: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20bf58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20bf5c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x20bf5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x20bf60: 0x14c0ffef  bnez        $a2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x20BF60u;
    {
        const bool branch_taken_0x20bf60 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BF60u;
            // 0x20bf64: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bf60) {
            ctx->pc = 0x20BF20u;
            runtime->cooperativeGuestYield();
            goto label_20bf20;
        }
    }
    ctx->pc = 0x20BF68u;
    // 0x20bf68: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x20BF68u;
    {
        const bool branch_taken_0x20bf68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BF68u;
            // 0x20bf6c: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bf68) {
            ctx->pc = 0x20C18Cu;
            goto label_20c18c;
        }
    }
    ctx->pc = 0x20BF70u;
label_20bf70:
    // 0x20bf70: 0x10800021  beqz        $a0, . + 4 + (0x21 << 2)
    ctx->pc = 0x20BF70u;
    {
        const bool branch_taken_0x20bf70 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BF70u;
            // 0x20bf74: 0x29420006  slti        $v0, $t2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bf70) {
            ctx->pc = 0x20BFF8u;
            goto label_20bff8;
        }
    }
    ctx->pc = 0x20BF78u;
    // 0x20bf78: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x20BF78u;
    {
        const bool branch_taken_0x20bf78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BF7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BF78u;
            // 0x20bf7c: 0x29230006  slti        $v1, $t1, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bf78) {
            ctx->pc = 0x20BFFCu;
            goto label_20bffc;
        }
    }
    ctx->pc = 0x20BF80u;
    // 0x20bf80: 0x5200081  bltz        $t1, . + 4 + (0x81 << 2)
    ctx->pc = 0x20BF80u;
    {
        const bool branch_taken_0x20bf80 = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x20BF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BF80u;
            // 0x20bf84: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bf80) {
            ctx->pc = 0x20C188u;
            goto label_20c188;
        }
    }
    ctx->pc = 0x20BF88u;
    // 0x20bf88: 0x2942000b  slti        $v0, $t2, 0xB
    ctx->pc = 0x20bf88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x20bf8c: 0x0  nop
    ctx->pc = 0x20bf8cu;
    // NOP
label_20bf90:
    // 0x20bf90: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x20BF90u;
    {
        const bool branch_taken_0x20bf90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BF90u;
            // 0x20bf94: 0x140402d  daddu       $t0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bf90) {
            ctx->pc = 0x20BFE0u;
            goto label_20bfe0;
        }
    }
    ctx->pc = 0x20BF98u;
label_20bf98:
    // 0x20bf98: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x20bf98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x20bf9c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x20bf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20bfa0: 0xe31018  mult        $v0, $a3, $v1
    ctx->pc = 0x20bfa0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x20bfa4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20bfa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20bfa8: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x20bfa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x20bfac: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x20bfacu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x20bfb0: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x20bfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x20bfb4: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x20bfb4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x20bfb8: 0x652804  sllv        $a1, $a1, $v1
    ctx->pc = 0x20bfb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
    // 0x20bfbc: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x20bfbcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x20bfc0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x20bfc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x20bfc4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20bfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20bfc8: 0x2906000b  slti        $a2, $t0, 0xB
    ctx->pc = 0x20bfc8u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x20bfcc: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x20bfccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x20bfd0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20bfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20bfd4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x20bfd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x20bfd8: 0x14c0ffef  bnez        $a2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x20BFD8u;
    {
        const bool branch_taken_0x20bfd8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x20BFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BFD8u;
            // 0x20bfdc: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bfd8) {
            ctx->pc = 0x20BF98u;
            runtime->cooperativeGuestYield();
            goto label_20bf98;
        }
    }
    ctx->pc = 0x20BFE0u;
label_20bfe0:
    // 0x20bfe0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x20bfe0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x20bfe4: 0x127102a  slt         $v0, $t1, $a3
    ctx->pc = 0x20bfe4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x20bfe8: 0x1040ffe9  beqz        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x20BFE8u;
    {
        const bool branch_taken_0x20bfe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BFE8u;
            // 0x20bfec: 0x2942000b  slti        $v0, $t2, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)11) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bfe8) {
            ctx->pc = 0x20BF90u;
            runtime->cooperativeGuestYield();
            goto label_20bf90;
        }
    }
    ctx->pc = 0x20BFF0u;
    // 0x20bff0: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x20BFF0u;
    {
        const bool branch_taken_0x20bff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20BFF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BFF0u;
            // 0x20bff4: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bff0) {
            ctx->pc = 0x20C18Cu;
            goto label_20c18c;
        }
    }
    ctx->pc = 0x20BFF8u;
label_20bff8:
    // 0x20bff8: 0x29230006  slti        $v1, $t1, 0x6
    ctx->pc = 0x20bff8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)6) ? 1 : 0);
label_20bffc:
    // 0x20bffc: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x20BFFCu;
    {
        const bool branch_taken_0x20bffc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20BFFCu;
            // 0x20c000: 0x29420006  slti        $v0, $t2, 0x6 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)6) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20bffc) {
            ctx->pc = 0x20C088u;
            goto label_20c088;
        }
    }
    ctx->pc = 0x20C004u;
    // 0x20c004: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x20C004u;
    {
        const bool branch_taken_0x20c004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C004u;
            // 0x20c008: 0x120382d  daddu       $a3, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c004) {
            ctx->pc = 0x20C088u;
            goto label_20c088;
        }
    }
    ctx->pc = 0x20C00Cu;
    // 0x20c00c: 0x28e2000b  slti        $v0, $a3, 0xB
    ctx->pc = 0x20c00cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x20c010: 0x5040005e  beql        $v0, $zero, . + 4 + (0x5E << 2)
    ctx->pc = 0x20C010u;
    {
        const bool branch_taken_0x20c010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c010) {
            ctx->pc = 0x20C014u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20C010u;
            // 0x20c014: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20C18Cu;
            goto label_20c18c;
        }
    }
    ctx->pc = 0x20C018u;
    // 0x20c018: 0x2942000b  slti        $v0, $t2, 0xB
    ctx->pc = 0x20c018u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x20c01c: 0x0  nop
    ctx->pc = 0x20c01cu;
    // NOP
label_20c020:
    // 0x20c020: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x20C020u;
    {
        const bool branch_taken_0x20c020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C020u;
            // 0x20c024: 0x140402d  daddu       $t0, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c020) {
            ctx->pc = 0x20C070u;
            goto label_20c070;
        }
    }
    ctx->pc = 0x20C028u;
label_20c028:
    // 0x20c028: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x20c028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x20c02c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x20c02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20c030: 0xe31018  mult        $v0, $a3, $v1
    ctx->pc = 0x20c030u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x20c034: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20c034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c038: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x20c038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x20c03c: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x20c03cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x20c040: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x20c040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x20c044: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x20c044u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x20c048: 0x652804  sllv        $a1, $a1, $v1
    ctx->pc = 0x20c048u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
    // 0x20c04c: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x20c04cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x20c050: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x20c050u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x20c054: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20c054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20c058: 0x2906000b  slti        $a2, $t0, 0xB
    ctx->pc = 0x20c058u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x20c05c: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x20c05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x20c060: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20c060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20c064: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x20c064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x20c068: 0x14c0ffef  bnez        $a2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x20C068u;
    {
        const bool branch_taken_0x20c068 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C068u;
            // 0x20c06c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c068) {
            ctx->pc = 0x20C028u;
            runtime->cooperativeGuestYield();
            goto label_20c028;
        }
    }
    ctx->pc = 0x20C070u;
label_20c070:
    // 0x20c070: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x20c070u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x20c074: 0x28e2000b  slti        $v0, $a3, 0xB
    ctx->pc = 0x20c074u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x20c078: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x20C078u;
    {
        const bool branch_taken_0x20c078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C078u;
            // 0x20c07c: 0x2942000b  slti        $v0, $t2, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)11) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c078) {
            ctx->pc = 0x20C020u;
            runtime->cooperativeGuestYield();
            goto label_20c020;
        }
    }
    ctx->pc = 0x20C080u;
    // 0x20c080: 0x10000042  b           . + 4 + (0x42 << 2)
    ctx->pc = 0x20C080u;
    {
        const bool branch_taken_0x20c080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C080u;
            // 0x20c084: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c080) {
            ctx->pc = 0x20C18Cu;
            goto label_20c18c;
        }
    }
    ctx->pc = 0x20C088u;
label_20c088:
    // 0x20c088: 0x1080001f  beqz        $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x20C088u;
    {
        const bool branch_taken_0x20c088 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C08Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C088u;
            // 0x20c08c: 0x29420005  slti        $v0, $t2, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c088) {
            ctx->pc = 0x20C108u;
            goto label_20c108;
        }
    }
    ctx->pc = 0x20C090u;
    // 0x20c090: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x20C090u;
    {
        const bool branch_taken_0x20c090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c090) {
            ctx->pc = 0x20C108u;
            goto label_20c108;
        }
    }
    ctx->pc = 0x20C098u;
    // 0x20c098: 0x520003b  bltz        $t1, . + 4 + (0x3B << 2)
    ctx->pc = 0x20C098u;
    {
        const bool branch_taken_0x20c098 = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x20C09Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C098u;
            // 0x20c09c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c098) {
            ctx->pc = 0x20C188u;
            goto label_20c188;
        }
    }
    ctx->pc = 0x20C0A0u;
label_20c0a0:
    // 0x20c0a0: 0x5400013  bltz        $t2, . + 4 + (0x13 << 2)
    ctx->pc = 0x20C0A0u;
    {
        const bool branch_taken_0x20c0a0 = (GPR_S32(ctx, 10) < 0);
        ctx->pc = 0x20C0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C0A0u;
            // 0x20c0a4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c0a0) {
            ctx->pc = 0x20C0F0u;
            goto label_20c0f0;
        }
    }
    ctx->pc = 0x20C0A8u;
label_20c0a8:
    // 0x20c0a8: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x20c0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x20c0ac: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x20c0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20c0b0: 0xe31018  mult        $v0, $a3, $v1
    ctx->pc = 0x20c0b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x20c0b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20c0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c0b8: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x20c0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x20c0bc: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x20c0bcu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x20c0c0: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x20c0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x20c0c4: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x20c0c4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x20c0c8: 0x652804  sllv        $a1, $a1, $v1
    ctx->pc = 0x20c0c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
    // 0x20c0cc: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x20c0ccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x20c0d0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x20c0d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x20c0d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20c0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20c0d8: 0x148302a  slt         $a2, $t2, $t0
    ctx->pc = 0x20c0d8u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x20c0dc: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x20c0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x20c0e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20c0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20c0e4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x20c0e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x20c0e8: 0x10c0ffef  beqz        $a2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x20C0E8u;
    {
        const bool branch_taken_0x20c0e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C0E8u;
            // 0x20c0ec: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c0e8) {
            ctx->pc = 0x20C0A8u;
            runtime->cooperativeGuestYield();
            goto label_20c0a8;
        }
    }
    ctx->pc = 0x20C0F0u;
label_20c0f0:
    // 0x20c0f0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x20c0f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x20c0f4: 0x127102a  slt         $v0, $t1, $a3
    ctx->pc = 0x20c0f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x20c0f8: 0x1040ffe9  beqz        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x20C0F8u;
    {
        const bool branch_taken_0x20c0f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c0f8) {
            ctx->pc = 0x20C0A0u;
            runtime->cooperativeGuestYield();
            goto label_20c0a0;
        }
    }
    ctx->pc = 0x20C100u;
    // 0x20c100: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x20C100u;
    {
        const bool branch_taken_0x20c100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C100u;
            // 0x20c104: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c100) {
            ctx->pc = 0x20C18Cu;
            goto label_20c18c;
        }
    }
    ctx->pc = 0x20C108u;
label_20c108:
    // 0x20c108: 0x54600020  bnel        $v1, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x20C108u;
    {
        const bool branch_taken_0x20c108 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c108) {
            ctx->pc = 0x20C10Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20C108u;
            // 0x20c10c: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20C18Cu;
            goto label_20c18c;
        }
    }
    ctx->pc = 0x20C110u;
    // 0x20c110: 0x29420005  slti        $v0, $t2, 0x5
    ctx->pc = 0x20c110u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x20c114: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x20C114u;
    {
        const bool branch_taken_0x20c114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C114u;
            // 0x20c118: 0x2922000b  slti        $v0, $t1, 0xB (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)11) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c114) {
            ctx->pc = 0x20C188u;
            goto label_20c188;
        }
    }
    ctx->pc = 0x20C11Cu;
    // 0x20c11c: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x20c11cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20c120: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x20C120u;
    {
        const bool branch_taken_0x20c120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c120) {
            ctx->pc = 0x20C124u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20C120u;
            // 0x20c124: 0x258c0001  addiu       $t4, $t4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20C18Cu;
            goto label_20c18c;
        }
    }
    ctx->pc = 0x20C128u;
label_20c128:
    // 0x20c128: 0x5400013  bltz        $t2, . + 4 + (0x13 << 2)
    ctx->pc = 0x20C128u;
    {
        const bool branch_taken_0x20c128 = (GPR_S32(ctx, 10) < 0);
        ctx->pc = 0x20C12Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C128u;
            // 0x20c12c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c128) {
            ctx->pc = 0x20C178u;
            goto label_20c178;
        }
    }
    ctx->pc = 0x20C130u;
label_20c130:
    // 0x20c130: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x20c130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x20c134: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x20c134u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20c138: 0xe31018  mult        $v0, $a3, $v1
    ctx->pc = 0x20c138u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x20c13c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20c13cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20c140: 0x481821  addu        $v1, $v0, $t0
    ctx->pc = 0x20c140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x20c144: 0x83202a  slt         $a0, $a0, $v1
    ctx->pc = 0x20c144u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x20c148: 0x2462001f  addiu       $v0, $v1, 0x1F
    ctx->pc = 0x20c148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 31));
    // 0x20c14c: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x20c14cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x20c150: 0x652804  sllv        $a1, $a1, $v1
    ctx->pc = 0x20c150u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 3) & 0x1F));
    // 0x20c154: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x20c154u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x20c158: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x20c158u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x20c15c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20c15cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20c160: 0x148302a  slt         $a2, $t2, $t0
    ctx->pc = 0x20c160u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 10) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x20c164: 0x4b1021  addu        $v0, $v0, $t3
    ctx->pc = 0x20c164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x20c168: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x20c168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20c16c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x20c16cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x20c170: 0x10c0ffef  beqz        $a2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x20C170u;
    {
        const bool branch_taken_0x20c170 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C170u;
            // 0x20c174: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c170) {
            ctx->pc = 0x20C130u;
            runtime->cooperativeGuestYield();
            goto label_20c130;
        }
    }
    ctx->pc = 0x20C178u;
label_20c178:
    // 0x20c178: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x20c178u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x20c17c: 0x28e2000b  slti        $v0, $a3, 0xB
    ctx->pc = 0x20c17cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)11) ? 1 : 0);
    // 0x20c180: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x20C180u;
    {
        const bool branch_taken_0x20c180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c180) {
            ctx->pc = 0x20C128u;
            runtime->cooperativeGuestYield();
            goto label_20c128;
        }
    }
    ctx->pc = 0x20C188u;
label_20c188:
    // 0x20c188: 0x258c0001  addiu       $t4, $t4, 0x1
    ctx->pc = 0x20c188u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 1));
label_20c18c:
    // 0x20c18c: 0x29820079  slti        $v0, $t4, 0x79
    ctx->pc = 0x20c18cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 12) < (int64_t)(int32_t)121) ? 1 : 0);
    // 0x20c190: 0x1440fef1  bnez        $v0, . + 4 + (-0x10F << 2)
    ctx->pc = 0x20C190u;
    {
        const bool branch_taken_0x20c190 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C190u;
            // 0x20c194: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c190) {
            ctx->pc = 0x20BD58u;
            runtime->cooperativeGuestYield();
            goto label_20bd58;
        }
    }
    ctx->pc = 0x20C198u;
    // 0x20c198: 0x3e00008  jr          $ra
    ctx->pc = 0x20C198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20BD58u: goto label_20bd58;
            case 0x20BDC0u: goto label_20bdc0;
            case 0x20BDF0u: goto label_20bdf0;
            case 0x20BE40u: goto label_20be40;
            case 0x20BE50u: goto label_20be50;
            case 0x20BEA0u: goto label_20bea0;
            case 0x20BEC0u: goto label_20bec0;
            case 0x20BF10u: goto label_20bf10;
            case 0x20BF20u: goto label_20bf20;
            case 0x20BF70u: goto label_20bf70;
            case 0x20BF90u: goto label_20bf90;
            case 0x20BF98u: goto label_20bf98;
            case 0x20BFE0u: goto label_20bfe0;
            case 0x20BFF8u: goto label_20bff8;
            case 0x20BFFCu: goto label_20bffc;
            case 0x20C020u: goto label_20c020;
            case 0x20C028u: goto label_20c028;
            case 0x20C070u: goto label_20c070;
            case 0x20C088u: goto label_20c088;
            case 0x20C0A0u: goto label_20c0a0;
            case 0x20C0A8u: goto label_20c0a8;
            case 0x20C0F0u: goto label_20c0f0;
            case 0x20C108u: goto label_20c108;
            case 0x20C128u: goto label_20c128;
            case 0x20C130u: goto label_20c130;
            case 0x20C178u: goto label_20c178;
            case 0x20C188u: goto label_20c188;
            case 0x20C18Cu: goto label_20c18c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20C1A0u;
}
