#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A4BA0
// Address: 0x1a4ba0 - 0x1a5068
void sub_001A4BA0_0x1a4ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A4BA0_0x1a4ba0");
#endif

    ctx->pc = 0x1a4ba0u;

    // 0x1a4ba0: 0x27bdfcc0  addiu       $sp, $sp, -0x340
    ctx->pc = 0x1a4ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966464));
    // 0x1a4ba4: 0x7fb302f0  sq          $s3, 0x2F0($sp)
    ctx->pc = 0x1a4ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 19));
    // 0x1a4ba8: 0x7fb402e0  sq          $s4, 0x2E0($sp)
    ctx->pc = 0x1a4ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 20));
    // 0x1a4bac: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1a4bacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4bb0: 0x7fb502d0  sq          $s5, 0x2D0($sp)
    ctx->pc = 0x1a4bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 21));
    // 0x1a4bb4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1a4bb4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4bb8: 0x7fb602c0  sq          $s6, 0x2C0($sp)
    ctx->pc = 0x1a4bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 22));
    // 0x1a4bbc: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1a4bbcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4bc0: 0x7fbe02a0  sq          $fp, 0x2A0($sp)
    ctx->pc = 0x1a4bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 30));
    // 0x1a4bc4: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x1a4bc4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4bc8: 0x7fb00320  sq          $s0, 0x320($sp)
    ctx->pc = 0x1a4bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), GPR_VEC(ctx, 16));
    // 0x1a4bcc: 0x7fb10310  sq          $s1, 0x310($sp)
    ctx->pc = 0x1a4bccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), GPR_VEC(ctx, 17));
    // 0x1a4bd0: 0x7fb20300  sq          $s2, 0x300($sp)
    ctx->pc = 0x1a4bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), GPR_VEC(ctx, 18));
    // 0x1a4bd4: 0x7fb702b0  sq          $s7, 0x2B0($sp)
    ctx->pc = 0x1a4bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 23));
    // 0x1a4bd8: 0xffbf0290  sd          $ra, 0x290($sp)
    ctx->pc = 0x1a4bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 656), GPR_U64(ctx, 31));
    // 0x1a4bdc: 0xe7b40330  swc1        $f20, 0x330($sp)
    ctx->pc = 0x1a4bdcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 816), bits); }
    // 0x1a4be0: 0x86650034  lh          $a1, 0x34($s3)
    ctx->pc = 0x1a4be0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x1a4be4: 0x4a0000a  bltz        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x1A4BE4u;
    {
        const bool branch_taken_0x1a4be4 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x1A4BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4BE4u;
            // 0x1a4be8: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4be4) {
            ctx->pc = 0x1A4C10u;
            goto label_1a4c10;
        }
    }
    ctx->pc = 0x1A4BECu;
    // 0x1a4bec: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x1a4becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x1a4bf0: 0x8663003a  lh          $v1, 0x3A($s3)
    ctx->pc = 0x1a4bf0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 58)));
    // 0x1a4bf4: 0x8c42ca8c  lw          $v0, -0x3574($v0)
    ctx->pc = 0x1a4bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953612)));
    // 0x1a4bf8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x1a4bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1a4bfc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1a4bfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1a4c00: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x1a4c00u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a4c04: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x1a4c04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x1a4c08: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1a4c08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x1a4c0c: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x1a4c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
label_1a4c10:
    // 0x1a4c10: 0x86640036  lh          $a0, 0x36($s3)
    ctx->pc = 0x1a4c10u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 54)));
    // 0x1a4c14: 0x480000b  bltz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x1A4C14u;
    {
        const bool branch_taken_0x1a4c14 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x1A4C18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4C14u;
            // 0x1a4c18: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4c14) {
            ctx->pc = 0x1A4C44u;
            goto label_1a4c44;
        }
    }
    ctx->pc = 0x1A4C1Cu;
    // 0x1a4c1c: 0x1e18c0  sll         $v1, $fp, 3
    ctx->pc = 0x1a4c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x1a4c20: 0x8c45ca90  lw          $a1, -0x3570($v0)
    ctx->pc = 0x1a4c20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953616)));
    // 0x1a4c24: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1a4c24u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1a4c28: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x1a4c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1a4c2c: 0xafa40280  sw          $a0, 0x280($sp)
    ctx->pc = 0x1a4c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 4));
    // 0x1a4c30: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a4c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a4c34: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x1a4c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x1a4c38: 0x3a31821  addu        $v1, $sp, $v1
    ctx->pc = 0x1a4c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x1a4c3c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1a4c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1a4c40: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1a4c40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_1a4c44:
    // 0x1a4c44: 0x86670038  lh          $a3, 0x38($s3)
    ctx->pc = 0x1a4c44u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 56)));
    // 0x1a4c48: 0x4e0000d  bltz        $a3, . + 4 + (0xD << 2)
    ctx->pc = 0x1A4C48u;
    {
        const bool branch_taken_0x1a4c48 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x1A4C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4C48u;
            // 0x1a4c4c: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4c48) {
            ctx->pc = 0x1A4C80u;
            goto label_1a4c80;
        }
    }
    ctx->pc = 0x1A4C50u;
    // 0x1a4c50: 0x1e18c0  sll         $v1, $fp, 3
    ctx->pc = 0x1a4c50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x1a4c54: 0x8c45ca94  lw          $a1, -0x356C($v0)
    ctx->pc = 0x1a4c54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953620)));
    // 0x1a4c58: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x1a4c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1a4c5c: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x1a4c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1a4c60: 0x8666003a  lh          $a2, 0x3A($s3)
    ctx->pc = 0x1a4c60u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 58)));
    // 0x1a4c64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a4c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a4c68: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1a4c68u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1a4c6c: 0x3a31821  addu        $v1, $sp, $v1
    ctx->pc = 0x1a4c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x1a4c70: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1a4c70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1a4c74: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1a4c74u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1a4c78: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x1a4c78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
    // 0x1a4c7c: 0xafa60034  sw          $a2, 0x34($sp)
    ctx->pc = 0x1a4c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 6));
