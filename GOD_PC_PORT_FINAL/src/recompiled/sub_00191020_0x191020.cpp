#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00191020
// Address: 0x191020 - 0x1916a8
void sub_00191020_0x191020(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191020_0x191020");
#endif

    ctx->pc = 0x191020u;

label_191020:
    // 0x191020: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x191020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x191024: 0xafa40034  sw          $a0, 0x34($sp)
    ctx->pc = 0x191024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 4));
    // 0x191028: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x191028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x19102c: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x19102cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x191030: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x191030u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191034: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x191034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x191038: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x191038u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19103c: 0xe7b400e0  swc1        $f20, 0xE0($sp)
    ctx->pc = 0x19103cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x191040: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x191040u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191044: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x191044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x191048: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x191048u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x19104c: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x19104cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x191050: 0x30820007  andi        $v0, $a0, 0x7
    ctx->pc = 0x191050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)7);
    // 0x191054: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x191054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x191058: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x191058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x19105c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x19105cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x191060: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x191060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x191064: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x191064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x191068: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x191068u;
    {
        const bool branch_taken_0x191068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19106Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191068u;
            // 0x19106c: 0xafa80030  sw          $t0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191068) {
            ctx->pc = 0x1910A8u;
            goto label_1910a8;
        }
    }
    ctx->pc = 0x191070u;
    // 0x191070: 0x41dc2  srl         $v1, $a0, 23
    ctx->pc = 0x191070u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 23));
    // 0x191074: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x191074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x191078: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x191078u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x19107c: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x19107cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x191080: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x191080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x191084: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x191084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x191088: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x191088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x19108c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x19108cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x191090: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x191090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x191094: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x191094u;
    {
        const bool branch_taken_0x191094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x191098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191094u;
            // 0x191098: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191094) {
            ctx->pc = 0x1910A0u;
            goto label_1910a0;
        }
    }
    ctx->pc = 0x19109Cu;
    // 0x19109c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x19109cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1910a0:
    // 0x1910a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1910A0u;
    {
        const bool branch_taken_0x1910a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1910A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1910A0u;
            // 0x1910a4: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1910a0) {
            ctx->pc = 0x1910ACu;
            goto label_1910ac;
        }
    }
    ctx->pc = 0x1910A8u;
label_1910a8:
    // 0x1910a8: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1910a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1910ac:
    // 0x1910ac: 0x52800011  beql        $s4, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1910ACu;
    {
        const bool branch_taken_0x1910ac = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x1910ac) {
            ctx->pc = 0x1910B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1910ACu;
            // 0x1910b0: 0x8fc2005c  lw          $v0, 0x5C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1910F4u;
            goto label_1910f4;
        }
    }
    ctx->pc = 0x1910B4u;
    // 0x1910b4: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1910b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1910b8: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1910b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1910bc: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1910bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1910c0: 0x40f809  jalr        $v0
    ctx->pc = 0x1910C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1910C8u);
        ctx->pc = 0x1910C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1910C0u;
            // 0x1910c4: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1910C8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x191020u: goto label_191020;
            case 0x1910A0u: goto label_1910a0;
            case 0x1910A8u: goto label_1910a8;
            case 0x1910ACu: goto label_1910ac;
            case 0x1910F4u: goto label_1910f4;
            case 0x191168u: goto label_191168;
            case 0x191198u: goto label_191198;
            case 0x1911B0u: goto label_1911b0;
            case 0x1911D0u: goto label_1911d0;
            case 0x1911F8u: goto label_1911f8;
            case 0x191208u: goto label_191208;
            case 0x191240u: goto label_191240;
            case 0x1912A0u: goto label_1912a0;
            case 0x191320u: goto label_191320;
            case 0x191324u: goto label_191324;
            case 0x191340u: goto label_191340;
            case 0x19139Cu: goto label_19139c;
            case 0x1913A8u: goto label_1913a8;
            case 0x1913B8u: goto label_1913b8;
            case 0x1913C4u: goto label_1913c4;
            case 0x191400u: goto label_191400;
            case 0x191404u: goto label_191404;
            case 0x1914E8u: goto label_1914e8;
            case 0x1914ECu: goto label_1914ec;
            case 0x191504u: goto label_191504;
            case 0x191524u: goto label_191524;
            case 0x191580u: goto label_191580;
            case 0x1915A8u: goto label_1915a8;
            case 0x1915ACu: goto label_1915ac;
            case 0x191618u: goto label_191618;
            case 0x19167Cu: goto label_19167c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1910C8u; }
            if (ctx->pc != 0x1910C8u) { return; }
        }
        }
    }
    ctx->pc = 0x1910C8u;
    // 0x1910c8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1910C8u;
    {
        const bool branch_taken_0x1910c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1910c8) {
            ctx->pc = 0x1910CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1910C8u;
            // 0x1910cc: 0x8fc2005c  lw          $v0, 0x5C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1910F4u;
            goto label_1910f4;
        }
    }
    ctx->pc = 0x1910D0u;
    // 0x1910d0: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1910d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1910d4: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1910d4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1910d8: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1910d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1910dc: 0x40f809  jalr        $v0
    ctx->pc = 0x1910DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1910E4u);
        ctx->pc = 0x1910E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1910DCu;
            // 0x1910e0: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1910E4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x191020u: goto label_191020;
            case 0x1910A0u: goto label_1910a0;
            case 0x1910A8u: goto label_1910a8;
            case 0x1910ACu: goto label_1910ac;
            case 0x1910F4u: goto label_1910f4;
            case 0x191168u: goto label_191168;
            case 0x191198u: goto label_191198;
            case 0x1911B0u: goto label_1911b0;
            case 0x1911D0u: goto label_1911d0;
            case 0x1911F8u: goto label_1911f8;
            case 0x191208u: goto label_191208;
            case 0x191240u: goto label_191240;
            case 0x1912A0u: goto label_1912a0;
            case 0x191320u: goto label_191320;
            case 0x191324u: goto label_191324;
            case 0x191340u: goto label_191340;
            case 0x19139Cu: goto label_19139c;
            case 0x1913A8u: goto label_1913a8;
            case 0x1913B8u: goto label_1913b8;
            case 0x1913C4u: goto label_1913c4;
            case 0x191400u: goto label_191400;
            case 0x191404u: goto label_191404;
            case 0x1914E8u: goto label_1914e8;
            case 0x1914ECu: goto label_1914ec;
            case 0x191504u: goto label_191504;
            case 0x191524u: goto label_191524;
            case 0x191580u: goto label_191580;
            case 0x1915A8u: goto label_1915a8;
            case 0x1915ACu: goto label_1915ac;
            case 0x191618u: goto label_191618;
            case 0x19167Cu: goto label_19167c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1910E4u; }
            if (ctx->pc != 0x1910E4u) { return; }
        }
        }
    }
    ctx->pc = 0x1910E4u;
    // 0x1910e4: 0xc0824ae  jal         func_2092B8
    ctx->pc = 0x1910E4u;
    SET_GPR_U32(ctx, 31, 0x1910ECu);
    ctx->pc = 0x1910E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1910E4u;
            // 0x1910e8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2092B8u;
    if (runtime->hasFunction(0x2092B8u)) {
        auto targetFn = runtime->lookupFunction(0x2092B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1910ECu; }
        if (ctx->pc != 0x1910ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002092B8_0x2092b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1910ECu; }
        if (ctx->pc != 0x1910ECu) { return; }
    }
    ctx->pc = 0x1910ECu;
    // 0x1910ec: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1910ecu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1910f0: 0x8fc2005c  lw          $v0, 0x5C($fp)
    ctx->pc = 0x1910f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 92)));
