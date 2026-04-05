#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_2851a8
// Address: 0x2851a8 - 0x2852b8
void entry_2851a8_0x2852b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_2851a8_0x2852b8");
#endif

    ctx->pc = 0x2851a8u;

    // 0x2851a8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2851a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2851ac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2851acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2851b0: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x2851b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2851b4: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x2851b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2851b8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2851B8u;
    {
        const bool branch_taken_0x2851b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2851BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2851B8u;
            // 0x2851bc: 0x8c85000c  lw          $a1, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2851b8) {
            ctx->pc = 0x2851D0u;
            goto label_2851d0;
        }
    }
    ctx->pc = 0x2851C0u;
    // 0x2851c0: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x2851c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x2851c4: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x2851c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x2851c8: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x2851C8u;
    {
        const bool branch_taken_0x2851c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2851CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2851C8u;
            // 0x2851cc: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2851c8) {
            ctx->pc = 0x285264u;
            goto label_285264;
        }
    }
    ctx->pc = 0x2851D0u;
label_2851d0:
    // 0x2851d0: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x2851d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x2851d4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2851D4u;
    {
        const bool branch_taken_0x2851d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2851D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2851D4u;
            // 0x2851d8: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2851d4) {
            ctx->pc = 0x285228u;
            goto label_285228;
        }
    }
    ctx->pc = 0x2851DCu;
    // 0x2851dc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2851DCu;
    {
        const bool branch_taken_0x2851dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2851dc) {
            ctx->pc = 0x2851ECu;
            goto label_2851ec;
        }
    }
    ctx->pc = 0x2851E4u;
    // 0x2851e4: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x2851E4u;
    {
        const bool branch_taken_0x2851e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2851E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2851E4u;
            // 0x2851e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2851e4) {
            ctx->pc = 0x285264u;
            goto label_285264;
        }
    }
    ctx->pc = 0x2851ECu;
label_2851ec:
    // 0x2851ec: 0x10a0001e  beqz        $a1, . + 4 + (0x1E << 2)
    ctx->pc = 0x2851ECu;
    {
        const bool branch_taken_0x2851ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2851F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2851ECu;
            // 0x2851f0: 0x3c03ff80  lui         $v1, 0xFF80 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65408 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2851ec) {
            ctx->pc = 0x285268u;
            goto label_285268;
        }
    }
    ctx->pc = 0x2851F4u;
    // 0x2851f4: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x2851f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2851f8: 0x2862ff82  slti        $v0, $v1, -0x7E
    ctx->pc = 0x2851f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967170) ? 1 : 0);
    // 0x2851fc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2851FCu;
    {
        const bool branch_taken_0x2851fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x285200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2851FCu;
            // 0x285200: 0x2402ff82  addiu       $v0, $zero, -0x7E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967170));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2851fc) {
            ctx->pc = 0x28521Cu;
            goto label_28521c;
        }
    }
    ctx->pc = 0x285204u;
    // 0x285204: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x285204u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x285208: 0x2843001a  slti        $v1, $v0, 0x1A
    ctx->pc = 0x285208u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)26) ? 1 : 0);
    // 0x28520c: 0x14600014  bnez        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x28520Cu;
    {
        const bool branch_taken_0x28520c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x285210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28520Cu;
            // 0x285210: 0x452806  srlv        $a1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28520c) {
            ctx->pc = 0x285260u;
            goto label_285260;
        }
    }
    ctx->pc = 0x285214u;
    // 0x285214: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x285214u;
    {
        const bool branch_taken_0x285214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285214u;
            // 0x285218: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285214) {
            ctx->pc = 0x285260u;
            goto label_285260;
        }
    }
    ctx->pc = 0x28521Cu;
label_28521c:
    // 0x28521c: 0x28620080  slti        $v0, $v1, 0x80
    ctx->pc = 0x28521cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)128) ? 1 : 0);
    // 0x285220: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x285220u;
    {
        const bool branch_taken_0x285220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x285224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x285220u;
            // 0x285224: 0x2467007f  addiu       $a3, $v1, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 127));
        ctx->in_delay_slot = false;
        if (branch_taken_0x285220) {
            ctx->pc = 0x285234u;
            goto label_285234;
        }
    }
    ctx->pc = 0x285228u;
label_285228:
    // 0x285228: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x285228u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x28522c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x28522Cu;
    {
        const bool branch_taken_0x28522c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x285230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28522Cu;
            // 0x285230: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28522c) {
            ctx->pc = 0x285264u;
            goto label_285264;
        }
    }
    ctx->pc = 0x285234u;
label_285234:
    // 0x285234: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x285234u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x285238: 0x30a3007f  andi        $v1, $a1, 0x7F
    ctx->pc = 0x285238u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)127);
    // 0x28523c: 0x54620004  bnel        $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28523Cu;
    {
        const bool branch_taken_0x28523c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28523c) {
            ctx->pc = 0x285240u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28523Cu;
            // 0x285240: 0x24a5003f  addiu       $a1, $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 63));
        ctx->in_delay_slot = false;
            ctx->pc = 0x285250u;
            goto label_285250;
        }
    }
    ctx->pc = 0x285244u;
    // 0x285244: 0x30a30080  andi        $v1, $a1, 0x80
    ctx->pc = 0x285244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
    // 0x285248: 0x24a20040  addiu       $v0, $a1, 0x40
    ctx->pc = 0x285248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x28524c: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x28524cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_285250:
    // 0x285250: 0x4a30004  bgezl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x285250u;
    {
        const bool branch_taken_0x285250 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x285250) {
            ctx->pc = 0x285254u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x285250u;
            // 0x285254: 0x529c2  srl         $a1, $a1, 7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x285264u;
            goto label_285264;
        }
    }
    ctx->pc = 0x285258u;
    // 0x285258: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x285258u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x28525c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x28525cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_285260:
    // 0x285260: 0x529c2  srl         $a1, $a1, 7
    ctx->pc = 0x285260u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 7));
label_285264:
    // 0x285264: 0x3c03ff80  lui         $v1, 0xFF80
    ctx->pc = 0x285264u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65408 << 16));
label_285268:
    // 0x285268: 0x3c02007f  lui         $v0, 0x7F
    ctx->pc = 0x285268u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)127 << 16));
    // 0x28526c: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x28526cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x285270: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x285270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x285274: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x285274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x285278: 0x3c03807f  lui         $v1, 0x807F
    ctx->pc = 0x285278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32895 << 16));
    // 0x28527c: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x28527cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x285280: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x285280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x285284: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x285284u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x285288: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x285288u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x28528c: 0x425c0  sll         $a0, $a0, 23
    ctx->pc = 0x28528cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 23));
    // 0x285290: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x285290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x285294: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x285294u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x285298: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x285298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x28529c: 0x81fc0  sll         $v1, $t0, 31
    ctx->pc = 0x28529cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 31));
    // 0x2852a0: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x2852a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x2852a4: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x2852a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x2852a8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x2852a8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2852ac: 0x3e00008  jr          $ra
    ctx->pc = 0x2852ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2851D0u: goto label_2851d0;
            case 0x2851ECu: goto label_2851ec;
            case 0x28521Cu: goto label_28521c;
            case 0x285228u: goto label_285228;
            case 0x285234u: goto label_285234;
            case 0x285250u: goto label_285250;
            case 0x285260u: goto label_285260;
            case 0x285264u: goto label_285264;
            case 0x285268u: goto label_285268;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2852B4u;
    // 0x2852b4: 0x0  nop
    ctx->pc = 0x2852b4u;
    // NOP
}
