#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A9260
// Address: 0x1a9260 - 0x1a9520
void sub_001A9260_0x1a9260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9260_0x1a9260");
#endif

    ctx->pc = 0x1a9260u;

    // 0x1a9260: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1a9260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x1a9264: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1a9264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1a9268: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x1a9268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x1a926c: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x1a926cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x1a9270: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x1a9270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x1a9274: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a9274u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9278: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1a9278u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x1a927c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a927cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1a9280: 0x96230046  lhu         $v1, 0x46($s1)
    ctx->pc = 0x1a9280u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 70)));
    // 0x1a9284: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A9284u;
    {
        const bool branch_taken_0x1a9284 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A9288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9284u;
            // 0x1a9288: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9284) {
            ctx->pc = 0x1A92D4u;
            goto label_1a92d4;
        }
    }
    ctx->pc = 0x1A928Cu;
    // 0x1a928c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x1a928cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1a9290: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A9290u;
    {
        const bool branch_taken_0x1a9290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9290u;
            // 0x1a9294: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9290) {
            ctx->pc = 0x1A92A8u;
            goto label_1a92a8;
        }
    }
    ctx->pc = 0x1A9298u;
    // 0x1a9298: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1A9298u;
    {
        const bool branch_taken_0x1a9298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A929Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9298u;
            // 0x1a929c: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9298) {
            ctx->pc = 0x1A92C4u;
            goto label_1a92c4;
        }
    }
    ctx->pc = 0x1A92A0u;
    // 0x1a92a0: 0x1000009a  b           . + 4 + (0x9A << 2)
    ctx->pc = 0x1A92A0u;
    {
        const bool branch_taken_0x1a92a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A92A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A92A0u;
            // 0x1a92a4: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a92a0) {
            ctx->pc = 0x1A950Cu;
            goto label_1a950c;
        }
    }
    ctx->pc = 0x1A92A8u;
label_1a92a8:
    // 0x1a92a8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a92a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1a92ac: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x1A92ACu;
    {
        const bool branch_taken_0x1a92ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A92B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A92ACu;
            // 0x1a92b0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a92ac) {
            ctx->pc = 0x1A932Cu;
            goto label_1a932c;
        }
    }
    ctx->pc = 0x1A92B4u;
    // 0x1a92b4: 0x10620055  beq         $v1, $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x1A92B4u;
    {
        const bool branch_taken_0x1a92b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A92B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A92B4u;
            // 0x1a92b8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a92b4) {
            ctx->pc = 0x1A940Cu;
            goto label_1a940c;
        }
    }
    ctx->pc = 0x1A92BCu;
    // 0x1a92bc: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x1A92BCu;
    {
        const bool branch_taken_0x1a92bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A92C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A92BCu;
            // 0x1a92c0: 0x7bb10060  lq          $s1, 0x60($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a92bc) {
            ctx->pc = 0x1A950Cu;
            goto label_1a950c;
        }
    }
    ctx->pc = 0x1A92C4u;
label_1a92c4:
    // 0x1a92c4: 0x8e2200a4  lw          $v0, 0xA4($s1)
    ctx->pc = 0x1a92c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
    // 0x1a92c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a92c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a92cc: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x1A92CCu;
    {
        const bool branch_taken_0x1a92cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A92D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A92CCu;
            // 0x1a92d0: 0x8e250054  lw          $a1, 0x54($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a92cc) {
            ctx->pc = 0x1A9314u;
            goto label_1a9314;
        }
    }
    ctx->pc = 0x1A92D4u;