label_1910f4:
    // 0x1910f4: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x1910F4u;
    {
        const bool branch_taken_0x1910f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1910F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1910F4u;
            // 0x1910f8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1910f4) {
            ctx->pc = 0x1911F8u;
            goto label_1911f8;
        }
    }
    ctx->pc = 0x1910FCu;
    // 0x1910fc: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x1910fcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x191100: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x191100u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x191104: 0x2472e848  addiu       $s2, $v1, -0x17B8
    ctx->pc = 0x191104u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961224));
    // 0x191108: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x191108u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19110c: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x19110cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x191110: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x191110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191114: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x191114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x191118: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x191118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x19111c: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x19111cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x191120: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x191120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x191124: 0x40f809  jalr        $v0
    ctx->pc = 0x191124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19112Cu);
        ctx->pc = 0x191128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191124u;
            // 0x191128: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19112Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x191020u: goto label_191020;
            case 0x1910A0u: goto label_1910a0;
            case 0x1910A8u: goto label_1910a8;
            case 0x1910ACu: goto label_1910ac;
            case 0x1910F4u: goto label_1910f4;
            case 0x191168u: goto label_191168;
            case 0x191198u: goto label_191198;
            case 0x1911B0u: goto label_1911b0;
            case 0x1911D0u: goto label_1911d0;
            case 0x1911F8u: goto label_1911f8;
            case 0x191208u: goto label_191208;
            case 0x191240u: goto label_191240;
            case 0x1912A0u: goto label_1912a0;
            case 0x191320u: goto label_191320;
            case 0x191324u: goto label_191324;
            case 0x191340u: goto label_191340;
            case 0x19139Cu: goto label_19139c;
            case 0x1913A8u: goto label_1913a8;
            case 0x1913B8u: goto label_1913b8;
            case 0x1913C4u: goto label_1913c4;
            case 0x191400u: goto label_191400;
            case 0x191404u: goto label_191404;
            case 0x1914E8u: goto label_1914e8;
            case 0x1914ECu: goto label_1914ec;
            case 0x191504u: goto label_191504;
            case 0x191524u: goto label_191524;
            case 0x191580u: goto label_191580;
            case 0x1915A8u: goto label_1915a8;
            case 0x1915ACu: goto label_1915ac;
            case 0x191618u: goto label_191618;
            case 0x19167Cu: goto label_19167c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19112Cu; }
            if (ctx->pc != 0x19112Cu) { return; }
        }
        }
    }
    ctx->pc = 0x19112Cu;
    // 0x19112c: 0xc05e9c0  jal         func_17A700
    ctx->pc = 0x19112Cu;
    SET_GPR_U32(ctx, 31, 0x191134u);
    ctx->pc = 0x191130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19112Cu;
            // 0x191130: 0x8fc4005c  lw          $a0, 0x5C($fp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 92)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A700u;
    if (runtime->hasFunction(0x17A700u)) {
        auto targetFn = runtime->lookupFunction(0x17A700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191134u; }
        if (ctx->pc != 0x191134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A700_0x17a700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191134u; }
        if (ctx->pc != 0x191134u) { return; }
    }
    ctx->pc = 0x191134u;
    // 0x191134: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x191134u;
    {
        const bool branch_taken_0x191134 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x191138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191134u;
            // 0x191138: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191134) {
            ctx->pc = 0x191168u;
            goto label_191168;
        }
    }
    ctx->pc = 0x19113Cu;
    // 0x19113c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x19113cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x191140: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x191140u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x191144: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x191144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x191148: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x191148u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19114c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x19114cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x191150: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x191150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x191154: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x191154u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x191158: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x191158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x19115c: 0x40f809  jalr        $v0
    ctx->pc = 0x19115Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x191164u);
        ctx->pc = 0x191160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19115Cu;
            // 0x191160: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x191164u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x191020u: goto label_191020;
            case 0x1910A0u: goto label_1910a0;
            case 0x1910A8u: goto label_1910a8;
            case 0x1910ACu: goto label_1910ac;
            case 0x1910F4u: goto label_1910f4;
            case 0x191168u: goto label_191168;
            case 0x191198u: goto label_191198;
            case 0x1911B0u: goto label_1911b0;
            case 0x1911D0u: goto label_1911d0;
            case 0x1911F8u: goto label_1911f8;
            case 0x191208u: goto label_191208;
            case 0x191240u: goto label_191240;
            case 0x1912A0u: goto label_1912a0;
            case 0x191320u: goto label_191320;
            case 0x191324u: goto label_191324;
            case 0x191340u: goto label_191340;
            case 0x19139Cu: goto label_19139c;
            case 0x1913A8u: goto label_1913a8;
            case 0x1913B8u: goto label_1913b8;
            case 0x1913C4u: goto label_1913c4;
            case 0x191400u: goto label_191400;
            case 0x191404u: goto label_191404;
            case 0x1914E8u: goto label_1914e8;
            case 0x1914ECu: goto label_1914ec;
            case 0x191504u: goto label_191504;
            case 0x191524u: goto label_191524;
            case 0x191580u: goto label_191580;
            case 0x1915A8u: goto label_1915a8;
            case 0x1915ACu: goto label_1915ac;
            case 0x191618u: goto label_191618;
            case 0x19167Cu: goto label_19167c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x191164u; }
            if (ctx->pc != 0x191164u) { return; }
        }
        }
    }
    ctx->pc = 0x191164u;
    // 0x191164: 0x0  nop
    ctx->pc = 0x191164u;
    // NOP
label_191168:
    // 0x191168: 0x8fc20054  lw          $v0, 0x54($fp)
    ctx->pc = 0x191168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 84)));
    // 0x19116c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x19116cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x191170: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x191170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x191174: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x191174u;
    {
        const bool branch_taken_0x191174 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x191174) {
            ctx->pc = 0x191198u;
            goto label_191198;
        }
    }
    ctx->pc = 0x19117Cu;
    // 0x19117c: 0xc089960  jal         func_226580
    ctx->pc = 0x19117Cu;
    SET_GPR_U32(ctx, 31, 0x191184u);
    ctx->pc = 0x191180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19117Cu;
            // 0x191180: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226580u;
    if (runtime->hasFunction(0x226580u)) {
        auto targetFn = runtime->lookupFunction(0x226580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191184u; }
        if (ctx->pc != 0x191184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00226580_0x226580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191184u; }
        if (ctx->pc != 0x191184u) { return; }
    }
    ctx->pc = 0x191184u;
    // 0x191184: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x191184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191188: 0xc089b1e  jal         func_226C78
    ctx->pc = 0x191188u;
    SET_GPR_U32(ctx, 31, 0x191190u);
    ctx->pc = 0x19118Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191188u;
            // 0x19118c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226C78u;
    if (runtime->hasFunction(0x226C78u)) {
        auto targetFn = runtime->lookupFunction(0x226C78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191190u; }
        if (ctx->pc != 0x191190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00226C78_0x226c78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191190u; }
        if (ctx->pc != 0x191190u) { return; }
    }
    ctx->pc = 0x191190u;
    // 0x191190: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x191190u;
    {
        const bool branch_taken_0x191190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191190u;
            // 0x191194: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191190) {
            ctx->pc = 0x1911B0u;
            goto label_1911b0;
        }
    }
    ctx->pc = 0x191198u;
