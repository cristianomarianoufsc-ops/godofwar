#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00173E90
// Address: 0x173e90 - 0x1746d8
void sub_00173E90_0x173e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173E90_0x173e90");
#endif

    ctx->pc = 0x173e90u;

    // 0x173e90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x173e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x173e94: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x173e94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x173e98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x173e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x173e9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x173e9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173ea0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x173ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x173ea4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x173ea4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173ea8: 0x2603005c  addiu       $v1, $s0, 0x5C
    ctx->pc = 0x173ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 92));
    // 0x173eac: 0x8e05005c  lw          $a1, 0x5C($s0)
    ctx->pc = 0x173eacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x173eb0: 0x10a3000a  beq         $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x173EB0u;
    {
        const bool branch_taken_0x173eb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x173EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173EB0u;
            // 0x173eb4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173eb0) {
            ctx->pc = 0x173EDCu;
            goto label_173edc;
        }
    }
    ctx->pc = 0x173EB8u;
    // 0x173eb8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x173eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x173ebc: 0x0  nop
    ctx->pc = 0x173ebcu;
    // NOP
label_173ec0:
    // 0x173ec0: 0x54510003  bnel        $v0, $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x173EC0u;
    {
        const bool branch_taken_0x173ec0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x173ec0) {
            ctx->pc = 0x173EC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x173EC0u;
            // 0x173ec4: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x173ED0u;
            goto label_173ed0;
        }
    }
    ctx->pc = 0x173EC8u;
    // 0x173ec8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x173EC8u;
    {
        const bool branch_taken_0x173ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173EC8u;
            // 0x173ecc: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173ec8) {
            ctx->pc = 0x173EDCu;
            goto label_173edc;
        }
    }
    ctx->pc = 0x173ED0u;
label_173ed0:
    // 0x173ed0: 0x54a3fffb  bnel        $a1, $v1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x173ED0u;
    {
        const bool branch_taken_0x173ed0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x173ed0) {
            ctx->pc = 0x173ED4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x173ED0u;
            // 0x173ed4: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x173EC0u;
            runtime->cooperativeGuestYield();
            goto label_173ec0;
        }
    }
    ctx->pc = 0x173ED8u;
    // 0x173ed8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x173ed8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_173edc:
    // 0x173edc: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x173edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x173ee0: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x173ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x173ee4: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x173ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x173ee8: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x173ee8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173eec: 0x8c447910  lw          $a0, 0x7910($v0)
    ctx->pc = 0x173eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x173ef0: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x173ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x173ef4: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x173ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x173ef8: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x173ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x173efc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x173efcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x173f00: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x173f00u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x173f04: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x173F04u;
    SET_GPR_U32(ctx, 31, 0x173F0Cu);
    ctx->pc = 0x173F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173F04u;
            // 0x173f08: 0xace00004  sw          $zero, 0x4($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173F0Cu; }
        if (ctx->pc != 0x173F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173F0Cu; }
        if (ctx->pc != 0x173F0Cu) { return; }
    }
    ctx->pc = 0x173F0Cu;
    // 0x173f0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x173f0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173f10: 0xc05cdc4  jal         func_173710
    ctx->pc = 0x173F10u;
    SET_GPR_U32(ctx, 31, 0x173F18u);
    ctx->pc = 0x173F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173F10u;
            // 0x173f14: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173710u;
    if (runtime->hasFunction(0x173710u)) {
        auto targetFn = runtime->lookupFunction(0x173710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173F18u; }
        if (ctx->pc != 0x173F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_173710_0x173718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173F18u; }
        if (ctx->pc != 0x173F18u) { return; }
    }
    ctx->pc = 0x173F18u;
    // 0x173f18: 0x8e040048  lw          $a0, 0x48($s0)
    ctx->pc = 0x173f18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x173f1c: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x173F1Cu;
    SET_GPR_U32(ctx, 31, 0x173F24u);
    ctx->pc = 0x173F20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x173F1Cu;
            // 0x173f20: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173F24u; }
        if (ctx->pc != 0x173F24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x173F24u; }
        if (ctx->pc != 0x173F24u) { return; }
    }
    ctx->pc = 0x173F24u;
    // 0x173f24: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x173f24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x173f28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x173f28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173f2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x173f2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173f30: 0x3e00008  jr          $ra
    ctx->pc = 0x173F30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x173F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173F30u;
            // 0x173f34: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173EC0u: goto label_173ec0;
            case 0x173ED0u: goto label_173ed0;
            case 0x173EDCu: goto label_173edc;
            case 0x173F70u: goto label_173f70;
            case 0x173F98u: goto label_173f98;
            case 0x173F9Cu: goto label_173f9c;
            case 0x173FB8u: goto label_173fb8;
            case 0x174000u: goto label_174000;
            case 0x17401Cu: goto label_17401c;
            case 0x174020u: goto label_174020;
            case 0x17403Cu: goto label_17403c;
            case 0x17406Cu: goto label_17406c;
            case 0x174074u: goto label_174074;
            case 0x17408Cu: goto label_17408c;
            case 0x1740B4u: goto label_1740b4;
            case 0x1740B8u: goto label_1740b8;
            case 0x1740C0u: goto label_1740c0;
            case 0x1740E4u: goto label_1740e4;
            case 0x174110u: goto label_174110;
            case 0x174114u: goto label_174114;
            case 0x174148u: goto label_174148;
            case 0x17414Cu: goto label_17414c;
            case 0x174150u: goto label_174150;
            case 0x174170u: goto label_174170;
            case 0x174244u: goto label_174244;
            case 0x174248u: goto label_174248;
            case 0x174254u: goto label_174254;
            case 0x17425Cu: goto label_17425c;
            case 0x174264u: goto label_174264;
            case 0x1742A0u: goto label_1742a0;
            case 0x1742ACu: goto label_1742ac;
            case 0x17431Cu: goto label_17431c;
            case 0x17432Cu: goto label_17432c;
            case 0x174340u: goto label_174340;
            case 0x174374u: goto label_174374;
            case 0x174388u: goto label_174388;
            case 0x1743D0u: goto label_1743d0;
            case 0x174448u: goto label_174448;
            case 0x1744B8u: goto label_1744b8;
            case 0x174500u: goto label_174500;
            case 0x174520u: goto label_174520;
            case 0x174548u: goto label_174548;
            case 0x174588u: goto label_174588;
            case 0x1745E0u: goto label_1745e0;
            case 0x1745E8u: goto label_1745e8;
            case 0x174648u: goto label_174648;
            case 0x174690u: goto label_174690;
            case 0x1746A0u: goto label_1746a0;
            case 0x1746A8u: goto label_1746a8;
            case 0x1746C8u: goto label_1746c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x173F38u;
    // 0x173f38: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x173f38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x173f3c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x173f3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x173f40: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x173f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x173f44: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x173f44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173f48: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x173f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x173f4c: 0x2662004c  addiu       $v0, $s3, 0x4C
    ctx->pc = 0x173f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 76));
    // 0x173f50: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x173f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x173f54: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x173f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x173f58: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x173f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x173f5c: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x173f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x173f60: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x173f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x173f64: 0x8e63004c  lw          $v1, 0x4C($s3)
    ctx->pc = 0x173f64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 76)));
    // 0x173f68: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x173f68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x173f6c: 0x0  nop
    ctx->pc = 0x173f6cu;
    // NOP
label_173f70:
    // 0x173f70: 0x2462fffc  addiu       $v0, $v1, -0x4
    ctx->pc = 0x173f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
    // 0x173f74: 0x3100a  movz        $v0, $zero, $v1
    ctx->pc = 0x173f74u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x173f78: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x173f78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x173f7c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x173f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x173f80: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x173F80u;
    {
        const bool branch_taken_0x173f80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x173F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173F80u;
            // 0x173f84: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173f80) {
            ctx->pc = 0x173F98u;
            goto label_173f98;
        }
    }
    ctx->pc = 0x173F88u;
    // 0x173f88: 0x24620004  addiu       $v0, $v1, 0x4
    ctx->pc = 0x173f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x173f8c: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x173f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x173f90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x173F90u;
    {
        const bool branch_taken_0x173f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x173F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173F90u;
            // 0x173f94: 0x2102b  sltu        $v0, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x173f90) {
            ctx->pc = 0x173F9Cu;
            goto label_173f9c;
        }
    }
    ctx->pc = 0x173F98u;
label_173f98:
    // 0x173f98: 0x4102b  sltu        $v0, $zero, $a0
    ctx->pc = 0x173f98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_173f9c:
    // 0x173f9c: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x173F9Cu;
    {
        const bool branch_taken_0x173f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x173f9c) {
            ctx->pc = 0x173FA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x173F9Cu;
            // 0x173fa0: 0x8c630004  lw          $v1, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x173F70u;
            runtime->cooperativeGuestYield();
            goto label_173f70;
        }
    }
    ctx->pc = 0x173FA4u;
    // 0x173fa4: 0x8e720024  lw          $s2, 0x24($s3)
    ctx->pc = 0x173fa4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x173fa8: 0x124000c0  beqz        $s2, . + 4 + (0xC0 << 2)
    ctx->pc = 0x173FA8u;
    {
        const bool branch_taken_0x173fa8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x173FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173FA8u;
            // 0x173fac: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173fa8) {
            ctx->pc = 0x1742ACu;
            goto label_1742ac;
        }
    }
    ctx->pc = 0x173FB0u;
    // 0x173fb0: 0x2642fff8  addiu       $v0, $s2, -0x8
    ctx->pc = 0x173fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
    // 0x173fb4: 0x0  nop
    ctx->pc = 0x173fb4u;
    // NOP
