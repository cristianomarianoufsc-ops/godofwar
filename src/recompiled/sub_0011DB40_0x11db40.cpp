#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011DB40
// Address: 0x11db40 - 0x11dde8
void sub_0011DB40_0x11db40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011DB40_0x11db40");
#endif

    ctx->pc = 0x11db40u;

    // 0x11db40: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11db40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11db44: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x11db44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x11db48: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x11db48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x11db4c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11db4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11db50: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x11db50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x11db54: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x11db54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11db58: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11db58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11db5c: 0xae201058  sw          $zero, 0x1058($s1)
    ctx->pc = 0x11db5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4184), GPR_U32(ctx, 0));
    // 0x11db60: 0xae20105c  sw          $zero, 0x105C($s1)
    ctx->pc = 0x11db60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4188), GPR_U32(ctx, 0));
    // 0x11db64: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x11db64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_11db68:
    // 0x11db68: 0x2632103c  addiu       $s2, $s1, 0x103C
    ctx->pc = 0x11db68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4156));
    // 0x11db6c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x11db6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x11db70: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x11db70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x11db74: 0xc05d506  jal         func_175418
    ctx->pc = 0x11DB74u;
    SET_GPR_U32(ctx, 31, 0x11DB7Cu);
    ctx->pc = 0x11DB78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11DB74u;
            // 0x11db78: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175418u;
    if (runtime->hasFunction(0x175418u)) {
        auto targetFn = runtime->lookupFunction(0x175418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DB7Cu; }
        if (ctx->pc != 0x11DB7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175418_0x175420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DB7Cu; }
        if (ctx->pc != 0x11DB7Cu) { return; }
    }
    ctx->pc = 0x11DB7Cu;
    // 0x11db7c: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x11db7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x11db80: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x11DB80u;
    {
        const bool branch_taken_0x11db80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DB84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DB80u;
            // 0x11db84: 0x101080  sll         $v0, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11db80) {
            ctx->pc = 0x11DB68u;
            runtime->cooperativeGuestYield();
            goto label_11db68;
        }
    }
    ctx->pc = 0x11DB88u;
    // 0x11db88: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x11db88u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x11db8c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x11DB8Cu;
    {
        const bool branch_taken_0x11db8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DB90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DB8Cu;
            // 0x11db90: 0xae20104c  sw          $zero, 0x104C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4172), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11db8c) {
            ctx->pc = 0x11DBB8u;
            goto label_11dbb8;
        }
    }
    ctx->pc = 0x11DB94u;
    // 0x11db94: 0x2604fff8  addiu       $a0, $s0, -0x8
    ctx->pc = 0x11db94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_11db98:
    // 0x11db98: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11db98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11db9c: 0x10200a  movz        $a0, $zero, $s0
    ctx->pc = 0x11db9cu;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 0));
    // 0x11dba0: 0x2626003c  addiu       $a2, $s1, 0x3C
    ctx->pc = 0x11dba0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x11dba4: 0xc047558  jal         func_11D560
    ctx->pc = 0x11DBA4u;
    SET_GPR_U32(ctx, 31, 0x11DBACu);
    ctx->pc = 0x11DBA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11DBA4u;
            // 0x11dba8: 0x2627104c  addiu       $a3, $s1, 0x104C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 4172));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11D560u;
    if (runtime->hasFunction(0x11D560u)) {
        auto targetFn = runtime->lookupFunction(0x11D560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DBACu; }
        if (ctx->pc != 0x11DBACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011D560_0x11d560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11DBACu; }
        if (ctx->pc != 0x11DBACu) { return; }
    }
    ctx->pc = 0x11DBACu;
    // 0x11dbac: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x11dbacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11dbb0: 0x1600fff9  bnez        $s0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x11DBB0u;
    {
        const bool branch_taken_0x11dbb0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DBB0u;
            // 0x11dbb4: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dbb0) {
            ctx->pc = 0x11DB98u;
            runtime->cooperativeGuestYield();
            goto label_11db98;
        }
    }
    ctx->pc = 0x11DBB8u;
