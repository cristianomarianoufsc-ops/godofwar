#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00285CF8
// Address: 0x285cf8 - 0x2863f0
void sub_00285CF8_0x285cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00285CF8_0x285cf8");
#endif

    ctx->pc = 0x285cf8u;

label_285cf8:
    // 0x285cf8: 0x27bdf960  addiu       $sp, $sp, -0x6A0
    ctx->pc = 0x285cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965600));
label_285cfc:
    // 0x285cfc: 0xffbe0680  sd          $fp, 0x680($sp)
    ctx->pc = 0x285cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1664), GPR_U64(ctx, 30));
label_285d00:
    // 0x285d00: 0xffb60660  sd          $s6, 0x660($sp)
    ctx->pc = 0x285d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1632), GPR_U64(ctx, 22));
label_285d04:
    // 0x285d04: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x285d04u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_285d08:
    // 0x285d08: 0xffb50650  sd          $s5, 0x650($sp)
    ctx->pc = 0x285d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1616), GPR_U64(ctx, 21));
label_285d0c:
    // 0x285d0c: 0xffb40640  sd          $s4, 0x640($sp)
    ctx->pc = 0x285d0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1600), GPR_U64(ctx, 20));
label_285d10:
    // 0x285d10: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x285d10u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_285d14:
    // 0x285d14: 0xffb30630  sd          $s3, 0x630($sp)
    ctx->pc = 0x285d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1584), GPR_U64(ctx, 19));
label_285d18:
    // 0x285d18: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x285d18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_285d1c:
    // 0x285d1c: 0xffb00600  sd          $s0, 0x600($sp)
    ctx->pc = 0x285d1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1536), GPR_U64(ctx, 16));
label_285d20:
    // 0x285d20: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x285d20u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_285d24:
    // 0x285d24: 0xffbf0690  sd          $ra, 0x690($sp)
    ctx->pc = 0x285d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1680), GPR_U64(ctx, 31));
label_285d28:
    // 0x285d28: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x285d28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_285d2c:
    // 0x285d2c: 0xffb70670  sd          $s7, 0x670($sp)
    ctx->pc = 0x285d2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1648), GPR_U64(ctx, 23));
label_285d30:
    // 0x285d30: 0xffb20620  sd          $s2, 0x620($sp)
    ctx->pc = 0x285d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1568), GPR_U64(ctx, 18));
label_285d34:
    // 0x285d34: 0xffb10610  sd          $s1, 0x610($sp)
    ctx->pc = 0x285d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1552), GPR_U64(ctx, 17));
label_285d38:
    // 0x285d38: 0xafa705e4  sw          $a3, 0x5E4($sp)
    ctx->pc = 0x285d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1508), GPR_U32(ctx, 7));
label_285d3c:
    // 0x285d3c: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x285d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_285d40:
    // 0x285d40: 0x8e770008  lw          $s7, 0x8($s3)
    ctx->pc = 0x285d40u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_285d44:
    // 0x285d44: 0xafb005e8  sw          $s0, 0x5E8($sp)
    ctx->pc = 0x285d44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1512), GPR_U32(ctx, 16));
label_285d48:
    // 0x285d48: 0x2b02b  sltu        $s6, $zero, $v0
    ctx->pc = 0x285d48u;
    SET_GPR_U64(ctx, 22, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_285d4c:
    // 0x285d4c: 0x8cf10000  lw          $s1, 0x0($a3)
    ctx->pc = 0x285d4cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_285d50:
    // 0x285d50: 0xafa005f4  sw          $zero, 0x5F4($sp)
    ctx->pc = 0x285d50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1524), GPR_U32(ctx, 0));
label_285d54:
    // 0x285d54: 0xafa005f8  sw          $zero, 0x5F8($sp)
    ctx->pc = 0x285d54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1528), GPR_U32(ctx, 0));
label_285d58:
    // 0x285d58: 0x1000004d  b           . + 4 + (0x4D << 2)
label_285d5c:
    if (ctx->pc == 0x285D5Cu) {
        ctx->pc = 0x285D5Cu;
            // 0x285d5c: 0xafa005e0  sw          $zero, 0x5E0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1504), GPR_U32(ctx, 0));
        ctx->pc = 0x285D60u;
        goto label_285d60;
    }
    ctx->pc = 0x285D58u;
    {
        const bool branch_taken_0x285d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285D58u;
            // 0x285d5c: 0xafa005e0  sw          $zero, 0x5E0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1504), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285d58) {
            ctx->pc = 0x285E90u;
            goto label_285e90;
        }
    }
    ctx->pc = 0x285D60u;
label_285d60:
    // 0x285d60: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x285d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_285d64:
    // 0x285d64: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
label_285d68:
    if (ctx->pc == 0x285D68u) {
        ctx->pc = 0x285D68u;
            // 0x285d68: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x285D6Cu;
        goto label_285d6c;
    }
    ctx->pc = 0x285D64u;
    {
        const bool branch_taken_0x285d64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x285d64) {
            ctx->pc = 0x285D68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x285D64u;
            // 0x285d68: 0x8c630000  lw          $v1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x285D74u;
            goto label_285d74;
        }
    }
    ctx->pc = 0x285D6Cu;
label_285d6c:
    // 0x285d6c: 0x10000005  b           . + 4 + (0x5 << 2)
label_285d70:
    if (ctx->pc == 0x285D70u) {
        ctx->pc = 0x285D70u;
            // 0x285d70: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285D74u;
        goto label_285d74;
    }
    ctx->pc = 0x285D6Cu;
    {
        const bool branch_taken_0x285d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285D6Cu;
            // 0x285d70: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285d6c) {
            ctx->pc = 0x285D84u;
            goto label_285d84;
        }
    }
    ctx->pc = 0x285D74u;
label_285d74:
    // 0x285d74: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x285d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_285d78:
    // 0x285d78: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x285d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
label_285d7c:
    // 0x285d7c: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x285d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
label_285d80:
    // 0x285d80: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x285d80u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_285d84:
    // 0x285d84: 0x12c0000a  beqz        $s6, . + 4 + (0xA << 2)
label_285d88:
    if (ctx->pc == 0x285D88u) {
        ctx->pc = 0x285D88u;
            // 0x285d88: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285D8Cu;
        goto label_285d8c;
    }
    ctx->pc = 0x285D84u;
    {
        const bool branch_taken_0x285d84 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x285D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285D84u;
            // 0x285d88: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285d84) {
            ctx->pc = 0x285DB0u;
            goto label_285db0;
        }
    }
    ctx->pc = 0x285D8Cu;
label_285d8c:
    // 0x285d8c: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x285d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_285d90:
    // 0x285d90: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x285d90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_285d94:
    // 0x285d94: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x285d94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_285d98:
    // 0x285d98: 0x27a805e0  addiu       $t0, $sp, 0x5E0
    ctx->pc = 0x285d98u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1504));
label_285d9c:
    // 0x285d9c: 0xc0a1684  jal         func_285A10
label_285da0:
    if (ctx->pc == 0x285DA0u) {
        ctx->pc = 0x285DA0u;
            // 0x285da0: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285DA4u;
        goto label_285da4;
    }
    ctx->pc = 0x285D9Cu;
    SET_GPR_U32(ctx, 31, 0x285DA4u);
    ctx->pc = 0x285DA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285D9Cu;
            // 0x285da0: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285A10u;
    if (runtime->hasFunction(0x285A10u)) {
        auto targetFn = runtime->lookupFunction(0x285A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285DA4u; }
        if (ctx->pc != 0x285DA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285A10_0x285a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285DA4u; }
        if (ctx->pc != 0x285DA4u) { return; }
    }
    ctx->pc = 0x285DA4u;
label_285da4:
    // 0x285da4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x285da4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_285da8:
    // 0x285da8: 0x1000000e  b           . + 4 + (0xE << 2)
label_285dac:
    if (ctx->pc == 0x285DACu) {
        ctx->pc = 0x285DACu;
            // 0x285dac: 0xae60000c  sw          $zero, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x285DB0u;
        goto label_285db0;
    }
    ctx->pc = 0x285DA8u;
    {
        const bool branch_taken_0x285da8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285DACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285DA8u;
            // 0x285dac: 0xae60000c  sw          $zero, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285da8) {
            ctx->pc = 0x285DE4u;
            goto label_285de4;
        }
    }
    ctx->pc = 0x285DB0u;
label_285db0:
    // 0x285db0: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_285db4:
    if (ctx->pc == 0x285DB4u) {
        ctx->pc = 0x285DB4u;
            // 0x285db4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285DB8u;
        goto label_285db8;
    }
    ctx->pc = 0x285DB0u;
    {
        const bool branch_taken_0x285db0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x285DB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285DB0u;
            // 0x285db4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285db0) {
            ctx->pc = 0x285DD4u;
            goto label_285dd4;
        }
    }
    ctx->pc = 0x285DB8u;
label_285db8:
    // 0x285db8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x285db8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_285dbc:
    // 0x285dbc: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x285dbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_285dc0:
    // 0x285dc0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x285dc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_285dc4:
    // 0x285dc4: 0xc0a1684  jal         func_285A10
label_285dc8:
    if (ctx->pc == 0x285DC8u) {
        ctx->pc = 0x285DC8u;
            // 0x285dc8: 0x27a805e0  addiu       $t0, $sp, 0x5E0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1504));
        ctx->pc = 0x285DCCu;
        goto label_285dcc;
    }
    ctx->pc = 0x285DC4u;
    SET_GPR_U32(ctx, 31, 0x285DCCu);
    ctx->pc = 0x285DC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285DC4u;
            // 0x285dc8: 0x27a805e0  addiu       $t0, $sp, 0x5E0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285A10u;
    if (runtime->hasFunction(0x285A10u)) {
        auto targetFn = runtime->lookupFunction(0x285A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285DCCu; }
        if (ctx->pc != 0x285DCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285A10_0x285a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285DCCu; }
        if (ctx->pc != 0x285DCCu) { return; }
    }
    ctx->pc = 0x285DCCu;
label_285dcc:
    // 0x285dcc: 0x10000005  b           . + 4 + (0x5 << 2)
label_285dd0:
    if (ctx->pc == 0x285DD0u) {
        ctx->pc = 0x285DD0u;
            // 0x285dd0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285DD4u;
        goto label_285dd4;
    }
    ctx->pc = 0x285DCCu;
    {
        const bool branch_taken_0x285dcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285DCCu;
            // 0x285dd0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285dcc) {
            ctx->pc = 0x285DE4u;
            goto label_285de4;
        }
    }
    ctx->pc = 0x285DD4u;
label_285dd4:
    // 0x285dd4: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x285dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_285dd8:
    // 0x285dd8: 0xc0a164e  jal         func_285938
label_285ddc:
    if (ctx->pc == 0x285DDCu) {
        ctx->pc = 0x285DDCu;
            // 0x285ddc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285DE0u;
        goto label_285de0;
    }
    ctx->pc = 0x285DD8u;
    SET_GPR_U32(ctx, 31, 0x285DE0u);
    ctx->pc = 0x285DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285DD8u;
            // 0x285ddc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285938u;
    if (runtime->hasFunction(0x285938u)) {
        auto targetFn = runtime->lookupFunction(0x285938u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285DE0u; }
        if (ctx->pc != 0x285DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_285938_0x285a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285DE0u; }
        if (ctx->pc != 0x285DE0u) { return; }
    }
    ctx->pc = 0x285DE0u;
label_285de0:
    // 0x285de0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x285de0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_285de4:
    // 0x285de4: 0x12a00022  beqz        $s5, . + 4 + (0x22 << 2)
label_285de8:
    if (ctx->pc == 0x285DE8u) {
        ctx->pc = 0x285DE8u;
            // 0x285de8: 0x8fa205e0  lw          $v0, 0x5E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1504)));
        ctx->pc = 0x285DECu;
        goto label_285dec;
    }
    ctx->pc = 0x285DE4u;
    {
        const bool branch_taken_0x285de4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x285DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285DE4u;
            // 0x285de8: 0x8fa205e0  lw          $v0, 0x5E0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1504)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285de4) {
            ctx->pc = 0x285E70u;
            goto label_285e70;
        }
    }
    ctx->pc = 0x285DECu;
label_285dec:
    // 0x285dec: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_285df0:
    if (ctx->pc == 0x285DF0u) {
        ctx->pc = 0x285DF0u;
            // 0x285df0: 0x8fa205f8  lw          $v0, 0x5F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1528)));
        ctx->pc = 0x285DF4u;
        goto label_285df4;
    }
    ctx->pc = 0x285DECu;
    {
        const bool branch_taken_0x285dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285DECu;
            // 0x285df0: 0x8fa205f8  lw          $v0, 0x5F8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1528)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285dec) {
            ctx->pc = 0x285E68u;
            goto label_285e68;
        }
    }
    ctx->pc = 0x285DF4u;
label_285df4:
    // 0x285df4: 0x5440001f  bnel        $v0, $zero, . + 4 + (0x1F << 2)
label_285df8:
    if (ctx->pc == 0x285DF8u) {
        ctx->pc = 0x285DF8u;
            // 0x285df8: 0x9624029a  lhu         $a0, 0x29A($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 666)));
        ctx->pc = 0x285DFCu;
        goto label_285dfc;
    }
    ctx->pc = 0x285DF4u;
    {
        const bool branch_taken_0x285df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x285df4) {
            ctx->pc = 0x285DF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x285DF4u;
            // 0x285df8: 0x9624029a  lhu         $a0, 0x29A($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 666)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x285E74u;
            goto label_285e74;
        }
    }
    ctx->pc = 0x285DFCu;
label_285dfc:
    // 0x285dfc: 0x27a302f0  addiu       $v1, $sp, 0x2F0
    ctx->pc = 0x285dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_285e00:
    // 0x285e00: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x285e00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_285e04:
    // 0x285e04: 0x262402e0  addiu       $a0, $s1, 0x2E0
    ctx->pc = 0x285e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 736));
label_285e08:
    // 0x285e08: 0xdc450000  ld          $a1, 0x0($v0)
    ctx->pc = 0x285e08u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_285e0c:
    // 0x285e0c: 0xdc460008  ld          $a2, 0x8($v0)
    ctx->pc = 0x285e0cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 8)));
label_285e10:
    // 0x285e10: 0xdc470010  ld          $a3, 0x10($v0)
    ctx->pc = 0x285e10u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 16)));
label_285e14:
    // 0x285e14: 0xdc480018  ld          $t0, 0x18($v0)
    ctx->pc = 0x285e14u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 24)));
label_285e18:
    // 0x285e18: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x285e18u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
label_285e1c:
    // 0x285e1c: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x285e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
label_285e20:
    // 0x285e20: 0xfc670010  sd          $a3, 0x10($v1)
    ctx->pc = 0x285e20u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 7));
label_285e24:
    // 0x285e24: 0xfc680018  sd          $t0, 0x18($v1)
    ctx->pc = 0x285e24u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 8));
label_285e28:
    // 0x285e28: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x285e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_285e2c:
    // 0x285e2c: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x285e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_285e30:
    // 0x285e30: 0x0  nop
    ctx->pc = 0x285e30u;
    // NOP
label_285e34:
    // 0x285e34: 0x1444fff4  bne         $v0, $a0, . + 4 + (-0xC << 2)
label_285e38:
    if (ctx->pc == 0x285E38u) {
        ctx->pc = 0x285E3Cu;
        goto label_285e3c;
    }
    ctx->pc = 0x285E34u;
    {
        const bool branch_taken_0x285e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x285e34) {
            ctx->pc = 0x285E08u;
            runtime->cooperativeGuestYield();
            goto label_285e08;
        }
    }
    ctx->pc = 0x285E3Cu;
label_285e3c:
    // 0x285e3c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x285e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_285e40:
    // 0x285e40: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x285e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_285e44:
    // 0x285e44: 0xafb005f0  sw          $s0, 0x5F0($sp)
    ctx->pc = 0x285e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1520), GPR_U32(ctx, 16));
label_285e48:
    // 0x285e48: 0xafb505ec  sw          $s5, 0x5EC($sp)
    ctx->pc = 0x285e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1516), GPR_U32(ctx, 21));
label_285e4c:
    // 0x285e4c: 0xafa405f8  sw          $a0, 0x5F8($sp)
    ctx->pc = 0x285e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1528), GPR_U32(ctx, 4));
label_285e50:
    // 0x285e50: 0xafa505f4  sw          $a1, 0x5F4($sp)
    ctx->pc = 0x285e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1524), GPR_U32(ctx, 5));
label_285e54:
    // 0x285e54: 0xdc460000  ld          $a2, 0x0($v0)
    ctx->pc = 0x285e54u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_285e58:
    // 0x285e58: 0xdc470008  ld          $a3, 0x8($v0)
    ctx->pc = 0x285e58u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 8)));
label_285e5c:
    // 0x285e5c: 0xfc660000  sd          $a2, 0x0($v1)
    ctx->pc = 0x285e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 6));
label_285e60:
    // 0x285e60: 0x10000003  b           . + 4 + (0x3 << 2)
label_285e64:
    if (ctx->pc == 0x285E64u) {
        ctx->pc = 0x285E64u;
            // 0x285e64: 0xfc670008  sd          $a3, 0x8($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 7));
        ctx->pc = 0x285E68u;
        goto label_285e68;
    }
    ctx->pc = 0x285E60u;
    {
        const bool branch_taken_0x285e60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285E60u;
            // 0x285e64: 0xfc670008  sd          $a3, 0x8($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285e60) {
            ctx->pc = 0x285E70u;
            goto label_285e70;
        }
    }
    ctx->pc = 0x285E68u;
label_285e68:
    // 0x285e68: 0x10000011  b           . + 4 + (0x11 << 2)
label_285e6c:
    if (ctx->pc == 0x285E6Cu) {
        ctx->pc = 0x285E6Cu;
            // 0x285e6c: 0xafa005f4  sw          $zero, 0x5F4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1524), GPR_U32(ctx, 0));
        ctx->pc = 0x285E70u;
        goto label_285e70;
    }
    ctx->pc = 0x285E68u;
    {
        const bool branch_taken_0x285e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285E68u;
            // 0x285e6c: 0xafa005f4  sw          $zero, 0x5F4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 1524), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285e68) {
            ctx->pc = 0x285EB0u;
            goto label_285eb0;
        }
    }
    ctx->pc = 0x285E70u;
label_285e70:
    // 0x285e70: 0x9624029a  lhu         $a0, 0x29A($s1)
    ctx->pc = 0x285e70u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 666)));
label_285e74:
    // 0x285e74: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x285e74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_285e78:
    // 0x285e78: 0xc0a16d6  jal         func_285B58
label_285e7c:
    if (ctx->pc == 0x285E7Cu) {
        ctx->pc = 0x285E7Cu;
            // 0x285e7c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285E80u;
        goto label_285e80;
    }
    ctx->pc = 0x285E78u;
    SET_GPR_U32(ctx, 31, 0x285E80u);
    ctx->pc = 0x285E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285E78u;
            // 0x285e7c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285B58u;
    if (runtime->hasFunction(0x285B58u)) {
        auto targetFn = runtime->lookupFunction(0x285B58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285E80u; }
        if (ctx->pc != 0x285E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285B58_0x285b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285E80u; }
        if (ctx->pc != 0x285E80u) { return; }
    }
    ctx->pc = 0x285E80u;
label_285e80:
    // 0x285e80: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x285e80u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_285e84:
    // 0x285e84: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x285e84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_285e88:
    // 0x285e88: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x285e88u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_285e8c:
    // 0x285e8c: 0x2470ffff  addiu       $s0, $v1, -0x1
    ctx->pc = 0x285e8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_285e90:
    // 0x285e90: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x285e90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_285e94:
    // 0x285e94: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x285e94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_285e98:
    // 0x285e98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x285e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_285e9c:
    // 0x285e9c: 0xc0a1718  jal         func_285C60
label_285ea0:
    if (ctx->pc == 0x285EA0u) {
        ctx->pc = 0x285EA0u;
            // 0x285ea0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285EA4u;
        goto label_285ea4;
    }
    ctx->pc = 0x285E9Cu;
    SET_GPR_U32(ctx, 31, 0x285EA4u);
    ctx->pc = 0x285EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285E9Cu;
            // 0x285ea0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285C60u;
    if (runtime->hasFunction(0x285C60u)) {
        auto targetFn = runtime->lookupFunction(0x285C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285EA4u; }
        if (ctx->pc != 0x285EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285C60_0x285c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285EA4u; }
        if (ctx->pc != 0x285EA4u) { return; }
    }
    ctx->pc = 0x285EA4u;
label_285ea4:
    // 0x285ea4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x285ea4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_285ea8:
    // 0x285ea8: 0x1620ffad  bnez        $s1, . + 4 + (-0x53 << 2)
label_285eac:
    if (ctx->pc == 0x285EACu) {
        ctx->pc = 0x285EACu;
            // 0x285eac: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285EB0u;
        goto label_285eb0;
    }
    ctx->pc = 0x285EA8u;
    {
        const bool branch_taken_0x285ea8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x285EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285EA8u;
            // 0x285eac: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285ea8) {
            ctx->pc = 0x285D60u;
            runtime->cooperativeGuestYield();
            goto label_285d60;
        }
    }
    ctx->pc = 0x285EB0u;
label_285eb0:
    // 0x285eb0: 0x8fa505f8  lw          $a1, 0x5F8($sp)
    ctx->pc = 0x285eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1528)));
label_285eb4:
    // 0x285eb4: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_285eb8:
    if (ctx->pc == 0x285EB8u) {
        ctx->pc = 0x285EB8u;
            // 0x285eb8: 0x8fa605f4  lw          $a2, 0x5F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1524)));
        ctx->pc = 0x285EBCu;
        goto label_285ebc;
    }
    ctx->pc = 0x285EB4u;
    {
        const bool branch_taken_0x285eb4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x285EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285EB4u;
            // 0x285eb8: 0x8fa605f4  lw          $a2, 0x5F4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285eb4) {
            ctx->pc = 0x285ED4u;
            goto label_285ed4;
        }
    }
    ctx->pc = 0x285EBCu;
label_285ebc:
    // 0x285ebc: 0x27b102f0  addiu       $s1, $sp, 0x2F0
    ctx->pc = 0x285ebcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_285ec0:
    // 0x285ec0: 0x8fb505ec  lw          $s5, 0x5EC($sp)
    ctx->pc = 0x285ec0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1516)));
label_285ec4:
    // 0x285ec4: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_285ec8:
    if (ctx->pc == 0x285EC8u) {
        ctx->pc = 0x285EC8u;
            // 0x285ec8: 0x8fb005f0  lw          $s0, 0x5F0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1520)));
        ctx->pc = 0x285ECCu;
        goto label_285ecc;
    }
    ctx->pc = 0x285EC4u;
    {
        const bool branch_taken_0x285ec4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x285EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285EC4u;
            // 0x285ec8: 0x8fb005f0  lw          $s0, 0x5F0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1520)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285ec4) {
            ctx->pc = 0x285ED4u;
            goto label_285ed4;
        }
    }
    ctx->pc = 0x285ECCu;
label_285ecc:
    // 0x285ecc: 0xc0a173c  jal         func_285CF0
label_285ed0:
    if (ctx->pc == 0x285ED0u) {
        ctx->pc = 0x285ED4u;
        goto label_285ed4;
    }
    ctx->pc = 0x285ECCu;
    SET_GPR_U32(ctx, 31, 0x285ED4u);
    ctx->pc = 0x285CF0u;
    if (runtime->hasFunction(0x285CF0u)) {
        auto targetFn = runtime->lookupFunction(0x285CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285ED4u; }
        if (ctx->pc != 0x285ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_285cf0_0x285cf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285ED4u; }
        if (ctx->pc != 0x285ED4u) { return; }
    }
    ctx->pc = 0x285ED4u;
label_285ed4:
    // 0x285ed4: 0x56a00004  bnel        $s5, $zero, . + 4 + (0x4 << 2)
label_285ed8:
    if (ctx->pc == 0x285ED8u) {
        ctx->pc = 0x285ED8u;
            // 0x285ed8: 0xae750000  sw          $s5, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
        ctx->pc = 0x285EDCu;
        goto label_285edc;
    }
    ctx->pc = 0x285ED4u;
    {
        const bool branch_taken_0x285ed4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x285ed4) {
            ctx->pc = 0x285ED8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x285ED4u;
            // 0x285ed8: 0xae750000  sw          $s5, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
            ctx->pc = 0x285EE8u;
            goto label_285ee8;
        }
    }
    ctx->pc = 0x285EDCu;
label_285edc:
    // 0x285edc: 0xc0a1524  jal         func_285490
label_285ee0:
    if (ctx->pc == 0x285EE0u) {
        ctx->pc = 0x285EE4u;
        goto label_285ee4;
    }
    ctx->pc = 0x285EDCu;
    SET_GPR_U32(ctx, 31, 0x285EE4u);
    ctx->pc = 0x285490u;
    if (runtime->hasFunction(0x285490u)) {
        auto targetFn = runtime->lookupFunction(0x285490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285EE4u; }
        if (ctx->pc != 0x285EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_285490_0x2854b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285EE4u; }
        if (ctx->pc != 0x285EE4u) { return; }
    }
    ctx->pc = 0x285EE4u;
label_285ee4:
    // 0x285ee4: 0xae750000  sw          $s5, 0x0($s3)
    ctx->pc = 0x285ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 21));
label_285ee8:
    // 0x285ee8: 0x8fa705e8  lw          $a3, 0x5E8($sp)
    ctx->pc = 0x285ee8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1512)));
label_285eec:
    // 0x285eec: 0x16070003  bne         $s0, $a3, . + 4 + (0x3 << 2)
label_285ef0:
    if (ctx->pc == 0x285EF0u) {
        ctx->pc = 0x285EF0u;
            // 0x285ef0: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285EF4u;
        goto label_285ef4;
    }
    ctx->pc = 0x285EECu;
    {
        const bool branch_taken_0x285eec = (GPR_U64(ctx, 16) != GPR_U64(ctx, 7));
        ctx->pc = 0x285EF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285EECu;
            // 0x285ef0: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285eec) {
            ctx->pc = 0x285EFCu;
            goto label_285efc;
        }
    }
    ctx->pc = 0x285EF4u;
label_285ef4:
    // 0x285ef4: 0x1000003d  b           . + 4 + (0x3D << 2)
label_285ef8:
    if (ctx->pc == 0x285EF8u) {
        ctx->pc = 0x285EF8u;
            // 0x285ef8: 0x3c0882d  daddu       $s1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285EFCu;
        goto label_285efc;
    }
    ctx->pc = 0x285EF4u;
    {
        const bool branch_taken_0x285ef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285EF4u;
            // 0x285ef8: 0x3c0882d  daddu       $s1, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285ef4) {
            ctx->pc = 0x285FECu;
            goto label_285fec;
        }
    }
    ctx->pc = 0x285EFCu;
label_285efc:
    // 0x285efc: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x285efcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_285f00:
    // 0x285f00: 0x8fb005e8  lw          $s0, 0x5E8($sp)
    ctx->pc = 0x285f00u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1512)));
label_285f04:
    // 0x285f04: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x285f04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_285f08:
    // 0x285f08: 0x27c402e0  addiu       $a0, $fp, 0x2E0
    ctx->pc = 0x285f08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 736));
label_285f0c:
    // 0x285f0c: 0xdc480000  ld          $t0, 0x0($v0)
    ctx->pc = 0x285f0cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_285f10:
    // 0x285f10: 0xdc450008  ld          $a1, 0x8($v0)
    ctx->pc = 0x285f10u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 8)));
label_285f14:
    // 0x285f14: 0xdc460010  ld          $a2, 0x10($v0)
    ctx->pc = 0x285f14u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 16)));
label_285f18:
    // 0x285f18: 0xdc470018  ld          $a3, 0x18($v0)
    ctx->pc = 0x285f18u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 2), 24)));
label_285f1c:
    // 0x285f1c: 0xfc680000  sd          $t0, 0x0($v1)
    ctx->pc = 0x285f1cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 8));
label_285f20:
    // 0x285f20: 0xfc650008  sd          $a1, 0x8($v1)
    ctx->pc = 0x285f20u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 5));
label_285f24:
    // 0x285f24: 0xfc660010  sd          $a2, 0x10($v1)
    ctx->pc = 0x285f24u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 6));
label_285f28:
    // 0x285f28: 0xfc670018  sd          $a3, 0x18($v1)
    ctx->pc = 0x285f28u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 7));
label_285f2c:
    // 0x285f2c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x285f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_285f30:
    // 0x285f30: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x285f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_285f34:
    // 0x285f34: 0x0  nop
    ctx->pc = 0x285f34u;
    // NOP
