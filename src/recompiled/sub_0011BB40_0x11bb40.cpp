#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0011BB40
// Address: 0x11bb40 - 0x11bcb8
void sub_0011BB40_0x11bb40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011BB40_0x11bb40");
#endif

    ctx->pc = 0x11bb40u;

label_11bb40:
    // 0x11bb40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x11bb40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x11bb44: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x11bb44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x11bb48: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x11bb48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x11bb4c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x11bb4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bb50: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x11bb50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x11bb54: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x11bb54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x11bb58: 0x26440014  addiu       $a0, $s2, 0x14
    ctx->pc = 0x11bb58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    // 0x11bb5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11bb5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11bb60: 0xe7b50058  swc1        $f21, 0x58($sp)
    ctx->pc = 0x11bb60u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x11bb64: 0xe7b40050  swc1        $f20, 0x50($sp)
    ctx->pc = 0x11bb64u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x11bb68: 0x8e430014  lw          $v1, 0x14($s2)
    ctx->pc = 0x11bb68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x11bb6c: 0x10640022  beq         $v1, $a0, . + 4 + (0x22 << 2)
    ctx->pc = 0x11BB6Cu;
    {
        const bool branch_taken_0x11bb6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x11BB70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BB6Cu;
            // 0x11bb70: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb6c) {
            ctx->pc = 0x11BBF8u;
            goto label_11bbf8;
        }
    }
    ctx->pc = 0x11BB74u;
    // 0x11bb74: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x11bb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_11bb78:
    // 0x11bb78: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x11bb78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x11bb7c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x11BB7Cu;
    {
        const bool branch_taken_0x11bb7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BB7Cu;
            // 0x11bb80: 0x24710008  addiu       $s1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bb7c) {
            ctx->pc = 0x11BBECu;
            goto label_11bbec;
        }
    }
    ctx->pc = 0x11BB84u;
    // 0x11bb84: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x11bb84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x11bb88: 0x5211001c  beql        $s0, $s1, . + 4 + (0x1C << 2)
    ctx->pc = 0x11BB88u;
    {
        const bool branch_taken_0x11bb88 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        if (branch_taken_0x11bb88) {
            ctx->pc = 0x11BB8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11BB88u;
            // 0x11bb8c: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11BBFCu;
            goto label_11bbfc;
        }
    }
    ctx->pc = 0x11BB90u;
    // 0x11bb90: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x11bb90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x11bb94: 0x0  nop
    ctx->pc = 0x11bb94u;
    // NOP
label_11bb98:
    // 0x11bb98: 0x8e030038  lw          $v1, 0x38($s0)
    ctx->pc = 0x11bb98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x11bb9c: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x11bb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x11bba0: 0xc4400080  lwc1        $f0, 0x80($v0)
    ctx->pc = 0x11bba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11bba4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x11bba4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x11bba8: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x11bba8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x11bbac: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11BBACu;
    {
        const bool branch_taken_0x11bbac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BBB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BBACu;
            // 0x11bbb0: 0xc615000c  lwc1        $f21, 0xC($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bbac) {
            ctx->pc = 0x11BBBCu;
            goto label_11bbbc;
        }
    }
    ctx->pc = 0x11BBB4u;
    // 0x11bbb4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11BBB4u;
    {
        const bool branch_taken_0x11bbb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BBB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BBB4u;
            // 0x11bbb8: 0xc474001c  lwc1        $f20, 0x1C($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bbb4) {
            ctx->pc = 0x11BBC0u;
            goto label_11bbc0;
        }
    }
    ctx->pc = 0x11BBBCu;
label_11bbbc:
    // 0x11bbbc: 0x4600ad06  mov.s       $f20, $f21
    ctx->pc = 0x11bbbcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
