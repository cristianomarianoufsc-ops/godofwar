#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00290048
// Address: 0x290048 - 0x2902b0
void sub_00290048_0x290048(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00290048_0x290048");
#endif

    ctx->pc = 0x290048u;

    // 0x290048: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x290048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x29004c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x29004cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x290050: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x290050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x290054: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x290054u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x290058: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x290058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x29005c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x29005cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x290060: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x290060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x290064: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x290064u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x290068: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x290068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x29006c: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x29006cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x290070: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x290070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x290074: 0x3610ffff  ori         $s0, $s0, 0xFFFF
    ctx->pc = 0x290074u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65535);
    // 0x290078: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x290078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x29007c: 0x3c16002a  lui         $s6, 0x2A
    ctx->pc = 0x29007cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)42 << 16));
    // 0x290080: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x290080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x290084: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x290084u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290088: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x290088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x29008c: 0x245e4638  addiu       $fp, $v0, 0x4638
    ctx->pc = 0x29008cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 17976));
    // 0x290090: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x290090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x290094: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x290094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x290098: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x290098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x29009c: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x29009cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x2900a0: 0x8fd40008  lw          $s4, 0x8($fp)
    ctx->pc = 0x2900a0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x2900a4: 0xdcc34a48  ld          $v1, 0x4A48($a2)
    ctx->pc = 0x2900a4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 19016)));
    // 0x2900a8: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x2900a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2900ac: 0xa3282d  daddu       $a1, $a1, $v1
    ctx->pc = 0x2900acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 3));
    // 0x2900b0: 0xc29824  and         $s3, $a2, $v0
    ctx->pc = 0x2900b0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2900b4: 0x64a50010  daddiu      $a1, $a1, 0x10
    ctx->pc = 0x2900b4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 5) + (int64_t)(int32_t)16);
    // 0x2900b8: 0x8ec24a50  lw          $v0, 0x4A50($s6)
    ctx->pc = 0x2900b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 19024)));
    // 0x2900bc: 0x5903c  dsll32      $s2, $a1, 0
    ctx->pc = 0x2900bcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2900c0: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x2900c0u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x2900c4: 0x10500008  beq         $v0, $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2900C4u;
    {
        const bool branch_taken_0x2900c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2900C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2900C4u;
            // 0x2900c8: 0x293a821  addu        $s5, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2900c4) {
            ctx->pc = 0x2900E8u;
            goto label_2900e8;
        }
    }
    ctx->pc = 0x2900CCu;
    // 0x2900cc: 0x12103c  dsll32      $v0, $s2, 0
    ctx->pc = 0x2900ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << (32 + 0));
    // 0x2900d0: 0x2403f000  addiu       $v1, $zero, -0x1000
    ctx->pc = 0x2900d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963200));
    // 0x2900d4: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2900d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x2900d8: 0x64420fff  daddiu      $v0, $v0, 0xFFF
    ctx->pc = 0x2900d8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4095);
    // 0x2900dc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2900dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2900e0: 0x2903c  dsll32      $s2, $v0, 0
    ctx->pc = 0x2900e0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2900e4: 0x12903f  dsra32      $s2, $s2, 0
    ctx->pc = 0x2900e4u;
    SET_GPR_S64(ctx, 18, GPR_S64(ctx, 18) >> (32 + 0));
