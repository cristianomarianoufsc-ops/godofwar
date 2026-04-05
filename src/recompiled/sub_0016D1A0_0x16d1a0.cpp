#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016D1A0
// Address: 0x16d1a0 - 0x16d920
void sub_0016D1A0_0x16d1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016D1A0_0x16d1a0");
#endif

    ctx->pc = 0x16d1a0u;

    // 0x16d1a0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x16d1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x16d1a4: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x16d1a4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x16d1a8: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x16d1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x16d1ac: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x16d1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x16d1b0: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x16d1b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d1b4: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x16d1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x16d1b8: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x16d1b8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d1bc: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x16d1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x16d1c0: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x16d1c0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d1c4: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x16d1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x16d1c8: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x16d1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x16d1cc: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x16d1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x16d1d0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x16d1d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x16d1d4: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x16d1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x16d1d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x16d1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x16d1dc: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x16d1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x16d1e0: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x16d1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x16d1e4: 0x94720000  lhu         $s2, 0x0($v1)
    ctx->pc = 0x16d1e4u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16d1e8: 0x32420001  andi        $v0, $s2, 0x1
    ctx->pc = 0x16d1e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x16d1ec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16D1ECu;
    {
        const bool branch_taken_0x16d1ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D1ECu;
            // 0x16d1f0: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d1ec) {
            ctx->pc = 0x16D208u;
            goto label_16d208;
        }
    }
    ctx->pc = 0x16D1F4u;
    // 0x16d1f4: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x16d1f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
    // 0x16d1f8: 0x14400079  bnez        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x16D1F8u;
    {
        const bool branch_taken_0x16d1f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D1FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D1F8u;
            // 0x16d1fc: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d1f8) {
            ctx->pc = 0x16D3E0u;
            goto label_16d3e0;
        }
    }
    ctx->pc = 0x16D200u;
    // 0x16d200: 0x36520002  ori         $s2, $s2, 0x2
    ctx->pc = 0x16d200u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)2);
    // 0x16d204: 0xa4720000  sh          $s2, 0x0($v1)
    ctx->pc = 0x16d204u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 18));
label_16d208:
    // 0x16d208: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16d208u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d20c: 0x94560002  lhu         $s6, 0x2($v0)
    ctx->pc = 0x16d20cu;
    SET_GPR_U32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x16d210: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x16d210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x16d214: 0x12e00004  beqz        $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x16D214u;
    {
        const bool branch_taken_0x16d214 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D214u;
            // 0x16d218: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d214) {
            ctx->pc = 0x16D228u;
            goto label_16d228;
        }
    }
    ctx->pc = 0x16D21Cu;
    // 0x16d21c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x16d21cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x16d220: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x16D220u;
    {
        const bool branch_taken_0x16d220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D220u;
            // 0x16d224: 0x8c55f18c  lw          $s5, -0xE74($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963596)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d220) {
            ctx->pc = 0x16D22Cu;
            goto label_16d22c;
        }
    }
    ctx->pc = 0x16D228u;
label_16d228:
    // 0x16d228: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x16d228u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_16d22c:
    // 0x16d22c: 0x12c0006b  beqz        $s6, . + 4 + (0x6B << 2)
    ctx->pc = 0x16D22Cu;
    {
        const bool branch_taken_0x16d22c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D22Cu;
            // 0x16d230: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d22c) {
            ctx->pc = 0x16D3DCu;
            goto label_16d3dc;
        }
    }
    ctx->pc = 0x16D234u;
    // 0x16d234: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16d234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_16d238:
    // 0x16d238: 0x94500000  lhu         $s0, 0x0($v0)
    ctx->pc = 0x16d238u;
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16d23c: 0x24430004  addiu       $v1, $v0, 0x4
    ctx->pc = 0x16d23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x16d240: 0x94510002  lhu         $s1, 0x2($v0)
    ctx->pc = 0x16d240u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x16d244: 0x12a00008  beqz        $s5, . + 4 + (0x8 << 2)
    ctx->pc = 0x16D244u;
    {
        const bool branch_taken_0x16d244 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D244u;
            // 0x16d248: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d244) {
            ctx->pc = 0x16D268u;
            goto label_16d268;
        }
    }
    ctx->pc = 0x16D24Cu;
    // 0x16d24c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x16d24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d250: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16d250u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d254: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x16d254u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d258: 0x2a0f809  jalr        $s5
    ctx->pc = 0x16D258u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x16D260u);
        ctx->pc = 0x16D25Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D258u;
            // 0x16d25c: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16D260u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D208u: goto label_16d208;
            case 0x16D228u: goto label_16d228;
            case 0x16D22Cu: goto label_16d22c;
            case 0x16D238u: goto label_16d238;
            case 0x16D268u: goto label_16d268;
            case 0x16D290u: goto label_16d290;
            case 0x16D2B8u: goto label_16d2b8;
            case 0x16D2C8u: goto label_16d2c8;
            case 0x16D2FCu: goto label_16d2fc;
            case 0x16D308u: goto label_16d308;
            case 0x16D33Cu: goto label_16d33c;
            case 0x16D348u: goto label_16d348;
            case 0x16D384u: goto label_16d384;
            case 0x16D390u: goto label_16d390;
            case 0x16D3C8u: goto label_16d3c8;
            case 0x16D3CCu: goto label_16d3cc;
            case 0x16D3DCu: goto label_16d3dc;
            case 0x16D3E0u: goto label_16d3e0;
            case 0x16D440u: goto label_16d440;
            case 0x16D460u: goto label_16d460;
            case 0x16D488u: goto label_16d488;
            case 0x16D494u: goto label_16d494;
            case 0x16D5D0u: goto label_16d5d0;
            case 0x16D608u: goto label_16d608;
            case 0x16D628u: goto label_16d628;
            case 0x16D6C8u: goto label_16d6c8;
            case 0x16D730u: goto label_16d730;
            case 0x16D768u: goto label_16d768;
            case 0x16D77Cu: goto label_16d77c;
            case 0x16D780u: goto label_16d780;
            case 0x16D790u: goto label_16d790;
            case 0x16D830u: goto label_16d830;
            case 0x16D850u: goto label_16d850;
            case 0x16D8B8u: goto label_16d8b8;
            case 0x16D8F8u: goto label_16d8f8;
            case 0x16D904u: goto label_16d904;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16D260u; }
            if (ctx->pc != 0x16D260u) { return; }
        }
        }
    }
    ctx->pc = 0x16D260u;
    // 0x16d260: 0x1440005a  bnez        $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x16D260u;
    {
        const bool branch_taken_0x16d260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D260u;
            // 0x16d264: 0x26820001  addiu       $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d260) {
            ctx->pc = 0x16D3CCu;
            goto label_16d3cc;
        }
    }
    ctx->pc = 0x16D268u;
label_16d268:
    // 0x16d268: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16d268u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d26c: 0x2021004  sllv        $v0, $v0, $s0
    ctx->pc = 0x16d26cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x16d270: 0x3c21024  and         $v0, $fp, $v0
    ctx->pc = 0x16d270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & GPR_U64(ctx, 2));
    // 0x16d274: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16D274u;
    {
        const bool branch_taken_0x16d274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D274u;
            // 0x16d278: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d274) {
            ctx->pc = 0x16D290u;
            goto label_16d290;
        }
    }
    ctx->pc = 0x16D27Cu;
    // 0x16d27c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16d27cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d280: 0xc05b452  jal         func_16D148
    ctx->pc = 0x16D280u;
    SET_GPR_U32(ctx, 31, 0x16D288u);
    ctx->pc = 0x16D284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D280u;
            // 0x16d284: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16D148u;
    if (runtime->hasFunction(0x16D148u)) {
        auto targetFn = runtime->lookupFunction(0x16D148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D288u; }
        if (ctx->pc != 0x16D288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_16d148_0x16d1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D288u; }
        if (ctx->pc != 0x16D288u) { return; }
    }
    ctx->pc = 0x16D288u;
    // 0x16d288: 0x1000004f  b           . + 4 + (0x4F << 2)
    ctx->pc = 0x16D288u;
    {
        const bool branch_taken_0x16d288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D28Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D288u;
            // 0x16d28c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d288) {
            ctx->pc = 0x16D3C8u;
            goto label_16d3c8;
        }
    }
    ctx->pc = 0x16D290u;
label_16d290:
    // 0x16d290: 0x2e020008  sltiu       $v0, $s0, 0x8
    ctx->pc = 0x16d290u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x16d294: 0x1040004d  beqz        $v0, . + 4 + (0x4D << 2)
    ctx->pc = 0x16D294u;
    {
        const bool branch_taken_0x16d294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D294u;
            // 0x16d298: 0x26820001  addiu       $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d294) {
            ctx->pc = 0x16D3CCu;
            goto label_16d3cc;
        }
    }
    ctx->pc = 0x16D29Cu;
    // 0x16d29c: 0x3c02002b  lui         $v0, 0x2B
    ctx->pc = 0x16d29cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)43 << 16));
    // 0x16d2a0: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x16d2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x16d2a4: 0x24422410  addiu       $v0, $v0, 0x2410
    ctx->pc = 0x16d2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9232));
    // 0x16d2a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16d2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16d2ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x16d2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16d2b0: 0x400008  jr          $v0
    ctx->pc = 0x16D2B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D2B8u: goto label_16d2b8;
            case 0x16D2FCu: goto label_16d2fc;
            case 0x16D33Cu: goto label_16d33c;
            case 0x16D384u: goto label_16d384;
            case 0x16D3C8u: goto label_16d3c8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16D2B8u;
