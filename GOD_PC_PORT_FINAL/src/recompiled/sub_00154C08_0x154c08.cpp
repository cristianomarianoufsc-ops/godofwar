#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00154C08
// Address: 0x154c08 - 0x154f78
void sub_00154C08_0x154c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00154C08_0x154c08");
#endif

    ctx->pc = 0x154c08u;

    // 0x154c08: 0x27bdef60  addiu       $sp, $sp, -0x10A0
    ctx->pc = 0x154c08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294963040));
    // 0x154c0c: 0x24040660  addiu       $a0, $zero, 0x660
    ctx->pc = 0x154c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1632));
    // 0x154c10: 0x7fb01090  sq          $s0, 0x1090($sp)
    ctx->pc = 0x154c10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4240), GPR_VEC(ctx, 16));
    // 0x154c14: 0x7fb11080  sq          $s1, 0x1080($sp)
    ctx->pc = 0x154c14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4224), GPR_VEC(ctx, 17));
    // 0x154c18: 0x7fb21070  sq          $s2, 0x1070($sp)
    ctx->pc = 0x154c18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4208), GPR_VEC(ctx, 18));
    // 0x154c1c: 0x7fb31060  sq          $s3, 0x1060($sp)
    ctx->pc = 0x154c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4192), GPR_VEC(ctx, 19));
    // 0x154c20: 0x7fb41050  sq          $s4, 0x1050($sp)
    ctx->pc = 0x154c20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4176), GPR_VEC(ctx, 20));
    // 0x154c24: 0x7fb51040  sq          $s5, 0x1040($sp)
    ctx->pc = 0x154c24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4160), GPR_VEC(ctx, 21));
    // 0x154c28: 0x7fb61030  sq          $s6, 0x1030($sp)
    ctx->pc = 0x154c28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4144), GPR_VEC(ctx, 22));
    // 0x154c2c: 0x7fb71020  sq          $s7, 0x1020($sp)
    ctx->pc = 0x154c2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4128), GPR_VEC(ctx, 23));
    // 0x154c30: 0x7fbe1010  sq          $fp, 0x1010($sp)
    ctx->pc = 0x154c30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4112), GPR_VEC(ctx, 30));
    // 0x154c34: 0xffbf1000  sd          $ra, 0x1000($sp)
    ctx->pc = 0x154c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 4096), GPR_U64(ctx, 31));
    // 0x154c38: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x154C38u;
    SET_GPR_U32(ctx, 31, 0x154C40u);
    ctx->pc = 0x154C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154C38u;
            // 0x154c3c: 0x3a0802d  daddu       $s0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154C40u; }
        if (ctx->pc != 0x154C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154C40u; }
        if (ctx->pc != 0x154C40u) { return; }
    }
    ctx->pc = 0x154C40u;
    // 0x154c40: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x154c40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154c44: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x154c44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154c48: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x154c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x154c4c: 0x24d10018  addiu       $s1, $a2, 0x18
    ctx->pc = 0x154c4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 24));
    // 0x154c50: 0x2442fd30  addiu       $v0, $v0, -0x2D0
    ctx->pc = 0x154c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966576));
    // 0x154c54: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x154c54u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
    // 0x154c58: 0xacc20658  sw          $v0, 0x658($a2)
    ctx->pc = 0x154c58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 1624), GPR_U32(ctx, 2));
    // 0x154c5c: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x154c5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_154c60:
    // 0x154c60: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x154c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x154c64: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x154c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x154c68: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x154c68u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x154c6c: 0x2c820063  sltiu       $v0, $a0, 0x63
    ctx->pc = 0x154c6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)99) ? 1 : 0);
    // 0x154c70: 0x0  nop
    ctx->pc = 0x154c70u;
    // NOP
    // 0x154c74: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x154C74u;
    {
        const bool branch_taken_0x154c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x154C78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154C74u;
            // 0x154c78: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154c74) {
            ctx->pc = 0x154C60u;
            runtime->cooperativeGuestYield();
            goto label_154c60;
        }
    }
    ctx->pc = 0x154C7Cu;
    // 0x154c7c: 0xfe200638  sd          $zero, 0x638($s1)
    ctx->pc = 0x154c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 1592), GPR_U64(ctx, 0));
    // 0x154c80: 0xfe200630  sd          $zero, 0x630($s1)
    ctx->pc = 0x154c80u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 1584), GPR_U64(ctx, 0));
    // 0x154c84: 0xacd0000c  sw          $s0, 0xC($a2)
    ctx->pc = 0x154c84u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 16));
    // 0x154c88: 0x26021000  addiu       $v0, $s0, 0x1000
    ctx->pc = 0x154c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4096));
    // 0x154c8c: 0xacd00004  sw          $s0, 0x4($a2)
    ctx->pc = 0x154c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 16));
    // 0x154c90: 0xacc20008  sw          $v0, 0x8($a2)
    ctx->pc = 0x154c90u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
    // 0x154c94: 0xacd00000  sw          $s0, 0x0($a2)
    ctx->pc = 0x154c94u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 16));
    // 0x154c98: 0x3c170033  lui         $s7, 0x33
    ctx->pc = 0x154c98u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)51 << 16));
    // 0x154c9c: 0x8ee3ed60  lw          $v1, -0x12A0($s7)
    ctx->pc = 0x154c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294962528)));
    // 0x154ca0: 0x2c620100  sltiu       $v0, $v1, 0x100
    ctx->pc = 0x154ca0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x154ca4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x154ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x154ca8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x154CA8u;
    {
        const bool branch_taken_0x154ca8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x154CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154CA8u;
            // 0x154cac: 0x3c1e0033  lui         $fp, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154ca8) {
            ctx->pc = 0x154CD8u;
            goto label_154cd8;
        }
    }
    ctx->pc = 0x154CB0u;
    // 0x154cb0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x154cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x154cb4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x154cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x154cb8: 0x2442ed68  addiu       $v0, $v0, -0x1298
    ctx->pc = 0x154cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962536));
    // 0x154cbc: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x154cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x154cc0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x154cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x154cc4: 0x8c84f168  lw          $a0, -0xE98($a0)
    ctx->pc = 0x154cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294963560)));
    // 0x154cc8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x154cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x154ccc: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x154cccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x154cd0: 0x8ee3ed60  lw          $v1, -0x12A0($s7)
    ctx->pc = 0x154cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294962528)));
    // 0x154cd4: 0x0  nop
    ctx->pc = 0x154cd4u;
    // NOP
