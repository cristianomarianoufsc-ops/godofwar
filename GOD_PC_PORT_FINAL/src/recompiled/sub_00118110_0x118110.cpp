#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00118110
// Address: 0x118110 - 0x118798
void sub_00118110_0x118110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00118110_0x118110");
#endif

    ctx->pc = 0x118110u;

    // 0x118110: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x118110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x118114: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x118114u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x118118: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x118118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x11811c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x11811cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118120: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x118120u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x118124: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x118124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x118128: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x118128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x11812c: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x11812cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x118130: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x118130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x118134: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x118134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x118138: 0x8eb00044  lw          $s0, 0x44($s5)
    ctx->pc = 0x118138u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 68)));
    // 0x11813c: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x11813cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_118140:
    // 0x118140: 0x8c620184  lw          $v0, 0x184($v1)
    ctx->pc = 0x118140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 388)));
    // 0x118144: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x118144u;
    {
        const bool branch_taken_0x118144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x118144) {
            ctx->pc = 0x118148u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x118144u;
            // 0x118148: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x118154u;
            goto label_118154;
        }
    }
    ctx->pc = 0x11814Cu;
    // 0x11814c: 0x1000fffc  b           . + 4 + (-0x4 << 2)
    ctx->pc = 0x11814Cu;
    {
        const bool branch_taken_0x11814c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11814Cu;
            // 0x118150: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11814c) {
            ctx->pc = 0x118140u;
            runtime->cooperativeGuestYield();
            goto label_118140;
        }
    }
    ctx->pc = 0x118154u;
