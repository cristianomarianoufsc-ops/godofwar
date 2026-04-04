#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028F140
// Address: 0x28f140 - 0x290048
void sub_0028F140_0x28f140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F140_0x28f140");
#endif

    ctx->pc = 0x28f140u;

    // 0x28f140: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x28f140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
    // 0x28f144: 0x27a20044  addiu       $v0, $sp, 0x44
    ctx->pc = 0x28f144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x28f148: 0x27a30048  addiu       $v1, $sp, 0x48
    ctx->pc = 0x28f148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x28f14c: 0x7fb10100  sq          $s1, 0x100($sp)
    ctx->pc = 0x28f14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 17));
    // 0x28f150: 0x7fb300e0  sq          $s3, 0xE0($sp)
    ctx->pc = 0x28f150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 19));
    // 0x28f154: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x28f154u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f158: 0x7fb700a0  sq          $s7, 0xA0($sp)
    ctx->pc = 0x28f158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 23));
    // 0x28f15c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x28f15cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f160: 0x7fb00110  sq          $s0, 0x110($sp)
    ctx->pc = 0x28f160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 16));
    // 0x28f164: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x28f164u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f168: 0x7fb200f0  sq          $s2, 0xF0($sp)
    ctx->pc = 0x28f168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 18));
    // 0x28f16c: 0x7fb400d0  sq          $s4, 0xD0($sp)
    ctx->pc = 0x28f16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 20));
    // 0x28f170: 0x7fb500c0  sq          $s5, 0xC0($sp)
    ctx->pc = 0x28f170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 21));
    // 0x28f174: 0x7fb600b0  sq          $s6, 0xB0($sp)
    ctx->pc = 0x28f174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 22));
    // 0x28f178: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x28f178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x28f17c: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x28f17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x28f180: 0xafa00048  sw          $zero, 0x48($sp)
    ctx->pc = 0x28f180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
    // 0x28f184: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x28f184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x28f188: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x28f188u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x28f18c: 0xafa3006c  sw          $v1, 0x6C($sp)
    ctx->pc = 0x28f18cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 3));
label_28f190:
    // 0x28f190: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x28f190u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f194: 0x24120025  addiu       $s2, $zero, 0x25
    ctx->pc = 0x28f194u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_28f198:
    // 0x28f198: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x28f198u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x28f19c: 0x3c06002a  lui         $a2, 0x2A
    ctx->pc = 0x28f19cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)42 << 16));
    // 0x28f1a0: 0x8ca44294  lw          $a0, 0x4294($a1)
    ctx->pc = 0x28f1a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 17044)));
    // 0x28f1a4: 0x8cc74a90  lw          $a3, 0x4A90($a2)
    ctx->pc = 0x28f1a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 19088)));
    // 0x28f1a8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x28f1a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x28f1ac: 0x2e0302d  daddu       $a2, $s7, $zero
    ctx->pc = 0x28f1acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f1b0: 0xc0a2cc2  jal         func_28B308
    ctx->pc = 0x28F1B0u;
    SET_GPR_U32(ctx, 31, 0x28F1B8u);
    ctx->pc = 0x28F1B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F1B0u;
            // 0x28f1b4: 0x8fa8006c  lw          $t0, 0x6C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B308u;
    if (runtime->hasFunction(0x28B308u)) {
        auto targetFn = runtime->lookupFunction(0x28B308u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F1B8u; }
        if (ctx->pc != 0x28F1B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028B308_0x28b308(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F1B8u; }
        if (ctx->pc != 0x28F1B8u) { return; }
    }
    ctx->pc = 0x28F1B8u;
    // 0x28f1b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28f1b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f1bc: 0x1a000004  blez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F1BCu;
    {
        const bool branch_taken_0x28f1bc = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x28F1C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F1BCu;
            // 0x28f1c0: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f1bc) {
            ctx->pc = 0x28F1D0u;
            goto label_28f1d0;
        }
    }
    ctx->pc = 0x28F1C4u;
    // 0x28f1c4: 0x1452fff4  bne         $v0, $s2, . + 4 + (-0xC << 2)
    ctx->pc = 0x28F1C4u;
    {
        const bool branch_taken_0x28f1c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x28F1C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F1C4u;
            // 0x28f1c8: 0x2f0b821  addu        $s7, $s7, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f1c4) {
            ctx->pc = 0x28F198u;
            runtime->cooperativeGuestYield();
            goto label_28f198;
        }
    }
    ctx->pc = 0x28F1CCu;
    // 0x28f1cc: 0x26f7ffff  addiu       $s7, $s7, -0x1
    ctx->pc = 0x28f1ccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294967295));
label_28f1d0:
    // 0x28f1d0: 0x2f49023  subu        $s2, $s7, $s4
    ctx->pc = 0x28f1d0u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 20)));
    // 0x28f1d4: 0x12400028  beqz        $s2, . + 4 + (0x28 << 2)
    ctx->pc = 0x28F1D4u;
    {
        const bool branch_taken_0x28f1d4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f1d4) {
            ctx->pc = 0x28F278u;
            goto label_28f278;
        }
    }
    ctx->pc = 0x28F1DCu;
    // 0x28f1dc: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x28f1dcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28f1e0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x28f1e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x28f1e4: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x28F1E4u;
    {
        const bool branch_taken_0x28f1e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f1e4) {
            ctx->pc = 0x28F1E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F1E4u;
            // 0x28f1e8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F248u;
            goto label_28f248;
        }
    }
    ctx->pc = 0x28F1ECu;
    // 0x28f1ec: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x28f1ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28f1f0: 0x246102a  slt         $v0, $s2, $a2
    ctx->pc = 0x28f1f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x28f1f4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x28F1F4u;
    {
        const bool branch_taken_0x28f1f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F1F4u;
            // 0x28f1f8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f1f4) {
            ctx->pc = 0x28F224u;
            goto label_28f224;
        }
    }
    ctx->pc = 0x28F1FCu;
    // 0x28f1fc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x28f1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28f200: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x28F200u;
    SET_GPR_U32(ctx, 31, 0x28F208u);
    ctx->pc = 0x28F204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F200u;
            // 0x28f204: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F208u; }
        if (ctx->pc != 0x28F208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F208u; }
        if (ctx->pc != 0x28F208u) { return; }
    }
    ctx->pc = 0x28F208u;
    // 0x28f208: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28f208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28f20c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28f20cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28f210: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x28f210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x28f214: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x28f214u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x28f218: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x28f218u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x28f21c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x28F21Cu;
    {
        const bool branch_taken_0x28f21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F21Cu;
            // 0x28f220: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f21c) {
            ctx->pc = 0x28F26Cu;
            goto label_28f26c;
        }
    }
    ctx->pc = 0x28F224u;
label_28f224:
    // 0x28f224: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x28f224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28f228: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x28F228u;
    SET_GPR_U32(ctx, 31, 0x28F230u);
    ctx->pc = 0x28F22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F228u;
            // 0x28f22c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F230u; }
        if (ctx->pc != 0x28F230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F230u; }
        if (ctx->pc != 0x28F230u) { return; }
    }
    ctx->pc = 0x28F230u;
    // 0x28f230: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28f230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28f234: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28f234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28f238: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x28f238u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x28f23c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28f23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28f240: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x28F240u;
    {
        const bool branch_taken_0x28f240 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F244u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F240u;
            // 0x28f244: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f240) {
            ctx->pc = 0x28F26Cu;
            goto label_28f26c;
        }
    }
    ctx->pc = 0x28F248u;
label_28f248:
    // 0x28f248: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F248u;
    {
        const bool branch_taken_0x28f248 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f248) {
            ctx->pc = 0x28F24Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F248u;
            // 0x28f24c: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F25Cu;
            goto label_28f25c;
        }
    }
    ctx->pc = 0x28F250u;
    // 0x28f250: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28f250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f254: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x28f254u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x28f258: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x28f258u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_28f25c:
    // 0x28f25c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x28f25cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f260: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28f260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f264: 0xc0a3c0e  jal         func_28F038
    ctx->pc = 0x28F264u;
    SET_GPR_U32(ctx, 31, 0x28F26Cu);
    ctx->pc = 0x28F268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F264u;
            // 0x28f268: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28F038u;
    if (runtime->hasFunction(0x28F038u)) {
        auto targetFn = runtime->lookupFunction(0x28F038u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F26Cu; }
        if (ctx->pc != 0x28F26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028F038_0x28f038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F26Cu; }
        if (ctx->pc != 0x28F26Cu) { return; }
    }
    ctx->pc = 0x28F26Cu;
label_28f26c:
    // 0x28f26c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x28f26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28f270: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x28f270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x28f274: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x28f274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_28f278:
    // 0x28f278: 0x5a00035d  blezl       $s0, . + 4 + (0x35D << 2)
    ctx->pc = 0x28F278u;
    {
        const bool branch_taken_0x28f278 = (GPR_S32(ctx, 16) <= 0);
        if (branch_taken_0x28f278) {
            ctx->pc = 0x28F27Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F278u;
            // 0x28f27c: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28FFF0u;
            goto label_28fff0;
        }
    }
    ctx->pc = 0x28F280u;
    // 0x28f280: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28f280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28f284: 0x5c400006  bgtzl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28F284u;
    {
        const bool branch_taken_0x28f284 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x28f284) {
            ctx->pc = 0x28F288u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F284u;
            // 0x28f288: 0xa3a00040  sb          $zero, 0x40($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F2A0u;
            goto label_28f2a0;
        }
    }
    ctx->pc = 0x28F28Cu;
    // 0x28f28c: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x28f28cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28f290: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x28f290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x28f294: 0x1440035f  bnez        $v0, . + 4 + (0x35F << 2)
    ctx->pc = 0x28F294u;
    {
        const bool branch_taken_0x28f294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F294u;
            // 0x28f298: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f294) {
            ctx->pc = 0x290014u;
            goto label_290014;
        }
    }
    ctx->pc = 0x28F29Cu;
    // 0x28f29c: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x28f29cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
label_28f2a0:
    // 0x28f2a0: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x28f2a0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
    // 0x28f2a4: 0xafa00058  sw          $zero, 0x58($sp)
    ctx->pc = 0x28f2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 0));
    // 0x28f2a8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28f2a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f2ac: 0xafa00054  sw          $zero, 0x54($sp)
    ctx->pc = 0x28f2acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    // 0x28f2b0: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x28f2b0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_28f2b4:
    // 0x28f2b4: 0x82f50000  lb          $s5, 0x0($s7)
    ctx->pc = 0x28f2b4u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
label_28f2b8:
    // 0x28f2b8: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x28f2b8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_28f2bc:
    // 0x28f2bc: 0x26a3ffe0  addiu       $v1, $s5, -0x20
    ctx->pc = 0x28f2bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967264));
    // 0x28f2c0: 0x2c620059  sltiu       $v0, $v1, 0x59
    ctx->pc = 0x28f2c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)89) ? 1 : 0);
    // 0x28f2c4: 0x1040014f  beqz        $v0, . + 4 + (0x14F << 2)
    ctx->pc = 0x28F2C4u;
    {
        const bool branch_taken_0x28f2c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F2C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F2C4u;
            // 0x28f2c8: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f2c4) {
            ctx->pc = 0x28F804u;
            goto label_28f804;
        }
    }
    ctx->pc = 0x28F2CCu;
    // 0x28f2cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28f2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28f2d0: 0x244263c0  addiu       $v0, $v0, 0x63C0
    ctx->pc = 0x28f2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25536));
    // 0x28f2d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28f2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28f2d8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x28f2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28f2dc: 0x800008  jr          $a0
    ctx->pc = 0x28F2DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28F2E4u: goto label_28f2e4;
            case 0x28F2FCu: goto label_28f2fc;
            case 0x28F304u: goto label_28f304;
            case 0x28F30Cu: goto label_28f30c;
            case 0x28F324u: goto label_28f324;
            case 0x28F32Cu: goto label_28f32c;
            case 0x28F338u: goto label_28f338;
            case 0x28F3ACu: goto label_28f3ac;
            case 0x28F3B4u: goto label_28f3b4;
            case 0x28F3E8u: goto label_28f3e8;
            case 0x28F3F0u: goto label_28f3f0;
            case 0x28F404u: goto label_28f404;
            case 0x28F40Cu: goto label_28f40c;
            case 0x28F438u: goto label_28f438;
            case 0x28F43Cu: goto label_28f43c;
            case 0x28F48Cu: goto label_28f48c;
            case 0x28F4F4u: goto label_28f4f4;
            case 0x28F4F8u: goto label_28f4f8;
            case 0x28F538u: goto label_28f538;
            case 0x28F55Cu: goto label_28f55c;
            case 0x28F5BCu: goto label_28f5bc;
            case 0x28F5C0u: goto label_28f5c0;
            case 0x28F600u: goto label_28f600;
            case 0x28F60Cu: goto label_28f60c;
            case 0x28F804u: goto label_28f804;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28F2E4u;
label_28f2e4:
    // 0x28f2e4: 0x83a20040  lb          $v0, 0x40($sp)
    ctx->pc = 0x28f2e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28f2e8: 0x5440fff3  bnel        $v0, $zero, . + 4 + (-0xD << 2)
    ctx->pc = 0x28F2E8u;
    {
        const bool branch_taken_0x28f2e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f2e8) {
            ctx->pc = 0x28F2ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F2E8u;
            // 0x28f2ec: 0x82f50000  lb          $s5, 0x0($s7) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F2B8u;
            runtime->cooperativeGuestYield();
            goto label_28f2b8;
        }
    }
    ctx->pc = 0x28F2F0u;
    // 0x28f2f0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x28f2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x28f2f4: 0x1000ffef  b           . + 4 + (-0x11 << 2)
    ctx->pc = 0x28F2F4u;
    {
        const bool branch_taken_0x28f2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F2F4u;
            // 0x28f2f8: 0xa3a20040  sb          $v0, 0x40($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f2f4) {
            ctx->pc = 0x28F2B4u;
            runtime->cooperativeGuestYield();
            goto label_28f2b4;
        }
    }
    ctx->pc = 0x28F2FCu;
label_28f2fc:
    // 0x28f2fc: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x28F2FCu;
    {
        const bool branch_taken_0x28f2fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F2FCu;
            // 0x28f300: 0x36520001  ori         $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f2fc) {
            ctx->pc = 0x28F2B4u;
            runtime->cooperativeGuestYield();
            goto label_28f2b4;
        }
    }
    ctx->pc = 0x28F304u;
label_28f304:
    // 0x28f304: 0x1000ffeb  b           . + 4 + (-0x15 << 2)
    ctx->pc = 0x28F304u;
    {
        const bool branch_taken_0x28f304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F304u;
            // 0x28f308: 0x36520200  ori         $s2, $s2, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f304) {
            ctx->pc = 0x28F2B4u;
            runtime->cooperativeGuestYield();
            goto label_28f2b4;
        }
    }
    ctx->pc = 0x28F30Cu;
label_28f30c:
    // 0x28f30c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x28f30cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x28f310: 0x8e63fff8  lw          $v1, -0x8($s3)
    ctx->pc = 0x28f310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x28f314: 0x461ffe7  bgez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x28F314u;
    {
        const bool branch_taken_0x28f314 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x28F318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F314u;
            // 0x28f318: 0xafa30054  sw          $v1, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f314) {
            ctx->pc = 0x28F2B4u;
            runtime->cooperativeGuestYield();
            goto label_28f2b4;
        }
    }
    ctx->pc = 0x28F31Cu;
    // 0x28f31c: 0x31823  negu        $v1, $v1
    ctx->pc = 0x28f31cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x28f320: 0xafa30054  sw          $v1, 0x54($sp)
    ctx->pc = 0x28f320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 3));