label_154cd8:
    // 0x154cd8: 0x27c5ed68  addiu       $a1, $fp, -0x1298
    ctx->pc = 0x154cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294962536));
    // 0x154cdc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x154cdcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154ce0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x154ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x154ce4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x154ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x154ce8: 0xaee3ed60  sw          $v1, -0x12A0($s7)
    ctx->pc = 0x154ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294962528), GPR_U32(ctx, 3));
    // 0x154cec: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x154cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x154cf0: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x154CF0u;
    SET_GPR_U32(ctx, 31, 0x154CF8u);
    ctx->pc = 0x154CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154CF0u;
            // 0x154cf4: 0xac460000  sw          $a2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154CF8u; }
        if (ctx->pc != 0x154CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154CF8u; }
        if (ctx->pc != 0x154CF8u) { return; }
    }
    ctx->pc = 0x154CF8u;
    // 0x154cf8: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x154cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x154cfc: 0x2444bb98  addiu       $a0, $v0, -0x4468
    ctx->pc = 0x154cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949784));
    // 0x154d00: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x154d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x154d04: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x154d04u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
    // 0x154d08: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x154d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x154d0c: 0x8e50f168  lw          $s0, -0xE98($s2)
    ctx->pc = 0x154d0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294963560)));
    // 0x154d10: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x154d10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x154d14: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x154d14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x154d18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x154d18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x154d1c: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x154d1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x154d20: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x154D20u;
    {
        const bool branch_taken_0x154d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154D20u;
            // 0x154d24: 0xac710000  sw          $s1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154d20) {
            ctx->pc = 0x154D4Cu;
            goto label_154d4c;
        }
    }
    ctx->pc = 0x154D28u;
    // 0x154d28: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x154d28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x154d2c: 0x0  nop
    ctx->pc = 0x154d2cu;
    // NOP
