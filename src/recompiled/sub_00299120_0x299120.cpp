#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00299120
// Address: 0x299120 - 0x299230
void sub_00299120_0x299120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00299120_0x299120");
#endif

    ctx->pc = 0x299120u;

    // 0x299120: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x299120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x299124: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x299124u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x299128: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x299128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x29912c: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x29912cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x299130: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x299130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x299134: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x299134u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299138: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x299138u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x29913c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x29913Cu;
    {
        const bool branch_taken_0x29913c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x299140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29913Cu;
            // 0x299140: 0x24516d40  addiu       $s1, $v0, 0x6D40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 27968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29913c) {
            ctx->pc = 0x29916Cu;
            goto label_29916c;
        }
    }
    ctx->pc = 0x299144u;
    // 0x299144: 0x2603fff5  addiu       $v1, $s0, -0xB
    ctx->pc = 0x299144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967285));
label_299148:
    // 0x299148: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x299148u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x29914c: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x29914cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x299150: 0x0  nop
    ctx->pc = 0x299150u;
    // NOP
    // 0x299154: 0x0  nop
    ctx->pc = 0x299154u;
    // NOP
    // 0x299158: 0x0  nop
    ctx->pc = 0x299158u;
    // NOP
    // 0x29915c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x29915Cu;
    {
        const bool branch_taken_0x29915c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29915c) {
            ctx->pc = 0x299148u;
            runtime->cooperativeGuestYield();
            goto label_299148;
        }
    }
    ctx->pc = 0x299164u;
    // 0x299164: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x299164u;
    {
        const bool branch_taken_0x299164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299164u;
            // 0x299168: 0x831023  subu        $v0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299164) {
            ctx->pc = 0x299174u;
            goto label_299174;
        }
    }
    ctx->pc = 0x29916Cu;
label_29916c:
    // 0x29916c: 0x2603fff5  addiu       $v1, $s0, -0xB
    ctx->pc = 0x29916cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967285));
    // 0x299170: 0x831023  subu        $v0, $a0, $v1
    ctx->pc = 0x299170u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_299174:
    // 0x299174: 0x2c420051  sltiu       $v0, $v0, 0x51
    ctx->pc = 0x299174u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)81) ? 1 : 0);
    // 0x299178: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x299178u;
    {
        const bool branch_taken_0x299178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29917Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299178u;
            // 0x29917c: 0x3c04002c  lui         $a0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x299178) {
            ctx->pc = 0x299194u;
            goto label_299194;
        }
    }
    ctx->pc = 0x299180u;
    // 0x299180: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x299180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299184: 0xc0a58f0  jal         func_2963C0
    ctx->pc = 0x299184u;
    SET_GPR_U32(ctx, 31, 0x29918Cu);
    ctx->pc = 0x299188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299184u;
            // 0x299188: 0x24846d50  addiu       $a0, $a0, 0x6D50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27984));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2963C0u;
    if (runtime->hasFunction(0x2963C0u)) {
        auto targetFn = runtime->lookupFunction(0x2963C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29918Cu; }
        if (ctx->pc != 0x29918Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002963C0_0x2963c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29918Cu; }
        if (ctx->pc != 0x29918Cu) { return; }
    }
    ctx->pc = 0x29918Cu;
    // 0x29918c: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x29918Cu;
    {
        const bool branch_taken_0x29918c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x299190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29918Cu;
            // 0x299190: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29918c) {
            ctx->pc = 0x29921Cu;
            goto label_29921c;
        }
    }
    ctx->pc = 0x299194u;