label_28f324:
    // 0x28f324: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x28F324u;
    {
        const bool branch_taken_0x28f324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F324u;
            // 0x28f328: 0x36520004  ori         $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f324) {
            ctx->pc = 0x28F2B4u;
            runtime->cooperativeGuestYield();
            goto label_28f2b4;
        }
    }
    ctx->pc = 0x28F32Cu;
label_28f32c:
    // 0x28f32c: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x28f32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x28f330: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x28F330u;
    {
        const bool branch_taken_0x28f330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F330u;
            // 0x28f334: 0xa3a20040  sb          $v0, 0x40($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f330) {
            ctx->pc = 0x28F2B4u;
            runtime->cooperativeGuestYield();
            goto label_28f2b4;
        }
    }
    ctx->pc = 0x28F338u;
label_28f338:
    // 0x28f338: 0x82f50000  lb          $s5, 0x0($s7)
    ctx->pc = 0x28f338u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x28f33c: 0x2402002a  addiu       $v0, $zero, 0x2A
    ctx->pc = 0x28f33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x28f340: 0x16a20008  bne         $s5, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28F340u;
    {
        const bool branch_taken_0x28f340 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x28F344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F340u;
            // 0x28f344: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f340) {
            ctx->pc = 0x28F364u;
            goto label_28f364;
        }
    }
    ctx->pc = 0x28F348u;
    // 0x28f348: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x28f348u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x28f34c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x28f34cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x28f350: 0x8e70fff8  lw          $s0, -0x8($s3)
    ctx->pc = 0x28f350u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x28f354: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x28f354u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28f358: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x28f358u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x28f35c: 0x1000ffd5  b           . + 4 + (-0x2B << 2)
    ctx->pc = 0x28F35Cu;
    {
        const bool branch_taken_0x28f35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F35Cu;
            // 0x28f360: 0x202f00b  movn        $fp, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f35c) {
            ctx->pc = 0x28F2B4u;
            runtime->cooperativeGuestYield();
            goto label_28f2b4;
        }
    }
    ctx->pc = 0x28F364u;
label_28f364:
    // 0x28f364: 0x26a2ffd0  addiu       $v0, $s5, -0x30
    ctx->pc = 0x28f364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967248));
    // 0x28f368: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x28f368u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x28f36c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x28F36Cu;
    {
        const bool branch_taken_0x28f36c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F36Cu;
            // 0x28f370: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f36c) {
            ctx->pc = 0x28F398u;
            goto label_28f398;
        }
    }
    ctx->pc = 0x28F374u;
    // 0x28f374: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x28f374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_28f378:
    // 0x28f378: 0x2031018  mult        $v0, $s0, $v1
    ctx->pc = 0x28f378u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28f37c: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x28f37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x28f380: 0x558021  addu        $s0, $v0, $s5
    ctx->pc = 0x28f380u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x28f384: 0x82f50000  lb          $s5, 0x0($s7)
    ctx->pc = 0x28f384u;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x28f388: 0x26a2ffd0  addiu       $v0, $s5, -0x30
    ctx->pc = 0x28f388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967248));
    // 0x28f38c: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x28f38cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x28f390: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x28F390u;
    {
        const bool branch_taken_0x28f390 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F390u;
            // 0x28f394: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f390) {
            ctx->pc = 0x28F378u;
            runtime->cooperativeGuestYield();
            goto label_28f378;
        }
    }
    ctx->pc = 0x28F398u;
label_28f398:
    // 0x28f398: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x28f398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x28f39c: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x28f39cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28f3a0: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x28f3a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x28f3a4: 0x1000ffc5  b           . + 4 + (-0x3B << 2)
    ctx->pc = 0x28F3A4u;
    {
        const bool branch_taken_0x28f3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F3A4u;
            // 0x28f3a8: 0x202f00b  movn        $fp, $s0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f3a4) {
            ctx->pc = 0x28F2BCu;
            runtime->cooperativeGuestYield();
            goto label_28f2bc;
        }
    }
    ctx->pc = 0x28F3ACu;
label_28f3ac:
    // 0x28f3ac: 0x1000ffc1  b           . + 4 + (-0x3F << 2)
    ctx->pc = 0x28F3ACu;
    {
        const bool branch_taken_0x28f3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F3B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F3ACu;
            // 0x28f3b0: 0x36520080  ori         $s2, $s2, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f3ac) {
            ctx->pc = 0x28F2B4u;
            runtime->cooperativeGuestYield();
            goto label_28f2b4;
        }
    }
    ctx->pc = 0x28F3B4u;
label_28f3b4:
    // 0x28f3b4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28f3b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f3b8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x28f3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x28f3bc: 0x0  nop
    ctx->pc = 0x28f3bcu;
    // NOP
label_28f3c0:
    // 0x28f3c0: 0x2031018  mult        $v0, $s0, $v1
    ctx->pc = 0x28f3c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28f3c4: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x28f3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x28f3c8: 0x558021  addu        $s0, $v0, $s5
    ctx->pc = 0x28f3c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x28f3cc: 0x82f50000  lb          $s5, 0x0($s7)
    ctx->pc = 0x28f3ccu;
    SET_GPR_S32(ctx, 21, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x28f3d0: 0x26a2ffd0  addiu       $v0, $s5, -0x30
    ctx->pc = 0x28f3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967248));
    // 0x28f3d4: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x28f3d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x28f3d8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x28F3D8u;
    {
        const bool branch_taken_0x28f3d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F3DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F3D8u;
            // 0x28f3dc: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f3d8) {
            ctx->pc = 0x28F3C0u;
            runtime->cooperativeGuestYield();
            goto label_28f3c0;
        }
    }
    ctx->pc = 0x28F3E0u;
    // 0x28f3e0: 0x1000ffb6  b           . + 4 + (-0x4A << 2)
    ctx->pc = 0x28F3E0u;
    {
        const bool branch_taken_0x28f3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F3E0u;
            // 0x28f3e4: 0xafb00054  sw          $s0, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f3e0) {
            ctx->pc = 0x28F2BCu;
            runtime->cooperativeGuestYield();
            goto label_28f2bc;
        }
    }
    ctx->pc = 0x28F3E8u;
label_28f3e8:
    // 0x28f3e8: 0x1000ffb2  b           . + 4 + (-0x4E << 2)
    ctx->pc = 0x28F3E8u;
    {
        const bool branch_taken_0x28f3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F3E8u;
            // 0x28f3ec: 0x36520040  ori         $s2, $s2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f3e8) {
            ctx->pc = 0x28F2B4u;
            runtime->cooperativeGuestYield();
            goto label_28f2b4;
        }
    }
    ctx->pc = 0x28F3F0u;
label_28f3f0:
    // 0x28f3f0: 0x82e30000  lb          $v1, 0x0($s7)
    ctx->pc = 0x28f3f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x28f3f4: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x28f3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x28f3f8: 0x5462ffae  bnel        $v1, $v0, . + 4 + (-0x52 << 2)
    ctx->pc = 0x28F3F8u;
    {
        const bool branch_taken_0x28f3f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28f3f8) {
            ctx->pc = 0x28F3FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F3F8u;
            // 0x28f3fc: 0x36520010  ori         $s2, $s2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F2B4u;
            runtime->cooperativeGuestYield();
            goto label_28f2b4;
        }
    }
    ctx->pc = 0x28F400u;
    // 0x28f400: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x28f400u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_28f404:
    // 0x28f404: 0x1000ffab  b           . + 4 + (-0x55 << 2)
    ctx->pc = 0x28F404u;
    {
        const bool branch_taken_0x28f404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F404u;
            // 0x28f408: 0x36520020  ori         $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f404) {
            ctx->pc = 0x28F2B4u;
            runtime->cooperativeGuestYield();
            goto label_28f2b4;
        }
    }
    ctx->pc = 0x28F40Cu;
label_28f40c:
    // 0x28f40c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x28f40cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x28f410: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28f410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f414: 0x9263fff8  lbu         $v1, -0x8($s3)
    ctx->pc = 0x28f414u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x28f418: 0x32440004  andi        $a0, $s2, 0x4
    ctx->pc = 0x28f418u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
    // 0x28f41c: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x28f41cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f420: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x28f420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x28f424: 0x325e0084  andi        $fp, $s2, 0x84
    ctx->pc = 0x28f424u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)132);
    // 0x28f428: 0xa3a30000  sb          $v1, 0x0($sp)
    ctx->pc = 0x28f428u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x28f42c: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x28f42cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x28f430: 0x100000fd  b           . + 4 + (0xFD << 2)
    ctx->pc = 0x28F430u;
    {
        const bool branch_taken_0x28f430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F430u;
            // 0x28f434: 0xa3a00040  sb          $zero, 0x40($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f430) {
            ctx->pc = 0x28F828u;
            goto label_28f828;
        }
    }
    ctx->pc = 0x28F438u;
label_28f438:
    // 0x28f438: 0x36520010  ori         $s2, $s2, 0x10
    ctx->pc = 0x28f438u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)16);
label_28f43c:
    // 0x28f43c: 0x32420020  andi        $v0, $s2, 0x20
    ctx->pc = 0x28f43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    // 0x28f440: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28F440u;
    {
        const bool branch_taken_0x28f440 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f440) {
            ctx->pc = 0x28F444u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F440u;
            // 0x28f444: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F458u;
            goto label_28f458;
        }
    }
    ctx->pc = 0x28F448u;
    // 0x28f448: 0x32420010  andi        $v0, $s2, 0x10
    ctx->pc = 0x28f448u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
    // 0x28f44c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F44Cu;
    {
        const bool branch_taken_0x28f44c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F44Cu;
            // 0x28f450: 0x32420040  andi        $v0, $s2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f44c) {
            ctx->pc = 0x28F460u;
            goto label_28f460;
        }
    }
    ctx->pc = 0x28F454u;
    // 0x28f454: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x28f454u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_28f458:
    // 0x28f458: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28F458u;
    {
        const bool branch_taken_0x28f458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F45Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F458u;
            // 0x28f45c: 0xde70fff8  ld          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f458) {
            ctx->pc = 0x28F474u;
            goto label_28f474;
        }
    }
    ctx->pc = 0x28F460u;
label_28f460:
    // 0x28f460: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28F460u;
    {
        const bool branch_taken_0x28f460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F460u;
            // 0x28f464: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f460) {
            ctx->pc = 0x28F470u;
            goto label_28f470;
        }
    }
    ctx->pc = 0x28F468u;
    // 0x28f468: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28F468u;
    {
        const bool branch_taken_0x28f468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F468u;
            // 0x28f46c: 0x8670fff8  lh          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f468) {
            ctx->pc = 0x28F474u;
            goto label_28f474;
        }
    }
    ctx->pc = 0x28F470u;
label_28f470:
    // 0x28f470: 0x8e70fff8  lw          $s0, -0x8($s3)
    ctx->pc = 0x28f470u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_28f474:
    // 0x28f474: 0x601007c  bgez        $s0, . + 4 + (0x7C << 2)
    ctx->pc = 0x28F474u;
    {
        const bool branch_taken_0x28f474 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x28F478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F474u;
            // 0x28f478: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f474) {
            ctx->pc = 0x28F668u;
            goto label_28f668;
        }
    }
    ctx->pc = 0x28F47Cu;
    // 0x28f47c: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x28f47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x28f480: 0x10802f  dsubu       $s0, $zero, $s0
    ctx->pc = 0x28f480u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) - GPR_U64(ctx, 16));
    // 0x28f484: 0x10000078  b           . + 4 + (0x78 << 2)
    ctx->pc = 0x28F484u;
    {
        const bool branch_taken_0x28f484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F484u;
            // 0x28f488: 0xa3a20040  sb          $v0, 0x40($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f484) {
            ctx->pc = 0x28F668u;
            goto label_28f668;
        }
    }
    ctx->pc = 0x28F48Cu;
label_28f48c:
    // 0x28f48c: 0x32420020  andi        $v0, $s2, 0x20
    ctx->pc = 0x28f48cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    // 0x28f490: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28F490u;
    {
        const bool branch_taken_0x28f490 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F490u;
            // 0x28f494: 0x8fa50050  lw          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f490) {
            ctx->pc = 0x28F4A8u;
            goto label_28f4a8;
        }
    }
    ctx->pc = 0x28F498u;
    // 0x28f498: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x28f498u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x28f49c: 0x8e62fff8  lw          $v0, -0x8($s3)
    ctx->pc = 0x28f49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x28f4a0: 0x1000ff3b  b           . + 4 + (-0xC5 << 2)
    ctx->pc = 0x28F4A0u;
    {
        const bool branch_taken_0x28f4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F4A0u;
            // 0x28f4a4: 0xfc450000  sd          $a1, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f4a0) {
            ctx->pc = 0x28F190u;
            runtime->cooperativeGuestYield();
            goto label_28f190;
        }
    }
    ctx->pc = 0x28F4A8u;
label_28f4a8:
    // 0x28f4a8: 0x32420010  andi        $v0, $s2, 0x10
    ctx->pc = 0x28f4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
    // 0x28f4ac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28F4ACu;
    {
        const bool branch_taken_0x28f4ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F4B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F4ACu;
            // 0x28f4b0: 0x8fa60050  lw          $a2, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f4ac) {
            ctx->pc = 0x28F4C4u;
            goto label_28f4c4;
        }
    }
    ctx->pc = 0x28F4B4u;
    // 0x28f4b4: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x28f4b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x28f4b8: 0x8e62fff8  lw          $v0, -0x8($s3)
    ctx->pc = 0x28f4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x28f4bc: 0x1000ff34  b           . + 4 + (-0xCC << 2)
    ctx->pc = 0x28F4BCu;
    {
        const bool branch_taken_0x28f4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F4C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F4BCu;
            // 0x28f4c0: 0xfc460000  sd          $a2, 0x0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f4bc) {
            ctx->pc = 0x28F190u;
            runtime->cooperativeGuestYield();
            goto label_28f190;
        }
    }
    ctx->pc = 0x28F4C4u;
label_28f4c4:
    // 0x28f4c4: 0x32420040  andi        $v0, $s2, 0x40
    ctx->pc = 0x28f4c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
    // 0x28f4c8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28F4C8u;
    {
        const bool branch_taken_0x28f4c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F4CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F4C8u;
            // 0x28f4cc: 0x8fa30050  lw          $v1, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f4c8) {
            ctx->pc = 0x28F4E0u;
            goto label_28f4e0;
        }
    }
    ctx->pc = 0x28F4D0u;
    // 0x28f4d0: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x28f4d0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x28f4d4: 0x8e62fff8  lw          $v0, -0x8($s3)
    ctx->pc = 0x28f4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x28f4d8: 0x1000ff2d  b           . + 4 + (-0xD3 << 2)
    ctx->pc = 0x28F4D8u;
    {
        const bool branch_taken_0x28f4d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F4D8u;
            // 0x28f4dc: 0xa4430000  sh          $v1, 0x0($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f4d8) {
            ctx->pc = 0x28F190u;
            runtime->cooperativeGuestYield();
            goto label_28f190;
        }
    }
    ctx->pc = 0x28F4E0u;
