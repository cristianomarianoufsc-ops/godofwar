#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001426C0
// Address: 0x1426c0 - 0x1429e8
void sub_001426C0_0x1426c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001426C0_0x1426c0");
#endif

    ctx->pc = 0x1426c0u;

    // 0x1426c0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1426c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1426c4: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1426c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1426c8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1426c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1426cc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1426ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1426d0: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1426d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x1426d4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1426d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1426d8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1426d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1426dc: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1426dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1426e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1426e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1426e4: 0xc04fd50  jal         func_13F540
    ctx->pc = 0x1426E4u;
    SET_GPR_U32(ctx, 31, 0x1426ECu);
    ctx->pc = 0x1426E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1426E4u;
            // 0x1426e8: 0x3c100033  lui         $s0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F540u;
    if (runtime->hasFunction(0x13F540u)) {
        auto targetFn = runtime->lookupFunction(0x13F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1426ECu; }
        if (ctx->pc != 0x1426ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0013f540_0x13f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1426ECu; }
        if (ctx->pc != 0x1426ECu) { return; }
    }
    ctx->pc = 0x1426ECu;
    // 0x1426ec: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x1426ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x1426f0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1426f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1426f4: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x1426f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x1426f8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1426f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1426fc: 0xc04fe88  jal         func_13FA20
    ctx->pc = 0x1426FCu;
    SET_GPR_U32(ctx, 31, 0x142704u);
    ctx->pc = 0x142700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1426FCu;
            // 0x142700: 0xae02f168  sw          $v0, -0xE98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA20u;
    if (runtime->hasFunction(0x13FA20u)) {
        auto targetFn = runtime->lookupFunction(0x13FA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142704u; }
        if (ctx->pc != 0x142704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa20_0x13fa48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x142704u; }
        if (ctx->pc != 0x142704u) { return; }
    }
    ctx->pc = 0x142704u;
    // 0x142704: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x142704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x142708: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x142708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x14270c: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x14270cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x142710: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x142710u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x142714: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x142714u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x142718: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x142718u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x14271c: 0xac450008  sw          $a1, 0x8($v0)
    ctx->pc = 0x14271cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 5));
    // 0x142720: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x142720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x142724: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x142724u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
    // 0x142728: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x142728u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x14272c: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x14272cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x142730: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x142730u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x142734: 0x2407004f  addiu       $a3, $zero, 0x4F
    ctx->pc = 0x142734u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x142738: 0x9cc2f19c  lwu         $v0, -0xE64($a2)
    ctx->pc = 0x142738u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 6), 4294963612)));
    // 0x14273c: 0x9c63f1a0  lwu         $v1, -0xE60($v1)
    ctx->pc = 0x14273cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 3), 4294963616)));
    // 0x142740: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x142740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x142744: 0x8e04f168  lw          $a0, -0xE98($s0)
    ctx->pc = 0x142744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x142748: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x142748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x14274c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x14274cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x142750: 0xfc870018  sd          $a3, 0x18($a0)
    ctx->pc = 0x142750u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 7));
    // 0x142754: 0xfc830010  sd          $v1, 0x10($a0)
    ctx->pc = 0x142754u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 3));
    // 0x142758: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x142758u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x14275c: 0x3c0b0030  lui         $t3, 0x30
    ctx->pc = 0x14275cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)48 << 16));
    // 0x142760: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x142760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x142764: 0x8c67dd50  lw          $a3, -0x22B0($v1)
    ctx->pc = 0x142764u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294958416)));
    // 0x142768: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x142768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14276c: 0x8d68dd58  lw          $t0, -0x22A8($t3)
    ctx->pc = 0x14276cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294958424)));
    // 0x142770: 0x2463dd50  addiu       $v1, $v1, -0x22B0
    ctx->pc = 0x142770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958416));
    // 0x142774: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x142774u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x142778: 0x76100  sll         $t4, $a3, 4
    ctx->pc = 0x142778u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x14277c: 0x81100  sll         $v0, $t0, 4
    ctx->pc = 0x14277cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
    // 0x142780: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x142780u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x142784: 0x244301ff  addiu       $v1, $v0, 0x1FF
    ctx->pc = 0x142784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 511));
    // 0x142788: 0x6c900  sll         $t9, $a2, 4
    ctx->pc = 0x142788u;
    SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x14278c: 0xa3282a  slt         $a1, $a1, $v1
    ctx->pc = 0x14278cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x142790: 0x244203fe  addiu       $v0, $v0, 0x3FE
    ctx->pc = 0x142790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1022));
    // 0x142794: 0x65100b  movn        $v0, $v1, $a1
    ctx->pc = 0x142794u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x142798: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x142798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x14279c: 0x2c243  sra         $t8, $v0, 9
    ctx->pc = 0x14279cu;
    SET_GPR_S32(ctx, 24, SRA32(GPR_S32(ctx, 2), 9));
    // 0x1427a0: 0x24e3ffff  addiu       $v1, $a3, -0x1
    ctx->pc = 0x1427a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x1427a4: 0x198001a  div         $zero, $t4, $t8
    ctx->pc = 0x1427a4u;
    { int32_t divisor = GPR_S32(ctx, 24);    int32_t dividend = GPR_S32(ctx, 12);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1427a8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x1427a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1427ac: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x1427acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x1427b0: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x1427b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x1427b4: 0x31c3a  dsrl        $v1, $v1, 16
    ctx->pc = 0x1427b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 16);
    // 0x1427b8: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x1427b8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x1427bc: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x1427bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x1427c0: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x1427c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
    // 0x1427c4: 0x34421001  ori         $v0, $v0, 0x1001
    ctx->pc = 0x1427c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4097);
    // 0x1427c8: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1427c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1427cc: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x1427ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1427d0: 0x24090041  addiu       $t1, $zero, 0x41
    ctx->pc = 0x1427d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1427d4: 0x240a003f  addiu       $t2, $zero, 0x3F
    ctx->pc = 0x1427d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x1427d8: 0x240d0043  addiu       $t5, $zero, 0x43
    ctx->pc = 0x1427d8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1427dc: 0x3c0e3f80  lui         $t6, 0x3F80
    ctx->pc = 0x1427dcu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)16256 << 16));
    // 0x1427e0: 0xe7438  dsll        $t6, $t6, 16
    ctx->pc = 0x1427e0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << 16);
    // 0x1427e4: 0x35ce8080  ori         $t6, $t6, 0x8080
    ctx->pc = 0x1427e4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)32896);
    // 0x1427e8: 0xe7438  dsll        $t6, $t6, 16
    ctx->pc = 0x1427e8u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << 16);
    // 0x1427ec: 0x35ce8080  ori         $t6, $t6, 0x8080
    ctx->pc = 0x1427ecu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | (uint64_t)(uint16_t)32896);
    // 0x1427f0: 0x240f0060  addiu       $t7, $zero, 0x60
    ctx->pc = 0x1427f0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x1427f4: 0x24120015  addiu       $s2, $zero, 0x15
    ctx->pc = 0x1427f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x1427f8: 0xfc820020  sd          $v0, 0x20($a0)
    ctx->pc = 0x1427f8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 2));
    // 0x1427fc: 0x73982  srl         $a3, $a3, 6
    ctx->pc = 0x1427fcu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 7), 6));
    // 0x142800: 0xfc850028  sd          $a1, 0x28($a0)
    ctx->pc = 0x142800u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 40), GPR_U64(ctx, 5));
    // 0x142804: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x142804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x142808: 0xfc860038  sd          $a2, 0x38($a0)
    ctx->pc = 0x142808u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 56), GPR_U64(ctx, 6));
    // 0x14280c: 0x7383c  dsll32      $a3, $a3, 0
    ctx->pc = 0x14280cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << (32 + 0));
    // 0x142810: 0xfc890048  sd          $t1, 0x48($a0)
    ctx->pc = 0x142810u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 72), GPR_U64(ctx, 9));
    // 0x142814: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x142814u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x142818: 0xfc8a0058  sd          $t2, 0x58($a0)
    ctx->pc = 0x142818u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 88), GPR_U64(ctx, 10));
    // 0x14281c: 0x73c3a  dsrl        $a3, $a3, 16
    ctx->pc = 0x14281cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) >> 16);
    // 0x142820: 0xfc910060  sd          $s1, 0x60($a0)
    ctx->pc = 0x142820u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 96), GPR_U64(ctx, 17));
    // 0x142824: 0x3413ff00  ori         $s3, $zero, 0xFF00
    ctx->pc = 0x142824u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65280);
    // 0x142828: 0x139c3c  dsll32      $s3, $s3, 16
    ctx->pc = 0x142828u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) << (32 + 16));
    // 0x14282c: 0xfc8d0068  sd          $t5, 0x68($a0)
    ctx->pc = 0x14282cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 104), GPR_U64(ctx, 13));
    // 0x142830: 0x2405004d  addiu       $a1, $zero, 0x4D
    ctx->pc = 0x142830u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x142834: 0xfc8e0070  sd          $t6, 0x70($a0)
    ctx->pc = 0x142834u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 112), GPR_U64(ctx, 14));
    // 0x142838: 0x3c110033  lui         $s1, 0x33
    ctx->pc = 0x142838u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)51 << 16));
    // 0x14283c: 0xfc940078  sd          $s4, 0x78($a0)
    ctx->pc = 0x14283cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 120), GPR_U64(ctx, 20));
    // 0x142840: 0x3c0d0033  lui         $t5, 0x33
    ctx->pc = 0x142840u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)51 << 16));
    // 0x142844: 0xfc8f0080  sd          $t7, 0x80($a0)
    ctx->pc = 0x142844u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 128), GPR_U64(ctx, 15));
    // 0x142848: 0x84182  srl         $t0, $t0, 6
    ctx->pc = 0x142848u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 8), 6));
    // 0x14284c: 0xfc920088  sd          $s2, 0x88($a0)
    ctx->pc = 0x14284cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 136), GPR_U64(ctx, 18));
    // 0x142850: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x142850u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x142854: 0xfc830040  sd          $v1, 0x40($a0)
    ctx->pc = 0x142854u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 64), GPR_U64(ctx, 3));
    // 0x142858: 0x844ba  dsrl        $t0, $t0, 18
    ctx->pc = 0x142858u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) >> 18);
    // 0x14285c: 0xfc800030  sd          $zero, 0x30($a0)
    ctx->pc = 0x14285cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 48), GPR_U64(ctx, 0));
    // 0x142860: 0x3c122800  lui         $s2, 0x2800
    ctx->pc = 0x142860u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)10240 << 16));
    // 0x142864: 0xfc800050  sd          $zero, 0x50($a0)
    ctx->pc = 0x142864u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 80), GPR_U64(ctx, 0));
    // 0x142868: 0x340ea000  ori         $t6, $zero, 0xA000
    ctx->pc = 0x142868u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)40960);
    // 0x14286c: 0xe74b8  dsll        $t6, $t6, 18
    ctx->pc = 0x14286cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << 18);
    // 0x142870: 0x256bdd58  addiu       $t3, $t3, -0x22A8
    ctx->pc = 0x142870u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294958424));
    // 0x142874: 0x340f8000  ori         $t7, $zero, 0x8000
    ctx->pc = 0x142874u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x142878: 0xf7cf8  dsll        $t7, $t7, 19
    ctx->pc = 0x142878u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 19);
    // 0x14287c: 0x9cc31070  lwu         $v1, 0x1070($a2)
    ctx->pc = 0x14287cu;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 6), 4208)));
    // 0x142880: 0x248900b0  addiu       $t1, $a0, 0xB0
    ctx->pc = 0x142880u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 176));
    // 0x142884: 0x9c421074  lwu         $v0, 0x1074($v0)
    ctx->pc = 0x142884u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 2), 4212)));
    // 0x142888: 0x240a0007  addiu       $t2, $zero, 0x7
    ctx->pc = 0x142888u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x14288c: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x14288cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x142890: 0xfc850098  sd          $a1, 0x98($a0)
    ctx->pc = 0x142890u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 152), GPR_U64(ctx, 5));
    // 0x142894: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x142894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x142898: 0x8d650004  lw          $a1, 0x4($t3)
    ctx->pc = 0x142898u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x14289c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x14289cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1428a0: 0xae09f168  sw          $t1, -0xE98($s0)
    ctx->pc = 0x1428a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 9));
    // 0x1428a4: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x1428a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
    // 0x1428a8: 0x37078000  ori         $a3, $t8, 0x8000
    ctx->pc = 0x1428a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)32768);
    // 0x1428ac: 0xfc820090  sd          $v0, 0x90($a0)
    ctx->pc = 0x1428acu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 144), GPR_U64(ctx, 2));
    // 0x1428b0: 0x3c0641ab  lui         $a2, 0x41AB
    ctx->pc = 0x1428b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16811 << 16));
    // 0x1428b4: 0x248b00c0  addiu       $t3, $a0, 0xC0
    ctx->pc = 0x1428b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
    // 0x1428b8: 0x34c64000  ori         $a2, $a2, 0x4000
    ctx->pc = 0x1428b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
    // 0x1428bc: 0x8e22f1ac  lw          $v0, -0xE54($s1)
    ctx->pc = 0x1428bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294963628)));
    // 0x1428c0: 0x24140200  addiu       $s4, $zero, 0x200
    ctx->pc = 0x1428c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1428c4: 0x9da3f1a8  lwu         $v1, -0xE58($t5)
    ctx->pc = 0x1428c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 13), 4294963624)));
    // 0x1428c8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1428c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x1428cc: 0xfc8a00a8  sd          $t2, 0xA8($a0)
    ctx->pc = 0x1428ccu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 168), GPR_U64(ctx, 10));
    // 0x1428d0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1428d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1428d4: 0x31d38  dsll        $v1, $v1, 20
    ctx->pc = 0x1428d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
    // 0x1428d8: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x1428d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x1428dc: 0x56900  sll         $t5, $a1, 4
    ctx->pc = 0x1428dcu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1428e0: 0x481025  or          $v0, $v0, $t0
    ctx->pc = 0x1428e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 8));
    // 0x1428e4: 0x24055353  addiu       $a1, $zero, 0x5353
    ctx->pc = 0x1428e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21331));
    // 0x1428e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1428e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1428ec: 0x6012  mflo        $t4
    ctx->pc = 0x1428ecu;
    SET_GPR_U64(ctx, 12, ctx->lo);
    // 0x1428f0: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x1428f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x1428f4: 0x4e1025  or          $v0, $v0, $t6
    ctx->pc = 0x1428f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 14));
    // 0x1428f8: 0x4f1025  or          $v0, $v0, $t7
    ctx->pc = 0x1428f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 15));
    // 0x1428fc: 0xfc8200a0  sd          $v0, 0xA0($a0)
    ctx->pc = 0x1428fcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 160), GPR_U64(ctx, 2));
    // 0x142900: 0x53000001  beql        $t8, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x142900u;
    {
        const bool branch_taken_0x142900 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 0));
        if (branch_taken_0x142900) {
            ctx->pc = 0x142904u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x142900u;
            // 0x142904: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x142908u;
            goto label_142908;
        }
    }
    ctx->pc = 0x142908u;
