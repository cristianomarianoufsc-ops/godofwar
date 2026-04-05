#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00209480
// Address: 0x209480 - 0x209e00
void sub_00209480_0x209480(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209480_0x209480");
#endif

    ctx->pc = 0x209480u;

label_209480:
    // 0x209480: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x209480u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x209484: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x209484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x209488: 0xe7b800c0  swc1        $f24, 0xC0($sp)
    ctx->pc = 0x209488u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x20948c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20948cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209490: 0xe7b700b8  swc1        $f23, 0xB8($sp)
    ctx->pc = 0x209490u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    // 0x209494: 0x46006606  mov.s       $f24, $f12
    ctx->pc = 0x209494u;
    ctx->f[24] = FPU_MOV_S(ctx->f[12]);
    // 0x209498: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x209498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x20949c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x20949cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x2094a0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2094a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2094a4: 0xe7b900c8  swc1        $f25, 0xC8($sp)
    ctx->pc = 0x2094a4u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x2094a8: 0xe7b600b0  swc1        $f22, 0xB0($sp)
    ctx->pc = 0x2094a8u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2094ac: 0xe7b500a8  swc1        $f21, 0xA8($sp)
    ctx->pc = 0x2094acu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x2094b0: 0xe7b400a0  swc1        $f20, 0xA0($sp)
    ctx->pc = 0x2094b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x2094b4: 0x8e450060  lw          $a1, 0x60($s2)
    ctx->pc = 0x2094b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x2094b8: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x2094b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x2094bc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2094BCu;
    {
        const bool branch_taken_0x2094bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2094C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2094BCu;
            // 0x2094c0: 0x46006dc6  mov.s       $f23, $f13 (Delay Slot)
        ctx->f[23] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2094bc) {
            ctx->pc = 0x2094F8u;
            goto label_2094f8;
        }
    }
    ctx->pc = 0x2094C4u;
    // 0x2094c4: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2094c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2094c8: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x2094c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x2094cc: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x2094ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2094d0: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x2094d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x2094d4: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x2094d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x2094d8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2094d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2094dc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2094dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2094e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2094e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2094e4: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x2094E4u;
    {
        const bool branch_taken_0x2094e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2094E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2094E4u;
            // 0x2094e8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2094e4) {
            ctx->pc = 0x2094F0u;
            goto label_2094f0;
        }
    }
    ctx->pc = 0x2094ECu;
    // 0x2094ec: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x2094ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2094f0:
    // 0x2094f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2094F0u;
    {
        const bool branch_taken_0x2094f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2094F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2094F0u;
            // 0x2094f4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2094f0) {
            ctx->pc = 0x2094FCu;
            goto label_2094fc;
        }
    }
    ctx->pc = 0x2094F8u;
label_2094f8:
    // 0x2094f8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2094f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2094fc:
    // 0x2094fc: 0x1220009c  beqz        $s1, . + 4 + (0x9C << 2)
    ctx->pc = 0x2094FCu;
    {
        const bool branch_taken_0x2094fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x209500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2094FCu;
            // 0x209500: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2094fc) {
            ctx->pc = 0x209770u;
            goto label_209770;
        }
    }
    ctx->pc = 0x209504u;
    // 0x209504: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x209504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x209508: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x209508u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x20950c: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x20950cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x209510: 0x40f809  jalr        $v0
    ctx->pc = 0x209510u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x209518u);
        ctx->pc = 0x209514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209510u;
            // 0x209514: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x209518u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x209480u: goto label_209480;
            case 0x2094F0u: goto label_2094f0;
            case 0x2094F8u: goto label_2094f8;
            case 0x2094FCu: goto label_2094fc;
            case 0x209550u: goto label_209550;
            case 0x209564u: goto label_209564;
            case 0x2095C8u: goto label_2095c8;
            case 0x2095CCu: goto label_2095cc;
            case 0x2096F0u: goto label_2096f0;
            case 0x209740u: goto label_209740;
            case 0x209770u: goto label_209770;
            case 0x20981Cu: goto label_20981c;
            case 0x209884u: goto label_209884;
            case 0x2098E8u: goto label_2098e8;
            case 0x209950u: goto label_209950;
            case 0x209954u: goto label_209954;
            case 0x2099A8u: goto label_2099a8;
            case 0x2099ACu: goto label_2099ac;
            case 0x209A20u: goto label_209a20;
            case 0x209A24u: goto label_209a24;
            case 0x209A68u: goto label_209a68;
            case 0x209B08u: goto label_209b08;
            case 0x209B0Cu: goto label_209b0c;
            case 0x209B60u: goto label_209b60;
            case 0x209BC8u: goto label_209bc8;
            case 0x209BCCu: goto label_209bcc;
            case 0x209BF0u: goto label_209bf0;
            case 0x209BF4u: goto label_209bf4;
            case 0x209C18u: goto label_209c18;
            case 0x209CB0u: goto label_209cb0;
            case 0x209CB4u: goto label_209cb4;
            case 0x209D08u: goto label_209d08;
            case 0x209D68u: goto label_209d68;
            case 0x209D6Cu: goto label_209d6c;
            case 0x209D90u: goto label_209d90;
            case 0x209D94u: goto label_209d94;
            case 0x209DB8u: goto label_209db8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x209518u; }
            if (ctx->pc != 0x209518u) { return; }
        }
        }
    }
    ctx->pc = 0x209518u;
    // 0x209518: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x209518u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20951c: 0x96420044  lhu         $v0, 0x44($s2)
    ctx->pc = 0x20951cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 68)));
    // 0x209520: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x209520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x209524: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x209524u;
    {
        const bool branch_taken_0x209524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x209524) {
            ctx->pc = 0x209528u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x209524u;
            // 0x209528: 0x8e03005c  lw          $v1, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x209550u;
            goto label_209550;
        }
    }
    ctx->pc = 0x20952Cu;
    // 0x20952c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x20952cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x209530: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x209530u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209534: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x209534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
    // 0x209538: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x209538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20953c: 0xa6420044  sh          $v0, 0x44($s2)
    ctx->pc = 0x20953cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 68), (uint16_t)GPR_U32(ctx, 2));
    // 0x209540: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x209540u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x209544: 0xae030028  sw          $v1, 0x28($s0)
    ctx->pc = 0x209544u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 3));
    // 0x209548: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x209548u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x20954c: 0x8e03005c  lw          $v1, 0x5C($s0)
    ctx->pc = 0x20954cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_209550:
    // 0x209550: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x209550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x209554: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x209554u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x209558: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x209558u;
    {
        const bool branch_taken_0x209558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20955Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209558u;
            // 0x20955c: 0xc6160024  lwc1        $f22, 0x24($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x209558) {
            ctx->pc = 0x209564u;
            goto label_209564;
        }
    }
    ctx->pc = 0x209560u;
    // 0x209560: 0xc442001c  lwc1        $f2, 0x1C($v0)
    ctx->pc = 0x209560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_209564:
    // 0x209564: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x209564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x209568: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x209568u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x20956c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x20956cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x209570: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x209570u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[2];
    // 0x209574: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x209574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x209578: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x209578u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x20957c: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x20957cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x209580: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x209580u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x209584: 0x46020028  max.s       $f0, $f0, $f2
    ctx->pc = 0x209584u;
    ctx->f[0] = std::max(ctx->f[0], ctx->f[2]);
    // 0x209588: 0x8e050080  lw          $a1, 0x80($s0)
    ctx->pc = 0x209588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
    // 0x20958c: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x20958cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x209590: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x209590u;
    {
        const bool branch_taken_0x209590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x209594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209590u;
            // 0x209594: 0x46010669  min.s       $f25, $f0, $f1 (Delay Slot)
        ctx->f[25] = std::min(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x209590) {
            ctx->pc = 0x2095C8u;
            goto label_2095c8;
        }
    }
    ctx->pc = 0x209598u;
    // 0x209598: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x209598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x20959c: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x20959cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x2095a0: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x2095a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2095a4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x2095a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x2095a8: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x2095a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x2095ac: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2095acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2095b0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2095b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2095b4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2095b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2095b8: 0x14450004  bne         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2095B8u;
    {
        const bool branch_taken_0x2095b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2095BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2095B8u;
            // 0x2095bc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2095b8) {
            ctx->pc = 0x2095CCu;
            goto label_2095cc;
        }
    }
    ctx->pc = 0x2095C0u;
    // 0x2095c0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2095C0u;
    {
        const bool branch_taken_0x2095c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2095C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2095C0u;
            // 0x2095c4: 0x8c640008  lw          $a0, 0x8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2095c0) {
            ctx->pc = 0x2095CCu;
            goto label_2095cc;
        }
    }
    ctx->pc = 0x2095C8u;
