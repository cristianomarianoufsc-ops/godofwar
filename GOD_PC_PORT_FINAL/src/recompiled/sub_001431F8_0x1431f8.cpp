#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001431F8
// Address: 0x1431f8 - 0x143620
void sub_001431F8_0x1431f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001431F8_0x1431f8");
#endif

    ctx->pc = 0x1431f8u;

    // 0x1431f8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1431f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x1431fc: 0x3c03002a  lui         $v1, 0x2A
    ctx->pc = 0x1431fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)42 << 16));
    // 0x143200: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x143200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143204: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x143204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x143208: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x143208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x14320c: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x14320cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x143210: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x143210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x143214: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x143214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x143218: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x143218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x14321c: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x14321cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x143220: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x143220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x143224: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x143224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x143228: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x143228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x14322c: 0xac62bfec  sw          $v0, -0x4014($v1)
    ctx->pc = 0x14322cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950892), GPR_U32(ctx, 2));
    // 0x143230: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x143230u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x143234: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x143234u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x143238: 0x24e3ed68  addiu       $v1, $a3, -0x1298
    ctx->pc = 0x143238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962536));
    // 0x14323c: 0x8cc2ed60  lw          $v0, -0x12A0($a2)
    ctx->pc = 0x14323cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294962528)));
    // 0x143240: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x143240u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x143244: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x143244u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x143248: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x143248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14324c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14324cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x143250: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x143250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x143254: 0x24440018  addiu       $a0, $v0, 0x18
    ctx->pc = 0x143254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x143258: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x143258u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x14325c: 0x0  nop
    ctx->pc = 0x14325cu;
    // NOP