label_11dbb8:
    // 0x11dbb8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x11dbb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11dbbc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x11dbbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11dbc0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x11dbc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11dbc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11dbc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11dbc8: 0x3e00008  jr          $ra
    ctx->pc = 0x11DBC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DBCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DBC8u;
            // 0x11dbcc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11DB68u: goto label_11db68;
            case 0x11DB98u: goto label_11db98;
            case 0x11DBB8u: goto label_11dbb8;
            case 0x11DC30u: goto label_11dc30;
            case 0x11DC78u: goto label_11dc78;
            case 0x11DCB0u: goto label_11dcb0;
            case 0x11DCE8u: goto label_11dce8;
            case 0x11DD48u: goto label_11dd48;
            case 0x11DD88u: goto label_11dd88;
            case 0x11DD90u: goto label_11dd90;
            case 0x11DDB0u: goto label_11ddb0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11DBD0u;
    // 0x11dbd0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x11dbd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x11dbd4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x11dbd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x11dbd8: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x11dbd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x11dbdc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x11dbdcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dbe0: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x11dbe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x11dbe4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x11dbe4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dbe8: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x11dbe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x11dbec: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x11dbecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x11dbf0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x11dbf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x11dbf4: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x11dbf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x11dbf8: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x11dbf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x11dbfc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11dbfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11dc00: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x11dc00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x11dc04: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x11dc04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x11dc08: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x11dc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x11dc0c: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x11dc0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x11dc10: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x11dc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x11dc14: 0x40f809  jalr        $v0
    ctx->pc = 0x11DC14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11DC1Cu);
        ctx->pc = 0x11DC18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DC14u;
            // 0x11dc18: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11DC1Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11DB68u: goto label_11db68;
            case 0x11DB98u: goto label_11db98;
            case 0x11DBB8u: goto label_11dbb8;
            case 0x11DC30u: goto label_11dc30;
            case 0x11DC78u: goto label_11dc78;
            case 0x11DCB0u: goto label_11dcb0;
            case 0x11DCE8u: goto label_11dce8;
            case 0x11DD48u: goto label_11dd48;
            case 0x11DD88u: goto label_11dd88;
            case 0x11DD90u: goto label_11dd90;
            case 0x11DDB0u: goto label_11ddb0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11DC1Cu; }
            if (ctx->pc != 0x11DC1Cu) { return; }
        }
        }
    }
    ctx->pc = 0x11DC1Cu;
    // 0x11dc1c: 0x8e920024  lw          $s2, 0x24($s4)
    ctx->pc = 0x11dc1cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x11dc20: 0x1240005b  beqz        $s2, . + 4 + (0x5B << 2)
    ctx->pc = 0x11DC20u;
    {
        const bool branch_taken_0x11dc20 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DC24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DC20u;
            // 0x11dc24: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dc20) {
            ctx->pc = 0x11DD90u;
            goto label_11dd90;
        }
    }
    ctx->pc = 0x11DC28u;
    // 0x11dc28: 0x2642fff8  addiu       $v0, $s2, -0x8
    ctx->pc = 0x11dc28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
    // 0x11dc2c: 0x0  nop
    ctx->pc = 0x11dc2cu;
    // NOP
label_11dc30:
    // 0x11dc30: 0x8e560000  lw          $s6, 0x0($s2)
    ctx->pc = 0x11dc30u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x11dc34: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x11dc34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dc38: 0x52800b  movn        $s0, $v0, $s2
    ctx->pc = 0x11dc38u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x11dc3c: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x11dc3cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x11dc40: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x11dc40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x11dc44: 0x14400050  bnez        $v0, . + 4 + (0x50 << 2)
    ctx->pc = 0x11DC44u;
    {
        const bool branch_taken_0x11dc44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DC44u;
            // 0x11dc48: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dc44) {
            ctx->pc = 0x11DD88u;
            goto label_11dd88;
        }
    }
    ctx->pc = 0x11DC4Cu;
    // 0x11dc4c: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x11dc4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x11dc50: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11DC50u;
    {
        const bool branch_taken_0x11dc50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DC54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DC50u;
            // 0x11dc54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dc50) {
            ctx->pc = 0x11DC78u;
            goto label_11dc78;
        }
    }
    ctx->pc = 0x11DC58u;
    // 0x11dc58: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x11dc58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x11dc5c: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x11dc5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x11dc60: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x11dc60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x11dc64: 0x40f809  jalr        $v0
    ctx->pc = 0x11DC64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11DC6Cu);
        ctx->pc = 0x11DC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DC64u;
            // 0x11dc68: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11DC6Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11DB68u: goto label_11db68;
            case 0x11DB98u: goto label_11db98;
            case 0x11DBB8u: goto label_11dbb8;
            case 0x11DC30u: goto label_11dc30;
            case 0x11DC78u: goto label_11dc78;
            case 0x11DCB0u: goto label_11dcb0;
            case 0x11DCE8u: goto label_11dce8;
            case 0x11DD48u: goto label_11dd48;
            case 0x11DD88u: goto label_11dd88;
            case 0x11DD90u: goto label_11dd90;
            case 0x11DDB0u: goto label_11ddb0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11DC6Cu; }
            if (ctx->pc != 0x11DC6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x11DC6Cu;
    // 0x11dc6c: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x11DC6Cu;
    {
        const bool branch_taken_0x11dc6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11dc6c) {
            ctx->pc = 0x11DD88u;
            goto label_11dd88;
        }
    }
    ctx->pc = 0x11DC74u;
    // 0x11dc74: 0x0  nop
    ctx->pc = 0x11dc74u;
    // NOP
