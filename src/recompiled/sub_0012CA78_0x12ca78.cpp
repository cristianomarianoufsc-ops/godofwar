#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0012CA78
// Address: 0x12ca78 - 0x12cfd0
void sub_0012CA78_0x12ca78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012CA78_0x12ca78");
#endif

    ctx->pc = 0x12ca78u;

    // 0x12ca78: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x12ca78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x12ca7c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x12ca7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x12ca80: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x12ca80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x12ca84: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x12ca84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x12ca88: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x12ca88u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ca8c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x12ca8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x12ca90: 0x3c101000  lui         $s0, 0x1000
    ctx->pc = 0x12ca90u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)4096 << 16));
    // 0x12ca94: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x12ca94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x12ca98: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x12ca98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x12ca9c: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x12ca9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x12caa0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x12caa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x12caa4: 0xc04fd50  jal         func_13F540
    ctx->pc = 0x12CAA4u;
    SET_GPR_U32(ctx, 31, 0x12CAACu);
    ctx->pc = 0x12CAA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12CAA4u;
            // 0x12caa8: 0x3c110033  lui         $s1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F540u;
    if (runtime->hasFunction(0x13F540u)) {
        auto targetFn = runtime->lookupFunction(0x13F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CAACu; }
        if (ctx->pc != 0x12CAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0013f540_0x13f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CAACu; }
        if (ctx->pc != 0x12CAACu) { return; }
    }
    ctx->pc = 0x12CAACu;
    // 0x12caac: 0x8e22f168  lw          $v0, -0xE98($s1)
    ctx->pc = 0x12caacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x12cab0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x12cab0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x12cab4: 0x8e22f168  lw          $v0, -0xE98($s1)
    ctx->pc = 0x12cab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x12cab8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x12cab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x12cabc: 0xc04fe88  jal         func_13FA20
    ctx->pc = 0x12CABCu;
    SET_GPR_U32(ctx, 31, 0x12CAC4u);
    ctx->pc = 0x12CAC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12CABCu;
            // 0x12cac0: 0xae22f168  sw          $v0, -0xE98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA20u;
    if (runtime->hasFunction(0x13FA20u)) {
        auto targetFn = runtime->lookupFunction(0x13FA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CAC4u; }
        if (ctx->pc != 0x12CAC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa20_0x13fa48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CAC4u; }
        if (ctx->pc != 0x12CAC4u) { return; }
    }
    ctx->pc = 0x12CAC4u;
    // 0x12cac4: 0x8e22f168  lw          $v0, -0xE98($s1)
    ctx->pc = 0x12cac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x12cac8: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x12cac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x12cacc: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x12caccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12cad0: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x12cad0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x12cad4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x12cad4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x12cad8: 0x34078000  ori         $a3, $zero, 0x8000
    ctx->pc = 0x12cad8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12cadc: 0x73c78  dsll        $a3, $a3, 17
    ctx->pc = 0x12cadcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 17);
    // 0x12cae0: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x12cae0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
    // 0x12cae4: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x12cae4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x12cae8: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x12cae8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
    // 0x12caec: 0x2406004f  addiu       $a2, $zero, 0x4F
    ctx->pc = 0x12caecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x12caf0: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x12caf0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x12caf4: 0x9ca2f19c  lwu         $v0, -0xE64($a1)
    ctx->pc = 0x12caf4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 4294963612)));
    // 0x12caf8: 0x9c63f1a0  lwu         $v1, -0xE60($v1)
    ctx->pc = 0x12caf8u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294963616)));
    // 0x12cafc: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x12cafcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x12cb00: 0x8e24f168  lw          $a0, -0xE98($s1)
    ctx->pc = 0x12cb00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963560)));
    // 0x12cb04: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x12cb04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x12cb08: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x12cb08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x12cb0c: 0xfc860018  sd          $a2, 0x18($a0)
    ctx->pc = 0x12cb0cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 6));
    // 0x12cb10: 0xfc830010  sd          $v1, 0x10($a0)
    ctx->pc = 0x12cb10u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 3));
    // 0x12cb14: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x12cb14u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12cb18: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x12cb18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x12cb1c: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x12cb1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x12cb20: 0x8c43dd58  lw          $v1, -0x22A8($v0)
    ctx->pc = 0x12cb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958424)));
    // 0x12cb24: 0x2445dd58  addiu       $a1, $v0, -0x22A8
    ctx->pc = 0x12cb24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958424));
    // 0x12cb28: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x12cb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x12cb2c: 0x248e0090  addiu       $t6, $a0, 0x90
    ctx->pc = 0x12cb2cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), 144));
    // 0x12cb30: 0x32900  sll         $a1, $v1, 4
    ctx->pc = 0x12cb30u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x12cb34: 0x24080041  addiu       $t0, $zero, 0x41
    ctx->pc = 0x12cb34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x12cb38: 0x2c140  sll         $t8, $v0, 5
    ctx->pc = 0x12cb38u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x12cb3c: 0x24a603ff  addiu       $a2, $a1, 0x3FF
    ctx->pc = 0x12cb3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1023));
    // 0x12cb40: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x12cb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x12cb44: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x12cb44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x12cb48: 0xe6382a  slt         $a3, $a3, $a2
    ctx->pc = 0x12cb48u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x12cb4c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12cb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12cb50: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x12cb50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x12cb54: 0x24a507fe  addiu       $a1, $a1, 0x7FE
    ctx->pc = 0x12cb54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2046));
    // 0x12cb58: 0xc7280b  movn        $a1, $a2, $a3
    ctx->pc = 0x12cb58u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 6));
    // 0x12cb5c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x12cb5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x12cb60: 0x31c3a  dsrl        $v1, $v1, 16
    ctx->pc = 0x12cb60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 16);
    // 0x12cb64: 0x59a83  sra         $s3, $a1, 10
    ctx->pc = 0x12cb64u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 5), 10));
    // 0x12cb68: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x12cb68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x12cb6c: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x12cb6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x12cb70: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x12cb70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x12cb74: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x12cb74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x12cb78: 0x340c8000  ori         $t4, $zero, 0x8000
    ctx->pc = 0x12cb78u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12cb7c: 0xc6638  dsll        $t4, $t4, 24
    ctx->pc = 0x12cb7cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) << 24);
    // 0x12cb80: 0x3c073f80  lui         $a3, 0x3F80
    ctx->pc = 0x12cb80u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16256 << 16));
    // 0x12cb84: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x12cb84u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x12cb88: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x12cb88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x12cb8c: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x12cb8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x12cb90: 0x34e78080  ori         $a3, $a3, 0x8080
    ctx->pc = 0x12cb90u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32896);
    // 0x12cb94: 0x2409003b  addiu       $t1, $zero, 0x3B
    ctx->pc = 0x12cb94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x12cb98: 0x240a003f  addiu       $t2, $zero, 0x3F
    ctx->pc = 0x12cb98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x12cb9c: 0x240b0015  addiu       $t3, $zero, 0x15
    ctx->pc = 0x12cb9cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x12cba0: 0xae2ef168  sw          $t6, -0xE98($s1)
    ctx->pc = 0x12cba0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294963560), GPR_U32(ctx, 14));
    // 0x12cba4: 0xfc820020  sd          $v0, 0x20($a0)
    ctx->pc = 0x12cba4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 2));
    // 0x12cba8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x12cba8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cbac: 0xfc850028  sd          $a1, 0x28($a0)
    ctx->pc = 0x12cbacu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 5));
    // 0x12cbb0: 0xc82d  daddu       $t9, $zero, $zero
    ctx->pc = 0x12cbb0u;
    SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cbb4: 0xfc860038  sd          $a2, 0x38($a0)
    ctx->pc = 0x12cbb4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 6));
    // 0x12cbb8: 0xfc830040  sd          $v1, 0x40($a0)
    ctx->pc = 0x12cbb8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 64), GPR_U64(ctx, 3));
    // 0x12cbbc: 0xfc880048  sd          $t0, 0x48($a0)
    ctx->pc = 0x12cbbcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 72), GPR_U64(ctx, 8));
    // 0x12cbc0: 0xfc870050  sd          $a3, 0x50($a0)
    ctx->pc = 0x12cbc0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 80), GPR_U64(ctx, 7));
    // 0x12cbc4: 0xfc8d0058  sd          $t5, 0x58($a0)
    ctx->pc = 0x12cbc4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 88), GPR_U64(ctx, 13));
    // 0x12cbc8: 0xfc8c0060  sd          $t4, 0x60($a0)
    ctx->pc = 0x12cbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 96), GPR_U64(ctx, 12));
    // 0x12cbcc: 0xfc890068  sd          $t1, 0x68($a0)
    ctx->pc = 0x12cbccu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 104), GPR_U64(ctx, 9));
    // 0x12cbd0: 0xfc8a0078  sd          $t2, 0x78($a0)
    ctx->pc = 0x12cbd0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 120), GPR_U64(ctx, 10));
    // 0x12cbd4: 0xfc8b0088  sd          $t3, 0x88($a0)
    ctx->pc = 0x12cbd4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 136), GPR_U64(ctx, 11));
    // 0x12cbd8: 0xfc800030  sd          $zero, 0x30($a0)
    ctx->pc = 0x12cbd8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 0));
    // 0x12cbdc: 0xfc800070  sd          $zero, 0x70($a0)
    ctx->pc = 0x12cbdcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 112), GPR_U64(ctx, 0));
    // 0x12cbe0: 0x1a6000ee  blez        $s3, . + 4 + (0xEE << 2)
    ctx->pc = 0x12CBE0u;
    {
        const bool branch_taken_0x12cbe0 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x12CBE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CBE0u;
            // 0x12cbe4: 0xfc800080  sd          $zero, 0x80($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 128), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cbe0) {
            ctx->pc = 0x12CF9Cu;
            goto label_12cf9c;
        }
    }
    ctx->pc = 0x12CBE8u;