label_1a4c80:
    // 0x1a4c80: 0x9262003d  lbu         $v0, 0x3D($s3)
    ctx->pc = 0x1a4c80u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 61)));
    // 0x1a4c84: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A4C84u;
    {
        const bool branch_taken_0x1a4c84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4C84u;
            // 0x1a4c88: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4c84) {
            ctx->pc = 0x1A4CB8u;
            goto label_1a4cb8;
        }
    }
    ctx->pc = 0x1A4C8Cu;
    // 0x1a4c8c: 0x8664003a  lh          $a0, 0x3A($s3)
    ctx->pc = 0x1a4c8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 58)));
    // 0x1a4c90: 0x8c45ca98  lw          $a1, -0x3568($v0)
    ctx->pc = 0x1a4c90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294953624)));
    // 0x1a4c94: 0x1e18c0  sll         $v1, $fp, 3
    ctx->pc = 0x1a4c94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 30), 3));
    // 0x1a4c98: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x1a4c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1a4c9c: 0xafa40284  sw          $a0, 0x284($sp)
    ctx->pc = 0x1a4c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 644), GPR_U32(ctx, 4));
    // 0x1a4ca0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a4ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a4ca4: 0x27a40284  addiu       $a0, $sp, 0x284
    ctx->pc = 0x1a4ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 644));
    // 0x1a4ca8: 0x3a31821  addu        $v1, $sp, $v1
    ctx->pc = 0x1a4ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 3)));
    // 0x1a4cac: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1a4cacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1a4cb0: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1a4cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
    // 0x1a4cb4: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1a4cb4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_1a4cb8:
    // 0x1a4cb8: 0x3c120033  lui         $s2, 0x33
    ctx->pc = 0x1a4cb8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)51 << 16));
    // 0x1a4cbc: 0x8e850054  lw          $a1, 0x54($s4)
    ctx->pc = 0x1a4cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 84)));
    // 0x1a4cc0: 0x2650e848  addiu       $s0, $s2, -0x17B8
    ctx->pc = 0x1a4cc0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961224));
    // 0x1a4cc4: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1a4cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1a4cc8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1a4cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1a4ccc: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1a4cccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
    // 0x1a4cd0: 0x8c4200a4  lw          $v0, 0xA4($v0)
    ctx->pc = 0x1a4cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1a4cd4: 0x40f809  jalr        $v0
    ctx->pc = 0x1A4CD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A4CDCu);
        ctx->pc = 0x1A4CD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4CD4u;
            // 0x1a4cd8: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A4CDCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A4C10u: goto label_1a4c10;
            case 0x1A4C44u: goto label_1a4c44;
            case 0x1A4C80u: goto label_1a4c80;
            case 0x1A4CB8u: goto label_1a4cb8;
            case 0x1A4D48u: goto label_1a4d48;
            case 0x1A4D58u: goto label_1a4d58;
            case 0x1A4D90u: goto label_1a4d90;
            case 0x1A4DE8u: goto label_1a4de8;
            case 0x1A4DECu: goto label_1a4dec;
            case 0x1A4E08u: goto label_1a4e08;
            case 0x1A4E0Cu: goto label_1a4e0c;
            case 0x1A4E10u: goto label_1a4e10;
            case 0x1A4E24u: goto label_1a4e24;
            case 0x1A4E58u: goto label_1a4e58;
            case 0x1A4E5Cu: goto label_1a4e5c;
            case 0x1A4EA0u: goto label_1a4ea0;
            case 0x1A4ED8u: goto label_1a4ed8;
            case 0x1A4EF0u: goto label_1a4ef0;
            case 0x1A4F08u: goto label_1a4f08;
            case 0x1A4F14u: goto label_1a4f14;
            case 0x1A4F24u: goto label_1a4f24;
            case 0x1A4F7Cu: goto label_1a4f7c;
            case 0x1A4FB8u: goto label_1a4fb8;
            case 0x1A4FC8u: goto label_1a4fc8;
            case 0x1A5010u: goto label_1a5010;
            case 0x1A5014u: goto label_1a5014;
            case 0x1A5030u: goto label_1a5030;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A4CDCu; }
            if (ctx->pc != 0x1A4CDCu) { return; }
        }
        }
    }
    ctx->pc = 0x1A4CDCu;
    // 0x1a4cdc: 0x8c450088  lw          $a1, 0x88($v0)
    ctx->pc = 0x1a4cdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1a4ce0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x1a4ce0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1a4ce4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a4ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a4ce8: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1a4ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x1a4cec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a4cecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a4cf0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1a4cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1a4cf4: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x1a4cf4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
    // 0x1a4cf8: 0x8c420084  lw          $v0, 0x84($v0)
    ctx->pc = 0x1a4cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
    // 0x1a4cfc: 0x40f809  jalr        $v0
    ctx->pc = 0x1A4CFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A4D04u);
        ctx->pc = 0x1A4D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4CFCu;
            // 0x1a4d00: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A4D04u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A4C10u: goto label_1a4c10;
            case 0x1A4C44u: goto label_1a4c44;
            case 0x1A4C80u: goto label_1a4c80;
            case 0x1A4CB8u: goto label_1a4cb8;
            case 0x1A4D48u: goto label_1a4d48;
            case 0x1A4D58u: goto label_1a4d58;
            case 0x1A4D90u: goto label_1a4d90;
            case 0x1A4DE8u: goto label_1a4de8;
            case 0x1A4DECu: goto label_1a4dec;
            case 0x1A4E08u: goto label_1a4e08;
            case 0x1A4E0Cu: goto label_1a4e0c;
            case 0x1A4E10u: goto label_1a4e10;
            case 0x1A4E24u: goto label_1a4e24;
            case 0x1A4E58u: goto label_1a4e58;
            case 0x1A4E5Cu: goto label_1a4e5c;
            case 0x1A4EA0u: goto label_1a4ea0;
            case 0x1A4ED8u: goto label_1a4ed8;
            case 0x1A4EF0u: goto label_1a4ef0;
            case 0x1A4F08u: goto label_1a4f08;
            case 0x1A4F14u: goto label_1a4f14;
            case 0x1A4F24u: goto label_1a4f24;
            case 0x1A4F7Cu: goto label_1a4f7c;
            case 0x1A4FB8u: goto label_1a4fb8;
            case 0x1A4FC8u: goto label_1a4fc8;
            case 0x1A5010u: goto label_1a5010;
            case 0x1A5014u: goto label_1a5014;
            case 0x1A5030u: goto label_1a5030;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A4D04u; }
            if (ctx->pc != 0x1A4D04u) { return; }
        }
        }
    }
    ctx->pc = 0x1A4D04u;
    // 0x1a4d04: 0xc05e9c0  jal         func_17A700
    ctx->pc = 0x1A4D04u;
    SET_GPR_U32(ctx, 31, 0x1A4D0Cu);
    ctx->pc = 0x1A4D08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4D04u;
            // 0x1a4d08: 0x8e64000c  lw          $a0, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17A700u;
    if (runtime->hasFunction(0x17A700u)) {
        auto targetFn = runtime->lookupFunction(0x17A700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4D0Cu; }
        if (ctx->pc != 0x1A4D0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017A700_0x17a700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4D0Cu; }
        if (ctx->pc != 0x1A4D0Cu) { return; }
    }
    ctx->pc = 0x1A4D0Cu;
    // 0x1a4d0c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a4d0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4d10: 0x8e03006c  lw          $v1, 0x6C($s0)
    ctx->pc = 0x1a4d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 108)));
    // 0x1a4d14: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1a4d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1a4d18: 0x84440088  lh          $a0, 0x88($v0)
    ctx->pc = 0x1a4d18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x1a4d1c: 0x8c42008c  lw          $v0, 0x8C($v0)
    ctx->pc = 0x1a4d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x1a4d20: 0x40f809  jalr        $v0
    ctx->pc = 0x1A4D20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A4D28u);
        ctx->pc = 0x1A4D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4D20u;
            // 0x1a4d24: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A4D28u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A4C10u: goto label_1a4c10;
            case 0x1A4C44u: goto label_1a4c44;
            case 0x1A4C80u: goto label_1a4c80;
            case 0x1A4CB8u: goto label_1a4cb8;
            case 0x1A4D48u: goto label_1a4d48;
            case 0x1A4D58u: goto label_1a4d58;
            case 0x1A4D90u: goto label_1a4d90;
            case 0x1A4DE8u: goto label_1a4de8;
            case 0x1A4DECu: goto label_1a4dec;
            case 0x1A4E08u: goto label_1a4e08;
            case 0x1A4E0Cu: goto label_1a4e0c;
            case 0x1A4E10u: goto label_1a4e10;
            case 0x1A4E24u: goto label_1a4e24;
            case 0x1A4E58u: goto label_1a4e58;
            case 0x1A4E5Cu: goto label_1a4e5c;
            case 0x1A4EA0u: goto label_1a4ea0;
            case 0x1A4ED8u: goto label_1a4ed8;
            case 0x1A4EF0u: goto label_1a4ef0;
            case 0x1A4F08u: goto label_1a4f08;
            case 0x1A4F14u: goto label_1a4f14;
            case 0x1A4F24u: goto label_1a4f24;
            case 0x1A4F7Cu: goto label_1a4f7c;
            case 0x1A4FB8u: goto label_1a4fb8;
            case 0x1A4FC8u: goto label_1a4fc8;
            case 0x1A5010u: goto label_1a5010;
            case 0x1A5014u: goto label_1a5014;
            case 0x1A5030u: goto label_1a5030;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A4D28u; }
            if (ctx->pc != 0x1A4D28u) { return; }
        }
        }
    }
    ctx->pc = 0x1A4D28u;
    // 0x1a4d28: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A4D28u;
    {
        const bool branch_taken_0x1a4d28 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4D28u;
            // 0x1a4d2c: 0x3c06002b  lui         $a2, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4d28) {
            ctx->pc = 0x1A4D48u;
            goto label_1a4d48;
        }
    }
    ctx->pc = 0x1A4D30u;
    // 0x1a4d30: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a4d30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4d34: 0x24c640b8  addiu       $a2, $a2, 0x40B8
    ctx->pc = 0x1a4d34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16568));
    // 0x1a4d38: 0xc091258  jal         func_244960
    ctx->pc = 0x1A4D38u;
    SET_GPR_U32(ctx, 31, 0x1A4D40u);
    ctx->pc = 0x1A4D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4D38u;
            // 0x1a4d3c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x244960u;
    if (runtime->hasFunction(0x244960u)) {
        auto targetFn = runtime->lookupFunction(0x244960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4D40u; }
        if (ctx->pc != 0x1A4D40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00244960_0x244960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4D40u; }
        if (ctx->pc != 0x1A4D40u) { return; }
    }
    ctx->pc = 0x1A4D40u;
    // 0x1a4d40: 0x100000bb  b           . + 4 + (0xBB << 2)
    ctx->pc = 0x1A4D40u;
    {
        const bool branch_taken_0x1a4d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4D40u;
            // 0x1a4d44: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4d40) {
            ctx->pc = 0x1A5030u;
            goto label_1a5030;
        }
    }
    ctx->pc = 0x1A4D48u;