label_2095c8:
    // 0x2095c8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2095c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2095cc:
    // 0x2095cc: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x2095ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2095d0: 0x5080005b  beql        $a0, $zero, . + 4 + (0x5B << 2)
    ctx->pc = 0x2095D0u;
    {
        const bool branch_taken_0x2095d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2095d0) {
            ctx->pc = 0x2095D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2095D0u;
            // 0x2095d4: 0x4616a001  sub.s       $f0, $f20, $f22 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x209740u;
            goto label_209740;
        }
    }
    ctx->pc = 0x2095D8u;
    // 0x2095d8: 0xc0909c4  jal         func_242710
    ctx->pc = 0x2095D8u;
    SET_GPR_U32(ctx, 31, 0x2095E0u);
    ctx->pc = 0x242710u;
    if (runtime->hasFunction(0x242710u)) {
        auto targetFn = runtime->lookupFunction(0x242710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2095E0u; }
        if (ctx->pc != 0x2095E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242710_0x242720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2095E0u; }
        if (ctx->pc != 0x2095E0u) { return; }
    }
    ctx->pc = 0x2095E0u;
    // 0x2095e0: 0xd8430030  lqc2        $vf3, 0x30($v0)
    ctx->pc = 0x2095e0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2095e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2095e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2095e8: 0xc0909c4  jal         func_242710
    ctx->pc = 0x2095E8u;
    SET_GPR_U32(ctx, 31, 0x2095F0u);
    ctx->pc = 0x2095ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2095E8u;
            // 0x2095ec: 0xfba30050  sqc2        $vf3, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242710u;
    if (runtime->hasFunction(0x242710u)) {
        auto targetFn = runtime->lookupFunction(0x242710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2095F0u; }
        if (ctx->pc != 0x2095F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242710_0x242720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2095F0u; }
        if (ctx->pc != 0x2095F0u) { return; }
    }
    ctx->pc = 0x2095F0u;
    // 0x2095f0: 0xd8410030  lqc2        $vf1, 0x30($v0)
    ctx->pc = 0x2095f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2095f4: 0xdba30050  lqc2        $vf3, 0x50($sp)
    ctx->pc = 0x2095f4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2095f8: 0x4be118ec  vsub.xyzw   $vf3, $vf3, $vf1
    ctx->pc = 0x2095f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[3], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x2095fc: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x2095fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x209600: 0x24020000  addiu       $v0, $zero, 0x0
    ctx->pc = 0x209600u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 0));
    // 0x209604: 0x48a20800  qmtc2.ni    $v0, $vf1
    ctx->pc = 0x209604u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(GPR_VEC(ctx, 2));
    // 0x209608: 0x4a8100c0  vaddx.y     $vf3, $vf0, $vf1x
    ctx->pc = 0x209608u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x20960c: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x20960cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x209610: 0x4be318aa  vmul.xyzw   $vf2, $vf3, $vf3
    ctx->pc = 0x209610u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[3]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x209614: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x209614u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x209618: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x209618u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20961c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20961cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209620: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x209620u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x209624: 0x4a0003bf  vwaitq
    ctx->pc = 0x209624u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x209628: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x209628u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x20962c: 0x4a0002ff  vnop
    ctx->pc = 0x20962cu;
    // NOP operation, no action needed for VU0
    // 0x209630: 0x4a0002ff  vnop
    ctx->pc = 0x209630u;
    // NOP operation, no action needed for VU0
    // 0x209634: 0xfba30000  sqc2        $vf3, 0x0($sp)
    ctx->pc = 0x209634u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x209638: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x209638u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x20963c: 0xc0909c4  jal         func_242710
    ctx->pc = 0x20963Cu;
    SET_GPR_U32(ctx, 31, 0x209644u);
    ctx->pc = 0x209640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20963Cu;
            // 0x209640: 0xfba30050  sqc2        $vf3, 0x50($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 80), _mm_castps_si128(ctx->vu0_vf[3]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242710u;
    if (runtime->hasFunction(0x242710u)) {
        auto targetFn = runtime->lookupFunction(0x242710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209644u; }
        if (ctx->pc != 0x209644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242710_0x242720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209644u; }
        if (ctx->pc != 0x209644u) { return; }
    }
    ctx->pc = 0x209644u;
    // 0x209644: 0xd8410020  lqc2        $vf1, 0x20($v0)
    ctx->pc = 0x209644u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x209648: 0x4be000ac  vsub.xyzw   $vf2, $vf0, $vf0
    ctx->pc = 0x209648u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x20964c: 0xfba10030  sqc2        $vf1, 0x30($sp)
    ctx->pc = 0x20964cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x209650: 0x4be110ac  vsub.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x209650u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x209654: 0x4be2112a  vmul.xyzw   $vf4, $vf2, $vf2
    ctx->pc = 0x209654u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[4] = PS2_VBLEND(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x209658: 0x4b042041  vaddy.x     $vf1, $vf4, $vf4y
    ctx->pc = 0x209658u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x20965c: 0x4b040842  vaddz.x     $vf1, $vf1, $vf4z
    ctx->pc = 0x20965cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x209660: 0xdba30050  lqc2        $vf3, 0x50($sp)
    ctx->pc = 0x209660u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x209664: 0x4a6103be  vrsqrt      $Q, $vf0w, $vf1x
    ctx->pc = 0x209664u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x209668: 0x4a0003bf  vwaitq
    ctx->pc = 0x209668u;
    // VWAITQ (Q already resolved in this runtime)
    // 0x20966c: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x20966cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(-1, -1, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x209670: 0x4a0002ff  vnop
    ctx->pc = 0x209670u;
    // NOP operation, no action needed for VU0
    // 0x209674: 0x4a0002ff  vnop
    ctx->pc = 0x209674u;
    // NOP operation, no action needed for VU0
    // 0x209678: 0x4be218ea  vmul.xyzw   $vf3, $vf3, $vf2
    ctx->pc = 0x209678u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], ctx->vu0_vf[2]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[3] = PS2_VBLEND(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x20967c: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x20967cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x209680: 0x4b031841  vaddy.x     $vf1, $vf3, $vf3y
    ctx->pc = 0x209680u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x209684: 0x4b030842  vaddz.x     $vf1, $vf1, $vf3z
    ctx->pc = 0x209684u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x209688: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x209688u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x20968c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x20968cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x209690: 0xc060f88  jal         func_183E20
    ctx->pc = 0x209690u;
    SET_GPR_U32(ctx, 31, 0x209698u);
    ctx->pc = 0x183E20u;
    if (runtime->hasFunction(0x183E20u)) {
        auto targetFn = runtime->lookupFunction(0x183E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209698u; }
        if (ctx->pc != 0x209698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_183e20_0x183ec8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209698u; }
        if (ctx->pc != 0x209698u) { return; }
    }
    ctx->pc = 0x209698u;
    // 0x209698: 0xdba20020  lqc2        $vf2, 0x20($sp)
    ctx->pc = 0x209698u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20969c: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x20969cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x2096a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2096a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2096a4: 0xc0909c4  jal         func_242710
    ctx->pc = 0x2096A4u;
    SET_GPR_U32(ctx, 31, 0x2096ACu);
    ctx->pc = 0x2096A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2096A4u;
            // 0x2096a8: 0xfba20040  sqc2        $vf2, 0x40($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 64), _mm_castps_si128(ctx->vu0_vf[2]));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242710u;
    if (runtime->hasFunction(0x242710u)) {
        auto targetFn = runtime->lookupFunction(0x242710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2096ACu; }
        if (ctx->pc != 0x2096ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_242710_0x242720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2096ACu; }
        if (ctx->pc != 0x2096ACu) { return; }
    }
    ctx->pc = 0x2096ACu;
    // 0x2096ac: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x2096acu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2096b0: 0xdba20040  lqc2        $vf2, 0x40($sp)
    ctx->pc = 0x2096b0u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2096b4: 0x4be110aa  vmul.xyzw   $vf2, $vf2, $vf1
    ctx->pc = 0x2096b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x2096b8: 0x4b021041  vaddy.x     $vf1, $vf2, $vf2y
    ctx->pc = 0x2096b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2096bc: 0x4b020842  vaddz.x     $vf1, $vf1, $vf2z
    ctx->pc = 0x2096bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x2096c0: 0x48230800  qmfc2.ni    $v1, $vf1
    ctx->pc = 0x2096c0u;
    SET_GPR_VEC(ctx, 3, _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x2096c4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2096c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2096c8: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2096c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2096cc: 0x0  nop
    ctx->pc = 0x2096ccu;
    // NOP
    // 0x2096d0: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2096D0u;
    {
        const bool branch_taken_0x2096d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2096D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2096D0u;
            // 0x2096d4: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2096d0) {
            ctx->pc = 0x2096F0u;
            goto label_2096f0;
        }
    }
    ctx->pc = 0x2096D8u;
    // 0x2096d8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2096d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2096dc: 0x0  nop
    ctx->pc = 0x2096dcu;
    // NOP
    // 0x2096e0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2096E0u;
    {
        const bool branch_taken_0x2096e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2096E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2096E0u;
            // 0x2096e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2096e0) {
            ctx->pc = 0x2096F0u;
            goto label_2096f0;
        }
    }
    ctx->pc = 0x2096E8u;
    // 0x2096e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2096e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2096ec: 0x0  nop
    ctx->pc = 0x2096ecu;
    // NOP
label_2096f0:
    // 0x2096f0: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x2096f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2096f4: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x2096f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x2096f8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x2096f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x2096fc: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x2096fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x209700: 0x4618b800  add.s       $f0, $f23, $f24
    ctx->pc = 0x209700u;
    ctx->f[0] = FPU_ADD_S(ctx->f[23], ctx->f[24]);
    // 0x209704: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x209704u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x209708: 0x44812800  mtc1        $at, $f5
    ctx->pc = 0x209708u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
    // 0x20970c: 0x4618b881  sub.s       $f2, $f23, $f24
    ctx->pc = 0x20970cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[23], ctx->f[24]);
    // 0x209710: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x209710u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x209714: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x209714u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x209718: 0x4604a902  mul.s       $f4, $f21, $f4
    ctx->pc = 0x209718u;
    ctx->f[4] = FPU_MUL_S(ctx->f[21], ctx->f[4]);
    // 0x20971c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x20971cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x209720: 0x46031082  mul.s       $f2, $f2, $f3
    ctx->pc = 0x209720u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[3]);
    // 0x209724: 0x46002001  sub.s       $f0, $f4, $f0
    ctx->pc = 0x209724u;
    ctx->f[0] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x209728: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x209728u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x20972c: 0x46020103  div.s       $f4, $f0, $f2
    ctx->pc = 0x20972cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[4] = ctx->f[0] / ctx->f[2];
    // 0x209730: 0x46012068  max.s       $f1, $f4, $f1
    ctx->pc = 0x209730u;
    ctx->f[1] = std::max(ctx->f[4], ctx->f[1]);
    // 0x209734: 0x46050d29  min.s       $f20, $f1, $f5
    ctx->pc = 0x209734u;
    ctx->f[20] = std::min(ctx->f[1], ctx->f[5]);
    // 0x209738: 0x4616a001  sub.s       $f0, $f20, $f22
    ctx->pc = 0x209738u;
    ctx->f[0] = FPU_SUB_S(ctx->f[20], ctx->f[22]);
    // 0x20973c: 0x0  nop
    ctx->pc = 0x20973cu;
    // NOP
