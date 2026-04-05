#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D2510
// Address: 0x1d2510 - 0x1d2970
void sub_001D2510_0x1d2510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2510_0x1d2510");
#endif

    ctx->pc = 0x1d2510u;

    // 0x1d2510: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x1d2510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x1d2514: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1d2514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1d2518: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x1d2518u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x1d251c: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x1d251cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x1d2520: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d2520u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2524: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x1d2524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x1d2528: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x1d2528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x1d252c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x1d252cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x1d2530: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1d2530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x1d2534: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1d2534u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x1d2538: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1d2538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1d253c: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x1d253cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x1d2540: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1d2540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d2544: 0x84420044  lh          $v0, 0x44($v0)
    ctx->pc = 0x1d2544u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1d2548: 0x104300fd  beq         $v0, $v1, . + 4 + (0xFD << 2)
    ctx->pc = 0x1D2548u;
    {
        const bool branch_taken_0x1d2548 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D254Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2548u;
            // 0x1d254c: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2548) {
            ctx->pc = 0x1D2940u;
            goto label_1d2940;
        }
    }
    ctx->pc = 0x1D2550u;
    // 0x1d2550: 0x8e340000  lw          $s4, 0x0($s1)
    ctx->pc = 0x1d2550u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2554: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1d2554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1d2558: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1d2558u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x1d255c: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x1d255cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1d2560: 0x40f809  jalr        $v0
    ctx->pc = 0x1D2560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D2568u);
        ctx->pc = 0x1D2564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2560u;
            // 0x1d2564: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D2568u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D25A4u: goto label_1d25a4;
            case 0x1D25A8u: goto label_1d25a8;
            case 0x1D25F0u: goto label_1d25f0;
            case 0x1D25F4u: goto label_1d25f4;
            case 0x1D2610u: goto label_1d2610;
            case 0x1D2678u: goto label_1d2678;
            case 0x1D269Cu: goto label_1d269c;
            case 0x1D26A0u: goto label_1d26a0;
            case 0x1D26ACu: goto label_1d26ac;
            case 0x1D26B4u: goto label_1d26b4;
            case 0x1D26DCu: goto label_1d26dc;
            case 0x1D2718u: goto label_1d2718;
            case 0x1D2730u: goto label_1d2730;
            case 0x1D2740u: goto label_1d2740;
            case 0x1D2744u: goto label_1d2744;
            case 0x1D2828u: goto label_1d2828;
            case 0x1D2838u: goto label_1d2838;
            case 0x1D283Cu: goto label_1d283c;
            case 0x1D288Cu: goto label_1d288c;
            case 0x1D2900u: goto label_1d2900;
            case 0x1D291Cu: goto label_1d291c;
            case 0x1D292Cu: goto label_1d292c;
            case 0x1D2934u: goto label_1d2934;
            case 0x1D2940u: goto label_1d2940;
            case 0x1D2944u: goto label_1d2944;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D2568u; }
            if (ctx->pc != 0x1D2568u) { return; }
        }
        }
    }
    ctx->pc = 0x1D2568u;
    // 0x1d2568: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1d2568u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d256c: 0x32c20007  andi        $v0, $s6, 0x7
    ctx->pc = 0x1d256cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)7);
    // 0x1d2570: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1D2570u;
    {
        const bool branch_taken_0x1d2570 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2570u;
            // 0x1d2574: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2570) {
            ctx->pc = 0x1D25A8u;
            goto label_1d25a8;
        }
    }
    ctx->pc = 0x1D2578u;
    // 0x1d2578: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1d2578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1d257c: 0x161dc2  srl         $v1, $s6, 23
    ctx->pc = 0x1d257cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 22), 23));
    // 0x1d2580: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1d2580u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d2584: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d2584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d2588: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x1d2588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x1d258c: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1d258cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1d2590: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1d2590u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d2594: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d2594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d2598: 0x14560002  bne         $v0, $s6, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D2598u;
    {
        const bool branch_taken_0x1d2598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x1D259Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2598u;
            // 0x1d259c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2598) {
            ctx->pc = 0x1D25A4u;
            goto label_1d25a4;
        }
    }
    ctx->pc = 0x1D25A0u;
    // 0x1d25a0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1d25a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1d25a4:
    // 0x1d25a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d25a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d25a8:
    // 0x1d25a8: 0x126000e6  beqz        $s3, . + 4 + (0xE6 << 2)
    ctx->pc = 0x1D25A8u;
    {
        const bool branch_taken_0x1d25a8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D25ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D25A8u;
            // 0x1d25ac: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d25a8) {
            ctx->pc = 0x1D2944u;
            goto label_1d2944;
        }
    }
    ctx->pc = 0x1D25B0u;
    // 0x1d25b0: 0x8e250034  lw          $a1, 0x34($s1)
    ctx->pc = 0x1d25b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x1d25b4: 0x10b600a0  beq         $a1, $s6, . + 4 + (0xA0 << 2)
    ctx->pc = 0x1D25B4u;
    {
        const bool branch_taken_0x1d25b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 22));
        ctx->pc = 0x1D25B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D25B4u;
            // 0x1d25b8: 0x30a20007  andi        $v0, $a1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d25b4) {
            ctx->pc = 0x1D2838u;
            goto label_1d2838;
        }
    }
    ctx->pc = 0x1D25BCu;
    // 0x1d25bc: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x1D25BCu;
    {
        const bool branch_taken_0x1d25bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d25bc) {
            ctx->pc = 0x1D25C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D25BCu;
            // 0x1d25c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D25F4u;
            goto label_1d25f4;
        }
    }
    ctx->pc = 0x1D25C4u;
    // 0x1d25c4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1d25c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1d25c8: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x1d25c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x1d25cc: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x1d25ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1d25d0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1d25d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1d25d4: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x1d25d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x1d25d8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1d25d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1d25dc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1d25dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d25e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1d25e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1d25e4: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D25E4u;
    {
        const bool branch_taken_0x1d25e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x1D25E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D25E4u;
            // 0x1d25e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d25e4) {
            ctx->pc = 0x1D25F0u;
            goto label_1d25f0;
        }
    }
    ctx->pc = 0x1D25ECu;
    // 0x1d25ec: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1d25ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1d25f0:
    // 0x1d25f0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1d25f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d25f4:
    // 0x1d25f4: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x1d25f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d25f8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d25f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d25fc: 0x84820044  lh          $v0, 0x44($a0)
    ctx->pc = 0x1d25fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x1d2600: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D2600u;
    {
        const bool branch_taken_0x1d2600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d2600) {
            ctx->pc = 0x1D2610u;
            goto label_1d2610;
        }
    }
    ctx->pc = 0x1D2608u;
    // 0x1d2608: 0x8c82001c  lw          $v0, 0x1C($a0)
    ctx->pc = 0x1d2608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x1d260c: 0xae220028  sw          $v0, 0x28($s1)
    ctx->pc = 0x1d260cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 2));
