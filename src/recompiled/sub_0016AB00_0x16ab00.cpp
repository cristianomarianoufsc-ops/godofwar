#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016AB00
// Address: 0x16ab00 - 0x16aeb0
void sub_0016AB00_0x16ab00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016AB00_0x16ab00");
#endif

    ctx->pc = 0x16ab00u;

    // 0x16ab00: 0x27bdf670  addiu       $sp, $sp, -0x990
    ctx->pc = 0x16ab00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294964848));
    // 0x16ab04: 0x7fb00980  sq          $s0, 0x980($sp)
    ctx->pc = 0x16ab04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2432), GPR_VEC(ctx, 16));
    // 0x16ab08: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x16ab08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ab0c: 0x7fb10970  sq          $s1, 0x970($sp)
    ctx->pc = 0x16ab0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2416), GPR_VEC(ctx, 17));
    // 0x16ab10: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16ab10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ab14: 0x7fb30950  sq          $s3, 0x950($sp)
    ctx->pc = 0x16ab14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2384), GPR_VEC(ctx, 19));
    // 0x16ab18: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16ab18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ab1c: 0x7fb20960  sq          $s2, 0x960($sp)
    ctx->pc = 0x16ab1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2400), GPR_VEC(ctx, 18));
    // 0x16ab20: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x16ab20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ab24: 0x7fb40940  sq          $s4, 0x940($sp)
    ctx->pc = 0x16ab24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2368), GPR_VEC(ctx, 20));
    // 0x16ab28: 0x7fb50930  sq          $s5, 0x930($sp)
    ctx->pc = 0x16ab28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 2352), GPR_VEC(ctx, 21));
    // 0x16ab2c: 0xffbf0920  sd          $ra, 0x920($sp)
    ctx->pc = 0x16ab2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 2336), GPR_U64(ctx, 31));
label_16ab30:
    // 0x16ab30: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x16ab30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16ab34: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x16ab34u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x16ab38: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x16ab38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x16ab3c: 0x2e620200  sltiu       $v0, $s3, 0x200
    ctx->pc = 0x16ab3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x16ab40: 0x0  nop
    ctx->pc = 0x16ab40u;
    // NOP
    // 0x16ab44: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16AB44u;
    {
        const bool branch_taken_0x16ab44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16AB48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AB44u;
            // 0x16ab48: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ab44) {
            ctx->pc = 0x16AB30u;
            runtime->cooperativeGuestYield();
            goto label_16ab30;
        }
    }
    ctx->pc = 0x16AB4Cu;
    // 0x16ab4c: 0xae200814  sw          $zero, 0x814($s1)
    ctx->pc = 0x16ab4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2068), GPR_U32(ctx, 0));
    // 0x16ab50: 0x27a40900  addiu       $a0, $sp, 0x900
    ctx->pc = 0x16ab50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2304));
    // 0x16ab54: 0xae200810  sw          $zero, 0x810($s1)
    ctx->pc = 0x16ab54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2064), GPR_U32(ctx, 0));
    // 0x16ab58: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x16ab58u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ab5c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x16ab5cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ab60: 0xc08ee3a  jal         func_23B8E8
    ctx->pc = 0x16AB60u;
    SET_GPR_U32(ctx, 31, 0x16AB68u);
    ctx->pc = 0x16AB64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AB60u;
            // 0x16ab64: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B8E8u;
    if (runtime->hasFunction(0x23B8E8u)) {
        auto targetFn = runtime->lookupFunction(0x23B8E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AB68u; }
        if (ctx->pc != 0x16AB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23b8e8_0x23b988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AB68u; }
        if (ctx->pc != 0x16AB68u) { return; }
    }
    ctx->pc = 0x16AB68u;
label_16ab68:
    // 0x16ab68: 0x8fb00900  lw          $s0, 0x900($sp)
    ctx->pc = 0x16ab68u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2304)));
    // 0x16ab6c: 0x27a30900  addiu       $v1, $sp, 0x900
    ctx->pc = 0x16ab6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 2304));
    // 0x16ab70: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x16ab70u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x16ab74: 0x0  nop
    ctx->pc = 0x16ab74u;
    // NOP
