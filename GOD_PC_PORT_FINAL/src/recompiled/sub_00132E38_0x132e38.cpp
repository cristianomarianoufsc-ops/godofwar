#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00132E38
// Address: 0x132e38 - 0x133450
void sub_00132E38_0x132e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00132E38_0x132e38");
#endif

    ctx->pc = 0x132e38u;

    // 0x132e38: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x132e38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x132e3c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x132e3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x132e40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x132e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x132e44: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x132e44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132e48: 0x8c43e858  lw          $v1, -0x17A8($v0)
    ctx->pc = 0x132e48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961240)));
    // 0x132e4c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x132e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x132e50: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x132e50u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x132e54: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x132e54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x132e58: 0x40f809  jalr        $v0
    ctx->pc = 0x132E58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x132E60u);
        ctx->pc = 0x132E5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132E58u;
            // 0x132e5c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x132E60u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132E94u: goto label_132e94;
            case 0x132EE8u: goto label_132ee8;
            case 0x132F68u: goto label_132f68;
            case 0x132F78u: goto label_132f78;
            case 0x132F7Cu: goto label_132f7c;
            case 0x132F9Cu: goto label_132f9c;
            case 0x132FA0u: goto label_132fa0;
            case 0x132FA8u: goto label_132fa8;
            case 0x132FBCu: goto label_132fbc;
            case 0x133000u: goto label_133000;
            case 0x133068u: goto label_133068;
            case 0x13306Cu: goto label_13306c;
            case 0x133080u: goto label_133080;
            case 0x1330F8u: goto label_1330f8;
            case 0x1330FCu: goto label_1330fc;
            case 0x133108u: goto label_133108;
            case 0x133140u: goto label_133140;
            case 0x133180u: goto label_133180;
            case 0x13319Cu: goto label_13319c;
            case 0x1331ACu: goto label_1331ac;
            case 0x1331D0u: goto label_1331d0;
            case 0x1331F4u: goto label_1331f4;
            case 0x13320Cu: goto label_13320c;
            case 0x133214u: goto label_133214;
            case 0x133228u: goto label_133228;
            case 0x13322Cu: goto label_13322c;
            case 0x133230u: goto label_133230;
            case 0x13323Cu: goto label_13323c;
            case 0x1332A0u: goto label_1332a0;
            case 0x133300u: goto label_133300;
            case 0x133358u: goto label_133358;
            case 0x13337Cu: goto label_13337c;
            case 0x133380u: goto label_133380;
            case 0x1333C8u: goto label_1333c8;
            case 0x133420u: goto label_133420;
            case 0x13342Cu: goto label_13342c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x132E60u; }
            if (ctx->pc != 0x132E60u) { return; }
        }
        }
    }
    ctx->pc = 0x132E60u;
    // 0x132e60: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x132e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x132e64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x132e64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132e68: 0x3e00008  jr          $ra
    ctx->pc = 0x132E68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132E6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132E68u;
            // 0x132e6c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132E94u: goto label_132e94;
            case 0x132EE8u: goto label_132ee8;
            case 0x132F68u: goto label_132f68;
            case 0x132F78u: goto label_132f78;
            case 0x132F7Cu: goto label_132f7c;
            case 0x132F9Cu: goto label_132f9c;
            case 0x132FA0u: goto label_132fa0;
            case 0x132FA8u: goto label_132fa8;
            case 0x132FBCu: goto label_132fbc;
            case 0x133000u: goto label_133000;
            case 0x133068u: goto label_133068;
            case 0x13306Cu: goto label_13306c;
            case 0x133080u: goto label_133080;
            case 0x1330F8u: goto label_1330f8;
            case 0x1330FCu: goto label_1330fc;
            case 0x133108u: goto label_133108;
            case 0x133140u: goto label_133140;
            case 0x133180u: goto label_133180;
            case 0x13319Cu: goto label_13319c;
            case 0x1331ACu: goto label_1331ac;
            case 0x1331D0u: goto label_1331d0;
            case 0x1331F4u: goto label_1331f4;
            case 0x13320Cu: goto label_13320c;
            case 0x133214u: goto label_133214;
            case 0x133228u: goto label_133228;
            case 0x13322Cu: goto label_13322c;
            case 0x133230u: goto label_133230;
            case 0x13323Cu: goto label_13323c;
            case 0x1332A0u: goto label_1332a0;
            case 0x133300u: goto label_133300;
            case 0x133358u: goto label_133358;
            case 0x13337Cu: goto label_13337c;
            case 0x133380u: goto label_133380;
            case 0x1333C8u: goto label_1333c8;
            case 0x133420u: goto label_133420;
            case 0x13342Cu: goto label_13342c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x132E70u;
    // 0x132e70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x132e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x132e74: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x132e74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132e78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x132e78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x132e7c: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x132e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x132e80: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x132E80u;
    {
        const bool branch_taken_0x132e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x132E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132E80u;
            // 0x132e84: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132e80) {
            ctx->pc = 0x132E94u;
            goto label_132e94;
        }
    }
    ctx->pc = 0x132E88u;
    // 0x132e88: 0x40f809  jalr        $v0
    ctx->pc = 0x132E88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x132E90u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x132E90u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132E94u: goto label_132e94;
            case 0x132EE8u: goto label_132ee8;
            case 0x132F68u: goto label_132f68;
            case 0x132F78u: goto label_132f78;
            case 0x132F7Cu: goto label_132f7c;
            case 0x132F9Cu: goto label_132f9c;
            case 0x132FA0u: goto label_132fa0;
            case 0x132FA8u: goto label_132fa8;
            case 0x132FBCu: goto label_132fbc;
            case 0x133000u: goto label_133000;
            case 0x133068u: goto label_133068;
            case 0x13306Cu: goto label_13306c;
            case 0x133080u: goto label_133080;
            case 0x1330F8u: goto label_1330f8;
            case 0x1330FCu: goto label_1330fc;
            case 0x133108u: goto label_133108;
            case 0x133140u: goto label_133140;
            case 0x133180u: goto label_133180;
            case 0x13319Cu: goto label_13319c;
            case 0x1331ACu: goto label_1331ac;
            case 0x1331D0u: goto label_1331d0;
            case 0x1331F4u: goto label_1331f4;
            case 0x13320Cu: goto label_13320c;
            case 0x133214u: goto label_133214;
            case 0x133228u: goto label_133228;
            case 0x13322Cu: goto label_13322c;
            case 0x133230u: goto label_133230;
            case 0x13323Cu: goto label_13323c;
            case 0x1332A0u: goto label_1332a0;
            case 0x133300u: goto label_133300;
            case 0x133358u: goto label_133358;
            case 0x13337Cu: goto label_13337c;
            case 0x133380u: goto label_133380;
            case 0x1333C8u: goto label_1333c8;
            case 0x133420u: goto label_133420;
            case 0x13342Cu: goto label_13342c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x132E90u; }
            if (ctx->pc != 0x132E90u) { return; }
        }
        }
    }
    ctx->pc = 0x132E90u;
    // 0x132e90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x132e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_132e94:
    // 0x132e94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x132e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132e98: 0x3e00008  jr          $ra
    ctx->pc = 0x132E98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132E98u;
            // 0x132e9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132E94u: goto label_132e94;
            case 0x132EE8u: goto label_132ee8;
            case 0x132F68u: goto label_132f68;
            case 0x132F78u: goto label_132f78;
            case 0x132F7Cu: goto label_132f7c;
            case 0x132F9Cu: goto label_132f9c;
            case 0x132FA0u: goto label_132fa0;
            case 0x132FA8u: goto label_132fa8;
            case 0x132FBCu: goto label_132fbc;
            case 0x133000u: goto label_133000;
            case 0x133068u: goto label_133068;
            case 0x13306Cu: goto label_13306c;
            case 0x133080u: goto label_133080;
            case 0x1330F8u: goto label_1330f8;
            case 0x1330FCu: goto label_1330fc;
            case 0x133108u: goto label_133108;
            case 0x133140u: goto label_133140;
            case 0x133180u: goto label_133180;
            case 0x13319Cu: goto label_13319c;
            case 0x1331ACu: goto label_1331ac;
            case 0x1331D0u: goto label_1331d0;
            case 0x1331F4u: goto label_1331f4;
            case 0x13320Cu: goto label_13320c;
            case 0x133214u: goto label_133214;
            case 0x133228u: goto label_133228;
            case 0x13322Cu: goto label_13322c;
            case 0x133230u: goto label_133230;
            case 0x13323Cu: goto label_13323c;
            case 0x1332A0u: goto label_1332a0;
            case 0x133300u: goto label_133300;
            case 0x133358u: goto label_133358;
            case 0x13337Cu: goto label_13337c;
            case 0x133380u: goto label_133380;
            case 0x1333C8u: goto label_1333c8;
            case 0x133420u: goto label_133420;
            case 0x13342Cu: goto label_13342c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x132EA0u;
    // 0x132ea0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x132ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x132ea4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x132ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x132ea8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x132ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x132eac: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x132eacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132eb0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x132eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x132eb4: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x132eb4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x132eb8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x132eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x132ebc: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x132EBCu;
    {
        const bool branch_taken_0x132ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x132EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132EBCu;
            // 0x132ec0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132ebc) {
            ctx->pc = 0x132F78u;
            goto label_132f78;
        }
    }
    ctx->pc = 0x132EC4u;
    // 0x132ec4: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x132ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x132ec8: 0x5060002c  beql        $v1, $zero, . + 4 + (0x2C << 2)
    ctx->pc = 0x132EC8u;
    {
        const bool branch_taken_0x132ec8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x132ec8) {
            ctx->pc = 0x132ECCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x132EC8u;
            // 0x132ecc: 0x8e03005c  lw          $v1, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x132F7Cu;
            goto label_132f7c;
        }
    }
    ctx->pc = 0x132ED0u;
    // 0x132ed0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x132ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x132ed4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x132ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x132ed8: 0x10430027  beq         $v0, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x132ED8u;
    {
        const bool branch_taken_0x132ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x132EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132ED8u;
            // 0x132edc: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132ed8) {
            ctx->pc = 0x132F78u;
            goto label_132f78;
        }
    }
    ctx->pc = 0x132EE0u;
    // 0x132ee0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x132ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x132ee4: 0x0  nop
    ctx->pc = 0x132ee4u;
    // NOP