label_285f38:
    // 0x285f38: 0x1444fff4  bne         $v0, $a0, . + 4 + (-0xC << 2)
label_285f3c:
    if (ctx->pc == 0x285F3Cu) {
        ctx->pc = 0x285F40u;
        goto label_285f40;
    }
    ctx->pc = 0x285F38u;
    {
        const bool branch_taken_0x285f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x285f38) {
            ctx->pc = 0x285F0Cu;
            runtime->cooperativeGuestYield();
            goto label_285f0c;
        }
    }
    ctx->pc = 0x285F40u;
label_285f40:
    // 0x285f40: 0xdc480000  ld          $t0, 0x0($v0)
    ctx->pc = 0x285f40u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_285f44:
    // 0x285f44: 0xdc440008  ld          $a0, 0x8($v0)
    ctx->pc = 0x285f44u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 8)));
label_285f48:
    // 0x285f48: 0xfc680000  sd          $t0, 0x0($v1)
    ctx->pc = 0x285f48u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 8));
label_285f4c:
    // 0x285f4c: 0xfc640008  sd          $a0, 0x8($v1)
    ctx->pc = 0x285f4cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 4));
label_285f50:
    // 0x285f50: 0x8fa705e8  lw          $a3, 0x5E8($sp)
    ctx->pc = 0x285f50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1512)));
label_285f54:
    // 0x285f54: 0x50f60022  beql        $a3, $s6, . + 4 + (0x22 << 2)
label_285f58:
    if (ctx->pc == 0x285F58u) {
        ctx->pc = 0x285F58u;
            // 0x285f58: 0x9622029a  lhu         $v0, 0x29A($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 666)));
        ctx->pc = 0x285F5Cu;
        goto label_285f5c;
    }
    ctx->pc = 0x285F54u;
    {
        const bool branch_taken_0x285f54 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 22));
        if (branch_taken_0x285f54) {
            ctx->pc = 0x285F58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x285F54u;
            // 0x285f58: 0x9622029a  lhu         $v0, 0x29A($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 666)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x285FE0u;
            goto label_285fe0;
        }
    }
    ctx->pc = 0x285F5Cu;
label_285f5c:
    // 0x285f5c: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x285f5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_285f60:
    // 0x285f60: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x285f60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_285f64:
    // 0x285f64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x285f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_285f68:
    // 0x285f68: 0xc0a1718  jal         func_285C60
label_285f6c:
    if (ctx->pc == 0x285F6Cu) {
        ctx->pc = 0x285F6Cu;
            // 0x285f6c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285F70u;
        goto label_285f70;
    }
    ctx->pc = 0x285F68u;
    SET_GPR_U32(ctx, 31, 0x285F70u);
    ctx->pc = 0x285F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285F68u;
            // 0x285f6c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285C60u;
    if (runtime->hasFunction(0x285C60u)) {
        auto targetFn = runtime->lookupFunction(0x285C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285F70u; }
        if (ctx->pc != 0x285F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285C60_0x285c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285F70u; }
        if (ctx->pc != 0x285F70u) { return; }
    }
    ctx->pc = 0x285F70u;
label_285f70:
    // 0x285f70: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x285f70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_285f74:
    // 0x285f74: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x285f74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_285f78:
    // 0x285f78: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x285f78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_285f7c:
    // 0x285f7c: 0x9624029a  lhu         $a0, 0x29A($s1)
    ctx->pc = 0x285f7cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 666)));
label_285f80:
    // 0x285f80: 0x2633029c  addiu       $s3, $s1, 0x29C
    ctx->pc = 0x285f80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 668));
label_285f84:
    // 0x285f84: 0x0  nop
    ctx->pc = 0x285f84u;
    // NOP
label_285f88:
    // 0x285f88: 0x12040008  beq         $s0, $a0, . + 4 + (0x8 << 2)
label_285f8c:
    if (ctx->pc == 0x285F8Cu) {
        ctx->pc = 0x285F8Cu;
            // 0x285f8c: 0x2701021  addu        $v0, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->pc = 0x285F90u;
        goto label_285f90;
    }
    ctx->pc = 0x285F88u;
    {
        const bool branch_taken_0x285f88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 4));
        ctx->pc = 0x285F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285F88u;
            // 0x285f8c: 0x2701021  addu        $v0, $s3, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285f88) {
            ctx->pc = 0x285FACu;
            goto label_285fac;
        }
    }
    ctx->pc = 0x285F90u;
label_285f90:
    // 0x285f90: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x285f90u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_285f94:
    // 0x285f94: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_285f98:
    if (ctx->pc == 0x285F98u) {
        ctx->pc = 0x285F98u;
            // 0x285f98: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285F9Cu;
        goto label_285f9c;
    }
    ctx->pc = 0x285F94u;
    {
        const bool branch_taken_0x285f94 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x285F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285F94u;
            // 0x285f98: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285f94) {
            ctx->pc = 0x285FACu;
            goto label_285fac;
        }
    }
    ctx->pc = 0x285F9Cu;
label_285f9c:
    // 0x285f9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x285f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_285fa0:
    // 0x285fa0: 0xc0a16f8  jal         func_285BE0
label_285fa4:
    if (ctx->pc == 0x285FA4u) {
        ctx->pc = 0x285FA4u;
            // 0x285fa4: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285FA8u;
        goto label_285fa8;
    }
    ctx->pc = 0x285FA0u;
    SET_GPR_U32(ctx, 31, 0x285FA8u);
    ctx->pc = 0x285FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285FA0u;
            // 0x285fa4: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285BE0u;
    if (runtime->hasFunction(0x285BE0u)) {
        auto targetFn = runtime->lookupFunction(0x285BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285FA8u; }
        if (ctx->pc != 0x285FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285BE0_0x285be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285FA8u; }
        if (ctx->pc != 0x285FA8u) { return; }
    }
    ctx->pc = 0x285FA8u;
label_285fa8:
    // 0x285fa8: 0x9624029a  lhu         $a0, 0x29A($s1)
    ctx->pc = 0x285fa8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 666)));
label_285fac:
    // 0x285fac: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x285facu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_285fb0:
    // 0x285fb0: 0x2a02004f  slti        $v0, $s0, 0x4F
    ctx->pc = 0x285fb0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)79) ? 1 : 0);
label_285fb4:
    // 0x285fb4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_285fb8:
    if (ctx->pc == 0x285FB8u) {
        ctx->pc = 0x285FB8u;
            // 0x285fb8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285FBCu;
        goto label_285fbc;
    }
    ctx->pc = 0x285FB4u;
    {
        const bool branch_taken_0x285fb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x285FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285FB4u;
            // 0x285fb8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285fb4) {
            ctx->pc = 0x285F88u;
            runtime->cooperativeGuestYield();
            goto label_285f88;
        }
    }
    ctx->pc = 0x285FBCu;
label_285fbc:
    // 0x285fbc: 0xc0a16d6  jal         func_285B58
label_285fc0:
    if (ctx->pc == 0x285FC0u) {
        ctx->pc = 0x285FC0u;
            // 0x285fc0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285FC4u;
        goto label_285fc4;
    }
    ctx->pc = 0x285FBCu;
    SET_GPR_U32(ctx, 31, 0x285FC4u);
    ctx->pc = 0x285FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x285FBCu;
            // 0x285fc0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285B58u;
    if (runtime->hasFunction(0x285B58u)) {
        auto targetFn = runtime->lookupFunction(0x285B58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285FC4u; }
        if (ctx->pc != 0x285FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285B58_0x285b58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x285FC4u; }
        if (ctx->pc != 0x285FC4u) { return; }
    }
    ctx->pc = 0x285FC4u;
label_285fc4:
    // 0x285fc4: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x285fc4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_285fc8:
    // 0x285fc8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x285fc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
label_285fcc:
    // 0x285fcc: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x285fccu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
label_285fd0:
    // 0x285fd0: 0x2470ffff  addiu       $s0, $v1, -0x1
    ctx->pc = 0x285fd0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_285fd4:
    // 0x285fd4: 0x1616ffe2  bne         $s0, $s6, . + 4 + (-0x1E << 2)
label_285fd8:
    if (ctx->pc == 0x285FD8u) {
        ctx->pc = 0x285FD8u;
            // 0x285fd8: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x285FDCu;
        goto label_285fdc;
    }
    ctx->pc = 0x285FD4u;
    {
        const bool branch_taken_0x285fd4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 22));
        ctx->pc = 0x285FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285FD4u;
            // 0x285fd8: 0x220902d  daddu       $s2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285fd4) {
            ctx->pc = 0x285F60u;
            runtime->cooperativeGuestYield();
            goto label_285f60;
        }
    }
    ctx->pc = 0x285FDCu;
label_285fdc:
    // 0x285fdc: 0x9622029a  lhu         $v0, 0x29A($s1)
    ctx->pc = 0x285fdcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 666)));
label_285fe0:
    // 0x285fe0: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x285fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_285fe4:
    // 0x285fe4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x285fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_285fe8:
    // 0x285fe8: 0x8043029c  lb          $v1, 0x29C($v0)
    ctx->pc = 0x285fe8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 668)));
label_285fec:
    // 0x285fec: 0x8fa805e4  lw          $t0, 0x5E4($sp)
    ctx->pc = 0x285fecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1508)));
label_285ff0:
    // 0x285ff0: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x285ff0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_285ff4:
    // 0x285ff4: 0xdfbf0690  ld          $ra, 0x690($sp)
    ctx->pc = 0x285ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1680)));
label_285ff8:
    // 0x285ff8: 0xad110000  sw          $s1, 0x0($t0)
    ctx->pc = 0x285ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 17));
label_285ffc:
    // 0x285ffc: 0xdfbe0680  ld          $fp, 0x680($sp)
    ctx->pc = 0x285ffcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1664)));
label_286000:
    // 0x286000: 0xdfb70670  ld          $s7, 0x670($sp)
    ctx->pc = 0x286000u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1648)));
label_286004:
    // 0x286004: 0xdfb60660  ld          $s6, 0x660($sp)
    ctx->pc = 0x286004u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1632)));
label_286008:
    // 0x286008: 0xdfb50650  ld          $s5, 0x650($sp)
    ctx->pc = 0x286008u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1616)));
label_28600c:
    // 0x28600c: 0xdfb40640  ld          $s4, 0x640($sp)
    ctx->pc = 0x28600cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1600)));
label_286010:
    // 0x286010: 0xdfb30630  ld          $s3, 0x630($sp)
    ctx->pc = 0x286010u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1584)));
label_286014:
    // 0x286014: 0xdfb20620  ld          $s2, 0x620($sp)
    ctx->pc = 0x286014u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1568)));
label_286018:
    // 0x286018: 0xdfb10610  ld          $s1, 0x610($sp)
    ctx->pc = 0x286018u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1552)));
label_28601c:
    // 0x28601c: 0xdfb00600  ld          $s0, 0x600($sp)
    ctx->pc = 0x28601cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1536)));
label_286020:
    // 0x286020: 0x3e00008  jr          $ra
label_286024:
    if (ctx->pc == 0x286024u) {
        ctx->pc = 0x286024u;
            // 0x286024: 0x27bd06a0  addiu       $sp, $sp, 0x6A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1696));
        ctx->pc = 0x286028u;
        goto label_286028;
    }
    ctx->pc = 0x286020u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286020u;
            // 0x286024: 0x27bd06a0  addiu       $sp, $sp, 0x6A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1696));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x285CF8u: goto label_285cf8;
            case 0x285CFCu: goto label_285cfc;
            case 0x285D00u: goto label_285d00;
            case 0x285D04u: goto label_285d04;
            case 0x285D08u: goto label_285d08;
            case 0x285D0Cu: goto label_285d0c;
            case 0x285D10u: goto label_285d10;
            case 0x285D14u: goto label_285d14;
            case 0x285D18u: goto label_285d18;
            case 0x285D1Cu: goto label_285d1c;
            case 0x285D20u: goto label_285d20;
            case 0x285D24u: goto label_285d24;
            case 0x285D28u: goto label_285d28;
            case 0x285D2Cu: goto label_285d2c;
            case 0x285D30u: goto label_285d30;
            case 0x285D34u: goto label_285d34;
            case 0x285D38u: goto label_285d38;
            case 0x285D3Cu: goto label_285d3c;
            case 0x285D40u: goto label_285d40;
            case 0x285D44u: goto label_285d44;
            case 0x285D48u: goto label_285d48;
            case 0x285D4Cu: goto label_285d4c;
            case 0x285D50u: goto label_285d50;
            case 0x285D54u: goto label_285d54;
            case 0x285D58u: goto label_285d58;
            case 0x285D5Cu: goto label_285d5c;
            case 0x285D60u: goto label_285d60;
            case 0x285D64u: goto label_285d64;
            case 0x285D68u: goto label_285d68;
            case 0x285D6Cu: goto label_285d6c;
            case 0x285D70u: goto label_285d70;
            case 0x285D74u: goto label_285d74;
            case 0x285D78u: goto label_285d78;
            case 0x285D7Cu: goto label_285d7c;
            case 0x285D80u: goto label_285d80;
            case 0x285D84u: goto label_285d84;
            case 0x285D88u: goto label_285d88;
            case 0x285D8Cu: goto label_285d8c;
            case 0x285D90u: goto label_285d90;
            case 0x285D94u: goto label_285d94;
            case 0x285D98u: goto label_285d98;
            case 0x285D9Cu: goto label_285d9c;
            case 0x285DA0u: goto label_285da0;
            case 0x285DA4u: goto label_285da4;
            case 0x285DA8u: goto label_285da8;
            case 0x285DACu: goto label_285dac;
            case 0x285DB0u: goto label_285db0;
            case 0x285DB4u: goto label_285db4;
            case 0x285DB8u: goto label_285db8;
            case 0x285DBCu: goto label_285dbc;
            case 0x285DC0u: goto label_285dc0;
            case 0x285DC4u: goto label_285dc4;
            case 0x285DC8u: goto label_285dc8;
            case 0x285DCCu: goto label_285dcc;
            case 0x285DD0u: goto label_285dd0;
            case 0x285DD4u: goto label_285dd4;
            case 0x285DD8u: goto label_285dd8;
            case 0x285DDCu: goto label_285ddc;
            case 0x285DE0u: goto label_285de0;
            case 0x285DE4u: goto label_285de4;
            case 0x285DE8u: goto label_285de8;
            case 0x285DECu: goto label_285dec;
            case 0x285DF0u: goto label_285df0;
            case 0x285DF4u: goto label_285df4;
            case 0x285DF8u: goto label_285df8;
            case 0x285DFCu: goto label_285dfc;
            case 0x285E00u: goto label_285e00;
            case 0x285E04u: goto label_285e04;
            case 0x285E08u: goto label_285e08;
            case 0x285E0Cu: goto label_285e0c;
            case 0x285E10u: goto label_285e10;
            case 0x285E14u: goto label_285e14;
            case 0x285E18u: goto label_285e18;
            case 0x285E1Cu: goto label_285e1c;
            case 0x285E20u: goto label_285e20;
            case 0x285E24u: goto label_285e24;
            case 0x285E28u: goto label_285e28;
            case 0x285E2Cu: goto label_285e2c;
            case 0x285E30u: goto label_285e30;
            case 0x285E34u: goto label_285e34;
            case 0x285E38u: goto label_285e38;
            case 0x285E3Cu: goto label_285e3c;
            case 0x285E40u: goto label_285e40;
            case 0x285E44u: goto label_285e44;
            case 0x285E48u: goto label_285e48;
            case 0x285E4Cu: goto label_285e4c;
            case 0x285E50u: goto label_285e50;
            case 0x285E54u: goto label_285e54;
            case 0x285E58u: goto label_285e58;
            case 0x285E5Cu: goto label_285e5c;
            case 0x285E60u: goto label_285e60;
            case 0x285E64u: goto label_285e64;
            case 0x285E68u: goto label_285e68;
            case 0x285E6Cu: goto label_285e6c;
            case 0x285E70u: goto label_285e70;
            case 0x285E74u: goto label_285e74;
            case 0x285E78u: goto label_285e78;
            case 0x285E7Cu: goto label_285e7c;
            case 0x285E80u: goto label_285e80;
            case 0x285E84u: goto label_285e84;
            case 0x285E88u: goto label_285e88;
            case 0x285E8Cu: goto label_285e8c;
            case 0x285E90u: goto label_285e90;
            case 0x285E94u: goto label_285e94;
            case 0x285E98u: goto label_285e98;
            case 0x285E9Cu: goto label_285e9c;
            case 0x285EA0u: goto label_285ea0;
            case 0x285EA4u: goto label_285ea4;
            case 0x285EA8u: goto label_285ea8;
            case 0x285EACu: goto label_285eac;
            case 0x285EB0u: goto label_285eb0;
            case 0x285EB4u: goto label_285eb4;
            case 0x285EB8u: goto label_285eb8;
            case 0x285EBCu: goto label_285ebc;
            case 0x285EC0u: goto label_285ec0;
            case 0x285EC4u: goto label_285ec4;
            case 0x285EC8u: goto label_285ec8;
            case 0x285ECCu: goto label_285ecc;
            case 0x285ED0u: goto label_285ed0;
            case 0x285ED4u: goto label_285ed4;
            case 0x285ED8u: goto label_285ed8;
            case 0x285EDCu: goto label_285edc;
            case 0x285EE0u: goto label_285ee0;
            case 0x285EE4u: goto label_285ee4;
            case 0x285EE8u: goto label_285ee8;
            case 0x285EECu: goto label_285eec;
            case 0x285EF0u: goto label_285ef0;
            case 0x285EF4u: goto label_285ef4;
            case 0x285EF8u: goto label_285ef8;
            case 0x285EFCu: goto label_285efc;
            case 0x285F00u: goto label_285f00;
            case 0x285F04u: goto label_285f04;
            case 0x285F08u: goto label_285f08;
            case 0x285F0Cu: goto label_285f0c;
            case 0x285F10u: goto label_285f10;
            case 0x285F14u: goto label_285f14;
            case 0x285F18u: goto label_285f18;
            case 0x285F1Cu: goto label_285f1c;
            case 0x285F20u: goto label_285f20;
            case 0x285F24u: goto label_285f24;
            case 0x285F28u: goto label_285f28;
            case 0x285F2Cu: goto label_285f2c;
            case 0x285F30u: goto label_285f30;
            case 0x285F34u: goto label_285f34;
            case 0x285F38u: goto label_285f38;
            case 0x285F3Cu: goto label_285f3c;
            case 0x285F40u: goto label_285f40;
            case 0x285F44u: goto label_285f44;
            case 0x285F48u: goto label_285f48;
            case 0x285F4Cu: goto label_285f4c;
            case 0x285F50u: goto label_285f50;
            case 0x285F54u: goto label_285f54;
            case 0x285F58u: goto label_285f58;
            case 0x285F5Cu: goto label_285f5c;
            case 0x285F60u: goto label_285f60;
            case 0x285F64u: goto label_285f64;
            case 0x285F68u: goto label_285f68;
            case 0x285F6Cu: goto label_285f6c;
            case 0x285F70u: goto label_285f70;
            case 0x285F74u: goto label_285f74;
            case 0x285F78u: goto label_285f78;
            case 0x285F7Cu: goto label_285f7c;
            case 0x285F80u: goto label_285f80;
            case 0x285F84u: goto label_285f84;
            case 0x285F88u: goto label_285f88;
            case 0x285F8Cu: goto label_285f8c;
            case 0x285F90u: goto label_285f90;
            case 0x285F94u: goto label_285f94;
            case 0x285F98u: goto label_285f98;
            case 0x285F9Cu: goto label_285f9c;
            case 0x285FA0u: goto label_285fa0;
            case 0x285FA4u: goto label_285fa4;
            case 0x285FA8u: goto label_285fa8;
            case 0x285FACu: goto label_285fac;
            case 0x285FB0u: goto label_285fb0;
            case 0x285FB4u: goto label_285fb4;
            case 0x285FB8u: goto label_285fb8;
            case 0x285FBCu: goto label_285fbc;
            case 0x285FC0u: goto label_285fc0;
            case 0x285FC4u: goto label_285fc4;
            case 0x285FC8u: goto label_285fc8;
            case 0x285FCCu: goto label_285fcc;
            case 0x285FD0u: goto label_285fd0;
            case 0x285FD4u: goto label_285fd4;
            case 0x285FD8u: goto label_285fd8;
            case 0x285FDCu: goto label_285fdc;
            case 0x285FE0u: goto label_285fe0;
            case 0x285FE4u: goto label_285fe4;
            case 0x285FE8u: goto label_285fe8;
            case 0x285FECu: goto label_285fec;
            case 0x285FF0u: goto label_285ff0;
            case 0x285FF4u: goto label_285ff4;
            case 0x285FF8u: goto label_285ff8;
            case 0x285FFCu: goto label_285ffc;
            case 0x286000u: goto label_286000;
            case 0x286004u: goto label_286004;
            case 0x286008u: goto label_286008;
            case 0x28600Cu: goto label_28600c;
            case 0x286010u: goto label_286010;
            case 0x286014u: goto label_286014;
            case 0x286018u: goto label_286018;
            case 0x28601Cu: goto label_28601c;
            case 0x286020u: goto label_286020;
            case 0x286024u: goto label_286024;
            case 0x286028u: goto label_286028;
            case 0x28602Cu: goto label_28602c;
            case 0x286030u: goto label_286030;
            case 0x286034u: goto label_286034;
            case 0x286038u: goto label_286038;
            case 0x28603Cu: goto label_28603c;
            case 0x286040u: goto label_286040;
            case 0x286044u: goto label_286044;
            case 0x286048u: goto label_286048;
            case 0x28604Cu: goto label_28604c;
            case 0x286050u: goto label_286050;
            case 0x286054u: goto label_286054;
            case 0x286058u: goto label_286058;
            case 0x28605Cu: goto label_28605c;
            case 0x286060u: goto label_286060;
            case 0x286064u: goto label_286064;
            case 0x286068u: goto label_286068;
            case 0x28606Cu: goto label_28606c;
            case 0x286070u: goto label_286070;
            case 0x286074u: goto label_286074;
            case 0x286078u: goto label_286078;
            case 0x28607Cu: goto label_28607c;
            case 0x286080u: goto label_286080;
            case 0x286084u: goto label_286084;
            case 0x286088u: goto label_286088;
            case 0x28608Cu: goto label_28608c;
            case 0x286090u: goto label_286090;
            case 0x286094u: goto label_286094;
            case 0x286098u: goto label_286098;
            case 0x28609Cu: goto label_28609c;
            case 0x2860A0u: goto label_2860a0;
            case 0x2860A4u: goto label_2860a4;
            case 0x2860A8u: goto label_2860a8;
            case 0x2860ACu: goto label_2860ac;
            case 0x2860B0u: goto label_2860b0;
            case 0x2860B4u: goto label_2860b4;
            case 0x2860B8u: goto label_2860b8;
            case 0x2860BCu: goto label_2860bc;
            case 0x2860C0u: goto label_2860c0;
            case 0x2860C4u: goto label_2860c4;
            case 0x2860C8u: goto label_2860c8;
            case 0x2860CCu: goto label_2860cc;
            case 0x2860D0u: goto label_2860d0;
            case 0x2860D4u: goto label_2860d4;
            case 0x2860D8u: goto label_2860d8;
            case 0x2860DCu: goto label_2860dc;
            case 0x2860E0u: goto label_2860e0;
            case 0x2860E4u: goto label_2860e4;
            case 0x2860E8u: goto label_2860e8;
            case 0x2860ECu: goto label_2860ec;
            case 0x2860F0u: goto label_2860f0;
            case 0x2860F4u: goto label_2860f4;
            case 0x2860F8u: goto label_2860f8;
            case 0x2860FCu: goto label_2860fc;
            case 0x286100u: goto label_286100;
            case 0x286104u: goto label_286104;
            case 0x286108u: goto label_286108;
            case 0x28610Cu: goto label_28610c;
            case 0x286110u: goto label_286110;
            case 0x286114u: goto label_286114;
            case 0x286118u: goto label_286118;
            case 0x28611Cu: goto label_28611c;
            case 0x286120u: goto label_286120;
            case 0x286124u: goto label_286124;
            case 0x286128u: goto label_286128;
            case 0x28612Cu: goto label_28612c;
            case 0x286130u: goto label_286130;
            case 0x286134u: goto label_286134;
            case 0x286138u: goto label_286138;
            case 0x28613Cu: goto label_28613c;
            case 0x286140u: goto label_286140;
            case 0x286144u: goto label_286144;
            case 0x286148u: goto label_286148;
            case 0x28614Cu: goto label_28614c;
            case 0x286150u: goto label_286150;
            case 0x286154u: goto label_286154;
            case 0x286158u: goto label_286158;
            case 0x28615Cu: goto label_28615c;
            case 0x286160u: goto label_286160;
            case 0x286164u: goto label_286164;
            case 0x286168u: goto label_286168;
            case 0x28616Cu: goto label_28616c;
            case 0x286170u: goto label_286170;
            case 0x286174u: goto label_286174;
            case 0x286178u: goto label_286178;
            case 0x28617Cu: goto label_28617c;
            case 0x286180u: goto label_286180;
            case 0x286184u: goto label_286184;
            case 0x286188u: goto label_286188;
            case 0x28618Cu: goto label_28618c;
            case 0x286190u: goto label_286190;
            case 0x286194u: goto label_286194;
            case 0x286198u: goto label_286198;
            case 0x28619Cu: goto label_28619c;
            case 0x2861A0u: goto label_2861a0;
            case 0x2861A4u: goto label_2861a4;
            case 0x2861A8u: goto label_2861a8;
            case 0x2861ACu: goto label_2861ac;
            case 0x2861B0u: goto label_2861b0;
            case 0x2861B4u: goto label_2861b4;
            case 0x2861B8u: goto label_2861b8;
            case 0x2861BCu: goto label_2861bc;
            case 0x2861C0u: goto label_2861c0;
            case 0x2861C4u: goto label_2861c4;
            case 0x2861C8u: goto label_2861c8;
            case 0x2861CCu: goto label_2861cc;
            case 0x2861D0u: goto label_2861d0;
            case 0x2861D4u: goto label_2861d4;
            case 0x2861D8u: goto label_2861d8;
            case 0x2861DCu: goto label_2861dc;
            case 0x2861E0u: goto label_2861e0;
            case 0x2861E4u: goto label_2861e4;
            case 0x2861E8u: goto label_2861e8;
            case 0x2861ECu: goto label_2861ec;
            case 0x2861F0u: goto label_2861f0;
            case 0x2861F4u: goto label_2861f4;
            case 0x2861F8u: goto label_2861f8;
            case 0x2861FCu: goto label_2861fc;
            case 0x286200u: goto label_286200;
            case 0x286204u: goto label_286204;
            case 0x286208u: goto label_286208;
            case 0x28620Cu: goto label_28620c;
            case 0x286210u: goto label_286210;
            case 0x286214u: goto label_286214;
            case 0x286218u: goto label_286218;
            case 0x28621Cu: goto label_28621c;
            case 0x286220u: goto label_286220;
            case 0x286224u: goto label_286224;
            case 0x286228u: goto label_286228;
            case 0x28622Cu: goto label_28622c;
            case 0x286230u: goto label_286230;
            case 0x286234u: goto label_286234;
            case 0x286238u: goto label_286238;
            case 0x28623Cu: goto label_28623c;
            case 0x286240u: goto label_286240;
            case 0x286244u: goto label_286244;
            case 0x286248u: goto label_286248;
            case 0x28624Cu: goto label_28624c;
            case 0x286250u: goto label_286250;
            case 0x286254u: goto label_286254;
            case 0x286258u: goto label_286258;
            case 0x28625Cu: goto label_28625c;
            case 0x286260u: goto label_286260;
            case 0x286264u: goto label_286264;
            case 0x286268u: goto label_286268;
            case 0x28626Cu: goto label_28626c;
            case 0x286270u: goto label_286270;
            case 0x286274u: goto label_286274;
            case 0x286278u: goto label_286278;
            case 0x28627Cu: goto label_28627c;
            case 0x286280u: goto label_286280;
            case 0x286284u: goto label_286284;
            case 0x286288u: goto label_286288;
            case 0x28628Cu: goto label_28628c;
            case 0x286290u: goto label_286290;
            case 0x286294u: goto label_286294;
            case 0x286298u: goto label_286298;
            case 0x28629Cu: goto label_28629c;
            case 0x2862A0u: goto label_2862a0;
            case 0x2862A4u: goto label_2862a4;
            case 0x2862A8u: goto label_2862a8;
            case 0x2862ACu: goto label_2862ac;
            case 0x2862B0u: goto label_2862b0;
            case 0x2862B4u: goto label_2862b4;
            case 0x2862B8u: goto label_2862b8;
            case 0x2862BCu: goto label_2862bc;
            case 0x2862C0u: goto label_2862c0;
            case 0x2862C4u: goto label_2862c4;
            case 0x2862C8u: goto label_2862c8;
            case 0x2862CCu: goto label_2862cc;
            case 0x2862D0u: goto label_2862d0;
            case 0x2862D4u: goto label_2862d4;
            case 0x2862D8u: goto label_2862d8;
            case 0x2862DCu: goto label_2862dc;
            case 0x2862E0u: goto label_2862e0;
            case 0x2862E4u: goto label_2862e4;
            case 0x2862E8u: goto label_2862e8;
            case 0x2862ECu: goto label_2862ec;
            case 0x2862F0u: goto label_2862f0;
            case 0x2862F4u: goto label_2862f4;
            case 0x2862F8u: goto label_2862f8;
            case 0x2862FCu: goto label_2862fc;
            case 0x286300u: goto label_286300;
            case 0x286304u: goto label_286304;
            case 0x286308u: goto label_286308;
            case 0x28630Cu: goto label_28630c;
            case 0x286310u: goto label_286310;
            case 0x286314u: goto label_286314;
            case 0x286318u: goto label_286318;
            case 0x28631Cu: goto label_28631c;
            case 0x286320u: goto label_286320;
            case 0x286324u: goto label_286324;
            case 0x286328u: goto label_286328;
            case 0x28632Cu: goto label_28632c;
            case 0x286330u: goto label_286330;
            case 0x286334u: goto label_286334;
            case 0x286338u: goto label_286338;
            case 0x28633Cu: goto label_28633c;
            case 0x286340u: goto label_286340;
            case 0x286344u: goto label_286344;
            case 0x286348u: goto label_286348;
            case 0x28634Cu: goto label_28634c;
            case 0x286350u: goto label_286350;
            case 0x286354u: goto label_286354;
            case 0x286358u: goto label_286358;
            case 0x28635Cu: goto label_28635c;
            case 0x286360u: goto label_286360;
            case 0x286364u: goto label_286364;
            case 0x286368u: goto label_286368;
            case 0x28636Cu: goto label_28636c;
            case 0x286370u: goto label_286370;
            case 0x286374u: goto label_286374;
            case 0x286378u: goto label_286378;
            case 0x28637Cu: goto label_28637c;
            case 0x286380u: goto label_286380;
            case 0x286384u: goto label_286384;
            case 0x286388u: goto label_286388;
            case 0x28638Cu: goto label_28638c;
            case 0x286390u: goto label_286390;
            case 0x286394u: goto label_286394;
            case 0x286398u: goto label_286398;
            case 0x28639Cu: goto label_28639c;
            case 0x2863A0u: goto label_2863a0;
            case 0x2863A4u: goto label_2863a4;
            case 0x2863A8u: goto label_2863a8;
            case 0x2863ACu: goto label_2863ac;
            case 0x2863B0u: goto label_2863b0;
            case 0x2863B4u: goto label_2863b4;
            case 0x2863B8u: goto label_2863b8;
            case 0x2863BCu: goto label_2863bc;
            case 0x2863C0u: goto label_2863c0;
            case 0x2863C4u: goto label_2863c4;
            case 0x2863C8u: goto label_2863c8;
            case 0x2863CCu: goto label_2863cc;
            case 0x2863D0u: goto label_2863d0;
            case 0x2863D4u: goto label_2863d4;
            case 0x2863D8u: goto label_2863d8;
            case 0x2863DCu: goto label_2863dc;
            case 0x2863E0u: goto label_2863e0;
            case 0x2863E4u: goto label_2863e4;
            case 0x2863E8u: goto label_2863e8;
            case 0x2863ECu: goto label_2863ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x286028u;