label_191198:
    // 0x191198: 0xc089990  jal         func_226640
    ctx->pc = 0x191198u;
    SET_GPR_U32(ctx, 31, 0x1911A0u);
    ctx->pc = 0x19119Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191198u;
            // 0x19119c: 0x2404001c  addiu       $a0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226640u;
    if (runtime->hasFunction(0x226640u)) {
        auto targetFn = runtime->lookupFunction(0x226640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1911A0u; }
        if (ctx->pc != 0x1911A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_226640_0x226680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1911A0u; }
        if (ctx->pc != 0x1911A0u) { return; }
    }
    ctx->pc = 0x1911A0u;
    // 0x1911a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1911a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1911a4: 0xc089e2e  jal         func_2278B8
    ctx->pc = 0x1911A4u;
    SET_GPR_U32(ctx, 31, 0x1911ACu);
    ctx->pc = 0x1911A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1911A4u;
            // 0x1911a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2278B8u;
    if (runtime->hasFunction(0x2278B8u)) {
        auto targetFn = runtime->lookupFunction(0x2278B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1911ACu; }
        if (ctx->pc != 0x1911ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002278B8_0x2278b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1911ACu; }
        if (ctx->pc != 0x1911ACu) { return; }
    }
    ctx->pc = 0x1911ACu;
    // 0x1911ac: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1911acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1911b0:
    // 0x1911b0: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1911B0u;
    {
        const bool branch_taken_0x1911b0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1911B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1911B0u;
            // 0x1911b4: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1911b0) {
            ctx->pc = 0x1911D0u;
            goto label_1911d0;
        }
    }
    ctx->pc = 0x1911B8u;
    // 0x1911b8: 0x8c43e84c  lw          $v1, -0x17B4($v0)
    ctx->pc = 0x1911b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x1911bc: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1911bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1911c0: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x1911c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1911c4: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x1911c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x1911c8: 0x40f809  jalr        $v0
    ctx->pc = 0x1911C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1911D0u);
        ctx->pc = 0x1911CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1911C8u;
            // 0x1911cc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1911D0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x191020u: goto label_191020;
            case 0x1910A0u: goto label_1910a0;
            case 0x1910A8u: goto label_1910a8;
            case 0x1910ACu: goto label_1910ac;
            case 0x1910F4u: goto label_1910f4;
            case 0x191168u: goto label_191168;
            case 0x191198u: goto label_191198;
            case 0x1911B0u: goto label_1911b0;
            case 0x1911D0u: goto label_1911d0;
            case 0x1911F8u: goto label_1911f8;
            case 0x191208u: goto label_191208;
            case 0x191240u: goto label_191240;
            case 0x1912A0u: goto label_1912a0;
            case 0x191320u: goto label_191320;
            case 0x191324u: goto label_191324;
            case 0x191340u: goto label_191340;
            case 0x19139Cu: goto label_19139c;
            case 0x1913A8u: goto label_1913a8;
            case 0x1913B8u: goto label_1913b8;
            case 0x1913C4u: goto label_1913c4;
            case 0x191400u: goto label_191400;
            case 0x191404u: goto label_191404;
            case 0x1914E8u: goto label_1914e8;
            case 0x1914ECu: goto label_1914ec;
            case 0x191504u: goto label_191504;
            case 0x191524u: goto label_191524;
            case 0x191580u: goto label_191580;
            case 0x1915A8u: goto label_1915a8;
            case 0x1915ACu: goto label_1915ac;
            case 0x191618u: goto label_191618;
            case 0x19167Cu: goto label_19167c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1911D0u; }
            if (ctx->pc != 0x1911D0u) { return; }
        }
        }
    }
    ctx->pc = 0x1911D0u;
label_1911d0:
    // 0x1911d0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1911d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1911d4: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x1911d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x1911d8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1911d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1911dc: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x1911dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1911e0: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x1911e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x1911e4: 0x40f809  jalr        $v0
    ctx->pc = 0x1911E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1911ECu);
        ctx->pc = 0x1911E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1911E4u;
            // 0x1911e8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1911ECu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x191020u: goto label_191020;
            case 0x1910A0u: goto label_1910a0;
            case 0x1910A8u: goto label_1910a8;
            case 0x1910ACu: goto label_1910ac;
            case 0x1910F4u: goto label_1910f4;
            case 0x191168u: goto label_191168;
            case 0x191198u: goto label_191198;
            case 0x1911B0u: goto label_1911b0;
            case 0x1911D0u: goto label_1911d0;
            case 0x1911F8u: goto label_1911f8;
            case 0x191208u: goto label_191208;
            case 0x191240u: goto label_191240;
            case 0x1912A0u: goto label_1912a0;
            case 0x191320u: goto label_191320;
            case 0x191324u: goto label_191324;
            case 0x191340u: goto label_191340;
            case 0x19139Cu: goto label_19139c;
            case 0x1913A8u: goto label_1913a8;
            case 0x1913B8u: goto label_1913b8;
            case 0x1913C4u: goto label_1913c4;
            case 0x191400u: goto label_191400;
            case 0x191404u: goto label_191404;
            case 0x1914E8u: goto label_1914e8;
            case 0x1914ECu: goto label_1914ec;
            case 0x191504u: goto label_191504;
            case 0x191524u: goto label_191524;
            case 0x191580u: goto label_191580;
            case 0x1915A8u: goto label_1915a8;
            case 0x1915ACu: goto label_1915ac;
            case 0x191618u: goto label_191618;
            case 0x19167Cu: goto label_19167c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1911ECu; }
            if (ctx->pc != 0x1911ECu) { return; }
        }
        }
    }
    ctx->pc = 0x1911ECu;
    // 0x1911ec: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x1911ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x1911f0: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x1911f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x1911f4: 0x2b00b  movn        $s6, $zero, $v0
    ctx->pc = 0x1911f4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
label_1911f8:
    // 0x1911f8: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x1911F8u;
    {
        const bool branch_taken_0x1911f8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1911FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1911F8u;
            // 0x1911fc: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1911f8) {
            ctx->pc = 0x191208u;
            goto label_191208;
        }
    }
    ctx->pc = 0x191200u;
    // 0x191200: 0x8ed5000c  lw          $s5, 0xC($s6)
    ctx->pc = 0x191200u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x191204: 0x0  nop
    ctx->pc = 0x191204u;
    // NOP
label_191208:
    // 0x191208: 0x3c020019  lui         $v0, 0x19
    ctx->pc = 0x191208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)25 << 16));
    // 0x19120c: 0x24041000  addiu       $a0, $zero, 0x1000
    ctx->pc = 0x19120cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x191210: 0x24420f20  addiu       $v0, $v0, 0xF20
    ctx->pc = 0x191210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3872));
    // 0x191214: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x191214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x191218: 0xa7a40008  sh          $a0, 0x8($sp)
    ctx->pc = 0x191218u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 4));
    // 0x19121c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x19121cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191220: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x191220u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x191224: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x191224u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191228: 0xafa2001c  sw          $v0, 0x1C($sp)
    ctx->pc = 0x191228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 2));
    // 0x19122c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x19122cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x191230: 0xa7a0000a  sh          $zero, 0xA($sp)
    ctx->pc = 0x191230u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 10), (uint16_t)GPR_U32(ctx, 0));
    // 0x191234: 0xa7a00022  sh          $zero, 0x22($sp)
    ctx->pc = 0x191234u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 34), (uint16_t)GPR_U32(ctx, 0));
    // 0x191238: 0xa7a00020  sh          $zero, 0x20($sp)
    ctx->pc = 0x191238u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 0));
    // 0x19123c: 0x0  nop
    ctx->pc = 0x19123cu;
    // NOP
