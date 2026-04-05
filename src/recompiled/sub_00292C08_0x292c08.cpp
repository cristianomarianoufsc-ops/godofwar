#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00292C08
// Address: 0x292c08 - 0x292e10
void sub_00292C08_0x292c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292C08_0x292c08");
#endif

    ctx->pc = 0x292c08u;

    // 0x292c08: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x292c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x292c0c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x292c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x292c10: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x292c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x292c14: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x292c14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292c18: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x292c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x292c1c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x292c1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292c20: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x292c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x292c24: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x292c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x292c28: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x292c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x292c2c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x292c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x292c30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x292c30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x292c34: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x292c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x292c38: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x292c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x292c3c: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x292c3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x292c40: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x292C40u;
    {
        const bool branch_taken_0x292c40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x292C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292C40u;
            // 0x292c44: 0x200c02d  daddu       $t8, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292c40) {
            ctx->pc = 0x292C50u;
            goto label_292c50;
        }
    }
    ctx->pc = 0x292C48u;
    // 0x292c48: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x292c48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292c4c: 0x300882d  daddu       $s1, $t8, $zero
    ctx->pc = 0x292c4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
label_292c50:
    // 0x292c50: 0x8e150010  lw          $s5, 0x10($s0)
    ctx->pc = 0x292c50u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x292c54: 0x8e330010  lw          $s3, 0x10($s1)
    ctx->pc = 0x292c54u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x292c58: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x292c58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x292c5c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x292c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x292c60: 0x2b39021  addu        $s2, $s5, $s3
    ctx->pc = 0x292c60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x292c64: 0xb2282a  slt         $a1, $a1, $s2
    ctx->pc = 0x292c64u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x292c68: 0xc0a49da  jal         func_292768
    ctx->pc = 0x292C68u;
    SET_GPR_U32(ctx, 31, 0x292C70u);
    ctx->pc = 0x292C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x292C68u;
            // 0x292c6c: 0x452821  addu        $a1, $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x292768u;
    if (runtime->hasFunction(0x292768u)) {
        auto targetFn = runtime->lookupFunction(0x292768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292C70u; }
        if (ctx->pc != 0x292C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00292768_0x292768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x292C70u; }
        if (ctx->pc != 0x292C70u) { return; }
    }
    ctx->pc = 0x292C70u;
    // 0x292c70: 0x40c02d  daddu       $t8, $v0, $zero
    ctx->pc = 0x292c70u;
    SET_GPR_U64(ctx, 24, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292c74: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x292c74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x292c78: 0x270a0014  addiu       $t2, $t8, 0x14
    ctx->pc = 0x292c78u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 24), 20));
    // 0x292c7c: 0x26190014  addiu       $t9, $s0, 0x14
    ctx->pc = 0x292c7cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x292c80: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x292c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
    // 0x292c84: 0x143102b  sltu        $v0, $t2, $v1
    ctx->pc = 0x292c84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x292c88: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x292C88u;
    {
        const bool branch_taken_0x292c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x292C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292C88u;
            // 0x292c8c: 0x26260014  addiu       $a2, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292c88) {
            ctx->pc = 0x292CB0u;
            goto label_292cb0;
        }
    }
    ctx->pc = 0x292C90u;
    // 0x292c90: 0xad400000  sw          $zero, 0x0($t2)
    ctx->pc = 0x292c90u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
    // 0x292c94: 0x0  nop
    ctx->pc = 0x292c94u;
    // NOP
label_292c98:
    // 0x292c98: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x292c98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x292c9c: 0x143102b  sltu        $v0, $t2, $v1
    ctx->pc = 0x292c9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x292ca0: 0x0  nop
    ctx->pc = 0x292ca0u;
    // NOP
    // 0x292ca4: 0x0  nop
    ctx->pc = 0x292ca4u;
    // NOP
    // 0x292ca8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x292CA8u;
    {
        const bool branch_taken_0x292ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x292ca8) {
            ctx->pc = 0x292CACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x292CA8u;
            // 0x292cac: 0xad400000  sw          $zero, 0x0($t2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 10), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x292C98u;
            runtime->cooperativeGuestYield();
            goto label_292c98;
        }
    }
    ctx->pc = 0x292CB0u;
label_292cb0:
    // 0x292cb0: 0xc0702d  daddu       $t6, $a2, $zero
    ctx->pc = 0x292cb0u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292cb4: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x292cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x292cb8: 0x151880  sll         $v1, $s5, 2
    ctx->pc = 0x292cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
    // 0x292cbc: 0x1c2a021  addu        $s4, $t6, $v0
    ctx->pc = 0x292cbcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x292cc0: 0x270f0014  addiu       $t7, $t8, 0x14
    ctx->pc = 0x292cc0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 24), 20));
    // 0x292cc4: 0x3238021  addu        $s0, $t9, $v1
    ctx->pc = 0x292cc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 3)));
    // 0x292cc8: 0x1e0b02d  daddu       $s6, $t7, $zero
    ctx->pc = 0x292cc8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292ccc: 0x1d4102b  sltu        $v0, $t6, $s4
    ctx->pc = 0x292cccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x292cd0: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x292CD0u;
    {
        const bool branch_taken_0x292cd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x292CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292CD0u;
            // 0x292cd4: 0x12a880  sll         $s5, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292cd0) {
            ctx->pc = 0x292DC4u;
            goto label_292dc4;
        }
    }
    ctx->pc = 0x292CD8u;