label_286028:
    // 0x286028: 0x27bdf910  addiu       $sp, $sp, -0x6F0
    ctx->pc = 0x286028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965520));
label_28602c:
    // 0x28602c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x28602cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
label_286030:
    // 0x286030: 0xffbe0670  sd          $fp, 0x670($sp)
    ctx->pc = 0x286030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1648), GPR_U64(ctx, 30));
label_286034:
    // 0x286034: 0xffbf0680  sd          $ra, 0x680($sp)
    ctx->pc = 0x286034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1664), GPR_U64(ctx, 31));
label_286038:
    // 0x286038: 0xffb70660  sd          $s7, 0x660($sp)
    ctx->pc = 0x286038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1632), GPR_U64(ctx, 23));
label_28603c:
    // 0x28603c: 0xffb60650  sd          $s6, 0x650($sp)
    ctx->pc = 0x28603cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1616), GPR_U64(ctx, 22));
label_286040:
    // 0x286040: 0xffb50640  sd          $s5, 0x640($sp)
    ctx->pc = 0x286040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1600), GPR_U64(ctx, 21));
label_286044:
    // 0x286044: 0xffb40630  sd          $s4, 0x630($sp)
    ctx->pc = 0x286044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1584), GPR_U64(ctx, 20));
label_286048:
    // 0x286048: 0xffb30620  sd          $s3, 0x620($sp)
    ctx->pc = 0x286048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1568), GPR_U64(ctx, 19));
label_28604c:
    // 0x28604c: 0xffb20610  sd          $s2, 0x610($sp)
    ctx->pc = 0x28604cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1552), GPR_U64(ctx, 18));
label_286050:
    // 0x286050: 0xffb10600  sd          $s1, 0x600($sp)
    ctx->pc = 0x286050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1536), GPR_U64(ctx, 17));
label_286054:
    // 0x286054: 0xffb005f0  sd          $s0, 0x5F0($sp)
    ctx->pc = 0x286054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1520), GPR_U64(ctx, 16));
label_286058:
    // 0x286058: 0xe7bf06e8  swc1        $f31, 0x6E8($sp)
    ctx->pc = 0x286058u;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1768), bits); }
label_28605c:
    // 0x28605c: 0xe7be06e0  swc1        $f30, 0x6E0($sp)
    ctx->pc = 0x28605cu;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1760), bits); }
label_286060:
    // 0x286060: 0xe7bd06d8  swc1        $f29, 0x6D8($sp)
    ctx->pc = 0x286060u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1752), bits); }
label_286064:
    // 0x286064: 0xe7bc06d0  swc1        $f28, 0x6D0($sp)
    ctx->pc = 0x286064u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1744), bits); }
label_286068:
    // 0x286068: 0xe7bb06c8  swc1        $f27, 0x6C8($sp)
    ctx->pc = 0x286068u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1736), bits); }
label_28606c:
    // 0x28606c: 0xe7ba06c0  swc1        $f26, 0x6C0($sp)
    ctx->pc = 0x28606cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1728), bits); }
label_286070:
    // 0x286070: 0xe7b906b8  swc1        $f25, 0x6B8($sp)
    ctx->pc = 0x286070u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1720), bits); }
label_286074:
    // 0x286074: 0xe7b806b0  swc1        $f24, 0x6B0($sp)
    ctx->pc = 0x286074u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1712), bits); }
label_286078:
    // 0x286078: 0xe7b706a8  swc1        $f23, 0x6A8($sp)
    ctx->pc = 0x286078u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1704), bits); }
label_28607c:
    // 0x28607c: 0xe7b606a0  swc1        $f22, 0x6A0($sp)
    ctx->pc = 0x28607cu;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1696), bits); }
label_286080:
    // 0x286080: 0xe7b50698  swc1        $f21, 0x698($sp)
    ctx->pc = 0x286080u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1688), bits); }
label_286084:
    // 0x286084: 0xe7b40690  swc1        $f20, 0x690($sp)
    ctx->pc = 0x286084u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1680), bits); }
label_286088:
    // 0x286088: 0x8c6239b4  lw          $v0, 0x39B4($v1)
    ctx->pc = 0x286088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14772)));
label_28608c:
    // 0x28608c: 0x40f809  jalr        $v0
label_286090:
    if (ctx->pc == 0x286090u) {
        ctx->pc = 0x286090u;
            // 0x286090: 0x3a0f02d  daddu       $fp, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x286094u;
        goto label_286094;
    }
    ctx->pc = 0x28608Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x286094u);
        ctx->pc = 0x286090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28608Cu;
            // 0x286090: 0x3a0f02d  daddu       $fp, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x286094u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x285CF8u: goto label_285cf8;
            case 0x285CFCu: goto label_285cfc;
            case 0x285D00u: goto label_285d00;
            case 0x285D04u: goto label_285d04;
            case 0x285D08u: goto label_285d08;
            case 0x285D0Cu: goto label_285d0c;
            case 0x285D10u: goto label_285d10;
            case 0x285D14u: goto label_285d14;
            case 0x285D18u: goto label_285d18;
            case 0x285D1Cu: goto label_285d1c;
            case 0x285D20u: goto label_285d20;
            case 0x285D24u: goto label_285d24;
            case 0x285D28u: goto label_285d28;
            case 0x285D2Cu: goto label_285d2c;
            case 0x285D30u: goto label_285d30;
            case 0x285D34u: goto label_285d34;
            case 0x285D38u: goto label_285d38;
            case 0x285D3Cu: goto label_285d3c;
            case 0x285D40u: goto label_285d40;
            case 0x285D44u: goto label_285d44;
            case 0x285D48u: goto label_285d48;
            case 0x285D4Cu: goto label_285d4c;
            case 0x285D50u: goto label_285d50;
            case 0x285D54u: goto label_285d54;
            case 0x285D58u: goto label_285d58;
            case 0x285D5Cu: goto label_285d5c;
            case 0x285D60u: goto label_285d60;
            case 0x285D64u: goto label_285d64;
            case 0x285D68u: goto label_285d68;
            case 0x285D6Cu: goto label_285d6c;
            case 0x285D70u: goto label_285d70;
            case 0x285D74u: goto label_285d74;
            case 0x285D78u: goto label_285d78;
            case 0x285D7Cu: goto label_285d7c;
            case 0x285D80u: goto label_285d80;
            case 0x285D84u: goto label_285d84;
            case 0x285D88u: goto label_285d88;
            case 0x285D8Cu: goto label_285d8c;
            case 0x285D90u: goto label_285d90;
            case 0x285D94u: goto label_285d94;
            case 0x285D98u: goto label_285d98;
            case 0x285D9Cu: goto label_285d9c;
            case 0x285DA0u: goto label_285da0;
            case 0x285DA4u: goto label_285da4;
            case 0x285DA8u: goto label_285da8;
            case 0x285DACu: goto label_285dac;
            case 0x285DB0u: goto label_285db0;
            case 0x285DB4u: goto label_285db4;
            case 0x285DB8u: goto label_285db8;
            case 0x285DBCu: goto label_285dbc;
            case 0x285DC0u: goto label_285dc0;
            case 0x285DC4u: goto label_285dc4;
            case 0x285DC8u: goto label_285dc8;
            case 0x285DCCu: goto label_285dcc;
            case 0x285DD0u: goto label_285dd0;
            case 0x285DD4u: goto label_285dd4;
            case 0x285DD8u: goto label_285dd8;
            case 0x285DDCu: goto label_285ddc;
            case 0x285DE0u: goto label_285de0;
            case 0x285DE4u: goto label_285de4;
            case 0x285DE8u: goto label_285de8;
            case 0x285DECu: goto label_285dec;
            case 0x285DF0u: goto label_285df0;
            case 0x285DF4u: goto label_285df4;
            case 0x285DF8u: goto label_285df8;
            case 0x285DFCu: goto label_285dfc;
            case 0x285E00u: goto label_285e00;
            case 0x285E04u: goto label_285e04;
            case 0x285E08u: goto label_285e08;
            case 0x285E0Cu: goto label_285e0c;
            case 0x285E10u: goto label_285e10;
            case 0x285E14u: goto label_285e14;
            case 0x285E18u: goto label_285e18;
            case 0x285E1Cu: goto label_285e1c;
            case 0x285E20u: goto label_285e20;
            case 0x285E24u: goto label_285e24;
            case 0x285E28u: goto label_285e28;
            case 0x285E2Cu: goto label_285e2c;
            case 0x285E30u: goto label_285e30;
            case 0x285E34u: goto label_285e34;
            case 0x285E38u: goto label_285e38;
            case 0x285E3Cu: goto label_285e3c;
            case 0x285E40u: goto label_285e40;
            case 0x285E44u: goto label_285e44;
            case 0x285E48u: goto label_285e48;
            case 0x285E4Cu: goto label_285e4c;
            case 0x285E50u: goto label_285e50;
            case 0x285E54u: goto label_285e54;
            case 0x285E58u: goto label_285e58;
            case 0x285E5Cu: goto label_285e5c;
            case 0x285E60u: goto label_285e60;
            case 0x285E64u: goto label_285e64;
            case 0x285E68u: goto label_285e68;
            case 0x285E6Cu: goto label_285e6c;
            case 0x285E70u: goto label_285e70;
            case 0x285E74u: goto label_285e74;
            case 0x285E78u: goto label_285e78;
            case 0x285E7Cu: goto label_285e7c;
            case 0x285E80u: goto label_285e80;
            case 0x285E84u: goto label_285e84;
            case 0x285E88u: goto label_285e88;
            case 0x285E8Cu: goto label_285e8c;
            case 0x285E90u: goto label_285e90;
            case 0x285E94u: goto label_285e94;
            case 0x285E98u: goto label_285e98;
            case 0x285E9Cu: goto label_285e9c;
            case 0x285EA0u: goto label_285ea0;
            case 0x285EA4u: goto label_285ea4;
            case 0x285EA8u: goto label_285ea8;
            case 0x285EACu: goto label_285eac;
            case 0x285EB0u: goto label_285eb0;
            case 0x285EB4u: goto label_285eb4;
            case 0x285EB8u: goto label_285eb8;
            case 0x285EBCu: goto label_285ebc;
            case 0x285EC0u: goto label_285ec0;
            case 0x285EC4u: goto label_285ec4;
            case 0x285EC8u: goto label_285ec8;
            case 0x285ECCu: goto label_285ecc;
            case 0x285ED0u: goto label_285ed0;
            case 0x285ED4u: goto label_285ed4;
            case 0x285ED8u: goto label_285ed8;
            case 0x285EDCu: goto label_285edc;
            case 0x285EE0u: goto label_285ee0;
            case 0x285EE4u: goto label_285ee4;
            case 0x285EE8u: goto label_285ee8;
            case 0x285EECu: goto label_285eec;
            case 0x285EF0u: goto label_285ef0;
            case 0x285EF4u: goto label_285ef4;
            case 0x285EF8u: goto label_285ef8;
            case 0x285EFCu: goto label_285efc;
            case 0x285F00u: goto label_285f00;
            case 0x285F04u: goto label_285f04;
            case 0x285F08u: goto label_285f08;
            case 0x285F0Cu: goto label_285f0c;
            case 0x285F10u: goto label_285f10;
            case 0x285F14u: goto label_285f14;
            case 0x285F18u: goto label_285f18;
            case 0x285F1Cu: goto label_285f1c;
            case 0x285F20u: goto label_285f20;
            case 0x285F24u: goto label_285f24;
            case 0x285F28u: goto label_285f28;
            case 0x285F2Cu: goto label_285f2c;
            case 0x285F30u: goto label_285f30;
            case 0x285F34u: goto label_285f34;
            case 0x285F38u: goto label_285f38;
            case 0x285F3Cu: goto label_285f3c;
            case 0x285F40u: goto label_285f40;
            case 0x285F44u: goto label_285f44;
            case 0x285F48u: goto label_285f48;
            case 0x285F4Cu: goto label_285f4c;
            case 0x285F50u: goto label_285f50;
            case 0x285F54u: goto label_285f54;
            case 0x285F58u: goto label_285f58;
            case 0x285F5Cu: goto label_285f5c;
            case 0x285F60u: goto label_285f60;
            case 0x285F64u: goto label_285f64;
            case 0x285F68u: goto label_285f68;
            case 0x285F6Cu: goto label_285f6c;
            case 0x285F70u: goto label_285f70;
            case 0x285F74u: goto label_285f74;
            case 0x285F78u: goto label_285f78;
            case 0x285F7Cu: goto label_285f7c;
            case 0x285F80u: goto label_285f80;
            case 0x285F84u: goto label_285f84;
            case 0x285F88u: goto label_285f88;
            case 0x285F8Cu: goto label_285f8c;
            case 0x285F90u: goto label_285f90;
            case 0x285F94u: goto label_285f94;
            case 0x285F98u: goto label_285f98;
            case 0x285F9Cu: goto label_285f9c;
            case 0x285FA0u: goto label_285fa0;
            case 0x285FA4u: goto label_285fa4;
            case 0x285FA8u: goto label_285fa8;
            case 0x285FACu: goto label_285fac;
            case 0x285FB0u: goto label_285fb0;
            case 0x285FB4u: goto label_285fb4;
            case 0x285FB8u: goto label_285fb8;
            case 0x285FBCu: goto label_285fbc;
            case 0x285FC0u: goto label_285fc0;
            case 0x285FC4u: goto label_285fc4;
            case 0x285FC8u: goto label_285fc8;
            case 0x285FCCu: goto label_285fcc;
            case 0x285FD0u: goto label_285fd0;
            case 0x285FD4u: goto label_285fd4;
            case 0x285FD8u: goto label_285fd8;
            case 0x285FDCu: goto label_285fdc;
            case 0x285FE0u: goto label_285fe0;
            case 0x285FE4u: goto label_285fe4;
            case 0x285FE8u: goto label_285fe8;
            case 0x285FECu: goto label_285fec;
            case 0x285FF0u: goto label_285ff0;
            case 0x285FF4u: goto label_285ff4;
            case 0x285FF8u: goto label_285ff8;
            case 0x285FFCu: goto label_285ffc;
            case 0x286000u: goto label_286000;
            case 0x286004u: goto label_286004;
            case 0x286008u: goto label_286008;
            case 0x28600Cu: goto label_28600c;
            case 0x286010u: goto label_286010;
            case 0x286014u: goto label_286014;
            case 0x286018u: goto label_286018;
            case 0x28601Cu: goto label_28601c;
            case 0x286020u: goto label_286020;
            case 0x286024u: goto label_286024;
            case 0x286028u: goto label_286028;
            case 0x28602Cu: goto label_28602c;
            case 0x286030u: goto label_286030;
            case 0x286034u: goto label_286034;
            case 0x286038u: goto label_286038;
            case 0x28603Cu: goto label_28603c;
            case 0x286040u: goto label_286040;
            case 0x286044u: goto label_286044;
            case 0x286048u: goto label_286048;
            case 0x28604Cu: goto label_28604c;
            case 0x286050u: goto label_286050;
            case 0x286054u: goto label_286054;
            case 0x286058u: goto label_286058;
            case 0x28605Cu: goto label_28605c;
            case 0x286060u: goto label_286060;
            case 0x286064u: goto label_286064;
            case 0x286068u: goto label_286068;
            case 0x28606Cu: goto label_28606c;
            case 0x286070u: goto label_286070;
            case 0x286074u: goto label_286074;
            case 0x286078u: goto label_286078;
            case 0x28607Cu: goto label_28607c;
            case 0x286080u: goto label_286080;
            case 0x286084u: goto label_286084;
            case 0x286088u: goto label_286088;
            case 0x28608Cu: goto label_28608c;
            case 0x286090u: goto label_286090;
            case 0x286094u: goto label_286094;
            case 0x286098u: goto label_286098;
            case 0x28609Cu: goto label_28609c;
            case 0x2860A0u: goto label_2860a0;
            case 0x2860A4u: goto label_2860a4;
            case 0x2860A8u: goto label_2860a8;
            case 0x2860ACu: goto label_2860ac;
            case 0x2860B0u: goto label_2860b0;
            case 0x2860B4u: goto label_2860b4;
            case 0x2860B8u: goto label_2860b8;
            case 0x2860BCu: goto label_2860bc;
            case 0x2860C0u: goto label_2860c0;
            case 0x2860C4u: goto label_2860c4;
            case 0x2860C8u: goto label_2860c8;
            case 0x2860CCu: goto label_2860cc;
            case 0x2860D0u: goto label_2860d0;
            case 0x2860D4u: goto label_2860d4;
            case 0x2860D8u: goto label_2860d8;
            case 0x2860DCu: goto label_2860dc;
            case 0x2860E0u: goto label_2860e0;
            case 0x2860E4u: goto label_2860e4;
            case 0x2860E8u: goto label_2860e8;
            case 0x2860ECu: goto label_2860ec;
            case 0x2860F0u: goto label_2860f0;
            case 0x2860F4u: goto label_2860f4;
            case 0x2860F8u: goto label_2860f8;
            case 0x2860FCu: goto label_2860fc;
            case 0x286100u: goto label_286100;
            case 0x286104u: goto label_286104;
            case 0x286108u: goto label_286108;
            case 0x28610Cu: goto label_28610c;
            case 0x286110u: goto label_286110;
            case 0x286114u: goto label_286114;
            case 0x286118u: goto label_286118;
            case 0x28611Cu: goto label_28611c;
            case 0x286120u: goto label_286120;
            case 0x286124u: goto label_286124;
            case 0x286128u: goto label_286128;
            case 0x28612Cu: goto label_28612c;
            case 0x286130u: goto label_286130;
            case 0x286134u: goto label_286134;
            case 0x286138u: goto label_286138;
            case 0x28613Cu: goto label_28613c;
            case 0x286140u: goto label_286140;
            case 0x286144u: goto label_286144;
            case 0x286148u: goto label_286148;
            case 0x28614Cu: goto label_28614c;
            case 0x286150u: goto label_286150;
            case 0x286154u: goto label_286154;
            case 0x286158u: goto label_286158;
            case 0x28615Cu: goto label_28615c;
            case 0x286160u: goto label_286160;
            case 0x286164u: goto label_286164;
            case 0x286168u: goto label_286168;
            case 0x28616Cu: goto label_28616c;
            case 0x286170u: goto label_286170;
            case 0x286174u: goto label_286174;
            case 0x286178u: goto label_286178;
            case 0x28617Cu: goto label_28617c;
            case 0x286180u: goto label_286180;
            case 0x286184u: goto label_286184;
            case 0x286188u: goto label_286188;
            case 0x28618Cu: goto label_28618c;
            case 0x286190u: goto label_286190;
            case 0x286194u: goto label_286194;
            case 0x286198u: goto label_286198;
            case 0x28619Cu: goto label_28619c;
            case 0x2861A0u: goto label_2861a0;
            case 0x2861A4u: goto label_2861a4;
            case 0x2861A8u: goto label_2861a8;
            case 0x2861ACu: goto label_2861ac;
            case 0x2861B0u: goto label_2861b0;
            case 0x2861B4u: goto label_2861b4;
            case 0x2861B8u: goto label_2861b8;
            case 0x2861BCu: goto label_2861bc;
            case 0x2861C0u: goto label_2861c0;
            case 0x2861C4u: goto label_2861c4;
            case 0x2861C8u: goto label_2861c8;
            case 0x2861CCu: goto label_2861cc;
            case 0x2861D0u: goto label_2861d0;
            case 0x2861D4u: goto label_2861d4;
            case 0x2861D8u: goto label_2861d8;
            case 0x2861DCu: goto label_2861dc;
            case 0x2861E0u: goto label_2861e0;
            case 0x2861E4u: goto label_2861e4;
            case 0x2861E8u: goto label_2861e8;
            case 0x2861ECu: goto label_2861ec;
            case 0x2861F0u: goto label_2861f0;
            case 0x2861F4u: goto label_2861f4;
            case 0x2861F8u: goto label_2861f8;
            case 0x2861FCu: goto label_2861fc;
            case 0x286200u: goto label_286200;
            case 0x286204u: goto label_286204;
            case 0x286208u: goto label_286208;
            case 0x28620Cu: goto label_28620c;
            case 0x286210u: goto label_286210;
            case 0x286214u: goto label_286214;
            case 0x286218u: goto label_286218;
            case 0x28621Cu: goto label_28621c;
            case 0x286220u: goto label_286220;
            case 0x286224u: goto label_286224;
            case 0x286228u: goto label_286228;
            case 0x28622Cu: goto label_28622c;
            case 0x286230u: goto label_286230;
            case 0x286234u: goto label_286234;
            case 0x286238u: goto label_286238;
            case 0x28623Cu: goto label_28623c;
            case 0x286240u: goto label_286240;
            case 0x286244u: goto label_286244;
            case 0x286248u: goto label_286248;
            case 0x28624Cu: goto label_28624c;
            case 0x286250u: goto label_286250;
            case 0x286254u: goto label_286254;
            case 0x286258u: goto label_286258;
            case 0x28625Cu: goto label_28625c;
            case 0x286260u: goto label_286260;
            case 0x286264u: goto label_286264;
            case 0x286268u: goto label_286268;
            case 0x28626Cu: goto label_28626c;
            case 0x286270u: goto label_286270;
            case 0x286274u: goto label_286274;
            case 0x286278u: goto label_286278;
            case 0x28627Cu: goto label_28627c;
            case 0x286280u: goto label_286280;
            case 0x286284u: goto label_286284;
            case 0x286288u: goto label_286288;
            case 0x28628Cu: goto label_28628c;
            case 0x286290u: goto label_286290;
            case 0x286294u: goto label_286294;
            case 0x286298u: goto label_286298;
            case 0x28629Cu: goto label_28629c;
            case 0x2862A0u: goto label_2862a0;
            case 0x2862A4u: goto label_2862a4;
            case 0x2862A8u: goto label_2862a8;
            case 0x2862ACu: goto label_2862ac;
            case 0x2862B0u: goto label_2862b0;
            case 0x2862B4u: goto label_2862b4;
            case 0x2862B8u: goto label_2862b8;
            case 0x2862BCu: goto label_2862bc;
            case 0x2862C0u: goto label_2862c0;
            case 0x2862C4u: goto label_2862c4;
            case 0x2862C8u: goto label_2862c8;
            case 0x2862CCu: goto label_2862cc;
            case 0x2862D0u: goto label_2862d0;
            case 0x2862D4u: goto label_2862d4;
            case 0x2862D8u: goto label_2862d8;
            case 0x2862DCu: goto label_2862dc;
            case 0x2862E0u: goto label_2862e0;
            case 0x2862E4u: goto label_2862e4;
            case 0x2862E8u: goto label_2862e8;
            case 0x2862ECu: goto label_2862ec;
            case 0x2862F0u: goto label_2862f0;
            case 0x2862F4u: goto label_2862f4;
            case 0x2862F8u: goto label_2862f8;
            case 0x2862FCu: goto label_2862fc;
            case 0x286300u: goto label_286300;
            case 0x286304u: goto label_286304;
            case 0x286308u: goto label_286308;
            case 0x28630Cu: goto label_28630c;
            case 0x286310u: goto label_286310;
            case 0x286314u: goto label_286314;
            case 0x286318u: goto label_286318;
            case 0x28631Cu: goto label_28631c;
            case 0x286320u: goto label_286320;
            case 0x286324u: goto label_286324;
            case 0x286328u: goto label_286328;
            case 0x28632Cu: goto label_28632c;
            case 0x286330u: goto label_286330;
            case 0x286334u: goto label_286334;
            case 0x286338u: goto label_286338;
            case 0x28633Cu: goto label_28633c;
            case 0x286340u: goto label_286340;
            case 0x286344u: goto label_286344;
            case 0x286348u: goto label_286348;
            case 0x28634Cu: goto label_28634c;
            case 0x286350u: goto label_286350;
            case 0x286354u: goto label_286354;
            case 0x286358u: goto label_286358;
            case 0x28635Cu: goto label_28635c;
            case 0x286360u: goto label_286360;
            case 0x286364u: goto label_286364;
            case 0x286368u: goto label_286368;
            case 0x28636Cu: goto label_28636c;
            case 0x286370u: goto label_286370;
            case 0x286374u: goto label_286374;
            case 0x286378u: goto label_286378;
            case 0x28637Cu: goto label_28637c;
            case 0x286380u: goto label_286380;
            case 0x286384u: goto label_286384;
            case 0x286388u: goto label_286388;
            case 0x28638Cu: goto label_28638c;
            case 0x286390u: goto label_286390;
            case 0x286394u: goto label_286394;
            case 0x286398u: goto label_286398;
            case 0x28639Cu: goto label_28639c;
            case 0x2863A0u: goto label_2863a0;
            case 0x2863A4u: goto label_2863a4;
            case 0x2863A8u: goto label_2863a8;
            case 0x2863ACu: goto label_2863ac;
            case 0x2863B0u: goto label_2863b0;
            case 0x2863B4u: goto label_2863b4;
            case 0x2863B8u: goto label_2863b8;
            case 0x2863BCu: goto label_2863bc;
            case 0x2863C0u: goto label_2863c0;
            case 0x2863C4u: goto label_2863c4;
            case 0x2863C8u: goto label_2863c8;
            case 0x2863CCu: goto label_2863cc;
            case 0x2863D0u: goto label_2863d0;
            case 0x2863D4u: goto label_2863d4;
            case 0x2863D8u: goto label_2863d8;
            case 0x2863DCu: goto label_2863dc;
            case 0x2863E0u: goto label_2863e0;
            case 0x2863E4u: goto label_2863e4;
            case 0x2863E8u: goto label_2863e8;
            case 0x2863ECu: goto label_2863ec;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x286094u; }
            if (ctx->pc != 0x286094u) { return; }
        }
        }
    }
    ctx->pc = 0x286094u;