label_173fb8:
    // 0x173fb8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x173fb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173fbc: 0x52880b  movn        $s1, $v0, $s2
    ctx->pc = 0x173fbcu;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x173fc0: 0x8e560000  lw          $s6, 0x0($s2)
    ctx->pc = 0x173fc0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x173fc4: 0x96230004  lhu         $v1, 0x4($s1)
    ctx->pc = 0x173fc4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x173fc8: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x173fc8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173fcc: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x173fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x173fd0: 0x144000b3  bnez        $v0, . + 4 + (0xB3 << 2)
    ctx->pc = 0x173FD0u;
    {
        const bool branch_taken_0x173fd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x173FD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173FD0u;
            // 0x173fd4: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173fd0) {
            ctx->pc = 0x1742A0u;
            goto label_1742a0;
        }
    }
    ctx->pc = 0x173FD8u;
    // 0x173fd8: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x173fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x173fdc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x173FDCu;
    {
        const bool branch_taken_0x173fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x173FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173FDCu;
            // 0x173fe0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x173fdc) {
            ctx->pc = 0x174000u;
            goto label_174000;
        }
    }
    ctx->pc = 0x173FE4u;
    // 0x173fe4: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x173fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x173fe8: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x173fe8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x173fec: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x173fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x173ff0: 0x40f809  jalr        $v0
    ctx->pc = 0x173FF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x173FF8u);
        ctx->pc = 0x173FF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x173FF0u;
            // 0x173ff4: 0x2642021  addu        $a0, $s3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x173FF8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173EC0u: goto label_173ec0;
            case 0x173ED0u: goto label_173ed0;
            case 0x173EDCu: goto label_173edc;
            case 0x173F70u: goto label_173f70;
            case 0x173F98u: goto label_173f98;
            case 0x173F9Cu: goto label_173f9c;
            case 0x173FB8u: goto label_173fb8;
            case 0x174000u: goto label_174000;
            case 0x17401Cu: goto label_17401c;
            case 0x174020u: goto label_174020;
            case 0x17403Cu: goto label_17403c;
            case 0x17406Cu: goto label_17406c;
            case 0x174074u: goto label_174074;
            case 0x17408Cu: goto label_17408c;
            case 0x1740B4u: goto label_1740b4;
            case 0x1740B8u: goto label_1740b8;
            case 0x1740C0u: goto label_1740c0;
            case 0x1740E4u: goto label_1740e4;
            case 0x174110u: goto label_174110;
            case 0x174114u: goto label_174114;
            case 0x174148u: goto label_174148;
            case 0x17414Cu: goto label_17414c;
            case 0x174150u: goto label_174150;
            case 0x174170u: goto label_174170;
            case 0x174244u: goto label_174244;
            case 0x174248u: goto label_174248;
            case 0x174254u: goto label_174254;
            case 0x17425Cu: goto label_17425c;
            case 0x174264u: goto label_174264;
            case 0x1742A0u: goto label_1742a0;
            case 0x1742ACu: goto label_1742ac;
            case 0x17431Cu: goto label_17431c;
            case 0x17432Cu: goto label_17432c;
            case 0x174340u: goto label_174340;
            case 0x174374u: goto label_174374;
            case 0x174388u: goto label_174388;
            case 0x1743D0u: goto label_1743d0;
            case 0x174448u: goto label_174448;
            case 0x1744B8u: goto label_1744b8;
            case 0x174500u: goto label_174500;
            case 0x174520u: goto label_174520;
            case 0x174548u: goto label_174548;
            case 0x174588u: goto label_174588;
            case 0x1745E0u: goto label_1745e0;
            case 0x1745E8u: goto label_1745e8;
            case 0x174648u: goto label_174648;
            case 0x174690u: goto label_174690;
            case 0x1746A0u: goto label_1746a0;
            case 0x1746A8u: goto label_1746a8;
            case 0x1746C8u: goto label_1746c8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x173FF8u; }
            if (ctx->pc != 0x173FF8u) { return; }
        }
        }
    }
    ctx->pc = 0x173FF8u;
    // 0x173ff8: 0x100000a9  b           . + 4 + (0xA9 << 2)
    ctx->pc = 0x173FF8u;
    {
        const bool branch_taken_0x173ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x173ff8) {
            ctx->pc = 0x1742A0u;
            goto label_1742a0;
        }
    }
    ctx->pc = 0x174000u;
label_174000:
    // 0x174000: 0x2634001c  addiu       $s4, $s1, 0x1C
    ctx->pc = 0x174000u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x174004: 0xc05cd0c  jal         func_173430
    ctx->pc = 0x174004u;
    SET_GPR_U32(ctx, 31, 0x17400Cu);
    ctx->pc = 0x174008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174004u;
            // 0x174008: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173430u;
    if (runtime->hasFunction(0x173430u)) {
        auto targetFn = runtime->lookupFunction(0x173430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17400Cu; }
        if (ctx->pc != 0x17400Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_173430_0x1734a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17400Cu; }
        if (ctx->pc != 0x17400Cu) { return; }
    }
    ctx->pc = 0x17400Cu;
    // 0x17400c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17400Cu;
    {
        const bool branch_taken_0x17400c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17400Cu;
            // 0x174010: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17400c) {
            ctx->pc = 0x17401Cu;
            goto label_17401c;
        }
    }
    ctx->pc = 0x174014u;
    // 0x174014: 0x100000a2  b           . + 4 + (0xA2 << 2)
    ctx->pc = 0x174014u;
    {
        const bool branch_taken_0x174014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174014u;
            // 0x174018: 0xae20001c  sw          $zero, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174014) {
            ctx->pc = 0x1742A0u;
            goto label_1742a0;
        }
    }
    ctx->pc = 0x17401Cu;
label_17401c:
    // 0x17401c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17401cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174020:
    // 0x174020: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x174020u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x174024: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x174024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x174028: 0x84430028  lh          $v1, 0x28($v0)
    ctx->pc = 0x174028u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x17402c: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x17402cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x174030: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x174030u;
    {
        const bool branch_taken_0x174030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x174034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174030u;
            // 0x174034: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174030) {
            ctx->pc = 0x17403Cu;
            goto label_17403c;
        }
    }
    ctx->pc = 0x174038u;
    // 0x174038: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x174038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_17403c:
    // 0x17403c: 0x51400  sll         $v0, $a1, 16
    ctx->pc = 0x17403cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x174040: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x174040u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x174044: 0x21c03  sra         $v1, $v0, 16
    ctx->pc = 0x174044u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
    // 0x174048: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x174048u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x17404c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x17404Cu;
    {
        const bool branch_taken_0x17404c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17404Cu;
            // 0x174050: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17404c) {
            ctx->pc = 0x174020u;
            runtime->cooperativeGuestYield();
            goto label_174020;
        }
    }
    ctx->pc = 0x174054u;
    // 0x174054: 0x1c600005  bgtz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x174054u;
    {
        const bool branch_taken_0x174054 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x174058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174054u;
            // 0x174058: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174054) {
            ctx->pc = 0x17406Cu;
            goto label_17406c;
        }
    }
    ctx->pc = 0x17405Cu;
    // 0x17405c: 0x9622001a  lhu         $v0, 0x1A($s1)
    ctx->pc = 0x17405cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x174060: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x174060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x174064: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x174064u;
    {
        const bool branch_taken_0x174064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x174064) {
            ctx->pc = 0x174068u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x174064u;
            // 0x174068: 0x92220019  lbu         $v0, 0x19($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 25)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x174074u;
            goto label_174074;
        }
    }
    ctx->pc = 0x17406Cu;
label_17406c:
    // 0x17406c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x17406cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x174070: 0x92220019  lbu         $v0, 0x19($s1)
    ctx->pc = 0x174070u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 25)));
label_174074:
    // 0x174074: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x174074u;
    {
        const bool branch_taken_0x174074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x174078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174074u;
            // 0x174078: 0x3c03002a  lui         $v1, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174074) {
            ctx->pc = 0x17408Cu;
            goto label_17408c;
        }
    }
    ctx->pc = 0x17407Cu;
    // 0x17407c: 0x8c62c3b4  lw          $v0, -0x3C4C($v1)
    ctx->pc = 0x17407cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294951860)));
    // 0x174080: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x174080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x174084: 0x10000086  b           . + 4 + (0x86 << 2)
    ctx->pc = 0x174084u;
    {
        const bool branch_taken_0x174084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174084u;
            // 0x174088: 0xac62c3b4  sw          $v0, -0x3C4C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294951860), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174084) {
            ctx->pc = 0x1742A0u;
            goto label_1742a0;
        }
    }
    ctx->pc = 0x17408Cu;
label_17408c:
    // 0x17408c: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x17408cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x174090: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x174090u;
    {
        const bool branch_taken_0x174090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x174090) {
            ctx->pc = 0x1740C0u;
            goto label_1740c0;
        }
    }
    ctx->pc = 0x174098u;
    // 0x174098: 0x9622001a  lhu         $v0, 0x1A($s1)
    ctx->pc = 0x174098u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x17409c: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x17409cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x1740a0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1740A0u;
    {
        const bool branch_taken_0x1740a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1740a0) {
            ctx->pc = 0x1740A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1740A0u;
            // 0x1740a4: 0x8e220020  lw          $v0, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1740B8u;
            goto label_1740b8;
        }
    }
    ctx->pc = 0x1740A8u;
    // 0x1740a8: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1740A8u;
    {
        const bool branch_taken_0x1740a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1740ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1740A8u;
            // 0x1740ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1740a8) {
            ctx->pc = 0x1740B4u;
            goto label_1740b4;
        }
    }
    ctx->pc = 0x1740B0u;
    // 0x1740b0: 0xa2220018  sb          $v0, 0x18($s1)
    ctx->pc = 0x1740b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24), (uint8_t)GPR_U32(ctx, 2));
label_1740b4:
    // 0x1740b4: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1740b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1740b8:
    // 0x1740b8: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x1740B8u;
    {
        const bool branch_taken_0x1740b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1740b8) {
            ctx->pc = 0x1740BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1740B8u;
            // 0x1740bc: 0x82230018  lb          $v1, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x17414Cu;
            goto label_17414c;
        }
    }
    ctx->pc = 0x1740C0u;
label_1740c0:
    // 0x1740c0: 0x56000008  bnel        $s0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1740C0u;
    {
        const bool branch_taken_0x1740c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1740c0) {
            ctx->pc = 0x1740C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1740C0u;
            // 0x1740c4: 0x8e260020  lw          $a2, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1740E4u;
            goto label_1740e4;
        }
    }
    ctx->pc = 0x1740C8u;
    // 0x1740c8: 0x82230018  lb          $v1, 0x18($s1)
    ctx->pc = 0x1740c8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1740cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1740ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1740d0: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1740D0u;
    {
        const bool branch_taken_0x1740d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1740d0) {
            ctx->pc = 0x1740D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1740D0u;
            // 0x1740d4: 0x8e260020  lw          $a2, 0x20($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1740E4u;
            goto label_1740e4;
        }
    }
    ctx->pc = 0x1740D8u;
    // 0x1740d8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1740d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1740dc: 0xa2220018  sb          $v0, 0x18($s1)
    ctx->pc = 0x1740dcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24), (uint8_t)GPR_U32(ctx, 2));
    // 0x1740e0: 0x8e260020  lw          $a2, 0x20($s1)
    ctx->pc = 0x1740e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1740e4:
    // 0x1740e4: 0x10c00019  beqz        $a2, . + 4 + (0x19 << 2)
    ctx->pc = 0x1740E4u;
    {
        const bool branch_taken_0x1740e4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1740E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1740E4u;
            // 0x1740e8: 0x82230018  lb          $v1, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1740e4) {
            ctx->pc = 0x17414Cu;
            goto label_17414c;
        }
    }
    ctx->pc = 0x1740ECu;
    // 0x1740ec: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x1740ECu;
    {
        const bool branch_taken_0x1740ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1740F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1740ECu;
            // 0x1740f0: 0x92240018  lbu         $a0, 0x18($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1740ec) {
            ctx->pc = 0x17414Cu;
            goto label_17414c;
        }
    }
    ctx->pc = 0x1740F4u;
    // 0x1740f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1740f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1740f8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1740F8u;
    {
        const bool branch_taken_0x1740f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1740FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1740F8u;
            // 0x1740fc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1740f8) {
            ctx->pc = 0x174110u;
            goto label_174110;
        }
    }
    ctx->pc = 0x174100u;
    // 0x174100: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x174100u;
    {
        const bool branch_taken_0x174100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x174104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174100u;
            // 0x174104: 0x41600  sll         $v0, $a0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174100) {
            ctx->pc = 0x174114u;
            goto label_174114;
        }
    }
    ctx->pc = 0x174108u;
    // 0x174108: 0x16000011  bnez        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x174108u;
    {
        const bool branch_taken_0x174108 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x17410Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174108u;
            // 0x17410c: 0x2c620005  sltiu       $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x174108) {
            ctx->pc = 0x174150u;
            goto label_174150;
        }
    }
    ctx->pc = 0x174110u;