label_1a92d4:
    // 0x1a92d4: 0x5200008c  beql        $s0, $zero, . + 4 + (0x8C << 2)
    ctx->pc = 0x1A92D4u;
    {
        const bool branch_taken_0x1a92d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a92d4) {
            ctx->pc = 0x1A92D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A92D4u;
            // 0x1a92d8: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A9508u;
            goto label_1a9508;
        }
    }
    ctx->pc = 0x1A92DCu;
    // 0x1a92dc: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1a92dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1a92e0: 0x50400089  beql        $v0, $zero, . + 4 + (0x89 << 2)
    ctx->pc = 0x1A92E0u;
    {
        const bool branch_taken_0x1a92e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a92e0) {
            ctx->pc = 0x1A92E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A92E0u;
            // 0x1a92e4: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A9508u;
            goto label_1a9508;
        }
    }
    ctx->pc = 0x1A92E8u;
    // 0x1a92e8: 0xc06a732  jal         func_1A9CC8
    ctx->pc = 0x1A92E8u;
    SET_GPR_U32(ctx, 31, 0x1A92F0u);
    ctx->pc = 0x1A92ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A92E8u;
            // 0x1a92ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9CC8u;
    if (runtime->hasFunction(0x1A9CC8u)) {
        auto targetFn = runtime->lookupFunction(0x1A9CC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A92F0u; }
        if (ctx->pc != 0x1A92F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9CC8_0x1a9cc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A92F0u; }
        if (ctx->pc != 0x1A92F0u) { return; }
    }
    ctx->pc = 0x1A92F0u;
    // 0x1a92f0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1a92f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a92f4: 0x52400005  beql        $s2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A92F4u;
    {
        const bool branch_taken_0x1a92f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a92f4) {
            ctx->pc = 0x1A92F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A92F4u;
            // 0x1a92f8: 0x8e2200a4  lw          $v0, 0xA4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A930Cu;
            goto label_1a930c;
        }
    }
    ctx->pc = 0x1A92FCu;
    // 0x1a92fc: 0x9602002a  lhu         $v0, 0x2A($s0)
    ctx->pc = 0x1a92fcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x1a9300: 0x56420081  bnel        $s2, $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x1A9300u;
    {
        const bool branch_taken_0x1a9300 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a9300) {
            ctx->pc = 0x1A9304u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9300u;
            // 0x1a9304: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A9508u;
            goto label_1a9508;
        }
    }
    ctx->pc = 0x1A9308u;
    // 0x1a9308: 0x8e2200a4  lw          $v0, 0xA4($s1)
    ctx->pc = 0x1a9308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
label_1a930c:
    // 0x1a930c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a930cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9310: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1a9310u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a9314:
    // 0x1a9314: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1a9314u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1a9318: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1a9318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1a931c: 0x40f809  jalr        $v0
    ctx->pc = 0x1A931Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A9324u);
        ctx->pc = 0x1A9320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A931Cu;
            // 0x1a9320: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A9324u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A92A8u: goto label_1a92a8;
            case 0x1A92C4u: goto label_1a92c4;
            case 0x1A92D4u: goto label_1a92d4;
            case 0x1A930Cu: goto label_1a930c;
            case 0x1A9314u: goto label_1a9314;
            case 0x1A932Cu: goto label_1a932c;
            case 0x1A9340u: goto label_1a9340;
            case 0x1A9350u: goto label_1a9350;
            case 0x1A9380u: goto label_1a9380;
            case 0x1A93B8u: goto label_1a93b8;
            case 0x1A93CCu: goto label_1a93cc;
            case 0x1A93DCu: goto label_1a93dc;
            case 0x1A93E0u: goto label_1a93e0;
            case 0x1A93F0u: goto label_1a93f0;
            case 0x1A940Cu: goto label_1a940c;
            case 0x1A9420u: goto label_1a9420;
            case 0x1A9430u: goto label_1a9430;
            case 0x1A9460u: goto label_1a9460;
            case 0x1A94ACu: goto label_1a94ac;
            case 0x1A94C8u: goto label_1a94c8;
            case 0x1A94D8u: goto label_1a94d8;
            case 0x1A94DCu: goto label_1a94dc;
            case 0x1A94ECu: goto label_1a94ec;
            case 0x1A9508u: goto label_1a9508;
            case 0x1A950Cu: goto label_1a950c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A9324u; }
            if (ctx->pc != 0x1A9324u) { return; }
        }
        }
    }
    ctx->pc = 0x1A9324u;
    // 0x1a9324: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x1A9324u;
    {
        const bool branch_taken_0x1a9324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9324u;
            // 0x1a9328: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9324) {
            ctx->pc = 0x1A9508u;
            goto label_1a9508;
        }
    }
    ctx->pc = 0x1A932Cu;