label_118154:
    // 0x118154: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x118154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118158: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x118158u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x11815c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x11815cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x118160: 0x8c540084  lw          $s4, 0x84($v0)
    ctx->pc = 0x118160u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x118164: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x118164u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_118168:
    // 0x118168: 0x2a21821  addu        $v1, $s5, $v0
    ctx->pc = 0x118168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
    // 0x11816c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x11816cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x118170: 0xac600048  sw          $zero, 0x48($v1)
    ctx->pc = 0x118170u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 0));
    // 0x118174: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x118174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118178: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x118178u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11817c: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x11817cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
    // 0x118180: 0xac4000c0  sw          $zero, 0xC0($v0)
    ctx->pc = 0x118180u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 0));
    // 0x118184: 0x2ca2000f  sltiu       $v0, $a1, 0xF
    ctx->pc = 0x118184u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
    // 0x118188: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x118188u;
    {
        const bool branch_taken_0x118188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11818Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118188u;
            // 0x11818c: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118188) {
            ctx->pc = 0x118168u;
            runtime->cooperativeGuestYield();
            goto label_118168;
        }
    }
    ctx->pc = 0x118190u;
    // 0x118190: 0x568000e3  bnel        $s4, $zero, . + 4 + (0xE3 << 2)
    ctx->pc = 0x118190u;
    {
        const bool branch_taken_0x118190 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x118190) {
            ctx->pc = 0x118194u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x118190u;
            // 0x118194: 0xafb40000  sw          $s4, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x118520u;
            goto label_118520;
        }
    }
    ctx->pc = 0x118198u;
    // 0x118198: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x118198u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11819c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x11819cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1181a0: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x1181a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1181a4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1181a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1181a8: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x1181a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1181ac: 0xc061e1a  jal         func_187868
    ctx->pc = 0x1181ACu;
    SET_GPR_U32(ctx, 31, 0x1181B4u);
    ctx->pc = 0x1181B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1181ACu;
            // 0x1181b0: 0x24090008  addiu       $t1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187868u;
    if (runtime->hasFunction(0x187868u)) {
        auto targetFn = runtime->lookupFunction(0x187868u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1181B4u; }
        if (ctx->pc != 0x1181B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187868_0x187868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1181B4u; }
        if (ctx->pc != 0x1181B4u) { return; }
    }
    ctx->pc = 0x1181B4u;
    // 0x1181b4: 0x26b30100  addiu       $s3, $s5, 0x100
    ctx->pc = 0x1181b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 256));
    // 0x1181b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1181b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1181bc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1181bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1181c0: 0x24060234  addiu       $a2, $zero, 0x234
    ctx->pc = 0x1181c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 564));
    // 0x1181c4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1181c4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1181c8: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x1181c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1181cc: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1181ccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1181d0: 0xaea200fc  sw          $v0, 0xFC($s5)
    ctx->pc = 0x1181d0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 252), GPR_U32(ctx, 2));
    // 0x1181d4: 0xc061e1a  jal         func_187868
    ctx->pc = 0x1181D4u;
    SET_GPR_U32(ctx, 31, 0x1181DCu);
    ctx->pc = 0x1181D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1181D4u;
            // 0x1181d8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187868u;
    if (runtime->hasFunction(0x187868u)) {
        auto targetFn = runtime->lookupFunction(0x187868u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1181DCu; }
        if (ctx->pc != 0x1181DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187868_0x187868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1181DCu; }
        if (ctx->pc != 0x1181DCu) { return; }
    }
    ctx->pc = 0x1181DCu;
    // 0x1181dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1181dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1181e0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1181e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1181e4: 0x240601f8  addiu       $a2, $zero, 0x1F8
    ctx->pc = 0x1181e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 504));
    // 0x1181e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1181e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1181ec: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x1181ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1181f0: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1181f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1181f4: 0xc061e1a  jal         func_187868
    ctx->pc = 0x1181F4u;
    SET_GPR_U32(ctx, 31, 0x1181FCu);
    ctx->pc = 0x1181F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1181F4u;
            // 0x1181f8: 0xaea20048  sw          $v0, 0x48($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 72), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187868u;
    if (runtime->hasFunction(0x187868u)) {
        auto targetFn = runtime->lookupFunction(0x187868u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1181FCu; }
        if (ctx->pc != 0x1181FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187868_0x187868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1181FCu; }
        if (ctx->pc != 0x1181FCu) { return; }
    }
    ctx->pc = 0x1181FCu;
    // 0x1181fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1181fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118200: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x118200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x118204: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x118204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x118208: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x118208u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11820c: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x11820cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x118210: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x118210u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x118214: 0xc061e1a  jal         func_187868
    ctx->pc = 0x118214u;
    SET_GPR_U32(ctx, 31, 0x11821Cu);
    ctx->pc = 0x118218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118214u;
            // 0x118218: 0xaea20084  sw          $v0, 0x84($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187868u;
    if (runtime->hasFunction(0x187868u)) {
        auto targetFn = runtime->lookupFunction(0x187868u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11821Cu; }
        if (ctx->pc != 0x11821Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187868_0x187868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11821Cu; }
        if (ctx->pc != 0x11821Cu) { return; }
    }
    ctx->pc = 0x11821Cu;
    // 0x11821c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11821cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118220: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x118220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x118224: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x118224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x118228: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x118228u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11822c: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x11822cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x118230: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x118230u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x118234: 0xc061e1a  jal         func_187868
    ctx->pc = 0x118234u;
    SET_GPR_U32(ctx, 31, 0x11823Cu);
    ctx->pc = 0x118238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118234u;
            // 0x118238: 0xaea200c0  sw          $v0, 0xC0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187868u;
    if (runtime->hasFunction(0x187868u)) {
        auto targetFn = runtime->lookupFunction(0x187868u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11823Cu; }
        if (ctx->pc != 0x11823Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187868_0x187868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11823Cu; }
        if (ctx->pc != 0x11823Cu) { return; }
    }
    ctx->pc = 0x11823Cu;
    // 0x11823c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11823cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118240: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x118240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x118244: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x118244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x118248: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x118248u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11824c: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x11824cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x118250: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x118250u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x118254: 0xaea2005c  sw          $v0, 0x5C($s5)
    ctx->pc = 0x118254u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 92), GPR_U32(ctx, 2));
    // 0x118258: 0xc061e1a  jal         func_187868
    ctx->pc = 0x118258u;
    SET_GPR_U32(ctx, 31, 0x118260u);
    ctx->pc = 0x11825Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118258u;
            // 0x11825c: 0xaea20060  sw          $v0, 0x60($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187868u;
    if (runtime->hasFunction(0x187868u)) {
        auto targetFn = runtime->lookupFunction(0x187868u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118260u; }
        if (ctx->pc != 0x118260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187868_0x187868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118260u; }
        if (ctx->pc != 0x118260u) { return; }
    }
    ctx->pc = 0x118260u;
    // 0x118260: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x118260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118264: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x118264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x118268: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x118268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x11826c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x11826cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118270: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x118270u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x118274: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x118274u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x118278: 0xaea20098  sw          $v0, 0x98($s5)
    ctx->pc = 0x118278u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 152), GPR_U32(ctx, 2));
    // 0x11827c: 0xc061e1a  jal         func_187868
    ctx->pc = 0x11827Cu;
    SET_GPR_U32(ctx, 31, 0x118284u);
    ctx->pc = 0x118280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11827Cu;
            // 0x118280: 0xaea2009c  sw          $v0, 0x9C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187868u;
    if (runtime->hasFunction(0x187868u)) {
        auto targetFn = runtime->lookupFunction(0x187868u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118284u; }
        if (ctx->pc != 0x118284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187868_0x187868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118284u; }
        if (ctx->pc != 0x118284u) { return; }
    }
    ctx->pc = 0x118284u;
    // 0x118284: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x118284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118288: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x118288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11828c: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x11828cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x118290: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x118290u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118294: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x118294u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x118298: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x118298u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11829c: 0xaea200d4  sw          $v0, 0xD4($s5)
    ctx->pc = 0x11829cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 212), GPR_U32(ctx, 2));
    // 0x1182a0: 0xc061e1a  jal         func_187868
    ctx->pc = 0x1182A0u;
    SET_GPR_U32(ctx, 31, 0x1182A8u);
    ctx->pc = 0x1182A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1182A0u;
            // 0x1182a4: 0xaea200d8  sw          $v0, 0xD8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 216), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187868u;
    if (runtime->hasFunction(0x187868u)) {
        auto targetFn = runtime->lookupFunction(0x187868u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1182A8u; }
        if (ctx->pc != 0x1182A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187868_0x187868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1182A8u; }
        if (ctx->pc != 0x1182A8u) { return; }
    }
    ctx->pc = 0x1182A8u;
    // 0x1182a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1182a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1182ac: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1182acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1182b0: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x1182b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1182b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1182b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1182b8: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x1182b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1182bc: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x1182bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1182c0: 0xc061e1a  jal         func_187868
    ctx->pc = 0x1182C0u;
    SET_GPR_U32(ctx, 31, 0x1182C8u);
    ctx->pc = 0x1182C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1182C0u;
            // 0x1182c4: 0xaea20054  sw          $v0, 0x54($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187868u;
    if (runtime->hasFunction(0x187868u)) {
        auto targetFn = runtime->lookupFunction(0x187868u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1182C8u; }
        if (ctx->pc != 0x1182C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187868_0x187868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1182C8u; }
        if (ctx->pc != 0x1182C8u) { return; }
    }
    ctx->pc = 0x1182C8u;
    // 0x1182c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1182c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1182cc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1182ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1182d0: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x1182d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1182d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1182d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1182d8: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x1182d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1182dc: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x1182dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1182e0: 0xc061e1a  jal         func_187868
    ctx->pc = 0x1182E0u;
    SET_GPR_U32(ctx, 31, 0x1182E8u);
    ctx->pc = 0x1182E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1182E0u;
            // 0x1182e4: 0xaea20090  sw          $v0, 0x90($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187868u;
    if (runtime->hasFunction(0x187868u)) {
        auto targetFn = runtime->lookupFunction(0x187868u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1182E8u; }
        if (ctx->pc != 0x1182E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187868_0x187868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1182E8u; }
        if (ctx->pc != 0x1182E8u) { return; }
    }
    ctx->pc = 0x1182E8u;
    // 0x1182e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1182e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1182ec: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1182ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1182f0: 0x24060b2c  addiu       $a2, $zero, 0xB2C
    ctx->pc = 0x1182f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2860));
    // 0x1182f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1182f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1182f8: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x1182f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1182fc: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x1182fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x118300: 0xc061e1a  jal         func_187868
    ctx->pc = 0x118300u;
    SET_GPR_U32(ctx, 31, 0x118308u);
    ctx->pc = 0x118304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118300u;
            // 0x118304: 0xaea200cc  sw          $v0, 0xCC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187868u;
    if (runtime->hasFunction(0x187868u)) {
        auto targetFn = runtime->lookupFunction(0x187868u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118308u; }
        if (ctx->pc != 0x118308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187868_0x187868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118308u; }
        if (ctx->pc != 0x118308u) { return; }
    }
    ctx->pc = 0x118308u;
    // 0x118308: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x118308u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11830c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x11830cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x118310: 0x2406007c  addiu       $a2, $zero, 0x7C
    ctx->pc = 0x118310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    // 0x118314: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x118314u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118318: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x118318u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11831c: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x11831cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x118320: 0xc061e1a  jal         func_187868
    ctx->pc = 0x118320u;
    SET_GPR_U32(ctx, 31, 0x118328u);
    ctx->pc = 0x118324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118320u;
            // 0x118324: 0xaea20078  sw          $v0, 0x78($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187868u;
    if (runtime->hasFunction(0x187868u)) {
        auto targetFn = runtime->lookupFunction(0x187868u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118328u; }
        if (ctx->pc != 0x118328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187868_0x187868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118328u; }
        if (ctx->pc != 0x118328u) { return; }
    }
    ctx->pc = 0x118328u;
    // 0x118328: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x118328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11832c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x11832cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x118330: 0x24060044  addiu       $a2, $zero, 0x44
    ctx->pc = 0x118330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x118334: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x118334u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118338: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x118338u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11833c: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x11833cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x118340: 0xc061e1a  jal         func_187868
    ctx->pc = 0x118340u;
    SET_GPR_U32(ctx, 31, 0x118348u);
    ctx->pc = 0x118344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118340u;
            // 0x118344: 0xaea200b4  sw          $v0, 0xB4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 180), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187868u;
    if (runtime->hasFunction(0x187868u)) {
        auto targetFn = runtime->lookupFunction(0x187868u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118348u; }
        if (ctx->pc != 0x118348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187868_0x187868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118348u; }
        if (ctx->pc != 0x118348u) { return; }
    }
    ctx->pc = 0x118348u;
    // 0x118348: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x118348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11834c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x11834cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x118350: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x118350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x118354: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x118354u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118358: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x118358u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11835c: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x11835cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x118360: 0xc061e1a  jal         func_187868
    ctx->pc = 0x118360u;
    SET_GPR_U32(ctx, 31, 0x118368u);
    ctx->pc = 0x118364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118360u;
            // 0x118364: 0xaea200f0  sw          $v0, 0xF0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 240), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187868u;
    if (runtime->hasFunction(0x187868u)) {
        auto targetFn = runtime->lookupFunction(0x187868u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118368u; }
        if (ctx->pc != 0x118368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187868_0x187868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118368u; }
        if (ctx->pc != 0x118368u) { return; }
    }
    ctx->pc = 0x118368u;
    // 0x118368: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x118368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11836c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x11836cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x118370: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x118370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x118374: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x118374u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118378: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x118378u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11837c: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x11837cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x118380: 0xc061e1a  jal         func_187868
    ctx->pc = 0x118380u;
    SET_GPR_U32(ctx, 31, 0x118388u);
    ctx->pc = 0x118384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118380u;
            // 0x118384: 0xaea20068  sw          $v0, 0x68($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 104), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187868u;
    if (runtime->hasFunction(0x187868u)) {
        auto targetFn = runtime->lookupFunction(0x187868u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118388u; }
        if (ctx->pc != 0x118388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187868_0x187868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118388u; }
        if (ctx->pc != 0x118388u) { return; }
    }
    ctx->pc = 0x118388u;
    // 0x118388: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x118388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11838c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x11838cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x118390: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x118390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x118394: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x118394u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118398: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x118398u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11839c: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x11839cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1183a0: 0xc061e1a  jal         func_187868
    ctx->pc = 0x1183A0u;
    SET_GPR_U32(ctx, 31, 0x1183A8u);
    ctx->pc = 0x1183A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1183A0u;
            // 0x1183a4: 0xaea200a4  sw          $v0, 0xA4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 164), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187868u;
    if (runtime->hasFunction(0x187868u)) {
        auto targetFn = runtime->lookupFunction(0x187868u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1183A8u; }
        if (ctx->pc != 0x1183A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187868_0x187868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1183A8u; }
        if (ctx->pc != 0x1183A8u) { return; }
    }
    ctx->pc = 0x1183A8u;
    // 0x1183a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1183a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1183ac: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1183acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1183b0: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x1183b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x1183b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1183b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1183b8: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x1183b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1183bc: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x1183bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1183c0: 0xc061e1a  jal         func_187868
    ctx->pc = 0x1183C0u;
    SET_GPR_U32(ctx, 31, 0x1183C8u);
    ctx->pc = 0x1183C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1183C0u;
            // 0x1183c4: 0xaea200e0  sw          $v0, 0xE0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 224), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187868u;
    if (runtime->hasFunction(0x187868u)) {
        auto targetFn = runtime->lookupFunction(0x187868u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1183C8u; }
        if (ctx->pc != 0x1183C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187868_0x187868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1183C8u; }
        if (ctx->pc != 0x1183C8u) { return; }
    }
    ctx->pc = 0x1183C8u;
    // 0x1183c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1183c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1183cc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1183ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1183d0: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x1183d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x1183d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1183d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1183d8: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x1183d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1183dc: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x1183dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1183e0: 0xc061e1a  jal         func_187868
    ctx->pc = 0x1183E0u;
    SET_GPR_U32(ctx, 31, 0x1183E8u);
    ctx->pc = 0x1183E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1183E0u;
            // 0x1183e4: 0xaea20070  sw          $v0, 0x70($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187868u;
    if (runtime->hasFunction(0x187868u)) {
        auto targetFn = runtime->lookupFunction(0x187868u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1183E8u; }
        if (ctx->pc != 0x1183E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187868_0x187868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1183E8u; }
        if (ctx->pc != 0x1183E8u) { return; }
    }
    ctx->pc = 0x1183E8u;
    // 0x1183e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1183e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1183ec: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1183ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1183f0: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x1183f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1183f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1183f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1183f8: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x1183f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1183fc: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x1183fcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x118400: 0xc061e1a  jal         func_187868
    ctx->pc = 0x118400u;
    SET_GPR_U32(ctx, 31, 0x118408u);
    ctx->pc = 0x118404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118400u;
            // 0x118404: 0xaea200ac  sw          $v0, 0xAC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 172), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187868u;
    if (runtime->hasFunction(0x187868u)) {
        auto targetFn = runtime->lookupFunction(0x187868u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118408u; }
        if (ctx->pc != 0x118408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187868_0x187868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118408u; }
        if (ctx->pc != 0x118408u) { return; }
    }
    ctx->pc = 0x118408u;
    // 0x118408: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x118408u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11840c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x11840cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x118410: 0x2406006c  addiu       $a2, $zero, 0x6C
    ctx->pc = 0x118410u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x118414: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x118414u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118418: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x118418u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11841c: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x11841cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x118420: 0xc061e1a  jal         func_187868
    ctx->pc = 0x118420u;
    SET_GPR_U32(ctx, 31, 0x118428u);
    ctx->pc = 0x118424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118420u;
            // 0x118424: 0xaea200e8  sw          $v0, 0xE8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 232), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187868u;
    if (runtime->hasFunction(0x187868u)) {
        auto targetFn = runtime->lookupFunction(0x187868u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118428u; }
        if (ctx->pc != 0x118428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187868_0x187868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118428u; }
        if (ctx->pc != 0x118428u) { return; }
    }
    ctx->pc = 0x118428u;
    // 0x118428: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x118428u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11842c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x11842cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x118430: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x118430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x118434: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x118434u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118438: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x118438u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11843c: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x11843cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x118440: 0xc061e1a  jal         func_187868
    ctx->pc = 0x118440u;
    SET_GPR_U32(ctx, 31, 0x118448u);
    ctx->pc = 0x118444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118440u;
            // 0x118444: 0xaea20074  sw          $v0, 0x74($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 116), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187868u;
    if (runtime->hasFunction(0x187868u)) {
        auto targetFn = runtime->lookupFunction(0x187868u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118448u; }
        if (ctx->pc != 0x118448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187868_0x187868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118448u; }
        if (ctx->pc != 0x118448u) { return; }
    }
    ctx->pc = 0x118448u;
    // 0x118448: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x118448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11844c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x11844cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x118450: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x118450u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x118454: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x118454u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118458: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x118458u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11845c: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x11845cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x118460: 0xc061e1a  jal         func_187868
    ctx->pc = 0x118460u;
    SET_GPR_U32(ctx, 31, 0x118468u);
    ctx->pc = 0x118464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118460u;
            // 0x118464: 0xaea200b0  sw          $v0, 0xB0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187868u;
    if (runtime->hasFunction(0x187868u)) {
        auto targetFn = runtime->lookupFunction(0x187868u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118468u; }
        if (ctx->pc != 0x118468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187868_0x187868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118468u; }
        if (ctx->pc != 0x118468u) { return; }
    }
    ctx->pc = 0x118468u;
    // 0x118468: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x118468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11846c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x11846cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x118470: 0x24060070  addiu       $a2, $zero, 0x70
    ctx->pc = 0x118470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x118474: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x118474u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118478: 0x24080008  addiu       $t0, $zero, 0x8
    ctx->pc = 0x118478u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x11847c: 0x24090004  addiu       $t1, $zero, 0x4
    ctx->pc = 0x11847cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x118480: 0xc061e1a  jal         func_187868
    ctx->pc = 0x118480u;
    SET_GPR_U32(ctx, 31, 0x118488u);
    ctx->pc = 0x118484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118480u;
            // 0x118484: 0xaea200ec  sw          $v0, 0xEC($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 236), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187868u;
    if (runtime->hasFunction(0x187868u)) {
        auto targetFn = runtime->lookupFunction(0x187868u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118488u; }
        if (ctx->pc != 0x118488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187868_0x187868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118488u; }
        if (ctx->pc != 0x118488u) { return; }
    }
    ctx->pc = 0x118488u;
    // 0x118488: 0x8ea30090  lw          $v1, 0x90($s5)
    ctx->pc = 0x118488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 144)));
    // 0x11848c: 0x8ea500cc  lw          $a1, 0xCC($s5)
    ctx->pc = 0x11848cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 204)));
    // 0x118490: 0x8ea60060  lw          $a2, 0x60($s5)
    ctx->pc = 0x118490u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 96)));
    // 0x118494: 0x8ea7009c  lw          $a3, 0x9C($s5)
    ctx->pc = 0x118494u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 156)));
    // 0x118498: 0x8ea800d8  lw          $t0, 0xD8($s5)
    ctx->pc = 0x118498u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 216)));
    // 0x11849c: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x11849cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1184a0: 0xaea2007c  sw          $v0, 0x7C($s5)
    ctx->pc = 0x1184a0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 124), GPR_U32(ctx, 2));
    // 0x1184a4: 0xaea300b8  sw          $v1, 0xB8($s5)
    ctx->pc = 0x1184a4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 184), GPR_U32(ctx, 3));
    // 0x1184a8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1184a8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1184ac: 0xaea500f4  sw          $a1, 0xF4($s5)
    ctx->pc = 0x1184acu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 244), GPR_U32(ctx, 5));
    // 0x1184b0: 0xaea6006c  sw          $a2, 0x6C($s5)
    ctx->pc = 0x1184b0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 108), GPR_U32(ctx, 6));
    // 0x1184b4: 0xaea700a8  sw          $a3, 0xA8($s5)
    ctx->pc = 0x1184b4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 168), GPR_U32(ctx, 7));
    // 0x1184b8: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x1184B8u;
    SET_GPR_U32(ctx, 31, 0x1184C0u);
    ctx->pc = 0x1184BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1184B8u;
            // 0x1184bc: 0xaea800e4  sw          $t0, 0xE4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 228), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1184C0u; }
        if (ctx->pc != 0x1184C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1184C0u; }
        if (ctx->pc != 0x1184C0u) { return; }
    }
    ctx->pc = 0x1184C0u;
    // 0x1184c0: 0x8e720004  lw          $s2, 0x4($s3)
    ctx->pc = 0x1184c0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1184c4: 0xae620014  sw          $v0, 0x14($s3)
    ctx->pc = 0x1184c4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 2));
    // 0x1184c8: 0x292102b  sltu        $v0, $s4, $s2
    ctx->pc = 0x1184c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x1184cc: 0x10400077  beqz        $v0, . + 4 + (0x77 << 2)
    ctx->pc = 0x1184CCu;
    {
        const bool branch_taken_0x1184cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1184D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1184CCu;
            // 0x1184d0: 0x8eb10100  lw          $s1, 0x100($s5) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1184cc) {
            ctx->pc = 0x1186ACu;
            goto label_1186ac;
        }
    }
    ctx->pc = 0x1184D4u;
    // 0x1184d4: 0x0  nop
    ctx->pc = 0x1184d4u;
    // NOP