label_16d2b8:
    // 0x16d2b8: 0x12200043  beqz        $s1, . + 4 + (0x43 << 2)
    ctx->pc = 0x16D2B8u;
    {
        const bool branch_taken_0x16d2b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D2BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D2B8u;
            // 0x16d2bc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d2b8) {
            ctx->pc = 0x16D3C8u;
            goto label_16d3c8;
        }
    }
    ctx->pc = 0x16D2C0u;
    // 0x16d2c0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16d2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d2c4: 0x0  nop
    ctx->pc = 0x16d2c4u;
    // NOP
label_16d2c8:
    // 0x16d2c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16d2c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d2cc: 0x32460004  andi        $a2, $s2, 0x4
    ctx->pc = 0x16d2ccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
    // 0x16d2d0: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x16d2d0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16d2d4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x16d2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x16d2d8: 0xc05b404  jal         func_16D010
    ctx->pc = 0x16D2D8u;
    SET_GPR_U32(ctx, 31, 0x16D2E0u);
    ctx->pc = 0x16D2DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D2D8u;
            // 0x16d2dc: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16D010u;
    if (runtime->hasFunction(0x16D010u)) {
        auto targetFn = runtime->lookupFunction(0x16D010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D2E0u; }
        if (ctx->pc != 0x16D2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_16d010_0x16d0a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D2E0u; }
        if (ctx->pc != 0x16D2E0u) { return; }
    }
    ctx->pc = 0x16D2E0u;
    // 0x16d2e0: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x16d2e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16d2e4: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x16d2e4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16d2e8: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x16d2e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x16d2ec: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x16D2ECu;
    {
        const bool branch_taken_0x16d2ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D2F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D2ECu;
            // 0x16d2f0: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d2ec) {
            ctx->pc = 0x16D2C8u;
            runtime->cooperativeGuestYield();
            goto label_16d2c8;
        }
    }
    ctx->pc = 0x16D2F4u;
    // 0x16d2f4: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x16D2F4u;
    {
        const bool branch_taken_0x16d2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D2F4u;
            // 0x16d2f8: 0x26820001  addiu       $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d2f4) {
            ctx->pc = 0x16D3CCu;
            goto label_16d3cc;
        }
    }
    ctx->pc = 0x16D2FCu;
label_16d2fc:
    // 0x16d2fc: 0x12200032  beqz        $s1, . + 4 + (0x32 << 2)
    ctx->pc = 0x16D2FCu;
    {
        const bool branch_taken_0x16d2fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D2FCu;
            // 0x16d300: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d2fc) {
            ctx->pc = 0x16D3C8u;
            goto label_16d3c8;
        }
    }
    ctx->pc = 0x16D304u;
    // 0x16d304: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16d304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_16d308:
    // 0x16d308: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16d308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d30c: 0x32460004  andi        $a2, $s2, 0x4
    ctx->pc = 0x16d30cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
    // 0x16d310: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x16d310u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16d314: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x16d314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x16d318: 0xc05b42a  jal         func_16D0A8
    ctx->pc = 0x16D318u;
    SET_GPR_U32(ctx, 31, 0x16D320u);
    ctx->pc = 0x16D31Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D318u;
            // 0x16d31c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16D0A8u;
    if (runtime->hasFunction(0x16D0A8u)) {
        auto targetFn = runtime->lookupFunction(0x16D0A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D320u; }
        if (ctx->pc != 0x16D320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_16d0a8_0x16d148(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D320u; }
        if (ctx->pc != 0x16D320u) { return; }
    }
    ctx->pc = 0x16D320u;
    // 0x16d320: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x16d320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16d324: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x16d324u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16d328: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x16d328u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x16d32c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x16D32Cu;
    {
        const bool branch_taken_0x16d32c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D32Cu;
            // 0x16d330: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d32c) {
            ctx->pc = 0x16D308u;
            runtime->cooperativeGuestYield();
            goto label_16d308;
        }
    }
    ctx->pc = 0x16D334u;
    // 0x16d334: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x16D334u;
    {
        const bool branch_taken_0x16d334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D334u;
            // 0x16d338: 0x26820001  addiu       $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d334) {
            ctx->pc = 0x16D3CCu;
            goto label_16d3cc;
        }
    }
    ctx->pc = 0x16D33Cu;
label_16d33c:
    // 0x16d33c: 0x12200022  beqz        $s1, . + 4 + (0x22 << 2)
    ctx->pc = 0x16D33Cu;
    {
        const bool branch_taken_0x16d33c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D33Cu;
            // 0x16d340: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d33c) {
            ctx->pc = 0x16D3C8u;
            goto label_16d3c8;
        }
    }
    ctx->pc = 0x16D344u;
    // 0x16d344: 0x0  nop
    ctx->pc = 0x16d344u;
    // NOP
label_16d348:
    // 0x16d348: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16d348u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d34c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x16d34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d350: 0xde650150  ld          $a1, 0x150($s3)
    ctx->pc = 0x16d350u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 19), 336)));
    // 0x16d354: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x16d354u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16d358: 0x94460000  lhu         $a2, 0x0($v0)
    ctx->pc = 0x16d358u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16d35c: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x16d35cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16d360: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x16d360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x16d364: 0x211182b  sltu        $v1, $s0, $s1
    ctx->pc = 0x16d364u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x16d368: 0xc42004  sllv        $a0, $a0, $a2
    ctx->pc = 0x16d368u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), GPR_U32(ctx, 6) & 0x1F));
    // 0x16d36c: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x16d36cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x16d370: 0x852825  or          $a1, $a0, $a1
    ctx->pc = 0x16d370u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x16d374: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x16D374u;
    {
        const bool branch_taken_0x16d374 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D374u;
            // 0x16d378: 0xfe650150  sd          $a1, 0x150($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 336), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d374) {
            ctx->pc = 0x16D348u;
            runtime->cooperativeGuestYield();
            goto label_16d348;
        }
    }
    ctx->pc = 0x16D37Cu;
    // 0x16d37c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x16D37Cu;
    {
        const bool branch_taken_0x16d37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D37Cu;
            // 0x16d380: 0x26820001  addiu       $v0, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d37c) {
            ctx->pc = 0x16D3CCu;
            goto label_16d3cc;
        }
    }
    ctx->pc = 0x16D384u;
label_16d384:
    // 0x16d384: 0x12200010  beqz        $s1, . + 4 + (0x10 << 2)
    ctx->pc = 0x16D384u;
    {
        const bool branch_taken_0x16d384 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D384u;
            // 0x16d388: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d384) {
            ctx->pc = 0x16D3C8u;
            goto label_16d3c8;
        }
    }
    ctx->pc = 0x16D38Cu;
    // 0x16d38c: 0xde660150  ld          $a2, 0x150($s3)
    ctx->pc = 0x16d38cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 19), 336)));
label_16d390:
    // 0x16d390: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x16d390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d394: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16d394u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d398: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x16d398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16d39c: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x16d39cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16d3a0: 0x3090ffff  andi        $s0, $a0, 0xFFFF
    ctx->pc = 0x16d3a0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x16d3a4: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x16d3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x16d3a8: 0x211202b  sltu        $a0, $s0, $s1
    ctx->pc = 0x16d3a8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x16d3ac: 0xa31804  sllv        $v1, $v1, $a1
    ctx->pc = 0x16d3acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 5) & 0x1F));
    // 0x16d3b0: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x16d3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x16d3b4: 0x31027  nor         $v0, $zero, $v1
    ctx->pc = 0x16d3b4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x16d3b8: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x16D3B8u;
    {
        const bool branch_taken_0x16d3b8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D3BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D3B8u;
            // 0x16d3bc: 0xc23024  and         $a2, $a2, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d3b8) {
            ctx->pc = 0x16D390u;
            runtime->cooperativeGuestYield();
            goto label_16d390;
        }
    }
    ctx->pc = 0x16D3C0u;
    // 0x16d3c0: 0xfe660150  sd          $a2, 0x150($s3)
    ctx->pc = 0x16d3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 336), GPR_U64(ctx, 6));
    // 0x16d3c4: 0x0  nop
    ctx->pc = 0x16d3c4u;
    // NOP
label_16d3c8:
    // 0x16d3c8: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x16d3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_16d3cc:
    // 0x16d3cc: 0x3054ffff  andi        $s4, $v0, 0xFFFF
    ctx->pc = 0x16d3ccu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x16d3d0: 0x296102b  sltu        $v0, $s4, $s6
    ctx->pc = 0x16d3d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x16d3d4: 0x1440ff98  bnez        $v0, . + 4 + (-0x68 << 2)
    ctx->pc = 0x16D3D4u;
    {
        const bool branch_taken_0x16d3d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D3D4u;
            // 0x16d3d8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d3d4) {
            ctx->pc = 0x16D238u;
            runtime->cooperativeGuestYield();
            goto label_16d238;
        }
    }
    ctx->pc = 0x16D3DCu;
