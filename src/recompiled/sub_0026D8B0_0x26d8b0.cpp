#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026D8B0
// Address: 0x26d8b0 - 0x26dad8
void sub_0026D8B0_0x26d8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026D8B0_0x26d8b0");
#endif

    ctx->pc = 0x26d8b0u;

    // 0x26d8b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x26d8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x26d8b4: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x26d8b4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26d8b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x26d8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x26d8bc: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x26d8bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
    // 0x26d8c0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x26d8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x26d8c4: 0x700014a9  por         $v0, $zero, $zero
    ctx->pc = 0x26d8c4u;
    SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x26d8c8: 0x7fb30000  sq          $s3, 0x0($sp)
    ctx->pc = 0x26d8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 19));
    // 0x26d8cc: 0x79403  sra         $s2, $a3, 16
    ctx->pc = 0x26d8ccu;
    SET_GPR_S32(ctx, 18, SRA32(GPR_S32(ctx, 7), 16));
    // 0x26d8d0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x26d8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x26d8d4: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x26d8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x26d8d8: 0x7de20000  sq          $v0, 0x0($t7)
    ctx->pc = 0x26d8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 15), 0), GPR_VEC(ctx, 2));
    // 0x26d8dc: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x26d8dcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x26d8e0: 0x2642003f  addiu       $v0, $s2, 0x3F
    ctx->pc = 0x26d8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 63));
    // 0x26d8e4: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x26d8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
    // 0x26d8e8: 0xdde70000  ld          $a3, 0x0($t7)
    ctx->pc = 0x26d8e8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x26d8ec: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x26d8ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x26d8f0: 0x24038000  addiu       $v1, $zero, -0x8000
    ctx->pc = 0x26d8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294934528));
    // 0x26d8f4: 0x52c3c  dsll32      $a1, $a1, 16
    ctx->pc = 0x26d8f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 16));
    // 0x26d8f8: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x26d8f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x26d8fc: 0x240b000e  addiu       $t3, $zero, 0xE
    ctx->pc = 0x26d8fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x26d900: 0x69c03  sra         $s3, $a2, 16
    ctx->pc = 0x26d900u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 6), 16));
    // 0x26d904: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x26d904u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x26d908: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x26d908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x26d90c: 0x52c3f  dsra32      $a1, $a1, 16
    ctx->pc = 0x26d90cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
    // 0x26d910: 0xeb3825  or          $a3, $a3, $t3
    ctx->pc = 0x26d910u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 11));
    // 0x26d914: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x26d914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x26d918: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x26d918u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x26d91c: 0x3264000f  andi        $a0, $s3, 0xF
    ctx->pc = 0x26d91cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)15);
    // 0x26d920: 0xdde60008  ld          $a2, 0x8($t7)
    ctx->pc = 0x26d920u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x26d924: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x26d924u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x26d928: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x26d928u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x26d92c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x26d92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x26d930: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x26d930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x26d934: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x26d934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x26d938: 0xe23824  and         $a3, $a3, $v0
    ctx->pc = 0x26d938u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
    // 0x26d93c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x26d93cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x26d940: 0xddf00080  ld          $s0, 0x80($t7)
    ctx->pc = 0x26d940u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 15), 128)));
    // 0x26d944: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x26d944u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x26d948: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x26d948u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x26d94c: 0x4237c  dsll32      $a0, $a0, 13
    ctx->pc = 0x26d94cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 13));
    // 0x26d950: 0x3402ff00  ori         $v0, $zero, 0xFF00
    ctx->pc = 0x26d950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x26d954: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x26d954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x26d958: 0x84400  sll         $t0, $t0, 16
    ctx->pc = 0x26d958u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 16));
    // 0x26d95c: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x26d95cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
    // 0x26d960: 0xa5400  sll         $t2, $t2, 16
    ctx->pc = 0x26d960u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x26d964: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x26d964u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x26d968: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x26d968u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x26d96c: 0xcb3025  or          $a2, $a2, $t3
    ctx->pc = 0x26d96cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 11));
    // 0x26d970: 0x101c3a  dsrl        $v1, $s0, 16
    ctx->pc = 0x26d970u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) >> 16);
    // 0x26d974: 0x88c03  sra         $s1, $t0, 16
    ctx->pc = 0x26d974u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 8), 16));
    // 0x26d978: 0x9c403  sra         $t8, $t1, 16
    ctx->pc = 0x26d978u;
    SET_GPR_S32(ctx, 24, SRA32(GPR_S32(ctx, 9), 16));
    // 0x26d97c: 0xacc03  sra         $t9, $t2, 16
    ctx->pc = 0x26d97cu;
    SET_GPR_S32(ctx, 25, SRA32(GPR_S32(ctx, 10), 16));
    // 0x26d980: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x26d980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x26d984: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x26d984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x26d988: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x26d988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x26d98c: 0x24080018  addiu       $t0, $zero, 0x18
    ctx->pc = 0x26d98cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x26d990: 0x24090040  addiu       $t1, $zero, 0x40
    ctx->pc = 0x26d990u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x26d994: 0x240a001a  addiu       $t2, $zero, 0x1A
    ctx->pc = 0x26d994u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x26d998: 0x240b0046  addiu       $t3, $zero, 0x46
    ctx->pc = 0x26d998u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x26d99c: 0x240c0045  addiu       $t4, $zero, 0x45
    ctx->pc = 0x26d99cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x26d9a0: 0x240d0047  addiu       $t5, $zero, 0x47
    ctx->pc = 0x26d9a0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x26d9a4: 0x240e0044  addiu       $t6, $zero, 0x44
    ctx->pc = 0x26d9a4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x26d9a8: 0xfde70000  sd          $a3, 0x0($t7)
    ctx->pc = 0x26d9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 0), GPR_U64(ctx, 7));
    // 0x26d9ac: 0xfde60008  sd          $a2, 0x8($t7)
    ctx->pc = 0x26d9acu;
    WRITE64(ADD32(GPR_U32(ctx, 15), 8), GPR_U64(ctx, 6));
    // 0x26d9b0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x26d9b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x26d9b4: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x26d9b4u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x26d9b8: 0xfde20018  sd          $v0, 0x18($t7)
    ctx->pc = 0x26d9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 24), GPR_U64(ctx, 2));
    // 0x26d9bc: 0xfde40028  sd          $a0, 0x28($t7)
    ctx->pc = 0x26d9bcu;
    WRITE64(ADD32(GPR_U32(ctx, 15), 40), GPR_U64(ctx, 4));
    // 0x26d9c0: 0xfde80038  sd          $t0, 0x38($t7)
    ctx->pc = 0x26d9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 56), GPR_U64(ctx, 8));
    // 0x26d9c4: 0xfde90048  sd          $t1, 0x48($t7)
    ctx->pc = 0x26d9c4u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 72), GPR_U64(ctx, 9));
    // 0x26d9c8: 0xfdea0058  sd          $t2, 0x58($t7)
    ctx->pc = 0x26d9c8u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 88), GPR_U64(ctx, 10));
    // 0x26d9cc: 0xfdeb0068  sd          $t3, 0x68($t7)
    ctx->pc = 0x26d9ccu;
    WRITE64(ADD32(GPR_U32(ctx, 15), 104), GPR_U64(ctx, 11));
    // 0x26d9d0: 0xfdec0078  sd          $t4, 0x78($t7)
    ctx->pc = 0x26d9d0u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 120), GPR_U64(ctx, 12));
    // 0x26d9d4: 0xfded0088  sd          $t5, 0x88($t7)
    ctx->pc = 0x26d9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 136), GPR_U64(ctx, 13));
    // 0x26d9d8: 0xfdee0098  sd          $t6, 0x98($t7)
    ctx->pc = 0x26d9d8u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 152), GPR_U64(ctx, 14));
    // 0x26d9dc: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x26D9DCu;
    {
        const bool branch_taken_0x26d9dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26D9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26D9DCu;
            // 0x26d9e0: 0xfde50010  sd          $a1, 0x10($t7) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 15), 16), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d9dc) {
            ctx->pc = 0x26DA2Cu;
            goto label_26da2c;
        }
    }
    ctx->pc = 0x26D9E4u;
    // 0x26d9e4: 0x181c3c  dsll32      $v1, $t8, 16
    ctx->pc = 0x26d9e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 24) << (32 + 16));
    // 0x26d9e8: 0x3324000f  andi        $a0, $t9, 0xF
    ctx->pc = 0x26d9e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)15);
    // 0x26d9ec: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x26d9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x26d9f0: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x26d9f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x26d9f4: 0x3c05fff9  lui         $a1, 0xFFF9
    ctx->pc = 0x26d9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65529 << 16));
    // 0x26d9f8: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x26d9f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x26d9fc: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x26d9fcu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x26da00: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x26da00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x26da04: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x26da04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x26da08: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x26da08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x26da0c: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x26da0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x26da10: 0x42478  dsll        $a0, $a0, 17
    ctx->pc = 0x26da10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 17);
    // 0x26da14: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x26da14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x26da18: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x26da18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x26da1c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x26da1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x26da20: 0xfde30020  sd          $v1, 0x20($t7)
    ctx->pc = 0x26da20u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 32), GPR_U64(ctx, 3));
    // 0x26da24: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x26DA24u;
    {
        const bool branch_taken_0x26da24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DA28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DA24u;
            // 0x26da28: 0xfde20080  sd          $v0, 0x80($t7) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 15), 128), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26da24) {
            ctx->pc = 0x26DA44u;
            goto label_26da44;
        }
    }
    ctx->pc = 0x26DA2Cu;
