#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028B6E8
// Address: 0x28b6e8 - 0x28c0c8
void sub_0028B6E8_0x28b6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B6E8_0x28b6e8");
#endif

    ctx->pc = 0x28b6e8u;

label_28b6e8:
    // 0x28b6e8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x28b6e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x28b6ec: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x28b6ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x28b6f0: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x28b6f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x28b6f4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x28b6f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b6f8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x28b6f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x28b6fc: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x28b6fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b700: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x28b700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x28b704: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x28b704u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b708: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x28b708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x28b70c: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x28b70cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x28b710: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x28b710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x28b714: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x28b714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x28b718: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x28b718u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x28b71c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x28b71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x28b720: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x28b720u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_28b724:
    // 0x28b724: 0x32c20007  andi        $v0, $s6, 0x7
    ctx->pc = 0x28b724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)7);
    // 0x28b728: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28B728u;
    {
        const bool branch_taken_0x28b728 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B728u;
            // 0x28b72c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b728) {
            ctx->pc = 0x28B744u;
            goto label_28b744;
        }
    }
    ctx->pc = 0x28B730u;
    // 0x28b730: 0x32420007  andi        $v0, $s2, 0x7
    ctx->pc = 0x28b730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)7);
    // 0x28b734: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x28B734u;
    {
        const bool branch_taken_0x28b734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b734) {
            ctx->pc = 0x28B738u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28B734u;
            // 0x28b738: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28B744u;
            goto label_28b744;
        }
    }
    ctx->pc = 0x28B73Cu;
    // 0x28b73c: 0x3a420008  xori        $v0, $s2, 0x8
    ctx->pc = 0x28b73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)8);
    // 0x28b740: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x28b740u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_28b744:
    // 0x28b744: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x28b744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x28b748: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x28b748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28b74c: 0x2c620007  sltiu       $v0, $v1, 0x7
    ctx->pc = 0x28b74cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x28b750: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x28B750u;
    {
        const bool branch_taken_0x28b750 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B750u;
            // 0x28b754: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b750) {
            ctx->pc = 0x28B850u;
            goto label_28b850;
        }
    }
    ctx->pc = 0x28B758u;
    // 0x28b758: 0x721018  mult        $v0, $v1, $s2
    ctx->pc = 0x28b758u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28b75c: 0x2d28021  addu        $s0, $s6, $s2
    ctx->pc = 0x28b75cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
    // 0x28b760: 0x561821  addu        $v1, $v0, $s6
    ctx->pc = 0x28b760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x28b764: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x28b764u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x28b768: 0x1040024a  beqz        $v0, . + 4 + (0x24A << 2)
    ctx->pc = 0x28B768u;
    {
        const bool branch_taken_0x28b768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B768u;
            // 0x28b76c: 0x1210c2  srl         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b768) {
            ctx->pc = 0x28C094u;
            goto label_28c094;
        }
    }
    ctx->pc = 0x28B770u;
    // 0x28b770: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x28b770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x28b774: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x28b774u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x28b778: 0x2f03c  dsll32      $fp, $v0, 0
    ctx->pc = 0x28b778u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28b77c: 0x12a03c  dsll32      $s4, $s2, 0
    ctx->pc = 0x28b77cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 18) << (32 + 0));
    // 0x28b780: 0x28750002  slti        $s5, $v1, 0x2
    ctx->pc = 0x28b780u;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x28b784: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x28b784u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b788:
    // 0x28b788: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x28B788u;
    {
        const bool branch_taken_0x28b788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B788u;
            // 0x28b78c: 0x2129821  addu        $s3, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b788) {
            ctx->pc = 0x28B814u;
            goto label_28b814;
        }
    }
    ctx->pc = 0x28B790u;
label_28b790:
    // 0x28b790: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28B790u;
    {
        const bool branch_taken_0x28b790 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x28b790) {
            ctx->pc = 0x28B7ACu;
            goto label_28b7ac;
        }
    }
    ctx->pc = 0x28B798u;
    // 0x28b798: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x28b798u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28b79c: 0xde230000  ld          $v1, 0x0($s1)
    ctx->pc = 0x28b79cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28b7a0: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x28b7a0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x28b7a4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x28B7A4u;
    {
        const bool branch_taken_0x28b7a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B7A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B7A4u;
            // 0x28b7a8: 0xfe030000  sd          $v1, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b7a4) {
            ctx->pc = 0x28B810u;
            goto label_28b810;
        }
    }
    ctx->pc = 0x28B7ACu;
label_28b7ac:
    // 0x28b7ac: 0x12a0000e  beqz        $s5, . + 4 + (0xE << 2)
    ctx->pc = 0x28B7ACu;
    {
        const bool branch_taken_0x28b7ac = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B7B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B7ACu;
            // 0x28b7b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b7ac) {
            ctx->pc = 0x28B7E8u;
            goto label_28b7e8;
        }
    }
    ctx->pc = 0x28B7B4u;
    // 0x28b7b4: 0x1e283e  dsrl32      $a1, $fp, 0
    ctx->pc = 0x28b7b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 30) >> (32 + 0));
    // 0x28b7b8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28b7b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b7bc: 0x0  nop
    ctx->pc = 0x28b7bcu;
    // NOP
label_28b7c0:
    // 0x28b7c0: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x28b7c0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x28b7c4: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x28b7c4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
    // 0x28b7c8: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x28b7c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28b7cc: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x28b7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x28b7d0: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x28b7d0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x28b7d4: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x28b7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x28b7d8: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x28B7D8u;
    {
        const bool branch_taken_0x28b7d8 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x28B7DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B7D8u;
            // 0x28b7dc: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b7d8) {
            ctx->pc = 0x28B7C0u;
            runtime->cooperativeGuestYield();
            goto label_28b7c0;
        }
    }
    ctx->pc = 0x28B7E0u;
    // 0x28b7e0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x28B7E0u;
    {
        const bool branch_taken_0x28b7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B7E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B7E0u;
            // 0x28b7e4: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b7e0) {
            ctx->pc = 0x28B814u;
            goto label_28b814;
        }
    }
    ctx->pc = 0x28B7E8u;
label_28b7e8:
    // 0x28b7e8: 0x14283e  dsrl32      $a1, $s4, 0
    ctx->pc = 0x28b7e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) >> (32 + 0));
    // 0x28b7ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28b7ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b7f0:
    // 0x28b7f0: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x28b7f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x28b7f4: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x28b7f4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
    // 0x28b7f8: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x28b7f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28b7fc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x28b7fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x28b800: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x28b800u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x28b804: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x28b804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x28b808: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x28B808u;
    {
        const bool branch_taken_0x28b808 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x28B80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B808u;
            // 0x28b80c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b808) {
            ctx->pc = 0x28B7F0u;
            runtime->cooperativeGuestYield();
            goto label_28b7f0;
        }
    }
    ctx->pc = 0x28B810u;
label_28b810:
    // 0x28b810: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x28b810u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b814:
    // 0x28b814: 0x2d1102b  sltu        $v0, $s6, $s1
    ctx->pc = 0x28b814u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x28b818: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28B818u;
    {
        const bool branch_taken_0x28b818 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B818u;
            // 0x28b81c: 0x2328023  subu        $s0, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b818) {
            ctx->pc = 0x28B834u;
            goto label_28b834;
        }
    }
    ctx->pc = 0x28B820u;
    // 0x28b820: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28b820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b824: 0x2e0f809  jalr        $s7
    ctx->pc = 0x28B824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x28B82Cu);
        ctx->pc = 0x28B828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B824u;
            // 0x28b828: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28B82Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28B6E8u: goto label_28b6e8;
            case 0x28B724u: goto label_28b724;
            case 0x28B744u: goto label_28b744;
            case 0x28B788u: goto label_28b788;
            case 0x28B790u: goto label_28b790;
            case 0x28B7ACu: goto label_28b7ac;
            case 0x28B7C0u: goto label_28b7c0;
            case 0x28B7E8u: goto label_28b7e8;
            case 0x28B7F0u: goto label_28b7f0;
            case 0x28B810u: goto label_28b810;
            case 0x28B814u: goto label_28b814;
            case 0x28B834u: goto label_28b834;
            case 0x28B850u: goto label_28b850;
            case 0x28B8E4u: goto label_28b8e4;
            case 0x28B914u: goto label_28b914;
            case 0x28B918u: goto label_28b918;
            case 0x28B964u: goto label_28b964;
            case 0x28B994u: goto label_28b994;
            case 0x28B998u: goto label_28b998;
            case 0x28B9E8u: goto label_28b9e8;
            case 0x28BA18u: goto label_28ba18;
            case 0x28BA1Cu: goto label_28ba1c;
            case 0x28BA20u: goto label_28ba20;
            case 0x28BA60u: goto label_28ba60;
            case 0x28BA90u: goto label_28ba90;
            case 0x28BA94u: goto label_28ba94;
            case 0x28BA98u: goto label_28ba98;
            case 0x28BAC0u: goto label_28bac0;
            case 0x28BAE8u: goto label_28bae8;
            case 0x28BB10u: goto label_28bb10;
            case 0x28BB28u: goto label_28bb28;
            case 0x28BB48u: goto label_28bb48;
            case 0x28BB4Cu: goto label_28bb4c;
            case 0x28BB88u: goto label_28bb88;
            case 0x28BBB8u: goto label_28bbb8;
            case 0x28BBD8u: goto label_28bbd8;
            case 0x28BC00u: goto label_28bc00;
            case 0x28BC18u: goto label_28bc18;
            case 0x28BC38u: goto label_28bc38;
            case 0x28BC3Cu: goto label_28bc3c;
            case 0x28BC40u: goto label_28bc40;
            case 0x28BC64u: goto label_28bc64;
            case 0x28BC78u: goto label_28bc78;
            case 0x28BCA8u: goto label_28bca8;
            case 0x28BCC0u: goto label_28bcc0;
            case 0x28BCE8u: goto label_28bce8;
            case 0x28BCF8u: goto label_28bcf8;
            case 0x28BD18u: goto label_28bd18;
            case 0x28BD1Cu: goto label_28bd1c;
            case 0x28BD20u: goto label_28bd20;
            case 0x28BD6Cu: goto label_28bd6c;
            case 0x28BD88u: goto label_28bd88;
            case 0x28BDB0u: goto label_28bdb0;
            case 0x28BDC8u: goto label_28bdc8;
            case 0x28BDE8u: goto label_28bde8;
            case 0x28BDECu: goto label_28bdec;
            case 0x28BDFCu: goto label_28bdfc;
            case 0x28BE40u: goto label_28be40;
            case 0x28BE48u: goto label_28be48;
            case 0x28BE64u: goto label_28be64;
            case 0x28BE78u: goto label_28be78;
            case 0x28BEA0u: goto label_28bea0;
            case 0x28BEA8u: goto label_28bea8;
            case 0x28BEC8u: goto label_28bec8;
            case 0x28BECCu: goto label_28becc;
            case 0x28BEECu: goto label_28beec;
            case 0x28BF08u: goto label_28bf08;
            case 0x28BF50u: goto label_28bf50;
            case 0x28BF78u: goto label_28bf78;
            case 0x28BF88u: goto label_28bf88;
            case 0x28BFA8u: goto label_28bfa8;
            case 0x28BFACu: goto label_28bfac;
            case 0x28BFE0u: goto label_28bfe0;
            case 0x28C008u: goto label_28c008;
            case 0x28C018u: goto label_28c018;
            case 0x28C038u: goto label_28c038;
            case 0x28C03Cu: goto label_28c03c;
            case 0x28C054u: goto label_28c054;
            case 0x28C068u: goto label_28c068;
            case 0x28C06Cu: goto label_28c06c;
            case 0x28C084u: goto label_28c084;
            case 0x28C094u: goto label_28c094;
            case 0x28C098u: goto label_28c098;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28B82Cu; }
            if (ctx->pc != 0x28B82Cu) { return; }
        }
        }
    }
    ctx->pc = 0x28B82Cu;
    // 0x28b82c: 0x5c40ffd8  bgtzl       $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x28B82Cu;
    {
        const bool branch_taken_0x28b82c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x28b82c) {
            ctx->pc = 0x28B830u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28B82Cu;
            // 0x28b830: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28B790u;
            runtime->cooperativeGuestYield();
            goto label_28b790;
        }
    }
    ctx->pc = 0x28B834u;
label_28b834:
    // 0x28b834: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x28b834u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x28b838: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x28b838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b83c: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x28b83cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x28b840: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x28B840u;
    {
        const bool branch_taken_0x28b840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B840u;
            // 0x28b844: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b840) {
            ctx->pc = 0x28B788u;
            runtime->cooperativeGuestYield();
            goto label_28b788;
        }
    }
    ctx->pc = 0x28B848u;
    // 0x28b848: 0x10000213  b           . + 4 + (0x213 << 2)
    ctx->pc = 0x28B848u;
    {
        const bool branch_taken_0x28b848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B848u;
            // 0x28b84c: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b848) {
            ctx->pc = 0x28C098u;
            goto label_28c098;
        }
    }
    ctx->pc = 0x28B850u;
label_28b850:
    // 0x28b850: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x28b850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28b854: 0x41042  srl         $v0, $a0, 1
    ctx->pc = 0x28b854u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x28b858: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x28b858u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x28b85c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x28b85cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x28b860: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x28b860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x28b864: 0x522018  mult        $a0, $v0, $s2
    ctx->pc = 0x28b864u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x28b868: 0x1460008b  bnez        $v1, . + 4 + (0x8B << 2)
    ctx->pc = 0x28B868u;
    {
        const bool branch_taken_0x28b868 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B86Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B868u;
            // 0x28b86c: 0x968021  addu        $s0, $a0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b868) {
            ctx->pc = 0x28BA98u;
            goto label_28ba98;
        }
    }
    ctx->pc = 0x28B870u;
    // 0x28b870: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x28b870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28b874: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x28b874u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b878: 0x2c620029  sltiu       $v0, $v1, 0x29
    ctx->pc = 0x28b878u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)41) ? 1 : 0);
    // 0x28b87c: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x28b87cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28b880: 0x721818  mult        $v1, $v1, $s2
    ctx->pc = 0x28b880u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x28b884: 0x14400066  bnez        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x28B884u;
    {
        const bool branch_taken_0x28b884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28B888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B884u;
            // 0x28b888: 0x76a821  addu        $s5, $v1, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b884) {
            ctx->pc = 0x28BA20u;
            goto label_28ba20;
        }
    }
    ctx->pc = 0x28B88Cu;
    // 0x28b88c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x28b88cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28b890: 0x410c2  srl         $v0, $a0, 3
    ctx->pc = 0x28b890u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 3));
    // 0x28b894: 0x52f018  mult        $fp, $v0, $s2
    ctx->pc = 0x28b894u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 30, (int32_t)result); }
    // 0x28b898: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x28b898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b89c: 0x2de8821  addu        $s1, $s6, $fp
    ctx->pc = 0x28b89cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 30)));
    // 0x28b8a0: 0x1e1040  sll         $v0, $fp, 1
    ctx->pc = 0x28b8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
    // 0x28b8a4: 0x569821  addu        $s3, $v0, $s6
    ctx->pc = 0x28b8a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x28b8a8: 0x2e0f809  jalr        $s7
    ctx->pc = 0x28B8A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x28B8B0u);
        ctx->pc = 0x28B8ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B8A8u;
            // 0x28b8ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28B8B0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28B6E8u: goto label_28b6e8;
            case 0x28B724u: goto label_28b724;
            case 0x28B744u: goto label_28b744;
            case 0x28B788u: goto label_28b788;
            case 0x28B790u: goto label_28b790;
            case 0x28B7ACu: goto label_28b7ac;
            case 0x28B7C0u: goto label_28b7c0;
            case 0x28B7E8u: goto label_28b7e8;
            case 0x28B7F0u: goto label_28b7f0;
            case 0x28B810u: goto label_28b810;
            case 0x28B814u: goto label_28b814;
            case 0x28B834u: goto label_28b834;
            case 0x28B850u: goto label_28b850;
            case 0x28B8E4u: goto label_28b8e4;
            case 0x28B914u: goto label_28b914;
            case 0x28B918u: goto label_28b918;
            case 0x28B964u: goto label_28b964;
            case 0x28B994u: goto label_28b994;
            case 0x28B998u: goto label_28b998;
            case 0x28B9E8u: goto label_28b9e8;
            case 0x28BA18u: goto label_28ba18;
            case 0x28BA1Cu: goto label_28ba1c;
            case 0x28BA20u: goto label_28ba20;
            case 0x28BA60u: goto label_28ba60;
            case 0x28BA90u: goto label_28ba90;
            case 0x28BA94u: goto label_28ba94;
            case 0x28BA98u: goto label_28ba98;
            case 0x28BAC0u: goto label_28bac0;
            case 0x28BAE8u: goto label_28bae8;
            case 0x28BB10u: goto label_28bb10;
            case 0x28BB28u: goto label_28bb28;
            case 0x28BB48u: goto label_28bb48;
            case 0x28BB4Cu: goto label_28bb4c;
            case 0x28BB88u: goto label_28bb88;
            case 0x28BBB8u: goto label_28bbb8;
            case 0x28BBD8u: goto label_28bbd8;
            case 0x28BC00u: goto label_28bc00;
            case 0x28BC18u: goto label_28bc18;
            case 0x28BC38u: goto label_28bc38;
            case 0x28BC3Cu: goto label_28bc3c;
            case 0x28BC40u: goto label_28bc40;
            case 0x28BC64u: goto label_28bc64;
            case 0x28BC78u: goto label_28bc78;
            case 0x28BCA8u: goto label_28bca8;
            case 0x28BCC0u: goto label_28bcc0;
            case 0x28BCE8u: goto label_28bce8;
            case 0x28BCF8u: goto label_28bcf8;
            case 0x28BD18u: goto label_28bd18;
            case 0x28BD1Cu: goto label_28bd1c;
            case 0x28BD20u: goto label_28bd20;
            case 0x28BD6Cu: goto label_28bd6c;
            case 0x28BD88u: goto label_28bd88;
            case 0x28BDB0u: goto label_28bdb0;
            case 0x28BDC8u: goto label_28bdc8;
            case 0x28BDE8u: goto label_28bde8;
            case 0x28BDECu: goto label_28bdec;
            case 0x28BDFCu: goto label_28bdfc;
            case 0x28BE40u: goto label_28be40;
            case 0x28BE48u: goto label_28be48;
            case 0x28BE64u: goto label_28be64;
            case 0x28BE78u: goto label_28be78;
            case 0x28BEA0u: goto label_28bea0;
            case 0x28BEA8u: goto label_28bea8;
            case 0x28BEC8u: goto label_28bec8;
            case 0x28BECCu: goto label_28becc;
            case 0x28BEECu: goto label_28beec;
            case 0x28BF08u: goto label_28bf08;
            case 0x28BF50u: goto label_28bf50;
            case 0x28BF78u: goto label_28bf78;
            case 0x28BF88u: goto label_28bf88;
            case 0x28BFA8u: goto label_28bfa8;
            case 0x28BFACu: goto label_28bfac;
            case 0x28BFE0u: goto label_28bfe0;
            case 0x28C008u: goto label_28c008;
            case 0x28C018u: goto label_28c018;
            case 0x28C038u: goto label_28c038;
            case 0x28C03Cu: goto label_28c03c;
            case 0x28C054u: goto label_28c054;
            case 0x28C068u: goto label_28c068;
            case 0x28C06Cu: goto label_28c06c;
            case 0x28C084u: goto label_28c084;
            case 0x28C094u: goto label_28c094;
            case 0x28C098u: goto label_28c098;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28B8B0u; }
            if (ctx->pc != 0x28B8B0u) { return; }
        }
        }
    }
    ctx->pc = 0x28B8B0u;
    // 0x28b8b0: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x28B8B0u;
    {
        const bool branch_taken_0x28b8b0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x28B8B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B8B0u;
            // 0x28b8b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b8b0) {
            ctx->pc = 0x28B8E4u;
            goto label_28b8e4;
        }
    }
    ctx->pc = 0x28B8B8u;
    // 0x28b8b8: 0x2e0f809  jalr        $s7
    ctx->pc = 0x28B8B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x28B8C0u);
        ctx->pc = 0x28B8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B8B8u;
            // 0x28b8bc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28B8C0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28B6E8u: goto label_28b6e8;
            case 0x28B724u: goto label_28b724;
            case 0x28B744u: goto label_28b744;
            case 0x28B788u: goto label_28b788;
            case 0x28B790u: goto label_28b790;
            case 0x28B7ACu: goto label_28b7ac;
            case 0x28B7C0u: goto label_28b7c0;
            case 0x28B7E8u: goto label_28b7e8;
            case 0x28B7F0u: goto label_28b7f0;
            case 0x28B810u: goto label_28b810;
            case 0x28B814u: goto label_28b814;
            case 0x28B834u: goto label_28b834;
            case 0x28B850u: goto label_28b850;
            case 0x28B8E4u: goto label_28b8e4;
            case 0x28B914u: goto label_28b914;
            case 0x28B918u: goto label_28b918;
            case 0x28B964u: goto label_28b964;
            case 0x28B994u: goto label_28b994;
            case 0x28B998u: goto label_28b998;
            case 0x28B9E8u: goto label_28b9e8;
            case 0x28BA18u: goto label_28ba18;
            case 0x28BA1Cu: goto label_28ba1c;
            case 0x28BA20u: goto label_28ba20;
            case 0x28BA60u: goto label_28ba60;
            case 0x28BA90u: goto label_28ba90;
            case 0x28BA94u: goto label_28ba94;
            case 0x28BA98u: goto label_28ba98;
            case 0x28BAC0u: goto label_28bac0;
            case 0x28BAE8u: goto label_28bae8;
            case 0x28BB10u: goto label_28bb10;
            case 0x28BB28u: goto label_28bb28;
            case 0x28BB48u: goto label_28bb48;
            case 0x28BB4Cu: goto label_28bb4c;
            case 0x28BB88u: goto label_28bb88;
            case 0x28BBB8u: goto label_28bbb8;
            case 0x28BBD8u: goto label_28bbd8;
            case 0x28BC00u: goto label_28bc00;
            case 0x28BC18u: goto label_28bc18;
            case 0x28BC38u: goto label_28bc38;
            case 0x28BC3Cu: goto label_28bc3c;
            case 0x28BC40u: goto label_28bc40;
            case 0x28BC64u: goto label_28bc64;
            case 0x28BC78u: goto label_28bc78;
            case 0x28BCA8u: goto label_28bca8;
            case 0x28BCC0u: goto label_28bcc0;
            case 0x28BCE8u: goto label_28bce8;
            case 0x28BCF8u: goto label_28bcf8;
            case 0x28BD18u: goto label_28bd18;
            case 0x28BD1Cu: goto label_28bd1c;
            case 0x28BD20u: goto label_28bd20;
            case 0x28BD6Cu: goto label_28bd6c;
            case 0x28BD88u: goto label_28bd88;
            case 0x28BDB0u: goto label_28bdb0;
            case 0x28BDC8u: goto label_28bdc8;
            case 0x28BDE8u: goto label_28bde8;
            case 0x28BDECu: goto label_28bdec;
            case 0x28BDFCu: goto label_28bdfc;
            case 0x28BE40u: goto label_28be40;
            case 0x28BE48u: goto label_28be48;
            case 0x28BE64u: goto label_28be64;
            case 0x28BE78u: goto label_28be78;
            case 0x28BEA0u: goto label_28bea0;
            case 0x28BEA8u: goto label_28bea8;
            case 0x28BEC8u: goto label_28bec8;
            case 0x28BECCu: goto label_28becc;
            case 0x28BEECu: goto label_28beec;
            case 0x28BF08u: goto label_28bf08;
            case 0x28BF50u: goto label_28bf50;
            case 0x28BF78u: goto label_28bf78;
            case 0x28BF88u: goto label_28bf88;
            case 0x28BFA8u: goto label_28bfa8;
            case 0x28BFACu: goto label_28bfac;
            case 0x28BFE0u: goto label_28bfe0;
            case 0x28C008u: goto label_28c008;
            case 0x28C018u: goto label_28c018;
            case 0x28C038u: goto label_28c038;
            case 0x28C03Cu: goto label_28c03c;
            case 0x28C054u: goto label_28c054;
            case 0x28C068u: goto label_28c068;
            case 0x28C06Cu: goto label_28c06c;
            case 0x28C084u: goto label_28c084;
            case 0x28C094u: goto label_28c094;
            case 0x28C098u: goto label_28c098;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28B8C0u; }
            if (ctx->pc != 0x28B8C0u) { return; }
        }
        }
    }
    ctx->pc = 0x28B8C0u;
    // 0x28b8c0: 0x4400014  bltz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x28B8C0u;
    {
        const bool branch_taken_0x28b8c0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28B8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B8C0u;
            // 0x28b8c4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b8c0) {
            ctx->pc = 0x28B914u;
            goto label_28b914;
        }
    }
    ctx->pc = 0x28B8C8u;
    // 0x28b8c8: 0x2e0f809  jalr        $s7
    ctx->pc = 0x28B8C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x28B8D0u);
        ctx->pc = 0x28B8CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B8C8u;
            // 0x28b8cc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28B8D0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28B6E8u: goto label_28b6e8;
            case 0x28B724u: goto label_28b724;
            case 0x28B744u: goto label_28b744;
            case 0x28B788u: goto label_28b788;
            case 0x28B790u: goto label_28b790;
            case 0x28B7ACu: goto label_28b7ac;
            case 0x28B7C0u: goto label_28b7c0;
            case 0x28B7E8u: goto label_28b7e8;
            case 0x28B7F0u: goto label_28b7f0;
            case 0x28B810u: goto label_28b810;
            case 0x28B814u: goto label_28b814;
            case 0x28B834u: goto label_28b834;
            case 0x28B850u: goto label_28b850;
            case 0x28B8E4u: goto label_28b8e4;
            case 0x28B914u: goto label_28b914;
            case 0x28B918u: goto label_28b918;
            case 0x28B964u: goto label_28b964;
            case 0x28B994u: goto label_28b994;
            case 0x28B998u: goto label_28b998;
            case 0x28B9E8u: goto label_28b9e8;
            case 0x28BA18u: goto label_28ba18;
            case 0x28BA1Cu: goto label_28ba1c;
            case 0x28BA20u: goto label_28ba20;
            case 0x28BA60u: goto label_28ba60;
            case 0x28BA90u: goto label_28ba90;
            case 0x28BA94u: goto label_28ba94;
            case 0x28BA98u: goto label_28ba98;
            case 0x28BAC0u: goto label_28bac0;
            case 0x28BAE8u: goto label_28bae8;
            case 0x28BB10u: goto label_28bb10;
            case 0x28BB28u: goto label_28bb28;
            case 0x28BB48u: goto label_28bb48;
            case 0x28BB4Cu: goto label_28bb4c;
            case 0x28BB88u: goto label_28bb88;
            case 0x28BBB8u: goto label_28bbb8;
            case 0x28BBD8u: goto label_28bbd8;
            case 0x28BC00u: goto label_28bc00;
            case 0x28BC18u: goto label_28bc18;
            case 0x28BC38u: goto label_28bc38;
            case 0x28BC3Cu: goto label_28bc3c;
            case 0x28BC40u: goto label_28bc40;
            case 0x28BC64u: goto label_28bc64;
            case 0x28BC78u: goto label_28bc78;
            case 0x28BCA8u: goto label_28bca8;
            case 0x28BCC0u: goto label_28bcc0;
            case 0x28BCE8u: goto label_28bce8;
            case 0x28BCF8u: goto label_28bcf8;
            case 0x28BD18u: goto label_28bd18;
            case 0x28BD1Cu: goto label_28bd1c;
            case 0x28BD20u: goto label_28bd20;
            case 0x28BD6Cu: goto label_28bd6c;
            case 0x28BD88u: goto label_28bd88;
            case 0x28BDB0u: goto label_28bdb0;
            case 0x28BDC8u: goto label_28bdc8;
            case 0x28BDE8u: goto label_28bde8;
            case 0x28BDECu: goto label_28bdec;
            case 0x28BDFCu: goto label_28bdfc;
            case 0x28BE40u: goto label_28be40;
            case 0x28BE48u: goto label_28be48;
            case 0x28BE64u: goto label_28be64;
            case 0x28BE78u: goto label_28be78;
            case 0x28BEA0u: goto label_28bea0;
            case 0x28BEA8u: goto label_28bea8;
            case 0x28BEC8u: goto label_28bec8;
            case 0x28BECCu: goto label_28becc;
            case 0x28BEECu: goto label_28beec;
            case 0x28BF08u: goto label_28bf08;
            case 0x28BF50u: goto label_28bf50;
            case 0x28BF78u: goto label_28bf78;
            case 0x28BF88u: goto label_28bf88;
            case 0x28BFA8u: goto label_28bfa8;
            case 0x28BFACu: goto label_28bfac;
            case 0x28BFE0u: goto label_28bfe0;
            case 0x28C008u: goto label_28c008;
            case 0x28C018u: goto label_28c018;
            case 0x28C038u: goto label_28c038;
            case 0x28C03Cu: goto label_28c03c;
            case 0x28C054u: goto label_28c054;
            case 0x28C068u: goto label_28c068;
            case 0x28C06Cu: goto label_28c06c;
            case 0x28C084u: goto label_28c084;
            case 0x28C094u: goto label_28c094;
            case 0x28C098u: goto label_28c098;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28B8D0u; }
            if (ctx->pc != 0x28B8D0u) { return; }
        }
        }
    }
    ctx->pc = 0x28B8D0u;
    // 0x28b8d0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x28b8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28b8d4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28b8d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b8d8: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x28b8d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28b8dc: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x28B8DCu;
    {
        const bool branch_taken_0x28b8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B8E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B8DCu;
            // 0x28b8e0: 0x2c3200b  movn        $a0, $s6, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b8dc) {
            ctx->pc = 0x28B918u;
            goto label_28b918;
        }
    }
    ctx->pc = 0x28B8E4u;