label_16ab78:
    // 0x16ab78: 0x1203000b  beq         $s0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x16AB78u;
    {
        const bool branch_taken_0x16ab78 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x16AB7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AB78u;
            // 0x16ab7c: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ab78) {
            ctx->pc = 0x16ABA8u;
            goto label_16aba8;
        }
    }
    ctx->pc = 0x16AB80u;
    // 0x16ab80: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x16ab80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x16ab84: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x16ab84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x16ab88: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x16AB88u;
    {
        const bool branch_taken_0x16ab88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ab88) {
            ctx->pc = 0x16AB8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16AB88u;
            // 0x16ab8c: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16AB78u;
            runtime->cooperativeGuestYield();
            goto label_16ab78;
        }
    }
    ctx->pc = 0x16AB90u;
    // 0x16ab90: 0x27a20900  addiu       $v0, $sp, 0x900
    ctx->pc = 0x16ab90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 2304));
    // 0x16ab94: 0x12020004  beq         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16AB94u;
    {
        const bool branch_taken_0x16ab94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x16AB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AB94u;
            // 0x16ab98: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ab94) {
            ctx->pc = 0x16ABA8u;
            goto label_16aba8;
        }
    }
    ctx->pc = 0x16AB9Cu;
    // 0x16ab9c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x16ab9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x16aba0: 0x1052000b  beq         $v0, $s2, . + 4 + (0xB << 2)
    ctx->pc = 0x16ABA0u;
    {
        const bool branch_taken_0x16aba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x16ABA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16ABA0u;
            // 0x16aba4: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16aba0) {
            ctx->pc = 0x16ABD0u;
            goto label_16abd0;
        }
    }
    ctx->pc = 0x16ABA8u;
label_16aba8:
    // 0x16aba8: 0xc04f684  jal         func_13DA10
    ctx->pc = 0x16ABA8u;
    SET_GPR_U32(ctx, 31, 0x16ABB0u);
    ctx->pc = 0x16ABACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16ABA8u;
            // 0x16abac: 0x8c447910  lw          $a0, 0x7910($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DA10u;
    if (runtime->hasFunction(0x13DA10u)) {
        auto targetFn = runtime->lookupFunction(0x13DA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ABB0u; }
        if (ctx->pc != 0x16ABB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DA10_0x13da10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ABB0u; }
        if (ctx->pc != 0x16ABB0u) { return; }
    }
    ctx->pc = 0x16ABB0u;
    // 0x16abb0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x16abb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x16abb4: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x16abb4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x16abb8: 0xac520008  sw          $s2, 0x8($v0)
    ctx->pc = 0x16abb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 18));
    // 0x16abbc: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x16abbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x16abc0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x16abc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x16abc4: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x16abc4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x16abc8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x16abc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x16abcc: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x16abccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_16abd0:
    // 0x16abd0: 0x2e620080  sltiu       $v0, $s3, 0x80
    ctx->pc = 0x16abd0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x16abd4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x16ABD4u;
    {
        const bool branch_taken_0x16abd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ABD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16ABD4u;
            // 0x16abd8: 0x32620020  andi        $v0, $s3, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16abd4) {
            ctx->pc = 0x16AC50u;
            goto label_16ac50;
        }
    }
    ctx->pc = 0x16ABDCu;
    // 0x16abdc: 0x54400032  bnel        $v0, $zero, . + 4 + (0x32 << 2)
    ctx->pc = 0x16ABDCu;
    {
        const bool branch_taken_0x16abdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16abdc) {
            ctx->pc = 0x16ABE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16ABDCu;
            // 0x16abe0: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16ACA8u;
            goto label_16aca8;
        }
    }
    ctx->pc = 0x16ABE4u;
    // 0x16abe4: 0x121142  srl         $v0, $s2, 5
    ctx->pc = 0x16abe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 5));
    // 0x16abe8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16abe8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16abec: 0x3a22821  addu        $a1, $sp, $v0
    ctx->pc = 0x16abecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x16abf0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x16abf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16abf4: 0x443000e  bgezl       $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x16ABF4u;
    {
        const bool branch_taken_0x16abf4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x16abf4) {
            ctx->pc = 0x16ABF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16ABF4u;
            // 0x16abf8: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16AC30u;
            goto label_16ac30;
        }
    }
    ctx->pc = 0x16ABFCu;
    // 0x16abfc: 0x8e230814  lw          $v1, 0x814($s1)
    ctx->pc = 0x16abfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2068)));
    // 0x16ac00: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x16ac00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x16ac04: 0x641018  mult        $v0, $v1, $a0
    ctx->pc = 0x16ac04u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16ac08: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x16ac08u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x16ac0c: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x16ac0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x16ac10: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x16ac10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16ac14: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x16ac14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x16ac18: 0xac520800  sw          $s2, 0x800($v0)
    ctx->pc = 0x16ac18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2048), GPR_U32(ctx, 18));
    // 0x16ac1c: 0xac930320  sw          $s3, 0x320($a0)
    ctx->pc = 0x16ac1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 800), GPR_U32(ctx, 19));
    // 0x16ac20: 0x8e220814  lw          $v0, 0x814($s1)
    ctx->pc = 0x16ac20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2068)));
    // 0x16ac24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16ac24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16ac28: 0xae220814  sw          $v0, 0x814($s1)
    ctx->pc = 0x16ac28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2068), GPR_U32(ctx, 2));
    // 0x16ac2c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x16ac2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_16ac30:
    // 0x16ac30: 0x26230010  addiu       $v1, $s1, 0x10
    ctx->pc = 0x16ac30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x16ac34: 0x36620020  ori         $v0, $s3, 0x20
    ctx->pc = 0x16ac34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)32);
    // 0x16ac38: 0x752021  addu        $a0, $v1, $s5
    ctx->pc = 0x16ac38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x16ac3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16ac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16ac40: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x16ac40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x16ac44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16ac44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16ac48: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x16AC48u;
    {
        const bool branch_taken_0x16ac48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AC48u;
            // 0x16ac4c: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ac48) {
            ctx->pc = 0x16ACA4u;
            goto label_16aca4;
        }
    }
    ctx->pc = 0x16AC50u;
