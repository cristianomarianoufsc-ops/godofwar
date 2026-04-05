#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002902B0
// Address: 0x2902b0 - 0x2909e0
void sub_002902B0_0x2902b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002902B0_0x2902b0");
#endif

    ctx->pc = 0x2902b0u;

    // 0x2902b0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2902b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2902b4: 0x24a50013  addiu       $a1, $a1, 0x13
    ctx->pc = 0x2902b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19));
    // 0x2902b8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2902b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2902bc: 0x2ca2001f  sltiu       $v0, $a1, 0x1F
    ctx->pc = 0x2902bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x2902c0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2902c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2902c4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2902c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2902c8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2902c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2902cc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2902ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2902d0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2902d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2902d4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2902D4u;
    {
        const bool branch_taken_0x2902d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2902D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2902D4u;
            // 0x2902d8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2902d4) {
            ctx->pc = 0x2902ECu;
            goto label_2902ec;
        }
    }
    ctx->pc = 0x2902DCu;
    // 0x2902dc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2902dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2902e0: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x2902e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x2902e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2902E4u;
    {
        const bool branch_taken_0x2902e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2902E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2902E4u;
            // 0x2902e8: 0xa28824  and         $s1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2902e4) {
            ctx->pc = 0x2902F0u;
            goto label_2902f0;
        }
    }
    ctx->pc = 0x2902ECu;
label_2902ec:
    // 0x2902ec: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x2902ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2902f0:
    // 0x2902f0: 0xc0a2d92  jal         func_28B648
    ctx->pc = 0x2902F0u;
    SET_GPR_U32(ctx, 31, 0x2902F8u);
    ctx->pc = 0x2902F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2902F0u;
            // 0x2902f4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B648u;
    if (runtime->hasFunction(0x28B648u)) {
        auto targetFn = runtime->lookupFunction(0x28B648u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2902F8u; }
        if (ctx->pc != 0x2902F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028B648_0x28b648(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2902F8u; }
        if (ctx->pc != 0x2902F8u) { return; }
    }
    ctx->pc = 0x2902F8u;
    // 0x2902f8: 0x2e2201f8  sltiu       $v0, $s1, 0x1F8
    ctx->pc = 0x2902f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)504) ? 1 : 0);
    // 0x2902fc: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2902FCu;
    {
        const bool branch_taken_0x2902fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2902FCu;
            // 0x290300: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2902fc) {
            ctx->pc = 0x290358u;
            goto label_290358;
        }
    }
    ctx->pc = 0x290304u;
    // 0x290304: 0x1150c2  srl         $t2, $s1, 3
    ctx->pc = 0x290304u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 17), 3));
    // 0x290308: 0x24434638  addiu       $v1, $v0, 0x4638
    ctx->pc = 0x290308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 17976));
    // 0x29030c: 0x2234821  addu        $t1, $s1, $v1
    ctx->pc = 0x29030cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x290310: 0x8d30000c  lw          $s0, 0xC($t1)
    ctx->pc = 0x290310u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x290314: 0x1209000e  beq         $s0, $t1, . + 4 + (0xE << 2)
    ctx->pc = 0x290314u;
    {
        const bool branch_taken_0x290314 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 9));
        ctx->pc = 0x290318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290314u;
            // 0x290318: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290314) {
            ctx->pc = 0x290350u;
            goto label_290350;
        }
    }
    ctx->pc = 0x29031Cu;
    // 0x29031c: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x29031cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x290320: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x290320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x290324: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x290324u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x290328: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x290328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x29032c: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x29032cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x290330: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x290330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290334: 0xacc8000c  sw          $t0, 0xC($a2)
    ctx->pc = 0x290334u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
    // 0x290338: 0xad060008  sw          $a2, 0x8($t0)
    ctx->pc = 0x290338u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 6));
    // 0x29033c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x29033cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x290340: 0x2051821  addu        $v1, $s0, $a1
    ctx->pc = 0x290340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x290344: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x290344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x290348: 0x10000199  b           . + 4 + (0x199 << 2)
    ctx->pc = 0x290348u;
    {
        const bool branch_taken_0x290348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29034Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290348u;
            // 0x29034c: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x290348) {
            ctx->pc = 0x2909B0u;
            goto label_2909b0;
        }
    }
    ctx->pc = 0x290350u;
label_290350:
    // 0x290350: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x290350u;
    {
        const bool branch_taken_0x290350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290354u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290350u;
            // 0x290354: 0x254a0002  addiu       $t2, $t2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290350) {
            ctx->pc = 0x290448u;
            goto label_290448;
        }
    }
    ctx->pc = 0x290358u;
label_290358:
    // 0x290358: 0x112242  srl         $a0, $s1, 9
    ctx->pc = 0x290358u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 17), 9));
    // 0x29035c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29035Cu;
    {
        const bool branch_taken_0x29035c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x290360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29035Cu;
            // 0x290360: 0x2c820005  sltiu       $v0, $a0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29035c) {
            ctx->pc = 0x29036Cu;
            goto label_29036c;
        }
    }
    ctx->pc = 0x290364u;
    // 0x290364: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x290364u;
    {
        const bool branch_taken_0x290364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290364u;
            // 0x290368: 0x1150c2  srl         $t2, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290364) {
            ctx->pc = 0x2903C8u;
            goto label_2903c8;
        }
    }
    ctx->pc = 0x29036Cu;
label_29036c:
    // 0x29036c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29036Cu;
    {
        const bool branch_taken_0x29036c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29036Cu;
            // 0x290370: 0x111182  srl         $v0, $s1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29036c) {
            ctx->pc = 0x29037Cu;
            goto label_29037c;
        }
    }
    ctx->pc = 0x290374u;
    // 0x290374: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x290374u;
    {
        const bool branch_taken_0x290374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290374u;
            // 0x290378: 0x244a0038  addiu       $t2, $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290374) {
            ctx->pc = 0x2903C8u;
            goto label_2903c8;
        }
    }
    ctx->pc = 0x29037Cu;
label_29037c:
    // 0x29037c: 0x2c820015  sltiu       $v0, $a0, 0x15
    ctx->pc = 0x29037cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x290380: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x290380u;
    {
        const bool branch_taken_0x290380 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290380u;
            // 0x290384: 0x248a005b  addiu       $t2, $a0, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 91));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290380) {
            ctx->pc = 0x2903C8u;
            goto label_2903c8;
        }
    }
    ctx->pc = 0x290388u;
    // 0x290388: 0x2c820055  sltiu       $v0, $a0, 0x55
    ctx->pc = 0x290388u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)85) ? 1 : 0);
    // 0x29038c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29038Cu;
    {
        const bool branch_taken_0x29038c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29038Cu;
            // 0x290390: 0x111302  srl         $v0, $s1, 12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29038c) {
            ctx->pc = 0x29039Cu;
            goto label_29039c;
        }
    }
    ctx->pc = 0x290394u;
    // 0x290394: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x290394u;
    {
        const bool branch_taken_0x290394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290394u;
            // 0x290398: 0x244a006e  addiu       $t2, $v0, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290394) {
            ctx->pc = 0x2903C8u;
            goto label_2903c8;
        }
    }
    ctx->pc = 0x29039Cu;
