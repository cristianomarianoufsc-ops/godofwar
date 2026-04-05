#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021D3E0
// Address: 0x21d3e0 - 0x21d5e8
void sub_0021D3E0_0x21d3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D3E0_0x21d3e0");
#endif

    ctx->pc = 0x21d3e0u;

    // 0x21d3e0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21d3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21d3e4: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x21d3e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x21d3e8: 0x8c42e560  lw          $v0, -0x1AA0($v0)
    ctx->pc = 0x21d3e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960480)));
    // 0x21d3ec: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x21d3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x21d3f0: 0x2442fffd  addiu       $v0, $v0, -0x3
    ctx->pc = 0x21d3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x21d3f4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x21d3f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x21d3f8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x21d3f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x21d3fc: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x21d3fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x21d400: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x21d400u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x21d404: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x21d404u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x21d408: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x21d408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x21d40c: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x21d40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x21d410: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x21D410u;
    {
        const bool branch_taken_0x21d410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D410u;
            // 0x21d414: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d410) {
            ctx->pc = 0x21D43Cu;
            goto label_21d43c;
        }
    }
    ctx->pc = 0x21D418u;
    // 0x21d418: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21d418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21d41c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x21d41cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x21d420: 0x8c43cb94  lw          $v1, -0x346C($v0)
    ctx->pc = 0x21d420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x21d424: 0x8c62020c  lw          $v0, 0x20C($v1)
    ctx->pc = 0x21d424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 524)));
    // 0x21d428: 0x50440001  beql        $v0, $a0, . + 4 + (0x1 << 2)
    ctx->pc = 0x21D428u;
    {
        const bool branch_taken_0x21d428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x21d428) {
            ctx->pc = 0x21D42Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21D428u;
            // 0x21d42c: 0x8c641574  lw          $a0, 0x1574($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5492)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21D430u;
            goto label_21d430;
        }
    }
    ctx->pc = 0x21D430u;
label_21d430:
    // 0x21d430: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x21d430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x21d434: 0x14820061  bne         $a0, $v0, . + 4 + (0x61 << 2)
    ctx->pc = 0x21D434u;
    {
        const bool branch_taken_0x21d434 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x21D438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D434u;
            // 0x21d438: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d434) {
            ctx->pc = 0x21D5BCu;
            goto label_21d5bc;
        }
    }
    ctx->pc = 0x21D43Cu;
label_21d43c:
    // 0x21d43c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x21d43cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x21d440: 0x8c53ed58  lw          $s3, -0x12A8($v0)
    ctx->pc = 0x21d440u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962520)));
    // 0x21d444: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x21d444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x21d448: 0x8c42d9c8  lw          $v0, -0x2638($v0)
    ctx->pc = 0x21d448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957512)));
    // 0x21d44c: 0x2c520001  sltiu       $s2, $v0, 0x1
    ctx->pc = 0x21d44cu;
    SET_GPR_U64(ctx, 18, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x21d450: 0x38420007  xori        $v0, $v0, 0x7
    ctx->pc = 0x21d450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)7);
    // 0x21d454: 0x3c14002a  lui         $s4, 0x2A
    ctx->pc = 0x21d454u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)42 << 16));
    // 0x21d458: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x21d458u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x21d45c: 0x8e82e56c  lw          $v0, -0x1A94($s4)
    ctx->pc = 0x21d45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294960492)));
    // 0x21d460: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x21D460u;
    {
        const bool branch_taken_0x21d460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21d460) {
            ctx->pc = 0x21D478u;
            goto label_21d478;
        }
    }
    ctx->pc = 0x21D468u;
    // 0x21d468: 0x3c16002a  lui         $s6, 0x2A
    ctx->pc = 0x21d468u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)42 << 16));
    // 0x21d46c: 0x8ec2e570  lw          $v0, -0x1A90($s6)
    ctx->pc = 0x21d46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294960496)));
    // 0x21d470: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x21D470u;
    {
        const bool branch_taken_0x21d470 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d470) {
            ctx->pc = 0x21D520u;
            goto label_21d520;
        }
    }
    ctx->pc = 0x21D478u;
