#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001675B0
// Address: 0x1675b0 - 0x167860
void sub_001675B0_0x1675b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001675B0_0x1675b0");
#endif

    ctx->pc = 0x1675b0u;

    // 0x1675b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1675b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1675b4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x1675b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x1675b8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1675b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x1675bc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1675bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1675c0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1675c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1675c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1675c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1675c8: 0xdcc30008  ld          $v1, 0x8($a2)
    ctx->pc = 0x1675c8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x1675cc: 0xdcc20000  ld          $v0, 0x0($a2)
    ctx->pc = 0x1675ccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x1675d0: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x1675d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x1675d4: 0xc059afa  jal         func_166BE8
    ctx->pc = 0x1675D4u;
    SET_GPR_U32(ctx, 31, 0x1675DCu);
    ctx->pc = 0x1675D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1675D4u;
            // 0x1675d8: 0xffa20000  sd          $v0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166BE8u;
    if (runtime->hasFunction(0x166BE8u)) {
        auto targetFn = runtime->lookupFunction(0x166BE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1675DCu; }
        if (ctx->pc != 0x1675DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166BE8_0x166be8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1675DCu; }
        if (ctx->pc != 0x1675DCu) { return; }
    }
    ctx->pc = 0x1675DCu;
    // 0x1675dc: 0xc059b16  jal         func_166C58
    ctx->pc = 0x1675DCu;
    SET_GPR_U32(ctx, 31, 0x1675E4u);
    ctx->pc = 0x1675E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1675DCu;
            // 0x1675e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166C58u;
    if (runtime->hasFunction(0x166C58u)) {
        auto targetFn = runtime->lookupFunction(0x166C58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1675E4u; }
        if (ctx->pc != 0x1675E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166C58_0x166c58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1675E4u; }
        if (ctx->pc != 0x1675E4u) { return; }
    }
    ctx->pc = 0x1675E4u;
    // 0x1675e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1675e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1675e8: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1675e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1675ec: 0xc059d28  jal         func_1674A0
    ctx->pc = 0x1675ECu;
    SET_GPR_U32(ctx, 31, 0x1675F4u);
    ctx->pc = 0x1675F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1675ECu;
            // 0x1675f0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1674A0u;
    if (runtime->hasFunction(0x1674A0u)) {
        auto targetFn = runtime->lookupFunction(0x1674A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1675F4u; }
        if (ctx->pc != 0x1675F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001674A0_0x1674a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1675F4u; }
        if (ctx->pc != 0x1675F4u) { return; }
    }
    ctx->pc = 0x1675F4u;
    // 0x1675f4: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x1675f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
    // 0x1675f8: 0x2463bb98  addiu       $v1, $v1, -0x4468
    ctx->pc = 0x1675f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294949784));
    // 0x1675fc: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x1675fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x167600: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x167600u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x167604: 0x8faa0010  lw          $t2, 0x10($sp)
    ctx->pc = 0x167604u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x167608: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x167608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x16760c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x16760cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167610: 0x26030006  addiu       $v1, $s0, 0x6
    ctx->pc = 0x167610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
    // 0x167614: 0xdd470000  ld          $a3, 0x0($t2)
    ctx->pc = 0x167614u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x167618: 0x32982  srl         $a1, $v1, 6
    ctx->pc = 0x167618u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 6));
    // 0x16761c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x16761cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x167620: 0x24c90630  addiu       $t1, $a2, 0x630
    ctx->pc = 0x167620u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 1584));
    // 0x167624: 0x1252821  addu        $a1, $t1, $a1
    ctx->pc = 0x167624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x167628: 0x3062003f  andi        $v0, $v1, 0x3F
    ctx->pc = 0x167628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x16762c: 0xdca40000  ld          $a0, 0x0($a1)
    ctx->pc = 0x16762cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x167630: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x167630u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x167634: 0x4b1014  dsllv       $v0, $t3, $v0
    ctx->pc = 0x167634u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x167638: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x167638u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x16763c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x16763cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x167640: 0x24c80318  addiu       $t0, $a2, 0x318
    ctx->pc = 0x167640u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 792));
    // 0x167644: 0xfca40000  sd          $a0, 0x0($a1)
    ctx->pc = 0x167644u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 4));
    // 0x167648: 0x1031821  addu        $v1, $t0, $v1
    ctx->pc = 0x167648u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x16764c: 0xfc670000  sd          $a3, 0x0($v1)
    ctx->pc = 0x16764cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 7));
    // 0x167650: 0x26020014  addiu       $v0, $s0, 0x14
    ctx->pc = 0x167650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x167654: 0xdd470008  ld          $a3, 0x8($t2)
    ctx->pc = 0x167654u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x167658: 0x22982  srl         $a1, $v0, 6
    ctx->pc = 0x167658u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x16765c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x16765cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x167660: 0x3046003f  andi        $a2, $v0, 0x3F
    ctx->pc = 0x167660u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x167664: 0x1252821  addu        $a1, $t1, $a1
    ctx->pc = 0x167664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x167668: 0xcb3014  dsllv       $a2, $t3, $a2
    ctx->pc = 0x167668u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) << (GPR_U32(ctx, 6) & 0x3F));
    // 0x16766c: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x16766cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x167670: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x167670u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x167674: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x167674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x167678: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x167678u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x16767c: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x16767cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x167680: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x167680u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x167684: 0xfc470000  sd          $a3, 0x0($v0)
    ctx->pc = 0x167684u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 7));
    // 0x167688: 0xdd470010  ld          $a3, 0x10($t2)
    ctx->pc = 0x167688u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x16768c: 0x41982  srl         $v1, $a0, 6
    ctx->pc = 0x16768cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
    // 0x167690: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x167690u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x167694: 0x3085003f  andi        $a1, $a0, 0x3F
    ctx->pc = 0x167694u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x167698: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x167698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x16769c: 0xab2814  dsllv       $a1, $t3, $a1
    ctx->pc = 0x16769cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 11) << (GPR_U32(ctx, 5) & 0x3F));
    // 0x1676a0: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x1676a0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1676a4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1676a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1676a8: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x1676a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x1676ac: 0x8e260018  lw          $a2, 0x18($s1)
    ctx->pc = 0x1676acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1676b0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1676b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1676b4: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x1676b4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x1676b8: 0x10c0001b  beqz        $a2, . + 4 + (0x1B << 2)
    ctx->pc = 0x1676B8u;
    {
        const bool branch_taken_0x1676b8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1676BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1676B8u;
            // 0x1676bc: 0xfc870000  sd          $a3, 0x0($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1676b8) {
            ctx->pc = 0x167728u;
            goto label_167728;
        }
    }
    ctx->pc = 0x1676C0u;
    // 0x1676c0: 0xdd470018  ld          $a3, 0x18($t2)
    ctx->pc = 0x1676c0u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 10), 24)));
    // 0x1676c4: 0x26020034  addiu       $v0, $s0, 0x34
    ctx->pc = 0x1676c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    // 0x1676c8: 0x22982  srl         $a1, $v0, 6
    ctx->pc = 0x1676c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x1676cc: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1676ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1676d0: 0x3046003f  andi        $a2, $v0, 0x3F
    ctx->pc = 0x1676d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x1676d4: 0x1252821  addu        $a1, $t1, $a1
    ctx->pc = 0x1676d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 5)));
    // 0x1676d8: 0xcb3014  dsllv       $a2, $t3, $a2
    ctx->pc = 0x1676d8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) << (GPR_U32(ctx, 6) & 0x3F));
    // 0x1676dc: 0xdca30000  ld          $v1, 0x0($a1)
    ctx->pc = 0x1676dcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1676e0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1676e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1676e4: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1676e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1676e8: 0x26040036  addiu       $a0, $s0, 0x36
    ctx->pc = 0x1676e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 54));
    // 0x1676ec: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1676ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1676f0: 0xfca30000  sd          $v1, 0x0($a1)
    ctx->pc = 0x1676f0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
    // 0x1676f4: 0xfc470000  sd          $a3, 0x0($v0)
    ctx->pc = 0x1676f4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 7));
    // 0x1676f8: 0xdd460020  ld          $a2, 0x20($t2)
    ctx->pc = 0x1676f8u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 10), 32)));
    // 0x1676fc: 0x41982  srl         $v1, $a0, 6
    ctx->pc = 0x1676fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
    // 0x167700: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x167700u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x167704: 0x3085003f  andi        $a1, $a0, 0x3F
    ctx->pc = 0x167704u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)63);
    // 0x167708: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x167708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
    // 0x16770c: 0xab2814  dsllv       $a1, $t3, $a1
    ctx->pc = 0x16770cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 11) << (GPR_U32(ctx, 5) & 0x3F));
    // 0x167710: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x167710u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x167714: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x167714u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x167718: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x167718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
    // 0x16771c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x16771cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x167720: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x167720u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x167724: 0xfc860000  sd          $a2, 0x0($a0)
    ctx->pc = 0x167724u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 6));
