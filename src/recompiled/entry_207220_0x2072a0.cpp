#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_207220
// Address: 0x207220 - 0x2072a0
void entry_207220_0x2072a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_207220_0x2072a0");
#endif

    ctx->pc = 0x207220u;

    // 0x207220: 0x8c860174  lw          $a2, 0x174($a0)
    ctx->pc = 0x207220u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 372)));
    // 0x207224: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x207224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x207228: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x207228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20722c: 0x30c30003  andi        $v1, $a2, 0x3
    ctx->pc = 0x20722cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3);
    // 0x207230: 0x30c4004c  andi        $a0, $a2, 0x4C
    ctx->pc = 0x207230u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)76);
    // 0x207234: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x207234u;
    {
        const bool branch_taken_0x207234 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x207238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207234u;
            // 0x207238: 0x43280b  movn        $a1, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207234) {
            ctx->pc = 0x207248u;
            goto label_207248;
        }
    }
    ctx->pc = 0x20723Cu;
    // 0x20723c: 0x30c31000  andi        $v1, $a2, 0x1000
    ctx->pc = 0x20723cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4096);
    // 0x207240: 0x34a20004  ori         $v0, $a1, 0x4
    ctx->pc = 0x207240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4);
    // 0x207244: 0x43280a  movz        $a1, $v0, $v1
    ctx->pc = 0x207244u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_207248:
    // 0x207248: 0x30c20380  andi        $v0, $a2, 0x380
    ctx->pc = 0x207248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)896);
    // 0x20724c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x20724Cu;
    {
        const bool branch_taken_0x20724c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20724Cu;
            // 0x207250: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20724c) {
            ctx->pc = 0x207258u;
            goto label_207258;
        }
    }
    ctx->pc = 0x207254u;
    // 0x207254: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x207254u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_207258:
    // 0x207258: 0x30c20020  andi        $v0, $a2, 0x20
    ctx->pc = 0x207258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)32);
    // 0x20725c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x20725Cu;
    {
        const bool branch_taken_0x20725c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20725Cu;
            // 0x207260: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20725c) {
            ctx->pc = 0x207280u;
            goto label_207280;
        }
    }
    ctx->pc = 0x207264u;
    // 0x207264: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x207264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x207268: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x207268u;
    {
        const bool branch_taken_0x207268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20726Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207268u;
            // 0x20726c: 0x30c20400  andi        $v0, $a2, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x207268) {
            ctx->pc = 0x207284u;
            goto label_207284;
        }
    }
    ctx->pc = 0x207270u;
    // 0x207270: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x207270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x207274: 0x34a30020  ori         $v1, $a1, 0x20
    ctx->pc = 0x207274u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32);
    // 0x207278: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x207278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x20727c: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x20727cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_207280:
    // 0x207280: 0x30c20400  andi        $v0, $a2, 0x400
    ctx->pc = 0x207280u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1024);
label_207284:
    // 0x207284: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x207284u;
    {
        const bool branch_taken_0x207284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x207288u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207284u;
            // 0x207288: 0x3c020002  lui         $v0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x207284) {
            ctx->pc = 0x207298u;
            goto label_207298;
        }
    }
    ctx->pc = 0x20728Cu;
    // 0x20728c: 0x34a30080  ori         $v1, $a1, 0x80
    ctx->pc = 0x20728cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)128);
    // 0x207290: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x207290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x207294: 0x62280b  movn        $a1, $v1, $v0
    ctx->pc = 0x207294u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_207298:
    // 0x207298: 0x3e00008  jr          $ra
    ctx->pc = 0x207298u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20729Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x207298u;
            // 0x20729c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x207248u: goto label_207248;
            case 0x207258u: goto label_207258;
            case 0x207280u: goto label_207280;
            case 0x207284u: goto label_207284;
            case 0x207298u: goto label_207298;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2072A0u;
}
