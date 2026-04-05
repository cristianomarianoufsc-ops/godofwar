#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00157A60
// Address: 0x157a60 - 0x158020
void sub_00157A60_0x157a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00157A60_0x157a60");
#endif

    ctx->pc = 0x157a60u;

    // 0x157a60: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x157a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
    // 0x157a64: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x157a64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x157a68: 0x7fb101f0  sq          $s1, 0x1F0($sp)
    ctx->pc = 0x157a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 17));
    // 0x157a6c: 0x7fbe0180  sq          $fp, 0x180($sp)
    ctx->pc = 0x157a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 30));
    // 0x157a70: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x157a70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157a74: 0x7fb00200  sq          $s0, 0x200($sp)
    ctx->pc = 0x157a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 16));
    // 0x157a78: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x157a78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x157a7c: 0x7fb201e0  sq          $s2, 0x1E0($sp)
    ctx->pc = 0x157a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 18));
    // 0x157a80: 0x7fb301d0  sq          $s3, 0x1D0($sp)
    ctx->pc = 0x157a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 19));
    // 0x157a84: 0x7fb401c0  sq          $s4, 0x1C0($sp)
    ctx->pc = 0x157a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 20));
    // 0x157a88: 0x7fb501b0  sq          $s5, 0x1B0($sp)
    ctx->pc = 0x157a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 21));
    // 0x157a8c: 0x7fb601a0  sq          $s6, 0x1A0($sp)
    ctx->pc = 0x157a8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 22));
    // 0x157a90: 0x7fb70190  sq          $s7, 0x190($sp)
    ctx->pc = 0x157a90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 23));
    // 0x157a94: 0xffbf0170  sd          $ra, 0x170($sp)
    ctx->pc = 0x157a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 31));
    // 0x157a98: 0xac4049a8  sw          $zero, 0x49A8($v0)
    ctx->pc = 0x157a98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 18856), GPR_U32(ctx, 0));
    // 0x157a9c: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x157a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x157aa0: 0xafa60150  sw          $a2, 0x150($sp)
    ctx->pc = 0x157aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 6));
    // 0x157aa4: 0xaca049a4  sw          $zero, 0x49A4($a1)
    ctx->pc = 0x157aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 18852), GPR_U32(ctx, 0));
    // 0x157aa8: 0x8c750104  lw          $s5, 0x104($v1)
    ctx->pc = 0x157aa8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 260)));
    // 0x157aac: 0x8ea30054  lw          $v1, 0x54($s5)
    ctx->pc = 0x157aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
    // 0x157ab0: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x157AB0u;
    {
        const bool branch_taken_0x157ab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x157AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157AB0u;
            // 0x157ab4: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157ab0) {
            ctx->pc = 0x157B20u;
            goto label_157b20;
        }
    }
    ctx->pc = 0x157AB8u;
    // 0x157ab8: 0x96a20086  lhu         $v0, 0x86($s5)
    ctx->pc = 0x157ab8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 134)));
    // 0x157abc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x157abcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x157ac0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x157ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x157ac4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x157ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x157ac8: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x157AC8u;
    {
        const bool branch_taken_0x157ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157AC8u;
            // 0x157acc: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157ac8) {
            ctx->pc = 0x157B24u;
            goto label_157b24;
        }
    }
    ctx->pc = 0x157AD0u;
    // 0x157ad0: 0x8ea50088  lw          $a1, 0x88($s5)
    ctx->pc = 0x157ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 136)));
    // 0x157ad4: 0x10a00146  beqz        $a1, . + 4 + (0x146 << 2)
    ctx->pc = 0x157AD4u;
    {
        const bool branch_taken_0x157ad4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x157AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157AD4u;
            // 0x157ad8: 0x7bb00200  lq          $s0, 0x200($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157ad4) {
            ctx->pc = 0x157FF0u;
            goto label_157ff0;
        }
    }
    ctx->pc = 0x157ADCu;
    // 0x157adc: 0x8ca20034  lw          $v0, 0x34($a1)
    ctx->pc = 0x157adcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 52)));
    // 0x157ae0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x157ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x157ae4: 0x10400143  beqz        $v0, . + 4 + (0x143 << 2)
    ctx->pc = 0x157AE4u;
    {
        const bool branch_taken_0x157ae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157AE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157AE4u;
            // 0x157ae8: 0x7bb101f0  lq          $s1, 0x1F0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 496)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157ae4) {
            ctx->pc = 0x157FF4u;
            goto label_157ff4;
        }
    }
    ctx->pc = 0x157AECu;
    // 0x157aec: 0x94a20004  lhu         $v0, 0x4($a1)
    ctx->pc = 0x157aecu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x157af0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x157af0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x157af4: 0x1040013f  beqz        $v0, . + 4 + (0x13F << 2)
    ctx->pc = 0x157AF4u;
    {
        const bool branch_taken_0x157af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157AF4u;
            // 0x157af8: 0x3c020033  lui         $v0, 0x33 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157af4) {
            ctx->pc = 0x157FF4u;
            goto label_157ff4;
        }
    }
    ctx->pc = 0x157AFCu;
    // 0x157afc: 0x8c44e854  lw          $a0, -0x17AC($v0)
    ctx->pc = 0x157afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961236)));
    // 0x157b00: 0x8c8300d8  lw          $v1, 0xD8($a0)
    ctx->pc = 0x157b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 216)));
    // 0x157b04: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x157b04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x157b08: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x157b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x157b0c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x157b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x157b10: 0xac4500dc  sw          $a1, 0xDC($v0)
    ctx->pc = 0x157b10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 220), GPR_U32(ctx, 5));
    // 0x157b14: 0x10000137  b           . + 4 + (0x137 << 2)
    ctx->pc = 0x157B14u;
    {
        const bool branch_taken_0x157b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157B18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157B14u;
            // 0x157b18: 0xac8300d8  sw          $v1, 0xD8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157b14) {
            ctx->pc = 0x157FF4u;
            goto label_157ff4;
        }
    }
    ctx->pc = 0x157B1Cu;
    // 0x157b1c: 0x0  nop
    ctx->pc = 0x157b1cu;
    // NOP