label_132ee8:
    // 0x132ee8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x132ee8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132eec: 0x2443fff8  addiu       $v1, $v0, -0x8
    ctx->pc = 0x132eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x132ef0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x132ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x132ef4: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x132ef4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x132ef8: 0x94c30000  lhu         $v1, 0x0($a2)
    ctx->pc = 0x132ef8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x132efc: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x132efcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x132f00: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x132f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x132f04: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x132f04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x132f08: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x132f08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x132f0c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x132f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x132f10: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x132f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x132f14: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x132f14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x132f18: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x132f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x132f1c: 0x8c630024  lw          $v1, 0x24($v1)
    ctx->pc = 0x132f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
    // 0x132f20: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x132f20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x132f24: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x132f24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x132f28: 0x94c20006  lhu         $v0, 0x6($a2)
    ctx->pc = 0x132f28u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x132f2c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x132f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x132f30: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x132f30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x132f34: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x132f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x132f38: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x132f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x132f3c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x132F3Cu;
    {
        const bool branch_taken_0x132f3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x132F40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132F3Cu;
            // 0x132f40: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132f3c) {
            ctx->pc = 0x132F68u;
            goto label_132f68;
        }
    }
    ctx->pc = 0x132F44u;
    // 0x132f44: 0x94c20004  lhu         $v0, 0x4($a2)
    ctx->pc = 0x132f44u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x132f48: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x132f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x132f4c: 0x34420003  ori         $v0, $v0, 0x3
    ctx->pc = 0x132f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
    // 0x132f50: 0xa4c20004  sh          $v0, 0x4($a2)
    ctx->pc = 0x132f50u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x132f54: 0x8c620044  lw          $v0, 0x44($v1)
    ctx->pc = 0x132f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x132f58: 0x84640040  lh          $a0, 0x40($v1)
    ctx->pc = 0x132f58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x132f5c: 0x40f809  jalr        $v0
    ctx->pc = 0x132F5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x132F64u);
        ctx->pc = 0x132F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132F5Cu;
            // 0x132f60: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x132F64u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132E94u: goto label_132e94;
            case 0x132EE8u: goto label_132ee8;
            case 0x132F68u: goto label_132f68;
            case 0x132F78u: goto label_132f78;
            case 0x132F7Cu: goto label_132f7c;
            case 0x132F9Cu: goto label_132f9c;
            case 0x132FA0u: goto label_132fa0;
            case 0x132FA8u: goto label_132fa8;
            case 0x132FBCu: goto label_132fbc;
            case 0x133000u: goto label_133000;
            case 0x133068u: goto label_133068;
            case 0x13306Cu: goto label_13306c;
            case 0x133080u: goto label_133080;
            case 0x1330F8u: goto label_1330f8;
            case 0x1330FCu: goto label_1330fc;
            case 0x133108u: goto label_133108;
            case 0x133140u: goto label_133140;
            case 0x133180u: goto label_133180;
            case 0x13319Cu: goto label_13319c;
            case 0x1331ACu: goto label_1331ac;
            case 0x1331D0u: goto label_1331d0;
            case 0x1331F4u: goto label_1331f4;
            case 0x13320Cu: goto label_13320c;
            case 0x133214u: goto label_133214;
            case 0x133228u: goto label_133228;
            case 0x13322Cu: goto label_13322c;
            case 0x133230u: goto label_133230;
            case 0x13323Cu: goto label_13323c;
            case 0x1332A0u: goto label_1332a0;
            case 0x133300u: goto label_133300;
            case 0x133358u: goto label_133358;
            case 0x13337Cu: goto label_13337c;
            case 0x133380u: goto label_133380;
            case 0x1333C8u: goto label_1333c8;
            case 0x133420u: goto label_133420;
            case 0x13342Cu: goto label_13342c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x132F64u; }
            if (ctx->pc != 0x132F64u) { return; }
        }
        }
    }
    ctx->pc = 0x132F64u;
    // 0x132f64: 0x0  nop
    ctx->pc = 0x132f64u;
    // NOP