label_143260:
    // 0x143260: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x143260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x143264: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x143264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x143268: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x143268u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
    // 0x14326c: 0x2ca20063  sltiu       $v0, $a1, 0x63
    ctx->pc = 0x14326cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)99) ? 1 : 0);
    // 0x143270: 0x0  nop
    ctx->pc = 0x143270u;
    // NOP
    // 0x143274: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x143274u;
    {
        const bool branch_taken_0x143274 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x143278u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143274u;
            // 0x143278: 0x24840008  addiu       $a0, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x143274) {
            ctx->pc = 0x143260u;
            runtime->cooperativeGuestYield();
            goto label_143260;
        }
    }
    ctx->pc = 0x14327Cu;
    // 0x14327c: 0x8cc2ed60  lw          $v0, -0x12A0($a2)
    ctx->pc = 0x14327cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294962528)));
    // 0x143280: 0x24e3ed68  addiu       $v1, $a3, -0x1298
    ctx->pc = 0x143280u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962536));
    // 0x143284: 0x3c100033  lui         $s0, 0x33
    ctx->pc = 0x143284u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)51 << 16));
    // 0x143288: 0x3c1e1000  lui         $fp, 0x1000
    ctx->pc = 0x143288u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)4096 << 16));
    // 0x14328c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14328cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x143290: 0x3c130030  lui         $s3, 0x30
    ctx->pc = 0x143290u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)48 << 16));
    // 0x143294: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x143294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x143298: 0x2674dd50  addiu       $s4, $s3, -0x22B0
    ctx->pc = 0x143298u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 4294958416));
    // 0x14329c: 0xc04fe32  jal         func_13F8C8
    ctx->pc = 0x14329Cu;
    SET_GPR_U32(ctx, 31, 0x1432A4u);
    ctx->pc = 0x1432A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14329Cu;
            // 0x1432a0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F8C8u;
    if (runtime->hasFunction(0x13F8C8u)) {
        auto targetFn = runtime->lookupFunction(0x13F8C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1432A4u; }
        if (ctx->pc != 0x1432A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f8c8_0x13f8e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1432A4u; }
        if (ctx->pc != 0x1432A4u) { return; }
    }
    ctx->pc = 0x1432A4u;
    // 0x1432a4: 0xc04fd50  jal         func_13F540
    ctx->pc = 0x1432A4u;
    SET_GPR_U32(ctx, 31, 0x1432ACu);
    ctx->pc = 0x1432A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1432A4u;
            // 0x1432a8: 0x3c041000  lui         $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F540u;
    if (runtime->hasFunction(0x13F540u)) {
        auto targetFn = runtime->lookupFunction(0x13F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1432ACu; }
        if (ctx->pc != 0x1432ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0013f540_0x13f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1432ACu; }
        if (ctx->pc != 0x1432ACu) { return; }
    }
    ctx->pc = 0x1432ACu;
    // 0x1432ac: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x1432acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x1432b0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1432b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1432b4: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x1432b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x1432b8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1432b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1432bc: 0xc04fe88  jal         func_13FA20
    ctx->pc = 0x1432BCu;
    SET_GPR_U32(ctx, 31, 0x1432C4u);
    ctx->pc = 0x1432C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1432BCu;
            // 0x1432c0: 0xae02f168  sw          $v0, -0xE98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA20u;
    if (runtime->hasFunction(0x13FA20u)) {
        auto targetFn = runtime->lookupFunction(0x13FA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1432C4u; }
        if (ctx->pc != 0x1432C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa20_0x13fa48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1432C4u; }
        if (ctx->pc != 0x1432C4u) { return; }
    }
    ctx->pc = 0x1432C4u;
    // 0x1432c4: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x1432c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x1432c8: 0x3403800b  ori         $v1, $zero, 0x800B
    ctx->pc = 0x1432c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32779);
    // 0x1432cc: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1432ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x1432d0: 0x3c060033  lui         $a2, 0x33
    ctx->pc = 0x1432d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)51 << 16));
    // 0x1432d4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1432d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1432d8: 0x340a8000  ori         $t2, $zero, 0x8000
    ctx->pc = 0x1432d8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1432dc: 0xa5478  dsll        $t2, $t2, 17
    ctx->pc = 0x1432dcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 17);
    // 0x1432e0: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1432e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1432e4: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1432e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1432e8: 0xac5e0004  sw          $fp, 0x4($v0)
    ctx->pc = 0x1432e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 30));
    // 0x1432ec: 0x24080019  addiu       $t0, $zero, 0x19
    ctx->pc = 0x1432ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x1432f0: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1432f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1432f4: 0x24090041  addiu       $t1, $zero, 0x41
    ctx->pc = 0x1432f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x1432f8: 0x8e65dd50  lw          $a1, -0x22B0($s3)
    ctx->pc = 0x1432f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294958416)));
    // 0x1432fc: 0x9c871074  lwu         $a3, 0x1074($a0)
    ctx->pc = 0x1432fcu;
    SET_GPR_U32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 4), 4212)));
    // 0x143300: 0x51182  srl         $v0, $a1, 6
    ctx->pc = 0x143300u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 6));
    // 0x143304: 0x9cc41070  lwu         $a0, 0x1070($a2)
    ctx->pc = 0x143304u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 4208)));
    // 0x143308: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x143308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x14330c: 0x8e03f168  lw          $v1, -0xE98($s0)
    ctx->pc = 0x14330cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x143310: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x143310u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x143314: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x143314u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x143318: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x143318u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x14331c: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x14331cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x143320: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x143320u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
    // 0x143324: 0x2402004d  addiu       $v0, $zero, 0x4D
    ctx->pc = 0x143324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x143328: 0xfc670010  sd          $a3, 0x10($v1)
    ctx->pc = 0x143328u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 7));
    // 0x14332c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x14332cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x143330: 0xfc620018  sd          $v0, 0x18($v1)
    ctx->pc = 0x143330u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 2));
    // 0x143334: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x143334u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x143338: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x143338u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x14333c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x14333cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x143340: 0x9ce4f19c  lwu         $a0, -0xE64($a3)
    ctx->pc = 0x143340u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 7), 4294963612)));
    // 0x143344: 0x52c3a  dsrl        $a1, $a1, 16
    ctx->pc = 0x143344u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> 16);
    // 0x143348: 0x3c070033  lui         $a3, 0x33
    ctx->pc = 0x143348u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)51 << 16));
    // 0x14334c: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x14334cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x143350: 0x9ce2f1a0  lwu         $v0, -0xE60($a3)
    ctx->pc = 0x143350u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 7), 4294963616)));
    // 0x143354: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x143354u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
    // 0x143358: 0xa62825  or          $a1, $a1, $a2
    ctx->pc = 0x143358u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
    // 0x14335c: 0xfc680038  sd          $t0, 0x38($v1)
    ctx->pc = 0x14335cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 56), GPR_U64(ctx, 8));
    // 0x143360: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x143360u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x143364: 0xfc650040  sd          $a1, 0x40($v1)
    ctx->pc = 0x143364u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 64), GPR_U64(ctx, 5));
    // 0x143368: 0x4a1025  or          $v0, $v0, $t2
    ctx->pc = 0x143368u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 10));
    // 0x14336c: 0xfc690048  sd          $t1, 0x48($v1)
    ctx->pc = 0x14336cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 72), GPR_U64(ctx, 9));
    // 0x143370: 0xfc620020  sd          $v0, 0x20($v1)
    ctx->pc = 0x143370u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 32), GPR_U64(ctx, 2));
    // 0x143374: 0x2402004f  addiu       $v0, $zero, 0x4F
    ctx->pc = 0x143374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x143378: 0xfc600030  sd          $zero, 0x30($v1)
    ctx->pc = 0x143378u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 0));
    // 0x14337c: 0xfc620028  sd          $v0, 0x28($v1)
    ctx->pc = 0x14337cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 40), GPR_U64(ctx, 2));
    // 0x143380: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x143380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x143384: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x143384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x143388: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x143388u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x14338c: 0x34c68080  ori         $a2, $a2, 0x8080
    ctx->pc = 0x14338cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32896);
    // 0x143390: 0x2408001a  addiu       $t0, $zero, 0x1A
    ctx->pc = 0x143390u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
    // 0x143394: 0x24090046  addiu       $t1, $zero, 0x46
    ctx->pc = 0x143394u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x143398: 0x240a0045  addiu       $t2, $zero, 0x45
    ctx->pc = 0x143398u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x14339c: 0x240b0044  addiu       $t3, $zero, 0x44
    ctx->pc = 0x14339cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x1433a0: 0x240c0043  addiu       $t4, $zero, 0x43
    ctx->pc = 0x1433a0u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x1433a4: 0x3c0d3f80  lui         $t5, 0x3F80
    ctx->pc = 0x1433a4u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)16256 << 16));
    // 0x1433a8: 0xd6c38  dsll        $t5, $t5, 16
    ctx->pc = 0x1433a8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 16);
    // 0x1433ac: 0x35ad8000  ori         $t5, $t5, 0x8000
    ctx->pc = 0x1433acu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)32768);
    // 0x1433b0: 0xd6c38  dsll        $t5, $t5, 16
    ctx->pc = 0x1433b0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 16);
    // 0x1433b4: 0x246e00c0  addiu       $t6, $v1, 0xC0
    ctx->pc = 0x1433b4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
    // 0x1433b8: 0x2407003b  addiu       $a3, $zero, 0x3B
    ctx->pc = 0x1433b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1433bc: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1433bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x1433c0: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x1433c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
    // 0x1433c4: 0xfc660060  sd          $a2, 0x60($v1)
    ctx->pc = 0x1433c4u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 96), GPR_U64(ctx, 6));
    // 0x1433c8: 0xfc680078  sd          $t0, 0x78($v1)
    ctx->pc = 0x1433c8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 120), GPR_U64(ctx, 8));
    // 0x1433cc: 0x3c112103  lui         $s1, 0x2103
    ctx->pc = 0x1433ccu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)8451 << 16));
    // 0x1433d0: 0xfc690088  sd          $t1, 0x88($v1)
    ctx->pc = 0x1433d0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 136), GPR_U64(ctx, 9));
    // 0x1433d4: 0x24160055  addiu       $s6, $zero, 0x55
    ctx->pc = 0x1433d4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x1433d8: 0xfc6a0098  sd          $t2, 0x98($v1)
    ctx->pc = 0x1433d8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 152), GPR_U64(ctx, 10));
    // 0x1433dc: 0x34158001  ori         $s5, $zero, 0x8001
    ctx->pc = 0x1433dcu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32769);
    // 0x1433e0: 0xfc6b00a0  sd          $t3, 0xA0($v1)
    ctx->pc = 0x1433e0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 160), GPR_U64(ctx, 11));
    // 0x1433e4: 0x36314000  ori         $s1, $s1, 0x4000
    ctx->pc = 0x1433e4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)16384);
    // 0x1433e8: 0xfc6c00a8  sd          $t4, 0xA8($v1)
    ctx->pc = 0x1433e8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 168), GPR_U64(ctx, 12));
    // 0x1433ec: 0x3c120030  lui         $s2, 0x30
    ctx->pc = 0x1433ecu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)48 << 16));
    // 0x1433f0: 0xfc6d00b0  sd          $t5, 0xB0($v1)
    ctx->pc = 0x1433f0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 176), GPR_U64(ctx, 13));
    // 0x1433f4: 0x2657dd58  addiu       $s7, $s2, -0x22A8
    ctx->pc = 0x1433f4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 4294958424));
    // 0x1433f8: 0xae0ef168  sw          $t6, -0xE98($s0)
    ctx->pc = 0x1433f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 14));
    // 0x1433fc: 0xfc670068  sd          $a3, 0x68($v1)
    ctx->pc = 0x1433fcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 104), GPR_U64(ctx, 7));
    // 0x143400: 0xfc650058  sd          $a1, 0x58($v1)
    ctx->pc = 0x143400u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 88), GPR_U64(ctx, 5));
    // 0x143404: 0xfc640050  sd          $a0, 0x50($v1)
    ctx->pc = 0x143404u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 80), GPR_U64(ctx, 4));
    // 0x143408: 0xfc6200b8  sd          $v0, 0xB8($v1)
    ctx->pc = 0x143408u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 184), GPR_U64(ctx, 2));
    // 0x14340c: 0xfc620070  sd          $v0, 0x70($v1)
    ctx->pc = 0x14340cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 112), GPR_U64(ctx, 2));
    // 0x143410: 0xfc620080  sd          $v0, 0x80($v1)
    ctx->pc = 0x143410u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 128), GPR_U64(ctx, 2));
    // 0x143414: 0xc04fe92  jal         func_13FA48
    ctx->pc = 0x143414u;
    SET_GPR_U32(ctx, 31, 0x14341Cu);
    ctx->pc = 0x143418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143414u;
            // 0x143418: 0xfc600090  sd          $zero, 0x90($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 144), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA48u;
    if (runtime->hasFunction(0x13FA48u)) {
        auto targetFn = runtime->lookupFunction(0x13FA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14341Cu; }
        if (ctx->pc != 0x14341Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa48_0x13fa78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14341Cu; }
        if (ctx->pc != 0x14341Cu) { return; }
    }
    ctx->pc = 0x14341Cu;
    // 0x14341c: 0xc04fd78  jal         func_13F5E0
    ctx->pc = 0x14341Cu;
    SET_GPR_U32(ctx, 31, 0x143424u);
    ctx->pc = 0x13F5E0u;
    if (runtime->hasFunction(0x13F5E0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143424u; }
        if (ctx->pc != 0x143424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f5e0_0x13f648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143424u; }
        if (ctx->pc != 0x143424u) { return; }
    }
    ctx->pc = 0x143424u;
    // 0x143424: 0xc04fd50  jal         func_13F540
    ctx->pc = 0x143424u;
    SET_GPR_U32(ctx, 31, 0x14342Cu);
    ctx->pc = 0x143428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143424u;
            // 0x143428: 0x3c041000  lui         $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F540u;
    if (runtime->hasFunction(0x13F540u)) {
        auto targetFn = runtime->lookupFunction(0x13F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14342Cu; }
        if (ctx->pc != 0x14342Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0013f540_0x13f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14342Cu; }
        if (ctx->pc != 0x14342Cu) { return; }
    }
    ctx->pc = 0x14342Cu;
    // 0x14342c: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x14342cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x143430: 0x8e63dd50  lw          $v1, -0x22B0($s3)
    ctx->pc = 0x143430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294958416)));
    // 0x143434: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x143434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x143438: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x143438u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x14343c: 0x39900  sll         $s3, $v1, 4
    ctx->pc = 0x14343cu;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x143440: 0x4a100  sll         $s4, $a0, 4
    ctx->pc = 0x143440u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x143444: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x143444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x143448: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x143448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x14344c: 0xc04fe88  jal         func_13FA20
    ctx->pc = 0x14344Cu;
    SET_GPR_U32(ctx, 31, 0x143454u);
    ctx->pc = 0x143450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14344Cu;
            // 0x143450: 0xae02f168  sw          $v0, -0xE98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA20u;
    if (runtime->hasFunction(0x13FA20u)) {
        auto targetFn = runtime->lookupFunction(0x13FA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143454u; }
        if (ctx->pc != 0x143454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa20_0x13fa48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143454u; }
        if (ctx->pc != 0x143454u) { return; }
    }
    ctx->pc = 0x143454u;
    // 0x143454: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x143454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x143458: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x143458u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
    // 0x14345c: 0xac510004  sw          $s1, 0x4($v0)
    ctx->pc = 0x14345cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
    // 0x143460: 0xac560008  sw          $s6, 0x8($v0)
    ctx->pc = 0x143460u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 22));
    // 0x143464: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x143464u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x143468: 0x8e03f168  lw          $v1, -0xE98($s0)
    ctx->pc = 0x143468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x14346c: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x14346cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x143470: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x143470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x143474: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x143474u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x143478: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x143478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x14347c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x14347cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x143480: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x143480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x143484: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x143484u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x143488: 0xac730020  sw          $s3, 0x20($v1)
    ctx->pc = 0x143488u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 19));
    // 0x14348c: 0xae05f168  sw          $a1, -0xE98($s0)
    ctx->pc = 0x14348cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 5));
    // 0x143490: 0xac940004  sw          $s4, 0x4($a0)
    ctx->pc = 0x143490u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 20));
    // 0x143494: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x143494u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x143498: 0xc04fe92  jal         func_13FA48
    ctx->pc = 0x143498u;
    SET_GPR_U32(ctx, 31, 0x1434A0u);
    ctx->pc = 0x14349Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143498u;
            // 0x14349c: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA48u;
    if (runtime->hasFunction(0x13FA48u)) {
        auto targetFn = runtime->lookupFunction(0x13FA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1434A0u; }
        if (ctx->pc != 0x1434A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa48_0x13fa78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1434A0u; }
        if (ctx->pc != 0x1434A0u) { return; }
    }
    ctx->pc = 0x1434A0u;
    // 0x1434a0: 0xc04fd78  jal         func_13F5E0
    ctx->pc = 0x1434A0u;
    SET_GPR_U32(ctx, 31, 0x1434A8u);
    ctx->pc = 0x13F5E0u;
    if (runtime->hasFunction(0x13F5E0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1434A8u; }
        if (ctx->pc != 0x1434A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f5e0_0x13f648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1434A8u; }
        if (ctx->pc != 0x1434A8u) { return; }
    }
    ctx->pc = 0x1434A8u;
    // 0x1434a8: 0xc04fd50  jal         func_13F540
    ctx->pc = 0x1434A8u;
    SET_GPR_U32(ctx, 31, 0x1434B0u);
    ctx->pc = 0x1434ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1434A8u;
            // 0x1434ac: 0x3c041000  lui         $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F540u;
    if (runtime->hasFunction(0x13F540u)) {
        auto targetFn = runtime->lookupFunction(0x13F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1434B0u; }
        if (ctx->pc != 0x1434B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0013f540_0x13f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1434B0u; }
        if (ctx->pc != 0x1434B0u) { return; }
    }
    ctx->pc = 0x1434B0u;
    // 0x1434b0: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x1434b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x1434b4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1434b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1434b8: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x1434b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x1434bc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1434bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1434c0: 0xc04fe88  jal         func_13FA20
    ctx->pc = 0x1434C0u;
    SET_GPR_U32(ctx, 31, 0x1434C8u);
    ctx->pc = 0x1434C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1434C0u;
            // 0x1434c4: 0xae02f168  sw          $v0, -0xE98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA20u;
    if (runtime->hasFunction(0x13FA20u)) {
        auto targetFn = runtime->lookupFunction(0x13FA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1434C8u; }
        if (ctx->pc != 0x1434C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa20_0x13fa48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1434C8u; }
        if (ctx->pc != 0x1434C8u) { return; }
    }
    ctx->pc = 0x1434C8u;
    // 0x1434c8: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x1434c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x1434cc: 0x34038002  ori         $v1, $zero, 0x8002
    ctx->pc = 0x1434ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32770);
    // 0x1434d0: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x1434d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
    // 0x1434d4: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1434d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x1434d8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1434d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1434dc: 0x2407004d  addiu       $a3, $zero, 0x4D
    ctx->pc = 0x1434dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 77));
    // 0x1434e0: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1434e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1434e4: 0xac5e0004  sw          $fp, 0x4($v0)
    ctx->pc = 0x1434e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 30));
    // 0x1434e8: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1434e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x1434ec: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1434ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1434f0: 0x8e42dd58  lw          $v0, -0x22A8($s2)
    ctx->pc = 0x1434f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294958424)));
    // 0x1434f4: 0x9ca3f1a8  lwu         $v1, -0xE58($a1)
    ctx->pc = 0x1434f4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 5), 4294963624)));
    // 0x1434f8: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x1434f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
    // 0x1434fc: 0x9c84f1ac  lwu         $a0, -0xE54($a0)
    ctx->pc = 0x1434fcu;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 4), 4294963628)));
    // 0x143500: 0x3042003f  andi        $v0, $v0, 0x3F
    ctx->pc = 0x143500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)63);
    // 0x143504: 0x8e05f168  lw          $a1, -0xE98($s0)
    ctx->pc = 0x143504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x143508: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x143508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x14350c: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x14350cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
    // 0x143510: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x143510u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x143514: 0xfca70018  sd          $a3, 0x18($a1)
    ctx->pc = 0x143514u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 24), GPR_U64(ctx, 7));
    // 0x143518: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x143518u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x14351c: 0x24ae0030  addiu       $t6, $a1, 0x30
    ctx->pc = 0x14351cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x143520: 0xfca40010  sd          $a0, 0x10($a1)
    ctx->pc = 0x143520u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 4));
    // 0x143524: 0x3c030033  lui         $v1, 0x33
    ctx->pc = 0x143524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)51 << 16));
    // 0x143528: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x143528u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x14352c: 0x2407004f  addiu       $a3, $zero, 0x4F
    ctx->pc = 0x14352cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x143530: 0x9c62f19c  lwu         $v0, -0xE64($v1)
    ctx->pc = 0x143530u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 3), 4294963612)));
    // 0x143534: 0x9c83f1a0  lwu         $v1, -0xE60($a0)
    ctx->pc = 0x143534u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 4), 4294963616)));
    // 0x143538: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x143538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x14353c: 0xae0ef168  sw          $t6, -0xE98($s0)
    ctx->pc = 0x14353cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 14));
    // 0x143540: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x143540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x143544: 0xfca70028  sd          $a3, 0x28($a1)
    ctx->pc = 0x143544u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 7));
    // 0x143548: 0xc04fe92  jal         func_13FA48
    ctx->pc = 0x143548u;
    SET_GPR_U32(ctx, 31, 0x143550u);
    ctx->pc = 0x14354Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143548u;
            // 0x14354c: 0xfca30020  sd          $v1, 0x20($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA48u;
    if (runtime->hasFunction(0x13FA48u)) {
        auto targetFn = runtime->lookupFunction(0x13FA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143550u; }
        if (ctx->pc != 0x143550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa48_0x13fa78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143550u; }
        if (ctx->pc != 0x143550u) { return; }
    }
    ctx->pc = 0x143550u;
    // 0x143550: 0xc04fd78  jal         func_13F5E0
    ctx->pc = 0x143550u;
    SET_GPR_U32(ctx, 31, 0x143558u);
    ctx->pc = 0x13F5E0u;
    if (runtime->hasFunction(0x13F5E0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143558u; }
        if (ctx->pc != 0x143558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f5e0_0x13f648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143558u; }
        if (ctx->pc != 0x143558u) { return; }
    }
    ctx->pc = 0x143558u;
    // 0x143558: 0xc04fd50  jal         func_13F540
    ctx->pc = 0x143558u;
    SET_GPR_U32(ctx, 31, 0x143560u);
    ctx->pc = 0x14355Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143558u;
            // 0x14355c: 0x3c041000  lui         $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F540u;
    if (runtime->hasFunction(0x13F540u)) {
        auto targetFn = runtime->lookupFunction(0x13F540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143560u; }
        if (ctx->pc != 0x143560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FUN_0013f540_0x13f540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143560u; }
        if (ctx->pc != 0x143560u) { return; }
    }
    ctx->pc = 0x143560u;
    // 0x143560: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x143560u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x143564: 0x8e43dd58  lw          $v1, -0x22A8($s2)
    ctx->pc = 0x143564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294958424)));
    // 0x143568: 0x8ee40004  lw          $a0, 0x4($s7)
    ctx->pc = 0x143568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 4)));
    // 0x14356c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x14356cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x143570: 0x39900  sll         $s3, $v1, 4
    ctx->pc = 0x143570u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x143574: 0x4a100  sll         $s4, $a0, 4
    ctx->pc = 0x143574u;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x143578: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x143578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x14357c: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x14357cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x143580: 0xc04fe88  jal         func_13FA20
    ctx->pc = 0x143580u;
    SET_GPR_U32(ctx, 31, 0x143588u);
    ctx->pc = 0x143584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x143580u;
            // 0x143584: 0xae02f168  sw          $v0, -0xE98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA20u;
    if (runtime->hasFunction(0x13FA20u)) {
        auto targetFn = runtime->lookupFunction(0x13FA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143588u; }
        if (ctx->pc != 0x143588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa20_0x13fa48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x143588u; }
        if (ctx->pc != 0x143588u) { return; }
    }
    ctx->pc = 0x143588u;
    // 0x143588: 0x8e02f168  lw          $v0, -0xE98($s0)
    ctx->pc = 0x143588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x14358c: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x14358cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
    // 0x143590: 0xac510004  sw          $s1, 0x4($v0)
    ctx->pc = 0x143590u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
    // 0x143594: 0xac560008  sw          $s6, 0x8($v0)
    ctx->pc = 0x143594u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 22));
    // 0x143598: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x143598u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x14359c: 0x8e03f168  lw          $v1, -0xE98($s0)
    ctx->pc = 0x14359cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294963560)));
    // 0x1435a0: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x1435a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
    // 0x1435a4: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x1435a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x1435a8: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1435a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    // 0x1435ac: 0x24640020  addiu       $a0, $v1, 0x20
    ctx->pc = 0x1435acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x1435b0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1435b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1435b4: 0x24650030  addiu       $a1, $v1, 0x30
    ctx->pc = 0x1435b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x1435b8: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x1435b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x1435bc: 0xac730020  sw          $s3, 0x20($v1)
    ctx->pc = 0x1435bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 19));
    // 0x1435c0: 0xae05f168  sw          $a1, -0xE98($s0)
    ctx->pc = 0x1435c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294963560), GPR_U32(ctx, 5));
    // 0x1435c4: 0xac940004  sw          $s4, 0x4($a0)
    ctx->pc = 0x1435c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 20));
    // 0x1435c8: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x1435c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x1435cc: 0xc04fe92  jal         func_13FA48
    ctx->pc = 0x1435CCu;
    SET_GPR_U32(ctx, 31, 0x1435D4u);
    ctx->pc = 0x1435D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1435CCu;
            // 0x1435d0: 0xac800008  sw          $zero, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA48u;
    if (runtime->hasFunction(0x13FA48u)) {
        auto targetFn = runtime->lookupFunction(0x13FA48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1435D4u; }
        if (ctx->pc != 0x1435D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13fa48_0x13fa78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1435D4u; }
        if (ctx->pc != 0x1435D4u) { return; }
    }
    ctx->pc = 0x1435D4u;
    // 0x1435d4: 0xc04fd78  jal         func_13F5E0
    ctx->pc = 0x1435D4u;
    SET_GPR_U32(ctx, 31, 0x1435DCu);
    ctx->pc = 0x13F5E0u;
    if (runtime->hasFunction(0x13F5E0u)) {
        auto targetFn = runtime->lookupFunction(0x13F5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1435DCu; }
        if (ctx->pc != 0x1435DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f5e0_0x13f648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1435DCu; }
        if (ctx->pc != 0x1435DCu) { return; }
    }
    ctx->pc = 0x1435DCu;
    // 0x1435dc: 0xc05021e  jal         func_140878
    ctx->pc = 0x1435DCu;
    SET_GPR_U32(ctx, 31, 0x1435E4u);
    ctx->pc = 0x140878u;
    if (runtime->hasFunction(0x140878u)) {
        auto targetFn = runtime->lookupFunction(0x140878u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1435E4u; }
        if (ctx->pc != 0x1435E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140878_0x140878(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1435E4u; }
        if (ctx->pc != 0x1435E4u) { return; }
    }
    ctx->pc = 0x1435E4u;
    // 0x1435e4: 0xc04fd92  jal         func_13F648
    ctx->pc = 0x1435E4u;
    SET_GPR_U32(ctx, 31, 0x1435ECu);
    ctx->pc = 0x13F648u;
    if (runtime->hasFunction(0x13F648u)) {
        auto targetFn = runtime->lookupFunction(0x13F648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1435ECu; }
        if (ctx->pc != 0x1435ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_13f648_0x13f6b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1435ECu; }
        if (ctx->pc != 0x1435ECu) { return; }
    }
    ctx->pc = 0x1435ECu;
    // 0x1435ec: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x1435ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1435f0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x1435f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1435f4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x1435f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1435f8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x1435f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1435fc: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1435fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x143600: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x143600u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x143604: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x143604u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x143608: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x143608u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14360c: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x14360cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x143610: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x143610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x143614: 0x3e00008  jr          $ra
    ctx->pc = 0x143614u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x143618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x143614u;
            // 0x143618: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x143260u: goto label_143260;
            default: break;
        }
        return;
    }
    ctx->pc = 0x14361Cu;
    // 0x14361c: 0x0  nop
    ctx->pc = 0x14361cu;
    // NOP
}