label_292cd8:
    // 0x292cd8: 0x95cc0000  lhu         $t4, 0x0($t6)
    ctx->pc = 0x292cd8u;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x292cdc: 0x25d30004  addiu       $s3, $t6, 0x4
    ctx->pc = 0x292cdcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x292ce0: 0x1180001a  beqz        $t4, . + 4 + (0x1A << 2)
    ctx->pc = 0x292CE0u;
    {
        const bool branch_taken_0x292ce0 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x292CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292CE0u;
            // 0x292ce4: 0x25f10004  addiu       $s1, $t7, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292ce0) {
            ctx->pc = 0x292D4Cu;
            goto label_292d4c;
        }
    }
    ctx->pc = 0x292CE8u;
    // 0x292ce8: 0x320502d  daddu       $t2, $t9, $zero
    ctx->pc = 0x292ce8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292cec: 0x1e0402d  daddu       $t0, $t7, $zero
    ctx->pc = 0x292cecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292cf0: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x292cf0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292cf4: 0x0  nop
    ctx->pc = 0x292cf4u;
    // NOP
label_292cf8:
    // 0x292cf8: 0x8d430000  lw          $v1, 0x0($t2)
    ctx->pc = 0x292cf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x292cfc: 0x8d040000  lw          $a0, 0x0($t0)
    ctx->pc = 0x292cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x292d00: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x292d00u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x292d04: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x292d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x292d08: 0x150302b  sltu        $a2, $t2, $s0
    ctx->pc = 0x292d08u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x292d0c: 0x4c1018  mult        $v0, $v0, $t4
    ctx->pc = 0x292d0cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x292d10: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x292d10u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
    // 0x292d14: 0x6c1818  mult        $v1, $v1, $t4
    ctx->pc = 0x292d14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x292d18: 0x3085ffff  andi        $a1, $a0, 0xFFFF
    ctx->pc = 0x292d18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x292d1c: 0x42402  srl         $a0, $a0, 16
    ctx->pc = 0x292d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x292d20: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x292d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x292d24: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x292d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x292d28: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x292d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x292d2c: 0x26c02  srl         $t5, $v0, 16
    ctx->pc = 0x292d2cu;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x292d30: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x292d30u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x292d34: 0x6d2821  addu        $a1, $v1, $t5
    ctx->pc = 0x292d34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 13)));
    // 0x292d38: 0xa5050002  sh          $a1, 0x2($t0)
    ctx->pc = 0x292d38u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 5));
    // 0x292d3c: 0x56c02  srl         $t5, $a1, 16
    ctx->pc = 0x292d3cu;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x292d40: 0x14c0ffed  bnez        $a2, . + 4 + (-0x13 << 2)
    ctx->pc = 0x292D40u;
    {
        const bool branch_taken_0x292d40 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x292D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292D40u;
            // 0x292d44: 0x25080004  addiu       $t0, $t0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292d40) {
            ctx->pc = 0x292CF8u;
            runtime->cooperativeGuestYield();
            goto label_292cf8;
        }
    }
    ctx->pc = 0x292D48u;
    // 0x292d48: 0xad0d0000  sw          $t5, 0x0($t0)
    ctx->pc = 0x292d48u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 13));
label_292d4c:
    // 0x292d4c: 0x95cc0002  lhu         $t4, 0x2($t6)
    ctx->pc = 0x292d4cu;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 14), 2)));
    // 0x292d50: 0x11800018  beqz        $t4, . + 4 + (0x18 << 2)
    ctx->pc = 0x292D50u;
    {
        const bool branch_taken_0x292d50 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x292D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292D50u;
            // 0x292d54: 0x1e0402d  daddu       $t0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292d50) {
            ctx->pc = 0x292DB4u;
            goto label_292db4;
        }
    }
    ctx->pc = 0x292D58u;
    // 0x292d58: 0x320502d  daddu       $t2, $t9, $zero
    ctx->pc = 0x292d58u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292d5c: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x292d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x292d60: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x292d60u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292d64: 0x0  nop
    ctx->pc = 0x292d64u;
    // NOP
