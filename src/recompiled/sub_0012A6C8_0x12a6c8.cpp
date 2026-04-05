#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012A6C8
// Address: 0x12a6c8 - 0x12aa18
void sub_0012A6C8_0x12a6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012A6C8_0x12a6c8");
#endif

    ctx->pc = 0x12a6c8u;

    // 0x12a6c8: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x12a6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x12a6cc: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x12a6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x12a6d0: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x12a6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x12a6d4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x12a6d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a6d8: 0xe7b40110  swc1        $f20, 0x110($sp)
    ctx->pc = 0x12a6d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x12a6dc: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x12a6dcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a6e0: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x12a6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x12a6e4: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x12a6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x12a6e8: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x12a6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x12a6ec: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x12a6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x12a6f0: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x12a6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x12a6f4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x12a6f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x12a6f8: 0x3c014b18  lui         $at, 0x4B18
    ctx->pc = 0x12a6f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19224 << 16));
    // 0x12a6fc: 0x34219680  ori         $at, $at, 0x9680
    ctx->pc = 0x12a6fcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38528);
    // 0x12a700: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x12a700u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x12a704: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x12a704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12a708: 0x8c440360  lw          $a0, 0x360($v0)
    ctx->pc = 0x12a708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 864)));
    // 0x12a70c: 0x24420360  addiu       $v0, $v0, 0x360
    ctx->pc = 0x12a70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 864));
    // 0x12a710: 0x10820002  beq         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x12A710u;
    {
        const bool branch_taken_0x12a710 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x12A714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A710u;
            // 0x12a714: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a710) {
            ctx->pc = 0x12A71Cu;
            goto label_12a71c;
        }
    }
    ctx->pc = 0x12A718u;
    // 0x12a718: 0x8c940008  lw          $s4, 0x8($a0)
    ctx->pc = 0x12a718u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_12a71c:
    // 0x12a71c: 0x1280001d  beqz        $s4, . + 4 + (0x1D << 2)
    ctx->pc = 0x12A71Cu;
    {
        const bool branch_taken_0x12a71c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A71Cu;
            // 0x12a720: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a71c) {
            ctx->pc = 0x12A794u;
            goto label_12a794;
        }
    }
    ctx->pc = 0x12A724u;
    // 0x12a724: 0x86830060  lh          $v1, 0x60($s4)
    ctx->pc = 0x12a724u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 96)));
    // 0x12a728: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x12A728u;
    {
        const bool branch_taken_0x12a728 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x12A72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A728u;
            // 0x12a72c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a728) {
            ctx->pc = 0x12A738u;
            goto label_12a738;
        }
    }
    ctx->pc = 0x12A730u;
    // 0x12a730: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x12A730u;
    {
        const bool branch_taken_0x12a730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A730u;
            // 0x12a734: 0x26850020  addiu       $a1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a730) {
            ctx->pc = 0x12A754u;
            goto label_12a754;
        }
    }
    ctx->pc = 0x12A738u;
label_12a738:
    // 0x12a738: 0xde830068  ld          $v1, 0x68($s4)
    ctx->pc = 0x12a738u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 104)));
    // 0x12a73c: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x12a73cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x12a740: 0x50650004  beql        $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12A740u;
    {
        const bool branch_taken_0x12a740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x12a740) {
            ctx->pc = 0x12A744u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12A740u;
            // 0x12a744: 0x26850070  addiu       $a1, $s4, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12A754u;
            goto label_12a754;
        }
    }
    ctx->pc = 0x12A748u;
    // 0x12a748: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x12A748u;
    SET_GPR_U32(ctx, 31, 0x12A750u);
    ctx->pc = 0x12A74Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A748u;
            // 0x12a74c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A750u; }
        if (ctx->pc != 0x12A750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A750u; }
        if (ctx->pc != 0x12A750u) { return; }
    }
    ctx->pc = 0x12A750u;
    // 0x12a750: 0x26850070  addiu       $a1, $s4, 0x70
    ctx->pc = 0x12a750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
