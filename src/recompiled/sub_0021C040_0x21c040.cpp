#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021C040
// Address: 0x21c040 - 0x21c338
void sub_0021C040_0x21c040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C040_0x21c040");
#endif

    ctx->pc = 0x21c040u;

    // 0x21c040: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x21c040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x21c044: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x21c044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x21c048: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x21c048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x21c04c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x21c04cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c050: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x21c050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x21c054: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21c054u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c058: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x21c058u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c05c: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x21c05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x21c060: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x21c060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x21c064: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x21c064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x21c068: 0xae500080  sw          $s0, 0x80($s2)
    ctx->pc = 0x21c068u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 128), GPR_U32(ctx, 16));
    // 0x21c06c: 0x4be0006c  vsub.xyzw   $vf1, $vf0, $vf0
    ctx->pc = 0x21c06cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x21c070: 0xfa410000  sqc2        $vf1, 0x0($s2)
    ctx->pc = 0x21c070u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x21c074: 0xfa410010  sqc2        $vf1, 0x10($s2)
    ctx->pc = 0x21c074u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x21c078: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x21c078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x21c07c: 0xae400090  sw          $zero, 0x90($s2)
    ctx->pc = 0x21c07cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 144), GPR_U32(ctx, 0));
    // 0x21c080: 0xae54008c  sw          $s4, 0x8C($s2)
    ctx->pc = 0x21c080u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 140), GPR_U32(ctx, 20));
    // 0x21c084: 0xae430084  sw          $v1, 0x84($s2)
    ctx->pc = 0x21c084u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 3));
    // 0x21c088: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x21c088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x21c08c: 0x8c42ec94  lw          $v0, -0x136C($v0)
    ctx->pc = 0x21c08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962324)));
    // 0x21c090: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21c090u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21c094: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21c094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21c098: 0x8c4500c0  lw          $a1, 0xC0($v0)
    ctx->pc = 0x21c098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x21c09c: 0x10a00014  beqz        $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x21C09Cu;
    {
        const bool branch_taken_0x21c09c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C0A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C09Cu;
            // 0x21c0a0: 0x2ca20001  sltiu       $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c09c) {
            ctx->pc = 0x21C0F0u;
            goto label_21c0f0;
        }
    }
    ctx->pc = 0x21C0A4u;
    // 0x21c0a4: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x21C0A4u;
    {
        const bool branch_taken_0x21c0a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21c0a4) {
            ctx->pc = 0x21C0A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21C0A4u;
            // 0x21c0a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21C0B8u;
            goto label_21c0b8;
        }
    }
    ctx->pc = 0x21C0ACu;
    // 0x21c0ac: 0x24a2ffec  addiu       $v0, $a1, -0x14
    ctx->pc = 0x21c0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967276));
    // 0x21c0b0: 0x5100a  movz        $v0, $zero, $a1
    ctx->pc = 0x21c0b0u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x21c0b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21c0b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21c0b8:
    // 0x21c0b8: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x21c0b8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x21c0bc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x21c0bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x21c0c0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x21C0C0u;
    {
        const bool branch_taken_0x21c0c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C0C0u;
            // 0x21c0c4: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c0c0) {
            ctx->pc = 0x21C0F0u;
            goto label_21c0f0;
        }
    }
    ctx->pc = 0x21C0C8u;
    // 0x21c0c8: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x21c0c8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21c0cc: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x21c0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x21c0d0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21c0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x21c0d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x21c0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21c0d8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x21c0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21c0dc: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x21c0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x21c0e0: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x21c0e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x21c0e4: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x21c0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x21c0e8: 0x40f809  jalr        $v0
    ctx->pc = 0x21C0E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21C0F0u);
        ctx->pc = 0x21C0ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C0E8u;
            // 0x21c0ec: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x21C0F0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21C0B8u: goto label_21c0b8;
            case 0x21C0F0u: goto label_21c0f0;
            case 0x21C178u: goto label_21c178;
            case 0x21C180u: goto label_21c180;
            case 0x21C1A8u: goto label_21c1a8;
            case 0x21C1ACu: goto label_21c1ac;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x21C0F0u; }
            if (ctx->pc != 0x21C0F0u) { return; }
        }
        }
    }
    ctx->pc = 0x21C0F0u;
