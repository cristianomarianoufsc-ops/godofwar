#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027C010
// Address: 0x27c010 - 0x27c100
void sub_0027C010_0x27c010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027C010_0x27c010");
#endif

    ctx->pc = 0x27c010u;

    // 0x27c010: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x27c010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x27c014: 0x2402c000  addiu       $v0, $zero, -0x4000
    ctx->pc = 0x27c014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294950912));
    // 0x27c018: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x27c018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x27c01c: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x27c01cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x27c020: 0x282a024  and         $s4, $s4, $v0
    ctx->pc = 0x27c020u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x27c024: 0x3c09ffff  lui         $t1, 0xFFFF
    ctx->pc = 0x27c024u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65535 << 16));
    // 0x27c028: 0x35293fff  ori         $t1, $t1, 0x3FFF
    ctx->pc = 0x27c028u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)16383);
    // 0x27c02c: 0x283a025  or          $s4, $s4, $v1
    ctx->pc = 0x27c02cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 3));
    // 0x27c030: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x27c030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x27c034: 0x289a024  and         $s4, $s4, $t1
    ctx->pc = 0x27c034u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 9));
    // 0x27c038: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x27c038u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x27c03c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x27c03cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x27c040: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x27c040u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x27c044: 0x3c090003  lui         $t1, 0x3
    ctx->pc = 0x27c044u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)3 << 16));
    // 0x27c048: 0x283a024  and         $s4, $s4, $v1
    ctx->pc = 0x27c048u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 3));
    // 0x27c04c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x27c04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x27c050: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x27c050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x27c054: 0x344200ff  ori         $v0, $v0, 0xFF
    ctx->pc = 0x27c054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)255);
    // 0x27c058: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x27c058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x27c05c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x27c05cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x27c060: 0x289a025  or          $s4, $s4, $t1
    ctx->pc = 0x27c060u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 9));
    // 0x27c064: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x27c064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x27c068: 0x282a024  and         $s4, $s4, $v0
    ctx->pc = 0x27c068u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x27c06c: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x27c06cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x27c070: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x27c070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x27c074: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x27c074u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c078: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x27c078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x27c07c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x27c07cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c080: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x27c080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c084: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x27c084u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c088: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x27c088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x27c08c: 0x3c020100  lui         $v0, 0x100
    ctx->pc = 0x27c08cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
    // 0x27c090: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x27c090u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x27c094: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x27c094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    // 0x27c098: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x27c098u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c09c: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x27c09cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x27c0a0: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x27c0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x27c0a4: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x27c0a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c0a8: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x27C0A8u;
    SET_GPR_U32(ctx, 31, 0x27C0B0u);
    ctx->pc = 0x27C0ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C0A8u;
            // 0x27c0ac: 0x37a40008  ori         $a0, $sp, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C0B0u; }
        if (ctx->pc != 0x27C0B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C0B0u; }
        if (ctx->pc != 0x27C0B0u) { return; }
    }
    ctx->pc = 0x27C0B0u;
    // 0x27c0b0: 0x21d8021  addu        $s0, $s0, $sp
    ctx->pc = 0x27c0b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
    // 0x27c0b4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x27c0b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c0b8: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x27c0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x27c0bc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x27c0bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c0c0: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x27C0C0u;
    SET_GPR_U32(ctx, 31, 0x27C0C8u);
    ctx->pc = 0x27C0C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C0C0u;
            // 0x27c0c4: 0xafb10000  sw          $s1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C0C8u; }
        if (ctx->pc != 0x27C0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C0C8u; }
        if (ctx->pc != 0x27C0C8u) { return; }
    }
    ctx->pc = 0x27C0C8u;
    // 0x27c0c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27c0c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c0cc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x27c0ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27c0d0: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x27c0d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27c0d4: 0xc09ecee  jal         func_27B3B8
    ctx->pc = 0x27C0D4u;
    SET_GPR_U32(ctx, 31, 0x27C0DCu);
    ctx->pc = 0x27C0D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C0D4u;
            // 0x27c0d8: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27B3B8u;
    if (runtime->hasFunction(0x27B3B8u)) {
        auto targetFn = runtime->lookupFunction(0x27B3B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C0DCu; }
        if (ctx->pc != 0x27C0DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_27b3b8_0x27b568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C0DCu; }
        if (ctx->pc != 0x27C0DCu) { return; }
    }
    ctx->pc = 0x27C0DCu;
    // 0x27c0dc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x27c0dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x27c0e0: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x27c0e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27c0e4: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x27c0e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x27c0e8: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x27c0e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x27c0ec: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x27c0ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x27c0f0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x27c0f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27c0f4: 0x3e00008  jr          $ra
    ctx->pc = 0x27C0F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27C0F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C0F4u;
            // 0x27c0f8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27C0FCu;
    // 0x27c0fc: 0x0  nop
    ctx->pc = 0x27c0fcu;
    // NOP
}