label_12a754:
    // 0x12a754: 0x8e50001c  lw          $s0, 0x1C($s2)
    ctx->pc = 0x12a754u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x12a758: 0x2655001c  addiu       $s5, $s2, 0x1C
    ctx->pc = 0x12a758u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x12a75c: 0x1215000d  beq         $s0, $s5, . + 4 + (0xD << 2)
    ctx->pc = 0x12A75Cu;
    {
        const bool branch_taken_0x12a75c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 21));
        ctx->pc = 0x12A760u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A75Cu;
            // 0x12a760: 0x78b30030  lq          $s3, 0x30($a1) (Delay Slot)
        SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 5), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a75c) {
            ctx->pc = 0x12A794u;
            goto label_12a794;
        }
    }
    ctx->pc = 0x12A764u;
    // 0x12a764: 0x8e110008  lw          $s1, 0x8($s0)
    ctx->pc = 0x12a764u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_12a768:
    // 0x12a768: 0x70132ca9  por         $a1, $zero, $s3
    ctx->pc = 0x12a768u;
    SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 19)));
    // 0x12a76c: 0xc04a8cc  jal         func_12A330
    ctx->pc = 0x12A76Cu;
    SET_GPR_U32(ctx, 31, 0x12A774u);
    ctx->pc = 0x12A770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A76Cu;
            // 0x12a770: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A330u;
    if (runtime->hasFunction(0x12A330u)) {
        auto targetFn = runtime->lookupFunction(0x12A330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A774u; }
        if (ctx->pc != 0x12A774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A330_0x12a330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A774u; }
        if (ctx->pc != 0x12A774u) { return; }
    }
    ctx->pc = 0x12A774u;
    // 0x12a774: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x12a774u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12a778: 0x0  nop
    ctx->pc = 0x12a778u;
    // NOP
    // 0x12a77c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x12A77Cu;
    {
        const bool branch_taken_0x12a77c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12A780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A77Cu;
            // 0x12a780: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a77c) {
            ctx->pc = 0x12A78Cu;
            goto label_12a78c;
        }
    }
    ctx->pc = 0x12A784u;
    // 0x12a784: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x12a784u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x12a788: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x12a788u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12a78c:
    // 0x12a78c: 0x5615fff6  bnel        $s0, $s5, . + 4 + (-0xA << 2)
    ctx->pc = 0x12A78Cu;
    {
        const bool branch_taken_0x12a78c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 21));
        if (branch_taken_0x12a78c) {
            ctx->pc = 0x12A790u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12A78Cu;
            // 0x12a790: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12A768u;
            runtime->cooperativeGuestYield();
            goto label_12a768;
        }
    }
    ctx->pc = 0x12A794u;
label_12a794:
    // 0x12a794: 0x12c00080  beqz        $s6, . + 4 + (0x80 << 2)
    ctx->pc = 0x12A794u;
    {
        const bool branch_taken_0x12a794 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A794u;
            // 0x12a798: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a794) {
            ctx->pc = 0x12A998u;
            goto label_12a998;
        }
    }
    ctx->pc = 0x12A79Cu;
    // 0x12a79c: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x12a79cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x12a7a0: 0xac8203a4  sw          $v0, 0x3A4($a0)
    ctx->pc = 0x12a7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 932), GPR_U32(ctx, 2));
    // 0x12a7a4: 0x8ec20028  lw          $v0, 0x28($s6)
    ctx->pc = 0x12a7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 40)));
    // 0x12a7a8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x12A7A8u;
    {
        const bool branch_taken_0x12a7a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a7a8) {
            ctx->pc = 0x12A7ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12A7A8u;
            // 0x12a7ac: 0x8c8203ac  lw          $v0, 0x3AC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 940)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12A7C8u;
            goto label_12a7c8;
        }
    }
    ctx->pc = 0x12A7B0u;
    // 0x12a7b0: 0x8c8303ac  lw          $v1, 0x3AC($a0)
    ctx->pc = 0x12a7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 940)));
    // 0x12a7b4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x12a7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x12a7b8: 0x3442ff7f  ori         $v0, $v0, 0xFF7F
    ctx->pc = 0x12a7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65407);
    // 0x12a7bc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x12a7bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x12a7c0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x12A7C0u;
    {
        const bool branch_taken_0x12a7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A7C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A7C0u;
            // 0x12a7c4: 0xac8303ac  sw          $v1, 0x3AC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 940), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a7c0) {
            ctx->pc = 0x12A7D0u;
            goto label_12a7d0;
        }
    }
    ctx->pc = 0x12A7C8u;
