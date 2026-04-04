#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_20a0d8
// Address: 0x20a0d8 - 0x20a250
void entry_20a0d8_0x20a250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_20a0d8_0x20a250");
#endif

    ctx->pc = 0x20a0d8u;

    // 0x20a0d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20a0d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a0dc: 0x10c70029  beq         $a2, $a3, . + 4 + (0x29 << 2)
    ctx->pc = 0x20A0DCu;
    {
        const bool branch_taken_0x20a0dc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 7));
        ctx->pc = 0x20A0E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A0DCu;
            // 0x20a0e0: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a0dc) {
            ctx->pc = 0x20A184u;
            goto label_20a184;
        }
    }
    ctx->pc = 0x20A0E4u;
    // 0x20a0e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x20A0E4u;
    {
        const bool branch_taken_0x20a0e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A0E4u;
            // 0x20a0e8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a0e4) {
            ctx->pc = 0x20A0FCu;
            goto label_20a0fc;
        }
    }
    ctx->pc = 0x20A0ECu;
    // 0x20a0ec: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
    ctx->pc = 0x20A0ECu;
    {
        const bool branch_taken_0x20a0ec = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A0F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A0ECu;
            // 0x20a0f0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a0ec) {
            ctx->pc = 0x20A114u;
            goto label_20a114;
        }
    }
    ctx->pc = 0x20A0F4u;
    // 0x20a0f4: 0x10000054  b           . + 4 + (0x54 << 2)
    ctx->pc = 0x20A0F4u;
    {
        const bool branch_taken_0x20a0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a0f4) {
            ctx->pc = 0x20A248u;
            goto label_20a248;
        }
    }
    ctx->pc = 0x20A0FCu;
label_20a0fc:
    // 0x20a0fc: 0x10c2002b  beq         $a2, $v0, . + 4 + (0x2B << 2)
    ctx->pc = 0x20A0FCu;
    {
        const bool branch_taken_0x20a0fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x20A100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A0FCu;
            // 0x20a100: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a0fc) {
            ctx->pc = 0x20A1ACu;
            goto label_20a1ac;
        }
    }
    ctx->pc = 0x20A104u;
    // 0x20a104: 0x10c2003b  beq         $a2, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x20A104u;
    {
        const bool branch_taken_0x20a104 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x20A108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A104u;
            // 0x20a108: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a104) {
            ctx->pc = 0x20A1F4u;
            goto label_20a1f4;
        }
    }
    ctx->pc = 0x20A10Cu;
    // 0x20a10c: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x20A10Cu;
    {
        const bool branch_taken_0x20a10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a10c) {
            ctx->pc = 0x20A248u;
            goto label_20a248;
        }
    }
    ctx->pc = 0x20A114u;
label_20a114:
    // 0x20a114: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x20a114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x20a118: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x20a118u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x20a11c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20A11Cu;
    {
        const bool branch_taken_0x20a11c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a11c) {
            ctx->pc = 0x20A120u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20A11Cu;
            // 0x20a120: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20A124u;
            goto label_20a124;
        }
    }
    ctx->pc = 0x20A124u;
label_20a124:
    // 0x20a124: 0x1810  mfhi        $v1
    ctx->pc = 0x20a124u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x20a128: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x20a128u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x20a12c: 0x14600046  bnez        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x20A12Cu;
    {
        const bool branch_taken_0x20a12c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A130u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A12Cu;
            // 0x20a130: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a12c) {
            ctx->pc = 0x20A248u;
            goto label_20a248;
        }
    }
    ctx->pc = 0x20A134u;
    // 0x20a134: 0x24a6ffff  addiu       $a2, $a1, -0x1
    ctx->pc = 0x20a134u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x20a138: 0x24a2001e  addiu       $v0, $a1, 0x1E
    ctx->pc = 0x20a138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 30));
