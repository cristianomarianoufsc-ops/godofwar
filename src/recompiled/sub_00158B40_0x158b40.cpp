#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00158B40
// Address: 0x158b40 - 0x158da8
void sub_00158B40_0x158b40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00158B40_0x158b40");
#endif

    ctx->pc = 0x158b40u;

    // 0x158b40: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x158b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x158b44: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x158b44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x158b48: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x158b48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x158b4c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x158b4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158b50: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x158b50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x158b54: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x158b54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x158b58: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x158b58u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158b5c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x158b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x158b60: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x158b60u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158b64: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x158b64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x158b68: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x158b68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x158b6c: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x158b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x158b70: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x158b70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158b74: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x158b74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x158b78: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x158b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x158b7c: 0x8e420018  lw          $v0, 0x18($s2)
    ctx->pc = 0x158b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x158b80: 0x8e960008  lw          $s6, 0x8($s4)
    ctx->pc = 0x158b80u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x158b84: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x158b84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    // 0x158b88: 0x8c430104  lw          $v1, 0x104($v0)
    ctx->pc = 0x158b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 260)));
    // 0x158b8c: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x158b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x158b90: 0x8c42001c  lw          $v0, 0x1C($v0)
    ctx->pc = 0x158b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    // 0x158b94: 0xc05643c  jal         func_1590F0
    ctx->pc = 0x158B94u;
    SET_GPR_U32(ctx, 31, 0x158B9Cu);
    ctx->pc = 0x158B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158B94u;
            // 0x158b98: 0x945e005e  lhu         $fp, 0x5E($v0) (Delay Slot)
        SET_GPR_U32(ctx, 30, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 94)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1590F0u;
    if (runtime->hasFunction(0x1590F0u)) {
        auto targetFn = runtime->lookupFunction(0x1590F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158B9Cu; }
        if (ctx->pc != 0x158B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001590F0_0x1590f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158B9Cu; }
        if (ctx->pc != 0x158B9Cu) { return; }
    }
    ctx->pc = 0x158B9Cu;
    // 0x158b9c: 0x12c00076  beqz        $s6, . + 4 + (0x76 << 2)
    ctx->pc = 0x158B9Cu;
    {
        const bool branch_taken_0x158b9c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x158BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158B9Cu;
            // 0x158ba0: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158b9c) {
            ctx->pc = 0x158D78u;
            goto label_158d78;
        }
    }
    ctx->pc = 0x158BA4u;
    // 0x158ba4: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x158ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_158ba8:
    // 0x158ba8: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x158ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x158bac: 0x8c420050  lw          $v0, 0x50($v0)
    ctx->pc = 0x158bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x158bb0: 0x2828021  addu        $s0, $s4, $v0
    ctx->pc = 0x158bb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x158bb4: 0x96150000  lhu         $s5, 0x0($s0)
    ctx->pc = 0x158bb4u;
    SET_GPR_U32(ctx, 21, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x158bb8: 0x12a0006a  beqz        $s5, . + 4 + (0x6A << 2)
    ctx->pc = 0x158BB8u;
    {
        const bool branch_taken_0x158bb8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x158BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158BB8u;
            // 0x158bbc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158bb8) {
            ctx->pc = 0x158D64u;
            goto label_158d64;
        }
    }
    ctx->pc = 0x158BC0u;
    // 0x158bc0: 0x96050002  lhu         $a1, 0x2($s0)
    ctx->pc = 0x158bc0u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x158bc4: 0x0  nop
    ctx->pc = 0x158bc4u;
    // NOP