label_28b8e4:
    // 0x28b8e4: 0x2e0f809  jalr        $s7
    ctx->pc = 0x28B8E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x28B8ECu);
        ctx->pc = 0x28B8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B8E4u;
            // 0x28b8e8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28B8ECu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28B6E8u: goto label_28b6e8;
            case 0x28B724u: goto label_28b724;
            case 0x28B744u: goto label_28b744;
            case 0x28B788u: goto label_28b788;
            case 0x28B790u: goto label_28b790;
            case 0x28B7ACu: goto label_28b7ac;
            case 0x28B7C0u: goto label_28b7c0;
            case 0x28B7E8u: goto label_28b7e8;
            case 0x28B7F0u: goto label_28b7f0;
            case 0x28B810u: goto label_28b810;
            case 0x28B814u: goto label_28b814;
            case 0x28B834u: goto label_28b834;
            case 0x28B850u: goto label_28b850;
            case 0x28B8E4u: goto label_28b8e4;
            case 0x28B914u: goto label_28b914;
            case 0x28B918u: goto label_28b918;
            case 0x28B964u: goto label_28b964;
            case 0x28B994u: goto label_28b994;
            case 0x28B998u: goto label_28b998;
            case 0x28B9E8u: goto label_28b9e8;
            case 0x28BA18u: goto label_28ba18;
            case 0x28BA1Cu: goto label_28ba1c;
            case 0x28BA20u: goto label_28ba20;
            case 0x28BA60u: goto label_28ba60;
            case 0x28BA90u: goto label_28ba90;
            case 0x28BA94u: goto label_28ba94;
            case 0x28BA98u: goto label_28ba98;
            case 0x28BAC0u: goto label_28bac0;
            case 0x28BAE8u: goto label_28bae8;
            case 0x28BB10u: goto label_28bb10;
            case 0x28BB28u: goto label_28bb28;
            case 0x28BB48u: goto label_28bb48;
            case 0x28BB4Cu: goto label_28bb4c;
            case 0x28BB88u: goto label_28bb88;
            case 0x28BBB8u: goto label_28bbb8;
            case 0x28BBD8u: goto label_28bbd8;
            case 0x28BC00u: goto label_28bc00;
            case 0x28BC18u: goto label_28bc18;
            case 0x28BC38u: goto label_28bc38;
            case 0x28BC3Cu: goto label_28bc3c;
            case 0x28BC40u: goto label_28bc40;
            case 0x28BC64u: goto label_28bc64;
            case 0x28BC78u: goto label_28bc78;
            case 0x28BCA8u: goto label_28bca8;
            case 0x28BCC0u: goto label_28bcc0;
            case 0x28BCE8u: goto label_28bce8;
            case 0x28BCF8u: goto label_28bcf8;
            case 0x28BD18u: goto label_28bd18;
            case 0x28BD1Cu: goto label_28bd1c;
            case 0x28BD20u: goto label_28bd20;
            case 0x28BD6Cu: goto label_28bd6c;
            case 0x28BD88u: goto label_28bd88;
            case 0x28BDB0u: goto label_28bdb0;
            case 0x28BDC8u: goto label_28bdc8;
            case 0x28BDE8u: goto label_28bde8;
            case 0x28BDECu: goto label_28bdec;
            case 0x28BDFCu: goto label_28bdfc;
            case 0x28BE40u: goto label_28be40;
            case 0x28BE48u: goto label_28be48;
            case 0x28BE64u: goto label_28be64;
            case 0x28BE78u: goto label_28be78;
            case 0x28BEA0u: goto label_28bea0;
            case 0x28BEA8u: goto label_28bea8;
            case 0x28BEC8u: goto label_28bec8;
            case 0x28BECCu: goto label_28becc;
            case 0x28BEECu: goto label_28beec;
            case 0x28BF08u: goto label_28bf08;
            case 0x28BF50u: goto label_28bf50;
            case 0x28BF78u: goto label_28bf78;
            case 0x28BF88u: goto label_28bf88;
            case 0x28BFA8u: goto label_28bfa8;
            case 0x28BFACu: goto label_28bfac;
            case 0x28BFE0u: goto label_28bfe0;
            case 0x28C008u: goto label_28c008;
            case 0x28C018u: goto label_28c018;
            case 0x28C038u: goto label_28c038;
            case 0x28C03Cu: goto label_28c03c;
            case 0x28C054u: goto label_28c054;
            case 0x28C068u: goto label_28c068;
            case 0x28C06Cu: goto label_28c06c;
            case 0x28C084u: goto label_28c084;
            case 0x28C094u: goto label_28c094;
            case 0x28C098u: goto label_28c098;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28B8ECu; }
            if (ctx->pc != 0x28B8ECu) { return; }
        }
        }
    }
    ctx->pc = 0x28B8ECu;
    // 0x28b8ec: 0x5c40000a  bgtzl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x28B8ECu;
    {
        const bool branch_taken_0x28b8ec = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x28b8ec) {
            ctx->pc = 0x28B8F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28B8ECu;
            // 0x28b8f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28B918u;
            goto label_28b918;
        }
    }
    ctx->pc = 0x28B8F4u;
    // 0x28b8f4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x28b8f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b8f8: 0x2e0f809  jalr        $s7
    ctx->pc = 0x28B8F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x28B900u);
        ctx->pc = 0x28B8FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B8F8u;
            // 0x28b8fc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28B900u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28B6E8u: goto label_28b6e8;
            case 0x28B724u: goto label_28b724;
            case 0x28B744u: goto label_28b744;
            case 0x28B788u: goto label_28b788;
            case 0x28B790u: goto label_28b790;
            case 0x28B7ACu: goto label_28b7ac;
            case 0x28B7C0u: goto label_28b7c0;
            case 0x28B7E8u: goto label_28b7e8;
            case 0x28B7F0u: goto label_28b7f0;
            case 0x28B810u: goto label_28b810;
            case 0x28B814u: goto label_28b814;
            case 0x28B834u: goto label_28b834;
            case 0x28B850u: goto label_28b850;
            case 0x28B8E4u: goto label_28b8e4;
            case 0x28B914u: goto label_28b914;
            case 0x28B918u: goto label_28b918;
            case 0x28B964u: goto label_28b964;
            case 0x28B994u: goto label_28b994;
            case 0x28B998u: goto label_28b998;
            case 0x28B9E8u: goto label_28b9e8;
            case 0x28BA18u: goto label_28ba18;
            case 0x28BA1Cu: goto label_28ba1c;
            case 0x28BA20u: goto label_28ba20;
            case 0x28BA60u: goto label_28ba60;
            case 0x28BA90u: goto label_28ba90;
            case 0x28BA94u: goto label_28ba94;
            case 0x28BA98u: goto label_28ba98;
            case 0x28BAC0u: goto label_28bac0;
            case 0x28BAE8u: goto label_28bae8;
            case 0x28BB10u: goto label_28bb10;
            case 0x28BB28u: goto label_28bb28;
            case 0x28BB48u: goto label_28bb48;
            case 0x28BB4Cu: goto label_28bb4c;
            case 0x28BB88u: goto label_28bb88;
            case 0x28BBB8u: goto label_28bbb8;
            case 0x28BBD8u: goto label_28bbd8;
            case 0x28BC00u: goto label_28bc00;
            case 0x28BC18u: goto label_28bc18;
            case 0x28BC38u: goto label_28bc38;
            case 0x28BC3Cu: goto label_28bc3c;
            case 0x28BC40u: goto label_28bc40;
            case 0x28BC64u: goto label_28bc64;
            case 0x28BC78u: goto label_28bc78;
            case 0x28BCA8u: goto label_28bca8;
            case 0x28BCC0u: goto label_28bcc0;
            case 0x28BCE8u: goto label_28bce8;
            case 0x28BCF8u: goto label_28bcf8;
            case 0x28BD18u: goto label_28bd18;
            case 0x28BD1Cu: goto label_28bd1c;
            case 0x28BD20u: goto label_28bd20;
            case 0x28BD6Cu: goto label_28bd6c;
            case 0x28BD88u: goto label_28bd88;
            case 0x28BDB0u: goto label_28bdb0;
            case 0x28BDC8u: goto label_28bdc8;
            case 0x28BDE8u: goto label_28bde8;
            case 0x28BDECu: goto label_28bdec;
            case 0x28BDFCu: goto label_28bdfc;
            case 0x28BE40u: goto label_28be40;
            case 0x28BE48u: goto label_28be48;
            case 0x28BE64u: goto label_28be64;
            case 0x28BE78u: goto label_28be78;
            case 0x28BEA0u: goto label_28bea0;
            case 0x28BEA8u: goto label_28bea8;
            case 0x28BEC8u: goto label_28bec8;
            case 0x28BECCu: goto label_28becc;
            case 0x28BEECu: goto label_28beec;
            case 0x28BF08u: goto label_28bf08;
            case 0x28BF50u: goto label_28bf50;
            case 0x28BF78u: goto label_28bf78;
            case 0x28BF88u: goto label_28bf88;
            case 0x28BFA8u: goto label_28bfa8;
            case 0x28BFACu: goto label_28bfac;
            case 0x28BFE0u: goto label_28bfe0;
            case 0x28C008u: goto label_28c008;
            case 0x28C018u: goto label_28c018;
            case 0x28C038u: goto label_28c038;
            case 0x28C03Cu: goto label_28c03c;
            case 0x28C054u: goto label_28c054;
            case 0x28C068u: goto label_28c068;
            case 0x28C06Cu: goto label_28c06c;
            case 0x28C084u: goto label_28c084;
            case 0x28C094u: goto label_28c094;
            case 0x28C098u: goto label_28c098;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28B900u; }
            if (ctx->pc != 0x28B900u) { return; }
        }
        }
    }
    ctx->pc = 0x28B900u;
    // 0x28b900: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x28b900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28b904: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x28b904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b908: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x28b908u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28b90c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28B90Cu;
    {
        const bool branch_taken_0x28b90c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B90Cu;
            // 0x28b910: 0x263200b  movn        $a0, $s3, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b90c) {
            ctx->pc = 0x28B918u;
            goto label_28b918;
        }
    }
    ctx->pc = 0x28B914u;