label_2900e8:
    // 0x2900e8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2900e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2900ec: 0xc0a4870  jal         func_2921C0
    ctx->pc = 0x2900ECu;
    SET_GPR_U32(ctx, 31, 0x2900F4u);
    ctx->pc = 0x2900F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2900ECu;
            // 0x2900f0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2921C0u;
    if (runtime->hasFunction(0x2921C0u)) {
        auto targetFn = runtime->lookupFunction(0x2921C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2900F4u; }
        if (ctx->pc != 0x2900F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002921C0_0x2921c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2900F4u; }
        if (ctx->pc != 0x2900F4u) { return; }
    }
    ctx->pc = 0x2900F4u;
    // 0x2900f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2900f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2900f8: 0x12300060  beq         $s1, $s0, . + 4 + (0x60 << 2)
    ctx->pc = 0x2900F8u;
    {
        const bool branch_taken_0x2900f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x2900FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2900F8u;
            // 0x2900fc: 0x235102b  sltu        $v0, $s1, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2900f8) {
            ctx->pc = 0x29027Cu;
            goto label_29027c;
        }
    }
    ctx->pc = 0x290100u;
    // 0x290100: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x290100u;
    {
        const bool branch_taken_0x290100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290100u;
            // 0x290104: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290100) {
            ctx->pc = 0x290114u;
            goto label_290114;
        }
    }
    ctx->pc = 0x290108u;
    // 0x290108: 0x569e005d  bnel        $s4, $fp, . + 4 + (0x5D << 2)
    ctx->pc = 0x290108u;
    {
        const bool branch_taken_0x290108 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 30));
        if (branch_taken_0x290108) {
            ctx->pc = 0x29010Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x290108u;
            // 0x29010c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x290280u;
            goto label_290280;
        }
    }
    ctx->pc = 0x290110u;
    // 0x290110: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x290110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_290114:
    // 0x290114: 0x8c434a68  lw          $v1, 0x4A68($v0)
    ctx->pc = 0x290114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19048)));
    // 0x290118: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x290118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x29011c: 0x16350006  bne         $s1, $s5, . + 4 + (0x6 << 2)
    ctx->pc = 0x29011Cu;
    {
        const bool branch_taken_0x29011c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 21));
        ctx->pc = 0x290120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29011Cu;
            // 0x290120: 0xac434a68  sw          $v1, 0x4A68($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 19048), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29011c) {
            ctx->pc = 0x290138u;
            goto label_290138;
        }
    }
    ctx->pc = 0x290124u;
    // 0x290124: 0x2532821  addu        $a1, $s2, $s3
    ctx->pc = 0x290124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x290128: 0x8fc30008  lw          $v1, 0x8($fp)
    ctx->pc = 0x290128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x29012c: 0x34a20001  ori         $v0, $a1, 0x1
    ctx->pc = 0x29012cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x290130: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x290130u;
    {
        const bool branch_taken_0x290130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290130u;
            // 0x290134: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290130) {
            ctx->pc = 0x290244u;
            goto label_290244;
        }
    }
    ctx->pc = 0x290138u;
label_290138:
    // 0x290138: 0x8ec24a50  lw          $v0, 0x4A50($s6)
    ctx->pc = 0x290138u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 19024)));
    // 0x29013c: 0x14500003  bne         $v0, $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29013Cu;
    {
        const bool branch_taken_0x29013c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x290140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29013Cu;
            // 0x290140: 0x2351023  subu        $v0, $s1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29013c) {
            ctx->pc = 0x29014Cu;
            goto label_29014c;
        }
    }
    ctx->pc = 0x290144u;
    // 0x290144: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x290144u;
    {
        const bool branch_taken_0x290144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290148u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290144u;
            // 0x290148: 0xaed14a50  sw          $s1, 0x4A50($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 19024), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290144) {
            ctx->pc = 0x290158u;
            goto label_290158;
        }
    }
    ctx->pc = 0x29014Cu;
label_29014c:
    // 0x29014c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x29014cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x290150: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x290150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x290154: 0xac624a68  sw          $v0, 0x4A68($v1)
    ctx->pc = 0x290154u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 19048), GPR_U32(ctx, 2));
label_290158:
    // 0x290158: 0x26220008  addiu       $v0, $s1, 0x8
    ctx->pc = 0x290158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x29015c: 0x3045000f  andi        $a1, $v0, 0xF
    ctx->pc = 0x29015cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x290160: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x290160u;
    {
        const bool branch_taken_0x290160 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x290164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290160u;
            // 0x290164: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290160) {
            ctx->pc = 0x290174u;
            goto label_290174;
        }
    }
    ctx->pc = 0x290168u;
    // 0x290168: 0x458023  subu        $s0, $v0, $a1
    ctx->pc = 0x290168u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x29016c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x29016Cu;
    {
        const bool branch_taken_0x29016c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29016Cu;
            // 0x290170: 0x2308821  addu        $s1, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29016c) {
            ctx->pc = 0x290178u;
            goto label_290178;
        }
    }
    ctx->pc = 0x290174u;