label_1a4d48:
    // 0x1a4d48: 0x16a00003  bnez        $s5, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4D48u;
    {
        const bool branch_taken_0x1a4d48 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4D48u;
            // 0x1a4d4c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4d48) {
            ctx->pc = 0x1A4D58u;
            goto label_1a4d58;
        }
    }
    ctx->pc = 0x1A4D50u;
    // 0x1a4d50: 0x96620012  lhu         $v0, 0x12($s3)
    ctx->pc = 0x1a4d50u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
    // 0x1a4d54: 0x2c510001  sltiu       $s1, $v0, 0x1
    ctx->pc = 0x1a4d54u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1a4d58:
    // 0x1a4d58: 0x27b00040  addiu       $s0, $sp, 0x40
    ctx->pc = 0x1a4d58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1a4d5c: 0x82680022  lb          $t0, 0x22($s3)
    ctx->pc = 0x1a4d5cu;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 34)));
    // 0x1a4d60: 0xc66c0014  lwc1        $f12, 0x14($s3)
    ctx->pc = 0x1a4d60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a4d64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a4d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4d68: 0xc66d0018  lwc1        $f13, 0x18($s3)
    ctx->pc = 0x1a4d68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x1a4d6c: 0xc66e001c  lwc1        $f14, 0x1C($s3)
    ctx->pc = 0x1a4d6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x1a4d70: 0x96650024  lhu         $a1, 0x24($s3)
    ctx->pc = 0x1a4d70u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 36)));
    // 0x1a4d74: 0x82660020  lb          $a2, 0x20($s3)
    ctx->pc = 0x1a4d74u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x1a4d78: 0x82670021  lb          $a3, 0x21($s3)
    ctx->pc = 0x1a4d78u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 33)));
    // 0x1a4d7c: 0xc06911a  jal         func_1A4468
    ctx->pc = 0x1A4D7Cu;
    SET_GPR_U32(ctx, 31, 0x1A4D84u);
    ctx->pc = 0x1A4D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4D7Cu;
            // 0x1a4d80: 0x82690023  lb          $t1, 0x23($s3) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 35)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4468u;
    if (runtime->hasFunction(0x1A4468u)) {
        auto targetFn = runtime->lookupFunction(0x1A4468u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4D84u; }
        if (ctx->pc != 0x1A4D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_1a4468_0x1a46b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4D84u; }
        if (ctx->pc != 0x1A4D84u) { return; }
    }
    ctx->pc = 0x1A4D84u;
    // 0x1a4d84: 0x16a00002  bnez        $s5, . + 4 + (0x2 << 2)
    ctx->pc = 0x1A4D84u;
    {
        const bool branch_taken_0x1a4d84 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4D84u;
            // 0x1a4d88: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4d84) {
            ctx->pc = 0x1A4D90u;
            goto label_1a4d90;
        }
    }
    ctx->pc = 0x1A4D8Cu;
    // 0x1a4d8c: 0x96680012  lhu         $t0, 0x12($s3)
    ctx->pc = 0x1a4d8cu;
    SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