label_1184d8:
    // 0x1184d8: 0x8e68000c  lw          $t0, 0xC($s3)
    ctx->pc = 0x1184d8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1184dc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1184dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1184e0: 0x8e690010  lw          $t1, 0x10($s3)
    ctx->pc = 0x1184e0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1184e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1184e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1184e8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1184e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1184ec: 0xc061e1a  jal         func_187868
    ctx->pc = 0x1184ECu;
    SET_GPR_U32(ctx, 31, 0x1184F4u);
    ctx->pc = 0x1184F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1184ECu;
            // 0x1184f0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x187868u;
    if (runtime->hasFunction(0x187868u)) {
        auto targetFn = runtime->lookupFunction(0x187868u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1184F4u; }
        if (ctx->pc != 0x1184F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00187868_0x187868(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1184F4u; }
        if (ctx->pc != 0x1184F4u) { return; }
    }
    ctx->pc = 0x1184F4u;
    // 0x1184f4: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x1184f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x1184f8: 0x161880  sll         $v1, $s6, 2
    ctx->pc = 0x1184f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 22), 2));
    // 0x1184fc: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x1184fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x118500: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x118500u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x118504: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x118504u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x118508: 0x2d2202b  sltu        $a0, $s6, $s2
    ctx->pc = 0x118508u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x11850c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x11850cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x118510: 0x1480fff1  bnez        $a0, . + 4 + (-0xF << 2)
    ctx->pc = 0x118510u;
    {
        const bool branch_taken_0x118510 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x118514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118510u;
            // 0x118514: 0x2258821  addu        $s1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118510) {
            ctx->pc = 0x1184D8u;
            runtime->cooperativeGuestYield();
            goto label_1184d8;
        }
    }
    ctx->pc = 0x118518u;
    // 0x118518: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x118518u;
    {
        const bool branch_taken_0x118518 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11851Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118518u;
            // 0x11851c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118518) {
            ctx->pc = 0x1186B0u;
            goto label_1186b0;
        }
    }
    ctx->pc = 0x118520u;