label_132f68:
    // 0x132f68: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x132f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x132f6c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x132f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x132f70: 0x1462ffdd  bne         $v1, $v0, . + 4 + (-0x23 << 2)
    ctx->pc = 0x132F70u;
    {
        const bool branch_taken_0x132f70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x132F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132F70u;
            // 0x132f74: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132f70) {
            ctx->pc = 0x132EE8u;
            runtime->cooperativeGuestYield();
            goto label_132ee8;
        }
    }
    ctx->pc = 0x132F78u;
label_132f78:
    // 0x132f78: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x132f78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_132f7c:
    // 0x132f7c: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x132F7Cu;
    {
        const bool branch_taken_0x132f7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x132f7c) {
            ctx->pc = 0x132F80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x132F7Cu;
            // 0x132f80: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x132FA8u;
            goto label_132fa8;
        }
    }
    ctx->pc = 0x132F84u;
    // 0x132f84: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x132f84u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x132f88: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x132f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x132f8c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x132F8Cu;
    {
        const bool branch_taken_0x132f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x132F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132F8Cu;
            // 0x132f90: 0x94620004  lhu         $v0, 0x4($v1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x132f8c) {
            ctx->pc = 0x132F9Cu;
            goto label_132f9c;
        }
    }
    ctx->pc = 0x132F94u;
    // 0x132f94: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x132F94u;
    {
        const bool branch_taken_0x132f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x132F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132F94u;
            // 0x132f98: 0x34420003  ori         $v0, $v0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x132f94) {
            ctx->pc = 0x132FA0u;
            goto label_132fa0;
        }
    }
    ctx->pc = 0x132F9Cu;
label_132f9c:
    // 0x132f9c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x132f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_132fa0:
    // 0x132fa0: 0xa4620004  sh          $v0, 0x4($v1)
    ctx->pc = 0x132fa0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4), (uint16_t)GPR_U32(ctx, 2));
    // 0x132fa4: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x132fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_132fa8:
    // 0x132fa8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x132FA8u;
    {
        const bool branch_taken_0x132fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x132fa8) {
            ctx->pc = 0x132FACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x132FA8u;
            // 0x132fac: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x132FBCu;
            goto label_132fbc;
        }
    }
    ctx->pc = 0x132FB0u;
    // 0x132fb0: 0x40f809  jalr        $v0
    ctx->pc = 0x132FB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x132FB8u);
        ctx->pc = 0x132FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132FB0u;
            // 0x132fb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x132FB8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132E94u: goto label_132e94;
            case 0x132EE8u: goto label_132ee8;
            case 0x132F68u: goto label_132f68;
            case 0x132F78u: goto label_132f78;
            case 0x132F7Cu: goto label_132f7c;
            case 0x132F9Cu: goto label_132f9c;
            case 0x132FA0u: goto label_132fa0;
            case 0x132FA8u: goto label_132fa8;
            case 0x132FBCu: goto label_132fbc;
            case 0x133000u: goto label_133000;
            case 0x133068u: goto label_133068;
            case 0x13306Cu: goto label_13306c;
            case 0x133080u: goto label_133080;
            case 0x1330F8u: goto label_1330f8;
            case 0x1330FCu: goto label_1330fc;
            case 0x133108u: goto label_133108;
            case 0x133140u: goto label_133140;
            case 0x133180u: goto label_133180;
            case 0x13319Cu: goto label_13319c;
            case 0x1331ACu: goto label_1331ac;
            case 0x1331D0u: goto label_1331d0;
            case 0x1331F4u: goto label_1331f4;
            case 0x13320Cu: goto label_13320c;
            case 0x133214u: goto label_133214;
            case 0x133228u: goto label_133228;
            case 0x13322Cu: goto label_13322c;
            case 0x133230u: goto label_133230;
            case 0x13323Cu: goto label_13323c;
            case 0x1332A0u: goto label_1332a0;
            case 0x133300u: goto label_133300;
            case 0x133358u: goto label_133358;
            case 0x13337Cu: goto label_13337c;
            case 0x133380u: goto label_133380;
            case 0x1333C8u: goto label_1333c8;
            case 0x133420u: goto label_133420;
            case 0x13342Cu: goto label_13342c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x132FB8u; }
            if (ctx->pc != 0x132FB8u) { return; }
        }
        }
    }
    ctx->pc = 0x132FB8u;
    // 0x132fb8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x132fb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_132fbc:
    // 0x132fbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x132fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132fc0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x132fc0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x132fc4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x132fc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x132fc8: 0x3e00008  jr          $ra
    ctx->pc = 0x132FC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x132FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x132FC8u;
            // 0x132fcc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132E94u: goto label_132e94;
            case 0x132EE8u: goto label_132ee8;
            case 0x132F68u: goto label_132f68;
            case 0x132F78u: goto label_132f78;
            case 0x132F7Cu: goto label_132f7c;
            case 0x132F9Cu: goto label_132f9c;
            case 0x132FA0u: goto label_132fa0;
            case 0x132FA8u: goto label_132fa8;
            case 0x132FBCu: goto label_132fbc;
            case 0x133000u: goto label_133000;
            case 0x133068u: goto label_133068;
            case 0x13306Cu: goto label_13306c;
            case 0x133080u: goto label_133080;
            case 0x1330F8u: goto label_1330f8;
            case 0x1330FCu: goto label_1330fc;
            case 0x133108u: goto label_133108;
            case 0x133140u: goto label_133140;
            case 0x133180u: goto label_133180;
            case 0x13319Cu: goto label_13319c;
            case 0x1331ACu: goto label_1331ac;
            case 0x1331D0u: goto label_1331d0;
            case 0x1331F4u: goto label_1331f4;
            case 0x13320Cu: goto label_13320c;
            case 0x133214u: goto label_133214;
            case 0x133228u: goto label_133228;
            case 0x13322Cu: goto label_13322c;
            case 0x133230u: goto label_133230;
            case 0x13323Cu: goto label_13323c;
            case 0x1332A0u: goto label_1332a0;
            case 0x133300u: goto label_133300;
            case 0x133358u: goto label_133358;
            case 0x13337Cu: goto label_13337c;
            case 0x133380u: goto label_133380;
            case 0x1333C8u: goto label_1333c8;
            case 0x133420u: goto label_133420;
            case 0x13342Cu: goto label_13342c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x132FD0u;
    // 0x132fd0: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x132fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x132fd4: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x132fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x132fd8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x132fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132fdc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x132fdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x132fe0: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x132fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x132fe4: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x132fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x132fe8: 0x26230024  addiu       $v1, $s1, 0x24
    ctx->pc = 0x132fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x132fec: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x132fecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x132ff0: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x132ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x132ff4: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x132ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x132ff8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x132ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x132ffc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x132ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_133000:
    // 0x133000: 0x0  nop
    ctx->pc = 0x133000u;
    // NOP
    // 0x133004: 0x0  nop
    ctx->pc = 0x133004u;
    // NOP
    // 0x133008: 0x0  nop
    ctx->pc = 0x133008u;
    // NOP
    // 0x13300c: 0x0  nop
    ctx->pc = 0x13300cu;
    // NOP
    // 0x133010: 0x0  nop
    ctx->pc = 0x133010u;
    // NOP
    // 0x133014: 0x5482fffa  bnel        $a0, $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x133014u;
    {
        const bool branch_taken_0x133014 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x133014) {
            ctx->pc = 0x133018u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x133014u;
            // 0x133018: 0x2484ffff  addiu       $a0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x133000u;
            runtime->cooperativeGuestYield();
            goto label_133000;
        }
    }
    ctx->pc = 0x13301Cu;
    // 0x13301c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x13301cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x133020: 0xaca40080  sw          $a0, 0x80($a1)
    ctx->pc = 0x133020u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 4));
    // 0x133024: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x133024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
    // 0x133028: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x133028u;
    {
        const bool branch_taken_0x133028 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x13302Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133028u;
            // 0x13302c: 0xaca00084  sw          $zero, 0x84($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133028) {
            ctx->pc = 0x133068u;
            goto label_133068;
        }
    }
    ctx->pc = 0x133030u;
    // 0x133030: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x133030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x133034: 0x1043000d  beq         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x133034u;
    {
        const bool branch_taken_0x133034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x133038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133034u;
            // 0x133038: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133034) {
            ctx->pc = 0x13306Cu;
            goto label_13306c;
        }
    }
    ctx->pc = 0x13303Cu;
    // 0x13303c: 0xaca00080  sw          $zero, 0x80($a1)
    ctx->pc = 0x13303cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 0));
    // 0x133040: 0x6ba20097  ldl         $v0, 0x97($sp)
    ctx->pc = 0x133040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 151); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x133044: 0x6fa20090  ldr         $v0, 0x90($sp)
    ctx->pc = 0x133044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 144); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x133048: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x133048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x13304c: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x13304cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x133050: 0x8ca20080  lw          $v0, 0x80($a1)
    ctx->pc = 0x133050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 128)));
    // 0x133054: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x133054u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x133058: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x133058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x13305c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x13305cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x133060: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x133060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x133064: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x133064u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_133068:
    // 0x133068: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x133068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_13306c:
    // 0x13306c: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x13306cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x133070: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x133070u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x133074: 0x10400071  beqz        $v0, . + 4 + (0x71 << 2)
    ctx->pc = 0x133074u;
    {
        const bool branch_taken_0x133074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x133078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133074u;
            // 0x133078: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133074) {
            ctx->pc = 0x13323Cu;
            goto label_13323c;
        }
    }
    ctx->pc = 0x13307Cu;
    // 0x13307c: 0x8fa70080  lw          $a3, 0x80($sp)
    ctx->pc = 0x13307cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_133080:
    // 0x133080: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x133080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133084: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x133084u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133088: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x133088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x13308c: 0x3a22021  addu        $a0, $sp, $v0
    ctx->pc = 0x13308cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x133090: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x133090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x133094: 0x2462fff8  addiu       $v0, $v1, -0x8
    ctx->pc = 0x133094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x133098: 0x43800b  movn        $s0, $v0, $v1
    ctx->pc = 0x133098u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x13309c: 0x8fa20084  lw          $v0, 0x84($sp)
    ctx->pc = 0x13309cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x1330a0: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1330A0u;
    {
        const bool branch_taken_0x1330a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1330A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1330A0u;
            // 0x1330a4: 0x8e050024  lw          $a1, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1330a0) {
            ctx->pc = 0x1330F8u;
            goto label_1330f8;
        }
    }
    ctx->pc = 0x1330A8u;
    // 0x1330a8: 0x50a00014  beql        $a1, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x1330A8u;
    {
        const bool branch_taken_0x1330a8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1330a8) {
            ctx->pc = 0x1330ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1330A8u;
            // 0x1330ac: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1330FCu;
            goto label_1330fc;
        }
    }
    ctx->pc = 0x1330B0u;
    // 0x1330b0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1330b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1330b4: 0x50450011  beql        $v0, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1330B4u;
    {
        const bool branch_taken_0x1330b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x1330b4) {
            ctx->pc = 0x1330B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1330B4u;
            // 0x1330b8: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1330FCu;
            goto label_1330fc;
        }
    }
    ctx->pc = 0x1330BCu;
    // 0x1330bc: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x1330bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1330c0: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x1330c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1330c4: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x1330c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
    // 0x1330c8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1330c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x1330cc: 0x6ba800a7  ldl         $t0, 0xA7($sp)
    ctx->pc = 0x1330ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 167); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x1330d0: 0x6fa800a0  ldr         $t0, 0xA0($sp)
    ctx->pc = 0x1330d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 160); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x1330d4: 0xb0480007  sdl         $t0, 0x7($v0)
    ctx->pc = 0x1330d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1330d8: 0xb4480000  sdr         $t0, 0x0($v0)
    ctx->pc = 0x1330d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x1330dc: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1330dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1330e0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1330e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1330e4: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x1330e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x1330e8: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1330e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1330ec: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1330ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1330f0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x1330F0u;
    {
        const bool branch_taken_0x1330f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1330F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1330F0u;
            // 0x1330f4: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1330f0) {
            ctx->pc = 0x133140u;
            goto label_133140;
        }
    }
    ctx->pc = 0x1330F8u;