label_28f4e0:
    // 0x28f4e0: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x28f4e0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x28f4e4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x28f4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28f4e8: 0x8e62fff8  lw          $v0, -0x8($s3)
    ctx->pc = 0x28f4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x28f4ec: 0x1000ff28  b           . + 4 + (-0xD8 << 2)
    ctx->pc = 0x28F4ECu;
    {
        const bool branch_taken_0x28f4ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F4F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F4ECu;
            // 0x28f4f0: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f4ec) {
            ctx->pc = 0x28F190u;
            runtime->cooperativeGuestYield();
            goto label_28f190;
        }
    }
    ctx->pc = 0x28F4F4u;
label_28f4f4:
    // 0x28f4f4: 0x36520010  ori         $s2, $s2, 0x10
    ctx->pc = 0x28f4f4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)16);
label_28f4f8:
    // 0x28f4f8: 0x32420020  andi        $v0, $s2, 0x20
    ctx->pc = 0x28f4f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    // 0x28f4fc: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28F4FCu;
    {
        const bool branch_taken_0x28f4fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f4fc) {
            ctx->pc = 0x28F500u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F4FCu;
            // 0x28f500: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F514u;
            goto label_28f514;
        }
    }
    ctx->pc = 0x28F504u;
    // 0x28f504: 0x32420010  andi        $v0, $s2, 0x10
    ctx->pc = 0x28f504u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
    // 0x28f508: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F508u;
    {
        const bool branch_taken_0x28f508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F508u;
            // 0x28f50c: 0x32420040  andi        $v0, $s2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f508) {
            ctx->pc = 0x28F51Cu;
            goto label_28f51c;
        }
    }
    ctx->pc = 0x28F510u;
    // 0x28f510: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x28f510u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_28f514:
    // 0x28f514: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28F514u;
    {
        const bool branch_taken_0x28f514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F514u;
            // 0x28f518: 0xde70fff8  ld          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f514) {
            ctx->pc = 0x28F530u;
            goto label_28f530;
        }
    }
    ctx->pc = 0x28F51Cu;
label_28f51c:
    // 0x28f51c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28F51Cu;
    {
        const bool branch_taken_0x28f51c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F51Cu;
            // 0x28f520: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f51c) {
            ctx->pc = 0x28F52Cu;
            goto label_28f52c;
        }
    }
    ctx->pc = 0x28F524u;
    // 0x28f524: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28F524u;
    {
        const bool branch_taken_0x28f524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F524u;
            // 0x28f528: 0x9670fff8  lhu         $s0, -0x8($s3) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f524) {
            ctx->pc = 0x28F530u;
            goto label_28f530;
        }
    }
    ctx->pc = 0x28F52Cu;
label_28f52c:
    // 0x28f52c: 0x9e70fff8  lwu         $s0, -0x8($s3)
    ctx->pc = 0x28f52cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_28f530:
    // 0x28f530: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x28F530u;
    {
        const bool branch_taken_0x28f530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F530u;
            // 0x28f534: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f530) {
            ctx->pc = 0x28F664u;
            goto label_28f664;
        }
    }
    ctx->pc = 0x28F538u;
label_28f538:
    // 0x28f538: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x28f538u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x28f53c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x28f53cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x28f540: 0x24426360  addiu       $v0, $v0, 0x6360
    ctx->pc = 0x28f540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25440));
    // 0x28f544: 0x24160002  addiu       $s6, $zero, 0x2
    ctx->pc = 0x28f544u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28f548: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x28f548u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x28f54c: 0x36520002  ori         $s2, $s2, 0x2
    ctx->pc = 0x28f54cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)2);
    // 0x28f550: 0x24150078  addiu       $s5, $zero, 0x78
    ctx->pc = 0x28f550u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x28f554: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x28F554u;
    {
        const bool branch_taken_0x28f554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F554u;
            // 0x28f558: 0x8e70fff8  lw          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f554) {
            ctx->pc = 0x28F664u;
            goto label_28f664;
        }
    }
    ctx->pc = 0x28F55Cu;
label_28f55c:
    // 0x28f55c: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x28f55cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
    // 0x28f560: 0x8e74fff8  lw          $s4, -0x8($s3)
    ctx->pc = 0x28f560u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
    // 0x28f564: 0x16800002  bnez        $s4, . + 4 + (0x2 << 2)
    ctx->pc = 0x28F564u;
    {
        const bool branch_taken_0x28f564 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F564u;
            // 0x28f568: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f564) {
            ctx->pc = 0x28F570u;
            goto label_28f570;
        }
    }
    ctx->pc = 0x28F56Cu;
    // 0x28f56c: 0x24546378  addiu       $s4, $v0, 0x6378
    ctx->pc = 0x28f56cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 25464));
label_28f570:
    // 0x28f570: 0x7c0000b  bltz        $fp, . + 4 + (0xB << 2)
    ctx->pc = 0x28F570u;
    {
        const bool branch_taken_0x28f570 = (GPR_S32(ctx, 30) < 0);
        ctx->pc = 0x28F574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F570u;
            // 0x28f574: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f570) {
            ctx->pc = 0x28F5A0u;
            goto label_28f5a0;
        }
    }
    ctx->pc = 0x28F578u;
    // 0x28f578: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28f578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f57c: 0xc0a444c  jal         func_291130
    ctx->pc = 0x28F57Cu;
    SET_GPR_U32(ctx, 31, 0x28F584u);
    ctx->pc = 0x28F580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F57Cu;
            // 0x28f580: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291130u;
    if (runtime->hasFunction(0x291130u)) {
        auto targetFn = runtime->lookupFunction(0x291130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F584u; }
        if (ctx->pc != 0x28F584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_291130_0x291220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F584u; }
        if (ctx->pc != 0x28F584u) { return; }
    }
    ctx->pc = 0x28F584u;
    // 0x28f584: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F584u;
    {
        const bool branch_taken_0x28f584 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F584u;
            // 0x28f588: 0x541023  subu        $v0, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f584) {
            ctx->pc = 0x28F598u;
            goto label_28f598;
        }
    }
    ctx->pc = 0x28F58Cu;
    // 0x28f58c: 0x3c2182a  slt         $v1, $fp, $v0
    ctx->pc = 0x28f58cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28f590: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x28F590u;
    {
        const bool branch_taken_0x28f590 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F590u;
            // 0x28f594: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f590) {
            ctx->pc = 0x28F5ACu;
            goto label_28f5ac;
        }
    }
    ctx->pc = 0x28F598u;
label_28f598:
    // 0x28f598: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x28F598u;
    {
        const bool branch_taken_0x28f598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F59Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F598u;
            // 0x28f59c: 0xafbe004c  sw          $fp, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f598) {
            ctx->pc = 0x28F5ACu;
            goto label_28f5ac;
        }
    }
    ctx->pc = 0x28F5A0u;
label_28f5a0:
    // 0x28f5a0: 0xc0a268a  jal         func_289A28
    ctx->pc = 0x28F5A0u;
    SET_GPR_U32(ctx, 31, 0x28F5A8u);
    ctx->pc = 0x28F5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F5A0u;
            // 0x28f5a4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289A28u;
    if (runtime->hasFunction(0x289A28u)) {
        auto targetFn = runtime->lookupFunction(0x289A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F5A8u; }
        if (ctx->pc != 0x28F5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289a28_0x289b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F5A8u; }
        if (ctx->pc != 0x28F5A8u) { return; }
    }
    ctx->pc = 0x28F5A8u;
    // 0x28f5a8: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x28f5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
label_28f5ac:
    // 0x28f5ac: 0x32450004  andi        $a1, $s2, 0x4
    ctx->pc = 0x28f5acu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
    // 0x28f5b0: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x28f5b0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x28f5b4: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x28F5B4u;
    {
        const bool branch_taken_0x28f5b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F5B4u;
            // 0x28f5b8: 0x325e0084  andi        $fp, $s2, 0x84 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)132);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f5b4) {
            ctx->pc = 0x28F824u;
            goto label_28f824;
        }
    }
    ctx->pc = 0x28F5BCu;
label_28f5bc:
    // 0x28f5bc: 0x36520010  ori         $s2, $s2, 0x10
    ctx->pc = 0x28f5bcu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)16);
label_28f5c0:
    // 0x28f5c0: 0x32420020  andi        $v0, $s2, 0x20
    ctx->pc = 0x28f5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    // 0x28f5c4: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28F5C4u;
    {
        const bool branch_taken_0x28f5c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f5c4) {
            ctx->pc = 0x28F5C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F5C4u;
            // 0x28f5c8: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F5DCu;
            goto label_28f5dc;
        }
    }
    ctx->pc = 0x28F5CCu;
    // 0x28f5cc: 0x32420010  andi        $v0, $s2, 0x10
    ctx->pc = 0x28f5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
    // 0x28f5d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F5D0u;
    {
        const bool branch_taken_0x28f5d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F5D0u;
            // 0x28f5d4: 0x32420040  andi        $v0, $s2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f5d0) {
            ctx->pc = 0x28F5E4u;
            goto label_28f5e4;
        }
    }
    ctx->pc = 0x28F5D8u;
    // 0x28f5d8: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x28f5d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_28f5dc:
    // 0x28f5dc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28F5DCu;
    {
        const bool branch_taken_0x28f5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F5DCu;
            // 0x28f5e0: 0xde70fff8  ld          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f5dc) {
            ctx->pc = 0x28F5F8u;
            goto label_28f5f8;
        }
    }
    ctx->pc = 0x28F5E4u;
label_28f5e4:
    // 0x28f5e4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28F5E4u;
    {
        const bool branch_taken_0x28f5e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F5E4u;
            // 0x28f5e8: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f5e4) {
            ctx->pc = 0x28F5F4u;
            goto label_28f5f4;
        }
    }
    ctx->pc = 0x28F5ECu;
    // 0x28f5ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28F5ECu;
    {
        const bool branch_taken_0x28f5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F5F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F5ECu;
            // 0x28f5f0: 0x9670fff8  lhu         $s0, -0x8($s3) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f5ec) {
            ctx->pc = 0x28F5F8u;
            goto label_28f5f8;
        }
    }
    ctx->pc = 0x28F5F4u;
label_28f5f4:
    // 0x28f5f4: 0x9e70fff8  lwu         $s0, -0x8($s3)
    ctx->pc = 0x28f5f4u;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_28f5f8:
    // 0x28f5f8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x28F5F8u;
    {
        const bool branch_taken_0x28f5f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F5F8u;
            // 0x28f5fc: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f5f8) {
            ctx->pc = 0x28F664u;
            goto label_28f664;
        }
    }
    ctx->pc = 0x28F600u;
label_28f600:
    // 0x28f600: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x28f600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x28f604: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28F604u;
    {
        const bool branch_taken_0x28f604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F604u;
            // 0x28f608: 0x24426380  addiu       $v0, $v0, 0x6380 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f604) {
            ctx->pc = 0x28F614u;
            goto label_28f614;
        }
    }
    ctx->pc = 0x28F60Cu;
label_28f60c:
    // 0x28f60c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x28f60cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x28f610: 0x24426360  addiu       $v0, $v0, 0x6360
    ctx->pc = 0x28f610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25440));
label_28f614:
    // 0x28f614: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x28f614u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x28f618: 0x32420020  andi        $v0, $s2, 0x20
    ctx->pc = 0x28f618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)32);
    // 0x28f61c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28F61Cu;
    {
        const bool branch_taken_0x28f61c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f61c) {
            ctx->pc = 0x28F620u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F61Cu;
            // 0x28f620: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F634u;
            goto label_28f634;
        }
    }
    ctx->pc = 0x28F624u;
    // 0x28f624: 0x32420010  andi        $v0, $s2, 0x10
    ctx->pc = 0x28f624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)16);
    // 0x28f628: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F628u;
    {
        const bool branch_taken_0x28f628 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F628u;
            // 0x28f62c: 0x32420040  andi        $v0, $s2, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f628) {
            ctx->pc = 0x28F63Cu;
            goto label_28f63c;
        }
    }
    ctx->pc = 0x28F630u;
    // 0x28f630: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x28f630u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_28f634:
    // 0x28f634: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28F634u;
    {
        const bool branch_taken_0x28f634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F634u;
            // 0x28f638: 0xde70fff8  ld          $s0, -0x8($s3) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f634) {
            ctx->pc = 0x28F650u;
            goto label_28f650;
        }
    }
    ctx->pc = 0x28F63Cu;
label_28f63c:
    // 0x28f63c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28F63Cu;
    {
        const bool branch_taken_0x28f63c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F63Cu;
            // 0x28f640: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f63c) {
            ctx->pc = 0x28F64Cu;
            goto label_28f64c;
        }
    }
    ctx->pc = 0x28F644u;
    // 0x28f644: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28F644u;
    {
        const bool branch_taken_0x28f644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F644u;
            // 0x28f648: 0x9670fff8  lhu         $s0, -0x8($s3) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 4294967288)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f644) {
            ctx->pc = 0x28F650u;
            goto label_28f650;
        }
    }
    ctx->pc = 0x28F64Cu;
label_28f64c:
    // 0x28f64c: 0x9e70fff8  lwu         $s0, -0x8($s3)
    ctx->pc = 0x28f64cu;
    SET_GPR_U32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 19), 4294967288)));
label_28f650:
    // 0x28f650: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x28f650u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x28f654: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28F654u;
    {
        const bool branch_taken_0x28f654 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F654u;
            // 0x28f658: 0x24160002  addiu       $s6, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f654) {
            ctx->pc = 0x28F664u;
            goto label_28f664;
        }
    }
    ctx->pc = 0x28F65Cu;
    // 0x28f65c: 0x36420002  ori         $v0, $s2, 0x2
    ctx->pc = 0x28f65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)2);
    // 0x28f660: 0x50900b  movn        $s2, $v0, $s0
    ctx->pc = 0x28f660u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
label_28f664:
    // 0x28f664: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x28f664u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
label_28f668:
    // 0x28f668: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x28f668u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f66c: 0x4c00003  bltz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x28F66Cu;
    {
        const bool branch_taken_0x28f66c = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x28F670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F66Cu;
            // 0x28f670: 0xafbe0058  sw          $fp, 0x58($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f66c) {
            ctx->pc = 0x28F67Cu;
            goto label_28f67c;
        }
    }
    ctx->pc = 0x28F674u;
    // 0x28f674: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x28f674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x28f678: 0x2429024  and         $s2, $s2, $v0
    ctx->pc = 0x28f678u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
label_28f67c:
    // 0x28f67c: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28F67Cu;
    {
        const bool branch_taken_0x28f67c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F67Cu;
            // 0x28f680: 0x27b40028  addiu       $s4, $sp, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f67c) {
            ctx->pc = 0x28F698u;
            goto label_28f698;
        }
    }
    ctx->pc = 0x28F684u;
    // 0x28f684: 0x32420004  andi        $v0, $s2, 0x4
    ctx->pc = 0x28f684u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
    // 0x28f688: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x28f688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x28f68c: 0x325e0084  andi        $fp, $s2, 0x84
    ctx->pc = 0x28f68cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)132);
    // 0x28f690: 0x1060004c  beqz        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x28F690u;
    {
        const bool branch_taken_0x28f690 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F690u;
            // 0x28f694: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f690) {
            ctx->pc = 0x28F7C4u;
            goto label_28f7c4;
        }
    }
    ctx->pc = 0x28F698u;