label_16ac50:
    // 0x16ac50: 0x8e220810  lw          $v0, 0x810($s1)
    ctx->pc = 0x16ac50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2064)));
    // 0x16ac54: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16AC54u;
    {
        const bool branch_taken_0x16ac54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16AC58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AC54u;
            // 0x16ac58: 0x3a620001  xori        $v0, $s3, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ac54) {
            ctx->pc = 0x16AC68u;
            goto label_16ac68;
        }
    }
    ctx->pc = 0x16AC5Cu;
    // 0x16ac5c: 0x8e220814  lw          $v0, 0x814($s1)
    ctx->pc = 0x16ac5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2068)));
    // 0x16ac60: 0xae220810  sw          $v0, 0x810($s1)
    ctx->pc = 0x16ac60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2064), GPR_U32(ctx, 2));
    // 0x16ac64: 0x3a620001  xori        $v0, $s3, 0x1
    ctx->pc = 0x16ac64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)1);
label_16ac68:
    // 0x16ac68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x16ac68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x16ac6c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x16AC6Cu;
    {
        const bool branch_taken_0x16ac6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16AC70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AC6Cu;
            // 0x16ac70: 0x121142  srl         $v0, $s2, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ac6c) {
            ctx->pc = 0x16ACA4u;
            goto label_16aca4;
        }
    }
    ctx->pc = 0x16AC74u;
    // 0x16ac74: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16ac74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16ac78: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x16ac78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x16ac7c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x16ac7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16ac80: 0x4430009  bgezl       $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x16AC80u;
    {
        const bool branch_taken_0x16ac80 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x16ac80) {
            ctx->pc = 0x16AC84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16AC80u;
            // 0x16ac84: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16ACA8u;
            goto label_16aca8;
        }
    }
    ctx->pc = 0x16AC88u;
    // 0x16ac88: 0x8e220814  lw          $v0, 0x814($s1)
    ctx->pc = 0x16ac88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2068)));
    // 0x16ac8c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x16ac8cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16ac90: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x16ac90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x16ac94: 0x3a31821  addu        $v1, $sp, $v1
    ctx->pc = 0x16ac94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x16ac98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x16ac98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x16ac9c: 0xac720800  sw          $s2, 0x800($v1)
    ctx->pc = 0x16ac9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2048), GPR_U32(ctx, 18));
    // 0x16aca0: 0xae220814  sw          $v0, 0x814($s1)
    ctx->pc = 0x16aca0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2068), GPR_U32(ctx, 2));