label_157b20:
    // 0x157b20: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x157b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_157b24:
    // 0x157b24: 0x8c57104c  lw          $s7, 0x104C($v0)
    ctx->pc = 0x157b24u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4172)));
    // 0x157b28: 0x8ee40360  lw          $a0, 0x360($s7)
    ctx->pc = 0x157b28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 864)));
    // 0x157b2c: 0x26e20360  addiu       $v0, $s7, 0x360
    ctx->pc = 0x157b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 864));
    // 0x157b30: 0x10820002  beq         $a0, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x157B30u;
    {
        const bool branch_taken_0x157b30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x157B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157B30u;
            // 0x157b34: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157b30) {
            ctx->pc = 0x157B3Cu;
            goto label_157b3c;
        }
    }
    ctx->pc = 0x157B38u;
    // 0x157b38: 0x8c920008  lw          $s2, 0x8($a0)
    ctx->pc = 0x157b38u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_157b3c:
    // 0x157b3c: 0x8e2200e0  lw          $v0, 0xE0($s1)
    ctx->pc = 0x157b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
    // 0x157b40: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x157b40u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157b44: 0x10400129  beqz        $v0, . + 4 + (0x129 << 2)
    ctx->pc = 0x157B44u;
    {
        const bool branch_taken_0x157b44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157B44u;
            // 0x157b48: 0xafa20154  sw          $v0, 0x154($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157b44) {
            ctx->pc = 0x157FECu;
            goto label_157fec;
        }
    }
    ctx->pc = 0x157B4Cu;
    // 0x157b4c: 0xafa0015c  sw          $zero, 0x15C($sp)
    ctx->pc = 0x157b4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 0));
label_157b50:
    // 0x157b50: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x157b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x157b54: 0x141142  srl         $v0, $s4, 5
    ctx->pc = 0x157b54u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 5));
    // 0x157b58: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x157b58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x157b5c: 0x3284001f  andi        $a0, $s4, 0x1F
    ctx->pc = 0x157b5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)31);
    // 0x157b60: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x157b60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x157b64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x157b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157b68: 0x8c630100  lw          $v1, 0x100($v1)
    ctx->pc = 0x157b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 256)));
    // 0x157b6c: 0x821004  sllv        $v0, $v0, $a0
    ctx->pc = 0x157b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 4) & 0x1F));
    // 0x157b70: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x157b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x157b74: 0x10600116  beqz        $v1, . + 4 + (0x116 << 2)
    ctx->pc = 0x157B74u;
    {
        const bool branch_taken_0x157b74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x157B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157B74u;
            // 0x157b78: 0x262300e0  addiu       $v1, $s1, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157b74) {
            ctx->pc = 0x157FD0u;
            goto label_157fd0;
        }
    }
    ctx->pc = 0x157B7Cu;
    // 0x157b7c: 0xafa30158  sw          $v1, 0x158($sp)
    ctx->pc = 0x157b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 3));
    // 0x157b80: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x157b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x157b84: 0x8fa4015c  lw          $a0, 0x15C($sp)
    ctx->pc = 0x157b84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x157b88: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x157b88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x157b8c: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x157b8cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x157b90: 0x3c16002a  lui         $s6, 0x2A
    ctx->pc = 0x157b90u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)42 << 16));
    // 0x157b94: 0xdec3bdf8  ld          $v1, -0x4208($s6)
    ctx->pc = 0x157b94u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 22), 4294950392)));
    // 0x157b98: 0xdea20040  ld          $v0, 0x40($s5)
    ctx->pc = 0x157b98u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 64)));
    // 0x157b9c: 0x10430006  beq         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x157B9Cu;
    {
        const bool branch_taken_0x157b9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x157BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157B9Cu;
            // 0x157ba0: 0x8e660034  lw          $a2, 0x34($s3) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157b9c) {
            ctx->pc = 0x157BB8u;
            goto label_157bb8;
        }
    }
    ctx->pc = 0x157BA4u;
    // 0x157ba4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x157ba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157ba8: 0xc04daf6  jal         func_136BD8
    ctx->pc = 0x157BA8u;
    SET_GPR_U32(ctx, 31, 0x157BB0u);
    ctx->pc = 0x157BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157BA8u;
            // 0x157bac: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136BD8u;
    if (runtime->hasFunction(0x136BD8u)) {
        auto targetFn = runtime->lookupFunction(0x136BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157BB0u; }
        if (ctx->pc != 0x157BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00136BD8_0x136bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157BB0u; }
        if (ctx->pc != 0x157BB0u) { return; }
    }
    ctx->pc = 0x157BB0u;
    // 0x157bb0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x157BB0u;
    {
        const bool branch_taken_0x157bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157BB0u;
            // 0x157bb4: 0xdba10000  lqc2        $vf1, 0x0($sp) (Delay Slot)
        ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157bb0) {
            ctx->pc = 0x157BE8u;
            goto label_157be8;
        }
    }
    ctx->pc = 0x157BB8u;