label_12cbe8:
    // 0x12cbe8: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x12cbe8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x12cbec: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x12cbecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x12cbf0: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x12cbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x12cbf4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x12cbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x12cbf8: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x12cbf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x12cbfc: 0x3c120030  lui         $s2, 0x30
    ctx->pc = 0x12cbfcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)48 << 16));
    // 0x12cc00: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x12cc00u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x12cc04: 0x3c060020  lui         $a2, 0x20
    ctx->pc = 0x12cc04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32 << 16));
    // 0x12cc08: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x12cc08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x12cc0c: 0x151940  sll         $v1, $s5, 5
    ctx->pc = 0x12cc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 21), 5));
    // 0x12cc10: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x12cc10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x12cc14: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x12cc14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x12cc18: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x12cc18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x12cc1c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x12cc1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x12cc20: 0x3c072800  lui         $a3, 0x2800
    ctx->pc = 0x12cc20u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)10240 << 16));
    // 0x12cc24: 0x3408a000  ori         $t0, $zero, 0xA000
    ctx->pc = 0x12cc24u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x12cc28: 0x844b8  dsll        $t0, $t0, 18
    ctx->pc = 0x12cc28u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 18);
    // 0x12cc2c: 0x8e42dd58  lw          $v0, -0x22A8($s2)
    ctx->pc = 0x12cc2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294958424)));
    // 0x12cc30: 0x34098000  ori         $t1, $zero, 0x8000
    ctx->pc = 0x12cc30u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12cc34: 0x94cf8  dsll        $t1, $t1, 19
    ctx->pc = 0x12cc34u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 19);
    // 0x12cc38: 0x8e05f168  lw          $a1, -0xE98($s0)
    ctx->pc = 0x12cc38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x12cc3c: 0x340a8000  ori         $t2, $zero, 0x8000
    ctx->pc = 0x12cc3cu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12cc40: 0xa5538  dsll        $t2, $t2, 20
    ctx->pc = 0x12cc40u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 20);
    // 0x12cc44: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x12cc44u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x12cc48: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x12cc48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x12cc4c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12cc4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12cc50: 0xfca40018  sd          $a0, 0x18($a1)
    ctx->pc = 0x12cc50u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 4));
    // 0x12cc54: 0x214ba  dsrl        $v0, $v0, 18
    ctx->pc = 0x12cc54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 18);
    // 0x12cc58: 0x3c140033  lui         $s4, 0x33
    ctx->pc = 0x12cc58u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)51 << 16));
    // 0x12cc5c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x12cc5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x12cc60: 0x3c0b0001  lui         $t3, 0x1
    ctx->pc = 0x12cc60u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)1 << 16));
    // 0x12cc64: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x12cc64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x12cc68: 0x3c0c0200  lui         $t4, 0x200
    ctx->pc = 0x12cc68u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)512 << 16));
    // 0x12cc6c: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x12cc6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x12cc70: 0x340dfffc  ori         $t5, $zero, 0xFFFC
    ctx->pc = 0x12cc70u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x12cc74: 0xd6fb8  dsll        $t5, $t5, 30
    ctx->pc = 0x12cc74u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 30);
    // 0x12cc78: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x12cc78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x12cc7c: 0x34078004  ori         $a3, $zero, 0x8004
    ctx->pc = 0x12cc7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32772);
    // 0x12cc80: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x12cc80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
    // 0x12cc84: 0x3c04418b  lui         $a0, 0x418B
    ctx->pc = 0x12cc84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16779 << 16));
    // 0x12cc88: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x12cc88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
    // 0x12cc8c: 0x24ae0030  addiu       $t6, $a1, 0x30
    ctx->pc = 0x12cc8cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x12cc90: 0xfca30010  sd          $v1, 0x10($a1)
    ctx->pc = 0x12cc90u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 3));
    // 0x12cc94: 0x24a80040  addiu       $t0, $a1, 0x40
    ctx->pc = 0x12cc94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x12cc98: 0x2403004d  addiu       $v1, $zero, 0x4D
    ctx->pc = 0x12cc98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x12cc9c: 0x24065353  addiu       $a2, $zero, 0x5353
    ctx->pc = 0x12cc9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21331));
    // 0x12cca0: 0x8e82f1a4  lw          $v0, -0xE5C($s4)
    ctx->pc = 0x12cca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294963620)));
    // 0x12cca4: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x12cca4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x12cca8: 0xaca70030  sw          $a3, 0x30($a1)
    ctx->pc = 0x12cca8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 7));
    // 0x12ccac: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x12ccacu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12ccb0: 0x21142  srl         $v0, $v0, 5
    ctx->pc = 0x12ccb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 5));
    // 0x12ccb4: 0xfca30028  sd          $v1, 0x28($a1)
    ctx->pc = 0x12ccb4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 3));
    // 0x12ccb8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12ccb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12ccbc: 0xadc40004  sw          $a0, 0x4($t6)
    ctx->pc = 0x12ccbcu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 4));
    // 0x12ccc0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x12ccc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x12ccc4: 0xadc60008  sw          $a2, 0x8($t6)
    ctx->pc = 0x12ccc4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 6));
    // 0x12ccc8: 0x4b1025  or          $v0, $v0, $t3
    ctx->pc = 0x12ccc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 11));
    // 0x12cccc: 0xadc0000c  sw          $zero, 0xC($t6)
    ctx->pc = 0x12ccccu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 0));
    // 0x12ccd0: 0x4c1025  or          $v0, $v0, $t4
    ctx->pc = 0x12ccd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 12));
    // 0x12ccd4: 0xae08f168  sw          $t0, -0xE98($s0)
    ctx->pc = 0x12ccd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 8));
    // 0x12ccd8: 0x4d1025  or          $v0, $v0, $t5
    ctx->pc = 0x12ccd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 13));
    // 0x12ccdc: 0xfca20020  sd          $v0, 0x20($a1)
    ctx->pc = 0x12ccdcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 2));