label_209740:
    // 0x209740: 0x3c013dcc  lui         $at, 0x3DCC
    ctx->pc = 0x209740u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15820 << 16));
    // 0x209744: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x209744u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
    // 0x209748: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x209748u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x20974c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20974cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209750: 0xe6190020  swc1        $f25, 0x20($s0)
    ctx->pc = 0x209750u;
    { float f = ctx->f[25]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x209754: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x209754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x209758: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x209758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20975c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20975cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x209760: 0x4600b000  add.s       $f0, $f22, $f0
    ctx->pc = 0x209760u;
    ctx->f[0] = FPU_ADD_S(ctx->f[22], ctx->f[0]);
    // 0x209764: 0xc081504  jal         func_205410
    ctx->pc = 0x209764u;
    SET_GPR_U32(ctx, 31, 0x20976Cu);
    ctx->pc = 0x209768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209764u;
            // 0x209768: 0xe6000024  swc1        $f0, 0x24($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x205410u;
    if (runtime->hasFunction(0x205410u)) {
        auto targetFn = runtime->lookupFunction(0x205410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20976Cu; }
        if (ctx->pc != 0x20976Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00205410_0x205410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20976Cu; }
        if (ctx->pc != 0x20976Cu) { return; }
    }
    ctx->pc = 0x20976Cu;
    // 0x20976c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x20976cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_209770:
    // 0x209770: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x209770u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x209774: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x209774u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x209778: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x209778u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20977c: 0xc7b900c8  lwc1        $f25, 0xC8($sp)
    ctx->pc = 0x20977cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[25] = f; }
    // 0x209780: 0xc7b800c0  lwc1        $f24, 0xC0($sp)
    ctx->pc = 0x209780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
    // 0x209784: 0xc7b700b8  lwc1        $f23, 0xB8($sp)
    ctx->pc = 0x209784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x209788: 0xc7b600b0  lwc1        $f22, 0xB0($sp)
    ctx->pc = 0x209788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x20978c: 0xc7b500a8  lwc1        $f21, 0xA8($sp)
    ctx->pc = 0x20978cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x209790: 0xc7b400a0  lwc1        $f20, 0xA0($sp)
    ctx->pc = 0x209790u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x209794: 0x3e00008  jr          $ra
    ctx->pc = 0x209794u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209794u;
            // 0x209798: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x209480u: goto label_209480;
            case 0x2094F0u: goto label_2094f0;
            case 0x2094F8u: goto label_2094f8;
            case 0x2094FCu: goto label_2094fc;
            case 0x209550u: goto label_209550;
            case 0x209564u: goto label_209564;
            case 0x2095C8u: goto label_2095c8;
            case 0x2095CCu: goto label_2095cc;
            case 0x2096F0u: goto label_2096f0;
            case 0x209740u: goto label_209740;
            case 0x209770u: goto label_209770;
            case 0x20981Cu: goto label_20981c;
            case 0x209884u: goto label_209884;
            case 0x2098E8u: goto label_2098e8;
            case 0x209950u: goto label_209950;
            case 0x209954u: goto label_209954;
            case 0x2099A8u: goto label_2099a8;
            case 0x2099ACu: goto label_2099ac;
            case 0x209A20u: goto label_209a20;
            case 0x209A24u: goto label_209a24;
            case 0x209A68u: goto label_209a68;
            case 0x209B08u: goto label_209b08;
            case 0x209B0Cu: goto label_209b0c;
            case 0x209B60u: goto label_209b60;
            case 0x209BC8u: goto label_209bc8;
            case 0x209BCCu: goto label_209bcc;
            case 0x209BF0u: goto label_209bf0;
            case 0x209BF4u: goto label_209bf4;
            case 0x209C18u: goto label_209c18;
            case 0x209CB0u: goto label_209cb0;
            case 0x209CB4u: goto label_209cb4;
            case 0x209D08u: goto label_209d08;
            case 0x209D68u: goto label_209d68;
            case 0x209D6Cu: goto label_209d6c;
            case 0x209D90u: goto label_209d90;
            case 0x209D94u: goto label_209d94;
            case 0x209DB8u: goto label_209db8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20979Cu;
    // 0x20979c: 0x0  nop
    ctx->pc = 0x20979cu;
    // NOP
    // 0x2097a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2097a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2097a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2097a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2097a8: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x2097a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x2097ac: 0x3c030780  lui         $v1, 0x780
    ctx->pc = 0x2097acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1920 << 16));
    // 0x2097b0: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2097b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2097b4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2097b4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2097b8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2097b8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2097bc: 0x94430006  lhu         $v1, 0x6($v0)
    ctx->pc = 0x2097bcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2097c0: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2097c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x2097c4: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x2097c4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x2097c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2097c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2097cc: 0x30658000  andi        $a1, $v1, 0x8000
    ctx->pc = 0x2097ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2097d0: 0x30627fff  andi        $v0, $v1, 0x7FFF
    ctx->pc = 0x2097d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x2097d4: 0x21340  sll         $v0, $v0, 13
    ctx->pc = 0x2097d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
    // 0x2097d8: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x2097d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x2097dc: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2097dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x2097e0: 0x30627fff  andi        $v0, $v1, 0x7FFF
    ctx->pc = 0x2097e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32767);
    // 0x2097e4: 0x44856000  mtc1        $a1, $f12
    ctx->pc = 0x2097e4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2097e8: 0x30638000  andi        $v1, $v1, 0x8000
    ctx->pc = 0x2097e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x2097ec: 0x21340  sll         $v0, $v0, 13
    ctx->pc = 0x2097ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
    // 0x2097f0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2097f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x2097f4: 0x46006303  div.s       $f12, $f12, $f0
    ctx->pc = 0x2097f4u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[0];
    // 0x2097f8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2097f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2097fc: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2097fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x209800: 0x46006b43  div.s       $f13, $f13, $f0
    ctx->pc = 0x209800u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[13] = ctx->f[13] / ctx->f[0];
    // 0x209804: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x209804u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x209808: 0x46026303  div.s       $f12, $f12, $f2
    ctx->pc = 0x209808u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[2];
    // 0x20980c: 0x46026b43  div.s       $f13, $f13, $f2
    ctx->pc = 0x20980cu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[13] = ctx->f[13] / ctx->f[2];
    // 0x209810: 0x46016302  mul.s       $f12, $f12, $f1
    ctx->pc = 0x209810u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[1]);
    // 0x209814: 0xc082520  jal         func_209480
    ctx->pc = 0x209814u;
    SET_GPR_U32(ctx, 31, 0x20981Cu);
    ctx->pc = 0x209818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209814u;
            // 0x209818: 0x46016b42  mul.s       $f13, $f13, $f1 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x209480u;
    runtime->cooperativeGuestYield();
    goto label_209480;
    ctx->pc = 0x20981Cu;
label_20981c:
    // 0x20981c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x20981cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209820: 0x3e00008  jr          $ra
    ctx->pc = 0x209820u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209820u;
            // 0x209824: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x209480u: goto label_209480;
            case 0x2094F0u: goto label_2094f0;
            case 0x2094F8u: goto label_2094f8;
            case 0x2094FCu: goto label_2094fc;
            case 0x209550u: goto label_209550;
            case 0x209564u: goto label_209564;
            case 0x2095C8u: goto label_2095c8;
            case 0x2095CCu: goto label_2095cc;
            case 0x2096F0u: goto label_2096f0;
            case 0x209740u: goto label_209740;
            case 0x209770u: goto label_209770;
            case 0x20981Cu: goto label_20981c;
            case 0x209884u: goto label_209884;
            case 0x2098E8u: goto label_2098e8;
            case 0x209950u: goto label_209950;
            case 0x209954u: goto label_209954;
            case 0x2099A8u: goto label_2099a8;
            case 0x2099ACu: goto label_2099ac;
            case 0x209A20u: goto label_209a20;
            case 0x209A24u: goto label_209a24;
            case 0x209A68u: goto label_209a68;
            case 0x209B08u: goto label_209b08;
            case 0x209B0Cu: goto label_209b0c;
            case 0x209B60u: goto label_209b60;
            case 0x209BC8u: goto label_209bc8;
            case 0x209BCCu: goto label_209bcc;
            case 0x209BF0u: goto label_209bf0;
            case 0x209BF4u: goto label_209bf4;
            case 0x209C18u: goto label_209c18;
            case 0x209CB0u: goto label_209cb0;
            case 0x209CB4u: goto label_209cb4;
            case 0x209D08u: goto label_209d08;
            case 0x209D68u: goto label_209d68;
            case 0x209D6Cu: goto label_209d6c;
            case 0x209D90u: goto label_209d90;
            case 0x209D94u: goto label_209d94;
            case 0x209DB8u: goto label_209db8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x209828u;
    // 0x209828: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x209828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x20982c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x20982cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x209830: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x209830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x209834: 0x3c030780  lui         $v1, 0x780
    ctx->pc = 0x209834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1920 << 16));
    // 0x209838: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x209838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x20983c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x20983cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x209840: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x209840u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x209844: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x209844u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x209848: 0x30437fff  andi        $v1, $v0, 0x7FFF
    ctx->pc = 0x209848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x20984c: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x20984cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x209850: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x209850u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x209854: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x209854u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209858: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x209858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x20985c: 0x31b40  sll         $v1, $v1, 13
    ctx->pc = 0x20985cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 13));
    // 0x209860: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x209860u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x209864: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x209864u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x209868: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x209868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x20986c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20986cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x209870: 0x46016303  div.s       $f12, $f12, $f1
    ctx->pc = 0x209870u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[1];
    // 0x209874: 0x46006307  neg.s       $f12, $f12
    ctx->pc = 0x209874u;
    ctx->f[12] = FPU_NEG_S(ctx->f[12]);
    // 0x209878: 0x46026303  div.s       $f12, $f12, $f2
    ctx->pc = 0x209878u;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = copysignf(INFINITY, ctx->f[12] * 0.0f); } else ctx->f[12] = ctx->f[12] / ctx->f[2];
    // 0x20987c: 0xc082520  jal         func_209480
    ctx->pc = 0x20987Cu;
    SET_GPR_U32(ctx, 31, 0x209884u);
    ctx->pc = 0x209880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20987Cu;
            // 0x209880: 0x46006302  mul.s       $f12, $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x209480u;
    runtime->cooperativeGuestYield();
    goto label_209480;
    ctx->pc = 0x209884u;
label_209884:
    // 0x209884: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x209884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209888: 0x3e00008  jr          $ra
    ctx->pc = 0x209888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20988Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209888u;
            // 0x20988c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x209480u: goto label_209480;
            case 0x2094F0u: goto label_2094f0;
            case 0x2094F8u: goto label_2094f8;
            case 0x2094FCu: goto label_2094fc;
            case 0x209550u: goto label_209550;
            case 0x209564u: goto label_209564;
            case 0x2095C8u: goto label_2095c8;
            case 0x2095CCu: goto label_2095cc;
            case 0x2096F0u: goto label_2096f0;
            case 0x209740u: goto label_209740;
            case 0x209770u: goto label_209770;
            case 0x20981Cu: goto label_20981c;
            case 0x209884u: goto label_209884;
            case 0x2098E8u: goto label_2098e8;
            case 0x209950u: goto label_209950;
            case 0x209954u: goto label_209954;
            case 0x2099A8u: goto label_2099a8;
            case 0x2099ACu: goto label_2099ac;
            case 0x209A20u: goto label_209a20;
            case 0x209A24u: goto label_209a24;
            case 0x209A68u: goto label_209a68;
            case 0x209B08u: goto label_209b08;
            case 0x209B0Cu: goto label_209b0c;
            case 0x209B60u: goto label_209b60;
            case 0x209BC8u: goto label_209bc8;
            case 0x209BCCu: goto label_209bcc;
            case 0x209BF0u: goto label_209bf0;
            case 0x209BF4u: goto label_209bf4;
            case 0x209C18u: goto label_209c18;
            case 0x209CB0u: goto label_209cb0;
            case 0x209CB4u: goto label_209cb4;
            case 0x209D08u: goto label_209d08;
            case 0x209D68u: goto label_209d68;
            case 0x209D6Cu: goto label_209d6c;
            case 0x209D90u: goto label_209d90;
            case 0x209D94u: goto label_209d94;
            case 0x209DB8u: goto label_209db8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x209890u;
    // 0x209890: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x209890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x209894: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x209894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x209898: 0x8c820064  lw          $v0, 0x64($a0)
    ctx->pc = 0x209898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 100)));
    // 0x20989c: 0x3c030780  lui         $v1, 0x780
    ctx->pc = 0x20989cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1920 << 16));
    // 0x2098a0: 0x3c0143b4  lui         $at, 0x43B4
    ctx->pc = 0x2098a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17332 << 16));
    // 0x2098a4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2098a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2098a8: 0x94420006  lhu         $v0, 0x6($v0)
    ctx->pc = 0x2098a8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 6)));
    // 0x2098ac: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2098acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2098b0: 0x30437fff  andi        $v1, $v0, 0x7FFF
    ctx->pc = 0x2098b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32767);
    // 0x2098b4: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2098b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
    // 0x2098b8: 0x34210fd8  ori         $at, $at, 0xFD8
    ctx->pc = 0x2098b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4056);
    // 0x2098bc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2098bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2098c0: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x2098c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
    // 0x2098c4: 0x31b40  sll         $v1, $v1, 13
    ctx->pc = 0x2098c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 13));
    // 0x2098c8: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2098c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x2098cc: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2098ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2098d0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2098d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2098d4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2098d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2098d8: 0x46016b43  div.s       $f13, $f13, $f1
    ctx->pc = 0x2098d8u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[13] = ctx->f[13] / ctx->f[1];
    // 0x2098dc: 0x46026b43  div.s       $f13, $f13, $f2
    ctx->pc = 0x2098dcu;
    if (ctx->f[2] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[13] = copysignf(INFINITY, ctx->f[13] * 0.0f); } else ctx->f[13] = ctx->f[13] / ctx->f[2];
    // 0x2098e0: 0xc082520  jal         func_209480
    ctx->pc = 0x2098E0u;
    SET_GPR_U32(ctx, 31, 0x2098E8u);
    ctx->pc = 0x2098E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2098E0u;
            // 0x2098e4: 0x46006b42  mul.s       $f13, $f13, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[13], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x209480u;
    runtime->cooperativeGuestYield();
    goto label_209480;
    ctx->pc = 0x2098E8u;