label_21c0f0:
    // 0x21c0f0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x21c0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21c0f4: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x21c0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x21c0f8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21c0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21c0fc: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x21c0fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x21c100: 0x2442e4c0  addiu       $v0, $v0, -0x1B40
    ctx->pc = 0x21c100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960320));
    // 0x21c104: 0x629821  addu        $s3, $v1, $v0
    ctx->pc = 0x21c104u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x21c108: 0xc05e996  jal         func_17A658
    ctx->pc = 0x21C108u;
    SET_GPR_U32(ctx, 31, 0x21C110u);
    ctx->pc = 0x21C10Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C108u;
            // 0x21c10c: 0x8e64000c  lw          $a0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A658u;
    if (runtime->hasFunction(0x17A658u)) {
        auto targetFn = runtime->lookupFunction(0x17A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C110u; }
        if (ctx->pc != 0x21C110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A658_0x17a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C110u; }
        if (ctx->pc != 0x21C110u) { return; }
    }
    ctx->pc = 0x21C110u;
    // 0x21c110: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x21c110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c114: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x21C114u;
    {
        const bool branch_taken_0x21c114 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C114u;
            // 0x21c118: 0x3c110033  lui         $s1, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c114) {
            ctx->pc = 0x21C178u;
            goto label_21c178;
        }
    }
    ctx->pc = 0x21C11Cu;
    // 0x21c11c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x21c11cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21c120: 0x2631e848  addiu       $s1, $s1, -0x17B8
    ctx->pc = 0x21c120u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961224));
    // 0x21c124: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21c124u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21c128: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x21c128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x21c12c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21c12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21c130: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x21c130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x21c134: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x21c134u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x21c138: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x21c138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x21c13c: 0x40f809  jalr        $v0
    ctx->pc = 0x21C13Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21C144u);
        ctx->pc = 0x21C140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C13Cu;
            // 0x21c140: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x21C144u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21C0B8u: goto label_21c0b8;
            case 0x21C0F0u: goto label_21c0f0;
            case 0x21C178u: goto label_21c178;
            case 0x21C180u: goto label_21c180;
            case 0x21C1A8u: goto label_21c1a8;
            case 0x21C1ACu: goto label_21c1ac;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x21C144u; }
            if (ctx->pc != 0x21C144u) { return; }
        }
        }
    }
    ctx->pc = 0x21C144u;
    // 0x21c144: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x21c144u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c148: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x21c148u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x21c14c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21c14cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21c150: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x21c150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x21c154: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21c154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c158: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21c158u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x21c15c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x21c15cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x21c160: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x21c160u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x21c164: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x21c164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x21c168: 0x40f809  jalr        $v0
    ctx->pc = 0x21C168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21C170u);
        ctx->pc = 0x21C16Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C168u;
            // 0x21c16c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x21C170u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21C0B8u: goto label_21c0b8;
            case 0x21C0F0u: goto label_21c0f0;
            case 0x21C178u: goto label_21c178;
            case 0x21C180u: goto label_21c180;
            case 0x21C1A8u: goto label_21c1a8;
            case 0x21C1ACu: goto label_21c1ac;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x21C170u; }
            if (ctx->pc != 0x21C170u) { return; }
        }
        }
    }
    ctx->pc = 0x21C170u;
    // 0x21c170: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21C170u;
    {
        const bool branch_taken_0x21c170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C170u;
            // 0x21c174: 0xae500084  sw          $s0, 0x84($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c170) {
            ctx->pc = 0x21C180u;
            goto label_21c180;
        }
    }
    ctx->pc = 0x21C178u;
label_21c178:
    // 0x21c178: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21c178u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c17c: 0xae500084  sw          $s0, 0x84($s2)
    ctx->pc = 0x21c17cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 16));