label_16d3dc:
    // 0x16d3dc: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x16d3dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_16d3e0:
    // 0x16d3e0: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x16d3e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x16d3e4: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x16d3e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x16d3e8: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x16d3e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x16d3ec: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x16d3ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16d3f0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x16d3f0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16d3f4: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x16d3f4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16d3f8: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x16d3f8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16d3fc: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x16d3fcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16d400: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x16d400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16d404: 0x3e00008  jr          $ra
    ctx->pc = 0x16D404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D404u;
            // 0x16d408: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D208u: goto label_16d208;
            case 0x16D228u: goto label_16d228;
            case 0x16D22Cu: goto label_16d22c;
            case 0x16D238u: goto label_16d238;
            case 0x16D268u: goto label_16d268;
            case 0x16D290u: goto label_16d290;
            case 0x16D2B8u: goto label_16d2b8;
            case 0x16D2C8u: goto label_16d2c8;
            case 0x16D2FCu: goto label_16d2fc;
            case 0x16D308u: goto label_16d308;
            case 0x16D33Cu: goto label_16d33c;
            case 0x16D348u: goto label_16d348;
            case 0x16D384u: goto label_16d384;
            case 0x16D390u: goto label_16d390;
            case 0x16D3C8u: goto label_16d3c8;
            case 0x16D3CCu: goto label_16d3cc;
            case 0x16D3DCu: goto label_16d3dc;
            case 0x16D3E0u: goto label_16d3e0;
            case 0x16D440u: goto label_16d440;
            case 0x16D460u: goto label_16d460;
            case 0x16D488u: goto label_16d488;
            case 0x16D494u: goto label_16d494;
            case 0x16D5D0u: goto label_16d5d0;
            case 0x16D608u: goto label_16d608;
            case 0x16D628u: goto label_16d628;
            case 0x16D6C8u: goto label_16d6c8;
            case 0x16D730u: goto label_16d730;
            case 0x16D768u: goto label_16d768;
            case 0x16D77Cu: goto label_16d77c;
            case 0x16D780u: goto label_16d780;
            case 0x16D790u: goto label_16d790;
            case 0x16D830u: goto label_16d830;
            case 0x16D850u: goto label_16d850;
            case 0x16D8B8u: goto label_16d8b8;
            case 0x16D8F8u: goto label_16d8f8;
            case 0x16D904u: goto label_16d904;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16D40Cu;
    // 0x16d40c: 0x0  nop
    ctx->pc = 0x16d40cu;
    // NOP
    // 0x16d410: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x16d410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16d414: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x16d414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x16d418: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16d418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x16d41c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x16d41cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x16d420: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16d420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16d424: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x16d424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x16d428: 0x94420056  lhu         $v0, 0x56($v0)
    ctx->pc = 0x16d428u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 86)));
    // 0x16d42c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x16D42Cu;
    {
        const bool branch_taken_0x16d42c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D42Cu;
            // 0x16d430: 0x8c840010  lw          $a0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d42c) {
            ctx->pc = 0x16D494u;
            goto label_16d494;
        }
    }
    ctx->pc = 0x16D434u;
    // 0x16d434: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x16d434u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d438: 0x94820000  lhu         $v0, 0x0($a0)
    ctx->pc = 0x16d438u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16d43c: 0x0  nop
    ctx->pc = 0x16d43cu;
    // NOP
label_16d440:
    // 0x16d440: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16d440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d444: 0x3042fffd  andi        $v0, $v0, 0xFFFD
    ctx->pc = 0x16d444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65533);
    // 0x16d448: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x16d448u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x16d44c: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x16d44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x16d450: 0x94920000  lhu         $s2, 0x0($a0)
    ctx->pc = 0x16d450u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16d454: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
    ctx->pc = 0x16D454u;
    {
        const bool branch_taken_0x16d454 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D454u;
            // 0x16d458: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d454) {
            ctx->pc = 0x16D488u;
            goto label_16d488;
        }
    }
    ctx->pc = 0x16D45Cu;
    // 0x16d45c: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x16d45cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_16d460:
    // 0x16d460: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x16d460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x16d464: 0x94860000  lhu         $a2, 0x0($a0)
    ctx->pc = 0x16d464u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x16d468: 0xc05b452  jal         func_16D148
    ctx->pc = 0x16D468u;
    SET_GPR_U32(ctx, 31, 0x16D470u);
    ctx->pc = 0x16D46Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D468u;
            // 0x16d46c: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16D148u;
    if (runtime->hasFunction(0x16D148u)) {
        auto targetFn = runtime->lookupFunction(0x16D148u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D470u; }
        if (ctx->pc != 0x16D470u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_16d148_0x16d1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D470u; }
        if (ctx->pc != 0x16D470u) { return; }
    }
    ctx->pc = 0x16D470u;
    // 0x16d470: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x16d470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16d474: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16d474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d478: 0x3070ffff  andi        $s0, $v1, 0xFFFF
    ctx->pc = 0x16d478u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x16d47c: 0x212102b  sltu        $v0, $s0, $s2
    ctx->pc = 0x16d47cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x16d480: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x16D480u;
    {
        const bool branch_taken_0x16d480 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d480) {
            ctx->pc = 0x16D484u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16D480u;
            // 0x16d484: 0x94850000  lhu         $a1, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16D460u;
            runtime->cooperativeGuestYield();
            goto label_16d460;
        }
    }
    ctx->pc = 0x16D488u;
label_16d488:
    // 0x16d488: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x16d488u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x16d48c: 0x5620ffec  bnel        $s1, $zero, . + 4 + (-0x14 << 2)
    ctx->pc = 0x16D48Cu;
    {
        const bool branch_taken_0x16d48c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d48c) {
            ctx->pc = 0x16D490u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16D48Cu;
            // 0x16d490: 0x94820000  lhu         $v0, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16D440u;
            runtime->cooperativeGuestYield();
            goto label_16d440;
        }
    }
    ctx->pc = 0x16D494u;