label_12cce0:
    // 0x12cce0: 0x8e03f168  lw          $v1, -0xE98($s0)
    ctx->pc = 0x12cce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x12cce4: 0x1f11021  addu        $v0, $t7, $s1
    ctx->pc = 0x12cce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x12cce8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x12cce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12ccec: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x12ccecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x12ccf0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x12ccf0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x12ccf4: 0x1f12821  addu        $a1, $t7, $s1
    ctx->pc = 0x12ccf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x12ccf8: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x12ccf8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
    // 0x12ccfc: 0x25e20080  addiu       $v0, $t7, 0x80
    ctx->pc = 0x12ccfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 128));
    // 0x12cd00: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x12cd00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x12cd04: 0x24a50088  addiu       $a1, $a1, 0x88
    ctx->pc = 0x12cd04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 136));
    // 0x12cd08: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x12cd08u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x12cd0c: 0x270d0008  addiu       $t5, $t8, 0x8
    ctx->pc = 0x12cd0cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x12cd10: 0x25e60100  addiu       $a2, $t7, 0x100
    ctx->pc = 0x12cd10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 15), 256));
    // 0x12cd14: 0x8e0af168  lw          $t2, -0xE98($s0)
    ctx->pc = 0x12cd14u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x12cd18: 0xc0782d  daddu       $t7, $a2, $zero
    ctx->pc = 0x12cd18u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cd1c: 0x29e70400  slti        $a3, $t7, 0x400
    ctx->pc = 0x12cd1cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x12cd20: 0xad420010  sw          $v0, 0x10($t2)
    ctx->pc = 0x12cd20u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 16), GPR_U32(ctx, 2));
    // 0x12cd24: 0x25430020  addiu       $v1, $t2, 0x20
    ctx->pc = 0x12cd24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
    // 0x12cd28: 0x25420010  addiu       $v0, $t2, 0x10
    ctx->pc = 0x12cd28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
    // 0x12cd2c: 0x25440030  addiu       $a0, $t2, 0x30
    ctx->pc = 0x12cd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 48));
    // 0x12cd30: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x12cd30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x12cd34: 0x254b0040  addiu       $t3, $t2, 0x40
    ctx->pc = 0x12cd34u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 64));
    // 0x12cd38: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x12cd38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x12cd3c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x12cd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x12cd40: 0xad450020  sw          $a1, 0x20($t2)
    ctx->pc = 0x12cd40u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 32), GPR_U32(ctx, 5));
    // 0x12cd44: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x12cd44u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x12cd48: 0xac6d0004  sw          $t5, 0x4($v1)
    ctx->pc = 0x12cd48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 13));
    // 0x12cd4c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x12cd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x12cd50: 0xad460030  sw          $a2, 0x30($t2)
    ctx->pc = 0x12cd50u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 48), GPR_U32(ctx, 6));
    // 0x12cd54: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x12cd54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x12cd58: 0xac980004  sw          $t8, 0x4($a0)
    ctx->pc = 0x12cd58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 24));
    // 0x12cd5c: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x12cd5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x12cd60: 0x14e0ffdf  bnez        $a3, . + 4 + (-0x21 << 2)
    ctx->pc = 0x12CD60u;
    {
        const bool branch_taken_0x12cd60 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CD64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CD60u;
            // 0x12cd64: 0xae0bf168  sw          $t3, -0xE98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cd60) {
            ctx->pc = 0x12CCE0u;
            runtime->cooperativeGuestYield();
            goto label_12cce0;
        }
    }
    ctx->pc = 0x12CD68u;
    // 0x12cd68: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12cd68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12cd6c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x12cd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x12cd70: 0xad420040  sw          $v0, 0x40($t2)
    ctx->pc = 0x12cd70u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 64), GPR_U32(ctx, 2));
    // 0x12cd74: 0x15183c  dsll32      $v1, $s5, 0
    ctx->pc = 0x12cd74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << (32 + 0));
    // 0x12cd78: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x12cd78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x12cd7c: 0xad640008  sw          $a0, 0x8($t3)
    ctx->pc = 0x12cd7cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 8), GPR_U32(ctx, 4));
    // 0x12cd80: 0xad620004  sw          $v0, 0x4($t3)
    ctx->pc = 0x12cd80u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 2));
    // 0x12cd84: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x12cd84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x12cd88: 0xad60000c  sw          $zero, 0xC($t3)
    ctx->pc = 0x12cd88u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 0));
    // 0x12cd8c: 0x3c070200  lui         $a3, 0x200
    ctx->pc = 0x12cd8cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)512 << 16));
    // 0x12cd90: 0x34048004  ori         $a0, $zero, 0x8004
    ctx->pc = 0x12cd90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32772);
    // 0x12cd94: 0x3408fffc  ori         $t0, $zero, 0xFFFC
    ctx->pc = 0x12cd94u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65532);
    // 0x12cd98: 0x847b8  dsll        $t0, $t0, 30
    ctx->pc = 0x12cd98u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 30);
    // 0x12cd9c: 0x8e42dd58  lw          $v0, -0x22A8($s2)
    ctx->pc = 0x12cd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294958424)));
    // 0x12cda0: 0x3c05418b  lui         $a1, 0x418B
    ctx->pc = 0x12cda0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16779 << 16));
    // 0x12cda4: 0xad640020  sw          $a0, 0x20($t3)
    ctx->pc = 0x12cda4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 32), GPR_U32(ctx, 4));
    // 0x12cda8: 0x254e0060  addiu       $t6, $t2, 0x60
    ctx->pc = 0x12cda8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 10), 96));
    // 0x12cdac: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x12cdacu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x12cdb0: 0x25490070  addiu       $t1, $t2, 0x70
    ctx->pc = 0x12cdb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 10), 112));
    // 0x12cdb4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x12cdb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x12cdb8: 0x2404004d  addiu       $a0, $zero, 0x4D
    ctx->pc = 0x12cdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x12cdbc: 0x2143a  dsrl        $v0, $v0, 16
    ctx->pc = 0x12cdbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 16);
    // 0x12cdc0: 0x24065353  addiu       $a2, $zero, 0x5353
    ctx->pc = 0x12cdc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21331));
    // 0x12cdc4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x12cdc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x12cdc8: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x12cdc8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x12cdcc: 0x671825  or          $v1, $v1, $a3
    ctx->pc = 0x12cdccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 7));
    // 0x12cdd0: 0xfd640018  sd          $a0, 0x18($t3)
    ctx->pc = 0x12cdd0u;
    WRITE64(ADD32(GPR_U32(ctx, 11), 24), GPR_U64(ctx, 4));
    // 0x12cdd4: 0x681825  or          $v1, $v1, $t0
    ctx->pc = 0x12cdd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 8));
    // 0x12cdd8: 0xadc50004  sw          $a1, 0x4($t6)
    ctx->pc = 0x12cdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 5));
    // 0x12cddc: 0xfd630010  sd          $v1, 0x10($t3)
    ctx->pc = 0x12cddcu;
    WRITE64(ADD32(GPR_U32(ctx, 11), 16), GPR_U64(ctx, 3));
    // 0x12cde0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x12cde0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cde4: 0xadc60008  sw          $a2, 0x8($t6)
    ctx->pc = 0x12cde4u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 6));
    // 0x12cde8: 0x240f0003  addiu       $t7, $zero, 0x3
    ctx->pc = 0x12cde8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x12cdec: 0xadc0000c  sw          $zero, 0xC($t6)
    ctx->pc = 0x12cdecu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 0));
    // 0x12cdf0: 0xae09f168  sw          $t1, -0xE98($s0)
    ctx->pc = 0x12cdf0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 9));
    // 0x12cdf4: 0x0  nop
    ctx->pc = 0x12cdf4u;
    // NOP