label_286094:
    // 0x286094: 0xafc205e4  sw          $v0, 0x5E4($fp)
    ctx->pc = 0x286094u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1508), GPR_U32(ctx, 2));
label_286098:
    // 0x286098: 0x27c202f0  addiu       $v0, $fp, 0x2F0
    ctx->pc = 0x286098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 752));
label_28609c:
    // 0x28609c: 0x8fc305e4  lw          $v1, 0x5E4($fp)
    ctx->pc = 0x28609cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1508)));
label_2860a0:
    // 0x2860a0: 0xafc205e8  sw          $v0, 0x5E8($fp)
    ctx->pc = 0x2860a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1512), GPR_U32(ctx, 2));
label_2860a4:
    // 0x2860a4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2860a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2860a8:
    // 0x2860a8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2860ac:
    if (ctx->pc == 0x2860ACu) {
        ctx->pc = 0x2860ACu;
            // 0x2860ac: 0xafde05e0  sw          $fp, 0x5E0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1504), GPR_U32(ctx, 30));
        ctx->pc = 0x2860B0u;
        goto label_2860b0;
    }
    ctx->pc = 0x2860A8u;
    {
        const bool branch_taken_0x2860a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2860ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2860A8u;
            // 0x2860ac: 0xafde05e0  sw          $fp, 0x5E0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1504), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2860a8) {
            ctx->pc = 0x2860C4u;
            goto label_2860c4;
        }
    }
    ctx->pc = 0x2860B0u;
label_2860b0:
    // 0x2860b0: 0xc0a1524  jal         func_285490
label_2860b4:
    if (ctx->pc == 0x2860B4u) {
        ctx->pc = 0x2860B8u;
        goto label_2860b8;
    }
    ctx->pc = 0x2860B0u;
    SET_GPR_U32(ctx, 31, 0x2860B8u);
    ctx->pc = 0x285490u;
    if (runtime->hasFunction(0x285490u)) {
        auto targetFn = runtime->lookupFunction(0x285490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2860B8u; }
        if (ctx->pc != 0x2860B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_285490_0x2854b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2860B8u; }
        if (ctx->pc != 0x2860B8u) { return; }
    }
    ctx->pc = 0x2860B8u;
label_2860b8:
    // 0x2860b8: 0x27c505e0  addiu       $a1, $fp, 0x5E0
    ctx->pc = 0x2860b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 1504));
label_2860bc:
    // 0x2860bc: 0x10000003  b           . + 4 + (0x3 << 2)
label_2860c0:
    if (ctx->pc == 0x2860C0u) {
        ctx->pc = 0x2860C0u;
            // 0x2860c0: 0xafc505ec  sw          $a1, 0x5EC($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1516), GPR_U32(ctx, 5));
        ctx->pc = 0x2860C4u;
        goto label_2860c4;
    }
    ctx->pc = 0x2860BCu;
    {
        const bool branch_taken_0x2860bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2860C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2860BCu;
            // 0x2860c0: 0xafc505ec  sw          $a1, 0x5EC($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1516), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2860bc) {
            ctx->pc = 0x2860CCu;
            goto label_2860cc;
        }
    }
    ctx->pc = 0x2860C4u;
label_2860c4:
    // 0x2860c4: 0x27c605e0  addiu       $a2, $fp, 0x5E0
    ctx->pc = 0x2860c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 30), 1504));
label_2860c8:
    // 0x2860c8: 0xafc605ec  sw          $a2, 0x5EC($fp)
    ctx->pc = 0x2860c8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1516), GPR_U32(ctx, 6));
label_2860cc:
    // 0x2860cc: 0x3c070028  lui         $a3, 0x28
    ctx->pc = 0x2860ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)40 << 16));
label_2860d0:
    // 0x2860d0: 0x8fc505e0  lw          $a1, 0x5E0($fp)
    ctx->pc = 0x2860d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1504)));
label_2860d4:
    // 0x2860d4: 0xc0a1c0a  jal         func_287028
label_2860d8:
    if (ctx->pc == 0x2860D8u) {
        ctx->pc = 0x2860D8u;
            // 0x2860d8: 0x24e460cc  addiu       $a0, $a3, 0x60CC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 24780));
        ctx->pc = 0x2860DCu;
        goto label_2860dc;
    }
    ctx->pc = 0x2860D4u;
    SET_GPR_U32(ctx, 31, 0x2860DCu);
    ctx->pc = 0x2860D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2860D4u;
            // 0x2860d8: 0x24e460cc  addiu       $a0, $a3, 0x60CC (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 24780));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287028u;
    if (runtime->hasFunction(0x287028u)) {
        auto targetFn = runtime->lookupFunction(0x287028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2860DCu; }
        if (ctx->pc != 0x2860DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00287028_0x287028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2860DCu; }
        if (ctx->pc != 0x2860DCu) { return; }
    }
    ctx->pc = 0x2860DCu;
label_2860dc:
    // 0x2860dc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2860dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2860e0:
    // 0x2860e0: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_2860e4:
    if (ctx->pc == 0x2860E4u) {
        ctx->pc = 0x2860E4u;
            // 0x2860e4: 0xafc205e0  sw          $v0, 0x5E0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1504), GPR_U32(ctx, 2));
        ctx->pc = 0x2860E8u;
        goto label_2860e8;
    }
    ctx->pc = 0x2860E0u;
    {
        const bool branch_taken_0x2860e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2860E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2860E0u;
            // 0x2860e4: 0xafc205e0  sw          $v0, 0x5E0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1504), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2860e0) {
            ctx->pc = 0x2860F4u;
            goto label_2860f4;
        }
    }
    ctx->pc = 0x2860E8u;
label_2860e8:
    // 0x2860e8: 0xc0a1524  jal         func_285490
label_2860ec:
    if (ctx->pc == 0x2860ECu) {
        ctx->pc = 0x2860F0u;
        goto label_2860f0;
    }
    ctx->pc = 0x2860E8u;
    SET_GPR_U32(ctx, 31, 0x2860F0u);
    ctx->pc = 0x285490u;
    if (runtime->hasFunction(0x285490u)) {
        auto targetFn = runtime->lookupFunction(0x285490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2860F0u; }
        if (ctx->pc != 0x2860F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_285490_0x2854b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2860F0u; }
        if (ctx->pc != 0x2860F0u) { return; }
    }
    ctx->pc = 0x2860F0u;
label_2860f0:
    // 0x2860f0: 0x8fc305e0  lw          $v1, 0x5E0($fp)
    ctx->pc = 0x2860f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1504)));
label_2860f4:
    // 0x2860f4: 0x27c806f0  addiu       $t0, $fp, 0x6F0
    ctx->pc = 0x2860f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), 1776));
label_2860f8:
    // 0x2860f8: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2860f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2860fc:
    // 0x2860fc: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x2860fcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
label_286100:
    // 0x286100: 0x248302e0  addiu       $v1, $a0, 0x2E0
    ctx->pc = 0x286100u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 736));
label_286104:
    // 0x286104: 0x8fc205e8  lw          $v0, 0x5E8($fp)
    ctx->pc = 0x286104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1512)));
label_286108:
    // 0x286108: 0xdc850000  ld          $a1, 0x0($a0)
    ctx->pc = 0x286108u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_28610c:
    // 0x28610c: 0xdc860008  ld          $a2, 0x8($a0)
    ctx->pc = 0x28610cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 8)));
label_286110:
    // 0x286110: 0xdc870010  ld          $a3, 0x10($a0)
    ctx->pc = 0x286110u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
label_286114:
    // 0x286114: 0xdc880018  ld          $t0, 0x18($a0)
    ctx->pc = 0x286114u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 24)));
label_286118:
    // 0x286118: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x286118u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
label_28611c:
    // 0x28611c: 0xfc460008  sd          $a2, 0x8($v0)
    ctx->pc = 0x28611cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 6));
label_286120:
    // 0x286120: 0xfc470010  sd          $a3, 0x10($v0)
    ctx->pc = 0x286120u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 7));
label_286124:
    // 0x286124: 0xfc480018  sd          $t0, 0x18($v0)
    ctx->pc = 0x286124u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 8));
label_286128:
    // 0x286128: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x286128u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_28612c:
    // 0x28612c: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x28612cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_286130:
    // 0x286130: 0x0  nop
    ctx->pc = 0x286130u;
    // NOP
label_286134:
    // 0x286134: 0x1483fff4  bne         $a0, $v1, . + 4 + (-0xC << 2)
label_286138:
    if (ctx->pc == 0x286138u) {
        ctx->pc = 0x28613Cu;
        goto label_28613c;
    }
    ctx->pc = 0x286134u;
    {
        const bool branch_taken_0x286134 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x286134) {
            ctx->pc = 0x286108u;
            runtime->cooperativeGuestYield();
            goto label_286108;
        }
    }
    ctx->pc = 0x28613Cu;
label_28613c:
    // 0x28613c: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x28613cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_286140:
    // 0x286140: 0xdc850008  ld          $a1, 0x8($a0)
    ctx->pc = 0x286140u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 8)));
label_286144:
    // 0x286144: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x286144u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
label_286148:
    // 0x286148: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x286148u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
label_28614c:
    // 0x28614c: 0x27c20680  addiu       $v0, $fp, 0x680
    ctx->pc = 0x28614cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1664));
label_286150:
    // 0x286150: 0x8fc405e4  lw          $a0, 0x5E4($fp)
    ctx->pc = 0x286150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1508)));
label_286154:
    // 0x286154: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x286154u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_286158:
    // 0x286158: 0x8fc605e8  lw          $a2, 0x5E8($fp)
    ctx->pc = 0x286158u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1512)));
label_28615c:
    // 0x28615c: 0x8fc705ec  lw          $a3, 0x5EC($fp)
    ctx->pc = 0x28615cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1516)));
label_286160:
    // 0x286160: 0xc0a173e  jal         func_285CF8
label_286164:
    if (ctx->pc == 0x286164u) {
        ctx->pc = 0x286164u;
            // 0x286164: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->pc = 0x286168u;
        goto label_286168;
    }
    ctx->pc = 0x286160u;
    SET_GPR_U32(ctx, 31, 0x286168u);
    ctx->pc = 0x286164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286160u;
            // 0x286164: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285CF8u;
    runtime->cooperativeGuestYield();
    goto label_285cf8;
    ctx->pc = 0x286168u;
label_286168:
    // 0x286168: 0x8fc605e0  lw          $a2, 0x5E0($fp)
    ctx->pc = 0x286168u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1504)));
label_28616c:
    // 0x28616c: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x28616cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_286170:
    // 0x286170: 0x8fc805e8  lw          $t0, 0x5E8($fp)
    ctx->pc = 0x286170u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1512)));
label_286174:
    // 0x286174: 0x24656198  addiu       $a1, $v1, 0x6198
    ctx->pc = 0x286174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 24984));
label_286178:
    // 0x286178: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x286178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_28617c:
    // 0x28617c: 0x27c40680  addiu       $a0, $fp, 0x680
    ctx->pc = 0x28617cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 1664));
label_286180:
    // 0x286180: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x286180u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_286184:
    // 0x286184: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x286184u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_286188:
    // 0x286188: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x286188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28618c:
    // 0x28618c: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x28618cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_286190:
    // 0x286190: 0x10000003  b           . + 4 + (0x3 << 2)
label_286194:
    if (ctx->pc == 0x286194u) {
        ctx->pc = 0x286194u;
            // 0x286194: 0x8fc205e4  lw          $v0, 0x5E4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1508)));
        ctx->pc = 0x286198u;
        goto label_286198;
    }
    ctx->pc = 0x286190u;
    {
        const bool branch_taken_0x286190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x286194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286190u;
            // 0x286194: 0x8fc205e4  lw          $v0, 0x5E4($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1508)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286190) {
            ctx->pc = 0x2861A0u;
            goto label_2861a0;
        }
    }
    ctx->pc = 0x286198u;
label_286198:
    // 0x286198: 0x800008  jr          $a0
label_28619c:
    if (ctx->pc == 0x28619Cu) {
        ctx->pc = 0x28619Cu;
            // 0x28619c: 0x3a3e821  addu        $sp, $sp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
        ctx->pc = 0x2861A0u;
        goto label_2861a0;
    }
    ctx->pc = 0x286198u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = 0x28619Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286198u;
            // 0x28619c: 0x3a3e821  addu        $sp, $sp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x285CF8u: goto label_285cf8;
            case 0x285CFCu: goto label_285cfc;
            case 0x285D00u: goto label_285d00;
            case 0x285D04u: goto label_285d04;
            case 0x285D08u: goto label_285d08;
            case 0x285D0Cu: goto label_285d0c;
            case 0x285D10u: goto label_285d10;
            case 0x285D14u: goto label_285d14;
            case 0x285D18u: goto label_285d18;
            case 0x285D1Cu: goto label_285d1c;
            case 0x285D20u: goto label_285d20;
            case 0x285D24u: goto label_285d24;
            case 0x285D28u: goto label_285d28;
            case 0x285D2Cu: goto label_285d2c;
            case 0x285D30u: goto label_285d30;
            case 0x285D34u: goto label_285d34;
            case 0x285D38u: goto label_285d38;
            case 0x285D3Cu: goto label_285d3c;
            case 0x285D40u: goto label_285d40;
            case 0x285D44u: goto label_285d44;
            case 0x285D48u: goto label_285d48;
            case 0x285D4Cu: goto label_285d4c;
            case 0x285D50u: goto label_285d50;
            case 0x285D54u: goto label_285d54;
            case 0x285D58u: goto label_285d58;
            case 0x285D5Cu: goto label_285d5c;
            case 0x285D60u: goto label_285d60;
            case 0x285D64u: goto label_285d64;
            case 0x285D68u: goto label_285d68;
            case 0x285D6Cu: goto label_285d6c;
            case 0x285D70u: goto label_285d70;
            case 0x285D74u: goto label_285d74;
            case 0x285D78u: goto label_285d78;
            case 0x285D7Cu: goto label_285d7c;
            case 0x285D80u: goto label_285d80;
            case 0x285D84u: goto label_285d84;
            case 0x285D88u: goto label_285d88;
            case 0x285D8Cu: goto label_285d8c;
            case 0x285D90u: goto label_285d90;
            case 0x285D94u: goto label_285d94;
            case 0x285D98u: goto label_285d98;
            case 0x285D9Cu: goto label_285d9c;
            case 0x285DA0u: goto label_285da0;
            case 0x285DA4u: goto label_285da4;
            case 0x285DA8u: goto label_285da8;
            case 0x285DACu: goto label_285dac;
            case 0x285DB0u: goto label_285db0;
            case 0x285DB4u: goto label_285db4;
            case 0x285DB8u: goto label_285db8;
            case 0x285DBCu: goto label_285dbc;
            case 0x285DC0u: goto label_285dc0;
            case 0x285DC4u: goto label_285dc4;
            case 0x285DC8u: goto label_285dc8;
            case 0x285DCCu: goto label_285dcc;
            case 0x285DD0u: goto label_285dd0;
            case 0x285DD4u: goto label_285dd4;
            case 0x285DD8u: goto label_285dd8;
            case 0x285DDCu: goto label_285ddc;
            case 0x285DE0u: goto label_285de0;
            case 0x285DE4u: goto label_285de4;
            case 0x285DE8u: goto label_285de8;
            case 0x285DECu: goto label_285dec;
            case 0x285DF0u: goto label_285df0;
            case 0x285DF4u: goto label_285df4;
            case 0x285DF8u: goto label_285df8;
            case 0x285DFCu: goto label_285dfc;
            case 0x285E00u: goto label_285e00;
            case 0x285E04u: goto label_285e04;
            case 0x285E08u: goto label_285e08;
            case 0x285E0Cu: goto label_285e0c;
            case 0x285E10u: goto label_285e10;
            case 0x285E14u: goto label_285e14;
            case 0x285E18u: goto label_285e18;
            case 0x285E1Cu: goto label_285e1c;
            case 0x285E20u: goto label_285e20;
            case 0x285E24u: goto label_285e24;
            case 0x285E28u: goto label_285e28;
            case 0x285E2Cu: goto label_285e2c;
            case 0x285E30u: goto label_285e30;
            case 0x285E34u: goto label_285e34;
            case 0x285E38u: goto label_285e38;
            case 0x285E3Cu: goto label_285e3c;
            case 0x285E40u: goto label_285e40;
            case 0x285E44u: goto label_285e44;
            case 0x285E48u: goto label_285e48;
            case 0x285E4Cu: goto label_285e4c;
            case 0x285E50u: goto label_285e50;
            case 0x285E54u: goto label_285e54;
            case 0x285E58u: goto label_285e58;
            case 0x285E5Cu: goto label_285e5c;
            case 0x285E60u: goto label_285e60;
            case 0x285E64u: goto label_285e64;
            case 0x285E68u: goto label_285e68;
            case 0x285E6Cu: goto label_285e6c;
            case 0x285E70u: goto label_285e70;
            case 0x285E74u: goto label_285e74;
            case 0x285E78u: goto label_285e78;
            case 0x285E7Cu: goto label_285e7c;
            case 0x285E80u: goto label_285e80;
            case 0x285E84u: goto label_285e84;
            case 0x285E88u: goto label_285e88;
            case 0x285E8Cu: goto label_285e8c;
            case 0x285E90u: goto label_285e90;
            case 0x285E94u: goto label_285e94;
            case 0x285E98u: goto label_285e98;
            case 0x285E9Cu: goto label_285e9c;
            case 0x285EA0u: goto label_285ea0;
            case 0x285EA4u: goto label_285ea4;
            case 0x285EA8u: goto label_285ea8;
            case 0x285EACu: goto label_285eac;
            case 0x285EB0u: goto label_285eb0;
            case 0x285EB4u: goto label_285eb4;
            case 0x285EB8u: goto label_285eb8;
            case 0x285EBCu: goto label_285ebc;
            case 0x285EC0u: goto label_285ec0;
            case 0x285EC4u: goto label_285ec4;
            case 0x285EC8u: goto label_285ec8;
            case 0x285ECCu: goto label_285ecc;
            case 0x285ED0u: goto label_285ed0;
            case 0x285ED4u: goto label_285ed4;
            case 0x285ED8u: goto label_285ed8;
            case 0x285EDCu: goto label_285edc;
            case 0x285EE0u: goto label_285ee0;
            case 0x285EE4u: goto label_285ee4;
            case 0x285EE8u: goto label_285ee8;
            case 0x285EECu: goto label_285eec;
            case 0x285EF0u: goto label_285ef0;
            case 0x285EF4u: goto label_285ef4;
            case 0x285EF8u: goto label_285ef8;
            case 0x285EFCu: goto label_285efc;
            case 0x285F00u: goto label_285f00;
            case 0x285F04u: goto label_285f04;
            case 0x285F08u: goto label_285f08;
            case 0x285F0Cu: goto label_285f0c;
            case 0x285F10u: goto label_285f10;
            case 0x285F14u: goto label_285f14;
            case 0x285F18u: goto label_285f18;
            case 0x285F1Cu: goto label_285f1c;
            case 0x285F20u: goto label_285f20;
            case 0x285F24u: goto label_285f24;
            case 0x285F28u: goto label_285f28;
            case 0x285F2Cu: goto label_285f2c;
            case 0x285F30u: goto label_285f30;
            case 0x285F34u: goto label_285f34;
            case 0x285F38u: goto label_285f38;
            case 0x285F3Cu: goto label_285f3c;
            case 0x285F40u: goto label_285f40;
            case 0x285F44u: goto label_285f44;
            case 0x285F48u: goto label_285f48;
            case 0x285F4Cu: goto label_285f4c;
            case 0x285F50u: goto label_285f50;
            case 0x285F54u: goto label_285f54;
            case 0x285F58u: goto label_285f58;
            case 0x285F5Cu: goto label_285f5c;
            case 0x285F60u: goto label_285f60;
            case 0x285F64u: goto label_285f64;
            case 0x285F68u: goto label_285f68;
            case 0x285F6Cu: goto label_285f6c;
            case 0x285F70u: goto label_285f70;
            case 0x285F74u: goto label_285f74;
            case 0x285F78u: goto label_285f78;
            case 0x285F7Cu: goto label_285f7c;
            case 0x285F80u: goto label_285f80;
            case 0x285F84u: goto label_285f84;
            case 0x285F88u: goto label_285f88;
            case 0x285F8Cu: goto label_285f8c;
            case 0x285F90u: goto label_285f90;
            case 0x285F94u: goto label_285f94;
            case 0x285F98u: goto label_285f98;
            case 0x285F9Cu: goto label_285f9c;
            case 0x285FA0u: goto label_285fa0;
            case 0x285FA4u: goto label_285fa4;
            case 0x285FA8u: goto label_285fa8;
            case 0x285FACu: goto label_285fac;
            case 0x285FB0u: goto label_285fb0;
            case 0x285FB4u: goto label_285fb4;
            case 0x285FB8u: goto label_285fb8;
            case 0x285FBCu: goto label_285fbc;
            case 0x285FC0u: goto label_285fc0;
            case 0x285FC4u: goto label_285fc4;
            case 0x285FC8u: goto label_285fc8;
            case 0x285FCCu: goto label_285fcc;
            case 0x285FD0u: goto label_285fd0;
            case 0x285FD4u: goto label_285fd4;
            case 0x285FD8u: goto label_285fd8;
            case 0x285FDCu: goto label_285fdc;
            case 0x285FE0u: goto label_285fe0;
            case 0x285FE4u: goto label_285fe4;
            case 0x285FE8u: goto label_285fe8;
            case 0x285FECu: goto label_285fec;
            case 0x285FF0u: goto label_285ff0;
            case 0x285FF4u: goto label_285ff4;
            case 0x285FF8u: goto label_285ff8;
            case 0x285FFCu: goto label_285ffc;
            case 0x286000u: goto label_286000;
            case 0x286004u: goto label_286004;
            case 0x286008u: goto label_286008;
            case 0x28600Cu: goto label_28600c;
            case 0x286010u: goto label_286010;
            case 0x286014u: goto label_286014;
            case 0x286018u: goto label_286018;
            case 0x28601Cu: goto label_28601c;
            case 0x286020u: goto label_286020;
            case 0x286024u: goto label_286024;
            case 0x286028u: goto label_286028;
            case 0x28602Cu: goto label_28602c;
            case 0x286030u: goto label_286030;
            case 0x286034u: goto label_286034;
            case 0x286038u: goto label_286038;
            case 0x28603Cu: goto label_28603c;
            case 0x286040u: goto label_286040;
            case 0x286044u: goto label_286044;
            case 0x286048u: goto label_286048;
            case 0x28604Cu: goto label_28604c;
            case 0x286050u: goto label_286050;
            case 0x286054u: goto label_286054;
            case 0x286058u: goto label_286058;
            case 0x28605Cu: goto label_28605c;
            case 0x286060u: goto label_286060;
            case 0x286064u: goto label_286064;
            case 0x286068u: goto label_286068;
            case 0x28606Cu: goto label_28606c;
            case 0x286070u: goto label_286070;
            case 0x286074u: goto label_286074;
            case 0x286078u: goto label_286078;
            case 0x28607Cu: goto label_28607c;
            case 0x286080u: goto label_286080;
            case 0x286084u: goto label_286084;
            case 0x286088u: goto label_286088;
            case 0x28608Cu: goto label_28608c;
            case 0x286090u: goto label_286090;
            case 0x286094u: goto label_286094;
            case 0x286098u: goto label_286098;
            case 0x28609Cu: goto label_28609c;
            case 0x2860A0u: goto label_2860a0;
            case 0x2860A4u: goto label_2860a4;
            case 0x2860A8u: goto label_2860a8;
            case 0x2860ACu: goto label_2860ac;
            case 0x2860B0u: goto label_2860b0;
            case 0x2860B4u: goto label_2860b4;
            case 0x2860B8u: goto label_2860b8;
            case 0x2860BCu: goto label_2860bc;
            case 0x2860C0u: goto label_2860c0;
            case 0x2860C4u: goto label_2860c4;
            case 0x2860C8u: goto label_2860c8;
            case 0x2860CCu: goto label_2860cc;
            case 0x2860D0u: goto label_2860d0;
            case 0x2860D4u: goto label_2860d4;
            case 0x2860D8u: goto label_2860d8;
            case 0x2860DCu: goto label_2860dc;
            case 0x2860E0u: goto label_2860e0;
            case 0x2860E4u: goto label_2860e4;
            case 0x2860E8u: goto label_2860e8;
            case 0x2860ECu: goto label_2860ec;
            case 0x2860F0u: goto label_2860f0;
            case 0x2860F4u: goto label_2860f4;
            case 0x2860F8u: goto label_2860f8;
            case 0x2860FCu: goto label_2860fc;
            case 0x286100u: goto label_286100;
            case 0x286104u: goto label_286104;
            case 0x286108u: goto label_286108;
            case 0x28610Cu: goto label_28610c;
            case 0x286110u: goto label_286110;
            case 0x286114u: goto label_286114;
            case 0x286118u: goto label_286118;
            case 0x28611Cu: goto label_28611c;
            case 0x286120u: goto label_286120;
            case 0x286124u: goto label_286124;
            case 0x286128u: goto label_286128;
            case 0x28612Cu: goto label_28612c;
            case 0x286130u: goto label_286130;
            case 0x286134u: goto label_286134;
            case 0x286138u: goto label_286138;
            case 0x28613Cu: goto label_28613c;
            case 0x286140u: goto label_286140;
            case 0x286144u: goto label_286144;
            case 0x286148u: goto label_286148;
            case 0x28614Cu: goto label_28614c;
            case 0x286150u: goto label_286150;
            case 0x286154u: goto label_286154;
            case 0x286158u: goto label_286158;
            case 0x28615Cu: goto label_28615c;
            case 0x286160u: goto label_286160;
            case 0x286164u: goto label_286164;
            case 0x286168u: goto label_286168;
            case 0x28616Cu: goto label_28616c;
            case 0x286170u: goto label_286170;
            case 0x286174u: goto label_286174;
            case 0x286178u: goto label_286178;
            case 0x28617Cu: goto label_28617c;
            case 0x286180u: goto label_286180;
            case 0x286184u: goto label_286184;
            case 0x286188u: goto label_286188;
            case 0x28618Cu: goto label_28618c;
            case 0x286190u: goto label_286190;
            case 0x286194u: goto label_286194;
            case 0x286198u: goto label_286198;
            case 0x28619Cu: goto label_28619c;
            case 0x2861A0u: goto label_2861a0;
            case 0x2861A4u: goto label_2861a4;
            case 0x2861A8u: goto label_2861a8;
            case 0x2861ACu: goto label_2861ac;
            case 0x2861B0u: goto label_2861b0;
            case 0x2861B4u: goto label_2861b4;
            case 0x2861B8u: goto label_2861b8;
            case 0x2861BCu: goto label_2861bc;
            case 0x2861C0u: goto label_2861c0;
            case 0x2861C4u: goto label_2861c4;
            case 0x2861C8u: goto label_2861c8;
            case 0x2861CCu: goto label_2861cc;
            case 0x2861D0u: goto label_2861d0;
            case 0x2861D4u: goto label_2861d4;
            case 0x2861D8u: goto label_2861d8;
            case 0x2861DCu: goto label_2861dc;
            case 0x2861E0u: goto label_2861e0;
            case 0x2861E4u: goto label_2861e4;
            case 0x2861E8u: goto label_2861e8;
            case 0x2861ECu: goto label_2861ec;
            case 0x2861F0u: goto label_2861f0;
            case 0x2861F4u: goto label_2861f4;
            case 0x2861F8u: goto label_2861f8;
            case 0x2861FCu: goto label_2861fc;
            case 0x286200u: goto label_286200;
            case 0x286204u: goto label_286204;
            case 0x286208u: goto label_286208;
            case 0x28620Cu: goto label_28620c;
            case 0x286210u: goto label_286210;
            case 0x286214u: goto label_286214;
            case 0x286218u: goto label_286218;
            case 0x28621Cu: goto label_28621c;
            case 0x286220u: goto label_286220;
            case 0x286224u: goto label_286224;
            case 0x286228u: goto label_286228;
            case 0x28622Cu: goto label_28622c;
            case 0x286230u: goto label_286230;
            case 0x286234u: goto label_286234;
            case 0x286238u: goto label_286238;
            case 0x28623Cu: goto label_28623c;
            case 0x286240u: goto label_286240;
            case 0x286244u: goto label_286244;
            case 0x286248u: goto label_286248;
            case 0x28624Cu: goto label_28624c;
            case 0x286250u: goto label_286250;
            case 0x286254u: goto label_286254;
            case 0x286258u: goto label_286258;
            case 0x28625Cu: goto label_28625c;
            case 0x286260u: goto label_286260;
            case 0x286264u: goto label_286264;
            case 0x286268u: goto label_286268;
            case 0x28626Cu: goto label_28626c;
            case 0x286270u: goto label_286270;
            case 0x286274u: goto label_286274;
            case 0x286278u: goto label_286278;
            case 0x28627Cu: goto label_28627c;
            case 0x286280u: goto label_286280;
            case 0x286284u: goto label_286284;
            case 0x286288u: goto label_286288;
            case 0x28628Cu: goto label_28628c;
            case 0x286290u: goto label_286290;
            case 0x286294u: goto label_286294;
            case 0x286298u: goto label_286298;
            case 0x28629Cu: goto label_28629c;
            case 0x2862A0u: goto label_2862a0;
            case 0x2862A4u: goto label_2862a4;
            case 0x2862A8u: goto label_2862a8;
            case 0x2862ACu: goto label_2862ac;
            case 0x2862B0u: goto label_2862b0;
            case 0x2862B4u: goto label_2862b4;
            case 0x2862B8u: goto label_2862b8;
            case 0x2862BCu: goto label_2862bc;
            case 0x2862C0u: goto label_2862c0;
            case 0x2862C4u: goto label_2862c4;
            case 0x2862C8u: goto label_2862c8;
            case 0x2862CCu: goto label_2862cc;
            case 0x2862D0u: goto label_2862d0;
            case 0x2862D4u: goto label_2862d4;
            case 0x2862D8u: goto label_2862d8;
            case 0x2862DCu: goto label_2862dc;
            case 0x2862E0u: goto label_2862e0;
            case 0x2862E4u: goto label_2862e4;
            case 0x2862E8u: goto label_2862e8;
            case 0x2862ECu: goto label_2862ec;
            case 0x2862F0u: goto label_2862f0;
            case 0x2862F4u: goto label_2862f4;
            case 0x2862F8u: goto label_2862f8;
            case 0x2862FCu: goto label_2862fc;
            case 0x286300u: goto label_286300;
            case 0x286304u: goto label_286304;
            case 0x286308u: goto label_286308;
            case 0x28630Cu: goto label_28630c;
            case 0x286310u: goto label_286310;
            case 0x286314u: goto label_286314;
            case 0x286318u: goto label_286318;
            case 0x28631Cu: goto label_28631c;
            case 0x286320u: goto label_286320;
            case 0x286324u: goto label_286324;
            case 0x286328u: goto label_286328;
            case 0x28632Cu: goto label_28632c;
            case 0x286330u: goto label_286330;
            case 0x286334u: goto label_286334;
            case 0x286338u: goto label_286338;
            case 0x28633Cu: goto label_28633c;
            case 0x286340u: goto label_286340;
            case 0x286344u: goto label_286344;
            case 0x286348u: goto label_286348;
            case 0x28634Cu: goto label_28634c;
            case 0x286350u: goto label_286350;
            case 0x286354u: goto label_286354;
            case 0x286358u: goto label_286358;
            case 0x28635Cu: goto label_28635c;
            case 0x286360u: goto label_286360;
            case 0x286364u: goto label_286364;
            case 0x286368u: goto label_286368;
            case 0x28636Cu: goto label_28636c;
            case 0x286370u: goto label_286370;
            case 0x286374u: goto label_286374;
            case 0x286378u: goto label_286378;
            case 0x28637Cu: goto label_28637c;
            case 0x286380u: goto label_286380;
            case 0x286384u: goto label_286384;
            case 0x286388u: goto label_286388;
            case 0x28638Cu: goto label_28638c;
            case 0x286390u: goto label_286390;
            case 0x286394u: goto label_286394;
            case 0x286398u: goto label_286398;
            case 0x28639Cu: goto label_28639c;
            case 0x2863A0u: goto label_2863a0;
            case 0x2863A4u: goto label_2863a4;
            case 0x2863A8u: goto label_2863a8;
            case 0x2863ACu: goto label_2863ac;
            case 0x2863B0u: goto label_2863b0;
            case 0x2863B4u: goto label_2863b4;
            case 0x2863B8u: goto label_2863b8;
            case 0x2863BCu: goto label_2863bc;
            case 0x2863C0u: goto label_2863c0;
            case 0x2863C4u: goto label_2863c4;
            case 0x2863C8u: goto label_2863c8;
            case 0x2863CCu: goto label_2863cc;
            case 0x2863D0u: goto label_2863d0;
            case 0x2863D4u: goto label_2863d4;
            case 0x2863D8u: goto label_2863d8;
            case 0x2863DCu: goto label_2863dc;
            case 0x2863E0u: goto label_2863e0;
            case 0x2863E4u: goto label_2863e4;
            case 0x2863E8u: goto label_2863e8;
            case 0x2863ECu: goto label_2863ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2861A0u;