label_28b914:
    // 0x28b914: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28b914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28b918:
    // 0x28b918: 0x21ea023  subu        $s4, $s0, $fp
    ctx->pc = 0x28b918u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
    // 0x28b91c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28b91cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b920: 0x21e9821  addu        $s3, $s0, $fp
    ctx->pc = 0x28b920u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
    // 0x28b924: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28b924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b928: 0x2e0f809  jalr        $s7
    ctx->pc = 0x28B928u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x28B930u);
        ctx->pc = 0x28B92Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B928u;
            // 0x28b92c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28B930u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28B6E8u: goto label_28b6e8;
            case 0x28B724u: goto label_28b724;
            case 0x28B744u: goto label_28b744;
            case 0x28B788u: goto label_28b788;
            case 0x28B790u: goto label_28b790;
            case 0x28B7ACu: goto label_28b7ac;
            case 0x28B7C0u: goto label_28b7c0;
            case 0x28B7E8u: goto label_28b7e8;
            case 0x28B7F0u: goto label_28b7f0;
            case 0x28B810u: goto label_28b810;
            case 0x28B814u: goto label_28b814;
            case 0x28B834u: goto label_28b834;
            case 0x28B850u: goto label_28b850;
            case 0x28B8E4u: goto label_28b8e4;
            case 0x28B914u: goto label_28b914;
            case 0x28B918u: goto label_28b918;
            case 0x28B964u: goto label_28b964;
            case 0x28B994u: goto label_28b994;
            case 0x28B998u: goto label_28b998;
            case 0x28B9E8u: goto label_28b9e8;
            case 0x28BA18u: goto label_28ba18;
            case 0x28BA1Cu: goto label_28ba1c;
            case 0x28BA20u: goto label_28ba20;
            case 0x28BA60u: goto label_28ba60;
            case 0x28BA90u: goto label_28ba90;
            case 0x28BA94u: goto label_28ba94;
            case 0x28BA98u: goto label_28ba98;
            case 0x28BAC0u: goto label_28bac0;
            case 0x28BAE8u: goto label_28bae8;
            case 0x28BB10u: goto label_28bb10;
            case 0x28BB28u: goto label_28bb28;
            case 0x28BB48u: goto label_28bb48;
            case 0x28BB4Cu: goto label_28bb4c;
            case 0x28BB88u: goto label_28bb88;
            case 0x28BBB8u: goto label_28bbb8;
            case 0x28BBD8u: goto label_28bbd8;
            case 0x28BC00u: goto label_28bc00;
            case 0x28BC18u: goto label_28bc18;
            case 0x28BC38u: goto label_28bc38;
            case 0x28BC3Cu: goto label_28bc3c;
            case 0x28BC40u: goto label_28bc40;
            case 0x28BC64u: goto label_28bc64;
            case 0x28BC78u: goto label_28bc78;
            case 0x28BCA8u: goto label_28bca8;
            case 0x28BCC0u: goto label_28bcc0;
            case 0x28BCE8u: goto label_28bce8;
            case 0x28BCF8u: goto label_28bcf8;
            case 0x28BD18u: goto label_28bd18;
            case 0x28BD1Cu: goto label_28bd1c;
            case 0x28BD20u: goto label_28bd20;
            case 0x28BD6Cu: goto label_28bd6c;
            case 0x28BD88u: goto label_28bd88;
            case 0x28BDB0u: goto label_28bdb0;
            case 0x28BDC8u: goto label_28bdc8;
            case 0x28BDE8u: goto label_28bde8;
            case 0x28BDECu: goto label_28bdec;
            case 0x28BDFCu: goto label_28bdfc;
            case 0x28BE40u: goto label_28be40;
            case 0x28BE48u: goto label_28be48;
            case 0x28BE64u: goto label_28be64;
            case 0x28BE78u: goto label_28be78;
            case 0x28BEA0u: goto label_28bea0;
            case 0x28BEA8u: goto label_28bea8;
            case 0x28BEC8u: goto label_28bec8;
            case 0x28BECCu: goto label_28becc;
            case 0x28BEECu: goto label_28beec;
            case 0x28BF08u: goto label_28bf08;
            case 0x28BF50u: goto label_28bf50;
            case 0x28BF78u: goto label_28bf78;
            case 0x28BF88u: goto label_28bf88;
            case 0x28BFA8u: goto label_28bfa8;
            case 0x28BFACu: goto label_28bfac;
            case 0x28BFE0u: goto label_28bfe0;
            case 0x28C008u: goto label_28c008;
            case 0x28C018u: goto label_28c018;
            case 0x28C038u: goto label_28c038;
            case 0x28C03Cu: goto label_28c03c;
            case 0x28C054u: goto label_28c054;
            case 0x28C068u: goto label_28c068;
            case 0x28C06Cu: goto label_28c06c;
            case 0x28C084u: goto label_28c084;
            case 0x28C094u: goto label_28c094;
            case 0x28C098u: goto label_28c098;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28B930u; }
            if (ctx->pc != 0x28B930u) { return; }
        }
        }
    }
    ctx->pc = 0x28B930u;
    // 0x28b930: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x28B930u;
    {
        const bool branch_taken_0x28b930 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x28B934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B930u;
            // 0x28b934: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b930) {
            ctx->pc = 0x28B964u;
            goto label_28b964;
        }
    }
    ctx->pc = 0x28B938u;
    // 0x28b938: 0x2e0f809  jalr        $s7
    ctx->pc = 0x28B938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x28B940u);
        ctx->pc = 0x28B93Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B938u;
            // 0x28b93c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28B940u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28B6E8u: goto label_28b6e8;
            case 0x28B724u: goto label_28b724;
            case 0x28B744u: goto label_28b744;
            case 0x28B788u: goto label_28b788;
            case 0x28B790u: goto label_28b790;
            case 0x28B7ACu: goto label_28b7ac;
            case 0x28B7C0u: goto label_28b7c0;
            case 0x28B7E8u: goto label_28b7e8;
            case 0x28B7F0u: goto label_28b7f0;
            case 0x28B810u: goto label_28b810;
            case 0x28B814u: goto label_28b814;
            case 0x28B834u: goto label_28b834;
            case 0x28B850u: goto label_28b850;
            case 0x28B8E4u: goto label_28b8e4;
            case 0x28B914u: goto label_28b914;
            case 0x28B918u: goto label_28b918;
            case 0x28B964u: goto label_28b964;
            case 0x28B994u: goto label_28b994;
            case 0x28B998u: goto label_28b998;
            case 0x28B9E8u: goto label_28b9e8;
            case 0x28BA18u: goto label_28ba18;
            case 0x28BA1Cu: goto label_28ba1c;
            case 0x28BA20u: goto label_28ba20;
            case 0x28BA60u: goto label_28ba60;
            case 0x28BA90u: goto label_28ba90;
            case 0x28BA94u: goto label_28ba94;
            case 0x28BA98u: goto label_28ba98;
            case 0x28BAC0u: goto label_28bac0;
            case 0x28BAE8u: goto label_28bae8;
            case 0x28BB10u: goto label_28bb10;
            case 0x28BB28u: goto label_28bb28;
            case 0x28BB48u: goto label_28bb48;
            case 0x28BB4Cu: goto label_28bb4c;
            case 0x28BB88u: goto label_28bb88;
            case 0x28BBB8u: goto label_28bbb8;
            case 0x28BBD8u: goto label_28bbd8;
            case 0x28BC00u: goto label_28bc00;
            case 0x28BC18u: goto label_28bc18;
            case 0x28BC38u: goto label_28bc38;
            case 0x28BC3Cu: goto label_28bc3c;
            case 0x28BC40u: goto label_28bc40;
            case 0x28BC64u: goto label_28bc64;
            case 0x28BC78u: goto label_28bc78;
            case 0x28BCA8u: goto label_28bca8;
            case 0x28BCC0u: goto label_28bcc0;
            case 0x28BCE8u: goto label_28bce8;
            case 0x28BCF8u: goto label_28bcf8;
            case 0x28BD18u: goto label_28bd18;
            case 0x28BD1Cu: goto label_28bd1c;
            case 0x28BD20u: goto label_28bd20;
            case 0x28BD6Cu: goto label_28bd6c;
            case 0x28BD88u: goto label_28bd88;
            case 0x28BDB0u: goto label_28bdb0;
            case 0x28BDC8u: goto label_28bdc8;
            case 0x28BDE8u: goto label_28bde8;
            case 0x28BDECu: goto label_28bdec;
            case 0x28BDFCu: goto label_28bdfc;
            case 0x28BE40u: goto label_28be40;
            case 0x28BE48u: goto label_28be48;
            case 0x28BE64u: goto label_28be64;
            case 0x28BE78u: goto label_28be78;
            case 0x28BEA0u: goto label_28bea0;
            case 0x28BEA8u: goto label_28bea8;
            case 0x28BEC8u: goto label_28bec8;
            case 0x28BECCu: goto label_28becc;
            case 0x28BEECu: goto label_28beec;
            case 0x28BF08u: goto label_28bf08;
            case 0x28BF50u: goto label_28bf50;
            case 0x28BF78u: goto label_28bf78;
            case 0x28BF88u: goto label_28bf88;
            case 0x28BFA8u: goto label_28bfa8;
            case 0x28BFACu: goto label_28bfac;
            case 0x28BFE0u: goto label_28bfe0;
            case 0x28C008u: goto label_28c008;
            case 0x28C018u: goto label_28c018;
            case 0x28C038u: goto label_28c038;
            case 0x28C03Cu: goto label_28c03c;
            case 0x28C054u: goto label_28c054;
            case 0x28C068u: goto label_28c068;
            case 0x28C06Cu: goto label_28c06c;
            case 0x28C084u: goto label_28c084;
            case 0x28C094u: goto label_28c094;
            case 0x28C098u: goto label_28c098;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28B940u; }
            if (ctx->pc != 0x28B940u) { return; }
        }
        }
    }
    ctx->pc = 0x28B940u;
    // 0x28b940: 0x4400014  bltz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x28B940u;
    {
        const bool branch_taken_0x28b940 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28B944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B940u;
            // 0x28b944: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b940) {
            ctx->pc = 0x28B994u;
            goto label_28b994;
        }
    }
    ctx->pc = 0x28B948u;
    // 0x28b948: 0x2e0f809  jalr        $s7
    ctx->pc = 0x28B948u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x28B950u);
        ctx->pc = 0x28B94Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B948u;
            // 0x28b94c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28B950u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28B6E8u: goto label_28b6e8;
            case 0x28B724u: goto label_28b724;
            case 0x28B744u: goto label_28b744;
            case 0x28B788u: goto label_28b788;
            case 0x28B790u: goto label_28b790;
            case 0x28B7ACu: goto label_28b7ac;
            case 0x28B7C0u: goto label_28b7c0;
            case 0x28B7E8u: goto label_28b7e8;
            case 0x28B7F0u: goto label_28b7f0;
            case 0x28B810u: goto label_28b810;
            case 0x28B814u: goto label_28b814;
            case 0x28B834u: goto label_28b834;
            case 0x28B850u: goto label_28b850;
            case 0x28B8E4u: goto label_28b8e4;
            case 0x28B914u: goto label_28b914;
            case 0x28B918u: goto label_28b918;
            case 0x28B964u: goto label_28b964;
            case 0x28B994u: goto label_28b994;
            case 0x28B998u: goto label_28b998;
            case 0x28B9E8u: goto label_28b9e8;
            case 0x28BA18u: goto label_28ba18;
            case 0x28BA1Cu: goto label_28ba1c;
            case 0x28BA20u: goto label_28ba20;
            case 0x28BA60u: goto label_28ba60;
            case 0x28BA90u: goto label_28ba90;
            case 0x28BA94u: goto label_28ba94;
            case 0x28BA98u: goto label_28ba98;
            case 0x28BAC0u: goto label_28bac0;
            case 0x28BAE8u: goto label_28bae8;
            case 0x28BB10u: goto label_28bb10;
            case 0x28BB28u: goto label_28bb28;
            case 0x28BB48u: goto label_28bb48;
            case 0x28BB4Cu: goto label_28bb4c;
            case 0x28BB88u: goto label_28bb88;
            case 0x28BBB8u: goto label_28bbb8;
            case 0x28BBD8u: goto label_28bbd8;
            case 0x28BC00u: goto label_28bc00;
            case 0x28BC18u: goto label_28bc18;
            case 0x28BC38u: goto label_28bc38;
            case 0x28BC3Cu: goto label_28bc3c;
            case 0x28BC40u: goto label_28bc40;
            case 0x28BC64u: goto label_28bc64;
            case 0x28BC78u: goto label_28bc78;
            case 0x28BCA8u: goto label_28bca8;
            case 0x28BCC0u: goto label_28bcc0;
            case 0x28BCE8u: goto label_28bce8;
            case 0x28BCF8u: goto label_28bcf8;
            case 0x28BD18u: goto label_28bd18;
            case 0x28BD1Cu: goto label_28bd1c;
            case 0x28BD20u: goto label_28bd20;
            case 0x28BD6Cu: goto label_28bd6c;
            case 0x28BD88u: goto label_28bd88;
            case 0x28BDB0u: goto label_28bdb0;
            case 0x28BDC8u: goto label_28bdc8;
            case 0x28BDE8u: goto label_28bde8;
            case 0x28BDECu: goto label_28bdec;
            case 0x28BDFCu: goto label_28bdfc;
            case 0x28BE40u: goto label_28be40;
            case 0x28BE48u: goto label_28be48;
            case 0x28BE64u: goto label_28be64;
            case 0x28BE78u: goto label_28be78;
            case 0x28BEA0u: goto label_28bea0;
            case 0x28BEA8u: goto label_28bea8;
            case 0x28BEC8u: goto label_28bec8;
            case 0x28BECCu: goto label_28becc;
            case 0x28BEECu: goto label_28beec;
            case 0x28BF08u: goto label_28bf08;
            case 0x28BF50u: goto label_28bf50;
            case 0x28BF78u: goto label_28bf78;
            case 0x28BF88u: goto label_28bf88;
            case 0x28BFA8u: goto label_28bfa8;
            case 0x28BFACu: goto label_28bfac;
            case 0x28BFE0u: goto label_28bfe0;
            case 0x28C008u: goto label_28c008;
            case 0x28C018u: goto label_28c018;
            case 0x28C038u: goto label_28c038;
            case 0x28C03Cu: goto label_28c03c;
            case 0x28C054u: goto label_28c054;
            case 0x28C068u: goto label_28c068;
            case 0x28C06Cu: goto label_28c06c;
            case 0x28C084u: goto label_28c084;
            case 0x28C094u: goto label_28c094;
            case 0x28C098u: goto label_28c098;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28B950u; }
            if (ctx->pc != 0x28B950u) { return; }
        }
        }
    }
    ctx->pc = 0x28B950u;
    // 0x28b950: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x28b950u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28b954: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28b954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b958: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x28b958u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28b95c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x28B95Cu;
    {
        const bool branch_taken_0x28b95c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B95Cu;
            // 0x28b960: 0x283200b  movn        $a0, $s4, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b95c) {
            ctx->pc = 0x28B998u;
            goto label_28b998;
        }
    }
    ctx->pc = 0x28B964u;
label_28b964:
    // 0x28b964: 0x2e0f809  jalr        $s7
    ctx->pc = 0x28B964u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x28B96Cu);
        ctx->pc = 0x28B968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B964u;
            // 0x28b968: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28B96Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28B6E8u: goto label_28b6e8;
            case 0x28B724u: goto label_28b724;
            case 0x28B744u: goto label_28b744;
            case 0x28B788u: goto label_28b788;
            case 0x28B790u: goto label_28b790;
            case 0x28B7ACu: goto label_28b7ac;
            case 0x28B7C0u: goto label_28b7c0;
            case 0x28B7E8u: goto label_28b7e8;
            case 0x28B7F0u: goto label_28b7f0;
            case 0x28B810u: goto label_28b810;
            case 0x28B814u: goto label_28b814;
            case 0x28B834u: goto label_28b834;
            case 0x28B850u: goto label_28b850;
            case 0x28B8E4u: goto label_28b8e4;
            case 0x28B914u: goto label_28b914;
            case 0x28B918u: goto label_28b918;
            case 0x28B964u: goto label_28b964;
            case 0x28B994u: goto label_28b994;
            case 0x28B998u: goto label_28b998;
            case 0x28B9E8u: goto label_28b9e8;
            case 0x28BA18u: goto label_28ba18;
            case 0x28BA1Cu: goto label_28ba1c;
            case 0x28BA20u: goto label_28ba20;
            case 0x28BA60u: goto label_28ba60;
            case 0x28BA90u: goto label_28ba90;
            case 0x28BA94u: goto label_28ba94;
            case 0x28BA98u: goto label_28ba98;
            case 0x28BAC0u: goto label_28bac0;
            case 0x28BAE8u: goto label_28bae8;
            case 0x28BB10u: goto label_28bb10;
            case 0x28BB28u: goto label_28bb28;
            case 0x28BB48u: goto label_28bb48;
            case 0x28BB4Cu: goto label_28bb4c;
            case 0x28BB88u: goto label_28bb88;
            case 0x28BBB8u: goto label_28bbb8;
            case 0x28BBD8u: goto label_28bbd8;
            case 0x28BC00u: goto label_28bc00;
            case 0x28BC18u: goto label_28bc18;
            case 0x28BC38u: goto label_28bc38;
            case 0x28BC3Cu: goto label_28bc3c;
            case 0x28BC40u: goto label_28bc40;
            case 0x28BC64u: goto label_28bc64;
            case 0x28BC78u: goto label_28bc78;
            case 0x28BCA8u: goto label_28bca8;
            case 0x28BCC0u: goto label_28bcc0;
            case 0x28BCE8u: goto label_28bce8;
            case 0x28BCF8u: goto label_28bcf8;
            case 0x28BD18u: goto label_28bd18;
            case 0x28BD1Cu: goto label_28bd1c;
            case 0x28BD20u: goto label_28bd20;
            case 0x28BD6Cu: goto label_28bd6c;
            case 0x28BD88u: goto label_28bd88;
            case 0x28BDB0u: goto label_28bdb0;
            case 0x28BDC8u: goto label_28bdc8;
            case 0x28BDE8u: goto label_28bde8;
            case 0x28BDECu: goto label_28bdec;
            case 0x28BDFCu: goto label_28bdfc;
            case 0x28BE40u: goto label_28be40;
            case 0x28BE48u: goto label_28be48;
            case 0x28BE64u: goto label_28be64;
            case 0x28BE78u: goto label_28be78;
            case 0x28BEA0u: goto label_28bea0;
            case 0x28BEA8u: goto label_28bea8;
            case 0x28BEC8u: goto label_28bec8;
            case 0x28BECCu: goto label_28becc;
            case 0x28BEECu: goto label_28beec;
            case 0x28BF08u: goto label_28bf08;
            case 0x28BF50u: goto label_28bf50;
            case 0x28BF78u: goto label_28bf78;
            case 0x28BF88u: goto label_28bf88;
            case 0x28BFA8u: goto label_28bfa8;
            case 0x28BFACu: goto label_28bfac;
            case 0x28BFE0u: goto label_28bfe0;
            case 0x28C008u: goto label_28c008;
            case 0x28C018u: goto label_28c018;
            case 0x28C038u: goto label_28c038;
            case 0x28C03Cu: goto label_28c03c;
            case 0x28C054u: goto label_28c054;
            case 0x28C068u: goto label_28c068;
            case 0x28C06Cu: goto label_28c06c;
            case 0x28C084u: goto label_28c084;
            case 0x28C094u: goto label_28c094;
            case 0x28C098u: goto label_28c098;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28B96Cu; }
            if (ctx->pc != 0x28B96Cu) { return; }
        }
        }
    }
    ctx->pc = 0x28B96Cu;
    // 0x28b96c: 0x5c40000a  bgtzl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x28B96Cu;
    {
        const bool branch_taken_0x28b96c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x28b96c) {
            ctx->pc = 0x28B970u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28B96Cu;
            // 0x28b970: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28B998u;
            goto label_28b998;
        }
    }
    ctx->pc = 0x28B974u;
    // 0x28b974: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28b974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b978: 0x2e0f809  jalr        $s7
    ctx->pc = 0x28B978u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x28B980u);
        ctx->pc = 0x28B97Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B978u;
            // 0x28b97c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28B980u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28B6E8u: goto label_28b6e8;
            case 0x28B724u: goto label_28b724;
            case 0x28B744u: goto label_28b744;
            case 0x28B788u: goto label_28b788;
            case 0x28B790u: goto label_28b790;
            case 0x28B7ACu: goto label_28b7ac;
            case 0x28B7C0u: goto label_28b7c0;
            case 0x28B7E8u: goto label_28b7e8;
            case 0x28B7F0u: goto label_28b7f0;
            case 0x28B810u: goto label_28b810;
            case 0x28B814u: goto label_28b814;
            case 0x28B834u: goto label_28b834;
            case 0x28B850u: goto label_28b850;
            case 0x28B8E4u: goto label_28b8e4;
            case 0x28B914u: goto label_28b914;
            case 0x28B918u: goto label_28b918;
            case 0x28B964u: goto label_28b964;
            case 0x28B994u: goto label_28b994;
            case 0x28B998u: goto label_28b998;
            case 0x28B9E8u: goto label_28b9e8;
            case 0x28BA18u: goto label_28ba18;
            case 0x28BA1Cu: goto label_28ba1c;
            case 0x28BA20u: goto label_28ba20;
            case 0x28BA60u: goto label_28ba60;
            case 0x28BA90u: goto label_28ba90;
            case 0x28BA94u: goto label_28ba94;
            case 0x28BA98u: goto label_28ba98;
            case 0x28BAC0u: goto label_28bac0;
            case 0x28BAE8u: goto label_28bae8;
            case 0x28BB10u: goto label_28bb10;
            case 0x28BB28u: goto label_28bb28;
            case 0x28BB48u: goto label_28bb48;
            case 0x28BB4Cu: goto label_28bb4c;
            case 0x28BB88u: goto label_28bb88;
            case 0x28BBB8u: goto label_28bbb8;
            case 0x28BBD8u: goto label_28bbd8;
            case 0x28BC00u: goto label_28bc00;
            case 0x28BC18u: goto label_28bc18;
            case 0x28BC38u: goto label_28bc38;
            case 0x28BC3Cu: goto label_28bc3c;
            case 0x28BC40u: goto label_28bc40;
            case 0x28BC64u: goto label_28bc64;
            case 0x28BC78u: goto label_28bc78;
            case 0x28BCA8u: goto label_28bca8;
            case 0x28BCC0u: goto label_28bcc0;
            case 0x28BCE8u: goto label_28bce8;
            case 0x28BCF8u: goto label_28bcf8;
            case 0x28BD18u: goto label_28bd18;
            case 0x28BD1Cu: goto label_28bd1c;
            case 0x28BD20u: goto label_28bd20;
            case 0x28BD6Cu: goto label_28bd6c;
            case 0x28BD88u: goto label_28bd88;
            case 0x28BDB0u: goto label_28bdb0;
            case 0x28BDC8u: goto label_28bdc8;
            case 0x28BDE8u: goto label_28bde8;
            case 0x28BDECu: goto label_28bdec;
            case 0x28BDFCu: goto label_28bdfc;
            case 0x28BE40u: goto label_28be40;
            case 0x28BE48u: goto label_28be48;
            case 0x28BE64u: goto label_28be64;
            case 0x28BE78u: goto label_28be78;
            case 0x28BEA0u: goto label_28bea0;
            case 0x28BEA8u: goto label_28bea8;
            case 0x28BEC8u: goto label_28bec8;
            case 0x28BECCu: goto label_28becc;
            case 0x28BEECu: goto label_28beec;
            case 0x28BF08u: goto label_28bf08;
            case 0x28BF50u: goto label_28bf50;
            case 0x28BF78u: goto label_28bf78;
            case 0x28BF88u: goto label_28bf88;
            case 0x28BFA8u: goto label_28bfa8;
            case 0x28BFACu: goto label_28bfac;
            case 0x28BFE0u: goto label_28bfe0;
            case 0x28C008u: goto label_28c008;
            case 0x28C018u: goto label_28c018;
            case 0x28C038u: goto label_28c038;
            case 0x28C03Cu: goto label_28c03c;
            case 0x28C054u: goto label_28c054;
            case 0x28C068u: goto label_28c068;
            case 0x28C06Cu: goto label_28c06c;
            case 0x28C084u: goto label_28c084;
            case 0x28C094u: goto label_28c094;
            case 0x28C098u: goto label_28c098;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28B980u; }
            if (ctx->pc != 0x28B980u) { return; }
        }
        }
    }
    ctx->pc = 0x28B980u;
    // 0x28b980: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x28b980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28b984: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28b984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b988: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x28b988u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28b98c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28B98Cu;
    {
        const bool branch_taken_0x28b98c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B98Cu;
            // 0x28b990: 0x263200b  movn        $a0, $s3, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b98c) {
            ctx->pc = 0x28B998u;
            goto label_28b998;
        }
    }
    ctx->pc = 0x28B994u;