label_21c180:
    // 0x21c180: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x21c180u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x21c184: 0x8c42eca4  lw          $v0, -0x135C($v0)
    ctx->pc = 0x21c184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962340)));
    // 0x21c188: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21c188u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x21c18c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x21c18cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x21c190: 0x8c5000c0  lw          $s0, 0xC0($v0)
    ctx->pc = 0x21c190u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x21c194: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x21C194u;
    {
        const bool branch_taken_0x21c194 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C194u;
            // 0x21c198: 0x2602ffec  addiu       $v0, $s0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c194) {
            ctx->pc = 0x21C1A8u;
            goto label_21c1a8;
        }
    }
    ctx->pc = 0x21C19Cu;
    // 0x21c19c: 0x10100a  movz        $v0, $zero, $s0
    ctx->pc = 0x21c19cu;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x21c1a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21C1A0u;
    {
        const bool branch_taken_0x21c1a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C1A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C1A0u;
            // 0x21c1a4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c1a0) {
            ctx->pc = 0x21C1ACu;
            goto label_21c1ac;
        }
    }
    ctx->pc = 0x21C1A8u;
label_21c1a8:
    // 0x21c1a8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x21c1a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21c1ac:
    // 0x21c1ac: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x21c1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x21c1b0: 0x8e840018  lw          $a0, 0x18($s4)
    ctx->pc = 0x21c1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x21c1b4: 0x8e450084  lw          $a1, 0x84($s2)
    ctx->pc = 0x21c1b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    // 0x21c1b8: 0xae020180  sw          $v0, 0x180($s0)
    ctx->pc = 0x21c1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 2));
    // 0x21c1bc: 0xae120184  sw          $s2, 0x184($s0)
    ctx->pc = 0x21c1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 388), GPR_U32(ctx, 18));
    // 0x21c1c0: 0xc04c492  jal         func_131248
    ctx->pc = 0x21C1C0u;
    SET_GPR_U32(ctx, 31, 0x21C1C8u);
    ctx->pc = 0x21C1C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21C1C0u;
            // 0x21c1c4: 0xae500088  sw          $s0, 0x88($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 136), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131248u;
    if (runtime->hasFunction(0x131248u)) {
        auto targetFn = runtime->lookupFunction(0x131248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C1C8u; }
        if (ctx->pc != 0x21C1C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_131248_0x131288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21C1C8u; }
        if (ctx->pc != 0x21C1C8u) { return; }
    }
    ctx->pc = 0x21C1C8u;
    // 0x21c1c8: 0xc6600010  lwc1        $f0, 0x10($s3)
    ctx->pc = 0x21c1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21c1cc: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x21c1ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x21c1d0: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x21c1d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x21c1d4: 0x44813000  mtc1        $at, $f6
    ctx->pc = 0x21c1d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x21c1d8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x21c1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21c1dc: 0xdc82bdf8  ld          $v0, -0x4208($a0)
    ctx->pc = 0x21c1dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 4294950392)));
    // 0x21c1e0: 0x46060002  mul.s       $f0, $f0, $f6
    ctx->pc = 0x21c1e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[6]);
    // 0x21c1e4: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x21c1e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x21c1e8: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x21c1e8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x21c1ec: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x21c1ecu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x21c1f0: 0x8e430084  lw          $v1, 0x84($s2)
    ctx->pc = 0x21c1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
    // 0x21c1f4: 0xfc82bdf8  sd          $v0, -0x4208($a0)
    ctx->pc = 0x21c1f4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 4294950392), GPR_U64(ctx, 2));
    // 0x21c1f8: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x21c1f8u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
    // 0x21c1fc: 0xfc620068  sd          $v0, 0x68($v1)
    ctx->pc = 0x21c1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 104), GPR_U64(ctx, 2));
    // 0x21c200: 0xa4650060  sh          $a1, 0x60($v1)
    ctx->pc = 0x21c200u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 96), (uint16_t)GPR_U32(ctx, 5));
    // 0x21c204: 0xe6400094  swc1        $f0, 0x94($s2)
    ctx->pc = 0x21c204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 148), bits); }
    // 0x21c208: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x21c208u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x21c20c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x21c20cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x21c210: 0x70422389  pcpyld      $a0, $v0, $v0
    ctx->pc = 0x21c210u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x21c214: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x21c214u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c218: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x21c218u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x21c21c: 0x70e21b89  pcpyld      $v1, $a3, $v0
    ctx->pc = 0x21c21cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 2)));
    // 0x21c220: 0x70641cc8  ppacw       $v1, $v1, $a0
    ctx->pc = 0x21c220u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x21c224: 0x7e430030  sq          $v1, 0x30($s2)
    ctx->pc = 0x21c224u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 48), GPR_VEC(ctx, 3));
    // 0x21c228: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x21c228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x21c22c: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x21c22cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x21c230: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x21c230u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x21c234: 0x70421b89  pcpyld      $v1, $v0, $v0
    ctx->pc = 0x21c234u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 2)));
    // 0x21c238: 0x70e21389  pcpyld      $v0, $a3, $v0
    ctx->pc = 0x21c238u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 2)));
    // 0x21c23c: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x21c23cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x21c240: 0x8e440080  lw          $a0, 0x80($s2)
    ctx->pc = 0x21c240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x21c244: 0x7e420040  sq          $v0, 0x40($s2)
    ctx->pc = 0x21c244u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 64), GPR_VEC(ctx, 2));
    // 0x21c248: 0x8e43008c  lw          $v1, 0x8C($s2)
    ctx->pc = 0x21c248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
    // 0x21c24c: 0x7fa20050  sq          $v0, 0x50($sp)
    ctx->pc = 0x21c24cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 2));
    // 0x21c250: 0xc4850018  lwc1        $f5, 0x18($a0)
    ctx->pc = 0x21c250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x21c254: 0xc4840010  lwc1        $f4, 0x10($a0)
    ctx->pc = 0x21c254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x21c258: 0xc4830014  lwc1        $f3, 0x14($a0)
    ctx->pc = 0x21c258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x21c25c: 0x46062942  mul.s       $f5, $f5, $f6
    ctx->pc = 0x21c25cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[6]);
    // 0x21c260: 0x46062102  mul.s       $f4, $f4, $f6
    ctx->pc = 0x21c260u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[6]);
    // 0x21c264: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x21c264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x21c268: 0x460618c2  mul.s       $f3, $f3, $f6
    ctx->pc = 0x21c268u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[6]);
    // 0x21c26c: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x21c26cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x21c270: 0x46022942  mul.s       $f5, $f5, $f2
    ctx->pc = 0x21c270u;
    ctx->f[5] = FPU_MUL_S(ctx->f[5], ctx->f[2]);
    // 0x21c274: 0x46022102  mul.s       $f4, $f4, $f2
    ctx->pc = 0x21c274u;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x21c278: 0xd8620050  lqc2        $vf2, 0x50($v1)
    ctx->pc = 0x21c278u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x21c27c: 0x460218c2  mul.s       $f3, $f3, $f2
    ctx->pc = 0x21c27cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[2]);
    // 0x21c280: 0x46002887  neg.s       $f2, $f5
    ctx->pc = 0x21c280u;
    ctx->f[2] = FPU_NEG_S(ctx->f[5]);
    // 0x21c284: 0x46002047  neg.s       $f1, $f4
    ctx->pc = 0x21c284u;
    ctx->f[1] = FPU_NEG_S(ctx->f[4]);
    // 0x21c288: 0xfa420050  sqc2        $vf2, 0x50($s2)
    ctx->pc = 0x21c288u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x21c28c: 0x46001807  neg.s       $f0, $f3
    ctx->pc = 0x21c28cu;
    ctx->f[0] = FPU_NEG_S(ctx->f[3]);
    // 0x21c290: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x21c290u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x21c294: 0x44060800  mfc1        $a2, $f1
    ctx->pc = 0x21c294u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x21c298: 0x70461b89  pcpyld      $v1, $v0, $a2
    ctx->pc = 0x21c298u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x21c29c: 0x44061000  mfc1        $a2, $f2
    ctx->pc = 0x21c29cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x21c2a0: 0x70e61389  pcpyld      $v0, $a3, $a2
    ctx->pc = 0x21c2a0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 6)));
    // 0x21c2a4: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x21c2a4u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x21c2a8: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x21c2a8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x21c2ac: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x21c2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x21c2b0: 0x4be31068  vadd.xyzw   $vf1, $vf2, $vf3
    ctx->pc = 0x21c2b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x21c2b4: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x21c2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x21c2b8: 0xfa410060  sqc2        $vf1, 0x60($s2)
    ctx->pc = 0x21c2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 96), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x21c2bc: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x21c2bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x21c2c0: 0x44062000  mfc1        $a2, $f4
    ctx->pc = 0x21c2c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x21c2c4: 0x70461b89  pcpyld      $v1, $v0, $a2
    ctx->pc = 0x21c2c4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x21c2c8: 0x44062800  mfc1        $a2, $f5
    ctx->pc = 0x21c2c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x21c2cc: 0x70e61389  pcpyld      $v0, $a3, $a2
    ctx->pc = 0x21c2ccu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 6)));
    // 0x21c2d0: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x21c2d0u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x21c2d4: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x21c2d4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x21c2d8: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x21c2d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x21c2dc: 0x4be110a8  vadd.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x21c2dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x21c2e0: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x21c2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x21c2e4: 0xfa420070  sqc2        $vf2, 0x70($s2)
    ctx->pc = 0x21c2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 112), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x21c2e8: 0x86640000  lh          $a0, 0x0($s3)
    ctx->pc = 0x21c2e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x21c2ec: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x21c2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x21c2f0: 0x40f809  jalr        $v0
    ctx->pc = 0x21C2F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21C2F8u);
        ctx->pc = 0x21C2F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C2F0u;
            // 0x21c2f4: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x21C2F8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21C0B8u: goto label_21c0b8;
            case 0x21C0F0u: goto label_21c0f0;
            case 0x21C178u: goto label_21c178;
            case 0x21C180u: goto label_21c180;
            case 0x21C1A8u: goto label_21c1a8;
            case 0x21C1ACu: goto label_21c1ac;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x21C2F8u; }
            if (ctx->pc != 0x21C2F8u) { return; }
        }
        }
    }
    ctx->pc = 0x21C2F8u;
    // 0x21c2f8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x21c2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
    // 0x21c2fc: 0x3c030022  lui         $v1, 0x22
    ctx->pc = 0x21c2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)34 << 16));
    // 0x21c300: 0x2442c368  addiu       $v0, $v0, -0x3C98
    ctx->pc = 0x21c300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294951784));
    // 0x21c304: 0x2463c360  addiu       $v1, $v1, -0x3CA0
    ctx->pc = 0x21c304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294951776));
    // 0x21c308: 0xae820038  sw          $v0, 0x38($s4)
    ctx->pc = 0x21c308u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 2));
    // 0x21c30c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x21c30cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21c310: 0xae830034  sw          $v1, 0x34($s4)
    ctx->pc = 0x21c310u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 52), GPR_U32(ctx, 3));
    // 0x21c314: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x21c314u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x21c318: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x21c318u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x21c31c: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x21c31cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x21c320: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x21c320u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x21c324: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x21c324u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x21c328: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x21c328u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21c32c: 0x3e00008  jr          $ra
    ctx->pc = 0x21C32Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21C32Cu;
            // 0x21c330: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21C0B8u: goto label_21c0b8;
            case 0x21C0F0u: goto label_21c0f0;
            case 0x21C178u: goto label_21c178;
            case 0x21C180u: goto label_21c180;
            case 0x21C1A8u: goto label_21c1a8;
            case 0x21C1ACu: goto label_21c1ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21C334u;
    // 0x21c334: 0x0  nop
    ctx->pc = 0x21c334u;
    // NOP
}