label_16d494:
    // 0x16d494: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x16d494u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16d498: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x16d498u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16d49c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x16d49cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16d4a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16d4a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d4a4: 0x3e00008  jr          $ra
    ctx->pc = 0x16D4A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D4A4u;
            // 0x16d4a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D208u: goto label_16d208;
            case 0x16D228u: goto label_16d228;
            case 0x16D22Cu: goto label_16d22c;
            case 0x16D238u: goto label_16d238;
            case 0x16D268u: goto label_16d268;
            case 0x16D290u: goto label_16d290;
            case 0x16D2B8u: goto label_16d2b8;
            case 0x16D2C8u: goto label_16d2c8;
            case 0x16D2FCu: goto label_16d2fc;
            case 0x16D308u: goto label_16d308;
            case 0x16D33Cu: goto label_16d33c;
            case 0x16D348u: goto label_16d348;
            case 0x16D384u: goto label_16d384;
            case 0x16D390u: goto label_16d390;
            case 0x16D3C8u: goto label_16d3c8;
            case 0x16D3CCu: goto label_16d3cc;
            case 0x16D3DCu: goto label_16d3dc;
            case 0x16D3E0u: goto label_16d3e0;
            case 0x16D440u: goto label_16d440;
            case 0x16D460u: goto label_16d460;
            case 0x16D488u: goto label_16d488;
            case 0x16D494u: goto label_16d494;
            case 0x16D5D0u: goto label_16d5d0;
            case 0x16D608u: goto label_16d608;
            case 0x16D628u: goto label_16d628;
            case 0x16D6C8u: goto label_16d6c8;
            case 0x16D730u: goto label_16d730;
            case 0x16D768u: goto label_16d768;
            case 0x16D77Cu: goto label_16d77c;
            case 0x16D780u: goto label_16d780;
            case 0x16D790u: goto label_16d790;
            case 0x16D830u: goto label_16d830;
            case 0x16D850u: goto label_16d850;
            case 0x16D8B8u: goto label_16d8b8;
            case 0x16D8F8u: goto label_16d8f8;
            case 0x16D904u: goto label_16d904;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16D4ACu;
    // 0x16d4ac: 0x0  nop
    ctx->pc = 0x16d4acu;
    // NOP
    // 0x16d4b0: 0xd8a10000  lqc2        $vf1, 0x0($a1)
    ctx->pc = 0x16d4b0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16d4b4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x16d4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x16d4b8: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x16d4b8u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16d4bc: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x16d4bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16d4c0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x16d4c0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16d4c4: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x16d4c4u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x16d4c8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x16d4c8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x16d4cc: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x16d4ccu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x16d4d0: 0x4b020040  vaddx.x     $vf1, $vf0, $vf2x
    ctx->pc = 0x16d4d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16d4d4: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x16d4d4u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16d4d8: 0xc441001c  lwc1        $f1, 0x1C($v0)
    ctx->pc = 0x16d4d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16d4dc: 0x70041fc9  prot3w      $v1, $a0
    ctx->pc = 0x16d4dcu;
    SET_GPR_VEC(ctx, 3, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x16d4e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16d4e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16d4e4: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x16d4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16d4e8: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x16d4e8u;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x16d4ec: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x16d4ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x16d4f0: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x16d4f0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x16d4f4: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x16d4f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16d4f8: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x16d4f8u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16d4fc: 0xc4410020  lwc1        $f1, 0x20($v0)
    ctx->pc = 0x16d4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16d500: 0x70041f89  pexew       $v1, $a0
    ctx->pc = 0x16d500u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x16d504: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16d504u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16d508: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x16d508u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16d50c: 0x46010029  min.s       $f0, $f0, $f1
    ctx->pc = 0x16d50cu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[1]);
    // 0x16d510: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x16d510u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x16d514: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x16d514u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x16d518: 0x4a420040  vaddx.z     $vf1, $vf0, $vf2x
    ctx->pc = 0x16d518u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16d51c: 0xf8a10000  sqc2        $vf1, 0x0($a1)
    ctx->pc = 0x16d51cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16d520: 0xc4410028  lwc1        $f1, 0x28($v0)
    ctx->pc = 0x16d520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16d524: 0xd8c10000  lqc2        $vf1, 0x0($a2)
    ctx->pc = 0x16d524u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x16d528: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x16d528u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16d52c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x16d52cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16d530: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x16d530u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x16d534: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x16d534u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x16d538: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x16d538u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x16d53c: 0x4b020040  vaddx.x     $vf1, $vf0, $vf2x
    ctx->pc = 0x16d53cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16d540: 0x48240800  qmfc2.ni    $a0, $vf1
    ctx->pc = 0x16d540u;
    SET_GPR_VEC(ctx, 4, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16d544: 0xc441002c  lwc1        $f1, 0x2C($v0)
    ctx->pc = 0x16d544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16d548: 0x70041fc9  prot3w      $v1, $a0
    ctx->pc = 0x16d548u;
    SET_GPR_VEC(ctx, 3, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x16d54c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x16d54cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16d550: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x16d550u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16d554: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x16d554u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x16d558: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x16d558u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x16d55c: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x16d55cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x16d560: 0x4a820040  vaddx.y     $vf1, $vf0, $vf2x
    ctx->pc = 0x16d560u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16d564: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x16d564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x16d568: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x16d568u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16d56c: 0x70031789  pexew       $v0, $v1
    ctx->pc = 0x16d56cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x16d570: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16d570u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x16d574: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x16d574u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16d578: 0x46010028  max.s       $f0, $f0, $f1
    ctx->pc = 0x16d578u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[1]);
    // 0x16d57c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x16d57cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x16d580: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x16d580u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x16d584: 0x4a420040  vaddx.z     $vf1, $vf0, $vf2x
    ctx->pc = 0x16d584u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x16d588: 0xf8c10000  sqc2        $vf1, 0x0($a2)
    ctx->pc = 0x16d588u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x16d58c: 0x3e00008  jr          $ra
    ctx->pc = 0x16D58Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D58Cu;
            // 0x16d590: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D208u: goto label_16d208;
            case 0x16D228u: goto label_16d228;
            case 0x16D22Cu: goto label_16d22c;
            case 0x16D238u: goto label_16d238;
            case 0x16D268u: goto label_16d268;
            case 0x16D290u: goto label_16d290;
            case 0x16D2B8u: goto label_16d2b8;
            case 0x16D2C8u: goto label_16d2c8;
            case 0x16D2FCu: goto label_16d2fc;
            case 0x16D308u: goto label_16d308;
            case 0x16D33Cu: goto label_16d33c;
            case 0x16D348u: goto label_16d348;
            case 0x16D384u: goto label_16d384;
            case 0x16D390u: goto label_16d390;
            case 0x16D3C8u: goto label_16d3c8;
            case 0x16D3CCu: goto label_16d3cc;
            case 0x16D3DCu: goto label_16d3dc;
            case 0x16D3E0u: goto label_16d3e0;
            case 0x16D440u: goto label_16d440;
            case 0x16D460u: goto label_16d460;
            case 0x16D488u: goto label_16d488;
            case 0x16D494u: goto label_16d494;
            case 0x16D5D0u: goto label_16d5d0;
            case 0x16D608u: goto label_16d608;
            case 0x16D628u: goto label_16d628;
            case 0x16D6C8u: goto label_16d6c8;
            case 0x16D730u: goto label_16d730;
            case 0x16D768u: goto label_16d768;
            case 0x16D77Cu: goto label_16d77c;
            case 0x16D780u: goto label_16d780;
            case 0x16D790u: goto label_16d790;
            case 0x16D830u: goto label_16d830;
            case 0x16D850u: goto label_16d850;
            case 0x16D8B8u: goto label_16d8b8;
            case 0x16D8F8u: goto label_16d8f8;
            case 0x16D904u: goto label_16d904;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16D594u;
    // 0x16d594: 0x0  nop
    ctx->pc = 0x16d594u;
    // NOP
    // 0x16d598: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x16d598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x16d59c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x16d59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x16d5a0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x16d5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x16d5a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16d5a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d5a8: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x16d5a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x16d5ac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16d5acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d5b0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x16d5b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x16d5b4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16d5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16d5b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16d5b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16d5bc: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x16d5bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x16d5c0: 0x96340042  lhu         $s4, 0x42($s1)
    ctx->pc = 0x16d5c0u;
    SET_GPR_U32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 66)));
    // 0x16d5c4: 0x12800018  beqz        $s4, . + 4 + (0x18 << 2)
    ctx->pc = 0x16D5C4u;
    {
        const bool branch_taken_0x16d5c4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D5C4u;
            // 0x16d5c8: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d5c4) {
            ctx->pc = 0x16D628u;
            goto label_16d628;
        }
    }
    ctx->pc = 0x16D5CCu;
    // 0x16d5cc: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x16d5ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_16d5d0:
    // 0x16d5d0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x16d5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x16d5d4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x16d5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x16d5d8: 0x2031818  mult        $v1, $s0, $v1
    ctx->pc = 0x16d5d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x16d5dc: 0x8c44004c  lw          $a0, 0x4C($v0)
    ctx->pc = 0x16d5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x16d5e0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x16d5e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d5e4: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x16d5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x16d5e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x16d5e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d5ec: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x16D5ECu;
    {
        const bool branch_taken_0x16d5ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D5F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D5ECu;
            // 0x16d5f0: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d5ec) {
            ctx->pc = 0x16D608u;
            goto label_16d608;
        }
    }
    ctx->pc = 0x16D5F4u;
    // 0x16d5f4: 0x94820004  lhu         $v0, 0x4($a0)
    ctx->pc = 0x16d5f4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x16d5f8: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x16d5f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x16d5fc: 0xc04d27a  jal         func_1349E8
    ctx->pc = 0x16D5FCu;
    SET_GPR_U32(ctx, 31, 0x16D604u);
    ctx->pc = 0x16D600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D5FCu;
            // 0x16d600: 0x2982b  sltu        $s3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 19, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1349E8u;
    if (runtime->hasFunction(0x1349E8u)) {
        auto targetFn = runtime->lookupFunction(0x1349E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D604u; }
        if (ctx->pc != 0x16D604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1349e8_0x134a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D604u; }
        if (ctx->pc != 0x16D604u) { return; }
    }
    ctx->pc = 0x16D604u;
    // 0x16d604: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x16d604u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16d608:
    // 0x16d608: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16d608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d60c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x16d60cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d610: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x16d610u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d614: 0x2a0f809  jalr        $s5
    ctx->pc = 0x16D614u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x16D61Cu);
        ctx->pc = 0x16D618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D614u;
            // 0x16d618: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16D61Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D208u: goto label_16d208;
            case 0x16D228u: goto label_16d228;
            case 0x16D22Cu: goto label_16d22c;
            case 0x16D238u: goto label_16d238;
            case 0x16D268u: goto label_16d268;
            case 0x16D290u: goto label_16d290;
            case 0x16D2B8u: goto label_16d2b8;
            case 0x16D2C8u: goto label_16d2c8;
            case 0x16D2FCu: goto label_16d2fc;
            case 0x16D308u: goto label_16d308;
            case 0x16D33Cu: goto label_16d33c;
            case 0x16D348u: goto label_16d348;
            case 0x16D384u: goto label_16d384;
            case 0x16D390u: goto label_16d390;
            case 0x16D3C8u: goto label_16d3c8;
            case 0x16D3CCu: goto label_16d3cc;
            case 0x16D3DCu: goto label_16d3dc;
            case 0x16D3E0u: goto label_16d3e0;
            case 0x16D440u: goto label_16d440;
            case 0x16D460u: goto label_16d460;
            case 0x16D488u: goto label_16d488;
            case 0x16D494u: goto label_16d494;
            case 0x16D5D0u: goto label_16d5d0;
            case 0x16D608u: goto label_16d608;
            case 0x16D628u: goto label_16d628;
            case 0x16D6C8u: goto label_16d6c8;
            case 0x16D730u: goto label_16d730;
            case 0x16D768u: goto label_16d768;
            case 0x16D77Cu: goto label_16d77c;
            case 0x16D780u: goto label_16d780;
            case 0x16D790u: goto label_16d790;
            case 0x16D830u: goto label_16d830;
            case 0x16D850u: goto label_16d850;
            case 0x16D8B8u: goto label_16d8b8;
            case 0x16D8F8u: goto label_16d8f8;
            case 0x16D904u: goto label_16d904;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16D61Cu; }
            if (ctx->pc != 0x16D61Cu) { return; }
        }
        }
    }
    ctx->pc = 0x16D61Cu;
    // 0x16d61c: 0x214102a  slt         $v0, $s0, $s4
    ctx->pc = 0x16d61cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x16d620: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x16D620u;
    {
        const bool branch_taken_0x16d620 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D620u;
            // 0x16d624: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d620) {
            ctx->pc = 0x16D5D0u;
            runtime->cooperativeGuestYield();
            goto label_16d5d0;
        }
    }
    ctx->pc = 0x16D628u;