label_1330f8:
    // 0x1330f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1330f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1330fc:
    // 0x1330fc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1330fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x133100: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x133100u;
    {
        const bool branch_taken_0x133100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x133104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133100u;
            // 0x133104: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133100) {
            ctx->pc = 0x133140u;
            goto label_133140;
        }
    }
    ctx->pc = 0x133108u;
label_133108:
    // 0x133108: 0x8cc20080  lw          $v0, 0x80($a2)
    ctx->pc = 0x133108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 128)));
    // 0x13310c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x13310cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x133110: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x133110u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x133114: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x133114u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x133118: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x133118u;
    {
        const bool branch_taken_0x133118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13311Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133118u;
            // 0x13311c: 0xacc30080  sw          $v1, 0x80($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 128), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133118) {
            ctx->pc = 0x133140u;
            goto label_133140;
        }
    }
    ctx->pc = 0x133120u;
    // 0x133120: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x133120u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x133124: 0xc22021  addu        $a0, $a2, $v0
    ctx->pc = 0x133124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x133128: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x133128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13312c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x13312cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x133130: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x133130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x133134: 0x1043fff4  beq         $v0, $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x133134u;
    {
        const bool branch_taken_0x133134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x133138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133134u;
            // 0x133138: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133134) {
            ctx->pc = 0x133108u;
            runtime->cooperativeGuestYield();
            goto label_133108;
        }
    }
    ctx->pc = 0x13313Cu;
    // 0x13313c: 0x0  nop
    ctx->pc = 0x13313cu;
    // NOP