label_28b994:
    // 0x28b994: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28b994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28b998:
    // 0x28b998: 0x1e1040  sll         $v0, $fp, 1
    ctx->pc = 0x28b998u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 30), 1));
    // 0x28b99c: 0x2be9823  subu        $s3, $s5, $fp
    ctx->pc = 0x28b99cu;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 30)));
    // 0x28b9a0: 0x2a2a023  subu        $s4, $s5, $v0
    ctx->pc = 0x28b9a0u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x28b9a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28b9a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b9a8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28b9a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b9ac: 0x2e0f809  jalr        $s7
    ctx->pc = 0x28B9ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x28B9B4u);
        ctx->pc = 0x28B9B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B9ACu;
            // 0x28b9b0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28B9B4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28B6E8u: goto label_28b6e8;
            case 0x28B724u: goto label_28b724;
            case 0x28B744u: goto label_28b744;
            case 0x28B788u: goto label_28b788;
            case 0x28B790u: goto label_28b790;
            case 0x28B7ACu: goto label_28b7ac;
            case 0x28B7C0u: goto label_28b7c0;
            case 0x28B7E8u: goto label_28b7e8;
            case 0x28B7F0u: goto label_28b7f0;
            case 0x28B810u: goto label_28b810;
            case 0x28B814u: goto label_28b814;
            case 0x28B834u: goto label_28b834;
            case 0x28B850u: goto label_28b850;
            case 0x28B8E4u: goto label_28b8e4;
            case 0x28B914u: goto label_28b914;
            case 0x28B918u: goto label_28b918;
            case 0x28B964u: goto label_28b964;
            case 0x28B994u: goto label_28b994;
            case 0x28B998u: goto label_28b998;
            case 0x28B9E8u: goto label_28b9e8;
            case 0x28BA18u: goto label_28ba18;
            case 0x28BA1Cu: goto label_28ba1c;
            case 0x28BA20u: goto label_28ba20;
            case 0x28BA60u: goto label_28ba60;
            case 0x28BA90u: goto label_28ba90;
            case 0x28BA94u: goto label_28ba94;
            case 0x28BA98u: goto label_28ba98;
            case 0x28BAC0u: goto label_28bac0;
            case 0x28BAE8u: goto label_28bae8;
            case 0x28BB10u: goto label_28bb10;
            case 0x28BB28u: goto label_28bb28;
            case 0x28BB48u: goto label_28bb48;
            case 0x28BB4Cu: goto label_28bb4c;
            case 0x28BB88u: goto label_28bb88;
            case 0x28BBB8u: goto label_28bbb8;
            case 0x28BBD8u: goto label_28bbd8;
            case 0x28BC00u: goto label_28bc00;
            case 0x28BC18u: goto label_28bc18;
            case 0x28BC38u: goto label_28bc38;
            case 0x28BC3Cu: goto label_28bc3c;
            case 0x28BC40u: goto label_28bc40;
            case 0x28BC64u: goto label_28bc64;
            case 0x28BC78u: goto label_28bc78;
            case 0x28BCA8u: goto label_28bca8;
            case 0x28BCC0u: goto label_28bcc0;
            case 0x28BCE8u: goto label_28bce8;
            case 0x28BCF8u: goto label_28bcf8;
            case 0x28BD18u: goto label_28bd18;
            case 0x28BD1Cu: goto label_28bd1c;
            case 0x28BD20u: goto label_28bd20;
            case 0x28BD6Cu: goto label_28bd6c;
            case 0x28BD88u: goto label_28bd88;
            case 0x28BDB0u: goto label_28bdb0;
            case 0x28BDC8u: goto label_28bdc8;
            case 0x28BDE8u: goto label_28bde8;
            case 0x28BDECu: goto label_28bdec;
            case 0x28BDFCu: goto label_28bdfc;
            case 0x28BE40u: goto label_28be40;
            case 0x28BE48u: goto label_28be48;
            case 0x28BE64u: goto label_28be64;
            case 0x28BE78u: goto label_28be78;
            case 0x28BEA0u: goto label_28bea0;
            case 0x28BEA8u: goto label_28bea8;
            case 0x28BEC8u: goto label_28bec8;
            case 0x28BECCu: goto label_28becc;
            case 0x28BEECu: goto label_28beec;
            case 0x28BF08u: goto label_28bf08;
            case 0x28BF50u: goto label_28bf50;
            case 0x28BF78u: goto label_28bf78;
            case 0x28BF88u: goto label_28bf88;
            case 0x28BFA8u: goto label_28bfa8;
            case 0x28BFACu: goto label_28bfac;
            case 0x28BFE0u: goto label_28bfe0;
            case 0x28C008u: goto label_28c008;
            case 0x28C018u: goto label_28c018;
            case 0x28C038u: goto label_28c038;
            case 0x28C03Cu: goto label_28c03c;
            case 0x28C054u: goto label_28c054;
            case 0x28C068u: goto label_28c068;
            case 0x28C06Cu: goto label_28c06c;
            case 0x28C084u: goto label_28c084;
            case 0x28C094u: goto label_28c094;
            case 0x28C098u: goto label_28c098;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28B9B4u; }
            if (ctx->pc != 0x28B9B4u) { return; }
        }
        }
    }
    ctx->pc = 0x28B9B4u;
    // 0x28b9b4: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x28B9B4u;
    {
        const bool branch_taken_0x28b9b4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x28B9B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B9B4u;
            // 0x28b9b8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b9b4) {
            ctx->pc = 0x28B9E8u;
            goto label_28b9e8;
        }
    }
    ctx->pc = 0x28B9BCu;
    // 0x28b9bc: 0x2e0f809  jalr        $s7
    ctx->pc = 0x28B9BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x28B9C4u);
        ctx->pc = 0x28B9C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B9BCu;
            // 0x28b9c0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28B9C4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28B6E8u: goto label_28b6e8;
            case 0x28B724u: goto label_28b724;
            case 0x28B744u: goto label_28b744;
            case 0x28B788u: goto label_28b788;
            case 0x28B790u: goto label_28b790;
            case 0x28B7ACu: goto label_28b7ac;
            case 0x28B7C0u: goto label_28b7c0;
            case 0x28B7E8u: goto label_28b7e8;
            case 0x28B7F0u: goto label_28b7f0;
            case 0x28B810u: goto label_28b810;
            case 0x28B814u: goto label_28b814;
            case 0x28B834u: goto label_28b834;
            case 0x28B850u: goto label_28b850;
            case 0x28B8E4u: goto label_28b8e4;
            case 0x28B914u: goto label_28b914;
            case 0x28B918u: goto label_28b918;
            case 0x28B964u: goto label_28b964;
            case 0x28B994u: goto label_28b994;
            case 0x28B998u: goto label_28b998;
            case 0x28B9E8u: goto label_28b9e8;
            case 0x28BA18u: goto label_28ba18;
            case 0x28BA1Cu: goto label_28ba1c;
            case 0x28BA20u: goto label_28ba20;
            case 0x28BA60u: goto label_28ba60;
            case 0x28BA90u: goto label_28ba90;
            case 0x28BA94u: goto label_28ba94;
            case 0x28BA98u: goto label_28ba98;
            case 0x28BAC0u: goto label_28bac0;
            case 0x28BAE8u: goto label_28bae8;
            case 0x28BB10u: goto label_28bb10;
            case 0x28BB28u: goto label_28bb28;
            case 0x28BB48u: goto label_28bb48;
            case 0x28BB4Cu: goto label_28bb4c;
            case 0x28BB88u: goto label_28bb88;
            case 0x28BBB8u: goto label_28bbb8;
            case 0x28BBD8u: goto label_28bbd8;
            case 0x28BC00u: goto label_28bc00;
            case 0x28BC18u: goto label_28bc18;
            case 0x28BC38u: goto label_28bc38;
            case 0x28BC3Cu: goto label_28bc3c;
            case 0x28BC40u: goto label_28bc40;
            case 0x28BC64u: goto label_28bc64;
            case 0x28BC78u: goto label_28bc78;
            case 0x28BCA8u: goto label_28bca8;
            case 0x28BCC0u: goto label_28bcc0;
            case 0x28BCE8u: goto label_28bce8;
            case 0x28BCF8u: goto label_28bcf8;
            case 0x28BD18u: goto label_28bd18;
            case 0x28BD1Cu: goto label_28bd1c;
            case 0x28BD20u: goto label_28bd20;
            case 0x28BD6Cu: goto label_28bd6c;
            case 0x28BD88u: goto label_28bd88;
            case 0x28BDB0u: goto label_28bdb0;
            case 0x28BDC8u: goto label_28bdc8;
            case 0x28BDE8u: goto label_28bde8;
            case 0x28BDECu: goto label_28bdec;
            case 0x28BDFCu: goto label_28bdfc;
            case 0x28BE40u: goto label_28be40;
            case 0x28BE48u: goto label_28be48;
            case 0x28BE64u: goto label_28be64;
            case 0x28BE78u: goto label_28be78;
            case 0x28BEA0u: goto label_28bea0;
            case 0x28BEA8u: goto label_28bea8;
            case 0x28BEC8u: goto label_28bec8;
            case 0x28BECCu: goto label_28becc;
            case 0x28BEECu: goto label_28beec;
            case 0x28BF08u: goto label_28bf08;
            case 0x28BF50u: goto label_28bf50;
            case 0x28BF78u: goto label_28bf78;
            case 0x28BF88u: goto label_28bf88;
            case 0x28BFA8u: goto label_28bfa8;
            case 0x28BFACu: goto label_28bfac;
            case 0x28BFE0u: goto label_28bfe0;
            case 0x28C008u: goto label_28c008;
            case 0x28C018u: goto label_28c018;
            case 0x28C038u: goto label_28c038;
            case 0x28C03Cu: goto label_28c03c;
            case 0x28C054u: goto label_28c054;
            case 0x28C068u: goto label_28c068;
            case 0x28C06Cu: goto label_28c06c;
            case 0x28C084u: goto label_28c084;
            case 0x28C094u: goto label_28c094;
            case 0x28C098u: goto label_28c098;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28B9C4u; }
            if (ctx->pc != 0x28B9C4u) { return; }
        }
        }
    }
    ctx->pc = 0x28B9C4u;
    // 0x28b9c4: 0x4400014  bltz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x28B9C4u;
    {
        const bool branch_taken_0x28b9c4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28B9C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B9C4u;
            // 0x28b9c8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b9c4) {
            ctx->pc = 0x28BA18u;
            goto label_28ba18;
        }
    }
    ctx->pc = 0x28B9CCu;
    // 0x28b9cc: 0x2e0f809  jalr        $s7
    ctx->pc = 0x28B9CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x28B9D4u);
        ctx->pc = 0x28B9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B9CCu;
            // 0x28b9d0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28B9D4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28B6E8u: goto label_28b6e8;
            case 0x28B724u: goto label_28b724;
            case 0x28B744u: goto label_28b744;
            case 0x28B788u: goto label_28b788;
            case 0x28B790u: goto label_28b790;
            case 0x28B7ACu: goto label_28b7ac;
            case 0x28B7C0u: goto label_28b7c0;
            case 0x28B7E8u: goto label_28b7e8;
            case 0x28B7F0u: goto label_28b7f0;
            case 0x28B810u: goto label_28b810;
            case 0x28B814u: goto label_28b814;
            case 0x28B834u: goto label_28b834;
            case 0x28B850u: goto label_28b850;
            case 0x28B8E4u: goto label_28b8e4;
            case 0x28B914u: goto label_28b914;
            case 0x28B918u: goto label_28b918;
            case 0x28B964u: goto label_28b964;
            case 0x28B994u: goto label_28b994;
            case 0x28B998u: goto label_28b998;
            case 0x28B9E8u: goto label_28b9e8;
            case 0x28BA18u: goto label_28ba18;
            case 0x28BA1Cu: goto label_28ba1c;
            case 0x28BA20u: goto label_28ba20;
            case 0x28BA60u: goto label_28ba60;
            case 0x28BA90u: goto label_28ba90;
            case 0x28BA94u: goto label_28ba94;
            case 0x28BA98u: goto label_28ba98;
            case 0x28BAC0u: goto label_28bac0;
            case 0x28BAE8u: goto label_28bae8;
            case 0x28BB10u: goto label_28bb10;
            case 0x28BB28u: goto label_28bb28;
            case 0x28BB48u: goto label_28bb48;
            case 0x28BB4Cu: goto label_28bb4c;
            case 0x28BB88u: goto label_28bb88;
            case 0x28BBB8u: goto label_28bbb8;
            case 0x28BBD8u: goto label_28bbd8;
            case 0x28BC00u: goto label_28bc00;
            case 0x28BC18u: goto label_28bc18;
            case 0x28BC38u: goto label_28bc38;
            case 0x28BC3Cu: goto label_28bc3c;
            case 0x28BC40u: goto label_28bc40;
            case 0x28BC64u: goto label_28bc64;
            case 0x28BC78u: goto label_28bc78;
            case 0x28BCA8u: goto label_28bca8;
            case 0x28BCC0u: goto label_28bcc0;
            case 0x28BCE8u: goto label_28bce8;
            case 0x28BCF8u: goto label_28bcf8;
            case 0x28BD18u: goto label_28bd18;
            case 0x28BD1Cu: goto label_28bd1c;
            case 0x28BD20u: goto label_28bd20;
            case 0x28BD6Cu: goto label_28bd6c;
            case 0x28BD88u: goto label_28bd88;
            case 0x28BDB0u: goto label_28bdb0;
            case 0x28BDC8u: goto label_28bdc8;
            case 0x28BDE8u: goto label_28bde8;
            case 0x28BDECu: goto label_28bdec;
            case 0x28BDFCu: goto label_28bdfc;
            case 0x28BE40u: goto label_28be40;
            case 0x28BE48u: goto label_28be48;
            case 0x28BE64u: goto label_28be64;
            case 0x28BE78u: goto label_28be78;
            case 0x28BEA0u: goto label_28bea0;
            case 0x28BEA8u: goto label_28bea8;
            case 0x28BEC8u: goto label_28bec8;
            case 0x28BECCu: goto label_28becc;
            case 0x28BEECu: goto label_28beec;
            case 0x28BF08u: goto label_28bf08;
            case 0x28BF50u: goto label_28bf50;
            case 0x28BF78u: goto label_28bf78;
            case 0x28BF88u: goto label_28bf88;
            case 0x28BFA8u: goto label_28bfa8;
            case 0x28BFACu: goto label_28bfac;
            case 0x28BFE0u: goto label_28bfe0;
            case 0x28C008u: goto label_28c008;
            case 0x28C018u: goto label_28c018;
            case 0x28C038u: goto label_28c038;
            case 0x28C03Cu: goto label_28c03c;
            case 0x28C054u: goto label_28c054;
            case 0x28C068u: goto label_28c068;
            case 0x28C06Cu: goto label_28c06c;
            case 0x28C084u: goto label_28c084;
            case 0x28C094u: goto label_28c094;
            case 0x28C098u: goto label_28c098;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28B9D4u; }
            if (ctx->pc != 0x28B9D4u) { return; }
        }
        }
    }
    ctx->pc = 0x28B9D4u;
    // 0x28b9d4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x28b9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28b9d8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x28b9d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b9dc: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x28b9dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28b9e0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x28B9E0u;
    {
        const bool branch_taken_0x28b9e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B9E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B9E0u;
            // 0x28b9e4: 0x283200b  movn        $a0, $s4, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b9e0) {
            ctx->pc = 0x28BA1Cu;
            goto label_28ba1c;
        }
    }
    ctx->pc = 0x28B9E8u;
label_28b9e8:
    // 0x28b9e8: 0x2e0f809  jalr        $s7
    ctx->pc = 0x28B9E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x28B9F0u);
        ctx->pc = 0x28B9ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B9E8u;
            // 0x28b9ec: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28B9F0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28B6E8u: goto label_28b6e8;
            case 0x28B724u: goto label_28b724;
            case 0x28B744u: goto label_28b744;
            case 0x28B788u: goto label_28b788;
            case 0x28B790u: goto label_28b790;
            case 0x28B7ACu: goto label_28b7ac;
            case 0x28B7C0u: goto label_28b7c0;
            case 0x28B7E8u: goto label_28b7e8;
            case 0x28B7F0u: goto label_28b7f0;
            case 0x28B810u: goto label_28b810;
            case 0x28B814u: goto label_28b814;
            case 0x28B834u: goto label_28b834;
            case 0x28B850u: goto label_28b850;
            case 0x28B8E4u: goto label_28b8e4;
            case 0x28B914u: goto label_28b914;
            case 0x28B918u: goto label_28b918;
            case 0x28B964u: goto label_28b964;
            case 0x28B994u: goto label_28b994;
            case 0x28B998u: goto label_28b998;
            case 0x28B9E8u: goto label_28b9e8;
            case 0x28BA18u: goto label_28ba18;
            case 0x28BA1Cu: goto label_28ba1c;
            case 0x28BA20u: goto label_28ba20;
            case 0x28BA60u: goto label_28ba60;
            case 0x28BA90u: goto label_28ba90;
            case 0x28BA94u: goto label_28ba94;
            case 0x28BA98u: goto label_28ba98;
            case 0x28BAC0u: goto label_28bac0;
            case 0x28BAE8u: goto label_28bae8;
            case 0x28BB10u: goto label_28bb10;
            case 0x28BB28u: goto label_28bb28;
            case 0x28BB48u: goto label_28bb48;
            case 0x28BB4Cu: goto label_28bb4c;
            case 0x28BB88u: goto label_28bb88;
            case 0x28BBB8u: goto label_28bbb8;
            case 0x28BBD8u: goto label_28bbd8;
            case 0x28BC00u: goto label_28bc00;
            case 0x28BC18u: goto label_28bc18;
            case 0x28BC38u: goto label_28bc38;
            case 0x28BC3Cu: goto label_28bc3c;
            case 0x28BC40u: goto label_28bc40;
            case 0x28BC64u: goto label_28bc64;
            case 0x28BC78u: goto label_28bc78;
            case 0x28BCA8u: goto label_28bca8;
            case 0x28BCC0u: goto label_28bcc0;
            case 0x28BCE8u: goto label_28bce8;
            case 0x28BCF8u: goto label_28bcf8;
            case 0x28BD18u: goto label_28bd18;
            case 0x28BD1Cu: goto label_28bd1c;
            case 0x28BD20u: goto label_28bd20;
            case 0x28BD6Cu: goto label_28bd6c;
            case 0x28BD88u: goto label_28bd88;
            case 0x28BDB0u: goto label_28bdb0;
            case 0x28BDC8u: goto label_28bdc8;
            case 0x28BDE8u: goto label_28bde8;
            case 0x28BDECu: goto label_28bdec;
            case 0x28BDFCu: goto label_28bdfc;
            case 0x28BE40u: goto label_28be40;
            case 0x28BE48u: goto label_28be48;
            case 0x28BE64u: goto label_28be64;
            case 0x28BE78u: goto label_28be78;
            case 0x28BEA0u: goto label_28bea0;
            case 0x28BEA8u: goto label_28bea8;
            case 0x28BEC8u: goto label_28bec8;
            case 0x28BECCu: goto label_28becc;
            case 0x28BEECu: goto label_28beec;
            case 0x28BF08u: goto label_28bf08;
            case 0x28BF50u: goto label_28bf50;
            case 0x28BF78u: goto label_28bf78;
            case 0x28BF88u: goto label_28bf88;
            case 0x28BFA8u: goto label_28bfa8;
            case 0x28BFACu: goto label_28bfac;
            case 0x28BFE0u: goto label_28bfe0;
            case 0x28C008u: goto label_28c008;
            case 0x28C018u: goto label_28c018;
            case 0x28C038u: goto label_28c038;
            case 0x28C03Cu: goto label_28c03c;
            case 0x28C054u: goto label_28c054;
            case 0x28C068u: goto label_28c068;
            case 0x28C06Cu: goto label_28c06c;
            case 0x28C084u: goto label_28c084;
            case 0x28C094u: goto label_28c094;
            case 0x28C098u: goto label_28c098;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28B9F0u; }
            if (ctx->pc != 0x28B9F0u) { return; }
        }
        }
    }
    ctx->pc = 0x28B9F0u;
    // 0x28b9f0: 0x5c40000a  bgtzl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x28B9F0u;
    {
        const bool branch_taken_0x28b9f0 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x28b9f0) {
            ctx->pc = 0x28B9F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28B9F0u;
            // 0x28b9f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28BA1Cu;
            goto label_28ba1c;
        }
    }
    ctx->pc = 0x28B9F8u;
    // 0x28b9f8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28b9f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b9fc: 0x2e0f809  jalr        $s7
    ctx->pc = 0x28B9FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x28BA04u);
        ctx->pc = 0x28BA00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B9FCu;
            // 0x28ba00: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28BA04u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28B6E8u: goto label_28b6e8;
            case 0x28B724u: goto label_28b724;
            case 0x28B744u: goto label_28b744;
            case 0x28B788u: goto label_28b788;
            case 0x28B790u: goto label_28b790;
            case 0x28B7ACu: goto label_28b7ac;
            case 0x28B7C0u: goto label_28b7c0;
            case 0x28B7E8u: goto label_28b7e8;
            case 0x28B7F0u: goto label_28b7f0;
            case 0x28B810u: goto label_28b810;
            case 0x28B814u: goto label_28b814;
            case 0x28B834u: goto label_28b834;
            case 0x28B850u: goto label_28b850;
            case 0x28B8E4u: goto label_28b8e4;
            case 0x28B914u: goto label_28b914;
            case 0x28B918u: goto label_28b918;
            case 0x28B964u: goto label_28b964;
            case 0x28B994u: goto label_28b994;
            case 0x28B998u: goto label_28b998;
            case 0x28B9E8u: goto label_28b9e8;
            case 0x28BA18u: goto label_28ba18;
            case 0x28BA1Cu: goto label_28ba1c;
            case 0x28BA20u: goto label_28ba20;
            case 0x28BA60u: goto label_28ba60;
            case 0x28BA90u: goto label_28ba90;
            case 0x28BA94u: goto label_28ba94;
            case 0x28BA98u: goto label_28ba98;
            case 0x28BAC0u: goto label_28bac0;
            case 0x28BAE8u: goto label_28bae8;
            case 0x28BB10u: goto label_28bb10;
            case 0x28BB28u: goto label_28bb28;
            case 0x28BB48u: goto label_28bb48;
            case 0x28BB4Cu: goto label_28bb4c;
            case 0x28BB88u: goto label_28bb88;
            case 0x28BBB8u: goto label_28bbb8;
            case 0x28BBD8u: goto label_28bbd8;
            case 0x28BC00u: goto label_28bc00;
            case 0x28BC18u: goto label_28bc18;
            case 0x28BC38u: goto label_28bc38;
            case 0x28BC3Cu: goto label_28bc3c;
            case 0x28BC40u: goto label_28bc40;
            case 0x28BC64u: goto label_28bc64;
            case 0x28BC78u: goto label_28bc78;
            case 0x28BCA8u: goto label_28bca8;
            case 0x28BCC0u: goto label_28bcc0;
            case 0x28BCE8u: goto label_28bce8;
            case 0x28BCF8u: goto label_28bcf8;
            case 0x28BD18u: goto label_28bd18;
            case 0x28BD1Cu: goto label_28bd1c;
            case 0x28BD20u: goto label_28bd20;
            case 0x28BD6Cu: goto label_28bd6c;
            case 0x28BD88u: goto label_28bd88;
            case 0x28BDB0u: goto label_28bdb0;
            case 0x28BDC8u: goto label_28bdc8;
            case 0x28BDE8u: goto label_28bde8;
            case 0x28BDECu: goto label_28bdec;
            case 0x28BDFCu: goto label_28bdfc;
            case 0x28BE40u: goto label_28be40;
            case 0x28BE48u: goto label_28be48;
            case 0x28BE64u: goto label_28be64;
            case 0x28BE78u: goto label_28be78;
            case 0x28BEA0u: goto label_28bea0;
            case 0x28BEA8u: goto label_28bea8;
            case 0x28BEC8u: goto label_28bec8;
            case 0x28BECCu: goto label_28becc;
            case 0x28BEECu: goto label_28beec;
            case 0x28BF08u: goto label_28bf08;
            case 0x28BF50u: goto label_28bf50;
            case 0x28BF78u: goto label_28bf78;
            case 0x28BF88u: goto label_28bf88;
            case 0x28BFA8u: goto label_28bfa8;
            case 0x28BFACu: goto label_28bfac;
            case 0x28BFE0u: goto label_28bfe0;
            case 0x28C008u: goto label_28c008;
            case 0x28C018u: goto label_28c018;
            case 0x28C038u: goto label_28c038;
            case 0x28C03Cu: goto label_28c03c;
            case 0x28C054u: goto label_28c054;
            case 0x28C068u: goto label_28c068;
            case 0x28C06Cu: goto label_28c06c;
            case 0x28C084u: goto label_28c084;
            case 0x28C094u: goto label_28c094;
            case 0x28C098u: goto label_28c098;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28BA04u; }
            if (ctx->pc != 0x28BA04u) { return; }
        }
        }
    }
    ctx->pc = 0x28BA04u;
    // 0x28ba04: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x28ba04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28ba08: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28ba08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ba0c: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x28ba0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28ba10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28BA10u;
    {
        const bool branch_taken_0x28ba10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BA14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BA10u;
            // 0x28ba14: 0x2a3200b  movn        $a0, $s5, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ba10) {
            ctx->pc = 0x28BA1Cu;
            goto label_28ba1c;
        }
    }
    ctx->pc = 0x28BA18u;