label_174110:
    // 0x174110: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x174110u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_174114:
    // 0x174114: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x174114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x174118: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x174118u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x17411c: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x17411Cu;
    {
        const bool branch_taken_0x17411c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x174120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17411Cu;
            // 0x174120: 0x3c04534d  lui         $a0, 0x534D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21325 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17411c) {
            ctx->pc = 0x174148u;
            goto label_174148;
        }
    }
    ctx->pc = 0x174124u;
    // 0x174124: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x174124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x174128: 0x34845044  ori         $a0, $a0, 0x5044
    ctx->pc = 0x174128u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20548);
    // 0x17412c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17412cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174130: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x174130u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174134: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x174134u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174138: 0xc09b260  jal         func_26C980
    ctx->pc = 0x174138u;
    SET_GPR_U32(ctx, 31, 0x174140u);
    ctx->pc = 0x17413Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174138u;
            // 0x17413c: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26C980u;
    if (runtime->hasFunction(0x26C980u)) {
        auto targetFn = runtime->lookupFunction(0x26C980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174140u; }
        if (ctx->pc != 0x174140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026C980_0x26c980(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174140u; }
        if (ctx->pc != 0x174140u) { return; }
    }
    ctx->pc = 0x174140u;
    // 0x174140: 0xae200020  sw          $zero, 0x20($s1)
    ctx->pc = 0x174140u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
    // 0x174144: 0x0  nop
    ctx->pc = 0x174144u;
    // NOP
label_174148:
    // 0x174148: 0x82230018  lb          $v1, 0x18($s1)
    ctx->pc = 0x174148u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
label_17414c:
    // 0x17414c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x17414cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_174150:
    // 0x174150: 0x10400053  beqz        $v0, . + 4 + (0x53 << 2)
    ctx->pc = 0x174150u;
    {
        const bool branch_taken_0x174150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x174154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174150u;
            // 0x174154: 0x3c02002b  lui         $v0, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174150) {
            ctx->pc = 0x1742A0u;
            goto label_1742a0;
        }
    }
    ctx->pc = 0x174158u;
    // 0x174158: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x174158u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17415c: 0x24422670  addiu       $v0, $v0, 0x2670
    ctx->pc = 0x17415cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9840));
    // 0x174160: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x174160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x174164: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x174164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x174168: 0x400008  jr          $v0
    ctx->pc = 0x174168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x174170u: goto label_174170;
            case 0x17425Cu: goto label_17425c;
            case 0x174264u: goto label_174264;
            case 0x1742A0u: goto label_1742a0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x174170u;
label_174170:
    // 0x174170: 0x52000035  beql        $s0, $zero, . + 4 + (0x35 << 2)
    ctx->pc = 0x174170u;
    {
        const bool branch_taken_0x174170 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x174170) {
            ctx->pc = 0x174174u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x174170u;
            // 0x174174: 0x9622001a  lhu         $v0, 0x1A($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x174248u;
            goto label_174248;
        }
    }
    ctx->pc = 0x174178u;
    // 0x174178: 0xc05cd0c  jal         func_173430
    ctx->pc = 0x174178u;
    SET_GPR_U32(ctx, 31, 0x174180u);
    ctx->pc = 0x17417Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174178u;
            // 0x17417c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173430u;
    if (runtime->hasFunction(0x173430u)) {
        auto targetFn = runtime->lookupFunction(0x173430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174180u; }
        if (ctx->pc != 0x174180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_173430_0x1734a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174180u; }
        if (ctx->pc != 0x174180u) { return; }
    }
    ctx->pc = 0x174180u;
    // 0x174180: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x174180u;
    {
        const bool branch_taken_0x174180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x174184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174180u;
            // 0x174184: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174180) {
            ctx->pc = 0x174244u;
            goto label_174244;
        }
    }
    ctx->pc = 0x174188u;
    // 0x174188: 0x9624001a  lhu         $a0, 0x1A($s1)
    ctx->pc = 0x174188u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x17418c: 0x9045c3a4  lbu         $a1, -0x3C5C($v0)
    ctx->pc = 0x17418cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294951844)));
    // 0x174190: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x174190u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x174194: 0x30831000  andi        $v1, $a0, 0x1000
    ctx->pc = 0x174194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4096);
    // 0x174198: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x174198u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x17419c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17419cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1741a0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1741a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1741a4: 0x203300b  movn        $a2, $s0, $v1
    ctx->pc = 0x1741a4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 16));
    // 0x1741a8: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x1741a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x1741ac: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x1741acu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1741b0: 0xa2250019  sb          $a1, 0x19($s1)
    ctx->pc = 0x1741b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 25), (uint8_t)GPR_U32(ctx, 5));
    // 0x1741b4: 0x34620001  ori         $v0, $v1, 0x1
    ctx->pc = 0x1741b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x1741b8: 0x30840800  andi        $a0, $a0, 0x800
    ctx->pc = 0x1741b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2048);
    // 0x1741bc: 0x8e25001c  lw          $a1, 0x1C($s1)
    ctx->pc = 0x1741bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1741c0: 0x44180b  movn        $v1, $v0, $a0
    ctx->pc = 0x1741c0u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
    // 0x1741c4: 0x6aa70027  ldl         $a3, 0x27($s5)
    ctx->pc = 0x1741c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x1741c8: 0x6ea70020  ldr         $a3, 0x20($s5)
    ctx->pc = 0x1741c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x1741cc: 0x6aa9002f  ldl         $t1, 0x2F($s5)
    ctx->pc = 0x1741ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x1741d0: 0x6ea90028  ldr         $t1, 0x28($s5)
    ctx->pc = 0x1741d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x1741d4: 0x6aa20037  ldl         $v0, 0x37($s5)
    ctx->pc = 0x1741d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x1741d8: 0x6ea20030  ldr         $v0, 0x30($s5)
    ctx->pc = 0x1741d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x1741dc: 0xb3a70017  sdl         $a3, 0x17($sp)
    ctx->pc = 0x1741dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1741e0: 0xb7a70010  sdr         $a3, 0x10($sp)
    ctx->pc = 0x1741e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1741e4: 0xb3a9001f  sdl         $t1, 0x1F($sp)
    ctx->pc = 0x1741e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1741e8: 0xb7a90018  sdr         $t1, 0x18($sp)
    ctx->pc = 0x1741e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1741ec: 0xb3a20027  sdl         $v0, 0x27($sp)
    ctx->pc = 0x1741ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1741f0: 0xb7a20020  sdr         $v0, 0x20($sp)
    ctx->pc = 0x1741f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1741f4: 0x3c080017  lui         $t0, 0x17
    ctx->pc = 0x1741f4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)23 << 16));
    // 0x1741f8: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x1741f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
    // 0x1741fc: 0x3c04534d  lui         $a0, 0x534D
    ctx->pc = 0x1741fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21325 << 16));
    // 0x174200: 0x250838d8  addiu       $t0, $t0, 0x38D8
    ctx->pc = 0x174200u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 14552));
    // 0x174204: 0x34845044  ori         $a0, $a0, 0x5044
    ctx->pc = 0x174204u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20548);
    // 0x174208: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x174208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
    // 0x17420c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x17420cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x174210: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x174210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x174214: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x174214u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x174218: 0xc09b2a4  jal         func_26CA90
    ctx->pc = 0x174218u;
    SET_GPR_U32(ctx, 31, 0x174220u);
    ctx->pc = 0x17421Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174218u;
            // 0x17421c: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26CA90u;
    if (runtime->hasFunction(0x26CA90u)) {
        auto targetFn = runtime->lookupFunction(0x26CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174220u; }
        if (ctx->pc != 0x174220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026CA90_0x26ca90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174220u; }
        if (ctx->pc != 0x174220u) { return; }
    }
    ctx->pc = 0x174220u;
    // 0x174220: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x174220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x174224: 0x216c2  srl         $v0, $v0, 27
    ctx->pc = 0x174224u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 27));
    // 0x174228: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x174228u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x17422c: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x17422Cu;
    {
        const bool branch_taken_0x17422c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17422Cu;
            // 0x174230: 0xa2300018  sb          $s0, 0x18($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 24), (uint8_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17422c) {
            ctx->pc = 0x1742A0u;
            goto label_1742a0;
        }
    }
    ctx->pc = 0x174234u;
    // 0x174234: 0x9622001a  lhu         $v0, 0x1A($s1)
    ctx->pc = 0x174234u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x174238: 0x3042dfff  andi        $v0, $v0, 0xDFFF
    ctx->pc = 0x174238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57343);
    // 0x17423c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x17423Cu;
    {
        const bool branch_taken_0x17423c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17423Cu;
            // 0x174240: 0xa622001a  sh          $v0, 0x1A($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 26), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17423c) {
            ctx->pc = 0x1742A0u;
            goto label_1742a0;
        }
    }
    ctx->pc = 0x174244u;
label_174244:
    // 0x174244: 0x9622001a  lhu         $v0, 0x1A($s1)
    ctx->pc = 0x174244u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
label_174248:
    // 0x174248: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x174248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x17424c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x17424Cu;
    {
        const bool branch_taken_0x17424c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17424c) {
            ctx->pc = 0x1742A0u;
            goto label_1742a0;
        }
    }
    ctx->pc = 0x174254u;