label_133140:
    // 0x133140: 0xacc00084  sw          $zero, 0x84($a2)
    ctx->pc = 0x133140u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 132), GPR_U32(ctx, 0));
    // 0x133144: 0x96030004  lhu         $v1, 0x4($s0)
    ctx->pc = 0x133144u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x133148: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x133148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x13314c: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x13314Cu;
    {
        const bool branch_taken_0x13314c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x133150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13314Cu;
            // 0x133150: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13314c) {
            ctx->pc = 0x133230u;
            goto label_133230;
        }
    }
    ctx->pc = 0x133154u;
    // 0x133154: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x133154u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x133158: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x133158u;
    {
        const bool branch_taken_0x133158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13315Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133158u;
            // 0x13315c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133158) {
            ctx->pc = 0x133180u;
            goto label_133180;
        }
    }
    ctx->pc = 0x133160u;
    // 0x133160: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x133160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x133164: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x133164u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x133168: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x133168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x13316c: 0x40f809  jalr        $v0
    ctx->pc = 0x13316Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x133174u);
        ctx->pc = 0x133170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13316Cu;
            // 0x133170: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x133174u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132E94u: goto label_132e94;
            case 0x132EE8u: goto label_132ee8;
            case 0x132F68u: goto label_132f68;
            case 0x132F78u: goto label_132f78;
            case 0x132F7Cu: goto label_132f7c;
            case 0x132F9Cu: goto label_132f9c;
            case 0x132FA0u: goto label_132fa0;
            case 0x132FA8u: goto label_132fa8;
            case 0x132FBCu: goto label_132fbc;
            case 0x133000u: goto label_133000;
            case 0x133068u: goto label_133068;
            case 0x13306Cu: goto label_13306c;
            case 0x133080u: goto label_133080;
            case 0x1330F8u: goto label_1330f8;
            case 0x1330FCu: goto label_1330fc;
            case 0x133108u: goto label_133108;
            case 0x133140u: goto label_133140;
            case 0x133180u: goto label_133180;
            case 0x13319Cu: goto label_13319c;
            case 0x1331ACu: goto label_1331ac;
            case 0x1331D0u: goto label_1331d0;
            case 0x1331F4u: goto label_1331f4;
            case 0x13320Cu: goto label_13320c;
            case 0x133214u: goto label_133214;
            case 0x133228u: goto label_133228;
            case 0x13322Cu: goto label_13322c;
            case 0x133230u: goto label_133230;
            case 0x13323Cu: goto label_13323c;
            case 0x1332A0u: goto label_1332a0;
            case 0x133300u: goto label_133300;
            case 0x133358u: goto label_133358;
            case 0x13337Cu: goto label_13337c;
            case 0x133380u: goto label_133380;
            case 0x1333C8u: goto label_1333c8;
            case 0x133420u: goto label_133420;
            case 0x13342Cu: goto label_13342c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x133174u; }
            if (ctx->pc != 0x133174u) { return; }
        }
        }
    }
    ctx->pc = 0x133174u;
    // 0x133174: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x133174u;
    {
        const bool branch_taken_0x133174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133174u;
            // 0x133178: 0x8fa20080  lw          $v0, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133174) {
            ctx->pc = 0x133230u;
            goto label_133230;
        }
    }
    ctx->pc = 0x13317Cu;
    // 0x13317c: 0x0  nop
    ctx->pc = 0x13317cu;
    // NOP
label_133180:
    // 0x133180: 0x8603002a  lh          $v1, 0x2A($s0)
    ctx->pc = 0x133180u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x133184: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x133184u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133188: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x133188u;
    {
        const bool branch_taken_0x133188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13318Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133188u;
            // 0x13318c: 0x9604002a  lhu         $a0, 0x2A($s0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133188) {
            ctx->pc = 0x13319Cu;
            goto label_13319c;
        }
    }
    ctx->pc = 0x133190u;
    // 0x133190: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x133190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x133194: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x133194u;
    {
        const bool branch_taken_0x133194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x133198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133194u;
            // 0x133198: 0x3c13002a  lui         $s3, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133194) {
            ctx->pc = 0x1331ACu;
            goto label_1331ac;
        }
    }
    ctx->pc = 0x13319Cu;
label_13319c:
    // 0x13319c: 0x18600023  blez        $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x13319Cu;
    {
        const bool branch_taken_0x13319c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1331A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13319Cu;
            // 0x1331a0: 0x2482ffff  addiu       $v0, $a0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13319c) {
            ctx->pc = 0x13322Cu;
            goto label_13322c;
        }
    }
    ctx->pc = 0x1331A4u;
    // 0x1331a4: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1331A4u;
    {
        const bool branch_taken_0x1331a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1331A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1331A4u;
            // 0x1331a8: 0xa602002a  sh          $v0, 0x2A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1331a4) {
            ctx->pc = 0x13322Cu;
            goto label_13322c;
        }
    }
    ctx->pc = 0x1331ACu;
label_1331ac:
    // 0x1331ac: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x1331acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1331b0: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1331B0u;
    {
        const bool branch_taken_0x1331b0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1331B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1331B0u;
            // 0x1331b4: 0xae70be04  sw          $s0, -0x41FC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294950404), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1331b0) {
            ctx->pc = 0x1331D0u;
            goto label_1331d0;
        }
    }
    ctx->pc = 0x1331B8u;
    // 0x1331b8: 0x8ca200b4  lw          $v0, 0xB4($a1)
    ctx->pc = 0x1331b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 180)));
    // 0x1331bc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1331BCu;
    {
        const bool branch_taken_0x1331bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1331C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1331BCu;
            // 0x1331c0: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1331bc) {
            ctx->pc = 0x1331D0u;
            goto label_1331d0;
        }
    }
    ctx->pc = 0x1331C4u;
    // 0x1331c4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1331c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1331c8: 0xc04d898  jal         func_136260
    ctx->pc = 0x1331C8u;
    SET_GPR_U32(ctx, 31, 0x1331D0u);
    ctx->pc = 0x1331CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1331C8u;
            // 0x1331cc: 0x8c44e84c  lw          $a0, -0x17B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136260u;
    if (runtime->hasFunction(0x136260u)) {
        auto targetFn = runtime->lookupFunction(0x136260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1331D0u; }
        if (ctx->pc != 0x1331D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136260_0x136260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1331D0u; }
        if (ctx->pc != 0x1331D0u) { return; }
    }
    ctx->pc = 0x1331D0u;
label_1331d0:
    // 0x1331d0: 0x96020044  lhu         $v0, 0x44($s0)
    ctx->pc = 0x1331d0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1331d4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1331d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1331d8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1331D8u;
    {
        const bool branch_taken_0x1331d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1331DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1331D8u;
            // 0x1331dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1331d8) {
            ctx->pc = 0x1331F4u;
            goto label_1331f4;
        }
    }
    ctx->pc = 0x1331E0u;
    // 0x1331e0: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x1331e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x1331e4: 0xc05bc76  jal         func_16F1D8
    ctx->pc = 0x1331E4u;
    SET_GPR_U32(ctx, 31, 0x1331ECu);
    ctx->pc = 0x1331E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1331E4u;
            // 0x1331e8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16F1D8u;
    if (runtime->hasFunction(0x16F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x16F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1331ECu; }
        if (ctx->pc != 0x1331ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016F1D8_0x16f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1331ECu; }
        if (ctx->pc != 0x1331ECu) { return; }
    }
    ctx->pc = 0x1331ECu;
    // 0x1331ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1331ECu;
    {
        const bool branch_taken_0x1331ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1331F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1331ECu;
            // 0x1331f0: 0x96020028  lhu         $v0, 0x28($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1331ec) {
            ctx->pc = 0x13320Cu;
            goto label_13320c;
        }
    }
    ctx->pc = 0x1331F4u;