label_16aca4:
    // 0x16aca4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x16aca4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_16aca8:
    // 0x16aca8: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x16aca8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
    // 0x16acac: 0x2e620089  sltiu       $v0, $s3, 0x89
    ctx->pc = 0x16acacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)137) ? 1 : 0);
    // 0x16acb0: 0x1440ffad  bnez        $v0, . + 4 + (-0x53 << 2)
    ctx->pc = 0x16ACB0u;
    {
        const bool branch_taken_0x16acb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16ACB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16ACB0u;
            // 0x16acb4: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16acb0) {
            ctx->pc = 0x16AB68u;
            runtime->cooperativeGuestYield();
            goto label_16ab68;
        }
    }
    ctx->pc = 0x16ACB8u;
    // 0x16acb8: 0x8fa60900  lw          $a2, 0x900($sp)
    ctx->pc = 0x16acb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2304)));
    // 0x16acbc: 0x27a90900  addiu       $t1, $sp, 0x900
    ctx->pc = 0x16acbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 2304));
    // 0x16acc0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x16acc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x16acc4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x16acc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16acc8: 0x1049001f  beq         $v0, $t1, . + 4 + (0x1F << 2)
    ctx->pc = 0x16ACC8u;
    {
        const bool branch_taken_0x16acc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        if (branch_taken_0x16acc8) {
            ctx->pc = 0x16AD48u;
            goto label_16ad48;
        }
    }
    ctx->pc = 0x16ACD0u;
label_16acd0:
    // 0x16acd0: 0x8cc80000  lw          $t0, 0x0($a2)
    ctx->pc = 0x16acd0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16acd4: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x16acd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x16acd8: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x16acd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x16acdc: 0x3484fff0  ori         $a0, $a0, 0xFFF0
    ctx->pc = 0x16acdcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65520);
    // 0x16ace0: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x16ace0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x16ace4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x16ace4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x16ace8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x16ace8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x16acec: 0x453823  subu        $a3, $v0, $a1
    ctx->pc = 0x16acecu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x16acf0: 0x24e2000f  addiu       $v0, $a3, 0xF
    ctx->pc = 0x16acf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x16acf4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x16acf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x16acf8: 0x238c2  srl         $a3, $v0, 3
    ctx->pc = 0x16acf8u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x16acfc: 0x67182b  sltu        $v1, $v1, $a3
    ctx->pc = 0x16acfcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x16ad00: 0x54600001  bnel        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x16AD00u;
    {
        const bool branch_taken_0x16ad00 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16ad00) {
            ctx->pc = 0x16AD04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16AD00u;
            // 0x16ad04: 0xae270004  sw          $a3, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16AD08u;
            goto label_16ad08;
        }
    }
    ctx->pc = 0x16AD08u;
label_16ad08:
    // 0x16ad08: 0x51142  srl         $v0, $a1, 5
    ctx->pc = 0x16ad08u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
    // 0x16ad0c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x16ad0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x16ad10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16ad10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16ad14: 0x8d030008  lw          $v1, 0x8($t0)
    ctx->pc = 0x16ad14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x16ad18: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x16ad18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x16ad1c: 0x8d060000  lw          $a2, 0x0($t0)
    ctx->pc = 0x16ad1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x16ad20: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x16ad20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16ad24: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x16ad24u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x16ad28: 0x318c2  srl         $v1, $v1, 3
    ctx->pc = 0x16ad28u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x16ad2c: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x16ad2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16ad30: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x16ad30u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16ad34: 0x2222021  addu        $a0, $s1, $v0
    ctx->pc = 0x16ad34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x16ad38: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x16ad38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ad3c: 0xac870314  sw          $a3, 0x314($a0)
    ctx->pc = 0x16ad3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 788), GPR_U32(ctx, 7));
    // 0x16ad40: 0x14a9ffe3  bne         $a1, $t1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x16AD40u;
    {
        const bool branch_taken_0x16ad40 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 9));
        ctx->pc = 0x16AD44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AD40u;
            // 0x16ad44: 0xac430310  sw          $v1, 0x310($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 784), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ad40) {
            ctx->pc = 0x16ACD0u;
            runtime->cooperativeGuestYield();
            goto label_16acd0;
        }
    }
    ctx->pc = 0x16AD48u;