label_167728:
    // 0x167728: 0xc059ade  jal         func_166B78
    ctx->pc = 0x167728u;
    SET_GPR_U32(ctx, 31, 0x167730u);
    ctx->pc = 0x16772Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x167728u;
            // 0x16772c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x166B78u;
    if (runtime->hasFunction(0x166B78u)) {
        auto targetFn = runtime->lookupFunction(0x166B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167730u; }
        if (ctx->pc != 0x167730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00166B78_0x166b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x167730u; }
        if (ctx->pc != 0x167730u) { return; }
    }
    ctx->pc = 0x167730u;
    // 0x167730: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x167730u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x167734: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x167734u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x167738: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x167738u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16773c: 0x3e00008  jr          $ra
    ctx->pc = 0x16773Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x167740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16773Cu;
            // 0x167740: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x167728u: goto label_167728;
            case 0x167770u: goto label_167770;
            case 0x1677B0u: goto label_1677b0;
            case 0x1677BCu: goto label_1677bc;
            case 0x1677F8u: goto label_1677f8;
            case 0x167814u: goto label_167814;
            case 0x16781Cu: goto label_16781c;
            case 0x167838u: goto label_167838;
            default: break;
        }
        return;
    }
    ctx->pc = 0x167744u;
    // 0x167744: 0x0  nop
    ctx->pc = 0x167744u;
    // NOP
    // 0x167748: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x167748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x16774c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x16774cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x167750: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x167750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x167754: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x167754u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167758: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x167758u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16775c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x16775cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x167760: 0x8e300024  lw          $s0, 0x24($s1)
    ctx->pc = 0x167760u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x167764: 0x52000015  beql        $s0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x167764u;
    {
        const bool branch_taken_0x167764 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x167764) {
            ctx->pc = 0x167768u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x167764u;
            // 0x167768: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1677BCu;
            goto label_1677bc;
        }
    }
    ctx->pc = 0x16776Cu;
    // 0x16776c: 0x2602fff8  addiu       $v0, $s0, -0x8
    ctx->pc = 0x16776cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_167770:
    // 0x167770: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x167770u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x167774: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x167774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x167778: 0x50280b  movn        $a1, $v0, $s0
    ctx->pc = 0x167778u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    // 0x16777c: 0x94a30004  lhu         $v1, 0x4($a1)
    ctx->pc = 0x16777cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x167780: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x167780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x167784: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x167784u;
    {
        const bool branch_taken_0x167784 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x167788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167784u;
            // 0x167788: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167784) {
            ctx->pc = 0x1677B0u;
            goto label_1677b0;
        }
    }
    ctx->pc = 0x16778Cu;
    // 0x16778c: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x16778cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x167790: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x167790u;
    {
        const bool branch_taken_0x167790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167790) {
            ctx->pc = 0x1677B0u;
            goto label_1677b0;
        }
    }
    ctx->pc = 0x167798u;
    // 0x167798: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x167798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x16779c: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x16779cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x1677a0: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x1677a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x1677a4: 0x40f809  jalr        $v0
    ctx->pc = 0x1677A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1677ACu);
        ctx->pc = 0x1677A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1677A4u;
            // 0x1677a8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1677ACu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x167728u: goto label_167728;
            case 0x167770u: goto label_167770;
            case 0x1677B0u: goto label_1677b0;
            case 0x1677BCu: goto label_1677bc;
            case 0x1677F8u: goto label_1677f8;
            case 0x167814u: goto label_167814;
            case 0x16781Cu: goto label_16781c;
            case 0x167838u: goto label_167838;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1677ACu; }
            if (ctx->pc != 0x1677ACu) { return; }
        }
        }
    }
    ctx->pc = 0x1677ACu;
    // 0x1677ac: 0x0  nop
    ctx->pc = 0x1677acu;
    // NOP
