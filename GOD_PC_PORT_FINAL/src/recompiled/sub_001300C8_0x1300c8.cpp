#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001300C8
// Address: 0x1300c8 - 0x130140
void sub_001300C8_0x1300c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001300C8_0x1300c8");
#endif

    ctx->pc = 0x1300c8u;

    // 0x1300c8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1300c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1300cc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1300ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1300d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1300d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1300d4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1300d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1300d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1300d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1300dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1300dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1300e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1300e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1300e4: 0xc04bfae  jal         func_12FEB8
    ctx->pc = 0x1300E4u;
    SET_GPR_U32(ctx, 31, 0x1300ECu);
    ctx->pc = 0x1300E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1300E4u;
            // 0x1300e8: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FEB8u;
    if (runtime->hasFunction(0x12FEB8u)) {
        auto targetFn = runtime->lookupFunction(0x12FEB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1300ECu; }
        if (ctx->pc != 0x1300ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012FEB8_0x12feb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1300ECu; }
        if (ctx->pc != 0x1300ECu) { return; }
    }
    ctx->pc = 0x1300ECu;
    // 0x1300ec: 0x96040008  lhu         $a0, 0x8($s0)
    ctx->pc = 0x1300ecu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1300f0: 0x3c05002a  lui         $a1, 0x2A
    ctx->pc = 0x1300f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)42 << 16));
    // 0x1300f4: 0xdca3bdf8  ld          $v1, -0x4208($a1)
    ctx->pc = 0x1300f4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 4294950392)));
    // 0x1300f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1300f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1300fc: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x1300fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x130100: 0xa6240060  sh          $a0, 0x60($s1)
    ctx->pc = 0x130100u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 96), (uint16_t)GPR_U32(ctx, 4));
    // 0x130104: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x130104u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
    // 0x130108: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x130108u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x13010c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x13010cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x130110: 0x9604000a  lhu         $a0, 0xA($s0)
    ctx->pc = 0x130110u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x130114: 0x62300a  movz        $a2, $v1, $v0
    ctx->pc = 0x130114u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x130118: 0xfca3bdf8  sd          $v1, -0x4208($a1)
    ctx->pc = 0x130118u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 4294950392), GPR_U64(ctx, 3));
    // 0x13011c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x13011cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130120: 0xa6240062  sh          $a0, 0x62($s1)
    ctx->pc = 0x130120u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 98), (uint16_t)GPR_U32(ctx, 4));
    // 0x130124: 0xfe220068  sd          $v0, 0x68($s1)
    ctx->pc = 0x130124u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 104), GPR_U64(ctx, 2));
    // 0x130128: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x130128u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13012c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13012cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x130130: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x130130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x130134: 0x3e00008  jr          $ra
    ctx->pc = 0x130134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x130134u;
            // 0x130138: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13013Cu;
    // 0x13013c: 0x0  nop
    ctx->pc = 0x13013cu;
    // NOP
}
