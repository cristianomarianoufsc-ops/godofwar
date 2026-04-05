#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A81F8
// Address: 0x1a81f8 - 0x1a8338
void sub_001A81F8_0x1a81f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A81F8_0x1a81f8");
#endif

    ctx->pc = 0x1a81f8u;

    // 0x1a81f8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1a81f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1a81fc: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x1a81fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x1a8200: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1a8200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1a8204: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a8204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a8208: 0x10c00029  beqz        $a2, . + 4 + (0x29 << 2)
    ctx->pc = 0x1A8208u;
    {
        const bool branch_taken_0x1a8208 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A820Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8208u;
            // 0x1a820c: 0x58403  sra         $s0, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8208) {
            ctx->pc = 0x1A82B0u;
            goto label_1a82b0;
        }
    }
    ctx->pc = 0x1A8210u;
    // 0x1a8210: 0x3c08002a  lui         $t0, 0x2A
    ctx->pc = 0x1a8210u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)42 << 16));
    // 0x1a8214: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x1a8214u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
    // 0x1a8218: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a8218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1a821c: 0xa500cb20  sh          $zero, -0x34E0($t0)
    ctx->pc = 0x1a821cu;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4294953760), (uint16_t)GPR_U32(ctx, 0));
    // 0x1a8220: 0xa4e2cb22  sh          $v0, -0x34DE($a3)
    ctx->pc = 0x1a8220u;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4294953762), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a8224: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1a8224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1a8228: 0x8c42ec68  lw          $v0, -0x1398($v0)
    ctx->pc = 0x1a8228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962280)));
    // 0x1a822c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a822cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a8230: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a8230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1a8234: 0x8c4500c0  lw          $a1, 0xC0($v0)
    ctx->pc = 0x1a8234u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1a8238: 0x10a0001e  beqz        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1A8238u;
    {
        const bool branch_taken_0x1a8238 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A823Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8238u;
            // 0x1a823c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8238) {
            ctx->pc = 0x1A82B4u;
            goto label_1a82b4;
        }
    }
    ctx->pc = 0x1A8240u;
    // 0x1a8240: 0x24a2ffec  addiu       $v0, $a1, -0x14
    ctx->pc = 0x1a8240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967276));
    // 0x1a8244: 0x0  nop
    ctx->pc = 0x1a8244u;
    // NOP
label_1a8248:
    // 0x1a8248: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a8248u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a824c: 0x45300b  movn        $a2, $v0, $a1
    ctx->pc = 0x1a824cu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 2));
    // 0x1a8250: 0x3c03001a  lui         $v1, 0x1A
    ctx->pc = 0x1a8250u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26 << 16));
    // 0x1a8254: 0x8cc20030  lw          $v0, 0x30($a2)
    ctx->pc = 0x1a8254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
    // 0x1a8258: 0x246371a8  addiu       $v1, $v1, 0x71A8
    ctx->pc = 0x1a8258u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29096));
    // 0x1a825c: 0x54430012  bnel        $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A825Cu;
    {
        const bool branch_taken_0x1a825c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a825c) {
            ctx->pc = 0x1A8260u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A825Cu;
            // 0x1a8260: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A82A8u;
            goto label_1a82a8;
        }
    }
    ctx->pc = 0x1A8264u;
    // 0x1a8264: 0x8cc2004c  lw          $v0, 0x4C($a2)
    ctx->pc = 0x1a8264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 76)));
    // 0x1a8268: 0x21c03  sra         $v1, $v0, 16
    ctx->pc = 0x1a8268u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 16));
    // 0x1a826c: 0xa4e2cb22  sh          $v0, -0x34DE($a3)
    ctx->pc = 0x1a826cu;
    WRITE16(ADD32(GPR_U32(ctx, 7), 4294953762), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a8270: 0xa503cb20  sh          $v1, -0x34E0($t0)
    ctx->pc = 0x1a8270u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 4294953760), (uint16_t)GPR_U32(ctx, 3));
    // 0x1a8274: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1a8274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1a8278: 0x8c43e84c  lw          $v1, -0x17B4($v0)
    ctx->pc = 0x1a8278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961228)));
    // 0x1a827c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a827cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a8280: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1a8280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1a8284: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1a8284u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1a8288: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1a8288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1a828c: 0x40f809  jalr        $v0
    ctx->pc = 0x1A828Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A8294u);
        ctx->pc = 0x1A8290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A828Cu;
            // 0x1a8290: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A8294u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A8248u: goto label_1a8248;
            case 0x1A82A8u: goto label_1a82a8;
            case 0x1A82B0u: goto label_1a82b0;
            case 0x1A82B4u: goto label_1a82b4;
            case 0x1A82C8u: goto label_1a82c8;
            case 0x1A8318u: goto label_1a8318;
            case 0x1A831Cu: goto label_1a831c;
            case 0x1A8328u: goto label_1a8328;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A8294u; }
            if (ctx->pc != 0x1A8294u) { return; }
        }
        }
    }
    ctx->pc = 0x1A8294u;
    // 0x1a8294: 0xc06cd0c  jal         func_1B3430
    ctx->pc = 0x1A8294u;
    SET_GPR_U32(ctx, 31, 0x1A829Cu);
    ctx->pc = 0x1A8298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8294u;
            // 0x1a8298: 0x8c440088  lw          $a0, 0x88($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B3430u;
    if (runtime->hasFunction(0x1B3430u)) {
        auto targetFn = runtime->lookupFunction(0x1B3430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A829Cu; }
        if (ctx->pc != 0x1A829Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B3430_0x1b3430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A829Cu; }
        if (ctx->pc != 0x1A829Cu) { return; }
    }
    ctx->pc = 0x1A829Cu;
    // 0x1a829c: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1a829cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x1a82a0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A82A0u;
    {
        const bool branch_taken_0x1a82a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A82A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A82A0u;
            // 0x1a82a4: 0xac62cb24  sw          $v0, -0x34DC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294953764), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a82a0) {
            ctx->pc = 0x1A82B0u;
            goto label_1a82b0;
        }
    }
    ctx->pc = 0x1A82A8u;
