#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00110EF0
// Address: 0x110ef0 - 0x111168
void sub_00110EF0_0x110ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00110EF0_0x110ef0");
#endif

    ctx->pc = 0x110ef0u;

    // 0x110ef0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x110ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x110ef4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x110ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x110ef8: 0x8c900060  lw          $s0, 0x60($a0)
    ctx->pc = 0x110ef8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x110efc: 0x8c820070  lw          $v0, 0x70($a0)
    ctx->pc = 0x110efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
    // 0x110f00: 0x8c980064  lw          $t8, 0x64($a0)
    ctx->pc = 0x110f00u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x110f04: 0x24590030  addiu       $t9, $v0, 0x30
    ctx->pc = 0x110f04u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x110f08: 0x24820084  addiu       $v0, $a0, 0x84
    ctx->pc = 0x110f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 132));
    // 0x110f0c: 0x24830104  addiu       $v1, $a0, 0x104
    ctx->pc = 0x110f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 260));
    // 0x110f10: 0x24850184  addiu       $a1, $a0, 0x184
    ctx->pc = 0x110f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 388));
    // 0x110f14: 0x8c8f0204  lw          $t7, 0x204($a0)
    ctx->pc = 0x110f14u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 516)));
    // 0x110f18: 0x11e00039  beqz        $t7, . + 4 + (0x39 << 2)
    ctx->pc = 0x110F18u;
    {
        const bool branch_taken_0x110f18 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x110F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110F18u;
            // 0x110f1c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110f18) {
            ctx->pc = 0x111000u;
            goto label_111000;
        }
    }
    ctx->pc = 0x110F20u;
    // 0x110f20: 0x60582d  daddu       $t3, $v1, $zero
    ctx->pc = 0x110f20u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110f24: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x110f24u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110f28: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x110f28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x110f2c: 0x0  nop
    ctx->pc = 0x110f2cu;
    // NOP
label_110f30:
    // 0x110f30: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x110f30u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x110f34: 0x240c000f  addiu       $t4, $zero, 0xF
    ctx->pc = 0x110f34u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x110f38: 0x95440000  lhu         $a0, 0x0($t2)
    ctx->pc = 0x110f38u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 0)));
    // 0x110f3c: 0x95630000  lhu         $v1, 0x0($t3)
    ctx->pc = 0x110f3cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x110f40: 0x441027  nor         $v0, $v0, $a0
    ctx->pc = 0x110f40u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 4)));
    // 0x110f44: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x110f44u;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
    // 0x110f48: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x110f48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x110f4c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x110f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x110f50: 0x27403  sra         $t6, $v0, 16
    ctx->pc = 0x110f50u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 2), 16));
    // 0x110f54: 0x36c03  sra         $t5, $v1, 16
    ctx->pc = 0x110f54u;
    SET_GPR_S32(ctx, 13, SRA32(GPR_S32(ctx, 3), 16));
    // 0x110f58: 0x1cd3025  or          $a2, $t6, $t5
    ctx->pc = 0x110f58u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x110f5c: 0x10c00022  beqz        $a2, . + 4 + (0x22 << 2)
    ctx->pc = 0x110F5Cu;
    {
        const bool branch_taken_0x110f5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x110F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110F5Cu;
            // 0x110f60: 0x83880  sll         $a3, $t0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110f5c) {
            ctx->pc = 0x110FE8u;
            goto label_110fe8;
        }
    }
    ctx->pc = 0x110F64u;
    // 0x110f64: 0xf8102b  sltu        $v0, $a3, $t8
    ctx->pc = 0x110f64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 24)) ? 1 : 0);
    // 0x110f68: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x110F68u;
    {
        const bool branch_taken_0x110f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110F68u;
            // 0x110f6c: 0x81200  sll         $v0, $t0, 8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110f68) {
            ctx->pc = 0x110FE8u;
            goto label_110fe8;
        }
    }
    ctx->pc = 0x110F70u;
    // 0x110f70: 0x502821  addu        $a1, $v0, $s0
    ctx->pc = 0x110f70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x110f74: 0x592021  addu        $a0, $v0, $t9
    ctx->pc = 0x110f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 25)));
    // 0x110f78: 0x1cc1024  and         $v0, $t6, $t4
    ctx->pc = 0x110f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & GPR_U64(ctx, 12));
    // 0x110f7c: 0x0  nop
    ctx->pc = 0x110f7cu;
    // NOP