label_16ad48:
    // 0x16ad48: 0xc04f824  jal         func_13E090
    ctx->pc = 0x16AD48u;
    SET_GPR_U32(ctx, 31, 0x16AD50u);
    ctx->pc = 0x16AD4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AD48u;
            // 0x16ad4c: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AD50u; }
        if (ctx->pc != 0x16AD50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AD50u; }
        if (ctx->pc != 0x16AD50u) { return; }
    }
    ctx->pc = 0x16AD50u;
    // 0x16ad50: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x16ad50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
    // 0x16ad54: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16ad54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ad58: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x16ad58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x16ad5c: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x16AD5Cu;
    SET_GPR_U32(ctx, 31, 0x16AD64u);
    ctx->pc = 0x16AD60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AD5Cu;
            // 0x16ad60: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AD64u; }
        if (ctx->pc != 0x16AD64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AD64u; }
        if (ctx->pc != 0x16AD64u) { return; }
    }
    ctx->pc = 0x16AD64u;
    // 0x16ad64: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x16ad64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ad68: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x16ad68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x16ad6c: 0x3c07002b  lui         $a3, 0x2B
    ctx->pc = 0x16ad6cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)43 << 16));
    // 0x16ad70: 0x24a5cb00  addiu       $a1, $a1, -0x3500
    ctx->pc = 0x16ad70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294953728));
    // 0x16ad74: 0x24e70190  addiu       $a3, $a3, 0x190
    ctx->pc = 0x16ad74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 400));
    // 0x16ad78: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16ad78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ad7c: 0xc05abac  jal         func_16AEB0
    ctx->pc = 0x16AD7Cu;
    SET_GPR_U32(ctx, 31, 0x16AD84u);
    ctx->pc = 0x16AD80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AD7Cu;
            // 0x16ad80: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16AEB0u;
    if (runtime->hasFunction(0x16AEB0u)) {
        auto targetFn = runtime->lookupFunction(0x16AEB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AD84u; }
        if (ctx->pc != 0x16AD84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_16aeb0_0x16af50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AD84u; }
        if (ctx->pc != 0x16AD84u) { return; }
    }
    ctx->pc = 0x16AD84u;
    // 0x16ad84: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x16ad84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x16ad88: 0x8e220814  lw          $v0, 0x814($s1)
    ctx->pc = 0x16ad88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2068)));
    // 0x16ad8c: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x16ad8cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x16ad90: 0xc04f824  jal         func_13E090
    ctx->pc = 0x16AD90u;
    SET_GPR_U32(ctx, 31, 0x16AD98u);
    ctx->pc = 0x16AD94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AD90u;
            // 0x16ad94: 0x2028018  mult        $s0, $s0, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E090u;
    if (runtime->hasFunction(0x13E090u)) {
        auto targetFn = runtime->lookupFunction(0x13E090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AD98u; }
        if (ctx->pc != 0x16AD98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e090_0x13e0c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AD98u; }
        if (ctx->pc != 0x16AD98u) { return; }
    }
    ctx->pc = 0x16AD98u;
    // 0x16ad98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16ad98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ad9c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x16ad9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x16ada0: 0xc04f71e  jal         func_13DC78
    ctx->pc = 0x16ADA0u;
    SET_GPR_U32(ctx, 31, 0x16ADA8u);
    ctx->pc = 0x16ADA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16ADA0u;
            // 0x16ada4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DC78u;
    if (runtime->hasFunction(0x13DC78u)) {
        auto targetFn = runtime->lookupFunction(0x13DC78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ADA8u; }
        if (ctx->pc != 0x16ADA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DC78_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16ADA8u; }
        if (ctx->pc != 0x16ADA8u) { return; }
    }
    ctx->pc = 0x16ADA8u;
    // 0x16ada8: 0x8e230814  lw          $v1, 0x814($s1)
    ctx->pc = 0x16ada8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2068)));
    // 0x16adac: 0xae220818  sw          $v0, 0x818($s1)
    ctx->pc = 0x16adacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2072), GPR_U32(ctx, 2));
    // 0x16adb0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x16adb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x16adb4: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x16ADB4u;
    {
        const bool branch_taken_0x16adb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16ADB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16ADB4u;
            // 0x16adb8: 0xae230814  sw          $v1, 0x814($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2068), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16adb4) {
            ctx->pc = 0x16AE30u;
            goto label_16ae30;
        }
    }
    ctx->pc = 0x16ADBCu;
    // 0x16adbc: 0x0  nop
    ctx->pc = 0x16adbcu;
    // NOP