label_191240:
    // 0x191240: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x191240u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x191244: 0x24a3000c  addiu       $v1, $a1, 0xC
    ctx->pc = 0x191244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 12));
    // 0x191248: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x191248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x19124c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x19124cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x191250: 0x2c820004  sltiu       $v0, $a0, 0x4
    ctx->pc = 0x191250u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x191254: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x191254u;
    {
        const bool branch_taken_0x191254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x191258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191254u;
            // 0x191258: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191254) {
            ctx->pc = 0x191240u;
            runtime->cooperativeGuestYield();
            goto label_191240;
        }
    }
    ctx->pc = 0x19125Cu;
    // 0x19125c: 0xaca0002c  sw          $zero, 0x2C($a1)
    ctx->pc = 0x19125cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 0));
    // 0x191260: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x191260u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
    // 0x191264: 0xaca00028  sw          $zero, 0x28($a1)
    ctx->pc = 0x191264u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
    // 0x191268: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x191268u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x19126c: 0x24c2e848  addiu       $v0, $a2, -0x17B8
    ctx->pc = 0x19126cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961224));
    // 0x191270: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x191270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191274: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x191274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x191278: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x191278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x19127c: 0x84440028  lh          $a0, 0x28($v0)
    ctx->pc = 0x19127cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x191280: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x191280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x191284: 0x40f809  jalr        $v0
    ctx->pc = 0x191284u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19128Cu);
        ctx->pc = 0x191288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191284u;
            // 0x191288: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x19128Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x191020u: goto label_191020;
            case 0x1910A0u: goto label_1910a0;
            case 0x1910A8u: goto label_1910a8;
            case 0x1910ACu: goto label_1910ac;
            case 0x1910F4u: goto label_1910f4;
            case 0x191168u: goto label_191168;
            case 0x191198u: goto label_191198;
            case 0x1911B0u: goto label_1911b0;
            case 0x1911D0u: goto label_1911d0;
            case 0x1911F8u: goto label_1911f8;
            case 0x191208u: goto label_191208;
            case 0x191240u: goto label_191240;
            case 0x1912A0u: goto label_1912a0;
            case 0x191320u: goto label_191320;
            case 0x191324u: goto label_191324;
            case 0x191340u: goto label_191340;
            case 0x19139Cu: goto label_19139c;
            case 0x1913A8u: goto label_1913a8;
            case 0x1913B8u: goto label_1913b8;
            case 0x1913C4u: goto label_1913c4;
            case 0x191400u: goto label_191400;
            case 0x191404u: goto label_191404;
            case 0x1914E8u: goto label_1914e8;
            case 0x1914ECu: goto label_1914ec;
            case 0x191504u: goto label_191504;
            case 0x191524u: goto label_191524;
            case 0x191580u: goto label_191580;
            case 0x1915A8u: goto label_1915a8;
            case 0x1915ACu: goto label_1915ac;
            case 0x191618u: goto label_191618;
            case 0x19167Cu: goto label_19167c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x19128Cu; }
            if (ctx->pc != 0x19128Cu) { return; }
        }
        }
    }
    ctx->pc = 0x19128Cu;
    // 0x19128c: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x19128cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x191290: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x191290u;
    {
        const bool branch_taken_0x191290 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x191294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191290u;
            // 0x191294: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191290) {
            ctx->pc = 0x1912A0u;
            goto label_1912a0;
        }
    }
    ctx->pc = 0x191298u;
    // 0x191298: 0xc04f5b0  jal         func_13D6C0
    ctx->pc = 0x191298u;
    SET_GPR_U32(ctx, 31, 0x1912A0u);
    ctx->pc = 0x13D6C0u;
    if (runtime->hasFunction(0x13D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x13D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1912A0u; }
        if (ctx->pc != 0x1912A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D6C0_0x13d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1912A0u; }
        if (ctx->pc != 0x1912A0u) { return; }
    }
    ctx->pc = 0x1912A0u;
label_1912a0:
    // 0x1912a0: 0x12a00045  beqz        $s5, . + 4 + (0x45 << 2)
    ctx->pc = 0x1912A0u;
    {
        const bool branch_taken_0x1912a0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1912A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1912A0u;
            // 0x1912a4: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1912a0) {
            ctx->pc = 0x1913B8u;
            goto label_1913b8;
        }
    }
    ctx->pc = 0x1912A8u;
    // 0x1912a8: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1912a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1912ac: 0xdca4bdf8  ld          $a0, -0x4208($a1)
    ctx->pc = 0x1912acu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 4294950392)));
    // 0x1912b0: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x1912b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1912b4: 0x86a30060  lh          $v1, 0x60($s5)
    ctx->pc = 0x1912b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1912b8: 0x64840001  daddiu      $a0, $a0, 0x1
    ctx->pc = 0x1912b8u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
    // 0x1912bc: 0x7ea20020  sq          $v0, 0x20($s5)
    ctx->pc = 0x1912bcu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 32), GPR_VEC(ctx, 2));
    // 0x1912c0: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x1912c0u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x1912c4: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x1912c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1912c8: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x1912c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x1912cc: 0x7ea20030  sq          $v0, 0x30($s5)
    ctx->pc = 0x1912ccu;
    WRITE128(ADD32(GPR_U32(ctx, 21), 48), GPR_VEC(ctx, 2));
    // 0x1912d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1912d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1912d4: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x1912d4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x1912d8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1912d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1912dc: 0x78c20020  lq          $v0, 0x20($a2)
    ctx->pc = 0x1912dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1912e0: 0x7ea20040  sq          $v0, 0x40($s5)
    ctx->pc = 0x1912e0u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 64), GPR_VEC(ctx, 2));
    // 0x1912e4: 0x78c20030  lq          $v0, 0x30($a2)
    ctx->pc = 0x1912e4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x1912e8: 0x7ea20050  sq          $v0, 0x50($s5)
    ctx->pc = 0x1912e8u;
    WRITE128(ADD32(GPR_U32(ctx, 21), 80), GPR_VEC(ctx, 2));
    // 0x1912ec: 0xfca4bdf8  sd          $a0, -0x4208($a1)
    ctx->pc = 0x1912ecu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 4294950392), GPR_U64(ctx, 4));
    // 0x1912f0: 0xfea30068  sd          $v1, 0x68($s5)
    ctx->pc = 0x1912f0u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 104), GPR_U64(ctx, 3));
    // 0x1912f4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1912f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1912f8: 0x8c42ec94  lw          $v0, -0x136C($v0)
    ctx->pc = 0x1912f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962324)));
    // 0x1912fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1912fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x191300: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x191300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x191304: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x191304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x191308: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x191308u;
    {
        const bool branch_taken_0x191308 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19130Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191308u;
            // 0x19130c: 0x2462ffec  addiu       $v0, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191308) {
            ctx->pc = 0x191320u;
            goto label_191320;
        }
    }
    ctx->pc = 0x191310u;
    // 0x191310: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x191310u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191314: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x191314u;
    {
        const bool branch_taken_0x191314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191314u;
            // 0x191318: 0x43980b  movn        $s3, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191314) {
            ctx->pc = 0x191324u;
            goto label_191324;
        }
    }
    ctx->pc = 0x19131Cu;
    // 0x19131c: 0x0  nop
    ctx->pc = 0x19131cu;
    // NOP