label_1d2610:
    // 0x1d2610: 0x10a00028  beqz        $a1, . + 4 + (0x28 << 2)
    ctx->pc = 0x1D2610u;
    {
        const bool branch_taken_0x1d2610 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2610) {
            ctx->pc = 0x1D26B4u;
            goto label_1d26b4;
        }
    }
    ctx->pc = 0x1D2618u;
    // 0x1d2618: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1d2618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1d261c: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1d261cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x1d2620: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x1d2620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1d2624: 0x40f809  jalr        $v0
    ctx->pc = 0x1D2624u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D262Cu);
        ctx->pc = 0x1D2628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2624u;
            // 0x1d2628: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D262Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D25A4u: goto label_1d25a4;
            case 0x1D25A8u: goto label_1d25a8;
            case 0x1D25F0u: goto label_1d25f0;
            case 0x1D25F4u: goto label_1d25f4;
            case 0x1D2610u: goto label_1d2610;
            case 0x1D2678u: goto label_1d2678;
            case 0x1D269Cu: goto label_1d269c;
            case 0x1D26A0u: goto label_1d26a0;
            case 0x1D26ACu: goto label_1d26ac;
            case 0x1D26B4u: goto label_1d26b4;
            case 0x1D26DCu: goto label_1d26dc;
            case 0x1D2718u: goto label_1d2718;
            case 0x1D2730u: goto label_1d2730;
            case 0x1D2740u: goto label_1d2740;
            case 0x1D2744u: goto label_1d2744;
            case 0x1D2828u: goto label_1d2828;
            case 0x1D2838u: goto label_1d2838;
            case 0x1D283Cu: goto label_1d283c;
            case 0x1D288Cu: goto label_1d288c;
            case 0x1D2900u: goto label_1d2900;
            case 0x1D291Cu: goto label_1d291c;
            case 0x1D292Cu: goto label_1d292c;
            case 0x1D2934u: goto label_1d2934;
            case 0x1D2940u: goto label_1d2940;
            case 0x1D2944u: goto label_1d2944;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D262Cu; }
            if (ctx->pc != 0x1D262Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1D262Cu;
    // 0x1d262c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d262cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2630: 0x12000020  beqz        $s0, . + 4 + (0x20 << 2)
    ctx->pc = 0x1D2630u;
    {
        const bool branch_taken_0x1d2630 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2630) {
            ctx->pc = 0x1D26B4u;
            goto label_1d26b4;
        }
    }
    ctx->pc = 0x1D2638u;
    // 0x1d2638: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1d2638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d263c: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x1d263cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x1d2640: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1d2640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1d2644: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x1D2644u;
    {
        const bool branch_taken_0x1d2644 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d2644) {
            ctx->pc = 0x1D26ACu;
            goto label_1d26ac;
        }
    }
    ctx->pc = 0x1D264Cu;
    // 0x1d264c: 0x92620016  lbu         $v0, 0x16($s3)
    ctx->pc = 0x1d264cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 22)));
    // 0x1d2650: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1d2650u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1d2654: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D2654u;
    {
        const bool branch_taken_0x1d2654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d2654) {
            ctx->pc = 0x1D26ACu;
            goto label_1d26ac;
        }
    }
    ctx->pc = 0x1D265Cu;
    // 0x1d265c: 0x84630044  lh          $v1, 0x44($v1)
    ctx->pc = 0x1d265cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
    // 0x1d2660: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D2660u;
    {
        const bool branch_taken_0x1d2660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2660u;
            // 0x1d2664: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2660) {
            ctx->pc = 0x1D2678u;
            goto label_1d2678;
        }
    }
    ctx->pc = 0x1D2668u;
    // 0x1d2668: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D2668u;
    {
        const bool branch_taken_0x1d2668 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D266Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2668u;
            // 0x1d266c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2668) {
            ctx->pc = 0x1D2678u;
            goto label_1d2678;
        }
    }
    ctx->pc = 0x1D2670u;
    // 0x1d2670: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1D2670u;
    {
        const bool branch_taken_0x1d2670 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d2670) {
            ctx->pc = 0x1D26ACu;
            goto label_1d26ac;
        }
    }
    ctx->pc = 0x1D2678u;
