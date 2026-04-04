#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020DB88
// Address: 0x20db88 - 0x20dda8
void sub_0020DB88_0x20db88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020DB88_0x20db88");
#endif

    ctx->pc = 0x20db88u;

    // 0x20db88: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x20db88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x20db8c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x20db8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x20db90: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x20db90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x20db94: 0x24428c68  addiu       $v0, $v0, -0x7398
    ctx->pc = 0x20db94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937704));
    // 0x20db98: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x20db98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x20db9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20db9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dba0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x20dba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x20dba4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x20dba4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dba8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x20dba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x20dbac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x20dbacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dbb0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x20dbb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x20dbb4: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x20dbb4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20dbb8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x20dbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20dbbc: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x20dbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x20dbc0: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x20dbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x20dbc4: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x20dbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
    // 0x20dbc8: 0xae130008  sw          $s3, 0x8($s0)
    ctx->pc = 0x20dbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
    // 0x20dbcc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x20dbccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dbd0: 0xae110018  sw          $s1, 0x18($s0)
    ctx->pc = 0x20dbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 17));
    // 0x20dbd4: 0x24a57c88  addiu       $a1, $a1, 0x7C88
    ctx->pc = 0x20dbd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31880));
    // 0x20dbd8: 0xae12001c  sw          $s2, 0x1C($s0)
    ctx->pc = 0x20dbd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 18));
    // 0x20dbdc: 0x26260008  addiu       $a2, $s1, 0x8
    ctx->pc = 0x20dbdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x20dbe0: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x20dbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x20dbe4: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x20dbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x20dbe8: 0xc0a28ac  jal         func_28A2B0
    ctx->pc = 0x20DBE8u;
    SET_GPR_U32(ctx, 31, 0x20DBF0u);
    ctx->pc = 0x20DBECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20DBE8u;
            // 0x20dbec: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28A2B0u;
    if (runtime->hasFunction(0x28A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x28A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DBF0u; }
        if (ctx->pc != 0x20DBF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028A2B0_0x28a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DBF0u; }
        if (ctx->pc != 0x20DBF0u) { return; }
    }
    ctx->pc = 0x20DBF0u;
    // 0x20dbf0: 0xc05e996  jal         func_17A658
    ctx->pc = 0x20DBF0u;
    SET_GPR_U32(ctx, 31, 0x20DBF8u);
    ctx->pc = 0x20DBF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20DBF0u;
            // 0x20dbf4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DBF8u; }
        if (ctx->pc != 0x20DBF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DBF8u; }
        if (ctx->pc != 0x20DBF8u) { return; }
    }
    ctx->pc = 0x20DBF8u;
    // 0x20dbf8: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x20DBF8u;
    {
        const bool branch_taken_0x20dbf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20dbf8) {
            ctx->pc = 0x20DBFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20DBF8u;
            // 0x20dbfc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20DC64u;
            goto label_20dc64;
        }
    }
    ctx->pc = 0x20DC00u;
    // 0x20dc00: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x20dc00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x20dc04: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x20dc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x20dc08: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x20DC08u;
    {
        const bool branch_taken_0x20dc08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DC08u;
            // 0x20dc0c: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dc08) {
            ctx->pc = 0x20DC60u;
            goto label_20dc60;
        }
    }
    ctx->pc = 0x20DC10u;
    // 0x20dc10: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x20dc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20dc14: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x20dc14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x20dc18: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x20dc18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20dc1c: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x20dc1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x20dc20: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x20dc20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x20dc24: 0x8c44e850  lw          $a0, -0x17B0($v0)
    ctx->pc = 0x20dc24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961232)));
    // 0x20dc28: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x20dc28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20dc2c: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x20dc2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20dc30: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20dc30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dc34: 0xc057c7a  jal         func_15F1E8
    ctx->pc = 0x20DC34u;
    SET_GPR_U32(ctx, 31, 0x20DC3Cu);
    ctx->pc = 0x20DC38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20DC34u;
            // 0x20dc38: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F1E8u;
    if (runtime->hasFunction(0x15F1E8u)) {
        auto targetFn = runtime->lookupFunction(0x15F1E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DC3Cu; }
        if (ctx->pc != 0x20DC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_15f1e8_0x15f240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DC3Cu; }
        if (ctx->pc != 0x20DC3Cu) { return; }
    }
    ctx->pc = 0x20DC3Cu;
    // 0x20dc3c: 0x3c030021  lui         $v1, 0x21
    ctx->pc = 0x20dc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33 << 16));
    // 0x20dc40: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x20dc40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x20dc44: 0x2463dcf8  addiu       $v1, $v1, -0x2308
    ctx->pc = 0x20dc44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958328));
    // 0x20dc48: 0x2442dd58  addiu       $v0, $v0, -0x22A8
    ctx->pc = 0x20dc48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958424));
    // 0x20dc4c: 0xae420038  sw          $v0, 0x38($s2)
    ctx->pc = 0x20dc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 56), GPR_U32(ctx, 2));
    // 0x20dc50: 0xae13002c  sw          $s3, 0x2C($s0)
    ctx->pc = 0x20dc50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 19));
    // 0x20dc54: 0xae430034  sw          $v1, 0x34($s2)
    ctx->pc = 0x20dc54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 3));
    // 0x20dc58: 0xae50004c  sw          $s0, 0x4C($s2)
    ctx->pc = 0x20dc58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 76), GPR_U32(ctx, 16));
    // 0x20dc5c: 0x0  nop
    ctx->pc = 0x20dc5cu;
    // NOP