label_2098e8:
    // 0x2098e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2098e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2098ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2098ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2098F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2098ECu;
            // 0x2098f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x209480u: goto label_209480;
            case 0x2094F0u: goto label_2094f0;
            case 0x2094F8u: goto label_2094f8;
            case 0x2094FCu: goto label_2094fc;
            case 0x209550u: goto label_209550;
            case 0x209564u: goto label_209564;
            case 0x2095C8u: goto label_2095c8;
            case 0x2095CCu: goto label_2095cc;
            case 0x2096F0u: goto label_2096f0;
            case 0x209740u: goto label_209740;
            case 0x209770u: goto label_209770;
            case 0x20981Cu: goto label_20981c;
            case 0x209884u: goto label_209884;
            case 0x2098E8u: goto label_2098e8;
            case 0x209950u: goto label_209950;
            case 0x209954u: goto label_209954;
            case 0x2099A8u: goto label_2099a8;
            case 0x2099ACu: goto label_2099ac;
            case 0x209A20u: goto label_209a20;
            case 0x209A24u: goto label_209a24;
            case 0x209A68u: goto label_209a68;
            case 0x209B08u: goto label_209b08;
            case 0x209B0Cu: goto label_209b0c;
            case 0x209B60u: goto label_209b60;
            case 0x209BC8u: goto label_209bc8;
            case 0x209BCCu: goto label_209bcc;
            case 0x209BF0u: goto label_209bf0;
            case 0x209BF4u: goto label_209bf4;
            case 0x209C18u: goto label_209c18;
            case 0x209CB0u: goto label_209cb0;
            case 0x209CB4u: goto label_209cb4;
            case 0x209D08u: goto label_209d08;
            case 0x209D68u: goto label_209d68;
            case 0x209D6Cu: goto label_209d6c;
            case 0x209D90u: goto label_209d90;
            case 0x209D94u: goto label_209d94;
            case 0x209DB8u: goto label_209db8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2098F4u;
    // 0x2098f4: 0x0  nop
    ctx->pc = 0x2098f4u;
    // NOP
    // 0x2098f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2098f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2098fc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2098fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x209900: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x209900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x209904: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x209904u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209908: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x209908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x20990c: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x20990cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x209910: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x209910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x209914: 0x8e450060  lw          $a1, 0x60($s2)
    ctx->pc = 0x209914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x209918: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x209918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x20991c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x20991Cu;
    {
        const bool branch_taken_0x20991c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x209920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20991Cu;
            // 0x209920: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20991c) {
            ctx->pc = 0x209954u;
            goto label_209954;
        }
    }
    ctx->pc = 0x209924u;
    // 0x209924: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x209924u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x209928: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x209928u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x20992c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x20992cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x209930: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x209930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x209934: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x209934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x209938: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x209938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x20993c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x20993cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x209940: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x209940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x209944: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x209944u;
    {
        const bool branch_taken_0x209944 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x209948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209944u;
            // 0x209948: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209944) {
            ctx->pc = 0x209950u;
            goto label_209950;
        }
    }
    ctx->pc = 0x20994Cu;
    // 0x20994c: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x20994cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_209950:
    // 0x209950: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x209950u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_209954:
    // 0x209954: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x209954u;
    {
        const bool branch_taken_0x209954 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x209958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209954u;
            // 0x209958: 0x8e530064  lw          $s3, 0x64($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209954) {
            ctx->pc = 0x2099A8u;
            goto label_2099a8;
        }
    }
    ctx->pc = 0x20995Cu;
    // 0x20995c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x20995cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x209960: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x209960u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x209964: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x209964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x209968: 0x40f809  jalr        $v0
    ctx->pc = 0x209968u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x209970u);
        ctx->pc = 0x20996Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209968u;
            // 0x20996c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x209970u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x209480u: goto label_209480;
            case 0x2094F0u: goto label_2094f0;
            case 0x2094F8u: goto label_2094f8;
            case 0x2094FCu: goto label_2094fc;
            case 0x209550u: goto label_209550;
            case 0x209564u: goto label_209564;
            case 0x2095C8u: goto label_2095c8;
            case 0x2095CCu: goto label_2095cc;
            case 0x2096F0u: goto label_2096f0;
            case 0x209740u: goto label_209740;
            case 0x209770u: goto label_209770;
            case 0x20981Cu: goto label_20981c;
            case 0x209884u: goto label_209884;
            case 0x2098E8u: goto label_2098e8;
            case 0x209950u: goto label_209950;
            case 0x209954u: goto label_209954;
            case 0x2099A8u: goto label_2099a8;
            case 0x2099ACu: goto label_2099ac;
            case 0x209A20u: goto label_209a20;
            case 0x209A24u: goto label_209a24;
            case 0x209A68u: goto label_209a68;
            case 0x209B08u: goto label_209b08;
            case 0x209B0Cu: goto label_209b0c;
            case 0x209B60u: goto label_209b60;
            case 0x209BC8u: goto label_209bc8;
            case 0x209BCCu: goto label_209bcc;
            case 0x209BF0u: goto label_209bf0;
            case 0x209BF4u: goto label_209bf4;
            case 0x209C18u: goto label_209c18;
            case 0x209CB0u: goto label_209cb0;
            case 0x209CB4u: goto label_209cb4;
            case 0x209D08u: goto label_209d08;
            case 0x209D68u: goto label_209d68;
            case 0x209D6Cu: goto label_209d6c;
            case 0x209D90u: goto label_209d90;
            case 0x209D94u: goto label_209d94;
            case 0x209DB8u: goto label_209db8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x209970u; }
            if (ctx->pc != 0x209970u) { return; }
        }
        }
    }
    ctx->pc = 0x209970u;
    // 0x209970: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x209970u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209974: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x209974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209978: 0xc081a5a  jal         func_206968
    ctx->pc = 0x209978u;
    SET_GPR_U32(ctx, 31, 0x209980u);
    ctx->pc = 0x20997Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209978u;
            // 0x20997c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x206968u;
    if (runtime->hasFunction(0x206968u)) {
        auto targetFn = runtime->lookupFunction(0x206968u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209980u; }
        if (ctx->pc != 0x209980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00206968_0x206968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209980u; }
        if (ctx->pc != 0x209980u) { return; }
    }
    ctx->pc = 0x209980u;
    // 0x209980: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x209980u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209984: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x209984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209988: 0xc081a18  jal         func_206860
    ctx->pc = 0x209988u;
    SET_GPR_U32(ctx, 31, 0x209990u);
    ctx->pc = 0x20998Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209988u;
            // 0x20998c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x206860u;
    if (runtime->hasFunction(0x206860u)) {
        auto targetFn = runtime->lookupFunction(0x206860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209990u; }
        if (ctx->pc != 0x209990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00206860_0x206860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209990u; }
        if (ctx->pc != 0x209990u) { return; }
    }
    ctx->pc = 0x209990u;
    // 0x209990: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x209990u;
    {
        const bool branch_taken_0x209990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x209994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209990u;
            // 0x209994: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209990) {
            ctx->pc = 0x2099ACu;
            goto label_2099ac;
        }
    }
    ctx->pc = 0x209998u;
    // 0x209998: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x209998u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x20999c: 0xc077aca  jal         func_1DEB28
    ctx->pc = 0x20999Cu;
    SET_GPR_U32(ctx, 31, 0x2099A4u);
    ctx->pc = 0x2099A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20999Cu;
            // 0x2099a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DEB28u;
    if (runtime->hasFunction(0x1DEB28u)) {
        auto targetFn = runtime->lookupFunction(0x1DEB28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2099A4u; }
        if (ctx->pc != 0x2099A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DEB28_0x1deb28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2099A4u; }
        if (ctx->pc != 0x2099A4u) { return; }
    }
    ctx->pc = 0x2099A4u;
    // 0x2099a4: 0x0  nop
    ctx->pc = 0x2099a4u;
    // NOP
label_2099a8:
    // 0x2099a8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2099a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2099ac:
    // 0x2099ac: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2099acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2099b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2099b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2099b4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x2099b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2099b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2099b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2099bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2099BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2099C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2099BCu;
            // 0x2099c0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x209480u: goto label_209480;
            case 0x2094F0u: goto label_2094f0;
            case 0x2094F8u: goto label_2094f8;
            case 0x2094FCu: goto label_2094fc;
            case 0x209550u: goto label_209550;
            case 0x209564u: goto label_209564;
            case 0x2095C8u: goto label_2095c8;
            case 0x2095CCu: goto label_2095cc;
            case 0x2096F0u: goto label_2096f0;
            case 0x209740u: goto label_209740;
            case 0x209770u: goto label_209770;
            case 0x20981Cu: goto label_20981c;
            case 0x209884u: goto label_209884;
            case 0x2098E8u: goto label_2098e8;
            case 0x209950u: goto label_209950;
            case 0x209954u: goto label_209954;
            case 0x2099A8u: goto label_2099a8;
            case 0x2099ACu: goto label_2099ac;
            case 0x209A20u: goto label_209a20;
            case 0x209A24u: goto label_209a24;
            case 0x209A68u: goto label_209a68;
            case 0x209B08u: goto label_209b08;
            case 0x209B0Cu: goto label_209b0c;
            case 0x209B60u: goto label_209b60;
            case 0x209BC8u: goto label_209bc8;
            case 0x209BCCu: goto label_209bcc;
            case 0x209BF0u: goto label_209bf0;
            case 0x209BF4u: goto label_209bf4;
            case 0x209C18u: goto label_209c18;
            case 0x209CB0u: goto label_209cb0;
            case 0x209CB4u: goto label_209cb4;
            case 0x209D08u: goto label_209d08;
            case 0x209D68u: goto label_209d68;
            case 0x209D6Cu: goto label_209d6c;
            case 0x209D90u: goto label_209d90;
            case 0x209D94u: goto label_209d94;
            case 0x209DB8u: goto label_209db8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2099C4u;
    // 0x2099c4: 0x0  nop
    ctx->pc = 0x2099c4u;
    // NOP
    // 0x2099c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2099c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2099cc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2099ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2099d0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2099d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2099d4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2099d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2099d8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2099d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2099dc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2099dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2099e0: 0x8e250060  lw          $a1, 0x60($s1)
    ctx->pc = 0x2099e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x2099e4: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x2099e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x2099e8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2099E8u;
    {
        const bool branch_taken_0x2099e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2099ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2099E8u;
            // 0x2099ec: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2099e8) {
            ctx->pc = 0x209A24u;
            goto label_209a24;
        }
    }
    ctx->pc = 0x2099F0u;
    // 0x2099f0: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x2099f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2099f4: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x2099f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x2099f8: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x2099f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x2099fc: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x2099fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x209a00: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x209a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x209a04: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x209a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x209a08: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x209a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x209a0c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x209a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x209a10: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x209A10u;
    {
        const bool branch_taken_0x209a10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x209A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209A10u;
            // 0x209a14: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209a10) {
            ctx->pc = 0x209A20u;
            goto label_209a20;
        }
    }
    ctx->pc = 0x209A18u;
    // 0x209a18: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x209a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x209a1c: 0x0  nop
    ctx->pc = 0x209a1cu;
    // NOP