label_28f698:
    // 0x28f698: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28f698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f69c: 0x12c2001a  beq         $s6, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x28F69Cu;
    {
        const bool branch_taken_0x28f69c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x28F6A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F69Cu;
            // 0x28f6a0: 0x32450004  andi        $a1, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f69c) {
            ctx->pc = 0x28F708u;
            goto label_28f708;
        }
    }
    ctx->pc = 0x28F6A4u;
    // 0x28f6a4: 0x12c00005  beqz        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x28F6A4u;
    {
        const bool branch_taken_0x28f6a4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F6A4u;
            // 0x28f6a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f6a4) {
            ctx->pc = 0x28F6BCu;
            goto label_28f6bc;
        }
    }
    ctx->pc = 0x28F6ACu;
    // 0x28f6ac: 0x12c2002e  beq         $s6, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x28F6ACu;
    {
        const bool branch_taken_0x28f6ac = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x28F6B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F6ACu;
            // 0x28f6b0: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f6ac) {
            ctx->pc = 0x28F768u;
            goto label_28f768;
        }
    }
    ctx->pc = 0x28F6B4u;
    // 0x28f6b4: 0x1000003c  b           . + 4 + (0x3C << 2)
    ctx->pc = 0x28F6B4u;
    {
        const bool branch_taken_0x28f6b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F6B4u;
            // 0x28f6b8: 0x32440004  andi        $a0, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f6b4) {
            ctx->pc = 0x28F7A8u;
            goto label_28f7a8;
        }
    }
    ctx->pc = 0x28F6BCu;
label_28f6bc:
    // 0x28f6bc: 0x32440004  andi        $a0, $s2, 0x4
    ctx->pc = 0x28f6bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
    // 0x28f6c0: 0x32430001  andi        $v1, $s2, 0x1
    ctx->pc = 0x28f6c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x28f6c4: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x28f6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x28f6c8: 0x325e0084  andi        $fp, $s2, 0x84
    ctx->pc = 0x28f6c8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)132);
    // 0x28f6cc: 0x0  nop
    ctx->pc = 0x28f6ccu;
    // NOP
label_28f6d0:
    // 0x28f6d0: 0x32020007  andi        $v0, $s0, 0x7
    ctx->pc = 0x28f6d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)7);
    // 0x28f6d4: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x28f6d4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x28f6d8: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x28f6d8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x28f6dc: 0x1080fa  dsrl        $s0, $s0, 3
    ctx->pc = 0x28f6dcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 3);
    // 0x28f6e0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x28f6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28f6e4: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x28F6E4u;
    {
        const bool branch_taken_0x28f6e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F6E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F6E4u;
            // 0x28f6e8: 0xa2820000  sb          $v0, 0x0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f6e4) {
            ctx->pc = 0x28F6D0u;
            runtime->cooperativeGuestYield();
            goto label_28f6d0;
        }
    }
    ctx->pc = 0x28F6ECu;
    // 0x28f6ec: 0x10600035  beqz        $v1, . + 4 + (0x35 << 2)
    ctx->pc = 0x28F6ECu;
    {
        const bool branch_taken_0x28f6ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F6F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F6ECu;
            // 0x28f6f0: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f6ec) {
            ctx->pc = 0x28F7C4u;
            goto label_28f7c4;
        }
    }
    ctx->pc = 0x28F6F4u;
    // 0x28f6f4: 0x10430034  beq         $v0, $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x28F6F4u;
    {
        const bool branch_taken_0x28f6f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x28F6F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F6F4u;
            // 0x28f6f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f6f4) {
            ctx->pc = 0x28F7C8u;
            goto label_28f7c8;
        }
    }
    ctx->pc = 0x28F6FCu;
    // 0x28f6fc: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x28f6fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x28f700: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x28F700u;
    {
        const bool branch_taken_0x28f700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F700u;
            // 0x28f704: 0xa2830000  sb          $v1, 0x0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f700) {
            ctx->pc = 0x28F7C8u;
            goto label_28f7c8;
        }
    }
    ctx->pc = 0x28F708u;
label_28f708:
    // 0x28f708: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x28f708u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x28f70c: 0x325e0084  andi        $fp, $s2, 0x84
    ctx->pc = 0x28f70cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)132);
    // 0x28f710: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x28F710u;
    {
        const bool branch_taken_0x28f710 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F710u;
            // 0x28f714: 0xafa50070  sw          $a1, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f710) {
            ctx->pc = 0x28F754u;
            goto label_28f754;
        }
    }
    ctx->pc = 0x28F718u;
    // 0x28f718: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28f718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f71c: 0x0  nop
    ctx->pc = 0x28f71cu;
    // NOP
label_28f720:
    // 0x28f720: 0xc0a6d8e  jal         func_29B638
    ctx->pc = 0x28F720u;
    SET_GPR_U32(ctx, 31, 0x28F728u);
    ctx->pc = 0x28F724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F720u;
            // 0x28f724: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29B638u;
    if (runtime->hasFunction(0x29B638u)) {
        auto targetFn = runtime->lookupFunction(0x29B638u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F728u; }
        if (ctx->pc != 0x28F728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029B638_0x29b638(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F728u; }
        if (ctx->pc != 0x28F728u) { return; }
    }
    ctx->pc = 0x28F728u;
    // 0x28f728: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x28f728u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x28f72c: 0x64420030  daddiu      $v0, $v0, 0x30
    ctx->pc = 0x28f72cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)48);
    // 0x28f730: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28f730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f734: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x28f734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28f738: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x28f738u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x28f73c: 0xc0a0fc6  jal         func_283F18
    ctx->pc = 0x28F73Cu;
    SET_GPR_U32(ctx, 31, 0x28F744u);
    ctx->pc = 0x28F740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F73Cu;
            // 0x28f740: 0xa2820000  sb          $v0, 0x0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283F18u;
    if (runtime->hasFunction(0x283F18u)) {
        auto targetFn = runtime->lookupFunction(0x283F18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F744u; }
        if (ctx->pc != 0x28F744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_283f18_0x2844e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F744u; }
        if (ctx->pc != 0x28F744u) { return; }
    }
    ctx->pc = 0x28F744u;
    // 0x28f744: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28f744u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f748: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x28f748u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x28f74c: 0x1040fff4  beqz        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x28F74Cu;
    {
        const bool branch_taken_0x28f74c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F74Cu;
            // 0x28f750: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f74c) {
            ctx->pc = 0x28F720u;
            runtime->cooperativeGuestYield();
            goto label_28f720;
        }
    }
    ctx->pc = 0x28F754u;
label_28f754:
    // 0x28f754: 0x66020030  daddiu      $v0, $s0, 0x30
    ctx->pc = 0x28f754u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)48);
    // 0x28f758: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x28f758u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x28f75c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x28f75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28f760: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x28F760u;
    {
        const bool branch_taken_0x28f760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F760u;
            // 0x28f764: 0xa2820000  sb          $v0, 0x0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f760) {
            ctx->pc = 0x28F7C4u;
            goto label_28f7c4;
        }
    }
    ctx->pc = 0x28F768u;
label_28f768:
    // 0x28f768: 0x32460004  andi        $a2, $s2, 0x4
    ctx->pc = 0x28f768u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
    // 0x28f76c: 0x325e0084  andi        $fp, $s2, 0x84
    ctx->pc = 0x28f76cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)132);
    // 0x28f770: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x28f770u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x28f774: 0x0  nop
    ctx->pc = 0x28f774u;
    // NOP
label_28f778:
    // 0x28f778: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x28f778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28f77c: 0x3202000f  andi        $v0, $s0, 0xF
    ctx->pc = 0x28f77cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x28f780: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x28f780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28f784: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x28f784u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x28f788: 0x2694ffff  addiu       $s4, $s4, -0x1
    ctx->pc = 0x28f788u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
    // 0x28f78c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x28f78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28f790: 0x10813a  dsrl        $s0, $s0, 4
    ctx->pc = 0x28f790u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> 4);
    // 0x28f794: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x28f794u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28f798: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x28F798u;
    {
        const bool branch_taken_0x28f798 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F79Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F798u;
            // 0x28f79c: 0xa2830000  sb          $v1, 0x0($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f798) {
            ctx->pc = 0x28F778u;
            runtime->cooperativeGuestYield();
            goto label_28f778;
        }
    }
    ctx->pc = 0x28F7A0u;
    // 0x28f7a0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x28F7A0u;
    {
        const bool branch_taken_0x28f7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F7A0u;
            // 0x28f7a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f7a0) {
            ctx->pc = 0x28F7C8u;
            goto label_28f7c8;
        }
    }
    ctx->pc = 0x28F7A8u;
label_28f7a8:
    // 0x28f7a8: 0x24546398  addiu       $s4, $v0, 0x6398
    ctx->pc = 0x28f7a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 25496));
    // 0x28f7ac: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x28f7acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x28f7b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x28f7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f7b4: 0xc0a268a  jal         func_289A28
    ctx->pc = 0x28F7B4u;
    SET_GPR_U32(ctx, 31, 0x28F7BCu);
    ctx->pc = 0x28F7B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F7B4u;
            // 0x28f7b8: 0x325e0084  andi        $fp, $s2, 0x84 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)132);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289A28u;
    if (runtime->hasFunction(0x289A28u)) {
        auto targetFn = runtime->lookupFunction(0x289A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F7BCu; }
        if (ctx->pc != 0x28F7BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289a28_0x289b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F7BCu; }
        if (ctx->pc != 0x28F7BCu) { return; }
    }
    ctx->pc = 0x28F7BCu;
    // 0x28f7bc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x28F7BCu;
    {
        const bool branch_taken_0x28f7bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F7C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F7BCu;
            // 0x28f7c0: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f7bc) {
            ctx->pc = 0x28F828u;
            goto label_28f828;
        }
    }
    ctx->pc = 0x28F7C4u;
label_28f7c4:
    // 0x28f7c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28f7c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28f7c8:
    // 0x28f7c8: 0x16c2000b  bne         $s6, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x28F7C8u;
    {
        const bool branch_taken_0x28f7c8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x28F7CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F7C8u;
            // 0x28f7cc: 0x2682ffd8  addiu       $v0, $s4, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f7c8) {
            ctx->pc = 0x28F7F8u;
            goto label_28f7f8;
        }
    }
    ctx->pc = 0x28F7D0u;
    // 0x28f7d0: 0x32420200  andi        $v0, $s2, 0x200
    ctx->pc = 0x28f7d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)512);
    // 0x28f7d4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28F7D4u;
    {
        const bool branch_taken_0x28f7d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F7D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F7D4u;
            // 0x28f7d8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f7d4) {
            ctx->pc = 0x28F7F4u;
            goto label_28f7f4;
        }
    }
    ctx->pc = 0x28F7DCu;
    // 0x28f7dc: 0x27a60028  addiu       $a2, $sp, 0x28
    ctx->pc = 0x28f7dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x28f7e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x28f7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f7e4: 0xc0a3ba2  jal         func_28EE88
    ctx->pc = 0x28F7E4u;
    SET_GPR_U32(ctx, 31, 0x28F7ECu);
    ctx->pc = 0x28F7E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F7E4u;
            // 0x28f7e8: 0x27a7004c  addiu       $a3, $sp, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28EE88u;
    if (runtime->hasFunction(0x28EE88u)) {
        auto targetFn = runtime->lookupFunction(0x28EE88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F7ECu; }
        if (ctx->pc != 0x28F7ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_28ee88_0x28f038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F7ECu; }
        if (ctx->pc != 0x28F7ECu) { return; }
    }
    ctx->pc = 0x28F7ECu;
    // 0x28f7ec: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x28F7ECu;
    {
        const bool branch_taken_0x28f7ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F7F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F7ECu;
            // 0x28f7f0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f7ec) {
            ctx->pc = 0x28F828u;
            goto label_28f828;
        }
    }
    ctx->pc = 0x28F7F4u;
label_28f7f4:
    // 0x28f7f4: 0x2682ffd8  addiu       $v0, $s4, -0x28
    ctx->pc = 0x28f7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967256));
label_28f7f8:
    // 0x28f7f8: 0x3a21823  subu        $v1, $sp, $v0
    ctx->pc = 0x28f7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x28f7fc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x28F7FCu;
    {
        const bool branch_taken_0x28f7fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F7FCu;
            // 0x28f800: 0xafa3004c  sw          $v1, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f7fc) {
            ctx->pc = 0x28F828u;
            goto label_28f828;
        }
    }
    ctx->pc = 0x28F804u;
label_28f804:
    // 0x28f804: 0x12a001f9  beqz        $s5, . + 4 + (0x1F9 << 2)
    ctx->pc = 0x28F804u;
    {
        const bool branch_taken_0x28f804 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F804u;
            // 0x28f808: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f804) {
            ctx->pc = 0x28FFECu;
            goto label_28ffec;
        }
    }
    ctx->pc = 0x28F80Cu;
    // 0x28f80c: 0x32450004  andi        $a1, $s2, 0x4
    ctx->pc = 0x28f80cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)4);
    // 0x28f810: 0xa3b50000  sb          $s5, 0x0($sp)
    ctx->pc = 0x28f810u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 0), (uint8_t)GPR_U32(ctx, 21));
    // 0x28f814: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x28f814u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f818: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x28f818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x28f81c: 0x325e0084  andi        $fp, $s2, 0x84
    ctx->pc = 0x28f81cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)132);
    // 0x28f820: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x28f820u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
label_28f824:
    // 0x28f824: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x28f824u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
label_28f828:
    // 0x28f828: 0x8fa6004c  lw          $a2, 0x4C($sp)
    ctx->pc = 0x28f828u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x28f82c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x28f82cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x28f830: 0x83a30040  lb          $v1, 0x40($sp)
    ctx->pc = 0x28f830u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28f834: 0xc4102a  slt         $v0, $a2, $a0
    ctx->pc = 0x28f834u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x28f838: 0xc2200a  movz        $a0, $a2, $v0
    ctx->pc = 0x28f838u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 6));
    // 0x28f83c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F83Cu;
    {
        const bool branch_taken_0x28f83c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F83Cu;
            // 0x28f840: 0xafa4005c  sw          $a0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f83c) {
            ctx->pc = 0x28F850u;
            goto label_28f850;
        }
    }
    ctx->pc = 0x28F844u;
    // 0x28f844: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x28f844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x28f848: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28F848u;
    {
        const bool branch_taken_0x28f848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F848u;
            // 0x28f84c: 0xafa4005c  sw          $a0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f848) {
            ctx->pc = 0x28F860u;
            goto label_28f860;
        }
    }
    ctx->pc = 0x28F850u;
label_28f850:
    // 0x28f850: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x28f850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x28f854: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x28f854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
    // 0x28f858: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x28f858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x28f85c: 0xafa5005c  sw          $a1, 0x5C($sp)
    ctx->pc = 0x28f85cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 5));