label_157bb8:
    // 0x157bb8: 0x8ea2008c  lw          $v0, 0x8C($s5)
    ctx->pc = 0x157bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 140)));
    // 0x157bbc: 0x61980  sll         $v1, $a2, 6
    ctx->pc = 0x157bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 6));
    // 0x157bc0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x157bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x157bc4: 0x78620000  lq          $v0, 0x0($v1)
    ctx->pc = 0x157bc4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x157bc8: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x157bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    // 0x157bcc: 0x78620010  lq          $v0, 0x10($v1)
    ctx->pc = 0x157bccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x157bd0: 0x7fa20010  sq          $v0, 0x10($sp)
    ctx->pc = 0x157bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    // 0x157bd4: 0x78620020  lq          $v0, 0x20($v1)
    ctx->pc = 0x157bd4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x157bd8: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x157bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x157bdc: 0x78620030  lq          $v0, 0x30($v1)
    ctx->pc = 0x157bdcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x157be0: 0x7fa20030  sq          $v0, 0x30($sp)
    ctx->pc = 0x157be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 2));
    // 0x157be4: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x157be4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_157be8:
    // 0x157be8: 0x4be1086a  vmul.xyzw   $vf1, $vf1, $vf1
    ctx->pc = 0x157be8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = PS2_VBLEND(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x157bec: 0x4b010881  vaddy.x     $vf2, $vf1, $vf1y
    ctx->pc = 0x157becu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x157bf0: 0x4b011082  vaddz.x     $vf2, $vf2, $vf1z
    ctx->pc = 0x157bf0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x157bf4: 0x86430060  lh          $v1, 0x60($s2)
    ctx->pc = 0x157bf4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x157bf8: 0x48251000  qmfc2.ni    $a1, $vf2
    ctx->pc = 0x157bf8u;
    SET_GPR_VEC(ctx, 5, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x157bfc: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x157bfcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x157c00: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x157c00u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157c04: 0x3a0802d  daddu       $s0, $sp, $zero
    ctx->pc = 0x157c04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157c08: 0x46000004  c1          0x4
    ctx->pc = 0x157c08u;
    ctx->f[0] = FPU_SQRT_S(ctx->f[0]);
    // 0x157c0c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x157c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x157c10: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x157C10u;
    {
        const bool branch_taken_0x157c10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x157C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157C10u;
            // 0x157c14: 0xe4c049a0  swc1        $f0, 0x49A0($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 18848), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x157c10) {
            ctx->pc = 0x157C20u;
            goto label_157c20;
        }
    }
    ctx->pc = 0x157C18u;
    // 0x157c18: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x157C18u;
    {
        const bool branch_taken_0x157c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157C18u;
            // 0x157c1c: 0x26450020  addiu       $a1, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157c18) {
            ctx->pc = 0x157C3Cu;
            goto label_157c3c;
        }
    }
    ctx->pc = 0x157C20u;
label_157c20:
    // 0x157c20: 0xdec5bdf8  ld          $a1, -0x4208($s6)
    ctx->pc = 0x157c20u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 22), 4294950392)));
    // 0x157c24: 0xde420068  ld          $v0, 0x68($s2)
    ctx->pc = 0x157c24u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x157c28: 0x50450004  beql        $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x157C28u;
    {
        const bool branch_taken_0x157c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x157c28) {
            ctx->pc = 0x157C2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157C28u;
            // 0x157c2c: 0x26450070  addiu       $a1, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
            ctx->pc = 0x157C3Cu;
            goto label_157c3c;
        }
    }
    ctx->pc = 0x157C30u;
    // 0x157c30: 0xc04c0f4  jal         func_1303D0
    ctx->pc = 0x157C30u;
    SET_GPR_U32(ctx, 31, 0x157C38u);
    ctx->pc = 0x157C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157C30u;
            // 0x157c34: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1303D0u;
    if (runtime->hasFunction(0x1303D0u)) {
        auto targetFn = runtime->lookupFunction(0x1303D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157C38u; }
        if (ctx->pc != 0x157C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001303D0_0x1303d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157C38u; }
        if (ctx->pc != 0x157C38u) { return; }
    }
    ctx->pc = 0x157C38u;
    // 0x157c38: 0x26450070  addiu       $a1, $s2, 0x70
    ctx->pc = 0x157c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
label_157c3c:
    // 0x157c3c: 0xde430068  ld          $v1, 0x68($s2)
    ctx->pc = 0x157c3cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x157c40: 0xde4200f0  ld          $v0, 0xF0($s2)
    ctx->pc = 0x157c40u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x157c44: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x157c44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x157c48: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x157C48u;
    {
        const bool branch_taken_0x157c48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157C48u;
            // 0x157c4c: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157c48) {
            ctx->pc = 0x157C84u;
            goto label_157c84;
        }
    }
    ctx->pc = 0x157C50u;
    // 0x157c50: 0xc0614c6  jal         func_185318
    ctx->pc = 0x157C50u;
    SET_GPR_U32(ctx, 31, 0x157C58u);
    ctx->pc = 0x157C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157C50u;
            // 0x157c54: 0xfe4300f0  sd          $v1, 0xF0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 240), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x185318u;
    if (runtime->hasFunction(0x185318u)) {
        auto targetFn = runtime->lookupFunction(0x185318u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157C58u; }
        if (ctx->pc != 0x157C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00185318_0x185318(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157C58u; }
        if (ctx->pc != 0x157C58u) { return; }
    }
    ctx->pc = 0x157C58u;
    // 0x157c58: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x157c58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x157c5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x157c5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157c60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x157c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157c64: 0x7e4200b0  sq          $v0, 0xB0($s2)
    ctx->pc = 0x157c64u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 176), GPR_VEC(ctx, 2));
    // 0x157c68: 0x7ba20090  lq          $v0, 0x90($sp)
    ctx->pc = 0x157c68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x157c6c: 0x7e4200c0  sq          $v0, 0xC0($s2)
    ctx->pc = 0x157c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 192), GPR_VEC(ctx, 2));
    // 0x157c70: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x157c70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x157c74: 0x7e4200d0  sq          $v0, 0xD0($s2)
    ctx->pc = 0x157c74u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 208), GPR_VEC(ctx, 2));
    // 0x157c78: 0x7ba200b0  lq          $v0, 0xB0($sp)
    ctx->pc = 0x157c78u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x157c7c: 0xc08ed6e  jal         func_23B5B8
    ctx->pc = 0x157C7Cu;
    SET_GPR_U32(ctx, 31, 0x157C84u);
    ctx->pc = 0x157C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157C7Cu;
            // 0x157c80: 0x7e4200e0  sq          $v0, 0xE0($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 224), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B5B8u;
    if (runtime->hasFunction(0x23B5B8u)) {
        auto targetFn = runtime->lookupFunction(0x23B5B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157C84u; }
        if (ctx->pc != 0x157C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_23b5b8_0x23b5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157C84u; }
        if (ctx->pc != 0x157C84u) { return; }
    }
    ctx->pc = 0x157C84u;