label_11dc78:
    // 0x11dc78: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x11dc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x11dc7c: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x11DC7Cu;
    {
        const bool branch_taken_0x11dc7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11dc7c) {
            ctx->pc = 0x11DD88u;
            goto label_11dd88;
        }
    }
    ctx->pc = 0x11DC84u;
    // 0x11dc84: 0x8e110044  lw          $s1, 0x44($s0)
    ctx->pc = 0x11dc84u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x11dc88: 0x12710017  beq         $s3, $s1, . + 4 + (0x17 << 2)
    ctx->pc = 0x11DC88u;
    {
        const bool branch_taken_0x11dc88 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 17));
        ctx->pc = 0x11DC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DC88u;
            // 0x11dc8c: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dc88) {
            ctx->pc = 0x11DCE8u;
            goto label_11dce8;
        }
    }
    ctx->pc = 0x11DC90u;
    // 0x11dc90: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x11DC90u;
    {
        const bool branch_taken_0x11dc90 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DC94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DC90u;
            // 0x11dc94: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dc90) {
            ctx->pc = 0x11DCB0u;
            goto label_11dcb0;
        }
    }
    ctx->pc = 0x11DC98u;
    // 0x11dc98: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x11dc98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x11dc9c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x11dc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x11dca0: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x11dca0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x11dca4: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x11dca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x11dca8: 0x40f809  jalr        $v0
    ctx->pc = 0x11DCA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11DCB0u);
        ctx->pc = 0x11DCACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DCA8u;
            // 0x11dcac: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11DCB0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11DB68u: goto label_11db68;
            case 0x11DB98u: goto label_11db98;
            case 0x11DBB8u: goto label_11dbb8;
            case 0x11DC30u: goto label_11dc30;
            case 0x11DC78u: goto label_11dc78;
            case 0x11DCB0u: goto label_11dcb0;
            case 0x11DCE8u: goto label_11dce8;
            case 0x11DD48u: goto label_11dd48;
            case 0x11DD88u: goto label_11dd88;
            case 0x11DD90u: goto label_11dd90;
            case 0x11DDB0u: goto label_11ddb0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11DCB0u; }
            if (ctx->pc != 0x11DCB0u) { return; }
        }
        }
    }
    ctx->pc = 0x11DCB0u;
label_11dcb0:
    // 0x11dcb0: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x11dcb0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dcb4: 0x96630000  lhu         $v1, 0x0($s3)
    ctx->pc = 0x11dcb4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x11dcb8: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x11dcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x11dcbc: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x11dcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x11dcc0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11dcc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x11dcc4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11dcc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11dcc8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x11dcc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11dccc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x11dcccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11dcd0: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x11dcd0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11dcd4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x11dcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x11dcd8: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x11dcd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x11dcdc: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x11dcdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x11dce0: 0x40f809  jalr        $v0
    ctx->pc = 0x11DCE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11DCE8u);
        ctx->pc = 0x11DCE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DCE0u;
            // 0x11dce4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11DCE8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11DB68u: goto label_11db68;
            case 0x11DB98u: goto label_11db98;
            case 0x11DBB8u: goto label_11dbb8;
            case 0x11DC30u: goto label_11dc30;
            case 0x11DC78u: goto label_11dc78;
            case 0x11DCB0u: goto label_11dcb0;
            case 0x11DCE8u: goto label_11dce8;
            case 0x11DD48u: goto label_11dd48;
            case 0x11DD88u: goto label_11dd88;
            case 0x11DD90u: goto label_11dd90;
            case 0x11DDB0u: goto label_11ddb0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11DCE8u; }
            if (ctx->pc != 0x11DCE8u) { return; }
        }
        }
    }
    ctx->pc = 0x11DCE8u;