label_292d68:
    // 0x292d68: 0x95420000  lhu         $v0, 0x0($t2)
    ctx->pc = 0x292d68u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x292d6c: 0x95030002  lhu         $v1, 0x2($t0)
    ctx->pc = 0x292d6cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x292d70: 0x4c1018  mult        $v0, $v0, $t4
    ctx->pc = 0x292d70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x292d74: 0xa5050000  sh          $a1, 0x0($t0)
    ctx->pc = 0x292d74u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x292d78: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x292d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x292d7c: 0x4d1021  addu        $v0, $v0, $t5
    ctx->pc = 0x292d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x292d80: 0xa5020002  sh          $v0, 0x2($t0)
    ctx->pc = 0x292d80u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 2), (uint16_t)GPR_U32(ctx, 2));
    // 0x292d84: 0x26c02  srl         $t5, $v0, 16
    ctx->pc = 0x292d84u;
    SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x292d88: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x292d88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x292d8c: 0x95420002  lhu         $v0, 0x2($t2)
    ctx->pc = 0x292d8cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 2)));
    // 0x292d90: 0x95030000  lhu         $v1, 0x0($t0)
    ctx->pc = 0x292d90u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x292d94: 0x254a0004  addiu       $t2, $t2, 0x4
    ctx->pc = 0x292d94u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
    // 0x292d98: 0x4c1018  mult        $v0, $v0, $t4
    ctx->pc = 0x292d98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 12); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x292d9c: 0x150202b  sltu        $a0, $t2, $s0
    ctx->pc = 0x292d9cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x292da0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x292da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x292da4: 0x4d2821  addu        $a1, $v0, $t5
    ctx->pc = 0x292da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 13)));
    // 0x292da8: 0x1480ffef  bnez        $a0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x292DA8u;
    {
        const bool branch_taken_0x292da8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x292DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292DA8u;
            // 0x292dac: 0x56c02  srl         $t5, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292da8) {
            ctx->pc = 0x292D68u;
            runtime->cooperativeGuestYield();
            goto label_292d68;
        }
    }
    ctx->pc = 0x292DB0u;
    // 0x292db0: 0xad050000  sw          $a1, 0x0($t0)
    ctx->pc = 0x292db0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 5));
label_292db4:
    // 0x292db4: 0x260702d  daddu       $t6, $s3, $zero
    ctx->pc = 0x292db4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292db8: 0x1d4102b  sltu        $v0, $t6, $s4
    ctx->pc = 0x292db8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x292dbc: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x292DBCu;
    {
        const bool branch_taken_0x292dbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x292DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292DBCu;
            // 0x292dc0: 0x220782d  daddu       $t7, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292dbc) {
            ctx->pc = 0x292CD8u;
            runtime->cooperativeGuestYield();
            goto label_292cd8;
        }
    }
    ctx->pc = 0x292DC4u;
label_292dc4:
    // 0x292dc4: 0x2d54021  addu        $t0, $s6, $s5
    ctx->pc = 0x292dc4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
label_292dc8:
    // 0x292dc8: 0x5a400006  blezl       $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x292DC8u;
    {
        const bool branch_taken_0x292dc8 = (GPR_S32(ctx, 18) <= 0);
        if (branch_taken_0x292dc8) {
            ctx->pc = 0x292DCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x292DC8u;
            // 0x292dcc: 0xaf120010  sw          $s2, 0x10($t8) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 24), 16), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x292DE4u;
            goto label_292de4;
        }
    }
    ctx->pc = 0x292DD0u;
    // 0x292dd0: 0x2508fffc  addiu       $t0, $t0, -0x4
    ctx->pc = 0x292dd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
    // 0x292dd4: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x292dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x292dd8: 0x5040fffb  beql        $v0, $zero, . + 4 + (-0x5 << 2)
    ctx->pc = 0x292DD8u;
    {
        const bool branch_taken_0x292dd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292dd8) {
            ctx->pc = 0x292DDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x292DD8u;
            // 0x292ddc: 0x2652ffff  addiu       $s2, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x292DC8u;
            runtime->cooperativeGuestYield();
            goto label_292dc8;
        }
    }
    ctx->pc = 0x292DE0u;
    // 0x292de0: 0xaf120010  sw          $s2, 0x10($t8)
    ctx->pc = 0x292de0u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 16), GPR_U32(ctx, 18));
label_292de4:
    // 0x292de4: 0x300102d  daddu       $v0, $t8, $zero
    ctx->pc = 0x292de4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292de8: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x292de8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x292dec: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x292decu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x292df0: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x292df0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x292df4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x292df4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x292df8: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x292df8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x292dfc: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x292dfcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x292e00: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x292e00u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x292e04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x292e04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x292e08: 0x3e00008  jr          $ra
    ctx->pc = 0x292E08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x292E08u;
            // 0x292e0c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x292C50u: goto label_292c50;
            case 0x292C98u: goto label_292c98;
            case 0x292CB0u: goto label_292cb0;
            case 0x292CD8u: goto label_292cd8;
            case 0x292CF8u: goto label_292cf8;
            case 0x292D4Cu: goto label_292d4c;
            case 0x292D68u: goto label_292d68;
            case 0x292DB4u: goto label_292db4;
            case 0x292DC4u: goto label_292dc4;
            case 0x292DC8u: goto label_292dc8;
            case 0x292DE4u: goto label_292de4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x292E10u;
}