label_290174:
    // 0x290174: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x290174u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_290178:
    // 0x290178: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x290178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x29017c: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x29017cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x290180: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x290180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x290184: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x290184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290188: 0x62182f  dsubu       $v1, $v1, $v0
    ctx->pc = 0x290188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x29018c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x29018cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x290190: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x290190u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x290194: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x290194u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x290198: 0xc0a4870  jal         func_2921C0
    ctx->pc = 0x290198u;
    SET_GPR_U32(ctx, 31, 0x2901A0u);
    ctx->pc = 0x29019Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290198u;
            // 0x29019c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2921C0u;
    if (runtime->hasFunction(0x2921C0u)) {
        auto targetFn = runtime->lookupFunction(0x2921C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2901A0u; }
        if (ctx->pc != 0x2901A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002921C0_0x2921c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2901A0u; }
        if (ctx->pc != 0x2901A0u) { return; }
    }
    ctx->pc = 0x2901A0u;
    // 0x2901a0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2901a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2901a4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2901a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2901a8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2901a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2901ac: 0x50620034  beql        $v1, $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x2901ACu;
    {
        const bool branch_taken_0x2901ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2901ac) {
            ctx->pc = 0x2901B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2901ACu;
            // 0x2901b0: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x290280u;
            goto label_290280;
        }
    }
    ctx->pc = 0x2901B4u;
    // 0x2901b4: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x2901b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2901b8: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x2901b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x2901bc: 0x702821  addu        $a1, $v1, $s0
    ctx->pc = 0x2901bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2901c0: 0x8c824a68  lw          $v0, 0x4A68($a0)
    ctx->pc = 0x2901c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 19048)));
    // 0x2901c4: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x2901c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x2901c8: 0x24644638  addiu       $a0, $v1, 0x4638
    ctx->pc = 0x2901c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 17976));
    // 0x2901cc: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2901ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x2901d0: 0x34a30001  ori         $v1, $a1, 0x1
    ctx->pc = 0x2901d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x2901d4: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x2901d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x2901d8: 0xaca24a68  sw          $v0, 0x4A68($a1)
    ctx->pc = 0x2901d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 19048), GPR_U32(ctx, 2));
    // 0x2901dc: 0xac910008  sw          $s1, 0x8($a0)
    ctx->pc = 0x2901dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 17));
    // 0x2901e0: 0x12840018  beq         $s4, $a0, . + 4 + (0x18 << 2)
    ctx->pc = 0x2901E0u;
    {
        const bool branch_taken_0x2901e0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 4));
        ctx->pc = 0x2901E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2901E0u;
            // 0x2901e4: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2901e0) {
            ctx->pc = 0x290244u;
            goto label_290244;
        }
    }
    ctx->pc = 0x2901E8u;
    // 0x2901e8: 0x2e620010  sltiu       $v0, $s3, 0x10
    ctx->pc = 0x2901e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2901ec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2901ECu;
    {
        const bool branch_taken_0x2901ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2901F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2901ECu;
            // 0x2901f0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2901ec) {
            ctx->pc = 0x290200u;
            goto label_290200;
        }
    }
    ctx->pc = 0x2901F4u;
    // 0x2901f4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2901f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2901f8: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x2901F8u;
    {
        const bool branch_taken_0x2901f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2901FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2901F8u;
            // 0x2901fc: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2901f8) {
            ctx->pc = 0x29027Cu;
            goto label_29027c;
        }
    }
    ctx->pc = 0x290200u;
