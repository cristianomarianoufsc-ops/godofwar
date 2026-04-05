#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00295120
// Address: 0x295120 - 0x2951e0
void sub_00295120_0x295120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295120_0x295120");
#endif

    ctx->pc = 0x295120u;

    // 0x295120: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x295120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x295124: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x295124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x295128: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x295128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x29512c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x29512cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x295130: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x295130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x295134: 0xc0a4fa8  jal         func_293EA0
    ctx->pc = 0x295134u;
    SET_GPR_U32(ctx, 31, 0x29513Cu);
    ctx->pc = 0x295138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x295134u;
            // 0x295138: 0x3c100032  lui         $s0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293EA0u;
    if (runtime->hasFunction(0x293EA0u)) {
        auto targetFn = runtime->lookupFunction(0x293EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29513Cu; }
        if (ctx->pc != 0x29513Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293ea0_0x293ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29513Cu; }
        if (ctx->pc != 0x29513Cu) { return; }
    }
    ctx->pc = 0x29513Cu;
    // 0x29513c: 0x26117490  addiu       $s1, $s0, 0x7490
    ctx->pc = 0x29513cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 29840));
    // 0x295140: 0x3c060029  lui         $a2, 0x29
    ctx->pc = 0x295140u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)41 << 16));
    // 0x295144: 0x24040210  addiu       $a0, $zero, 0x210
    ctx->pc = 0x295144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    // 0x295148: 0x24c64d40  addiu       $a2, $a2, 0x4D40
    ctx->pc = 0x295148u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 19776));
    // 0x29514c: 0xc0a69ea  jal         func_29A7A8
    ctx->pc = 0x29514Cu;
    SET_GPR_U32(ctx, 31, 0x295154u);
    ctx->pc = 0x295150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29514Cu;
            // 0x295150: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29A7A8u;
    if (runtime->hasFunction(0x29A7A8u)) {
        auto targetFn = runtime->lookupFunction(0x29A7A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295154u; }
        if (ctx->pc != 0x295154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029A7A8_0x29a7a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x295154u; }
        if (ctx->pc != 0x295154u) { return; }
    }
    ctx->pc = 0x295154u;
    // 0x295154: 0xae027490  sw          $v0, 0x7490($s0)
    ctx->pc = 0x295154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 29840), GPR_U32(ctx, 2));
    // 0x295158: 0x8e027490  lw          $v0, 0x7490($s0)
    ctx->pc = 0x295158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 29840)));
    // 0x29515c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29515Cu;
    {
        const bool branch_taken_0x29515c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x295160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29515Cu;
            // 0x295160: 0x3c040032  lui         $a0, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)50 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29515c) {
            ctx->pc = 0x29516Cu;
            goto label_29516c;
        }
    }
    ctx->pc = 0x295164u;
    // 0x295164: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x295164u;
    {
        const bool branch_taken_0x295164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x295168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x295164u;
            // 0x295168: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x295164) {
            ctx->pc = 0x2951C8u;
            goto label_2951c8;
        }
    }
    ctx->pc = 0x29516Cu;
label_29516c:
    // 0x29516c: 0x3c020032  lui         $v0, 0x32
    ctx->pc = 0x29516cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)50 << 16));
    // 0x295170: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x295170u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x295174: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x295174u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x295178: 0x24847600  addiu       $a0, $a0, 0x7600
    ctx->pc = 0x295178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30208));
    // 0x29517c: 0x244274c0  addiu       $v0, $v0, 0x74C0
    ctx->pc = 0x29517cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29888));
    // 0x295180: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x295180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x295184: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x295184u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x295188: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x295188u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x29518c: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x29518cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x295190: 0xae240014  sw          $a0, 0x14($s1)
    ctx->pc = 0x295190u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 4));
    // 0x295194: 0x24060210  addiu       $a2, $zero, 0x210
    ctx->pc = 0x295194u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    // 0x295198: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x295198u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x29519c: 0x24050045  addiu       $a1, $zero, 0x45
    ctx->pc = 0x29519cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x2951a0: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x2951a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x2951a4: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x2951a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2951a8: 0xa4460004  sh          $a2, 0x4($v0)
    ctx->pc = 0x2951a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 6));
    // 0x2951ac: 0xa0450006  sb          $a1, 0x6($v0)
    ctx->pc = 0x2951acu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 6), (uint8_t)GPR_U32(ctx, 5));
    // 0x2951b0: 0xa0430007  sb          $v1, 0x7($v0)
    ctx->pc = 0x2951b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7), (uint8_t)GPR_U32(ctx, 3));
    // 0x2951b4: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2951b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x2951b8: 0xc0a5326  jal         func_294C98
    ctx->pc = 0x2951B8u;
    SET_GPR_U32(ctx, 31, 0x2951C0u);
    ctx->pc = 0x2951BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2951B8u;
            // 0x2951bc: 0xa4400002  sh          $zero, 0x2($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294C98u;
    if (runtime->hasFunction(0x294C98u)) {
        auto targetFn = runtime->lookupFunction(0x294C98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2951C0u; }
        if (ctx->pc != 0x2951C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_294c98_0x294d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2951C0u; }
        if (ctx->pc != 0x2951C0u) { return; }
    }
    ctx->pc = 0x2951C0u;
    // 0x2951c0: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x2951c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x2951c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2951c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2951c8:
    // 0x2951c8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2951c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2951cc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2951ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2951d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2951d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2951d4: 0x3e00008  jr          $ra
    ctx->pc = 0x2951D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2951D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2951D4u;
            // 0x2951d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x29516Cu: goto label_29516c;
            case 0x2951C8u: goto label_2951c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2951DCu;
    // 0x2951dc: 0x0  nop
    ctx->pc = 0x2951dcu;
    // NOP
}