label_12a7c8:
    // 0x12a7c8: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x12a7c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x12a7cc: 0xac8203ac  sw          $v0, 0x3AC($a0)
    ctx->pc = 0x12a7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 940), GPR_U32(ctx, 2));
label_12a7d0:
    // 0x12a7d0: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x12a7d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12a7d4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x12a7d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12a7d8: 0xc08ed78  jal         func_23B5E0
    ctx->pc = 0x12A7D8u;
    SET_GPR_U32(ctx, 31, 0x12A7E0u);
    ctx->pc = 0x12A7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A7D8u;
            // 0x12a7dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B5E0u;
    if (runtime->hasFunction(0x23B5E0u)) {
        auto targetFn = runtime->lookupFunction(0x23B5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A7E0u; }
        if (ctx->pc != 0x12A7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023B5E0_0x23b5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A7E0u; }
        if (ctx->pc != 0x12A7E0u) { return; }
    }
    ctx->pc = 0x12A7E0u;
    // 0x12a7e0: 0xc6000380  lwc1        $f0, 0x380($s0)
    ctx->pc = 0x12a7e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 896)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12a7e4: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x12a7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x12a7e8: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x12a7e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12a7ec: 0xe4400380  swc1        $f0, 0x380($v0)
    ctx->pc = 0x12a7ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 896), bits); }
    // 0x12a7f0: 0xac51039c  sw          $s1, 0x39C($v0)
    ctx->pc = 0x12a7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 924), GPR_U32(ctx, 17));
    // 0x12a7f4: 0xc08ed78  jal         func_23B5E0
    ctx->pc = 0x12A7F4u;
    SET_GPR_U32(ctx, 31, 0x12A7FCu);
    ctx->pc = 0x12A7F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A7F4u;
            // 0x12a7f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B5E0u;
    if (runtime->hasFunction(0x23B5E0u)) {
        auto targetFn = runtime->lookupFunction(0x23B5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A7FCu; }
        if (ctx->pc != 0x12A7FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023B5E0_0x23b5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A7FCu; }
        if (ctx->pc != 0x12A7FCu) { return; }
    }
    ctx->pc = 0x12A7FCu;
    // 0x12a7fc: 0xc600037c  lwc1        $f0, 0x37C($s0)
    ctx->pc = 0x12a7fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12a800: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x12a800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12a804: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x12a804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x12a808: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x12a808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x12a80c: 0xe440037c  swc1        $f0, 0x37C($v0)
    ctx->pc = 0x12a80cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 892), bits); }
    // 0x12a810: 0x8e440004  lw          $a0, 0x4($s2)
    ctx->pc = 0x12a810u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x12a814: 0xc4600384  lwc1        $f0, 0x384($v1)
    ctx->pc = 0x12a814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 900)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12a818: 0xac51039c  sw          $s1, 0x39C($v0)
    ctx->pc = 0x12a818u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 924), GPR_U32(ctx, 17));
    // 0x12a81c: 0xe4400384  swc1        $f0, 0x384($v0)
    ctx->pc = 0x12a81cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 900), bits); }
    // 0x12a820: 0xac910100  sw          $s1, 0x100($a0)
    ctx->pc = 0x12a820u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 17));
    // 0x12a824: 0xc4600388  lwc1        $f0, 0x388($v1)
    ctx->pc = 0x12a824u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12a828: 0x8ec3002c  lw          $v1, 0x2C($s6)
    ctx->pc = 0x12a828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 44)));
    // 0x12a82c: 0xe4400388  swc1        $f0, 0x388($v0)
    ctx->pc = 0x12a82cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 904), bits); }
    // 0x12a830: 0x24710008  addiu       $s1, $v1, 0x8
    ctx->pc = 0x12a830u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x12a834: 0xc68000f8  lwc1        $f0, 0xF8($s4)
    ctx->pc = 0x12a834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x12a838: 0xe48000f8  swc1        $f0, 0xF8($a0)
    ctx->pc = 0x12a838u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 248), bits); }
    // 0x12a83c: 0xafa00080  sw          $zero, 0x80($sp)
    ctx->pc = 0x12a83cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
    // 0x12a840: 0x84620008  lh          $v0, 0x8($v1)
    ctx->pc = 0x12a840u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x12a844: 0x86830060  lh          $v1, 0x60($s4)
    ctx->pc = 0x12a844u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 96)));
    // 0x12a848: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x12A848u;
    {
        const bool branch_taken_0x12a848 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x12A84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A848u;
            // 0x12a84c: 0x2c28021  addu        $s0, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a848) {
            ctx->pc = 0x12A858u;
            goto label_12a858;
        }
    }
    ctx->pc = 0x12A850u;
    // 0x12a850: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x12A850u;
    {
        const bool branch_taken_0x12a850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A850u;
            // 0x12a854: 0x26830020  addiu       $v1, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a850) {
            ctx->pc = 0x12A878u;
            goto label_12a878;
        }
    }
    ctx->pc = 0x12A858u;