label_21d478:
    // 0x21d478: 0x16400050  bnez        $s2, . + 4 + (0x50 << 2)
    ctx->pc = 0x21D478u;
    {
        const bool branch_taken_0x21d478 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D47Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D478u;
            // 0x21d47c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d478) {
            ctx->pc = 0x21D5BCu;
            goto label_21d5bc;
        }
    }
    ctx->pc = 0x21D480u;
    // 0x21d480: 0x1620004e  bnez        $s1, . + 4 + (0x4E << 2)
    ctx->pc = 0x21D480u;
    {
        const bool branch_taken_0x21d480 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D480u;
            // 0x21d484: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d480) {
            ctx->pc = 0x21D5BCu;
            goto label_21d5bc;
        }
    }
    ctx->pc = 0x21D488u;
    // 0x21d488: 0x2663fffc  addiu       $v1, $s3, -0x4
    ctx->pc = 0x21d488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
    // 0x21d48c: 0x8e02e5fc  lw          $v0, -0x1A04($s0)
    ctx->pc = 0x21d48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294960636)));
    // 0x21d490: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x21d490u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x21d494: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x21D494u;
    {
        const bool branch_taken_0x21d494 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D494u;
            // 0x21d498: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d494) {
            ctx->pc = 0x21D5B0u;
            goto label_21d5b0;
        }
    }
    ctx->pc = 0x21D49Cu;
    // 0x21d49c: 0x8c42cb94  lw          $v0, -0x346C($v0)
    ctx->pc = 0x21d49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953876)));
    // 0x21d4a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21d4a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d4a4: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x21D4A4u;
    SET_GPR_U32(ctx, 31, 0x21D4ACu);
    ctx->pc = 0x21D4A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D4A4u;
            // 0x21d4a8: 0xac400270  sw          $zero, 0x270($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 624), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D4ACu; }
        if (ctx->pc != 0x21D4ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D4ACu; }
        if (ctx->pc != 0x21D4ACu) { return; }
    }
    ctx->pc = 0x21D4ACu;
    // 0x21d4ac: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x21d4acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x21d4b0: 0x8c82e564  lw          $v0, -0x1A9C($a0)
    ctx->pc = 0x21d4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960484)));
    // 0x21d4b4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x21D4B4u;
    {
        const bool branch_taken_0x21d4b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D4B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D4B4u;
            // 0x21d4b8: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d4b4) {
            ctx->pc = 0x21D4E0u;
            goto label_21d4e0;
        }
    }
    ctx->pc = 0x21D4BCu;
    // 0x21d4bc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21d4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21d4c0: 0x8c42e568  lw          $v0, -0x1A98($v0)
    ctx->pc = 0x21d4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960488)));
    // 0x21d4c4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x21D4C4u;
    {
        const bool branch_taken_0x21d4c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D4C4u;
            // 0x21d4c8: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d4c4) {
            ctx->pc = 0x21D4E0u;
            goto label_21d4e0;
        }
    }
    ctx->pc = 0x21D4CCu;
    // 0x21d4cc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21d4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21d4d0: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x21d4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x21d4d4: 0x8c42e5f4  lw          $v0, -0x1A0C($v0)
    ctx->pc = 0x21d4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960628)));
    // 0x21d4d8: 0xac62f1f0  sw          $v0, -0xE10($v1)
    ctx->pc = 0x21d4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294963696), GPR_U32(ctx, 2));
    // 0x21d4dc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21d4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_21d4e0:
    // 0x21d4e0: 0x8c83e564  lw          $v1, -0x1A9C($a0)
    ctx->pc = 0x21d4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294960484)));
    // 0x21d4e4: 0xae80e56c  sw          $zero, -0x1A94($s4)
    ctx->pc = 0x21d4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294960492), GPR_U32(ctx, 0));
    // 0x21d4e8: 0x1460000a  bnez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x21D4E8u;
    {
        const bool branch_taken_0x21d4e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D4ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D4E8u;
            // 0x21d4ec: 0xac40e570  sw          $zero, -0x1A90($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294960496), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d4e8) {
            ctx->pc = 0x21D514u;
            goto label_21d514;
        }
    }
    ctx->pc = 0x21D4F0u;
    // 0x21d4f0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21d4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21d4f4: 0x8c42e568  lw          $v0, -0x1A98($v0)
    ctx->pc = 0x21d4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960488)));
    // 0x21d4f8: 0x5440002f  bnel        $v0, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x21D4F8u;
    {
        const bool branch_taken_0x21d4f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21d4f8) {
            ctx->pc = 0x21D4FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21D4F8u;
            // 0x21d4fc: 0xae13e5fc  sw          $s3, -0x1A04($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294960636), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21D5B8u;
            goto label_21d5b8;
        }
    }
    ctx->pc = 0x21D500u;
    // 0x21d500: 0xc08757e  jal         func_21D5F8
    ctx->pc = 0x21D500u;
    SET_GPR_U32(ctx, 31, 0x21D508u);
    ctx->pc = 0x21D504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D500u;
            // 0x21d504: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D5F8u;
    if (runtime->hasFunction(0x21D5F8u)) {
        auto targetFn = runtime->lookupFunction(0x21D5F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D508u; }
        if (ctx->pc != 0x21D508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021D5F8_0x21d5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D508u; }
        if (ctx->pc != 0x21D508u) { return; }
    }
    ctx->pc = 0x21D508u;
    // 0x21d508: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x21d508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x21d50c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x21d50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21d510: 0xac62e5f0  sw          $v0, -0x1A10($v1)
    ctx->pc = 0x21d510u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960624), GPR_U32(ctx, 2));