label_28f860:
    // 0x28f860: 0x8fa6005c  lw          $a2, 0x5C($sp)
    ctx->pc = 0x28f860u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x28f864: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x28f864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x28f868: 0xc2302a  slt         $a2, $a2, $v0
    ctx->pc = 0x28f868u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x28f86c: 0x17c00059  bnez        $fp, . + 4 + (0x59 << 2)
    ctx->pc = 0x28F86Cu;
    {
        const bool branch_taken_0x28f86c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F86Cu;
            // 0x28f870: 0xafa60064  sw          $a2, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f86c) {
            ctx->pc = 0x28F9D4u;
            goto label_28f9d4;
        }
    }
    ctx->pc = 0x28F874u;
    // 0x28f874: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x28f874u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x28f878: 0x438023  subu        $s0, $v0, $v1
    ctx->pc = 0x28f878u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28f87c: 0x1a000055  blez        $s0, . + 4 + (0x55 << 2)
    ctx->pc = 0x28F87Cu;
    {
        const bool branch_taken_0x28f87c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x28F880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F87Cu;
            // 0x28f880: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f87c) {
            ctx->pc = 0x28F9D4u;
            goto label_28f9d4;
        }
    }
    ctx->pc = 0x28F884u;
    // 0x28f884: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x28F884u;
    {
        const bool branch_taken_0x28f884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F884u;
            // 0x28f888: 0x3c16002c  lui         $s6, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f884) {
            ctx->pc = 0x28F944u;
            goto label_28f944;
        }
    }
    ctx->pc = 0x28F88Cu;
    // 0x28f88c: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x28f88cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_28f890:
    // 0x28f890: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x28f890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x28f894: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x28F894u;
    {
        const bool branch_taken_0x28f894 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f894) {
            ctx->pc = 0x28F898u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F894u;
            // 0x28f898: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F910u;
            goto label_28f910;
        }
    }
    ctx->pc = 0x28F89Cu;
    // 0x28f89c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x28f89cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28f8a0: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x28f8a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x28f8a4: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x28F8A4u;
    {
        const bool branch_taken_0x28f8a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f8a4) {
            ctx->pc = 0x28F8A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F8A4u;
            // 0x28f8a8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F8F0u;
            goto label_28f8f0;
        }
    }
    ctx->pc = 0x28F8ACu;
    // 0x28f8ac: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x28f8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28f8b0: 0x26c36340  addiu       $v1, $s6, 0x6340
    ctx->pc = 0x28f8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 25408));
    // 0x28f8b4: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x28f8b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x28f8b8: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x28f8b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x28f8bc: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x28f8bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x28f8c0: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x28f8c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x28f8c4: 0xb0440007  sdl         $a0, 0x7($v0)
    ctx->pc = 0x28f8c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28f8c8: 0xb4440000  sdr         $a0, 0x0($v0)
    ctx->pc = 0x28f8c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28f8cc: 0xb045000f  sdl         $a1, 0xF($v0)
    ctx->pc = 0x28f8ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28f8d0: 0xb4450008  sdr         $a1, 0x8($v0)
    ctx->pc = 0x28f8d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28f8d4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28f8d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28f8d8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28f8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28f8dc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x28f8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x28f8e0: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x28f8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x28f8e4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x28f8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x28f8e8: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x28F8E8u;
    {
        const bool branch_taken_0x28f8e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F8ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F8E8u;
            // 0x28f8ec: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f8e8) {
            ctx->pc = 0x28F934u;
            goto label_28f934;
        }
    }
    ctx->pc = 0x28F8F0u;
label_28f8f0:
    // 0x28f8f0: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x28F8F0u;
    SET_GPR_U32(ctx, 31, 0x28F8F8u);
    ctx->pc = 0x28F8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F8F0u;
            // 0x28f8f4: 0x26c56340  addiu       $a1, $s6, 0x6340 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 25408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F8F8u; }
        if (ctx->pc != 0x28F8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F8F8u; }
        if (ctx->pc != 0x28F8F8u) { return; }
    }
    ctx->pc = 0x28F8F8u;
    // 0x28f8f8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28f8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28f8fc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28f8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28f900: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x28f900u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x28f904: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28f904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28f908: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x28F908u;
    {
        const bool branch_taken_0x28f908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F90Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F908u;
            // 0x28f90c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f908) {
            ctx->pc = 0x28F934u;
            goto label_28f934;
        }
    }
    ctx->pc = 0x28F910u;
label_28f910:
    // 0x28f910: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F910u;
    {
        const bool branch_taken_0x28f910 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f910) {
            ctx->pc = 0x28F914u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F910u;
            // 0x28f914: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F924u;
            goto label_28f924;
        }
    }
    ctx->pc = 0x28F918u;
    // 0x28f918: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x28f918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f91c: 0xa624000e  sh          $a0, 0xE($s1)
    ctx->pc = 0x28f91cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 4));
    // 0x28f920: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x28f920u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_28f924:
    // 0x28f924: 0x26c56340  addiu       $a1, $s6, 0x6340
    ctx->pc = 0x28f924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 25408));
    // 0x28f928: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x28f928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x28f92c: 0xc0a3c0e  jal         func_28F038
    ctx->pc = 0x28F92Cu;
    SET_GPR_U32(ctx, 31, 0x28F934u);
    ctx->pc = 0x28F930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F92Cu;
            // 0x28f930: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28F038u;
    if (runtime->hasFunction(0x28F038u)) {
        auto targetFn = runtime->lookupFunction(0x28F038u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F934u; }
        if (ctx->pc != 0x28F934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028F038_0x28f038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F934u; }
        if (ctx->pc != 0x28F934u) { return; }
    }
    ctx->pc = 0x28F934u;
label_28f934:
    // 0x28f934: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x28f934u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x28f938: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x28f938u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x28f93c: 0x5040ffd4  beql        $v0, $zero, . + 4 + (-0x2C << 2)
    ctx->pc = 0x28F93Cu;
    {
        const bool branch_taken_0x28f93c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f93c) {
            ctx->pc = 0x28F940u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F93Cu;
            // 0x28f940: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F890u;
            runtime->cooperativeGuestYield();
            goto label_28f890;
        }
    }
    ctx->pc = 0x28F944u;
label_28f944:
    // 0x28f944: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x28f944u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28f948: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x28f948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x28f94c: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x28F94Cu;
    {
        const bool branch_taken_0x28f94c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f94c) {
            ctx->pc = 0x28F950u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F94Cu;
            // 0x28f950: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F9B0u;
            goto label_28f9b0;
        }
    }
    ctx->pc = 0x28F954u;
    // 0x28f954: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x28f954u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28f958: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x28f958u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x28f95c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x28F95Cu;
    {
        const bool branch_taken_0x28f95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F95Cu;
            // 0x28f960: 0x26c56340  addiu       $a1, $s6, 0x6340 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 25408));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f95c) {
            ctx->pc = 0x28F98Cu;
            goto label_28f98c;
        }
    }
    ctx->pc = 0x28F964u;
    // 0x28f964: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x28f964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28f968: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x28F968u;
    SET_GPR_U32(ctx, 31, 0x28F970u);
    ctx->pc = 0x28F96Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F968u;
            // 0x28f96c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F970u; }
        if (ctx->pc != 0x28F970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F970u; }
        if (ctx->pc != 0x28F970u) { return; }
    }
    ctx->pc = 0x28F970u;
    // 0x28f970: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28f970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28f974: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28f974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28f978: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x28f978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x28f97c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x28f97cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x28f980: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x28f980u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x28f984: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x28F984u;
    {
        const bool branch_taken_0x28f984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F984u;
            // 0x28f988: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f984) {
            ctx->pc = 0x28F9D4u;
            goto label_28f9d4;
        }
    }
    ctx->pc = 0x28F98Cu;
label_28f98c:
    // 0x28f98c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x28f98cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28f990: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x28F990u;
    SET_GPR_U32(ctx, 31, 0x28F998u);
    ctx->pc = 0x28F994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F990u;
            // 0x28f994: 0x26c56340  addiu       $a1, $s6, 0x6340 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 25408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F998u; }
        if (ctx->pc != 0x28F998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F998u; }
        if (ctx->pc != 0x28F998u) { return; }
    }
    ctx->pc = 0x28F998u;
    // 0x28f998: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28f998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28f99c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28f99cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28f9a0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x28f9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x28f9a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28f9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28f9a8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x28F9A8u;
    {
        const bool branch_taken_0x28f9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F9ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F9A8u;
            // 0x28f9ac: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f9a8) {
            ctx->pc = 0x28F9D4u;
            goto label_28f9d4;
        }
    }
    ctx->pc = 0x28F9B0u;
label_28f9b0:
    // 0x28f9b0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28F9B0u;
    {
        const bool branch_taken_0x28f9b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f9b0) {
            ctx->pc = 0x28F9B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F9B0u;
            // 0x28f9b4: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28F9C4u;
            goto label_28f9c4;
        }
    }
    ctx->pc = 0x28F9B8u;
    // 0x28f9b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28f9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28f9bc: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x28f9bcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x28f9c0: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x28f9c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_28f9c4:
    // 0x28f9c4: 0x26c56340  addiu       $a1, $s6, 0x6340
    ctx->pc = 0x28f9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 25408));
    // 0x28f9c8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28f9c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f9cc: 0xc0a3c0e  jal         func_28F038
    ctx->pc = 0x28F9CCu;
    SET_GPR_U32(ctx, 31, 0x28F9D4u);
    ctx->pc = 0x28F9D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F9CCu;
            // 0x28f9d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28F038u;
    if (runtime->hasFunction(0x28F038u)) {
        auto targetFn = runtime->lookupFunction(0x28F038u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F9D4u; }
        if (ctx->pc != 0x28F9D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028F038_0x28f038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F9D4u; }
        if (ctx->pc != 0x28F9D4u) { return; }
    }
    ctx->pc = 0x28F9D4u;
label_28f9d4:
    // 0x28f9d4: 0x83a20040  lb          $v0, 0x40($sp)
    ctx->pc = 0x28f9d4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28f9d8: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x28F9D8u;
    {
        const bool branch_taken_0x28f9d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F9DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F9D8u;
            // 0x28f9dc: 0x93a30040  lbu         $v1, 0x40($sp) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f9d8) {
            ctx->pc = 0x28FA50u;
            goto label_28fa50;
        }
    }
    ctx->pc = 0x28F9E0u;
    // 0x28f9e0: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x28f9e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28f9e4: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x28f9e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x28f9e8: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x28F9E8u;
    {
        const bool branch_taken_0x28f9e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f9e8) {
            ctx->pc = 0x28F9ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F9E8u;
            // 0x28f9ec: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28FA24u;
            goto label_28fa24;
        }
    }
    ctx->pc = 0x28F9F0u;
    // 0x28f9f0: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x28f9f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28f9f4: 0x28c20002  slti        $v0, $a2, 0x2
    ctx->pc = 0x28f9f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x28f9f8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x28F9F8u;
    {
        const bool branch_taken_0x28f9f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f9f8) {
            ctx->pc = 0x28F9FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28F9F8u;
            // 0x28f9fc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28FA1Cu;
            goto label_28fa1c;
        }
    }
    ctx->pc = 0x28FA00u;
    // 0x28fa00: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x28fa00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28fa04: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x28fa04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x28fa08: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28fa08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28fa0c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28fa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28fa10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x28fa10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x28fa14: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x28FA14u;
    {
        const bool branch_taken_0x28fa14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FA14u;
            // 0x28fa18: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fa14) {
            ctx->pc = 0x28FAA4u;
            goto label_28faa4;
        }
    }
    ctx->pc = 0x28FA1Cu;
label_28fa1c:
    // 0x28fa1c: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x28FA1Cu;
    {
        const bool branch_taken_0x28fa1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FA1Cu;
            // 0x28fa20: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fa1c) {
            ctx->pc = 0x28FAB4u;
            goto label_28fab4;
        }
    }
    ctx->pc = 0x28FA24u;
label_28fa24:
    // 0x28fa24: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28FA24u;
    {
        const bool branch_taken_0x28fa24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28fa24) {
            ctx->pc = 0x28FA28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28FA24u;
            // 0x28fa28: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28FA38u;
            goto label_28fa38;
        }
    }
    ctx->pc = 0x28FA2Cu;
    // 0x28fa2c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28fa2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28fa30: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x28fa30u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x28fa34: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x28fa34u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_28fa38:
    // 0x28fa38: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x28fa38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x28fa3c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28fa3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28fa40: 0xc0a3c0e  jal         func_28F038
    ctx->pc = 0x28FA40u;
    SET_GPR_U32(ctx, 31, 0x28FA48u);
    ctx->pc = 0x28FA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28FA40u;
            // 0x28fa44: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28F038u;
    if (runtime->hasFunction(0x28F038u)) {
        auto targetFn = runtime->lookupFunction(0x28F038u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FA48u; }
        if (ctx->pc != 0x28FA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028F038_0x28f038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FA48u; }
        if (ctx->pc != 0x28FA48u) { return; }
    }
    ctx->pc = 0x28FA48u;
    // 0x28fa48: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x28FA48u;
    {
        const bool branch_taken_0x28fa48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FA4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FA48u;
            // 0x28fa4c: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fa48) {
            ctx->pc = 0x28FB00u;
            goto label_28fb00;
        }
    }
    ctx->pc = 0x28FA50u;
label_28fa50:
    // 0x28fa50: 0x32420002  andi        $v0, $s2, 0x2
    ctx->pc = 0x28fa50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)2);
    // 0x28fa54: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x28FA54u;
    {
        const bool branch_taken_0x28fa54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FA58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FA54u;
            // 0x28fa58: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fa54) {
            ctx->pc = 0x28FAFCu;
            goto label_28fafc;
        }
    }
    ctx->pc = 0x28FA5Cu;
    // 0x28fa5c: 0x9623000c  lhu         $v1, 0xC($s1)
    ctx->pc = 0x28fa5cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28fa60: 0xa3a20030  sb          $v0, 0x30($sp)
    ctx->pc = 0x28fa60u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 2));
    // 0x28fa64: 0x30630200  andi        $v1, $v1, 0x200
    ctx->pc = 0x28fa64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
    // 0x28fa68: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x28FA68u;
    {
        const bool branch_taken_0x28fa68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FA68u;
            // 0x28fa6c: 0xa3b50031  sb          $s5, 0x31($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 49), (uint8_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fa68) {
            ctx->pc = 0x28FAD4u;
            goto label_28fad4;
        }
    }
    ctx->pc = 0x28FA70u;
    // 0x28fa70: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x28fa70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28fa74: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x28fa74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x28fa78: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x28FA78u;
    {
        const bool branch_taken_0x28fa78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28fa78) {
            ctx->pc = 0x28FA7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28FA78u;
            // 0x28fa7c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28FAB0u;
            goto label_28fab0;
        }
    }
    ctx->pc = 0x28FA80u;
    // 0x28fa80: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x28fa80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28fa84: 0x83a50030  lb          $a1, 0x30($sp)
    ctx->pc = 0x28fa84u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28fa88: 0x83a60031  lb          $a2, 0x31($sp)
    ctx->pc = 0x28fa88u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 49)));
    // 0x28fa8c: 0xa0450000  sb          $a1, 0x0($v0)
    ctx->pc = 0x28fa8cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x28fa90: 0xa0460001  sb          $a2, 0x1($v0)
    ctx->pc = 0x28fa90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 6));
    // 0x28fa94: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28fa94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28fa98: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28fa98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28fa9c: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x28fa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x28faa0: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x28faa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
label_28faa4:
    // 0x28faa4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x28faa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x28faa8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x28FAA8u;
    {
        const bool branch_taken_0x28faa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FAA8u;
            // 0x28faac: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28faa8) {
            ctx->pc = 0x28FAFCu;
            goto label_28fafc;
        }
    }
    ctx->pc = 0x28FAB0u;