label_174254:
    // 0x174254: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x174254u;
    {
        const bool branch_taken_0x174254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174254u;
            // 0x174258: 0xa2200018  sb          $zero, 0x18($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 24), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174254) {
            ctx->pc = 0x1742A0u;
            goto label_1742a0;
        }
    }
    ctx->pc = 0x17425Cu;
label_17425c:
    // 0x17425c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x17425cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x174260: 0xa2220018  sb          $v0, 0x18($s1)
    ctx->pc = 0x174260u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 24), (uint8_t)GPR_U32(ctx, 2));
label_174264:
    // 0x174264: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x174264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x174268: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x174268u;
    {
        const bool branch_taken_0x174268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17426Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174268u;
            // 0x17426c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174268) {
            ctx->pc = 0x174254u;
            runtime->cooperativeGuestYield();
            goto label_174254;
        }
    }
    ctx->pc = 0x174270u;
    // 0x174270: 0x3c080017  lui         $t0, 0x17
    ctx->pc = 0x174270u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)23 << 16));
    // 0x174274: 0x9042c3a4  lbu         $v0, -0x3C5C($v0)
    ctx->pc = 0x174274u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294951844)));
    // 0x174278: 0x3c04534d  lui         $a0, 0x534D
    ctx->pc = 0x174278u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21325 << 16));
    // 0x17427c: 0x250838d8  addiu       $t0, $t0, 0x38D8
    ctx->pc = 0x17427cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 14552));
    // 0x174280: 0x34845044  ori         $a0, $a0, 0x5044
    ctx->pc = 0x174280u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)20548);
    // 0x174284: 0xa2220019  sb          $v0, 0x19($s1)
    ctx->pc = 0x174284u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 25), (uint8_t)GPR_U32(ctx, 2));
    // 0x174288: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x174288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x17428c: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x17428cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x174290: 0x26270020  addiu       $a3, $s1, 0x20
    ctx->pc = 0x174290u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x174294: 0xc09b2a4  jal         func_26CA90
    ctx->pc = 0x174294u;
    SET_GPR_U32(ctx, 31, 0x17429Cu);
    ctx->pc = 0x174298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174294u;
            // 0x174298: 0x220482d  daddu       $t1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26CA90u;
    if (runtime->hasFunction(0x26CA90u)) {
        auto targetFn = runtime->lookupFunction(0x26CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17429Cu; }
        if (ctx->pc != 0x17429Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026CA90_0x26ca90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17429Cu; }
        if (ctx->pc != 0x17429Cu) { return; }
    }
    ctx->pc = 0x17429Cu;
    // 0x17429c: 0xae200034  sw          $zero, 0x34($s1)
    ctx->pc = 0x17429cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 0));
label_1742a0:
    // 0x1742a0: 0x16c0ff45  bnez        $s6, . + 4 + (-0xBB << 2)
    ctx->pc = 0x1742A0u;
    {
        const bool branch_taken_0x1742a0 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x1742A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1742A0u;
            // 0x1742a4: 0x2642fff8  addiu       $v0, $s2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1742a0) {
            ctx->pc = 0x173FB8u;
            runtime->cooperativeGuestYield();
            goto label_173fb8;
        }
    }
    ctx->pc = 0x1742A8u;
    // 0x1742a8: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1742a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1742ac:
    // 0x1742ac: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1742acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1742b0: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1742b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1742b4: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1742b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1742b8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1742b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1742bc: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1742bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1742c0: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x1742c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1742c4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1742c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1742c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1742C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1742CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1742C8u;
            // 0x1742cc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173EC0u: goto label_173ec0;
            case 0x173ED0u: goto label_173ed0;
            case 0x173EDCu: goto label_173edc;
            case 0x173F70u: goto label_173f70;
            case 0x173F98u: goto label_173f98;
            case 0x173F9Cu: goto label_173f9c;
            case 0x173FB8u: goto label_173fb8;
            case 0x174000u: goto label_174000;
            case 0x17401Cu: goto label_17401c;
            case 0x174020u: goto label_174020;
            case 0x17403Cu: goto label_17403c;
            case 0x17406Cu: goto label_17406c;
            case 0x174074u: goto label_174074;
            case 0x17408Cu: goto label_17408c;
            case 0x1740B4u: goto label_1740b4;
            case 0x1740B8u: goto label_1740b8;
            case 0x1740C0u: goto label_1740c0;
            case 0x1740E4u: goto label_1740e4;
            case 0x174110u: goto label_174110;
            case 0x174114u: goto label_174114;
            case 0x174148u: goto label_174148;
            case 0x17414Cu: goto label_17414c;
            case 0x174150u: goto label_174150;
            case 0x174170u: goto label_174170;
            case 0x174244u: goto label_174244;
            case 0x174248u: goto label_174248;
            case 0x174254u: goto label_174254;
            case 0x17425Cu: goto label_17425c;
            case 0x174264u: goto label_174264;
            case 0x1742A0u: goto label_1742a0;
            case 0x1742ACu: goto label_1742ac;
            case 0x17431Cu: goto label_17431c;
            case 0x17432Cu: goto label_17432c;
            case 0x174340u: goto label_174340;
            case 0x174374u: goto label_174374;
            case 0x174388u: goto label_174388;
            case 0x1743D0u: goto label_1743d0;
            case 0x174448u: goto label_174448;
            case 0x1744B8u: goto label_1744b8;
            case 0x174500u: goto label_174500;
            case 0x174520u: goto label_174520;
            case 0x174548u: goto label_174548;
            case 0x174588u: goto label_174588;
            case 0x1745E0u: goto label_1745e0;
            case 0x1745E8u: goto label_1745e8;
            case 0x174648u: goto label_174648;
            case 0x174690u: goto label_174690;
            case 0x1746A0u: goto label_1746a0;
            case 0x1746A8u: goto label_1746a8;
            case 0x1746C8u: goto label_1746c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1742D0u;
    // 0x1742d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1742d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1742d4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1742d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1742d8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1742d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x1742dc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1742dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1742e0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1742e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1742e4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1742e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1742e8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1742e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1742ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1742ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1742f0: 0x96230002  lhu         $v1, 0x2($s1)
    ctx->pc = 0x1742f0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x1742f4: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x1742f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x1742f8: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1742F8u;
    {
        const bool branch_taken_0x1742f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1742FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1742F8u;
            // 0x1742fc: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1742f8) {
            ctx->pc = 0x17432Cu;
            goto label_17432c;
        }
    }
    ctx->pc = 0x174300u;
    // 0x174300: 0x2c620004  sltiu       $v0, $v1, 0x4
    ctx->pc = 0x174300u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x174304: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x174304u;
    {
        const bool branch_taken_0x174304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x174308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174304u;
            // 0x174308: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174304) {
            ctx->pc = 0x17431Cu;
            goto label_17431c;
        }
    }
    ctx->pc = 0x17430Cu;
    // 0x17430c: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x17430Cu;
    {
        const bool branch_taken_0x17430c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x174310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17430Cu;
            // 0x174310: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17430c) {
            ctx->pc = 0x17432Cu;
            goto label_17432c;
        }
    }
    ctx->pc = 0x174314u;
    // 0x174314: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x174314u;
    {
        const bool branch_taken_0x174314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174314u;
            // 0x174318: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174314) {
            ctx->pc = 0x1743D0u;
            goto label_1743d0;
        }
    }
    ctx->pc = 0x17431Cu;
label_17431c:
    // 0x17431c: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x17431Cu;
    {
        const bool branch_taken_0x17431c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x174320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17431Cu;
            // 0x174320: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17431c) {
            ctx->pc = 0x174374u;
            goto label_174374;
        }
    }
    ctx->pc = 0x174324u;
    // 0x174324: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x174324u;
    {
        const bool branch_taken_0x174324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174324u;
            // 0x174328: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174324) {
            ctx->pc = 0x1743D0u;
            goto label_1743d0;
        }
    }
    ctx->pc = 0x17432Cu;
label_17432c:
    // 0x17432c: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x17432cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x174330: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x174330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x174334: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x174334u;
    {
        const bool branch_taken_0x174334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x174338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174334u;
            // 0x174338: 0x34621000  ori         $v0, $v1, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x174334) {
            ctx->pc = 0x174340u;
            goto label_174340;
        }
    }
    ctx->pc = 0x17433Cu;
    // 0x17433c: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x17433cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_174340:
    // 0x174340: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x174340u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174344: 0xc05cb32  jal         func_172CC8
    ctx->pc = 0x174344u;
    SET_GPR_U32(ctx, 31, 0x17434Cu);
    ctx->pc = 0x174348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174344u;
            // 0x174348: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172CC8u;
    if (runtime->hasFunction(0x172CC8u)) {
        auto targetFn = runtime->lookupFunction(0x172CC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17434Cu; }
        if (ctx->pc != 0x17434Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_172cc8_0x172d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17434Cu; }
        if (ctx->pc != 0x17434Cu) { return; }
    }
    ctx->pc = 0x17434Cu;
    // 0x17434c: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x17434cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x174350: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x174350u;
    SET_GPR_U32(ctx, 31, 0x174358u);
    ctx->pc = 0x174354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174350u;
            // 0x174354: 0x24040038  addiu       $a0, $zero, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174358u; }
        if (ctx->pc != 0x174358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174358u; }
        if (ctx->pc != 0x174358u) { return; }
    }
    ctx->pc = 0x174358u;
    // 0x174358: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x174358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17435c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17435cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174360: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x174360u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174364: 0xc05cb7c  jal         func_172DF0
    ctx->pc = 0x174364u;
    SET_GPR_U32(ctx, 31, 0x17436Cu);
    ctx->pc = 0x174368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174364u;
            // 0x174368: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172DF0u;
    if (runtime->hasFunction(0x172DF0u)) {
        auto targetFn = runtime->lookupFunction(0x172DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17436Cu; }
        if (ctx->pc != 0x17436Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00172DF0_0x172df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17436Cu; }
        if (ctx->pc != 0x17436Cu) { return; }
    }
    ctx->pc = 0x17436Cu;
    // 0x17436c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x17436Cu;
    {
        const bool branch_taken_0x17436c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17436Cu;
            // 0x174370: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17436c) {
            ctx->pc = 0x1743D0u;
            goto label_1743d0;
        }
    }
    ctx->pc = 0x174374u;