label_11bbc0:
    // 0x11bbc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11bbc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bbc4: 0xc08f2a4  jal         func_23CA90
    ctx->pc = 0x11BBC4u;
    SET_GPR_U32(ctx, 31, 0x11BBCCu);
    ctx->pc = 0x11BBC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BBC4u;
            // 0x11bbc8: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23CA90u;
    if (runtime->hasFunction(0x23CA90u)) {
        auto targetFn = runtime->lookupFunction(0x23CA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BBCCu; }
        if (ctx->pc != 0x11BBCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23ca90_0x23cab8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BBCCu; }
        if (ctx->pc != 0x11BBCCu) { return; }
    }
    ctx->pc = 0x11BBCCu;
    // 0x11bbcc: 0x4600a000  add.s       $f0, $f20, $f0
    ctx->pc = 0x11bbccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x11bbd0: 0x4600a829  min.s       $f0, $f21, $f0
    ctx->pc = 0x11bbd0u;
    ctx->f[0] = std::min(ctx->f[21], ctx->f[0]);
    // 0x11bbd4: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x11bbd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x11bbd8: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x11bbd8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x11bbdc: 0x1611ffee  bne         $s0, $s1, . + 4 + (-0x12 << 2)
    ctx->pc = 0x11BBDCu;
    {
        const bool branch_taken_0x11bbdc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x11BBE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BBDCu;
            // 0x11bbe0: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bbdc) {
            ctx->pc = 0x11BB98u;
            runtime->cooperativeGuestYield();
            goto label_11bb98;
        }
    }
    ctx->pc = 0x11BBE4u;
    // 0x11bbe4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11BBE4u;
    {
        const bool branch_taken_0x11bbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BBE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BBE4u;
            // 0x11bbe8: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bbe4) {
            ctx->pc = 0x11BBFCu;
            goto label_11bbfc;
        }
    }
    ctx->pc = 0x11BBECu;
label_11bbec:
    // 0x11bbec: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x11bbecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11bbf0: 0x5464ffe1  bnel        $v1, $a0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x11BBF0u;
    {
        const bool branch_taken_0x11bbf0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x11bbf0) {
            ctx->pc = 0x11BBF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11BBF0u;
            // 0x11bbf4: 0x8c620010  lw          $v0, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11BB78u;
            runtime->cooperativeGuestYield();
            goto label_11bb78;
        }
    }
    ctx->pc = 0x11BBF8u;
label_11bbf8:
    // 0x11bbf8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x11bbf8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_11bbfc:
    // 0x11bbfc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x11bbfcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11bc00: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x11bc00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11bc04: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x11bc04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11bc08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11bc08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11bc0c: 0xc7b50058  lwc1        $f21, 0x58($sp)
    ctx->pc = 0x11bc0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x11bc10: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x11bc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11bc14: 0x3e00008  jr          $ra
    ctx->pc = 0x11BC14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BC18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BC14u;
            // 0x11bc18: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11BB40u: goto label_11bb40;
            case 0x11BB78u: goto label_11bb78;
            case 0x11BB98u: goto label_11bb98;
            case 0x11BBBCu: goto label_11bbbc;
            case 0x11BBC0u: goto label_11bbc0;
            case 0x11BBECu: goto label_11bbec;
            case 0x11BBF8u: goto label_11bbf8;
            case 0x11BBFCu: goto label_11bbfc;
            case 0x11BC50u: goto label_11bc50;
            case 0x11BC70u: goto label_11bc70;
            case 0x11BC88u: goto label_11bc88;
            case 0x11BC94u: goto label_11bc94;
            case 0x11BCA0u: goto label_11bca0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11BC1Cu;
    // 0x11bc1c: 0x0  nop
    ctx->pc = 0x11bc1cu;
    // NOP
    // 0x11bc20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11bc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11bc24: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x11bc24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x11bc28: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x11bc28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x11bc2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11bc2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bc30: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11bc30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11bc34: 0x26320014  addiu       $s2, $s1, 0x14
    ctx->pc = 0x11bc34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x11bc38: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x11bc38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x11bc3c: 0x8e300014  lw          $s0, 0x14($s1)
    ctx->pc = 0x11bc3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x11bc40: 0x52120014  beql        $s0, $s2, . + 4 + (0x14 << 2)
    ctx->pc = 0x11BC40u;
    {
        const bool branch_taken_0x11bc40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        if (branch_taken_0x11bc40) {
            ctx->pc = 0x11BC44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11BC40u;
            // 0x11bc44: 0x8e24006c  lw          $a0, 0x6C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11BC94u;
            goto label_11bc94;
        }
    }
    ctx->pc = 0x11BC48u;
    // 0x11bc48: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x11bc48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x11bc4c: 0x0  nop
    ctx->pc = 0x11bc4cu;
    // NOP