label_29039c:
    // 0x29039c: 0x2c820155  sltiu       $v0, $a0, 0x155
    ctx->pc = 0x29039cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)341) ? 1 : 0);
    // 0x2903a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2903A0u;
    {
        const bool branch_taken_0x2903a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2903A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2903A0u;
            // 0x2903a4: 0x1113c2  srl         $v0, $s1, 15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2903a0) {
            ctx->pc = 0x2903B0u;
            goto label_2903b0;
        }
    }
    ctx->pc = 0x2903A8u;
    // 0x2903a8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2903A8u;
    {
        const bool branch_taken_0x2903a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2903ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2903A8u;
            // 0x2903ac: 0x244a0077  addiu       $t2, $v0, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2903a8) {
            ctx->pc = 0x2903C8u;
            goto label_2903c8;
        }
    }
    ctx->pc = 0x2903B0u;
label_2903b0:
    // 0x2903b0: 0x2c820555  sltiu       $v0, $a0, 0x555
    ctx->pc = 0x2903b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1365) ? 1 : 0);
    // 0x2903b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2903B4u;
    {
        const bool branch_taken_0x2903b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2903B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2903B4u;
            // 0x2903b8: 0x111482  srl         $v0, $s1, 18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2903b4) {
            ctx->pc = 0x2903C4u;
            goto label_2903c4;
        }
    }
    ctx->pc = 0x2903BCu;
    // 0x2903bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2903BCu;
    {
        const bool branch_taken_0x2903bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2903C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2903BCu;
            // 0x2903c0: 0x244a007c  addiu       $t2, $v0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2903bc) {
            ctx->pc = 0x2903C8u;
            goto label_2903c8;
        }
    }
    ctx->pc = 0x2903C4u;
label_2903c4:
    // 0x2903c4: 0x240a007e  addiu       $t2, $zero, 0x7E
    ctx->pc = 0x2903c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
label_2903c8:
    // 0x2903c8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x2903c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x2903cc: 0xa20c0  sll         $a0, $t2, 3
    ctx->pc = 0x2903ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x2903d0: 0x24434638  addiu       $v1, $v0, 0x4638
    ctx->pc = 0x2903d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 17976));
    // 0x2903d4: 0x834021  addu        $t0, $a0, $v1
    ctx->pc = 0x2903d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2903d8: 0x8d10000c  lw          $s0, 0xC($t0)
    ctx->pc = 0x2903d8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x2903dc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2903DCu;
    {
        const bool branch_taken_0x2903dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2903E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2903DCu;
            // 0x2903e0: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2903dc) {
            ctx->pc = 0x2903F4u;
            goto label_2903f4;
        }
    }
    ctx->pc = 0x2903E4u;
    // 0x2903e4: 0x0  nop
    ctx->pc = 0x2903e4u;
    // NOP
label_2903e8:
    // 0x2903e8: 0x4e30140  bgezl       $a3, . + 4 + (0x140 << 2)
    ctx->pc = 0x2903E8u;
    {
        const bool branch_taken_0x2903e8 = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x2903e8) {
            ctx->pc = 0x2903ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2903E8u;
            // 0x2903ec: 0x8e08000c  lw          $t0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2908ECu;
            goto label_2908ec;
        }
    }
    ctx->pc = 0x2903F0u;
    // 0x2903f0: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x2903f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2903f4:
    // 0x2903f4: 0x52080014  beql        $s0, $t0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2903F4u;
    {
        const bool branch_taken_0x2903f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 8));
        if (branch_taken_0x2903f4) {
            ctx->pc = 0x2903F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2903F4u;
            // 0x2903f8: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x290448u;
            goto label_290448;
        }
    }
    ctx->pc = 0x2903FCu;
    // 0x2903fc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2903fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x290400: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x290400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x290404: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x290404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x290408: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x290408u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x29040c: 0xb1202b  sltu        $a0, $a1, $s1
    ctx->pc = 0x29040cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x290410: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x290410u;
    {
        const bool branch_taken_0x290410 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x290414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290410u;
            // 0x290414: 0x2251023  subu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290410) {
            ctx->pc = 0x290428u;
            goto label_290428;
        }
    }
    ctx->pc = 0x290418u;
    // 0x290418: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x290418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29041c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x29041cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x290420: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x290420u;
    {
        const bool branch_taken_0x290420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290420u;
            // 0x290424: 0x2382f  dsubu       $a3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290420) {
            ctx->pc = 0x290434u;
            goto label_290434;
        }
    }
    ctx->pc = 0x290428u;
label_290428:
    // 0x290428: 0xb11023  subu        $v0, $a1, $s1
    ctx->pc = 0x290428u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x29042c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29042cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x290430: 0x2383e  dsrl32      $a3, $v0, 0
    ctx->pc = 0x290430u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> (32 + 0));
label_290434:
    // 0x290434: 0x28e20010  slti        $v0, $a3, 0x10
    ctx->pc = 0x290434u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x290438: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x290438u;
    {
        const bool branch_taken_0x290438 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x290438) {
            ctx->pc = 0x2903E8u;
            runtime->cooperativeGuestYield();
            goto label_2903e8;
        }
    }
    ctx->pc = 0x290440u;
    // 0x290440: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x290440u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x290444: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x290444u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_290448:
    // 0x290448: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x290448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x29044c: 0x40702d  daddu       $t6, $v0, $zero
    ctx->pc = 0x29044cu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290450: 0x24424640  addiu       $v0, $v0, 0x4640
    ctx->pc = 0x290450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17984));
    // 0x290454: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x290454u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x290458: 0x12020086  beq         $s0, $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x290458u;
    {
        const bool branch_taken_0x290458 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x29045Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290458u;
            // 0x29045c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290458) {
            ctx->pc = 0x290674u;
            goto label_290674;
        }
    }
    ctx->pc = 0x290460u;
    // 0x290460: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x290460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x290464: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x290464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x290468: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x290468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x29046c: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x29046cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x290470: 0xb1202b  sltu        $a0, $a1, $s1
    ctx->pc = 0x290470u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x290474: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x290474u;
    {
        const bool branch_taken_0x290474 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x290478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290474u;
            // 0x290478: 0x2251023  subu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290474) {
            ctx->pc = 0x29048Cu;
            goto label_29048c;
        }
    }
    ctx->pc = 0x29047Cu;
    // 0x29047c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29047cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x290480: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x290480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x290484: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x290484u;
    {
        const bool branch_taken_0x290484 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290484u;
            // 0x290488: 0x2382f  dsubu       $a3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290484) {
            ctx->pc = 0x290498u;
            goto label_290498;
        }
    }
    ctx->pc = 0x29048Cu;