label_110f80:
    // 0x110f80: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x110F80u;
    {
        const bool branch_taken_0x110f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110F80u;
            // 0x110f84: 0x1ac1024  and         $v0, $t5, $t4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110f80) {
            ctx->pc = 0x110FA4u;
            goto label_110fa4;
        }
    }
    ctx->pc = 0x110F88u;
    // 0x110f88: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x110f88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x110f8c: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x110f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x110f90: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x110f90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x110f94: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x110f94u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
    // 0x110f98: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x110f98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x110f9c: 0x7ca20020  sq          $v0, 0x20($a1)
    ctx->pc = 0x110f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 2));
    // 0x110fa0: 0x1ac1024  and         $v0, $t5, $t4
    ctx->pc = 0x110fa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & GPR_U64(ctx, 12));
label_110fa4:
    // 0x110fa4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x110FA4u;
    {
        const bool branch_taken_0x110fa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x110FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110FA4u;
            // 0x110fa8: 0xc1027  nor         $v0, $zero, $t4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110fa4) {
            ctx->pc = 0x110FB8u;
            goto label_110fb8;
        }
    }
    ctx->pc = 0x110FACu;
    // 0x110fac: 0x78820030  lq          $v0, 0x30($a0)
    ctx->pc = 0x110facu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x110fb0: 0x7ca20030  sq          $v0, 0x30($a1)
    ctx->pc = 0x110fb0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 2));
    // 0x110fb4: 0xc1027  nor         $v0, $zero, $t4
    ctx->pc = 0x110fb4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 12)));
label_110fb8:
    // 0x110fb8: 0xc1900  sll         $v1, $t4, 4
    ctx->pc = 0x110fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 4));
    // 0x110fbc: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x110fbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x110fc0: 0x306cfff0  andi        $t4, $v1, 0xFFF0
    ctx->pc = 0x110fc0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65520);
    // 0x110fc4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x110fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x110fc8: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x110fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
    // 0x110fcc: 0x23403  sra         $a2, $v0, 16
    ctx->pc = 0x110fccu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 16));
    // 0x110fd0: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x110fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x110fd4: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x110FD4u;
    {
        const bool branch_taken_0x110fd4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x110FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110FD4u;
            // 0x110fd8: 0x24e70001  addiu       $a3, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110fd4) {
            ctx->pc = 0x110FE8u;
            goto label_110fe8;
        }
    }
    ctx->pc = 0x110FDCu;
    // 0x110fdc: 0xf8102b  sltu        $v0, $a3, $t8
    ctx->pc = 0x110fdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 24)) ? 1 : 0);
    // 0x110fe0: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x110FE0u;
    {
        const bool branch_taken_0x110fe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x110FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110FE0u;
            // 0x110fe4: 0x1cc1024  and         $v0, $t6, $t4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110fe0) {
            ctx->pc = 0x110F80u;
            runtime->cooperativeGuestYield();
            goto label_110f80;
        }
    }
    ctx->pc = 0x110FE8u;
