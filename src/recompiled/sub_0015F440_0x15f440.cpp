#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015F440
// Address: 0x15f440 - 0x15f538
void sub_0015F440_0x15f440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015F440_0x15f440");
#endif

    ctx->pc = 0x15f440u;

    // 0x15f440: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x15f440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x15f444: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x15f444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x15f448: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x15f448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x15f44c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x15f44cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x15f450: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x15f450u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f454: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15f454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15f458: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x15f458u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f45c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x15f45cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x15f460: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x15f460u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f464: 0x8c42f1f0  lw          $v0, -0xE10($v0)
    ctx->pc = 0x15f464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963696)));
    // 0x15f468: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x15f468u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f46c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x15f46cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x15f470: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x15f470u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x15f474: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x15F474u;
    {
        const bool branch_taken_0x15f474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F474u;
            // 0x15f478: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f474) {
            ctx->pc = 0x15F514u;
            goto label_15f514;
        }
    }
    ctx->pc = 0x15F47Cu;
    // 0x15f47c: 0x3c02002d  lui         $v0, 0x2D
    ctx->pc = 0x15f47cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45 << 16));
    // 0x15f480: 0x8c50bc78  lw          $s0, -0x4388($v0)
    ctx->pc = 0x15f480u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950008)));
    // 0x15f484: 0x2455bc78  addiu       $s5, $v0, -0x4388
    ctx->pc = 0x15f484u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294950008));
    // 0x15f488: 0x12150017  beq         $s0, $s5, . + 4 + (0x17 << 2)
    ctx->pc = 0x15F488u;
    {
        const bool branch_taken_0x15f488 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 21));
        ctx->pc = 0x15F48Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F488u;
            // 0x15f48c: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f488) {
            ctx->pc = 0x15F4E8u;
            goto label_15f4e8;
        }
    }
    ctx->pc = 0x15F490u;
    // 0x15f490: 0x8e050008  lw          $a1, 0x8($s0)
    ctx->pc = 0x15f490u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x15f494: 0x0  nop
    ctx->pc = 0x15f494u;
    // NOP
label_15f498:
    // 0x15f498: 0x8ca203a4  lw          $v0, 0x3A4($a1)
    ctx->pc = 0x15f498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 932)));
    // 0x15f49c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x15F49Cu;
    {
        const bool branch_taken_0x15f49c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F4A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F49Cu;
            // 0x15f4a0: 0x24a20360  addiu       $v0, $a1, 0x360 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f49c) {
            ctx->pc = 0x15F4D8u;
            goto label_15f4d8;
        }
    }
    ctx->pc = 0x15F4A4u;
    // 0x15f4a4: 0x8ca30360  lw          $v1, 0x360($a1)
    ctx->pc = 0x15f4a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 864)));
    // 0x15f4a8: 0x54620002  bnel        $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x15F4A8u;
    {
        const bool branch_taken_0x15f4a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x15f4a8) {
            ctx->pc = 0x15F4ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15F4A8u;
            // 0x15f4ac: 0x8c620008  lw          $v0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15F4B4u;
            goto label_15f4b4;
        }
    }
    ctx->pc = 0x15F4B0u;
    // 0x15f4b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15f4b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_15f4b4:
    // 0x15f4b4: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x15F4B4u;
    {
        const bool branch_taken_0x15f4b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15f4b4) {
            ctx->pc = 0x15F4B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15F4B4u;
            // 0x15f4b8: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15F4DCu;
            goto label_15f4dc;
        }
    }
    ctx->pc = 0x15F4BCu;
    // 0x15f4bc: 0x8ca203ac  lw          $v0, 0x3AC($a1)
    ctx->pc = 0x15f4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 940)));
    // 0x15f4c0: 0x513024  and         $a2, $v0, $s1
    ctx->pc = 0x15f4c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x15f4c4: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x15F4C4u;
    {
        const bool branch_taken_0x15f4c4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F4C4u;
            // 0x15f4c8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f4c4) {
            ctx->pc = 0x15F4D8u;
            goto label_15f4d8;
        }
    }
    ctx->pc = 0x15F4CCu;
    // 0x15f4cc: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x15f4ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f4d0: 0xc057c9a  jal         func_15F268
    ctx->pc = 0x15F4D0u;
    SET_GPR_U32(ctx, 31, 0x15F4D8u);
    ctx->pc = 0x15F4D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F4D0u;
            // 0x15f4d4: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F268u;
    if (runtime->hasFunction(0x15F268u)) {
        auto targetFn = runtime->lookupFunction(0x15F268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F4D8u; }
        if (ctx->pc != 0x15F4D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F268_0x15f268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F4D8u; }
        if (ctx->pc != 0x15F4D8u) { return; }
    }
    ctx->pc = 0x15F4D8u;