label_142908:
    // 0x142908: 0xac8700b0  sw          $a3, 0xB0($a0)
    ctx->pc = 0x142908u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 7));
    // 0x14290c: 0xad260004  sw          $a2, 0x4($t1)
    ctx->pc = 0x14290cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 6));
    // 0x142910: 0xad250008  sw          $a1, 0x8($t1)
    ctx->pc = 0x142910u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 8), GPR_U32(ctx, 5));
    // 0x142914: 0xad20000c  sw          $zero, 0xC($t1)
    ctx->pc = 0x142914u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 0));
    // 0x142918: 0x1b000026  blez        $t8, . + 4 + (0x26 << 2)
    ctx->pc = 0x142918u;
    {
        const bool branch_taken_0x142918 = (GPR_S32(ctx, 24) <= 0);
        ctx->pc = 0x14291Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x142918u;
            // 0x14291c: 0xae0bf168  sw          $t3, -0xE98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x142918) {
            ctx->pc = 0x1429B4u;
            goto label_1429b4;
        }
    }
    ctx->pc = 0x142920u;
    // 0x142920: 0x300382d  daddu       $a3, $t8, $zero
    ctx->pc = 0x142920u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142924: 0x180402d  daddu       $t0, $t4, $zero
    ctx->pc = 0x142924u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142928: 0x240b0208  addiu       $t3, $zero, 0x208
    ctx->pc = 0x142928u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 520));
    // 0x14292c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x14292cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x142930: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x142930u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x142934: 0x0  nop
    ctx->pc = 0x142934u;
    // NOP