label_16d628:
    // 0x16d628: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x16d628u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16d62c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x16d62cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16d630: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x16d630u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16d634: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16d634u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16d638: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x16d638u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16d63c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x16d63cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16d640: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16d640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d644: 0x3e00008  jr          $ra
    ctx->pc = 0x16D644u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D644u;
            // 0x16d648: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D208u: goto label_16d208;
            case 0x16D228u: goto label_16d228;
            case 0x16D22Cu: goto label_16d22c;
            case 0x16D238u: goto label_16d238;
            case 0x16D268u: goto label_16d268;
            case 0x16D290u: goto label_16d290;
            case 0x16D2B8u: goto label_16d2b8;
            case 0x16D2C8u: goto label_16d2c8;
            case 0x16D2FCu: goto label_16d2fc;
            case 0x16D308u: goto label_16d308;
            case 0x16D33Cu: goto label_16d33c;
            case 0x16D348u: goto label_16d348;
            case 0x16D384u: goto label_16d384;
            case 0x16D390u: goto label_16d390;
            case 0x16D3C8u: goto label_16d3c8;
            case 0x16D3CCu: goto label_16d3cc;
            case 0x16D3DCu: goto label_16d3dc;
            case 0x16D3E0u: goto label_16d3e0;
            case 0x16D440u: goto label_16d440;
            case 0x16D460u: goto label_16d460;
            case 0x16D488u: goto label_16d488;
            case 0x16D494u: goto label_16d494;
            case 0x16D5D0u: goto label_16d5d0;
            case 0x16D608u: goto label_16d608;
            case 0x16D628u: goto label_16d628;
            case 0x16D6C8u: goto label_16d6c8;
            case 0x16D730u: goto label_16d730;
            case 0x16D768u: goto label_16d768;
            case 0x16D77Cu: goto label_16d77c;
            case 0x16D780u: goto label_16d780;
            case 0x16D790u: goto label_16d790;
            case 0x16D830u: goto label_16d830;
            case 0x16D850u: goto label_16d850;
            case 0x16D8B8u: goto label_16d8b8;
            case 0x16D8F8u: goto label_16d8f8;
            case 0x16D904u: goto label_16d904;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16D64Cu;
    // 0x16d64c: 0x0  nop
    ctx->pc = 0x16d64cu;
    // NOP
    // 0x16d650: 0x3e00008  jr          $ra
    ctx->pc = 0x16D650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D650u;
            // 0x16d654: 0xfc800150  sd          $zero, 0x150($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 336), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D208u: goto label_16d208;
            case 0x16D228u: goto label_16d228;
            case 0x16D22Cu: goto label_16d22c;
            case 0x16D238u: goto label_16d238;
            case 0x16D268u: goto label_16d268;
            case 0x16D290u: goto label_16d290;
            case 0x16D2B8u: goto label_16d2b8;
            case 0x16D2C8u: goto label_16d2c8;
            case 0x16D2FCu: goto label_16d2fc;
            case 0x16D308u: goto label_16d308;
            case 0x16D33Cu: goto label_16d33c;
            case 0x16D348u: goto label_16d348;
            case 0x16D384u: goto label_16d384;
            case 0x16D390u: goto label_16d390;
            case 0x16D3C8u: goto label_16d3c8;
            case 0x16D3CCu: goto label_16d3cc;
            case 0x16D3DCu: goto label_16d3dc;
            case 0x16D3E0u: goto label_16d3e0;
            case 0x16D440u: goto label_16d440;
            case 0x16D460u: goto label_16d460;
            case 0x16D488u: goto label_16d488;
            case 0x16D494u: goto label_16d494;
            case 0x16D5D0u: goto label_16d5d0;
            case 0x16D608u: goto label_16d608;
            case 0x16D628u: goto label_16d628;
            case 0x16D6C8u: goto label_16d6c8;
            case 0x16D730u: goto label_16d730;
            case 0x16D768u: goto label_16d768;
            case 0x16D77Cu: goto label_16d77c;
            case 0x16D780u: goto label_16d780;
            case 0x16D790u: goto label_16d790;
            case 0x16D830u: goto label_16d830;
            case 0x16D850u: goto label_16d850;
            case 0x16D8B8u: goto label_16d8b8;
            case 0x16D8F8u: goto label_16d8f8;
            case 0x16D904u: goto label_16d904;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16D658u;
    // 0x16d658: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x16d658u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x16d65c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x16d65cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x16d660: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x16d660u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x16d664: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x16d664u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d668: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x16d668u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x16d66c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x16d66cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d670: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x16d670u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x16d674: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x16d674u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x16d678: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x16d678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
    // 0x16d67c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16d67cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16d680: 0x8e450158  lw          $a1, 0x158($s2)
    ctx->pc = 0x16d680u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x16d684: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x16d684u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16d688: 0x3c150033  lui         $s5, 0x33
    ctx->pc = 0x16d688u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)51 << 16));
    // 0x16d68c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16d68cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16d690: 0x26a3e848  addiu       $v1, $s5, -0x17B8
    ctx->pc = 0x16d690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961224));
    // 0x16d694: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16d694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16d698: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16d698u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d69c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16d69cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16d6a0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x16d6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x16d6a4: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x16d6a4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x16d6a8: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x16d6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x16d6ac: 0x40f809  jalr        $v0
    ctx->pc = 0x16D6ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16D6B4u);
        ctx->pc = 0x16D6B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D6ACu;
            // 0x16d6b0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16D6B4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D208u: goto label_16d208;
            case 0x16D228u: goto label_16d228;
            case 0x16D22Cu: goto label_16d22c;
            case 0x16D238u: goto label_16d238;
            case 0x16D268u: goto label_16d268;
            case 0x16D290u: goto label_16d290;
            case 0x16D2B8u: goto label_16d2b8;
            case 0x16D2C8u: goto label_16d2c8;
            case 0x16D2FCu: goto label_16d2fc;
            case 0x16D308u: goto label_16d308;
            case 0x16D33Cu: goto label_16d33c;
            case 0x16D348u: goto label_16d348;
            case 0x16D384u: goto label_16d384;
            case 0x16D390u: goto label_16d390;
            case 0x16D3C8u: goto label_16d3c8;
            case 0x16D3CCu: goto label_16d3cc;
            case 0x16D3DCu: goto label_16d3dc;
            case 0x16D3E0u: goto label_16d3e0;
            case 0x16D440u: goto label_16d440;
            case 0x16D460u: goto label_16d460;
            case 0x16D488u: goto label_16d488;
            case 0x16D494u: goto label_16d494;
            case 0x16D5D0u: goto label_16d5d0;
            case 0x16D608u: goto label_16d608;
            case 0x16D628u: goto label_16d628;
            case 0x16D6C8u: goto label_16d6c8;
            case 0x16D730u: goto label_16d730;
            case 0x16D768u: goto label_16d768;
            case 0x16D77Cu: goto label_16d77c;
            case 0x16D780u: goto label_16d780;
            case 0x16D790u: goto label_16d790;
            case 0x16D830u: goto label_16d830;
            case 0x16D850u: goto label_16d850;
            case 0x16D8B8u: goto label_16d8b8;
            case 0x16D8F8u: goto label_16d8f8;
            case 0x16D904u: goto label_16d904;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16D6B4u; }
            if (ctx->pc != 0x16D6B4u) { return; }
        }
        }
    }
    ctx->pc = 0x16D6B4u;
    // 0x16d6b4: 0x96540042  lhu         $s4, 0x42($s2)
    ctx->pc = 0x16d6b4u;
    SET_GPR_U32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 66)));
    // 0x16d6b8: 0x12800035  beqz        $s4, . + 4 + (0x35 << 2)
    ctx->pc = 0x16D6B8u;
    {
        const bool branch_taken_0x16d6b8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D6B8u;
            // 0x16d6bc: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d6b8) {
            ctx->pc = 0x16D790u;
            goto label_16d790;
        }
    }
    ctx->pc = 0x16D6C0u;
    // 0x16d6c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16d6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16d6c4: 0x0  nop
    ctx->pc = 0x16d6c4u;
    // NOP