label_290200:
    // 0x290200: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x290200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x290204: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x290204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x290208: 0x2664fff4  addiu       $a0, $s3, -0xC
    ctx->pc = 0x290208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967284));
    // 0x29020c: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x29020cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x290210: 0x829824  and         $s3, $a0, $v0
    ctx->pc = 0x290210u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x290214: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x290214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x290218: 0x731825  or          $v1, $v1, $s3
    ctx->pc = 0x290218u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 19));
    // 0x29021c: 0x2932021  addu        $a0, $s4, $s3
    ctx->pc = 0x29021cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
    // 0x290220: 0xae830004  sw          $v1, 0x4($s4)
    ctx->pc = 0x290220u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 3));
    // 0x290224: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x290224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x290228: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x290228u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x29022c: 0x2e630010  sltiu       $v1, $s3, 0x10
    ctx->pc = 0x29022cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x290230: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x290230u;
    {
        const bool branch_taken_0x290230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x290234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290230u;
            // 0x290234: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290230) {
            ctx->pc = 0x290244u;
            goto label_290244;
        }
    }
    ctx->pc = 0x290238u;
    // 0x290238: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x290238u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29023c: 0xc0a4278  jal         func_2909E0
    ctx->pc = 0x29023Cu;
    SET_GPR_U32(ctx, 31, 0x290244u);
    ctx->pc = 0x290240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29023Cu;
            // 0x290240: 0x26850008  addiu       $a1, $s4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2909E0u;
    if (runtime->hasFunction(0x2909E0u)) {
        auto targetFn = runtime->lookupFunction(0x2909E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290244u; }
        if (ctx->pc != 0x290244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002909E0_0x2909e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290244u; }
        if (ctx->pc != 0x290244u) { return; }
    }
    ctx->pc = 0x290244u;
label_290244:
    // 0x290244: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x290244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x290248: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x290248u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x29024c: 0x8c434a68  lw          $v1, 0x4A68($v0)
    ctx->pc = 0x29024cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 19048)));
    // 0x290250: 0xdc824a58  ld          $v0, 0x4A58($a0)
    ctx->pc = 0x290250u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 19032)));
    // 0x290254: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x290254u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x290258: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x290258u;
    {
        const bool branch_taken_0x290258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x290258) {
            ctx->pc = 0x29025Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x290258u;
            // 0x29025c: 0xfc834a58  sd          $v1, 0x4A58($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 19032), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x290260u;
            goto label_290260;
        }
    }
    ctx->pc = 0x290260u;
label_290260:
    // 0x290260: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x290260u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x290264: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x290264u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x290268: 0x8ca34a68  lw          $v1, 0x4A68($a1)
    ctx->pc = 0x290268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 19048)));
    // 0x29026c: 0xdc824a60  ld          $v0, 0x4A60($a0)
    ctx->pc = 0x29026cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 19040)));
    // 0x290270: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x290270u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x290274: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x290274u;
    {
        const bool branch_taken_0x290274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x290274) {
            ctx->pc = 0x290278u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x290274u;
            // 0x290278: 0xfc834a60  sd          $v1, 0x4A60($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 19040), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29027Cu;
            goto label_29027c;
        }
    }
    ctx->pc = 0x29027Cu;
label_29027c:
    // 0x29027c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x29027cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_290280:
    // 0x290280: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x290280u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x290284: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x290284u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x290288: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x290288u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x29028c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x29028cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x290290: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x290290u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x290294: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x290294u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x290298: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x290298u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29029c: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x29029cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2902a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2902a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2902a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2902A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2902A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2902A4u;
            // 0x2902a8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2900E8u: goto label_2900e8;
            case 0x290114u: goto label_290114;
            case 0x290138u: goto label_290138;
            case 0x29014Cu: goto label_29014c;
            case 0x290158u: goto label_290158;
            case 0x290174u: goto label_290174;
            case 0x290178u: goto label_290178;
            case 0x290200u: goto label_290200;
            case 0x290244u: goto label_290244;
            case 0x290260u: goto label_290260;
            case 0x29027Cu: goto label_29027c;
            case 0x290280u: goto label_290280;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2902ACu;
    // 0x2902ac: 0x0  nop
    ctx->pc = 0x2902acu;
    // NOP
}