label_110fe8:
    // 0x110fe8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x110fe8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x110fec: 0x256b0002  addiu       $t3, $t3, 0x2
    ctx->pc = 0x110fecu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
    // 0x110ff0: 0x254a0002  addiu       $t2, $t2, 0x2
    ctx->pc = 0x110ff0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
    // 0x110ff4: 0x10f102b  sltu        $v0, $t0, $t7
    ctx->pc = 0x110ff4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 15)) ? 1 : 0);
    // 0x110ff8: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x110FF8u;
    {
        const bool branch_taken_0x110ff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x110FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x110FF8u;
            // 0x110ffc: 0x25290002  addiu       $t1, $t1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x110ff8) {
            ctx->pc = 0x110F30u;
            runtime->cooperativeGuestYield();
            goto label_110f30;
        }
    }
    ctx->pc = 0x111000u;
label_111000:
    // 0x111000: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x111000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x111004: 0x3e00008  jr          $ra
    ctx->pc = 0x111004u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111004u;
            // 0x111008: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x110F30u: goto label_110f30;
            case 0x110F80u: goto label_110f80;
            case 0x110FA4u: goto label_110fa4;
            case 0x110FB8u: goto label_110fb8;
            case 0x110FE8u: goto label_110fe8;
            case 0x111000u: goto label_111000;
            case 0x1110DCu: goto label_1110dc;
            case 0x1110F8u: goto label_1110f8;
            case 0x11112Cu: goto label_11112c;
            case 0x111144u: goto label_111144;
            default: break;
        }
        return;
    }
    ctx->pc = 0x11100Cu;
    // 0x11100c: 0x0  nop
    ctx->pc = 0x11100cu;
    // NOP
    // 0x111010: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x111010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x111014: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x111014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x111018: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x111018u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11101c: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x11101cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x111020: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x111020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x111024: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x111024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x111028: 0xe7b50088  swc1        $f21, 0x88($sp)
    ctx->pc = 0x111028u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
    // 0x11102c: 0xc04191a  jal         func_106468
    ctx->pc = 0x11102Cu;
    SET_GPR_U32(ctx, 31, 0x111034u);
    ctx->pc = 0x111030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x11102Cu;
            // 0x111030: 0xe7b40080  swc1        $f20, 0x80($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x106468u;
    if (runtime->hasFunction(0x106468u)) {
        auto targetFn = runtime->lookupFunction(0x106468u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111034u; }
        if (ctx->pc != 0x111034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00106468_0x106468(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111034u; }
        if (ctx->pc != 0x111034u) { return; }
    }
    ctx->pc = 0x111034u;
    // 0x111034: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x111034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x111038: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x111038u;
    {
        const bool branch_taken_0x111038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x111038) {
            ctx->pc = 0x11103Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x111038u;
            // 0x11103c: 0x8e420070  lw          $v0, 0x70($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1110DCu;
            goto label_1110dc;
        }
    }
    ctx->pc = 0x111040u;
    // 0x111040: 0x8e420208  lw          $v0, 0x208($s2)
    ctx->pc = 0x111040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 520)));
    // 0x111044: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x111044u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x111048: 0x8e510060  lw          $s1, 0x60($s2)
    ctx->pc = 0x111048u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x11104c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11104cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111050: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x111050u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x111054: 0xc08e49a  jal         func_239268
    ctx->pc = 0x111054u;
    SET_GPR_U32(ctx, 31, 0x11105Cu);
    ctx->pc = 0x111058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x111054u;
            // 0x111058: 0x7fa20030  sq          $v0, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239268u;
    if (runtime->hasFunction(0x239268u)) {
        auto targetFn = runtime->lookupFunction(0x239268u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11105Cu; }
        if (ctx->pc != 0x11105Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239268_0x239270(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x11105Cu; }
        if (ctx->pc != 0x11105Cu) { return; }
    }
    ctx->pc = 0x11105Cu;
    // 0x11105c: 0x4482a800  mtc1        $v0, $f21
    ctx->pc = 0x11105cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
    // 0x111060: 0xc08e49c  jal         func_239270
    ctx->pc = 0x111060u;
    SET_GPR_U32(ctx, 31, 0x111068u);
    ctx->pc = 0x111064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x111060u;
            // 0x111064: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239270u;
    if (runtime->hasFunction(0x239270u)) {
        auto targetFn = runtime->lookupFunction(0x239270u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111068u; }
        if (ctx->pc != 0x111068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239270_0x239278(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111068u; }
        if (ctx->pc != 0x111068u) { return; }
    }
    ctx->pc = 0x111068u;
    // 0x111068: 0x700217c9  prot3w      $v0, $v0
    ctx->pc = 0x111068u;
    SET_GPR_VEC(ctx, 2, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x11106c: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x11106cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x111070: 0xc08e49e  jal         func_239278
    ctx->pc = 0x111070u;
    SET_GPR_U32(ctx, 31, 0x111078u);
    ctx->pc = 0x111074u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x111070u;
            // 0x111074: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239278u;
    if (runtime->hasFunction(0x239278u)) {
        auto targetFn = runtime->lookupFunction(0x239278u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111078u; }
        if (ctx->pc != 0x111078u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_239278_0x239280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111078u; }
        if (ctx->pc != 0x111078u) { return; }
    }
    ctx->pc = 0x111078u;
    // 0x111078: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x111078u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x11107c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x11107cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x111080: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x111080u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x111084: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x111084u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x111088: 0xc06126a  jal         func_1849A8
    ctx->pc = 0x111088u;
    SET_GPR_U32(ctx, 31, 0x111090u);
    ctx->pc = 0x11108Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x111088u;
            // 0x11108c: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1849A8u;
    if (runtime->hasFunction(0x1849A8u)) {
        auto targetFn = runtime->lookupFunction(0x1849A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111090u; }
        if (ctx->pc != 0x111090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001849A8_0x1849a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x111090u; }
        if (ctx->pc != 0x111090u) { return; }
    }
    ctx->pc = 0x111090u;
    // 0x111090: 0x8e430060  lw          $v1, 0x60($s2)
    ctx->pc = 0x111090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x111094: 0x8e420210  lw          $v0, 0x210($s2)
    ctx->pc = 0x111094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 528)));
    // 0x111098: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x111098u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11109c: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x11109cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1110a0: 0xd8620010  lqc2        $vf2, 0x10($v1)
    ctx->pc = 0x1110a0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1110a4: 0x4be30858  vmulx.xyzw  $vf1, $vf1, $vf3x
    ctx->pc = 0x1110a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1110a8: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x1110a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1110ac: 0x4be31099  vmuly.xyzw  $vf2, $vf2, $vf3y
    ctx->pc = 0x1110acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x1110b0: 0xf8610000  sqc2        $vf1, 0x0($v1)
    ctx->pc = 0x1110b0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1110b4: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x1110b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1110b8: 0xf8620010  sqc2        $vf2, 0x10($v1)
    ctx->pc = 0x1110b8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x1110bc: 0xd8610020  lqc2        $vf1, 0x20($v1)
    ctx->pc = 0x1110bcu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1110c0: 0x4be3085a  vmulz.xyzw  $vf1, $vf1, $vf3z
    ctx->pc = 0x1110c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x1110c4: 0xfba10020  sqc2        $vf1, 0x20($sp)
    ctx->pc = 0x1110c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1110c8: 0xf8610020  sqc2        $vf1, 0x20($v1)
    ctx->pc = 0x1110c8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x1110cc: 0x8e42020c  lw          $v0, 0x20C($s2)
    ctx->pc = 0x1110ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 524)));
    // 0x1110d0: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1110d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1110d4: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x1110D4u;
    {
        const bool branch_taken_0x1110d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1110D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1110D4u;
            // 0x1110d8: 0x7c620030  sq          $v0, 0x30($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1110d4) {
            ctx->pc = 0x111144u;
            goto label_111144;
        }
    }
    ctx->pc = 0x1110DCu;
