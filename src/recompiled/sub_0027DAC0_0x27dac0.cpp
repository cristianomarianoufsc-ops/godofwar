#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027DAC0
// Address: 0x27dac0 - 0x27dbf0
void sub_0027DAC0_0x27dac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027DAC0_0x27dac0");
#endif

    ctx->pc = 0x27dac0u;

    // 0x27dac0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x27dac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x27dac4: 0x24020898  addiu       $v0, $zero, 0x898
    ctx->pc = 0x27dac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2200));
    // 0x27dac8: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x27dac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x27dacc: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x27daccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
    // 0x27dad0: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x27dad0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x27dad4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x27dad4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27dad8: 0x2a2b018  mult        $s6, $s5, $v0
    ctx->pc = 0x27dad8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
    // 0x27dadc: 0x24040184  addiu       $a0, $zero, 0x184
    ctx->pc = 0x27dadcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
    // 0x27dae0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x27dae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x27dae4: 0x2a42018  mult        $a0, $s5, $a0
    ctx->pc = 0x27dae4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x27dae8: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x27dae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x27daec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x27daecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27daf0: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x27daf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x27daf4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x27daf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x27daf8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x27daf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x27dafc: 0x24423318  addiu       $v0, $v0, 0x3318
    ctx->pc = 0x27dafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13080));
    // 0x27db00: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x27db00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x27db04: 0x2477d258  addiu       $s7, $v1, -0x2DA8
    ctx->pc = 0x27db04u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955608));
    // 0x27db08: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x27db08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x27db0c: 0x829821  addu        $s3, $a0, $v0
    ctx->pc = 0x27db0cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x27db10: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x27db10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x27db14: 0x2d7f021  addu        $fp, $s6, $s7
    ctx->pc = 0x27db14u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 23)));
    // 0x27db18: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x27db18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x27db1c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x27db1cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x27db20: 0xafb60000  sw          $s6, 0x0($sp)
    ctx->pc = 0x27db20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 22));
    // 0x27db24: 0x8e630170  lw          $v1, 0x170($s3)
    ctx->pc = 0x27db24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 368)));
label_27db28:
    // 0x27db28: 0x8fd00000  lw          $s0, 0x0($fp)
    ctx->pc = 0x27db28u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x27db2c: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x27db2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x27db30: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x27DB30u;
    {
        const bool branch_taken_0x27db30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DB30u;
            // 0x27db34: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27db30) {
            ctx->pc = 0x27DB98u;
            goto label_27db98;
        }
    }
    ctx->pc = 0x27DB38u;
    // 0x27db38: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x27db38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
    // 0x27db3c: 0x2463d258  addiu       $v1, $v1, -0x2DA8
    ctx->pc = 0x27db3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955608));
    // 0x27db40: 0x3c148000  lui         $s4, 0x8000
    ctx->pc = 0x27db40u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32768 << 16));
    // 0x27db44: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x27db44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27db48: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x27db48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27db4c: 0x0  nop
    ctx->pc = 0x27db4cu;
    // NOP
label_27db50:
    // 0x27db50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27db50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27db54: 0xc09f5f2  jal         func_27D7C8
    ctx->pc = 0x27DB54u;
    SET_GPR_U32(ctx, 31, 0x27DB5Cu);
    ctx->pc = 0x27DB58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27DB54u;
            // 0x27db58: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D7C8u;
    if (runtime->hasFunction(0x27D7C8u)) {
        auto targetFn = runtime->lookupFunction(0x27D7C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DB5Cu; }
        if (ctx->pc != 0x27DB5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_27d7c8_0x27d8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27DB5Cu; }
        if (ctx->pc != 0x27DB5Cu) { return; }
    }
    ctx->pc = 0x27DB5Cu;
    // 0x27db5c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x27db5cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27db60: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x27db60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x27db64: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x27DB64u;
    {
        const bool branch_taken_0x27db64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DB68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DB64u;
            // 0x27db68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27db64) {
            ctx->pc = 0x27DBBCu;
            goto label_27dbbc;
        }
    }
    ctx->pc = 0x27DB6Cu;
    // 0x27db6c: 0x741024  and         $v0, $v1, $s4
    ctx->pc = 0x27db6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
    // 0x27db70: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x27DB70u;
    {
        const bool branch_taken_0x27db70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27db70) {
            ctx->pc = 0x27DB74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x27DB70u;
            // 0x27db74: 0x8e630170  lw          $v1, 0x170($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 368)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x27DB88u;
            goto label_27db88;
        }
    }
    ctx->pc = 0x27DB78u;
    // 0x27db78: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x27db78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x27db7c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x27db7cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27db80: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x27DB80u;
    {
        const bool branch_taken_0x27db80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DB80u;
            // 0x27db84: 0xae500000  sw          $s0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27db80) {
            ctx->pc = 0x27DBBCu;
            goto label_27dbbc;
        }
    }
    ctx->pc = 0x27DB88u;
label_27db88:
    // 0x27db88: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27db88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x27db8c: 0x203102a  slt         $v0, $s0, $v1
    ctx->pc = 0x27db8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x27db90: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x27DB90u;
    {
        const bool branch_taken_0x27db90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27DB94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DB90u;
            // 0x27db94: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27db90) {
            ctx->pc = 0x27DB50u;
            runtime->cooperativeGuestYield();
            goto label_27db50;
        }
    }
    ctx->pc = 0x27DB98u;
label_27db98:
    // 0x27db98: 0x2d72021  addu        $a0, $s6, $s7
    ctx->pc = 0x27db98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 23)));
    // 0x27db9c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x27db9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x27dba0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27DBA0u;
    {
        const bool branch_taken_0x27dba0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DBA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DBA0u;
            // 0x27dba4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dba0) {
            ctx->pc = 0x27DBB0u;
            goto label_27dbb0;
        }
    }
    ctx->pc = 0x27DBA8u;
    // 0x27dba8: 0x1000ffdf  b           . + 4 + (-0x21 << 2)
    ctx->pc = 0x27DBA8u;
    {
        const bool branch_taken_0x27dba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27DBACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DBA8u;
            // 0x27dbac: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27dba8) {
            ctx->pc = 0x27DB28u;
            runtime->cooperativeGuestYield();
            goto label_27db28;
        }
    }
    ctx->pc = 0x27DBB0u;
label_27dbb0:
    // 0x27dbb0: 0x3c038101  lui         $v1, 0x8101
    ctx->pc = 0x27dbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)33025 << 16));
    // 0x27dbb4: 0x3463001c  ori         $v1, $v1, 0x1C
    ctx->pc = 0x27dbb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)28);
    // 0x27dbb8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x27dbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_27dbbc:
    // 0x27dbbc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x27dbbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x27dbc0: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x27dbc0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x27dbc4: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x27dbc4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27dbc8: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x27dbc8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27dbcc: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x27dbccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27dbd0: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x27dbd0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27dbd4: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x27dbd4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27dbd8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x27dbd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27dbdc: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x27dbdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27dbe0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x27dbe0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27dbe4: 0x3e00008  jr          $ra
    ctx->pc = 0x27DBE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27DBE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27DBE4u;
            // 0x27dbe8: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x27DB28u: goto label_27db28;
            case 0x27DB50u: goto label_27db50;
            case 0x27DB88u: goto label_27db88;
            case 0x27DB98u: goto label_27db98;
            case 0x27DBB0u: goto label_27dbb0;
            case 0x27DBBCu: goto label_27dbbc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x27DBECu;
    // 0x27dbec: 0x0  nop
    ctx->pc = 0x27dbecu;
    // NOP
}