label_209a20:
    // 0x209a20: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x209a20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_209a24:
    // 0x209a24: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x209a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x209a28: 0x8e320064  lw          $s2, 0x64($s1)
    ctx->pc = 0x209a28u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
    // 0x209a2c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x209a2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x209a30: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x209a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x209a34: 0x40f809  jalr        $v0
    ctx->pc = 0x209A34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x209A3Cu);
        ctx->pc = 0x209A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209A34u;
            // 0x209a38: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x209A3Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x209480u: goto label_209480;
            case 0x2094F0u: goto label_2094f0;
            case 0x2094F8u: goto label_2094f8;
            case 0x2094FCu: goto label_2094fc;
            case 0x209550u: goto label_209550;
            case 0x209564u: goto label_209564;
            case 0x2095C8u: goto label_2095c8;
            case 0x2095CCu: goto label_2095cc;
            case 0x2096F0u: goto label_2096f0;
            case 0x209740u: goto label_209740;
            case 0x209770u: goto label_209770;
            case 0x20981Cu: goto label_20981c;
            case 0x209884u: goto label_209884;
            case 0x2098E8u: goto label_2098e8;
            case 0x209950u: goto label_209950;
            case 0x209954u: goto label_209954;
            case 0x2099A8u: goto label_2099a8;
            case 0x2099ACu: goto label_2099ac;
            case 0x209A20u: goto label_209a20;
            case 0x209A24u: goto label_209a24;
            case 0x209A68u: goto label_209a68;
            case 0x209B08u: goto label_209b08;
            case 0x209B0Cu: goto label_209b0c;
            case 0x209B60u: goto label_209b60;
            case 0x209BC8u: goto label_209bc8;
            case 0x209BCCu: goto label_209bcc;
            case 0x209BF0u: goto label_209bf0;
            case 0x209BF4u: goto label_209bf4;
            case 0x209C18u: goto label_209c18;
            case 0x209CB0u: goto label_209cb0;
            case 0x209CB4u: goto label_209cb4;
            case 0x209D08u: goto label_209d08;
            case 0x209D68u: goto label_209d68;
            case 0x209D6Cu: goto label_209d6c;
            case 0x209D90u: goto label_209d90;
            case 0x209D94u: goto label_209d94;
            case 0x209DB8u: goto label_209db8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x209A3Cu; }
            if (ctx->pc != 0x209A3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x209A3Cu;
    // 0x209a3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209a40: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x209a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209a44: 0xc081a18  jal         func_206860
    ctx->pc = 0x209A44u;
    SET_GPR_U32(ctx, 31, 0x209A4Cu);
    ctx->pc = 0x209A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209A44u;
            // 0x209a48: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x206860u;
    if (runtime->hasFunction(0x206860u)) {
        auto targetFn = runtime->lookupFunction(0x206860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209A4Cu; }
        if (ctx->pc != 0x209A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00206860_0x206860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209A4Cu; }
        if (ctx->pc != 0x209A4Cu) { return; }
    }
    ctx->pc = 0x209A4Cu;
    // 0x209a4c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x209A4Cu;
    {
        const bool branch_taken_0x209a4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x209A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209A4Cu;
            // 0x209a50: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209a4c) {
            ctx->pc = 0x209A68u;
            goto label_209a68;
        }
    }
    ctx->pc = 0x209A54u;
    // 0x209a54: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x209a54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x209a58: 0xc077aa6  jal         func_1DEA98
    ctx->pc = 0x209A58u;
    SET_GPR_U32(ctx, 31, 0x209A60u);
    ctx->pc = 0x209A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209A58u;
            // 0x209a5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DEA98u;
    if (runtime->hasFunction(0x1DEA98u)) {
        auto targetFn = runtime->lookupFunction(0x1DEA98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209A60u; }
        if (ctx->pc != 0x209A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DEA98_0x1dea98(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209A60u; }
        if (ctx->pc != 0x209A60u) { return; }
    }
    ctx->pc = 0x209A60u;
    // 0x209a60: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x209a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
    // 0x209a64: 0x0  nop
    ctx->pc = 0x209a64u;
    // NOP
label_209a68:
    // 0x209a68: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x209a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x209a6c: 0x244298f8  addiu       $v0, $v0, -0x6708
    ctx->pc = 0x209a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940920));
    // 0x209a70: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x209a70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x209a74: 0xa623002a  sh          $v1, 0x2A($s1)
    ctx->pc = 0x209a74u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x209a78: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x209a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x209a7c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x209a7cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x209a80: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x209a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x209a84: 0x40f809  jalr        $v0
    ctx->pc = 0x209A84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x209A8Cu);
        ctx->pc = 0x209A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209A84u;
            // 0x209a88: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x209A8Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x209480u: goto label_209480;
            case 0x2094F0u: goto label_2094f0;
            case 0x2094F8u: goto label_2094f8;
            case 0x2094FCu: goto label_2094fc;
            case 0x209550u: goto label_209550;
            case 0x209564u: goto label_209564;
            case 0x2095C8u: goto label_2095c8;
            case 0x2095CCu: goto label_2095cc;
            case 0x2096F0u: goto label_2096f0;
            case 0x209740u: goto label_209740;
            case 0x209770u: goto label_209770;
            case 0x20981Cu: goto label_20981c;
            case 0x209884u: goto label_209884;
            case 0x2098E8u: goto label_2098e8;
            case 0x209950u: goto label_209950;
            case 0x209954u: goto label_209954;
            case 0x2099A8u: goto label_2099a8;
            case 0x2099ACu: goto label_2099ac;
            case 0x209A20u: goto label_209a20;
            case 0x209A24u: goto label_209a24;
            case 0x209A68u: goto label_209a68;
            case 0x209B08u: goto label_209b08;
            case 0x209B0Cu: goto label_209b0c;
            case 0x209B60u: goto label_209b60;
            case 0x209BC8u: goto label_209bc8;
            case 0x209BCCu: goto label_209bcc;
            case 0x209BF0u: goto label_209bf0;
            case 0x209BF4u: goto label_209bf4;
            case 0x209C18u: goto label_209c18;
            case 0x209CB0u: goto label_209cb0;
            case 0x209CB4u: goto label_209cb4;
            case 0x209D08u: goto label_209d08;
            case 0x209D68u: goto label_209d68;
            case 0x209D6Cu: goto label_209d6c;
            case 0x209D90u: goto label_209d90;
            case 0x209D94u: goto label_209d94;
            case 0x209DB8u: goto label_209db8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x209A8Cu; }
            if (ctx->pc != 0x209A8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x209A8Cu;
    // 0x209a8c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x209a8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209a90: 0xc081a44  jal         func_206910
    ctx->pc = 0x209A90u;
    SET_GPR_U32(ctx, 31, 0x209A98u);
    ctx->pc = 0x209A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209A90u;
            // 0x209a94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x206910u;
    if (runtime->hasFunction(0x206910u)) {
        auto targetFn = runtime->lookupFunction(0x206910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209A98u; }
        if (ctx->pc != 0x209A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00206910_0x206910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209A98u; }
        if (ctx->pc != 0x209A98u) { return; }
    }
    ctx->pc = 0x209A98u;
    // 0x209a98: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x209a98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x209a9c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x209a9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x209aa0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x209aa0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209aa4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x209aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x209AA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209AA8u;
            // 0x209aac: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x209480u: goto label_209480;
            case 0x2094F0u: goto label_2094f0;
            case 0x2094F8u: goto label_2094f8;
            case 0x2094FCu: goto label_2094fc;
            case 0x209550u: goto label_209550;
            case 0x209564u: goto label_209564;
            case 0x2095C8u: goto label_2095c8;
            case 0x2095CCu: goto label_2095cc;
            case 0x2096F0u: goto label_2096f0;
            case 0x209740u: goto label_209740;
            case 0x209770u: goto label_209770;
            case 0x20981Cu: goto label_20981c;
            case 0x209884u: goto label_209884;
            case 0x2098E8u: goto label_2098e8;
            case 0x209950u: goto label_209950;
            case 0x209954u: goto label_209954;
            case 0x2099A8u: goto label_2099a8;
            case 0x2099ACu: goto label_2099ac;
            case 0x209A20u: goto label_209a20;
            case 0x209A24u: goto label_209a24;
            case 0x209A68u: goto label_209a68;
            case 0x209B08u: goto label_209b08;
            case 0x209B0Cu: goto label_209b0c;
            case 0x209B60u: goto label_209b60;
            case 0x209BC8u: goto label_209bc8;
            case 0x209BCCu: goto label_209bcc;
            case 0x209BF0u: goto label_209bf0;
            case 0x209BF4u: goto label_209bf4;
            case 0x209C18u: goto label_209c18;
            case 0x209CB0u: goto label_209cb0;
            case 0x209CB4u: goto label_209cb4;
            case 0x209D08u: goto label_209d08;
            case 0x209D68u: goto label_209d68;
            case 0x209D6Cu: goto label_209d6c;
            case 0x209D90u: goto label_209d90;
            case 0x209D94u: goto label_209d94;
            case 0x209DB8u: goto label_209db8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x209AB0u;
    // 0x209ab0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x209ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x209ab4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x209ab4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x209ab8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x209ab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x209abc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x209abcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209ac0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x209ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x209ac4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x209ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x209ac8: 0x8e450060  lw          $a1, 0x60($s2)
    ctx->pc = 0x209ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 96)));
    // 0x209acc: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x209accu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x209ad0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x209AD0u;
    {
        const bool branch_taken_0x209ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x209AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209AD0u;
            // 0x209ad4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209ad0) {
            ctx->pc = 0x209B0Cu;
            goto label_209b0c;
        }
    }
    ctx->pc = 0x209AD8u;
    // 0x209ad8: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x209ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x209adc: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x209adcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x209ae0: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x209ae0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x209ae4: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x209ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x209ae8: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x209ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x209aec: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x209aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x209af0: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x209af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x209af4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x209af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x209af8: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x209AF8u;
    {
        const bool branch_taken_0x209af8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x209AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209AF8u;
            // 0x209afc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209af8) {
            ctx->pc = 0x209B08u;
            goto label_209b08;
        }
    }
    ctx->pc = 0x209B00u;
    // 0x209b00: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x209b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x209b04: 0x0  nop
    ctx->pc = 0x209b04u;
    // NOP