label_1a4d90:
    // 0x1a4d90: 0x8e66000c  lw          $a2, 0xC($s3)
    ctx->pc = 0x1a4d90u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x1a4d94: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1a4d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4d98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1a4d98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4d9c: 0x220482d  daddu       $t1, $s1, $zero
    ctx->pc = 0x1a4d9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4da0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1a4da0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4da4: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x1a4da4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4da8: 0xc06b498  jal         func_1AD260
    ctx->pc = 0x1A4DA8u;
    SET_GPR_U32(ctx, 31, 0x1A4DB0u);
    ctx->pc = 0x1A4DACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4DA8u;
            // 0x1a4dac: 0x3a0582d  daddu       $t3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AD260u;
    if (runtime->hasFunction(0x1AD260u)) {
        auto targetFn = runtime->lookupFunction(0x1AD260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4DB0u; }
        if (ctx->pc != 0x1A4DB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001AD260_0x1ad260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4DB0u; }
        if (ctx->pc != 0x1A4DB0u) { return; }
    }
    ctx->pc = 0x1A4DB0u;
    // 0x1a4db0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1a4db0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4db4: 0x1280009e  beqz        $s4, . + 4 + (0x9E << 2)
    ctx->pc = 0x1A4DB4u;
    {
        const bool branch_taken_0x1a4db4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4DB4u;
            // 0x1a4db8: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4db4) {
            ctx->pc = 0x1A5030u;
            goto label_1a5030;
        }
    }
    ctx->pc = 0x1A4DBCu;
    // 0x1a4dbc: 0x12c00014  beqz        $s6, . + 4 + (0x14 << 2)
    ctx->pc = 0x1A4DBCu;
    {
        const bool branch_taken_0x1a4dbc = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4DBCu;
            // 0x1a4dc0: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4dbc) {
            ctx->pc = 0x1A4E10u;
            goto label_1a4e10;
        }
    }
    ctx->pc = 0x1A4DC4u;
    // 0x1a4dc4: 0x8c42ec94  lw          $v0, -0x136C($v0)
    ctx->pc = 0x1a4dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962324)));
    // 0x1a4dc8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a4dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a4dcc: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1a4dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1a4dd0: 0x8c4300c0  lw          $v1, 0xC0($v0)
    ctx->pc = 0x1a4dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1a4dd4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4DD4u;
    {
        const bool branch_taken_0x1a4dd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4DD4u;
            // 0x1a4dd8: 0x2462ffec  addiu       $v0, $v1, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4dd4) {
            ctx->pc = 0x1A4DE8u;
            goto label_1a4de8;
        }
    }
    ctx->pc = 0x1A4DDCu;
    // 0x1a4ddc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4DDCu;
    {
        const bool branch_taken_0x1a4ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4DE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4DDCu;
            // 0x1a4de0: 0x3100a  movz        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4ddc) {
            ctx->pc = 0x1A4DECu;
            goto label_1a4dec;
        }
    }
    ctx->pc = 0x1A4DE4u;
    // 0x1a4de4: 0x0  nop
    ctx->pc = 0x1a4de4u;
    // NOP
label_1a4de8:
    // 0x1a4de8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a4de8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4dec:
    // 0x1a4dec: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A4DECu;
    {
        const bool branch_taken_0x1a4dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4dec) {
            ctx->pc = 0x1A4DF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4DECu;
            // 0x1a4df0: 0x8e820104  lw          $v0, 0x104($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A4E08u;
            goto label_1a4e08;
        }
    }
    ctx->pc = 0x1A4DF4u;
    // 0x1a4df4: 0x8c4200e4  lw          $v0, 0xE4($v0)
    ctx->pc = 0x1a4df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 228)));
    // 0x1a4df8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1a4df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a4dfc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4DFCu;
    {
        const bool branch_taken_0x1a4dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4DFCu;
            // 0x1a4e00: 0x8c420034  lw          $v0, 0x34($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4dfc) {
            ctx->pc = 0x1A4E0Cu;
            goto label_1a4e0c;
        }
    }
    ctx->pc = 0x1A4E04u;
    // 0x1a4e04: 0x0  nop
    ctx->pc = 0x1a4e04u;
    // NOP
label_1a4e08:
    // 0x1a4e08: 0x94420086  lhu         $v0, 0x86($v0)
    ctx->pc = 0x1a4e08u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 134)));