label_1331f4:
    // 0x1331f4: 0x8e02002c  lw          $v0, 0x2C($s0)
    ctx->pc = 0x1331f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x1331f8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1331F8u;
    {
        const bool branch_taken_0x1331f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1331f8) {
            ctx->pc = 0x1331FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1331F8u;
            // 0x1331fc: 0x96020028  lhu         $v0, 0x28($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13320Cu;
            goto label_13320c;
        }
    }
    ctx->pc = 0x133200u;
    // 0x133200: 0x40f809  jalr        $v0
    ctx->pc = 0x133200u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x133208u);
        ctx->pc = 0x133204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133200u;
            // 0x133204: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x133208u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132E94u: goto label_132e94;
            case 0x132EE8u: goto label_132ee8;
            case 0x132F68u: goto label_132f68;
            case 0x132F78u: goto label_132f78;
            case 0x132F7Cu: goto label_132f7c;
            case 0x132F9Cu: goto label_132f9c;
            case 0x132FA0u: goto label_132fa0;
            case 0x132FA8u: goto label_132fa8;
            case 0x132FBCu: goto label_132fbc;
            case 0x133000u: goto label_133000;
            case 0x133068u: goto label_133068;
            case 0x13306Cu: goto label_13306c;
            case 0x133080u: goto label_133080;
            case 0x1330F8u: goto label_1330f8;
            case 0x1330FCu: goto label_1330fc;
            case 0x133108u: goto label_133108;
            case 0x133140u: goto label_133140;
            case 0x133180u: goto label_133180;
            case 0x13319Cu: goto label_13319c;
            case 0x1331ACu: goto label_1331ac;
            case 0x1331D0u: goto label_1331d0;
            case 0x1331F4u: goto label_1331f4;
            case 0x13320Cu: goto label_13320c;
            case 0x133214u: goto label_133214;
            case 0x133228u: goto label_133228;
            case 0x13322Cu: goto label_13322c;
            case 0x133230u: goto label_133230;
            case 0x13323Cu: goto label_13323c;
            case 0x1332A0u: goto label_1332a0;
            case 0x133300u: goto label_133300;
            case 0x133358u: goto label_133358;
            case 0x13337Cu: goto label_13337c;
            case 0x133380u: goto label_133380;
            case 0x1333C8u: goto label_1333c8;
            case 0x133420u: goto label_133420;
            case 0x13342Cu: goto label_13342c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x133208u; }
            if (ctx->pc != 0x133208u) { return; }
        }
        }
    }
    ctx->pc = 0x133208u;
    // 0x133208: 0x96020028  lhu         $v0, 0x28($s0)
    ctx->pc = 0x133208u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
label_13320c:
    // 0x13320c: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x13320Cu;
    {
        const bool branch_taken_0x13320c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13320c) {
            ctx->pc = 0x133210u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13320Cu;
            // 0x133210: 0xa602002a  sh          $v0, 0x2A($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 42), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x133214u;
            goto label_133214;
        }
    }
    ctx->pc = 0x133214u;
label_133214:
    // 0x133214: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x133214u;
    {
        const bool branch_taken_0x133214 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x133218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133214u;
            // 0x133218: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133214) {
            ctx->pc = 0x133228u;
            goto label_133228;
        }
    }
    ctx->pc = 0x13321Cu;
    // 0x13321c: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x13321cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x133220: 0xc04d8ac  jal         func_1362B0
    ctx->pc = 0x133220u;
    SET_GPR_U32(ctx, 31, 0x133228u);
    ctx->pc = 0x133224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x133220u;
            // 0x133224: 0x8c44e84c  lw          $a0, -0x17B4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1362B0u;
    if (runtime->hasFunction(0x1362B0u)) {
        auto targetFn = runtime->lookupFunction(0x1362B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133228u; }
        if (ctx->pc != 0x133228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001362B0_0x1362b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133228u; }
        if (ctx->pc != 0x133228u) { return; }
    }
    ctx->pc = 0x133228u;
label_133228:
    // 0x133228: 0xae60be04  sw          $zero, -0x41FC($s3)
    ctx->pc = 0x133228u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4294950404), GPR_U32(ctx, 0));
label_13322c:
    // 0x13322c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x13322cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_133230:
    // 0x133230: 0x441ff93  bgez        $v0, . + 4 + (-0x6D << 2)
    ctx->pc = 0x133230u;
    {
        const bool branch_taken_0x133230 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x133234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133230u;
            // 0x133234: 0x8fa70080  lw          $a3, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133230) {
            ctx->pc = 0x133080u;
            runtime->cooperativeGuestYield();
            goto label_133080;
        }
    }
    ctx->pc = 0x133238u;
    // 0x133238: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x133238u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_13323c:
    // 0x13323c: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x13323cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x133240: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x133240u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x133244: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x133244u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x133248: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x133248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x13324c: 0x3e00008  jr          $ra
    ctx->pc = 0x13324Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x133250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13324Cu;
            // 0x133250: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132E94u: goto label_132e94;
            case 0x132EE8u: goto label_132ee8;
            case 0x132F68u: goto label_132f68;
            case 0x132F78u: goto label_132f78;
            case 0x132F7Cu: goto label_132f7c;
            case 0x132F9Cu: goto label_132f9c;
            case 0x132FA0u: goto label_132fa0;
            case 0x132FA8u: goto label_132fa8;
            case 0x132FBCu: goto label_132fbc;
            case 0x133000u: goto label_133000;
            case 0x133068u: goto label_133068;
            case 0x13306Cu: goto label_13306c;
            case 0x133080u: goto label_133080;
            case 0x1330F8u: goto label_1330f8;
            case 0x1330FCu: goto label_1330fc;
            case 0x133108u: goto label_133108;
            case 0x133140u: goto label_133140;
            case 0x133180u: goto label_133180;
            case 0x13319Cu: goto label_13319c;
            case 0x1331ACu: goto label_1331ac;
            case 0x1331D0u: goto label_1331d0;
            case 0x1331F4u: goto label_1331f4;
            case 0x13320Cu: goto label_13320c;
            case 0x133214u: goto label_133214;
            case 0x133228u: goto label_133228;
            case 0x13322Cu: goto label_13322c;
            case 0x133230u: goto label_133230;
            case 0x13323Cu: goto label_13323c;
            case 0x1332A0u: goto label_1332a0;
            case 0x133300u: goto label_133300;
            case 0x133358u: goto label_133358;
            case 0x13337Cu: goto label_13337c;
            case 0x133380u: goto label_133380;
            case 0x1333C8u: goto label_1333c8;
            case 0x133420u: goto label_133420;
            case 0x13342Cu: goto label_13342c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x133254u;
    // 0x133254: 0x0  nop
    ctx->pc = 0x133254u;
    // NOP
    // 0x133258: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x133258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x13325c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x13325cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x133260: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x133260u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x133264: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x133264u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133268: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x133268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x13326c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x13326cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133270: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x133270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x133274: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x133274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x133278: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x133278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x13327c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13327cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x133280: 0xc05e996  jal         func_17A658
    ctx->pc = 0x133280u;
    SET_GPR_U32(ctx, 31, 0x133288u);
    ctx->pc = 0x133284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x133280u;
            // 0x133284: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133288u; }
        if (ctx->pc != 0x133288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133288u; }
        if (ctx->pc != 0x133288u) { return; }
    }
    ctx->pc = 0x133288u;
    // 0x133288: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x133288u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13328c: 0x56800004  bnel        $s4, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x13328Cu;
    {
        const bool branch_taken_0x13328c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x13328c) {
            ctx->pc = 0x133290u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13328Cu;
            // 0x133290: 0x96220020  lhu         $v0, 0x20($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1332A0u;
            goto label_1332a0;
        }
    }
    ctx->pc = 0x133294u;
    // 0x133294: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x133294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
    // 0x133298: 0x24541ab0  addiu       $s4, $v0, 0x1AB0
    ctx->pc = 0x133298u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 6832));
    // 0x13329c: 0x96220020  lhu         $v0, 0x20($s1)
    ctx->pc = 0x13329cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