label_157c84:
    // 0x157c84: 0x264200b0  addiu       $v0, $s2, 0xB0
    ctx->pc = 0x157c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 176));
    // 0x157c88: 0xda4600b0  lqc2        $vf6, 0xB0($s2)
    ctx->pc = 0x157c88u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 176)));
    // 0x157c8c: 0xd8440030  lqc2        $vf4, 0x30($v0)
    ctx->pc = 0x157c8cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x157c90: 0xd8470010  lqc2        $vf7, 0x10($v0)
    ctx->pc = 0x157c90u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x157c94: 0xd8480020  lqc2        $vf8, 0x20($v0)
    ctx->pc = 0x157c94u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x157c98: 0xda010000  lqc2        $vf1, 0x0($s0)
    ctx->pc = 0x157c98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x157c9c: 0xda050030  lqc2        $vf5, 0x30($s0)
    ctx->pc = 0x157c9cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x157ca0: 0xda020010  lqc2        $vf2, 0x10($s0)
    ctx->pc = 0x157ca0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x157ca4: 0xda030020  lqc2        $vf3, 0x20($s0)
    ctx->pc = 0x157ca4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x157ca8: 0x4be131bc  vmulax.xyzw $ACC, $vf6, $vf1x
    ctx->pc = 0x157ca8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x157cac: 0x4be138bd  vmadday.xyzw $ACC, $vf7, $vf1y
    ctx->pc = 0x157cacu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x157cb0: 0x4be140be  vmaddaz.xyzw $ACC, $vf8, $vf1z
    ctx->pc = 0x157cb0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x157cb4: 0x4be1204b  vmaddw.xyzw $vf1, $vf4, $vf1w
    ctx->pc = 0x157cb4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x157cb8: 0x4be231bc  vmulax.xyzw $ACC, $vf6, $vf2x
    ctx->pc = 0x157cb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x157cbc: 0xfba100c0  sqc2        $vf1, 0xC0($sp)
    ctx->pc = 0x157cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x157cc0: 0x4be238bd  vmadday.xyzw $ACC, $vf7, $vf2y
    ctx->pc = 0x157cc0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x157cc4: 0x4be240be  vmaddaz.xyzw $ACC, $vf8, $vf2z
    ctx->pc = 0x157cc4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x157cc8: 0x4be2208b  vmaddw.xyzw $vf2, $vf4, $vf2w
    ctx->pc = 0x157cc8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x157ccc: 0x4be331bc  vmulax.xyzw $ACC, $vf6, $vf3x
    ctx->pc = 0x157cccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x157cd0: 0xfba200d0  sqc2        $vf2, 0xD0($sp)
    ctx->pc = 0x157cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x157cd4: 0x4be338bd  vmadday.xyzw $ACC, $vf7, $vf3y
    ctx->pc = 0x157cd4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x157cd8: 0x4be340be  vmaddaz.xyzw $ACC, $vf8, $vf3z
    ctx->pc = 0x157cd8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x157cdc: 0x4be320cb  vmaddw.xyzw $vf3, $vf4, $vf3w
    ctx->pc = 0x157cdcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x157ce0: 0x4be531bc  vmulax.xyzw $ACC, $vf6, $vf5x
    ctx->pc = 0x157ce0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x157ce4: 0xfba300e0  sqc2        $vf3, 0xE0($sp)
    ctx->pc = 0x157ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x157ce8: 0x4be538bd  vmadday.xyzw $ACC, $vf7, $vf5y
    ctx->pc = 0x157ce8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x157cec: 0x4be540be  vmaddaz.xyzw $ACC, $vf8, $vf5z
    ctx->pc = 0x157cecu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x157cf0: 0x4be5210b  vmaddw.xyzw $vf4, $vf4, $vf5w
    ctx->pc = 0x157cf0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x157cf4: 0xfba400f0  sqc2        $vf4, 0xF0($sp)
    ctx->pc = 0x157cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x157cf8: 0xfba10040  sqc2        $vf1, 0x40($sp)
    ctx->pc = 0x157cf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x157cfc: 0x34028300  ori         $v0, $zero, 0x8300
    ctx->pc = 0x157cfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33536);
    // 0x157d00: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x157d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x157d04: 0xde3000c0  ld          $s0, 0xC0($s1)
    ctx->pc = 0x157d04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 17), 192)));
    // 0x157d08: 0xfba20050  sqc2        $vf2, 0x50($sp)
    ctx->pc = 0x157d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x157d0c: 0xfba30060  sqc2        $vf3, 0x60($sp)
    ctx->pc = 0x157d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x157d10: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x157d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x157d14: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x157D14u;
    {
        const bool branch_taken_0x157d14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157D18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157D14u;
            // 0x157d18: 0xfba40070  sqc2        $vf4, 0x70($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[4]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157d14) {
            ctx->pc = 0x157D48u;
            goto label_157d48;
        }
    }
    ctx->pc = 0x157D1Cu;
    // 0x157d1c: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x157d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x157d20: 0xc055e56  jal         func_157958
    ctx->pc = 0x157D20u;
    SET_GPR_U32(ctx, 31, 0x157D28u);
    ctx->pc = 0x157D24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157D20u;
            // 0x157d24: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x157958u;
    if (runtime->hasFunction(0x157958u)) {
        auto targetFn = runtime->lookupFunction(0x157958u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157D28u; }
        if (ctx->pc != 0x157D28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00157958_0x157958(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157D28u; }
        if (ctx->pc != 0x157D28u) { return; }
    }
    ctx->pc = 0x157D28u;
    // 0x157d28: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x157d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x157d2c: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x157d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x157d30: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x157d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x157d34: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x157D34u;
    {
        const bool branch_taken_0x157d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x157d34) {
            ctx->pc = 0x157D38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157D34u;
            // 0x157d38: 0x86220120  lh          $v0, 0x120($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 288)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x157D4Cu;
            goto label_157d4c;
        }
    }
    ctx->pc = 0x157D3Cu;
    // 0x157d3c: 0x4be1033c  vmove.xyzw  $vf1, $vf0
    ctx->pc = 0x157d3cu;
    ctx->vu0_vf[1] = ctx->vu0_vf[0];
    // 0x157d40: 0xfba10070  sqc2        $vf1, 0x70($sp)
    ctx->pc = 0x157d40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x157d44: 0x0  nop
    ctx->pc = 0x157d44u;
    // NOP