label_20dc60:
    // 0x20dc60: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x20dc60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20dc64:
    // 0x20dc64: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x20dc64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20dc68: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x20dc68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20dc6c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x20dc6cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20dc70: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x20dc70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20dc74: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x20dc74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20dc78: 0x3e00008  jr          $ra
    ctx->pc = 0x20DC78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DC78u;
            // 0x20dc7c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20DC60u: goto label_20dc60;
            case 0x20DC64u: goto label_20dc64;
            case 0x20DCC8u: goto label_20dcc8;
            case 0x20DCE4u: goto label_20dce4;
            case 0x20DD48u: goto label_20dd48;
            case 0x20DD98u: goto label_20dd98;
            case 0x20DD9Cu: goto label_20dd9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20DC80u;
    // 0x20dc80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20dc80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20dc84: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x20dc84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x20dc88: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x20dc88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x20dc8c: 0x24428c68  addiu       $v0, $v0, -0x7398
    ctx->pc = 0x20dc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937704));
    // 0x20dc90: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x20dc90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x20dc94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x20dc94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dc98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20dc98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20dc9c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x20dc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x20dca0: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x20dca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x20dca4: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x20DCA4u;
    {
        const bool branch_taken_0x20dca4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DCA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DCA4u;
            // 0x20dca8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dca4) {
            ctx->pc = 0x20DCC8u;
            goto label_20dcc8;
        }
    }
    ctx->pc = 0x20DCACu;
    // 0x20dcac: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x20dcacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x20dcb0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x20dcb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20dcb4: 0x8c44e850  lw          $a0, -0x17B0($v0)
    ctx->pc = 0x20dcb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961232)));
    // 0x20dcb8: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x20dcb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20dcbc: 0xc057c90  jal         func_15F240
    ctx->pc = 0x20DCBCu;
    SET_GPR_U32(ctx, 31, 0x20DCC4u);
    ctx->pc = 0x20DCC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20DCBCu;
            // 0x20dcc0: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F240u;
    if (runtime->hasFunction(0x15F240u)) {
        auto targetFn = runtime->lookupFunction(0x15F240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DCC4u; }
        if (ctx->pc != 0x20DCC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_15f240_0x15f268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DCC4u; }
        if (ctx->pc != 0x20DCC4u) { return; }
    }
    ctx->pc = 0x20DCC4u;
    // 0x20dcc4: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x20dcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_20dcc8:
    // 0x20dcc8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x20dcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x20dccc: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x20dcccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x20dcd0: 0x2442cb40  addiu       $v0, $v0, -0x34C0
    ctx->pc = 0x20dcd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953792));
    // 0x20dcd4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x20DCD4u;
    {
        const bool branch_taken_0x20dcd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DCD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DCD4u;
            // 0x20dcd8: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dcd4) {
            ctx->pc = 0x20DCE4u;
            goto label_20dce4;
        }
    }
    ctx->pc = 0x20DCDCu;
    // 0x20dcdc: 0xc04f6e6  jal         func_13DB98
    ctx->pc = 0x20DCDCu;
    SET_GPR_U32(ctx, 31, 0x20DCE4u);
    ctx->pc = 0x20DCE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20DCDCu;
            // 0x20dce0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB98u;
    if (runtime->hasFunction(0x13DB98u)) {
        auto targetFn = runtime->lookupFunction(0x13DB98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DCE4u; }
        if (ctx->pc != 0x20DCE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db98_0x13dc78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DCE4u; }
        if (ctx->pc != 0x20DCE4u) { return; }
    }
    ctx->pc = 0x20DCE4u;