label_174374:
    // 0x174374: 0x96030002  lhu         $v1, 0x2($s0)
    ctx->pc = 0x174374u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x174378: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x174378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x17437c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x17437Cu;
    {
        const bool branch_taken_0x17437c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x174380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17437Cu;
            // 0x174380: 0x34621000  ori         $v0, $v1, 0x1000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17437c) {
            ctx->pc = 0x174388u;
            goto label_174388;
        }
    }
    ctx->pc = 0x174384u;
    // 0x174384: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x174384u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_174388:
    // 0x174388: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x174388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17438c: 0xc05cb32  jal         func_172CC8
    ctx->pc = 0x17438Cu;
    SET_GPR_U32(ctx, 31, 0x174394u);
    ctx->pc = 0x174390u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17438Cu;
            // 0x174390: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x172CC8u;
    if (runtime->hasFunction(0x172CC8u)) {
        auto targetFn = runtime->lookupFunction(0x172CC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174394u; }
        if (ctx->pc != 0x174394u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_172cc8_0x172d08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174394u; }
        if (ctx->pc != 0x174394u) { return; }
    }
    ctx->pc = 0x174394u;
    // 0x174394: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x174394u;
    SET_GPR_U32(ctx, 31, 0x17439Cu);
    ctx->pc = 0x174398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174394u;
            // 0x174398: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17439Cu; }
        if (ctx->pc != 0x17439Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17439Cu; }
        if (ctx->pc != 0x17439Cu) { return; }
    }
    ctx->pc = 0x17439Cu;
    // 0x17439c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x17439cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1743a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1743a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1743a4: 0xc05cc96  jal         func_173258
    ctx->pc = 0x1743A4u;
    SET_GPR_U32(ctx, 31, 0x1743ACu);
    ctx->pc = 0x1743A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1743A4u;
            // 0x1743a8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173258u;
    if (runtime->hasFunction(0x173258u)) {
        auto targetFn = runtime->lookupFunction(0x173258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1743ACu; }
        if (ctx->pc != 0x1743ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173258_0x173258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1743ACu; }
        if (ctx->pc != 0x1743ACu) { return; }
    }
    ctx->pc = 0x1743ACu;
    // 0x1743ac: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x1743acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1743b0: 0x26440054  addiu       $a0, $s2, 0x54
    ctx->pc = 0x1743b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 84));
    // 0x1743b4: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x1743b4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1743b8: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x1743b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1743bc: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x1743bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x1743c0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1743c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x1743c4: 0xac650004  sw          $a1, 0x4($v1)
    ctx->pc = 0x1743c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
    // 0x1743c8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1743c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x1743cc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1743ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1743d0:
    // 0x1743d0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1743d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1743d4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1743d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1743d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1743d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1743dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1743DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1743E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1743DCu;
            // 0x1743e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173EC0u: goto label_173ec0;
            case 0x173ED0u: goto label_173ed0;
            case 0x173EDCu: goto label_173edc;
            case 0x173F70u: goto label_173f70;
            case 0x173F98u: goto label_173f98;
            case 0x173F9Cu: goto label_173f9c;
            case 0x173FB8u: goto label_173fb8;
            case 0x174000u: goto label_174000;
            case 0x17401Cu: goto label_17401c;
            case 0x174020u: goto label_174020;
            case 0x17403Cu: goto label_17403c;
            case 0x17406Cu: goto label_17406c;
            case 0x174074u: goto label_174074;
            case 0x17408Cu: goto label_17408c;
            case 0x1740B4u: goto label_1740b4;
            case 0x1740B8u: goto label_1740b8;
            case 0x1740C0u: goto label_1740c0;
            case 0x1740E4u: goto label_1740e4;
            case 0x174110u: goto label_174110;
            case 0x174114u: goto label_174114;
            case 0x174148u: goto label_174148;
            case 0x17414Cu: goto label_17414c;
            case 0x174150u: goto label_174150;
            case 0x174170u: goto label_174170;
            case 0x174244u: goto label_174244;
            case 0x174248u: goto label_174248;
            case 0x174254u: goto label_174254;
            case 0x17425Cu: goto label_17425c;
            case 0x174264u: goto label_174264;
            case 0x1742A0u: goto label_1742a0;
            case 0x1742ACu: goto label_1742ac;
            case 0x17431Cu: goto label_17431c;
            case 0x17432Cu: goto label_17432c;
            case 0x174340u: goto label_174340;
            case 0x174374u: goto label_174374;
            case 0x174388u: goto label_174388;
            case 0x1743D0u: goto label_1743d0;
            case 0x174448u: goto label_174448;
            case 0x1744B8u: goto label_1744b8;
            case 0x174500u: goto label_174500;
            case 0x174520u: goto label_174520;
            case 0x174548u: goto label_174548;
            case 0x174588u: goto label_174588;
            case 0x1745E0u: goto label_1745e0;
            case 0x1745E8u: goto label_1745e8;
            case 0x174648u: goto label_174648;
            case 0x174690u: goto label_174690;
            case 0x1746A0u: goto label_1746a0;
            case 0x1746A8u: goto label_1746a8;
            case 0x1746C8u: goto label_1746c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1743E4u;
    // 0x1743e4: 0x0  nop
    ctx->pc = 0x1743e4u;
    // NOP
    // 0x1743e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1743e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1743ec: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x1743ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1743f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1743f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1743f4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1743f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1743f8: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x1743F8u;
    SET_GPR_U32(ctx, 31, 0x174400u);
    ctx->pc = 0x1743FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1743F8u;
            // 0x1743fc: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174400u; }
        if (ctx->pc != 0x174400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174400u; }
        if (ctx->pc != 0x174400u) { return; }
    }
    ctx->pc = 0x174400u;
    // 0x174400: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x174400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174404: 0xc05ce3c  jal         func_1738F0
    ctx->pc = 0x174404u;
    SET_GPR_U32(ctx, 31, 0x17440Cu);
    ctx->pc = 0x174408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174404u;
            // 0x174408: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1738F0u;
    if (runtime->hasFunction(0x1738F0u)) {
        auto targetFn = runtime->lookupFunction(0x1738F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17440Cu; }
        if (ctx->pc != 0x17440Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001738F0_0x1738f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17440Cu; }
        if (ctx->pc != 0x17440Cu) { return; }
    }
    ctx->pc = 0x17440Cu;
    // 0x17440c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x17440cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174410: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x174410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174414: 0x3e00008  jr          $ra
    ctx->pc = 0x174414u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174414u;
            // 0x174418: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173EC0u: goto label_173ec0;
            case 0x173ED0u: goto label_173ed0;
            case 0x173EDCu: goto label_173edc;
            case 0x173F70u: goto label_173f70;
            case 0x173F98u: goto label_173f98;
            case 0x173F9Cu: goto label_173f9c;
            case 0x173FB8u: goto label_173fb8;
            case 0x174000u: goto label_174000;
            case 0x17401Cu: goto label_17401c;
            case 0x174020u: goto label_174020;
            case 0x17403Cu: goto label_17403c;
            case 0x17406Cu: goto label_17406c;
            case 0x174074u: goto label_174074;
            case 0x17408Cu: goto label_17408c;
            case 0x1740B4u: goto label_1740b4;
            case 0x1740B8u: goto label_1740b8;
            case 0x1740C0u: goto label_1740c0;
            case 0x1740E4u: goto label_1740e4;
            case 0x174110u: goto label_174110;
            case 0x174114u: goto label_174114;
            case 0x174148u: goto label_174148;
            case 0x17414Cu: goto label_17414c;
            case 0x174150u: goto label_174150;
            case 0x174170u: goto label_174170;
            case 0x174244u: goto label_174244;
            case 0x174248u: goto label_174248;
            case 0x174254u: goto label_174254;
            case 0x17425Cu: goto label_17425c;
            case 0x174264u: goto label_174264;
            case 0x1742A0u: goto label_1742a0;
            case 0x1742ACu: goto label_1742ac;
            case 0x17431Cu: goto label_17431c;
            case 0x17432Cu: goto label_17432c;
            case 0x174340u: goto label_174340;
            case 0x174374u: goto label_174374;
            case 0x174388u: goto label_174388;
            case 0x1743D0u: goto label_1743d0;
            case 0x174448u: goto label_174448;
            case 0x1744B8u: goto label_1744b8;
            case 0x174500u: goto label_174500;
            case 0x174520u: goto label_174520;
            case 0x174548u: goto label_174548;
            case 0x174588u: goto label_174588;
            case 0x1745E0u: goto label_1745e0;
            case 0x1745E8u: goto label_1745e8;
            case 0x174648u: goto label_174648;
            case 0x174690u: goto label_174690;
            case 0x1746A0u: goto label_1746a0;
            case 0x1746A8u: goto label_1746a8;
            case 0x1746C8u: goto label_1746c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x17441Cu;
    // 0x17441c: 0x0  nop
    ctx->pc = 0x17441cu;
    // NOP
    // 0x174420: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x174420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x174424: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x174424u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174428: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x174428u;
    {
        const bool branch_taken_0x174428 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17442Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174428u;
            // 0x17442c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174428) {
            ctx->pc = 0x174448u;
            goto label_174448;
        }
    }
    ctx->pc = 0x174430u;
    // 0x174430: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x174430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x174434: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x174434u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x174438: 0x84440008  lh          $a0, 0x8($v0)
    ctx->pc = 0x174438u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17443c: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x17443cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x174440: 0x40f809  jalr        $v0
    ctx->pc = 0x174440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x174448u);
        ctx->pc = 0x174444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174440u;
            // 0x174444: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x174448u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173EC0u: goto label_173ec0;
            case 0x173ED0u: goto label_173ed0;
            case 0x173EDCu: goto label_173edc;
            case 0x173F70u: goto label_173f70;
            case 0x173F98u: goto label_173f98;
            case 0x173F9Cu: goto label_173f9c;
            case 0x173FB8u: goto label_173fb8;
            case 0x174000u: goto label_174000;
            case 0x17401Cu: goto label_17401c;
            case 0x174020u: goto label_174020;
            case 0x17403Cu: goto label_17403c;
            case 0x17406Cu: goto label_17406c;
            case 0x174074u: goto label_174074;
            case 0x17408Cu: goto label_17408c;
            case 0x1740B4u: goto label_1740b4;
            case 0x1740B8u: goto label_1740b8;
            case 0x1740C0u: goto label_1740c0;
            case 0x1740E4u: goto label_1740e4;
            case 0x174110u: goto label_174110;
            case 0x174114u: goto label_174114;
            case 0x174148u: goto label_174148;
            case 0x17414Cu: goto label_17414c;
            case 0x174150u: goto label_174150;
            case 0x174170u: goto label_174170;
            case 0x174244u: goto label_174244;
            case 0x174248u: goto label_174248;
            case 0x174254u: goto label_174254;
            case 0x17425Cu: goto label_17425c;
            case 0x174264u: goto label_174264;
            case 0x1742A0u: goto label_1742a0;
            case 0x1742ACu: goto label_1742ac;
            case 0x17431Cu: goto label_17431c;
            case 0x17432Cu: goto label_17432c;
            case 0x174340u: goto label_174340;
            case 0x174374u: goto label_174374;
            case 0x174388u: goto label_174388;
            case 0x1743D0u: goto label_1743d0;
            case 0x174448u: goto label_174448;
            case 0x1744B8u: goto label_1744b8;
            case 0x174500u: goto label_174500;
            case 0x174520u: goto label_174520;
            case 0x174548u: goto label_174548;
            case 0x174588u: goto label_174588;
            case 0x1745E0u: goto label_1745e0;
            case 0x1745E8u: goto label_1745e8;
            case 0x174648u: goto label_174648;
            case 0x174690u: goto label_174690;
            case 0x1746A0u: goto label_1746a0;
            case 0x1746A8u: goto label_1746a8;
            case 0x1746C8u: goto label_1746c8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x174448u; }
            if (ctx->pc != 0x174448u) { return; }
        }
        }
    }
    ctx->pc = 0x174448u;