label_118520:
    // 0x118520: 0x26b10100  addiu       $s1, $s5, 0x100
    ctx->pc = 0x118520u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 256));
    // 0x118524: 0x3a0b02d  daddu       $s6, $sp, $zero
    ctx->pc = 0x118524u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118528: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x118528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x11852c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11852cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x118530: 0x8c480008  lw          $t0, 0x8($v0)
    ctx->pc = 0x118530u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x118534: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x118534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x118538: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x118538u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x11853c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11853cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x118540: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x118540u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x118544: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x118544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x118548: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x118548u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x11854c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11854cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x118550: 0x8c4b0008  lw          $t3, 0x8($v0)
    ctx->pc = 0x118550u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x118554: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x118554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x118558: 0x8c6a0008  lw          $t2, 0x8($v1)
    ctx->pc = 0x118558u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x11855c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x11855cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x118560: 0x8c490008  lw          $t1, 0x8($v0)
    ctx->pc = 0x118560u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x118564: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x118564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x118568: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x118568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x11856c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x11856cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x118570: 0x8c530008  lw          $s3, 0x8($v0)
    ctx->pc = 0x118570u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x118574: 0x8c940008  lw          $s4, 0x8($a0)
    ctx->pc = 0x118574u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x118578: 0xaea800fc  sw          $t0, 0xFC($s5)
    ctx->pc = 0x118578u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 252), GPR_U32(ctx, 8));
    // 0x11857c: 0xaea70048  sw          $a3, 0x48($s5)
    ctx->pc = 0x11857cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 72), GPR_U32(ctx, 7));
    // 0x118580: 0xaea60084  sw          $a2, 0x84($s5)
    ctx->pc = 0x118580u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 6));
    // 0x118584: 0xaea500c0  sw          $a1, 0xC0($s5)
    ctx->pc = 0x118584u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 192), GPR_U32(ctx, 5));
    // 0x118588: 0xaea30054  sw          $v1, 0x54($s5)
    ctx->pc = 0x118588u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 3));
    // 0x11858c: 0xaeab0060  sw          $t3, 0x60($s5)
    ctx->pc = 0x11858cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 96), GPR_U32(ctx, 11));
    // 0x118590: 0xaeab005c  sw          $t3, 0x5C($s5)
    ctx->pc = 0x118590u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 92), GPR_U32(ctx, 11));
    // 0x118594: 0xaeaa009c  sw          $t2, 0x9C($s5)
    ctx->pc = 0x118594u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 156), GPR_U32(ctx, 10));
    // 0x118598: 0xaeaa0098  sw          $t2, 0x98($s5)
    ctx->pc = 0x118598u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 152), GPR_U32(ctx, 10));
    // 0x11859c: 0xaea900d8  sw          $t1, 0xD8($s5)
    ctx->pc = 0x11859cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 216), GPR_U32(ctx, 9));
    // 0x1185a0: 0xaea900d4  sw          $t1, 0xD4($s5)
    ctx->pc = 0x1185a0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 212), GPR_U32(ctx, 9));
    // 0x1185a4: 0xaeb30090  sw          $s3, 0x90($s5)
    ctx->pc = 0x1185a4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 144), GPR_U32(ctx, 19));
    // 0x1185a8: 0xaeb400cc  sw          $s4, 0xCC($s5)
    ctx->pc = 0x1185a8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 204), GPR_U32(ctx, 20));
    // 0x1185ac: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1185acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1185b0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1185b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1185b4: 0x8c520008  lw          $s2, 0x8($v0)
    ctx->pc = 0x1185b4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1185b8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1185b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1185bc: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x1185bcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1185c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1185c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1185c4: 0x8c4f0008  lw          $t7, 0x8($v0)
    ctx->pc = 0x1185c4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1185c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1185c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1185cc: 0x8c6e0008  lw          $t6, 0x8($v1)
    ctx->pc = 0x1185ccu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1185d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1185d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1185d4: 0x8c4d0008  lw          $t5, 0x8($v0)
    ctx->pc = 0x1185d4u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1185d8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1185d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1185dc: 0x8c6c0008  lw          $t4, 0x8($v1)
    ctx->pc = 0x1185dcu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1185e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1185e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1185e4: 0x8c480008  lw          $t0, 0x8($v0)
    ctx->pc = 0x1185e4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1185e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1185e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1185ec: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x1185ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x1185f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1185f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1185f4: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x1185f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1185f8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1185f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1185fc: 0x8c650008  lw          $a1, 0x8($v1)
    ctx->pc = 0x1185fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x118600: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x118600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x118604: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x118604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x118608: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x118608u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x11860c: 0xaea700ac  sw          $a3, 0xAC($s5)
    ctx->pc = 0x11860cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 172), GPR_U32(ctx, 7));
    // 0x118610: 0xaeb20078  sw          $s2, 0x78($s5)
    ctx->pc = 0x118610u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 120), GPR_U32(ctx, 18));
    // 0x118614: 0xaeb000b4  sw          $s0, 0xB4($s5)
    ctx->pc = 0x118614u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 180), GPR_U32(ctx, 16));
    // 0x118618: 0xaeaf00f0  sw          $t7, 0xF0($s5)
    ctx->pc = 0x118618u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 240), GPR_U32(ctx, 15));
    // 0x11861c: 0xaeae0068  sw          $t6, 0x68($s5)
    ctx->pc = 0x11861cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 104), GPR_U32(ctx, 14));
    // 0x118620: 0xaead00a4  sw          $t5, 0xA4($s5)
    ctx->pc = 0x118620u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 164), GPR_U32(ctx, 13));
    // 0x118624: 0xaeac00e0  sw          $t4, 0xE0($s5)
    ctx->pc = 0x118624u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 224), GPR_U32(ctx, 12));
    // 0x118628: 0xaea80070  sw          $t0, 0x70($s5)
    ctx->pc = 0x118628u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 112), GPR_U32(ctx, 8));
    // 0x11862c: 0xaea600e8  sw          $a2, 0xE8($s5)
    ctx->pc = 0x11862cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 232), GPR_U32(ctx, 6));
    // 0x118630: 0xaea50074  sw          $a1, 0x74($s5)
    ctx->pc = 0x118630u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 116), GPR_U32(ctx, 5));
    // 0x118634: 0xaea200b0  sw          $v0, 0xB0($s5)
    ctx->pc = 0x118634u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 176), GPR_U32(ctx, 2));
    // 0x118638: 0xaea400ec  sw          $a0, 0xEC($s5)
    ctx->pc = 0x118638u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 236), GPR_U32(ctx, 4));
    // 0x11863c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x11863cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x118640: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x118640u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x118644: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x118644u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x118648: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x118648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x11864c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x11864cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x118650: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x118650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x118654: 0xaea2007c  sw          $v0, 0x7C($s5)
    ctx->pc = 0x118654u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 124), GPR_U32(ctx, 2));
    // 0x118658: 0xaeb300b8  sw          $s3, 0xB8($s5)
    ctx->pc = 0x118658u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 184), GPR_U32(ctx, 19));
    // 0x11865c: 0xaeb400f4  sw          $s4, 0xF4($s5)
    ctx->pc = 0x11865cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 244), GPR_U32(ctx, 20));
    // 0x118660: 0xaeab006c  sw          $t3, 0x6C($s5)
    ctx->pc = 0x118660u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 108), GPR_U32(ctx, 11));
    // 0x118664: 0xaeaa00a8  sw          $t2, 0xA8($s5)
    ctx->pc = 0x118664u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 168), GPR_U32(ctx, 10));
    // 0x118668: 0xc04f5a2  jal         func_13D688
    ctx->pc = 0x118668u;
    SET_GPR_U32(ctx, 31, 0x118670u);
    ctx->pc = 0x11866Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118668u;
            // 0x11866c: 0xaea900e4  sw          $t1, 0xE4($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 228), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13D688u;
    if (runtime->hasFunction(0x13D688u)) {
        auto targetFn = runtime->lookupFunction(0x13D688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118670u; }
        if (ctx->pc != 0x118670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D688_0x13d688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118670u; }
        if (ctx->pc != 0x118670u) { return; }
    }
    ctx->pc = 0x118670u;
    // 0x118670: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x118670u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x118674: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x118674u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118678: 0x10e0000c  beqz        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x118678u;
    {
        const bool branch_taken_0x118678 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x11867Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118678u;
            // 0x11867c: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118678) {
            ctx->pc = 0x1186ACu;
            goto label_1186ac;
        }
    }
    ctx->pc = 0x118680u;
    // 0x118680: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x118680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x118684: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x118684u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_118688:
    // 0x118688: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x118688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x11868c: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x11868cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x118690: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x118690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x118694: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x118694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x118698: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x118698u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x11869c: 0xa7102b  sltu        $v0, $a1, $a3
    ctx->pc = 0x11869cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x1186a0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1186A0u;
    {
        const bool branch_taken_0x1186a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1186A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1186A0u;
            // 0x1186a4: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1186a0) {
            ctx->pc = 0x118688u;
            runtime->cooperativeGuestYield();
            goto label_118688;
        }
    }
    ctx->pc = 0x1186A8u;
    // 0x1186a8: 0xaec40004  sw          $a0, 0x4($s6)
    ctx->pc = 0x1186a8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 4));
