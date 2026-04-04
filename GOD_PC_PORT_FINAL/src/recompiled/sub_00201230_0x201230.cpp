#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00201230
// Address: 0x201230 - 0x201380
void sub_00201230_0x201230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00201230_0x201230");
#endif

    ctx->pc = 0x201230u;

    // 0x201230: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x201230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x201234: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x201234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x201238: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x201238u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20123c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20123cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x201240: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x201240u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x201244: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x201244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x201248: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x201248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x20124c: 0x50600048  beql        $v1, $zero, . + 4 + (0x48 << 2)
    ctx->pc = 0x20124Cu;
    {
        const bool branch_taken_0x20124c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20124c) {
            ctx->pc = 0x201250u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20124Cu;
            // 0x201250: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x201370u;
            goto label_201370;
        }
    }
    ctx->pc = 0x201254u;
    // 0x201254: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x201254u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x201258: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x201258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x20125c: 0x10430043  beq         $v0, $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x20125Cu;
    {
        const bool branch_taken_0x20125c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x201260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20125Cu;
            // 0x201260: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20125c) {
            ctx->pc = 0x20136Cu;
            goto label_20136c;
        }
    }
    ctx->pc = 0x201264u;
    // 0x201264: 0x0  nop
    ctx->pc = 0x201264u;
    // NOP
label_201268:
    // 0x201268: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x201268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20126c: 0x16020022  bne         $s0, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x20126Cu;
    {
        const bool branch_taken_0x20126c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x201270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20126Cu;
            // 0x201270: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20126c) {
            ctx->pc = 0x2012F8u;
            goto label_2012f8;
        }
    }
    ctx->pc = 0x201274u;
    // 0x201274: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x201274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x201278: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x201278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x20127c: 0xc442c658  lwc1        $f2, -0x39A8($v0)
    ctx->pc = 0x20127cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x201280: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x201280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x201284: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x201284u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x201288: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x201288u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20128c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x20128cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x201290: 0xc4a000e0  lwc1        $f0, 0xE0($a1)
    ctx->pc = 0x201290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x201294: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x201294u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x201298: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x201298u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x20129c: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x20129cu;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x2012a0: 0x46030029  min.s       $f0, $f0, $f3
    ctx->pc = 0x2012a0u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[3]);
    // 0x2012a4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x2012a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2012a8: 0x0  nop
    ctx->pc = 0x2012a8u;
    // NOP
    // 0x2012ac: 0x4500002a  bc1f        . + 4 + (0x2A << 2)
    ctx->pc = 0x2012ACu;
    {
        const bool branch_taken_0x2012ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2012B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2012ACu;
            // 0x2012b0: 0xe4a000e0  swc1        $f0, 0xE0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 224), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2012ac) {
            ctx->pc = 0x201358u;
            goto label_201358;
        }
    }
    ctx->pc = 0x2012B4u;
    // 0x2012b4: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x2012b4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2012b8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x2012b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x2012bc: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x2012BCu;
    {
        const bool branch_taken_0x2012bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2012C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2012BCu;
            // 0x2012c0: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2012bc) {
            ctx->pc = 0x201358u;
            goto label_201358;
        }
    }
    ctx->pc = 0x2012C4u;
    // 0x2012c4: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x2012c4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2012c8: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x2012c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x2012cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2012ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2012d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2012d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2012d4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2012d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2012d8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x2012d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x2012dc: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x2012dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2012e0: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x2012e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x2012e4: 0x40f809  jalr        $v0
    ctx->pc = 0x2012E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2012ECu);
        ctx->pc = 0x2012E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2012E4u;
            // 0x2012e8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2012ECu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x201268u: goto label_201268;
            case 0x2012F8u: goto label_2012f8;
            case 0x20131Cu: goto label_20131c;
            case 0x201358u: goto label_201358;
            case 0x20135Cu: goto label_20135c;
            case 0x20136Cu: goto label_20136c;
            case 0x201370u: goto label_201370;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2012ECu; }
            if (ctx->pc != 0x2012ECu) { return; }
        }
        }
    }
    ctx->pc = 0x2012ECu;
    // 0x2012ec: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2012ECu;
    {
        const bool branch_taken_0x2012ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2012F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2012ECu;
            // 0x2012f0: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2012ec) {
            ctx->pc = 0x20135Cu;
            goto label_20135c;
        }
    }
    ctx->pc = 0x2012F4u;
    // 0x2012f4: 0x0  nop
    ctx->pc = 0x2012f4u;
    // NOP