label_1d2678:
    // 0x1d2678: 0xc090aa6  jal         func_242A98
    ctx->pc = 0x1D2678u;
    SET_GPR_U32(ctx, 31, 0x1D2680u);
    ctx->pc = 0x1D267Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2678u;
            // 0x1d267c: 0x8e840320  lw          $a0, 0x320($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 800)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A98u;
    if (runtime->hasFunction(0x242A98u)) {
        auto targetFn = runtime->lookupFunction(0x242A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2680u; }
        if (ctx->pc != 0x1D2680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a98_0x242d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2680u; }
        if (ctx->pc != 0x1D2680u) { return; }
    }
    ctx->pc = 0x1D2680u;
    // 0x1d2680: 0x94440244  lhu         $a0, 0x244($v0)
    ctx->pc = 0x1d2680u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 580)));
    // 0x1d2684: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x1d2684u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1d2688: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x1d2688u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x1d268c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D268Cu;
    {
        const bool branch_taken_0x1d268c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D268Cu;
            // 0x1d2690: 0x641023  subu        $v0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d268c) {
            ctx->pc = 0x1D269Cu;
            goto label_1d269c;
        }
    }
    ctx->pc = 0x1D2694u;
    // 0x1d2694: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D2694u;
    {
        const bool branch_taken_0x1d2694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2694u;
            // 0x1d2698: 0xa600000c  sh          $zero, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2694) {
            ctx->pc = 0x1D26A0u;
            goto label_1d26a0;
        }
    }
    ctx->pc = 0x1D269Cu;
label_1d269c:
    // 0x1d269c: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x1d269cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_1d26a0:
    // 0x1d26a0: 0x92620016  lbu         $v0, 0x16($s3)
    ctx->pc = 0x1d26a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 22)));
    // 0x1d26a4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1d26a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1d26a8: 0xa2620016  sb          $v0, 0x16($s3)
    ctx->pc = 0x1d26a8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 22), (uint8_t)GPR_U32(ctx, 2));
label_1d26ac:
    // 0x1d26ac: 0xc0748fc  jal         func_1D23F0
    ctx->pc = 0x1D26ACu;
    SET_GPR_U32(ctx, 31, 0x1D26B4u);
    ctx->pc = 0x1D26B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D26ACu;
            // 0x1d26b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D23F0u;
    if (runtime->hasFunction(0x1D23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D23F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D26B4u; }
        if (ctx->pc != 0x1D26B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D23F0_0x1d23f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D26B4u; }
        if (ctx->pc != 0x1D26B4u) { return; }
    }
    ctx->pc = 0x1D26B4u;
label_1d26b4:
    // 0x1d26b4: 0x52400061  beql        $s2, $zero, . + 4 + (0x61 << 2)
    ctx->pc = 0x1D26B4u;
    {
        const bool branch_taken_0x1d26b4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d26b4) {
            ctx->pc = 0x1D26B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D26B4u;
            // 0x1d26b8: 0xae360034  sw          $s6, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D283Cu;
            goto label_1d283c;
        }
    }
    ctx->pc = 0x1D26BCu;
    // 0x1d26bc: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x1d26bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d26c0: 0x84430044  lh          $v1, 0x44($v0)
    ctx->pc = 0x1d26c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1d26c4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D26C4u;
    {
        const bool branch_taken_0x1d26c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D26C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D26C4u;
            // 0x1d26c8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d26c4) {
            ctx->pc = 0x1D26DCu;
            goto label_1d26dc;
        }
    }
    ctx->pc = 0x1D26CCu;
    // 0x1d26cc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D26CCu;
    {
        const bool branch_taken_0x1d26cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1D26D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D26CCu;
            // 0x1d26d0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d26cc) {
            ctx->pc = 0x1D26DCu;
            goto label_1d26dc;
        }
    }
    ctx->pc = 0x1D26D4u;
    // 0x1d26d4: 0x54620059  bnel        $v1, $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x1D26D4u;
    {
        const bool branch_taken_0x1d26d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1d26d4) {
            ctx->pc = 0x1D26D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D26D4u;
            // 0x1d26d8: 0xae360034  sw          $s6, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D283Cu;
            goto label_1d283c;
        }
    }
    ctx->pc = 0x1D26DCu;