label_29048c:
    // 0x29048c: 0xb11023  subu        $v0, $a1, $s1
    ctx->pc = 0x29048cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x290490: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x290490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x290494: 0x2383e  dsrl32      $a3, $v0, 0
    ctx->pc = 0x290494u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> (32 + 0));
label_290498:
    // 0x290498: 0x28e20010  slti        $v0, $a3, 0x10
    ctx->pc = 0x290498u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x29049c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x29049Cu;
    {
        const bool branch_taken_0x29049c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2904A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29049Cu;
            // 0x2904a0: 0x25c44640  addiu       $a0, $t6, 0x4640 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), 17984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29049c) {
            ctx->pc = 0x2904F0u;
            goto label_2904f0;
        }
    }
    ctx->pc = 0x2904A4u;
    // 0x2904a4: 0x36220001  ori         $v0, $s1, 0x1
    ctx->pc = 0x2904a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
    // 0x2904a8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2904a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2904ac: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2904acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x2904b0: 0x2114021  addu        $t0, $s0, $s1
    ctx->pc = 0x2904b0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2904b4: 0x25c54640  addiu       $a1, $t6, 0x4640
    ctx->pc = 0x2904b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), 17984));
    // 0x2904b8: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x2904b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x2904bc: 0xaca8000c  sw          $t0, 0xC($a1)
    ctx->pc = 0x2904bcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 8));
    // 0x2904c0: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x2904c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x2904c4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2904c4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2904c8: 0xaca80008  sw          $t0, 0x8($a1)
    ctx->pc = 0x2904c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 8));
    // 0x2904cc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x2904ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2904d0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x2904d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x2904d4: 0x1023021  addu        $a2, $t0, $v0
    ctx->pc = 0x2904d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x2904d8: 0xad050008  sw          $a1, 0x8($t0)
    ctx->pc = 0x2904d8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 5));
    // 0x2904dc: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x2904dcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
    // 0x2904e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2904e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2904e4: 0xad05000c  sw          $a1, 0xC($t0)
    ctx->pc = 0x2904e4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 5));
    // 0x2904e8: 0x10000132  b           . + 4 + (0x132 << 2)
    ctx->pc = 0x2904E8u;
    {
        const bool branch_taken_0x2904e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2904ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2904E8u;
            // 0x2904ec: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2904e8) {
            ctx->pc = 0x2909B4u;
            goto label_2909b4;
        }
    }
    ctx->pc = 0x2904F0u;
label_2904f0:
    // 0x2904f0: 0xac84000c  sw          $a0, 0xC($a0)
    ctx->pc = 0x2904f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 4));
    // 0x2904f4: 0x4e00006  bltz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x2904F4u;
    {
        const bool branch_taken_0x2904f4 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x2904F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2904F4u;
            // 0x2904f8: 0xac840008  sw          $a0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2904f4) {
            ctx->pc = 0x290510u;
            goto label_290510;
        }
    }
    ctx->pc = 0x2904FCu;
    // 0x2904fc: 0x2051821  addu        $v1, $s0, $a1
    ctx->pc = 0x2904fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x290500: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x290500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290504: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x290504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x290508: 0x10000129  b           . + 4 + (0x129 << 2)
    ctx->pc = 0x290508u;
    {
        const bool branch_taken_0x290508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29050Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290508u;
            // 0x29050c: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x290508) {
            ctx->pc = 0x2909B0u;
            goto label_2909b0;
        }
    }
    ctx->pc = 0x290510u;
label_290510:
    // 0x290510: 0x2ca20200  sltiu       $v0, $a1, 0x200
    ctx->pc = 0x290510u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x290514: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x290514u;
    {
        const bool branch_taken_0x290514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290514u;
            // 0x290518: 0x538c2  srl         $a3, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290514) {
            ctx->pc = 0x290560u;
            goto label_290560;
        }
    }
    ctx->pc = 0x29051Cu;
    // 0x29051c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x29051cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x290520: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x290520u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x290524: 0x24e30003  addiu       $v1, $a3, 0x3
    ctx->pc = 0x290524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x290528: 0xe2180b  movn        $v1, $a3, $v0
    ctx->pc = 0x290528u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x29052c: 0x2485fff8  addiu       $a1, $a0, -0x8
    ctx->pc = 0x29052cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x290530: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x290530u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x290534: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x290534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290538: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x290538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x29053c: 0x621014  dsllv       $v0, $v0, $v1
    ctx->pc = 0x29053cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x290540: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x290540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x290544: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x290544u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x290548: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x290548u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x29054c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x29054cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x290550: 0x654021  addu        $t0, $v1, $a1
    ctx->pc = 0x290550u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x290554: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x290554u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x290558: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x290558u;
    {
        const bool branch_taken_0x290558 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29055Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290558u;
            // 0x29055c: 0x8d060008  lw          $a2, 0x8($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290558) {
            ctx->pc = 0x290660u;
            goto label_290660;
        }
    }
    ctx->pc = 0x290560u;
label_290560:
    // 0x290560: 0x51a42  srl         $v1, $a1, 9
    ctx->pc = 0x290560u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 9));
    // 0x290564: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x290564u;
    {
        const bool branch_taken_0x290564 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x290568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290564u;
            // 0x290568: 0x2c620005  sltiu       $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x290564) {
            ctx->pc = 0x290574u;
            goto label_290574;
        }
    }
    ctx->pc = 0x29056Cu;
    // 0x29056c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x29056Cu;
    {
        const bool branch_taken_0x29056c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29056Cu;
            // 0x290570: 0x538c2  srl         $a3, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29056c) {
            ctx->pc = 0x2905D0u;
            goto label_2905d0;
        }
    }
    ctx->pc = 0x290574u;