label_2861a0:
    // 0x2861a0: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x2861a0u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2861a4:
    // 0x2861a4: 0xdfbf0680  ld          $ra, 0x680($sp)
    ctx->pc = 0x2861a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1664)));
label_2861a8:
    // 0x2861a8: 0xdfbe0670  ld          $fp, 0x670($sp)
    ctx->pc = 0x2861a8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1648)));
label_2861ac:
    // 0x2861ac: 0xdfb70660  ld          $s7, 0x660($sp)
    ctx->pc = 0x2861acu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1632)));
label_2861b0:
    // 0x2861b0: 0xdfb60650  ld          $s6, 0x650($sp)
    ctx->pc = 0x2861b0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1616)));
label_2861b4:
    // 0x2861b4: 0xdfb50640  ld          $s5, 0x640($sp)
    ctx->pc = 0x2861b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1600)));
label_2861b8:
    // 0x2861b8: 0xdfb40630  ld          $s4, 0x630($sp)
    ctx->pc = 0x2861b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1584)));
label_2861bc:
    // 0x2861bc: 0xdfb30620  ld          $s3, 0x620($sp)
    ctx->pc = 0x2861bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1568)));
label_2861c0:
    // 0x2861c0: 0xdfb20610  ld          $s2, 0x610($sp)
    ctx->pc = 0x2861c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1552)));
label_2861c4:
    // 0x2861c4: 0xdfb10600  ld          $s1, 0x600($sp)
    ctx->pc = 0x2861c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1536)));
label_2861c8:
    // 0x2861c8: 0xdfb005f0  ld          $s0, 0x5F0($sp)
    ctx->pc = 0x2861c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1520)));
label_2861cc:
    // 0x2861cc: 0xc7bf06e8  lwc1        $f31, 0x6E8($sp)
    ctx->pc = 0x2861ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_2861d0:
    // 0x2861d0: 0xc7be06e0  lwc1        $f30, 0x6E0($sp)
    ctx->pc = 0x2861d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
label_2861d4:
    // 0x2861d4: 0xc7bd06d8  lwc1        $f29, 0x6D8($sp)
    ctx->pc = 0x2861d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_2861d8:
    // 0x2861d8: 0xc7bc06d0  lwc1        $f28, 0x6D0($sp)
    ctx->pc = 0x2861d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_2861dc:
    // 0x2861dc: 0xc7bb06c8  lwc1        $f27, 0x6C8($sp)
    ctx->pc = 0x2861dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_2861e0:
    // 0x2861e0: 0xc7ba06c0  lwc1        $f26, 0x6C0($sp)
    ctx->pc = 0x2861e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_2861e4:
    // 0x2861e4: 0xc7b906b8  lwc1        $f25, 0x6B8($sp)
    ctx->pc = 0x2861e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_2861e8:
    // 0x2861e8: 0xc7b806b0  lwc1        $f24, 0x6B0($sp)
    ctx->pc = 0x2861e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_2861ec:
    // 0x2861ec: 0xc7b706a8  lwc1        $f23, 0x6A8($sp)
    ctx->pc = 0x2861ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_2861f0:
    // 0x2861f0: 0xc7b606a0  lwc1        $f22, 0x6A0($sp)
    ctx->pc = 0x2861f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2861f4:
    // 0x2861f4: 0xc7b50698  lwc1        $f21, 0x698($sp)
    ctx->pc = 0x2861f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2861f8:
    // 0x2861f8: 0xc7b40690  lwc1        $f20, 0x690($sp)
    ctx->pc = 0x2861f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2861fc:
    // 0x2861fc: 0x3e00008  jr          $ra
label_286200:
    if (ctx->pc == 0x286200u) {
        ctx->pc = 0x286200u;
            // 0x286200: 0x27bd06f0  addiu       $sp, $sp, 0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1776));
        ctx->pc = 0x286204u;
        goto label_286204;
    }
    ctx->pc = 0x2861FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x286200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2861FCu;
            // 0x286200: 0x27bd06f0  addiu       $sp, $sp, 0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1776));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x285CF8u: goto label_285cf8;
            case 0x285CFCu: goto label_285cfc;
            case 0x285D00u: goto label_285d00;
            case 0x285D04u: goto label_285d04;
            case 0x285D08u: goto label_285d08;
            case 0x285D0Cu: goto label_285d0c;
            case 0x285D10u: goto label_285d10;
            case 0x285D14u: goto label_285d14;
            case 0x285D18u: goto label_285d18;
            case 0x285D1Cu: goto label_285d1c;
            case 0x285D20u: goto label_285d20;
            case 0x285D24u: goto label_285d24;
            case 0x285D28u: goto label_285d28;
            case 0x285D2Cu: goto label_285d2c;
            case 0x285D30u: goto label_285d30;
            case 0x285D34u: goto label_285d34;
            case 0x285D38u: goto label_285d38;
            case 0x285D3Cu: goto label_285d3c;
            case 0x285D40u: goto label_285d40;
            case 0x285D44u: goto label_285d44;
            case 0x285D48u: goto label_285d48;
            case 0x285D4Cu: goto label_285d4c;
            case 0x285D50u: goto label_285d50;
            case 0x285D54u: goto label_285d54;
            case 0x285D58u: goto label_285d58;
            case 0x285D5Cu: goto label_285d5c;
            case 0x285D60u: goto label_285d60;
            case 0x285D64u: goto label_285d64;
            case 0x285D68u: goto label_285d68;
            case 0x285D6Cu: goto label_285d6c;
            case 0x285D70u: goto label_285d70;
            case 0x285D74u: goto label_285d74;
            case 0x285D78u: goto label_285d78;
            case 0x285D7Cu: goto label_285d7c;
            case 0x285D80u: goto label_285d80;
            case 0x285D84u: goto label_285d84;
            case 0x285D88u: goto label_285d88;
            case 0x285D8Cu: goto label_285d8c;
            case 0x285D90u: goto label_285d90;
            case 0x285D94u: goto label_285d94;
            case 0x285D98u: goto label_285d98;
            case 0x285D9Cu: goto label_285d9c;
            case 0x285DA0u: goto label_285da0;
            case 0x285DA4u: goto label_285da4;
            case 0x285DA8u: goto label_285da8;
            case 0x285DACu: goto label_285dac;
            case 0x285DB0u: goto label_285db0;
            case 0x285DB4u: goto label_285db4;
            case 0x285DB8u: goto label_285db8;
            case 0x285DBCu: goto label_285dbc;
            case 0x285DC0u: goto label_285dc0;
            case 0x285DC4u: goto label_285dc4;
            case 0x285DC8u: goto label_285dc8;
            case 0x285DCCu: goto label_285dcc;
            case 0x285DD0u: goto label_285dd0;
            case 0x285DD4u: goto label_285dd4;
            case 0x285DD8u: goto label_285dd8;
            case 0x285DDCu: goto label_285ddc;
            case 0x285DE0u: goto label_285de0;
            case 0x285DE4u: goto label_285de4;
            case 0x285DE8u: goto label_285de8;
            case 0x285DECu: goto label_285dec;
            case 0x285DF0u: goto label_285df0;
            case 0x285DF4u: goto label_285df4;
            case 0x285DF8u: goto label_285df8;
            case 0x285DFCu: goto label_285dfc;
            case 0x285E00u: goto label_285e00;
            case 0x285E04u: goto label_285e04;
            case 0x285E08u: goto label_285e08;
            case 0x285E0Cu: goto label_285e0c;
            case 0x285E10u: goto label_285e10;
            case 0x285E14u: goto label_285e14;
            case 0x285E18u: goto label_285e18;
            case 0x285E1Cu: goto label_285e1c;
            case 0x285E20u: goto label_285e20;
            case 0x285E24u: goto label_285e24;
            case 0x285E28u: goto label_285e28;
            case 0x285E2Cu: goto label_285e2c;
            case 0x285E30u: goto label_285e30;
            case 0x285E34u: goto label_285e34;
            case 0x285E38u: goto label_285e38;
            case 0x285E3Cu: goto label_285e3c;
            case 0x285E40u: goto label_285e40;
            case 0x285E44u: goto label_285e44;
            case 0x285E48u: goto label_285e48;
            case 0x285E4Cu: goto label_285e4c;
            case 0x285E50u: goto label_285e50;
            case 0x285E54u: goto label_285e54;
            case 0x285E58u: goto label_285e58;
            case 0x285E5Cu: goto label_285e5c;
            case 0x285E60u: goto label_285e60;
            case 0x285E64u: goto label_285e64;
            case 0x285E68u: goto label_285e68;
            case 0x285E6Cu: goto label_285e6c;
            case 0x285E70u: goto label_285e70;
            case 0x285E74u: goto label_285e74;
            case 0x285E78u: goto label_285e78;
            case 0x285E7Cu: goto label_285e7c;
            case 0x285E80u: goto label_285e80;
            case 0x285E84u: goto label_285e84;
            case 0x285E88u: goto label_285e88;
            case 0x285E8Cu: goto label_285e8c;
            case 0x285E90u: goto label_285e90;
            case 0x285E94u: goto label_285e94;
            case 0x285E98u: goto label_285e98;
            case 0x285E9Cu: goto label_285e9c;
            case 0x285EA0u: goto label_285ea0;
            case 0x285EA4u: goto label_285ea4;
            case 0x285EA8u: goto label_285ea8;
            case 0x285EACu: goto label_285eac;
            case 0x285EB0u: goto label_285eb0;
            case 0x285EB4u: goto label_285eb4;
            case 0x285EB8u: goto label_285eb8;
            case 0x285EBCu: goto label_285ebc;
            case 0x285EC0u: goto label_285ec0;
            case 0x285EC4u: goto label_285ec4;
            case 0x285EC8u: goto label_285ec8;
            case 0x285ECCu: goto label_285ecc;
            case 0x285ED0u: goto label_285ed0;
            case 0x285ED4u: goto label_285ed4;
            case 0x285ED8u: goto label_285ed8;
            case 0x285EDCu: goto label_285edc;
            case 0x285EE0u: goto label_285ee0;
            case 0x285EE4u: goto label_285ee4;
            case 0x285EE8u: goto label_285ee8;
            case 0x285EECu: goto label_285eec;
            case 0x285EF0u: goto label_285ef0;
            case 0x285EF4u: goto label_285ef4;
            case 0x285EF8u: goto label_285ef8;
            case 0x285EFCu: goto label_285efc;
            case 0x285F00u: goto label_285f00;
            case 0x285F04u: goto label_285f04;
            case 0x285F08u: goto label_285f08;
            case 0x285F0Cu: goto label_285f0c;
            case 0x285F10u: goto label_285f10;
            case 0x285F14u: goto label_285f14;
            case 0x285F18u: goto label_285f18;
            case 0x285F1Cu: goto label_285f1c;
            case 0x285F20u: goto label_285f20;
            case 0x285F24u: goto label_285f24;
            case 0x285F28u: goto label_285f28;
            case 0x285F2Cu: goto label_285f2c;
            case 0x285F30u: goto label_285f30;
            case 0x285F34u: goto label_285f34;
            case 0x285F38u: goto label_285f38;
            case 0x285F3Cu: goto label_285f3c;
            case 0x285F40u: goto label_285f40;
            case 0x285F44u: goto label_285f44;
            case 0x285F48u: goto label_285f48;
            case 0x285F4Cu: goto label_285f4c;
            case 0x285F50u: goto label_285f50;
            case 0x285F54u: goto label_285f54;
            case 0x285F58u: goto label_285f58;
            case 0x285F5Cu: goto label_285f5c;
            case 0x285F60u: goto label_285f60;
            case 0x285F64u: goto label_285f64;
            case 0x285F68u: goto label_285f68;
            case 0x285F6Cu: goto label_285f6c;
            case 0x285F70u: goto label_285f70;
            case 0x285F74u: goto label_285f74;
            case 0x285F78u: goto label_285f78;
            case 0x285F7Cu: goto label_285f7c;
            case 0x285F80u: goto label_285f80;
            case 0x285F84u: goto label_285f84;
            case 0x285F88u: goto label_285f88;
            case 0x285F8Cu: goto label_285f8c;
            case 0x285F90u: goto label_285f90;
            case 0x285F94u: goto label_285f94;
            case 0x285F98u: goto label_285f98;
            case 0x285F9Cu: goto label_285f9c;
            case 0x285FA0u: goto label_285fa0;
            case 0x285FA4u: goto label_285fa4;
            case 0x285FA8u: goto label_285fa8;
            case 0x285FACu: goto label_285fac;
            case 0x285FB0u: goto label_285fb0;
            case 0x285FB4u: goto label_285fb4;
            case 0x285FB8u: goto label_285fb8;
            case 0x285FBCu: goto label_285fbc;
            case 0x285FC0u: goto label_285fc0;
            case 0x285FC4u: goto label_285fc4;
            case 0x285FC8u: goto label_285fc8;
            case 0x285FCCu: goto label_285fcc;
            case 0x285FD0u: goto label_285fd0;
            case 0x285FD4u: goto label_285fd4;
            case 0x285FD8u: goto label_285fd8;
            case 0x285FDCu: goto label_285fdc;
            case 0x285FE0u: goto label_285fe0;
            case 0x285FE4u: goto label_285fe4;
            case 0x285FE8u: goto label_285fe8;
            case 0x285FECu: goto label_285fec;
            case 0x285FF0u: goto label_285ff0;
            case 0x285FF4u: goto label_285ff4;
            case 0x285FF8u: goto label_285ff8;
            case 0x285FFCu: goto label_285ffc;
            case 0x286000u: goto label_286000;
            case 0x286004u: goto label_286004;
            case 0x286008u: goto label_286008;
            case 0x28600Cu: goto label_28600c;
            case 0x286010u: goto label_286010;
            case 0x286014u: goto label_286014;
            case 0x286018u: goto label_286018;
            case 0x28601Cu: goto label_28601c;
            case 0x286020u: goto label_286020;
            case 0x286024u: goto label_286024;
            case 0x286028u: goto label_286028;
            case 0x28602Cu: goto label_28602c;
            case 0x286030u: goto label_286030;
            case 0x286034u: goto label_286034;
            case 0x286038u: goto label_286038;
            case 0x28603Cu: goto label_28603c;
            case 0x286040u: goto label_286040;
            case 0x286044u: goto label_286044;
            case 0x286048u: goto label_286048;
            case 0x28604Cu: goto label_28604c;
            case 0x286050u: goto label_286050;
            case 0x286054u: goto label_286054;
            case 0x286058u: goto label_286058;
            case 0x28605Cu: goto label_28605c;
            case 0x286060u: goto label_286060;
            case 0x286064u: goto label_286064;
            case 0x286068u: goto label_286068;
            case 0x28606Cu: goto label_28606c;
            case 0x286070u: goto label_286070;
            case 0x286074u: goto label_286074;
            case 0x286078u: goto label_286078;
            case 0x28607Cu: goto label_28607c;
            case 0x286080u: goto label_286080;
            case 0x286084u: goto label_286084;
            case 0x286088u: goto label_286088;
            case 0x28608Cu: goto label_28608c;
            case 0x286090u: goto label_286090;
            case 0x286094u: goto label_286094;
            case 0x286098u: goto label_286098;
            case 0x28609Cu: goto label_28609c;
            case 0x2860A0u: goto label_2860a0;
            case 0x2860A4u: goto label_2860a4;
            case 0x2860A8u: goto label_2860a8;
            case 0x2860ACu: goto label_2860ac;
            case 0x2860B0u: goto label_2860b0;
            case 0x2860B4u: goto label_2860b4;
            case 0x2860B8u: goto label_2860b8;
            case 0x2860BCu: goto label_2860bc;
            case 0x2860C0u: goto label_2860c0;
            case 0x2860C4u: goto label_2860c4;
            case 0x2860C8u: goto label_2860c8;
            case 0x2860CCu: goto label_2860cc;
            case 0x2860D0u: goto label_2860d0;
            case 0x2860D4u: goto label_2860d4;
            case 0x2860D8u: goto label_2860d8;
            case 0x2860DCu: goto label_2860dc;
            case 0x2860E0u: goto label_2860e0;
            case 0x2860E4u: goto label_2860e4;
            case 0x2860E8u: goto label_2860e8;
            case 0x2860ECu: goto label_2860ec;
            case 0x2860F0u: goto label_2860f0;
            case 0x2860F4u: goto label_2860f4;
            case 0x2860F8u: goto label_2860f8;
            case 0x2860FCu: goto label_2860fc;
            case 0x286100u: goto label_286100;
            case 0x286104u: goto label_286104;
            case 0x286108u: goto label_286108;
            case 0x28610Cu: goto label_28610c;
            case 0x286110u: goto label_286110;
            case 0x286114u: goto label_286114;
            case 0x286118u: goto label_286118;
            case 0x28611Cu: goto label_28611c;
            case 0x286120u: goto label_286120;
            case 0x286124u: goto label_286124;
            case 0x286128u: goto label_286128;
            case 0x28612Cu: goto label_28612c;
            case 0x286130u: goto label_286130;
            case 0x286134u: goto label_286134;
            case 0x286138u: goto label_286138;
            case 0x28613Cu: goto label_28613c;
            case 0x286140u: goto label_286140;
            case 0x286144u: goto label_286144;
            case 0x286148u: goto label_286148;
            case 0x28614Cu: goto label_28614c;
            case 0x286150u: goto label_286150;
            case 0x286154u: goto label_286154;
            case 0x286158u: goto label_286158;
            case 0x28615Cu: goto label_28615c;
            case 0x286160u: goto label_286160;
            case 0x286164u: goto label_286164;
            case 0x286168u: goto label_286168;
            case 0x28616Cu: goto label_28616c;
            case 0x286170u: goto label_286170;
            case 0x286174u: goto label_286174;
            case 0x286178u: goto label_286178;
            case 0x28617Cu: goto label_28617c;
            case 0x286180u: goto label_286180;
            case 0x286184u: goto label_286184;
            case 0x286188u: goto label_286188;
            case 0x28618Cu: goto label_28618c;
            case 0x286190u: goto label_286190;
            case 0x286194u: goto label_286194;
            case 0x286198u: goto label_286198;
            case 0x28619Cu: goto label_28619c;
            case 0x2861A0u: goto label_2861a0;
            case 0x2861A4u: goto label_2861a4;
            case 0x2861A8u: goto label_2861a8;
            case 0x2861ACu: goto label_2861ac;
            case 0x2861B0u: goto label_2861b0;
            case 0x2861B4u: goto label_2861b4;
            case 0x2861B8u: goto label_2861b8;
            case 0x2861BCu: goto label_2861bc;
            case 0x2861C0u: goto label_2861c0;
            case 0x2861C4u: goto label_2861c4;
            case 0x2861C8u: goto label_2861c8;
            case 0x2861CCu: goto label_2861cc;
            case 0x2861D0u: goto label_2861d0;
            case 0x2861D4u: goto label_2861d4;
            case 0x2861D8u: goto label_2861d8;
            case 0x2861DCu: goto label_2861dc;
            case 0x2861E0u: goto label_2861e0;
            case 0x2861E4u: goto label_2861e4;
            case 0x2861E8u: goto label_2861e8;
            case 0x2861ECu: goto label_2861ec;
            case 0x2861F0u: goto label_2861f0;
            case 0x2861F4u: goto label_2861f4;
            case 0x2861F8u: goto label_2861f8;
            case 0x2861FCu: goto label_2861fc;
            case 0x286200u: goto label_286200;
            case 0x286204u: goto label_286204;
            case 0x286208u: goto label_286208;
            case 0x28620Cu: goto label_28620c;
            case 0x286210u: goto label_286210;
            case 0x286214u: goto label_286214;
            case 0x286218u: goto label_286218;
            case 0x28621Cu: goto label_28621c;
            case 0x286220u: goto label_286220;
            case 0x286224u: goto label_286224;
            case 0x286228u: goto label_286228;
            case 0x28622Cu: goto label_28622c;
            case 0x286230u: goto label_286230;
            case 0x286234u: goto label_286234;
            case 0x286238u: goto label_286238;
            case 0x28623Cu: goto label_28623c;
            case 0x286240u: goto label_286240;
            case 0x286244u: goto label_286244;
            case 0x286248u: goto label_286248;
            case 0x28624Cu: goto label_28624c;
            case 0x286250u: goto label_286250;
            case 0x286254u: goto label_286254;
            case 0x286258u: goto label_286258;
            case 0x28625Cu: goto label_28625c;
            case 0x286260u: goto label_286260;
            case 0x286264u: goto label_286264;
            case 0x286268u: goto label_286268;
            case 0x28626Cu: goto label_28626c;
            case 0x286270u: goto label_286270;
            case 0x286274u: goto label_286274;
            case 0x286278u: goto label_286278;
            case 0x28627Cu: goto label_28627c;
            case 0x286280u: goto label_286280;
            case 0x286284u: goto label_286284;
            case 0x286288u: goto label_286288;
            case 0x28628Cu: goto label_28628c;
            case 0x286290u: goto label_286290;
            case 0x286294u: goto label_286294;
            case 0x286298u: goto label_286298;
            case 0x28629Cu: goto label_28629c;
            case 0x2862A0u: goto label_2862a0;
            case 0x2862A4u: goto label_2862a4;
            case 0x2862A8u: goto label_2862a8;
            case 0x2862ACu: goto label_2862ac;
            case 0x2862B0u: goto label_2862b0;
            case 0x2862B4u: goto label_2862b4;
            case 0x2862B8u: goto label_2862b8;
            case 0x2862BCu: goto label_2862bc;
            case 0x2862C0u: goto label_2862c0;
            case 0x2862C4u: goto label_2862c4;
            case 0x2862C8u: goto label_2862c8;
            case 0x2862CCu: goto label_2862cc;
            case 0x2862D0u: goto label_2862d0;
            case 0x2862D4u: goto label_2862d4;
            case 0x2862D8u: goto label_2862d8;
            case 0x2862DCu: goto label_2862dc;
            case 0x2862E0u: goto label_2862e0;
            case 0x2862E4u: goto label_2862e4;
            case 0x2862E8u: goto label_2862e8;
            case 0x2862ECu: goto label_2862ec;
            case 0x2862F0u: goto label_2862f0;
            case 0x2862F4u: goto label_2862f4;
            case 0x2862F8u: goto label_2862f8;
            case 0x2862FCu: goto label_2862fc;
            case 0x286300u: goto label_286300;
            case 0x286304u: goto label_286304;
            case 0x286308u: goto label_286308;
            case 0x28630Cu: goto label_28630c;
            case 0x286310u: goto label_286310;
            case 0x286314u: goto label_286314;
            case 0x286318u: goto label_286318;
            case 0x28631Cu: goto label_28631c;
            case 0x286320u: goto label_286320;
            case 0x286324u: goto label_286324;
            case 0x286328u: goto label_286328;
            case 0x28632Cu: goto label_28632c;
            case 0x286330u: goto label_286330;
            case 0x286334u: goto label_286334;
            case 0x286338u: goto label_286338;
            case 0x28633Cu: goto label_28633c;
            case 0x286340u: goto label_286340;
            case 0x286344u: goto label_286344;
            case 0x286348u: goto label_286348;
            case 0x28634Cu: goto label_28634c;
            case 0x286350u: goto label_286350;
            case 0x286354u: goto label_286354;
            case 0x286358u: goto label_286358;
            case 0x28635Cu: goto label_28635c;
            case 0x286360u: goto label_286360;
            case 0x286364u: goto label_286364;
            case 0x286368u: goto label_286368;
            case 0x28636Cu: goto label_28636c;
            case 0x286370u: goto label_286370;
            case 0x286374u: goto label_286374;
            case 0x286378u: goto label_286378;
            case 0x28637Cu: goto label_28637c;
            case 0x286380u: goto label_286380;
            case 0x286384u: goto label_286384;
            case 0x286388u: goto label_286388;
            case 0x28638Cu: goto label_28638c;
            case 0x286390u: goto label_286390;
            case 0x286394u: goto label_286394;
            case 0x286398u: goto label_286398;
            case 0x28639Cu: goto label_28639c;
            case 0x2863A0u: goto label_2863a0;
            case 0x2863A4u: goto label_2863a4;
            case 0x2863A8u: goto label_2863a8;
            case 0x2863ACu: goto label_2863ac;
            case 0x2863B0u: goto label_2863b0;
            case 0x2863B4u: goto label_2863b4;
            case 0x2863B8u: goto label_2863b8;
            case 0x2863BCu: goto label_2863bc;
            case 0x2863C0u: goto label_2863c0;
            case 0x2863C4u: goto label_2863c4;
            case 0x2863C8u: goto label_2863c8;
            case 0x2863CCu: goto label_2863cc;
            case 0x2863D0u: goto label_2863d0;
            case 0x2863D4u: goto label_2863d4;
            case 0x2863D8u: goto label_2863d8;
            case 0x2863DCu: goto label_2863dc;
            case 0x2863E0u: goto label_2863e0;
            case 0x2863E4u: goto label_2863e4;
            case 0x2863E8u: goto label_2863e8;
            case 0x2863ECu: goto label_2863ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x286204u;