label_28ba18:
    // 0x28ba18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28ba18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28ba1c:
    // 0x28ba1c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x28ba1cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28ba20:
    // 0x28ba20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28ba20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ba24: 0x2e0f809  jalr        $s7
    ctx->pc = 0x28BA24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x28BA2Cu);
        ctx->pc = 0x28BA28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BA24u;
            // 0x28ba28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28BA2Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28B6E8u: goto label_28b6e8;
            case 0x28B724u: goto label_28b724;
            case 0x28B744u: goto label_28b744;
            case 0x28B788u: goto label_28b788;
            case 0x28B790u: goto label_28b790;
            case 0x28B7ACu: goto label_28b7ac;
            case 0x28B7C0u: goto label_28b7c0;
            case 0x28B7E8u: goto label_28b7e8;
            case 0x28B7F0u: goto label_28b7f0;
            case 0x28B810u: goto label_28b810;
            case 0x28B814u: goto label_28b814;
            case 0x28B834u: goto label_28b834;
            case 0x28B850u: goto label_28b850;
            case 0x28B8E4u: goto label_28b8e4;
            case 0x28B914u: goto label_28b914;
            case 0x28B918u: goto label_28b918;
            case 0x28B964u: goto label_28b964;
            case 0x28B994u: goto label_28b994;
            case 0x28B998u: goto label_28b998;
            case 0x28B9E8u: goto label_28b9e8;
            case 0x28BA18u: goto label_28ba18;
            case 0x28BA1Cu: goto label_28ba1c;
            case 0x28BA20u: goto label_28ba20;
            case 0x28BA60u: goto label_28ba60;
            case 0x28BA90u: goto label_28ba90;
            case 0x28BA94u: goto label_28ba94;
            case 0x28BA98u: goto label_28ba98;
            case 0x28BAC0u: goto label_28bac0;
            case 0x28BAE8u: goto label_28bae8;
            case 0x28BB10u: goto label_28bb10;
            case 0x28BB28u: goto label_28bb28;
            case 0x28BB48u: goto label_28bb48;
            case 0x28BB4Cu: goto label_28bb4c;
            case 0x28BB88u: goto label_28bb88;
            case 0x28BBB8u: goto label_28bbb8;
            case 0x28BBD8u: goto label_28bbd8;
            case 0x28BC00u: goto label_28bc00;
            case 0x28BC18u: goto label_28bc18;
            case 0x28BC38u: goto label_28bc38;
            case 0x28BC3Cu: goto label_28bc3c;
            case 0x28BC40u: goto label_28bc40;
            case 0x28BC64u: goto label_28bc64;
            case 0x28BC78u: goto label_28bc78;
            case 0x28BCA8u: goto label_28bca8;
            case 0x28BCC0u: goto label_28bcc0;
            case 0x28BCE8u: goto label_28bce8;
            case 0x28BCF8u: goto label_28bcf8;
            case 0x28BD18u: goto label_28bd18;
            case 0x28BD1Cu: goto label_28bd1c;
            case 0x28BD20u: goto label_28bd20;
            case 0x28BD6Cu: goto label_28bd6c;
            case 0x28BD88u: goto label_28bd88;
            case 0x28BDB0u: goto label_28bdb0;
            case 0x28BDC8u: goto label_28bdc8;
            case 0x28BDE8u: goto label_28bde8;
            case 0x28BDECu: goto label_28bdec;
            case 0x28BDFCu: goto label_28bdfc;
            case 0x28BE40u: goto label_28be40;
            case 0x28BE48u: goto label_28be48;
            case 0x28BE64u: goto label_28be64;
            case 0x28BE78u: goto label_28be78;
            case 0x28BEA0u: goto label_28bea0;
            case 0x28BEA8u: goto label_28bea8;
            case 0x28BEC8u: goto label_28bec8;
            case 0x28BECCu: goto label_28becc;
            case 0x28BEECu: goto label_28beec;
            case 0x28BF08u: goto label_28bf08;
            case 0x28BF50u: goto label_28bf50;
            case 0x28BF78u: goto label_28bf78;
            case 0x28BF88u: goto label_28bf88;
            case 0x28BFA8u: goto label_28bfa8;
            case 0x28BFACu: goto label_28bfac;
            case 0x28BFE0u: goto label_28bfe0;
            case 0x28C008u: goto label_28c008;
            case 0x28C018u: goto label_28c018;
            case 0x28C038u: goto label_28c038;
            case 0x28C03Cu: goto label_28c03c;
            case 0x28C054u: goto label_28c054;
            case 0x28C068u: goto label_28c068;
            case 0x28C06Cu: goto label_28c06c;
            case 0x28C084u: goto label_28c084;
            case 0x28C094u: goto label_28c094;
            case 0x28C098u: goto label_28c098;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28BA2Cu; }
            if (ctx->pc != 0x28BA2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x28BA2Cu;
    // 0x28ba2c: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x28BA2Cu;
    {
        const bool branch_taken_0x28ba2c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x28BA30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BA2Cu;
            // 0x28ba30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ba2c) {
            ctx->pc = 0x28BA60u;
            goto label_28ba60;
        }
    }
    ctx->pc = 0x28BA34u;
    // 0x28ba34: 0x2e0f809  jalr        $s7
    ctx->pc = 0x28BA34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x28BA3Cu);
        ctx->pc = 0x28BA38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BA34u;
            // 0x28ba38: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28BA3Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28B6E8u: goto label_28b6e8;
            case 0x28B724u: goto label_28b724;
            case 0x28B744u: goto label_28b744;
            case 0x28B788u: goto label_28b788;
            case 0x28B790u: goto label_28b790;
            case 0x28B7ACu: goto label_28b7ac;
            case 0x28B7C0u: goto label_28b7c0;
            case 0x28B7E8u: goto label_28b7e8;
            case 0x28B7F0u: goto label_28b7f0;
            case 0x28B810u: goto label_28b810;
            case 0x28B814u: goto label_28b814;
            case 0x28B834u: goto label_28b834;
            case 0x28B850u: goto label_28b850;
            case 0x28B8E4u: goto label_28b8e4;
            case 0x28B914u: goto label_28b914;
            case 0x28B918u: goto label_28b918;
            case 0x28B964u: goto label_28b964;
            case 0x28B994u: goto label_28b994;
            case 0x28B998u: goto label_28b998;
            case 0x28B9E8u: goto label_28b9e8;
            case 0x28BA18u: goto label_28ba18;
            case 0x28BA1Cu: goto label_28ba1c;
            case 0x28BA20u: goto label_28ba20;
            case 0x28BA60u: goto label_28ba60;
            case 0x28BA90u: goto label_28ba90;
            case 0x28BA94u: goto label_28ba94;
            case 0x28BA98u: goto label_28ba98;
            case 0x28BAC0u: goto label_28bac0;
            case 0x28BAE8u: goto label_28bae8;
            case 0x28BB10u: goto label_28bb10;
            case 0x28BB28u: goto label_28bb28;
            case 0x28BB48u: goto label_28bb48;
            case 0x28BB4Cu: goto label_28bb4c;
            case 0x28BB88u: goto label_28bb88;
            case 0x28BBB8u: goto label_28bbb8;
            case 0x28BBD8u: goto label_28bbd8;
            case 0x28BC00u: goto label_28bc00;
            case 0x28BC18u: goto label_28bc18;
            case 0x28BC38u: goto label_28bc38;
            case 0x28BC3Cu: goto label_28bc3c;
            case 0x28BC40u: goto label_28bc40;
            case 0x28BC64u: goto label_28bc64;
            case 0x28BC78u: goto label_28bc78;
            case 0x28BCA8u: goto label_28bca8;
            case 0x28BCC0u: goto label_28bcc0;
            case 0x28BCE8u: goto label_28bce8;
            case 0x28BCF8u: goto label_28bcf8;
            case 0x28BD18u: goto label_28bd18;
            case 0x28BD1Cu: goto label_28bd1c;
            case 0x28BD20u: goto label_28bd20;
            case 0x28BD6Cu: goto label_28bd6c;
            case 0x28BD88u: goto label_28bd88;
            case 0x28BDB0u: goto label_28bdb0;
            case 0x28BDC8u: goto label_28bdc8;
            case 0x28BDE8u: goto label_28bde8;
            case 0x28BDECu: goto label_28bdec;
            case 0x28BDFCu: goto label_28bdfc;
            case 0x28BE40u: goto label_28be40;
            case 0x28BE48u: goto label_28be48;
            case 0x28BE64u: goto label_28be64;
            case 0x28BE78u: goto label_28be78;
            case 0x28BEA0u: goto label_28bea0;
            case 0x28BEA8u: goto label_28bea8;
            case 0x28BEC8u: goto label_28bec8;
            case 0x28BECCu: goto label_28becc;
            case 0x28BEECu: goto label_28beec;
            case 0x28BF08u: goto label_28bf08;
            case 0x28BF50u: goto label_28bf50;
            case 0x28BF78u: goto label_28bf78;
            case 0x28BF88u: goto label_28bf88;
            case 0x28BFA8u: goto label_28bfa8;
            case 0x28BFACu: goto label_28bfac;
            case 0x28BFE0u: goto label_28bfe0;
            case 0x28C008u: goto label_28c008;
            case 0x28C018u: goto label_28c018;
            case 0x28C038u: goto label_28c038;
            case 0x28C03Cu: goto label_28c03c;
            case 0x28C054u: goto label_28c054;
            case 0x28C068u: goto label_28c068;
            case 0x28C06Cu: goto label_28c06c;
            case 0x28C084u: goto label_28c084;
            case 0x28C094u: goto label_28c094;
            case 0x28C098u: goto label_28c098;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28BA3Cu; }
            if (ctx->pc != 0x28BA3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x28BA3Cu;
    // 0x28ba3c: 0x4400014  bltz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x28BA3Cu;
    {
        const bool branch_taken_0x28ba3c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28BA40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BA3Cu;
            // 0x28ba40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ba3c) {
            ctx->pc = 0x28BA90u;
            goto label_28ba90;
        }
    }
    ctx->pc = 0x28BA44u;
    // 0x28ba44: 0x2e0f809  jalr        $s7
    ctx->pc = 0x28BA44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x28BA4Cu);
        ctx->pc = 0x28BA48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BA44u;
            // 0x28ba48: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28BA4Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28B6E8u: goto label_28b6e8;
            case 0x28B724u: goto label_28b724;
            case 0x28B744u: goto label_28b744;
            case 0x28B788u: goto label_28b788;
            case 0x28B790u: goto label_28b790;
            case 0x28B7ACu: goto label_28b7ac;
            case 0x28B7C0u: goto label_28b7c0;
            case 0x28B7E8u: goto label_28b7e8;
            case 0x28B7F0u: goto label_28b7f0;
            case 0x28B810u: goto label_28b810;
            case 0x28B814u: goto label_28b814;
            case 0x28B834u: goto label_28b834;
            case 0x28B850u: goto label_28b850;
            case 0x28B8E4u: goto label_28b8e4;
            case 0x28B914u: goto label_28b914;
            case 0x28B918u: goto label_28b918;
            case 0x28B964u: goto label_28b964;
            case 0x28B994u: goto label_28b994;
            case 0x28B998u: goto label_28b998;
            case 0x28B9E8u: goto label_28b9e8;
            case 0x28BA18u: goto label_28ba18;
            case 0x28BA1Cu: goto label_28ba1c;
            case 0x28BA20u: goto label_28ba20;
            case 0x28BA60u: goto label_28ba60;
            case 0x28BA90u: goto label_28ba90;
            case 0x28BA94u: goto label_28ba94;
            case 0x28BA98u: goto label_28ba98;
            case 0x28BAC0u: goto label_28bac0;
            case 0x28BAE8u: goto label_28bae8;
            case 0x28BB10u: goto label_28bb10;
            case 0x28BB28u: goto label_28bb28;
            case 0x28BB48u: goto label_28bb48;
            case 0x28BB4Cu: goto label_28bb4c;
            case 0x28BB88u: goto label_28bb88;
            case 0x28BBB8u: goto label_28bbb8;
            case 0x28BBD8u: goto label_28bbd8;
            case 0x28BC00u: goto label_28bc00;
            case 0x28BC18u: goto label_28bc18;
            case 0x28BC38u: goto label_28bc38;
            case 0x28BC3Cu: goto label_28bc3c;
            case 0x28BC40u: goto label_28bc40;
            case 0x28BC64u: goto label_28bc64;
            case 0x28BC78u: goto label_28bc78;
            case 0x28BCA8u: goto label_28bca8;
            case 0x28BCC0u: goto label_28bcc0;
            case 0x28BCE8u: goto label_28bce8;
            case 0x28BCF8u: goto label_28bcf8;
            case 0x28BD18u: goto label_28bd18;
            case 0x28BD1Cu: goto label_28bd1c;
            case 0x28BD20u: goto label_28bd20;
            case 0x28BD6Cu: goto label_28bd6c;
            case 0x28BD88u: goto label_28bd88;
            case 0x28BDB0u: goto label_28bdb0;
            case 0x28BDC8u: goto label_28bdc8;
            case 0x28BDE8u: goto label_28bde8;
            case 0x28BDECu: goto label_28bdec;
            case 0x28BDFCu: goto label_28bdfc;
            case 0x28BE40u: goto label_28be40;
            case 0x28BE48u: goto label_28be48;
            case 0x28BE64u: goto label_28be64;
            case 0x28BE78u: goto label_28be78;
            case 0x28BEA0u: goto label_28bea0;
            case 0x28BEA8u: goto label_28bea8;
            case 0x28BEC8u: goto label_28bec8;
            case 0x28BECCu: goto label_28becc;
            case 0x28BEECu: goto label_28beec;
            case 0x28BF08u: goto label_28bf08;
            case 0x28BF50u: goto label_28bf50;
            case 0x28BF78u: goto label_28bf78;
            case 0x28BF88u: goto label_28bf88;
            case 0x28BFA8u: goto label_28bfa8;
            case 0x28BFACu: goto label_28bfac;
            case 0x28BFE0u: goto label_28bfe0;
            case 0x28C008u: goto label_28c008;
            case 0x28C018u: goto label_28c018;
            case 0x28C038u: goto label_28c038;
            case 0x28C03Cu: goto label_28c03c;
            case 0x28C054u: goto label_28c054;
            case 0x28C068u: goto label_28c068;
            case 0x28C06Cu: goto label_28c06c;
            case 0x28C084u: goto label_28c084;
            case 0x28C094u: goto label_28c094;
            case 0x28C098u: goto label_28c098;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28BA4Cu; }
            if (ctx->pc != 0x28BA4Cu) { return; }
        }
        }
    }
    ctx->pc = 0x28BA4Cu;
    // 0x28ba4c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x28ba4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28ba50: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x28ba50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ba54: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x28ba54u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28ba58: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x28BA58u;
    {
        const bool branch_taken_0x28ba58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BA58u;
            // 0x28ba5c: 0x223200b  movn        $a0, $s1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ba58) {
            ctx->pc = 0x28BA94u;
            goto label_28ba94;
        }
    }
    ctx->pc = 0x28BA60u;