label_157d48:
    // 0x157d48: 0x86220120  lh          $v0, 0x120($s1)
    ctx->pc = 0x157d48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 288)));
label_157d4c:
    // 0x157d4c: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x157D4Cu;
    {
        const bool branch_taken_0x157d4c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x157D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157D4Cu;
            // 0x157d50: 0x3c020030  lui         $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157d4c) {
            ctx->pc = 0x157D5Cu;
            goto label_157d5c;
        }
    }
    ctx->pc = 0x157D54u;
    // 0x157d54: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x157D54u;
    {
        const bool branch_taken_0x157d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157D54u;
            // 0x157d58: 0xac404998  sw          $zero, 0x4998($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 18840), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157d54) {
            ctx->pc = 0x157D98u;
            goto label_157d98;
        }
    }
    ctx->pc = 0x157D5Cu;
label_157d5c:
    // 0x157d5c: 0xdba10070  lqc2        $vf1, 0x70($sp)
    ctx->pc = 0x157d5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x157d60: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x157d60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157d64: 0xc04fb12  jal         func_13EC48
    ctx->pc = 0x157D64u;
    SET_GPR_U32(ctx, 31, 0x157D6Cu);
    ctx->pc = 0x157D68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157D64u;
            // 0x157d68: 0xfba10160  sqc2        $vf1, 0x160($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 352), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13EC48u;
    if (runtime->hasFunction(0x13EC48u)) {
        auto targetFn = runtime->lookupFunction(0x13EC48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157D6Cu; }
        if (ctx->pc != 0x157D6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013EC48_0x13ec48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157D6Cu; }
        if (ctx->pc != 0x157D6Cu) { return; }
    }
    ctx->pc = 0x157D6Cu;
    // 0x157d6c: 0x44070000  mfc1        $a3, $f0
    ctx->pc = 0x157d6cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 7, bits); }
    // 0x157d70: 0x48a71000  qmtc2.ni    $a3, $vf2
    ctx->pc = 0x157d70u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 7));
    // 0x157d74: 0xdba10160  lqc2        $vf1, 0x160($sp)
    ctx->pc = 0x157d74u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x157d78: 0x4a420858  vmulx.z     $vf1, $vf1, $vf2x
    ctx->pc = 0x157d78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x157d7c: 0x48280800  qmfc2.ni    $t0, $vf1
    ctx->pc = 0x157d7cu;
    SET_GPR_VEC(ctx, 8, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x157d80: 0x70081789  pexew       $v0, $t0
    ctx->pc = 0x157d80u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x157d84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x157d84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x157d88: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x157d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x157d8c: 0xe4404998  swc1        $f0, 0x4998($v0)
    ctx->pc = 0x157d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 18840), bits); }
    // 0x157d90: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x157d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x157d94: 0x0  nop
    ctx->pc = 0x157d94u;
    // NOP
label_157d98:
    // 0x157d98: 0xc6200118  lwc1        $f0, 0x118($s1)
    ctx->pc = 0x157d98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157d9c: 0xc4414998  lwc1        $f1, 0x4998($v0)
    ctx->pc = 0x157d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 18840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157da0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x157da0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x157da4: 0x0  nop
    ctx->pc = 0x157da4u;
    // NOP
    // 0x157da8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x157DA8u;
    {
        const bool branch_taken_0x157da8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x157da8) {
            ctx->pc = 0x157DACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x157DA8u;
            // 0x157dac: 0xe6210118  swc1        $f1, 0x118($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 280), bits); }
        ctx->in_delay_slot = false;
            ctx->pc = 0x157DB0u;
            goto label_157db0;
        }
    }
    ctx->pc = 0x157DB0u;
label_157db0:
    // 0x157db0: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x157db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x157db4: 0xdba20000  lqc2        $vf2, 0x0($sp)
    ctx->pc = 0x157db4u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x157db8: 0x30470010  andi        $a3, $v0, 0x10
    ctx->pc = 0x157db8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x157dbc: 0xdba30010  lqc2        $vf3, 0x10($sp)
    ctx->pc = 0x157dbcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x157dc0: 0xdba40020  lqc2        $vf4, 0x20($sp)
    ctx->pc = 0x157dc0u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x157dc4: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x157DC4u;
    {
        const bool branch_taken_0x157dc4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x157DC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157DC4u;
            // 0x157dc8: 0xdba50030  lqc2        $vf5, 0x30($sp) (Delay Slot)
        ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157dc4) {
            ctx->pc = 0x157DE0u;
            goto label_157de0;
        }
    }
    ctx->pc = 0x157DCCu;
    // 0x157dcc: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x157dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x157dd0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x157dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x157dd4: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x157dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x157dd8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x157DD8u;
    {
        const bool branch_taken_0x157dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157DD8u;
            // 0x157ddc: 0x2625021  addu        $t2, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157dd8) {
            ctx->pc = 0x157DF0u;
            goto label_157df0;
        }
    }
    ctx->pc = 0x157DE0u;