label_20a13c:
    // 0x20a13c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x20a13cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20a140: 0x66182a  slt         $v1, $v1, $a2
    ctx->pc = 0x20a140u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x20a144: 0xc73804  sllv        $a3, $a3, $a2
    ctx->pc = 0x20a144u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
    // 0x20a148: 0xc3100b  movn        $v0, $a2, $v1
    ctx->pc = 0x20a148u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x20a14c: 0x21143  sra         $v0, $v0, 5
    ctx->pc = 0x20a14cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 5));
    // 0x20a150: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x20a150u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x20a154: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x20a154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x20a158: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x20a158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x20a15c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x20a15cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x20a160: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x20A160u;
    {
        const bool branch_taken_0x20a160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A160u;
            // 0x20a164: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a160) {
            ctx->pc = 0x20A248u;
            goto label_20a248;
        }
    }
    ctx->pc = 0x20A168u;
    // 0x20a168: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x20a168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x20a16c: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x20a16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x20a170: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x20a170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
label_20a174:
    // 0x20a174: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x20A174u;
    {
        const bool branch_taken_0x20a174 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A178u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A174u;
            // 0x20a178: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a174) {
            ctx->pc = 0x20A248u;
            goto label_20a248;
        }
    }
    ctx->pc = 0x20A17Cu;
    // 0x20a17c: 0x3e00008  jr          $ra
    ctx->pc = 0x20A17Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A17Cu;
            // 0x20a180: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20A0FCu: goto label_20a0fc;
            case 0x20A114u: goto label_20a114;
            case 0x20A124u: goto label_20a124;
            case 0x20A13Cu: goto label_20a13c;
            case 0x20A174u: goto label_20a174;
            case 0x20A184u: goto label_20a184;
            case 0x20A194u: goto label_20a194;
            case 0x20A1ACu: goto label_20a1ac;
            case 0x20A1F4u: goto label_20a1f4;
            case 0x20A244u: goto label_20a244;
            case 0x20A248u: goto label_20a248;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20A184u;
label_20a184:
    // 0x20a184: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x20a184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x20a188: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x20a188u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x20a18c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x20A18Cu;
    {
        const bool branch_taken_0x20a18c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a18c) {
            ctx->pc = 0x20A190u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20A18Cu;
            // 0x20a190: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20A194u;
            goto label_20a194;
        }
    }
    ctx->pc = 0x20A194u;
label_20a194:
    // 0x20a194: 0x1810  mfhi        $v1
    ctx->pc = 0x20a194u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x20a198: 0x2863000a  slti        $v1, $v1, 0xA
    ctx->pc = 0x20a198u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x20a19c: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x20A19Cu;
    {
        const bool branch_taken_0x20a19c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A1A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A19Cu;
            // 0x20a1a0: 0x24a60001  addiu       $a2, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a19c) {
            ctx->pc = 0x20A244u;
            goto label_20a244;
        }
    }
    ctx->pc = 0x20A1A4u;
    // 0x20a1a4: 0x1000ffe5  b           . + 4 + (-0x1B << 2)
    ctx->pc = 0x20A1A4u;
    {
        const bool branch_taken_0x20a1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A1A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A1A4u;
            // 0x20a1a8: 0x24a20020  addiu       $v0, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a1a4) {
            ctx->pc = 0x20A13Cu;
            runtime->cooperativeGuestYield();
            goto label_20a13c;
        }
    }
    ctx->pc = 0x20A1ACu;