label_11dce8:
    // 0x11dce8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x11dce8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11dcec: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x11dcecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x11dcf0: 0x2471e848  addiu       $s1, $v1, -0x17B8
    ctx->pc = 0x11dcf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961224));
    // 0x11dcf4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11dcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11dcf8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x11dcf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x11dcfc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11dcfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11dd00: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x11dd00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x11dd04: 0x84440090  lh          $a0, 0x90($v0)
    ctx->pc = 0x11dd04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x11dd08: 0x8c420094  lw          $v0, 0x94($v0)
    ctx->pc = 0x11dd08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 148)));
    // 0x11dd0c: 0x40f809  jalr        $v0
    ctx->pc = 0x11DD0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11DD14u);
        ctx->pc = 0x11DD10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DD0Cu;
            // 0x11dd10: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11DD14u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11DB68u: goto label_11db68;
            case 0x11DB98u: goto label_11db98;
            case 0x11DBB8u: goto label_11dbb8;
            case 0x11DC30u: goto label_11dc30;
            case 0x11DC78u: goto label_11dc78;
            case 0x11DCB0u: goto label_11dcb0;
            case 0x11DCE8u: goto label_11dce8;
            case 0x11DD48u: goto label_11dd48;
            case 0x11DD88u: goto label_11dd88;
            case 0x11DD90u: goto label_11dd90;
            case 0x11DDB0u: goto label_11ddb0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11DD14u; }
            if (ctx->pc != 0x11DD14u) { return; }
        }
        }
    }
    ctx->pc = 0x11DD14u;
    // 0x11dd14: 0x1050000c  beq         $v0, $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x11DD14u;
    {
        const bool branch_taken_0x11dd14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x11DD18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DD14u;
            // 0x11dd18: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dd14) {
            ctx->pc = 0x11DD48u;
            goto label_11dd48;
        }
    }
    ctx->pc = 0x11DD1Cu;
    // 0x11dd1c: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x11dd1cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11dd20: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11dd20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11dd24: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x11dd24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x11dd28: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11dd28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11dd2c: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x11dd2cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11dd30: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x11dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x11dd34: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x11dd34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x11dd38: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x11dd38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x11dd3c: 0x40f809  jalr        $v0
    ctx->pc = 0x11DD3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11DD44u);
        ctx->pc = 0x11DD40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DD3Cu;
            // 0x11dd40: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11DD44u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11DB68u: goto label_11db68;
            case 0x11DB98u: goto label_11db98;
            case 0x11DBB8u: goto label_11dbb8;
            case 0x11DC30u: goto label_11dc30;
            case 0x11DC78u: goto label_11dc78;
            case 0x11DCB0u: goto label_11dcb0;
            case 0x11DCE8u: goto label_11dce8;
            case 0x11DD48u: goto label_11dd48;
            case 0x11DD88u: goto label_11dd88;
            case 0x11DD90u: goto label_11dd90;
            case 0x11DDB0u: goto label_11ddb0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11DD44u; }
            if (ctx->pc != 0x11DD44u) { return; }
        }
        }
    }
    ctx->pc = 0x11DD44u;
    // 0x11dd44: 0x0  nop
    ctx->pc = 0x11dd44u;
    // NOP
label_11dd48:
    // 0x11dd48: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x11dd48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x11dd4c: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x11dd4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x11dd50: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x11dd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x11dd54: 0x40f809  jalr        $v0
    ctx->pc = 0x11DD54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11DD5Cu);
        ctx->pc = 0x11DD58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DD54u;
            // 0x11dd58: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11DD5Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11DB68u: goto label_11db68;
            case 0x11DB98u: goto label_11db98;
            case 0x11DBB8u: goto label_11dbb8;
            case 0x11DC30u: goto label_11dc30;
            case 0x11DC78u: goto label_11dc78;
            case 0x11DCB0u: goto label_11dcb0;
            case 0x11DCE8u: goto label_11dce8;
            case 0x11DD48u: goto label_11dd48;
            case 0x11DD88u: goto label_11dd88;
            case 0x11DD90u: goto label_11dd90;
            case 0x11DDB0u: goto label_11ddb0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11DD5Cu; }
            if (ctx->pc != 0x11DD5Cu) { return; }
        }
        }
    }
    ctx->pc = 0x11DD5Cu;
    // 0x11dd5c: 0x12e0000a  beqz        $s7, . + 4 + (0xA << 2)
    ctx->pc = 0x11DD5Cu;
    {
        const bool branch_taken_0x11dd5c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x11dd5c) {
            ctx->pc = 0x11DD88u;
            goto label_11dd88;
        }
    }
    ctx->pc = 0x11DD64u;
    // 0x11dd64: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x11dd64u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11dd68: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x11dd68u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11dd6c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x11dd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x11dd70: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11dd70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x11dd74: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x11dd74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x11dd78: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x11dd78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x11dd7c: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x11dd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x11dd80: 0x40f809  jalr        $v0
    ctx->pc = 0x11DD80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11DD88u);
        ctx->pc = 0x11DD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DD80u;
            // 0x11dd84: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11DD88u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11DB68u: goto label_11db68;
            case 0x11DB98u: goto label_11db98;
            case 0x11DBB8u: goto label_11dbb8;
            case 0x11DC30u: goto label_11dc30;
            case 0x11DC78u: goto label_11dc78;
            case 0x11DCB0u: goto label_11dcb0;
            case 0x11DCE8u: goto label_11dce8;
            case 0x11DD48u: goto label_11dd48;
            case 0x11DD88u: goto label_11dd88;
            case 0x11DD90u: goto label_11dd90;
            case 0x11DDB0u: goto label_11ddb0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11DD88u; }
            if (ctx->pc != 0x11DD88u) { return; }
        }
        }
    }
    ctx->pc = 0x11DD88u;