label_1677b0:
    // 0x1677b0: 0x1640ffef  bnez        $s2, . + 4 + (-0x11 << 2)
    ctx->pc = 0x1677B0u;
    {
        const bool branch_taken_0x1677b0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1677B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1677B0u;
            // 0x1677b4: 0x2602fff8  addiu       $v0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1677b0) {
            ctx->pc = 0x167770u;
            runtime->cooperativeGuestYield();
            goto label_167770;
        }
    }
    ctx->pc = 0x1677B8u;
    // 0x1677b8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1677b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1677bc:
    // 0x1677bc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1677bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1677c0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1677c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1677c4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1677c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1677c8: 0x3e00008  jr          $ra
    ctx->pc = 0x1677C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1677CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1677C8u;
            // 0x1677cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x167728u: goto label_167728;
            case 0x167770u: goto label_167770;
            case 0x1677B0u: goto label_1677b0;
            case 0x1677BCu: goto label_1677bc;
            case 0x1677F8u: goto label_1677f8;
            case 0x167814u: goto label_167814;
            case 0x16781Cu: goto label_16781c;
            case 0x167838u: goto label_167838;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1677D0u;
    // 0x1677d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1677D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x167728u: goto label_167728;
            case 0x167770u: goto label_167770;
            case 0x1677B0u: goto label_1677b0;
            case 0x1677BCu: goto label_1677bc;
            case 0x1677F8u: goto label_1677f8;
            case 0x167814u: goto label_167814;
            case 0x16781Cu: goto label_16781c;
            case 0x167838u: goto label_167838;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1677D8u;
    // 0x1677d8: 0x14c00010  bnez        $a2, . + 4 + (0x10 << 2)
    ctx->pc = 0x1677D8u;
    {
        const bool branch_taken_0x1677d8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1677DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1677D8u;
            // 0x1677dc: 0x51100  sll         $v0, $a1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1677d8) {
            ctx->pc = 0x16781Cu;
            goto label_16781c;
        }
    }
    ctx->pc = 0x1677E0u;
    // 0x1677e0: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x1677e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1677e4: 0x24840064  addiu       $a0, $a0, 0x64
    ctx->pc = 0x1677e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
    // 0x1677e8: 0x8c850000  lw          $a1, 0x0($a0)
    ctx->pc = 0x1677e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1677ec: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1677ECu;
    {
        const bool branch_taken_0x1677ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1677F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1677ECu;
            // 0x1677f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1677ec) {
            ctx->pc = 0x167814u;
            goto label_167814;
        }
    }
    ctx->pc = 0x1677F4u;
    // 0x1677f4: 0x0  nop
    ctx->pc = 0x1677f4u;
    // NOP