label_174448:
    // 0x174448: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x174448u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17444c: 0x3e00008  jr          $ra
    ctx->pc = 0x17444Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17444Cu;
            // 0x174450: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173EC0u: goto label_173ec0;
            case 0x173ED0u: goto label_173ed0;
            case 0x173EDCu: goto label_173edc;
            case 0x173F70u: goto label_173f70;
            case 0x173F98u: goto label_173f98;
            case 0x173F9Cu: goto label_173f9c;
            case 0x173FB8u: goto label_173fb8;
            case 0x174000u: goto label_174000;
            case 0x17401Cu: goto label_17401c;
            case 0x174020u: goto label_174020;
            case 0x17403Cu: goto label_17403c;
            case 0x17406Cu: goto label_17406c;
            case 0x174074u: goto label_174074;
            case 0x17408Cu: goto label_17408c;
            case 0x1740B4u: goto label_1740b4;
            case 0x1740B8u: goto label_1740b8;
            case 0x1740C0u: goto label_1740c0;
            case 0x1740E4u: goto label_1740e4;
            case 0x174110u: goto label_174110;
            case 0x174114u: goto label_174114;
            case 0x174148u: goto label_174148;
            case 0x17414Cu: goto label_17414c;
            case 0x174150u: goto label_174150;
            case 0x174170u: goto label_174170;
            case 0x174244u: goto label_174244;
            case 0x174248u: goto label_174248;
            case 0x174254u: goto label_174254;
            case 0x17425Cu: goto label_17425c;
            case 0x174264u: goto label_174264;
            case 0x1742A0u: goto label_1742a0;
            case 0x1742ACu: goto label_1742ac;
            case 0x17431Cu: goto label_17431c;
            case 0x17432Cu: goto label_17432c;
            case 0x174340u: goto label_174340;
            case 0x174374u: goto label_174374;
            case 0x174388u: goto label_174388;
            case 0x1743D0u: goto label_1743d0;
            case 0x174448u: goto label_174448;
            case 0x1744B8u: goto label_1744b8;
            case 0x174500u: goto label_174500;
            case 0x174520u: goto label_174520;
            case 0x174548u: goto label_174548;
            case 0x174588u: goto label_174588;
            case 0x1745E0u: goto label_1745e0;
            case 0x1745E8u: goto label_1745e8;
            case 0x174648u: goto label_174648;
            case 0x174690u: goto label_174690;
            case 0x1746A0u: goto label_1746a0;
            case 0x1746A8u: goto label_1746a8;
            case 0x1746C8u: goto label_1746c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x174454u;
    // 0x174454: 0x0  nop
    ctx->pc = 0x174454u;
    // NOP
    // 0x174458: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x174458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x17445c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x17445cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x174460: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x174460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x174464: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x174464u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174468: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x174468u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x17446c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x17446cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174470: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x174470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x174474: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x174474u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x174478: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x174478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x17447c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17447cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x174480: 0x14400057  bnez        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x174480u;
    {
        const bool branch_taken_0x174480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174480u;
            // 0x174484: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174480) {
            ctx->pc = 0x1745E0u;
            goto label_1745e0;
        }
    }
    ctx->pc = 0x174488u;
    // 0x174488: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x174488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x17448c: 0x2630003c  addiu       $s0, $s1, 0x3C
    ctx->pc = 0x17448cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x174490: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x174490u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x174494: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x174494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x174498: 0x40f809  jalr        $v0
    ctx->pc = 0x174498u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1744A0u);
        ctx->pc = 0x17449Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174498u;
            // 0x17449c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1744A0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173EC0u: goto label_173ec0;
            case 0x173ED0u: goto label_173ed0;
            case 0x173EDCu: goto label_173edc;
            case 0x173F70u: goto label_173f70;
            case 0x173F98u: goto label_173f98;
            case 0x173F9Cu: goto label_173f9c;
            case 0x173FB8u: goto label_173fb8;
            case 0x174000u: goto label_174000;
            case 0x17401Cu: goto label_17401c;
            case 0x174020u: goto label_174020;
            case 0x17403Cu: goto label_17403c;
            case 0x17406Cu: goto label_17406c;
            case 0x174074u: goto label_174074;
            case 0x17408Cu: goto label_17408c;
            case 0x1740B4u: goto label_1740b4;
            case 0x1740B8u: goto label_1740b8;
            case 0x1740C0u: goto label_1740c0;
            case 0x1740E4u: goto label_1740e4;
            case 0x174110u: goto label_174110;
            case 0x174114u: goto label_174114;
            case 0x174148u: goto label_174148;
            case 0x17414Cu: goto label_17414c;
            case 0x174150u: goto label_174150;
            case 0x174170u: goto label_174170;
            case 0x174244u: goto label_174244;
            case 0x174248u: goto label_174248;
            case 0x174254u: goto label_174254;
            case 0x17425Cu: goto label_17425c;
            case 0x174264u: goto label_174264;
            case 0x1742A0u: goto label_1742a0;
            case 0x1742ACu: goto label_1742ac;
            case 0x17431Cu: goto label_17431c;
            case 0x17432Cu: goto label_17432c;
            case 0x174340u: goto label_174340;
            case 0x174374u: goto label_174374;
            case 0x174388u: goto label_174388;
            case 0x1743D0u: goto label_1743d0;
            case 0x174448u: goto label_174448;
            case 0x1744B8u: goto label_1744b8;
            case 0x174500u: goto label_174500;
            case 0x174520u: goto label_174520;
            case 0x174548u: goto label_174548;
            case 0x174588u: goto label_174588;
            case 0x1745E0u: goto label_1745e0;
            case 0x1745E8u: goto label_1745e8;
            case 0x174648u: goto label_174648;
            case 0x174690u: goto label_174690;
            case 0x1746A0u: goto label_1746a0;
            case 0x1746A8u: goto label_1746a8;
            case 0x1746C8u: goto label_1746c8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1744A0u; }
            if (ctx->pc != 0x1744A0u) { return; }
        }
        }
    }
    ctx->pc = 0x1744A0u;
    // 0x1744a0: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x1744a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x1744a4: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x1744a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x1744a8: 0x10500015  beq         $v0, $s0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1744A8u;
    {
        const bool branch_taken_0x1744a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x1744ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1744A8u;
            // 0x1744ac: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1744a8) {
            ctx->pc = 0x174500u;
            goto label_174500;
        }
    }
    ctx->pc = 0x1744B0u;
    // 0x1744b0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1744b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1744b4: 0x0  nop
    ctx->pc = 0x1744b4u;
    // NOP
label_1744b8:
    // 0x1744b8: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x1744b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1744bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1744bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1744c0: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x1744c0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1744c4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1744c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x1744c8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1744c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1744cc: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x1744ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x1744d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1744d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1744d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1744d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1744d8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1744d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1744dc: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1744dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1744e0: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x1744e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x1744e4: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x1744e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x1744e8: 0x40f809  jalr        $v0
    ctx->pc = 0x1744E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1744F0u);
        ctx->pc = 0x1744ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1744E8u;
            // 0x1744ec: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1744F0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173EC0u: goto label_173ec0;
            case 0x173ED0u: goto label_173ed0;
            case 0x173EDCu: goto label_173edc;
            case 0x173F70u: goto label_173f70;
            case 0x173F98u: goto label_173f98;
            case 0x173F9Cu: goto label_173f9c;
            case 0x173FB8u: goto label_173fb8;
            case 0x174000u: goto label_174000;
            case 0x17401Cu: goto label_17401c;
            case 0x174020u: goto label_174020;
            case 0x17403Cu: goto label_17403c;
            case 0x17406Cu: goto label_17406c;
            case 0x174074u: goto label_174074;
            case 0x17408Cu: goto label_17408c;
            case 0x1740B4u: goto label_1740b4;
            case 0x1740B8u: goto label_1740b8;
            case 0x1740C0u: goto label_1740c0;
            case 0x1740E4u: goto label_1740e4;
            case 0x174110u: goto label_174110;
            case 0x174114u: goto label_174114;
            case 0x174148u: goto label_174148;
            case 0x17414Cu: goto label_17414c;
            case 0x174150u: goto label_174150;
            case 0x174170u: goto label_174170;
            case 0x174244u: goto label_174244;
            case 0x174248u: goto label_174248;
            case 0x174254u: goto label_174254;
            case 0x17425Cu: goto label_17425c;
            case 0x174264u: goto label_174264;
            case 0x1742A0u: goto label_1742a0;
            case 0x1742ACu: goto label_1742ac;
            case 0x17431Cu: goto label_17431c;
            case 0x17432Cu: goto label_17432c;
            case 0x174340u: goto label_174340;
            case 0x174374u: goto label_174374;
            case 0x174388u: goto label_174388;
            case 0x1743D0u: goto label_1743d0;
            case 0x174448u: goto label_174448;
            case 0x1744B8u: goto label_1744b8;
            case 0x174500u: goto label_174500;
            case 0x174520u: goto label_174520;
            case 0x174548u: goto label_174548;
            case 0x174588u: goto label_174588;
            case 0x1745E0u: goto label_1745e0;
            case 0x1745E8u: goto label_1745e8;
            case 0x174648u: goto label_174648;
            case 0x174690u: goto label_174690;
            case 0x1746A0u: goto label_1746a0;
            case 0x1746A8u: goto label_1746a8;
            case 0x1746C8u: goto label_1746c8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1744F0u; }
            if (ctx->pc != 0x1744F0u) { return; }
        }
        }
    }
    ctx->pc = 0x1744F0u;
    // 0x1744f0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1744f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1744f4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1744f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1744f8: 0x1462ffef  bne         $v1, $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1744F8u;
    {
        const bool branch_taken_0x1744f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1744FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1744F8u;
            // 0x1744fc: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1744f8) {
            ctx->pc = 0x1744B8u;
            runtime->cooperativeGuestYield();
            goto label_1744b8;
        }
    }
    ctx->pc = 0x174500u;