label_1d26dc:
    // 0x1d26dc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1d26dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1d26e0: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1d26e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x1d26e4: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x1d26e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1d26e8: 0x40f809  jalr        $v0
    ctx->pc = 0x1D26E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D26F0u);
        ctx->pc = 0x1D26ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D26E8u;
            // 0x1d26ec: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D26F0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D25A4u: goto label_1d25a4;
            case 0x1D25A8u: goto label_1d25a8;
            case 0x1D25F0u: goto label_1d25f0;
            case 0x1D25F4u: goto label_1d25f4;
            case 0x1D2610u: goto label_1d2610;
            case 0x1D2678u: goto label_1d2678;
            case 0x1D269Cu: goto label_1d269c;
            case 0x1D26A0u: goto label_1d26a0;
            case 0x1D26ACu: goto label_1d26ac;
            case 0x1D26B4u: goto label_1d26b4;
            case 0x1D26DCu: goto label_1d26dc;
            case 0x1D2718u: goto label_1d2718;
            case 0x1D2730u: goto label_1d2730;
            case 0x1D2740u: goto label_1d2740;
            case 0x1D2744u: goto label_1d2744;
            case 0x1D2828u: goto label_1d2828;
            case 0x1D2838u: goto label_1d2838;
            case 0x1D283Cu: goto label_1d283c;
            case 0x1D288Cu: goto label_1d288c;
            case 0x1D2900u: goto label_1d2900;
            case 0x1D291Cu: goto label_1d291c;
            case 0x1D292Cu: goto label_1d292c;
            case 0x1D2934u: goto label_1d2934;
            case 0x1D2940u: goto label_1d2940;
            case 0x1D2944u: goto label_1d2944;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D26F0u; }
            if (ctx->pc != 0x1D26F0u) { return; }
        }
        }
    }
    ctx->pc = 0x1D26F0u;
    // 0x1d26f0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1d26f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d26f4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1d26f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d26f8: 0x8c4300fc  lw          $v1, 0xFC($v0)
    ctx->pc = 0x1d26f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 252)));
    // 0x1d26fc: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1D26FCu;
    {
        const bool branch_taken_0x1d26fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D26FCu;
            // 0x1d2700: 0x8e300000  lw          $s0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d26fc) {
            ctx->pc = 0x1D2740u;
            goto label_1d2740;
        }
    }
    ctx->pc = 0x1D2704u;
    // 0x1d2704: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x1d2704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x1d2708: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x1d2708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1d270c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1D270Cu;
    {
        const bool branch_taken_0x1d270c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D270Cu;
            // 0x1d2710: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d270c) {
            ctx->pc = 0x1D2730u;
            goto label_1d2730;
        }
    }
    ctx->pc = 0x1D2714u;
    // 0x1d2714: 0x0  nop
    ctx->pc = 0x1d2714u;
    // NOP
label_1d2718:
    // 0x1d2718: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1d2718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1d271c: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x1d271cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1d2720: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D2720u;
    {
        const bool branch_taken_0x1d2720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2720u;
            // 0x1d2724: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2720) {
            ctx->pc = 0x1D2744u;
            goto label_1d2744;
        }
    }
    ctx->pc = 0x1D2728u;
    // 0x1d2728: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1d2728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1d272c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1d272cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1d2730:
    // 0x1d2730: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1d2730u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x1d2734: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1d2734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1d2738: 0x1443fff7  bne         $v0, $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1D2738u;
    {
        const bool branch_taken_0x1d2738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D273Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2738u;
            // 0x1d273c: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2738) {
            ctx->pc = 0x1D2718u;
            runtime->cooperativeGuestYield();
            goto label_1d2718;
        }
    }
    ctx->pc = 0x1D2740u;