label_209b08:
    // 0x209b08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x209b08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_209b0c:
    // 0x209b0c: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x209B0Cu;
    {
        const bool branch_taken_0x209b0c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x209B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209B0Cu;
            // 0x209b10: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209b0c) {
            ctx->pc = 0x209B60u;
            goto label_209b60;
        }
    }
    ctx->pc = 0x209B14u;
    // 0x209b14: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x209b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x209b18: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x209b18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x209b1c: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x209b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x209b20: 0x40f809  jalr        $v0
    ctx->pc = 0x209B20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x209B28u);
        ctx->pc = 0x209B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209B20u;
            // 0x209b24: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x209B28u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x209480u: goto label_209480;
            case 0x2094F0u: goto label_2094f0;
            case 0x2094F8u: goto label_2094f8;
            case 0x2094FCu: goto label_2094fc;
            case 0x209550u: goto label_209550;
            case 0x209564u: goto label_209564;
            case 0x2095C8u: goto label_2095c8;
            case 0x2095CCu: goto label_2095cc;
            case 0x2096F0u: goto label_2096f0;
            case 0x209740u: goto label_209740;
            case 0x209770u: goto label_209770;
            case 0x20981Cu: goto label_20981c;
            case 0x209884u: goto label_209884;
            case 0x2098E8u: goto label_2098e8;
            case 0x209950u: goto label_209950;
            case 0x209954u: goto label_209954;
            case 0x2099A8u: goto label_2099a8;
            case 0x2099ACu: goto label_2099ac;
            case 0x209A20u: goto label_209a20;
            case 0x209A24u: goto label_209a24;
            case 0x209A68u: goto label_209a68;
            case 0x209B08u: goto label_209b08;
            case 0x209B0Cu: goto label_209b0c;
            case 0x209B60u: goto label_209b60;
            case 0x209BC8u: goto label_209bc8;
            case 0x209BCCu: goto label_209bcc;
            case 0x209BF0u: goto label_209bf0;
            case 0x209BF4u: goto label_209bf4;
            case 0x209C18u: goto label_209c18;
            case 0x209CB0u: goto label_209cb0;
            case 0x209CB4u: goto label_209cb4;
            case 0x209D08u: goto label_209d08;
            case 0x209D68u: goto label_209d68;
            case 0x209D6Cu: goto label_209d6c;
            case 0x209D90u: goto label_209d90;
            case 0x209D94u: goto label_209d94;
            case 0x209DB8u: goto label_209db8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x209B28u; }
            if (ctx->pc != 0x209B28u) { return; }
        }
        }
    }
    ctx->pc = 0x209B28u;
    // 0x209b28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x209b28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209b2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x209b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209b30: 0xc081a5a  jal         func_206968
    ctx->pc = 0x209B30u;
    SET_GPR_U32(ctx, 31, 0x209B38u);
    ctx->pc = 0x209B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209B30u;
            // 0x209b34: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x206968u;
    if (runtime->hasFunction(0x206968u)) {
        auto targetFn = runtime->lookupFunction(0x206968u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209B38u; }
        if (ctx->pc != 0x209B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00206968_0x206968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209B38u; }
        if (ctx->pc != 0x209B38u) { return; }
    }
    ctx->pc = 0x209B38u;
    // 0x209b38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x209b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209b3c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x209b3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209b40: 0xc081a18  jal         func_206860
    ctx->pc = 0x209B40u;
    SET_GPR_U32(ctx, 31, 0x209B48u);
    ctx->pc = 0x209B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209B40u;
            // 0x209b44: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x206860u;
    if (runtime->hasFunction(0x206860u)) {
        auto targetFn = runtime->lookupFunction(0x206860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209B48u; }
        if (ctx->pc != 0x209B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00206860_0x206860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209B48u; }
        if (ctx->pc != 0x209B48u) { return; }
    }
    ctx->pc = 0x209B48u;
    // 0x209b48: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x209B48u;
    {
        const bool branch_taken_0x209b48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x209B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209B48u;
            // 0x209b4c: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209b48) {
            ctx->pc = 0x209B60u;
            goto label_209b60;
        }
    }
    ctx->pc = 0x209B50u;
    // 0x209b50: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x209b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x209b54: 0xc04c4ec  jal         func_1313B0
    ctx->pc = 0x209B54u;
    SET_GPR_U32(ctx, 31, 0x209B5Cu);
    ctx->pc = 0x209B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209B54u;
            // 0x209b58: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1313B0u;
    if (runtime->hasFunction(0x1313B0u)) {
        auto targetFn = runtime->lookupFunction(0x1313B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209B5Cu; }
        if (ctx->pc != 0x209B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001313B0_0x1313b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209B5Cu; }
        if (ctx->pc != 0x209B5Cu) { return; }
    }
    ctx->pc = 0x209B5Cu;
    // 0x209b5c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x209b5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_209b60:
    // 0x209b60: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x209b60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x209b64: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x209b64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209b68: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x209b68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209b6c: 0x3e00008  jr          $ra
    ctx->pc = 0x209B6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209B6Cu;
            // 0x209b70: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x209480u: goto label_209480;
            case 0x2094F0u: goto label_2094f0;
            case 0x2094F8u: goto label_2094f8;
            case 0x2094FCu: goto label_2094fc;
            case 0x209550u: goto label_209550;
            case 0x209564u: goto label_209564;
            case 0x2095C8u: goto label_2095c8;
            case 0x2095CCu: goto label_2095cc;
            case 0x2096F0u: goto label_2096f0;
            case 0x209740u: goto label_209740;
            case 0x209770u: goto label_209770;
            case 0x20981Cu: goto label_20981c;
            case 0x209884u: goto label_209884;
            case 0x2098E8u: goto label_2098e8;
            case 0x209950u: goto label_209950;
            case 0x209954u: goto label_209954;
            case 0x2099A8u: goto label_2099a8;
            case 0x2099ACu: goto label_2099ac;
            case 0x209A20u: goto label_209a20;
            case 0x209A24u: goto label_209a24;
            case 0x209A68u: goto label_209a68;
            case 0x209B08u: goto label_209b08;
            case 0x209B0Cu: goto label_209b0c;
            case 0x209B60u: goto label_209b60;
            case 0x209BC8u: goto label_209bc8;
            case 0x209BCCu: goto label_209bcc;
            case 0x209BF0u: goto label_209bf0;
            case 0x209BF4u: goto label_209bf4;
            case 0x209C18u: goto label_209c18;
            case 0x209CB0u: goto label_209cb0;
            case 0x209CB4u: goto label_209cb4;
            case 0x209D08u: goto label_209d08;
            case 0x209D68u: goto label_209d68;
            case 0x209D6Cu: goto label_209d6c;
            case 0x209D90u: goto label_209d90;
            case 0x209D94u: goto label_209d94;
            case 0x209DB8u: goto label_209db8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x209B74u;
    // 0x209b74: 0x0  nop
    ctx->pc = 0x209b74u;
    // NOP
    // 0x209b78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x209b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x209b7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x209b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x209b80: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x209b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x209b84: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x209b84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209b88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x209b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x209b8c: 0x8e250060  lw          $a1, 0x60($s1)
    ctx->pc = 0x209b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x209b90: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x209b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x209b94: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x209B94u;
    {
        const bool branch_taken_0x209b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x209B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209B94u;
            // 0x209b98: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209b94) {
            ctx->pc = 0x209BCCu;
            goto label_209bcc;
        }
    }
    ctx->pc = 0x209B9Cu;
    // 0x209b9c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x209b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x209ba0: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x209ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x209ba4: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x209ba4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x209ba8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x209ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x209bac: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x209bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x209bb0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x209bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x209bb4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x209bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x209bb8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x209bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x209bbc: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x209BBCu;
    {
        const bool branch_taken_0x209bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x209BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209BBCu;
            // 0x209bc0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209bbc) {
            ctx->pc = 0x209BC8u;
            goto label_209bc8;
        }
    }
    ctx->pc = 0x209BC4u;
    // 0x209bc4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x209bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_209bc8:
    // 0x209bc8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x209bc8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_209bcc:
    // 0x209bcc: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x209BCCu;
    {
        const bool branch_taken_0x209bcc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x209BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209BCCu;
            // 0x209bd0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209bcc) {
            ctx->pc = 0x209BF0u;
            goto label_209bf0;
        }
    }
    ctx->pc = 0x209BD4u;
    // 0x209bd4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x209bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x209bd8: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x209bd8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x209bdc: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x209bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x209be0: 0x40f809  jalr        $v0
    ctx->pc = 0x209BE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x209BE8u);
        ctx->pc = 0x209BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209BE0u;
            // 0x209be4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x209BE8u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x209480u: goto label_209480;
            case 0x2094F0u: goto label_2094f0;
            case 0x2094F8u: goto label_2094f8;
            case 0x2094FCu: goto label_2094fc;
            case 0x209550u: goto label_209550;
            case 0x209564u: goto label_209564;
            case 0x2095C8u: goto label_2095c8;
            case 0x2095CCu: goto label_2095cc;
            case 0x2096F0u: goto label_2096f0;
            case 0x209740u: goto label_209740;
            case 0x209770u: goto label_209770;
            case 0x20981Cu: goto label_20981c;
            case 0x209884u: goto label_209884;
            case 0x2098E8u: goto label_2098e8;
            case 0x209950u: goto label_209950;
            case 0x209954u: goto label_209954;
            case 0x2099A8u: goto label_2099a8;
            case 0x2099ACu: goto label_2099ac;
            case 0x209A20u: goto label_209a20;
            case 0x209A24u: goto label_209a24;
            case 0x209A68u: goto label_209a68;
            case 0x209B08u: goto label_209b08;
            case 0x209B0Cu: goto label_209b0c;
            case 0x209B60u: goto label_209b60;
            case 0x209BC8u: goto label_209bc8;
            case 0x209BCCu: goto label_209bcc;
            case 0x209BF0u: goto label_209bf0;
            case 0x209BF4u: goto label_209bf4;
            case 0x209C18u: goto label_209c18;
            case 0x209CB0u: goto label_209cb0;
            case 0x209CB4u: goto label_209cb4;
            case 0x209D08u: goto label_209d08;
            case 0x209D68u: goto label_209d68;
            case 0x209D6Cu: goto label_209d6c;
            case 0x209D90u: goto label_209d90;
            case 0x209D94u: goto label_209d94;
            case 0x209DB8u: goto label_209db8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x209BE8u; }
            if (ctx->pc != 0x209BE8u) { return; }
        }
        }
    }
    ctx->pc = 0x209BE8u;
    // 0x209be8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x209BE8u;
    {
        const bool branch_taken_0x209be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209BECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209BE8u;
            // 0x209bec: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209be8) {
            ctx->pc = 0x209BF4u;
            goto label_209bf4;
        }
    }
    ctx->pc = 0x209BF0u;