label_290574:
    // 0x290574: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x290574u;
    {
        const bool branch_taken_0x290574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290574u;
            // 0x290578: 0x51182  srl         $v0, $a1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290574) {
            ctx->pc = 0x290584u;
            goto label_290584;
        }
    }
    ctx->pc = 0x29057Cu;
    // 0x29057c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x29057Cu;
    {
        const bool branch_taken_0x29057c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29057Cu;
            // 0x290580: 0x24470038  addiu       $a3, $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29057c) {
            ctx->pc = 0x2905D0u;
            goto label_2905d0;
        }
    }
    ctx->pc = 0x290584u;
label_290584:
    // 0x290584: 0x2c620015  sltiu       $v0, $v1, 0x15
    ctx->pc = 0x290584u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x290588: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x290588u;
    {
        const bool branch_taken_0x290588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29058Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290588u;
            // 0x29058c: 0x2467005b  addiu       $a3, $v1, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 91));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290588) {
            ctx->pc = 0x2905D0u;
            goto label_2905d0;
        }
    }
    ctx->pc = 0x290590u;
    // 0x290590: 0x2c620055  sltiu       $v0, $v1, 0x55
    ctx->pc = 0x290590u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)85) ? 1 : 0);
    // 0x290594: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x290594u;
    {
        const bool branch_taken_0x290594 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290594u;
            // 0x290598: 0x51302  srl         $v0, $a1, 12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290594) {
            ctx->pc = 0x2905A4u;
            goto label_2905a4;
        }
    }
    ctx->pc = 0x29059Cu;
    // 0x29059c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x29059Cu;
    {
        const bool branch_taken_0x29059c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2905A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29059Cu;
            // 0x2905a0: 0x2447006e  addiu       $a3, $v0, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29059c) {
            ctx->pc = 0x2905D0u;
            goto label_2905d0;
        }
    }
    ctx->pc = 0x2905A4u;
label_2905a4:
    // 0x2905a4: 0x2c620155  sltiu       $v0, $v1, 0x155
    ctx->pc = 0x2905a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)341) ? 1 : 0);
    // 0x2905a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2905A8u;
    {
        const bool branch_taken_0x2905a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2905ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2905A8u;
            // 0x2905ac: 0x513c2  srl         $v0, $a1, 15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2905a8) {
            ctx->pc = 0x2905B8u;
            goto label_2905b8;
        }
    }
    ctx->pc = 0x2905B0u;
    // 0x2905b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2905B0u;
    {
        const bool branch_taken_0x2905b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2905B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2905B0u;
            // 0x2905b4: 0x24470077  addiu       $a3, $v0, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2905b0) {
            ctx->pc = 0x2905D0u;
            goto label_2905d0;
        }
    }
    ctx->pc = 0x2905B8u;
label_2905b8:
    // 0x2905b8: 0x2c620555  sltiu       $v0, $v1, 0x555
    ctx->pc = 0x2905b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1365) ? 1 : 0);
    // 0x2905bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2905BCu;
    {
        const bool branch_taken_0x2905bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2905C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2905BCu;
            // 0x2905c0: 0x51482  srl         $v0, $a1, 18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2905bc) {
            ctx->pc = 0x2905CCu;
            goto label_2905cc;
        }
    }
    ctx->pc = 0x2905C4u;
    // 0x2905c4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2905C4u;
    {
        const bool branch_taken_0x2905c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2905C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2905C4u;
            // 0x2905c8: 0x2447007c  addiu       $a3, $v0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2905c4) {
            ctx->pc = 0x2905D0u;
            goto label_2905d0;
        }
    }
    ctx->pc = 0x2905CCu;
label_2905cc:
    // 0x2905cc: 0x2407007e  addiu       $a3, $zero, 0x7E
    ctx->pc = 0x2905ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
label_2905d0:
    // 0x2905d0: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x2905d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x2905d4: 0x26894638  addiu       $t1, $s4, 0x4638
    ctx->pc = 0x2905d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), 17976));
    // 0x2905d8: 0x494021  addu        $t0, $v0, $t1
    ctx->pc = 0x2905d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x2905dc: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x2905dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x2905e0: 0x54c8000e  bnel        $a2, $t0, . + 4 + (0xE << 2)
    ctx->pc = 0x2905E0u;
    {
        const bool branch_taken_0x2905e0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 8));
        if (branch_taken_0x2905e0) {
            ctx->pc = 0x2905E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2905E0u;
            // 0x2905e4: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29061Cu;
            goto label_29061c;
        }
    }
    ctx->pc = 0x2905E8u;
    // 0x2905e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2905e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2905ec: 0x24e30003  addiu       $v1, $a3, 0x3
    ctx->pc = 0x2905ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x2905f0: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x2905f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2905f4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2905f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2905f8: 0xe2180b  movn        $v1, $a3, $v0
    ctx->pc = 0x2905f8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x2905fc: 0x8d250004  lw          $a1, 0x4($t1)
    ctx->pc = 0x2905fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x290600: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x290600u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x290604: 0x642014  dsllv       $a0, $a0, $v1
    ctx->pc = 0x290604u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x290608: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x290608u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x29060c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x29060cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x290610: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x290610u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x290614: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x290614u;
    {
        const bool branch_taken_0x290614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290614u;
            // 0x290618: 0xad250004  sw          $a1, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290614) {
            ctx->pc = 0x290660u;
            goto label_290660;
        }
    }
    ctx->pc = 0x29061Cu;