label_21d514:
    // 0x21d514: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x21D514u;
    {
        const bool branch_taken_0x21d514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D514u;
            // 0x21d518: 0xae13e5fc  sw          $s3, -0x1A04($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294960636), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d514) {
            ctx->pc = 0x21D5B8u;
            goto label_21d5b8;
        }
    }
    ctx->pc = 0x21D51Cu;
    // 0x21d51c: 0x0  nop
    ctx->pc = 0x21d51cu;
    // NOP
label_21d520:
    // 0x21d520: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x21D520u;
    {
        const bool branch_taken_0x21d520 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D520u;
            // 0x21d524: 0x3c15002a  lui         $s5, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d520) {
            ctx->pc = 0x21D530u;
            goto label_21d530;
        }
    }
    ctx->pc = 0x21D528u;
    // 0x21d528: 0x12200024  beqz        $s1, . + 4 + (0x24 << 2)
    ctx->pc = 0x21D528u;
    {
        const bool branch_taken_0x21d528 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D52Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D528u;
            // 0x21d52c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d528) {
            ctx->pc = 0x21D5BCu;
            goto label_21d5bc;
        }
    }
    ctx->pc = 0x21D530u;
label_21d530:
    // 0x21d530: 0x2663fffc  addiu       $v1, $s3, -0x4
    ctx->pc = 0x21d530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
    // 0x21d534: 0x8ea2e5fc  lw          $v0, -0x1A04($s5)
    ctx->pc = 0x21d534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294960636)));
    // 0x21d538: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x21d538u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x21d53c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x21D53Cu;
    {
        const bool branch_taken_0x21d53c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D53Cu;
            // 0x21d540: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d53c) {
            ctx->pc = 0x21D5B8u;
            goto label_21d5b8;
        }
    }
    ctx->pc = 0x21D544u;
    // 0x21d544: 0xc08757e  jal         func_21D5F8
    ctx->pc = 0x21D544u;
    SET_GPR_U32(ctx, 31, 0x21D54Cu);
    ctx->pc = 0x21D548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D544u;
            // 0x21d548: 0x3c10002a  lui         $s0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D5F8u;
    if (runtime->hasFunction(0x21D5F8u)) {
        auto targetFn = runtime->lookupFunction(0x21D5F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D54Cu; }
        if (ctx->pc != 0x21D54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0021D5F8_0x21d5f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D54Cu; }
        if (ctx->pc != 0x21D54Cu) { return; }
    }
    ctx->pc = 0x21D54Cu;
    // 0x21d54c: 0x8e02cb94  lw          $v0, -0x346C($s0)
    ctx->pc = 0x21d54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953876)));
    // 0x21d550: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x21d550u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x21d554: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x21d554u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d558: 0xc06e106  jal         func_1B8418
    ctx->pc = 0x21D558u;
    SET_GPR_U32(ctx, 31, 0x21D560u);
    ctx->pc = 0x21D55Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D558u;
            // 0x21d55c: 0xac430270  sw          $v1, 0x270($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 624), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B8418u;
    if (runtime->hasFunction(0x1B8418u)) {
        auto targetFn = runtime->lookupFunction(0x1B8418u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D560u; }
        if (ctx->pc != 0x21D560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B8418_0x1b8418(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D560u; }
        if (ctx->pc != 0x21D560u) { return; }
    }
    ctx->pc = 0x21D560u;
    // 0x21d560: 0x8e04cb94  lw          $a0, -0x346C($s0)
    ctx->pc = 0x21d560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294953876)));
    // 0x21d564: 0xc06e642  jal         func_1B9908
    ctx->pc = 0x21D564u;
    SET_GPR_U32(ctx, 31, 0x21D56Cu);
    ctx->pc = 0x21D568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21D564u;
            // 0x21d568: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9908u;
    if (runtime->hasFunction(0x1B9908u)) {
        auto targetFn = runtime->lookupFunction(0x1B9908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D56Cu; }
        if (ctx->pc != 0x21D56Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9908_0x1b9908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21D56Cu; }
        if (ctx->pc != 0x21D56Cu) { return; }
    }
    ctx->pc = 0x21D56Cu;
    // 0x21d56c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21d56cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21d570: 0x8c42e564  lw          $v0, -0x1A9C($v0)
    ctx->pc = 0x21d570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960484)));
    // 0x21d574: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x21D574u;
    {
        const bool branch_taken_0x21d574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21d574) {
            ctx->pc = 0x21D578u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21D574u;
            // 0x21d578: 0xae92e56c  sw          $s2, -0x1A94($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294960492), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21D5A4u;
            goto label_21d5a4;
        }
    }
    ctx->pc = 0x21D57Cu;
    // 0x21d57c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x21d57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x21d580: 0x8c42e568  lw          $v0, -0x1A98($v0)
    ctx->pc = 0x21d580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960488)));
    // 0x21d584: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x21D584u;
    {
        const bool branch_taken_0x21d584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x21d584) {
            ctx->pc = 0x21D588u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x21D584u;
            // 0x21d588: 0xae92e56c  sw          $s2, -0x1A94($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4294960492), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x21D5A4u;
            goto label_21d5a4;
        }
    }
    ctx->pc = 0x21D58Cu;
    // 0x21d58c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x21d58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x21d590: 0x3c04002a  lui         $a0, 0x2A
    ctx->pc = 0x21d590u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)42 << 16));
    // 0x21d594: 0x8c43f1f0  lw          $v1, -0xE10($v0)
    ctx->pc = 0x21d594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963696)));
    // 0x21d598: 0xac40f1f0  sw          $zero, -0xE10($v0)
    ctx->pc = 0x21d598u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294963696), GPR_U32(ctx, 0));
    // 0x21d59c: 0xac83e5f4  sw          $v1, -0x1A0C($a0)
    ctx->pc = 0x21d59cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294960628), GPR_U32(ctx, 3));
    // 0x21d5a0: 0xae92e56c  sw          $s2, -0x1A94($s4)
    ctx->pc = 0x21d5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4294960492), GPR_U32(ctx, 18));