label_1a4e0c:
    // 0x1a4e0c: 0xa6c20000  sh          $v0, 0x0($s6)
    ctx->pc = 0x1a4e0cu;
    WRITE16(ADD32(GPR_U32(ctx, 22), 0), (uint16_t)GPR_U32(ctx, 2));
label_1a4e10:
    // 0x1a4e10: 0x52a00004  beql        $s5, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A4E10u;
    {
        const bool branch_taken_0x1a4e10 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4e10) {
            ctx->pc = 0x1A4E14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4E10u;
            // 0x1a4e14: 0x86620026  lh          $v0, 0x26($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 38)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A4E24u;
            goto label_1a4e24;
        }
    }
    ctx->pc = 0x1A4E18u;
    // 0x1a4e18: 0x96620012  lhu         $v0, 0x12($s3)
    ctx->pc = 0x1a4e18u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
    // 0x1a4e1c: 0xa6a20000  sh          $v0, 0x0($s5)
    ctx->pc = 0x1a4e1cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1a4e20: 0x86620026  lh          $v0, 0x26($s3)
    ctx->pc = 0x1a4e20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 19), 38)));
label_1a4e24:
    // 0x1a4e24: 0x4400064  bltz        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x1A4E24u;
    {
        const bool branch_taken_0x1a4e24 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A4E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4E24u;
            // 0x1a4e28: 0x96650026  lhu         $a1, 0x26($s3) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 38)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4e24) {
            ctx->pc = 0x1A4FB8u;
            goto label_1a4fb8;
        }
    }
    ctx->pc = 0x1A4E2Cu;
    // 0x1a4e2c: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1a4e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1a4e30: 0x8c42ec64  lw          $v0, -0x139C($v0)
    ctx->pc = 0x1a4e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962276)));
    // 0x1a4e34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a4e34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a4e38: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1a4e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1a4e3c: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x1a4e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1a4e40: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4E40u;
    {
        const bool branch_taken_0x1a4e40 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4E40u;
            // 0x1a4e44: 0x2482ffec  addiu       $v0, $a0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4e40) {
            ctx->pc = 0x1A4E58u;
            goto label_1a4e58;
        }
    }
    ctx->pc = 0x1A4E48u;
    // 0x1a4e48: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a4e48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4e4c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4E4Cu;
    {
        const bool branch_taken_0x1a4e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4E4Cu;
            // 0x1a4e50: 0x44880b  movn        $s1, $v0, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4e4c) {
            ctx->pc = 0x1A4E5Cu;
            goto label_1a4e5c;
        }
    }
    ctx->pc = 0x1A4E54u;
    // 0x1a4e54: 0x0  nop
    ctx->pc = 0x1a4e54u;
    // NOP
label_1a4e58:
    // 0x1a4e58: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1a4e58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a4e5c:
    // 0x1a4e5c: 0x12200056  beqz        $s1, . + 4 + (0x56 << 2)
    ctx->pc = 0x1A4E5Cu;
    {
        const bool branch_taken_0x1a4e5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4E5Cu;
            // 0x1a4e60: 0x52c00  sll         $a1, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4e5c) {
            ctx->pc = 0x1A4FB8u;
            goto label_1a4fb8;
        }
    }
    ctx->pc = 0x1A4E64u;
    // 0x1a4e64: 0x27b00080  addiu       $s0, $sp, 0x80
    ctx->pc = 0x1a4e64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1a4e68: 0x52c03  sra         $a1, $a1, 16
    ctx->pc = 0x1a4e68u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
    // 0x1a4e6c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a4e6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4e70: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1a4e70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4e74: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x1a4e74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1a4e78: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1a4e78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1a4e7c: 0xc0401f2  jal         func_1007C8
    ctx->pc = 0x1A4E7Cu;
    SET_GPR_U32(ctx, 31, 0x1A4E84u);
    ctx->pc = 0x1A4E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4E7Cu;
            // 0x1a4e80: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1007C8u;
    if (runtime->hasFunction(0x1007C8u)) {
        auto targetFn = runtime->lookupFunction(0x1007C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4E84u; }
        if (ctx->pc != 0x1A4E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001007C8_0x1007c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4E84u; }
        if (ctx->pc != 0x1A4E84u) { return; }
    }
    ctx->pc = 0x1A4E84u;
    // 0x1a4e84: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1a4e84u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x1a4e88: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x1a4e88u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4e8c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1a4e8cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4e90: 0x12e00020  beqz        $s7, . + 4 + (0x20 << 2)
    ctx->pc = 0x1A4E90u;
    {
        const bool branch_taken_0x1a4e90 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4E90u;
            // 0x1a4e94: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4e90) {
            ctx->pc = 0x1A4F14u;
            goto label_1a4f14;
        }
    }
    ctx->pc = 0x1A4E98u;
    // 0x1a4e98: 0x200a82d  daddu       $s5, $s0, $zero
    ctx->pc = 0x1a4e98u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4e9c: 0x0  nop
    ctx->pc = 0x1a4e9cu;
    // NOP