label_1a932c:
    // 0x1a932c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a932cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9330: 0xc06a732  jal         func_1A9CC8
    ctx->pc = 0x1A9330u;
    SET_GPR_U32(ctx, 31, 0x1A9338u);
    ctx->pc = 0x1A9334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9330u;
            // 0x1a9334: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9CC8u;
    if (runtime->hasFunction(0x1A9CC8u)) {
        auto targetFn = runtime->lookupFunction(0x1A9CC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9338u; }
        if (ctx->pc != 0x1A9338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9CC8_0x1a9cc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9338u; }
        if (ctx->pc != 0x1A9338u) { return; }
    }
    ctx->pc = 0x1A9338u;
    // 0x1a9338: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x1A9338u;
    {
        const bool branch_taken_0x1a9338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A933Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9338u;
            // 0x1a933c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9338) {
            ctx->pc = 0x1A93F0u;
            goto label_1a93f0;
        }
    }
    ctx->pc = 0x1A9340u;
label_1a9340:
    // 0x1a9340: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1a9340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1a9344: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a9344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a9348: 0x10430029  beq         $v0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x1A9348u;
    {
        const bool branch_taken_0x1a9348 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A934Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9348u;
            // 0x1a934c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9348) {
            ctx->pc = 0x1A93F0u;
            goto label_1a93f0;
        }
    }
    ctx->pc = 0x1A9350u;
label_1a9350:
    // 0x1a9350: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1a9350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a9354: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1a9354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a9358: 0x50400021  beql        $v0, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x1A9358u;
    {
        const bool branch_taken_0x1a9358 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9358) {
            ctx->pc = 0x1A935Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9358u;
            // 0x1a935c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A93E0u;
            goto label_1a93e0;
        }
    }
    ctx->pc = 0x1A9360u;
    // 0x1a9360: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x1a9360u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a9364: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1a9364u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1a9368: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x1A9368u;
    {
        const bool branch_taken_0x1a9368 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A936Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9368u;
            // 0x1a936c: 0x24830014  addiu       $v1, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9368) {
            ctx->pc = 0x1A93DCu;
            goto label_1a93dc;
        }
    }
    ctx->pc = 0x1A9370u;
    // 0x1a9370: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1a9370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
    // 0x1a9374: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1a9374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1a9378: 0x10430018  beq         $v0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1A9378u;
    {
        const bool branch_taken_0x1a9378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A937Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9378u;
            // 0x1a937c: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9378) {
            ctx->pc = 0x1A93DCu;
            goto label_1a93dc;
        }
    }
    ctx->pc = 0x1A9380u;
label_1a9380:
    // 0x1a9380: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x1a9380u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x1a9384: 0x8cc50020  lw          $a1, 0x20($a2)
    ctx->pc = 0x1a9384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x1a9388: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x1A9388u;
    {
        const bool branch_taken_0x1a9388 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A938Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9388u;
            // 0x1a938c: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9388) {
            ctx->pc = 0x1A93CCu;
            goto label_1a93cc;
        }
    }
    ctx->pc = 0x1A9390u;
    // 0x1a9390: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x1a9390u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x1a9394: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1a9394u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1a9398: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A9398u;
    {
        const bool branch_taken_0x1a9398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A939Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9398u;
            // 0x1a939c: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9398) {
            ctx->pc = 0x1A93CCu;
            goto label_1a93cc;
        }
    }
    ctx->pc = 0x1A93A0u;
    // 0x1a93a0: 0x52400005  beql        $s2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A93A0u;
    {
        const bool branch_taken_0x1a93a0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a93a0) {
            ctx->pc = 0x1A93A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A93A0u;
            // 0x1a93a4: 0x8e2200a4  lw          $v0, 0xA4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A93B8u;
            goto label_1a93b8;
        }
    }
    ctx->pc = 0x1A93A8u;
    // 0x1a93a8: 0x94c2002a  lhu         $v0, 0x2A($a2)
    ctx->pc = 0x1a93a8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 42)));
    // 0x1a93ac: 0x16420007  bne         $s2, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A93ACu;
    {
        const bool branch_taken_0x1a93ac = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A93B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A93ACu;
            // 0x1a93b0: 0x8fa20014  lw          $v0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a93ac) {
            ctx->pc = 0x1A93CCu;
            goto label_1a93cc;
        }
    }
    ctx->pc = 0x1A93B4u;
    // 0x1a93b4: 0x8e2200a4  lw          $v0, 0xA4($s1)
    ctx->pc = 0x1a93b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