label_1d2740:
    // 0x1d2740: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1d2740u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d2744:
    // 0x1d2744: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x1d2744u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x1d2748: 0x240203ed  addiu       $v0, $zero, 0x3ED
    ctx->pc = 0x1d2748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1005));
    // 0x1d274c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1d274cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x1d2750: 0xa7a20000  sh          $v0, 0x0($sp)
    ctx->pc = 0x1d2750u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1d2754: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x1d2754u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x1d2758: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x1d2758u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x1d275c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1d275cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1d2760: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1d2760u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1d2764: 0xd8420050  lqc2        $vf2, 0x50($v0)
    ctx->pc = 0x1d2764u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1d2768: 0xd8a10050  lqc2        $vf1, 0x50($a1)
    ctx->pc = 0x1d2768u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x1d276c: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x1d276cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d2770: 0x4be210aa  vmul.xyzw   $vf2, $vf2, $vf2
    ctx->pc = 0x1d2770u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1d2774: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x1d2774u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d2778: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x1d2778u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1d277c: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x1d277cu;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1d2780: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1d2780u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d2784: 0x46000504  c1          0x504
    ctx->pc = 0x1d2784u;
    ctx->f[20] = FPU_SQRT_S(ctx->f[0]);
    // 0x1d2788: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1d2788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1d278c: 0x8c44e89c  lw          $a0, -0x1764($v0)
    ctx->pc = 0x1d278cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961308)));
    // 0x1d2790: 0xc047d6a  jal         func_11F5A8
    ctx->pc = 0x1D2790u;
    SET_GPR_U32(ctx, 31, 0x1D2798u);
    ctx->pc = 0x1D2794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2790u;
            // 0x1d2794: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F5A8u;
    if (runtime->hasFunction(0x11F5A8u)) {
        auto targetFn = runtime->lookupFunction(0x11F5A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2798u; }
        if (ctx->pc != 0x1D2798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_11f5a8_0x11f5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2798u; }
        if (ctx->pc != 0x1D2798u) { return; }
    }
    ctx->pc = 0x1D2798u;
    // 0x1d2798: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1d2798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x1d279c: 0x8c620084  lw          $v0, 0x84($v1)
    ctx->pc = 0x1d279cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 132)));
    // 0x1d27a0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1d27a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1d27a4: 0x50400025  beql        $v0, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x1D27A4u;
    {
        const bool branch_taken_0x1d27a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d27a4) {
            ctx->pc = 0x1D27A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D27A4u;
            // 0x1d27a8: 0xae360034  sw          $s6, 0x34($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D283Cu;
            goto label_1d283c;
        }
    }
    ctx->pc = 0x1D27ACu;
    // 0x1d27ac: 0x94620096  lhu         $v0, 0x96($v1)
    ctx->pc = 0x1d27acu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 150)));
    // 0x1d27b0: 0x3c014180  lui         $at, 0x4180
    ctx->pc = 0x1d27b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16768 << 16));
    // 0x1d27b4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x1d27b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1d27b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1d27b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1d27bc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1d27bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1d27c0: 0x3c013f8c  lui         $at, 0x3F8C
    ctx->pc = 0x1d27c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16268 << 16));
    // 0x1d27c4: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x1d27c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x1d27c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x1d27c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1d27cc: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x1d27ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x1d27d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1d27d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1d27d4: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1d27d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1d27d8: 0x0  nop
    ctx->pc = 0x1d27d8u;
    // NOP
    // 0x1d27dc: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x1D27DCu;
    {
        const bool branch_taken_0x1d27dc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1D27E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D27DCu;
            // 0x1d27e0: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d27dc) {
            ctx->pc = 0x1D2828u;
            goto label_1d2828;
        }
    }
    ctx->pc = 0x1D27E4u;
    // 0x1d27e4: 0xc090aa6  jal         func_242A98
    ctx->pc = 0x1D27E4u;
    SET_GPR_U32(ctx, 31, 0x1D27ECu);
    ctx->pc = 0x1D27E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D27E4u;
            // 0x1d27e8: 0x8e040320  lw          $a0, 0x320($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A98u;
    if (runtime->hasFunction(0x242A98u)) {
        auto targetFn = runtime->lookupFunction(0x242A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D27ECu; }
        if (ctx->pc != 0x1D27ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a98_0x242d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D27ECu; }
        if (ctx->pc != 0x1D27ECu) { return; }
    }
    ctx->pc = 0x1D27ECu;
    // 0x1d27ec: 0x94450244  lhu         $a1, 0x244($v0)
    ctx->pc = 0x1d27ecu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 580)));
    // 0x1d27f0: 0xc07fd5e  jal         func_1FF578
    ctx->pc = 0x1D27F0u;
    SET_GPR_U32(ctx, 31, 0x1D27F8u);
    ctx->pc = 0x1D27F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D27F0u;
            // 0x1d27f4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF578u;
    if (runtime->hasFunction(0x1FF578u)) {
        auto targetFn = runtime->lookupFunction(0x1FF578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D27F8u; }
        if (ctx->pc != 0x1D27F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FF578_0x1ff578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D27F8u; }
        if (ctx->pc != 0x1D27F8u) { return; }
    }
    ctx->pc = 0x1D27F8u;
    // 0x1d27f8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x1D27F8u;
    {
        const bool branch_taken_0x1d27f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D27FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D27F8u;
            // 0x1d27fc: 0x240200ff  addiu       $v0, $zero, 0xFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d27f8) {
            ctx->pc = 0x1D2828u;
            goto label_1d2828;
        }
    }
    ctx->pc = 0x1D2800u;
    // 0x1d2800: 0x92620016  lbu         $v0, 0x16($s3)
    ctx->pc = 0x1d2800u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 22)));
    // 0x1d2804: 0x304200fb  andi        $v0, $v0, 0xFB
    ctx->pc = 0x1d2804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)251);
    // 0x1d2808: 0xa2620016  sb          $v0, 0x16($s3)
    ctx->pc = 0x1d2808u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 22), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d280c: 0xc090aa6  jal         func_242A98
    ctx->pc = 0x1D280Cu;
    SET_GPR_U32(ctx, 31, 0x1D2814u);
    ctx->pc = 0x1D2810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D280Cu;
            // 0x1d2810: 0x8e040320  lw          $a0, 0x320($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 800)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242A98u;
    if (runtime->hasFunction(0x242A98u)) {
        auto targetFn = runtime->lookupFunction(0x242A98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2814u; }
        if (ctx->pc != 0x1D2814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242a98_0x242d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2814u; }
        if (ctx->pc != 0x1D2814u) { return; }
    }
    ctx->pc = 0x1D2814u;
    // 0x1d2814: 0x94420244  lhu         $v0, 0x244($v0)
    ctx->pc = 0x1d2814u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 580)));
    // 0x1d2818: 0x96a3000c  lhu         $v1, 0xC($s5)
    ctx->pc = 0x1d2818u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x1d281c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d281cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d2820: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1D2820u;
    {
        const bool branch_taken_0x1d2820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2820u;
            // 0x1d2824: 0xa6a2000c  sh          $v0, 0xC($s5) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 21), 12), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2820) {
            ctx->pc = 0x1D2838u;
            goto label_1d2838;
        }
    }
    ctx->pc = 0x1D2828u;