label_154d30:
    // 0x154d30: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x154d30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x154d34: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x154d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x154d38: 0x0  nop
    ctx->pc = 0x154d38u;
    // NOP
    // 0x154d3c: 0x0  nop
    ctx->pc = 0x154d3cu;
    // NOP
    // 0x154d40: 0x0  nop
    ctx->pc = 0x154d40u;
    // NOP
    // 0x154d44: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x154D44u;
    {
        const bool branch_taken_0x154d44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x154d44) {
            ctx->pc = 0x154D48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x154D44u;
            // 0x154d48: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x154D30u;
            runtime->cooperativeGuestYield();
            goto label_154d30;
        }
    }
    ctx->pc = 0x154D4Cu;
label_154d4c:
    // 0x154d4c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x154d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x154d50: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x154d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x154d54: 0x34420101  ori         $v0, $v0, 0x101
    ctx->pc = 0x154d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)257);
    // 0x154d58: 0xae43f168  sw          $v1, -0xE98($s2)
    ctx->pc = 0x154d58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294963560), GPR_U32(ctx, 3));
    // 0x154d5c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x154d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x154d60: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x154d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154d64: 0x3c056c00  lui         $a1, 0x6C00
    ctx->pc = 0x154d64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27648 << 16));
    // 0x154d68: 0xc04fe5c  jal         func_13F970
    ctx->pc = 0x154D68u;
    SET_GPR_U32(ctx, 31, 0x154D70u);
    ctx->pc = 0x154D6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154D68u;
            // 0x154d6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F970u;
    if (runtime->hasFunction(0x13F970u)) {
        auto targetFn = runtime->lookupFunction(0x13F970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154D70u; }
        if (ctx->pc != 0x154D70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f970_0x13f9c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154D70u; }
        if (ctx->pc != 0x154D70u) { return; }
    }
    ctx->pc = 0x154D70u;
    // 0x154d70: 0x8e44f168  lw          $a0, -0xE98($s2)
    ctx->pc = 0x154d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294963560)));
    // 0x154d74: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x154d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x154d78: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x154d78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x154d7c: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x154d7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x154d80: 0xac431010  sw          $v1, 0x1010($v0)
    ctx->pc = 0x154d80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4112), GPR_U32(ctx, 3));
    // 0x154d84: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x154d84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x154d88: 0xaca41014  sw          $a0, 0x1014($a1)
    ctx->pc = 0x154d88u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4116), GPR_U32(ctx, 4));
    // 0x154d8c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x154d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x154d90: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x154d90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x154d94: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x154d94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 6));
    // 0x154d98: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x154d98u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x154d9c: 0x240a1234  addiu       $t2, $zero, 0x1234
    ctx->pc = 0x154d9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4660));
    // 0x154da0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x154da0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x154da4: 0x240b0018  addiu       $t3, $zero, 0x18
    ctx->pc = 0x154da4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x154da8: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x154da8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x154dac: 0x24074567  addiu       $a3, $zero, 0x4567
    ctx->pc = 0x154dacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 17767));
    // 0x154db0: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x154db0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x154db4: 0x3c093f80  lui         $t1, 0x3F80
    ctx->pc = 0x154db4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)16256 << 16));
    // 0x154db8: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x154db8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x154dbc: 0x35298080  ori         $t1, $t1, 0x8080
    ctx->pc = 0x154dbcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32896);
    // 0x154dc0: 0x94c38  dsll        $t1, $t1, 16
    ctx->pc = 0x154dc0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 16);
    // 0x154dc4: 0x35298080  ori         $t1, $t1, 0x8080
    ctx->pc = 0x154dc4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32896);
    // 0x154dc8: 0x8e42f168  lw          $v0, -0xE98($s2)
    ctx->pc = 0x154dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294963560)));
    // 0x154dcc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x154dccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x154dd0: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x154dd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x154dd4: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x154dd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x154dd8: 0x34a58080  ori         $a1, $a1, 0x8080
    ctx->pc = 0x154dd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32896);
    // 0x154ddc: 0x2406003b  addiu       $a2, $zero, 0x3B
    ctx->pc = 0x154ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x154de0: 0x24440050  addiu       $a0, $v0, 0x50
    ctx->pc = 0x154de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x154de4: 0xfc4a0010  sd          $t2, 0x10($v0)
    ctx->pc = 0x154de4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 10));
    // 0x154de8: 0xfc4b0018  sd          $t3, 0x18($v0)
    ctx->pc = 0x154de8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 11));
    // 0x154dec: 0xfc470020  sd          $a3, 0x20($v0)
    ctx->pc = 0x154decu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 32), GPR_U64(ctx, 7));
    // 0x154df0: 0xfc480028  sd          $t0, 0x28($v0)
    ctx->pc = 0x154df0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 40), GPR_U64(ctx, 8));
    // 0x154df4: 0xfc490030  sd          $t1, 0x30($v0)
    ctx->pc = 0x154df4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 48), GPR_U64(ctx, 9));
    // 0x154df8: 0xfc430038  sd          $v1, 0x38($v0)
    ctx->pc = 0x154df8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 56), GPR_U64(ctx, 3));
    // 0x154dfc: 0xfc450040  sd          $a1, 0x40($v0)
    ctx->pc = 0x154dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 64), GPR_U64(ctx, 5));
    // 0x154e00: 0xfc460048  sd          $a2, 0x48($v0)
    ctx->pc = 0x154e00u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 72), GPR_U64(ctx, 6));
    // 0x154e04: 0x3c030005  lui         $v1, 0x5
    ctx->pc = 0x154e04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)5 << 16));
    // 0x154e08: 0xfc430050  sd          $v1, 0x50($v0)
    ctx->pc = 0x154e08u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 80), GPR_U64(ctx, 3));
    // 0x154e0c: 0x24050047  addiu       $a1, $zero, 0x47
    ctx->pc = 0x154e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x154e10: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x154e10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x154e14: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x154e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x154e18: 0xfc830028  sd          $v1, 0x28($a0)
    ctx->pc = 0x154e18u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 3));
    // 0x154e1c: 0x3c130033  lui         $s3, 0x33
    ctx->pc = 0x154e1cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)51 << 16));
    // 0x154e20: 0xfc850008  sd          $a1, 0x8($a0)
    ctx->pc = 0x154e20u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 5));
    // 0x154e24: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x154e24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x154e28: 0xfc860018  sd          $a2, 0x18($a0)
    ctx->pc = 0x154e28u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 6));
    // 0x154e2c: 0x50b023  subu        $s6, $v0, $s0
    ctx->pc = 0x154e2cu;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x154e30: 0xfc800010  sd          $zero, 0x10($a0)
    ctx->pc = 0x154e30u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 0));
    // 0x154e34: 0xfc800020  sd          $zero, 0x20($a0)
    ctx->pc = 0x154e34u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 0));
    // 0x154e38: 0xae42f168  sw          $v0, -0xE98($s2)
    ctx->pc = 0x154e38u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294963560), GPR_U32(ctx, 2));
    // 0x154e3c: 0x8e63101c  lw          $v1, 0x101C($s3)
    ctx->pc = 0x154e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4124)));
    // 0x154e40: 0xc04fe9e  jal         func_13FA78
    ctx->pc = 0x154E40u;
    SET_GPR_U32(ctx, 31, 0x154E48u);
    ctx->pc = 0x154E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154E40u;
            // 0x154e44: 0x43a823  subu        $s5, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA78u;
    if (runtime->hasFunction(0x13FA78u)) {
        auto targetFn = runtime->lookupFunction(0x13FA78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154E48u; }
        if (ctx->pc != 0x154E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa78_0x13fab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154E48u; }
        if (ctx->pc != 0x154E48u) { return; }
    }
    ctx->pc = 0x154E48u;
    // 0x154e48: 0xc04fe72  jal         func_13F9C8
    ctx->pc = 0x154E48u;
    SET_GPR_U32(ctx, 31, 0x154E50u);
    ctx->pc = 0x154E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154E48u;
            // 0x154e4c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F9C8u;
    if (runtime->hasFunction(0x13F9C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F9C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154E50u; }
        if (ctx->pc != 0x154E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f9c8_0x13fa20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154E50u; }
        if (ctx->pc != 0x154E50u) { return; }
    }
    ctx->pc = 0x154E50u;
    // 0x154e50: 0x8e43f168  lw          $v1, -0xE98($s2)
    ctx->pc = 0x154e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294963560)));
    // 0x154e54: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x154e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x154e58: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x154E58u;
    {
        const bool branch_taken_0x154e58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154E58u;
            // 0x154e5c: 0x8e70101c  lw          $s0, 0x101C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4124)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154e58) {
            ctx->pc = 0x154E88u;
            goto label_154e88;
        }
    }
    ctx->pc = 0x154E60u;
    // 0x154e60: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x154e60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x154e64: 0x0  nop
    ctx->pc = 0x154e64u;
    // NOP