label_28fab0:
    // 0x28fab0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x28fab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_28fab4:
    // 0x28fab4: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x28FAB4u;
    SET_GPR_U32(ctx, 31, 0x28FABCu);
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FABCu; }
        if (ctx->pc != 0x28FABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FABCu; }
        if (ctx->pc != 0x28FABCu) { return; }
    }
    ctx->pc = 0x28FABCu;
    // 0x28fabc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28fabcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28fac0: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28fac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28fac4: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x28fac4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x28fac8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28fac8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28facc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x28FACCu;
    {
        const bool branch_taken_0x28facc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FAD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FACCu;
            // 0x28fad0: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28facc) {
            ctx->pc = 0x28FAFCu;
            goto label_28fafc;
        }
    }
    ctx->pc = 0x28FAD4u;
label_28fad4:
    // 0x28fad4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x28fad4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28fad8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28FAD8u;
    {
        const bool branch_taken_0x28fad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28fad8) {
            ctx->pc = 0x28FADCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28FAD8u;
            // 0x28fadc: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28FAECu;
            goto label_28faec;
        }
    }
    ctx->pc = 0x28FAE0u;
    // 0x28fae0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28fae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28fae4: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x28fae4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x28fae8: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x28fae8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_28faec:
    // 0x28faec: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x28faecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x28faf0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x28faf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28faf4: 0xc0a3c0e  jal         func_28F038
    ctx->pc = 0x28FAF4u;
    SET_GPR_U32(ctx, 31, 0x28FAFCu);
    ctx->pc = 0x28FAF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28FAF4u;
            // 0x28faf8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28F038u;
    if (runtime->hasFunction(0x28F038u)) {
        auto targetFn = runtime->lookupFunction(0x28F038u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FAFCu; }
        if (ctx->pc != 0x28FAFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028F038_0x28f038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FAFCu; }
        if (ctx->pc != 0x28FAFCu) { return; }
    }
    ctx->pc = 0x28FAFCu;
label_28fafc:
    // 0x28fafc: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x28fafcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_28fb00:
    // 0x28fb00: 0x17c2005b  bne         $fp, $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x28FB00u;
    {
        const bool branch_taken_0x28fb00 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 2));
        ctx->pc = 0x28FB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FB00u;
            // 0x28fb04: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fb00) {
            ctx->pc = 0x28FC70u;
            goto label_28fc70;
        }
    }
    ctx->pc = 0x28FB08u;
    // 0x28fb08: 0x8fa50054  lw          $a1, 0x54($sp)
    ctx->pc = 0x28fb08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x28fb0c: 0x8fa6005c  lw          $a2, 0x5C($sp)
    ctx->pc = 0x28fb0cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x28fb10: 0xa68023  subu        $s0, $a1, $a2
    ctx->pc = 0x28fb10u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x28fb14: 0x1a000055  blez        $s0, . + 4 + (0x55 << 2)
    ctx->pc = 0x28FB14u;
    {
        const bool branch_taken_0x28fb14 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x28FB18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FB14u;
            // 0x28fb18: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fb14) {
            ctx->pc = 0x28FC6Cu;
            goto label_28fc6c;
        }
    }
    ctx->pc = 0x28FB1Cu;
    // 0x28fb1c: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x28FB1Cu;
    {
        const bool branch_taken_0x28fb1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28FB20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FB1Cu;
            // 0x28fb20: 0x3c12002c  lui         $s2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fb1c) {
            ctx->pc = 0x28FBDCu;
            goto label_28fbdc;
        }
    }
    ctx->pc = 0x28FB24u;
    // 0x28fb24: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x28fb24u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28fb28: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x28fb28u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28fb2c: 0x0  nop
    ctx->pc = 0x28fb2cu;
    // NOP
label_28fb30:
    // 0x28fb30: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x28fb30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x28fb34: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x28FB34u;
    {
        const bool branch_taken_0x28fb34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28fb34) {
            ctx->pc = 0x28FB38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28FB34u;
            // 0x28fb38: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28FBB0u;
            goto label_28fbb0;
        }
    }
    ctx->pc = 0x28FB3Cu;
    // 0x28fb3c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x28fb3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28fb40: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x28fb40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x28fb44: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x28FB44u;
    {
        const bool branch_taken_0x28fb44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28fb44) {
            ctx->pc = 0x28FB48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28FB44u;
            // 0x28fb48: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28FB90u;
            goto label_28fb90;
        }
    }
    ctx->pc = 0x28FB4Cu;
    // 0x28fb4c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x28fb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28fb50: 0x26466350  addiu       $a2, $s2, 0x6350
    ctx->pc = 0x28fb50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 25424));
    // 0x28fb54: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x28fb54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x28fb58: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x28fb58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x28fb5c: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x28fb5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x28fb60: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x28fb60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x28fb64: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x28fb64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28fb68: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x28fb68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28fb6c: 0xb044000f  sdl         $a0, 0xF($v0)
    ctx->pc = 0x28fb6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28fb70: 0xb4440008  sdr         $a0, 0x8($v0)
    ctx->pc = 0x28fb70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28fb74: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28fb74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28fb78: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28fb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28fb7c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x28fb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x28fb80: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x28fb80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x28fb84: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x28fb84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x28fb88: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x28FB88u;
    {
        const bool branch_taken_0x28fb88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FB8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FB88u;
            // 0x28fb8c: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fb88) {
            ctx->pc = 0x28FBCCu;
            goto label_28fbcc;
        }
    }
    ctx->pc = 0x28FB90u;
label_28fb90:
    // 0x28fb90: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x28FB90u;
    SET_GPR_U32(ctx, 31, 0x28FB98u);
    ctx->pc = 0x28FB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28FB90u;
            // 0x28fb94: 0x26456350  addiu       $a1, $s2, 0x6350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 25424));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FB98u; }
        if (ctx->pc != 0x28FB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FB98u; }
        if (ctx->pc != 0x28FB98u) { return; }
    }
    ctx->pc = 0x28FB98u;
    // 0x28fb98: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28fb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28fb9c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28fb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28fba0: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x28fba0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x28fba4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28fba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28fba8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28FBA8u;
    {
        const bool branch_taken_0x28fba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FBACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FBA8u;
            // 0x28fbac: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fba8) {
            ctx->pc = 0x28FBCCu;
            goto label_28fbcc;
        }
    }
    ctx->pc = 0x28FBB0u;
label_28fbb0:
    // 0x28fbb0: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x28FBB0u;
    {
        const bool branch_taken_0x28fbb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28fbb0) {
            ctx->pc = 0x28FBB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28FBB0u;
            // 0x28fbb4: 0xa635000e  sh          $s5, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28FBB8u;
            goto label_28fbb8;
        }
    }
    ctx->pc = 0x28FBB8u;
label_28fbb8:
    // 0x28fbb8: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x28fbb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x28fbbc: 0x26456350  addiu       $a1, $s2, 0x6350
    ctx->pc = 0x28fbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 25424));
    // 0x28fbc0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x28fbc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x28fbc4: 0xc0a3c0e  jal         func_28F038
    ctx->pc = 0x28FBC4u;
    SET_GPR_U32(ctx, 31, 0x28FBCCu);
    ctx->pc = 0x28FBC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28FBC4u;
            // 0x28fbc8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28F038u;
    if (runtime->hasFunction(0x28F038u)) {
        auto targetFn = runtime->lookupFunction(0x28F038u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FBCCu; }
        if (ctx->pc != 0x28FBCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028F038_0x28f038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FBCCu; }
        if (ctx->pc != 0x28FBCCu) { return; }
    }
    ctx->pc = 0x28FBCCu;
label_28fbcc:
    // 0x28fbcc: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x28fbccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x28fbd0: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x28fbd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x28fbd4: 0x5040ffd6  beql        $v0, $zero, . + 4 + (-0x2A << 2)
    ctx->pc = 0x28FBD4u;
    {
        const bool branch_taken_0x28fbd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28fbd4) {
            ctx->pc = 0x28FBD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28FBD4u;
            // 0x28fbd8: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28FB30u;
            runtime->cooperativeGuestYield();
            goto label_28fb30;
        }
    }
    ctx->pc = 0x28FBDCu;
label_28fbdc:
    // 0x28fbdc: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x28fbdcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28fbe0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x28fbe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x28fbe4: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x28FBE4u;
    {
        const bool branch_taken_0x28fbe4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28fbe4) {
            ctx->pc = 0x28FBE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28FBE4u;
            // 0x28fbe8: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28FC48u;
            goto label_28fc48;
        }
    }
    ctx->pc = 0x28FBECu;
    // 0x28fbec: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x28fbecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28fbf0: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x28fbf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x28fbf4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x28FBF4u;
    {
        const bool branch_taken_0x28fbf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FBF4u;
            // 0x28fbf8: 0x26456350  addiu       $a1, $s2, 0x6350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 25424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fbf4) {
            ctx->pc = 0x28FC24u;
            goto label_28fc24;
        }
    }
    ctx->pc = 0x28FBFCu;
    // 0x28fbfc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x28fbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28fc00: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x28FC00u;
    SET_GPR_U32(ctx, 31, 0x28FC08u);
    ctx->pc = 0x28FC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28FC00u;
            // 0x28fc04: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FC08u; }
        if (ctx->pc != 0x28FC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FC08u; }
        if (ctx->pc != 0x28FC08u) { return; }
    }
    ctx->pc = 0x28FC08u;
    // 0x28fc08: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28fc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28fc0c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28fc0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28fc10: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x28fc10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x28fc14: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x28fc14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x28fc18: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x28fc18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x28fc1c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x28FC1Cu;
    {
        const bool branch_taken_0x28fc1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FC1Cu;
            // 0x28fc20: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fc1c) {
            ctx->pc = 0x28FC6Cu;
            goto label_28fc6c;
        }
    }
    ctx->pc = 0x28FC24u;
label_28fc24:
    // 0x28fc24: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x28fc24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28fc28: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x28FC28u;
    SET_GPR_U32(ctx, 31, 0x28FC30u);
    ctx->pc = 0x28FC2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28FC28u;
            // 0x28fc2c: 0x26456350  addiu       $a1, $s2, 0x6350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 25424));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FC30u; }
        if (ctx->pc != 0x28FC30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FC30u; }
        if (ctx->pc != 0x28FC30u) { return; }
    }
    ctx->pc = 0x28FC30u;
    // 0x28fc30: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28fc30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28fc34: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28fc34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28fc38: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x28fc38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x28fc3c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28fc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28fc40: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x28FC40u;
    {
        const bool branch_taken_0x28fc40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FC44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FC40u;
            // 0x28fc44: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fc40) {
            ctx->pc = 0x28FC6Cu;
            goto label_28fc6c;
        }
    }
    ctx->pc = 0x28FC48u;
label_28fc48:
    // 0x28fc48: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28FC48u;
    {
        const bool branch_taken_0x28fc48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28fc48) {
            ctx->pc = 0x28FC4Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28FC48u;
            // 0x28fc4c: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28FC5Cu;
            goto label_28fc5c;
        }
    }
    ctx->pc = 0x28FC50u;
    // 0x28fc50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28fc50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28fc54: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x28fc54u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x28fc58: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x28fc58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_28fc5c:
    // 0x28fc5c: 0x26456350  addiu       $a1, $s2, 0x6350
    ctx->pc = 0x28fc5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 25424));
    // 0x28fc60: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28fc60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fc64: 0xc0a3c0e  jal         func_28F038
    ctx->pc = 0x28FC64u;
    SET_GPR_U32(ctx, 31, 0x28FC6Cu);
    ctx->pc = 0x28FC68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28FC64u;
            // 0x28fc68: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28F038u;
    if (runtime->hasFunction(0x28F038u)) {
        auto targetFn = runtime->lookupFunction(0x28F038u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FC6Cu; }
        if (ctx->pc != 0x28FC6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028F038_0x28f038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FC6Cu; }
        if (ctx->pc != 0x28FC6Cu) { return; }
    }
    ctx->pc = 0x28FC6Cu;
label_28fc6c:
    // 0x28fc6c: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x28fc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_28fc70:
    // 0x28fc70: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x28fc70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x28fc74: 0x628023  subu        $s0, $v1, $v0
    ctx->pc = 0x28fc74u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28fc78: 0x1a000054  blez        $s0, . + 4 + (0x54 << 2)
    ctx->pc = 0x28FC78u;
    {
        const bool branch_taken_0x28fc78 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x28FC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FC78u;
            // 0x28fc7c: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fc78) {
            ctx->pc = 0x28FDCCu;
            goto label_28fdcc;
        }
    }
    ctx->pc = 0x28FC80u;
    // 0x28fc80: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x28FC80u;
    {
        const bool branch_taken_0x28fc80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28FC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FC80u;
            // 0x28fc84: 0x3c12002c  lui         $s2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fc80) {
            ctx->pc = 0x28FD3Cu;
            goto label_28fd3c;
        }
    }
    ctx->pc = 0x28FC88u;
    // 0x28fc88: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x28fc88u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28fc8c: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x28fc8cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_28fc90:
    // 0x28fc90: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x28fc90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x28fc94: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x28FC94u;
    {
        const bool branch_taken_0x28fc94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28fc94) {
            ctx->pc = 0x28FC98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28FC94u;
            // 0x28fc98: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28FD10u;
            goto label_28fd10;
        }
    }
    ctx->pc = 0x28FC9Cu;
    // 0x28fc9c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x28fc9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28fca0: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x28fca0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x28fca4: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x28FCA4u;
    {
        const bool branch_taken_0x28fca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28fca4) {
            ctx->pc = 0x28FCA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28FCA4u;
            // 0x28fca8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28FCF0u;
            goto label_28fcf0;
        }
    }
    ctx->pc = 0x28FCACu;
    // 0x28fcac: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x28fcacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28fcb0: 0x26436350  addiu       $v1, $s2, 0x6350
    ctx->pc = 0x28fcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 25424));
    // 0x28fcb4: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x28fcb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x28fcb8: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x28fcb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x28fcbc: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x28fcbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x28fcc0: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x28fcc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x28fcc4: 0xb0440007  sdl         $a0, 0x7($v0)
    ctx->pc = 0x28fcc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28fcc8: 0xb4440000  sdr         $a0, 0x0($v0)
    ctx->pc = 0x28fcc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28fccc: 0xb045000f  sdl         $a1, 0xF($v0)
    ctx->pc = 0x28fcccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28fcd0: 0xb4450008  sdr         $a1, 0x8($v0)
    ctx->pc = 0x28fcd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28fcd4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28fcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28fcd8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28fcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28fcdc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x28fcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x28fce0: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x28fce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x28fce4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x28fce4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x28fce8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x28FCE8u;
    {
        const bool branch_taken_0x28fce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FCECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FCE8u;
            // 0x28fcec: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fce8) {
            ctx->pc = 0x28FD2Cu;
            goto label_28fd2c;
        }
    }
    ctx->pc = 0x28FCF0u;
label_28fcf0:
    // 0x28fcf0: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x28FCF0u;
    SET_GPR_U32(ctx, 31, 0x28FCF8u);
    ctx->pc = 0x28FCF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28FCF0u;
            // 0x28fcf4: 0x26456350  addiu       $a1, $s2, 0x6350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 25424));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FCF8u; }
        if (ctx->pc != 0x28FCF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FCF8u; }
        if (ctx->pc != 0x28FCF8u) { return; }
    }
    ctx->pc = 0x28FCF8u;
    // 0x28fcf8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28fcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28fcfc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28fcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28fd00: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x28fd00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x28fd04: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28fd04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28fd08: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28FD08u;
    {
        const bool branch_taken_0x28fd08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FD0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FD08u;
            // 0x28fd0c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fd08) {
            ctx->pc = 0x28FD2Cu;
            goto label_28fd2c;
        }
    }
    ctx->pc = 0x28FD10u;
