#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_26f228
// Address: 0x26f228 - 0x26f2f8
void entry_26f228_0x26f2f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_26f228_0x26f2f8");
#endif

    ctx->pc = 0x26f228u;

    // 0x26f228: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x26f228u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x26f22c: 0x3c03ff7f  lui         $v1, 0xFF7F
    ctx->pc = 0x26f22cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65407 << 16));
    // 0x26f230: 0x34a52010  ori         $a1, $a1, 0x2010
    ctx->pc = 0x26f230u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8208);
    // 0x26f234: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x26f234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x26f238: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x26f238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x26f23c: 0x3c060080  lui         $a2, 0x80
    ctx->pc = 0x26f23cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)128 << 16));
    // 0x26f240: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x26f240u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f244: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x26f244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x26f248: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x26f248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x26f24c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x26f24cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x26f250: 0x8ce3087c  lw          $v1, 0x87C($a3)
    ctx->pc = 0x26f250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 2172)));
    // 0x26f254: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x26F254u;
    {
        const bool branch_taken_0x26f254 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x26F258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F254u;
            // 0x26f258: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f254) {
            ctx->pc = 0x26F29Cu;
            goto label_26f29c;
        }
    }
    ctx->pc = 0x26F25Cu;
    // 0x26f25c: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x26f25cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x26f260: 0x3c037000  lui         $v1, 0x7000
    ctx->pc = 0x26f260u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)28672 << 16));
    // 0x26f264: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x26f264u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x26f268: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x26f268u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x26f26c: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x26f26cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x26f270: 0x34423600  ori         $v0, $v0, 0x3600
    ctx->pc = 0x26f270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13824);
    // 0x26f274: 0x34631800  ori         $v1, $v1, 0x1800
    ctx->pc = 0x26f274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6144);
    // 0x26f278: 0x34841b00  ori         $a0, $a0, 0x1B00
    ctx->pc = 0x26f278u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)6912);
    // 0x26f27c: 0x34a53300  ori         $a1, $a1, 0x3300
    ctx->pc = 0x26f27cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)13056);
    // 0x26f280: 0xace20830  sw          $v0, 0x830($a3)
    ctx->pc = 0x26f280u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 2096), GPR_U32(ctx, 2));
    // 0x26f284: 0xace605a0  sw          $a2, 0x5A0($a3)
    ctx->pc = 0x26f284u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1440), GPR_U32(ctx, 6));
    // 0x26f288: 0xace305a4  sw          $v1, 0x5A4($a3)
    ctx->pc = 0x26f288u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1444), GPR_U32(ctx, 3));
    // 0x26f28c: 0xace406e0  sw          $a0, 0x6E0($a3)
    ctx->pc = 0x26f28cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1760), GPR_U32(ctx, 4));
    // 0x26f290: 0xace506e4  sw          $a1, 0x6E4($a3)
    ctx->pc = 0x26f290u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1764), GPR_U32(ctx, 5));
    // 0x26f294: 0x3e00008  jr          $ra
    ctx->pc = 0x26F294u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F294u;
            // 0x26f298: 0xace00820  sw          $zero, 0x820($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 2080), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26F29Cu: goto label_26f29c;
            case 0x26F2E8u: goto label_26f2e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26F29Cu;
label_26f29c:
    // 0x26f29c: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x26F29Cu;
    {
        const bool branch_taken_0x26f29c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x26F2A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F29Cu;
            // 0x26f2a0: 0x3c05002c  lui         $a1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26f29c) {
            ctx->pc = 0x26F2E8u;
            goto label_26f2e8;
        }
    }
    ctx->pc = 0x26F2A4u;
    // 0x26f2a4: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x26f2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x26f2a8: 0x24e40880  addiu       $a0, $a3, 0x880
    ctx->pc = 0x26f2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 2176));
    // 0x26f2ac: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26f2acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26f2b0: 0x24e30b80  addiu       $v1, $a3, 0xB80
    ctx->pc = 0x26f2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 2944));
    // 0x26f2b4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x26f2b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x26f2b8: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x26f2b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x26f2bc: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x26f2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x26f2c0: 0x24e20e80  addiu       $v0, $a3, 0xE80
    ctx->pc = 0x26f2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 3712));
    // 0x26f2c4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x26f2c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x26f2c8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x26f2c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x26f2cc: 0xace20830  sw          $v0, 0x830($a3)
    ctx->pc = 0x26f2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 2096), GPR_U32(ctx, 2));
    // 0x26f2d0: 0xace405a4  sw          $a0, 0x5A4($a3)
    ctx->pc = 0x26f2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1444), GPR_U32(ctx, 4));
    // 0x26f2d4: 0xace306e4  sw          $v1, 0x6E4($a3)
    ctx->pc = 0x26f2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1764), GPR_U32(ctx, 3));
    // 0x26f2d8: 0xace00820  sw          $zero, 0x820($a3)
    ctx->pc = 0x26f2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 2080), GPR_U32(ctx, 0));
    // 0x26f2dc: 0xace005a0  sw          $zero, 0x5A0($a3)
    ctx->pc = 0x26f2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 1440), GPR_U32(ctx, 0));
    // 0x26f2e0: 0x3e00008  jr          $ra
    ctx->pc = 0x26F2E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26F2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26F2E0u;
            // 0x26f2e4: 0xace006e0  sw          $zero, 0x6E0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 1760), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x26F29Cu: goto label_26f29c;
            case 0x26F2E8u: goto label_26f2e8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x26F2E8u;
label_26f2e8:
    // 0x26f2e8: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x26f2e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26f2ec: 0x809d0e6  j           func_274398
    ctx->pc = 0x26F2ECu;
    ctx->pc = 0x26F2F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26F2ECu;
            // 0x26f2f0: 0x24a542b0  addiu       $a1, $a1, 0x42B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x274398u;
    if (runtime->hasFunction(0x274398u)) {
        auto targetFn = runtime->lookupFunction(0x274398u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00274398_0x274398(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x26F2F4u;
    // 0x26f2f4: 0x0  nop
    ctx->pc = 0x26f2f4u;
    // NOP
}
