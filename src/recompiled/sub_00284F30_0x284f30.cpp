#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00284F30
// Address: 0x284f30 - 0x284fe8
void sub_00284F30_0x284f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00284F30_0x284f30");
#endif

    ctx->pc = 0x284f30u;

    // 0x284f30: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x284f30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x284f34: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x284f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x284f38: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x284f38u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x284f3c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x284f3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x284f40: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x284f40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x284f44: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x284F44u;
    {
        const bool branch_taken_0x284f44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x284F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284F44u;
            // 0x284f48: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284f44) {
            ctx->pc = 0x284F58u;
            goto label_284f58;
        }
    }
    ctx->pc = 0x284F4Cu;
    // 0x284f4c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x284f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x284f50: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x284F50u;
    {
        const bool branch_taken_0x284f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284F50u;
            // 0x284f54: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284f50) {
            ctx->pc = 0x284FD4u;
            goto label_284fd4;
        }
    }
    ctx->pc = 0x284F58u;
label_284f58:
    // 0x284f58: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x284f58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x284f5c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x284F5Cu;
    {
        const bool branch_taken_0x284f5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x284F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284F5Cu;
            // 0x284f60: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284f5c) {
            ctx->pc = 0x284F88u;
            goto label_284f88;
        }
    }
    ctx->pc = 0x284F64u;
    // 0x284f64: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x284f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x284f68: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x284F68u;
    {
        const bool branch_taken_0x284f68 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x284F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284F68u;
            // 0x284f6c: 0x41023  negu        $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284f68) {
            ctx->pc = 0x284F80u;
            goto label_284f80;
        }
    }
    ctx->pc = 0x284F70u;
    // 0x284f70: 0x3402c1e0  ori         $v0, $zero, 0xC1E0
    ctx->pc = 0x284f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49632);
    // 0x284f74: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x284f74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x284f78: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x284F78u;
    {
        const bool branch_taken_0x284f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284F78u;
            // 0x284f7c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284f78) {
            ctx->pc = 0x284FE0u;
            goto label_284fe0;
        }
    }
    ctx->pc = 0x284F80u;
label_284f80:
    // 0x284f80: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x284F80u;
    {
        const bool branch_taken_0x284f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x284F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284F80u;
            // 0x284f84: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284f80) {
            ctx->pc = 0x284F8Cu;
            goto label_284f8c;
        }
    }
    ctx->pc = 0x284F88u;
label_284f88:
    // 0x284f88: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x284f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
label_284f8c:
    // 0x284f8c: 0xdfa50010  ld          $a1, 0x10($sp)
    ctx->pc = 0x284f8cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x284f90: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x284f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x284f94: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x284f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x284f98: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x284f98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x284f9c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x284F9Cu;
    {
        const bool branch_taken_0x284f9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x284FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284F9Cu;
            // 0x284fa0: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x284f9c) {
            ctx->pc = 0x284FD4u;
            goto label_284fd4;
        }
    }
    ctx->pc = 0x284FA4u;
    // 0x284fa4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x284fa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x284fa8: 0x6313a  dsrl        $a2, $a2, 4
    ctx->pc = 0x284fa8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 4);
    // 0x284fac: 0x0  nop
    ctx->pc = 0x284facu;
    // NOP
label_284fb0:
    // 0x284fb0: 0x51878  dsll        $v1, $a1, 1
    ctx->pc = 0x284fb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 1);
    // 0x284fb4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x284fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x284fb8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x284fb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x284fbc: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x284fbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x284fc0: 0x0  nop
    ctx->pc = 0x284fc0u;
    // NOP
    // 0x284fc4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x284FC4u;
    {
        const bool branch_taken_0x284fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x284fc4) {
            ctx->pc = 0x284FB0u;
            runtime->cooperativeGuestYield();
            goto label_284fb0;
        }
    }
    ctx->pc = 0x284FCCu;
    // 0x284fcc: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x284fccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x284fd0: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x284fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
label_284fd4:
    // 0x284fd4: 0xc0a113a  jal         func_2844E8
    ctx->pc = 0x284FD4u;
    SET_GPR_U32(ctx, 31, 0x284FDCu);
    ctx->pc = 0x284FD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x284FD4u;
            // 0x284fd8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2844E8u;
    if (runtime->hasFunction(0x2844E8u)) {
        auto targetFn = runtime->lookupFunction(0x2844E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284FDCu; }
        if (ctx->pc != 0x284FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2844e8_0x284618(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x284FDCu; }
        if (ctx->pc != 0x284FDCu) { return; }
    }
    ctx->pc = 0x284FDCu;
    // 0x284fdc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x284fdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_284fe0:
    // 0x284fe0: 0x3e00008  jr          $ra
    ctx->pc = 0x284FE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x284FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x284FE0u;
            // 0x284fe4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x284F58u: goto label_284f58;
            case 0x284F80u: goto label_284f80;
            case 0x284F88u: goto label_284f88;
            case 0x284F8Cu: goto label_284f8c;
            case 0x284FB0u: goto label_284fb0;
            case 0x284FD4u: goto label_284fd4;
            case 0x284FE0u: goto label_284fe0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x284FE8u;
}