label_154e68:
    // 0x154e68: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x154e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x154e6c: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x154e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
    // 0x154e70: 0x0  nop
    ctx->pc = 0x154e70u;
    // NOP
    // 0x154e74: 0x0  nop
    ctx->pc = 0x154e74u;
    // NOP
    // 0x154e78: 0x0  nop
    ctx->pc = 0x154e78u;
    // NOP
    // 0x154e7c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x154E7Cu;
    {
        const bool branch_taken_0x154e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x154e7c) {
            ctx->pc = 0x154E80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x154E7Cu;
            // 0x154e80: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x154E68u;
            runtime->cooperativeGuestYield();
            goto label_154e68;
        }
    }
    ctx->pc = 0x154E84u;
    // 0x154e84: 0x8e70101c  lw          $s0, 0x101C($s3)
    ctx->pc = 0x154e84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4124)));
label_154e88:
    // 0x154e88: 0xae43f168  sw          $v1, -0xE98($s2)
    ctx->pc = 0x154e88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294963560), GPR_U32(ctx, 3));
    // 0x154e8c: 0x708023  subu        $s0, $v1, $s0
    ctx->pc = 0x154e8cu;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x154e90: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x154E90u;
    SET_GPR_U32(ctx, 31, 0x154E98u);
    ctx->pc = 0x154E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154E90u;
            // 0x154e94: 0x2604001c  addiu       $a0, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154E98u; }
        if (ctx->pc != 0x154E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154E98u; }
        if (ctx->pc != 0x154E98u) { return; }
    }
    ctx->pc = 0x154E98u;
    // 0x154e98: 0x108102  srl         $s0, $s0, 4
    ctx->pc = 0x154e98u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 4));
    // 0x154e9c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x154e9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154ea0: 0x8e65101c  lw          $a1, 0x101C($s3)
    ctx->pc = 0x154ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4124)));
    // 0x154ea4: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x154ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x154ea8: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x154EA8u;
    SET_GPR_U32(ctx, 31, 0x154EB0u);
    ctx->pc = 0x154EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154EA8u;
            // 0x154eac: 0x103100  sll         $a2, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154EB0u; }
        if (ctx->pc != 0x154EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154EB0u; }
        if (ctx->pc != 0x154EB0u) { return; }
    }
    ctx->pc = 0x154EB0u;
    // 0x154eb0: 0xae300004  sw          $s0, 0x4($s1)
    ctx->pc = 0x154eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 16));
    // 0x154eb4: 0xae340008  sw          $s4, 0x8($s1)
    ctx->pc = 0x154eb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 20));
    // 0x154eb8: 0xae35000c  sw          $s5, 0xC($s1)
    ctx->pc = 0x154eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 21));
    // 0x154ebc: 0xae360014  sw          $s6, 0x14($s1)
    ctx->pc = 0x154ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 22));
    // 0x154ec0: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x154ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x154ec4: 0x8e44f168  lw          $a0, -0xE98($s2)
    ctx->pc = 0x154ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294963560)));
    // 0x154ec8: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x154ec8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x154ecc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x154ECCu;
    {
        const bool branch_taken_0x154ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x154ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154ECCu;
            // 0x154ed0: 0x8ee2ed60  lw          $v0, -0x12A0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294962528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154ecc) {
            ctx->pc = 0x154EF8u;
            goto label_154ef8;
        }
    }
    ctx->pc = 0x154ED4u;
    // 0x154ed4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x154ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_154ed8:
    // 0x154ed8: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x154ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x154edc: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x154edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x154ee0: 0x0  nop
    ctx->pc = 0x154ee0u;
    // NOP
    // 0x154ee4: 0x0  nop
    ctx->pc = 0x154ee4u;
    // NOP
    // 0x154ee8: 0x0  nop
    ctx->pc = 0x154ee8u;
    // NOP
    // 0x154eec: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x154EECu;
    {
        const bool branch_taken_0x154eec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x154eec) {
            ctx->pc = 0x154EF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x154EECu;
            // 0x154ef0: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x154ED8u;
            runtime->cooperativeGuestYield();
            goto label_154ed8;
        }
    }
    ctx->pc = 0x154EF4u;
    // 0x154ef4: 0x8ee2ed60  lw          $v0, -0x12A0($s7)
    ctx->pc = 0x154ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4294962528)));