label_209bf0:
    // 0x209bf0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_209bf4:
    // 0x209bf4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x209bf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209bf8: 0xc081a18  jal         func_206860
    ctx->pc = 0x209BF8u;
    SET_GPR_U32(ctx, 31, 0x209C00u);
    ctx->pc = 0x209BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209BF8u;
            // 0x209bfc: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x206860u;
    if (runtime->hasFunction(0x206860u)) {
        auto targetFn = runtime->lookupFunction(0x206860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209C00u; }
        if (ctx->pc != 0x209C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00206860_0x206860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209C00u; }
        if (ctx->pc != 0x209C00u) { return; }
    }
    ctx->pc = 0x209C00u;
    // 0x209c00: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x209C00u;
    {
        const bool branch_taken_0x209c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x209C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209C00u;
            // 0x209c04: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209c00) {
            ctx->pc = 0x209C18u;
            goto label_209c18;
        }
    }
    ctx->pc = 0x209C08u;
    // 0x209c08: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x209c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x209c0c: 0xc04c4c0  jal         func_131300
    ctx->pc = 0x209C0Cu;
    SET_GPR_U32(ctx, 31, 0x209C14u);
    ctx->pc = 0x209C10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209C0Cu;
            // 0x209c10: 0x24050027  addiu       $a1, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131300u;
    if (runtime->hasFunction(0x131300u)) {
        auto targetFn = runtime->lookupFunction(0x131300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209C14u; }
        if (ctx->pc != 0x209C14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131300_0x131300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209C14u; }
        if (ctx->pc != 0x209C14u) { return; }
    }
    ctx->pc = 0x209C14u;
    // 0x209c14: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x209c14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_209c18:
    // 0x209c18: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x209c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x209c1c: 0x24429ab0  addiu       $v0, $v0, -0x6550
    ctx->pc = 0x209c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941360));
    // 0x209c20: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x209c20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x209c24: 0xa623002a  sh          $v1, 0x2A($s1)
    ctx->pc = 0x209c24u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x209c28: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x209c28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x209c2c: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x209c2cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x209c30: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x209c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x209c34: 0x40f809  jalr        $v0
    ctx->pc = 0x209C34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x209C3Cu);
        ctx->pc = 0x209C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209C34u;
            // 0x209c38: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x209C3Cu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x209480u: goto label_209480;
            case 0x2094F0u: goto label_2094f0;
            case 0x2094F8u: goto label_2094f8;
            case 0x2094FCu: goto label_2094fc;
            case 0x209550u: goto label_209550;
            case 0x209564u: goto label_209564;
            case 0x2095C8u: goto label_2095c8;
            case 0x2095CCu: goto label_2095cc;
            case 0x2096F0u: goto label_2096f0;
            case 0x209740u: goto label_209740;
            case 0x209770u: goto label_209770;
            case 0x20981Cu: goto label_20981c;
            case 0x209884u: goto label_209884;
            case 0x2098E8u: goto label_2098e8;
            case 0x209950u: goto label_209950;
            case 0x209954u: goto label_209954;
            case 0x2099A8u: goto label_2099a8;
            case 0x2099ACu: goto label_2099ac;
            case 0x209A20u: goto label_209a20;
            case 0x209A24u: goto label_209a24;
            case 0x209A68u: goto label_209a68;
            case 0x209B08u: goto label_209b08;
            case 0x209B0Cu: goto label_209b0c;
            case 0x209B60u: goto label_209b60;
            case 0x209BC8u: goto label_209bc8;
            case 0x209BCCu: goto label_209bcc;
            case 0x209BF0u: goto label_209bf0;
            case 0x209BF4u: goto label_209bf4;
            case 0x209C18u: goto label_209c18;
            case 0x209CB0u: goto label_209cb0;
            case 0x209CB4u: goto label_209cb4;
            case 0x209D08u: goto label_209d08;
            case 0x209D68u: goto label_209d68;
            case 0x209D6Cu: goto label_209d6c;
            case 0x209D90u: goto label_209d90;
            case 0x209D94u: goto label_209d94;
            case 0x209DB8u: goto label_209db8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x209C3Cu; }
            if (ctx->pc != 0x209C3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x209C3Cu;
    // 0x209c3c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x209c3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209c40: 0xc081a44  jal         func_206910
    ctx->pc = 0x209C40u;
    SET_GPR_U32(ctx, 31, 0x209C48u);
    ctx->pc = 0x209C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209C40u;
            // 0x209c44: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x206910u;
    if (runtime->hasFunction(0x206910u)) {
        auto targetFn = runtime->lookupFunction(0x206910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209C48u; }
        if (ctx->pc != 0x209C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00206910_0x206910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209C48u; }
        if (ctx->pc != 0x209C48u) { return; }
    }
    ctx->pc = 0x209C48u;
    // 0x209c48: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x209c48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x209c4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x209c4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209c50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x209c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209c54: 0x3e00008  jr          $ra
    ctx->pc = 0x209C54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209C54u;
            // 0x209c58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x209480u: goto label_209480;
            case 0x2094F0u: goto label_2094f0;
            case 0x2094F8u: goto label_2094f8;
            case 0x2094FCu: goto label_2094fc;
            case 0x209550u: goto label_209550;
            case 0x209564u: goto label_209564;
            case 0x2095C8u: goto label_2095c8;
            case 0x2095CCu: goto label_2095cc;
            case 0x2096F0u: goto label_2096f0;
            case 0x209740u: goto label_209740;
            case 0x209770u: goto label_209770;
            case 0x20981Cu: goto label_20981c;
            case 0x209884u: goto label_209884;
            case 0x2098E8u: goto label_2098e8;
            case 0x209950u: goto label_209950;
            case 0x209954u: goto label_209954;
            case 0x2099A8u: goto label_2099a8;
            case 0x2099ACu: goto label_2099ac;
            case 0x209A20u: goto label_209a20;
            case 0x209A24u: goto label_209a24;
            case 0x209A68u: goto label_209a68;
            case 0x209B08u: goto label_209b08;
            case 0x209B0Cu: goto label_209b0c;
            case 0x209B60u: goto label_209b60;
            case 0x209BC8u: goto label_209bc8;
            case 0x209BCCu: goto label_209bcc;
            case 0x209BF0u: goto label_209bf0;
            case 0x209BF4u: goto label_209bf4;
            case 0x209C18u: goto label_209c18;
            case 0x209CB0u: goto label_209cb0;
            case 0x209CB4u: goto label_209cb4;
            case 0x209D08u: goto label_209d08;
            case 0x209D68u: goto label_209d68;
            case 0x209D6Cu: goto label_209d6c;
            case 0x209D90u: goto label_209d90;
            case 0x209D94u: goto label_209d94;
            case 0x209DB8u: goto label_209db8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x209C5Cu;
    // 0x209c5c: 0x0  nop
    ctx->pc = 0x209c5cu;
    // NOP
    // 0x209c60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x209c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x209c64: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x209c64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x209c68: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x209c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x209c6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x209c6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209c70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x209c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x209c74: 0x8e250060  lw          $a1, 0x60($s1)
    ctx->pc = 0x209c74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x209c78: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x209c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x209c7c: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x209C7Cu;
    {
        const bool branch_taken_0x209c7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x209C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209C7Cu;
            // 0x209c80: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209c7c) {
            ctx->pc = 0x209CB4u;
            goto label_209cb4;
        }
    }
    ctx->pc = 0x209C84u;
    // 0x209c84: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x209c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x209c88: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x209c88u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x209c8c: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x209c8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x209c90: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x209c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x209c94: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x209c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x209c98: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x209c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x209c9c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x209c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x209ca0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x209ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x209ca4: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x209CA4u;
    {
        const bool branch_taken_0x209ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x209CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209CA4u;
            // 0x209ca8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209ca4) {
            ctx->pc = 0x209CB0u;
            goto label_209cb0;
        }
    }
    ctx->pc = 0x209CACu;
    // 0x209cac: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x209cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_209cb0:
    // 0x209cb0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x209cb0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_209cb4:
    // 0x209cb4: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x209CB4u;
    {
        const bool branch_taken_0x209cb4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x209CB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209CB4u;
            // 0x209cb8: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209cb4) {
            ctx->pc = 0x209D08u;
            goto label_209d08;
        }
    }
    ctx->pc = 0x209CBCu;
    // 0x209cbc: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x209cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x209cc0: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x209cc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x209cc4: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x209cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x209cc8: 0x40f809  jalr        $v0
    ctx->pc = 0x209CC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x209CD0u);
        ctx->pc = 0x209CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209CC8u;
            // 0x209ccc: 0x642021  addu        $a0, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x209CD0u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x209480u: goto label_209480;
            case 0x2094F0u: goto label_2094f0;
            case 0x2094F8u: goto label_2094f8;
            case 0x2094FCu: goto label_2094fc;
            case 0x209550u: goto label_209550;
            case 0x209564u: goto label_209564;
            case 0x2095C8u: goto label_2095c8;
            case 0x2095CCu: goto label_2095cc;
            case 0x2096F0u: goto label_2096f0;
            case 0x209740u: goto label_209740;
            case 0x209770u: goto label_209770;
            case 0x20981Cu: goto label_20981c;
            case 0x209884u: goto label_209884;
            case 0x2098E8u: goto label_2098e8;
            case 0x209950u: goto label_209950;
            case 0x209954u: goto label_209954;
            case 0x2099A8u: goto label_2099a8;
            case 0x2099ACu: goto label_2099ac;
            case 0x209A20u: goto label_209a20;
            case 0x209A24u: goto label_209a24;
            case 0x209A68u: goto label_209a68;
            case 0x209B08u: goto label_209b08;
            case 0x209B0Cu: goto label_209b0c;
            case 0x209B60u: goto label_209b60;
            case 0x209BC8u: goto label_209bc8;
            case 0x209BCCu: goto label_209bcc;
            case 0x209BF0u: goto label_209bf0;
            case 0x209BF4u: goto label_209bf4;
            case 0x209C18u: goto label_209c18;
            case 0x209CB0u: goto label_209cb0;
            case 0x209CB4u: goto label_209cb4;
            case 0x209D08u: goto label_209d08;
            case 0x209D68u: goto label_209d68;
            case 0x209D6Cu: goto label_209d6c;
            case 0x209D90u: goto label_209d90;
            case 0x209D94u: goto label_209d94;
            case 0x209DB8u: goto label_209db8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x209CD0u; }
            if (ctx->pc != 0x209CD0u) { return; }
        }
        }
    }
    ctx->pc = 0x209CD0u;
    // 0x209cd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x209cd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209cd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x209cd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209cd8: 0xc081a5a  jal         func_206968
    ctx->pc = 0x209CD8u;
    SET_GPR_U32(ctx, 31, 0x209CE0u);
    ctx->pc = 0x209CDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209CD8u;
            // 0x209cdc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x206968u;
    if (runtime->hasFunction(0x206968u)) {
        auto targetFn = runtime->lookupFunction(0x206968u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209CE0u; }
        if (ctx->pc != 0x209CE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00206968_0x206968(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209CE0u; }
        if (ctx->pc != 0x209CE0u) { return; }
    }
    ctx->pc = 0x209CE0u;
    // 0x209ce0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x209ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209ce4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x209ce4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209ce8: 0xc081a18  jal         func_206860
    ctx->pc = 0x209CE8u;
    SET_GPR_U32(ctx, 31, 0x209CF0u);
    ctx->pc = 0x209CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209CE8u;
            // 0x209cec: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x206860u;
    if (runtime->hasFunction(0x206860u)) {
        auto targetFn = runtime->lookupFunction(0x206860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209CF0u; }
        if (ctx->pc != 0x209CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00206860_0x206860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209CF0u; }
        if (ctx->pc != 0x209CF0u) { return; }
    }
    ctx->pc = 0x209CF0u;
    // 0x209cf0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x209CF0u;
    {
        const bool branch_taken_0x209cf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x209CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209CF0u;
            // 0x209cf4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209cf0) {
            ctx->pc = 0x209D08u;
            goto label_209d08;
        }
    }
    ctx->pc = 0x209CF8u;
    // 0x209cf8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x209cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x209cfc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x209cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209d00: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x209d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x209d04: 0xac4301c8  sw          $v1, 0x1C8($v0)
    ctx->pc = 0x209d04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 456), GPR_U32(ctx, 3));