label_174500:
    // 0x174500: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x174500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x174504: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x174504u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x174508: 0xafb00010  sw          $s0, 0x10($sp)
    ctx->pc = 0x174508u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 16));
    // 0x17450c: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x17450cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x174510: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x174510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x174514: 0x5050000c  beql        $v0, $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x174514u;
    {
        const bool branch_taken_0x174514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        if (branch_taken_0x174514) {
            ctx->pc = 0x174518u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x174514u;
            // 0x174518: 0x8e650030  lw          $a1, 0x30($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x174548u;
            goto label_174548;
        }
    }
    ctx->pc = 0x17451Cu;
    // 0x17451c: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x17451cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_174520:
    // 0x174520: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x174520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x174524: 0x8c447910  lw          $a0, 0x7910($v0)
    ctx->pc = 0x174524u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x174528: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x174528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x17452c: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x17452Cu;
    SET_GPR_U32(ctx, 31, 0x174534u);
    ctx->pc = 0x174530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17452Cu;
            // 0x174530: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174534u; }
        if (ctx->pc != 0x174534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174534u; }
        if (ctx->pc != 0x174534u) { return; }
    }
    ctx->pc = 0x174534u;
    // 0x174534: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x174534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x174538: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x174538u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17453c: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x17453Cu;
    {
        const bool branch_taken_0x17453c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x174540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17453Cu;
            // 0x174540: 0x8fa50014  lw          $a1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17453c) {
            ctx->pc = 0x174520u;
            runtime->cooperativeGuestYield();
            goto label_174520;
        }
    }
    ctx->pc = 0x174544u;
    // 0x174544: 0x8e650030  lw          $a1, 0x30($s3)
    ctx->pc = 0x174544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_174548:
    // 0x174548: 0xae100004  sw          $s0, 0x4($s0)
    ctx->pc = 0x174548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
    // 0x17454c: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x17454cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x174550: 0xae100000  sw          $s0, 0x0($s0)
    ctx->pc = 0x174550u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
    // 0x174554: 0x8c620094  lw          $v0, 0x94($v1)
    ctx->pc = 0x174554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 148)));
    // 0x174558: 0x84640090  lh          $a0, 0x90($v1)
    ctx->pc = 0x174558u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x17455c: 0x40f809  jalr        $v0
    ctx->pc = 0x17455Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x174564u);
        ctx->pc = 0x174560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17455Cu;
            // 0x174560: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x174564u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173EC0u: goto label_173ec0;
            case 0x173ED0u: goto label_173ed0;
            case 0x173EDCu: goto label_173edc;
            case 0x173F70u: goto label_173f70;
            case 0x173F98u: goto label_173f98;
            case 0x173F9Cu: goto label_173f9c;
            case 0x173FB8u: goto label_173fb8;
            case 0x174000u: goto label_174000;
            case 0x17401Cu: goto label_17401c;
            case 0x174020u: goto label_174020;
            case 0x17403Cu: goto label_17403c;
            case 0x17406Cu: goto label_17406c;
            case 0x174074u: goto label_174074;
            case 0x17408Cu: goto label_17408c;
            case 0x1740B4u: goto label_1740b4;
            case 0x1740B8u: goto label_1740b8;
            case 0x1740C0u: goto label_1740c0;
            case 0x1740E4u: goto label_1740e4;
            case 0x174110u: goto label_174110;
            case 0x174114u: goto label_174114;
            case 0x174148u: goto label_174148;
            case 0x17414Cu: goto label_17414c;
            case 0x174150u: goto label_174150;
            case 0x174170u: goto label_174170;
            case 0x174244u: goto label_174244;
            case 0x174248u: goto label_174248;
            case 0x174254u: goto label_174254;
            case 0x17425Cu: goto label_17425c;
            case 0x174264u: goto label_174264;
            case 0x1742A0u: goto label_1742a0;
            case 0x1742ACu: goto label_1742ac;
            case 0x17431Cu: goto label_17431c;
            case 0x17432Cu: goto label_17432c;
            case 0x174340u: goto label_174340;
            case 0x174374u: goto label_174374;
            case 0x174388u: goto label_174388;
            case 0x1743D0u: goto label_1743d0;
            case 0x174448u: goto label_174448;
            case 0x1744B8u: goto label_1744b8;
            case 0x174500u: goto label_174500;
            case 0x174520u: goto label_174520;
            case 0x174548u: goto label_174548;
            case 0x174588u: goto label_174588;
            case 0x1745E0u: goto label_1745e0;
            case 0x1745E8u: goto label_1745e8;
            case 0x174648u: goto label_174648;
            case 0x174690u: goto label_174690;
            case 0x1746A0u: goto label_1746a0;
            case 0x1746A8u: goto label_1746a8;
            case 0x1746C8u: goto label_1746c8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x174564u; }
            if (ctx->pc != 0x174564u) { return; }
        }
        }
    }
    ctx->pc = 0x174564u;
    // 0x174564: 0x54510008  bnel        $v0, $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x174564u;
    {
        const bool branch_taken_0x174564 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x174564) {
            ctx->pc = 0x174568u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x174564u;
            // 0x174568: 0x8e27001c  lw          $a3, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x174588u;
            goto label_174588;
        }
    }
    ctx->pc = 0x17456Cu;
    // 0x17456c: 0x8e630030  lw          $v1, 0x30($s3)
    ctx->pc = 0x17456cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x174570: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x174570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x174574: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x174574u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x174578: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x174578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x17457c: 0x40f809  jalr        $v0
    ctx->pc = 0x17457Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x174584u);
        ctx->pc = 0x174580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17457Cu;
            // 0x174580: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x174584u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173EC0u: goto label_173ec0;
            case 0x173ED0u: goto label_173ed0;
            case 0x173EDCu: goto label_173edc;
            case 0x173F70u: goto label_173f70;
            case 0x173F98u: goto label_173f98;
            case 0x173F9Cu: goto label_173f9c;
            case 0x173FB8u: goto label_173fb8;
            case 0x174000u: goto label_174000;
            case 0x17401Cu: goto label_17401c;
            case 0x174020u: goto label_174020;
            case 0x17403Cu: goto label_17403c;
            case 0x17406Cu: goto label_17406c;
            case 0x174074u: goto label_174074;
            case 0x17408Cu: goto label_17408c;
            case 0x1740B4u: goto label_1740b4;
            case 0x1740B8u: goto label_1740b8;
            case 0x1740C0u: goto label_1740c0;
            case 0x1740E4u: goto label_1740e4;
            case 0x174110u: goto label_174110;
            case 0x174114u: goto label_174114;
            case 0x174148u: goto label_174148;
            case 0x17414Cu: goto label_17414c;
            case 0x174150u: goto label_174150;
            case 0x174170u: goto label_174170;
            case 0x174244u: goto label_174244;
            case 0x174248u: goto label_174248;
            case 0x174254u: goto label_174254;
            case 0x17425Cu: goto label_17425c;
            case 0x174264u: goto label_174264;
            case 0x1742A0u: goto label_1742a0;
            case 0x1742ACu: goto label_1742ac;
            case 0x17431Cu: goto label_17431c;
            case 0x17432Cu: goto label_17432c;
            case 0x174340u: goto label_174340;
            case 0x174374u: goto label_174374;
            case 0x174388u: goto label_174388;
            case 0x1743D0u: goto label_1743d0;
            case 0x174448u: goto label_174448;
            case 0x1744B8u: goto label_1744b8;
            case 0x174500u: goto label_174500;
            case 0x174520u: goto label_174520;
            case 0x174548u: goto label_174548;
            case 0x174588u: goto label_174588;
            case 0x1745E0u: goto label_1745e0;
            case 0x1745E8u: goto label_1745e8;
            case 0x174648u: goto label_174648;
            case 0x174690u: goto label_174690;
            case 0x1746A0u: goto label_1746a0;
            case 0x1746A8u: goto label_1746a8;
            case 0x1746C8u: goto label_1746c8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x174584u; }
            if (ctx->pc != 0x174584u) { return; }
        }
        }
    }
    ctx->pc = 0x174584u;
    // 0x174584: 0x8e27001c  lw          $a3, 0x1C($s1)
    ctx->pc = 0x174584u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_174588:
    // 0x174588: 0x8e650030  lw          $a1, 0x30($s3)
    ctx->pc = 0x174588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x17458c: 0x8ca40044  lw          $a0, 0x44($a1)
    ctx->pc = 0x17458cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x174590: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x174590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x174594: 0x822018  mult        $a0, $a0, $v0
    ctx->pc = 0x174594u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x174598: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x174598u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x17459c: 0x8ca20024  lw          $v0, 0x24($a1)
    ctx->pc = 0x17459cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x1745a0: 0x24a60034  addiu       $a2, $a1, 0x34
    ctx->pc = 0x1745a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 52));
    // 0x1745a4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1745a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1745a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1745a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1745ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1745acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1745b0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1745b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x1745b4: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1745b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x1745b8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1745b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1745bc: 0x8ca40034  lw          $a0, 0x34($a1)
    ctx->pc = 0x1745bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x1745c0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1745c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1745c4: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x1745c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
    // 0x1745c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1745c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1745cc: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x1745ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x1745d0: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x1745d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
    // 0x1745d4: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x1745d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
    // 0x1745d8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1745D8u;
    {
        const bool branch_taken_0x1745d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1745DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1745D8u;
            // 0x1745dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1745d8) {
            ctx->pc = 0x1745E8u;
            goto label_1745e8;
        }
    }
    ctx->pc = 0x1745E0u;
label_1745e0:
    // 0x1745e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1745e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1745e4: 0x0  nop
    ctx->pc = 0x1745e4u;
    // NOP
