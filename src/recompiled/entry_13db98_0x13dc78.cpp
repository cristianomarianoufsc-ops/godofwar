#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_13db98
// Address: 0x13db98 - 0x13dc78
void entry_13db98_0x13dc78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_13db98_0x13dc78");
#endif

    ctx->pc = 0x13db98u;

    // 0x13db98: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x13db98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x13db9c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13db9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13dba0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13dba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13dba4: 0xc04f870  jal         func_13E1C0
    ctx->pc = 0x13DBA4u;
    SET_GPR_U32(ctx, 31, 0x13DBACu);
    ctx->pc = 0x13DBA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13DBA4u;
            // 0x13dba8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E1C0u;
    if (runtime->hasFunction(0x13E1C0u)) {
        auto targetFn = runtime->lookupFunction(0x13E1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DBACu; }
        if (ctx->pc != 0x13DBACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13e1c0_0x13e1f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13DBACu; }
        if (ctx->pc != 0x13DBACu) { return; }
    }
    ctx->pc = 0x13DBACu;
    // 0x13dbac: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x13dbacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dbb0: 0x2605fffc  addiu       $a1, $s0, -0x4
    ctx->pc = 0x13dbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967292));
    // 0x13dbb4: 0x8e03fffc  lw          $v1, -0x4($s0)
    ctx->pc = 0x13dbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
    // 0x13dbb8: 0x3c0801ff  lui         $t0, 0x1FF
    ctx->pc = 0x13dbb8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)511 << 16));
    // 0x13dbbc: 0x3508ffff  ori         $t0, $t0, 0xFFFF
    ctx->pc = 0x13dbbcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)65535);
    // 0x13dbc0: 0x315c2  srl         $v0, $v1, 23
    ctx->pc = 0x13dbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 23));
    // 0x13dbc4: 0x683024  and         $a2, $v1, $t0
    ctx->pc = 0x13dbc4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
    // 0x13dbc8: 0x3042007c  andi        $v0, $v0, 0x7C
    ctx->pc = 0x13dbc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)124);
    // 0x13dbcc: 0xa22823  subu        $a1, $a1, $v0
    ctx->pc = 0x13dbccu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x13dbd0: 0x8ca3fffc  lw          $v1, -0x4($a1)
    ctx->pc = 0x13dbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294967292)));
    // 0x13dbd4: 0x3c0201ff  lui         $v0, 0x1FF
    ctx->pc = 0x13dbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)511 << 16));
    // 0x13dbd8: 0x3c0ac000  lui         $t2, 0xC000
    ctx->pc = 0x13dbd8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)49152 << 16));
    // 0x13dbdc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x13dbdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x13dbe0: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x13dbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x13dbe4: 0x623824  and         $a3, $v1, $v0
    ctx->pc = 0x13dbe4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13dbe8: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x13dbe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x13dbec: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x13DBECu;
    {
        const bool branch_taken_0x13dbec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13DBF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DBECu;
            // 0x13dbf0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dbec) {
            ctx->pc = 0x13DC18u;
            goto label_13dc18;
        }
    }
    ctx->pc = 0x13DBF4u;
    // 0x13dbf4: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x13dbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x13dbf8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x13dbf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x13dbfc: 0xa21023  subu        $v0, $a1, $v0
    ctx->pc = 0x13dbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x13dc00: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x13dc00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x13dc04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x13dc04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dc08: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x13dc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13dc0c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x13dc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x13dc10: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x13dc10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x13dc14: 0x0  nop
    ctx->pc = 0x13dc14u;
    // NOP
label_13dc18:
    // 0x13dc18: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x13dc18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13dc1c: 0x483824  and         $a3, $v0, $t0
    ctx->pc = 0x13dc1cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & GPR_U64(ctx, 8));
    // 0x13dc20: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x13dc20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x13dc24: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x13DC24u;
    {
        const bool branch_taken_0x13dc24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13dc24) {
            ctx->pc = 0x13DC28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13DC24u;
            // 0x13dc28: 0x8d230004  lw          $v1, 0x4($t1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13DC44u;
            goto label_13dc44;
        }
    }
    ctx->pc = 0x13DC2Cu;
    // 0x13dc2c: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x13dc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13dc30: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x13dc30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x13dc34: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x13dc34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x13dc38: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x13dc38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x13dc3c: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x13dc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
    // 0x13dc40: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x13dc40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_13dc44:
    // 0x13dc44: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x13dc44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x13dc48: 0xaca90008  sw          $t1, 0x8($a1)
    ctx->pc = 0x13dc48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 9));
    // 0x13dc4c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x13dc4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x13dc50: 0xaca30004  sw          $v1, 0x4($a1)
    ctx->pc = 0x13dc50u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 3));
    // 0x13dc54: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x13dc54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 5));
    // 0x13dc58: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x13dc58u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x13dc5c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x13dc5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13dc60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13dc60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13dc64: 0xac46fffc  sw          $a2, -0x4($v0)
    ctx->pc = 0x13dc64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 6));
    // 0x13dc68: 0xad250004  sw          $a1, 0x4($t1)
    ctx->pc = 0x13dc68u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 5));
    // 0x13dc6c: 0x3e00008  jr          $ra
    ctx->pc = 0x13DC6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13DC70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13DC6Cu;
            // 0x13dc70: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13DC18u: goto label_13dc18;
            case 0x13DC44u: goto label_13dc44;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13DC74u;
    // 0x13dc74: 0x0  nop
    ctx->pc = 0x13dc74u;
    // NOP
}