label_20a1ac:
    // 0x20a1ac: 0x24a6fff5  addiu       $a2, $a1, -0xB
    ctx->pc = 0x20a1acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967285));
    // 0x20a1b0: 0x4c00024  bltz        $a2, . + 4 + (0x24 << 2)
    ctx->pc = 0x20A1B0u;
    {
        const bool branch_taken_0x20a1b0 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x20A1B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A1B0u;
            // 0x20a1b4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a1b0) {
            ctx->pc = 0x20A244u;
            goto label_20a244;
        }
    }
    ctx->pc = 0x20A1B8u;
    // 0x20a1b8: 0x24a30014  addiu       $v1, $a1, 0x14
    ctx->pc = 0x20a1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 20));
    // 0x20a1bc: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x20a1bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x20a1c0: 0xc72804  sllv        $a1, $a3, $a2
    ctx->pc = 0x20a1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
    // 0x20a1c4: 0xc2180b  movn        $v1, $a2, $v0
    ctx->pc = 0x20a1c4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x20a1c8: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x20a1c8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x20a1cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20a1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20a1d0: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x20a1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x20a1d4: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x20a1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x20a1d8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x20a1d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x20a1dc: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x20A1DCu;
    {
        const bool branch_taken_0x20a1dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a1dc) {
            ctx->pc = 0x20A1E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20A1DCu;
            // 0x20a1e0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20A248u;
            goto label_20a248;
        }
    }
    ctx->pc = 0x20A1E4u;
    // 0x20a1e4: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x20a1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x20a1e8: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x20a1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x20a1ec: 0x1000ffe1  b           . + 4 + (-0x1F << 2)
    ctx->pc = 0x20A1ECu;
    {
        const bool branch_taken_0x20a1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A1ECu;
            // 0x20a1f0: 0x451024  and         $v0, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a1ec) {
            ctx->pc = 0x20A174u;
            runtime->cooperativeGuestYield();
            goto label_20a174;
        }
    }
    ctx->pc = 0x20A1F4u;
label_20a1f4:
    // 0x20a1f4: 0x24a6000b  addiu       $a2, $a1, 0xB
    ctx->pc = 0x20a1f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 11));
    // 0x20a1f8: 0x28c20079  slti        $v0, $a2, 0x79
    ctx->pc = 0x20a1f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)121) ? 1 : 0);
    // 0x20a1fc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x20A1FCu;
    {
        const bool branch_taken_0x20a1fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A1FCu;
            // 0x20a200: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a1fc) {
            ctx->pc = 0x20A244u;
            goto label_20a244;
        }
    }
    ctx->pc = 0x20A204u;
    // 0x20a204: 0x24a3002a  addiu       $v1, $a1, 0x2A
    ctx->pc = 0x20a204u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 42));
    // 0x20a208: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x20a208u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x20a20c: 0xc72804  sllv        $a1, $a3, $a2
    ctx->pc = 0x20a20cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 6) & 0x1F));
    // 0x20a210: 0xc2180b  movn        $v1, $a2, $v0
    ctx->pc = 0x20a210u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 6));
    // 0x20a214: 0x31943  sra         $v1, $v1, 5
    ctx->pc = 0x20a214u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 5));
    // 0x20a218: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20a218u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20a21c: 0x831021  addu        $v0, $a0, $v1
    ctx->pc = 0x20a21cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x20a220: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x20a220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x20a224: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x20a224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x20a228: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20A228u;
    {
        const bool branch_taken_0x20a228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A22Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A228u;
            // 0x20a22c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a228) {
            ctx->pc = 0x20A248u;
            goto label_20a248;
        }
    }
    ctx->pc = 0x20A230u;
    // 0x20a230: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x20a230u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x20a234: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x20a234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x20a238: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x20a238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x20a23c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x20A23Cu;
    {
        const bool branch_taken_0x20a23c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A23Cu;
            // 0x20a240: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a23c) {
            ctx->pc = 0x20A248u;
            goto label_20a248;
        }
    }
    ctx->pc = 0x20A244u;
label_20a244:
    // 0x20a244: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20a244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_20a248:
    // 0x20a248: 0x3e00008  jr          $ra
    ctx->pc = 0x20A248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20A0FCu: goto label_20a0fc;
            case 0x20A114u: goto label_20a114;
            case 0x20A124u: goto label_20a124;
            case 0x20A13Cu: goto label_20a13c;
            case 0x20A174u: goto label_20a174;
            case 0x20A184u: goto label_20a184;
            case 0x20A194u: goto label_20a194;
            case 0x20A1ACu: goto label_20a1ac;
            case 0x20A1F4u: goto label_20a1f4;
            case 0x20A244u: goto label_20a244;
            case 0x20A248u: goto label_20a248;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20A250u;
}