label_158bc8:
    // 0x158bc8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x158bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x158bcc: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x158bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x158bd0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x158bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x158bd4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x158bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x158bd8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x158bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x158bdc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x158bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x158be0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x158be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x158be4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x158be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x158be8: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x158be8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x158bec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x158becu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x158bf0: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x158bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x158bf4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x158bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x158bf8: 0x661804  sllv        $v1, $a2, $v1
    ctx->pc = 0x158bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), GPR_U32(ctx, 3) & 0x1F));
    // 0x158bfc: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x158bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x158c00: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x158c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x158c04: 0x50400054  beql        $v0, $zero, . + 4 + (0x54 << 2)
    ctx->pc = 0x158C04u;
    {
        const bool branch_taken_0x158c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x158c04) {
            ctx->pc = 0x158C08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158C04u;
            // 0x158c08: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x158D58u;
            goto label_158d58;
        }
    }
    ctx->pc = 0x158C0Cu;
    // 0x158c0c: 0x86440120  lh          $a0, 0x120($s2)
    ctx->pc = 0x158c0cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 288)));
    // 0x158c10: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x158c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x158c14: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x158c14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x158c18: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x158C18u;
    {
        const bool branch_taken_0x158c18 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x158C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158C18u;
            // 0x158c1c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158c18) {
            ctx->pc = 0x158C34u;
            goto label_158c34;
        }
    }
    ctx->pc = 0x158C20u;
    // 0x158c20: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x158c20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x158c24: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x158c24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x158c28: 0x62200a  movz        $a0, $v1, $v0
    ctx->pc = 0x158c28u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    // 0x158c2c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x158C2Cu;
    {
        const bool branch_taken_0x158c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158C2Cu;
            // 0x158c30: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158c2c) {
            ctx->pc = 0x158C50u;
            goto label_158c50;
        }
    }
    ctx->pc = 0x158C34u;
label_158c34:
    // 0x158c34: 0x10a60004  beq         $a1, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x158C34u;
    {
        const bool branch_taken_0x158c34 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x158C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158C34u;
            // 0x158c38: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158c34) {
            ctx->pc = 0x158C48u;
            goto label_158c48;
        }
    }
    ctx->pc = 0x158C3Cu;
    // 0x158c3c: 0x8c421058  lw          $v0, 0x1058($v0)
    ctx->pc = 0x158c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4184)));
    // 0x158c40: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x158C40u;
    {
        const bool branch_taken_0x158c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158c40) {
            ctx->pc = 0x158C60u;
            goto label_158c60;
        }
    }
    ctx->pc = 0x158C48u;
label_158c48:
    // 0x158c48: 0x24a2ffff  addiu       $v0, $a1, -0x1
    ctx->pc = 0x158c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x158c4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x158c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_158c50:
    // 0x158c50: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x158c50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x158c54: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x158c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x158c58: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x158C58u;
    {
        const bool branch_taken_0x158c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158C58u;
            // 0x158c5c: 0x2023821  addu        $a3, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158c58) {
            ctx->pc = 0x158D38u;
            goto label_158d38;
        }
    }
    ctx->pc = 0x158C60u;
label_158c60:
    // 0x158c60: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
    ctx->pc = 0x158C60u;
    {
        const bool branch_taken_0x158c60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x158C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158C60u;
            // 0x158c64: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158c60) {
            ctx->pc = 0x158CA4u;
            goto label_158ca4;
        }
    }
    ctx->pc = 0x158C68u;
    // 0x158c68: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x158c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x158c6c: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x158c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x158c70: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x158C70u;
    {
        const bool branch_taken_0x158c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158C70u;
            // 0x158c74: 0xc4614998  lwc1        $f1, 0x4998($v1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 18840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x158c70) {
            ctx->pc = 0x158C8Cu;
            goto label_158c8c;
        }
    }
    ctx->pc = 0x158C78u;
label_158c78:
    // 0x158c78: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x158c78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x158c7c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x158C7Cu;
    {
        const bool branch_taken_0x158c7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x158C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158C7Cu;
            // 0x158c80: 0x41080  sll         $v0, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158c7c) {
            ctx->pc = 0x158CA4u;
            goto label_158ca4;
        }
    }
    ctx->pc = 0x158C84u;
    // 0x158c84: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x158c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x158c88: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x158c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_158c8c:
    // 0x158c8c: 0x2023821  addu        $a3, $s0, $v0
    ctx->pc = 0x158c8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x158c90: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x158c90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158c94: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x158c94u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158c98: 0x0  nop
    ctx->pc = 0x158c98u;
    // NOP
    // 0x158c9c: 0x4500fff6  bc1f        . + 4 + (-0xA << 2)
    ctx->pc = 0x158C9Cu;
    {
        const bool branch_taken_0x158c9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x158CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158C9Cu;
            // 0x158ca0: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158c9c) {
            ctx->pc = 0x158C78u;
            runtime->cooperativeGuestYield();
            goto label_158c78;
        }
    }
    ctx->pc = 0x158CA4u;