label_12a858:
    // 0x12a858: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x12a858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x12a85c: 0xde830068  ld          $v1, 0x68($s4)
    ctx->pc = 0x12a85cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 104)));
    // 0x12a860: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x12a860u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x12a864: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x12A864u;
    {
        const bool branch_taken_0x12a864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x12A868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A864u;
            // 0x12a868: 0x26830070  addiu       $v1, $s4, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a864) {
            ctx->pc = 0x12A878u;
            goto label_12a878;
        }
    }
    ctx->pc = 0x12A86Cu;
    // 0x12a86c: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x12A86Cu;
    SET_GPR_U32(ctx, 31, 0x12A874u);
    ctx->pc = 0x12A870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A86Cu;
            // 0x12a870: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A874u; }
        if (ctx->pc != 0x12A874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A874u; }
        if (ctx->pc != 0x12A874u) { return; }
    }
    ctx->pc = 0x12A874u;
    // 0x12a874: 0x26830070  addiu       $v1, $s4, 0x70
    ctx->pc = 0x12a874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 112));
label_12a878:
    // 0x12a878: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x12a878u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x12a87c: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x12a87cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x12a880: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12a880u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a884: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x12a884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a888: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x12a888u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x12a88c: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x12a88cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x12a890: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x12a890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x12a894: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x12a894u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x12a898: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x12a898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x12a89c: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x12a89cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x12a8a0: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x12a8a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x12a8a4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x12a8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x12a8a8: 0x40f809  jalr        $v0
    ctx->pc = 0x12A8A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x12A8B0u);
        ctx->pc = 0x12A8ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A8A8u;
            // 0x12a8ac: 0x27a70080  addiu       $a3, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x12A8B0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12A71Cu: goto label_12a71c;
            case 0x12A738u: goto label_12a738;
            case 0x12A754u: goto label_12a754;
            case 0x12A768u: goto label_12a768;
            case 0x12A78Cu: goto label_12a78c;
            case 0x12A794u: goto label_12a794;
            case 0x12A7C8u: goto label_12a7c8;
            case 0x12A7D0u: goto label_12a7d0;
            case 0x12A858u: goto label_12a858;
            case 0x12A878u: goto label_12a878;
            case 0x12A930u: goto label_12a930;
            case 0x12A950u: goto label_12a950;
            case 0x12A964u: goto label_12a964;
            case 0x12A998u: goto label_12a998;
            case 0x12A9E8u: goto label_12a9e8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x12A8B0u; }
            if (ctx->pc != 0x12A8B0u) { return; }
        }
        }
    }
    ctx->pc = 0x12A8B0u;
    // 0x12a8b0: 0x8e460004  lw          $a2, 0x4($s2)
    ctx->pc = 0x12a8b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x12a8b4: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x12a8b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12a8b8: 0x3c08002a  lui         $t0, 0x2A
    ctx->pc = 0x12a8b8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)42 << 16));
    // 0x12a8bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x12a8bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a8c0: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x12a8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
    // 0x12a8c4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x12a8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12a8c8: 0xdd07bdf8  ld          $a3, -0x4208($t0)
    ctx->pc = 0x12a8c8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 8), 4294950392)));
    // 0x12a8cc: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x12a8ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a8d0: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x12a8d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12a8d4: 0x84c30060  lh          $v1, 0x60($a2)
    ctx->pc = 0x12a8d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 96)));
    // 0x12a8d8: 0x64e70001  daddiu      $a3, $a3, 0x1
    ctx->pc = 0x12a8d8u;
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)1);
    // 0x12a8dc: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x12a8dcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
    // 0x12a8e0: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x12a8e0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x12a8e4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x12a8e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12a8e8: 0xe3480a  movz        $t1, $a3, $v1
    ctx->pc = 0x12a8e8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 7));
    // 0x12a8ec: 0x120182d  daddu       $v1, $t1, $zero
    ctx->pc = 0x12a8ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12a8f0: 0x7cc20040  sq          $v0, 0x40($a2)
    ctx->pc = 0x12a8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 2));
    // 0x12a8f4: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x12a8f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12a8f8: 0x7cc20050  sq          $v0, 0x50($a2)
    ctx->pc = 0x12a8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 80), GPR_VEC(ctx, 2));
    // 0x12a8fc: 0xfd07bdf8  sd          $a3, -0x4208($t0)
    ctx->pc = 0x12a8fcu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 4294950392), GPR_U64(ctx, 7));
    // 0x12a900: 0xfcc30068  sd          $v1, 0x68($a2)
    ctx->pc = 0x12a900u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 104), GPR_U64(ctx, 3));
    // 0x12a904: 0xc08ed6e  jal         func_23B5B8
    ctx->pc = 0x12A904u;
    SET_GPR_U32(ctx, 31, 0x12A90Cu);
    ctx->pc = 0x12A908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12A904u;
            // 0x12a908: 0xfcc000f0  sd          $zero, 0xF0($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 240), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B5B8u;
    if (runtime->hasFunction(0x23B5B8u)) {
        auto targetFn = runtime->lookupFunction(0x23B5B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A90Cu; }
        if (ctx->pc != 0x12A90Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23b5b8_0x23b5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12A90Cu; }
        if (ctx->pc != 0x12A90Cu) { return; }
    }
    ctx->pc = 0x12A90Cu;
    // 0x12a90c: 0xc7a10080  lwc1        $f1, 0x80($sp)
    ctx->pc = 0x12a90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x12a910: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x12a910u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x12a914: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x12a914u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x12a918: 0x0  nop
    ctx->pc = 0x12a918u;
    // NOP
    // 0x12a91c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x12A91Cu;
    {
        const bool branch_taken_0x12a91c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x12A920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A91Cu;
            // 0x12a920: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a91c) {
            ctx->pc = 0x12A930u;
            goto label_12a930;
        }
    }
    ctx->pc = 0x12A924u;
    // 0x12a924: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x12a924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x12a928: 0xac62039c  sw          $v0, 0x39C($v1)
    ctx->pc = 0x12a928u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 924), GPR_U32(ctx, 2));
    // 0x12a92c: 0xe4610384  swc1        $f1, 0x384($v1)
    ctx->pc = 0x12a92cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 900), bits); }