label_29061c:
    // 0x29061c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x29061cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x290620: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x290620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x290624: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x290624u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x290628: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x290628u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x29062c: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x29062Cu;
    {
        const bool branch_taken_0x29062c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29062c) {
            ctx->pc = 0x290630u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29062Cu;
            // 0x290630: 0x8cc8000c  lw          $t0, 0xC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x290660u;
            goto label_290660;
        }
    }
    ctx->pc = 0x290634u;
    // 0x290634: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x290634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x290638: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x290638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x29063c: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x29063cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_290640:
    // 0x290640: 0x50c80007  beql        $a2, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x290640u;
    {
        const bool branch_taken_0x290640 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 8));
        if (branch_taken_0x290640) {
            ctx->pc = 0x290644u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x290640u;
            // 0x290644: 0x8cc8000c  lw          $t0, 0xC($a2) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x290660u;
            goto label_290660;
        }
    }
    ctx->pc = 0x290648u;
    // 0x290648: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x290648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x29064c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x29064cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x290650: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x290650u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x290654: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x290654u;
    {
        const bool branch_taken_0x290654 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x290654) {
            ctx->pc = 0x290658u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x290654u;
            // 0x290658: 0x8cc60008  lw          $a2, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x290640u;
            runtime->cooperativeGuestYield();
            goto label_290640;
        }
    }
    ctx->pc = 0x29065Cu;
    // 0x29065c: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x29065cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_290660:
    // 0x290660: 0xae08000c  sw          $t0, 0xC($s0)
    ctx->pc = 0x290660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 8));
    // 0x290664: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x290664u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
    // 0x290668: 0xad100008  sw          $s0, 0x8($t0)
    ctx->pc = 0x290668u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 16));
    // 0x29066c: 0xacd0000c  sw          $s0, 0xC($a2)
    ctx->pc = 0x29066cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 16));
    // 0x290670: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x290670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_290674:
    // 0x290674: 0x25440003  addiu       $a0, $t2, 0x3
    ctx->pc = 0x290674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 3));
    // 0x290678: 0x4a102a  slt         $v0, $v0, $t2
    ctx->pc = 0x290678u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x29067c: 0x26834638  addiu       $v1, $s4, 0x4638
    ctx->pc = 0x29067cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 17976));
    // 0x290680: 0x142200b  movn        $a0, $t2, $v0
    ctx->pc = 0x290680u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 10));
    // 0x290684: 0x9c650004  lwu         $a1, 0x4($v1)
    ctx->pc = 0x290684u;
    SET_GPR_U32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x290688: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x290688u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x29068c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29068cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290690: 0x823014  dsllv       $a2, $v0, $a0
    ctx->pc = 0x290690u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x290694: 0xa6182b  sltu        $v1, $a1, $a2
    ctx->pc = 0x290694u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x290698: 0x1460005b  bnez        $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x290698u;
    {
        const bool branch_taken_0x290698 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29069Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290698u;
            // 0x29069c: 0x26834638  addiu       $v1, $s4, 0x4638 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 17976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290698) {
            ctx->pc = 0x290808u;
            goto label_290808;
        }
    }
    ctx->pc = 0x2906A0u;
    // 0x2906a0: 0xc51024  and         $v0, $a2, $a1
    ctx->pc = 0x2906a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x2906a4: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2906A4u;
    {
        const bool branch_taken_0x2906a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2906A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2906A4u;
            // 0x2906a8: 0x3c02002a  lui         $v0, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2906a4) {
            ctx->pc = 0x2906E4u;
            goto label_2906e4;
        }
    }
    ctx->pc = 0x2906ACu;
    // 0x2906ac: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x2906acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x2906b0: 0x63078  dsll        $a2, $a2, 1
    ctx->pc = 0x2906b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 1);
    // 0x2906b4: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x2906b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x2906b8: 0xc51824  and         $v1, $a2, $a1
    ctx->pc = 0x2906b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x2906bc: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2906BCu;
    {
        const bool branch_taken_0x2906bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2906C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2906BCu;
            // 0x2906c0: 0x244a0004  addiu       $t2, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2906bc) {
            ctx->pc = 0x2906E0u;
            goto label_2906e0;
        }
    }
    ctx->pc = 0x2906C4u;
    // 0x2906c4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x2906c4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2906c8:
    // 0x2906c8: 0x63078  dsll        $a2, $a2, 1
    ctx->pc = 0x2906c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 1);
    // 0x2906cc: 0xc31024  and         $v0, $a2, $v1
    ctx->pc = 0x2906ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x2906d0: 0x0  nop
    ctx->pc = 0x2906d0u;
    // NOP
    // 0x2906d4: 0x0  nop
    ctx->pc = 0x2906d4u;
    // NOP
    // 0x2906d8: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2906D8u;
    {
        const bool branch_taken_0x2906d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2906DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2906D8u;
            // 0x2906dc: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2906d8) {
            ctx->pc = 0x2906C8u;
            runtime->cooperativeGuestYield();
            goto label_2906c8;
        }
    }
    ctx->pc = 0x2906E0u;
label_2906e0:
    // 0x2906e0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x2906e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
label_2906e4:
    // 0x2906e4: 0x244c4638  addiu       $t4, $v0, 0x4638
    ctx->pc = 0x2906e4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 17976));
    // 0x2906e8: 0x180682d  daddu       $t5, $t4, $zero
    ctx->pc = 0x2906e8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2906ec: 0xa10c0  sll         $v0, $t2, 3
    ctx->pc = 0x2906ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_2906f0:
    // 0x2906f0: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x2906f0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2906f4: 0x4c4821  addu        $t1, $v0, $t4
    ctx->pc = 0x2906f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x2906f8: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x2906f8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2906fc: 0x8d10000c  lw          $s0, 0xC($t0)
    ctx->pc = 0x2906fcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_290700:
    // 0x290700: 0x12080019  beq         $s0, $t0, . + 4 + (0x19 << 2)
    ctx->pc = 0x290700u;
    {
        const bool branch_taken_0x290700 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 8));
        ctx->pc = 0x290704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290700u;
            // 0x290704: 0x2942003f  slti        $v0, $t2, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)63) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x290700) {
            ctx->pc = 0x290768u;
            goto label_290768;
        }
    }
    ctx->pc = 0x290708u;
    // 0x290708: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x290708u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x29070c: 0x3484fffc  ori         $a0, $a0, 0xFFFC
    ctx->pc = 0x29070cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65532);
    // 0x290710: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x290710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x290714: 0x0  nop
    ctx->pc = 0x290714u;
    // NOP
label_290718:
    // 0x290718: 0x442824  and         $a1, $v0, $a0
    ctx->pc = 0x290718u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x29071c: 0xb1182b  sltu        $v1, $a1, $s1
    ctx->pc = 0x29071cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x290720: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x290720u;
    {
        const bool branch_taken_0x290720 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x290724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290720u;
            // 0x290724: 0x2251023  subu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290720) {
            ctx->pc = 0x290738u;
            goto label_290738;
        }
    }
    ctx->pc = 0x290728u;
    // 0x290728: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x290728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29072c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x29072cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x290730: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x290730u;
    {
        const bool branch_taken_0x290730 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290730u;
            // 0x290734: 0x2382f  dsubu       $a3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290730) {
            ctx->pc = 0x290744u;
            goto label_290744;
        }
    }
    ctx->pc = 0x290738u;
label_290738:
    // 0x290738: 0xb11023  subu        $v0, $a1, $s1
    ctx->pc = 0x290738u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x29073c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29073cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x290740: 0x2383e  dsrl32      $a3, $v0, 0
    ctx->pc = 0x290740u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> (32 + 0));