label_154ef8:
    // 0x154ef8: 0x27c5ed68  addiu       $a1, $fp, -0x1298
    ctx->pc = 0x154ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 4294962536));
    // 0x154efc: 0xae44f168  sw          $a0, -0xE98($s2)
    ctx->pc = 0x154efcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294963560), GPR_U32(ctx, 4));
    // 0x154f00: 0x24460001  addiu       $a2, $v0, 0x1
    ctx->pc = 0x154f00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x154f04: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x154f04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x154f08: 0xaee6ed60  sw          $a2, -0x12A0($s7)
    ctx->pc = 0x154f08u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 4294962528), GPR_U32(ctx, 6));
    // 0x154f0c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x154f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x154f10: 0x2cc30100  sltiu       $v1, $a2, 0x100
    ctx->pc = 0x154f10u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)256) ? 1 : 0);
    // 0x154f14: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x154f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x154f18: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x154F18u;
    {
        const bool branch_taken_0x154f18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x154F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154F18u;
            // 0x154f1c: 0xac440004  sw          $a0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x154f18) {
            ctx->pc = 0x154F30u;
            goto label_154f30;
        }
    }
    ctx->pc = 0x154F20u;
    // 0x154f20: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x154f20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x154f24: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x154f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x154f28: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x154F28u;
    SET_GPR_U32(ctx, 31, 0x154F30u);
    ctx->pc = 0x154F2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x154F28u;
            // 0x154f2c: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154F30u; }
        if (ctx->pc != 0x154F30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x154F30u; }
        if (ctx->pc != 0x154F30u) { return; }
    }
    ctx->pc = 0x154F30u;