label_16d6c8:
    // 0x16d6c8: 0xde430150  ld          $v1, 0x150($s2)
    ctx->pc = 0x16d6c8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 336)));
    // 0x16d6cc: 0x2021004  sllv        $v0, $v0, $s0
    ctx->pc = 0x16d6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 16) & 0x1F));
    // 0x16d6d0: 0x431824  and         $v1, $v0, $v1
    ctx->pc = 0x16d6d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x16d6d4: 0x10600024  beqz        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x16D6D4u;
    {
        const bool branch_taken_0x16d6d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D6D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D6D4u;
            // 0x16d6d8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d6d4) {
            ctx->pc = 0x16D768u;
            goto label_16d768;
        }
    }
    ctx->pc = 0x16D6DCu;
    // 0x16d6dc: 0xc05b648  jal         func_16D920
    ctx->pc = 0x16D6DCu;
    SET_GPR_U32(ctx, 31, 0x16D6E4u);
    ctx->pc = 0x16D6E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D6DCu;
            // 0x16d6e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16D920u;
    if (runtime->hasFunction(0x16D920u)) {
        auto targetFn = runtime->lookupFunction(0x16D920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D6E4u; }
        if (ctx->pc != 0x16D6E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D920_0x16d920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D6E4u; }
        if (ctx->pc != 0x16D6E4u) { return; }
    }
    ctx->pc = 0x16D6E4u;
    // 0x16d6e4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x16d6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x16d6e8: 0x2642004c  addiu       $v0, $s2, 0x4C
    ctx->pc = 0x16d6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
    // 0x16d6ec: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x16d6ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16d6f0: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x16d6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16d6f4: 0x50a00022  beql        $a1, $zero, . + 4 + (0x22 << 2)
    ctx->pc = 0x16D6F4u;
    {
        const bool branch_taken_0x16d6f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d6f4) {
            ctx->pc = 0x16D6F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16D6F4u;
            // 0x16d6f8: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16D780u;
            goto label_16d780;
        }
    }
    ctx->pc = 0x16D6FCu;
    // 0x16d6fc: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x16d6fcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x16d700: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x16d700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x16d704: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x16D704u;
    {
        const bool branch_taken_0x16d704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D704u;
            // 0x16d708: 0x26a3e848  addiu       $v1, $s5, -0x17B8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294961224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d704) {
            ctx->pc = 0x16D730u;
            goto label_16d730;
        }
    }
    ctx->pc = 0x16D70Cu;
    // 0x16d70c: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x16d70cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16d710: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16d710u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16d714: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16d714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16d718: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16d718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16d71c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x16d71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x16d720: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x16d720u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x16d724: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x16d724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x16d728: 0x40f809  jalr        $v0
    ctx->pc = 0x16D728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16D730u);
        ctx->pc = 0x16D72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D728u;
            // 0x16d72c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16D730u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D208u: goto label_16d208;
            case 0x16D228u: goto label_16d228;
            case 0x16D22Cu: goto label_16d22c;
            case 0x16D238u: goto label_16d238;
            case 0x16D268u: goto label_16d268;
            case 0x16D290u: goto label_16d290;
            case 0x16D2B8u: goto label_16d2b8;
            case 0x16D2C8u: goto label_16d2c8;
            case 0x16D2FCu: goto label_16d2fc;
            case 0x16D308u: goto label_16d308;
            case 0x16D33Cu: goto label_16d33c;
            case 0x16D348u: goto label_16d348;
            case 0x16D384u: goto label_16d384;
            case 0x16D390u: goto label_16d390;
            case 0x16D3C8u: goto label_16d3c8;
            case 0x16D3CCu: goto label_16d3cc;
            case 0x16D3DCu: goto label_16d3dc;
            case 0x16D3E0u: goto label_16d3e0;
            case 0x16D440u: goto label_16d440;
            case 0x16D460u: goto label_16d460;
            case 0x16D488u: goto label_16d488;
            case 0x16D494u: goto label_16d494;
            case 0x16D5D0u: goto label_16d5d0;
            case 0x16D608u: goto label_16d608;
            case 0x16D628u: goto label_16d628;
            case 0x16D6C8u: goto label_16d6c8;
            case 0x16D730u: goto label_16d730;
            case 0x16D768u: goto label_16d768;
            case 0x16D77Cu: goto label_16d77c;
            case 0x16D780u: goto label_16d780;
            case 0x16D790u: goto label_16d790;
            case 0x16D830u: goto label_16d830;
            case 0x16D850u: goto label_16d850;
            case 0x16D8B8u: goto label_16d8b8;
            case 0x16D8F8u: goto label_16d8f8;
            case 0x16D904u: goto label_16d904;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16D730u; }
            if (ctx->pc != 0x16D730u) { return; }
        }
        }
    }
    ctx->pc = 0x16D730u;
label_16d730:
    // 0x16d730: 0x52600013  beql        $s3, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x16D730u;
    {
        const bool branch_taken_0x16d730 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x16d730) {
            ctx->pc = 0x16D734u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16D730u;
            // 0x16d734: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16D780u;
            goto label_16d780;
        }
    }
    ctx->pc = 0x16D738u;
    // 0x16d738: 0xc04d27a  jal         func_1349E8
    ctx->pc = 0x16D738u;
    SET_GPR_U32(ctx, 31, 0x16D740u);
    ctx->pc = 0x16D73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D738u;
            // 0x16d73c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1349E8u;
    if (runtime->hasFunction(0x1349E8u)) {
        auto targetFn = runtime->lookupFunction(0x1349E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D740u; }
        if (ctx->pc != 0x16D740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1349e8_0x134a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D740u; }
        if (ctx->pc != 0x16D740u) { return; }
    }
    ctx->pc = 0x16D740u;
    // 0x16d740: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x16d740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x16d744: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x16D744u;
    {
        const bool branch_taken_0x16d744 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16d744) {
            ctx->pc = 0x16D748u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16D744u;
            // 0x16d748: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16D780u;
            goto label_16d780;
        }
    }
    ctx->pc = 0x16D74Cu;
    // 0x16d74c: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x16d74cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
    // 0x16d750: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x16d750u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x16d754: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x16d754u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d758: 0xc04d260  jal         func_134980
    ctx->pc = 0x16D758u;
    SET_GPR_U32(ctx, 31, 0x16D760u);
    ctx->pc = 0x16D75Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D758u;
            // 0x16d75c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134980u;
    if (runtime->hasFunction(0x134980u)) {
        auto targetFn = runtime->lookupFunction(0x134980u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D760u; }
        if (ctx->pc != 0x16D760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_134980_0x1349e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D760u; }
        if (ctx->pc != 0x16D760u) { return; }
    }
    ctx->pc = 0x16D760u;
    // 0x16d760: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x16D760u;
    {
        const bool branch_taken_0x16d760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D760u;
            // 0x16d764: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d760) {
            ctx->pc = 0x16D780u;
            goto label_16d780;
        }
    }
    ctx->pc = 0x16D768u;
label_16d768:
    // 0x16d768: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x16D768u;
    {
        const bool branch_taken_0x16d768 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D76Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D768u;
            // 0x16d76c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d768) {
            ctx->pc = 0x16D77Cu;
            goto label_16d77c;
        }
    }
    ctx->pc = 0x16D770u;
    // 0x16d770: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16d770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d774: 0xc05b67c  jal         func_16D9F0
    ctx->pc = 0x16D774u;
    SET_GPR_U32(ctx, 31, 0x16D77Cu);
    ctx->pc = 0x16D778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D774u;
            // 0x16d778: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16D9F0u;
    if (runtime->hasFunction(0x16D9F0u)) {
        auto targetFn = runtime->lookupFunction(0x16D9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D77Cu; }
        if (ctx->pc != 0x16D77Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D9F0_0x16d9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D77Cu; }
        if (ctx->pc != 0x16D77Cu) { return; }
    }
    ctx->pc = 0x16D77Cu;