label_191320:
    // 0x191320: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x191320u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191324:
    // 0x191324: 0x12600024  beqz        $s3, . + 4 + (0x24 << 2)
    ctx->pc = 0x191324u;
    {
        const bool branch_taken_0x191324 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x191324) {
            ctx->pc = 0x1913B8u;
            goto label_1913b8;
        }
    }
    ctx->pc = 0x19132Cu;
    // 0x19132c: 0x8e6200d0  lw          $v0, 0xD0($s3)
    ctx->pc = 0x19132cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 208)));
    // 0x191330: 0x8c570000  lw          $s7, 0x0($v0)
    ctx->pc = 0x191330u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x191334: 0x1ae00020  blez        $s7, . + 4 + (0x20 << 2)
    ctx->pc = 0x191334u;
    {
        const bool branch_taken_0x191334 = (GPR_S32(ctx, 23) <= 0);
        ctx->pc = 0x191338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191334u;
            // 0x191338: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191334) {
            ctx->pc = 0x1913B8u;
            goto label_1913b8;
        }
    }
    ctx->pc = 0x19133Cu;
    // 0x19133c: 0x8e6300d0  lw          $v1, 0xD0($s3)
    ctx->pc = 0x19133cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 208)));
label_191340:
    // 0x191340: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x191340u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x191344: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x191344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x191348: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x191348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19134c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x19134cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x191350: 0x8c500044  lw          $s0, 0x44($v0)
    ctx->pc = 0x191350u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x191354: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x191354u;
    {
        const bool branch_taken_0x191354 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x191358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191354u;
            // 0x191358: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191354) {
            ctx->pc = 0x1913A8u;
            goto label_1913a8;
        }
    }
    ctx->pc = 0x19135Cu;
    // 0x19135c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19135cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191360: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x191360u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191364: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x191364u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191368: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x191368u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19136c: 0xc0401f2  jal         func_1007C8
    ctx->pc = 0x19136Cu;
    SET_GPR_U32(ctx, 31, 0x191374u);
    ctx->pc = 0x191370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19136Cu;
            // 0x191370: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1007C8u;
    if (runtime->hasFunction(0x1007C8u)) {
        auto targetFn = runtime->lookupFunction(0x1007C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191374u; }
        if (ctx->pc != 0x191374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001007C8_0x1007c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191374u; }
        if (ctx->pc != 0x191374u) { return; }
    }
    ctx->pc = 0x191374u;
    // 0x191374: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x191374u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x191378: 0xc04015e  jal         func_100578
    ctx->pc = 0x191378u;
    SET_GPR_U32(ctx, 31, 0x191380u);
    ctx->pc = 0x19137Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191378u;
            // 0x19137c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100578u;
    if (runtime->hasFunction(0x100578u)) {
        auto targetFn = runtime->lookupFunction(0x100578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191380u; }
        if (ctx->pc != 0x191380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100578_0x100578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191380u; }
        if (ctx->pc != 0x191380u) { return; }
    }
    ctx->pc = 0x191380u;
    // 0x191380: 0x8fc20054  lw          $v0, 0x54($fp)
    ctx->pc = 0x191380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 84)));
    // 0x191384: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x191384u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x191388: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x191388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19138c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19138Cu;
    {
        const bool branch_taken_0x19138c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19138c) {
            ctx->pc = 0x19139Cu;
            goto label_19139c;
        }
    }
    ctx->pc = 0x191394u;
    // 0x191394: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x191394u;
    {
        const bool branch_taken_0x191394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191394u;
            // 0x191398: 0xae00003c  sw          $zero, 0x3C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191394) {
            ctx->pc = 0x1913A8u;
            goto label_1913a8;
        }
    }
    ctx->pc = 0x19139Cu;
label_19139c:
    // 0x19139c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x19139cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1913a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1913a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1913a4: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x1913a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
label_1913a8:
    // 0x1913a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1913a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x1913ac: 0x237102a  slt         $v0, $s1, $s7
    ctx->pc = 0x1913acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x1913b0: 0x5440ffe3  bnel        $v0, $zero, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1913B0u;
    {
        const bool branch_taken_0x1913b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1913b0) {
            ctx->pc = 0x1913B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1913B0u;
            // 0x1913b4: 0x8e6300d0  lw          $v1, 0xD0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 208)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x191340u;
            runtime->cooperativeGuestYield();
            goto label_191340;
        }
    }
    ctx->pc = 0x1913B8u;
label_1913b8:
    // 0x1913b8: 0x12c00002  beqz        $s6, . + 4 + (0x2 << 2)
    ctx->pc = 0x1913B8u;
    {
        const bool branch_taken_0x1913b8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1913BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1913B8u;
            // 0x1913bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1913b8) {
            ctx->pc = 0x1913C4u;
            goto label_1913c4;
        }
    }
    ctx->pc = 0x1913C0u;
    // 0x1913c0: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x1913c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_1913c4:
    // 0x1913c4: 0xae420060  sw          $v0, 0x60($s2)
    ctx->pc = 0x1913c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 2));
    // 0x1913c8: 0xae5e0064  sw          $fp, 0x64($s2)
    ctx->pc = 0x1913c8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 100), GPR_U32(ctx, 30));
    // 0x1913cc: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x1913ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x1913d0: 0xae430068  sw          $v1, 0x68($s2)
    ctx->pc = 0x1913d0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 104), GPR_U32(ctx, 3));
    // 0x1913d4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x1913d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1913d8: 0xae44006c  sw          $a0, 0x6C($s2)
    ctx->pc = 0x1913d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 108), GPR_U32(ctx, 4));
    // 0x1913dc: 0xc0643c8  jal         func_190F20
    ctx->pc = 0x1913DCu;
    SET_GPR_U32(ctx, 31, 0x1913E4u);
    ctx->pc = 0x1913E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1913DCu;
            // 0x1913e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190F20u;
    if (runtime->hasFunction(0x190F20u)) {
        auto targetFn = runtime->lookupFunction(0x190F20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1913E4u; }
        if (ctx->pc != 0x1913E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00190F20_0x190f20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1913E4u; }
        if (ctx->pc != 0x1913E4u) { return; }
    }
    ctx->pc = 0x1913E4u;
    // 0x1913e4: 0x8e43004c  lw          $v1, 0x4C($s2)
    ctx->pc = 0x1913e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
    // 0x1913e8: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x1913E8u;
    {
        const bool branch_taken_0x1913e8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1913ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1913E8u;
            // 0x1913ec: 0xe4740028  swc1        $f20, 0x28($v1) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1913e8) {
            ctx->pc = 0x191400u;
            goto label_191400;
        }
    }
    ctx->pc = 0x1913F0u;
    // 0x1913f0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1913f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1913f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1913F4u;
    {
        const bool branch_taken_0x1913f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1913F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1913F4u;
            // 0x1913f8: 0x8c4400f4  lw          $a0, 0xF4($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1913f4) {
            ctx->pc = 0x191404u;
            goto label_191404;
        }
    }
    ctx->pc = 0x1913FCu;
    // 0x1913fc: 0x0  nop
    ctx->pc = 0x1913fcu;
    // NOP