label_1a4ea0:
    // 0x1a4ea0: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x1a4ea0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x1a4ea4: 0x52000018  beql        $s0, $zero, . + 4 + (0x18 << 2)
    ctx->pc = 0x1A4EA4u;
    {
        const bool branch_taken_0x1a4ea4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4ea4) {
            ctx->pc = 0x1A4EA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4EA4u;
            // 0x1a4ea8: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A4F08u;
            goto label_1a4f08;
        }
    }
    ctx->pc = 0x1A4EACu;
    // 0x1a4eac: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1a4eacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1a4eb0: 0x8e630030  lw          $v1, 0x30($s3)
    ctx->pc = 0x1a4eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x1a4eb4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a4eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1a4eb8: 0x50620007  beql        $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1A4EB8u;
    {
        const bool branch_taken_0x1a4eb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a4eb8) {
            ctx->pc = 0x1A4EBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4EB8u;
            // 0x1a4ebc: 0x9262003c  lbu         $v0, 0x3C($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 60)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A4ED8u;
            goto label_1a4ed8;
        }
    }
    ctx->pc = 0x1A4EC0u;
    // 0x1a4ec0: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x1a4ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1a4ec4: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x1a4ec4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x1a4ec8: 0x8c42003c  lw          $v0, 0x3C($v0)
    ctx->pc = 0x1a4ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x1a4ecc: 0x40f809  jalr        $v0
    ctx->pc = 0x1A4ECCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A4ED4u);
        ctx->pc = 0x1A4ED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4ECCu;
            // 0x1a4ed0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A4ED4u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A4C10u: goto label_1a4c10;
            case 0x1A4C44u: goto label_1a4c44;
            case 0x1A4C80u: goto label_1a4c80;
            case 0x1A4CB8u: goto label_1a4cb8;
            case 0x1A4D48u: goto label_1a4d48;
            case 0x1A4D58u: goto label_1a4d58;
            case 0x1A4D90u: goto label_1a4d90;
            case 0x1A4DE8u: goto label_1a4de8;
            case 0x1A4DECu: goto label_1a4dec;
            case 0x1A4E08u: goto label_1a4e08;
            case 0x1A4E0Cu: goto label_1a4e0c;
            case 0x1A4E10u: goto label_1a4e10;
            case 0x1A4E24u: goto label_1a4e24;
            case 0x1A4E58u: goto label_1a4e58;
            case 0x1A4E5Cu: goto label_1a4e5c;
            case 0x1A4EA0u: goto label_1a4ea0;
            case 0x1A4ED8u: goto label_1a4ed8;
            case 0x1A4EF0u: goto label_1a4ef0;
            case 0x1A4F08u: goto label_1a4f08;
            case 0x1A4F14u: goto label_1a4f14;
            case 0x1A4F24u: goto label_1a4f24;
            case 0x1A4F7Cu: goto label_1a4f7c;
            case 0x1A4FB8u: goto label_1a4fb8;
            case 0x1A4FC8u: goto label_1a4fc8;
            case 0x1A5010u: goto label_1a5010;
            case 0x1A5014u: goto label_1a5014;
            case 0x1A5030u: goto label_1a5030;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A4ED4u; }
            if (ctx->pc != 0x1A4ED4u) { return; }
        }
        }
    }
    ctx->pc = 0x1A4ED4u;
    // 0x1a4ed4: 0x9262003c  lbu         $v0, 0x3C($s3)
    ctx->pc = 0x1a4ed4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 60)));
label_1a4ed8:
    // 0x1a4ed8: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1A4ED8u;
    {
        const bool branch_taken_0x1a4ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a4ed8) {
            ctx->pc = 0x1A4EDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4ED8u;
            // 0x1a4edc: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A4F08u;
            goto label_1a4f08;
        }
    }
    ctx->pc = 0x1A4EE0u;
    // 0x1a4ee0: 0x8e020038  lw          $v0, 0x38($s0)
    ctx->pc = 0x1a4ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
    // 0x1a4ee4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1a4ee4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1a4ee8: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1A4EE8u;
    {
        const bool branch_taken_0x1a4ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a4ee8) {
            ctx->pc = 0x1A4EECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4EE8u;
            // 0x1a4eec: 0xc440001c  lwc1        $f0, 0x1C($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A4EF0u;
            goto label_1a4ef0;
        }
    }
    ctx->pc = 0x1A4EF0u;
label_1a4ef0:
    // 0x1a4ef0: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1a4ef0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1a4ef4: 0x0  nop
    ctx->pc = 0x1a4ef4u;
    // NOP
    // 0x1a4ef8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4EF8u;
    {
        const bool branch_taken_0x1a4ef8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1A4EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4EF8u;
            // 0x1a4efc: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4ef8) {
            ctx->pc = 0x1A4F08u;
            goto label_1a4f08;
        }
    }
    ctx->pc = 0x1A4F00u;
    // 0x1a4f00: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1a4f00u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1a4f04: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x1a4f04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a4f08:
    // 0x1a4f08: 0x2d7102b  sltu        $v0, $s6, $s7
    ctx->pc = 0x1a4f08u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)GPR_U64(ctx, 23)) ? 1 : 0);
    // 0x1a4f0c: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
    ctx->pc = 0x1A4F0Cu;
    {
        const bool branch_taken_0x1a4f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4F0Cu;
            // 0x1a4f10: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4f0c) {
            ctx->pc = 0x1A4EA0u;
            runtime->cooperativeGuestYield();
            goto label_1a4ea0;
        }
    }
    ctx->pc = 0x1A4F14u;
label_1a4f14:
    // 0x1a4f14: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A4F14u;
    {
        const bool branch_taken_0x1a4f14 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4F14u;
            // 0x1a4f18: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4f14) {
            ctx->pc = 0x1A4F24u;
            goto label_1a4f24;
        }
    }
    ctx->pc = 0x1A4F1Cu;
    // 0x1a4f1c: 0x24422648  addiu       $v0, $v0, 0x2648
    ctx->pc = 0x1a4f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9800));
    // 0x1a4f20: 0xae420040  sw          $v0, 0x40($s2)
    ctx->pc = 0x1a4f20u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 2));