label_16adc0:
    // 0x16adc0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x16adc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x16adc4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x16adc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x16adc8: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x16adc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x16adcc: 0x8e240818  lw          $a0, 0x818($s1)
    ctx->pc = 0x16adccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2072)));
    // 0x16add0: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x16add0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x16add4: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x16add4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x16add8: 0xac66031c  sw          $a2, 0x31C($v1)
    ctx->pc = 0x16add8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 796), GPR_U32(ctx, 6));
    // 0x16addc: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x16addcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ade0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x16ade0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16ade4: 0x8cb00314  lw          $s0, 0x314($a1)
    ctx->pc = 0x16ade4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 788)));
    // 0x16ade8: 0xac440318  sw          $a0, 0x318($v0)
    ctx->pc = 0x16ade8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 792), GPR_U32(ctx, 4));
    // 0x16adec: 0x1080c0  sll         $s0, $s0, 3
    ctx->pc = 0x16adecu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x16adf0: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x16adf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x16adf4: 0x3a21021  addu        $v0, $sp, $v0
    ctx->pc = 0x16adf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x16adf8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x16adf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16adfc: 0x8c450800  lw          $a1, 0x800($v0)
    ctx->pc = 0x16adfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2048)));
    // 0x16ae00: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x16ae00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x16ae04: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x16AE04u;
    SET_GPR_U32(ctx, 31, 0x16AE0Cu);
    ctx->pc = 0x16AE08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AE04u;
            // 0x16ae08: 0x2452821  addu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AE0Cu; }
        if (ctx->pc != 0x16AE0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AE0Cu; }
        if (ctx->pc != 0x16AE0Cu) { return; }
    }
    ctx->pc = 0x16AE0Cu;
    // 0x16ae0c: 0x2908021  addu        $s0, $s4, $s0
    ctx->pc = 0x16ae0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x16ae10: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x16ae10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x16ae14: 0x8e230814  lw          $v1, 0x814($s1)
    ctx->pc = 0x16ae14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2068)));
    // 0x16ae18: 0x2610000f  addiu       $s0, $s0, 0xF
    ctx->pc = 0x16ae18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
    // 0x16ae1c: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x16ae1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x16ae20: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x16ae20u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x16ae24: 0x1460ffe6  bnez        $v1, . + 4 + (-0x1A << 2)
    ctx->pc = 0x16AE24u;
    {
        const bool branch_taken_0x16ae24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16AE28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AE24u;
            // 0x16ae28: 0x202a024  and         $s4, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ae24) {
            ctx->pc = 0x16ADC0u;
            runtime->cooperativeGuestYield();
            goto label_16adc0;
        }
    }
    ctx->pc = 0x16AE2Cu;
    // 0x16ae2c: 0x0  nop
    ctx->pc = 0x16ae2cu;
    // NOP
label_16ae30:
    // 0x16ae30: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x16AE30u;
    SET_GPR_U32(ctx, 31, 0x16AE38u);
    ctx->pc = 0x16AE34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AE30u;
            // 0x16ae34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AE38u; }
        if (ctx->pc != 0x16AE38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AE38u; }
        if (ctx->pc != 0x16AE38u) { return; }
    }
    ctx->pc = 0x16AE38u;
    // 0x16ae38: 0x8fa20900  lw          $v0, 0x900($sp)
    ctx->pc = 0x16ae38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2304)));
    // 0x16ae3c: 0x27b00900  addiu       $s0, $sp, 0x900
    ctx->pc = 0x16ae3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 2304));
    // 0x16ae40: 0x27b10910  addiu       $s1, $sp, 0x910
    ctx->pc = 0x16ae40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 2320));
    // 0x16ae44: 0xafb00910  sw          $s0, 0x910($sp)
    ctx->pc = 0x16ae44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 2320), GPR_U32(ctx, 16));
    // 0x16ae48: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x16ae48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x16ae4c: 0x8fa20914  lw          $v0, 0x914($sp)
    ctx->pc = 0x16ae4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2324)));
    // 0x16ae50: 0x5050000d  beql        $v0, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x16AE50u;
    {
        const bool branch_taken_0x16ae50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x16ae50) {
            ctx->pc = 0x16AE54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16AE50u;
            // 0x16ae54: 0xae100004  sw          $s0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16AE88u;
            goto label_16ae88;
        }
    }
    ctx->pc = 0x16AE58u;
    // 0x16ae58: 0x8fa50914  lw          $a1, 0x914($sp)
    ctx->pc = 0x16ae58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2324)));
    // 0x16ae5c: 0x0  nop
    ctx->pc = 0x16ae5cu;
    // NOP
