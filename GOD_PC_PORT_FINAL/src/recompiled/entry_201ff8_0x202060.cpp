#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_201ff8
// Address: 0x201ff8 - 0x202060
void entry_201ff8_0x202060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_201ff8_0x202060");
#endif

    ctx->pc = 0x201ff8u;

    // 0x201ff8: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x201ff8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x201ffc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x201ffcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_202000:
    // 0x202000: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x202000u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x202004: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x202004u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x202008: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x202008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x20200c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x20200cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x202010: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x202010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x202014: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x202014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x202018: 0xa4440024  sh          $a0, 0x24($v0)
    ctx->pc = 0x202018u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 36), (uint16_t)GPR_U32(ctx, 4));
    // 0x20201c: 0x28c20008  slti        $v0, $a2, 0x8
    ctx->pc = 0x20201cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x202020: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x202020u;
    {
        const bool branch_taken_0x202020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202020u;
            // 0x202024: 0xac600048  sw          $zero, 0x48($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202020) {
            ctx->pc = 0x202000u;
            runtime->cooperativeGuestYield();
            goto label_202000;
        }
    }
    ctx->pc = 0x202028u;
    // 0x202028: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x202028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20202c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x20202cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202030: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x202030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x202034: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x202034u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x202038: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x202038u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20203c: 0xe4a0003c  swc1        $f0, 0x3C($a1)
    ctx->pc = 0x20203cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 60), bits); }
    // 0x202040: 0xe4a10020  swc1        $f1, 0x20($a1)
    ctx->pc = 0x202040u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 32), bits); }
    // 0x202044: 0xa4a20038  sh          $v0, 0x38($a1)
    ctx->pc = 0x202044u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 56), (uint16_t)GPR_U32(ctx, 2));
    // 0x202048: 0xe4a00018  swc1        $f0, 0x18($a1)
    ctx->pc = 0x202048u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 24), bits); }
    // 0x20204c: 0xaca0001c  sw          $zero, 0x1C($a1)
    ctx->pc = 0x20204cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 0));
    // 0x202050: 0xaca00034  sw          $zero, 0x34($a1)
    ctx->pc = 0x202050u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 52), GPR_U32(ctx, 0));
    // 0x202054: 0xe4a00044  swc1        $f0, 0x44($a1)
    ctx->pc = 0x202054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 68), bits); }
    // 0x202058: 0x3e00008  jr          $ra
    ctx->pc = 0x202058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20205Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202058u;
            // 0x20205c: 0xe4a00040  swc1        $f0, 0x40($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 64), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x202000u: goto label_202000;
            default: break;
        }
        return;
    }
    ctx->pc = 0x202060u;
}