label_191400:
    // 0x191400: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x191400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_191404:
    // 0x191404: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x191404u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x191408: 0xac640030  sw          $a0, 0x30($v1)
    ctx->pc = 0x191408u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 4));
    // 0x19140c: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x19140cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x191410: 0x24a3e848  addiu       $v1, $a1, -0x17B8
    ctx->pc = 0x191410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961224));
    // 0x191414: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x191414u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x191418: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x191418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19141c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19141cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x191420: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x191420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x191424: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x191424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x191428: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x191428u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x19142c: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x19142cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x191430: 0x40f809  jalr        $v0
    ctx->pc = 0x191430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x191438u);
        ctx->pc = 0x191434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191430u;
            // 0x191434: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x191438u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x191020u: goto label_191020;
            case 0x1910A0u: goto label_1910a0;
            case 0x1910A8u: goto label_1910a8;
            case 0x1910ACu: goto label_1910ac;
            case 0x1910F4u: goto label_1910f4;
            case 0x191168u: goto label_191168;
            case 0x191198u: goto label_191198;
            case 0x1911B0u: goto label_1911b0;
            case 0x1911D0u: goto label_1911d0;
            case 0x1911F8u: goto label_1911f8;
            case 0x191208u: goto label_191208;
            case 0x191240u: goto label_191240;
            case 0x1912A0u: goto label_1912a0;
            case 0x191320u: goto label_191320;
            case 0x191324u: goto label_191324;
            case 0x191340u: goto label_191340;
            case 0x19139Cu: goto label_19139c;
            case 0x1913A8u: goto label_1913a8;
            case 0x1913B8u: goto label_1913b8;
            case 0x1913C4u: goto label_1913c4;
            case 0x191400u: goto label_191400;
            case 0x191404u: goto label_191404;
            case 0x1914E8u: goto label_1914e8;
            case 0x1914ECu: goto label_1914ec;
            case 0x191504u: goto label_191504;
            case 0x191524u: goto label_191524;
            case 0x191580u: goto label_191580;
            case 0x1915A8u: goto label_1915a8;
            case 0x1915ACu: goto label_1915ac;
            case 0x191618u: goto label_191618;
            case 0x19167Cu: goto label_19167c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x191438u; }
            if (ctx->pc != 0x191438u) { return; }
        }
        }
    }
    ctx->pc = 0x191438u;
    // 0x191438: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x191438u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19143c: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x19143cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x191440: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x191440u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x191444: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x191444u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x191448: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x191448u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x19144c: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x19144cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x191450: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x191450u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x191454: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x191454u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x191458: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x191458u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19145c: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x19145cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x191460: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x191460u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x191464: 0xc7b400e0  lwc1        $f20, 0xE0($sp)
    ctx->pc = 0x191464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x191468: 0x3e00008  jr          $ra
    ctx->pc = 0x191468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19146Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191468u;
            // 0x19146c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x191020u: goto label_191020;
            case 0x1910A0u: goto label_1910a0;
            case 0x1910A8u: goto label_1910a8;
            case 0x1910ACu: goto label_1910ac;
            case 0x1910F4u: goto label_1910f4;
            case 0x191168u: goto label_191168;
            case 0x191198u: goto label_191198;
            case 0x1911B0u: goto label_1911b0;
            case 0x1911D0u: goto label_1911d0;
            case 0x1911F8u: goto label_1911f8;
            case 0x191208u: goto label_191208;
            case 0x191240u: goto label_191240;
            case 0x1912A0u: goto label_1912a0;
            case 0x191320u: goto label_191320;
            case 0x191324u: goto label_191324;
            case 0x191340u: goto label_191340;
            case 0x19139Cu: goto label_19139c;
            case 0x1913A8u: goto label_1913a8;
            case 0x1913B8u: goto label_1913b8;
            case 0x1913C4u: goto label_1913c4;
            case 0x191400u: goto label_191400;
            case 0x191404u: goto label_191404;
            case 0x1914E8u: goto label_1914e8;
            case 0x1914ECu: goto label_1914ec;
            case 0x191504u: goto label_191504;
            case 0x191524u: goto label_191524;
            case 0x191580u: goto label_191580;
            case 0x1915A8u: goto label_1915a8;
            case 0x1915ACu: goto label_1915ac;
            case 0x191618u: goto label_191618;
            case 0x19167Cu: goto label_19167c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x191470u;
    // 0x191470: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x191470u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x191474: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x191474u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x191478: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x191478u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19147c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x19147cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x191480: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x191480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x191484: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x191484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x191488: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x191488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x19148c: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x19148cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x191490: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x191490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x191494: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x191494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x191498: 0x8c44c8d8  lw          $a0, -0x3728($v0)
    ctx->pc = 0x191498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953176)));
    // 0x19149c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x19149cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1914a0: 0xc060af6  jal         func_182BD8
    ctx->pc = 0x1914A0u;
    SET_GPR_U32(ctx, 31, 0x1914A8u);
    ctx->pc = 0x1914A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1914A0u;
            // 0x1914a4: 0x8ea50068  lw          $a1, 0x68($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x182BD8u;
    if (runtime->hasFunction(0x182BD8u)) {
        auto targetFn = runtime->lookupFunction(0x182BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1914A8u; }
        if (ctx->pc != 0x1914A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00182BD8_0x182bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1914A8u; }
        if (ctx->pc != 0x1914A8u) { return; }
    }
    ctx->pc = 0x1914A8u;
    // 0x1914a8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1914a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1914ac: 0x8eb40060  lw          $s4, 0x60($s5)
    ctx->pc = 0x1914acu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x1914b0: 0x32820007  andi        $v0, $s4, 0x7
    ctx->pc = 0x1914b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)7);
    // 0x1914b4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1914B4u;
    {
        const bool branch_taken_0x1914b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1914B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1914B4u;
            // 0x1914b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1914b4) {
            ctx->pc = 0x1914E8u;
            goto label_1914e8;
        }
    }
    ctx->pc = 0x1914BCu;
    // 0x1914bc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1914bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1914c0: 0x141dc2  srl         $v1, $s4, 23
    ctx->pc = 0x1914c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 20), 23));
    // 0x1914c4: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1914c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1914c8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1914c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1914cc: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x1914ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x1914d0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1914d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1914d4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1914d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1914d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1914d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1914dc: 0x54540003  bnel        $v0, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x1914DCu;
    {
        const bool branch_taken_0x1914dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x1914dc) {
            ctx->pc = 0x1914E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1914DCu;
            // 0x1914e0: 0x8c920000  lw          $s2, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1914ECu;
            goto label_1914ec;
        }
    }
    ctx->pc = 0x1914E4u;
    // 0x1914e4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1914e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1914e8:
    // 0x1914e8: 0x8c920000  lw          $s2, 0x0($a0)
    ctx->pc = 0x1914e8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1914ec:
    // 0x1914ec: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1914ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1914f0: 0x86420060  lh          $v0, 0x60($s2)
    ctx->pc = 0x1914f0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x1914f4: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1914F4u;
    {
        const bool branch_taken_0x1914f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1914F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1914F4u;
            // 0x1914f8: 0x8e500104  lw          $s0, 0x104($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 260)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1914f4) {
            ctx->pc = 0x191504u;
            goto label_191504;
        }
    }
    ctx->pc = 0x1914FCu;
    // 0x1914fc: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1914FCu;
    {
        const bool branch_taken_0x1914fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x191500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1914FCu;
            // 0x191500: 0x26430020  addiu       $v1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1914fc) {
            ctx->pc = 0x191524u;
            goto label_191524;
        }
    }
    ctx->pc = 0x191504u;