label_1677f8:
    // 0x1677f8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1677f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x1677fc: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x1677fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x167800: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x167800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x167804: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x167804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x167808: 0xc5102b  sltu        $v0, $a2, $a1
    ctx->pc = 0x167808u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x16780c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16780Cu;
    {
        const bool branch_taken_0x16780c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x167810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16780Cu;
            // 0x167810: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16780c) {
            ctx->pc = 0x1677F8u;
            runtime->cooperativeGuestYield();
            goto label_1677f8;
        }
    }
    ctx->pc = 0x167814u;
label_167814:
    // 0x167814: 0x3e00008  jr          $ra
    ctx->pc = 0x167814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x167728u: goto label_167728;
            case 0x167770u: goto label_167770;
            case 0x1677B0u: goto label_1677b0;
            case 0x1677BCu: goto label_1677bc;
            case 0x1677F8u: goto label_1677f8;
            case 0x167814u: goto label_167814;
            case 0x16781Cu: goto label_16781c;
            case 0x167838u: goto label_167838;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16781Cu;
label_16781c:
    // 0x16781c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x16781cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x167820: 0x2442006c  addiu       $v0, $v0, 0x6C
    ctx->pc = 0x167820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 108));
    // 0x167824: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x167824u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x167828: 0x10c0fffa  beqz        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x167828u;
    {
        const bool branch_taken_0x167828 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x16782Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x167828u;
            // 0x16782c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x167828) {
            ctx->pc = 0x167814u;
            runtime->cooperativeGuestYield();
            goto label_167814;
        }
    }
    ctx->pc = 0x167830u;
    // 0x167830: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x167830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x167834: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x167834u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_167838:
    // 0x167838: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x167838u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x16783c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x16783cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x167840: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x167840u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x167844: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x167844u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x167848: 0x0  nop
    ctx->pc = 0x167848u;
    // NOP
    // 0x16784c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x16784Cu;
    {
        const bool branch_taken_0x16784c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x167850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16784Cu;
            // 0x167850: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16784c) {
            ctx->pc = 0x167838u;
            runtime->cooperativeGuestYield();
            goto label_167838;
        }
    }
    ctx->pc = 0x167854u;
    // 0x167854: 0x3e00008  jr          $ra
    ctx->pc = 0x167854u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x167728u: goto label_167728;
            case 0x167770u: goto label_167770;
            case 0x1677B0u: goto label_1677b0;
            case 0x1677BCu: goto label_1677bc;
            case 0x1677F8u: goto label_1677f8;
            case 0x167814u: goto label_167814;
            case 0x16781Cu: goto label_16781c;
            case 0x167838u: goto label_167838;
            default: break;
        }
        return;
    }
    ctx->pc = 0x16785Cu;
    // 0x16785c: 0x0  nop
    ctx->pc = 0x16785cu;
    // NOP
}