label_299194:
    // 0x299194: 0xc0a5b12  jal         func_296C48
    ctx->pc = 0x299194u;
    SET_GPR_U32(ctx, 31, 0x29919Cu);
    ctx->pc = 0x299198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299194u;
            // 0x299198: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296C48u;
    if (runtime->hasFunction(0x296C48u)) {
        auto targetFn = runtime->lookupFunction(0x296C48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29919Cu; }
        if (ctx->pc != 0x29919Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_296c48_0x296de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29919Cu; }
        if (ctx->pc != 0x29919Cu) { return; }
    }
    ctx->pc = 0x29919Cu;
    // 0x29919c: 0xc0a5b7a  jal         func_296DE8
    ctx->pc = 0x29919Cu;
    SET_GPR_U32(ctx, 31, 0x2991A4u);
    ctx->pc = 0x296DE8u;
    if (runtime->hasFunction(0x296DE8u)) {
        auto targetFn = runtime->lookupFunction(0x296DE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2991A4u; }
        if (ctx->pc != 0x2991A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00296DE8_0x296de8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2991A4u; }
        if (ctx->pc != 0x2991A4u) { return; }
    }
    ctx->pc = 0x2991A4u;
    // 0x2991a4: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x2991a4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2991a8: 0x3a0182d  daddu       $v1, $sp, $zero
    ctx->pc = 0x2991a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2991ac: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x2991ACu;
    {
        const bool branch_taken_0x2991ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2991B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2991ACu;
            // 0x2991b0: 0x92240000  lbu         $a0, 0x0($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2991ac) {
            ctx->pc = 0x2991DCu;
            goto label_2991dc;
        }
    }
    ctx->pc = 0x2991B4u;
    // 0x2991b4: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x2991b4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2991b8:
    // 0x2991b8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2991b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2991bc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2991bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2991c0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2991c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2991c4: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x2991c4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2991c8: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x2991c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2991cc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2991CCu;
    {
        const bool branch_taken_0x2991cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2991cc) {
            ctx->pc = 0x2991B8u;
            runtime->cooperativeGuestYield();
            goto label_2991b8;
        }
    }
    ctx->pc = 0x2991D4u;
    // 0x2991d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2991D4u;
    {
        const bool branch_taken_0x2991d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2991D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2991D4u;
            // 0x2991d8: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2991d4) {
            ctx->pc = 0x2991E4u;
            goto label_2991e4;
        }
    }
    ctx->pc = 0x2991DCu;
label_2991dc:
    // 0x2991dc: 0x92050000  lbu         $a1, 0x0($s0)
    ctx->pc = 0x2991dcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2991e0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x2991e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2991e4:
    // 0x2991e4: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2991E4u;
    {
        const bool branch_taken_0x2991e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2991e4) {
            ctx->pc = 0x2991E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2991E4u;
            // 0x2991e8: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x299210u;
            goto label_299210;
        }
    }
    ctx->pc = 0x2991ECu;
    // 0x2991ec: 0x0  nop
    ctx->pc = 0x2991ecu;
    // NOP
label_2991f0:
    // 0x2991f0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2991f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x2991f4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2991f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2991f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2991f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2991fc: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x2991fcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x299200: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x299200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299204: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x299204u;
    {
        const bool branch_taken_0x299204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x299204) {
            ctx->pc = 0x2991F0u;
            runtime->cooperativeGuestYield();
            goto label_2991f0;
        }
    }
    ctx->pc = 0x29920Cu;
    // 0x29920c: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x29920cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_299210:
    // 0x299210: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x299210u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x299214: 0xc0a63de  jal         func_298F78
    ctx->pc = 0x299214u;
    SET_GPR_U32(ctx, 31, 0x29921Cu);
    ctx->pc = 0x299218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x299214u;
            // 0x299218: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x298F78u;
    if (runtime->hasFunction(0x298F78u)) {
        auto targetFn = runtime->lookupFunction(0x298F78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29921Cu; }
        if (ctx->pc != 0x29921Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_298f78_0x2990d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29921Cu; }
        if (ctx->pc != 0x29921Cu) { return; }
    }
    ctx->pc = 0x29921Cu;
label_29921c:
    // 0x29921c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x29921cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x299220: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x299220u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x299224: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x299224u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x299228: 0x3e00008  jr          $ra
    ctx->pc = 0x299228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29922Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x299228u;
            // 0x29922c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x299148u: goto label_299148;
            case 0x29916Cu: goto label_29916c;
            case 0x299174u: goto label_299174;
            case 0x299194u: goto label_299194;
            case 0x2991B8u: goto label_2991b8;
            case 0x2991DCu: goto label_2991dc;
            case 0x2991E4u: goto label_2991e4;
            case 0x2991F0u: goto label_2991f0;
            case 0x299210u: goto label_299210;
            case 0x29921Cu: goto label_29921c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x299230u;
}