label_26da2c:
    // 0x26da2c: 0x181c3c  dsll32      $v1, $t8, 16
    ctx->pc = 0x26da2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 24) << (32 + 16));
    // 0x26da30: 0x3322000f  andi        $v0, $t9, 0xF
    ctx->pc = 0x26da30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) & (uint64_t)(uint16_t)15);
    // 0x26da34: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x26da34u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x26da38: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x26da38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x26da3c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x26da3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x26da40: 0xfde30020  sd          $v1, 0x20($t7)
    ctx->pc = 0x26da40u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 32), GPR_U64(ctx, 3));
label_26da44:
    // 0x26da44: 0xdde40050  ld          $a0, 0x50($t7)
    ctx->pc = 0x26da44u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 15), 80)));
    // 0x26da48: 0x2643ffff  addiu       $v1, $s2, -0x1
    ctx->pc = 0x26da48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x26da4c: 0xdde50060  ld          $a1, 0x60($t7)
    ctx->pc = 0x26da4cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 15), 96)));
    // 0x26da50: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x26da50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x26da54: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x26da54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x26da58: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26da58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26da5c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x26da5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x26da60: 0x872025  or          $a0, $a0, $a3
    ctx->pc = 0x26da60u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 7));
    // 0x26da64: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x26da64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x26da68: 0xa72825  or          $a1, $a1, $a3
    ctx->pc = 0x26da68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 7));
    // 0x26da6c: 0x3c060716  lui         $a2, 0x716
    ctx->pc = 0x26da6cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1814 << 16));
    // 0x26da70: 0x34c65243  ori         $a2, $a2, 0x5243
    ctx->pc = 0x26da70u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)21059);
    // 0x26da74: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x26da74u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x26da78: 0x34c63425  ori         $a2, $a2, 0x3425
    ctx->pc = 0x26da78u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)13349);
    // 0x26da7c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x26da7cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x26da80: 0x34c66170  ori         $a2, $a2, 0x6170
    ctx->pc = 0x26da80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)24944);
    // 0x26da84: 0xfde30040  sd          $v1, 0x40($t7)
    ctx->pc = 0x26da84u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 64), GPR_U64(ctx, 3));
    // 0x26da88: 0xfde40050  sd          $a0, 0x50($t7)
    ctx->pc = 0x26da88u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 80), GPR_U64(ctx, 4));
    // 0x26da8c: 0x32620002  andi        $v0, $s3, 0x2
    ctx->pc = 0x26da8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)2);
    // 0x26da90: 0xfde50060  sd          $a1, 0x60($t7)
    ctx->pc = 0x26da90u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 96), GPR_U64(ctx, 5));
    // 0x26da94: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26DA94u;
    {
        const bool branch_taken_0x26da94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DA98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DA94u;
            // 0x26da98: 0xfde60090  sd          $a2, 0x90($t7) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 15), 144), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26da94) {
            ctx->pc = 0x26DAA8u;
            goto label_26daa8;
        }
    }
    ctx->pc = 0x26DA9Cu;
    // 0x26da9c: 0xdde20070  ld          $v0, 0x70($t7)
    ctx->pc = 0x26da9cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 15), 112)));
    // 0x26daa0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x26DAA0u;
    {
        const bool branch_taken_0x26daa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26DAA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DAA0u;
            // 0x26daa4: 0x471025  or          $v0, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26daa0) {
            ctx->pc = 0x26DAB4u;
            goto label_26dab4;
        }
    }
    ctx->pc = 0x26DAA8u;
label_26daa8:
    // 0x26daa8: 0xdde20070  ld          $v0, 0x70($t7)
    ctx->pc = 0x26daa8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 15), 112)));
    // 0x26daac: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x26daacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x26dab0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26dab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_26dab4:
    // 0x26dab4: 0xfde20070  sd          $v0, 0x70($t7)
    ctx->pc = 0x26dab4u;
    WRITE64(ADD32(GPR_U32(ctx, 15), 112), GPR_U64(ctx, 2));
    // 0x26dab8: 0xf  sync
    ctx->pc = 0x26dab8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x26dabc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x26dabcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26dac0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x26dac0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26dac4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x26dac4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26dac8: 0x7bb30000  lq          $s3, 0x0($sp)
    ctx->pc = 0x26dac8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26dacc: 0x3e00008  jr          $ra
    ctx->pc = 0x26DACCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26DAD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26DACCu;
            // 0x26dad0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26DA2Cu: goto label_26da2c;
            case 0x26DA44u: goto label_26da44;
            case 0x26DAA8u: goto label_26daa8;
            case 0x26DAB4u: goto label_26dab4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26DAD4u;
    // 0x26dad4: 0x0  nop
    ctx->pc = 0x26dad4u;
    // NOP
}