label_1a93b8:
    // 0x1a93b8: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1a93b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1a93bc: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1a93bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1a93c0: 0x40f809  jalr        $v0
    ctx->pc = 0x1A93C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A93C8u);
        ctx->pc = 0x1A93C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A93C0u;
            // 0x1a93c4: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A93C8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A92A8u: goto label_1a92a8;
            case 0x1A92C4u: goto label_1a92c4;
            case 0x1A92D4u: goto label_1a92d4;
            case 0x1A930Cu: goto label_1a930c;
            case 0x1A9314u: goto label_1a9314;
            case 0x1A932Cu: goto label_1a932c;
            case 0x1A9340u: goto label_1a9340;
            case 0x1A9350u: goto label_1a9350;
            case 0x1A9380u: goto label_1a9380;
            case 0x1A93B8u: goto label_1a93b8;
            case 0x1A93CCu: goto label_1a93cc;
            case 0x1A93DCu: goto label_1a93dc;
            case 0x1A93E0u: goto label_1a93e0;
            case 0x1A93F0u: goto label_1a93f0;
            case 0x1A940Cu: goto label_1a940c;
            case 0x1A9420u: goto label_1a9420;
            case 0x1A9430u: goto label_1a9430;
            case 0x1A9460u: goto label_1a9460;
            case 0x1A94ACu: goto label_1a94ac;
            case 0x1A94C8u: goto label_1a94c8;
            case 0x1A94D8u: goto label_1a94d8;
            case 0x1A94DCu: goto label_1a94dc;
            case 0x1A94ECu: goto label_1a94ec;
            case 0x1A9508u: goto label_1a9508;
            case 0x1A950Cu: goto label_1a950c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A93C8u; }
            if (ctx->pc != 0x1A93C8u) { return; }
        }
        }
    }
    ctx->pc = 0x1A93C8u;
    // 0x1a93c8: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x1a93c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_1a93cc:
    // 0x1a93cc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1a93ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a93d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a93d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a93d4: 0x1443ffea  bne         $v0, $v1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1A93D4u;
    {
        const bool branch_taken_0x1a93d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A93D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A93D4u;
            // 0x1a93d8: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a93d4) {
            ctx->pc = 0x1A9380u;
            runtime->cooperativeGuestYield();
            goto label_1a9380;
        }
    }
    ctx->pc = 0x1A93DCu;
label_1a93dc:
    // 0x1a93dc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1a93dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1a93e0:
    // 0x1a93e0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1a93e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a93e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a93e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a93e8: 0x1443ffd9  bne         $v0, $v1, . + 4 + (-0x27 << 2)
    ctx->pc = 0x1A93E8u;
    {
        const bool branch_taken_0x1a93e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A93ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A93E8u;
            // 0x1a93ec: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a93e8) {
            ctx->pc = 0x1A9350u;
            runtime->cooperativeGuestYield();
            goto label_1a9350;
        }
    }
    ctx->pc = 0x1A93F0u;