label_158ca4:
    // 0x158ca4: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x158ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x158ca8: 0x44803000  mtc1        $zero, $f6
    ctx->pc = 0x158ca8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x158cac: 0xc4450070  lwc1        $f5, 0x70($v0)
    ctx->pc = 0x158cacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x158cb0: 0x46062834  c.lt.s      $f5, $f6
    ctx->pc = 0x158cb0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[5], ctx->f[6])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x158cb4: 0x0  nop
    ctx->pc = 0x158cb4u;
    // NOP
    // 0x158cb8: 0x45000013  bc1f        . + 4 + (0x13 << 2)
    ctx->pc = 0x158CB8u;
    {
        const bool branch_taken_0x158cb8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x158CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158CB8u;
            // 0x158cbc: 0xc4440074  lwc1        $f4, 0x74($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x158cb8) {
            ctx->pc = 0x158D08u;
            goto label_158d08;
        }
    }
    ctx->pc = 0x158CC0u;
    // 0x158cc0: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x158cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x158cc4: 0x3c01c180  lui         $at, 0xC180
    ctx->pc = 0x158cc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49536 << 16));
    // 0x158cc8: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x158cc8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x158ccc: 0xc4404998  lwc1        $f0, 0x4998($v0)
    ctx->pc = 0x158cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 18840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158cd0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x158cd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x158cd4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x158cd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x158cd8: 0x46040041  sub.s       $f1, $f0, $f4
    ctx->pc = 0x158cd8u;
    ctx->f[1] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x158cdc: 0x46030842  mul.s       $f1, $f1, $f3
    ctx->pc = 0x158cdcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[3]);
    // 0x158ce0: 0x46040843  div.s       $f1, $f1, $f4
    ctx->pc = 0x158ce0u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[1] = ctx->f[1] / ctx->f[4];
    // 0x158ce4: 0x46060868  max.s       $f1, $f1, $f6
    ctx->pc = 0x158ce4u;
    ctx->f[1] = std::max(ctx->f[1], ctx->f[6]);
    // 0x158ce8: 0x46002801  sub.s       $f0, $f5, $f0
    ctx->pc = 0x158ce8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[5], ctx->f[0]);
    // 0x158cec: 0x46020869  min.s       $f1, $f1, $f2
    ctx->pc = 0x158cecu;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[2]);
    // 0x158cf0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x158cf0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x158cf4: 0x46050003  div.s       $f0, $f0, $f5
    ctx->pc = 0x158cf4u;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[5];
    // 0x158cf8: 0x46060028  max.s       $f0, $f0, $f6
    ctx->pc = 0x158cf8u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[6]);
    // 0x158cfc: 0x46020029  min.s       $f0, $f0, $f2
    ctx->pc = 0x158cfcu;
    ctx->f[0] = std::min(ctx->f[0], ctx->f[2]);
    // 0x158d00: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x158D00u;
    {
        const bool branch_taken_0x158d00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x158D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158D00u;
            // 0x158d04: 0x46000b29  min.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = std::min(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x158d00) {
            ctx->pc = 0x158D38u;
            goto label_158d38;
        }
    }
    ctx->pc = 0x158D08u;
label_158d08:
    // 0x158d08: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x158d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x158d0c: 0x3c01c180  lui         $at, 0xC180
    ctx->pc = 0x158d0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49536 << 16));
    // 0x158d10: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x158d10u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x158d14: 0xc4404998  lwc1        $f0, 0x4998($v0)
    ctx->pc = 0x158d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 18840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158d18: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x158d18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x158d1c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x158d1cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x158d20: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x158d20u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x158d24: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x158d24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x158d28: 0x46040003  div.s       $f0, $f0, $f4
    ctx->pc = 0x158d28u;
    if (ctx->f[4] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[4];
    // 0x158d2c: 0x46060028  max.s       $f0, $f0, $f6
    ctx->pc = 0x158d2cu;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[6]);
    // 0x158d30: 0x46010329  min.s       $f12, $f0, $f1
    ctx->pc = 0x158d30u;
    ctx->f[12] = std::min(ctx->f[0], ctx->f[1]);
    // 0x158d34: 0x0  nop
    ctx->pc = 0x158d34u;
    // NOP