label_12cdf8:
    // 0x12cdf8: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x12cdf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x12cdfc: 0x24e30088  addiu       $v1, $a3, 0x88
    ctx->pc = 0x12cdfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 136));
    // 0x12ce00: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x12ce00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12ce04: 0x24e50108  addiu       $a1, $a3, 0x108
    ctx->pc = 0x12ce04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 264));
    // 0x12ce08: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x12ce08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x12ce0c: 0x24e60080  addiu       $a2, $a3, 0x80
    ctx->pc = 0x12ce0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
    // 0x12ce10: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x12ce10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x12ce14: 0x25efffff  addiu       $t7, $t7, -0x1
    ctx->pc = 0x12ce14u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294967295));
    // 0x12ce18: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x12ce18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x12ce1c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x12ce1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x12ce20: 0x8e0bf168  lw          $t3, -0xE98($s0)
    ctx->pc = 0x12ce20u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x12ce24: 0xad670010  sw          $a3, 0x10($t3)
    ctx->pc = 0x12ce24u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 7));
    // 0x12ce28: 0x25620010  addiu       $v0, $t3, 0x10
    ctx->pc = 0x12ce28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
    // 0x12ce2c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x12ce2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x12ce30: 0x25630020  addiu       $v1, $t3, 0x20
    ctx->pc = 0x12ce30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
    // 0x12ce34: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x12ce34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x12ce38: 0x25640030  addiu       $a0, $t3, 0x30
    ctx->pc = 0x12ce38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 48));
    // 0x12ce3c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x12ce3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x12ce40: 0x256c0040  addiu       $t4, $t3, 0x40
    ctx->pc = 0x12ce40u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 11), 64));
    // 0x12ce44: 0xad650020  sw          $a1, 0x20($t3)
    ctx->pc = 0x12ce44u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 32), GPR_U32(ctx, 5));
    // 0x12ce48: 0x24e70100  addiu       $a3, $a3, 0x100
    ctx->pc = 0x12ce48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 256));
    // 0x12ce4c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x12ce4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x12ce50: 0xac6d0004  sw          $t5, 0x4($v1)
    ctx->pc = 0x12ce50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 13));
    // 0x12ce54: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x12ce54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x12ce58: 0xad660030  sw          $a2, 0x30($t3)
    ctx->pc = 0x12ce58u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 48), GPR_U32(ctx, 6));
    // 0x12ce5c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x12ce5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x12ce60: 0xac980004  sw          $t8, 0x4($a0)
    ctx->pc = 0x12ce60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 24));
    // 0x12ce64: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x12ce64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x12ce68: 0x5e1ffe3  bgez        $t7, . + 4 + (-0x1D << 2)
    ctx->pc = 0x12CE68u;
    {
        const bool branch_taken_0x12ce68 = (GPR_S32(ctx, 15) >= 0);
        ctx->pc = 0x12CE6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CE68u;
            // 0x12ce6c: 0xae0cf168  sw          $t4, -0xE98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12ce68) {
            ctx->pc = 0x12CDF8u;
            runtime->cooperativeGuestYield();
            goto label_12cdf8;
        }
    }
    ctx->pc = 0x12CE70u;
    // 0x12ce70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x12ce70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ce74: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x12ce74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x12ce78: 0xad620040  sw          $v0, 0x40($t3)
    ctx->pc = 0x12ce78u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 64), GPR_U32(ctx, 2));
    // 0x12ce7c: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x12ce7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x12ce80: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x12ce80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x12ce84: 0xad830008  sw          $v1, 0x8($t4)
    ctx->pc = 0x12ce84u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 8), GPR_U32(ctx, 3));
    // 0x12ce88: 0xad820004  sw          $v0, 0x4($t4)
    ctx->pc = 0x12ce88u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 2));
    // 0x12ce8c: 0x3c060020  lui         $a2, 0x20
    ctx->pc = 0x12ce8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32 << 16));
    // 0x12ce90: 0xad80000c  sw          $zero, 0xC($t4)
    ctx->pc = 0x12ce90u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 12), GPR_U32(ctx, 0));
    // 0x12ce94: 0x3c072800  lui         $a3, 0x2800
    ctx->pc = 0x12ce94u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)10240 << 16));
    // 0x12ce98: 0x3408a000  ori         $t0, $zero, 0xA000
    ctx->pc = 0x12ce98u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x12ce9c: 0x844b8  dsll        $t0, $t0, 18
    ctx->pc = 0x12ce9cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 18);
    // 0x12cea0: 0x34038004  ori         $v1, $zero, 0x8004
    ctx->pc = 0x12cea0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32772);
    // 0x12cea4: 0x9e82f1a4  lwu         $v0, -0xE5C($s4)
    ctx->pc = 0x12cea4u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 20), 4294963620)));
    // 0x12cea8: 0x34098000  ori         $t1, $zero, 0x8000
    ctx->pc = 0x12cea8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12ceac: 0x94cf8  dsll        $t1, $t1, 19
    ctx->pc = 0x12ceacu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 19);
    // 0x12ceb0: 0xad830020  sw          $v1, 0x20($t4)
    ctx->pc = 0x12ceb0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 32), GPR_U32(ctx, 3));
    // 0x12ceb4: 0x340a8000  ori         $t2, $zero, 0x8000
    ctx->pc = 0x12ceb4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x12ceb8: 0xa5538  dsll        $t2, $t2, 20
    ctx->pc = 0x12ceb8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 20);
    // 0x12cebc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x12cebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x12cec0: 0x3c04418b  lui         $a0, 0x418B
    ctx->pc = 0x12cec0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16779 << 16));
    // 0x12cec4: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x12cec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x12cec8: 0x256e0060  addiu       $t6, $t3, 0x60
    ctx->pc = 0x12cec8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 11), 96));
    // 0x12cecc: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x12ceccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x12ced0: 0x25660070  addiu       $a2, $t3, 0x70
    ctx->pc = 0x12ced0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 112));
    // 0x12ced4: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x12ced4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x12ced8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x12ced8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x12cedc: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x12cedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x12cee0: 0x24055353  addiu       $a1, $zero, 0x5353
    ctx->pc = 0x12cee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21331));
    // 0x12cee4: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x12cee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x12cee8: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x12cee8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x12ceec: 0xfd820010  sd          $v0, 0x10($t4)
    ctx->pc = 0x12ceecu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 16), GPR_U64(ctx, 2));
    // 0x12cef0: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x12cef0u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12cef4: 0xfd830018  sd          $v1, 0x18($t4)
    ctx->pc = 0x12cef4u;
    WRITE64(ADD32(GPR_U32(ctx, 12), 24), GPR_U64(ctx, 3));
    // 0x12cef8: 0xadc40004  sw          $a0, 0x4($t6)
    ctx->pc = 0x12cef8u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4), GPR_U32(ctx, 4));
    // 0x12cefc: 0xadc50008  sw          $a1, 0x8($t6)
    ctx->pc = 0x12cefcu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 8), GPR_U32(ctx, 5));
    // 0x12cf00: 0xadc0000c  sw          $zero, 0xC($t6)
    ctx->pc = 0x12cf00u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 12), GPR_U32(ctx, 0));
    // 0x12cf04: 0xae06f168  sw          $a2, -0xE98($s0)
    ctx->pc = 0x12cf04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 6));