label_191504:
    // 0x191504: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x191504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x191508: 0xde430068  ld          $v1, 0x68($s2)
    ctx->pc = 0x191508u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x19150c: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x19150cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x191510: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x191510u;
    {
        const bool branch_taken_0x191510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x191514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191510u;
            // 0x191514: 0x26430070  addiu       $v1, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x191510) {
            ctx->pc = 0x191524u;
            goto label_191524;
        }
    }
    ctx->pc = 0x191518u;
    // 0x191518: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x191518u;
    SET_GPR_U32(ctx, 31, 0x191520u);
    ctx->pc = 0x19151Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191518u;
            // 0x19151c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191520u; }
        if (ctx->pc != 0x191520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191520u; }
        if (ctx->pc != 0x191520u) { return; }
    }
    ctx->pc = 0x191520u;
    // 0x191520: 0x26430070  addiu       $v1, $s2, 0x70
    ctx->pc = 0x191520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_191524:
    // 0x191524: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x191524u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x191528: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x191528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x19152c: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x19152cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x191530: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x191530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x191534: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x191534u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x191538: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x191538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x19153c: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x19153cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x191540: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x191540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x191544: 0x8e650060  lw          $a1, 0x60($s3)
    ctx->pc = 0x191544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 96)));
    // 0x191548: 0x50a00018  beql        $a1, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x191548u;
    {
        const bool branch_taken_0x191548 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x191548) {
            ctx->pc = 0x19154Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x191548u;
            // 0x19154c: 0xc66c0048  lwc1        $f12, 0x48($s3) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1915ACu;
            goto label_1915ac;
        }
    }
    ctx->pc = 0x191550u;
    // 0x191550: 0xc04e0d8  jal         func_138360
    ctx->pc = 0x191550u;
    SET_GPR_U32(ctx, 31, 0x191558u);
    ctx->pc = 0x191554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191550u;
            // 0x191554: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138360u;
    if (runtime->hasFunction(0x138360u)) {
        auto targetFn = runtime->lookupFunction(0x138360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191558u; }
        if (ctx->pc != 0x191558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_138360_0x1383a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x191558u; }
        if (ctx->pc != 0x191558u) { return; }
    }
    ctx->pc = 0x191558u;
    // 0x191558: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x191558u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19155c: 0x6200012  bltz        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x19155Cu;
    {
        const bool branch_taken_0x19155c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x191560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19155Cu;
            // 0x191560: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19155c) {
            ctx->pc = 0x1915A8u;
            goto label_1915a8;
        }
    }
    ctx->pc = 0x191564u;
    // 0x191564: 0xde030040  ld          $v1, 0x40($s0)
    ctx->pc = 0x191564u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x191568: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x191568u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x19156c: 0x50650004  beql        $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x19156Cu;
    {
        const bool branch_taken_0x19156c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        if (branch_taken_0x19156c) {
            ctx->pc = 0x191570u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19156Cu;
            // 0x191570: 0x8e03008c  lw          $v1, 0x8C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x191580u;
            goto label_191580;
        }
    }
    ctx->pc = 0x191574u;
    // 0x191574: 0xc04da64  jal         func_136990
    ctx->pc = 0x191574u;
    SET_GPR_U32(ctx, 31, 0x19157Cu);
    ctx->pc = 0x191578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191574u;
            // 0x191578: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136990u;
    if (runtime->hasFunction(0x136990u)) {
        auto targetFn = runtime->lookupFunction(0x136990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19157Cu; }
        if (ctx->pc != 0x19157Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136990_0x136990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19157Cu; }
        if (ctx->pc != 0x19157Cu) { return; }
    }
    ctx->pc = 0x19157Cu;
    // 0x19157c: 0x8e03008c  lw          $v1, 0x8C($s0)
    ctx->pc = 0x19157cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 140)));
label_191580:
    // 0x191580: 0x111180  sll         $v0, $s1, 6
    ctx->pc = 0x191580u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 6));
    // 0x191584: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x191584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x191588: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x191588u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19158c: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x19158cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x191590: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x191590u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x191594: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x191594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x191598: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x191598u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x19159c: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x19159cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x1915a0: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x1915a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x1915a4: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x1915a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
label_1915a8:
    // 0x1915a8: 0xc66c0048  lwc1        $f12, 0x48($s3)
    ctx->pc = 0x1915a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1915ac:
    // 0x1915ac: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1915acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1915b0: 0x3c014334  lui         $at, 0x4334
    ctx->pc = 0x1915b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17204 << 16));
    // 0x1915b4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1915b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1915b8: 0x3c014049  lui         $at, 0x4049
    ctx->pc = 0x1915b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16457 << 16));
    // 0x1915bc: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x1915bcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x1915c0: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1915c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1915c4: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x1915c4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x1915c8: 0xc06115e  jal         func_184578
    ctx->pc = 0x1915C8u;
    SET_GPR_U32(ctx, 31, 0x1915D0u);
    ctx->pc = 0x1915CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1915C8u;
            // 0x1915cc: 0x46016302  mul.s       $f12, $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x184578u;
    if (runtime->hasFunction(0x184578u)) {
        auto targetFn = runtime->lookupFunction(0x184578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1915D0u; }
        if (ctx->pc != 0x1915D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00184578_0x184578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1915D0u; }
        if (ctx->pc != 0x1915D0u) { return; }
    }
    ctx->pc = 0x1915D0u;
    // 0x1915d0: 0x8e620054  lw          $v0, 0x54($s3)
    ctx->pc = 0x1915d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 84)));
    // 0x1915d4: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1915d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x1915d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1915d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1915dc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1915DCu;
    {
        const bool branch_taken_0x1915dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1915E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1915DCu;
            // 0x1915e0: 0x3c100033  lui         $s0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1915dc) {
            ctx->pc = 0x191618u;
            goto label_191618;
        }
    }
    ctx->pc = 0x1915E4u;
    // 0x1915e4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1915e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1915e8: 0x48a21800  qmtc2.ni    $v0, $vf3
    ctx->pc = 0x1915e8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x1915ec: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x1915ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1915f0: 0x4be1133c  vmove.xyzw  $vf1, $vf2
    ctx->pc = 0x1915f0u;
    ctx->vu0_vf[1] = ctx->vu0_vf[2];
    // 0x1915f4: 0x4b030840  vaddx.x     $vf1, $vf1, $vf3x
    ctx->pc = 0x1915f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1915f8: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1915f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1915fc: 0x4be1133c  vmove.xyzw  $vf1, $vf2
    ctx->pc = 0x1915fcu;
    ctx->vu0_vf[1] = ctx->vu0_vf[2];
    // 0x191600: 0x4a830840  vaddx.y     $vf1, $vf1, $vf3x
    ctx->pc = 0x191600u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x191604: 0xfba10010  sqc2        $vf1, 0x10($sp)
    ctx->pc = 0x191604u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x191608: 0x4a431080  vaddx.z     $vf2, $vf2, $vf3x
    ctx->pc = 0x191608u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x19160c: 0xfba20020  sqc2        $vf2, 0x20($sp)
    ctx->pc = 0x19160cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x191610: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x191610u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x191614: 0x0  nop
    ctx->pc = 0x191614u;
    // NOP