label_286204:
    // 0x286204: 0x0  nop
    ctx->pc = 0x286204u;
    // NOP
label_286208:
    // 0x286208: 0x27bdf900  addiu       $sp, $sp, -0x700
    ctx->pc = 0x286208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965504));
label_28620c:
    // 0x28620c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x28620cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
label_286210:
    // 0x286210: 0xffbe0680  sd          $fp, 0x680($sp)
    ctx->pc = 0x286210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1664), GPR_U64(ctx, 30));
label_286214:
    // 0x286214: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x286214u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_286218:
    // 0x286218: 0xffbf0690  sd          $ra, 0x690($sp)
    ctx->pc = 0x286218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1680), GPR_U64(ctx, 31));
label_28621c:
    // 0x28621c: 0xffb70670  sd          $s7, 0x670($sp)
    ctx->pc = 0x28621cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1648), GPR_U64(ctx, 23));
label_286220:
    // 0x286220: 0xffb60660  sd          $s6, 0x660($sp)
    ctx->pc = 0x286220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1632), GPR_U64(ctx, 22));
label_286224:
    // 0x286224: 0xffb50650  sd          $s5, 0x650($sp)
    ctx->pc = 0x286224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1616), GPR_U64(ctx, 21));
label_286228:
    // 0x286228: 0xffb40640  sd          $s4, 0x640($sp)
    ctx->pc = 0x286228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1600), GPR_U64(ctx, 20));
label_28622c:
    // 0x28622c: 0xffb30630  sd          $s3, 0x630($sp)
    ctx->pc = 0x28622cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1584), GPR_U64(ctx, 19));
label_286230:
    // 0x286230: 0xffb20620  sd          $s2, 0x620($sp)
    ctx->pc = 0x286230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1568), GPR_U64(ctx, 18));
label_286234:
    // 0x286234: 0xffb10610  sd          $s1, 0x610($sp)
    ctx->pc = 0x286234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1552), GPR_U64(ctx, 17));
label_286238:
    // 0x286238: 0xffb00600  sd          $s0, 0x600($sp)
    ctx->pc = 0x286238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1536), GPR_U64(ctx, 16));
label_28623c:
    // 0x28623c: 0xe7bf06f8  swc1        $f31, 0x6F8($sp)
    ctx->pc = 0x28623cu;
    { float f = ctx->f[31]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1784), bits); }
label_286240:
    // 0x286240: 0xe7be06f0  swc1        $f30, 0x6F0($sp)
    ctx->pc = 0x286240u;
    { float f = ctx->f[30]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1776), bits); }
label_286244:
    // 0x286244: 0xe7bd06e8  swc1        $f29, 0x6E8($sp)
    ctx->pc = 0x286244u;
    { float f = ctx->f[29]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1768), bits); }
label_286248:
    // 0x286248: 0xe7bc06e0  swc1        $f28, 0x6E0($sp)
    ctx->pc = 0x286248u;
    { float f = ctx->f[28]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1760), bits); }
label_28624c:
    // 0x28624c: 0xe7bb06d8  swc1        $f27, 0x6D8($sp)
    ctx->pc = 0x28624cu;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1752), bits); }
label_286250:
    // 0x286250: 0xe7ba06d0  swc1        $f26, 0x6D0($sp)
    ctx->pc = 0x286250u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1744), bits); }
label_286254:
    // 0x286254: 0xe7b906c8  swc1        $f25, 0x6C8($sp)
    ctx->pc = 0x286254u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1736), bits); }
label_286258:
    // 0x286258: 0xe7b806c0  swc1        $f24, 0x6C0($sp)
    ctx->pc = 0x286258u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1728), bits); }
label_28625c:
    // 0x28625c: 0xe7b706b8  swc1        $f23, 0x6B8($sp)
    ctx->pc = 0x28625cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1720), bits); }
label_286260:
    // 0x286260: 0xe7b606b0  swc1        $f22, 0x6B0($sp)
    ctx->pc = 0x286260u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1712), bits); }
label_286264:
    // 0x286264: 0xe7b506a8  swc1        $f21, 0x6A8($sp)
    ctx->pc = 0x286264u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1704), bits); }
label_286268:
    // 0x286268: 0xe7b406a0  swc1        $f20, 0x6A0($sp)
    ctx->pc = 0x286268u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1696), bits); }
label_28626c:
    // 0x28626c: 0xafc405e4  sw          $a0, 0x5E4($fp)
    ctx->pc = 0x28626cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1508), GPR_U32(ctx, 4));
label_286270:
    // 0x286270: 0x8c6239b4  lw          $v0, 0x39B4($v1)
    ctx->pc = 0x286270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 14772)));
label_286274:
    // 0x286274: 0x40f809  jalr        $v0
label_286278:
    if (ctx->pc == 0x286278u) {
        ctx->pc = 0x28627Cu;
        goto label_28627c;
    }
    ctx->pc = 0x286274u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x28627Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x28627Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x285CF8u: goto label_285cf8;
            case 0x285CFCu: goto label_285cfc;
            case 0x285D00u: goto label_285d00;
            case 0x285D04u: goto label_285d04;
            case 0x285D08u: goto label_285d08;
            case 0x285D0Cu: goto label_285d0c;
            case 0x285D10u: goto label_285d10;
            case 0x285D14u: goto label_285d14;
            case 0x285D18u: goto label_285d18;
            case 0x285D1Cu: goto label_285d1c;
            case 0x285D20u: goto label_285d20;
            case 0x285D24u: goto label_285d24;
            case 0x285D28u: goto label_285d28;
            case 0x285D2Cu: goto label_285d2c;
            case 0x285D30u: goto label_285d30;
            case 0x285D34u: goto label_285d34;
            case 0x285D38u: goto label_285d38;
            case 0x285D3Cu: goto label_285d3c;
            case 0x285D40u: goto label_285d40;
            case 0x285D44u: goto label_285d44;
            case 0x285D48u: goto label_285d48;
            case 0x285D4Cu: goto label_285d4c;
            case 0x285D50u: goto label_285d50;
            case 0x285D54u: goto label_285d54;
            case 0x285D58u: goto label_285d58;
            case 0x285D5Cu: goto label_285d5c;
            case 0x285D60u: goto label_285d60;
            case 0x285D64u: goto label_285d64;
            case 0x285D68u: goto label_285d68;
            case 0x285D6Cu: goto label_285d6c;
            case 0x285D70u: goto label_285d70;
            case 0x285D74u: goto label_285d74;
            case 0x285D78u: goto label_285d78;
            case 0x285D7Cu: goto label_285d7c;
            case 0x285D80u: goto label_285d80;
            case 0x285D84u: goto label_285d84;
            case 0x285D88u: goto label_285d88;
            case 0x285D8Cu: goto label_285d8c;
            case 0x285D90u: goto label_285d90;
            case 0x285D94u: goto label_285d94;
            case 0x285D98u: goto label_285d98;
            case 0x285D9Cu: goto label_285d9c;
            case 0x285DA0u: goto label_285da0;
            case 0x285DA4u: goto label_285da4;
            case 0x285DA8u: goto label_285da8;
            case 0x285DACu: goto label_285dac;
            case 0x285DB0u: goto label_285db0;
            case 0x285DB4u: goto label_285db4;
            case 0x285DB8u: goto label_285db8;
            case 0x285DBCu: goto label_285dbc;
            case 0x285DC0u: goto label_285dc0;
            case 0x285DC4u: goto label_285dc4;
            case 0x285DC8u: goto label_285dc8;
            case 0x285DCCu: goto label_285dcc;
            case 0x285DD0u: goto label_285dd0;
            case 0x285DD4u: goto label_285dd4;
            case 0x285DD8u: goto label_285dd8;
            case 0x285DDCu: goto label_285ddc;
            case 0x285DE0u: goto label_285de0;
            case 0x285DE4u: goto label_285de4;
            case 0x285DE8u: goto label_285de8;
            case 0x285DECu: goto label_285dec;
            case 0x285DF0u: goto label_285df0;
            case 0x285DF4u: goto label_285df4;
            case 0x285DF8u: goto label_285df8;
            case 0x285DFCu: goto label_285dfc;
            case 0x285E00u: goto label_285e00;
            case 0x285E04u: goto label_285e04;
            case 0x285E08u: goto label_285e08;
            case 0x285E0Cu: goto label_285e0c;
            case 0x285E10u: goto label_285e10;
            case 0x285E14u: goto label_285e14;
            case 0x285E18u: goto label_285e18;
            case 0x285E1Cu: goto label_285e1c;
            case 0x285E20u: goto label_285e20;
            case 0x285E24u: goto label_285e24;
            case 0x285E28u: goto label_285e28;
            case 0x285E2Cu: goto label_285e2c;
            case 0x285E30u: goto label_285e30;
            case 0x285E34u: goto label_285e34;
            case 0x285E38u: goto label_285e38;
            case 0x285E3Cu: goto label_285e3c;
            case 0x285E40u: goto label_285e40;
            case 0x285E44u: goto label_285e44;
            case 0x285E48u: goto label_285e48;
            case 0x285E4Cu: goto label_285e4c;
            case 0x285E50u: goto label_285e50;
            case 0x285E54u: goto label_285e54;
            case 0x285E58u: goto label_285e58;
            case 0x285E5Cu: goto label_285e5c;
            case 0x285E60u: goto label_285e60;
            case 0x285E64u: goto label_285e64;
            case 0x285E68u: goto label_285e68;
            case 0x285E6Cu: goto label_285e6c;
            case 0x285E70u: goto label_285e70;
            case 0x285E74u: goto label_285e74;
            case 0x285E78u: goto label_285e78;
            case 0x285E7Cu: goto label_285e7c;
            case 0x285E80u: goto label_285e80;
            case 0x285E84u: goto label_285e84;
            case 0x285E88u: goto label_285e88;
            case 0x285E8Cu: goto label_285e8c;
            case 0x285E90u: goto label_285e90;
            case 0x285E94u: goto label_285e94;
            case 0x285E98u: goto label_285e98;
            case 0x285E9Cu: goto label_285e9c;
            case 0x285EA0u: goto label_285ea0;
            case 0x285EA4u: goto label_285ea4;
            case 0x285EA8u: goto label_285ea8;
            case 0x285EACu: goto label_285eac;
            case 0x285EB0u: goto label_285eb0;
            case 0x285EB4u: goto label_285eb4;
            case 0x285EB8u: goto label_285eb8;
            case 0x285EBCu: goto label_285ebc;
            case 0x285EC0u: goto label_285ec0;
            case 0x285EC4u: goto label_285ec4;
            case 0x285EC8u: goto label_285ec8;
            case 0x285ECCu: goto label_285ecc;
            case 0x285ED0u: goto label_285ed0;
            case 0x285ED4u: goto label_285ed4;
            case 0x285ED8u: goto label_285ed8;
            case 0x285EDCu: goto label_285edc;
            case 0x285EE0u: goto label_285ee0;
            case 0x285EE4u: goto label_285ee4;
            case 0x285EE8u: goto label_285ee8;
            case 0x285EECu: goto label_285eec;
            case 0x285EF0u: goto label_285ef0;
            case 0x285EF4u: goto label_285ef4;
            case 0x285EF8u: goto label_285ef8;
            case 0x285EFCu: goto label_285efc;
            case 0x285F00u: goto label_285f00;
            case 0x285F04u: goto label_285f04;
            case 0x285F08u: goto label_285f08;
            case 0x285F0Cu: goto label_285f0c;
            case 0x285F10u: goto label_285f10;
            case 0x285F14u: goto label_285f14;
            case 0x285F18u: goto label_285f18;
            case 0x285F1Cu: goto label_285f1c;
            case 0x285F20u: goto label_285f20;
            case 0x285F24u: goto label_285f24;
            case 0x285F28u: goto label_285f28;
            case 0x285F2Cu: goto label_285f2c;
            case 0x285F30u: goto label_285f30;
            case 0x285F34u: goto label_285f34;
            case 0x285F38u: goto label_285f38;
            case 0x285F3Cu: goto label_285f3c;
            case 0x285F40u: goto label_285f40;
            case 0x285F44u: goto label_285f44;
            case 0x285F48u: goto label_285f48;
            case 0x285F4Cu: goto label_285f4c;
            case 0x285F50u: goto label_285f50;
            case 0x285F54u: goto label_285f54;
            case 0x285F58u: goto label_285f58;
            case 0x285F5Cu: goto label_285f5c;
            case 0x285F60u: goto label_285f60;
            case 0x285F64u: goto label_285f64;
            case 0x285F68u: goto label_285f68;
            case 0x285F6Cu: goto label_285f6c;
            case 0x285F70u: goto label_285f70;
            case 0x285F74u: goto label_285f74;
            case 0x285F78u: goto label_285f78;
            case 0x285F7Cu: goto label_285f7c;
            case 0x285F80u: goto label_285f80;
            case 0x285F84u: goto label_285f84;
            case 0x285F88u: goto label_285f88;
            case 0x285F8Cu: goto label_285f8c;
            case 0x285F90u: goto label_285f90;
            case 0x285F94u: goto label_285f94;
            case 0x285F98u: goto label_285f98;
            case 0x285F9Cu: goto label_285f9c;
            case 0x285FA0u: goto label_285fa0;
            case 0x285FA4u: goto label_285fa4;
            case 0x285FA8u: goto label_285fa8;
            case 0x285FACu: goto label_285fac;
            case 0x285FB0u: goto label_285fb0;
            case 0x285FB4u: goto label_285fb4;
            case 0x285FB8u: goto label_285fb8;
            case 0x285FBCu: goto label_285fbc;
            case 0x285FC0u: goto label_285fc0;
            case 0x285FC4u: goto label_285fc4;
            case 0x285FC8u: goto label_285fc8;
            case 0x285FCCu: goto label_285fcc;
            case 0x285FD0u: goto label_285fd0;
            case 0x285FD4u: goto label_285fd4;
            case 0x285FD8u: goto label_285fd8;
            case 0x285FDCu: goto label_285fdc;
            case 0x285FE0u: goto label_285fe0;
            case 0x285FE4u: goto label_285fe4;
            case 0x285FE8u: goto label_285fe8;
            case 0x285FECu: goto label_285fec;
            case 0x285FF0u: goto label_285ff0;
            case 0x285FF4u: goto label_285ff4;
            case 0x285FF8u: goto label_285ff8;
            case 0x285FFCu: goto label_285ffc;
            case 0x286000u: goto label_286000;
            case 0x286004u: goto label_286004;
            case 0x286008u: goto label_286008;
            case 0x28600Cu: goto label_28600c;
            case 0x286010u: goto label_286010;
            case 0x286014u: goto label_286014;
            case 0x286018u: goto label_286018;
            case 0x28601Cu: goto label_28601c;
            case 0x286020u: goto label_286020;
            case 0x286024u: goto label_286024;
            case 0x286028u: goto label_286028;
            case 0x28602Cu: goto label_28602c;
            case 0x286030u: goto label_286030;
            case 0x286034u: goto label_286034;
            case 0x286038u: goto label_286038;
            case 0x28603Cu: goto label_28603c;
            case 0x286040u: goto label_286040;
            case 0x286044u: goto label_286044;
            case 0x286048u: goto label_286048;
            case 0x28604Cu: goto label_28604c;
            case 0x286050u: goto label_286050;
            case 0x286054u: goto label_286054;
            case 0x286058u: goto label_286058;
            case 0x28605Cu: goto label_28605c;
            case 0x286060u: goto label_286060;
            case 0x286064u: goto label_286064;
            case 0x286068u: goto label_286068;
            case 0x28606Cu: goto label_28606c;
            case 0x286070u: goto label_286070;
            case 0x286074u: goto label_286074;
            case 0x286078u: goto label_286078;
            case 0x28607Cu: goto label_28607c;
            case 0x286080u: goto label_286080;
            case 0x286084u: goto label_286084;
            case 0x286088u: goto label_286088;
            case 0x28608Cu: goto label_28608c;
            case 0x286090u: goto label_286090;
            case 0x286094u: goto label_286094;
            case 0x286098u: goto label_286098;
            case 0x28609Cu: goto label_28609c;
            case 0x2860A0u: goto label_2860a0;
            case 0x2860A4u: goto label_2860a4;
            case 0x2860A8u: goto label_2860a8;
            case 0x2860ACu: goto label_2860ac;
            case 0x2860B0u: goto label_2860b0;
            case 0x2860B4u: goto label_2860b4;
            case 0x2860B8u: goto label_2860b8;
            case 0x2860BCu: goto label_2860bc;
            case 0x2860C0u: goto label_2860c0;
            case 0x2860C4u: goto label_2860c4;
            case 0x2860C8u: goto label_2860c8;
            case 0x2860CCu: goto label_2860cc;
            case 0x2860D0u: goto label_2860d0;
            case 0x2860D4u: goto label_2860d4;
            case 0x2860D8u: goto label_2860d8;
            case 0x2860DCu: goto label_2860dc;
            case 0x2860E0u: goto label_2860e0;
            case 0x2860E4u: goto label_2860e4;
            case 0x2860E8u: goto label_2860e8;
            case 0x2860ECu: goto label_2860ec;
            case 0x2860F0u: goto label_2860f0;
            case 0x2860F4u: goto label_2860f4;
            case 0x2860F8u: goto label_2860f8;
            case 0x2860FCu: goto label_2860fc;
            case 0x286100u: goto label_286100;
            case 0x286104u: goto label_286104;
            case 0x286108u: goto label_286108;
            case 0x28610Cu: goto label_28610c;
            case 0x286110u: goto label_286110;
            case 0x286114u: goto label_286114;
            case 0x286118u: goto label_286118;
            case 0x28611Cu: goto label_28611c;
            case 0x286120u: goto label_286120;
            case 0x286124u: goto label_286124;
            case 0x286128u: goto label_286128;
            case 0x28612Cu: goto label_28612c;
            case 0x286130u: goto label_286130;
            case 0x286134u: goto label_286134;
            case 0x286138u: goto label_286138;
            case 0x28613Cu: goto label_28613c;
            case 0x286140u: goto label_286140;
            case 0x286144u: goto label_286144;
            case 0x286148u: goto label_286148;
            case 0x28614Cu: goto label_28614c;
            case 0x286150u: goto label_286150;
            case 0x286154u: goto label_286154;
            case 0x286158u: goto label_286158;
            case 0x28615Cu: goto label_28615c;
            case 0x286160u: goto label_286160;
            case 0x286164u: goto label_286164;
            case 0x286168u: goto label_286168;
            case 0x28616Cu: goto label_28616c;
            case 0x286170u: goto label_286170;
            case 0x286174u: goto label_286174;
            case 0x286178u: goto label_286178;
            case 0x28617Cu: goto label_28617c;
            case 0x286180u: goto label_286180;
            case 0x286184u: goto label_286184;
            case 0x286188u: goto label_286188;
            case 0x28618Cu: goto label_28618c;
            case 0x286190u: goto label_286190;
            case 0x286194u: goto label_286194;
            case 0x286198u: goto label_286198;
            case 0x28619Cu: goto label_28619c;
            case 0x2861A0u: goto label_2861a0;
            case 0x2861A4u: goto label_2861a4;
            case 0x2861A8u: goto label_2861a8;
            case 0x2861ACu: goto label_2861ac;
            case 0x2861B0u: goto label_2861b0;
            case 0x2861B4u: goto label_2861b4;
            case 0x2861B8u: goto label_2861b8;
            case 0x2861BCu: goto label_2861bc;
            case 0x2861C0u: goto label_2861c0;
            case 0x2861C4u: goto label_2861c4;
            case 0x2861C8u: goto label_2861c8;
            case 0x2861CCu: goto label_2861cc;
            case 0x2861D0u: goto label_2861d0;
            case 0x2861D4u: goto label_2861d4;
            case 0x2861D8u: goto label_2861d8;
            case 0x2861DCu: goto label_2861dc;
            case 0x2861E0u: goto label_2861e0;
            case 0x2861E4u: goto label_2861e4;
            case 0x2861E8u: goto label_2861e8;
            case 0x2861ECu: goto label_2861ec;
            case 0x2861F0u: goto label_2861f0;
            case 0x2861F4u: goto label_2861f4;
            case 0x2861F8u: goto label_2861f8;
            case 0x2861FCu: goto label_2861fc;
            case 0x286200u: goto label_286200;
            case 0x286204u: goto label_286204;
            case 0x286208u: goto label_286208;
            case 0x28620Cu: goto label_28620c;
            case 0x286210u: goto label_286210;
            case 0x286214u: goto label_286214;
            case 0x286218u: goto label_286218;
            case 0x28621Cu: goto label_28621c;
            case 0x286220u: goto label_286220;
            case 0x286224u: goto label_286224;
            case 0x286228u: goto label_286228;
            case 0x28622Cu: goto label_28622c;
            case 0x286230u: goto label_286230;
            case 0x286234u: goto label_286234;
            case 0x286238u: goto label_286238;
            case 0x28623Cu: goto label_28623c;
            case 0x286240u: goto label_286240;
            case 0x286244u: goto label_286244;
            case 0x286248u: goto label_286248;
            case 0x28624Cu: goto label_28624c;
            case 0x286250u: goto label_286250;
            case 0x286254u: goto label_286254;
            case 0x286258u: goto label_286258;
            case 0x28625Cu: goto label_28625c;
            case 0x286260u: goto label_286260;
            case 0x286264u: goto label_286264;
            case 0x286268u: goto label_286268;
            case 0x28626Cu: goto label_28626c;
            case 0x286270u: goto label_286270;
            case 0x286274u: goto label_286274;
            case 0x286278u: goto label_286278;
            case 0x28627Cu: goto label_28627c;
            case 0x286280u: goto label_286280;
            case 0x286284u: goto label_286284;
            case 0x286288u: goto label_286288;
            case 0x28628Cu: goto label_28628c;
            case 0x286290u: goto label_286290;
            case 0x286294u: goto label_286294;
            case 0x286298u: goto label_286298;
            case 0x28629Cu: goto label_28629c;
            case 0x2862A0u: goto label_2862a0;
            case 0x2862A4u: goto label_2862a4;
            case 0x2862A8u: goto label_2862a8;
            case 0x2862ACu: goto label_2862ac;
            case 0x2862B0u: goto label_2862b0;
            case 0x2862B4u: goto label_2862b4;
            case 0x2862B8u: goto label_2862b8;
            case 0x2862BCu: goto label_2862bc;
            case 0x2862C0u: goto label_2862c0;
            case 0x2862C4u: goto label_2862c4;
            case 0x2862C8u: goto label_2862c8;
            case 0x2862CCu: goto label_2862cc;
            case 0x2862D0u: goto label_2862d0;
            case 0x2862D4u: goto label_2862d4;
            case 0x2862D8u: goto label_2862d8;
            case 0x2862DCu: goto label_2862dc;
            case 0x2862E0u: goto label_2862e0;
            case 0x2862E4u: goto label_2862e4;
            case 0x2862E8u: goto label_2862e8;
            case 0x2862ECu: goto label_2862ec;
            case 0x2862F0u: goto label_2862f0;
            case 0x2862F4u: goto label_2862f4;
            case 0x2862F8u: goto label_2862f8;
            case 0x2862FCu: goto label_2862fc;
            case 0x286300u: goto label_286300;
            case 0x286304u: goto label_286304;
            case 0x286308u: goto label_286308;
            case 0x28630Cu: goto label_28630c;
            case 0x286310u: goto label_286310;
            case 0x286314u: goto label_286314;
            case 0x286318u: goto label_286318;
            case 0x28631Cu: goto label_28631c;
            case 0x286320u: goto label_286320;
            case 0x286324u: goto label_286324;
            case 0x286328u: goto label_286328;
            case 0x28632Cu: goto label_28632c;
            case 0x286330u: goto label_286330;
            case 0x286334u: goto label_286334;
            case 0x286338u: goto label_286338;
            case 0x28633Cu: goto label_28633c;
            case 0x286340u: goto label_286340;
            case 0x286344u: goto label_286344;
            case 0x286348u: goto label_286348;
            case 0x28634Cu: goto label_28634c;
            case 0x286350u: goto label_286350;
            case 0x286354u: goto label_286354;
            case 0x286358u: goto label_286358;
            case 0x28635Cu: goto label_28635c;
            case 0x286360u: goto label_286360;
            case 0x286364u: goto label_286364;
            case 0x286368u: goto label_286368;
            case 0x28636Cu: goto label_28636c;
            case 0x286370u: goto label_286370;
            case 0x286374u: goto label_286374;
            case 0x286378u: goto label_286378;
            case 0x28637Cu: goto label_28637c;
            case 0x286380u: goto label_286380;
            case 0x286384u: goto label_286384;
            case 0x286388u: goto label_286388;
            case 0x28638Cu: goto label_28638c;
            case 0x286390u: goto label_286390;
            case 0x286394u: goto label_286394;
            case 0x286398u: goto label_286398;
            case 0x28639Cu: goto label_28639c;
            case 0x2863A0u: goto label_2863a0;
            case 0x2863A4u: goto label_2863a4;
            case 0x2863A8u: goto label_2863a8;
            case 0x2863ACu: goto label_2863ac;
            case 0x2863B0u: goto label_2863b0;
            case 0x2863B4u: goto label_2863b4;
            case 0x2863B8u: goto label_2863b8;
            case 0x2863BCu: goto label_2863bc;
            case 0x2863C0u: goto label_2863c0;
            case 0x2863C4u: goto label_2863c4;
            case 0x2863C8u: goto label_2863c8;
            case 0x2863CCu: goto label_2863cc;
            case 0x2863D0u: goto label_2863d0;
            case 0x2863D4u: goto label_2863d4;
            case 0x2863D8u: goto label_2863d8;
            case 0x2863DCu: goto label_2863dc;
            case 0x2863E0u: goto label_2863e0;
            case 0x2863E4u: goto label_2863e4;
            case 0x2863E8u: goto label_2863e8;
            case 0x2863ECu: goto label_2863ec;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28627Cu; }
            if (ctx->pc != 0x28627Cu) { return; }
        }
        }
    }
    ctx->pc = 0x28627Cu;
label_28627c:
    // 0x28627c: 0xafc205e8  sw          $v0, 0x5E8($fp)
    ctx->pc = 0x28627cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1512), GPR_U32(ctx, 2));
label_286280:
    // 0x286280: 0x27c202f0  addiu       $v0, $fp, 0x2F0
    ctx->pc = 0x286280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 752));
label_286284:
    // 0x286284: 0x8fc305e8  lw          $v1, 0x5E8($fp)
    ctx->pc = 0x286284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1512)));
label_286288:
    // 0x286288: 0xafc205ec  sw          $v0, 0x5EC($fp)
    ctx->pc = 0x286288u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1516), GPR_U32(ctx, 2));
label_28628c:
    // 0x28628c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x28628cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_286290:
    // 0x286290: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_286294:
    if (ctx->pc == 0x286294u) {
        ctx->pc = 0x286294u;
            // 0x286294: 0xafde05e0  sw          $fp, 0x5E0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1504), GPR_U32(ctx, 30));
        ctx->pc = 0x286298u;
        goto label_286298;
    }
    ctx->pc = 0x286290u;
    {
        const bool branch_taken_0x286290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x286294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286290u;
            // 0x286294: 0xafde05e0  sw          $fp, 0x5E0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1504), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286290) {
            ctx->pc = 0x2862A0u;
            goto label_2862a0;
        }
    }
    ctx->pc = 0x286298u;