label_11dd88:
    // 0x11dd88: 0x16c0ffa9  bnez        $s6, . + 4 + (-0x57 << 2)
    ctx->pc = 0x11DD88u;
    {
        const bool branch_taken_0x11dd88 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x11DD8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DD88u;
            // 0x11dd8c: 0x2642fff8  addiu       $v0, $s2, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dd88) {
            ctx->pc = 0x11DC30u;
            runtime->cooperativeGuestYield();
            goto label_11dc30;
        }
    }
    ctx->pc = 0x11DD90u;
label_11dd90:
    // 0x11dd90: 0x12a00007  beqz        $s5, . + 4 + (0x7 << 2)
    ctx->pc = 0x11DD90u;
    {
        const bool branch_taken_0x11dd90 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DD94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DD90u;
            // 0x11dd94: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dd90) {
            ctx->pc = 0x11DDB0u;
            goto label_11ddb0;
        }
    }
    ctx->pc = 0x11DD98u;
    // 0x11dd98: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x11dd98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x11dd9c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x11dd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x11dda0: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x11dda0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x11dda4: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x11dda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x11dda8: 0x40f809  jalr        $v0
    ctx->pc = 0x11DDA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11DDB0u);
        ctx->pc = 0x11DDACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DDA8u;
            // 0x11ddac: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11DDB0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11DB68u: goto label_11db68;
            case 0x11DB98u: goto label_11db98;
            case 0x11DBB8u: goto label_11dbb8;
            case 0x11DC30u: goto label_11dc30;
            case 0x11DC78u: goto label_11dc78;
            case 0x11DCB0u: goto label_11dcb0;
            case 0x11DCE8u: goto label_11dce8;
            case 0x11DD48u: goto label_11dd48;
            case 0x11DD88u: goto label_11dd88;
            case 0x11DD90u: goto label_11dd90;
            case 0x11DDB0u: goto label_11ddb0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11DDB0u; }
            if (ctx->pc != 0x11DDB0u) { return; }
        }
        }
    }
    ctx->pc = 0x11DDB0u;
label_11ddb0:
    // 0x11ddb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11ddb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11ddb4: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x11ddb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x11ddb8: 0xae821058  sw          $v0, 0x1058($s4)
    ctx->pc = 0x11ddb8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4184), GPR_U32(ctx, 2));
    // 0x11ddbc: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x11ddbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x11ddc0: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x11ddc0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11ddc4: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x11ddc4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11ddc8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x11ddc8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11ddcc: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x11ddccu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11ddd0: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x11ddd0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11ddd4: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x11ddd4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ddd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11ddd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11dddc: 0x3e00008  jr          $ra
    ctx->pc = 0x11DDDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11DDE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11DDDCu;
            // 0x11dde0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11DB68u: goto label_11db68;
            case 0x11DB98u: goto label_11db98;
            case 0x11DBB8u: goto label_11dbb8;
            case 0x11DC30u: goto label_11dc30;
            case 0x11DC78u: goto label_11dc78;
            case 0x11DCB0u: goto label_11dcb0;
            case 0x11DCE8u: goto label_11dce8;
            case 0x11DD48u: goto label_11dd48;
            case 0x11DD88u: goto label_11dd88;
            case 0x11DD90u: goto label_11dd90;
            case 0x11DDB0u: goto label_11ddb0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11DDE4u;
    // 0x11dde4: 0x0  nop
    ctx->pc = 0x11dde4u;
    // NOP
}