label_1a4f24:
    // 0x1a4f24: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1a4f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1a4f28: 0x8e630030  lw          $v1, 0x30($s3)
    ctx->pc = 0x1a4f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x1a4f2c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a4f2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1a4f30: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A4F30u;
    {
        const bool branch_taken_0x1a4f30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A4F34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4F30u;
            // 0x1a4f34: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4f30) {
            ctx->pc = 0x1A4F7Cu;
            goto label_1a4f7c;
        }
    }
    ctx->pc = 0x1A4F38u;
    // 0x1a4f38: 0xc62c003c  lwc1        $f12, 0x3C($s1)
    ctx->pc = 0x1a4f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1a4f3c: 0xc441c658  lwc1        $f1, -0x39A8($v0)
    ctx->pc = 0x1a4f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294952536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1a4f40: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a4f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4f44: 0xc6600028  lwc1        $f0, 0x28($s3)
    ctx->pc = 0x1a4f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4f48: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x1a4f48u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x1a4f4c: 0xc04015e  jal         func_100578
    ctx->pc = 0x1A4F4Cu;
    SET_GPR_U32(ctx, 31, 0x1A4F54u);
    ctx->pc = 0x1A4F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4F4Cu;
            // 0x1a4f50: 0x460c0301  sub.s       $f12, $f0, $f12 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x100578u;
    if (runtime->hasFunction(0x100578u)) {
        auto targetFn = runtime->lookupFunction(0x100578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4F54u; }
        if (ctx->pc != 0x1A4F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100578_0x100578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4F54u; }
        if (ctx->pc != 0x1A4F54u) { return; }
    }
    ctx->pc = 0x1A4F54u;
    // 0x1a4f54: 0xc660002c  lwc1        $f0, 0x2C($s3)
    ctx->pc = 0x1a4f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a4f58: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a4f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4f5c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1a4f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1a4f60: 0xc0402c8  jal         func_100B20
    ctx->pc = 0x1A4F60u;
    SET_GPR_U32(ctx, 31, 0x1A4F68u);
    ctx->pc = 0x1A4F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4F60u;
            // 0x1a4f64: 0xe620003c  swc1        $f0, 0x3C($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 60), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x100B20u;
    if (runtime->hasFunction(0x100B20u)) {
        auto targetFn = runtime->lookupFunction(0x100B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4F68u; }
        if (ctx->pc != 0x1A4F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_100b20_0x100b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4F68u; }
        if (ctx->pc != 0x1A4F68u) { return; }
    }
    ctx->pc = 0x1A4F68u;
    // 0x1a4f68: 0x8e650030  lw          $a1, 0x30($s3)
    ctx->pc = 0x1a4f68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x1a4f6c: 0xc040298  jal         func_100A60
    ctx->pc = 0x1A4F6Cu;
    SET_GPR_U32(ctx, 31, 0x1A4F74u);
    ctx->pc = 0x1A4F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4F6Cu;
            // 0x1a4f70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100A60u;
    if (runtime->hasFunction(0x100A60u)) {
        auto targetFn = runtime->lookupFunction(0x100A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4F74u; }
        if (ctx->pc != 0x1A4F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100A60_0x100a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4F74u; }
        if (ctx->pc != 0x1A4F74u) { return; }
    }
    ctx->pc = 0x1A4F74u;
    // 0x1a4f74: 0xc040622  jal         func_101888
    ctx->pc = 0x1A4F74u;
    SET_GPR_U32(ctx, 31, 0x1A4F7Cu);
    ctx->pc = 0x1A4F78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4F74u;
            // 0x1a4f78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101888u;
    if (runtime->hasFunction(0x101888u)) {
        auto targetFn = runtime->lookupFunction(0x101888u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4F7Cu; }
        if (ctx->pc != 0x1A4F7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101888_0x101888(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A4F7Cu; }
        if (ctx->pc != 0x1A4F7Cu) { return; }
    }
    ctx->pc = 0x1A4F7Cu;
label_1a4f7c:
    // 0x1a4f7c: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x1a4f7cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a4f80: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1a4f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x1a4f84: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1A4F84u;
    {
        const bool branch_taken_0x1a4f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4F84u;
            // 0x1a4f88: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4f84) {
            ctx->pc = 0x1A4FB8u;
            goto label_1a4fb8;
        }
    }
    ctx->pc = 0x1A4F8Cu;
    // 0x1a4f8c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x1a4f8cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1a4f90: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x1a4f90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x1a4f94: 0x2483e848  addiu       $v1, $a0, -0x17B8
    ctx->pc = 0x1a4f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961224));
    // 0x1a4f98: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a4f98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a4f9c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a4f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1a4fa0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1a4fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1a4fa4: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1a4fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x1a4fa8: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1a4fa8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x1a4fac: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1a4facu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x1a4fb0: 0x40f809  jalr        $v0
    ctx->pc = 0x1A4FB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A4FB8u);
        ctx->pc = 0x1A4FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4FB0u;
            // 0x1a4fb4: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A4FB8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A4C10u: goto label_1a4c10;
            case 0x1A4C44u: goto label_1a4c44;
            case 0x1A4C80u: goto label_1a4c80;
            case 0x1A4CB8u: goto label_1a4cb8;
            case 0x1A4D48u: goto label_1a4d48;
            case 0x1A4D58u: goto label_1a4d58;
            case 0x1A4D90u: goto label_1a4d90;
            case 0x1A4DE8u: goto label_1a4de8;
            case 0x1A4DECu: goto label_1a4dec;
            case 0x1A4E08u: goto label_1a4e08;
            case 0x1A4E0Cu: goto label_1a4e0c;
            case 0x1A4E10u: goto label_1a4e10;
            case 0x1A4E24u: goto label_1a4e24;
            case 0x1A4E58u: goto label_1a4e58;
            case 0x1A4E5Cu: goto label_1a4e5c;
            case 0x1A4EA0u: goto label_1a4ea0;
            case 0x1A4ED8u: goto label_1a4ed8;
            case 0x1A4EF0u: goto label_1a4ef0;
            case 0x1A4F08u: goto label_1a4f08;
            case 0x1A4F14u: goto label_1a4f14;
            case 0x1A4F24u: goto label_1a4f24;
            case 0x1A4F7Cu: goto label_1a4f7c;
            case 0x1A4FB8u: goto label_1a4fb8;
            case 0x1A4FC8u: goto label_1a4fc8;
            case 0x1A5010u: goto label_1a5010;
            case 0x1A5014u: goto label_1a5014;
            case 0x1A5030u: goto label_1a5030;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A4FB8u; }
            if (ctx->pc != 0x1A4FB8u) { return; }
        }
        }
    }
    ctx->pc = 0x1A4FB8u;
label_1a4fb8:
    // 0x1a4fb8: 0x17c0001d  bnez        $fp, . + 4 + (0x1D << 2)
    ctx->pc = 0x1A4FB8u;
    {
        const bool branch_taken_0x1a4fb8 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A4FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4FB8u;
            // 0x1a4fbc: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4fb8) {
            ctx->pc = 0x1A5030u;
            goto label_1a5030;
        }
    }
    ctx->pc = 0x1A4FC0u;
    // 0x1a4fc0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a4fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a4fc4: 0x0  nop
    ctx->pc = 0x1a4fc4u;
    // NOP