label_154f30:
    // 0x154f30: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x154f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x154f34: 0x2444bb98  addiu       $a0, $v0, -0x4468
    ctx->pc = 0x154f34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949784));
    // 0x154f38: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x154f38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x154f3c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x154f3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x154f40: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x154f40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x154f44: 0x7bb01090  lq          $s0, 0x1090($sp)
    ctx->pc = 0x154f44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 4240)));
    // 0x154f48: 0x7bb11080  lq          $s1, 0x1080($sp)
    ctx->pc = 0x154f48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 4224)));
    // 0x154f4c: 0x7bb21070  lq          $s2, 0x1070($sp)
    ctx->pc = 0x154f4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 4208)));
    // 0x154f50: 0x7bb31060  lq          $s3, 0x1060($sp)
    ctx->pc = 0x154f50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 4192)));
    // 0x154f54: 0x7bb41050  lq          $s4, 0x1050($sp)
    ctx->pc = 0x154f54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 4176)));
    // 0x154f58: 0x7bb51040  lq          $s5, 0x1040($sp)
    ctx->pc = 0x154f58u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 4160)));
    // 0x154f5c: 0x7bb61030  lq          $s6, 0x1030($sp)
    ctx->pc = 0x154f5cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 4144)));
    // 0x154f60: 0x7bb71020  lq          $s7, 0x1020($sp)
    ctx->pc = 0x154f60u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 4128)));
    // 0x154f64: 0x7bbe1010  lq          $fp, 0x1010($sp)
    ctx->pc = 0x154f64u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 4112)));
    // 0x154f68: 0xdfbf1000  ld          $ra, 0x1000($sp)
    ctx->pc = 0x154f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 4096)));
    // 0x154f6c: 0xac830010  sw          $v1, 0x10($a0)
    ctx->pc = 0x154f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 3));
    // 0x154f70: 0x3e00008  jr          $ra
    ctx->pc = 0x154F70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x154F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x154F70u;
            // 0x154f74: 0x27bd10a0  addiu       $sp, $sp, 0x10A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x154C60u: goto label_154c60;
            case 0x154CD8u: goto label_154cd8;
            case 0x154D30u: goto label_154d30;
            case 0x154D4Cu: goto label_154d4c;
            case 0x154E68u: goto label_154e68;
            case 0x154E88u: goto label_154e88;
            case 0x154ED8u: goto label_154ed8;
            case 0x154EF8u: goto label_154ef8;
            case 0x154F30u: goto label_154f30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x154F78u;
}