label_286298:
    // 0x286298: 0xc0a1524  jal         func_285490
label_28629c:
    if (ctx->pc == 0x28629Cu) {
        ctx->pc = 0x2862A0u;
        goto label_2862a0;
    }
    ctx->pc = 0x286298u;
    SET_GPR_U32(ctx, 31, 0x2862A0u);
    ctx->pc = 0x285490u;
    if (runtime->hasFunction(0x285490u)) {
        auto targetFn = runtime->lookupFunction(0x285490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2862A0u; }
        if (ctx->pc != 0x2862A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_285490_0x2854b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2862A0u; }
        if (ctx->pc != 0x2862A0u) { return; }
    }
    ctx->pc = 0x2862A0u;
label_2862a0:
    // 0x2862a0: 0x8fc605e4  lw          $a2, 0x5E4($fp)
    ctx->pc = 0x2862a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1508)));
label_2862a4:
    // 0x2862a4: 0x27c705e0  addiu       $a3, $fp, 0x5E0
    ctx->pc = 0x2862a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 1504));
label_2862a8:
    // 0x2862a8: 0x8fc505e8  lw          $a1, 0x5E8($fp)
    ctx->pc = 0x2862a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1512)));
label_2862ac:
    // 0x2862ac: 0xaca6000c  sw          $a2, 0xC($a1)
    ctx->pc = 0x2862acu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 6));
label_2862b0:
    // 0x2862b0: 0xafc705f0  sw          $a3, 0x5F0($fp)
    ctx->pc = 0x2862b0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1520), GPR_U32(ctx, 7));
label_2862b4:
    // 0x2862b4: 0x3c080028  lui         $t0, 0x28
    ctx->pc = 0x2862b4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)40 << 16));
label_2862b8:
    // 0x2862b8: 0x8fc505e0  lw          $a1, 0x5E0($fp)
    ctx->pc = 0x2862b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1504)));
label_2862bc:
    // 0x2862bc: 0xc0a1c0a  jal         func_287028
label_2862c0:
    if (ctx->pc == 0x2862C0u) {
        ctx->pc = 0x2862C0u;
            // 0x2862c0: 0x250462b4  addiu       $a0, $t0, 0x62B4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 25268));
        ctx->pc = 0x2862C4u;
        goto label_2862c4;
    }
    ctx->pc = 0x2862BCu;
    SET_GPR_U32(ctx, 31, 0x2862C4u);
    ctx->pc = 0x2862C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2862BCu;
            // 0x2862c0: 0x250462b4  addiu       $a0, $t0, 0x62B4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 25268));
        ctx->in_delay_slot = false;
    ctx->pc = 0x287028u;
    if (runtime->hasFunction(0x287028u)) {
        auto targetFn = runtime->lookupFunction(0x287028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2862C4u; }
        if (ctx->pc != 0x2862C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00287028_0x287028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2862C4u; }
        if (ctx->pc != 0x2862C4u) { return; }
    }
    ctx->pc = 0x2862C4u;
label_2862c4:
    // 0x2862c4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2862c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2862c8:
    // 0x2862c8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_2862cc:
    if (ctx->pc == 0x2862CCu) {
        ctx->pc = 0x2862CCu;
            // 0x2862cc: 0xafc205e0  sw          $v0, 0x5E0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1504), GPR_U32(ctx, 2));
        ctx->pc = 0x2862D0u;
        goto label_2862d0;
    }
    ctx->pc = 0x2862C8u;
    {
        const bool branch_taken_0x2862c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2862CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2862C8u;
            // 0x2862cc: 0xafc205e0  sw          $v0, 0x5E0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 1504), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2862c8) {
            ctx->pc = 0x2862DCu;
            goto label_2862dc;
        }
    }
    ctx->pc = 0x2862D0u;
label_2862d0:
    // 0x2862d0: 0xc0a1524  jal         func_285490
label_2862d4:
    if (ctx->pc == 0x2862D4u) {
        ctx->pc = 0x2862D8u;
        goto label_2862d8;
    }
    ctx->pc = 0x2862D0u;
    SET_GPR_U32(ctx, 31, 0x2862D8u);
    ctx->pc = 0x285490u;
    if (runtime->hasFunction(0x285490u)) {
        auto targetFn = runtime->lookupFunction(0x285490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2862D8u; }
        if (ctx->pc != 0x2862D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_285490_0x2854b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2862D8u; }
        if (ctx->pc != 0x2862D8u) { return; }
    }
    ctx->pc = 0x2862D8u;
label_2862d8:
    // 0x2862d8: 0x8fc305e0  lw          $v1, 0x5E0($fp)
    ctx->pc = 0x2862d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1504)));
label_2862dc:
    // 0x2862dc: 0x27c20700  addiu       $v0, $fp, 0x700
    ctx->pc = 0x2862dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1792));
label_2862e0:
    // 0x2862e0: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2862e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2862e4:
    // 0x2862e4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2862e4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2862e8:
    // 0x2862e8: 0x8fc205ec  lw          $v0, 0x5EC($fp)
    ctx->pc = 0x2862e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1516)));
label_2862ec:
    // 0x2862ec: 0x248302e0  addiu       $v1, $a0, 0x2E0
    ctx->pc = 0x2862ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 736));
label_2862f0:
    // 0x2862f0: 0xdc850000  ld          $a1, 0x0($a0)
    ctx->pc = 0x2862f0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_2862f4:
    // 0x2862f4: 0xdc860008  ld          $a2, 0x8($a0)
    ctx->pc = 0x2862f4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 8)));
label_2862f8:
    // 0x2862f8: 0xdc870010  ld          $a3, 0x10($a0)
    ctx->pc = 0x2862f8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 4), 16)));
label_2862fc:
    // 0x2862fc: 0xdc880018  ld          $t0, 0x18($a0)
    ctx->pc = 0x2862fcu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 24)));
label_286300:
    // 0x286300: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x286300u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
label_286304:
    // 0x286304: 0xfc460008  sd          $a2, 0x8($v0)
    ctx->pc = 0x286304u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 6));
label_286308:
    // 0x286308: 0xfc470010  sd          $a3, 0x10($v0)
    ctx->pc = 0x286308u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 7));
label_28630c:
    // 0x28630c: 0xfc480018  sd          $t0, 0x18($v0)
    ctx->pc = 0x28630cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 24), GPR_U64(ctx, 8));
label_286310:
    // 0x286310: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x286310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_286314:
    // 0x286314: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x286314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_286318:
    // 0x286318: 0x0  nop
    ctx->pc = 0x286318u;
    // NOP
label_28631c:
    // 0x28631c: 0x1483fff4  bne         $a0, $v1, . + 4 + (-0xC << 2)
label_286320:
    if (ctx->pc == 0x286320u) {
        ctx->pc = 0x286324u;
        goto label_286324;
    }
    ctx->pc = 0x28631Cu;
    {
        const bool branch_taken_0x28631c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x28631c) {
            ctx->pc = 0x2862F0u;
            runtime->cooperativeGuestYield();
            goto label_2862f0;
        }
    }
    ctx->pc = 0x286324u;
label_286324:
    // 0x286324: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x286324u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_286328:
    // 0x286328: 0xdc850008  ld          $a1, 0x8($a0)
    ctx->pc = 0x286328u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 4), 8)));
label_28632c:
    // 0x28632c: 0xfc430000  sd          $v1, 0x0($v0)
    ctx->pc = 0x28632cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 3));
label_286330:
    // 0x286330: 0xfc450008  sd          $a1, 0x8($v0)
    ctx->pc = 0x286330u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
label_286334:
    // 0x286334: 0x27c20690  addiu       $v0, $fp, 0x690
    ctx->pc = 0x286334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 1680));
label_286338:
    // 0x286338: 0x8fc405e8  lw          $a0, 0x5E8($fp)
    ctx->pc = 0x286338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1512)));
label_28633c:
    // 0x28633c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x28633cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_286340:
    // 0x286340: 0x8fc605ec  lw          $a2, 0x5EC($fp)
    ctx->pc = 0x286340u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1516)));
label_286344:
    // 0x286344: 0x8fc705f0  lw          $a3, 0x5F0($fp)
    ctx->pc = 0x286344u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1520)));
label_286348:
    // 0x286348: 0xc0a173e  jal         func_285CF8
label_28634c:
    if (ctx->pc == 0x28634Cu) {
        ctx->pc = 0x28634Cu;
            // 0x28634c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->pc = 0x286350u;
        goto label_286350;
    }
    ctx->pc = 0x286348u;
    SET_GPR_U32(ctx, 31, 0x286350u);
    ctx->pc = 0x28634Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x286348u;
            // 0x28634c: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285CF8u;
    runtime->cooperativeGuestYield();
    goto label_285cf8;
    ctx->pc = 0x286350u;
label_286350:
    // 0x286350: 0x8fc605e0  lw          $a2, 0x5E0($fp)
    ctx->pc = 0x286350u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1504)));
label_286354:
    // 0x286354: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x286354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
label_286358:
    // 0x286358: 0x8fc805ec  lw          $t0, 0x5EC($fp)
    ctx->pc = 0x286358u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1516)));
label_28635c:
    // 0x28635c: 0x24656380  addiu       $a1, $v1, 0x6380
    ctx->pc = 0x28635cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 25472));
label_286360:
    // 0x286360: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x286360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_286364:
    // 0x286364: 0x27c40690  addiu       $a0, $fp, 0x690
    ctx->pc = 0x286364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 1680));
label_286368:
    // 0x286368: 0x8d070000  lw          $a3, 0x0($t0)
    ctx->pc = 0x286368u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_28636c:
    // 0x28636c: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x28636cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_286370:
    // 0x286370: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x286370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_286374:
    // 0x286374: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x286374u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_286378:
    // 0x286378: 0x10000003  b           . + 4 + (0x3 << 2)
label_28637c:
    if (ctx->pc == 0x28637Cu) {
        ctx->pc = 0x28637Cu;
            // 0x28637c: 0x8fc205e8  lw          $v0, 0x5E8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1512)));
        ctx->pc = 0x286380u;
        goto label_286380;
    }
    ctx->pc = 0x286378u;
    {
        const bool branch_taken_0x286378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28637Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286378u;
            // 0x28637c: 0x8fc205e8  lw          $v0, 0x5E8($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x286378) {
            ctx->pc = 0x286388u;
            goto label_286388;
        }
    }
    ctx->pc = 0x286380u;
label_286380:
    // 0x286380: 0x800008  jr          $a0
label_286384:
    if (ctx->pc == 0x286384u) {
        ctx->pc = 0x286384u;
            // 0x286384: 0x3a3e821  addu        $sp, $sp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
        ctx->pc = 0x286388u;
        goto label_286388;
    }
    ctx->pc = 0x286380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = 0x286384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x286380u;
            // 0x286384: 0x3a3e821  addu        $sp, $sp, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x285CF8u: goto label_285cf8;
            case 0x285CFCu: goto label_285cfc;
            case 0x285D00u: goto label_285d00;
            case 0x285D04u: goto label_285d04;
            case 0x285D08u: goto label_285d08;
            case 0x285D0Cu: goto label_285d0c;
            case 0x285D10u: goto label_285d10;
            case 0x285D14u: goto label_285d14;
            case 0x285D18u: goto label_285d18;
            case 0x285D1Cu: goto label_285d1c;
            case 0x285D20u: goto label_285d20;
            case 0x285D24u: goto label_285d24;
            case 0x285D28u: goto label_285d28;
            case 0x285D2Cu: goto label_285d2c;
            case 0x285D30u: goto label_285d30;
            case 0x285D34u: goto label_285d34;
            case 0x285D38u: goto label_285d38;
            case 0x285D3Cu: goto label_285d3c;
            case 0x285D40u: goto label_285d40;
            case 0x285D44u: goto label_285d44;
            case 0x285D48u: goto label_285d48;
            case 0x285D4Cu: goto label_285d4c;
            case 0x285D50u: goto label_285d50;
            case 0x285D54u: goto label_285d54;
            case 0x285D58u: goto label_285d58;
            case 0x285D5Cu: goto label_285d5c;
            case 0x285D60u: goto label_285d60;
            case 0x285D64u: goto label_285d64;
            case 0x285D68u: goto label_285d68;
            case 0x285D6Cu: goto label_285d6c;
            case 0x285D70u: goto label_285d70;
            case 0x285D74u: goto label_285d74;
            case 0x285D78u: goto label_285d78;
            case 0x285D7Cu: goto label_285d7c;
            case 0x285D80u: goto label_285d80;
            case 0x285D84u: goto label_285d84;
            case 0x285D88u: goto label_285d88;
            case 0x285D8Cu: goto label_285d8c;
            case 0x285D90u: goto label_285d90;
            case 0x285D94u: goto label_285d94;
            case 0x285D98u: goto label_285d98;
            case 0x285D9Cu: goto label_285d9c;
            case 0x285DA0u: goto label_285da0;
            case 0x285DA4u: goto label_285da4;
            case 0x285DA8u: goto label_285da8;
            case 0x285DACu: goto label_285dac;
            case 0x285DB0u: goto label_285db0;
            case 0x285DB4u: goto label_285db4;
            case 0x285DB8u: goto label_285db8;
            case 0x285DBCu: goto label_285dbc;
            case 0x285DC0u: goto label_285dc0;
            case 0x285DC4u: goto label_285dc4;
            case 0x285DC8u: goto label_285dc8;
            case 0x285DCCu: goto label_285dcc;
            case 0x285DD0u: goto label_285dd0;
            case 0x285DD4u: goto label_285dd4;
            case 0x285DD8u: goto label_285dd8;
            case 0x285DDCu: goto label_285ddc;
            case 0x285DE0u: goto label_285de0;
            case 0x285DE4u: goto label_285de4;
            case 0x285DE8u: goto label_285de8;
            case 0x285DECu: goto label_285dec;
            case 0x285DF0u: goto label_285df0;
            case 0x285DF4u: goto label_285df4;
            case 0x285DF8u: goto label_285df8;
            case 0x285DFCu: goto label_285dfc;
            case 0x285E00u: goto label_285e00;
            case 0x285E04u: goto label_285e04;
            case 0x285E08u: goto label_285e08;
            case 0x285E0Cu: goto label_285e0c;
            case 0x285E10u: goto label_285e10;
            case 0x285E14u: goto label_285e14;
            case 0x285E18u: goto label_285e18;
            case 0x285E1Cu: goto label_285e1c;
            case 0x285E20u: goto label_285e20;
            case 0x285E24u: goto label_285e24;
            case 0x285E28u: goto label_285e28;
            case 0x285E2Cu: goto label_285e2c;
            case 0x285E30u: goto label_285e30;
            case 0x285E34u: goto label_285e34;
            case 0x285E38u: goto label_285e38;
            case 0x285E3Cu: goto label_285e3c;
            case 0x285E40u: goto label_285e40;
            case 0x285E44u: goto label_285e44;
            case 0x285E48u: goto label_285e48;
            case 0x285E4Cu: goto label_285e4c;
            case 0x285E50u: goto label_285e50;
            case 0x285E54u: goto label_285e54;
            case 0x285E58u: goto label_285e58;
            case 0x285E5Cu: goto label_285e5c;
            case 0x285E60u: goto label_285e60;
            case 0x285E64u: goto label_285e64;
            case 0x285E68u: goto label_285e68;
            case 0x285E6Cu: goto label_285e6c;
            case 0x285E70u: goto label_285e70;
            case 0x285E74u: goto label_285e74;
            case 0x285E78u: goto label_285e78;
            case 0x285E7Cu: goto label_285e7c;
            case 0x285E80u: goto label_285e80;
            case 0x285E84u: goto label_285e84;
            case 0x285E88u: goto label_285e88;
            case 0x285E8Cu: goto label_285e8c;
            case 0x285E90u: goto label_285e90;
            case 0x285E94u: goto label_285e94;
            case 0x285E98u: goto label_285e98;
            case 0x285E9Cu: goto label_285e9c;
            case 0x285EA0u: goto label_285ea0;
            case 0x285EA4u: goto label_285ea4;
            case 0x285EA8u: goto label_285ea8;
            case 0x285EACu: goto label_285eac;
            case 0x285EB0u: goto label_285eb0;
            case 0x285EB4u: goto label_285eb4;
            case 0x285EB8u: goto label_285eb8;
            case 0x285EBCu: goto label_285ebc;
            case 0x285EC0u: goto label_285ec0;
            case 0x285EC4u: goto label_285ec4;
            case 0x285EC8u: goto label_285ec8;
            case 0x285ECCu: goto label_285ecc;
            case 0x285ED0u: goto label_285ed0;
            case 0x285ED4u: goto label_285ed4;
            case 0x285ED8u: goto label_285ed8;
            case 0x285EDCu: goto label_285edc;
            case 0x285EE0u: goto label_285ee0;
            case 0x285EE4u: goto label_285ee4;
            case 0x285EE8u: goto label_285ee8;
            case 0x285EECu: goto label_285eec;
            case 0x285EF0u: goto label_285ef0;
            case 0x285EF4u: goto label_285ef4;
            case 0x285EF8u: goto label_285ef8;
            case 0x285EFCu: goto label_285efc;
            case 0x285F00u: goto label_285f00;
            case 0x285F04u: goto label_285f04;
            case 0x285F08u: goto label_285f08;
            case 0x285F0Cu: goto label_285f0c;
            case 0x285F10u: goto label_285f10;
            case 0x285F14u: goto label_285f14;
            case 0x285F18u: goto label_285f18;
            case 0x285F1Cu: goto label_285f1c;
            case 0x285F20u: goto label_285f20;
            case 0x285F24u: goto label_285f24;
            case 0x285F28u: goto label_285f28;
            case 0x285F2Cu: goto label_285f2c;
            case 0x285F30u: goto label_285f30;
            case 0x285F34u: goto label_285f34;
            case 0x285F38u: goto label_285f38;
            case 0x285F3Cu: goto label_285f3c;
            case 0x285F40u: goto label_285f40;
            case 0x285F44u: goto label_285f44;
            case 0x285F48u: goto label_285f48;
            case 0x285F4Cu: goto label_285f4c;
            case 0x285F50u: goto label_285f50;
            case 0x285F54u: goto label_285f54;
            case 0x285F58u: goto label_285f58;
            case 0x285F5Cu: goto label_285f5c;
            case 0x285F60u: goto label_285f60;
            case 0x285F64u: goto label_285f64;
            case 0x285F68u: goto label_285f68;
            case 0x285F6Cu: goto label_285f6c;
            case 0x285F70u: goto label_285f70;
            case 0x285F74u: goto label_285f74;
            case 0x285F78u: goto label_285f78;
            case 0x285F7Cu: goto label_285f7c;
            case 0x285F80u: goto label_285f80;
            case 0x285F84u: goto label_285f84;
            case 0x285F88u: goto label_285f88;
            case 0x285F8Cu: goto label_285f8c;
            case 0x285F90u: goto label_285f90;
            case 0x285F94u: goto label_285f94;
            case 0x285F98u: goto label_285f98;
            case 0x285F9Cu: goto label_285f9c;
            case 0x285FA0u: goto label_285fa0;
            case 0x285FA4u: goto label_285fa4;
            case 0x285FA8u: goto label_285fa8;
            case 0x285FACu: goto label_285fac;
            case 0x285FB0u: goto label_285fb0;
            case 0x285FB4u: goto label_285fb4;
            case 0x285FB8u: goto label_285fb8;
            case 0x285FBCu: goto label_285fbc;
            case 0x285FC0u: goto label_285fc0;
            case 0x285FC4u: goto label_285fc4;
            case 0x285FC8u: goto label_285fc8;
            case 0x285FCCu: goto label_285fcc;
            case 0x285FD0u: goto label_285fd0;
            case 0x285FD4u: goto label_285fd4;
            case 0x285FD8u: goto label_285fd8;
            case 0x285FDCu: goto label_285fdc;
            case 0x285FE0u: goto label_285fe0;
            case 0x285FE4u: goto label_285fe4;
            case 0x285FE8u: goto label_285fe8;
            case 0x285FECu: goto label_285fec;
            case 0x285FF0u: goto label_285ff0;
            case 0x285FF4u: goto label_285ff4;
            case 0x285FF8u: goto label_285ff8;
            case 0x285FFCu: goto label_285ffc;
            case 0x286000u: goto label_286000;
            case 0x286004u: goto label_286004;
            case 0x286008u: goto label_286008;
            case 0x28600Cu: goto label_28600c;
            case 0x286010u: goto label_286010;
            case 0x286014u: goto label_286014;
            case 0x286018u: goto label_286018;
            case 0x28601Cu: goto label_28601c;
            case 0x286020u: goto label_286020;
            case 0x286024u: goto label_286024;
            case 0x286028u: goto label_286028;
            case 0x28602Cu: goto label_28602c;
            case 0x286030u: goto label_286030;
            case 0x286034u: goto label_286034;
            case 0x286038u: goto label_286038;
            case 0x28603Cu: goto label_28603c;
            case 0x286040u: goto label_286040;
            case 0x286044u: goto label_286044;
            case 0x286048u: goto label_286048;
            case 0x28604Cu: goto label_28604c;
            case 0x286050u: goto label_286050;
            case 0x286054u: goto label_286054;
            case 0x286058u: goto label_286058;
            case 0x28605Cu: goto label_28605c;
            case 0x286060u: goto label_286060;
            case 0x286064u: goto label_286064;
            case 0x286068u: goto label_286068;
            case 0x28606Cu: goto label_28606c;
            case 0x286070u: goto label_286070;
            case 0x286074u: goto label_286074;
            case 0x286078u: goto label_286078;
            case 0x28607Cu: goto label_28607c;
            case 0x286080u: goto label_286080;
            case 0x286084u: goto label_286084;
            case 0x286088u: goto label_286088;
            case 0x28608Cu: goto label_28608c;
            case 0x286090u: goto label_286090;
            case 0x286094u: goto label_286094;
            case 0x286098u: goto label_286098;
            case 0x28609Cu: goto label_28609c;
            case 0x2860A0u: goto label_2860a0;
            case 0x2860A4u: goto label_2860a4;
            case 0x2860A8u: goto label_2860a8;
            case 0x2860ACu: goto label_2860ac;
            case 0x2860B0u: goto label_2860b0;
            case 0x2860B4u: goto label_2860b4;
            case 0x2860B8u: goto label_2860b8;
            case 0x2860BCu: goto label_2860bc;
            case 0x2860C0u: goto label_2860c0;
            case 0x2860C4u: goto label_2860c4;
            case 0x2860C8u: goto label_2860c8;
            case 0x2860CCu: goto label_2860cc;
            case 0x2860D0u: goto label_2860d0;
            case 0x2860D4u: goto label_2860d4;
            case 0x2860D8u: goto label_2860d8;
            case 0x2860DCu: goto label_2860dc;
            case 0x2860E0u: goto label_2860e0;
            case 0x2860E4u: goto label_2860e4;
            case 0x2860E8u: goto label_2860e8;
            case 0x2860ECu: goto label_2860ec;
            case 0x2860F0u: goto label_2860f0;
            case 0x2860F4u: goto label_2860f4;
            case 0x2860F8u: goto label_2860f8;
            case 0x2860FCu: goto label_2860fc;
            case 0x286100u: goto label_286100;
            case 0x286104u: goto label_286104;
            case 0x286108u: goto label_286108;
            case 0x28610Cu: goto label_28610c;
            case 0x286110u: goto label_286110;
            case 0x286114u: goto label_286114;
            case 0x286118u: goto label_286118;
            case 0x28611Cu: goto label_28611c;
            case 0x286120u: goto label_286120;
            case 0x286124u: goto label_286124;
            case 0x286128u: goto label_286128;
            case 0x28612Cu: goto label_28612c;
            case 0x286130u: goto label_286130;
            case 0x286134u: goto label_286134;
            case 0x286138u: goto label_286138;
            case 0x28613Cu: goto label_28613c;
            case 0x286140u: goto label_286140;
            case 0x286144u: goto label_286144;
            case 0x286148u: goto label_286148;
            case 0x28614Cu: goto label_28614c;
            case 0x286150u: goto label_286150;
            case 0x286154u: goto label_286154;
            case 0x286158u: goto label_286158;
            case 0x28615Cu: goto label_28615c;
            case 0x286160u: goto label_286160;
            case 0x286164u: goto label_286164;
            case 0x286168u: goto label_286168;
            case 0x28616Cu: goto label_28616c;
            case 0x286170u: goto label_286170;
            case 0x286174u: goto label_286174;
            case 0x286178u: goto label_286178;
            case 0x28617Cu: goto label_28617c;
            case 0x286180u: goto label_286180;
            case 0x286184u: goto label_286184;
            case 0x286188u: goto label_286188;
            case 0x28618Cu: goto label_28618c;
            case 0x286190u: goto label_286190;
            case 0x286194u: goto label_286194;
            case 0x286198u: goto label_286198;
            case 0x28619Cu: goto label_28619c;
            case 0x2861A0u: goto label_2861a0;
            case 0x2861A4u: goto label_2861a4;
            case 0x2861A8u: goto label_2861a8;
            case 0x2861ACu: goto label_2861ac;
            case 0x2861B0u: goto label_2861b0;
            case 0x2861B4u: goto label_2861b4;
            case 0x2861B8u: goto label_2861b8;
            case 0x2861BCu: goto label_2861bc;
            case 0x2861C0u: goto label_2861c0;
            case 0x2861C4u: goto label_2861c4;
            case 0x2861C8u: goto label_2861c8;
            case 0x2861CCu: goto label_2861cc;
            case 0x2861D0u: goto label_2861d0;
            case 0x2861D4u: goto label_2861d4;
            case 0x2861D8u: goto label_2861d8;
            case 0x2861DCu: goto label_2861dc;
            case 0x2861E0u: goto label_2861e0;
            case 0x2861E4u: goto label_2861e4;
            case 0x2861E8u: goto label_2861e8;
            case 0x2861ECu: goto label_2861ec;
            case 0x2861F0u: goto label_2861f0;
            case 0x2861F4u: goto label_2861f4;
            case 0x2861F8u: goto label_2861f8;
            case 0x2861FCu: goto label_2861fc;
            case 0x286200u: goto label_286200;
            case 0x286204u: goto label_286204;
            case 0x286208u: goto label_286208;
            case 0x28620Cu: goto label_28620c;
            case 0x286210u: goto label_286210;
            case 0x286214u: goto label_286214;
            case 0x286218u: goto label_286218;
            case 0x28621Cu: goto label_28621c;
            case 0x286220u: goto label_286220;
            case 0x286224u: goto label_286224;
            case 0x286228u: goto label_286228;
            case 0x28622Cu: goto label_28622c;
            case 0x286230u: goto label_286230;
            case 0x286234u: goto label_286234;
            case 0x286238u: goto label_286238;
            case 0x28623Cu: goto label_28623c;
            case 0x286240u: goto label_286240;
            case 0x286244u: goto label_286244;
            case 0x286248u: goto label_286248;
            case 0x28624Cu: goto label_28624c;
            case 0x286250u: goto label_286250;
            case 0x286254u: goto label_286254;
            case 0x286258u: goto label_286258;
            case 0x28625Cu: goto label_28625c;
            case 0x286260u: goto label_286260;
            case 0x286264u: goto label_286264;
            case 0x286268u: goto label_286268;
            case 0x28626Cu: goto label_28626c;
            case 0x286270u: goto label_286270;
            case 0x286274u: goto label_286274;
            case 0x286278u: goto label_286278;
            case 0x28627Cu: goto label_28627c;
            case 0x286280u: goto label_286280;
            case 0x286284u: goto label_286284;
            case 0x286288u: goto label_286288;
            case 0x28628Cu: goto label_28628c;
            case 0x286290u: goto label_286290;
            case 0x286294u: goto label_286294;
            case 0x286298u: goto label_286298;
            case 0x28629Cu: goto label_28629c;
            case 0x2862A0u: goto label_2862a0;
            case 0x2862A4u: goto label_2862a4;
            case 0x2862A8u: goto label_2862a8;
            case 0x2862ACu: goto label_2862ac;
            case 0x2862B0u: goto label_2862b0;
            case 0x2862B4u: goto label_2862b4;
            case 0x2862B8u: goto label_2862b8;
            case 0x2862BCu: goto label_2862bc;
            case 0x2862C0u: goto label_2862c0;
            case 0x2862C4u: goto label_2862c4;
            case 0x2862C8u: goto label_2862c8;
            case 0x2862CCu: goto label_2862cc;
            case 0x2862D0u: goto label_2862d0;
            case 0x2862D4u: goto label_2862d4;
            case 0x2862D8u: goto label_2862d8;
            case 0x2862DCu: goto label_2862dc;
            case 0x2862E0u: goto label_2862e0;
            case 0x2862E4u: goto label_2862e4;
            case 0x2862E8u: goto label_2862e8;
            case 0x2862ECu: goto label_2862ec;
            case 0x2862F0u: goto label_2862f0;
            case 0x2862F4u: goto label_2862f4;
            case 0x2862F8u: goto label_2862f8;
            case 0x2862FCu: goto label_2862fc;
            case 0x286300u: goto label_286300;
            case 0x286304u: goto label_286304;
            case 0x286308u: goto label_286308;
            case 0x28630Cu: goto label_28630c;
            case 0x286310u: goto label_286310;
            case 0x286314u: goto label_286314;
            case 0x286318u: goto label_286318;
            case 0x28631Cu: goto label_28631c;
            case 0x286320u: goto label_286320;
            case 0x286324u: goto label_286324;
            case 0x286328u: goto label_286328;
            case 0x28632Cu: goto label_28632c;
            case 0x286330u: goto label_286330;
            case 0x286334u: goto label_286334;
            case 0x286338u: goto label_286338;
            case 0x28633Cu: goto label_28633c;
            case 0x286340u: goto label_286340;
            case 0x286344u: goto label_286344;
            case 0x286348u: goto label_286348;
            case 0x28634Cu: goto label_28634c;
            case 0x286350u: goto label_286350;
            case 0x286354u: goto label_286354;
            case 0x286358u: goto label_286358;
            case 0x28635Cu: goto label_28635c;
            case 0x286360u: goto label_286360;
            case 0x286364u: goto label_286364;
            case 0x286368u: goto label_286368;
            case 0x28636Cu: goto label_28636c;
            case 0x286370u: goto label_286370;
            case 0x286374u: goto label_286374;
            case 0x286378u: goto label_286378;
            case 0x28637Cu: goto label_28637c;
            case 0x286380u: goto label_286380;
            case 0x286384u: goto label_286384;
            case 0x286388u: goto label_286388;
            case 0x28638Cu: goto label_28638c;
            case 0x286390u: goto label_286390;
            case 0x286394u: goto label_286394;
            case 0x286398u: goto label_286398;
            case 0x28639Cu: goto label_28639c;
            case 0x2863A0u: goto label_2863a0;
            case 0x2863A4u: goto label_2863a4;
            case 0x2863A8u: goto label_2863a8;
            case 0x2863ACu: goto label_2863ac;
            case 0x2863B0u: goto label_2863b0;
            case 0x2863B4u: goto label_2863b4;
            case 0x2863B8u: goto label_2863b8;
            case 0x2863BCu: goto label_2863bc;
            case 0x2863C0u: goto label_2863c0;
            case 0x2863C4u: goto label_2863c4;
            case 0x2863C8u: goto label_2863c8;
            case 0x2863CCu: goto label_2863cc;
            case 0x2863D0u: goto label_2863d0;
            case 0x2863D4u: goto label_2863d4;
            case 0x2863D8u: goto label_2863d8;
            case 0x2863DCu: goto label_2863dc;
            case 0x2863E0u: goto label_2863e0;
            case 0x2863E4u: goto label_2863e4;
            case 0x2863E8u: goto label_2863e8;
            case 0x2863ECu: goto label_2863ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x286388u;