label_1186ac:
    // 0x1186ac: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1186acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1186b0:
    // 0x1186b0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1186b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1186b4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1186b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1186b8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1186b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1186bc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1186bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1186c0: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1186c0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1186c4: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x1186c4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1186c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1186c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1186cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1186CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1186D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1186CCu;
            // 0x1186d0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x118140u: goto label_118140;
            case 0x118154u: goto label_118154;
            case 0x118168u: goto label_118168;
            case 0x1184D8u: goto label_1184d8;
            case 0x118520u: goto label_118520;
            case 0x118688u: goto label_118688;
            case 0x1186ACu: goto label_1186ac;
            case 0x1186B0u: goto label_1186b0;
            case 0x118710u: goto label_118710;
            case 0x118738u: goto label_118738;
            case 0x11875Cu: goto label_11875c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1186D4u;
    // 0x1186d4: 0x0  nop
    ctx->pc = 0x1186d4u;
    // NOP
    // 0x1186d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1186d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1186dc: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x1186dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x1186e0: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1186e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1186e4: 0x2442fb30  addiu       $v0, $v0, -0x4D0
    ctx->pc = 0x1186e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966064));
    // 0x1186e8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1186e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1186ec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1186ecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1186f0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1186f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1186f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1186f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1186f8: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x1186f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x1186fc: 0x8e240114  lw          $a0, 0x114($s1)
    ctx->pc = 0x1186fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 276)));
    // 0x118700: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x118700u;
    {
        const bool branch_taken_0x118700 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x118704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118700u;
            // 0x118704: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118700) {
            ctx->pc = 0x118710u;
            goto label_118710;
        }
    }
    ctx->pc = 0x118708u;
    // 0x118708: 0xc04f5b0  jal         func_13D6C0
    ctx->pc = 0x118708u;
    SET_GPR_U32(ctx, 31, 0x118710u);
    ctx->pc = 0x13D6C0u;
    if (runtime->hasFunction(0x13D6C0u)) {
        auto targetFn = runtime->lookupFunction(0x13D6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118710u; }
        if (ctx->pc != 0x118710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013D6C0_0x13d6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118710u; }
        if (ctx->pc != 0x118710u) { return; }
    }
    ctx->pc = 0x118710u;
