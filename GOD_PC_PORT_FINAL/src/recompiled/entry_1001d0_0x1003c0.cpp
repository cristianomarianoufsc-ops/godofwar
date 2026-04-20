#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_1001d0
// Address: 0x1001d0 - 0x1003c0
void entry_1001d0_0x1003c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_1001d0_0x1003c0");
#endif

    // Entry alternativo em 0x100200 (crt0 real) — acionado pelo stub_hardware_init.
    // Deve ser verificado ANTES de ctx->pc ser sobrescrito pelo TLB init (0x1001d0).
    if (ctx->pc == 0x100200u) goto label_100200;

    ctx->pc = 0x1001d0u;

    // 0x1001d0: 0x80a65ac  j           func_2996B0
    ctx->pc = 0x1001D0u;
    ctx->pc = 0x1001D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1001D0u;
            // 0x1001d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2996B0u;
    if (runtime->hasFunction(0x2996B0u)) {
        auto targetFn = runtime->lookupFunction(0x2996B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        entry_2996b0_0x2996e0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1001D8u;
    // 0x1001d8: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x1001d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x1001dc: 0xc  syscall     0
    ctx->pc = 0x1001dcu;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x1001e0: 0x0  nop
    ctx->pc = 0x1001e0u;
    // NOP
    // 0x1001e4: 0x0  nop
    ctx->pc = 0x1001e4u;
    // NOP
    // 0x1001e8: 0x0  nop
    ctx->pc = 0x1001e8u;
    // NOP
    // 0x1001ec: 0x0  nop
    ctx->pc = 0x1001ecu;
    // NOP
    // 0x1001f0: 0x0  nop
    ctx->pc = 0x1001f0u;
    // NOP
    // 0x1001f4: 0x0  nop
    ctx->pc = 0x1001f4u;
    // NOP
    // 0x1001f8: 0x0  nop
    ctx->pc = 0x1001f8u;
    // NOP
    // 0x1001fc: 0x0  nop
    ctx->pc = 0x1001fcu;
    // NOP
    // 0x100200: 0x27bdff70  addiu       $sp, $sp, -0x90
    label_100200:
    ctx->pc = 0x100200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x100204: 0x3c03dead  lui         $v1, 0xDEAD
    ctx->pc = 0x100204u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57005 << 16));
    // 0x100208: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x100208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x10020c: 0x3463beef  ori         $v1, $v1, 0xBEEF
    ctx->pc = 0x10020cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)48879);
    // 0x100210: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x100210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
    // 0x100214: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x100214u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100218: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x100218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x10021c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x10021cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100220: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x100220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
    // 0x100224: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x100224u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100228: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x100228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
    // 0x10022c: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x10022cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x100230: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x100230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x100234: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x100234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
    // 0x100238: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x100238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
    // 0x10023c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10023cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x100240: 0xa6640004  sh          $a0, 0x4($s3)
    ctx->pc = 0x100240u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 4), (uint16_t)GPR_U32(ctx, 4));
    // 0x100244: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x100244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x100248: 0x26640014  addiu       $a0, $s3, 0x14
    ctx->pc = 0x100248u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x10024c: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x10024cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x100250: 0x51402  srl         $v0, $a1, 16
    ctx->pc = 0x100250u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 16));
    // 0x100254: 0xae60000c  sw          $zero, 0xC($s3)
    ctx->pc = 0x100254u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 0));
    // 0x100258: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x100258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x10025c: 0xae630010  sw          $v1, 0x10($s3)
    ctx->pc = 0x10025cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 3));
    // 0x100260: 0xa6650000  sh          $a1, 0x0($s3)
    ctx->pc = 0x100260u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x100264: 0xc08e43e  jal         func_2390F8
    ctx->pc = 0x100264u;
    SET_GPR_U32(ctx, 31, 0x10026Cu);
    ctx->pc = 0x100268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100264u;
            // 0x100268: 0xa6620002  sh          $v0, 0x2($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2390F8u;
    if (runtime->hasFunction(0x2390F8u)) {
        auto targetFn = runtime->lookupFunction(0x2390F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10026Cu; }
        if (ctx->pc != 0x10026Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2390f8_0x239100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10026Cu; }
        if (ctx->pc != 0x10026Cu) { return; }
    }
    ctx->pc = 0x10026Cu;
    // 0x10026c: 0x26620020  addiu       $v0, $s3, 0x20
    ctx->pc = 0x10026cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x100270: 0xae71001c  sw          $s1, 0x1C($s3)
    ctx->pc = 0x100270u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 17));
    // 0x100274: 0xae620020  sw          $v0, 0x20($s3)
    ctx->pc = 0x100274u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
    // 0x100278: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x100278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10027c: 0xa6700006  sh          $s0, 0x6($s3)
    ctx->pc = 0x10027cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 6), (uint16_t)GPR_U32(ctx, 16));
    // 0x100280: 0xae600018  sw          $zero, 0x18($s3)
    ctx->pc = 0x100280u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 0));
    // 0x100284: 0xc0403aa  jal         func_100EA8
    ctx->pc = 0x100284u;
    SET_GPR_U32(ctx, 31, 0x10028Cu);
    ctx->pc = 0x100288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100284u;
            // 0x100288: 0xac420004  sw          $v0, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100EA8u;
    if (runtime->hasFunction(0x100EA8u)) {
        auto targetFn = runtime->lookupFunction(0x100EA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10028Cu; }
        if (ctx->pc != 0x10028Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100EA8_0x100ea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10028Cu; }
        if (ctx->pc != 0x10028Cu) { return; }
    }
    ctx->pc = 0x10028Cu;
    // 0x10028c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10028cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100290: 0x8e76001c  lw          $s6, 0x1C($s3)
    ctx->pc = 0x100290u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x100294: 0xae62002c  sw          $v0, 0x2C($s3)
    ctx->pc = 0x100294u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 2));
    // 0x100298: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x100298u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x10029c: 0xae620028  sw          $v0, 0x28($s3)
    ctx->pc = 0x10029cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 2));
    // 0x1002a0: 0xae600030  sw          $zero, 0x30($s3)
    ctx->pc = 0x1002a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 0));
    // 0x1002a4: 0xae600034  sw          $zero, 0x34($s3)
    ctx->pc = 0x1002a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 0));
    // 0x1002a8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1002a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1002ac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x1002acu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1002b0: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x1002b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x1002b4: 0xe660003c  swc1        $f0, 0x3C($s3)
    ctx->pc = 0x1002b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 60), bits); }
    // 0x1002b8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1002b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x1002bc: 0x14400034  bnez        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x1002BCu;
    {
        const bool branch_taken_0x1002bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1002C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1002BCu;
            // 0x1002c0: 0xae600038  sw          $zero, 0x38($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1002bc) {
            ctx->pc = 0x100390u;
            goto label_100390;
        }
    }
    ctx->pc = 0x1002C4u;
    // 0x1002c4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x1002C4u;
    {
        const bool branch_taken_0x1002c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1002C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1002C4u;
            // 0x1002c8: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1002c4) {
            ctx->pc = 0x100368u;
            goto label_100368;
        }
    }
    ctx->pc = 0x1002CCu;
    // 0x1002cc: 0x0  nop
    ctx->pc = 0x1002ccu;
    // NOP