label_1a93f0:
    // 0x1a93f0: 0xc06cd28  jal         func_1B34A0
    ctx->pc = 0x1A93F0u;
    SET_GPR_U32(ctx, 31, 0x1A93F8u);
    ctx->pc = 0x1A93F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A93F0u;
            // 0x1a93f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B34A0u;
    if (runtime->hasFunction(0x1B34A0u)) {
        auto targetFn = runtime->lookupFunction(0x1B34A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A93F8u; }
        if (ctx->pc != 0x1A93F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1b34a0_0x1b3508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A93F8u; }
        if (ctx->pc != 0x1A93F8u) { return; }
    }
    ctx->pc = 0x1A93F8u;
    // 0x1a93f8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a93f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a93fc: 0x1460ffd0  bnez        $v1, . + 4 + (-0x30 << 2)
    ctx->pc = 0x1A93FCu;
    {
        const bool branch_taken_0x1a93fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A9400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A93FCu;
            // 0x1a9400: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a93fc) {
            ctx->pc = 0x1A9340u;
            runtime->cooperativeGuestYield();
            goto label_1a9340;
        }
    }
    ctx->pc = 0x1A9404u;
    // 0x1a9404: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x1A9404u;
    {
        const bool branch_taken_0x1a9404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9404u;
            // 0x1a9408: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9404) {
            ctx->pc = 0x1A9508u;
            goto label_1a9508;
        }
    }
    ctx->pc = 0x1A940Cu;
label_1a940c:
    // 0x1a940c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a940cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9410: 0xc06a732  jal         func_1A9CC8
    ctx->pc = 0x1A9410u;
    SET_GPR_U32(ctx, 31, 0x1A9418u);
    ctx->pc = 0x1A9414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9410u;
            // 0x1a9414: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9CC8u;
    if (runtime->hasFunction(0x1A9CC8u)) {
        auto targetFn = runtime->lookupFunction(0x1A9CC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9418u; }
        if (ctx->pc != 0x1A9418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A9CC8_0x1a9cc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9418u; }
        if (ctx->pc != 0x1A9418u) { return; }
    }
    ctx->pc = 0x1A9418u;
    // 0x1a9418: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x1A9418u;
    {
        const bool branch_taken_0x1a9418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A941Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9418u;
            // 0x1a941c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9418) {
            ctx->pc = 0x1A94ECu;
            goto label_1a94ec;
        }
    }
    ctx->pc = 0x1A9420u;
label_1a9420:
    // 0x1a9420: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x1a9420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x1a9424: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a9424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1a9428: 0x10430030  beq         $v0, $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x1A9428u;
    {
        const bool branch_taken_0x1a9428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A942Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9428u;
            // 0x1a942c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9428) {
            ctx->pc = 0x1A94ECu;
            goto label_1a94ec;
        }
    }
    ctx->pc = 0x1A9430u;
label_1a9430:
    // 0x1a9430: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1a9430u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1a9434: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x1a9434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1a9438: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x1A9438u;
    {
        const bool branch_taken_0x1a9438 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9438) {
            ctx->pc = 0x1A943Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9438u;
            // 0x1a943c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A94DCu;
            goto label_1a94dc;
        }
    }
    ctx->pc = 0x1A9440u;
    // 0x1a9440: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x1a9440u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a9444: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1a9444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1a9448: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1A9448u;
    {
        const bool branch_taken_0x1a9448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A944Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9448u;
            // 0x1a944c: 0x24830014  addiu       $v1, $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9448) {
            ctx->pc = 0x1A94D8u;
            goto label_1a94d8;
        }
    }
    ctx->pc = 0x1A9450u;
    // 0x1a9450: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x1a9450u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x1a9454: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x1a9454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x1a9458: 0x1043001f  beq         $v0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1A9458u;
    {
        const bool branch_taken_0x1a9458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A945Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9458u;
            // 0x1a945c: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9458) {
            ctx->pc = 0x1A94D8u;
            goto label_1a94d8;
        }
    }
    ctx->pc = 0x1A9460u;