label_157de0:
    // 0x157de0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x157de0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x157de4: 0x2821018  mult        $v0, $s4, $v0
    ctx->pc = 0x157de4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x157de8: 0x24420124  addiu       $v0, $v0, 0x124
    ctx->pc = 0x157de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 292));
    // 0x157dec: 0x2225021  addu        $t2, $s1, $v0
    ctx->pc = 0x157decu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_157df0:
    // 0x157df0: 0x8d49000c  lw          $t1, 0xC($t2)
    ctx->pc = 0x157df0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x157df4: 0x3c04002d  lui         $a0, 0x2D
    ctx->pc = 0x157df4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)45 << 16));
    // 0x157df8: 0x8d420008  lw          $v0, 0x8($t2)
    ctx->pc = 0x157df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x157dfc: 0x2484bca0  addiu       $a0, $a0, -0x4360
    ctx->pc = 0x157dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950048));
    // 0x157e00: 0x71221b89  pcpyld      $v1, $t1, $v0
    ctx->pc = 0x157e00u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 2)));
    // 0x157e04: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x157e04u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x157e08: 0x8d490010  lw          $t1, 0x10($t2)
    ctx->pc = 0x157e08u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x157e0c: 0x71091389  pcpyld      $v0, $t0, $t1
    ctx->pc = 0x157e0cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
    // 0x157e10: 0x70432cc8  ppacw       $a1, $v0, $v1
    ctx->pc = 0x157e10u;
    SET_GPR_VEC(ctx, 5, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x157e14: 0x48a50800  qmtc2.ni    $a1, $vf1
    ctx->pc = 0x157e14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 5));
    // 0x157e18: 0x4be111bc  vmulax.xyzw $ACC, $vf2, $vf1x
    ctx->pc = 0x157e18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x157e1c: 0xfba10100  sqc2        $vf1, 0x100($sp)
    ctx->pc = 0x157e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x157e20: 0x4be118bd  vmadday.xyzw $ACC, $vf3, $vf1y
    ctx->pc = 0x157e20u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x157e24: 0xfba10120  sqc2        $vf1, 0x120($sp)
    ctx->pc = 0x157e24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x157e28: 0x4be120be  vmaddaz.xyzw $ACC, $vf4, $vf1z
    ctx->pc = 0x157e28u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x157e2c: 0x4be1284b  vmaddw.xyzw $vf1, $vf5, $vf1w
    ctx->pc = 0x157e2cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x157e30: 0xf8810000  sqc2        $vf1, 0x0($a0)
    ctx->pc = 0x157e30u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x157e34: 0x3c060030  lui         $a2, 0x30
    ctx->pc = 0x157e34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48 << 16));
    // 0x157e38: 0xc5400004  lwc1        $f0, 0x4($t2)
    ctx->pc = 0x157e38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157e3c: 0xc4c149a0  lwc1        $f1, 0x49A0($a2)
    ctx->pc = 0x157e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 18848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157e40: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x157e40u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x157e44: 0x4be001ac  vsub.xyzw   $vf6, $vf0, $vf0
    ctx->pc = 0x157e44u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x157e48: 0x44080000  mfc1        $t0, $f0
    ctx->pc = 0x157e48u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 8, bits); }
    // 0x157e4c: 0x48a81000  qmtc2.ni    $t0, $vf2
    ctx->pc = 0x157e4cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 8));
    // 0x157e50: 0x4a223040  vaddx.w     $vf1, $vf6, $vf2x
    ctx->pc = 0x157e50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x157e54: 0x8e630020  lw          $v1, 0x20($s3)
    ctx->pc = 0x157e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x157e58: 0x3c020030  lui         $v0, 0x30
    ctx->pc = 0x157e58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48 << 16));
    // 0x157e5c: 0x2445499c  addiu       $a1, $v0, 0x499C
    ctx->pc = 0x157e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 18844));
    // 0x157e60: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x157e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x157e64: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x157E64u;
    {
        const bool branch_taken_0x157e64 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x157E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157E64u;
            // 0x157e68: 0xf8810000  sqc2        $vf1, 0x0($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[1]));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157e64) {
            ctx->pc = 0x157E80u;
            goto label_157e80;
        }
    }
    ctx->pc = 0x157E6Cu;
    // 0x157e6c: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x157e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x157e70: 0x8c420078  lw          $v0, 0x78($v0)
    ctx->pc = 0x157e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 120)));
    // 0x157e74: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x157E74u;
    {
        const bool branch_taken_0x157e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x157E78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157E74u;
            // 0x157e78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157e74) {
            ctx->pc = 0x157EA0u;
            goto label_157ea0;
        }
    }
    ctx->pc = 0x157E7Cu;
    // 0x157e7c: 0x0  nop
    ctx->pc = 0x157e7cu;
    // NOP
label_157e80:
    // 0x157e80: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x157e80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
    // 0x157e84: 0x8c42ec50  lw          $v0, -0x13B0($v0)
    ctx->pc = 0x157e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294962256)));
    // 0x157e88: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x157E88u;
    {
        const bool branch_taken_0x157e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157E88u;
            // 0x157e8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157e88) {
            ctx->pc = 0x157EA0u;
            goto label_157ea0;
        }
    }
    ctx->pc = 0x157E90u;
    // 0x157e90: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x157e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x157e94: 0x8c42c7dc  lw          $v0, -0x3824($v0)
    ctx->pc = 0x157e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952924)));
    // 0x157e98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x157E98u;
    {
        const bool branch_taken_0x157e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157E98u;
            // 0x157e9c: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157e98) {
            ctx->pc = 0x157EA4u;
            goto label_157ea4;
        }
    }
    ctx->pc = 0x157EA0u;
label_157ea0:
    // 0x157ea0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x157ea0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_157ea4:
    // 0x157ea4: 0x10e0001b  beqz        $a3, . + 4 + (0x1B << 2)
    ctx->pc = 0x157EA4u;
    {
        const bool branch_taken_0x157ea4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x157EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157EA4u;
            // 0x157ea8: 0x8fa90158  lw          $t1, 0x158($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157ea4) {
            ctx->pc = 0x157F14u;
            goto label_157f14;
        }
    }
    ctx->pc = 0x157EACu;
    // 0x157eac: 0x8fa3015c  lw          $v1, 0x15C($sp)
    ctx->pc = 0x157eacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x157eb0: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x157eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x157eb4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x157eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x157eb8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x157eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x157ebc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x157ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x157ec0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x157ec0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x157ec4: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x157EC4u;
    {
        const bool branch_taken_0x157ec4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157EC4u;
            // 0x157ec8: 0xdba30040  lqc2        $vf3, 0x40($sp) (Delay Slot)
        ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157ec4) {
            ctx->pc = 0x157F18u;
            goto label_157f18;
        }
    }
    ctx->pc = 0x157ECCu;
    // 0x157ecc: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x157eccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x157ed0: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x157ED0u;
    {
        const bool branch_taken_0x157ed0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x157ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157ED0u;
            // 0x157ed4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157ed0) {
            ctx->pc = 0x157EF8u;
            goto label_157ef8;
        }
    }
    ctx->pc = 0x157ED8u;
    // 0x157ed8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x157ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157edc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x157edcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157ee0: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x157ee0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x157ee4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x157ee4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x157ee8: 0xc056008  jal         func_158020
    ctx->pc = 0x157EE8u;
    SET_GPR_U32(ctx, 31, 0x157EF0u);
    ctx->pc = 0x157EECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157EE8u;
            // 0x157eec: 0x2409003f  addiu       $t1, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158020u;
    if (runtime->hasFunction(0x158020u)) {
        auto targetFn = runtime->lookupFunction(0x158020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157EF0u; }
        if (ctx->pc != 0x157EF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00158020_0x158020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157EF0u; }
        if (ctx->pc != 0x157EF0u) { return; }
    }
    ctx->pc = 0x157EF0u;
    // 0x157ef0: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x157EF0u;
    {
        const bool branch_taken_0x157ef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157EF0u;
            // 0x157ef4: 0x8fa8015c  lw          $t0, 0x15C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157ef0) {
            ctx->pc = 0x157FD4u;
            goto label_157fd4;
        }
    }
    ctx->pc = 0x157EF8u;