label_142938:
    // 0x142938: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x142938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x14293c: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x14293cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x142940: 0x25a60008  addiu       $a2, $t5, 0x8
    ctx->pc = 0x142940u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
    // 0x142944: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x142944u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x142948: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x142948u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x14294c: 0xac490000  sw          $t1, 0x0($v0)
    ctx->pc = 0x14294cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 9));
    // 0x142950: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x142950u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x142954: 0x1344821  addu        $t1, $t1, $s4
    ctx->pc = 0x142954u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 20)));
    // 0x142958: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x142958u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x14295c: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x14295cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x142960: 0xac4a0010  sw          $t2, 0x10($v0)
    ctx->pc = 0x142960u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 10));
    // 0x142964: 0x24430010  addiu       $v1, $v0, 0x10
    ctx->pc = 0x142964u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x142968: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x142968u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x14296c: 0x24440020  addiu       $a0, $v0, 0x20
    ctx->pc = 0x14296cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x142970: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x142970u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
    // 0x142974: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x142974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x142978: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x142978u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x14297c: 0x14c5021  addu        $t2, $t2, $t4
    ctx->pc = 0x14297cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    // 0x142980: 0xac4b0020  sw          $t3, 0x20($v0)
    ctx->pc = 0x142980u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 11));
    // 0x142984: 0x24430030  addiu       $v1, $v0, 0x30
    ctx->pc = 0x142984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x142988: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x142988u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x14298c: 0x1745821  addu        $t3, $t3, $s4
    ctx->pc = 0x14298cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 20)));
    // 0x142990: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x142990u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x142994: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x142994u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x142998: 0xac480030  sw          $t0, 0x30($v0)
    ctx->pc = 0x142998u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 8));
    // 0x14299c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x14299cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 0));
    // 0x1429a0: 0x10c4021  addu        $t0, $t0, $t4
    ctx->pc = 0x1429a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x1429a4: 0xae05f168  sw          $a1, -0xE98($s0)
    ctx->pc = 0x1429a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 5));
    // 0x1429a8: 0xac790004  sw          $t9, 0x4($v1)
    ctx->pc = 0x1429a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 25));
    // 0x1429ac: 0x14e0ffe2  bnez        $a3, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1429ACu;
    {
        const bool branch_taken_0x1429ac = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1429B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1429ACu;
            // 0x1429b0: 0xac600008  sw          $zero, 0x8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1429ac) {
            ctx->pc = 0x142938u;
            runtime->cooperativeGuestYield();
            goto label_142938;
        }
    }
    ctx->pc = 0x1429B4u;