label_15f4d8:
    // 0x15f4d8: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x15f4d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_15f4dc:
    // 0x15f4dc: 0x5615ffee  bnel        $s0, $s5, . + 4 + (-0x12 << 2)
    ctx->pc = 0x15F4DCu;
    {
        const bool branch_taken_0x15f4dc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 21));
        if (branch_taken_0x15f4dc) {
            ctx->pc = 0x15F4E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15F4DCu;
            // 0x15f4e0: 0x8e050008  lw          $a1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15F498u;
            runtime->cooperativeGuestYield();
            goto label_15f498;
        }
    }
    ctx->pc = 0x15F4E4u;
    // 0x15f4e4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x15f4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_15f4e8:
    // 0x15f4e8: 0x8c454a48  lw          $a1, 0x4A48($v0)
    ctx->pc = 0x15f4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19016)));
    // 0x15f4ec: 0x8ca203a4  lw          $v0, 0x3A4($a1)
    ctx->pc = 0x15f4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 932)));
    // 0x15f4f0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x15F4F0u;
    {
        const bool branch_taken_0x15f4f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F4F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F4F0u;
            // 0x15f4f4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f4f0) {
            ctx->pc = 0x15F518u;
            goto label_15f518;
        }
    }
    ctx->pc = 0x15F4F8u;
    // 0x15f4f8: 0x8ca203ac  lw          $v0, 0x3AC($a1)
    ctx->pc = 0x15f4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 940)));
    // 0x15f4fc: 0x513024  and         $a2, $v0, $s1
    ctx->pc = 0x15f4fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
    // 0x15f500: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x15F500u;
    {
        const bool branch_taken_0x15f500 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x15F504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F500u;
            // 0x15f504: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15f500) {
            ctx->pc = 0x15F518u;
            goto label_15f518;
        }
    }
    ctx->pc = 0x15F508u;
    // 0x15f508: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x15f508u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f50c: 0xc057c9a  jal         func_15F268
    ctx->pc = 0x15F50Cu;
    SET_GPR_U32(ctx, 31, 0x15F514u);
    ctx->pc = 0x15F510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15F50Cu;
            // 0x15f510: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15F268u;
    if (runtime->hasFunction(0x15F268u)) {
        auto targetFn = runtime->lookupFunction(0x15F268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F514u; }
        if (ctx->pc != 0x15F514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015F268_0x15f268(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15F514u; }
        if (ctx->pc != 0x15F514u) { return; }
    }
    ctx->pc = 0x15F514u;
label_15f514:
    // 0x15f514: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x15f514u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_15f518:
    // 0x15f518: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x15f518u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15f51c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x15f51cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15f520: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15f520u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15f524: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x15f524u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15f528: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x15f528u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15f52c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15f52cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f530: 0x3e00008  jr          $ra
    ctx->pc = 0x15F530u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15F530u;
            // 0x15f534: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x15F498u: goto label_15f498;
            case 0x15F4B4u: goto label_15f4b4;
            case 0x15F4D8u: goto label_15f4d8;
            case 0x15F4DCu: goto label_15f4dc;
            case 0x15F4E8u: goto label_15f4e8;
            case 0x15F514u: goto label_15f514;
            case 0x15F518u: goto label_15f518;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15F538u;
}
