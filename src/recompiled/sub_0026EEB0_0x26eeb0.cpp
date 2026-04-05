#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026EEB0
// Address: 0x26eeb0 - 0x26f080
void sub_0026EEB0_0x26eeb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026EEB0_0x26eeb0");
#endif

    ctx->pc = 0x26eeb0u;

    // 0x26eeb0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x26eeb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x26eeb4: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x26eeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x26eeb8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x26eeb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x26eebc: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x26eebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x26eec0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x26eec0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eec4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x26eec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x26eec8: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x26eec8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x26eecc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x26eeccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eed0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x26eed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x26eed4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26eed4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eed8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x26eed8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x26eedc: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x26eedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x26eee0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x26eee0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26eee4: 0x2221018  mult        $v0, $s1, $v0
    ctx->pc = 0x26eee4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x26eee8: 0x24140020  addiu       $s4, $zero, 0x20
    ctx->pc = 0x26eee8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x26eeec: 0x68a00a  movz        $s4, $v1, $t0
    ctx->pc = 0x26eeecu;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
    // 0x26eef0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x26eef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x26eef4: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x26eef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x26eef8: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x26eef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x26eefc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x26eefcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x26ef00: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x26ef00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x26ef04: 0xc0a5164  jal         func_294590
    ctx->pc = 0x26EF04u;
    SET_GPR_U32(ctx, 31, 0x26EF0Cu);
    ctx->pc = 0x26EF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26EF04u;
            // 0x26ef08: 0x2445ffff  addiu       $a1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294590u;
    if (runtime->hasFunction(0x294590u)) {
        auto targetFn = runtime->lookupFunction(0x294590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EF0Cu; }
        if (ctx->pc != 0x26EF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00294590_0x294590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26EF0Cu; }
        if (ctx->pc != 0x26EF0Cu) { return; }
    }
    ctx->pc = 0x26EF0Cu;
    // 0x26ef0c: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x26ef0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x26ef10: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x26ef10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26ef14: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x26ef14u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x26ef18: 0x2404007f  addiu       $a0, $zero, 0x7F
    ctx->pc = 0x26ef18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x26ef1c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x26ef1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x26ef20: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x26ef20u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x26ef24: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x26ef24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x26ef28: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x26ef28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x26ef2c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x26ef2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x26ef30: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x26ef30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x26ef34: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x26ef34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x26ef38: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x26ef38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x26ef3c: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x26ef3cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x26ef40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x26ef40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26ef44: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x26ef44u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x26ef48: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x26ef48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x26ef4c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x26ef4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x26ef50: 0x34630010  ori         $v1, $v1, 0x10
    ctx->pc = 0x26ef50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)16);
    // 0x26ef54: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x26ef54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x26ef58: 0x24020052  addiu       $v0, $zero, 0x52
    ctx->pc = 0x26ef58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
    // 0x26ef5c: 0xfe040008  sd          $a0, 0x8($s0)
    ctx->pc = 0x26ef5cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 4));
    // 0x26ef60: 0xfe000000  sd          $zero, 0x0($s0)
    ctx->pc = 0x26ef60u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 0));
    // 0x26ef64: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x26ef64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x26ef68: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x26ef68u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x26ef6c: 0xfe020008  sd          $v0, 0x8($s0)
    ctx->pc = 0x26ef6cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 2));
    // 0x26ef70: 0x12400038  beqz        $s2, . + 4 + (0x38 << 2)
    ctx->pc = 0x26EF70u;
    {
        const bool branch_taken_0x26ef70 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26EF70u;
            // 0x26ef74: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ef70) {
            ctx->pc = 0x26F054u;
            goto label_26f054;
        }
    }
    ctx->pc = 0x26EF78u;
label_26ef78:
    // 0x26ef78: 0x12200032  beqz        $s1, . + 4 + (0x32 << 2)
    ctx->pc = 0x26EF78u;
    {
        const bool branch_taken_0x26ef78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x26EF7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26EF78u;
            // 0x26ef7c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ef78) {
            ctx->pc = 0x26F044u;
            goto label_26f044;
        }
    }
    ctx->pc = 0x26EF80u;