label_209d08:
    // 0x209d08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x209d08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209d0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x209d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209d10: 0x3e00008  jr          $ra
    ctx->pc = 0x209D10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209D14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209D10u;
            // 0x209d14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x209480u: goto label_209480;
            case 0x2094F0u: goto label_2094f0;
            case 0x2094F8u: goto label_2094f8;
            case 0x2094FCu: goto label_2094fc;
            case 0x209550u: goto label_209550;
            case 0x209564u: goto label_209564;
            case 0x2095C8u: goto label_2095c8;
            case 0x2095CCu: goto label_2095cc;
            case 0x2096F0u: goto label_2096f0;
            case 0x209740u: goto label_209740;
            case 0x209770u: goto label_209770;
            case 0x20981Cu: goto label_20981c;
            case 0x209884u: goto label_209884;
            case 0x2098E8u: goto label_2098e8;
            case 0x209950u: goto label_209950;
            case 0x209954u: goto label_209954;
            case 0x2099A8u: goto label_2099a8;
            case 0x2099ACu: goto label_2099ac;
            case 0x209A20u: goto label_209a20;
            case 0x209A24u: goto label_209a24;
            case 0x209A68u: goto label_209a68;
            case 0x209B08u: goto label_209b08;
            case 0x209B0Cu: goto label_209b0c;
            case 0x209B60u: goto label_209b60;
            case 0x209BC8u: goto label_209bc8;
            case 0x209BCCu: goto label_209bcc;
            case 0x209BF0u: goto label_209bf0;
            case 0x209BF4u: goto label_209bf4;
            case 0x209C18u: goto label_209c18;
            case 0x209CB0u: goto label_209cb0;
            case 0x209CB4u: goto label_209cb4;
            case 0x209D08u: goto label_209d08;
            case 0x209D68u: goto label_209d68;
            case 0x209D6Cu: goto label_209d6c;
            case 0x209D90u: goto label_209d90;
            case 0x209D94u: goto label_209d94;
            case 0x209DB8u: goto label_209db8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x209D18u;
    // 0x209d18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x209d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x209d1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x209d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x209d20: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x209d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x209d24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x209d24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209d28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x209d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x209d2c: 0x8e250060  lw          $a1, 0x60($s1)
    ctx->pc = 0x209d2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x209d30: 0x30a20007  andi        $v0, $a1, 0x7
    ctx->pc = 0x209d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)7);
    // 0x209d34: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x209D34u;
    {
        const bool branch_taken_0x209d34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x209D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209D34u;
            // 0x209d38: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209d34) {
            ctx->pc = 0x209D6Cu;
            goto label_209d6c;
        }
    }
    ctx->pc = 0x209D3Cu;
    // 0x209d3c: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x209d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x209d40: 0x51dc2  srl         $v1, $a1, 23
    ctx->pc = 0x209d40u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 23));
    // 0x209d44: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x209d44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x209d48: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x209d48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x209d4c: 0x8c42d2ac  lw          $v0, -0x2D54($v0)
    ctx->pc = 0x209d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955692)));
    // 0x209d50: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x209d50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x209d54: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x209d54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x209d58: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x209d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x209d5c: 0x14450002  bne         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x209D5Cu;
    {
        const bool branch_taken_0x209d5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x209D60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209D5Cu;
            // 0x209d60: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209d5c) {
            ctx->pc = 0x209D68u;
            goto label_209d68;
        }
    }
    ctx->pc = 0x209D64u;
    // 0x209d64: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x209d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_209d68:
    // 0x209d68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x209d68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_209d6c:
    // 0x209d6c: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x209D6Cu;
    {
        const bool branch_taken_0x209d6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x209D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209D6Cu;
            // 0x209d70: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209d6c) {
            ctx->pc = 0x209D90u;
            goto label_209d90;
        }
    }
    ctx->pc = 0x209D74u;
    // 0x209d74: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x209d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x209d78: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x209d78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x209d7c: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x209d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x209d80: 0x40f809  jalr        $v0
    ctx->pc = 0x209D80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x209D88u);
        ctx->pc = 0x209D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209D80u;
            // 0x209d84: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x209D88u;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x209480u: goto label_209480;
            case 0x2094F0u: goto label_2094f0;
            case 0x2094F8u: goto label_2094f8;
            case 0x2094FCu: goto label_2094fc;
            case 0x209550u: goto label_209550;
            case 0x209564u: goto label_209564;
            case 0x2095C8u: goto label_2095c8;
            case 0x2095CCu: goto label_2095cc;
            case 0x2096F0u: goto label_2096f0;
            case 0x209740u: goto label_209740;
            case 0x209770u: goto label_209770;
            case 0x20981Cu: goto label_20981c;
            case 0x209884u: goto label_209884;
            case 0x2098E8u: goto label_2098e8;
            case 0x209950u: goto label_209950;
            case 0x209954u: goto label_209954;
            case 0x2099A8u: goto label_2099a8;
            case 0x2099ACu: goto label_2099ac;
            case 0x209A20u: goto label_209a20;
            case 0x209A24u: goto label_209a24;
            case 0x209A68u: goto label_209a68;
            case 0x209B08u: goto label_209b08;
            case 0x209B0Cu: goto label_209b0c;
            case 0x209B60u: goto label_209b60;
            case 0x209BC8u: goto label_209bc8;
            case 0x209BCCu: goto label_209bcc;
            case 0x209BF0u: goto label_209bf0;
            case 0x209BF4u: goto label_209bf4;
            case 0x209C18u: goto label_209c18;
            case 0x209CB0u: goto label_209cb0;
            case 0x209CB4u: goto label_209cb4;
            case 0x209D08u: goto label_209d08;
            case 0x209D68u: goto label_209d68;
            case 0x209D6Cu: goto label_209d6c;
            case 0x209D90u: goto label_209d90;
            case 0x209D94u: goto label_209d94;
            case 0x209DB8u: goto label_209db8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x209D88u; }
            if (ctx->pc != 0x209D88u) { return; }
        }
        }
    }
    ctx->pc = 0x209D88u;
    // 0x209d88: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x209D88u;
    {
        const bool branch_taken_0x209d88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x209D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209D88u;
            // 0x209d8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209d88) {
            ctx->pc = 0x209D94u;
            goto label_209d94;
        }
    }
    ctx->pc = 0x209D90u;
label_209d90:
    // 0x209d90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x209d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_209d94:
    // 0x209d94: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x209d94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209d98: 0xc081a18  jal         func_206860
    ctx->pc = 0x209D98u;
    SET_GPR_U32(ctx, 31, 0x209DA0u);
    ctx->pc = 0x209D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209D98u;
            // 0x209d9c: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x206860u;
    if (runtime->hasFunction(0x206860u)) {
        auto targetFn = runtime->lookupFunction(0x206860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209DA0u; }
        if (ctx->pc != 0x209DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00206860_0x206860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209DA0u; }
        if (ctx->pc != 0x209DA0u) { return; }
    }
    ctx->pc = 0x209DA0u;
    // 0x209da0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x209DA0u;
    {
        const bool branch_taken_0x209da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x209DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209DA0u;
            // 0x209da4: 0x3c020021  lui         $v0, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209da0) {
            ctx->pc = 0x209DB8u;
            goto label_209db8;
        }
    }
    ctx->pc = 0x209DA8u;
    // 0x209da8: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x209da8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    // 0x209dac: 0x8c42cd58  lw          $v0, -0x32A8($v0)
    ctx->pc = 0x209dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954328)));
    // 0x209db0: 0xac4001c8  sw          $zero, 0x1C8($v0)
    ctx->pc = 0x209db0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 456), GPR_U32(ctx, 0));
    // 0x209db4: 0x3c020021  lui         $v0, 0x21
    ctx->pc = 0x209db4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33 << 16));
label_209db8:
    // 0x209db8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x209db8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x209dbc: 0x24429c60  addiu       $v0, $v0, -0x63A0
    ctx->pc = 0x209dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941792));
    // 0x209dc0: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x209dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x209dc4: 0xa623002a  sh          $v1, 0x2A($s1)
    ctx->pc = 0x209dc4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 42), (uint16_t)GPR_U32(ctx, 3));
    // 0x209dc8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x209dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x209dcc: 0x84440060  lh          $a0, 0x60($v0)
    ctx->pc = 0x209dccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x209dd0: 0x8c420064  lw          $v0, 0x64($v0)
    ctx->pc = 0x209dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 100)));
    // 0x209dd4: 0x40f809  jalr        $v0
    ctx->pc = 0x209DD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x209DDCu);
        ctx->pc = 0x209DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209DD4u;
            // 0x209dd8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x209DDCu;
        } else {
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x209480u: goto label_209480;
            case 0x2094F0u: goto label_2094f0;
            case 0x2094F8u: goto label_2094f8;
            case 0x2094FCu: goto label_2094fc;
            case 0x209550u: goto label_209550;
            case 0x209564u: goto label_209564;
            case 0x2095C8u: goto label_2095c8;
            case 0x2095CCu: goto label_2095cc;
            case 0x2096F0u: goto label_2096f0;
            case 0x209740u: goto label_209740;
            case 0x209770u: goto label_209770;
            case 0x20981Cu: goto label_20981c;
            case 0x209884u: goto label_209884;
            case 0x2098E8u: goto label_2098e8;
            case 0x209950u: goto label_209950;
            case 0x209954u: goto label_209954;
            case 0x2099A8u: goto label_2099a8;
            case 0x2099ACu: goto label_2099ac;
            case 0x209A20u: goto label_209a20;
            case 0x209A24u: goto label_209a24;
            case 0x209A68u: goto label_209a68;
            case 0x209B08u: goto label_209b08;
            case 0x209B0Cu: goto label_209b0c;
            case 0x209B60u: goto label_209b60;
            case 0x209BC8u: goto label_209bc8;
            case 0x209BCCu: goto label_209bcc;
            case 0x209BF0u: goto label_209bf0;
            case 0x209BF4u: goto label_209bf4;
            case 0x209C18u: goto label_209c18;
            case 0x209CB0u: goto label_209cb0;
            case 0x209CB4u: goto label_209cb4;
            case 0x209D08u: goto label_209d08;
            case 0x209D68u: goto label_209d68;
            case 0x209D6Cu: goto label_209d6c;
            case 0x209D90u: goto label_209d90;
            case 0x209D94u: goto label_209d94;
            case 0x209DB8u: goto label_209db8;
            default: break;
        }
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x209DDCu; }
            if (ctx->pc != 0x209DDCu) { return; }
        }
        }
    }
    ctx->pc = 0x209DDCu;
    // 0x209ddc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x209ddcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209de0: 0xc081a44  jal         func_206910
    ctx->pc = 0x209DE0u;
    SET_GPR_U32(ctx, 31, 0x209DE8u);
    ctx->pc = 0x209DE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209DE0u;
            // 0x209de4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x206910u;
    if (runtime->hasFunction(0x206910u)) {
        auto targetFn = runtime->lookupFunction(0x206910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209DE8u; }
        if (ctx->pc != 0x209DE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00206910_0x206910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209DE8u; }
        if (ctx->pc != 0x209DE8u) { return; }
    }
    ctx->pc = 0x209DE8u;
    // 0x209de8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x209de8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x209dec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x209decu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209df0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x209df0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x209df4: 0x3e00008  jr          $ra
    ctx->pc = 0x209DF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209DF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209DF4u;
            // 0x209df8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x209480u: goto label_209480;
            case 0x2094F0u: goto label_2094f0;
            case 0x2094F8u: goto label_2094f8;
            case 0x2094FCu: goto label_2094fc;
            case 0x209550u: goto label_209550;
            case 0x209564u: goto label_209564;
            case 0x2095C8u: goto label_2095c8;
            case 0x2095CCu: goto label_2095cc;
            case 0x2096F0u: goto label_2096f0;
            case 0x209740u: goto label_209740;
            case 0x209770u: goto label_209770;
            case 0x20981Cu: goto label_20981c;
            case 0x209884u: goto label_209884;
            case 0x2098E8u: goto label_2098e8;
            case 0x209950u: goto label_209950;
            case 0x209954u: goto label_209954;
            case 0x2099A8u: goto label_2099a8;
            case 0x2099ACu: goto label_2099ac;
            case 0x209A20u: goto label_209a20;
            case 0x209A24u: goto label_209a24;
            case 0x209A68u: goto label_209a68;
            case 0x209B08u: goto label_209b08;
            case 0x209B0Cu: goto label_209b0c;
            case 0x209B60u: goto label_209b60;
            case 0x209BC8u: goto label_209bc8;
            case 0x209BCCu: goto label_209bcc;
            case 0x209BF0u: goto label_209bf0;
            case 0x209BF4u: goto label_209bf4;
            case 0x209C18u: goto label_209c18;
            case 0x209CB0u: goto label_209cb0;
            case 0x209CB4u: goto label_209cb4;
            case 0x209D08u: goto label_209d08;
            case 0x209D68u: goto label_209d68;
            case 0x209D6Cu: goto label_209d6c;
            case 0x209D90u: goto label_209d90;
            case 0x209D94u: goto label_209d94;
            case 0x209DB8u: goto label_209db8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x209DFCu;
    // 0x209dfc: 0x0  nop
    ctx->pc = 0x209dfcu;
    // NOP
}