label_157ef8:
    // 0x157ef8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x157ef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157efc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x157efcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157f00: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x157f00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x157f04: 0xc0562d0  jal         func_158B40
    ctx->pc = 0x157F04u;
    SET_GPR_U32(ctx, 31, 0x157F0Cu);
    ctx->pc = 0x157F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157F04u;
            // 0x157f08: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158B40u;
    if (runtime->hasFunction(0x158B40u)) {
        auto targetFn = runtime->lookupFunction(0x158B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157F0Cu; }
        if (ctx->pc != 0x157F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00158B40_0x158b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157F0Cu; }
        if (ctx->pc != 0x157F0Cu) { return; }
    }
    ctx->pc = 0x157F0Cu;
    // 0x157f0c: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x157F0Cu;
    {
        const bool branch_taken_0x157f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x157F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157F0Cu;
            // 0x157f10: 0x8fa8015c  lw          $t0, 0x15C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157f0c) {
            ctx->pc = 0x157FD4u;
            goto label_157fd4;
        }
    }
    ctx->pc = 0x157F14u;
label_157f14:
    // 0x157f14: 0xdba30040  lqc2        $vf3, 0x40($sp)
    ctx->pc = 0x157f14u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_157f18:
    // 0x157f18: 0xdba40050  lqc2        $vf4, 0x50($sp)
    ctx->pc = 0x157f18u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x157f1c: 0xdba50060  lqc2        $vf5, 0x60($sp)
    ctx->pc = 0x157f1cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x157f20: 0xdba10070  lqc2        $vf1, 0x70($sp)
    ctx->pc = 0x157f20u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x157f24: 0x8d46000c  lw          $a2, 0xC($t2)
    ctx->pc = 0x157f24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x157f28: 0x3c083f80  lui         $t0, 0x3F80
    ctx->pc = 0x157f28u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16256 << 16));
    // 0x157f2c: 0x8d470008  lw          $a3, 0x8($t2)
    ctx->pc = 0x157f2cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x157f30: 0x70c71b89  pcpyld      $v1, $a2, $a3
    ctx->pc = 0x157f30u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 7)));
    // 0x157f34: 0x8d490010  lw          $t1, 0x10($t2)
    ctx->pc = 0x157f34u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 16)));
    // 0x157f38: 0x71091389  pcpyld      $v0, $t0, $t1
    ctx->pc = 0x157f38u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 8), GPR_VEC(ctx, 9)));
    // 0x157f3c: 0x704324c8  ppacw       $a0, $v0, $v1
    ctx->pc = 0x157f3cu;
    SET_GPR_VEC(ctx, 4, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x157f40: 0x48a41000  qmtc2.ni    $a0, $vf2
    ctx->pc = 0x157f40u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 4));
    // 0x157f44: 0x4be219bc  vmulax.xyzw $ACC, $vf3, $vf2x
    ctx->pc = 0x157f44u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = res; }
    // 0x157f48: 0xfba20110  sqc2        $vf2, 0x110($sp)
    ctx->pc = 0x157f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x157f4c: 0x4be220bd  vmadday.xyzw $ACC, $vf4, $vf2y
    ctx->pc = 0x157f4cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x157f50: 0xfba20130  sqc2        $vf2, 0x130($sp)
    ctx->pc = 0x157f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x157f54: 0x4be228be  vmaddaz.xyzw $ACC, $vf5, $vf2z
    ctx->pc = 0x157f54u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = res; }
    // 0x157f58: 0x4be2084b  vmaddw.xyzw $vf1, $vf1, $vf2w
    ctx->pc = 0x157f58u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); ctx->vu0_acc = res; }
    // 0x157f5c: 0xfba10140  sqc2        $vf1, 0x140($sp)
    ctx->pc = 0x157f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x157f60: 0x3c050030  lui         $a1, 0x30
    ctx->pc = 0x157f60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)48 << 16));
    // 0x157f64: 0xc5400004  lwc1        $f0, 0x4($t2)
    ctx->pc = 0x157f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x157f68: 0xc4a149a0  lwc1        $f1, 0x49A0($a1)
    ctx->pc = 0x157f68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 18848)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x157f6c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x157f6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x157f70: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x157f70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x157f74: 0x48a61000  qmtc2.ni    $a2, $vf2
    ctx->pc = 0x157f74u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(GPR_VEC(ctx, 6));
    // 0x157f78: 0x4a223040  vaddx.w     $vf1, $vf6, $vf2x
    ctx->pc = 0x157f78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x157f7c: 0x48270800  qmfc2.ni    $a3, $vf1
    ctx->pc = 0x157f7cu;
    SET_GPR_VEC(ctx, 7, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x157f80: 0x4b010083  vaddw.x     $vf2, $vf0, $vf1w
    ctx->pc = 0x157f80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x157f84: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x157f84u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x157f88: 0xfba10140  sqc2        $vf1, 0x140($sp)
    ctx->pc = 0x157f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x157f8c: 0x48221000  qmfc2.ni    $v0, $vf2
    ctx->pc = 0x157f8cu;
    SET_GPR_VEC(ctx, 2, _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x157f90: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x157f90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157f94: 0x70071fc9  prot3w      $v1, $a3
    ctx->pc = 0x157f94u;
    SET_GPR_VEC(ctx, 3, _mm_shuffle_epi32(GPR_VEC(ctx, 0), _MM_SHUFFLE(0,3,2,1)));
    // 0x157f98: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x157f98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x157f9c: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x157f9cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x157fa0: 0x70071f89  pexew       $v1, $a3
    ctx->pc = 0x157fa0u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 0)));
    // 0x157fa4: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x157fa4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x157fa8: 0xc05a448  jal         func_169120
    ctx->pc = 0x157FA8u;
    SET_GPR_U32(ctx, 31, 0x157FB0u);
    ctx->pc = 0x169120u;
    if (runtime->hasFunction(0x169120u)) {
        auto targetFn = runtime->lookupFunction(0x169120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157FB0u; }
        if (ctx->pc != 0x157FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_169120_0x169238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157FB0u; }
        if (ctx->pc != 0x157FB0u) { return; }
    }
    ctx->pc = 0x157FB0u;
    // 0x157fb0: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x157fb0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157fb4: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x157fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x157fb8: 0x11020005  beq         $t0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x157FB8u;
    {
        const bool branch_taken_0x157fb8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 2));
        ctx->pc = 0x157FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157FB8u;
            // 0x157fbc: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157fb8) {
            ctx->pc = 0x157FD0u;
            goto label_157fd0;
        }
    }
    ctx->pc = 0x157FC0u;
    // 0x157fc0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x157fc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157fc4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x157fc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x157fc8: 0xc0562d0  jal         func_158B40
    ctx->pc = 0x157FC8u;
    SET_GPR_U32(ctx, 31, 0x157FD0u);
    ctx->pc = 0x157FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x157FC8u;
            // 0x157fcc: 0x27a70040  addiu       $a3, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158B40u;
    if (runtime->hasFunction(0x158B40u)) {
        auto targetFn = runtime->lookupFunction(0x158B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157FD0u; }
        if (ctx->pc != 0x157FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00158B40_0x158b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x157FD0u; }
        if (ctx->pc != 0x157FD0u) { return; }
    }
    ctx->pc = 0x157FD0u;