label_158d38:
    // 0x158d38: 0x3d51018  mult        $v0, $fp, $s5
    ctx->pc = 0x158d38u;
    { int64_t result = (int64_t)GPR_S32(ctx, 30) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x158d3c: 0x8fa80000  lw          $t0, 0x0($sp)
    ctx->pc = 0x158d3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x158d40: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x158d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158d44: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x158d44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x158d48: 0xc05636a  jal         func_158DA8
    ctx->pc = 0x158D48u;
    SET_GPR_U32(ctx, 31, 0x158D50u);
    ctx->pc = 0x158D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x158D48u;
            // 0x158d4c: 0x513021  addu        $a2, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158DA8u;
    if (runtime->hasFunction(0x158DA8u)) {
        auto targetFn = runtime->lookupFunction(0x158DA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158D50u; }
        if (ctx->pc != 0x158D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00158DA8_0x158da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x158D50u; }
        if (ctx->pc != 0x158D50u) { return; }
    }
    ctx->pc = 0x158D50u;
    // 0x158d50: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x158d50u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x158d54: 0x0  nop
    ctx->pc = 0x158d54u;
    // NOP
label_158d58:
    // 0x158d58: 0x235102b  sltu        $v0, $s1, $s5
    ctx->pc = 0x158d58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x158d5c: 0x5440ff9a  bnel        $v0, $zero, . + 4 + (-0x66 << 2)
    ctx->pc = 0x158D5Cu;
    {
        const bool branch_taken_0x158d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x158d5c) {
            ctx->pc = 0x158D60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x158D5Cu;
            // 0x158d60: 0x96050002  lhu         $a1, 0x2($s0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x158BC8u;
            runtime->cooperativeGuestYield();
            goto label_158bc8;
        }
    }
    ctx->pc = 0x158D64u;
label_158d64:
    // 0x158d64: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x158d64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x158d68: 0x276102b  sltu        $v0, $s3, $s6
    ctx->pc = 0x158d68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 22)) ? 1 : 0);
    // 0x158d6c: 0x1440ff8e  bnez        $v0, . + 4 + (-0x72 << 2)
    ctx->pc = 0x158D6Cu;
    {
        const bool branch_taken_0x158d6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x158D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158D6Cu;
            // 0x158d70: 0x131080  sll         $v0, $s3, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x158d6c) {
            ctx->pc = 0x158BA8u;
            runtime->cooperativeGuestYield();
            goto label_158ba8;
        }
    }
    ctx->pc = 0x158D74u;
    // 0x158d74: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x158d74u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_158d78:
    // 0x158d78: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x158d78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x158d7c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x158d7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x158d80: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x158d80u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x158d84: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x158d84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x158d88: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x158d88u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x158d8c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x158d8cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x158d90: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x158d90u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x158d94: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x158d94u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x158d98: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x158d98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x158d9c: 0x3e00008  jr          $ra
    ctx->pc = 0x158D9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158D9Cu;
            // 0x158da0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x158BA8u: goto label_158ba8;
            case 0x158BC8u: goto label_158bc8;
            case 0x158C34u: goto label_158c34;
            case 0x158C48u: goto label_158c48;
            case 0x158C50u: goto label_158c50;
            case 0x158C60u: goto label_158c60;
            case 0x158C78u: goto label_158c78;
            case 0x158C8Cu: goto label_158c8c;
            case 0x158CA4u: goto label_158ca4;
            case 0x158D08u: goto label_158d08;
            case 0x158D38u: goto label_158d38;
            case 0x158D58u: goto label_158d58;
            case 0x158D64u: goto label_158d64;
            case 0x158D78u: goto label_158d78;
            default: break;
        }
        return;
    }
    ctx->pc = 0x158DA4u;
    // 0x158da4: 0x0  nop
    ctx->pc = 0x158da4u;
    // NOP
}
