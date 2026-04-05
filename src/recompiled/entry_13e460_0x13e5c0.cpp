#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_13e460
// Address: 0x13e460 - 0x13e5c0
void entry_13e460_0x13e5c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_13e460_0x13e5c0");
#endif

    ctx->pc = 0x13e460u;

    // 0x13e460: 0x240300b1  addiu       $v1, $zero, 0xB1
    ctx->pc = 0x13e460u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 177));
    // 0x13e464: 0x240700a9  addiu       $a3, $zero, 0xA9
    ctx->pc = 0x13e464u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
    // 0x13e468: 0xa3001b  divu        $zero, $a1, $v1
    ctx->pc = 0x13e468u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 5) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,5); } }
    // 0x13e46c: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x13E46Cu;
    {
        const bool branch_taken_0x13e46c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e46c) {
            ctx->pc = 0x13E470u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13E46Cu;
            // 0x13e470: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x13E474u;
            goto label_13e474;
        }
    }
    ctx->pc = 0x13E474u;
label_13e474:
    // 0x13e474: 0x240200b1  addiu       $v0, $zero, 0xB1
    ctx->pc = 0x13e474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 177));
    // 0x13e478: 0x240500b1  addiu       $a1, $zero, 0xB1
    ctx->pc = 0x13e478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 177));
    // 0x13e47c: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x13e47cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e480: 0x240200a9  addiu       $v0, $zero, 0xA9
    ctx->pc = 0x13e480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
    // 0x13e484: 0x240d0001  addiu       $t5, $zero, 0x1
    ctx->pc = 0x13e484u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13e488: 0x6012  mflo        $t4
    ctx->pc = 0x13e488u;
    SET_GPR_U64(ctx, 12, ctx->lo);
    // 0x13e48c: 0x4010  mfhi        $t0
    ctx->pc = 0x13e48cu;
    SET_GPR_U64(ctx, 8, ctx->hi);
    // 0x13e490: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x13e490u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x13e494: 0xc7001b  divu        $zero, $a2, $a3
    ctx->pc = 0x13e494u;
    { uint32_t divisor = GPR_U32(ctx, 7); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
    // 0x13e498: 0x240600b2  addiu       $a2, $zero, 0xB2
    ctx->pc = 0x13e498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 178));
    // 0x13e49c: 0x5012  mflo        $t2
    ctx->pc = 0x13e49cu;
    SET_GPR_U64(ctx, 10, ctx->lo);
    // 0x13e4a0: 0x4810  mfhi        $t1
    ctx->pc = 0x13e4a0u;
    SET_GPR_U64(ctx, 9, ctx->hi);
    // 0x13e4a4: 0x183001b  divu        $zero, $t4, $v1
    ctx->pc = 0x13e4a4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 12) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,12); } }
    // 0x13e4a8: 0x1010  mfhi        $v0
    ctx->pc = 0x13e4a8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x13e4ac: 0x146001b  divu        $zero, $t2, $a2
    ctx->pc = 0x13e4acu;
    { uint32_t divisor = GPR_U32(ctx, 6); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x13e4b0: 0x244e0002  addiu       $t6, $v0, 0x2
    ctx->pc = 0x13e4b0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    // 0x13e4b4: 0x1810  mfhi        $v1
    ctx->pc = 0x13e4b4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x13e4b8: 0x246a0001  addiu       $t2, $v1, 0x1
    ctx->pc = 0x13e4b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x13e4bc: 0x0  nop
    ctx->pc = 0x13e4bcu;
    // NOP
label_13e4c0:
    // 0x13e4c0: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x13e4c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13e4c4: 0x240c0017  addiu       $t4, $zero, 0x17
    ctx->pc = 0x13e4c4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x13e4c8: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x13e4c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x13e4cc: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13e4ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_13e4d0:
    // 0x13e4d0: 0x1c81818  mult        $v1, $t6, $t0
    ctx->pc = 0x13e4d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 14) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x13e4d4: 0x24020035  addiu       $v0, $zero, 0x35
    ctx->pc = 0x13e4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x13e4d8: 0x240500b3  addiu       $a1, $zero, 0xB3
    ctx->pc = 0x13e4d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 179));
    // 0x13e4dc: 0x1221018  mult        $v0, $t1, $v0
    ctx->pc = 0x13e4dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x13e4e0: 0x240600a9  addiu       $a2, $zero, 0xA9
    ctx->pc = 0x13e4e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 169));
    // 0x13e4e4: 0x100702d  daddu       $t6, $t0, $zero
    ctx->pc = 0x13e4e4u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e4e8: 0x140402d  daddu       $t0, $t2, $zero
    ctx->pc = 0x13e4e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e4ec: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x13e4ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x13e4f0: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x13e4f0u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x13e4f4: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x13E4F4u;
    {
        const bool branch_taken_0x13e4f4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e4f4) {
            ctx->pc = 0x13E4F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13E4F4u;
            // 0x13e4f8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x13E4FCu;
            goto label_13e4fc;
        }
    }
    ctx->pc = 0x13E4FCu;