label_12cf08:
    // 0x12cf08: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x12cf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x12cf0c: 0x25e30088  addiu       $v1, $t7, 0x88
    ctx->pc = 0x12cf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), 136));
    // 0x12cf10: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x12cf10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x12cf14: 0x1f12021  addu        $a0, $t7, $s1
    ctx->pc = 0x12cf14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x12cf18: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x12cf18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x12cf1c: 0x24840080  addiu       $a0, $a0, 0x80
    ctx->pc = 0x12cf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    // 0x12cf20: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x12cf20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x12cf24: 0x25e70108  addiu       $a3, $t7, 0x108
    ctx->pc = 0x12cf24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 15), 264));
    // 0x12cf28: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x12cf28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x12cf2c: 0x1f12821  addu        $a1, $t7, $s1
    ctx->pc = 0x12cf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
    // 0x12cf30: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x12cf30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x12cf34: 0x24a50100  addiu       $a1, $a1, 0x100
    ctx->pc = 0x12cf34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 256));
    // 0x12cf38: 0x25ef0100  addiu       $t7, $t7, 0x100
    ctx->pc = 0x12cf38u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 256));
    // 0x12cf3c: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x12cf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x12cf40: 0x29e80400  slti        $t0, $t7, 0x400
    ctx->pc = 0x12cf40u;
    SET_GPR_U64(ctx, 8, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x12cf44: 0xac440010  sw          $a0, 0x10($v0)
    ctx->pc = 0x12cf44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
    // 0x12cf48: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x12cf48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x12cf4c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x12cf4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x12cf50: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x12cf50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x12cf54: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x12cf54u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x12cf58: 0x24460040  addiu       $a2, $v0, 0x40
    ctx->pc = 0x12cf58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x12cf5c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x12cf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x12cf60: 0xac470020  sw          $a3, 0x20($v0)
    ctx->pc = 0x12cf60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 7));
    // 0x12cf64: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x12cf64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x12cf68: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x12cf68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x12cf6c: 0xac8d0004  sw          $t5, 0x4($a0)
    ctx->pc = 0x12cf6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 13));
    // 0x12cf70: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x12cf70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x12cf74: 0xac450030  sw          $a1, 0x30($v0)
    ctx->pc = 0x12cf74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 5));
    // 0x12cf78: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x12cf78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x12cf7c: 0xae06f168  sw          $a2, -0xE98($s0)
    ctx->pc = 0x12cf7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 6));
    // 0x12cf80: 0xac780004  sw          $t8, 0x4($v1)
    ctx->pc = 0x12cf80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 24));
    // 0x12cf84: 0x1500ffe0  bnez        $t0, . + 4 + (-0x20 << 2)
    ctx->pc = 0x12CF84u;
    {
        const bool branch_taken_0x12cf84 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CF88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CF84u;
            // 0x12cf88: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cf84) {
            ctx->pc = 0x12CF08u;
            runtime->cooperativeGuestYield();
            goto label_12cf08;
        }
    }
    ctx->pc = 0x12CF8Cu;
    // 0x12cf8c: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x12cf8cu;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
    // 0x12cf90: 0x333102a  slt         $v0, $t9, $s3
    ctx->pc = 0x12cf90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x12cf94: 0x1440ff14  bnez        $v0, . + 4 + (-0xEC << 2)
    ctx->pc = 0x12CF94u;
    {
        const bool branch_taken_0x12cf94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x12CF98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CF94u;
            // 0x12cf98: 0x26310400  addiu       $s1, $s1, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12cf94) {
            ctx->pc = 0x12CBE8u;
            runtime->cooperativeGuestYield();
            goto label_12cbe8;
        }
    }
    ctx->pc = 0x12CF9Cu;