label_21d5a4:
    // 0x21d5a4: 0xaed1e570  sw          $s1, -0x1A90($s6)
    ctx->pc = 0x21d5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4294960496), GPR_U32(ctx, 17));
    // 0x21d5a8: 0xaeb3e5fc  sw          $s3, -0x1A04($s5)
    ctx->pc = 0x21d5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4294960636), GPR_U32(ctx, 19));
    // 0x21d5ac: 0x0  nop
    ctx->pc = 0x21d5acu;
    // NOP
label_21d5b0:
    // 0x21d5b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x21D5B0u;
    {
        const bool branch_taken_0x21d5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D5B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D5B0u;
            // 0x21d5b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d5b0) {
            ctx->pc = 0x21D5BCu;
            goto label_21d5bc;
        }
    }
    ctx->pc = 0x21D5B8u;
label_21d5b8:
    // 0x21d5b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21d5b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_21d5bc:
    // 0x21d5bc: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x21d5bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21d5c0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x21d5c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21d5c4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x21d5c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21d5c8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x21d5c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21d5cc: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x21d5ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21d5d0: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x21d5d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21d5d4: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x21d5d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d5d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21d5d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d5dc: 0x3e00008  jr          $ra
    ctx->pc = 0x21D5DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21D5DCu;
            // 0x21d5e0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x21D430u: goto label_21d430;
            case 0x21D43Cu: goto label_21d43c;
            case 0x21D478u: goto label_21d478;
            case 0x21D4E0u: goto label_21d4e0;
            case 0x21D514u: goto label_21d514;
            case 0x21D520u: goto label_21d520;
            case 0x21D530u: goto label_21d530;
            case 0x21D5A4u: goto label_21d5a4;
            case 0x21D5B0u: goto label_21d5b0;
            case 0x21D5B8u: goto label_21d5b8;
            case 0x21D5BCu: goto label_21d5bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x21D5E4u;
    // 0x21d5e4: 0x0  nop
    ctx->pc = 0x21d5e4u;
    // NOP
}