label_16d77c:
    // 0x16d77c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16d77cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_16d780:
    // 0x16d780: 0x214102a  slt         $v0, $s0, $s4
    ctx->pc = 0x16d780u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
    // 0x16d784: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x16D784u;
    {
        const bool branch_taken_0x16d784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D784u;
            // 0x16d788: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d784) {
            ctx->pc = 0x16D6C8u;
            runtime->cooperativeGuestYield();
            goto label_16d6c8;
        }
    }
    ctx->pc = 0x16D78Cu;
    // 0x16d78c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x16d78cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_16d790:
    // 0x16d790: 0x8c43e8b4  lw          $v1, -0x174C($v0)
    ctx->pc = 0x16d790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961332)));
    // 0x16d794: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x16d794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x16d798: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x16d798u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x16d79c: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x16d79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x16d7a0: 0x40f809  jalr        $v0
    ctx->pc = 0x16D7A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16D7A8u);
        ctx->pc = 0x16D7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D7A0u;
            // 0x16d7a4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16D7A8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D208u: goto label_16d208;
            case 0x16D228u: goto label_16d228;
            case 0x16D22Cu: goto label_16d22c;
            case 0x16D238u: goto label_16d238;
            case 0x16D268u: goto label_16d268;
            case 0x16D290u: goto label_16d290;
            case 0x16D2B8u: goto label_16d2b8;
            case 0x16D2C8u: goto label_16d2c8;
            case 0x16D2FCu: goto label_16d2fc;
            case 0x16D308u: goto label_16d308;
            case 0x16D33Cu: goto label_16d33c;
            case 0x16D348u: goto label_16d348;
            case 0x16D384u: goto label_16d384;
            case 0x16D390u: goto label_16d390;
            case 0x16D3C8u: goto label_16d3c8;
            case 0x16D3CCu: goto label_16d3cc;
            case 0x16D3DCu: goto label_16d3dc;
            case 0x16D3E0u: goto label_16d3e0;
            case 0x16D440u: goto label_16d440;
            case 0x16D460u: goto label_16d460;
            case 0x16D488u: goto label_16d488;
            case 0x16D494u: goto label_16d494;
            case 0x16D5D0u: goto label_16d5d0;
            case 0x16D608u: goto label_16d608;
            case 0x16D628u: goto label_16d628;
            case 0x16D6C8u: goto label_16d6c8;
            case 0x16D730u: goto label_16d730;
            case 0x16D768u: goto label_16d768;
            case 0x16D77Cu: goto label_16d77c;
            case 0x16D780u: goto label_16d780;
            case 0x16D790u: goto label_16d790;
            case 0x16D830u: goto label_16d830;
            case 0x16D850u: goto label_16d850;
            case 0x16D8B8u: goto label_16d8b8;
            case 0x16D8F8u: goto label_16d8f8;
            case 0x16D904u: goto label_16d904;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16D7A8u; }
            if (ctx->pc != 0x16D7A8u) { return; }
        }
        }
    }
    ctx->pc = 0x16D7A8u;
    // 0x16d7a8: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x16d7a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x16d7ac: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x16d7acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x16d7b0: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x16d7b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16d7b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x16d7b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16d7b8: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x16d7b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16d7bc: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x16d7bcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16d7c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16d7c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d7c4: 0x3e00008  jr          $ra
    ctx->pc = 0x16D7C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D7C4u;
            // 0x16d7c8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D208u: goto label_16d208;
            case 0x16D228u: goto label_16d228;
            case 0x16D22Cu: goto label_16d22c;
            case 0x16D238u: goto label_16d238;
            case 0x16D268u: goto label_16d268;
            case 0x16D290u: goto label_16d290;
            case 0x16D2B8u: goto label_16d2b8;
            case 0x16D2C8u: goto label_16d2c8;
            case 0x16D2FCu: goto label_16d2fc;
            case 0x16D308u: goto label_16d308;
            case 0x16D33Cu: goto label_16d33c;
            case 0x16D348u: goto label_16d348;
            case 0x16D384u: goto label_16d384;
            case 0x16D390u: goto label_16d390;
            case 0x16D3C8u: goto label_16d3c8;
            case 0x16D3CCu: goto label_16d3cc;
            case 0x16D3DCu: goto label_16d3dc;
            case 0x16D3E0u: goto label_16d3e0;
            case 0x16D440u: goto label_16d440;
            case 0x16D460u: goto label_16d460;
            case 0x16D488u: goto label_16d488;
            case 0x16D494u: goto label_16d494;
            case 0x16D5D0u: goto label_16d5d0;
            case 0x16D608u: goto label_16d608;
            case 0x16D628u: goto label_16d628;
            case 0x16D6C8u: goto label_16d6c8;
            case 0x16D730u: goto label_16d730;
            case 0x16D768u: goto label_16d768;
            case 0x16D77Cu: goto label_16d77c;
            case 0x16D780u: goto label_16d780;
            case 0x16D790u: goto label_16d790;
            case 0x16D830u: goto label_16d830;
            case 0x16D850u: goto label_16d850;
            case 0x16D8B8u: goto label_16d8b8;
            case 0x16D8F8u: goto label_16d8f8;
            case 0x16D904u: goto label_16d904;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16D7CCu;
    // 0x16d7cc: 0x0  nop
    ctx->pc = 0x16d7ccu;
    // NOP
    // 0x16d7d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16d7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16d7d4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16d7d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16d7d8: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x16d7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x16d7dc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x16d7dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d7e0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x16d7e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x16d7e4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x16d7e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x16d7e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16d7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16d7ec: 0x8e450158  lw          $a1, 0x158($s2)
    ctx->pc = 0x16d7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x16d7f0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x16d7f0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16d7f4: 0x3c130033  lui         $s3, 0x33
    ctx->pc = 0x16d7f4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)51 << 16));
    // 0x16d7f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x16d7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x16d7fc: 0x2663e848  addiu       $v1, $s3, -0x17B8
    ctx->pc = 0x16d7fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961224));
    // 0x16d800: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x16d800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16d804: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x16d804u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d808: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x16d808u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x16d80c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x16d80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x16d810: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x16d810u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x16d814: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x16d814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x16d818: 0x40f809  jalr        $v0
    ctx->pc = 0x16D818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16D820u);
        ctx->pc = 0x16D81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D818u;
            // 0x16d81c: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16D820u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D208u: goto label_16d208;
            case 0x16D228u: goto label_16d228;
            case 0x16D22Cu: goto label_16d22c;
            case 0x16D238u: goto label_16d238;
            case 0x16D268u: goto label_16d268;
            case 0x16D290u: goto label_16d290;
            case 0x16D2B8u: goto label_16d2b8;
            case 0x16D2C8u: goto label_16d2c8;
            case 0x16D2FCu: goto label_16d2fc;
            case 0x16D308u: goto label_16d308;
            case 0x16D33Cu: goto label_16d33c;
            case 0x16D348u: goto label_16d348;
            case 0x16D384u: goto label_16d384;
            case 0x16D390u: goto label_16d390;
            case 0x16D3C8u: goto label_16d3c8;
            case 0x16D3CCu: goto label_16d3cc;
            case 0x16D3DCu: goto label_16d3dc;
            case 0x16D3E0u: goto label_16d3e0;
            case 0x16D440u: goto label_16d440;
            case 0x16D460u: goto label_16d460;
            case 0x16D488u: goto label_16d488;
            case 0x16D494u: goto label_16d494;
            case 0x16D5D0u: goto label_16d5d0;
            case 0x16D608u: goto label_16d608;
            case 0x16D628u: goto label_16d628;
            case 0x16D6C8u: goto label_16d6c8;
            case 0x16D730u: goto label_16d730;
            case 0x16D768u: goto label_16d768;
            case 0x16D77Cu: goto label_16d77c;
            case 0x16D780u: goto label_16d780;
            case 0x16D790u: goto label_16d790;
            case 0x16D830u: goto label_16d830;
            case 0x16D850u: goto label_16d850;
            case 0x16D8B8u: goto label_16d8b8;
            case 0x16D8F8u: goto label_16d8f8;
            case 0x16D904u: goto label_16d904;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16D820u; }
            if (ctx->pc != 0x16D820u) { return; }
        }
        }
    }
    ctx->pc = 0x16D820u;
    // 0x16d820: 0x96510042  lhu         $s1, 0x42($s2)
    ctx->pc = 0x16d820u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 66)));
    // 0x16d824: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x16D824u;
    {
        const bool branch_taken_0x16d824 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D824u;
            // 0x16d828: 0x2662e848  addiu       $v0, $s3, -0x17B8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d824) {
            ctx->pc = 0x16D850u;
            goto label_16d850;
        }
    }
    ctx->pc = 0x16D82Cu;
    // 0x16d82c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16d82cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16d830:
    // 0x16d830: 0xc05b648  jal         func_16D920
    ctx->pc = 0x16D830u;
    SET_GPR_U32(ctx, 31, 0x16D838u);
    ctx->pc = 0x16D834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16D830u;
            // 0x16d834: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16D920u;
    if (runtime->hasFunction(0x16D920u)) {
        auto targetFn = runtime->lookupFunction(0x16D920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D838u; }
        if (ctx->pc != 0x16D838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016D920_0x16d920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16D838u; }
        if (ctx->pc != 0x16D838u) { return; }
    }
    ctx->pc = 0x16D838u;
    // 0x16d838: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x16d838u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x16d83c: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x16d83cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x16d840: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x16D840u;
    {
        const bool branch_taken_0x16d840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D840u;
            // 0x16d844: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d840) {
            ctx->pc = 0x16D830u;
            runtime->cooperativeGuestYield();
            goto label_16d830;
        }
    }
    ctx->pc = 0x16D848u;
    // 0x16d848: 0x2662e848  addiu       $v0, $s3, -0x17B8
    ctx->pc = 0x16d848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294961224));
    // 0x16d84c: 0x0  nop
    ctx->pc = 0x16d84cu;
    // NOP