label_118710:
    // 0x118710: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x118710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x118714: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x118714u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x118718: 0x2442fc10  addiu       $v0, $v0, -0x3F0
    ctx->pc = 0x118718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966288));
    // 0x11871c: 0x2630003c  addiu       $s0, $s1, 0x3C
    ctx->pc = 0x11871cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x118720: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x118720u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x118724: 0xafb00000  sw          $s0, 0x0($sp)
    ctx->pc = 0x118724u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 16));
    // 0x118728: 0x1070000c  beq         $v1, $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x118728u;
    {
        const bool branch_taken_0x118728 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x11872Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118728u;
            // 0x11872c: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118728) {
            ctx->pc = 0x11875Cu;
            goto label_11875c;
        }
    }
    ctx->pc = 0x118730u;
    // 0x118730: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x118730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x118734: 0x0  nop
    ctx->pc = 0x118734u;
    // NOP
label_118738:
    // 0x118738: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x118738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x11873c: 0x8c447910  lw          $a0, 0x7910($v0)
    ctx->pc = 0x11873cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 30992)));
    // 0x118740: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x118740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x118744: 0xc04f6c6  jal         func_13DB18
    ctx->pc = 0x118744u;
    SET_GPR_U32(ctx, 31, 0x11874Cu);
    ctx->pc = 0x118748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118744u;
            // 0x118748: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB18u;
    if (runtime->hasFunction(0x13DB18u)) {
        auto targetFn = runtime->lookupFunction(0x13DB18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11874Cu; }
        if (ctx->pc != 0x11874Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13db18_0x13db28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11874Cu; }
        if (ctx->pc != 0x11874Cu) { return; }
    }
    ctx->pc = 0x11874Cu;
    // 0x11874c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x11874cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x118750: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x118750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x118754: 0x1462fff8  bne         $v1, $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x118754u;
    {
        const bool branch_taken_0x118754 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x118758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118754u;
            // 0x118758: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118754) {
            ctx->pc = 0x118738u;
            runtime->cooperativeGuestYield();
            goto label_118738;
        }
    }
    ctx->pc = 0x11875Cu;