label_191618:
    // 0x191618: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x191618u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19161c: 0x2610e848  addiu       $s0, $s0, -0x17B8
    ctx->pc = 0x19161cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961224));
    // 0x191620: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x191620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x191624: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x191624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x191628: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x191628u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x19162c: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x19162cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x191630: 0x40f809  jalr        $v0
    ctx->pc = 0x191630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x191638u);
        ctx->pc = 0x191634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191630u;
            // 0x191634: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x191638u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x191020u: goto label_191020;
            case 0x1910A0u: goto label_1910a0;
            case 0x1910A8u: goto label_1910a8;
            case 0x1910ACu: goto label_1910ac;
            case 0x1910F4u: goto label_1910f4;
            case 0x191168u: goto label_191168;
            case 0x191198u: goto label_191198;
            case 0x1911B0u: goto label_1911b0;
            case 0x1911D0u: goto label_1911d0;
            case 0x1911F8u: goto label_1911f8;
            case 0x191208u: goto label_191208;
            case 0x191240u: goto label_191240;
            case 0x1912A0u: goto label_1912a0;
            case 0x191320u: goto label_191320;
            case 0x191324u: goto label_191324;
            case 0x191340u: goto label_191340;
            case 0x19139Cu: goto label_19139c;
            case 0x1913A8u: goto label_1913a8;
            case 0x1913B8u: goto label_1913b8;
            case 0x1913C4u: goto label_1913c4;
            case 0x191400u: goto label_191400;
            case 0x191404u: goto label_191404;
            case 0x1914E8u: goto label_1914e8;
            case 0x1914ECu: goto label_1914ec;
            case 0x191504u: goto label_191504;
            case 0x191524u: goto label_191524;
            case 0x191580u: goto label_191580;
            case 0x1915A8u: goto label_1915a8;
            case 0x1915ACu: goto label_1915ac;
            case 0x191618u: goto label_191618;
            case 0x19167Cu: goto label_19167c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x191638u; }
            if (ctx->pc != 0x191638u) { return; }
        }
        }
    }
    ctx->pc = 0x191638u;
    // 0x191638: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x191638u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19163c: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x19163cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x191640: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x191640u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x191644: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x191644u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191648: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x191648u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x19164c: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x19164cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x191650: 0x40f809  jalr        $v0
    ctx->pc = 0x191650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x191658u);
        ctx->pc = 0x191654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x191650u;
            // 0x191654: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x191658u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x191020u: goto label_191020;
            case 0x1910A0u: goto label_1910a0;
            case 0x1910A8u: goto label_1910a8;
            case 0x1910ACu: goto label_1910ac;
            case 0x1910F4u: goto label_1910f4;
            case 0x191168u: goto label_191168;
            case 0x191198u: goto label_191198;
            case 0x1911B0u: goto label_1911b0;
            case 0x1911D0u: goto label_1911d0;
            case 0x1911F8u: goto label_1911f8;
            case 0x191208u: goto label_191208;
            case 0x191240u: goto label_191240;
            case 0x1912A0u: goto label_1912a0;
            case 0x191320u: goto label_191320;
            case 0x191324u: goto label_191324;
            case 0x191340u: goto label_191340;
            case 0x19139Cu: goto label_19139c;
            case 0x1913A8u: goto label_1913a8;
            case 0x1913B8u: goto label_1913b8;
            case 0x1913C4u: goto label_1913c4;
            case 0x191400u: goto label_191400;
            case 0x191404u: goto label_191404;
            case 0x1914E8u: goto label_1914e8;
            case 0x1914ECu: goto label_1914ec;
            case 0x191504u: goto label_191504;
            case 0x191524u: goto label_191524;
            case 0x191580u: goto label_191580;
            case 0x1915A8u: goto label_1915a8;
            case 0x1915ACu: goto label_1915ac;
            case 0x191618u: goto label_191618;
            case 0x19167Cu: goto label_19167c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x191658u; }
            if (ctx->pc != 0x191658u) { return; }
        }
        }
    }
    ctx->pc = 0x191658u;
    // 0x191658: 0x82630031  lb          $v1, 0x31($s3)
    ctx->pc = 0x191658u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 49)));
    // 0x19165c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x19165cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191660: 0x8c460088  lw          $a2, 0x88($v0)
    ctx->pc = 0x191660u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x191664: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x191664u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191668: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x191668u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x19166c: 0x46806320  cvt.s.w     $f12, $f12
    ctx->pc = 0x19166cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[12], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x191670: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x191670u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191674: 0xc064408  jal         func_191020
    ctx->pc = 0x191674u;
    SET_GPR_U32(ctx, 31, 0x19167Cu);
    ctx->pc = 0x191678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x191674u;
            // 0x191678: 0x3a0402d  daddu       $t0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x191020u;
    runtime->cooperativeGuestYield();
    goto label_191020;
    ctx->pc = 0x19167Cu;
label_19167c:
    // 0x19167c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19167cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x191680: 0xa6a2002a  sh          $v0, 0x2A($s5)
    ctx->pc = 0x191680u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 42), (uint16_t)GPR_U32(ctx, 2));
    // 0x191684: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x191684u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x191688: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x191688u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19168c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x19168cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x191690: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x191690u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x191694: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x191694u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x191698: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x191698u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19169c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x19169cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1916a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1916A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1916A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1916A0u;
            // 0x1916a4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x191020u: goto label_191020;
            case 0x1910A0u: goto label_1910a0;
            case 0x1910A8u: goto label_1910a8;
            case 0x1910ACu: goto label_1910ac;
            case 0x1910F4u: goto label_1910f4;
            case 0x191168u: goto label_191168;
            case 0x191198u: goto label_191198;
            case 0x1911B0u: goto label_1911b0;
            case 0x1911D0u: goto label_1911d0;
            case 0x1911F8u: goto label_1911f8;
            case 0x191208u: goto label_191208;
            case 0x191240u: goto label_191240;
            case 0x1912A0u: goto label_1912a0;
            case 0x191320u: goto label_191320;
            case 0x191324u: goto label_191324;
            case 0x191340u: goto label_191340;
            case 0x19139Cu: goto label_19139c;
            case 0x1913A8u: goto label_1913a8;
            case 0x1913B8u: goto label_1913b8;
            case 0x1913C4u: goto label_1913c4;
            case 0x191400u: goto label_191400;
            case 0x191404u: goto label_191404;
            case 0x1914E8u: goto label_1914e8;
            case 0x1914ECu: goto label_1914ec;
            case 0x191504u: goto label_191504;
            case 0x191524u: goto label_191524;
            case 0x191580u: goto label_191580;
            case 0x1915A8u: goto label_1915a8;
            case 0x1915ACu: goto label_1915ac;
            case 0x191618u: goto label_191618;
            case 0x19167Cu: goto label_19167c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1916A8u;
}