label_28ba60:
    // 0x28ba60: 0x2e0f809  jalr        $s7
    ctx->pc = 0x28BA60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x28BA68u);
        ctx->pc = 0x28BA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BA60u;
            // 0x28ba64: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28BA68u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28B6E8u: goto label_28b6e8;
            case 0x28B724u: goto label_28b724;
            case 0x28B744u: goto label_28b744;
            case 0x28B788u: goto label_28b788;
            case 0x28B790u: goto label_28b790;
            case 0x28B7ACu: goto label_28b7ac;
            case 0x28B7C0u: goto label_28b7c0;
            case 0x28B7E8u: goto label_28b7e8;
            case 0x28B7F0u: goto label_28b7f0;
            case 0x28B810u: goto label_28b810;
            case 0x28B814u: goto label_28b814;
            case 0x28B834u: goto label_28b834;
            case 0x28B850u: goto label_28b850;
            case 0x28B8E4u: goto label_28b8e4;
            case 0x28B914u: goto label_28b914;
            case 0x28B918u: goto label_28b918;
            case 0x28B964u: goto label_28b964;
            case 0x28B994u: goto label_28b994;
            case 0x28B998u: goto label_28b998;
            case 0x28B9E8u: goto label_28b9e8;
            case 0x28BA18u: goto label_28ba18;
            case 0x28BA1Cu: goto label_28ba1c;
            case 0x28BA20u: goto label_28ba20;
            case 0x28BA60u: goto label_28ba60;
            case 0x28BA90u: goto label_28ba90;
            case 0x28BA94u: goto label_28ba94;
            case 0x28BA98u: goto label_28ba98;
            case 0x28BAC0u: goto label_28bac0;
            case 0x28BAE8u: goto label_28bae8;
            case 0x28BB10u: goto label_28bb10;
            case 0x28BB28u: goto label_28bb28;
            case 0x28BB48u: goto label_28bb48;
            case 0x28BB4Cu: goto label_28bb4c;
            case 0x28BB88u: goto label_28bb88;
            case 0x28BBB8u: goto label_28bbb8;
            case 0x28BBD8u: goto label_28bbd8;
            case 0x28BC00u: goto label_28bc00;
            case 0x28BC18u: goto label_28bc18;
            case 0x28BC38u: goto label_28bc38;
            case 0x28BC3Cu: goto label_28bc3c;
            case 0x28BC40u: goto label_28bc40;
            case 0x28BC64u: goto label_28bc64;
            case 0x28BC78u: goto label_28bc78;
            case 0x28BCA8u: goto label_28bca8;
            case 0x28BCC0u: goto label_28bcc0;
            case 0x28BCE8u: goto label_28bce8;
            case 0x28BCF8u: goto label_28bcf8;
            case 0x28BD18u: goto label_28bd18;
            case 0x28BD1Cu: goto label_28bd1c;
            case 0x28BD20u: goto label_28bd20;
            case 0x28BD6Cu: goto label_28bd6c;
            case 0x28BD88u: goto label_28bd88;
            case 0x28BDB0u: goto label_28bdb0;
            case 0x28BDC8u: goto label_28bdc8;
            case 0x28BDE8u: goto label_28bde8;
            case 0x28BDECu: goto label_28bdec;
            case 0x28BDFCu: goto label_28bdfc;
            case 0x28BE40u: goto label_28be40;
            case 0x28BE48u: goto label_28be48;
            case 0x28BE64u: goto label_28be64;
            case 0x28BE78u: goto label_28be78;
            case 0x28BEA0u: goto label_28bea0;
            case 0x28BEA8u: goto label_28bea8;
            case 0x28BEC8u: goto label_28bec8;
            case 0x28BECCu: goto label_28becc;
            case 0x28BEECu: goto label_28beec;
            case 0x28BF08u: goto label_28bf08;
            case 0x28BF50u: goto label_28bf50;
            case 0x28BF78u: goto label_28bf78;
            case 0x28BF88u: goto label_28bf88;
            case 0x28BFA8u: goto label_28bfa8;
            case 0x28BFACu: goto label_28bfac;
            case 0x28BFE0u: goto label_28bfe0;
            case 0x28C008u: goto label_28c008;
            case 0x28C018u: goto label_28c018;
            case 0x28C038u: goto label_28c038;
            case 0x28C03Cu: goto label_28c03c;
            case 0x28C054u: goto label_28c054;
            case 0x28C068u: goto label_28c068;
            case 0x28C06Cu: goto label_28c06c;
            case 0x28C084u: goto label_28c084;
            case 0x28C094u: goto label_28c094;
            case 0x28C098u: goto label_28c098;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28BA68u; }
            if (ctx->pc != 0x28BA68u) { return; }
        }
        }
    }
    ctx->pc = 0x28BA68u;
    // 0x28ba68: 0x5c40000a  bgtzl       $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x28BA68u;
    {
        const bool branch_taken_0x28ba68 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x28ba68) {
            ctx->pc = 0x28BA6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28BA68u;
            // 0x28ba6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28BA94u;
            goto label_28ba94;
        }
    }
    ctx->pc = 0x28BA70u;
    // 0x28ba70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28ba70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ba74: 0x2e0f809  jalr        $s7
    ctx->pc = 0x28BA74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x28BA7Cu);
        ctx->pc = 0x28BA78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BA74u;
            // 0x28ba78: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28BA7Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28B6E8u: goto label_28b6e8;
            case 0x28B724u: goto label_28b724;
            case 0x28B744u: goto label_28b744;
            case 0x28B788u: goto label_28b788;
            case 0x28B790u: goto label_28b790;
            case 0x28B7ACu: goto label_28b7ac;
            case 0x28B7C0u: goto label_28b7c0;
            case 0x28B7E8u: goto label_28b7e8;
            case 0x28B7F0u: goto label_28b7f0;
            case 0x28B810u: goto label_28b810;
            case 0x28B814u: goto label_28b814;
            case 0x28B834u: goto label_28b834;
            case 0x28B850u: goto label_28b850;
            case 0x28B8E4u: goto label_28b8e4;
            case 0x28B914u: goto label_28b914;
            case 0x28B918u: goto label_28b918;
            case 0x28B964u: goto label_28b964;
            case 0x28B994u: goto label_28b994;
            case 0x28B998u: goto label_28b998;
            case 0x28B9E8u: goto label_28b9e8;
            case 0x28BA18u: goto label_28ba18;
            case 0x28BA1Cu: goto label_28ba1c;
            case 0x28BA20u: goto label_28ba20;
            case 0x28BA60u: goto label_28ba60;
            case 0x28BA90u: goto label_28ba90;
            case 0x28BA94u: goto label_28ba94;
            case 0x28BA98u: goto label_28ba98;
            case 0x28BAC0u: goto label_28bac0;
            case 0x28BAE8u: goto label_28bae8;
            case 0x28BB10u: goto label_28bb10;
            case 0x28BB28u: goto label_28bb28;
            case 0x28BB48u: goto label_28bb48;
            case 0x28BB4Cu: goto label_28bb4c;
            case 0x28BB88u: goto label_28bb88;
            case 0x28BBB8u: goto label_28bbb8;
            case 0x28BBD8u: goto label_28bbd8;
            case 0x28BC00u: goto label_28bc00;
            case 0x28BC18u: goto label_28bc18;
            case 0x28BC38u: goto label_28bc38;
            case 0x28BC3Cu: goto label_28bc3c;
            case 0x28BC40u: goto label_28bc40;
            case 0x28BC64u: goto label_28bc64;
            case 0x28BC78u: goto label_28bc78;
            case 0x28BCA8u: goto label_28bca8;
            case 0x28BCC0u: goto label_28bcc0;
            case 0x28BCE8u: goto label_28bce8;
            case 0x28BCF8u: goto label_28bcf8;
            case 0x28BD18u: goto label_28bd18;
            case 0x28BD1Cu: goto label_28bd1c;
            case 0x28BD20u: goto label_28bd20;
            case 0x28BD6Cu: goto label_28bd6c;
            case 0x28BD88u: goto label_28bd88;
            case 0x28BDB0u: goto label_28bdb0;
            case 0x28BDC8u: goto label_28bdc8;
            case 0x28BDE8u: goto label_28bde8;
            case 0x28BDECu: goto label_28bdec;
            case 0x28BDFCu: goto label_28bdfc;
            case 0x28BE40u: goto label_28be40;
            case 0x28BE48u: goto label_28be48;
            case 0x28BE64u: goto label_28be64;
            case 0x28BE78u: goto label_28be78;
            case 0x28BEA0u: goto label_28bea0;
            case 0x28BEA8u: goto label_28bea8;
            case 0x28BEC8u: goto label_28bec8;
            case 0x28BECCu: goto label_28becc;
            case 0x28BEECu: goto label_28beec;
            case 0x28BF08u: goto label_28bf08;
            case 0x28BF50u: goto label_28bf50;
            case 0x28BF78u: goto label_28bf78;
            case 0x28BF88u: goto label_28bf88;
            case 0x28BFA8u: goto label_28bfa8;
            case 0x28BFACu: goto label_28bfac;
            case 0x28BFE0u: goto label_28bfe0;
            case 0x28C008u: goto label_28c008;
            case 0x28C018u: goto label_28c018;
            case 0x28C038u: goto label_28c038;
            case 0x28C03Cu: goto label_28c03c;
            case 0x28C054u: goto label_28c054;
            case 0x28C068u: goto label_28c068;
            case 0x28C06Cu: goto label_28c06c;
            case 0x28C084u: goto label_28c084;
            case 0x28C094u: goto label_28c094;
            case 0x28C098u: goto label_28c098;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28BA7Cu; }
            if (ctx->pc != 0x28BA7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x28BA7Cu;
    // 0x28ba7c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x28ba7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28ba80: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28ba80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ba84: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x28ba84u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28ba88: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28BA88u;
    {
        const bool branch_taken_0x28ba88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BA8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BA88u;
            // 0x28ba8c: 0x2a3200b  movn        $a0, $s5, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ba88) {
            ctx->pc = 0x28BA94u;
            goto label_28ba94;
        }
    }
    ctx->pc = 0x28BA90u;
label_28ba90:
    // 0x28ba90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28ba90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28ba94:
    // 0x28ba94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28ba94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28ba98:
    // 0x28ba98: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x28ba98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x28ba9c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28BA9Cu;
    {
        const bool branch_taken_0x28ba9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28BAA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BA9Cu;
            // 0x28baa0: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ba9c) {
            ctx->pc = 0x28BAC0u;
            goto label_28bac0;
        }
    }
    ctx->pc = 0x28BAA4u;
    // 0x28baa4: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x28baa4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28baa8: 0x2d22021  addu        $a0, $s6, $s2
    ctx->pc = 0x28baa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
    // 0x28baac: 0xafa4002c  sw          $a0, 0x2C($sp)
    ctx->pc = 0x28baacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
    // 0x28bab0: 0xdec20000  ld          $v0, 0x0($s6)
    ctx->pc = 0x28bab0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x28bab4: 0xfec30000  sd          $v1, 0x0($s6)
    ctx->pc = 0x28bab4u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 0), GPR_U64(ctx, 3));
    // 0x28bab8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x28BAB8u;
    {
        const bool branch_taken_0x28bab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BAB8u;
            // 0x28babc: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bab8) {
            ctx->pc = 0x28BB48u;
            goto label_28bb48;
        }
    }
    ctx->pc = 0x28BAC0u;
label_28bac0:
    // 0x28bac0: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x28bac0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x28bac4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x28BAC4u;
    {
        const bool branch_taken_0x28bac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BAC4u;
            // 0x28bac8: 0x1210c2  srl         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bac4) {
            ctx->pc = 0x28BB10u;
            goto label_28bb10;
        }
    }
    ctx->pc = 0x28BACCu;
    // 0x28bacc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28baccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bad0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x28bad0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28bad4: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x28bad4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bad8: 0x2283e  dsrl32      $a1, $v0, 0
    ctx->pc = 0x28bad8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x28badc: 0x2d21021  addu        $v0, $s6, $s2
    ctx->pc = 0x28badcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
    // 0x28bae0: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x28bae0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x28bae4: 0x0  nop
    ctx->pc = 0x28bae4u;
    // NOP
label_28bae8:
    // 0x28bae8: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x28bae8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28baec: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x28baecu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
    // 0x28baf0: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x28baf0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x28baf4: 0xfcc30000  sd          $v1, 0x0($a2)
    ctx->pc = 0x28baf4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
    // 0x28baf8: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x28baf8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x28bafc: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x28bafcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x28bb00: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x28BB00u;
    {
        const bool branch_taken_0x28bb00 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x28BB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BB00u;
            // 0x28bb04: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bb00) {
            ctx->pc = 0x28BAE8u;
            runtime->cooperativeGuestYield();
            goto label_28bae8;
        }
    }
    ctx->pc = 0x28BB08u;
    // 0x28bb08: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x28BB08u;
    {
        const bool branch_taken_0x28bb08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BB0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BB08u;
            // 0x28bb0c: 0x8fa20030  lw          $v0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bb08) {
            ctx->pc = 0x28BB4Cu;
            goto label_28bb4c;
        }
    }
    ctx->pc = 0x28BB10u;
label_28bb10:
    // 0x28bb10: 0x2d21821  addu        $v1, $s6, $s2
    ctx->pc = 0x28bb10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 18)));
    // 0x28bb14: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x28bb14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x28bb18: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x28bb18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
    // 0x28bb1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28bb1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bb20: 0x2283e  dsrl32      $a1, $v0, 0
    ctx->pc = 0x28bb20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x28bb24: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x28bb24u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_28bb28:
    // 0x28bb28: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x28bb28u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28bb2c: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x28bb2cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
    // 0x28bb30: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x28bb30u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x28bb34: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x28bb34u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x28bb38: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x28bb38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x28bb3c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x28bb3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x28bb40: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x28BB40u;
    {
        const bool branch_taken_0x28bb40 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x28BB44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BB40u;
            // 0x28bb44: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bb40) {
            ctx->pc = 0x28BB28u;
            runtime->cooperativeGuestYield();
            goto label_28bb28;
        }
    }
    ctx->pc = 0x28BB48u;
label_28bb48:
    // 0x28bb48: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x28bb48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_28bb4c:
    // 0x28bb4c: 0x12203c  dsll32      $a0, $s2, 0
    ctx->pc = 0x28bb4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) << (32 + 0));
    // 0x28bb50: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x28bb50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x28bb54: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x28bb54u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28bb58: 0x8fb1002c  lw          $s1, 0x2C($sp)
    ctx->pc = 0x28bb58u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x28bb5c: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x28bb5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x28bb60: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x28bb60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x28bb64: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x28bb64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x28bb68: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x28bb68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bb6c: 0x56a021  addu        $s4, $v0, $s6
    ctx->pc = 0x28bb6cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x28bb70: 0x1210c2  srl         $v0, $s2, 3
    ctx->pc = 0x28bb70u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 3));
    // 0x28bb74: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x28bb74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bb78: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x28bb78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28bb7c: 0x10000030  b           . + 4 + (0x30 << 2)
    ctx->pc = 0x28BB7Cu;
    {
        const bool branch_taken_0x28bb7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BB7Cu;
            // 0x28bb80: 0xffa20018  sd          $v0, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bb7c) {
            ctx->pc = 0x28BC40u;
            goto label_28bc40;
        }
    }
    ctx->pc = 0x28BB84u;
    // 0x28bb84: 0x0  nop
    ctx->pc = 0x28bb84u;
    // NOP
label_28bb88:
    // 0x28bb88: 0x14a0002c  bnez        $a1, . + 4 + (0x2C << 2)
    ctx->pc = 0x28BB88u;
    {
        const bool branch_taken_0x28bb88 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x28BB8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BB88u;
            // 0x28bb8c: 0x2324821  addu        $t1, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bb88) {
            ctx->pc = 0x28BC3Cu;
            goto label_28bc3c;
        }
    }
    ctx->pc = 0x28BB90u;
    // 0x28bb90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28bb90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28bb94: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x28bb94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x28bb98: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x28BB98u;
    {
        const bool branch_taken_0x28bb98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28BB9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BB98u;
            // 0x28bb9c: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bb98) {
            ctx->pc = 0x28BBB8u;
            goto label_28bbb8;
        }
    }
    ctx->pc = 0x28BBA0u;
    // 0x28bba0: 0xde230000  ld          $v1, 0x0($s1)
    ctx->pc = 0x28bba0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28bba4: 0x2723821  addu        $a3, $s3, $s2
    ctx->pc = 0x28bba4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 18)));
    // 0x28bba8: 0xde620000  ld          $v0, 0x0($s3)
    ctx->pc = 0x28bba8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x28bbac: 0xfe630000  sd          $v1, 0x0($s3)
    ctx->pc = 0x28bbacu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 0), GPR_U64(ctx, 3));
    // 0x28bbb0: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x28BBB0u;
    {
        const bool branch_taken_0x28bbb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BBB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BBB0u;
            // 0x28bbb4: 0xfe220000  sd          $v0, 0x0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bbb0) {
            ctx->pc = 0x28BC38u;
            goto label_28bc38;
        }
    }
    ctx->pc = 0x28BBB8u;
label_28bbb8:
    // 0x28bbb8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x28bbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28bbbc: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x28BBBCu;
    {
        const bool branch_taken_0x28bbbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BBC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BBBCu;
            // 0x28bbc0: 0xdfa20018  ld          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bbbc) {
            ctx->pc = 0x28BC00u;
            goto label_28bc00;
        }
    }
    ctx->pc = 0x28BBC4u;
    // 0x28bbc4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x28bbc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bbc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28bbc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bbcc: 0xb23821  addu        $a3, $a1, $s2
    ctx->pc = 0x28bbccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x28bbd0: 0x2303e  dsrl32      $a2, $v0, 0
    ctx->pc = 0x28bbd0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x28bbd4: 0x0  nop
    ctx->pc = 0x28bbd4u;
    // NOP
label_28bbd8:
    // 0x28bbd8: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x28bbd8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28bbdc: 0x64c6ffff  daddiu      $a2, $a2, -0x1
    ctx->pc = 0x28bbdcu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
    // 0x28bbe0: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x28bbe0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28bbe4: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x28bbe4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x28bbe8: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x28bbe8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x28bbec: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x28bbecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x28bbf0: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x28BBF0u;
    {
        const bool branch_taken_0x28bbf0 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x28BBF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BBF0u;
            // 0x28bbf4: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bbf0) {
            ctx->pc = 0x28BBD8u;
            runtime->cooperativeGuestYield();
            goto label_28bbd8;
        }
    }
    ctx->pc = 0x28BBF8u;
    // 0x28bbf8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x28BBF8u;
    {
        const bool branch_taken_0x28bbf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BBFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BBF8u;
            // 0x28bbfc: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bbf8) {
            ctx->pc = 0x28BC3Cu;
            goto label_28bc3c;
        }
    }
    ctx->pc = 0x28BC00u;
label_28bc00:
    // 0x28bc00: 0xdfa30020  ld          $v1, 0x20($sp)
    ctx->pc = 0x28bc00u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28bc04: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x28bc04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bc08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28bc08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bc0c: 0xb23821  addu        $a3, $a1, $s2
    ctx->pc = 0x28bc0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x28bc10: 0x3303e  dsrl32      $a2, $v1, 0
    ctx->pc = 0x28bc10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x28bc14: 0x0  nop
    ctx->pc = 0x28bc14u;
    // NOP
label_28bc18:
    // 0x28bc18: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x28bc18u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28bc1c: 0x64c6ffff  daddiu      $a2, $a2, -0x1
    ctx->pc = 0x28bc1cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
    // 0x28bc20: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x28bc20u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28bc24: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x28bc24u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x28bc28: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x28bc28u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x28bc2c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x28bc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x28bc30: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x28BC30u;
    {
        const bool branch_taken_0x28bc30 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x28BC34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BC30u;
            // 0x28bc34: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bc30) {
            ctx->pc = 0x28BC18u;
            runtime->cooperativeGuestYield();
            goto label_28bc18;
        }
    }
    ctx->pc = 0x28BC38u;
label_28bc38:
    // 0x28bc38: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x28bc38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_28bc3c:
    // 0x28bc3c: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x28bc3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_28bc40:
    // 0x28bc40: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x28bc40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x28bc44: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28BC44u;
    {
        const bool branch_taken_0x28bc44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28BC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BC44u;
            // 0x28bc48: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bc44) {
            ctx->pc = 0x28BC64u;
            goto label_28bc64;
        }
    }
    ctx->pc = 0x28BC4Cu;
    // 0x28bc4c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x28bc4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bc50: 0x2e0f809  jalr        $s7
    ctx->pc = 0x28BC50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x28BC58u);
        ctx->pc = 0x28BC54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BC50u;
            // 0x28bc54: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28BC58u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28B6E8u: goto label_28b6e8;
            case 0x28B724u: goto label_28b724;
            case 0x28B744u: goto label_28b744;
            case 0x28B788u: goto label_28b788;
            case 0x28B790u: goto label_28b790;
            case 0x28B7ACu: goto label_28b7ac;
            case 0x28B7C0u: goto label_28b7c0;
            case 0x28B7E8u: goto label_28b7e8;
            case 0x28B7F0u: goto label_28b7f0;
            case 0x28B810u: goto label_28b810;
            case 0x28B814u: goto label_28b814;
            case 0x28B834u: goto label_28b834;
            case 0x28B850u: goto label_28b850;
            case 0x28B8E4u: goto label_28b8e4;
            case 0x28B914u: goto label_28b914;
            case 0x28B918u: goto label_28b918;
            case 0x28B964u: goto label_28b964;
            case 0x28B994u: goto label_28b994;
            case 0x28B998u: goto label_28b998;
            case 0x28B9E8u: goto label_28b9e8;
            case 0x28BA18u: goto label_28ba18;
            case 0x28BA1Cu: goto label_28ba1c;
            case 0x28BA20u: goto label_28ba20;
            case 0x28BA60u: goto label_28ba60;
            case 0x28BA90u: goto label_28ba90;
            case 0x28BA94u: goto label_28ba94;
            case 0x28BA98u: goto label_28ba98;
            case 0x28BAC0u: goto label_28bac0;
            case 0x28BAE8u: goto label_28bae8;
            case 0x28BB10u: goto label_28bb10;
            case 0x28BB28u: goto label_28bb28;
            case 0x28BB48u: goto label_28bb48;
            case 0x28BB4Cu: goto label_28bb4c;
            case 0x28BB88u: goto label_28bb88;
            case 0x28BBB8u: goto label_28bbb8;
            case 0x28BBD8u: goto label_28bbd8;
            case 0x28BC00u: goto label_28bc00;
            case 0x28BC18u: goto label_28bc18;
            case 0x28BC38u: goto label_28bc38;
            case 0x28BC3Cu: goto label_28bc3c;
            case 0x28BC40u: goto label_28bc40;
            case 0x28BC64u: goto label_28bc64;
            case 0x28BC78u: goto label_28bc78;
            case 0x28BCA8u: goto label_28bca8;
            case 0x28BCC0u: goto label_28bcc0;
            case 0x28BCE8u: goto label_28bce8;
            case 0x28BCF8u: goto label_28bcf8;
            case 0x28BD18u: goto label_28bd18;
            case 0x28BD1Cu: goto label_28bd1c;
            case 0x28BD20u: goto label_28bd20;
            case 0x28BD6Cu: goto label_28bd6c;
            case 0x28BD88u: goto label_28bd88;
            case 0x28BDB0u: goto label_28bdb0;
            case 0x28BDC8u: goto label_28bdc8;
            case 0x28BDE8u: goto label_28bde8;
            case 0x28BDECu: goto label_28bdec;
            case 0x28BDFCu: goto label_28bdfc;
            case 0x28BE40u: goto label_28be40;
            case 0x28BE48u: goto label_28be48;
            case 0x28BE64u: goto label_28be64;
            case 0x28BE78u: goto label_28be78;
            case 0x28BEA0u: goto label_28bea0;
            case 0x28BEA8u: goto label_28bea8;
            case 0x28BEC8u: goto label_28bec8;
            case 0x28BECCu: goto label_28becc;
            case 0x28BEECu: goto label_28beec;
            case 0x28BF08u: goto label_28bf08;
            case 0x28BF50u: goto label_28bf50;
            case 0x28BF78u: goto label_28bf78;
            case 0x28BF88u: goto label_28bf88;
            case 0x28BFA8u: goto label_28bfa8;
            case 0x28BFACu: goto label_28bfac;
            case 0x28BFE0u: goto label_28bfe0;
            case 0x28C008u: goto label_28c008;
            case 0x28C018u: goto label_28c018;
            case 0x28C038u: goto label_28c038;
            case 0x28C03Cu: goto label_28c03c;
            case 0x28C054u: goto label_28c054;
            case 0x28C068u: goto label_28c068;
            case 0x28C06Cu: goto label_28c06c;
            case 0x28C084u: goto label_28c084;
            case 0x28C094u: goto label_28c094;
            case 0x28C098u: goto label_28c098;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28BC58u; }
            if (ctx->pc != 0x28BC58u) { return; }
        }
        }
    }
    ctx->pc = 0x28BC58u;
    // 0x28bc58: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28bc58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bc5c: 0x18a0ffca  blez        $a1, . + 4 + (-0x36 << 2)
    ctx->pc = 0x28BC5Cu;
    {
        const bool branch_taken_0x28bc5c = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x28BC60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BC5Cu;
            // 0x28bc60: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bc5c) {
            ctx->pc = 0x28BB88u;
            runtime->cooperativeGuestYield();
            goto label_28bb88;
        }
    }
    ctx->pc = 0x28BC64u;