label_1a82a8:
    // 0x1a82a8: 0x14a0ffe7  bnez        $a1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1A82A8u;
    {
        const bool branch_taken_0x1a82a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A82ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A82A8u;
            // 0x1a82ac: 0x24a2ffec  addiu       $v0, $a1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a82a8) {
            ctx->pc = 0x1A8248u;
            runtime->cooperativeGuestYield();
            goto label_1a8248;
        }
    }
    ctx->pc = 0x1A82B0u;
label_1a82b0:
    // 0x1a82b0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a82b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_1a82b4:
    // 0x1a82b4: 0x9442cb20  lhu         $v0, -0x34E0($v0)
    ctx->pc = 0x1a82b4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294953760)));
    // 0x1a82b8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1A82B8u;
    {
        const bool branch_taken_0x1a82b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A82BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A82B8u;
            // 0x1a82bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a82b8) {
            ctx->pc = 0x1A8328u;
            goto label_1a8328;
        }
    }
    ctx->pc = 0x1A82C0u;
    // 0x1a82c0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a82c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a82c4: 0x0  nop
    ctx->pc = 0x1a82c4u;
    // NOP
label_1a82c8:
    // 0x1a82c8: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1a82c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1a82cc: 0x8c43cb24  lw          $v1, -0x34DC($v0)
    ctx->pc = 0x1a82ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953764)));
    // 0x1a82d0: 0x94a4cb22  lhu         $a0, -0x34DE($a1)
    ctx->pc = 0x1a82d0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4294953762)));
    // 0x1a82d4: 0x84a2cb22  lh          $v0, -0x34DE($a1)
    ctx->pc = 0x1a82d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4294953762)));
    // 0x1a82d8: 0x8c660064  lw          $a2, 0x64($v1)
    ctx->pc = 0x1a82d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 100)));
    // 0x1a82dc: 0x3c07002a  lui         $a3, 0x2A
    ctx->pc = 0x1a82dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)42 << 16));
    // 0x1a82e0: 0x94e3cb20  lhu         $v1, -0x34E0($a3)
    ctx->pc = 0x1a82e0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4294953760)));
    // 0x1a82e4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a82e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a82e8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1a82e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x1a82ec: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a82ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a82f0: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x1a82f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x1a82f4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x1a82f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a82f8: 0xa4a4cb22  sh          $a0, -0x34DE($a1)
    ctx->pc = 0x1a82f8u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4294953762), (uint16_t)GPR_U32(ctx, 4));
    // 0x1a82fc: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A82FCu;
    {
        const bool branch_taken_0x1a82fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A82FCu;
            // 0x1a8300: 0xa4e3cb20  sh          $v1, -0x34E0($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 4294953760), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a82fc) {
            ctx->pc = 0x1A8318u;
            goto label_1a8318;
        }
    }
    ctx->pc = 0x1A8304u;
    // 0x1a8304: 0x84c20044  lh          $v0, 0x44($a2)
    ctx->pc = 0x1a8304u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 68)));
    // 0x1a8308: 0x14500004  bne         $v0, $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A8308u;
    {
        const bool branch_taken_0x1a8308 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1A830Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8308u;
            // 0x1a830c: 0x94e2cb20  lhu         $v0, -0x34E0($a3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4294953760)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8308) {
            ctx->pc = 0x1A831Cu;
            goto label_1a831c;
        }
    }
    ctx->pc = 0x1A8310u;
    // 0x1a8310: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1A8310u;
    {
        const bool branch_taken_0x1a8310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8310u;
            // 0x1a8314: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8310) {
            ctx->pc = 0x1A8328u;
            goto label_1a8328;
        }
    }
    ctx->pc = 0x1A8318u;
label_1a8318:
    // 0x1a8318: 0x94e2cb20  lhu         $v0, -0x34E0($a3)
    ctx->pc = 0x1a8318u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 4294953760)));
label_1a831c:
    // 0x1a831c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x1A831Cu;
    {
        const bool branch_taken_0x1a831c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A831Cu;
            // 0x1a8320: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a831c) {
            ctx->pc = 0x1A82C8u;
            runtime->cooperativeGuestYield();
            goto label_1a82c8;
        }
    }
    ctx->pc = 0x1A8324u;
    // 0x1a8324: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a8324u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a8328:
    // 0x1a8328: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1a8328u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a832c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a832cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a8330: 0x3e00008  jr          $ra
    ctx->pc = 0x1A8330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A8330u;
            // 0x1a8334: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A8248u: goto label_1a8248;
            case 0x1A82A8u: goto label_1a82a8;
            case 0x1A82B0u: goto label_1a82b0;
            case 0x1A82B4u: goto label_1a82b4;
            case 0x1A82C8u: goto label_1a82c8;
            case 0x1A8318u: goto label_1a8318;
            case 0x1A831Cu: goto label_1a831c;
            case 0x1A8328u: goto label_1a8328;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A8338u;
}