label_1d2828:
    // 0x1d2828: 0xa2220088  sb          $v0, 0x88($s1)
    ctx->pc = 0x1d2828u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 136), (uint8_t)GPR_U32(ctx, 2));
    // 0x1d282c: 0x92620016  lbu         $v0, 0x16($s3)
    ctx->pc = 0x1d282cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 22)));
    // 0x1d2830: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x1d2830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x1d2834: 0xa2620016  sb          $v0, 0x16($s3)
    ctx->pc = 0x1d2834u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 22), (uint8_t)GPR_U32(ctx, 2));
label_1d2838:
    // 0x1d2838: 0xae360034  sw          $s6, 0x34($s1)
    ctx->pc = 0x1d2838u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 22));
label_1d283c:
    // 0x1d283c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1d283cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1d2840: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1d2840u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1d2844: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1d2844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1d2848: 0x40f809  jalr        $v0
    ctx->pc = 0x1D2848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D2850u);
        ctx->pc = 0x1D284Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2848u;
            // 0x1d284c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D2850u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D25A4u: goto label_1d25a4;
            case 0x1D25A8u: goto label_1d25a8;
            case 0x1D25F0u: goto label_1d25f0;
            case 0x1D25F4u: goto label_1d25f4;
            case 0x1D2610u: goto label_1d2610;
            case 0x1D2678u: goto label_1d2678;
            case 0x1D269Cu: goto label_1d269c;
            case 0x1D26A0u: goto label_1d26a0;
            case 0x1D26ACu: goto label_1d26ac;
            case 0x1D26B4u: goto label_1d26b4;
            case 0x1D26DCu: goto label_1d26dc;
            case 0x1D2718u: goto label_1d2718;
            case 0x1D2730u: goto label_1d2730;
            case 0x1D2740u: goto label_1d2740;
            case 0x1D2744u: goto label_1d2744;
            case 0x1D2828u: goto label_1d2828;
            case 0x1D2838u: goto label_1d2838;
            case 0x1D283Cu: goto label_1d283c;
            case 0x1D288Cu: goto label_1d288c;
            case 0x1D2900u: goto label_1d2900;
            case 0x1D291Cu: goto label_1d291c;
            case 0x1D292Cu: goto label_1d292c;
            case 0x1D2934u: goto label_1d2934;
            case 0x1D2940u: goto label_1d2940;
            case 0x1D2944u: goto label_1d2944;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D2850u; }
            if (ctx->pc != 0x1D2850u) { return; }
        }
        }
    }
    ctx->pc = 0x1D2850u;
    // 0x1d2850: 0x1640000e  bnez        $s2, . + 4 + (0xE << 2)
    ctx->pc = 0x1D2850u;
    {
        const bool branch_taken_0x1d2850 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2850u;
            // 0x1d2854: 0xac560080  sw          $s6, 0x80($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2850) {
            ctx->pc = 0x1D288Cu;
            goto label_1d288c;
        }
    }
    ctx->pc = 0x1D2858u;
    // 0x1d2858: 0x96220072  lhu         $v0, 0x72($s1)
    ctx->pc = 0x1d2858u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 114)));
    // 0x1d285c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d285cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2860: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d2860u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2864: 0x3042ffef  andi        $v0, $v0, 0xFFEF
    ctx->pc = 0x1d2864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65519);
    // 0x1d2868: 0xc072f2e  jal         func_1CBCB8
    ctx->pc = 0x1D2868u;
    SET_GPR_U32(ctx, 31, 0x1D2870u);
    ctx->pc = 0x1D286Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2868u;
            // 0x1d286c: 0xa6220072  sh          $v0, 0x72($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 114), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CBCB8u;
    if (runtime->hasFunction(0x1CBCB8u)) {
        auto targetFn = runtime->lookupFunction(0x1CBCB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2870u; }
        if (ctx->pc != 0x1D2870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CBCB8_0x1cbcb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2870u; }
        if (ctx->pc != 0x1D2870u) { return; }
    }
    ctx->pc = 0x1D2870u;
    // 0x1d2870: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1d2870u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d2874: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1d2874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1d2878: 0x3463fffe  ori         $v1, $v1, 0xFFFE
    ctx->pc = 0x1d2878u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65534);
    // 0x1d287c: 0x8c8202d8  lw          $v0, 0x2D8($a0)
    ctx->pc = 0x1d287cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 728)));
    // 0x1d2880: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1d2880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1d2884: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1D2884u;
    {
        const bool branch_taken_0x1d2884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2884u;
            // 0x1d2888: 0xac8202d8  sw          $v0, 0x2D8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2884) {
            ctx->pc = 0x1D2940u;
            goto label_1d2940;
        }
    }
    ctx->pc = 0x1D288Cu;