label_12a930:
    // 0x12a930: 0x8ec20024  lw          $v0, 0x24($s6)
    ctx->pc = 0x12a930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
    // 0x12a934: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x12A934u;
    {
        const bool branch_taken_0x12a934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a934) {
            ctx->pc = 0x12A938u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12A934u;
            // 0x12a938: 0x8e440014  lw          $a0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x12A950u;
            goto label_12a950;
        }
    }
    ctx->pc = 0x12A93Cu;
    // 0x12a93c: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x12a93cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x12a940: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x12a940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x12a944: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x12a944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x12a948: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x12A948u;
    {
        const bool branch_taken_0x12a948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A94Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A948u;
            // 0x12a94c: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a948) {
            ctx->pc = 0x12A964u;
            goto label_12a964;
        }
    }
    ctx->pc = 0x12A950u;
label_12a950:
    // 0x12a950: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x12a950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x12a954: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x12a954u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x12a958: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x12a958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x12a95c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x12a95cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x12a960: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x12a960u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
label_12a964:
    // 0x12a964: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x12a964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x12a968: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x12a968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x12a96c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x12a96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x12a970: 0x8e450018  lw          $a1, 0x18($s2)
    ctx->pc = 0x12a970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x12a974: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x12a974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x12a978: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x12a978u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x12a97c: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x12a97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x12a980: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x12a980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x12a984: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x12a984u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x12a988: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x12a988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x12a98c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x12a98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x12a990: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x12A990u;
    {
        const bool branch_taken_0x12a990 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x12A994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12A990u;
            // 0x12a994: 0xaca2000c  sw          $v0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12a990) {
            ctx->pc = 0x12A9E8u;
            goto label_12a9e8;
        }
    }
    ctx->pc = 0x12A998u;