label_290744:
    // 0x290744: 0x28e20010  slti        $v0, $a3, 0x10
    ctx->pc = 0x290744u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x290748: 0x50400070  beql        $v0, $zero, . + 4 + (0x70 << 2)
    ctx->pc = 0x290748u;
    {
        const bool branch_taken_0x290748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x290748) {
            ctx->pc = 0x29074Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x290748u;
            // 0x29074c: 0x8e08000c  lw          $t0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29090Cu;
            goto label_29090c;
        }
    }
    ctx->pc = 0x290750u;
    // 0x290750: 0x4e10084  bgez        $a3, . + 4 + (0x84 << 2)
    ctx->pc = 0x290750u;
    {
        const bool branch_taken_0x290750 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x290754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290750u;
            // 0x290754: 0x2051821  addu        $v1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290750) {
            ctx->pc = 0x290964u;
            goto label_290964;
        }
    }
    ctx->pc = 0x290758u;
    // 0x290758: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x290758u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x29075c: 0x5608ffee  bnel        $s0, $t0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x29075Cu;
    {
        const bool branch_taken_0x29075c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 8));
        if (branch_taken_0x29075c) {
            ctx->pc = 0x290760u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29075Cu;
            // 0x290760: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x290718u;
            runtime->cooperativeGuestYield();
            goto label_290718;
        }
    }
    ctx->pc = 0x290764u;
    // 0x290764: 0x2942003f  slti        $v0, $t2, 0x3F
    ctx->pc = 0x290764u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)63) ? 1 : 0);
label_290768:
    // 0x290768: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x290768u;
    {
        const bool branch_taken_0x290768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29076Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290768u;
            // 0x29076c: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290768) {
            ctx->pc = 0x290778u;
            goto label_290778;
        }
    }
    ctx->pc = 0x290770u;
    // 0x290770: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x290770u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x290774: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x290774u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_290778:
    // 0x290778: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x290778u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x29077c: 0x31420003  andi        $v0, $t2, 0x3
    ctx->pc = 0x29077cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
    // 0x290780: 0x5440ffdf  bnel        $v0, $zero, . + 4 + (-0x21 << 2)
    ctx->pc = 0x290780u;
    {
        const bool branch_taken_0x290780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x290780) {
            ctx->pc = 0x290784u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x290780u;
            // 0x290784: 0x8d10000c  lw          $s0, 0xC($t0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x290700u;
            runtime->cooperativeGuestYield();
            goto label_290700;
        }
    }
    ctx->pc = 0x290788u;
label_290788:
    // 0x290788: 0x31620003  andi        $v0, $t3, 0x3
    ctx->pc = 0x290788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
    // 0x29078c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x29078Cu;
    {
        const bool branch_taken_0x29078c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290790u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29078Cu;
            // 0x290790: 0x2529fff8  addiu       $t1, $t1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29078c) {
            ctx->pc = 0x2907E8u;
            goto label_2907e8;
        }
    }
    ctx->pc = 0x290794u;
    // 0x290794: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x290794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x290798: 0x1049fffb  beq         $v0, $t1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x290798u;
    {
        const bool branch_taken_0x290798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        ctx->pc = 0x29079Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290798u;
            // 0x29079c: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290798) {
            ctx->pc = 0x290788u;
            runtime->cooperativeGuestYield();
            goto label_290788;
        }
    }
    ctx->pc = 0x2907A0u;
label_2907a0:
    // 0x2907a0: 0x9d830004  lwu         $v1, 0x4($t4)
    ctx->pc = 0x2907a0u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x2907a4: 0x63078  dsll        $a2, $a2, 1
    ctx->pc = 0x2907a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 1);
    // 0x2907a8: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2907a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x2907ac: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x2907ACu;
    {
        const bool branch_taken_0x2907ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2907ac) {
            ctx->pc = 0x2907B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2907ACu;
            // 0x2907b0: 0x26834638  addiu       $v1, $s4, 0x4638 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 17976));
        ctx->in_delay_slot = false;
            ctx->pc = 0x290808u;
            goto label_290808;
        }
    }
    ctx->pc = 0x2907B4u;
    // 0x2907b4: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x2907B4u;
    {
        const bool branch_taken_0x2907b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2907B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2907B4u;
            // 0x2907b8: 0xc31024  and         $v0, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2907b4) {
            ctx->pc = 0x290804u;
            goto label_290804;
        }
    }
    ctx->pc = 0x2907BCu;
    // 0x2907bc: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x2907BCu;
    {
        const bool branch_taken_0x2907bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2907C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2907BCu;
            // 0x2907c0: 0xa10c0  sll         $v0, $t2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2907bc) {
            ctx->pc = 0x2906F0u;
            runtime->cooperativeGuestYield();
            goto label_2906f0;
        }
    }
    ctx->pc = 0x2907C4u;
    // 0x2907c4: 0x9da30004  lwu         $v1, 0x4($t5)
    ctx->pc = 0x2907c4u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 13), 4)));
label_2907c8:
    // 0x2907c8: 0x63078  dsll        $a2, $a2, 1
    ctx->pc = 0x2907c8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 1);
    // 0x2907cc: 0xc31024  and         $v0, $a2, $v1
    ctx->pc = 0x2907ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x2907d0: 0x0  nop
    ctx->pc = 0x2907d0u;
    // NOP
    // 0x2907d4: 0x0  nop
    ctx->pc = 0x2907d4u;
    // NOP
    // 0x2907d8: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x2907D8u;
    {
        const bool branch_taken_0x2907d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2907DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2907D8u;
            // 0x2907dc: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2907d8) {
            ctx->pc = 0x2907C8u;
            runtime->cooperativeGuestYield();
            goto label_2907c8;
        }
    }
    ctx->pc = 0x2907E0u;
    // 0x2907e0: 0x1000ffc3  b           . + 4 + (-0x3D << 2)
    ctx->pc = 0x2907E0u;
    {
        const bool branch_taken_0x2907e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2907E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2907E0u;
            // 0x2907e4: 0xa10c0  sll         $v0, $t2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2907e0) {
            ctx->pc = 0x2906F0u;
            runtime->cooperativeGuestYield();
            goto label_2906f0;
        }
    }
    ctx->pc = 0x2907E8u;
label_2907e8:
    // 0x2907e8: 0x8d830004  lw          $v1, 0x4($t4)
    ctx->pc = 0x2907e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x2907ec: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x2907ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x2907f0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2907f0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2907f4: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2907f4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2907f8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2907f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2907fc: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x2907FCu;
    {
        const bool branch_taken_0x2907fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2907FCu;
            // 0x290800: 0xad830004  sw          $v1, 0x4($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2907fc) {
            ctx->pc = 0x2907A0u;
            runtime->cooperativeGuestYield();
            goto label_2907a0;
        }
    }
    ctx->pc = 0x290804u;
label_290804:
    // 0x290804: 0x26834638  addiu       $v1, $s4, 0x4638
    ctx->pc = 0x290804u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 17976));