label_1d288c:
    // 0x1d288c: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x1d288cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x1d2890: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x1d2890u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x1d2894: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x1d2894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x1d2898: 0x40f809  jalr        $v0
    ctx->pc = 0x1D2898u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D28A0u);
        ctx->pc = 0x1D289Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2898u;
            // 0x1d289c: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D28A0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D25A4u: goto label_1d25a4;
            case 0x1D25A8u: goto label_1d25a8;
            case 0x1D25F0u: goto label_1d25f0;
            case 0x1D25F4u: goto label_1d25f4;
            case 0x1D2610u: goto label_1d2610;
            case 0x1D2678u: goto label_1d2678;
            case 0x1D269Cu: goto label_1d269c;
            case 0x1D26A0u: goto label_1d26a0;
            case 0x1D26ACu: goto label_1d26ac;
            case 0x1D26B4u: goto label_1d26b4;
            case 0x1D26DCu: goto label_1d26dc;
            case 0x1D2718u: goto label_1d2718;
            case 0x1D2730u: goto label_1d2730;
            case 0x1D2740u: goto label_1d2740;
            case 0x1D2744u: goto label_1d2744;
            case 0x1D2828u: goto label_1d2828;
            case 0x1D2838u: goto label_1d2838;
            case 0x1D283Cu: goto label_1d283c;
            case 0x1D288Cu: goto label_1d288c;
            case 0x1D2900u: goto label_1d2900;
            case 0x1D291Cu: goto label_1d291c;
            case 0x1D292Cu: goto label_1d292c;
            case 0x1D2934u: goto label_1d2934;
            case 0x1D2940u: goto label_1d2940;
            case 0x1D2944u: goto label_1d2944;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D28A0u; }
            if (ctx->pc != 0x1D28A0u) { return; }
        }
        }
    }
    ctx->pc = 0x1D28A0u;
    // 0x1d28a0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x1d28a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x1d28a4: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1d28a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x1d28a8: 0x8c42007c  lw          $v0, 0x7C($v0)
    ctx->pc = 0x1d28a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
    // 0x1d28ac: 0x40f809  jalr        $v0
    ctx->pc = 0x1D28ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1D28B4u);
        ctx->pc = 0x1D28B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D28ACu;
            // 0x1d28b0: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D28B4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D25A4u: goto label_1d25a4;
            case 0x1D25A8u: goto label_1d25a8;
            case 0x1D25F0u: goto label_1d25f0;
            case 0x1D25F4u: goto label_1d25f4;
            case 0x1D2610u: goto label_1d2610;
            case 0x1D2678u: goto label_1d2678;
            case 0x1D269Cu: goto label_1d269c;
            case 0x1D26A0u: goto label_1d26a0;
            case 0x1D26ACu: goto label_1d26ac;
            case 0x1D26B4u: goto label_1d26b4;
            case 0x1D26DCu: goto label_1d26dc;
            case 0x1D2718u: goto label_1d2718;
            case 0x1D2730u: goto label_1d2730;
            case 0x1D2740u: goto label_1d2740;
            case 0x1D2744u: goto label_1d2744;
            case 0x1D2828u: goto label_1d2828;
            case 0x1D2838u: goto label_1d2838;
            case 0x1D283Cu: goto label_1d283c;
            case 0x1D288Cu: goto label_1d288c;
            case 0x1D2900u: goto label_1d2900;
            case 0x1D291Cu: goto label_1d291c;
            case 0x1D292Cu: goto label_1d292c;
            case 0x1D2934u: goto label_1d2934;
            case 0x1D2940u: goto label_1d2940;
            case 0x1D2944u: goto label_1d2944;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D28B4u; }
            if (ctx->pc != 0x1D28B4u) { return; }
        }
        }
    }
    ctx->pc = 0x1D28B4u;
    // 0x1d28b4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d28b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28b8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1d28b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1d28bc: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x1d28bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1d28c0: 0x1600001c  bnez        $s0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1D28C0u;
    {
        const bool branch_taken_0x1d28c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D28C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D28C0u;
            // 0x1d28c4: 0xa6220072  sh          $v0, 0x72($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 114), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d28c0) {
            ctx->pc = 0x1D2934u;
            goto label_1d2934;
        }
    }
    ctx->pc = 0x1D28C8u;
    // 0x1d28c8: 0xc072f40  jal         func_1CBD00
    ctx->pc = 0x1D28C8u;
    SET_GPR_U32(ctx, 31, 0x1D28D0u);
    ctx->pc = 0x1D28CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D28C8u;
            // 0x1d28cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CBD00u;
    if (runtime->hasFunction(0x1CBD00u)) {
        auto targetFn = runtime->lookupFunction(0x1CBD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D28D0u; }
        if (ctx->pc != 0x1D28D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CBD00_0x1cbd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D28D0u; }
        if (ctx->pc != 0x1D28D0u) { return; }
    }
    ctx->pc = 0x1D28D0u;
    // 0x1d28d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d28d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d28d4: 0x56000015  bnel        $s0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D28D4u;
    {
        const bool branch_taken_0x1d28d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d28d4) {
            ctx->pc = 0x1D28D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D28D4u;
            // 0x1d28d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D292Cu;
            goto label_1d292c;
        }
    }
    ctx->pc = 0x1D28DCu;
    // 0x1d28dc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d28dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d28e0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d28e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1d28e4: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x1d28e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d28e8: 0x86020060  lh          $v0, 0x60($s0)
    ctx->pc = 0x1d28e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1d28ec: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D28ECu;
    {
        const bool branch_taken_0x1d28ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D28F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D28ECu;
            // 0x1d28f0: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d28ec) {
            ctx->pc = 0x1D2900u;
            goto label_1d2900;
        }
    }
    ctx->pc = 0x1D28F4u;
    // 0x1d28f4: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1D28F4u;
    {
        const bool branch_taken_0x1d28f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D28F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D28F4u;
            // 0x1d28f8: 0x26020020  addiu       $v0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d28f4) {
            ctx->pc = 0x1D291Cu;
            goto label_1d291c;
        }
    }
    ctx->pc = 0x1D28FCu;
    // 0x1d28fc: 0x0  nop
    ctx->pc = 0x1d28fcu;
    // NOP