label_16d850:
    // 0x16d850: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x16d850u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x16d854: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x16d854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x16d858: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x16d858u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x16d85c: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x16d85cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x16d860: 0x40f809  jalr        $v0
    ctx->pc = 0x16D860u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16D868u);
        ctx->pc = 0x16D864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D860u;
            // 0x16d864: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16D868u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D208u: goto label_16d208;
            case 0x16D228u: goto label_16d228;
            case 0x16D22Cu: goto label_16d22c;
            case 0x16D238u: goto label_16d238;
            case 0x16D268u: goto label_16d268;
            case 0x16D290u: goto label_16d290;
            case 0x16D2B8u: goto label_16d2b8;
            case 0x16D2C8u: goto label_16d2c8;
            case 0x16D2FCu: goto label_16d2fc;
            case 0x16D308u: goto label_16d308;
            case 0x16D33Cu: goto label_16d33c;
            case 0x16D348u: goto label_16d348;
            case 0x16D384u: goto label_16d384;
            case 0x16D390u: goto label_16d390;
            case 0x16D3C8u: goto label_16d3c8;
            case 0x16D3CCu: goto label_16d3cc;
            case 0x16D3DCu: goto label_16d3dc;
            case 0x16D3E0u: goto label_16d3e0;
            case 0x16D440u: goto label_16d440;
            case 0x16D460u: goto label_16d460;
            case 0x16D488u: goto label_16d488;
            case 0x16D494u: goto label_16d494;
            case 0x16D5D0u: goto label_16d5d0;
            case 0x16D608u: goto label_16d608;
            case 0x16D628u: goto label_16d628;
            case 0x16D6C8u: goto label_16d6c8;
            case 0x16D730u: goto label_16d730;
            case 0x16D768u: goto label_16d768;
            case 0x16D77Cu: goto label_16d77c;
            case 0x16D780u: goto label_16d780;
            case 0x16D790u: goto label_16d790;
            case 0x16D830u: goto label_16d830;
            case 0x16D850u: goto label_16d850;
            case 0x16D8B8u: goto label_16d8b8;
            case 0x16D8F8u: goto label_16d8f8;
            case 0x16D904u: goto label_16d904;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16D868u; }
            if (ctx->pc != 0x16D868u) { return; }
        }
        }
    }
    ctx->pc = 0x16D868u;
    // 0x16d868: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x16d868u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16d86c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x16d86cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16d870: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16d870u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16d874: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x16d874u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16d878: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16d878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d87c: 0x3e00008  jr          $ra
    ctx->pc = 0x16D87Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D87Cu;
            // 0x16d880: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D208u: goto label_16d208;
            case 0x16D228u: goto label_16d228;
            case 0x16D22Cu: goto label_16d22c;
            case 0x16D238u: goto label_16d238;
            case 0x16D268u: goto label_16d268;
            case 0x16D290u: goto label_16d290;
            case 0x16D2B8u: goto label_16d2b8;
            case 0x16D2C8u: goto label_16d2c8;
            case 0x16D2FCu: goto label_16d2fc;
            case 0x16D308u: goto label_16d308;
            case 0x16D33Cu: goto label_16d33c;
            case 0x16D348u: goto label_16d348;
            case 0x16D384u: goto label_16d384;
            case 0x16D390u: goto label_16d390;
            case 0x16D3C8u: goto label_16d3c8;
            case 0x16D3CCu: goto label_16d3cc;
            case 0x16D3DCu: goto label_16d3dc;
            case 0x16D3E0u: goto label_16d3e0;
            case 0x16D440u: goto label_16d440;
            case 0x16D460u: goto label_16d460;
            case 0x16D488u: goto label_16d488;
            case 0x16D494u: goto label_16d494;
            case 0x16D5D0u: goto label_16d5d0;
            case 0x16D608u: goto label_16d608;
            case 0x16D628u: goto label_16d628;
            case 0x16D6C8u: goto label_16d6c8;
            case 0x16D730u: goto label_16d730;
            case 0x16D768u: goto label_16d768;
            case 0x16D77Cu: goto label_16d77c;
            case 0x16D780u: goto label_16d780;
            case 0x16D790u: goto label_16d790;
            case 0x16D830u: goto label_16d830;
            case 0x16D850u: goto label_16d850;
            case 0x16D8B8u: goto label_16d8b8;
            case 0x16D8F8u: goto label_16d8f8;
            case 0x16D904u: goto label_16d904;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16D884u;
    // 0x16d884: 0x0  nop
    ctx->pc = 0x16d884u;
    // NOP
    // 0x16d888: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16d888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16d88c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x16d88cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x16d890: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x16d890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x16d894: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x16d894u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d898: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x16d898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x16d89c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16d89cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16d8a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16d8a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16d8a4: 0x96620042  lhu         $v0, 0x42($s3)
    ctx->pc = 0x16d8a4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 66)));
    // 0x16d8a8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x16D8A8u;
    {
        const bool branch_taken_0x16d8a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D8ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D8A8u;
            // 0x16d8ac: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d8a8) {
            ctx->pc = 0x16D904u;
            goto label_16d904;
        }
    }
    ctx->pc = 0x16D8B0u;
    // 0x16d8b0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x16d8b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16d8b4: 0x0  nop
    ctx->pc = 0x16d8b4u;
    // NOP
label_16d8b8:
    // 0x16d8b8: 0x2662004c  addiu       $v0, $s3, 0x4C
    ctx->pc = 0x16d8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 76));
    // 0x16d8bc: 0x519021  addu        $s2, $v0, $s1
    ctx->pc = 0x16d8bcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x16d8c0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x16d8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x16d8c4: 0x10a0000c  beqz        $a1, . + 4 + (0xC << 2)
    ctx->pc = 0x16D8C4u;
    {
        const bool branch_taken_0x16d8c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x16D8C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D8C4u;
            // 0x16d8c8: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d8c4) {
            ctx->pc = 0x16D8F8u;
            goto label_16d8f8;
        }
    }
    ctx->pc = 0x16D8CCu;
    // 0x16d8cc: 0x94a30000  lhu         $v1, 0x0($a1)
    ctx->pc = 0x16d8ccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x16d8d0: 0x2442e848  addiu       $v0, $v0, -0x17B8
    ctx->pc = 0x16d8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961224));
    // 0x16d8d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x16d8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x16d8d8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x16d8d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x16d8dc: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x16d8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x16d8e0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x16d8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x16d8e4: 0x84440048  lh          $a0, 0x48($v0)
    ctx->pc = 0x16d8e4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x16d8e8: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x16d8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
    // 0x16d8ec: 0x40f809  jalr        $v0
    ctx->pc = 0x16D8ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x16D8F4u);
        ctx->pc = 0x16D8F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D8ECu;
            // 0x16d8f0: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16D8F4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D208u: goto label_16d208;
            case 0x16D228u: goto label_16d228;
            case 0x16D22Cu: goto label_16d22c;
            case 0x16D238u: goto label_16d238;
            case 0x16D268u: goto label_16d268;
            case 0x16D290u: goto label_16d290;
            case 0x16D2B8u: goto label_16d2b8;
            case 0x16D2C8u: goto label_16d2c8;
            case 0x16D2FCu: goto label_16d2fc;
            case 0x16D308u: goto label_16d308;
            case 0x16D33Cu: goto label_16d33c;
            case 0x16D348u: goto label_16d348;
            case 0x16D384u: goto label_16d384;
            case 0x16D390u: goto label_16d390;
            case 0x16D3C8u: goto label_16d3c8;
            case 0x16D3CCu: goto label_16d3cc;
            case 0x16D3DCu: goto label_16d3dc;
            case 0x16D3E0u: goto label_16d3e0;
            case 0x16D440u: goto label_16d440;
            case 0x16D460u: goto label_16d460;
            case 0x16D488u: goto label_16d488;
            case 0x16D494u: goto label_16d494;
            case 0x16D5D0u: goto label_16d5d0;
            case 0x16D608u: goto label_16d608;
            case 0x16D628u: goto label_16d628;
            case 0x16D6C8u: goto label_16d6c8;
            case 0x16D730u: goto label_16d730;
            case 0x16D768u: goto label_16d768;
            case 0x16D77Cu: goto label_16d77c;
            case 0x16D780u: goto label_16d780;
            case 0x16D790u: goto label_16d790;
            case 0x16D830u: goto label_16d830;
            case 0x16D850u: goto label_16d850;
            case 0x16D8B8u: goto label_16d8b8;
            case 0x16D8F8u: goto label_16d8f8;
            case 0x16D904u: goto label_16d904;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16D8F4u; }
            if (ctx->pc != 0x16D8F4u) { return; }
        }
        }
    }
    ctx->pc = 0x16D8F4u;
    // 0x16d8f4: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x16d8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_16d8f8:
    // 0x16d8f8: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x16d8f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x16d8fc: 0x1600ffee  bnez        $s0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x16D8FCu;
    {
        const bool branch_taken_0x16d8fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x16D900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D8FCu;
            // 0x16d900: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16d8fc) {
            ctx->pc = 0x16D8B8u;
            runtime->cooperativeGuestYield();
            goto label_16d8b8;
        }
    }
    ctx->pc = 0x16D904u;
label_16d904:
    // 0x16d904: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x16d904u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16d908: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x16d908u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16d90c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16d90cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16d910: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x16d910u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16d914: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16d914u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16d918: 0x3e00008  jr          $ra
    ctx->pc = 0x16D918u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16D91Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16D918u;
            // 0x16d91c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x16D208u: goto label_16d208;
            case 0x16D228u: goto label_16d228;
            case 0x16D22Cu: goto label_16d22c;
            case 0x16D238u: goto label_16d238;
            case 0x16D268u: goto label_16d268;
            case 0x16D290u: goto label_16d290;
            case 0x16D2B8u: goto label_16d2b8;
            case 0x16D2C8u: goto label_16d2c8;
            case 0x16D2FCu: goto label_16d2fc;
            case 0x16D308u: goto label_16d308;
            case 0x16D33Cu: goto label_16d33c;
            case 0x16D348u: goto label_16d348;
            case 0x16D384u: goto label_16d384;
            case 0x16D390u: goto label_16d390;
            case 0x16D3C8u: goto label_16d3c8;
            case 0x16D3CCu: goto label_16d3cc;
            case 0x16D3DCu: goto label_16d3dc;
            case 0x16D3E0u: goto label_16d3e0;
            case 0x16D440u: goto label_16d440;
            case 0x16D460u: goto label_16d460;
            case 0x16D488u: goto label_16d488;
            case 0x16D494u: goto label_16d494;
            case 0x16D5D0u: goto label_16d5d0;
            case 0x16D608u: goto label_16d608;
            case 0x16D628u: goto label_16d628;
            case 0x16D6C8u: goto label_16d6c8;
            case 0x16D730u: goto label_16d730;
            case 0x16D768u: goto label_16d768;
            case 0x16D77Cu: goto label_16d77c;
            case 0x16D780u: goto label_16d780;
            case 0x16D790u: goto label_16d790;
            case 0x16D830u: goto label_16d830;
            case 0x16D850u: goto label_16d850;
            case 0x16D8B8u: goto label_16d8b8;
            case 0x16D8F8u: goto label_16d8f8;
            case 0x16D904u: goto label_16d904;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16D920u;
}