label_1a4fc8:
    // 0x1a4fc8: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1a4fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1a4fcc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1a4fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x1a4fd0: 0x2831821  addu        $v1, $s4, $v1
    ctx->pc = 0x1a4fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
    // 0x1a4fd4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1a4fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1a4fd8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1a4fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1a4fdc: 0x1080fffa  beqz        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1A4FDCu;
    {
        const bool branch_taken_0x1a4fdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4FDCu;
            // 0x1a4fe0: 0xac620100  sw          $v0, 0x100($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 256), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4fdc) {
            ctx->pc = 0x1A4FC8u;
            runtime->cooperativeGuestYield();
            goto label_1a4fc8;
        }
    }
    ctx->pc = 0x1A4FE4u;
    // 0x1a4fe4: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1a4fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x1a4fe8: 0x8c42ec94  lw          $v0, -0x136C($v0)
    ctx->pc = 0x1a4fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962324)));
    // 0x1a4fec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1a4fecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1a4ff0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x1a4ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1a4ff4: 0x8c4400c0  lw          $a0, 0xC0($v0)
    ctx->pc = 0x1a4ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 192)));
    // 0x1a4ff8: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A4FF8u;
    {
        const bool branch_taken_0x1a4ff8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A4FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A4FF8u;
            // 0x1a4ffc: 0x2482ffec  addiu       $v0, $a0, -0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a4ff8) {
            ctx->pc = 0x1A5010u;
            goto label_1a5010;
        }
    }
    ctx->pc = 0x1A5000u;
    // 0x1a5000: 0x4100a  movz        $v0, $zero, $a0
    ctx->pc = 0x1a5000u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
    // 0x1a5004: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A5004u;
    {
        const bool branch_taken_0x1a5004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5004u;
            // 0x1a5008: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5004) {
            ctx->pc = 0x1A5014u;
            goto label_1a5014;
        }
    }
    ctx->pc = 0x1A500Cu;
    // 0x1a500c: 0x0  nop
    ctx->pc = 0x1a500cu;
    // NOP
label_1a5010:
    // 0x1a5010: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a5010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5014:
    // 0x1a5014: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1A5014u;
    {
        const bool branch_taken_0x1a5014 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5014u;
            // 0x1a5018: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5014) {
            ctx->pc = 0x1A5030u;
            goto label_1a5030;
        }
    }
    ctx->pc = 0x1A501Cu;
    // 0x1a501c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1a501cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x1a5020: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x1a5020u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1a5024: 0xc054104  jal         func_150410
    ctx->pc = 0x1A5024u;
    SET_GPR_U32(ctx, 31, 0x1A502Cu);
    ctx->pc = 0x150410u;
    if (runtime->hasFunction(0x150410u)) {
        auto targetFn = runtime->lookupFunction(0x150410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A502Cu; }
        if (ctx->pc != 0x1A502Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_150410_0x1504d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A502Cu; }
        if (ctx->pc != 0x1A502Cu) { return; }
    }
    ctx->pc = 0x1A502Cu;
    // 0x1a502c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1a502cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a5030:
    // 0x1a5030: 0x7bb00320  lq          $s0, 0x320($sp)
    ctx->pc = 0x1a5030u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x1a5034: 0x7bb10310  lq          $s1, 0x310($sp)
    ctx->pc = 0x1a5034u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x1a5038: 0x7bb20300  lq          $s2, 0x300($sp)
    ctx->pc = 0x1a5038u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x1a503c: 0x7bb302f0  lq          $s3, 0x2F0($sp)
    ctx->pc = 0x1a503cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x1a5040: 0x7bb402e0  lq          $s4, 0x2E0($sp)
    ctx->pc = 0x1a5040u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x1a5044: 0x7bb502d0  lq          $s5, 0x2D0($sp)
    ctx->pc = 0x1a5044u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x1a5048: 0x7bb602c0  lq          $s6, 0x2C0($sp)
    ctx->pc = 0x1a5048u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x1a504c: 0x7bb702b0  lq          $s7, 0x2B0($sp)
    ctx->pc = 0x1a504cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x1a5050: 0x7bbe02a0  lq          $fp, 0x2A0($sp)
    ctx->pc = 0x1a5050u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x1a5054: 0xdfbf0290  ld          $ra, 0x290($sp)
    ctx->pc = 0x1a5054u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x1a5058: 0xc7b40330  lwc1        $f20, 0x330($sp)
    ctx->pc = 0x1a5058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 816)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1a505c: 0x3e00008  jr          $ra
    ctx->pc = 0x1A505Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A505Cu;
            // 0x1a5060: 0x27bd0340  addiu       $sp, $sp, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1A4C10u: goto label_1a4c10;
            case 0x1A4C44u: goto label_1a4c44;
            case 0x1A4C80u: goto label_1a4c80;
            case 0x1A4CB8u: goto label_1a4cb8;
            case 0x1A4D48u: goto label_1a4d48;
            case 0x1A4D58u: goto label_1a4d58;
            case 0x1A4D90u: goto label_1a4d90;
            case 0x1A4DE8u: goto label_1a4de8;
            case 0x1A4DECu: goto label_1a4dec;
            case 0x1A4E08u: goto label_1a4e08;
            case 0x1A4E0Cu: goto label_1a4e0c;
            case 0x1A4E10u: goto label_1a4e10;
            case 0x1A4E24u: goto label_1a4e24;
            case 0x1A4E58u: goto label_1a4e58;
            case 0x1A4E5Cu: goto label_1a4e5c;
            case 0x1A4EA0u: goto label_1a4ea0;
            case 0x1A4ED8u: goto label_1a4ed8;
            case 0x1A4EF0u: goto label_1a4ef0;
            case 0x1A4F08u: goto label_1a4f08;
            case 0x1A4F14u: goto label_1a4f14;
            case 0x1A4F24u: goto label_1a4f24;
            case 0x1A4F7Cu: goto label_1a4f7c;
            case 0x1A4FB8u: goto label_1a4fb8;
            case 0x1A4FC8u: goto label_1a4fc8;
            case 0x1A5010u: goto label_1a5010;
            case 0x1A5014u: goto label_1a5014;
            case 0x1A5030u: goto label_1a5030;
            default: break;
        }
        return;
    }
    ctx->pc = 0x1A5064u;
    // 0x1a5064: 0x0  nop
    ctx->pc = 0x1a5064u;
    // NOP
}