label_1d2900:
    // 0x1d2900: 0xde030068  ld          $v1, 0x68($s0)
    ctx->pc = 0x1d2900u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 104)));
    // 0x1d2904: 0xdc45bdf8  ld          $a1, -0x4208($v0)
    ctx->pc = 0x1d2904u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x1d2908: 0x10650004  beq         $v1, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D2908u;
    {
        const bool branch_taken_0x1d2908 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1D290Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2908u;
            // 0x1d290c: 0x26020070  addiu       $v0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2908) {
            ctx->pc = 0x1D291Cu;
            goto label_1d291c;
        }
    }
    ctx->pc = 0x1D2910u;
    // 0x1d2910: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x1D2910u;
    SET_GPR_U32(ctx, 31, 0x1D2918u);
    ctx->pc = 0x1D2914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2910u;
            // 0x1d2914: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2918u; }
        if (ctx->pc != 0x1D2918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2918u; }
        if (ctx->pc != 0x1D2918u) { return; }
    }
    ctx->pc = 0x1D2918u;
    // 0x1d2918: 0x26020070  addiu       $v0, $s0, 0x70
    ctx->pc = 0x1d2918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_1d291c:
    // 0x1d291c: 0xc06d578  jal         func_1B55E0
    ctx->pc = 0x1D291Cu;
    SET_GPR_U32(ctx, 31, 0x1D2924u);
    ctx->pc = 0x1D2920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D291Cu;
            // 0x1d2920: 0x78440030  lq          $a0, 0x30($v0) (Delay Slot)
        SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 48)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B55E0u;
    if (runtime->hasFunction(0x1B55E0u)) {
        auto targetFn = runtime->lookupFunction(0x1B55E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2924u; }
        if (ctx->pc != 0x1D2924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B55E0_0x1b55e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2924u; }
        if (ctx->pc != 0x1D2924u) { return; }
    }
    ctx->pc = 0x1D2924u;
    // 0x1d2924: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d2924u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2928: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d2928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d292c:
    // 0x1d292c: 0xc07fd12  jal         func_1FF448
    ctx->pc = 0x1D292Cu;
    SET_GPR_U32(ctx, 31, 0x1D2934u);
    ctx->pc = 0x1D2930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D292Cu;
            // 0x1d2930: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF448u;
    if (runtime->hasFunction(0x1FF448u)) {
        auto targetFn = runtime->lookupFunction(0x1FF448u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2934u; }
        if (ctx->pc != 0x1D2934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FF448_0x1ff448(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2934u; }
        if (ctx->pc != 0x1D2934u) { return; }
    }
    ctx->pc = 0x1D2934u;
label_1d2934:
    // 0x1d2934: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1d2934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2938: 0xc072f2e  jal         func_1CBCB8
    ctx->pc = 0x1D2938u;
    SET_GPR_U32(ctx, 31, 0x1D2940u);
    ctx->pc = 0x1D293Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2938u;
            // 0x1d293c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CBCB8u;
    if (runtime->hasFunction(0x1CBCB8u)) {
        auto targetFn = runtime->lookupFunction(0x1CBCB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2940u; }
        if (ctx->pc != 0x1D2940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CBCB8_0x1cbcb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D2940u; }
        if (ctx->pc != 0x1D2940u) { return; }
    }
    ctx->pc = 0x1D2940u;
label_1d2940:
    // 0x1d2940: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x1d2940u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1d2944:
    // 0x1d2944: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x1d2944u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1d2948: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x1d2948u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1d294c: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x1d294cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1d2950: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1d2950u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1d2954: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d2954u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1d2958: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x1d2958u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1d295c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1d295cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1d2960: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x1d2960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1d2964: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2964u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D2968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D2964u;
            // 0x1d2968: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1D25A4u: goto label_1d25a4;
            case 0x1D25A8u: goto label_1d25a8;
            case 0x1D25F0u: goto label_1d25f0;
            case 0x1D25F4u: goto label_1d25f4;
            case 0x1D2610u: goto label_1d2610;
            case 0x1D2678u: goto label_1d2678;
            case 0x1D269Cu: goto label_1d269c;
            case 0x1D26A0u: goto label_1d26a0;
            case 0x1D26ACu: goto label_1d26ac;
            case 0x1D26B4u: goto label_1d26b4;
            case 0x1D26DCu: goto label_1d26dc;
            case 0x1D2718u: goto label_1d2718;
            case 0x1D2730u: goto label_1d2730;
            case 0x1D2740u: goto label_1d2740;
            case 0x1D2744u: goto label_1d2744;
            case 0x1D2828u: goto label_1d2828;
            case 0x1D2838u: goto label_1d2838;
            case 0x1D283Cu: goto label_1d283c;
            case 0x1D288Cu: goto label_1d288c;
            case 0x1D2900u: goto label_1d2900;
            case 0x1D291Cu: goto label_1d291c;
            case 0x1D292Cu: goto label_1d292c;
            case 0x1D2934u: goto label_1d2934;
            case 0x1D2940u: goto label_1d2940;
            case 0x1D2944u: goto label_1d2944;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1D296Cu;
    // 0x1d296c: 0x0  nop
    ctx->pc = 0x1d296cu;
    // NOP
}