label_286388:
    // 0x286388: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x286388u;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_28638c:
    // 0x28638c: 0xdfbf0690  ld          $ra, 0x690($sp)
    ctx->pc = 0x28638cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1680)));
label_286390:
    // 0x286390: 0xdfbe0680  ld          $fp, 0x680($sp)
    ctx->pc = 0x286390u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 1664)));
label_286394:
    // 0x286394: 0xdfb70670  ld          $s7, 0x670($sp)
    ctx->pc = 0x286394u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 1648)));
label_286398:
    // 0x286398: 0xdfb60660  ld          $s6, 0x660($sp)
    ctx->pc = 0x286398u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 1632)));
label_28639c:
    // 0x28639c: 0xdfb50650  ld          $s5, 0x650($sp)
    ctx->pc = 0x28639cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 1616)));
label_2863a0:
    // 0x2863a0: 0xdfb40640  ld          $s4, 0x640($sp)
    ctx->pc = 0x2863a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 1600)));
label_2863a4:
    // 0x2863a4: 0xdfb30630  ld          $s3, 0x630($sp)
    ctx->pc = 0x2863a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 1584)));
label_2863a8:
    // 0x2863a8: 0xdfb20620  ld          $s2, 0x620($sp)
    ctx->pc = 0x2863a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 1568)));
label_2863ac:
    // 0x2863ac: 0xdfb10610  ld          $s1, 0x610($sp)
    ctx->pc = 0x2863acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 1552)));
label_2863b0:
    // 0x2863b0: 0xdfb00600  ld          $s0, 0x600($sp)
    ctx->pc = 0x2863b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 1536)));
label_2863b4:
    // 0x2863b4: 0xc7bf06f8  lwc1        $f31, 0x6F8($sp)
    ctx->pc = 0x2863b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1784)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[31] = f; }
label_2863b8:
    // 0x2863b8: 0xc7be06f0  lwc1        $f30, 0x6F0($sp)
    ctx->pc = 0x2863b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[30] = f; }
label_2863bc:
    // 0x2863bc: 0xc7bd06e8  lwc1        $f29, 0x6E8($sp)
    ctx->pc = 0x2863bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[29] = f; }
label_2863c0:
    // 0x2863c0: 0xc7bc06e0  lwc1        $f28, 0x6E0($sp)
    ctx->pc = 0x2863c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[28] = f; }
label_2863c4:
    // 0x2863c4: 0xc7bb06d8  lwc1        $f27, 0x6D8($sp)
    ctx->pc = 0x2863c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1752)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[27] = f; }
label_2863c8:
    // 0x2863c8: 0xc7ba06d0  lwc1        $f26, 0x6D0($sp)
    ctx->pc = 0x2863c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
label_2863cc:
    // 0x2863cc: 0xc7b906c8  lwc1        $f25, 0x6C8($sp)
    ctx->pc = 0x2863ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
label_2863d0:
    // 0x2863d0: 0xc7b806c0  lwc1        $f24, 0x6C0($sp)
    ctx->pc = 0x2863d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_2863d4:
    // 0x2863d4: 0xc7b706b8  lwc1        $f23, 0x6B8($sp)
    ctx->pc = 0x2863d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_2863d8:
    // 0x2863d8: 0xc7b606b0  lwc1        $f22, 0x6B0($sp)
    ctx->pc = 0x2863d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2863dc:
    // 0x2863dc: 0xc7b506a8  lwc1        $f21, 0x6A8($sp)
    ctx->pc = 0x2863dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2863e0:
    // 0x2863e0: 0xc7b406a0  lwc1        $f20, 0x6A0($sp)
    ctx->pc = 0x2863e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1696)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2863e4:
    // 0x2863e4: 0x3e00008  jr          $ra
label_2863e8:
    if (ctx->pc == 0x2863E8u) {
        ctx->pc = 0x2863E8u;
            // 0x2863e8: 0x27bd0700  addiu       $sp, $sp, 0x700 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1792));
        ctx->pc = 0x2863ECu;
        goto label_2863ec;
    }
    ctx->pc = 0x2863E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2863E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2863E4u;
            // 0x2863e8: 0x27bd0700  addiu       $sp, $sp, 0x700 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1792));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x285CF8u: goto label_285cf8;
            case 0x285CFCu: goto label_285cfc;
            case 0x285D00u: goto label_285d00;
            case 0x285D04u: goto label_285d04;
            case 0x285D08u: goto label_285d08;
            case 0x285D0Cu: goto label_285d0c;
            case 0x285D10u: goto label_285d10;
            case 0x285D14u: goto label_285d14;
            case 0x285D18u: goto label_285d18;
            case 0x285D1Cu: goto label_285d1c;
            case 0x285D20u: goto label_285d20;
            case 0x285D24u: goto label_285d24;
            case 0x285D28u: goto label_285d28;
            case 0x285D2Cu: goto label_285d2c;
            case 0x285D30u: goto label_285d30;
            case 0x285D34u: goto label_285d34;
            case 0x285D38u: goto label_285d38;
            case 0x285D3Cu: goto label_285d3c;
            case 0x285D40u: goto label_285d40;
            case 0x285D44u: goto label_285d44;
            case 0x285D48u: goto label_285d48;
            case 0x285D4Cu: goto label_285d4c;
            case 0x285D50u: goto label_285d50;
            case 0x285D54u: goto label_285d54;
            case 0x285D58u: goto label_285d58;
            case 0x285D5Cu: goto label_285d5c;
            case 0x285D60u: goto label_285d60;
            case 0x285D64u: goto label_285d64;
            case 0x285D68u: goto label_285d68;
            case 0x285D6Cu: goto label_285d6c;
            case 0x285D70u: goto label_285d70;
            case 0x285D74u: goto label_285d74;
            case 0x285D78u: goto label_285d78;
            case 0x285D7Cu: goto label_285d7c;
            case 0x285D80u: goto label_285d80;
            case 0x285D84u: goto label_285d84;
            case 0x285D88u: goto label_285d88;
            case 0x285D8Cu: goto label_285d8c;
            case 0x285D90u: goto label_285d90;
            case 0x285D94u: goto label_285d94;
            case 0x285D98u: goto label_285d98;
            case 0x285D9Cu: goto label_285d9c;
            case 0x285DA0u: goto label_285da0;
            case 0x285DA4u: goto label_285da4;
            case 0x285DA8u: goto label_285da8;
            case 0x285DACu: goto label_285dac;
            case 0x285DB0u: goto label_285db0;
            case 0x285DB4u: goto label_285db4;
            case 0x285DB8u: goto label_285db8;
            case 0x285DBCu: goto label_285dbc;
            case 0x285DC0u: goto label_285dc0;
            case 0x285DC4u: goto label_285dc4;
            case 0x285DC8u: goto label_285dc8;
            case 0x285DCCu: goto label_285dcc;
            case 0x285DD0u: goto label_285dd0;
            case 0x285DD4u: goto label_285dd4;
            case 0x285DD8u: goto label_285dd8;
            case 0x285DDCu: goto label_285ddc;
            case 0x285DE0u: goto label_285de0;
            case 0x285DE4u: goto label_285de4;
            case 0x285DE8u: goto label_285de8;
            case 0x285DECu: goto label_285dec;
            case 0x285DF0u: goto label_285df0;
            case 0x285DF4u: goto label_285df4;
            case 0x285DF8u: goto label_285df8;
            case 0x285DFCu: goto label_285dfc;
            case 0x285E00u: goto label_285e00;
            case 0x285E04u: goto label_285e04;
            case 0x285E08u: goto label_285e08;
            case 0x285E0Cu: goto label_285e0c;
            case 0x285E10u: goto label_285e10;
            case 0x285E14u: goto label_285e14;
            case 0x285E18u: goto label_285e18;
            case 0x285E1Cu: goto label_285e1c;
            case 0x285E20u: goto label_285e20;
            case 0x285E24u: goto label_285e24;
            case 0x285E28u: goto label_285e28;
            case 0x285E2Cu: goto label_285e2c;
            case 0x285E30u: goto label_285e30;
            case 0x285E34u: goto label_285e34;
            case 0x285E38u: goto label_285e38;
            case 0x285E3Cu: goto label_285e3c;
            case 0x285E40u: goto label_285e40;
            case 0x285E44u: goto label_285e44;
            case 0x285E48u: goto label_285e48;
            case 0x285E4Cu: goto label_285e4c;
            case 0x285E50u: goto label_285e50;
            case 0x285E54u: goto label_285e54;
            case 0x285E58u: goto label_285e58;
            case 0x285E5Cu: goto label_285e5c;
            case 0x285E60u: goto label_285e60;
            case 0x285E64u: goto label_285e64;
            case 0x285E68u: goto label_285e68;
            case 0x285E6Cu: goto label_285e6c;
            case 0x285E70u: goto label_285e70;
            case 0x285E74u: goto label_285e74;
            case 0x285E78u: goto label_285e78;
            case 0x285E7Cu: goto label_285e7c;
            case 0x285E80u: goto label_285e80;
            case 0x285E84u: goto label_285e84;
            case 0x285E88u: goto label_285e88;
            case 0x285E8Cu: goto label_285e8c;
            case 0x285E90u: goto label_285e90;
            case 0x285E94u: goto label_285e94;
            case 0x285E98u: goto label_285e98;
            case 0x285E9Cu: goto label_285e9c;
            case 0x285EA0u: goto label_285ea0;
            case 0x285EA4u: goto label_285ea4;
            case 0x285EA8u: goto label_285ea8;
            case 0x285EACu: goto label_285eac;
            case 0x285EB0u: goto label_285eb0;
            case 0x285EB4u: goto label_285eb4;
            case 0x285EB8u: goto label_285eb8;
            case 0x285EBCu: goto label_285ebc;
            case 0x285EC0u: goto label_285ec0;
            case 0x285EC4u: goto label_285ec4;
            case 0x285EC8u: goto label_285ec8;
            case 0x285ECCu: goto label_285ecc;
            case 0x285ED0u: goto label_285ed0;
            case 0x285ED4u: goto label_285ed4;
            case 0x285ED8u: goto label_285ed8;
            case 0x285EDCu: goto label_285edc;
            case 0x285EE0u: goto label_285ee0;
            case 0x285EE4u: goto label_285ee4;
            case 0x285EE8u: goto label_285ee8;
            case 0x285EECu: goto label_285eec;
            case 0x285EF0u: goto label_285ef0;
            case 0x285EF4u: goto label_285ef4;
            case 0x285EF8u: goto label_285ef8;
            case 0x285EFCu: goto label_285efc;
            case 0x285F00u: goto label_285f00;
            case 0x285F04u: goto label_285f04;
            case 0x285F08u: goto label_285f08;
            case 0x285F0Cu: goto label_285f0c;
            case 0x285F10u: goto label_285f10;
            case 0x285F14u: goto label_285f14;
            case 0x285F18u: goto label_285f18;
            case 0x285F1Cu: goto label_285f1c;
            case 0x285F20u: goto label_285f20;
            case 0x285F24u: goto label_285f24;
            case 0x285F28u: goto label_285f28;
            case 0x285F2Cu: goto label_285f2c;
            case 0x285F30u: goto label_285f30;
            case 0x285F34u: goto label_285f34;
            case 0x285F38u: goto label_285f38;
            case 0x285F3Cu: goto label_285f3c;
            case 0x285F40u: goto label_285f40;
            case 0x285F44u: goto label_285f44;
            case 0x285F48u: goto label_285f48;
            case 0x285F4Cu: goto label_285f4c;
            case 0x285F50u: goto label_285f50;
            case 0x285F54u: goto label_285f54;
            case 0x285F58u: goto label_285f58;
            case 0x285F5Cu: goto label_285f5c;
            case 0x285F60u: goto label_285f60;
            case 0x285F64u: goto label_285f64;
            case 0x285F68u: goto label_285f68;
            case 0x285F6Cu: goto label_285f6c;
            case 0x285F70u: goto label_285f70;
            case 0x285F74u: goto label_285f74;
            case 0x285F78u: goto label_285f78;
            case 0x285F7Cu: goto label_285f7c;
            case 0x285F80u: goto label_285f80;
            case 0x285F84u: goto label_285f84;
            case 0x285F88u: goto label_285f88;
            case 0x285F8Cu: goto label_285f8c;
            case 0x285F90u: goto label_285f90;
            case 0x285F94u: goto label_285f94;
            case 0x285F98u: goto label_285f98;
            case 0x285F9Cu: goto label_285f9c;
            case 0x285FA0u: goto label_285fa0;
            case 0x285FA4u: goto label_285fa4;
            case 0x285FA8u: goto label_285fa8;
            case 0x285FACu: goto label_285fac;
            case 0x285FB0u: goto label_285fb0;
            case 0x285FB4u: goto label_285fb4;
            case 0x285FB8u: goto label_285fb8;
            case 0x285FBCu: goto label_285fbc;
            case 0x285FC0u: goto label_285fc0;
            case 0x285FC4u: goto label_285fc4;
            case 0x285FC8u: goto label_285fc8;
            case 0x285FCCu: goto label_285fcc;
            case 0x285FD0u: goto label_285fd0;
            case 0x285FD4u: goto label_285fd4;
            case 0x285FD8u: goto label_285fd8;
            case 0x285FDCu: goto label_285fdc;
            case 0x285FE0u: goto label_285fe0;
            case 0x285FE4u: goto label_285fe4;
            case 0x285FE8u: goto label_285fe8;
            case 0x285FECu: goto label_285fec;
            case 0x285FF0u: goto label_285ff0;
            case 0x285FF4u: goto label_285ff4;
            case 0x285FF8u: goto label_285ff8;
            case 0x285FFCu: goto label_285ffc;
            case 0x286000u: goto label_286000;
            case 0x286004u: goto label_286004;
            case 0x286008u: goto label_286008;
            case 0x28600Cu: goto label_28600c;
            case 0x286010u: goto label_286010;
            case 0x286014u: goto label_286014;
            case 0x286018u: goto label_286018;
            case 0x28601Cu: goto label_28601c;
            case 0x286020u: goto label_286020;
            case 0x286024u: goto label_286024;
            case 0x286028u: goto label_286028;
            case 0x28602Cu: goto label_28602c;
            case 0x286030u: goto label_286030;
            case 0x286034u: goto label_286034;
            case 0x286038u: goto label_286038;
            case 0x28603Cu: goto label_28603c;
            case 0x286040u: goto label_286040;
            case 0x286044u: goto label_286044;
            case 0x286048u: goto label_286048;
            case 0x28604Cu: goto label_28604c;
            case 0x286050u: goto label_286050;
            case 0x286054u: goto label_286054;
            case 0x286058u: goto label_286058;
            case 0x28605Cu: goto label_28605c;
            case 0x286060u: goto label_286060;
            case 0x286064u: goto label_286064;
            case 0x286068u: goto label_286068;
            case 0x28606Cu: goto label_28606c;
            case 0x286070u: goto label_286070;
            case 0x286074u: goto label_286074;
            case 0x286078u: goto label_286078;
            case 0x28607Cu: goto label_28607c;
            case 0x286080u: goto label_286080;
            case 0x286084u: goto label_286084;
            case 0x286088u: goto label_286088;
            case 0x28608Cu: goto label_28608c;
            case 0x286090u: goto label_286090;
            case 0x286094u: goto label_286094;
            case 0x286098u: goto label_286098;
            case 0x28609Cu: goto label_28609c;
            case 0x2860A0u: goto label_2860a0;
            case 0x2860A4u: goto label_2860a4;
            case 0x2860A8u: goto label_2860a8;
            case 0x2860ACu: goto label_2860ac;
            case 0x2860B0u: goto label_2860b0;
            case 0x2860B4u: goto label_2860b4;
            case 0x2860B8u: goto label_2860b8;
            case 0x2860BCu: goto label_2860bc;
            case 0x2860C0u: goto label_2860c0;
            case 0x2860C4u: goto label_2860c4;
            case 0x2860C8u: goto label_2860c8;
            case 0x2860CCu: goto label_2860cc;
            case 0x2860D0u: goto label_2860d0;
            case 0x2860D4u: goto label_2860d4;
            case 0x2860D8u: goto label_2860d8;
            case 0x2860DCu: goto label_2860dc;
            case 0x2860E0u: goto label_2860e0;
            case 0x2860E4u: goto label_2860e4;
            case 0x2860E8u: goto label_2860e8;
            case 0x2860ECu: goto label_2860ec;
            case 0x2860F0u: goto label_2860f0;
            case 0x2860F4u: goto label_2860f4;
            case 0x2860F8u: goto label_2860f8;
            case 0x2860FCu: goto label_2860fc;
            case 0x286100u: goto label_286100;
            case 0x286104u: goto label_286104;
            case 0x286108u: goto label_286108;
            case 0x28610Cu: goto label_28610c;
            case 0x286110u: goto label_286110;
            case 0x286114u: goto label_286114;
            case 0x286118u: goto label_286118;
            case 0x28611Cu: goto label_28611c;
            case 0x286120u: goto label_286120;
            case 0x286124u: goto label_286124;
            case 0x286128u: goto label_286128;
            case 0x28612Cu: goto label_28612c;
            case 0x286130u: goto label_286130;
            case 0x286134u: goto label_286134;
            case 0x286138u: goto label_286138;
            case 0x28613Cu: goto label_28613c;
            case 0x286140u: goto label_286140;
            case 0x286144u: goto label_286144;
            case 0x286148u: goto label_286148;
            case 0x28614Cu: goto label_28614c;
            case 0x286150u: goto label_286150;
            case 0x286154u: goto label_286154;
            case 0x286158u: goto label_286158;
            case 0x28615Cu: goto label_28615c;
            case 0x286160u: goto label_286160;
            case 0x286164u: goto label_286164;
            case 0x286168u: goto label_286168;
            case 0x28616Cu: goto label_28616c;
            case 0x286170u: goto label_286170;
            case 0x286174u: goto label_286174;
            case 0x286178u: goto label_286178;
            case 0x28617Cu: goto label_28617c;
            case 0x286180u: goto label_286180;
            case 0x286184u: goto label_286184;
            case 0x286188u: goto label_286188;
            case 0x28618Cu: goto label_28618c;
            case 0x286190u: goto label_286190;
            case 0x286194u: goto label_286194;
            case 0x286198u: goto label_286198;
            case 0x28619Cu: goto label_28619c;
            case 0x2861A0u: goto label_2861a0;
            case 0x2861A4u: goto label_2861a4;
            case 0x2861A8u: goto label_2861a8;
            case 0x2861ACu: goto label_2861ac;
            case 0x2861B0u: goto label_2861b0;
            case 0x2861B4u: goto label_2861b4;
            case 0x2861B8u: goto label_2861b8;
            case 0x2861BCu: goto label_2861bc;
            case 0x2861C0u: goto label_2861c0;
            case 0x2861C4u: goto label_2861c4;
            case 0x2861C8u: goto label_2861c8;
            case 0x2861CCu: goto label_2861cc;
            case 0x2861D0u: goto label_2861d0;
            case 0x2861D4u: goto label_2861d4;
            case 0x2861D8u: goto label_2861d8;
            case 0x2861DCu: goto label_2861dc;
            case 0x2861E0u: goto label_2861e0;
            case 0x2861E4u: goto label_2861e4;
            case 0x2861E8u: goto label_2861e8;
            case 0x2861ECu: goto label_2861ec;
            case 0x2861F0u: goto label_2861f0;
            case 0x2861F4u: goto label_2861f4;
            case 0x2861F8u: goto label_2861f8;
            case 0x2861FCu: goto label_2861fc;
            case 0x286200u: goto label_286200;
            case 0x286204u: goto label_286204;
            case 0x286208u: goto label_286208;
            case 0x28620Cu: goto label_28620c;
            case 0x286210u: goto label_286210;
            case 0x286214u: goto label_286214;
            case 0x286218u: goto label_286218;
            case 0x28621Cu: goto label_28621c;
            case 0x286220u: goto label_286220;
            case 0x286224u: goto label_286224;
            case 0x286228u: goto label_286228;
            case 0x28622Cu: goto label_28622c;
            case 0x286230u: goto label_286230;
            case 0x286234u: goto label_286234;
            case 0x286238u: goto label_286238;
            case 0x28623Cu: goto label_28623c;
            case 0x286240u: goto label_286240;
            case 0x286244u: goto label_286244;
            case 0x286248u: goto label_286248;
            case 0x28624Cu: goto label_28624c;
            case 0x286250u: goto label_286250;
            case 0x286254u: goto label_286254;
            case 0x286258u: goto label_286258;
            case 0x28625Cu: goto label_28625c;
            case 0x286260u: goto label_286260;
            case 0x286264u: goto label_286264;
            case 0x286268u: goto label_286268;
            case 0x28626Cu: goto label_28626c;
            case 0x286270u: goto label_286270;
            case 0x286274u: goto label_286274;
            case 0x286278u: goto label_286278;
            case 0x28627Cu: goto label_28627c;
            case 0x286280u: goto label_286280;
            case 0x286284u: goto label_286284;
            case 0x286288u: goto label_286288;
            case 0x28628Cu: goto label_28628c;
            case 0x286290u: goto label_286290;
            case 0x286294u: goto label_286294;
            case 0x286298u: goto label_286298;
            case 0x28629Cu: goto label_28629c;
            case 0x2862A0u: goto label_2862a0;
            case 0x2862A4u: goto label_2862a4;
            case 0x2862A8u: goto label_2862a8;
            case 0x2862ACu: goto label_2862ac;
            case 0x2862B0u: goto label_2862b0;
            case 0x2862B4u: goto label_2862b4;
            case 0x2862B8u: goto label_2862b8;
            case 0x2862BCu: goto label_2862bc;
            case 0x2862C0u: goto label_2862c0;
            case 0x2862C4u: goto label_2862c4;
            case 0x2862C8u: goto label_2862c8;
            case 0x2862CCu: goto label_2862cc;
            case 0x2862D0u: goto label_2862d0;
            case 0x2862D4u: goto label_2862d4;
            case 0x2862D8u: goto label_2862d8;
            case 0x2862DCu: goto label_2862dc;
            case 0x2862E0u: goto label_2862e0;
            case 0x2862E4u: goto label_2862e4;
            case 0x2862E8u: goto label_2862e8;
            case 0x2862ECu: goto label_2862ec;
            case 0x2862F0u: goto label_2862f0;
            case 0x2862F4u: goto label_2862f4;
            case 0x2862F8u: goto label_2862f8;
            case 0x2862FCu: goto label_2862fc;
            case 0x286300u: goto label_286300;
            case 0x286304u: goto label_286304;
            case 0x286308u: goto label_286308;
            case 0x28630Cu: goto label_28630c;
            case 0x286310u: goto label_286310;
            case 0x286314u: goto label_286314;
            case 0x286318u: goto label_286318;
            case 0x28631Cu: goto label_28631c;
            case 0x286320u: goto label_286320;
            case 0x286324u: goto label_286324;
            case 0x286328u: goto label_286328;
            case 0x28632Cu: goto label_28632c;
            case 0x286330u: goto label_286330;
            case 0x286334u: goto label_286334;
            case 0x286338u: goto label_286338;
            case 0x28633Cu: goto label_28633c;
            case 0x286340u: goto label_286340;
            case 0x286344u: goto label_286344;
            case 0x286348u: goto label_286348;
            case 0x28634Cu: goto label_28634c;
            case 0x286350u: goto label_286350;
            case 0x286354u: goto label_286354;
            case 0x286358u: goto label_286358;
            case 0x28635Cu: goto label_28635c;
            case 0x286360u: goto label_286360;
            case 0x286364u: goto label_286364;
            case 0x286368u: goto label_286368;
            case 0x28636Cu: goto label_28636c;
            case 0x286370u: goto label_286370;
            case 0x286374u: goto label_286374;
            case 0x286378u: goto label_286378;
            case 0x28637Cu: goto label_28637c;
            case 0x286380u: goto label_286380;
            case 0x286384u: goto label_286384;
            case 0x286388u: goto label_286388;
            case 0x28638Cu: goto label_28638c;
            case 0x286390u: goto label_286390;
            case 0x286394u: goto label_286394;
            case 0x286398u: goto label_286398;
            case 0x28639Cu: goto label_28639c;
            case 0x2863A0u: goto label_2863a0;
            case 0x2863A4u: goto label_2863a4;
            case 0x2863A8u: goto label_2863a8;
            case 0x2863ACu: goto label_2863ac;
            case 0x2863B0u: goto label_2863b0;
            case 0x2863B4u: goto label_2863b4;
            case 0x2863B8u: goto label_2863b8;
            case 0x2863BCu: goto label_2863bc;
            case 0x2863C0u: goto label_2863c0;
            case 0x2863C4u: goto label_2863c4;
            case 0x2863C8u: goto label_2863c8;
            case 0x2863CCu: goto label_2863cc;
            case 0x2863D0u: goto label_2863d0;
            case 0x2863D4u: goto label_2863d4;
            case 0x2863D8u: goto label_2863d8;
            case 0x2863DCu: goto label_2863dc;
            case 0x2863E0u: goto label_2863e0;
            case 0x2863E4u: goto label_2863e4;
            case 0x2863E8u: goto label_2863e8;
            case 0x2863ECu: goto label_2863ec;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2863ECu;
label_2863ec:
    // 0x2863ec: 0x0  nop
    ctx->pc = 0x2863ecu;
    // NOP
}