label_1002d0:
    // 0x1002d0: 0xc08e484  jal         func_239210
    ctx->pc = 0x1002D0u;
    SET_GPR_U32(ctx, 31, 0x1002D8u);
    ctx->pc = 0x1002D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1002D0u;
            // 0x1002d4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239210u;
    if (runtime->hasFunction(0x239210u)) {
        auto targetFn = runtime->lookupFunction(0x239210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1002D8u; }
        if (ctx->pc != 0x1002D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239210_0x239228(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1002D8u; }
        if (ctx->pc != 0x1002D8u) { return; }
    }
    ctx->pc = 0x1002D8u;
    // 0x1002d8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1002d8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1002dc: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x1002dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x1002e0: 0x31443  sra         $v0, $v1, 17
    ctx->pc = 0x1002e0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 17));
    // 0x1002e4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1002e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x1002e8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1002e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1002ec: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x1002ECu;
    {
        const bool branch_taken_0x1002ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1002F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1002ECu;
            // 0x1002f0: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1002ec) {
            ctx->pc = 0x100364u;
            goto label_100364;
        }
    }
    ctx->pc = 0x1002F4u;
    // 0x1002f4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1002f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1002f8: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x1002F8u;
    {
        const bool branch_taken_0x1002f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1002f8) {
            ctx->pc = 0x1002FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1002F8u;
            // 0x1002fc: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x100368u;
            goto label_100368;
        }
    }
    ctx->pc = 0x100300u;
    // 0x100300: 0x26840014  addiu       $a0, $s4, 0x14
    ctx->pc = 0x100300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x100304: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x100304u;
    SET_GPR_U32(ctx, 31, 0x10030Cu);
    ctx->pc = 0x100308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100304u;
            // 0x100308: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10030Cu; }
        if (ctx->pc != 0x10030Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10030Cu; }
        if (ctx->pc != 0x10030Cu) { return; }
    }
    ctx->pc = 0x10030Cu;
    // 0x10030c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x10030cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100310: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x100310u;
    {
        const bool branch_taken_0x100310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x100314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100310u;
            // 0x100314: 0xae820014  sw          $v0, 0x14($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100310) {
            ctx->pc = 0x100350u;
            goto label_100350;
        }
    }
    ctx->pc = 0x100318u;