label_28fd10:
    // 0x28fd10: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x28FD10u;
    {
        const bool branch_taken_0x28fd10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28fd10) {
            ctx->pc = 0x28FD14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28FD10u;
            // 0x28fd14: 0xa635000e  sh          $s5, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28FD18u;
            goto label_28fd18;
        }
    }
    ctx->pc = 0x28FD18u;
label_28fd18:
    // 0x28fd18: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x28fd18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x28fd1c: 0x26456350  addiu       $a1, $s2, 0x6350
    ctx->pc = 0x28fd1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 25424));
    // 0x28fd20: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x28fd20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x28fd24: 0xc0a3c0e  jal         func_28F038
    ctx->pc = 0x28FD24u;
    SET_GPR_U32(ctx, 31, 0x28FD2Cu);
    ctx->pc = 0x28FD28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28FD24u;
            // 0x28fd28: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28F038u;
    if (runtime->hasFunction(0x28F038u)) {
        auto targetFn = runtime->lookupFunction(0x28F038u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FD2Cu; }
        if (ctx->pc != 0x28FD2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028F038_0x28f038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FD2Cu; }
        if (ctx->pc != 0x28FD2Cu) { return; }
    }
    ctx->pc = 0x28FD2Cu;
label_28fd2c:
    // 0x28fd2c: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x28fd2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x28fd30: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x28fd30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x28fd34: 0x5040ffd6  beql        $v0, $zero, . + 4 + (-0x2A << 2)
    ctx->pc = 0x28FD34u;
    {
        const bool branch_taken_0x28fd34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28fd34) {
            ctx->pc = 0x28FD38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28FD34u;
            // 0x28fd38: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28FC90u;
            runtime->cooperativeGuestYield();
            goto label_28fc90;
        }
    }
    ctx->pc = 0x28FD3Cu;
label_28fd3c:
    // 0x28fd3c: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x28fd3cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28fd40: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x28fd40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x28fd44: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x28FD44u;
    {
        const bool branch_taken_0x28fd44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28fd44) {
            ctx->pc = 0x28FD48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28FD44u;
            // 0x28fd48: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28FDA8u;
            goto label_28fda8;
        }
    }
    ctx->pc = 0x28FD4Cu;
    // 0x28fd4c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x28fd4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28fd50: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x28fd50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x28fd54: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x28FD54u;
    {
        const bool branch_taken_0x28fd54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FD58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FD54u;
            // 0x28fd58: 0x26456350  addiu       $a1, $s2, 0x6350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 25424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fd54) {
            ctx->pc = 0x28FD84u;
            goto label_28fd84;
        }
    }
    ctx->pc = 0x28FD5Cu;
    // 0x28fd5c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x28fd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28fd60: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x28FD60u;
    SET_GPR_U32(ctx, 31, 0x28FD68u);
    ctx->pc = 0x28FD64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28FD60u;
            // 0x28fd64: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FD68u; }
        if (ctx->pc != 0x28FD68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FD68u; }
        if (ctx->pc != 0x28FD68u) { return; }
    }
    ctx->pc = 0x28FD68u;
    // 0x28fd68: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28fd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28fd6c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28fd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28fd70: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x28fd70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x28fd74: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x28fd74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x28fd78: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x28fd78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x28fd7c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x28FD7Cu;
    {
        const bool branch_taken_0x28fd7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FD80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FD7Cu;
            // 0x28fd80: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fd7c) {
            ctx->pc = 0x28FDCCu;
            goto label_28fdcc;
        }
    }
    ctx->pc = 0x28FD84u;
label_28fd84:
    // 0x28fd84: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x28fd84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28fd88: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x28FD88u;
    SET_GPR_U32(ctx, 31, 0x28FD90u);
    ctx->pc = 0x28FD8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28FD88u;
            // 0x28fd8c: 0x26456350  addiu       $a1, $s2, 0x6350 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 25424));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FD90u; }
        if (ctx->pc != 0x28FD90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FD90u; }
        if (ctx->pc != 0x28FD90u) { return; }
    }
    ctx->pc = 0x28FD90u;
    // 0x28fd90: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28fd90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28fd94: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28fd94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28fd98: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x28fd98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x28fd9c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28fd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28fda0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x28FDA0u;
    {
        const bool branch_taken_0x28fda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FDA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FDA0u;
            // 0x28fda4: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fda0) {
            ctx->pc = 0x28FDCCu;
            goto label_28fdcc;
        }
    }
    ctx->pc = 0x28FDA8u;
label_28fda8:
    // 0x28fda8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28FDA8u;
    {
        const bool branch_taken_0x28fda8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28fda8) {
            ctx->pc = 0x28FDACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28FDA8u;
            // 0x28fdac: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28FDBCu;
            goto label_28fdbc;
        }
    }
    ctx->pc = 0x28FDB0u;
    // 0x28fdb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28fdb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28fdb4: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x28fdb4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x28fdb8: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x28fdb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_28fdbc:
    // 0x28fdbc: 0x26456350  addiu       $a1, $s2, 0x6350
    ctx->pc = 0x28fdbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 25424));
    // 0x28fdc0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28fdc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fdc4: 0xc0a3c0e  jal         func_28F038
    ctx->pc = 0x28FDC4u;
    SET_GPR_U32(ctx, 31, 0x28FDCCu);
    ctx->pc = 0x28FDC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28FDC4u;
            // 0x28fdc8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28F038u;
    if (runtime->hasFunction(0x28F038u)) {
        auto targetFn = runtime->lookupFunction(0x28F038u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FDCCu; }
        if (ctx->pc != 0x28FDCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028F038_0x28f038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FDCCu; }
        if (ctx->pc != 0x28FDCCu) { return; }
    }
    ctx->pc = 0x28FDCCu;
label_28fdcc:
    // 0x28fdcc: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x28fdccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28fdd0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x28fdd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x28fdd4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x28FDD4u;
    {
        const bool branch_taken_0x28fdd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FDD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FDD4u;
            // 0x28fdd8: 0x8fa6004c  lw          $a2, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fdd4) {
            ctx->pc = 0x28FE38u;
            goto label_28fe38;
        }
    }
    ctx->pc = 0x28FDDCu;
    // 0x28fddc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x28fddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28fde0: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x28fde0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28fde4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x28FDE4u;
    {
        const bool branch_taken_0x28fde4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FDE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FDE4u;
            // 0x28fde8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fde4) {
            ctx->pc = 0x28FE14u;
            goto label_28fe14;
        }
    }
    ctx->pc = 0x28FDECu;
    // 0x28fdec: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x28FDECu;
    SET_GPR_U32(ctx, 31, 0x28FDF4u);
    ctx->pc = 0x28FDF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28FDECu;
            // 0x28fdf0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FDF4u; }
        if (ctx->pc != 0x28FDF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FDF4u; }
        if (ctx->pc != 0x28FDF4u) { return; }
    }
    ctx->pc = 0x28FDF4u;
    // 0x28fdf4: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x28fdf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x28fdf8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28fdf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28fdfc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28fdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28fe00: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28fe00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28fe04: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x28fe04u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x28fe08: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x28fe08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x28fe0c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x28FE0Cu;
    {
        const bool branch_taken_0x28fe0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FE10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FE0Cu;
            // 0x28fe10: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fe0c) {
            ctx->pc = 0x28FE60u;
            goto label_28fe60;
        }
    }
    ctx->pc = 0x28FE14u;
label_28fe14:
    // 0x28fe14: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x28fe14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fe18: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x28FE18u;
    SET_GPR_U32(ctx, 31, 0x28FE20u);
    ctx->pc = 0x28FE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28FE18u;
            // 0x28fe1c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FE20u; }
        if (ctx->pc != 0x28FE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FE20u; }
        if (ctx->pc != 0x28FE20u) { return; }
    }
    ctx->pc = 0x28FE20u;
    // 0x28fe20: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28fe20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28fe24: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28fe24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28fe28: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x28fe28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x28fe2c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28fe2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28fe30: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x28FE30u;
    {
        const bool branch_taken_0x28fe30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FE30u;
            // 0x28fe34: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fe30) {
            ctx->pc = 0x28FE60u;
            goto label_28fe60;
        }
    }
    ctx->pc = 0x28FE38u;
label_28fe38:
    // 0x28fe38: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x28fe38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28fe3c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28FE3Cu;
    {
        const bool branch_taken_0x28fe3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28fe3c) {
            ctx->pc = 0x28FE40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28FE3Cu;
            // 0x28fe40: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28FE50u;
            goto label_28fe50;
        }
    }
    ctx->pc = 0x28FE44u;
    // 0x28fe44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28fe44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28fe48: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x28fe48u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x28fe4c: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x28fe4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_28fe50:
    // 0x28fe50: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x28fe50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fe54: 0x8fa6004c  lw          $a2, 0x4C($sp)
    ctx->pc = 0x28fe54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x28fe58: 0xc0a3c0e  jal         func_28F038
    ctx->pc = 0x28FE58u;
    SET_GPR_U32(ctx, 31, 0x28FE60u);
    ctx->pc = 0x28FE5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28FE58u;
            // 0x28fe5c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28F038u;
    if (runtime->hasFunction(0x28F038u)) {
        auto targetFn = runtime->lookupFunction(0x28F038u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FE60u; }
        if (ctx->pc != 0x28FE60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028F038_0x28f038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FE60u; }
        if (ctx->pc != 0x28FE60u) { return; }
    }
    ctx->pc = 0x28FE60u;
label_28fe60:
    // 0x28fe60: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x28fe60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28fe64: 0x10800059  beqz        $a0, . + 4 + (0x59 << 2)
    ctx->pc = 0x28FE64u;
    {
        const bool branch_taken_0x28fe64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FE64u;
            // 0x28fe68: 0x8fa50054  lw          $a1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fe64) {
            ctx->pc = 0x28FFCCu;
            goto label_28ffcc;
        }
    }
    ctx->pc = 0x28FE6Cu;
    // 0x28fe6c: 0x8fa6005c  lw          $a2, 0x5C($sp)
    ctx->pc = 0x28fe6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x28fe70: 0xa68023  subu        $s0, $a1, $a2
    ctx->pc = 0x28fe70u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x28fe74: 0x1a000055  blez        $s0, . + 4 + (0x55 << 2)
    ctx->pc = 0x28FE74u;
    {
        const bool branch_taken_0x28fe74 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x28FE78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FE74u;
            // 0x28fe78: 0x2a020011  slti        $v0, $s0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fe74) {
            ctx->pc = 0x28FFCCu;
            goto label_28ffcc;
        }
    }
    ctx->pc = 0x28FE7Cu;
    // 0x28fe7c: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x28FE7Cu;
    {
        const bool branch_taken_0x28fe7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28FE80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FE7Cu;
            // 0x28fe80: 0x3c16002c  lui         $s6, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fe7c) {
            ctx->pc = 0x28FF3Cu;
            goto label_28ff3c;
        }
    }
    ctx->pc = 0x28FE84u;
    // 0x28fe84: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x28fe84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28fe88: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x28fe88u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28fe8c: 0x0  nop
    ctx->pc = 0x28fe8cu;
    // NOP
label_28fe90:
    // 0x28fe90: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x28fe90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x28fe94: 0x5040001e  beql        $v0, $zero, . + 4 + (0x1E << 2)
    ctx->pc = 0x28FE94u;
    {
        const bool branch_taken_0x28fe94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28fe94) {
            ctx->pc = 0x28FE98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28FE94u;
            // 0x28fe98: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28FF10u;
            goto label_28ff10;
        }
    }
    ctx->pc = 0x28FE9Cu;
    // 0x28fe9c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x28fe9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28fea0: 0x28c20011  slti        $v0, $a2, 0x11
    ctx->pc = 0x28fea0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x28fea4: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x28FEA4u;
    {
        const bool branch_taken_0x28fea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28fea4) {
            ctx->pc = 0x28FEA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28FEA4u;
            // 0x28fea8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28FEF0u;
            goto label_28fef0;
        }
    }
    ctx->pc = 0x28FEACu;
    // 0x28feac: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x28feacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28feb0: 0x26c66340  addiu       $a2, $s6, 0x6340
    ctx->pc = 0x28feb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 25408));
    // 0x28feb4: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x28feb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x28feb8: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x28feb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x28febc: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x28febcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x28fec0: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x28fec0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x28fec4: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x28fec4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28fec8: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x28fec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28fecc: 0xb044000f  sdl         $a0, 0xF($v0)
    ctx->pc = 0x28feccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28fed0: 0xb4440008  sdr         $a0, 0x8($v0)
    ctx->pc = 0x28fed0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x28fed4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28fed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28fed8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28fed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28fedc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x28fedcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x28fee0: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x28fee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x28fee4: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x28fee4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x28fee8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x28FEE8u;
    {
        const bool branch_taken_0x28fee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FEECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FEE8u;
            // 0x28feec: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fee8) {
            ctx->pc = 0x28FF2Cu;
            goto label_28ff2c;
        }
    }
    ctx->pc = 0x28FEF0u;
label_28fef0:
    // 0x28fef0: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x28FEF0u;
    SET_GPR_U32(ctx, 31, 0x28FEF8u);
    ctx->pc = 0x28FEF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28FEF0u;
            // 0x28fef4: 0x26c56340  addiu       $a1, $s6, 0x6340 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 25408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FEF8u; }
        if (ctx->pc != 0x28FEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FEF8u; }
        if (ctx->pc != 0x28FEF8u) { return; }
    }
    ctx->pc = 0x28FEF8u;
    // 0x28fef8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28fef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28fefc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28fefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28ff00: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x28ff00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x28ff04: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28ff04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28ff08: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28FF08u;
    {
        const bool branch_taken_0x28ff08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FF0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FF08u;
            // 0x28ff0c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ff08) {
            ctx->pc = 0x28FF2Cu;
            goto label_28ff2c;
        }
    }
    ctx->pc = 0x28FF10u;
label_28ff10:
    // 0x28ff10: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x28FF10u;
    {
        const bool branch_taken_0x28ff10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ff10) {
            ctx->pc = 0x28FF14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28FF10u;
            // 0x28ff14: 0xa632000e  sh          $s2, 0xE($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28FF18u;
            goto label_28ff18;
        }
    }
    ctx->pc = 0x28FF18u;
label_28ff18:
    // 0x28ff18: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x28ff18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x28ff1c: 0x26c56340  addiu       $a1, $s6, 0x6340
    ctx->pc = 0x28ff1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 25408));
    // 0x28ff20: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x28ff20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x28ff24: 0xc0a3c0e  jal         func_28F038
    ctx->pc = 0x28FF24u;
    SET_GPR_U32(ctx, 31, 0x28FF2Cu);
    ctx->pc = 0x28FF28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28FF24u;
            // 0x28ff28: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28F038u;
    if (runtime->hasFunction(0x28F038u)) {
        auto targetFn = runtime->lookupFunction(0x28F038u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FF2Cu; }
        if (ctx->pc != 0x28FF2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028F038_0x28f038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FF2Cu; }
        if (ctx->pc != 0x28FF2Cu) { return; }
    }
    ctx->pc = 0x28FF2Cu;
