#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00245540
// Address: 0x245540 - 0x245618
void sub_00245540_0x245540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00245540_0x245540");
#endif

    ctx->pc = 0x245540u;

    // 0x245540: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x245540u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x245544: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x245544u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245548: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x245548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x24554c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24554cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x245550: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x245550u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x245554: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x245554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x245558: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x245558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x24555c: 0x8c42ec94  lw          $v0, -0x136C($v0)
    ctx->pc = 0x24555cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962324)));
    // 0x245560: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x245560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x245564: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x245564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x245568: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x245568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x24556c: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24556Cu;
    {
        const bool branch_taken_0x24556c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x245570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24556Cu;
            // 0x245570: 0x2482ffec  addiu       $v0, $a0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24556c) {
            ctx->pc = 0x245580u;
            goto label_245580;
        }
    }
    ctx->pc = 0x245574u;
    // 0x245574: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x245574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x245578: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x245578u;
    {
        const bool branch_taken_0x245578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24557Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245578u;
            // 0x24557c: 0x44800b  movn        $s0, $v0, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x245578) {
            ctx->pc = 0x245584u;
            goto label_245584;
        }
    }
    ctx->pc = 0x245580u;
label_245580:
    // 0x245580: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x245580u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_245584:
    // 0x245584: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x245584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x245588: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x245588u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x24558c: 0x18800010  blez        $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x24558Cu;
    {
        const bool branch_taken_0x24558c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x245590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24558Cu;
            // 0x245590: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24558c) {
            ctx->pc = 0x2455D0u;
            goto label_2455d0;
        }
    }
    ctx->pc = 0x245594u;
    // 0x245594: 0x8e0300d0  lw          $v1, 0xD0($s0)
    ctx->pc = 0x245594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
label_245598:
    // 0x245598: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x245598u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x24559c: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x24559cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2455a0: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x2455a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2455a4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2455a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2455a8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2455a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2455ac: 0xc4400034  lwc1        $f0, 0x34($v0)
    ctx->pc = 0x2455acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2455b0: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2455b0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2455b4: 0x0  nop
    ctx->pc = 0x2455b4u;
    // NOP
    // 0x2455b8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x2455B8u;
    {
        const bool branch_taken_0x2455b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2455b8) {
            ctx->pc = 0x2455BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2455B8u;
            // 0x2455bc: 0xacc20008  sw          $v0, 0x8($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2455C0u;
            goto label_2455c0;
        }
    }
    ctx->pc = 0x2455C0u;
label_2455c0:
    // 0x2455c0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2455c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2455c4: 0xa4102a  slt         $v0, $a1, $a0
    ctx->pc = 0x2455c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2455c8: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x2455C8u;
    {
        const bool branch_taken_0x2455c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2455c8) {
            ctx->pc = 0x2455CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2455C8u;
            // 0x2455cc: 0x8e0300d0  lw          $v1, 0xD0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x245598u;
            runtime->cooperativeGuestYield();
            goto label_245598;
        }
    }
    ctx->pc = 0x2455D0u;
label_2455d0:
    // 0x2455d0: 0x8cc20008  lw          $v0, 0x8($a2)
    ctx->pc = 0x2455d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x2455d4: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2455D4u;
    {
        const bool branch_taken_0x2455d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2455d4) {
            ctx->pc = 0x2455D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2455D4u;
            // 0x2455d8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24560Cu;
            goto label_24560c;
        }
    }
    ctx->pc = 0x2455DCu;
    // 0x2455dc: 0xc054136  jal         func_1504D8
    ctx->pc = 0x2455DCu;
    SET_GPR_U32(ctx, 31, 0x2455E4u);
    ctx->pc = 0x2455E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2455DCu;
            // 0x2455e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1504D8u;
    if (runtime->hasFunction(0x1504D8u)) {
        auto targetFn = runtime->lookupFunction(0x1504D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2455E4u; }
        if (ctx->pc != 0x2455E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1504d8_0x1505a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2455E4u; }
        if (ctx->pc != 0x2455E4u) { return; }
    }
    ctx->pc = 0x2455E4u;
    // 0x2455e4: 0xde0200c0  ld          $v0, 0xC0($s0)
    ctx->pc = 0x2455e4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 192)));
    // 0x2455e8: 0x24031000  addiu       $v1, $zero, 0x1000
    ctx->pc = 0x2455e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x2455ec: 0x260400c0  addiu       $a0, $s0, 0xC0
    ctx->pc = 0x2455ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x2455f0: 0x2405efff  addiu       $a1, $zero, -0x1001
    ctx->pc = 0x2455f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963199));
    // 0x2455f4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2455f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2455f8: 0xfe0200c0  sd          $v0, 0xC0($s0)
    ctx->pc = 0x2455f8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 192), GPR_U64(ctx, 2));
    // 0x2455fc: 0xdc820008  ld          $v0, 0x8($a0)
    ctx->pc = 0x2455fcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x245600: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x245600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x245604: 0xfc820008  sd          $v0, 0x8($a0)
    ctx->pc = 0x245604u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 2));
    // 0x245608: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x245608u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24560c:
    // 0x24560c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24560cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x245610: 0x3e00008  jr          $ra
    ctx->pc = 0x245610u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x245614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x245610u;
            // 0x245614: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x245580u: goto label_245580;
            case 0x245584u: goto label_245584;
            case 0x245598u: goto label_245598;
            case 0x2455C0u: goto label_2455c0;
            case 0x2455D0u: goto label_2455d0;
            case 0x24560Cu: goto label_24560c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x245618u;
}