label_28bc64:
    // 0x28bc64: 0x1210c2  srl         $v0, $s2, 3
    ctx->pc = 0x28bc64u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 3));
    // 0x28bc68: 0x2f03c  dsll32      $fp, $v0, 0
    ctx->pc = 0x28bc68u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28bc6c: 0x12a83c  dsll32      $s5, $s2, 0
    ctx->pc = 0x28bc6cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 18) << (32 + 0));
    // 0x28bc70: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x28BC70u;
    {
        const bool branch_taken_0x28bc70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BC74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BC70u;
            // 0x28bc74: 0x28890002  slti        $t1, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bc70) {
            ctx->pc = 0x28BD20u;
            goto label_28bd20;
        }
    }
    ctx->pc = 0x28BC78u;
label_28bc78:
    // 0x28bc78: 0x14a00028  bnez        $a1, . + 4 + (0x28 << 2)
    ctx->pc = 0x28BC78u;
    {
        const bool branch_taken_0x28bc78 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x28BC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BC78u;
            // 0x28bc7c: 0x2124023  subu        $t0, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bc78) {
            ctx->pc = 0x28BD1Cu;
            goto label_28bd1c;
        }
    }
    ctx->pc = 0x28BC80u;
    // 0x28bc80: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28bc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28bc84: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x28bc84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x28bc88: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x28BC88u;
    {
        const bool branch_taken_0x28bc88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28BC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BC88u;
            // 0x28bc8c: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bc88) {
            ctx->pc = 0x28BCA8u;
            goto label_28bca8;
        }
    }
    ctx->pc = 0x28BC90u;
    // 0x28bc90: 0xde830000  ld          $v1, 0x0($s4)
    ctx->pc = 0x28bc90u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x28bc94: 0x2923823  subu        $a3, $s4, $s2
    ctx->pc = 0x28bc94u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x28bc98: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x28bc98u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28bc9c: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x28bc9cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x28bca0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x28BCA0u;
    {
        const bool branch_taken_0x28bca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BCA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BCA0u;
            // 0x28bca4: 0xfe820000  sd          $v0, 0x0($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bca0) {
            ctx->pc = 0x28BD18u;
            goto label_28bd18;
        }
    }
    ctx->pc = 0x28BCA8u;
label_28bca8:
    // 0x28bca8: 0x1120000f  beqz        $t1, . + 4 + (0xF << 2)
    ctx->pc = 0x28BCA8u;
    {
        const bool branch_taken_0x28bca8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BCACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BCA8u;
            // 0x28bcac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bca8) {
            ctx->pc = 0x28BCE8u;
            goto label_28bce8;
        }
    }
    ctx->pc = 0x28BCB0u;
    // 0x28bcb0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x28bcb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bcb4: 0x1e303e  dsrl32      $a2, $fp, 0
    ctx->pc = 0x28bcb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 30) >> (32 + 0));
    // 0x28bcb8: 0xb23823  subu        $a3, $a1, $s2
    ctx->pc = 0x28bcb8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x28bcbc: 0x0  nop
    ctx->pc = 0x28bcbcu;
    // NOP
label_28bcc0:
    // 0x28bcc0: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x28bcc0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28bcc4: 0x64c6ffff  daddiu      $a2, $a2, -0x1
    ctx->pc = 0x28bcc4u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
    // 0x28bcc8: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x28bcc8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28bccc: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x28bcccu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x28bcd0: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x28bcd0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x28bcd4: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x28bcd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x28bcd8: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x28BCD8u;
    {
        const bool branch_taken_0x28bcd8 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x28BCDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BCD8u;
            // 0x28bcdc: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bcd8) {
            ctx->pc = 0x28BCC0u;
            runtime->cooperativeGuestYield();
            goto label_28bcc0;
        }
    }
    ctx->pc = 0x28BCE0u;
    // 0x28bce0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x28BCE0u;
    {
        const bool branch_taken_0x28bce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BCE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BCE0u;
            // 0x28bce4: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bce0) {
            ctx->pc = 0x28BD1Cu;
            goto label_28bd1c;
        }
    }
    ctx->pc = 0x28BCE8u;
label_28bce8:
    // 0x28bce8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x28bce8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bcec: 0x15303e  dsrl32      $a2, $s5, 0
    ctx->pc = 0x28bcecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 21) >> (32 + 0));
    // 0x28bcf0: 0xb23823  subu        $a3, $a1, $s2
    ctx->pc = 0x28bcf0u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x28bcf4: 0x0  nop
    ctx->pc = 0x28bcf4u;
    // NOP
label_28bcf8:
    // 0x28bcf8: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x28bcf8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28bcfc: 0x64c6ffff  daddiu      $a2, $a2, -0x1
    ctx->pc = 0x28bcfcu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
    // 0x28bd00: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x28bd00u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28bd04: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x28bd04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x28bd08: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x28bd08u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x28bd0c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x28bd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x28bd10: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x28BD10u;
    {
        const bool branch_taken_0x28bd10 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x28BD14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BD10u;
            // 0x28bd14: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bd10) {
            ctx->pc = 0x28BCF8u;
            runtime->cooperativeGuestYield();
            goto label_28bcf8;
        }
    }
    ctx->pc = 0x28BD18u;
label_28bd18:
    // 0x28bd18: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x28bd18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_28bd1c:
    // 0x28bd1c: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x28bd1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_28bd20:
    // 0x28bd20: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x28bd20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x28bd24: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x28BD24u;
    {
        const bool branch_taken_0x28bd24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28BD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BD24u;
            // 0x28bd28: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bd24) {
            ctx->pc = 0x28BDFCu;
            goto label_28bdfc;
        }
    }
    ctx->pc = 0x28BD2Cu;
    // 0x28bd2c: 0x7fa90040  sq          $t1, 0x40($sp)
    ctx->pc = 0x28bd2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 9));
    // 0x28bd30: 0x2e0f809  jalr        $s7
    ctx->pc = 0x28BD30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x28BD38u);
        ctx->pc = 0x28BD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BD30u;
            // 0x28bd34: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28BD38u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28B6E8u: goto label_28b6e8;
            case 0x28B724u: goto label_28b724;
            case 0x28B744u: goto label_28b744;
            case 0x28B788u: goto label_28b788;
            case 0x28B790u: goto label_28b790;
            case 0x28B7ACu: goto label_28b7ac;
            case 0x28B7C0u: goto label_28b7c0;
            case 0x28B7E8u: goto label_28b7e8;
            case 0x28B7F0u: goto label_28b7f0;
            case 0x28B810u: goto label_28b810;
            case 0x28B814u: goto label_28b814;
            case 0x28B834u: goto label_28b834;
            case 0x28B850u: goto label_28b850;
            case 0x28B8E4u: goto label_28b8e4;
            case 0x28B914u: goto label_28b914;
            case 0x28B918u: goto label_28b918;
            case 0x28B964u: goto label_28b964;
            case 0x28B994u: goto label_28b994;
            case 0x28B998u: goto label_28b998;
            case 0x28B9E8u: goto label_28b9e8;
            case 0x28BA18u: goto label_28ba18;
            case 0x28BA1Cu: goto label_28ba1c;
            case 0x28BA20u: goto label_28ba20;
            case 0x28BA60u: goto label_28ba60;
            case 0x28BA90u: goto label_28ba90;
            case 0x28BA94u: goto label_28ba94;
            case 0x28BA98u: goto label_28ba98;
            case 0x28BAC0u: goto label_28bac0;
            case 0x28BAE8u: goto label_28bae8;
            case 0x28BB10u: goto label_28bb10;
            case 0x28BB28u: goto label_28bb28;
            case 0x28BB48u: goto label_28bb48;
            case 0x28BB4Cu: goto label_28bb4c;
            case 0x28BB88u: goto label_28bb88;
            case 0x28BBB8u: goto label_28bbb8;
            case 0x28BBD8u: goto label_28bbd8;
            case 0x28BC00u: goto label_28bc00;
            case 0x28BC18u: goto label_28bc18;
            case 0x28BC38u: goto label_28bc38;
            case 0x28BC3Cu: goto label_28bc3c;
            case 0x28BC40u: goto label_28bc40;
            case 0x28BC64u: goto label_28bc64;
            case 0x28BC78u: goto label_28bc78;
            case 0x28BCA8u: goto label_28bca8;
            case 0x28BCC0u: goto label_28bcc0;
            case 0x28BCE8u: goto label_28bce8;
            case 0x28BCF8u: goto label_28bcf8;
            case 0x28BD18u: goto label_28bd18;
            case 0x28BD1Cu: goto label_28bd1c;
            case 0x28BD20u: goto label_28bd20;
            case 0x28BD6Cu: goto label_28bd6c;
            case 0x28BD88u: goto label_28bd88;
            case 0x28BDB0u: goto label_28bdb0;
            case 0x28BDC8u: goto label_28bdc8;
            case 0x28BDE8u: goto label_28bde8;
            case 0x28BDECu: goto label_28bdec;
            case 0x28BDFCu: goto label_28bdfc;
            case 0x28BE40u: goto label_28be40;
            case 0x28BE48u: goto label_28be48;
            case 0x28BE64u: goto label_28be64;
            case 0x28BE78u: goto label_28be78;
            case 0x28BEA0u: goto label_28bea0;
            case 0x28BEA8u: goto label_28bea8;
            case 0x28BEC8u: goto label_28bec8;
            case 0x28BECCu: goto label_28becc;
            case 0x28BEECu: goto label_28beec;
            case 0x28BF08u: goto label_28bf08;
            case 0x28BF50u: goto label_28bf50;
            case 0x28BF78u: goto label_28bf78;
            case 0x28BF88u: goto label_28bf88;
            case 0x28BFA8u: goto label_28bfa8;
            case 0x28BFACu: goto label_28bfac;
            case 0x28BFE0u: goto label_28bfe0;
            case 0x28C008u: goto label_28c008;
            case 0x28C018u: goto label_28c018;
            case 0x28C038u: goto label_28c038;
            case 0x28C03Cu: goto label_28c03c;
            case 0x28C054u: goto label_28c054;
            case 0x28C068u: goto label_28c068;
            case 0x28C06Cu: goto label_28c06c;
            case 0x28C084u: goto label_28c084;
            case 0x28C094u: goto label_28c094;
            case 0x28C098u: goto label_28c098;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28BD38u; }
            if (ctx->pc != 0x28BD38u) { return; }
        }
        }
    }
    ctx->pc = 0x28BD38u;
    // 0x28bd38: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28bd38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bd3c: 0x4a1ffce  bgez        $a1, . + 4 + (-0x32 << 2)
    ctx->pc = 0x28BD3Cu;
    {
        const bool branch_taken_0x28bd3c = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x28BD40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BD3Cu;
            // 0x28bd40: 0x7ba90040  lq          $t1, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bd3c) {
            ctx->pc = 0x28BC78u;
            runtime->cooperativeGuestYield();
            goto label_28bc78;
        }
    }
    ctx->pc = 0x28BD44u;
    // 0x28bd44: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x28bd44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x28bd48: 0x14800008  bnez        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28BD48u;
    {
        const bool branch_taken_0x28bd48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x28BD4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BD48u;
            // 0x28bd4c: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bd48) {
            ctx->pc = 0x28BD6Cu;
            goto label_28bd6c;
        }
    }
    ctx->pc = 0x28BD50u;
    // 0x28bd50: 0xde030000  ld          $v1, 0x0($s0)
    ctx->pc = 0x28bd50u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28bd54: 0x2324821  addu        $t1, $s1, $s2
    ctx->pc = 0x28bd54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x28bd58: 0xde220000  ld          $v0, 0x0($s1)
    ctx->pc = 0x28bd58u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28bd5c: 0x2124023  subu        $t0, $s0, $s2
    ctx->pc = 0x28bd5cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x28bd60: 0xfe230000  sd          $v1, 0x0($s1)
    ctx->pc = 0x28bd60u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
    // 0x28bd64: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x28BD64u;
    {
        const bool branch_taken_0x28bd64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BD68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BD64u;
            // 0x28bd68: 0xfe020000  sd          $v0, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bd64) {
            ctx->pc = 0x28BDE8u;
            goto label_28bde8;
        }
    }
    ctx->pc = 0x28BD6Cu;
label_28bd6c:
    // 0x28bd6c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x28BD6Cu;
    {
        const bool branch_taken_0x28bd6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BD70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BD6Cu;
            // 0x28bd70: 0xdfa30018  ld          $v1, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bd6c) {
            ctx->pc = 0x28BDB0u;
            goto label_28bdb0;
        }
    }
    ctx->pc = 0x28BD74u;
    // 0x28bd74: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28bd74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bd78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28bd78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bd7c: 0xb24821  addu        $t1, $a1, $s2
    ctx->pc = 0x28bd7cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x28bd80: 0x3303e  dsrl32      $a2, $v1, 0
    ctx->pc = 0x28bd80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x28bd84: 0x924023  subu        $t0, $a0, $s2
    ctx->pc = 0x28bd84u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_28bd88:
    // 0x28bd88: 0xdc830000  ld          $v1, 0x0($a0)
    ctx->pc = 0x28bd88u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28bd8c: 0x64c6ffff  daddiu      $a2, $a2, -0x1
    ctx->pc = 0x28bd8cu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
    // 0x28bd90: 0xdca20000  ld          $v0, 0x0($a1)
    ctx->pc = 0x28bd90u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28bd94: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x28bd94u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x28bd98: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x28bd98u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x28bd9c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x28bd9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x28bda0: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x28BDA0u;
    {
        const bool branch_taken_0x28bda0 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x28BDA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BDA0u;
            // 0x28bda4: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bda0) {
            ctx->pc = 0x28BD88u;
            runtime->cooperativeGuestYield();
            goto label_28bd88;
        }
    }
    ctx->pc = 0x28BDA8u;
    // 0x28bda8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x28BDA8u;
    {
        const bool branch_taken_0x28bda8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BDACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BDA8u;
            // 0x28bdac: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bda8) {
            ctx->pc = 0x28BDECu;
            goto label_28bdec;
        }
    }
    ctx->pc = 0x28BDB0u;
label_28bdb0:
    // 0x28bdb0: 0xdfa20020  ld          $v0, 0x20($sp)
    ctx->pc = 0x28bdb0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28bdb4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28bdb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bdb8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28bdb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bdbc: 0xb24821  addu        $t1, $a1, $s2
    ctx->pc = 0x28bdbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 18)));
    // 0x28bdc0: 0x2303e  dsrl32      $a2, $v0, 0
    ctx->pc = 0x28bdc0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x28bdc4: 0x924023  subu        $t0, $a0, $s2
    ctx->pc = 0x28bdc4u;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_28bdc8:
    // 0x28bdc8: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x28bdc8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28bdcc: 0x64c6ffff  daddiu      $a2, $a2, -0x1
    ctx->pc = 0x28bdccu;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 6) + (int64_t)(int32_t)4294967295);
    // 0x28bdd0: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x28bdd0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x28bdd4: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x28bdd4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x28bdd8: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x28bdd8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x28bddc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x28bddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x28bde0: 0x1cc0fff9  bgtz        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x28BDE0u;
    {
        const bool branch_taken_0x28bde0 = (GPR_S32(ctx, 6) > 0);
        ctx->pc = 0x28BDE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BDE0u;
            // 0x28bde4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bde0) {
            ctx->pc = 0x28BDC8u;
            runtime->cooperativeGuestYield();
            goto label_28bdc8;
        }
    }
    ctx->pc = 0x28BDE8u;
label_28bde8:
    // 0x28bde8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28bde8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28bdec:
    // 0x28bdec: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x28bdecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bdf0: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x28bdf0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bdf4: 0x1000ff92  b           . + 4 + (-0x6E << 2)
    ctx->pc = 0x28BDF4u;
    {
        const bool branch_taken_0x28bdf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BDF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BDF4u;
            // 0x28bdf8: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bdf4) {
            ctx->pc = 0x28BC40u;
            runtime->cooperativeGuestYield();
            goto label_28bc40;
        }
    }
    ctx->pc = 0x28BDFCu;
label_28bdfc:
    // 0x28bdfc: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x28bdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x28be00: 0x14800041  bnez        $a0, . + 4 + (0x41 << 2)
    ctx->pc = 0x28BE00u;
    {
        const bool branch_taken_0x28be00 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x28BE04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BE00u;
            // 0x28be04: 0x2332823  subu        $a1, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28be00) {
            ctx->pc = 0x28BF08u;
            goto label_28bf08;
        }
    }
    ctx->pc = 0x28BE08u;
    // 0x28be08: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x28be08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28be0c: 0x8fb0002c  lw          $s0, 0x2C($sp)
    ctx->pc = 0x28be0cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x28be10: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x28be10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28be14: 0x561821  addu        $v1, $v0, $s6
    ctx->pc = 0x28be14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x28be18: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x28be18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x28be1c: 0x1040009d  beqz        $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x28BE1Cu;
    {
        const bool branch_taken_0x28be1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BE20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BE1Cu;
            // 0x28be20: 0x1210c2  srl         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28be1c) {
            ctx->pc = 0x28C094u;
            goto label_28c094;
        }
    }
    ctx->pc = 0x28BE24u;
    // 0x28be24: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x28be24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x28be28: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x28be28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x28be2c: 0x2f03c  dsll32      $fp, $v0, 0
    ctx->pc = 0x28be2cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28be30: 0x12a03c  dsll32      $s4, $s2, 0
    ctx->pc = 0x28be30u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 18) << (32 + 0));
    // 0x28be34: 0x28750002  slti        $s5, $v1, 0x2
    ctx->pc = 0x28be34u;
    SET_GPR_U64(ctx, 21, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x28be38: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x28be38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28be3c: 0x0  nop
    ctx->pc = 0x28be3cu;
    // NOP
label_28be40:
    // 0x28be40: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x28BE40u;
    {
        const bool branch_taken_0x28be40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BE40u;
            // 0x28be44: 0x2129821  addu        $s3, $s0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28be40) {
            ctx->pc = 0x28BECCu;
            goto label_28becc;
        }
    }
    ctx->pc = 0x28BE48u;
label_28be48:
    // 0x28be48: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28BE48u;
    {
        const bool branch_taken_0x28be48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x28be48) {
            ctx->pc = 0x28BE64u;
            goto label_28be64;
        }
    }
    ctx->pc = 0x28BE50u;
    // 0x28be50: 0xde020000  ld          $v0, 0x0($s0)
    ctx->pc = 0x28be50u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28be54: 0xde230000  ld          $v1, 0x0($s1)
    ctx->pc = 0x28be54u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28be58: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x28be58u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
    // 0x28be5c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x28BE5Cu;
    {
        const bool branch_taken_0x28be5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BE60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BE5Cu;
            // 0x28be60: 0xfe030000  sd          $v1, 0x0($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28be5c) {
            ctx->pc = 0x28BEC8u;
            goto label_28bec8;
        }
    }
    ctx->pc = 0x28BE64u;
label_28be64:
    // 0x28be64: 0x12a0000e  beqz        $s5, . + 4 + (0xE << 2)
    ctx->pc = 0x28BE64u;
    {
        const bool branch_taken_0x28be64 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BE64u;
            // 0x28be68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28be64) {
            ctx->pc = 0x28BEA0u;
            goto label_28bea0;
        }
    }
    ctx->pc = 0x28BE6Cu;
    // 0x28be6c: 0x1e283e  dsrl32      $a1, $fp, 0
    ctx->pc = 0x28be6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 30) >> (32 + 0));
    // 0x28be70: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28be70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28be74: 0x0  nop
    ctx->pc = 0x28be74u;
    // NOP
label_28be78:
    // 0x28be78: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x28be78u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x28be7c: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x28be7cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
    // 0x28be80: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x28be80u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28be84: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x28be84u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x28be88: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x28be88u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x28be8c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x28be8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x28be90: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x28BE90u;
    {
        const bool branch_taken_0x28be90 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x28BE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BE90u;
            // 0x28be94: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28be90) {
            ctx->pc = 0x28BE78u;
            runtime->cooperativeGuestYield();
            goto label_28be78;
        }
    }
    ctx->pc = 0x28BE98u;
    // 0x28be98: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x28BE98u;
    {
        const bool branch_taken_0x28be98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BE98u;
            // 0x28be9c: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28be98) {
            ctx->pc = 0x28BECCu;
            goto label_28becc;
        }
    }
    ctx->pc = 0x28BEA0u;