label_1110dc:
    // 0x1110dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1110dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1110e0: 0x8e470064  lw          $a3, 0x64($s2)
    ctx->pc = 0x1110e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
    // 0x1110e4: 0x24420030  addiu       $v0, $v0, 0x30
    ctx->pc = 0x1110e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
    // 0x1110e8: 0x10e00010  beqz        $a3, . + 4 + (0x10 << 2)
    ctx->pc = 0x1110E8u;
    {
        const bool branch_taken_0x1110e8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1110ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1110E8u;
            // 0x1110ec: 0x8e430060  lw          $v1, 0x60($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1110e8) {
            ctx->pc = 0x11112Cu;
            goto label_11112c;
        }
    }
    ctx->pc = 0x1110F0u;
    // 0x1110f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1110f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1110f4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x1110f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1110f8:
    // 0x1110f8: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x1110f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1110fc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1110fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x111100: 0xc7182b  sltu        $v1, $a2, $a3
    ctx->pc = 0x111100u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x111104: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x111104u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x111108: 0x78a20010  lq          $v0, 0x10($a1)
    ctx->pc = 0x111108u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x11110c: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x11110cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x111110: 0x78a20020  lq          $v0, 0x20($a1)
    ctx->pc = 0x111110u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x111114: 0x7c820020  sq          $v0, 0x20($a0)
    ctx->pc = 0x111114u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 2));
    // 0x111118: 0x78a20030  lq          $v0, 0x30($a1)
    ctx->pc = 0x111118u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x11111c: 0x24a50040  addiu       $a1, $a1, 0x40
    ctx->pc = 0x11111cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x111120: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x111120u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
    // 0x111124: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x111124u;
    {
        const bool branch_taken_0x111124 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x111128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x111124u;
            // 0x111128: 0x24840040  addiu       $a0, $a0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111124) {
            ctx->pc = 0x1110F8u;
            runtime->cooperativeGuestYield();
            goto label_1110f8;
        }
    }
    ctx->pc = 0x11112Cu;