label_16ae60:
    // 0x16ae60: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x16ae60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x16ae64: 0x8c447910  lw          $a0, 0x7910($v0)
    ctx->pc = 0x16ae64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x16ae68: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x16ae68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16ae6c: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x16AE6Cu;
    SET_GPR_U32(ctx, 31, 0x16AE74u);
    ctx->pc = 0x16AE70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16AE6Cu;
            // 0x16ae70: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AE74u; }
        if (ctx->pc != 0x16AE74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16AE74u; }
        if (ctx->pc != 0x16AE74u) { return; }
    }
    ctx->pc = 0x16AE74u;
    // 0x16ae74: 0x8fa30914  lw          $v1, 0x914($sp)
    ctx->pc = 0x16ae74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2324)));
    // 0x16ae78: 0x8fa20910  lw          $v0, 0x910($sp)
    ctx->pc = 0x16ae78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2320)));
    // 0x16ae7c: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x16AE7Cu;
    {
        const bool branch_taken_0x16ae7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x16AE80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AE7Cu;
            // 0x16ae80: 0x8fa50914  lw          $a1, 0x914($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 2324)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16ae7c) {
            ctx->pc = 0x16AE60u;
            runtime->cooperativeGuestYield();
            goto label_16ae60;
        }
    }
    ctx->pc = 0x16AE84u;
    // 0x16ae84: 0xae100004  sw          $s0, 0x4($s0)
    ctx->pc = 0x16ae84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
label_16ae88:
    // 0x16ae88: 0xae100000  sw          $s0, 0x0($s0)
    ctx->pc = 0x16ae88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
    // 0x16ae8c: 0x7bb00980  lq          $s0, 0x980($sp)
    ctx->pc = 0x16ae8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 2432)));
    // 0x16ae90: 0x7bb10970  lq          $s1, 0x970($sp)
    ctx->pc = 0x16ae90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 2416)));
    // 0x16ae94: 0x7bb20960  lq          $s2, 0x960($sp)
    ctx->pc = 0x16ae94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 2400)));
    // 0x16ae98: 0x7bb30950  lq          $s3, 0x950($sp)
    ctx->pc = 0x16ae98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 2384)));
    // 0x16ae9c: 0x7bb40940  lq          $s4, 0x940($sp)
    ctx->pc = 0x16ae9cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 2368)));
    // 0x16aea0: 0x7bb50930  lq          $s5, 0x930($sp)
    ctx->pc = 0x16aea0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 2352)));
    // 0x16aea4: 0xdfbf0920  ld          $ra, 0x920($sp)
    ctx->pc = 0x16aea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 2336)));
    // 0x16aea8: 0x3e00008  jr          $ra
    ctx->pc = 0x16AEA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16AEACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16AEA8u;
            // 0x16aeac: 0x27bd0990  addiu       $sp, $sp, 0x990 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2448));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16AB30u: goto label_16ab30;
            case 0x16AB68u: goto label_16ab68;
            case 0x16AB78u: goto label_16ab78;
            case 0x16ABA8u: goto label_16aba8;
            case 0x16ABD0u: goto label_16abd0;
            case 0x16AC30u: goto label_16ac30;
            case 0x16AC50u: goto label_16ac50;
            case 0x16AC68u: goto label_16ac68;
            case 0x16ACA4u: goto label_16aca4;
            case 0x16ACA8u: goto label_16aca8;
            case 0x16ACD0u: goto label_16acd0;
            case 0x16AD08u: goto label_16ad08;
            case 0x16AD48u: goto label_16ad48;
            case 0x16ADC0u: goto label_16adc0;
            case 0x16AE30u: goto label_16ae30;
            case 0x16AE60u: goto label_16ae60;
            case 0x16AE88u: goto label_16ae88;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16AEB0u;
}