label_290808:
    // 0x290808: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x290808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x29080c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x29080cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x290810: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x290810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x290814: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x290814u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x290818: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x290818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x29081c: 0x51202b  sltu        $a0, $v0, $s1
    ctx->pc = 0x29081cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x290820: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x290820u;
    {
        const bool branch_taken_0x290820 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x290820) {
            ctx->pc = 0x290824u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x290820u;
            // 0x290824: 0x511023  subu        $v0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29083Cu;
            goto label_29083c;
        }
    }
    ctx->pc = 0x290828u;
    // 0x290828: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x290828u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x29082c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29082cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x290830: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x290830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x290834: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x290834u;
    {
        const bool branch_taken_0x290834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290834u;
            // 0x290838: 0x2382f  dsubu       $a3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290834) {
            ctx->pc = 0x290844u;
            goto label_290844;
        }
    }
    ctx->pc = 0x29083Cu;
label_29083c:
    // 0x29083c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x29083cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x290840: 0x2383e  dsrl32      $a3, $v0, 0
    ctx->pc = 0x290840u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> (32 + 0));
label_290844:
    // 0x290844: 0x26924638  addiu       $s2, $s4, 0x4638
    ctx->pc = 0x290844u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 17976));
    // 0x290848: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x290848u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x29084c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x29084cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x290850: 0x3610fffc  ori         $s0, $s0, 0xFFFC
    ctx->pc = 0x290850u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65532);
    // 0x290854: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x290854u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x290858: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x290858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x29085c: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x29085cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x290860: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x290860u;
    {
        const bool branch_taken_0x290860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x290864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290860u;
            // 0x290864: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290860) {
            ctx->pc = 0x290874u;
            goto label_290874;
        }
    }
    ctx->pc = 0x290868u;
    // 0x290868: 0x28e20010  slti        $v0, $a3, 0x10
    ctx->pc = 0x290868u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x29086c: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x29086Cu;
    {
        const bool branch_taken_0x29086c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29086Cu;
            // 0x290870: 0x26864638  addiu       $a2, $s4, 0x4638 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 17976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29086c) {
            ctx->pc = 0x290988u;
            goto label_290988;
        }
    }
    ctx->pc = 0x290874u;
label_290874:
    // 0x290874: 0xc0a4012  jal         func_290048
    ctx->pc = 0x290874u;
    SET_GPR_U32(ctx, 31, 0x29087Cu);
    ctx->pc = 0x290878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x290874u;
            // 0x290878: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x290048u;
    if (runtime->hasFunction(0x290048u)) {
        auto targetFn = runtime->lookupFunction(0x290048u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29087Cu; }
        if (ctx->pc != 0x29087Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00290048_0x290048(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29087Cu; }
        if (ctx->pc != 0x29087Cu) { return; }
    }
    ctx->pc = 0x29087Cu;
    // 0x29087c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x29087cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x290880: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x290880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x290884: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x290884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x290888: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x290888u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x29088c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x29088Cu;
    {
        const bool branch_taken_0x29088c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x290890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29088Cu;
            // 0x290890: 0x2231023  subu        $v0, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29088c) {
            ctx->pc = 0x2908A4u;
            goto label_2908a4;
        }
    }
    ctx->pc = 0x290894u;
    // 0x290894: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x290894u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x290898: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x290898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x29089c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x29089Cu;
    {
        const bool branch_taken_0x29089c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2908A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29089Cu;
            // 0x2908a0: 0x2382f  dsubu       $a3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29089c) {
            ctx->pc = 0x2908B0u;
            goto label_2908b0;
        }
    }
    ctx->pc = 0x2908A4u;
label_2908a4:
    // 0x2908a4: 0x711023  subu        $v0, $v1, $s1
    ctx->pc = 0x2908a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x2908a8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2908a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2908ac: 0x2383e  dsrl32      $a3, $v0, 0
    ctx->pc = 0x2908acu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> (32 + 0));
label_2908b0:
    // 0x2908b0: 0x26824638  addiu       $v0, $s4, 0x4638
    ctx->pc = 0x2908b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 17976));
    // 0x2908b4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x2908b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x2908b8: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x2908b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2908bc: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x2908bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x2908c0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2908c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2908c4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2908c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2908c8: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x2908c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2908cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2908CCu;
    {
        const bool branch_taken_0x2908cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2908D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2908CCu;
            // 0x2908d0: 0x28e20010  slti        $v0, $a3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2908cc) {
            ctx->pc = 0x2908DCu;
            goto label_2908dc;
        }
    }
    ctx->pc = 0x2908D4u;
    // 0x2908d4: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2908D4u;
    {
        const bool branch_taken_0x2908d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2908D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2908D4u;
            // 0x2908d8: 0x26864638  addiu       $a2, $s4, 0x4638 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 17976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2908d4) {
            ctx->pc = 0x290988u;
            goto label_290988;
        }
    }
    ctx->pc = 0x2908DCu;
label_2908dc:
    // 0x2908dc: 0xc0a2daa  jal         func_28B6A8
    ctx->pc = 0x2908DCu;
    SET_GPR_U32(ctx, 31, 0x2908E4u);
    ctx->pc = 0x2908E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2908DCu;
            // 0x2908e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B6A8u;
    if (runtime->hasFunction(0x28B6A8u)) {
        auto targetFn = runtime->lookupFunction(0x28B6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2908E4u; }
        if (ctx->pc != 0x2908E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028B6A8_0x28b6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2908E4u; }
        if (ctx->pc != 0x2908E4u) { return; }
    }
    ctx->pc = 0x2908E4u;
    // 0x2908e4: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x2908E4u;
    {
        const bool branch_taken_0x2908e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2908E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2908E4u;
            // 0x2908e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2908e4) {
            ctx->pc = 0x2909C0u;
            goto label_2909c0;
        }
    }
    ctx->pc = 0x2908ECu;
label_2908ec:
    // 0x2908ec: 0x2051821  addu        $v1, $s0, $a1
    ctx->pc = 0x2908ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x2908f0: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x2908f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2908f4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2908f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2908f8: 0xacc8000c  sw          $t0, 0xC($a2)
    ctx->pc = 0x2908f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
    // 0x2908fc: 0xad060008  sw          $a2, 0x8($t0)
    ctx->pc = 0x2908fcu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 6));
    // 0x290900: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x290900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x290904: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x290904u;
    {
        const bool branch_taken_0x290904 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290904u;
            // 0x290908: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x290904) {
            ctx->pc = 0x2909B0u;
            goto label_2909b0;
        }
    }
    ctx->pc = 0x29090Cu;