label_2012f8:
    // 0x2012f8: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x2012f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2012fc: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2012fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x201300: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x201300u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x201304: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x201304u;
    {
        const bool branch_taken_0x201304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x201304) {
            ctx->pc = 0x201308u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x201304u;
            // 0x201308: 0x94820004  lhu         $v0, 0x4($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20131Cu;
            goto label_20131c;
        }
    }
    ctx->pc = 0x20130Cu;
    // 0x20130c: 0xc04b932  jal         func_12E4C8
    ctx->pc = 0x20130Cu;
    SET_GPR_U32(ctx, 31, 0x201314u);
    ctx->pc = 0x201310u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20130Cu;
            // 0x201310: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E4C8u;
    if (runtime->hasFunction(0x12E4C8u)) {
        auto targetFn = runtime->lookupFunction(0x12E4C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201314u; }
        if (ctx->pc != 0x201314u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_12e4c8_0x12e4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x201314u; }
        if (ctx->pc != 0x201314u) { return; }
    }
    ctx->pc = 0x201314u;
    // 0x201314: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x201314u;
    {
        const bool branch_taken_0x201314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x201318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201314u;
            // 0x201318: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201314) {
            ctx->pc = 0x20135Cu;
            goto label_20135c;
        }
    }
    ctx->pc = 0x20131Cu;
label_20131c:
    // 0x20131c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x20131cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x201320: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x201320u;
    {
        const bool branch_taken_0x201320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x201324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201320u;
            // 0x201324: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201320) {
            ctx->pc = 0x201358u;
            goto label_201358;
        }
    }
    ctx->pc = 0x201328u;
    // 0x201328: 0x94830000  lhu         $v1, 0x0($a0)
    ctx->pc = 0x201328u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x20132c: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x20132cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x201330: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x201330u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x201334: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x201334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x201338: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x201338u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20133c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x20133cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x201340: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x201340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x201344: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x201344u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x201348: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x201348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x20134c: 0x40f809  jalr        $v0
    ctx->pc = 0x20134Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x201354u);
        ctx->pc = 0x201350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20134Cu;
            // 0x201350: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x201354u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x201268u: goto label_201268;
            case 0x2012F8u: goto label_2012f8;
            case 0x20131Cu: goto label_20131c;
            case 0x201358u: goto label_201358;
            case 0x20135Cu: goto label_20135c;
            case 0x20136Cu: goto label_20136c;
            case 0x201370u: goto label_201370;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x201354u; }
            if (ctx->pc != 0x201354u) { return; }
        }
        }
    }
    ctx->pc = 0x201354u;
    // 0x201354: 0x0  nop
    ctx->pc = 0x201354u;
    // NOP
label_201358:
    // 0x201358: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x201358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_20135c:
    // 0x20135c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x20135cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x201360: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x201360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x201364: 0x1443ffc0  bne         $v0, $v1, . + 4 + (-0x40 << 2)
    ctx->pc = 0x201364u;
    {
        const bool branch_taken_0x201364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x201368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201364u;
            // 0x201368: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x201364) {
            ctx->pc = 0x201268u;
            runtime->cooperativeGuestYield();
            goto label_201268;
        }
    }
    ctx->pc = 0x20136Cu;
label_20136c:
    // 0x20136c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x20136cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_201370:
    // 0x201370: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x201370u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x201374: 0x3e00008  jr          $ra
    ctx->pc = 0x201374u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x201378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x201374u;
            // 0x201378: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x201268u: goto label_201268;
            case 0x2012F8u: goto label_2012f8;
            case 0x20131Cu: goto label_20131c;
            case 0x201358u: goto label_201358;
            case 0x20135Cu: goto label_20135c;
            case 0x20136Cu: goto label_20136c;
            case 0x201370u: goto label_201370;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20137Cu;
    // 0x20137c: 0x0  nop
    ctx->pc = 0x20137cu;
    // NOP
}