label_100318:
    // 0x100318: 0xc08e47a  jal         func_2391E8
    ctx->pc = 0x100318u;
    SET_GPR_U32(ctx, 31, 0x100320u);
    ctx->pc = 0x10031Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100318u;
            // 0x10031c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2391E8u;
    if (runtime->hasFunction(0x2391E8u)) {
        auto targetFn = runtime->lookupFunction(0x2391E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100320u; }
        if (ctx->pc != 0x100320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_2391e8_0x239200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100320u; }
        if (ctx->pc != 0x100320u) { return; }
    }
    ctx->pc = 0x100320u;
    // 0x100320: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x100320u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x100324: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x100324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100328: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x100328u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10032c: 0x26110024  addiu       $s1, $s0, 0x24
    ctx->pc = 0x10032cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x100330: 0xc05d5d0  jal         func_175740
    ctx->pc = 0x100330u;
    SET_GPR_U32(ctx, 31, 0x100338u);
    ctx->pc = 0x100334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100330u;
            // 0x100334: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175740u;
    if (runtime->hasFunction(0x175740u)) {
        auto targetFn = runtime->lookupFunction(0x175740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100338u; }
        if (ctx->pc != 0x100338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175740_0x175780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100338u; }
        if (ctx->pc != 0x100338u) { return; }
    }
    ctx->pc = 0x100338u;
    // 0x100338: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x100338u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10033c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10033cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100340: 0xc05d5e0  jal         func_175780
    ctx->pc = 0x100340u;
    SET_GPR_U32(ctx, 31, 0x100348u);
    ctx->pc = 0x100344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100340u;
            // 0x100344: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175780u;
    if (runtime->hasFunction(0x175780u)) {
        auto targetFn = runtime->lookupFunction(0x175780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100348u; }
        if (ctx->pc != 0x100348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_175780_0x1757d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100348u; }
        if (ctx->pc != 0x100348u) { return; }
    }
    ctx->pc = 0x100348u;
    // 0x100348: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x100348u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x10034c: 0xae120024  sw          $s2, 0x24($s0)
    ctx->pc = 0x10034cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 18));
label_100350:
    // 0x100350: 0xc08e480  jal         func_239200
    ctx->pc = 0x100350u;
    SET_GPR_U32(ctx, 31, 0x100358u);
    ctx->pc = 0x100354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100350u;
            // 0x100354: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239200u;
    if (runtime->hasFunction(0x239200u)) {
        auto targetFn = runtime->lookupFunction(0x239200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100358u; }
        if (ctx->pc != 0x100358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239200_0x239208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100358u; }
        if (ctx->pc != 0x100358u) { return; }
    }
    ctx->pc = 0x100358u;
    // 0x100358: 0x2a2102b  sltu        $v0, $s5, $v0
    ctx->pc = 0x100358u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x10035c: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x10035Cu;
    {
        const bool branch_taken_0x10035c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10035Cu;
            // 0x100360: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10035c) {
            ctx->pc = 0x100318u;
            runtime->cooperativeGuestYield();
            goto label_100318;
        }
    }
    ctx->pc = 0x100364u;
label_100364:
    // 0x100364: 0x26f70001  addiu       $s7, $s7, 0x1
    ctx->pc = 0x100364u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
label_100368:
    // 0x100368: 0xc08e482  jal         func_239208
    ctx->pc = 0x100368u;
    SET_GPR_U32(ctx, 31, 0x100370u);
    ctx->pc = 0x10036Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x100368u;
            // 0x10036c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239208u;
    if (runtime->hasFunction(0x239208u)) {
        auto targetFn = runtime->lookupFunction(0x239208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100370u; }
        if (ctx->pc != 0x100370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239208_0x239210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x100370u; }
        if (ctx->pc != 0x100370u) { return; }
    }
    ctx->pc = 0x100370u;
    // 0x100370: 0x2e2102b  sltu        $v0, $s7, $v0
    ctx->pc = 0x100370u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x100374: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x100374u;
    {
        const bool branch_taken_0x100374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x100378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x100374u;
            // 0x100378: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x100374) {
            ctx->pc = 0x1002D0u;
            runtime->cooperativeGuestYield();
            goto label_1002d0;
        }
    }
    ctx->pc = 0x10037Cu;
    // 0x10037c: 0x8e64001c  lw          $a0, 0x1C($s3)
    ctx->pc = 0x10037cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 28)));
    // 0x100380: 0x3c030020  lui         $v1, 0x20
    ctx->pc = 0x100380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32 << 16));
    // 0x100384: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x100384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x100388: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x100388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x10038c: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x10038cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
label_100390:
    // 0x100390: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x100390u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100394: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x100394u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x100398: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x100398u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x10039c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x10039cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1003a0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1003a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1003a4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1003a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1003a8: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x1003a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1003ac: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x1003acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1003b0: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x1003b0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1003b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1003b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1003b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1003B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1003BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1003B8u;
            // 0x1003bc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1002D0u: goto label_1002d0;
            case 0x100318u: goto label_100318;
            case 0x100350u: goto label_100350;
            case 0x100364u: goto label_100364;
            case 0x100368u: goto label_100368;
            case 0x100390u: goto label_100390;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1003C0u;
}