label_1a9460:
    // 0x1a9460: 0x8fb00024  lw          $s0, 0x24($sp)
    ctx->pc = 0x1a9460u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x1a9464: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1a9464u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1a9468: 0x50400017  beql        $v0, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x1A9468u;
    {
        const bool branch_taken_0x1a9468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9468) {
            ctx->pc = 0x1A946Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9468u;
            // 0x1a946c: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A94C8u;
            goto label_1a94c8;
        }
    }
    ctx->pc = 0x1A9470u;
    // 0x1a9470: 0x94420004  lhu         $v0, 0x4($v0)
    ctx->pc = 0x1a9470u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1a9474: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1a9474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1a9478: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1A9478u;
    {
        const bool branch_taken_0x1a9478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A947Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9478u;
            // 0x1a947c: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9478) {
            ctx->pc = 0x1A94C8u;
            goto label_1a94c8;
        }
    }
    ctx->pc = 0x1A9480u;
    // 0x1a9480: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a9480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9484: 0xc0696f0  jal         func_1A5BC0
    ctx->pc = 0x1A9484u;
    SET_GPR_U32(ctx, 31, 0x1A948Cu);
    ctx->pc = 0x1A9488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9484u;
            // 0x1a9488: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A5BC0u;
    if (runtime->hasFunction(0x1A5BC0u)) {
        auto targetFn = runtime->lookupFunction(0x1A5BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A948Cu; }
        if (ctx->pc != 0x1A948Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a5bc0_0x1a5c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A948Cu; }
        if (ctx->pc != 0x1A948Cu) { return; }
    }
    ctx->pc = 0x1A948Cu;
    // 0x1a948c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1A948Cu;
    {
        const bool branch_taken_0x1a948c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A948Cu;
            // 0x1a9490: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a948c) {
            ctx->pc = 0x1A94C8u;
            goto label_1a94c8;
        }
    }
    ctx->pc = 0x1A9494u;
    // 0x1a9494: 0x52400005  beql        $s2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A9494u;
    {
        const bool branch_taken_0x1a9494 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a9494) {
            ctx->pc = 0x1A9498u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9494u;
            // 0x1a9498: 0x8e2200a4  lw          $v0, 0xA4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A94ACu;
            goto label_1a94ac;
        }
    }
    ctx->pc = 0x1A949Cu;
    // 0x1a949c: 0x9602002a  lhu         $v0, 0x2A($s0)
    ctx->pc = 0x1a949cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 42)));
    // 0x1a94a0: 0x16420009  bne         $s2, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A94A0u;
    {
        const bool branch_taken_0x1a94a0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A94A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A94A0u;
            // 0x1a94a4: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a94a0) {
            ctx->pc = 0x1A94C8u;
            goto label_1a94c8;
        }
    }
    ctx->pc = 0x1A94A8u;
    // 0x1a94a8: 0x8e2200a4  lw          $v0, 0xA4($s1)
    ctx->pc = 0x1a94a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 164)));
label_1a94ac:
    // 0x1a94ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a94acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a94b0: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x1a94b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1a94b4: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1a94b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1a94b8: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1a94b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1a94bc: 0x40f809  jalr        $v0
    ctx->pc = 0x1A94BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A94C4u);
        ctx->pc = 0x1A94C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A94BCu;
            // 0x1a94c0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A94C4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A92A8u: goto label_1a92a8;
            case 0x1A92C4u: goto label_1a92c4;
            case 0x1A92D4u: goto label_1a92d4;
            case 0x1A930Cu: goto label_1a930c;
            case 0x1A9314u: goto label_1a9314;
            case 0x1A932Cu: goto label_1a932c;
            case 0x1A9340u: goto label_1a9340;
            case 0x1A9350u: goto label_1a9350;
            case 0x1A9380u: goto label_1a9380;
            case 0x1A93B8u: goto label_1a93b8;
            case 0x1A93CCu: goto label_1a93cc;
            case 0x1A93DCu: goto label_1a93dc;
            case 0x1A93E0u: goto label_1a93e0;
            case 0x1A93F0u: goto label_1a93f0;
            case 0x1A940Cu: goto label_1a940c;
            case 0x1A9420u: goto label_1a9420;
            case 0x1A9430u: goto label_1a9430;
            case 0x1A9460u: goto label_1a9460;
            case 0x1A94ACu: goto label_1a94ac;
            case 0x1A94C8u: goto label_1a94c8;
            case 0x1A94D8u: goto label_1a94d8;
            case 0x1A94DCu: goto label_1a94dc;
            case 0x1A94ECu: goto label_1a94ec;
            case 0x1A9508u: goto label_1a9508;
            case 0x1A950Cu: goto label_1a950c;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A94C4u; }
            if (ctx->pc != 0x1A94C4u) { return; }
        }
        }
    }
    ctx->pc = 0x1A94C4u;
    // 0x1a94c4: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x1a94c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_1a94c8:
    // 0x1a94c8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1a94c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a94cc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a94ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a94d0: 0x1443ffe3  bne         $v0, $v1, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1A94D0u;
    {
        const bool branch_taken_0x1a94d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A94D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A94D0u;
            // 0x1a94d4: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a94d0) {
            ctx->pc = 0x1A9460u;
            runtime->cooperativeGuestYield();
            goto label_1a9460;
        }
    }
    ctx->pc = 0x1A94D8u;