label_157fd0:
    // 0x157fd0: 0x8fa8015c  lw          $t0, 0x15C($sp)
    ctx->pc = 0x157fd0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
label_157fd4:
    // 0x157fd4: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x157fd4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x157fd8: 0x8fa90154  lw          $t1, 0x154($sp)
    ctx->pc = 0x157fd8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x157fdc: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x157fdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x157fe0: 0x289102b  sltu        $v0, $s4, $t1
    ctx->pc = 0x157fe0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x157fe4: 0x1440feda  bnez        $v0, . + 4 + (-0x126 << 2)
    ctx->pc = 0x157FE4u;
    {
        const bool branch_taken_0x157fe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x157FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x157FE4u;
            // 0x157fe8: 0xafa8015c  sw          $t0, 0x15C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x157fe4) {
            ctx->pc = 0x157B50u;
            runtime->cooperativeGuestYield();
            goto label_157b50;
        }
    }
    ctx->pc = 0x157FECu;
label_157fec:
    // 0x157fec: 0x7bb00200  lq          $s0, 0x200($sp)
    ctx->pc = 0x157fecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 512)));
label_157ff0:
    // 0x157ff0: 0x7bb101f0  lq          $s1, 0x1F0($sp)
    ctx->pc = 0x157ff0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 496)));
label_157ff4:
    // 0x157ff4: 0x7bb201e0  lq          $s2, 0x1E0($sp)
    ctx->pc = 0x157ff4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x157ff8: 0x7bb301d0  lq          $s3, 0x1D0($sp)
    ctx->pc = 0x157ff8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x157ffc: 0x7bb401c0  lq          $s4, 0x1C0($sp)
    ctx->pc = 0x157ffcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x158000: 0x7bb501b0  lq          $s5, 0x1B0($sp)
    ctx->pc = 0x158000u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x158004: 0x7bb601a0  lq          $s6, 0x1A0($sp)
    ctx->pc = 0x158004u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x158008: 0x7bb70190  lq          $s7, 0x190($sp)
    ctx->pc = 0x158008u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x15800c: 0x7bbe0180  lq          $fp, 0x180($sp)
    ctx->pc = 0x15800cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x158010: 0xdfbf0170  ld          $ra, 0x170($sp)
    ctx->pc = 0x158010u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x158014: 0x3e00008  jr          $ra
    ctx->pc = 0x158014u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x158018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x158014u;
            // 0x158018: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x157B20u: goto label_157b20;
            case 0x157B24u: goto label_157b24;
            case 0x157B3Cu: goto label_157b3c;
            case 0x157B50u: goto label_157b50;
            case 0x157BB8u: goto label_157bb8;
            case 0x157BE8u: goto label_157be8;
            case 0x157C20u: goto label_157c20;
            case 0x157C3Cu: goto label_157c3c;
            case 0x157C84u: goto label_157c84;
            case 0x157D48u: goto label_157d48;
            case 0x157D4Cu: goto label_157d4c;
            case 0x157D5Cu: goto label_157d5c;
            case 0x157D98u: goto label_157d98;
            case 0x157DB0u: goto label_157db0;
            case 0x157DE0u: goto label_157de0;
            case 0x157DF0u: goto label_157df0;
            case 0x157E80u: goto label_157e80;
            case 0x157EA0u: goto label_157ea0;
            case 0x157EA4u: goto label_157ea4;
            case 0x157EF8u: goto label_157ef8;
            case 0x157F14u: goto label_157f14;
            case 0x157F18u: goto label_157f18;
            case 0x157FD0u: goto label_157fd0;
            case 0x157FD4u: goto label_157fd4;
            case 0x157FECu: goto label_157fec;
            case 0x157FF0u: goto label_157ff0;
            case 0x157FF4u: goto label_157ff4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x15801Cu;
    // 0x15801c: 0x0  nop
    ctx->pc = 0x15801cu;
    // NOP
}