label_1429b4:
    // 0x1429b4: 0xc04fe92  jal         func_13FA48
    ctx->pc = 0x1429B4u;
    SET_GPR_U32(ctx, 31, 0x1429BCu);
    ctx->pc = 0x13FA48u;
    if (runtime->hasFunction(0x13FA48u)) {
        auto targetFn = runtime->lookupFunction(0x13FA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1429BCu; }
        if (ctx->pc != 0x1429BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa48_0x13fa78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1429BCu; }
        if (ctx->pc != 0x1429BCu) { return; }
    }
    ctx->pc = 0x1429BCu;
    // 0x1429bc: 0xc04fd78  jal         func_13F5E0
    ctx->pc = 0x1429BCu;
    SET_GPR_U32(ctx, 31, 0x1429C4u);
    ctx->pc = 0x13F5E0u;
    if (runtime->hasFunction(0x13F5E0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1429C4u; }
        if (ctx->pc != 0x1429C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f5e0_0x13f648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1429C4u; }
        if (ctx->pc != 0x1429C4u) { return; }
    }
    ctx->pc = 0x1429C4u;
    // 0x1429c4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1429c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1429c8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1429c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1429cc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1429ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1429d0: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1429d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1429d4: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1429d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1429d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1429d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1429dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1429DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1429E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1429DCu;
            // 0x1429e0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x142908u: goto label_142908;
            case 0x142938u: goto label_142938;
            case 0x1429B4u: goto label_1429b4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1429E4u;
    // 0x1429e4: 0x0  nop
    ctx->pc = 0x1429e4u;
    // NOP
}