label_11bc50:
    // 0x11bc50: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x11bc50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x11bc54: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11BC54u;
    {
        const bool branch_taken_0x11bc54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BC58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BC54u;
            // 0x11bc58: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bc54) {
            ctx->pc = 0x11BC70u;
            goto label_11bc70;
        }
    }
    ctx->pc = 0x11BC5Cu;
    // 0x11bc5c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11bc5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11bc60: 0xc041ee4  jal         func_107B90
    ctx->pc = 0x11BC60u;
    SET_GPR_U32(ctx, 31, 0x11BC68u);
    ctx->pc = 0x11BC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BC60u;
            // 0x11bc64: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107B90u;
    if (runtime->hasFunction(0x107B90u)) {
        auto targetFn = runtime->lookupFunction(0x107B90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BC68u; }
        if (ctx->pc != 0x11BC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00107B90_0x107b90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11BC68u; }
        if (ctx->pc != 0x11BC68u) { return; }
    }
    ctx->pc = 0x11BC68u;
    // 0x11bc68: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x11BC68u;
    {
        const bool branch_taken_0x11bc68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x11bc68) {
            ctx->pc = 0x11BC88u;
            goto label_11bc88;
        }
    }
    ctx->pc = 0x11BC70u;
label_11bc70:
    // 0x11bc70: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x11bc70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x11bc74: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x11bc74u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x11bc78: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x11bc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x11bc7c: 0x40f809  jalr        $v0
    ctx->pc = 0x11BC7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11BC84u);
        ctx->pc = 0x11BC80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BC7Cu;
            // 0x11bc80: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x11BC84u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11BB40u: goto label_11bb40;
            case 0x11BB78u: goto label_11bb78;
            case 0x11BB98u: goto label_11bb98;
            case 0x11BBBCu: goto label_11bbbc;
            case 0x11BBC0u: goto label_11bbc0;
            case 0x11BBECu: goto label_11bbec;
            case 0x11BBF8u: goto label_11bbf8;
            case 0x11BBFCu: goto label_11bbfc;
            case 0x11BC50u: goto label_11bc50;
            case 0x11BC70u: goto label_11bc70;
            case 0x11BC88u: goto label_11bc88;
            case 0x11BC94u: goto label_11bc94;
            case 0x11BCA0u: goto label_11bca0;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x11BC84u; }
            if (ctx->pc != 0x11BC84u) { return; }
        }
        }
    }
    ctx->pc = 0x11BC84u;
    // 0x11bc84: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x11bc84u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_11bc88:
    // 0x11bc88: 0x5612fff1  bnel        $s0, $s2, . + 4 + (-0xF << 2)
    ctx->pc = 0x11BC88u;
    {
        const bool branch_taken_0x11bc88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 18));
        if (branch_taken_0x11bc88) {
            ctx->pc = 0x11BC8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x11BC88u;
            // 0x11bc8c: 0x8e020010  lw          $v0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x11BC50u;
            runtime->cooperativeGuestYield();
            goto label_11bc50;
        }
    }
    ctx->pc = 0x11BC90u;
    // 0x11bc90: 0x8e24006c  lw          $a0, 0x6C($s1)
    ctx->pc = 0x11bc90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_11bc94:
    // 0x11bc94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11bc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11bc98: 0xc046ed0  jal         func_11BB40
    ctx->pc = 0x11BC98u;
    SET_GPR_U32(ctx, 31, 0x11BCA0u);
    ctx->pc = 0x11BC9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11BC98u;
            // 0x11bc9c: 0xac820100  sw          $v0, 0x100($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11BB40u;
    runtime->cooperativeGuestYield();
    goto label_11bb40;
    ctx->pc = 0x11BCA0u;
label_11bca0:
    // 0x11bca0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x11bca0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11bca4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x11bca4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11bca8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x11bca8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11bcac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11bcacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11bcb0: 0x3e00008  jr          $ra
    ctx->pc = 0x11BCB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11BCB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11BCB0u;
            // 0x11bcb4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11BB40u: goto label_11bb40;
            case 0x11BB78u: goto label_11bb78;
            case 0x11BB98u: goto label_11bb98;
            case 0x11BBBCu: goto label_11bbbc;
            case 0x11BBC0u: goto label_11bbc0;
            case 0x11BBECu: goto label_11bbec;
            case 0x11BBF8u: goto label_11bbf8;
            case 0x11BBFCu: goto label_11bbfc;
            case 0x11BC50u: goto label_11bc50;
            case 0x11BC70u: goto label_11bc70;
            case 0x11BC88u: goto label_11bc88;
            case 0x11BC94u: goto label_11bc94;
            case 0x11BCA0u: goto label_11bca0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11BCB8u;
}