label_1a94d8:
    // 0x1a94d8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1a94d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1a94dc:
    // 0x1a94dc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1a94dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a94e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a94e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a94e4: 0x1443ffd2  bne         $v0, $v1, . + 4 + (-0x2E << 2)
    ctx->pc = 0x1A94E4u;
    {
        const bool branch_taken_0x1a94e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A94E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A94E4u;
            // 0x1a94e8: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a94e4) {
            ctx->pc = 0x1A9430u;
            runtime->cooperativeGuestYield();
            goto label_1a9430;
        }
    }
    ctx->pc = 0x1A94ECu;
label_1a94ec:
    // 0x1a94ec: 0xc06cd28  jal         func_1B34A0
    ctx->pc = 0x1A94ECu;
    SET_GPR_U32(ctx, 31, 0x1A94F4u);
    ctx->pc = 0x1A94F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A94ECu;
            // 0x1a94f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B34A0u;
    if (runtime->hasFunction(0x1B34A0u)) {
        auto targetFn = runtime->lookupFunction(0x1B34A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A94F4u; }
        if (ctx->pc != 0x1A94F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1b34a0_0x1b3508(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A94F4u; }
        if (ctx->pc != 0x1A94F4u) { return; }
    }
    ctx->pc = 0x1A94F4u;
    // 0x1a94f4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a94f4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a94f8: 0x1460ffc9  bnez        $v1, . + 4 + (-0x37 << 2)
    ctx->pc = 0x1A94F8u;
    {
        const bool branch_taken_0x1a94f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A94FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A94F8u;
            // 0x1a94fc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a94f8) {
            ctx->pc = 0x1A9420u;
            runtime->cooperativeGuestYield();
            goto label_1a9420;
        }
    }
    ctx->pc = 0x1A9500u;
    // 0x1a9500: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x1a9500u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1a9504: 0x0  nop
    ctx->pc = 0x1a9504u;
    // NOP
label_1a9508:
    // 0x1a9508: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x1a9508u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1a950c:
    // 0x1a950c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x1a950cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a9510: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1a9510u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a9514: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a9514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a9518: 0x3e00008  jr          $ra
    ctx->pc = 0x1A9518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A951Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9518u;
            // 0x1a951c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A92A8u: goto label_1a92a8;
            case 0x1A92C4u: goto label_1a92c4;
            case 0x1A92D4u: goto label_1a92d4;
            case 0x1A930Cu: goto label_1a930c;
            case 0x1A9314u: goto label_1a9314;
            case 0x1A932Cu: goto label_1a932c;
            case 0x1A9340u: goto label_1a9340;
            case 0x1A9350u: goto label_1a9350;
            case 0x1A9380u: goto label_1a9380;
            case 0x1A93B8u: goto label_1a93b8;
            case 0x1A93CCu: goto label_1a93cc;
            case 0x1A93DCu: goto label_1a93dc;
            case 0x1A93E0u: goto label_1a93e0;
            case 0x1A93F0u: goto label_1a93f0;
            case 0x1A940Cu: goto label_1a940c;
            case 0x1A9420u: goto label_1a9420;
            case 0x1A9430u: goto label_1a9430;
            case 0x1A9460u: goto label_1a9460;
            case 0x1A94ACu: goto label_1a94ac;
            case 0x1A94C8u: goto label_1a94c8;
            case 0x1A94D8u: goto label_1a94d8;
            case 0x1A94DCu: goto label_1a94dc;
            case 0x1A94ECu: goto label_1a94ec;
            case 0x1A9508u: goto label_1a9508;
            case 0x1A950Cu: goto label_1a950c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A9520u;
}