label_28bea0:
    // 0x28bea0: 0x14283e  dsrl32      $a1, $s4, 0
    ctx->pc = 0x28bea0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) >> (32 + 0));
    // 0x28bea4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28bea4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28bea8:
    // 0x28bea8: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x28bea8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x28beac: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x28beacu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
    // 0x28beb0: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x28beb0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28beb4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x28beb4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x28beb8: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x28beb8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x28bebc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x28bebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x28bec0: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x28BEC0u;
    {
        const bool branch_taken_0x28bec0 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x28BEC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BEC0u;
            // 0x28bec4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bec0) {
            ctx->pc = 0x28BEA8u;
            runtime->cooperativeGuestYield();
            goto label_28bea8;
        }
    }
    ctx->pc = 0x28BEC8u;
label_28bec8:
    // 0x28bec8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x28bec8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28becc:
    // 0x28becc: 0x2d1102b  sltu        $v0, $s6, $s1
    ctx->pc = 0x28beccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x28bed0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28BED0u;
    {
        const bool branch_taken_0x28bed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BED0u;
            // 0x28bed4: 0x2328023  subu        $s0, $s1, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bed0) {
            ctx->pc = 0x28BEECu;
            goto label_28beec;
        }
    }
    ctx->pc = 0x28BED8u;
    // 0x28bed8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28bed8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bedc: 0x2e0f809  jalr        $s7
    ctx->pc = 0x28BEDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 23);
        SET_GPR_U32(ctx, 31, 0x28BEE4u);
        ctx->pc = 0x28BEE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BEDCu;
            // 0x28bee0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28BEE4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28B6E8u: goto label_28b6e8;
            case 0x28B724u: goto label_28b724;
            case 0x28B744u: goto label_28b744;
            case 0x28B788u: goto label_28b788;
            case 0x28B790u: goto label_28b790;
            case 0x28B7ACu: goto label_28b7ac;
            case 0x28B7C0u: goto label_28b7c0;
            case 0x28B7E8u: goto label_28b7e8;
            case 0x28B7F0u: goto label_28b7f0;
            case 0x28B810u: goto label_28b810;
            case 0x28B814u: goto label_28b814;
            case 0x28B834u: goto label_28b834;
            case 0x28B850u: goto label_28b850;
            case 0x28B8E4u: goto label_28b8e4;
            case 0x28B914u: goto label_28b914;
            case 0x28B918u: goto label_28b918;
            case 0x28B964u: goto label_28b964;
            case 0x28B994u: goto label_28b994;
            case 0x28B998u: goto label_28b998;
            case 0x28B9E8u: goto label_28b9e8;
            case 0x28BA18u: goto label_28ba18;
            case 0x28BA1Cu: goto label_28ba1c;
            case 0x28BA20u: goto label_28ba20;
            case 0x28BA60u: goto label_28ba60;
            case 0x28BA90u: goto label_28ba90;
            case 0x28BA94u: goto label_28ba94;
            case 0x28BA98u: goto label_28ba98;
            case 0x28BAC0u: goto label_28bac0;
            case 0x28BAE8u: goto label_28bae8;
            case 0x28BB10u: goto label_28bb10;
            case 0x28BB28u: goto label_28bb28;
            case 0x28BB48u: goto label_28bb48;
            case 0x28BB4Cu: goto label_28bb4c;
            case 0x28BB88u: goto label_28bb88;
            case 0x28BBB8u: goto label_28bbb8;
            case 0x28BBD8u: goto label_28bbd8;
            case 0x28BC00u: goto label_28bc00;
            case 0x28BC18u: goto label_28bc18;
            case 0x28BC38u: goto label_28bc38;
            case 0x28BC3Cu: goto label_28bc3c;
            case 0x28BC40u: goto label_28bc40;
            case 0x28BC64u: goto label_28bc64;
            case 0x28BC78u: goto label_28bc78;
            case 0x28BCA8u: goto label_28bca8;
            case 0x28BCC0u: goto label_28bcc0;
            case 0x28BCE8u: goto label_28bce8;
            case 0x28BCF8u: goto label_28bcf8;
            case 0x28BD18u: goto label_28bd18;
            case 0x28BD1Cu: goto label_28bd1c;
            case 0x28BD20u: goto label_28bd20;
            case 0x28BD6Cu: goto label_28bd6c;
            case 0x28BD88u: goto label_28bd88;
            case 0x28BDB0u: goto label_28bdb0;
            case 0x28BDC8u: goto label_28bdc8;
            case 0x28BDE8u: goto label_28bde8;
            case 0x28BDECu: goto label_28bdec;
            case 0x28BDFCu: goto label_28bdfc;
            case 0x28BE40u: goto label_28be40;
            case 0x28BE48u: goto label_28be48;
            case 0x28BE64u: goto label_28be64;
            case 0x28BE78u: goto label_28be78;
            case 0x28BEA0u: goto label_28bea0;
            case 0x28BEA8u: goto label_28bea8;
            case 0x28BEC8u: goto label_28bec8;
            case 0x28BECCu: goto label_28becc;
            case 0x28BEECu: goto label_28beec;
            case 0x28BF08u: goto label_28bf08;
            case 0x28BF50u: goto label_28bf50;
            case 0x28BF78u: goto label_28bf78;
            case 0x28BF88u: goto label_28bf88;
            case 0x28BFA8u: goto label_28bfa8;
            case 0x28BFACu: goto label_28bfac;
            case 0x28BFE0u: goto label_28bfe0;
            case 0x28C008u: goto label_28c008;
            case 0x28C018u: goto label_28c018;
            case 0x28C038u: goto label_28c038;
            case 0x28C03Cu: goto label_28c03c;
            case 0x28C054u: goto label_28c054;
            case 0x28C068u: goto label_28c068;
            case 0x28C06Cu: goto label_28c06c;
            case 0x28C084u: goto label_28c084;
            case 0x28C094u: goto label_28c094;
            case 0x28C098u: goto label_28c098;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28BEE4u; }
            if (ctx->pc != 0x28BEE4u) { return; }
        }
        }
    }
    ctx->pc = 0x28BEE4u;
    // 0x28bee4: 0x5c40ffd8  bgtzl       $v0, . + 4 + (-0x28 << 2)
    ctx->pc = 0x28BEE4u;
    {
        const bool branch_taken_0x28bee4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x28bee4) {
            ctx->pc = 0x28BEE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28BEE4u;
            // 0x28bee8: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28BE48u;
            runtime->cooperativeGuestYield();
            goto label_28be48;
        }
    }
    ctx->pc = 0x28BEECu;
label_28beec:
    // 0x28beec: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x28beecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x28bef0: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x28bef0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bef4: 0x203102b  sltu        $v0, $s0, $v1
    ctx->pc = 0x28bef4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x28bef8: 0x1440ffd1  bnez        $v0, . + 4 + (-0x2F << 2)
    ctx->pc = 0x28BEF8u;
    {
        const bool branch_taken_0x28bef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28BEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BEF8u;
            // 0x28befc: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bef8) {
            ctx->pc = 0x28BE40u;
            runtime->cooperativeGuestYield();
            goto label_28be40;
        }
    }
    ctx->pc = 0x28BF00u;
    // 0x28bf00: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x28BF00u;
    {
        const bool branch_taken_0x28bf00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BF00u;
            // 0x28bf04: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bf00) {
            ctx->pc = 0x28C098u;
            goto label_28c098;
        }
    }
    ctx->pc = 0x28BF08u;
label_28bf08:
    // 0x28bf08: 0x2761823  subu        $v1, $s3, $s6
    ctx->pc = 0x28bf08u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
    // 0x28bf0c: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x28bf0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x28bf10: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x28bf10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bf14: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x28bf14u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
    // 0x28bf18: 0x2908023  subu        $s0, $s4, $s0
    ctx->pc = 0x28bf18u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x28bf1c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x28bf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28bf20: 0x521018  mult        $v0, $v0, $s2
    ctx->pc = 0x28bf20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28bf24: 0x18a00020  blez        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x28BF24u;
    {
        const bool branch_taken_0x28bf24 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x28BF28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BF24u;
            // 0x28bf28: 0x56a821  addu        $s5, $v0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bf24) {
            ctx->pc = 0x28BFA8u;
            goto label_28bfa8;
        }
    }
    ctx->pc = 0x28BF2Cu;
    // 0x28bf2c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x28bf2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x28bf30: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x28bf30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x28bf34: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x28BF34u;
    {
        const bool branch_taken_0x28bf34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BF38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BF34u;
            // 0x28bf38: 0x2251823  subu        $v1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bf34) {
            ctx->pc = 0x28BF78u;
            goto label_28bf78;
        }
    }
    ctx->pc = 0x28BF3Cu;
    // 0x28bf3c: 0x510c2  srl         $v0, $a1, 3
    ctx->pc = 0x28bf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
    // 0x28bf40: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x28bf40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bf44: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x28bf44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28bf48: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x28bf48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bf4c: 0x2283e  dsrl32      $a1, $v0, 0
    ctx->pc = 0x28bf4cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
label_28bf50:
    // 0x28bf50: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x28bf50u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x28bf54: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x28bf54u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
    // 0x28bf58: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x28bf58u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28bf5c: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x28bf5cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x28bf60: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x28bf60u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x28bf64: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x28bf64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x28bf68: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x28BF68u;
    {
        const bool branch_taken_0x28bf68 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x28BF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BF68u;
            // 0x28bf6c: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bf68) {
            ctx->pc = 0x28BF50u;
            runtime->cooperativeGuestYield();
            goto label_28bf50;
        }
    }
    ctx->pc = 0x28BF70u;
    // 0x28bf70: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x28BF70u;
    {
        const bool branch_taken_0x28bf70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BF70u;
            // 0x28bf74: 0x2b41023  subu        $v0, $s5, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bf70) {
            ctx->pc = 0x28BFACu;
            goto label_28bfac;
        }
    }
    ctx->pc = 0x28BF78u;
label_28bf78:
    // 0x28bf78: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x28bf78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x28bf7c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x28bf7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bf80: 0x2283e  dsrl32      $a1, $v0, 0
    ctx->pc = 0x28bf80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x28bf84: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x28bf84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_28bf88:
    // 0x28bf88: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x28bf88u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x28bf8c: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x28bf8cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
    // 0x28bf90: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x28bf90u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28bf94: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x28bf94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x28bf98: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x28bf98u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x28bf9c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x28bf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x28bfa0: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x28BFA0u;
    {
        const bool branch_taken_0x28bfa0 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x28BFA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BFA0u;
            // 0x28bfa4: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bfa0) {
            ctx->pc = 0x28BF88u;
            runtime->cooperativeGuestYield();
            goto label_28bf88;
        }
    }
    ctx->pc = 0x28BFA8u;
label_28bfa8:
    // 0x28bfa8: 0x2b41023  subu        $v0, $s5, $s4
    ctx->pc = 0x28bfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
label_28bfac:
    // 0x28bfac: 0x522823  subu        $a1, $v0, $s2
    ctx->pc = 0x28bfacu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x28bfb0: 0x205182b  sltu        $v1, $s0, $a1
    ctx->pc = 0x28bfb0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x28bfb4: 0x203280b  movn        $a1, $s0, $v1
    ctx->pc = 0x28bfb4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 16));
    // 0x28bfb8: 0x18a0001f  blez        $a1, . + 4 + (0x1F << 2)
    ctx->pc = 0x28BFB8u;
    {
        const bool branch_taken_0x28bfb8 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x28BFBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BFB8u;
            // 0x28bfbc: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bfb8) {
            ctx->pc = 0x28C038u;
            goto label_28c038;
        }
    }
    ctx->pc = 0x28BFC0u;
    // 0x28bfc0: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x28bfc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x28bfc4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x28BFC4u;
    {
        const bool branch_taken_0x28bfc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BFC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BFC4u;
            // 0x28bfc8: 0x2a51823  subu        $v1, $s5, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bfc4) {
            ctx->pc = 0x28C008u;
            goto label_28c008;
        }
    }
    ctx->pc = 0x28BFCCu;
    // 0x28bfcc: 0x510c2  srl         $v0, $a1, 3
    ctx->pc = 0x28bfccu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
    // 0x28bfd0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28bfd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bfd4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x28bfd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28bfd8: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x28bfd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bfdc: 0x2283e  dsrl32      $a1, $v0, 0
    ctx->pc = 0x28bfdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
label_28bfe0:
    // 0x28bfe0: 0xdcc30000  ld          $v1, 0x0($a2)
    ctx->pc = 0x28bfe0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x28bfe4: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x28bfe4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
    // 0x28bfe8: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x28bfe8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28bfec: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x28bfecu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
    // 0x28bff0: 0xfcc20000  sd          $v0, 0x0($a2)
    ctx->pc = 0x28bff0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 2));
    // 0x28bff4: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x28bff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x28bff8: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x28BFF8u;
    {
        const bool branch_taken_0x28bff8 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x28BFFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BFF8u;
            // 0x28bffc: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bff8) {
            ctx->pc = 0x28BFE0u;
            runtime->cooperativeGuestYield();
            goto label_28bfe0;
        }
    }
    ctx->pc = 0x28C000u;
    // 0x28c000: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x28C000u;
    {
        const bool branch_taken_0x28c000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C000u;
            // 0x28c004: 0xe0282d  daddu       $a1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c000) {
            ctx->pc = 0x28C03Cu;
            goto label_28c03c;
        }
    }
    ctx->pc = 0x28C008u;
label_28c008:
    // 0x28c008: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x28c008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x28c00c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c010: 0x2283e  dsrl32      $a1, $v0, 0
    ctx->pc = 0x28c010u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x28c014: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x28c014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_28c018:
    // 0x28c018: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x28c018u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x28c01c: 0x64a5ffff  daddiu      $a1, $a1, -0x1
    ctx->pc = 0x28c01cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)4294967295);
    // 0x28c020: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x28c020u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28c024: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x28c024u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x28c028: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x28c028u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x28c02c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x28c02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x28c030: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x28C030u;
    {
        const bool branch_taken_0x28c030 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x28C034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C030u;
            // 0x28c034: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c030) {
            ctx->pc = 0x28C018u;
            runtime->cooperativeGuestYield();
            goto label_28c018;
        }
    }
    ctx->pc = 0x28C038u;
label_28c038:
    // 0x28c038: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x28c038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_28c03c:
    // 0x28c03c: 0x245102b  sltu        $v0, $s2, $a1
    ctx->pc = 0x28c03cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x28c040: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x28C040u;
    {
        const bool branch_taken_0x28c040 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c040) {
            ctx->pc = 0x28C044u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28C040u;
            // 0x28c044: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28C06Cu;
            goto label_28c06c;
        }
    }
    ctx->pc = 0x28C048u;
    // 0x28c048: 0xb2001b  divu        $zero, $a1, $s2
    ctx->pc = 0x28c048u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x28c04c: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x28C04Cu;
    {
        const bool branch_taken_0x28c04c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c04c) {
            ctx->pc = 0x28C050u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28C04Cu;
            // 0x28c050: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x28C054u;
            goto label_28c054;
        }
    }
    ctx->pc = 0x28C054u;
label_28c054:
    // 0x28c054: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x28c054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c058: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28c058u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c05c: 0x2812  mflo        $a1
    ctx->pc = 0x28c05cu;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x28c060: 0xc0a2dba  jal         func_28B6E8
    ctx->pc = 0x28C060u;
    SET_GPR_U32(ctx, 31, 0x28C068u);
    ctx->pc = 0x28C064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C060u;
            // 0x28c064: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B6E8u;
    runtime->cooperativeGuestYield();
    goto label_28b6e8;
    ctx->pc = 0x28C068u;
label_28c068:
    // 0x28c068: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28c068u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28c06c:
    // 0x28c06c: 0x245102b  sltu        $v0, $s2, $a1
    ctx->pc = 0x28c06cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x28c070: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28C070u;
    {
        const bool branch_taken_0x28c070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C070u;
            // 0x28c074: 0x7bb000e0  lq          $s0, 0xE0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c070) {
            ctx->pc = 0x28C098u;
            goto label_28c098;
        }
    }
    ctx->pc = 0x28C078u;
    // 0x28c078: 0xb2001b  divu        $zero, $a1, $s2
    ctx->pc = 0x28c078u;
    { uint32_t divisor = GPR_U32(ctx, 18); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x28c07c: 0x52400001  beql        $s2, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x28C07Cu;
    {
        const bool branch_taken_0x28c07c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c07c) {
            ctx->pc = 0x28C080u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28C07Cu;
            // 0x28c080: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x28C084u;
            goto label_28c084;
        }
    }
    ctx->pc = 0x28C084u;
label_28c084:
    // 0x28c084: 0x2a5b023  subu        $s6, $s5, $a1
    ctx->pc = 0x28c084u;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    // 0x28c088: 0x1012  mflo        $v0
    ctx->pc = 0x28c088u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x28c08c: 0x1000fda5  b           . + 4 + (-0x25B << 2)
    ctx->pc = 0x28C08Cu;
    {
        const bool branch_taken_0x28c08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C08Cu;
            // 0x28c090: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c08c) {
            ctx->pc = 0x28B724u;
            runtime->cooperativeGuestYield();
            goto label_28b724;
        }
    }
    ctx->pc = 0x28C094u;
label_28c094:
    // 0x28c094: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x28c094u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_28c098:
    // 0x28c098: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x28c098u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x28c09c: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x28c09cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x28c0a0: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x28c0a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x28c0a4: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x28c0a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28c0a8: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x28c0a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28c0ac: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x28c0acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28c0b0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x28c0b0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28c0b4: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x28c0b4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28c0b8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x28c0b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28c0bc: 0x3e00008  jr          $ra
    ctx->pc = 0x28C0BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C0C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C0BCu;
            // 0x28c0c0: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28B6E8u: goto label_28b6e8;
            case 0x28B724u: goto label_28b724;
            case 0x28B744u: goto label_28b744;
            case 0x28B788u: goto label_28b788;
            case 0x28B790u: goto label_28b790;
            case 0x28B7ACu: goto label_28b7ac;
            case 0x28B7C0u: goto label_28b7c0;
            case 0x28B7E8u: goto label_28b7e8;
            case 0x28B7F0u: goto label_28b7f0;
            case 0x28B810u: goto label_28b810;
            case 0x28B814u: goto label_28b814;
            case 0x28B834u: goto label_28b834;
            case 0x28B850u: goto label_28b850;
            case 0x28B8E4u: goto label_28b8e4;
            case 0x28B914u: goto label_28b914;
            case 0x28B918u: goto label_28b918;
            case 0x28B964u: goto label_28b964;
            case 0x28B994u: goto label_28b994;
            case 0x28B998u: goto label_28b998;
            case 0x28B9E8u: goto label_28b9e8;
            case 0x28BA18u: goto label_28ba18;
            case 0x28BA1Cu: goto label_28ba1c;
            case 0x28BA20u: goto label_28ba20;
            case 0x28BA60u: goto label_28ba60;
            case 0x28BA90u: goto label_28ba90;
            case 0x28BA94u: goto label_28ba94;
            case 0x28BA98u: goto label_28ba98;
            case 0x28BAC0u: goto label_28bac0;
            case 0x28BAE8u: goto label_28bae8;
            case 0x28BB10u: goto label_28bb10;
            case 0x28BB28u: goto label_28bb28;
            case 0x28BB48u: goto label_28bb48;
            case 0x28BB4Cu: goto label_28bb4c;
            case 0x28BB88u: goto label_28bb88;
            case 0x28BBB8u: goto label_28bbb8;
            case 0x28BBD8u: goto label_28bbd8;
            case 0x28BC00u: goto label_28bc00;
            case 0x28BC18u: goto label_28bc18;
            case 0x28BC38u: goto label_28bc38;
            case 0x28BC3Cu: goto label_28bc3c;
            case 0x28BC40u: goto label_28bc40;
            case 0x28BC64u: goto label_28bc64;
            case 0x28BC78u: goto label_28bc78;
            case 0x28BCA8u: goto label_28bca8;
            case 0x28BCC0u: goto label_28bcc0;
            case 0x28BCE8u: goto label_28bce8;
            case 0x28BCF8u: goto label_28bcf8;
            case 0x28BD18u: goto label_28bd18;
            case 0x28BD1Cu: goto label_28bd1c;
            case 0x28BD20u: goto label_28bd20;
            case 0x28BD6Cu: goto label_28bd6c;
            case 0x28BD88u: goto label_28bd88;
            case 0x28BDB0u: goto label_28bdb0;
            case 0x28BDC8u: goto label_28bdc8;
            case 0x28BDE8u: goto label_28bde8;
            case 0x28BDECu: goto label_28bdec;
            case 0x28BDFCu: goto label_28bdfc;
            case 0x28BE40u: goto label_28be40;
            case 0x28BE48u: goto label_28be48;
            case 0x28BE64u: goto label_28be64;
            case 0x28BE78u: goto label_28be78;
            case 0x28BEA0u: goto label_28bea0;
            case 0x28BEA8u: goto label_28bea8;
            case 0x28BEC8u: goto label_28bec8;
            case 0x28BECCu: goto label_28becc;
            case 0x28BEECu: goto label_28beec;
            case 0x28BF08u: goto label_28bf08;
            case 0x28BF50u: goto label_28bf50;
            case 0x28BF78u: goto label_28bf78;
            case 0x28BF88u: goto label_28bf88;
            case 0x28BFA8u: goto label_28bfa8;
            case 0x28BFACu: goto label_28bfac;
            case 0x28BFE0u: goto label_28bfe0;
            case 0x28C008u: goto label_28c008;
            case 0x28C018u: goto label_28c018;
            case 0x28C038u: goto label_28c038;
            case 0x28C03Cu: goto label_28c03c;
            case 0x28C054u: goto label_28c054;
            case 0x28C068u: goto label_28c068;
            case 0x28C06Cu: goto label_28c06c;
            case 0x28C084u: goto label_28c084;
            case 0x28C094u: goto label_28c094;
            case 0x28C098u: goto label_28c098;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28C0C4u;
    // 0x28c0c4: 0x0  nop
    ctx->pc = 0x28c0c4u;
    // NOP
}