label_28ff2c:
    // 0x28ff2c: 0x2610fff0  addiu       $s0, $s0, -0x10
    ctx->pc = 0x28ff2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967280));
    // 0x28ff30: 0x2a020011  slti        $v0, $s0, 0x11
    ctx->pc = 0x28ff30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x28ff34: 0x5040ffd6  beql        $v0, $zero, . + 4 + (-0x2A << 2)
    ctx->pc = 0x28FF34u;
    {
        const bool branch_taken_0x28ff34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ff34) {
            ctx->pc = 0x28FF38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28FF34u;
            // 0x28ff38: 0x9622000c  lhu         $v0, 0xC($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28FE90u;
            runtime->cooperativeGuestYield();
            goto label_28fe90;
        }
    }
    ctx->pc = 0x28FF3Cu;
label_28ff3c:
    // 0x28ff3c: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x28ff3cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x28ff40: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x28ff40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x28ff44: 0x50400018  beql        $v0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x28FF44u;
    {
        const bool branch_taken_0x28ff44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ff44) {
            ctx->pc = 0x28FF48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28FF44u;
            // 0x28ff48: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28FFA8u;
            goto label_28ffa8;
        }
    }
    ctx->pc = 0x28FF4Cu;
    // 0x28ff4c: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x28ff4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28ff50: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x28ff50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x28ff54: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x28FF54u;
    {
        const bool branch_taken_0x28ff54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FF54u;
            // 0x28ff58: 0x26c56340  addiu       $a1, $s6, 0x6340 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 25408));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ff54) {
            ctx->pc = 0x28FF84u;
            goto label_28ff84;
        }
    }
    ctx->pc = 0x28FF5Cu;
    // 0x28ff5c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x28ff5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28ff60: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x28FF60u;
    SET_GPR_U32(ctx, 31, 0x28FF68u);
    ctx->pc = 0x28FF64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28FF60u;
            // 0x28ff64: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FF68u; }
        if (ctx->pc != 0x28FF68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FF68u; }
        if (ctx->pc != 0x28FF68u) { return; }
    }
    ctx->pc = 0x28FF68u;
    // 0x28ff68: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28ff68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28ff6c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28ff6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28ff70: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x28ff70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x28ff74: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x28ff74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x28ff78: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x28ff78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x28ff7c: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x28FF7Cu;
    {
        const bool branch_taken_0x28ff7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FF80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FF7Cu;
            // 0x28ff80: 0xae220008  sw          $v0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ff7c) {
            ctx->pc = 0x28FFCCu;
            goto label_28ffcc;
        }
    }
    ctx->pc = 0x28FF84u;
label_28ff84:
    // 0x28ff84: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x28ff84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28ff88: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x28FF88u;
    SET_GPR_U32(ctx, 31, 0x28FF90u);
    ctx->pc = 0x28FF8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28FF88u;
            // 0x28ff8c: 0x26c56340  addiu       $a1, $s6, 0x6340 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 25408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FF90u; }
        if (ctx->pc != 0x28FF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FF90u; }
        if (ctx->pc != 0x28FF90u) { return; }
    }
    ctx->pc = 0x28FF90u;
    // 0x28ff90: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x28ff90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28ff94: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x28ff94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28ff98: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x28ff98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x28ff9c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28ff9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28ffa0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x28FFA0u;
    {
        const bool branch_taken_0x28ffa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FFA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FFA0u;
            // 0x28ffa4: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ffa0) {
            ctx->pc = 0x28FFCCu;
            goto label_28ffcc;
        }
    }
    ctx->pc = 0x28FFA8u;
label_28ffa8:
    // 0x28ffa8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28FFA8u;
    {
        const bool branch_taken_0x28ffa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ffa8) {
            ctx->pc = 0x28FFACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28FFA8u;
            // 0x28ffac: 0x8624000e  lh          $a0, 0xE($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28FFBCu;
            goto label_28ffbc;
        }
    }
    ctx->pc = 0x28FFB0u;
    // 0x28ffb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28ffb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ffb4: 0xa622000e  sh          $v0, 0xE($s1)
    ctx->pc = 0x28ffb4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x28ffb8: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x28ffb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
label_28ffbc:
    // 0x28ffbc: 0x26c56340  addiu       $a1, $s6, 0x6340
    ctx->pc = 0x28ffbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 25408));
    // 0x28ffc0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28ffc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ffc4: 0xc0a3c0e  jal         func_28F038
    ctx->pc = 0x28FFC4u;
    SET_GPR_U32(ctx, 31, 0x28FFCCu);
    ctx->pc = 0x28FFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28FFC4u;
            // 0x28ffc8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28F038u;
    if (runtime->hasFunction(0x28F038u)) {
        auto targetFn = runtime->lookupFunction(0x28F038u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FFCCu; }
        if (ctx->pc != 0x28FFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028F038_0x28f038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FFCCu; }
        if (ctx->pc != 0x28FFCCu) { return; }
    }
    ctx->pc = 0x28FFCCu;
label_28ffcc:
    // 0x28ffcc: 0x8fa20054  lw          $v0, 0x54($sp)
    ctx->pc = 0x28ffccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x28ffd0: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x28ffd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x28ffd4: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x28ffd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x28ffd8: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x28ffd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28ffdc: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x28ffdcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x28ffe0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x28ffe0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x28ffe4: 0x1000fc6a  b           . + 4 + (-0x396 << 2)
    ctx->pc = 0x28FFE4u;
    {
        const bool branch_taken_0x28ffe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FFE4u;
            // 0x28ffe8: 0xafa50050  sw          $a1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ffe4) {
            ctx->pc = 0x28F190u;
            runtime->cooperativeGuestYield();
            goto label_28f190;
        }
    }
    ctx->pc = 0x28FFECu;
label_28ffec:
    // 0x28ffec: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x28ffecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_28fff0:
    // 0x28fff0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x28fff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x28fff4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x28FFF4u;
    {
        const bool branch_taken_0x28fff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28FFF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FFF4u;
            // 0x28fff8: 0x8fa20050  lw          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fff4) {
            ctx->pc = 0x290014u;
            goto label_290014;
        }
    }
    ctx->pc = 0x28FFFCu;
    // 0x28fffc: 0x8624000e  lh          $a0, 0xE($s1)
    ctx->pc = 0x28fffcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x290000: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x290000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290004: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x290004u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290008: 0xc0a3c0e  jal         func_28F038
    ctx->pc = 0x290008u;
    SET_GPR_U32(ctx, 31, 0x290010u);
    ctx->pc = 0x29000Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290008u;
            // 0x29000c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28F038u;
    if (runtime->hasFunction(0x28F038u)) {
        auto targetFn = runtime->lookupFunction(0x28F038u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290010u; }
        if (ctx->pc != 0x290010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028F038_0x28f038(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x290010u; }
        if (ctx->pc != 0x290010u) { return; }
    }
    ctx->pc = 0x290010u;
    // 0x290010: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x290010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_290014:
    // 0x290014: 0x7bb00110  lq          $s0, 0x110($sp)
    ctx->pc = 0x290014u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x290018: 0x7bb10100  lq          $s1, 0x100($sp)
    ctx->pc = 0x290018u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x29001c: 0x7bb200f0  lq          $s2, 0xF0($sp)
    ctx->pc = 0x29001cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x290020: 0x7bb300e0  lq          $s3, 0xE0($sp)
    ctx->pc = 0x290020u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x290024: 0x7bb400d0  lq          $s4, 0xD0($sp)
    ctx->pc = 0x290024u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x290028: 0x7bb500c0  lq          $s5, 0xC0($sp)
    ctx->pc = 0x290028u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x29002c: 0x7bb600b0  lq          $s6, 0xB0($sp)
    ctx->pc = 0x29002cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x290030: 0x7bb700a0  lq          $s7, 0xA0($sp)
    ctx->pc = 0x290030u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x290034: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x290034u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x290038: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x290038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29003c: 0x3e00008  jr          $ra
    ctx->pc = 0x29003Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x290040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29003Cu;
            // 0x290040: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28F190u: goto label_28f190;
            case 0x28F198u: goto label_28f198;
            case 0x28F1D0u: goto label_28f1d0;
            case 0x28F224u: goto label_28f224;
            case 0x28F248u: goto label_28f248;
            case 0x28F25Cu: goto label_28f25c;
            case 0x28F26Cu: goto label_28f26c;
            case 0x28F278u: goto label_28f278;
            case 0x28F2A0u: goto label_28f2a0;
            case 0x28F2B4u: goto label_28f2b4;
            case 0x28F2B8u: goto label_28f2b8;
            case 0x28F2BCu: goto label_28f2bc;
            case 0x28F2E4u: goto label_28f2e4;
            case 0x28F2FCu: goto label_28f2fc;
            case 0x28F304u: goto label_28f304;
            case 0x28F30Cu: goto label_28f30c;
            case 0x28F324u: goto label_28f324;
            case 0x28F32Cu: goto label_28f32c;
            case 0x28F338u: goto label_28f338;
            case 0x28F364u: goto label_28f364;
            case 0x28F378u: goto label_28f378;
            case 0x28F398u: goto label_28f398;
            case 0x28F3ACu: goto label_28f3ac;
            case 0x28F3B4u: goto label_28f3b4;
            case 0x28F3C0u: goto label_28f3c0;
            case 0x28F3E8u: goto label_28f3e8;
            case 0x28F3F0u: goto label_28f3f0;
            case 0x28F404u: goto label_28f404;
            case 0x28F40Cu: goto label_28f40c;
            case 0x28F438u: goto label_28f438;
            case 0x28F43Cu: goto label_28f43c;
            case 0x28F458u: goto label_28f458;
            case 0x28F460u: goto label_28f460;
            case 0x28F470u: goto label_28f470;
            case 0x28F474u: goto label_28f474;
            case 0x28F48Cu: goto label_28f48c;
            case 0x28F4A8u: goto label_28f4a8;
            case 0x28F4C4u: goto label_28f4c4;
            case 0x28F4E0u: goto label_28f4e0;
            case 0x28F4F4u: goto label_28f4f4;
            case 0x28F4F8u: goto label_28f4f8;
            case 0x28F514u: goto label_28f514;
            case 0x28F51Cu: goto label_28f51c;
            case 0x28F52Cu: goto label_28f52c;
            case 0x28F530u: goto label_28f530;
            case 0x28F538u: goto label_28f538;
            case 0x28F55Cu: goto label_28f55c;
            case 0x28F570u: goto label_28f570;
            case 0x28F598u: goto label_28f598;
            case 0x28F5A0u: goto label_28f5a0;
            case 0x28F5ACu: goto label_28f5ac;
            case 0x28F5BCu: goto label_28f5bc;
            case 0x28F5C0u: goto label_28f5c0;
            case 0x28F5DCu: goto label_28f5dc;
            case 0x28F5E4u: goto label_28f5e4;
            case 0x28F5F4u: goto label_28f5f4;
            case 0x28F5F8u: goto label_28f5f8;
            case 0x28F600u: goto label_28f600;
            case 0x28F60Cu: goto label_28f60c;
            case 0x28F614u: goto label_28f614;
            case 0x28F634u: goto label_28f634;
            case 0x28F63Cu: goto label_28f63c;
            case 0x28F64Cu: goto label_28f64c;
            case 0x28F650u: goto label_28f650;
            case 0x28F664u: goto label_28f664;
            case 0x28F668u: goto label_28f668;
            case 0x28F67Cu: goto label_28f67c;
            case 0x28F698u: goto label_28f698;
            case 0x28F6BCu: goto label_28f6bc;
            case 0x28F6D0u: goto label_28f6d0;
            case 0x28F708u: goto label_28f708;
            case 0x28F720u: goto label_28f720;
            case 0x28F754u: goto label_28f754;
            case 0x28F768u: goto label_28f768;
            case 0x28F778u: goto label_28f778;
            case 0x28F7A8u: goto label_28f7a8;
            case 0x28F7C4u: goto label_28f7c4;
            case 0x28F7C8u: goto label_28f7c8;
            case 0x28F7F4u: goto label_28f7f4;
            case 0x28F7F8u: goto label_28f7f8;
            case 0x28F804u: goto label_28f804;
            case 0x28F824u: goto label_28f824;
            case 0x28F828u: goto label_28f828;
            case 0x28F850u: goto label_28f850;
            case 0x28F860u: goto label_28f860;
            case 0x28F890u: goto label_28f890;
            case 0x28F8F0u: goto label_28f8f0;
            case 0x28F910u: goto label_28f910;
            case 0x28F924u: goto label_28f924;
            case 0x28F934u: goto label_28f934;
            case 0x28F944u: goto label_28f944;
            case 0x28F98Cu: goto label_28f98c;
            case 0x28F9B0u: goto label_28f9b0;
            case 0x28F9C4u: goto label_28f9c4;
            case 0x28F9D4u: goto label_28f9d4;
            case 0x28FA1Cu: goto label_28fa1c;
            case 0x28FA24u: goto label_28fa24;
            case 0x28FA38u: goto label_28fa38;
            case 0x28FA50u: goto label_28fa50;
            case 0x28FAA4u: goto label_28faa4;
            case 0x28FAB0u: goto label_28fab0;
            case 0x28FAB4u: goto label_28fab4;
            case 0x28FAD4u: goto label_28fad4;
            case 0x28FAECu: goto label_28faec;
            case 0x28FAFCu: goto label_28fafc;
            case 0x28FB00u: goto label_28fb00;
            case 0x28FB30u: goto label_28fb30;
            case 0x28FB90u: goto label_28fb90;
            case 0x28FBB0u: goto label_28fbb0;
            case 0x28FBB8u: goto label_28fbb8;
            case 0x28FBCCu: goto label_28fbcc;
            case 0x28FBDCu: goto label_28fbdc;
            case 0x28FC24u: goto label_28fc24;
            case 0x28FC48u: goto label_28fc48;
            case 0x28FC5Cu: goto label_28fc5c;
            case 0x28FC6Cu: goto label_28fc6c;
            case 0x28FC70u: goto label_28fc70;
            case 0x28FC90u: goto label_28fc90;
            case 0x28FCF0u: goto label_28fcf0;
            case 0x28FD10u: goto label_28fd10;
            case 0x28FD18u: goto label_28fd18;
            case 0x28FD2Cu: goto label_28fd2c;
            case 0x28FD3Cu: goto label_28fd3c;
            case 0x28FD84u: goto label_28fd84;
            case 0x28FDA8u: goto label_28fda8;
            case 0x28FDBCu: goto label_28fdbc;
            case 0x28FDCCu: goto label_28fdcc;
            case 0x28FE14u: goto label_28fe14;
            case 0x28FE38u: goto label_28fe38;
            case 0x28FE50u: goto label_28fe50;
            case 0x28FE60u: goto label_28fe60;
            case 0x28FE90u: goto label_28fe90;
            case 0x28FEF0u: goto label_28fef0;
            case 0x28FF10u: goto label_28ff10;
            case 0x28FF18u: goto label_28ff18;
            case 0x28FF2Cu: goto label_28ff2c;
            case 0x28FF3Cu: goto label_28ff3c;
            case 0x28FF84u: goto label_28ff84;
            case 0x28FFA8u: goto label_28ffa8;
            case 0x28FFBCu: goto label_28ffbc;
            case 0x28FFCCu: goto label_28ffcc;
            case 0x28FFECu: goto label_28ffec;
            case 0x28FFF0u: goto label_28fff0;
            case 0x290014u: goto label_290014;
            default: break;
        }
        return;
    }
    ctx->pc = 0x290044u;
    // 0x290044: 0x0  nop
    ctx->pc = 0x290044u;
    // NOP
}