label_12cf9c:
    // 0x12cf9c: 0xc04fe92  jal         func_13FA48
    ctx->pc = 0x12CF9Cu;
    SET_GPR_U32(ctx, 31, 0x12CFA4u);
    ctx->pc = 0x13FA48u;
    if (runtime->hasFunction(0x13FA48u)) {
        auto targetFn = runtime->lookupFunction(0x13FA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CFA4u; }
        if (ctx->pc != 0x12CFA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa48_0x13fa78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CFA4u; }
        if (ctx->pc != 0x12CFA4u) { return; }
    }
    ctx->pc = 0x12CFA4u;
    // 0x12cfa4: 0xc04fd78  jal         func_13F5E0
    ctx->pc = 0x12CFA4u;
    SET_GPR_U32(ctx, 31, 0x12CFACu);
    ctx->pc = 0x13F5E0u;
    if (runtime->hasFunction(0x13F5E0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CFACu; }
        if (ctx->pc != 0x12CFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f5e0_0x13f648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12CFACu; }
        if (ctx->pc != 0x12CFACu) { return; }
    }
    ctx->pc = 0x12CFACu;
    // 0x12cfac: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x12cfacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x12cfb0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x12cfb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12cfb4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x12cfb4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12cfb8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x12cfb8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12cfbc: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x12cfbcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12cfc0: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x12cfc0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12cfc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x12cfc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x12cfc8: 0x3e00008  jr          $ra
    ctx->pc = 0x12CFC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12CFCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12CFC8u;
            // 0x12cfcc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x12CBE8u: goto label_12cbe8;
            case 0x12CCE0u: goto label_12cce0;
            case 0x12CDF8u: goto label_12cdf8;
            case 0x12CF08u: goto label_12cf08;
            case 0x12CF9Cu: goto label_12cf9c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x12CFD0u;
}