label_29090c:
    // 0x29090c: 0x36240001  ori         $a0, $s1, 0x1
    ctx->pc = 0x29090cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
    // 0x290910: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x290910u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x290914: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x290914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290918: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x290918u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x29091c: 0x25c34640  addiu       $v1, $t6, 0x4640
    ctx->pc = 0x29091cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), 17984));
    // 0x290920: 0xacc8000c  sw          $t0, 0xC($a2)
    ctx->pc = 0x290920u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
    // 0x290924: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x290924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x290928: 0xad060008  sw          $a2, 0x8($t0)
    ctx->pc = 0x290928u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 6));
    // 0x29092c: 0x7283c  dsll32      $a1, $a3, 0
    ctx->pc = 0x29092cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) << (32 + 0));
    // 0x290930: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x290930u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x290934: 0x2114021  addu        $t0, $s0, $s1
    ctx->pc = 0x290934u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x290938: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x290938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x29093c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x29093cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x290940: 0xac68000c  sw          $t0, 0xC($v1)
    ctx->pc = 0x290940u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 8));
    // 0x290944: 0x1053021  addu        $a2, $t0, $a1
    ctx->pc = 0x290944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x290948: 0xac680008  sw          $t0, 0x8($v1)
    ctx->pc = 0x290948u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 8));
    // 0x29094c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29094cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290950: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x290950u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x290954: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x290954u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    // 0x290958: 0xad03000c  sw          $v1, 0xC($t0)
    ctx->pc = 0x290958u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 3));
    // 0x29095c: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x29095Cu;
    {
        const bool branch_taken_0x29095c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29095Cu;
            // 0x290960: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29095c) {
            ctx->pc = 0x2909B4u;
            goto label_2909b4;
        }
    }
    ctx->pc = 0x290964u;
label_290964:
    // 0x290964: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x290964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x290968: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x290968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x29096c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x29096cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x290970: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x290970u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x290974: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x290974u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x290978: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x290978u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x29097c: 0xacc8000c  sw          $t0, 0xC($a2)
    ctx->pc = 0x29097cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
    // 0x290980: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x290980u;
    {
        const bool branch_taken_0x290980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x290984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x290980u;
            // 0x290984: 0xad060008  sw          $a2, 0x8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x290980) {
            ctx->pc = 0x2909B4u;
            goto label_2909b4;
        }
    }
    ctx->pc = 0x290988u;
label_290988:
    // 0x290988: 0x36250001  ori         $a1, $s1, 0x1
    ctx->pc = 0x290988u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
    // 0x29098c: 0x8cd00008  lw          $s0, 0x8($a2)
    ctx->pc = 0x29098cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x290990: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x290990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x290994: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x290994u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x290998: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x290998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29099c: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x29099cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x2909a0: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x2909a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2909a4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2909a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2909a8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2909a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2909ac: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x2909acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_2909b0:
    // 0x2909b0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2909b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_2909b4:
    // 0x2909b4: 0xc0a2daa  jal         func_28B6A8
    ctx->pc = 0x2909B4u;
    SET_GPR_U32(ctx, 31, 0x2909BCu);
    ctx->pc = 0x28B6A8u;
    if (runtime->hasFunction(0x28B6A8u)) {
        auto targetFn = runtime->lookupFunction(0x28B6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2909BCu; }
        if (ctx->pc != 0x2909BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028B6A8_0x28b6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2909BCu; }
        if (ctx->pc != 0x2909BCu) { return; }
    }
    ctx->pc = 0x2909BCu;
    // 0x2909bc: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x2909bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_2909c0:
    // 0x2909c0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2909c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2909c4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x2909c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2909c8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2909c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2909cc: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x2909ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2909d0: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x2909d0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2909d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2909d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2909d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2909D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2909DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2909D8u;
            // 0x2909dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2902ECu: goto label_2902ec;
            case 0x2902F0u: goto label_2902f0;
            case 0x290350u: goto label_290350;
            case 0x290358u: goto label_290358;
            case 0x29036Cu: goto label_29036c;
            case 0x29037Cu: goto label_29037c;
            case 0x29039Cu: goto label_29039c;
            case 0x2903B0u: goto label_2903b0;
            case 0x2903C4u: goto label_2903c4;
            case 0x2903C8u: goto label_2903c8;
            case 0x2903E8u: goto label_2903e8;
            case 0x2903F4u: goto label_2903f4;
            case 0x290428u: goto label_290428;
            case 0x290434u: goto label_290434;
            case 0x290448u: goto label_290448;
            case 0x29048Cu: goto label_29048c;
            case 0x290498u: goto label_290498;
            case 0x2904F0u: goto label_2904f0;
            case 0x290510u: goto label_290510;
            case 0x290560u: goto label_290560;
            case 0x290574u: goto label_290574;
            case 0x290584u: goto label_290584;
            case 0x2905A4u: goto label_2905a4;
            case 0x2905B8u: goto label_2905b8;
            case 0x2905CCu: goto label_2905cc;
            case 0x2905D0u: goto label_2905d0;
            case 0x29061Cu: goto label_29061c;
            case 0x290640u: goto label_290640;
            case 0x290660u: goto label_290660;
            case 0x290674u: goto label_290674;
            case 0x2906C8u: goto label_2906c8;
            case 0x2906E0u: goto label_2906e0;
            case 0x2906E4u: goto label_2906e4;
            case 0x2906F0u: goto label_2906f0;
            case 0x290700u: goto label_290700;
            case 0x290718u: goto label_290718;
            case 0x290738u: goto label_290738;
            case 0x290744u: goto label_290744;
            case 0x290768u: goto label_290768;
            case 0x290778u: goto label_290778;
            case 0x290788u: goto label_290788;
            case 0x2907A0u: goto label_2907a0;
            case 0x2907C8u: goto label_2907c8;
            case 0x2907E8u: goto label_2907e8;
            case 0x290804u: goto label_290804;
            case 0x290808u: goto label_290808;
            case 0x29083Cu: goto label_29083c;
            case 0x290844u: goto label_290844;
            case 0x290874u: goto label_290874;
            case 0x2908A4u: goto label_2908a4;
            case 0x2908B0u: goto label_2908b0;
            case 0x2908DCu: goto label_2908dc;
            case 0x2908ECu: goto label_2908ec;
            case 0x29090Cu: goto label_29090c;
            case 0x290964u: goto label_290964;
            case 0x290988u: goto label_290988;
            case 0x2909B0u: goto label_2909b0;
            case 0x2909B4u: goto label_2909b4;
            case 0x2909C0u: goto label_2909c0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2909E0u;
}