label_26ef80:
    // 0x26ef80: 0x2622ffff  addiu       $v0, $s1, -0x1
    ctx->pc = 0x26ef80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x26ef84: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26EF84u;
    {
        const bool branch_taken_0x26ef84 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x26EF88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26EF84u;
            // 0x26ef88: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26ef84) {
            ctx->pc = 0x26EF98u;
            goto label_26ef98;
        }
    }
    ctx->pc = 0x26EF8Cu;
    // 0x26ef8c: 0x2642ffff  addiu       $v0, $s2, -0x1
    ctx->pc = 0x26ef8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x26ef90: 0xe21026  xor         $v0, $a3, $v0
    ctx->pc = 0x26ef90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ GPR_U64(ctx, 2));
    // 0x26ef94: 0x2c480001  sltiu       $t0, $v0, 0x1
    ctx->pc = 0x26ef94u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_26ef98:
    // 0x26ef98: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x26ef98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x26ef9c: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x26ef9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x26efa0: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x26efa0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x26efa4: 0x61900  sll         $v1, $a2, 4
    ctx->pc = 0x26efa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x26efa8: 0xa2040003  sb          $a0, 0x3($s0)
    ctx->pc = 0x26efa8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x26efac: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x26efacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x26efb0: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x26efb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x26efb4: 0x34a50002  ori         $a1, $a1, 0x2
    ctx->pc = 0x26efb4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x26efb8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x26efb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x26efbc: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x26efbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x26efc0: 0x71100  sll         $v0, $a3, 4
    ctx->pc = 0x26efc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x26efc4: 0xfe050000  sd          $a1, 0x0($s0)
    ctx->pc = 0x26efc4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 5));
    // 0x26efc8: 0xfe040008  sd          $a0, 0x8($s0)
    ctx->pc = 0x26efc8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 4));
    // 0x26efcc: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x26efccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x26efd0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x26efd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x26efd4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x26efd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x26efd8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x26efd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x26efdc: 0x24040051  addiu       $a0, $zero, 0x51
    ctx->pc = 0x26efdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x26efe0: 0xfe030000  sd          $v1, 0x0($s0)
    ctx->pc = 0x26efe0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 3));
    // 0x26efe4: 0x813f8  dsll        $v0, $t0, 15
    ctx->pc = 0x26efe4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) << 15);
    // 0x26efe8: 0xfe040008  sd          $a0, 0x8($s0)
    ctx->pc = 0x26efe8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 4));
    // 0x26efec: 0x24030053  addiu       $v1, $zero, 0x53
    ctx->pc = 0x26efecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x26eff0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x26eff0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x26eff4: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x26eff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x26eff8: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x26eff8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x26effc: 0x142100  sll         $a0, $s4, 4
    ctx->pc = 0x26effcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 4));
    // 0x26f000: 0xfe000000  sd          $zero, 0x0($s0)
    ctx->pc = 0x26f000u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 0));
    // 0x26f004: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x26f004u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x26f008: 0x31b3c  dsll32      $v1, $v1, 12
    ctx->pc = 0x26f008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 12));
    // 0x26f00c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x26f00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x26f010: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x26f010u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x26f014: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x26f014u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x26f018: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x26f018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x26f01c: 0xfe000008  sd          $zero, 0x8($s0)
    ctx->pc = 0x26f01cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 0));
    // 0x26f020: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x26f020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x26f024: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x26f024u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x26f028: 0xd1102b  sltu        $v0, $a2, $s1
    ctx->pc = 0x26f028u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x26f02c: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x26f02cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
    // 0x26f030: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x26f030u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x26f034: 0x2649821  addu        $s3, $s3, $a0
    ctx->pc = 0x26f034u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
    // 0x26f038: 0xa6140000  sh          $s4, 0x0($s0)
    ctx->pc = 0x26f038u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 20));
    // 0x26f03c: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x26F03Cu;
    {
        const bool branch_taken_0x26f03c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F03Cu;
            // 0x26f040: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f03c) {
            ctx->pc = 0x26EF80u;
            runtime->cooperativeGuestYield();
            goto label_26ef80;
        }
    }
    ctx->pc = 0x26F044u;
label_26f044:
    // 0x26f044: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x26f044u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x26f048: 0xf2102b  sltu        $v0, $a3, $s2
    ctx->pc = 0x26f048u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x26f04c: 0x1440ffca  bnez        $v0, . + 4 + (-0x36 << 2)
    ctx->pc = 0x26F04Cu;
    {
        const bool branch_taken_0x26f04c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26f04c) {
            ctx->pc = 0x26EF78u;
            runtime->cooperativeGuestYield();
            goto label_26ef78;
        }
    }
    ctx->pc = 0x26F054u;
label_26f054:
    // 0x26f054: 0x24020060  addiu       $v0, $zero, 0x60
    ctx->pc = 0x26f054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x26f058: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x26f058u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x26f05c: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x26f05cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x26f060: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x26f060u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26f064: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x26f064u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26f068: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x26f068u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26f06c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x26f06cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26f070: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x26f070u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26f074: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26f074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26f078: 0x3e00008  jr          $ra
    ctx->pc = 0x26F078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F078u;
            // 0x26f07c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26EF78u: goto label_26ef78;
            case 0x26EF80u: goto label_26ef80;
            case 0x26EF98u: goto label_26ef98;
            case 0x26F044u: goto label_26f044;
            case 0x26F054u: goto label_26f054;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26F080u;
}