label_13e4fc:
    // 0x13e4fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13e4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13e500: 0x240400b3  addiu       $a0, $zero, 0xB3
    ctx->pc = 0x13e500u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 179));
    // 0x13e504: 0x1810  mfhi        $v1
    ctx->pc = 0x13e504u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x13e508: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x13e508u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x13e50c: 0x1010  mfhi        $v0
    ctx->pc = 0x13e50cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x13e510: 0x6a1818  mult        $v1, $v1, $t2
    ctx->pc = 0x13e510u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x13e514: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x13e514u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e518: 0x65001a  div         $zero, $v1, $a1
    ctx->pc = 0x13e518u;
    { int32_t divisor = GPR_S32(ctx, 5);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x13e51c: 0x1010  mfhi        $v0
    ctx->pc = 0x13e51cu;
    SET_GPR_U64(ctx, 2, ctx->hi);
    // 0x13e520: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x13e520u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13e524: 0x12a1818  mult        $v1, $t1, $t2
    ctx->pc = 0x13e524u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 10); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x13e528: 0xe3382a  slt         $a3, $a3, $v1
    ctx->pc = 0x13e528u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13e52c: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x13e52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
    // 0x13e530: 0x67100b  movn        $v0, $v1, $a3
    ctx->pc = 0x13e530u;
    if (GPR_U64(ctx, 7) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
    // 0x13e534: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x13e534u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x13e538: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x13e538u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x13e53c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x13e53cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13e540: 0x28630020  slti        $v1, $v1, 0x20
    ctx->pc = 0x13e540u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x13e544: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x13E544u;
    {
        const bool branch_taken_0x13e544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13e544) {
            ctx->pc = 0x13E548u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13E544u;
            // 0x13e548: 0x46011080  add.s       $f2, $f2, $f1 (Delay Slot)
        ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
        ctx->in_delay_slot = false;
            ctx->pc = 0x13E54Cu;
            goto label_13e54c;
        }
    }
    ctx->pc = 0x13E54Cu;
label_13e54c:
    // 0x13e54c: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x13e54cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x13e550: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13e550u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13e554: 0x258cffff  addiu       $t4, $t4, -0x1
    ctx->pc = 0x13e554u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4294967295));
    // 0x13e558: 0x581ffdd  bgez        $t4, . + 4 + (-0x23 << 2)
    ctx->pc = 0x13E558u;
    {
        const bool branch_taken_0x13e558 = (GPR_S32(ctx, 12) >= 0);
        ctx->pc = 0x13E55Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E558u;
            // 0x13e55c: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e558) {
            ctx->pc = 0x13E4D0u;
            runtime->cooperativeGuestYield();
            goto label_13e4d0;
        }
    }
    ctx->pc = 0x13E560u;
    // 0x13e560: 0xd1080  sll         $v0, $t5, 2
    ctx->pc = 0x13e560u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 13), 2));
    // 0x13e564: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x13e564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x13e568: 0x25ad0001  addiu       $t5, $t5, 0x1
    ctx->pc = 0x13e568u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 1));
    // 0x13e56c: 0xe4420014  swc1        $f2, 0x14($v0)
    ctx->pc = 0x13e56cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x13e570: 0x29a20062  slti        $v0, $t5, 0x62
    ctx->pc = 0x13e570u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)98) ? 1 : 0);
    // 0x13e574: 0x1440ffd2  bnez        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x13E574u;
    {
        const bool branch_taken_0x13e574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x13E578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E574u;
            // 0x13e578: 0x24030061  addiu       $v1, $zero, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13e574) {
            ctx->pc = 0x13E4C0u;
            runtime->cooperativeGuestYield();
            goto label_13e4c0;
        }
    }
    ctx->pc = 0x13E57Cu;
    // 0x13e57c: 0x3c013cb0  lui         $at, 0x3CB0
    ctx->pc = 0x13e57cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15536 << 16));
    // 0x13e580: 0x3421f880  ori         $at, $at, 0xF880
    ctx->pc = 0x13e580u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)63616);
    // 0x13e584: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x13e584u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x13e588: 0x3c013ee9  lui         $at, 0x3EE9
    ctx->pc = 0x13e588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16105 << 16));
    // 0x13e58c: 0x34219762  ori         $at, $at, 0x9762
    ctx->pc = 0x13e58cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)38754);
    // 0x13e590: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x13e590u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x13e594: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x13e594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x13e598: 0x3c013f7f  lui         $at, 0x3F7F
    ctx->pc = 0x13e598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16255 << 16));
    // 0x13e59c: 0x3421fffd  ori         $at, $at, 0xFFFD
    ctx->pc = 0x13e59cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65533);
    // 0x13e5a0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x13e5a0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13e5a4: 0xad620004  sw          $v0, 0x4($t3)
    ctx->pc = 0x13e5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 2));
    // 0x13e5a8: 0xe5620008  swc1        $f2, 0x8($t3)
    ctx->pc = 0x13e5a8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 8), bits); }
    // 0x13e5ac: 0xe561000c  swc1        $f1, 0xC($t3)
    ctx->pc = 0x13e5acu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 12), bits); }
    // 0x13e5b0: 0xe5600010  swc1        $f0, 0x10($t3)
    ctx->pc = 0x13e5b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 16), bits); }
    // 0x13e5b4: 0x3e00008  jr          $ra
    ctx->pc = 0x13E5B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13E5B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13E5B4u;
            // 0x13e5b8: 0xad630000  sw          $v1, 0x0($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x13E474u: goto label_13e474;
            case 0x13E4C0u: goto label_13e4c0;
            case 0x13E4D0u: goto label_13e4d0;
            case 0x13E4FCu: goto label_13e4fc;
            case 0x13E54Cu: goto label_13e54c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x13E5BCu;
    // 0x13e5bc: 0x0  nop
    ctx->pc = 0x13e5bcu;
    // NOP
}