label_1745e8:
    // 0x1745e8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x1745e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1745ec: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x1745ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1745f0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1745f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1745f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1745f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1745f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1745f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1745fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1745FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x174600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1745FCu;
            // 0x174600: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173EC0u: goto label_173ec0;
            case 0x173ED0u: goto label_173ed0;
            case 0x173EDCu: goto label_173edc;
            case 0x173F70u: goto label_173f70;
            case 0x173F98u: goto label_173f98;
            case 0x173F9Cu: goto label_173f9c;
            case 0x173FB8u: goto label_173fb8;
            case 0x174000u: goto label_174000;
            case 0x17401Cu: goto label_17401c;
            case 0x174020u: goto label_174020;
            case 0x17403Cu: goto label_17403c;
            case 0x17406Cu: goto label_17406c;
            case 0x174074u: goto label_174074;
            case 0x17408Cu: goto label_17408c;
            case 0x1740B4u: goto label_1740b4;
            case 0x1740B8u: goto label_1740b8;
            case 0x1740C0u: goto label_1740c0;
            case 0x1740E4u: goto label_1740e4;
            case 0x174110u: goto label_174110;
            case 0x174114u: goto label_174114;
            case 0x174148u: goto label_174148;
            case 0x17414Cu: goto label_17414c;
            case 0x174150u: goto label_174150;
            case 0x174170u: goto label_174170;
            case 0x174244u: goto label_174244;
            case 0x174248u: goto label_174248;
            case 0x174254u: goto label_174254;
            case 0x17425Cu: goto label_17425c;
            case 0x174264u: goto label_174264;
            case 0x1742A0u: goto label_1742a0;
            case 0x1742ACu: goto label_1742ac;
            case 0x17431Cu: goto label_17431c;
            case 0x17432Cu: goto label_17432c;
            case 0x174340u: goto label_174340;
            case 0x174374u: goto label_174374;
            case 0x174388u: goto label_174388;
            case 0x1743D0u: goto label_1743d0;
            case 0x174448u: goto label_174448;
            case 0x1744B8u: goto label_1744b8;
            case 0x174500u: goto label_174500;
            case 0x174520u: goto label_174520;
            case 0x174548u: goto label_174548;
            case 0x174588u: goto label_174588;
            case 0x1745E0u: goto label_1745e0;
            case 0x1745E8u: goto label_1745e8;
            case 0x174648u: goto label_174648;
            case 0x174690u: goto label_174690;
            case 0x1746A0u: goto label_1746a0;
            case 0x1746A8u: goto label_1746a8;
            case 0x1746C8u: goto label_1746c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x174604u;
    // 0x174604: 0x0  nop
    ctx->pc = 0x174604u;
    // NOP
    // 0x174608: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x174608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17460c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17460cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x174610: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x174610u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x174614: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x174614u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x174618: 0xc05cf8c  jal         func_173E30
    ctx->pc = 0x174618u;
    SET_GPR_U32(ctx, 31, 0x174620u);
    ctx->pc = 0x17461Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x174618u;
            // 0x17461c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x173E30u;
    if (runtime->hasFunction(0x173E30u)) {
        auto targetFn = runtime->lookupFunction(0x173E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174620u; }
        if (ctx->pc != 0x174620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00173E30_0x173e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x174620u; }
        if (ctx->pc != 0x174620u) { return; }
    }
    ctx->pc = 0x174620u;
    // 0x174620: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x174620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x174624: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x174624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x174628: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x174628u;
    {
        const bool branch_taken_0x174628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x17462Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174628u;
            // 0x17462c: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174628) {
            ctx->pc = 0x1746A8u;
            goto label_1746a8;
        }
    }
    ctx->pc = 0x174630u;
    // 0x174630: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x174630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x174634: 0x2602003c  addiu       $v0, $s0, 0x3C
    ctx->pc = 0x174634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 60));
    // 0x174638: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x174638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x17463c: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x17463Cu;
    {
        const bool branch_taken_0x17463c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x174640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17463Cu;
            // 0x174640: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17463c) {
            ctx->pc = 0x1746A0u;
            goto label_1746a0;
        }
    }
    ctx->pc = 0x174644u;
    // 0x174644: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x174644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_174648:
    // 0x174648: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x174648u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x17464c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x17464cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x174650: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x174650u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x174654: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x174654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x174658: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x174658u;
    {
        const bool branch_taken_0x174658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17465Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174658u;
            // 0x17465c: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174658) {
            ctx->pc = 0x174690u;
            goto label_174690;
        }
    }
    ctx->pc = 0x174660u;
    // 0x174660: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x174660u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x174664: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x174664u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x174668: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x174668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x17466c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17466cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x174670: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x174670u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x174674: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x174674u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x174678: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x174678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x17467c: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x17467cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x174680: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x174680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x174684: 0x40f809  jalr        $v0
    ctx->pc = 0x174684u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x17468Cu);
        ctx->pc = 0x174688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174684u;
            // 0x174688: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x17468Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173EC0u: goto label_173ec0;
            case 0x173ED0u: goto label_173ed0;
            case 0x173EDCu: goto label_173edc;
            case 0x173F70u: goto label_173f70;
            case 0x173F98u: goto label_173f98;
            case 0x173F9Cu: goto label_173f9c;
            case 0x173FB8u: goto label_173fb8;
            case 0x174000u: goto label_174000;
            case 0x17401Cu: goto label_17401c;
            case 0x174020u: goto label_174020;
            case 0x17403Cu: goto label_17403c;
            case 0x17406Cu: goto label_17406c;
            case 0x174074u: goto label_174074;
            case 0x17408Cu: goto label_17408c;
            case 0x1740B4u: goto label_1740b4;
            case 0x1740B8u: goto label_1740b8;
            case 0x1740C0u: goto label_1740c0;
            case 0x1740E4u: goto label_1740e4;
            case 0x174110u: goto label_174110;
            case 0x174114u: goto label_174114;
            case 0x174148u: goto label_174148;
            case 0x17414Cu: goto label_17414c;
            case 0x174150u: goto label_174150;
            case 0x174170u: goto label_174170;
            case 0x174244u: goto label_174244;
            case 0x174248u: goto label_174248;
            case 0x174254u: goto label_174254;
            case 0x17425Cu: goto label_17425c;
            case 0x174264u: goto label_174264;
            case 0x1742A0u: goto label_1742a0;
            case 0x1742ACu: goto label_1742ac;
            case 0x17431Cu: goto label_17431c;
            case 0x17432Cu: goto label_17432c;
            case 0x174340u: goto label_174340;
            case 0x174374u: goto label_174374;
            case 0x174388u: goto label_174388;
            case 0x1743D0u: goto label_1743d0;
            case 0x174448u: goto label_174448;
            case 0x1744B8u: goto label_1744b8;
            case 0x174500u: goto label_174500;
            case 0x174520u: goto label_174520;
            case 0x174548u: goto label_174548;
            case 0x174588u: goto label_174588;
            case 0x1745E0u: goto label_1745e0;
            case 0x1745E8u: goto label_1745e8;
            case 0x174648u: goto label_174648;
            case 0x174690u: goto label_174690;
            case 0x1746A0u: goto label_1746a0;
            case 0x1746A8u: goto label_1746a8;
            case 0x1746C8u: goto label_1746c8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17468Cu; }
            if (ctx->pc != 0x17468Cu) { return; }
        }
        }
    }
    ctx->pc = 0x17468Cu;
    // 0x17468c: 0x0  nop
    ctx->pc = 0x17468cu;
    // NOP
label_174690:
    // 0x174690: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x174690u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x174694: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x174694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x174698: 0x1462ffeb  bne         $v1, $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x174698u;
    {
        const bool branch_taken_0x174698 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x17469Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x174698u;
            // 0x17469c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174698) {
            ctx->pc = 0x174648u;
            runtime->cooperativeGuestYield();
            goto label_174648;
        }
    }
    ctx->pc = 0x1746A0u;
label_1746a0:
    // 0x1746a0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1746A0u;
    {
        const bool branch_taken_0x1746a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1746A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1746A0u;
            // 0x1746a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1746a0) {
            ctx->pc = 0x1746C8u;
            goto label_1746c8;
        }
    }
    ctx->pc = 0x1746A8u;
label_1746a8:
    // 0x1746a8: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x1746a8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1746ac: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1746acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1746b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1746B0u;
    {
        const bool branch_taken_0x1746b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1746B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1746B0u;
            // 0x1746b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1746b0) {
            ctx->pc = 0x1746C8u;
            goto label_1746c8;
        }
    }
    ctx->pc = 0x1746B8u;
    // 0x1746b8: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1746b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x1746bc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1746bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1746c0: 0xae020030  sw          $v0, 0x30($s0)
    ctx->pc = 0x1746c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
    // 0x1746c4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1746c4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1746c8:
    // 0x1746c8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1746c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1746cc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1746ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1746d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1746D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1746D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1746D0u;
            // 0x1746d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x173EC0u: goto label_173ec0;
            case 0x173ED0u: goto label_173ed0;
            case 0x173EDCu: goto label_173edc;
            case 0x173F70u: goto label_173f70;
            case 0x173F98u: goto label_173f98;
            case 0x173F9Cu: goto label_173f9c;
            case 0x173FB8u: goto label_173fb8;
            case 0x174000u: goto label_174000;
            case 0x17401Cu: goto label_17401c;
            case 0x174020u: goto label_174020;
            case 0x17403Cu: goto label_17403c;
            case 0x17406Cu: goto label_17406c;
            case 0x174074u: goto label_174074;
            case 0x17408Cu: goto label_17408c;
            case 0x1740B4u: goto label_1740b4;
            case 0x1740B8u: goto label_1740b8;
            case 0x1740C0u: goto label_1740c0;
            case 0x1740E4u: goto label_1740e4;
            case 0x174110u: goto label_174110;
            case 0x174114u: goto label_174114;
            case 0x174148u: goto label_174148;
            case 0x17414Cu: goto label_17414c;
            case 0x174150u: goto label_174150;
            case 0x174170u: goto label_174170;
            case 0x174244u: goto label_174244;
            case 0x174248u: goto label_174248;
            case 0x174254u: goto label_174254;
            case 0x17425Cu: goto label_17425c;
            case 0x174264u: goto label_174264;
            case 0x1742A0u: goto label_1742a0;
            case 0x1742ACu: goto label_1742ac;
            case 0x17431Cu: goto label_17431c;
            case 0x17432Cu: goto label_17432c;
            case 0x174340u: goto label_174340;
            case 0x174374u: goto label_174374;
            case 0x174388u: goto label_174388;
            case 0x1743D0u: goto label_1743d0;
            case 0x174448u: goto label_174448;
            case 0x1744B8u: goto label_1744b8;
            case 0x174500u: goto label_174500;
            case 0x174520u: goto label_174520;
            case 0x174548u: goto label_174548;
            case 0x174588u: goto label_174588;
            case 0x1745E0u: goto label_1745e0;
            case 0x1745E8u: goto label_1745e8;
            case 0x174648u: goto label_174648;
            case 0x174690u: goto label_174690;
            case 0x1746A0u: goto label_1746a0;
            case 0x1746A8u: goto label_1746a8;
            case 0x1746C8u: goto label_1746c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1746D8u;
}