label_11112c:
    // 0x11112c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x11112cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x111130: 0x8e440080  lw          $a0, 0x80($s2)
    ctx->pc = 0x111130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
    // 0x111134: 0xdc43bdf8  ld          $v1, -0x4208($v0)
    ctx->pc = 0x111134u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 4294950392)));
    // 0x111138: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x111138u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
    // 0x11113c: 0xfc43bdf8  sd          $v1, -0x4208($v0)
    ctx->pc = 0x11113cu;
    WRITE64(ADD32(GPR_U32(ctx, 2), 4294950392), GPR_U64(ctx, 3));
    // 0x111140: 0xfc800040  sd          $zero, 0x40($a0)
    ctx->pc = 0x111140u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 64), GPR_U64(ctx, 0));
label_111144:
    // 0x111144: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x111144u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x111148: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x111148u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11114c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x11114cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x111150: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x111150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x111154: 0xc7b50088  lwc1        $f21, 0x88($sp)
    ctx->pc = 0x111154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x111158: 0xc7b40080  lwc1        $f20, 0x80($sp)
    ctx->pc = 0x111158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x11115c: 0x3e00008  jr          $ra
    ctx->pc = 0x11115Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x111160u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11115Cu;
            // 0x111160: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x110F30u: goto label_110f30;
            case 0x110F80u: goto label_110f80;
            case 0x110FA4u: goto label_110fa4;
            case 0x110FB8u: goto label_110fb8;
            case 0x110FE8u: goto label_110fe8;
            case 0x111000u: goto label_111000;
            case 0x1110DCu: goto label_1110dc;
            case 0x1110F8u: goto label_1110f8;
            case 0x11112Cu: goto label_11112c;
            case 0x111144u: goto label_111144;
            default: break;
        }
        return;
    }
    ctx->pc = 0x111164u;
    // 0x111164: 0x0  nop
    ctx->pc = 0x111164u;
    // NOP
}