label_12a998:
    // 0x12a998: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x12a998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x12a99c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x12a99cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x12a9a0: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x12a9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x12a9a4: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x12a9a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x12a9a8: 0xac4003a4  sw          $zero, 0x3A4($v0)
    ctx->pc = 0x12a9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 932), GPR_U32(ctx, 0));
    // 0x12a9ac: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x12a9acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x12a9b0: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x12a9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x12a9b4: 0x8e460014  lw          $a2, 0x14($s2)
    ctx->pc = 0x12a9b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x12a9b8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x12a9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x12a9bc: 0x8e470018  lw          $a3, 0x18($s2)
    ctx->pc = 0x12a9bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x12a9c0: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x12a9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x12a9c4: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x12a9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x12a9c8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x12a9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x12a9cc: 0xaca2000c  sw          $v0, 0xC($a1)
    ctx->pc = 0x12a9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
    // 0x12a9d0: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x12a9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x12a9d4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x12a9d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x12a9d8: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x12a9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
    // 0x12a9dc: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x12a9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x12a9e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x12a9e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x12a9e4: 0xace2000c  sw          $v0, 0xC($a3)
    ctx->pc = 0x12a9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
label_12a9e8:
    // 0x12a9e8: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x12a9e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x12a9ec: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x12a9ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x12a9f0: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x12a9f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x12a9f4: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x12a9f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x12a9f8: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x12a9f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x12a9fc: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x12a9fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x12aa00: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x12aa00u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x12aa04: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x12aa04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x12aa08: 0xc7b40110  lwc1        $f20, 0x110($sp)
    ctx->pc = 0x12aa08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12aa0c: 0x3e00008  jr          $ra
    ctx->pc = 0x12AA0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12AA10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12AA0Cu;
            // 0x12aa10: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12A71Cu: goto label_12a71c;
            case 0x12A738u: goto label_12a738;
            case 0x12A754u: goto label_12a754;
            case 0x12A768u: goto label_12a768;
            case 0x12A78Cu: goto label_12a78c;
            case 0x12A794u: goto label_12a794;
            case 0x12A7C8u: goto label_12a7c8;
            case 0x12A7D0u: goto label_12a7d0;
            case 0x12A858u: goto label_12a858;
            case 0x12A878u: goto label_12a878;
            case 0x12A930u: goto label_12a930;
            case 0x12A950u: goto label_12a950;
            case 0x12A964u: goto label_12a964;
            case 0x12A998u: goto label_12a998;
            case 0x12A9E8u: goto label_12a9e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12AA14u;
    // 0x12aa14: 0x0  nop
    ctx->pc = 0x12aa14u;
    // NOP
}