label_11875c:
    // 0x11875c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x11875cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x118760: 0xae100004  sw          $s0, 0x4($s0)
    ctx->pc = 0x118760u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 16));
    // 0x118764: 0x24420978  addiu       $v0, $v0, 0x978
    ctx->pc = 0x118764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2424));
    // 0x118768: 0xae100000  sw          $s0, 0x0($s0)
    ctx->pc = 0x118768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 16));
    // 0x11876c: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x11876cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
    // 0x118770: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x118770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118774: 0xc08e218  jal         func_238860
    ctx->pc = 0x118774u;
    SET_GPR_U32(ctx, 31, 0x11877Cu);
    ctx->pc = 0x118778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118774u;
            // 0x118778: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238860u;
    if (runtime->hasFunction(0x238860u)) {
        auto targetFn = runtime->lookupFunction(0x238860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11877Cu; }
        if (ctx->pc != 0x11877Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238860_0x238860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11877Cu; }
        if (ctx->pc != 0x11877Cu) { return; }
    }
    ctx->pc = 0x11877Cu;
    // 0x11877c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x11877cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x118780: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x118780u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x118784: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x118784u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118788: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x118788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11878c: 0x3e00008  jr          $ra
    ctx->pc = 0x11878Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11878Cu;
            // 0x118790: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x118140u: goto label_118140;
            case 0x118154u: goto label_118154;
            case 0x118168u: goto label_118168;
            case 0x1184D8u: goto label_1184d8;
            case 0x118520u: goto label_118520;
            case 0x118688u: goto label_118688;
            case 0x1186ACu: goto label_1186ac;
            case 0x1186B0u: goto label_1186b0;
            case 0x118710u: goto label_118710;
            case 0x118738u: goto label_118738;
            case 0x11875Cu: goto label_11875c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x118794u;
    // 0x118794: 0x0  nop
    ctx->pc = 0x118794u;
    // NOP
}