label_20dce4:
    // 0x20dce4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x20dce4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20dce8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20dce8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20dcec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20dcecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20dcf0: 0x3e00008  jr          $ra
    ctx->pc = 0x20DCF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DCF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DCF0u;
            // 0x20dcf4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20DC60u: goto label_20dc60;
            case 0x20DC64u: goto label_20dc64;
            case 0x20DCC8u: goto label_20dcc8;
            case 0x20DCE4u: goto label_20dce4;
            case 0x20DD48u: goto label_20dd48;
            case 0x20DD98u: goto label_20dd98;
            case 0x20DD9Cu: goto label_20dd9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20DCF8u;
    // 0x20dcf8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20dcf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20dcfc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20dcfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20dd00: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20dd00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x20dd04: 0x8c90004c  lw          $s0, 0x4C($a0)
    ctx->pc = 0x20dd04u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x20dd08: 0x5200000f  beql        $s0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x20DD08u;
    {
        const bool branch_taken_0x20dd08 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x20dd08) {
            ctx->pc = 0x20DD0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20DD08u;
            // 0x20dd0c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20DD48u;
            goto label_20dd48;
        }
    }
    ctx->pc = 0x20DD10u;
    // 0x20dd10: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x20dd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x20dd14: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x20DD14u;
    {
        const bool branch_taken_0x20dd14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20dd14) {
            ctx->pc = 0x20DD18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20DD14u;
            // 0x20dd18: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20DD48u;
            goto label_20dd48;
        }
    }
    ctx->pc = 0x20DD1Cu;
    // 0x20dd1c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x20dd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x20dd20: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x20dd20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20dd24: 0x8c44e850  lw          $a0, -0x17B0($v0)
    ctx->pc = 0x20dd24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961232)));
    // 0x20dd28: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x20dd28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20dd2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x20dd2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20dd30: 0xc057c7a  jal         func_15F1E8
    ctx->pc = 0x20DD30u;
    SET_GPR_U32(ctx, 31, 0x20DD38u);
    ctx->pc = 0x20DD34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20DD30u;
            // 0x20dd34: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F1E8u;
    if (runtime->hasFunction(0x15F1E8u)) {
        auto targetFn = runtime->lookupFunction(0x15F1E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DD38u; }
        if (ctx->pc != 0x20DD38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_15f1e8_0x15f240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DD38u; }
        if (ctx->pc != 0x20DD38u) { return; }
    }
    ctx->pc = 0x20DD38u;
    // 0x20dd38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20dd38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20dd3c: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x20dd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x20dd40: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20dd40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20dd44: 0x0  nop
    ctx->pc = 0x20dd44u;
    // NOP
label_20dd48:
    // 0x20dd48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20dd48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20dd4c: 0x3e00008  jr          $ra
    ctx->pc = 0x20DD4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DD50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DD4Cu;
            // 0x20dd50: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20DC60u: goto label_20dc60;
            case 0x20DC64u: goto label_20dc64;
            case 0x20DCC8u: goto label_20dcc8;
            case 0x20DCE4u: goto label_20dce4;
            case 0x20DD48u: goto label_20dd48;
            case 0x20DD98u: goto label_20dd98;
            case 0x20DD9Cu: goto label_20dd9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20DD54u;
    // 0x20dd54: 0x0  nop
    ctx->pc = 0x20dd54u;
    // NOP
    // 0x20dd58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20dd58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20dd5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20dd5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x20dd60: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20dd60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x20dd64: 0x8c90004c  lw          $s0, 0x4C($a0)
    ctx->pc = 0x20dd64u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
    // 0x20dd68: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x20DD68u;
    {
        const bool branch_taken_0x20dd68 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x20dd68) {
            ctx->pc = 0x20DD6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20DD68u;
            // 0x20dd6c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20DD9Cu;
            goto label_20dd9c;
        }
    }
    ctx->pc = 0x20DD70u;
    // 0x20dd70: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x20dd70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x20dd74: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20DD74u;
    {
        const bool branch_taken_0x20dd74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20DD78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DD74u;
            // 0x20dd78: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20dd74) {
            ctx->pc = 0x20DD98u;
            goto label_20dd98;
        }
    }
    ctx->pc = 0x20DD7Cu;
    // 0x20dd7c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x20dd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x20dd80: 0x8c44e850  lw          $a0, -0x17B0($v0)
    ctx->pc = 0x20dd80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961232)));
    // 0x20dd84: 0x24060005  addiu       $a2, $zero, 0x5
    ctx->pc = 0x20dd84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20dd88: 0xc057c90  jal         func_15F240
    ctx->pc = 0x20DD88u;
    SET_GPR_U32(ctx, 31, 0x20DD90u);
    ctx->pc = 0x20DD8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20DD88u;
            // 0x20dd8c: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F240u;
    if (runtime->hasFunction(0x15F240u)) {
        auto targetFn = runtime->lookupFunction(0x15F240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DD90u; }
        if (ctx->pc != 0x20DD90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_15f240_0x15f268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20DD90u; }
        if (ctx->pc != 0x20DD90u) { return; }
    }
    ctx->pc = 0x20DD90u;
    // 0x20dd90: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x20dd90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x20dd94: 0x0  nop
    ctx->pc = 0x20dd94u;
    // NOP
label_20dd98:
    // 0x20dd98: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20dd98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20dd9c:
    // 0x20dd9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20dd9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20dda0: 0x3e00008  jr          $ra
    ctx->pc = 0x20DDA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20DDA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20DDA0u;
            // 0x20dda4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20DC60u: goto label_20dc60;
            case 0x20DC64u: goto label_20dc64;
            case 0x20DCC8u: goto label_20dcc8;
            case 0x20DCE4u: goto label_20dce4;
            case 0x20DD48u: goto label_20dd48;
            case 0x20DD98u: goto label_20dd98;
            case 0x20DD9Cu: goto label_20dd9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20DDA8u;
}