label_1332a0:
    // 0x1332a0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1332a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x1332a4: 0x1440002c  bnez        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x1332A4u;
    {
        const bool branch_taken_0x1332a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1332A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1332A4u;
            // 0x1332a8: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1332a4) {
            ctx->pc = 0x133358u;
            goto label_133358;
        }
    }
    ctx->pc = 0x1332ACu;
    // 0x1332ac: 0x26230024  addiu       $v1, $s1, 0x24
    ctx->pc = 0x1332acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x1332b0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1332b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1332b4: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x1332b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x1332b8: 0x2452ffdc  addiu       $s2, $v0, -0x24
    ctx->pc = 0x1332b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967260));
    // 0x1332bc: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x1332BCu;
    SET_GPR_U32(ctx, 31, 0x1332C4u);
    ctx->pc = 0x1332C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1332BCu;
            // 0x1332c0: 0x72980b  movn        $s3, $v1, $s2 (Delay Slot)
        if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1332C4u; }
        if (ctx->pc != 0x1332C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1332C4u; }
        if (ctx->pc != 0x1332C4u) { return; }
    }
    ctx->pc = 0x1332C4u;
    // 0x1332c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1332c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1332c8: 0x96260022  lhu         $a2, 0x22($s1)
    ctx->pc = 0x1332c8u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x1332cc: 0x9625001e  lhu         $a1, 0x1E($s1)
    ctx->pc = 0x1332ccu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 30)));
    // 0x1332d0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1332d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1332d4: 0x9624001c  lhu         $a0, 0x1C($s1)
    ctx->pc = 0x1332d4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x1332d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1332d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1332dc: 0x96230020  lhu         $v1, 0x20($s1)
    ctx->pc = 0x1332dcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1332e0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1332e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1332e4: 0xa6050008  sh          $a1, 0x8($s0)
    ctx->pc = 0x1332e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 5));
    // 0x1332e8: 0xa604000a  sh          $a0, 0xA($s0)
    ctx->pc = 0x1332e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 4));
    // 0x1332ec: 0xa6030022  sh          $v1, 0x22($s0)
    ctx->pc = 0x1332ecu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x1332f0: 0xa6060020  sh          $a2, 0x20($s0)
    ctx->pc = 0x1332f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 6));
    // 0x1332f4: 0xae14001c  sw          $s4, 0x1C($s0)
    ctx->pc = 0x1332f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 20));
    // 0x1332f8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1332f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1332fc: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x1332fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_133300:
    // 0x133300: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x133300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x133304: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x133304u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x133308: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x133308u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x13330c: 0x2ce20004  sltiu       $v0, $a3, 0x4
    ctx->pc = 0x13330cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x133310: 0x0  nop
    ctx->pc = 0x133310u;
    // NOP
    // 0x133314: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x133314u;
    {
        const bool branch_taken_0x133314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x133314) {
            ctx->pc = 0x133318u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x133314u;
            // 0x133318: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x133300u;
            runtime->cooperativeGuestYield();
            goto label_133300;
        }
    }
    ctx->pc = 0x13331Cu;
    // 0x13331c: 0x52600040  beql        $s3, $zero, . + 4 + (0x40 << 2)
    ctx->pc = 0x13331Cu;
    {
        const bool branch_taken_0x13331c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x13331c) {
            ctx->pc = 0x133320u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13331Cu;
            // 0x133320: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x133420u;
            goto label_133420;
        }
    }
    ctx->pc = 0x133324u;
    // 0x133324: 0x5240003e  beql        $s2, $zero, . + 4 + (0x3E << 2)
    ctx->pc = 0x133324u;
    {
        const bool branch_taken_0x133324 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x133324) {
            ctx->pc = 0x133328u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x133324u;
            // 0x133328: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x133420u;
            goto label_133420;
        }
    }
    ctx->pc = 0x13332Cu;
    // 0x13332c: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x13332Cu;
    SET_GPR_U32(ctx, 31, 0x133334u);
    ctx->pc = 0x133330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13332Cu;
            // 0x133330: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133334u; }
        if (ctx->pc != 0x133334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133334u; }
        if (ctx->pc != 0x133334u) { return; }
    }
    ctx->pc = 0x133334u;
    // 0x133334: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x133334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133338: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x133338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13333c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x13333cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133340: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x133340u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x133344: 0xae120028  sw          $s2, 0x28($s0)
    ctx->pc = 0x133344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 18));
    // 0x133348: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x133348u;
    SET_GPR_U32(ctx, 31, 0x133350u);
    ctx->pc = 0x13334Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x133348u;
            // 0x13334c: 0xae00002c  sw          $zero, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133350u; }
        if (ctx->pc != 0x133350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133350u; }
        if (ctx->pc != 0x133350u) { return; }
    }
    ctx->pc = 0x133350u;
    // 0x133350: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x133350u;
    {
        const bool branch_taken_0x133350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133350u;
            // 0x133354: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133350) {
            ctx->pc = 0x13342Cu;
            goto label_13342c;
        }
    }
    ctx->pc = 0x133358u;
label_133358:
    // 0x133358: 0x26230024  addiu       $v1, $s1, 0x24
    ctx->pc = 0x133358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 36));
    // 0x13335c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x13335cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133360: 0x2452ffdc  addiu       $s2, $v0, -0x24
    ctx->pc = 0x133360u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967260));
    // 0x133364: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x133364u;
    {
        const bool branch_taken_0x133364 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x133368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133364u;
            // 0x133368: 0x72980b  movn        $s3, $v1, $s2 (Delay Slot)
        if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133364) {
            ctx->pc = 0x13337Cu;
            goto label_13337c;
        }
    }
    ctx->pc = 0x13336Cu;
    // 0x13336c: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x13336cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x133370: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x133370u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x133374: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x133374u;
    {
        const bool branch_taken_0x133374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x133378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133374u;
            // 0x133378: 0x24550004  addiu       $s5, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133374) {
            ctx->pc = 0x133380u;
            goto label_133380;
        }
    }
    ctx->pc = 0x13337Cu;
label_13337c:
    // 0x13337c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x13337cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_133380:
    // 0x133380: 0xc04f58c  jal         func_13D630
    ctx->pc = 0x133380u;
    SET_GPR_U32(ctx, 31, 0x133388u);
    ctx->pc = 0x133384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x133380u;
            // 0x133384: 0x24040030  addiu       $a0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D630u;
    if (runtime->hasFunction(0x13D630u)) {
        auto targetFn = runtime->lookupFunction(0x13D630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133388u; }
        if (ctx->pc != 0x133388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D630_0x13d630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133388u; }
        if (ctx->pc != 0x133388u) { return; }
    }
    ctx->pc = 0x133388u;
    // 0x133388: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x133388u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13338c: 0x96260022  lhu         $a2, 0x22($s1)
    ctx->pc = 0x13338cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 34)));
    // 0x133390: 0x9625001e  lhu         $a1, 0x1E($s1)
    ctx->pc = 0x133390u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 30)));
    // 0x133394: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x133394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x133398: 0x9624001c  lhu         $a0, 0x1C($s1)
    ctx->pc = 0x133398u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x13339c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x13339cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1333a0: 0x96230020  lhu         $v1, 0x20($s1)
    ctx->pc = 0x1333a0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x1333a4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1333a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x1333a8: 0xa6050008  sh          $a1, 0x8($s0)
    ctx->pc = 0x1333a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 5));
    // 0x1333ac: 0xa604000a  sh          $a0, 0xA($s0)
    ctx->pc = 0x1333acu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 4));
    // 0x1333b0: 0xa6030022  sh          $v1, 0x22($s0)
    ctx->pc = 0x1333b0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 34), (uint16_t)GPR_U32(ctx, 3));
    // 0x1333b4: 0xa6060020  sh          $a2, 0x20($s0)
    ctx->pc = 0x1333b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 32), (uint16_t)GPR_U32(ctx, 6));
    // 0x1333b8: 0xae14001c  sw          $s4, 0x1C($s0)
    ctx->pc = 0x1333b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 20));
    // 0x1333bc: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1333bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1333c0: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x1333c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x1333c4: 0x0  nop
    ctx->pc = 0x1333c4u;
    // NOP
label_1333c8:
    // 0x1333c8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1333c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1333cc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1333ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1333d0: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1333d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1333d4: 0x2ce20004  sltiu       $v0, $a3, 0x4
    ctx->pc = 0x1333d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x1333d8: 0x0  nop
    ctx->pc = 0x1333d8u;
    // NOP
    // 0x1333dc: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1333DCu;
    {
        const bool branch_taken_0x1333dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1333dc) {
            ctx->pc = 0x1333E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1333DCu;
            // 0x1333e0: 0x71080  sll         $v0, $a3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1333C8u;
            runtime->cooperativeGuestYield();
            goto label_1333c8;
        }
    }
    ctx->pc = 0x1333E4u;
    // 0x1333e4: 0x5260000e  beql        $s3, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x1333E4u;
    {
        const bool branch_taken_0x1333e4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1333e4) {
            ctx->pc = 0x1333E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1333E4u;
            // 0x1333e8: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x133420u;
            goto label_133420;
        }
    }
    ctx->pc = 0x1333ECu;
    // 0x1333ec: 0x5240000c  beql        $s2, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1333ECu;
    {
        const bool branch_taken_0x1333ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1333ec) {
            ctx->pc = 0x1333F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1333ECu;
            // 0x1333f0: 0xae000024  sw          $zero, 0x24($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x133420u;
            goto label_133420;
        }
    }
    ctx->pc = 0x1333F4u;
    // 0x1333f4: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x1333F4u;
    SET_GPR_U32(ctx, 31, 0x1333FCu);
    ctx->pc = 0x1333F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1333F4u;
            // 0x1333f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1333FCu; }
        if (ctx->pc != 0x1333FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1333FCu; }
        if (ctx->pc != 0x1333FCu) { return; }
    }
    ctx->pc = 0x1333FCu;
    // 0x1333fc: 0xae15002c  sw          $s5, 0x2C($s0)
    ctx->pc = 0x1333fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 21));
    // 0x133400: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x133400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133404: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x133404u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x133408: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x133408u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13340c: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x13340cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x133410: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x133410u;
    SET_GPR_U32(ctx, 31, 0x133418u);
    ctx->pc = 0x133414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x133410u;
            // 0x133414: 0xae120028  sw          $s2, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133418u; }
        if (ctx->pc != 0x133418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x133418u; }
        if (ctx->pc != 0x133418u) { return; }
    }
    ctx->pc = 0x133418u;
    // 0x133418: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x133418u;
    {
        const bool branch_taken_0x133418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13341Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133418u;
            // 0x13341c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x133418) {
            ctx->pc = 0x13342Cu;
            goto label_13342c;
        }
    }
    ctx->pc = 0x133420u;
label_133420:
    // 0x133420: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x133420u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
    // 0x133424: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x133424u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x133428: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x133428u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_13342c:
    // 0x13342c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x13342cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x133430: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x133430u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x133434: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x133434u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x133438: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x133438u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13343c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x13343cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x133440: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x133440u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x133444: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x133444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x133448: 0x3e00008  jr          $ra
    ctx->pc = 0x133448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13344Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x133448u;
            // 0x13344c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x132E94u: goto label_132e94;
            case 0x132EE8u: goto label_132ee8;
            case 0x132F68u: goto label_132f68;
            case 0x132F78u: goto label_132f78;
            case 0x132F7Cu: goto label_132f7c;
            case 0x132F9Cu: goto label_132f9c;
            case 0x132FA0u: goto label_132fa0;
            case 0x132FA8u: goto label_132fa8;
            case 0x132FBCu: goto label_132fbc;
            case 0x133000u: goto label_133000;
            case 0x133068u: goto label_133068;
            case 0x13306Cu: goto label_13306c;
            case 0x133080u: goto label_133080;
            case 0x1330F8u: goto label_1330f8;
            case 0x1330FCu: goto label_1330fc;
            case 0x133108u: goto label_133108;
            case 0x133140u: goto label_133140;
            case 0x133180u: goto label_133180;
            case 0x13319Cu: goto label_13319c;
            case 0x1331ACu: goto label_1331ac;
            case 0x1331D0u: goto label_1331d0;
            case 0x1331F4u: goto label_1331f4;
            case 0x13320Cu: goto label_13320c;
            case 0x133214u: goto label_133214;
            case 0x133228u: goto label_133228;
            case 0x13322Cu: goto label_13322c;
            case 0x133230u: goto label_133230;
            case 0x13323Cu: goto label_13323c;
            case 0x1332A0u: goto label_1332a0;
            case 0x133300u: goto label_133300;
            case 0x133358u: goto label_133358;
            case 0x13337Cu: goto label_13337c;
            case 0x133380u: goto label_133380;
            case 0x1333C8u: goto label_1333c8;
            case 0x133420u: goto label_133420;
            case 0x13342Cu: goto label_13342c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x133450u;
}
