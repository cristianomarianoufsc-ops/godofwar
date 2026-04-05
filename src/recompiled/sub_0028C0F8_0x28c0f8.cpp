#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028C0F8
// Address: 0x28c0f8 - 0x28cff0
void sub_0028C0F8_0x28c0f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028C0F8_0x28c0f8");
#endif

    ctx->pc = 0x28c0f8u;

    // 0x28c0f8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x28c0f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x28c0fc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x28c0fcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c100: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x28c100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x28c104: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x28c104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x28c108: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28c108u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c10c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x28c10cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x28c110: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x28c110u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c114: 0xafa60008  sw          $a2, 0x8($sp)
    ctx->pc = 0x28c114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 6));
    // 0x28c118: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x28c118u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c11c: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x28c11cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x28c120: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28c120u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c124: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x28c124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x28c128: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x28c128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x28c12c: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x28c12cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x28c130: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x28c130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x28c134: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x28c134u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x28c138: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x28c138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x28c13c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x28c13cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
label_28c140:
    // 0x28c140: 0x82a30000  lb          $v1, 0x0($s5)
    ctx->pc = 0x28c140u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x28c144: 0x2c62002e  sltiu       $v0, $v1, 0x2E
    ctx->pc = 0x28c144u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)46) ? 1 : 0);
    // 0x28c148: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x28C148u;
    {
        const bool branch_taken_0x28c148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C14Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C148u;
            // 0x28c14c: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c148) {
            ctx->pc = 0x28C194u;
            goto label_28c194;
        }
    }
    ctx->pc = 0x28C150u;
    // 0x28c150: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28c150u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28c154: 0x24425fe0  addiu       $v0, $v0, 0x5FE0
    ctx->pc = 0x28c154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24544));
    // 0x28c158: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28c158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28c15c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x28c15cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28c160: 0x800008  jr          $a0
    ctx->pc = 0x28C160u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28C168u: goto label_28c168;
            case 0x28C170u: goto label_28c170;
            case 0x28C188u: goto label_28c188;
            case 0x28C190u: goto label_28c190;
            case 0x28C3ACu: goto label_28c3ac;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28C168u;
label_28c168:
    // 0x28c168: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28c168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28c16c: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x28c16cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_28c170:
    // 0x28c170: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x28c170u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x28c174: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x28c174u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x28c178: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x28C178u;
    {
        const bool branch_taken_0x28c178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28c178) {
            ctx->pc = 0x28C17Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28C178u;
            // 0x28c17c: 0x82a30000  lb          $v1, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28C194u;
            goto label_28c194;
        }
    }
    ctx->pc = 0x28C180u;
    // 0x28c180: 0x10000386  b           . + 4 + (0x386 << 2)
    ctx->pc = 0x28C180u;
    {
        const bool branch_taken_0x28c180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C180u;
            // 0x28c184: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c180) {
            ctx->pc = 0x28CF9Cu;
            goto label_28cf9c;
        }
    }
    ctx->pc = 0x28C188u;
label_28c188:
    // 0x28c188: 0x1000ffed  b           . + 4 + (-0x13 << 2)
    ctx->pc = 0x28C188u;
    {
        const bool branch_taken_0x28c188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C18Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C188u;
            // 0x28c18c: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c188) {
            ctx->pc = 0x28C140u;
            runtime->cooperativeGuestYield();
            goto label_28c140;
        }
    }
    ctx->pc = 0x28C190u;
label_28c190:
    // 0x28c190: 0x82a30000  lb          $v1, 0x0($s5)
    ctx->pc = 0x28c190u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_28c194:
    // 0x28c194: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x28c194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x28c198: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x28C198u;
    {
        const bool branch_taken_0x28c198 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28C19Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C198u;
            // 0x28c19c: 0x92a40000  lbu         $a0, 0x0($s5) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c198) {
            ctx->pc = 0x28C1C8u;
            goto label_28c1c8;
        }
    }
    ctx->pc = 0x28C1A0u;
    // 0x28c1a0: 0x240a0001  addiu       $t2, $zero, 0x1
    ctx->pc = 0x28c1a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28c1a4: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x28c1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_28c1a8:
    // 0x28c1a8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x28c1a8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x28c1ac: 0x82a30000  lb          $v1, 0x0($s5)
    ctx->pc = 0x28c1acu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x28c1b0: 0x0  nop
    ctx->pc = 0x28c1b0u;
    // NOP
    // 0x28c1b4: 0x0  nop
    ctx->pc = 0x28c1b4u;
    // NOP
    // 0x28c1b8: 0x1064fffb  beq         $v1, $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x28C1B8u;
    {
        const bool branch_taken_0x28c1b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x28C1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C1B8u;
            // 0x28c1bc: 0x92a20000  lbu         $v0, 0x0($s5) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c1b8) {
            ctx->pc = 0x28C1A8u;
            runtime->cooperativeGuestYield();
            goto label_28c1a8;
        }
    }
    ctx->pc = 0x28C1C0u;
    // 0x28c1c0: 0x10600376  beqz        $v1, . + 4 + (0x376 << 2)
    ctx->pc = 0x28C1C0u;
    {
        const bool branch_taken_0x28c1c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C1C0u;
            // 0x28c1c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c1c0) {
            ctx->pc = 0x28CF9Cu;
            goto label_28cf9c;
        }
    }
    ctx->pc = 0x28C1C8u;
label_28c1c8:
    // 0x28c1c8: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x28c1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x28c1cc: 0xafb50018  sw          $s5, 0x18($sp)
    ctx->pc = 0x28c1ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 21));
    // 0x28c1d0: 0x22603  sra         $a0, $v0, 24
    ctx->pc = 0x28c1d0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 24));
    // 0x28c1d4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28c1d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c1d8: 0xafa00020  sw          $zero, 0x20($sp)
    ctx->pc = 0x28c1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
    // 0x28c1dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x28c1dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c1e0: 0x28820030  slti        $v0, $a0, 0x30
    ctx->pc = 0x28c1e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x28c1e4: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x28C1E4u;
    {
        const bool branch_taken_0x28c1e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C1E4u;
            // 0x28c1e8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c1e4) {
            ctx->pc = 0x28C258u;
            goto label_28c258;
        }
    }
    ctx->pc = 0x28C1ECu;
    // 0x28c1ec: 0x2882003a  slti        $v0, $a0, 0x3A
    ctx->pc = 0x28c1ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x28c1f0: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x28C1F0u;
    {
        const bool branch_taken_0x28c1f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C1F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C1F0u;
            // 0x28c1f4: 0x2402002e  addiu       $v0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c1f0) {
            ctx->pc = 0x28C25Cu;
            goto label_28c25c;
        }
    }
    ctx->pc = 0x28C1F8u;
    // 0x28c1f8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x28c1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x28c1fc: 0x2a820009  slti        $v0, $s4, 0x9
    ctx->pc = 0x28c1fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)9) ? 1 : 0);
label_28c200:
    // 0x28c200: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28C200u;
    {
        const bool branch_taken_0x28c200 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C200u;
            // 0x28c204: 0x8fa70020  lw          $a3, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c200) {
            ctx->pc = 0x28C21Cu;
            goto label_28c21c;
        }
    }
    ctx->pc = 0x28C208u;
    // 0x28c208: 0xe33818  mult        $a3, $a3, $v1
    ctx->pc = 0x28c208u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
    // 0x28c20c: 0xe41021  addu        $v0, $a3, $a0
    ctx->pc = 0x28c20cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x28c210: 0x2442ffd0  addiu       $v0, $v0, -0x30
    ctx->pc = 0x28c210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
    // 0x28c214: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28C214u;
    {
        const bool branch_taken_0x28c214 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C218u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C214u;
            // 0x28c218: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c214) {
            ctx->pc = 0x28C238u;
            goto label_28c238;
        }
    }
    ctx->pc = 0x28C21Cu;
label_28c21c:
    // 0x28c21c: 0x2a820010  slti        $v0, $s4, 0x10
    ctx->pc = 0x28c21cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x28c220: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28C220u;
    {
        const bool branch_taken_0x28c220 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C220u;
            // 0x28c224: 0x1210b8  dsll        $v0, $s2, 2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << 2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c220) {
            ctx->pc = 0x28C238u;
            goto label_28c238;
        }
    }
    ctx->pc = 0x28C228u;
    // 0x28c228: 0x52102d  daddu       $v0, $v0, $s2
    ctx->pc = 0x28c228u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 18));
    // 0x28c22c: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x28c22cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x28c230: 0x82102d  daddu       $v0, $a0, $v0
    ctx->pc = 0x28c230u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
    // 0x28c234: 0x6452ffd0  daddiu      $s2, $v0, -0x30
    ctx->pc = 0x28c234u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967248);
label_28c238:
    // 0x28c238: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x28c238u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x28c23c: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x28c23cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x28c240: 0x28820030  slti        $v0, $a0, 0x30
    ctx->pc = 0x28c240u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x28c244: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28C244u;
    {
        const bool branch_taken_0x28c244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C244u;
            // 0x28c248: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c244) {
            ctx->pc = 0x28C258u;
            goto label_28c258;
        }
    }
    ctx->pc = 0x28C24Cu;
    // 0x28c24c: 0x2882003a  slti        $v0, $a0, 0x3A
    ctx->pc = 0x28c24cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x28c250: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x28C250u;
    {
        const bool branch_taken_0x28c250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C250u;
            // 0x28c254: 0x2a820009  slti        $v0, $s4, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c250) {
            ctx->pc = 0x28C200u;
            runtime->cooperativeGuestYield();
            goto label_28c200;
        }
    }
    ctx->pc = 0x28C258u;
label_28c258:
    // 0x28c258: 0x2402002e  addiu       $v0, $zero, 0x2E
    ctx->pc = 0x28c258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
label_28c25c:
    // 0x28c25c: 0x14820047  bne         $a0, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x28C25Cu;
    {
        const bool branch_taken_0x28c25c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x28C260u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C25Cu;
            // 0x28c260: 0x280f02d  daddu       $fp, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c25c) {
            ctx->pc = 0x28C37Cu;
            goto label_28c37c;
        }
    }
    ctx->pc = 0x28C264u;
    // 0x28c264: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x28c264u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x28c268: 0x16800040  bnez        $s4, . + 4 + (0x40 << 2)
    ctx->pc = 0x28C268u;
    {
        const bool branch_taken_0x28c268 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C26Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C268u;
            // 0x28c26c: 0x82a40000  lb          $a0, 0x0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c268) {
            ctx->pc = 0x28C36Cu;
            goto label_28c36c;
        }
    }
    ctx->pc = 0x28C270u;
    // 0x28c270: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x28c270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x28c274: 0x54820009  bnel        $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28C274u;
    {
        const bool branch_taken_0x28c274 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x28c274) {
            ctx->pc = 0x28C278u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28C274u;
            // 0x28c278: 0x2482ffcf  addiu       $v0, $a0, -0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28C29Cu;
            goto label_28c29c;
        }
    }
    ctx->pc = 0x28C27Cu;
    // 0x28c27c: 0x0  nop
    ctx->pc = 0x28c27cu;
    // NOP
label_28c280:
    // 0x28c280: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x28c280u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x28c284: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x28c284u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x28c288: 0x0  nop
    ctx->pc = 0x28c288u;
    // NOP
    // 0x28c28c: 0x0  nop
    ctx->pc = 0x28c28cu;
    // NOP
    // 0x28c290: 0x1082fffb  beq         $a0, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x28C290u;
    {
        const bool branch_taken_0x28c290 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x28C294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C290u;
            // 0x28c294: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c290) {
            ctx->pc = 0x28C280u;
            runtime->cooperativeGuestYield();
            goto label_28c280;
        }
    }
    ctx->pc = 0x28C298u;
    // 0x28c298: 0x2482ffcf  addiu       $v0, $a0, -0x31
    ctx->pc = 0x28c298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
label_28c29c:
    // 0x28c29c: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x28c29cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x28c2a0: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x28C2A0u;
    {
        const bool branch_taken_0x28c2a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C2A0u;
            // 0x28c2a4: 0x24020065  addiu       $v0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c2a0) {
            ctx->pc = 0x28C380u;
            goto label_28c380;
        }
    }
    ctx->pc = 0x28C2A8u;
    // 0x28c2a8: 0xc0482d  daddu       $t1, $a2, $zero
    ctx->pc = 0x28c2a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c2ac: 0xafb50018  sw          $s5, 0x18($sp)
    ctx->pc = 0x28c2acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 21));
    // 0x28c2b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28c2b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c2b4: 0x26a80001  addiu       $t0, $s5, 0x1
    ctx->pc = 0x28c2b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_28c2b8:
    // 0x28c2b8: 0x2484ffd0  addiu       $a0, $a0, -0x30
    ctx->pc = 0x28c2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x28c2bc: 0x10800029  beqz        $a0, . + 4 + (0x29 << 2)
    ctx->pc = 0x28C2BCu;
    {
        const bool branch_taken_0x28c2bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C2C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C2BCu;
            // 0x28c2c0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c2bc) {
            ctx->pc = 0x28C364u;
            goto label_28c364;
        }
    }
    ctx->pc = 0x28C2C4u;
    // 0x28c2c4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x28c2c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28c2c8: 0xe6102a  slt         $v0, $a3, $a2
    ctx->pc = 0x28c2c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x28c2cc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x28C2CCu;
    {
        const bool branch_taken_0x28c2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C2D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C2CCu;
            // 0x28c2d0: 0x1264821  addu        $t1, $t1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c2cc) {
            ctx->pc = 0x28C31Cu;
            goto label_28c31c;
        }
    }
    ctx->pc = 0x28C2D4u;
    // 0x28c2d4: 0x24c7ffff  addiu       $a3, $a2, -0x1
    ctx->pc = 0x28c2d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x28c2d8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x28c2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x28c2dc: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x28c2dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28c2e0:
    // 0x28c2e0: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x28c2e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x28c2e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28C2E4u;
    {
        const bool branch_taken_0x28c2e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C2E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C2E4u;
            // 0x28c2e8: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c2e4) {
            ctx->pc = 0x28C2FCu;
            goto label_28c2fc;
        }
    }
    ctx->pc = 0x28C2ECu;
    // 0x28c2ec: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x28c2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28c2f0: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x28c2f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28c2f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28C2F4u;
    {
        const bool branch_taken_0x28c2f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C2F4u;
            // 0x28c2f8: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c2f4) {
            ctx->pc = 0x28C310u;
            goto label_28c310;
        }
    }
    ctx->pc = 0x28C2FCu;
label_28c2fc:
    // 0x28c2fc: 0x2a820011  slti        $v0, $s4, 0x11
    ctx->pc = 0x28c2fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x28c300: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28C300u;
    {
        const bool branch_taken_0x28c300 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C300u;
            // 0x28c304: 0x1210b8  dsll        $v0, $s2, 2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << 2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c300) {
            ctx->pc = 0x28C310u;
            goto label_28c310;
        }
    }
    ctx->pc = 0x28C308u;
    // 0x28c308: 0x52102d  daddu       $v0, $v0, $s2
    ctx->pc = 0x28c308u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 18));
    // 0x28c30c: 0x29078  dsll        $s2, $v0, 1
    ctx->pc = 0x28c30cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) << 1);
label_28c310:
    // 0x28c310: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x28c310u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x28c314: 0x14e0fff2  bnez        $a3, . + 4 + (-0xE << 2)
    ctx->pc = 0x28C314u;
    {
        const bool branch_taken_0x28c314 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C314u;
            // 0x28c318: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c314) {
            ctx->pc = 0x28C2E0u;
            runtime->cooperativeGuestYield();
            goto label_28c2e0;
        }
    }
    ctx->pc = 0x28C31Cu;
label_28c31c:
    // 0x28c31c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x28c31cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c320: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x28c320u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x28c324: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28C324u;
    {
        const bool branch_taken_0x28c324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C324u;
            // 0x28c328: 0x26940001  addiu       $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c324) {
            ctx->pc = 0x28C348u;
            goto label_28c348;
        }
    }
    ctx->pc = 0x28C32Cu;
    // 0x28c32c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x28c32cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28c330: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x28c330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x28c334: 0x800013  mtlo        $a0
    ctx->pc = 0x28c334u;
    ctx->lo = GPR_U64(ctx, 4);
    // 0x28c338: 0x70620000  madd        $zero, $v1, $v0
    ctx->pc = 0x28c338u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
    // 0x28c33c: 0x1812  mflo        $v1
    ctx->pc = 0x28c33cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x28c340: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28C340u;
    {
        const bool branch_taken_0x28c340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C340u;
            // 0x28c344: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c340) {
            ctx->pc = 0x28C360u;
            goto label_28c360;
        }
    }
    ctx->pc = 0x28C348u;
label_28c348:
    // 0x28c348: 0x2a820011  slti        $v0, $s4, 0x11
    ctx->pc = 0x28c348u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x28c34c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28C34Cu;
    {
        const bool branch_taken_0x28c34c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C34Cu;
            // 0x28c350: 0x1210b8  dsll        $v0, $s2, 2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << 2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c34c) {
            ctx->pc = 0x28C360u;
            goto label_28c360;
        }
    }
    ctx->pc = 0x28C354u;
    // 0x28c354: 0x52102d  daddu       $v0, $v0, $s2
    ctx->pc = 0x28c354u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 18));
    // 0x28c358: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x28c358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x28c35c: 0x82902d  daddu       $s2, $a0, $v0
    ctx->pc = 0x28c35cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
label_28c360:
    // 0x28c360: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28c360u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28c364:
    // 0x28c364: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x28c364u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c368: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x28c368u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_28c36c:
    // 0x28c36c: 0x2482ffd0  addiu       $v0, $a0, -0x30
    ctx->pc = 0x28c36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
    // 0x28c370: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x28c370u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x28c374: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x28C374u;
    {
        const bool branch_taken_0x28c374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C374u;
            // 0x28c378: 0x26a80001  addiu       $t0, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c374) {
            ctx->pc = 0x28C2B8u;
            runtime->cooperativeGuestYield();
            goto label_28c2b8;
        }
    }
    ctx->pc = 0x28C37Cu;
label_28c37c:
    // 0x28c37c: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x28c37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_28c380:
    // 0x28c380: 0x10820004  beq         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28C380u;
    {
        const bool branch_taken_0x28c380 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x28C384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C380u;
            // 0x28c384: 0xffa00010  sd          $zero, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c380) {
            ctx->pc = 0x28C394u;
            goto label_28c394;
        }
    }
    ctx->pc = 0x28C388u;
    // 0x28c388: 0x24020045  addiu       $v0, $zero, 0x45
    ctx->pc = 0x28c388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x28c38c: 0x14820047  bne         $a0, $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x28C38Cu;
    {
        const bool branch_taken_0x28c38c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x28c38c) {
            ctx->pc = 0x28C4ACu;
            goto label_28c4ac;
        }
    }
    ctx->pc = 0x28C394u;
label_28c394:
    // 0x28c394: 0x56800007  bnel        $s4, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x28C394u;
    {
        const bool branch_taken_0x28c394 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x28c394) {
            ctx->pc = 0x28C398u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28C394u;
            // 0x28c398: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28C3B4u;
            goto label_28c3b4;
        }
    }
    ctx->pc = 0x28C39Cu;
    // 0x28c39c: 0x54c00005  bnel        $a2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28C39Cu;
    {
        const bool branch_taken_0x28c39c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x28c39c) {
            ctx->pc = 0x28C3A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28C39Cu;
            // 0x28c3a0: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28C3B4u;
            goto label_28c3b4;
        }
    }
    ctx->pc = 0x28C3A4u;
    // 0x28c3a4: 0x55400003  bnel        $t2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x28C3A4u;
    {
        const bool branch_taken_0x28c3a4 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x28c3a4) {
            ctx->pc = 0x28C3A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28C3A4u;
            // 0x28c3a8: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28C3B4u;
            goto label_28c3b4;
        }
    }
    ctx->pc = 0x28C3ACu;
label_28c3ac:
    // 0x28c3ac: 0x100002fb  b           . + 4 + (0x2FB << 2)
    ctx->pc = 0x28C3ACu;
    {
        const bool branch_taken_0x28c3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C3B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C3ACu;
            // 0x28c3b0: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c3ac) {
            ctx->pc = 0x28CF9Cu;
            goto label_28cf9c;
        }
    }
    ctx->pc = 0x28C3B4u;
label_28c3b4:
    // 0x28c3b4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x28c3b4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x28c3b8: 0x2402002b  addiu       $v0, $zero, 0x2B
    ctx->pc = 0x28c3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x28c3bc: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x28c3bcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x28c3c0: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28C3C0u;
    {
        const bool branch_taken_0x28c3c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x28C3C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C3C0u;
            // 0x28c3c4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c3c0) {
            ctx->pc = 0x28C3D8u;
            goto label_28c3d8;
        }
    }
    ctx->pc = 0x28C3C8u;
    // 0x28c3c8: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x28c3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x28c3cc: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28C3CCu;
    {
        const bool branch_taken_0x28c3cc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x28C3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C3CCu;
            // 0x28c3d0: 0x2482ffd0  addiu       $v0, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c3cc) {
            ctx->pc = 0x28C3E4u;
            goto label_28c3e4;
        }
    }
    ctx->pc = 0x28C3D4u;
    // 0x28c3d4: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x28c3d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28c3d8:
    // 0x28c3d8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x28c3d8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x28c3dc: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x28c3dcu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x28c3e0: 0x2482ffd0  addiu       $v0, $a0, -0x30
    ctx->pc = 0x28c3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
label_28c3e4:
    // 0x28c3e4: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x28c3e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x28c3e8: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x28C3E8u;
    {
        const bool branch_taken_0x28c3e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C3E8u;
            // 0x28c3ec: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c3e8) {
            ctx->pc = 0x28C4A8u;
            goto label_28c4a8;
        }
    }
    ctx->pc = 0x28C3F0u;
    // 0x28c3f0: 0x5482000a  bnel        $a0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x28C3F0u;
    {
        const bool branch_taken_0x28c3f0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x28c3f0) {
            ctx->pc = 0x28C3F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28C3F0u;
            // 0x28c3f4: 0x2482ffcf  addiu       $v0, $a0, -0x31 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28C41Cu;
            goto label_28c41c;
        }
    }
    ctx->pc = 0x28C3F8u;
    // 0x28c3f8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x28c3f8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x28c3fc: 0x0  nop
    ctx->pc = 0x28c3fcu;
    // NOP
label_28c400:
    // 0x28c400: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x28c400u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x28c404: 0x0  nop
    ctx->pc = 0x28c404u;
    // NOP
    // 0x28c408: 0x0  nop
    ctx->pc = 0x28c408u;
    // NOP
    // 0x28c40c: 0x0  nop
    ctx->pc = 0x28c40cu;
    // NOP
    // 0x28c410: 0x5082fffb  beql        $a0, $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x28C410u;
    {
        const bool branch_taken_0x28c410 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x28c410) {
            ctx->pc = 0x28C414u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28C410u;
            // 0x28c414: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28C400u;
            runtime->cooperativeGuestYield();
            goto label_28c400;
        }
    }
    ctx->pc = 0x28C418u;
    // 0x28c418: 0x2482ffcf  addiu       $v0, $a0, -0x31
    ctx->pc = 0x28c418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967247));
label_28c41c:
    // 0x28c41c: 0x2c420009  sltiu       $v0, $v0, 0x9
    ctx->pc = 0x28c41cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x28c420: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x28C420u;
    {
        const bool branch_taken_0x28c420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C420u;
            // 0x28c424: 0x2484ffd0  addiu       $a0, $a0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c420) {
            ctx->pc = 0x28C4A0u;
            goto label_28c4a0;
        }
    }
    ctx->pc = 0x28C428u;
    // 0x28c428: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x28c428u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c42c: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x28c42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
    // 0x28c430: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x28c430u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x28c434: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x28c434u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x28c438: 0x28820030  slti        $v0, $a0, 0x30
    ctx->pc = 0x28c438u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x28c43c: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x28C43Cu;
    {
        const bool branch_taken_0x28c43c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C43Cu;
            // 0x28c440: 0x2a71023  subu        $v0, $s5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c43c) {
            ctx->pc = 0x28C47Cu;
            goto label_28c47c;
        }
    }
    ctx->pc = 0x28C444u;
label_28c444:
    // 0x28c444: 0x2882003a  slti        $v0, $a0, 0x3A
    ctx->pc = 0x28c444u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)58) ? 1 : 0);
    // 0x28c448: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x28C448u;
    {
        const bool branch_taken_0x28c448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C44Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C448u;
            // 0x28c44c: 0xdfa30010  ld          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c448) {
            ctx->pc = 0x28C478u;
            goto label_28c478;
        }
    }
    ctx->pc = 0x28C450u;
    // 0x28c450: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x28c450u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x28c454: 0x310b8  dsll        $v0, $v1, 2
    ctx->pc = 0x28c454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 2);
    // 0x28c458: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x28c458u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x28c45c: 0x21078  dsll        $v0, $v0, 1
    ctx->pc = 0x28c45cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 1);
    // 0x28c460: 0x82102d  daddu       $v0, $a0, $v0
    ctx->pc = 0x28c460u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
    // 0x28c464: 0x82a40000  lb          $a0, 0x0($s5)
    ctx->pc = 0x28c464u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x28c468: 0x6442ffd0  daddiu      $v0, $v0, -0x30
    ctx->pc = 0x28c468u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967248);
    // 0x28c46c: 0x28830030  slti        $v1, $a0, 0x30
    ctx->pc = 0x28c46cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)48) ? 1 : 0);
    // 0x28c470: 0x1060fff4  beqz        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x28C470u;
    {
        const bool branch_taken_0x28c470 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C470u;
            // 0x28c474: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c470) {
            ctx->pc = 0x28C444u;
            runtime->cooperativeGuestYield();
            goto label_28c444;
        }
    }
    ctx->pc = 0x28C478u;
label_28c478:
    // 0x28c478: 0x2a71023  subu        $v0, $s5, $a3
    ctx->pc = 0x28c478u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
label_28c47c:
    // 0x28c47c: 0x3c040098  lui         $a0, 0x98
    ctx->pc = 0x28c47cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)152 << 16));
    // 0x28c480: 0x3484967f  ori         $a0, $a0, 0x967F
    ctx->pc = 0x28c480u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)38527);
    // 0x28c484: 0xdfa70010  ld          $a3, 0x10($sp)
    ctx->pc = 0x28c484u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28c488: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x28c488u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x28c48c: 0x82380a  movz        $a3, $a0, $v0
    ctx->pc = 0x28c48cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
    // 0x28c490: 0x7182f  dsubu       $v1, $zero, $a3
    ctx->pc = 0x28c490u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) - GPR_U64(ctx, 7));
    // 0x28c494: 0x68380b  movn        $a3, $v1, $t0
    ctx->pc = 0x28c494u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x28c498: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x28C498u;
    {
        const bool branch_taken_0x28c498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C498u;
            // 0x28c49c: 0xffa70010  sd          $a3, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c498) {
            ctx->pc = 0x28C4ACu;
            goto label_28c4ac;
        }
    }
    ctx->pc = 0x28C4A0u;
label_28c4a0:
    // 0x28c4a0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28C4A0u;
    {
        const bool branch_taken_0x28c4a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C4A0u;
            // 0x28c4a4: 0xffa00010  sd          $zero, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c4a0) {
            ctx->pc = 0x28C4ACu;
            goto label_28c4ac;
        }
    }
    ctx->pc = 0x28C4A8u;
label_28c4a8:
    // 0x28c4a8: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x28c4a8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28c4ac:
    // 0x28c4ac: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x28C4ACu;
    {
        const bool branch_taken_0x28c4ac = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C4B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C4ACu;
            // 0x28c4b0: 0xdfa30010  ld          $v1, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c4ac) {
            ctx->pc = 0x28C4C0u;
            goto label_28c4c0;
        }
    }
    ctx->pc = 0x28C4B4u;
    // 0x28c4b4: 0x2aa280b  movn        $a1, $s5, $t2
    ctx->pc = 0x28c4b4u;
    if (GPR_U64(ctx, 10) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 21));
    // 0x28c4b8: 0x100002b8  b           . + 4 + (0x2B8 << 2)
    ctx->pc = 0x28C4B8u;
    {
        const bool branch_taken_0x28c4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C4B8u;
            // 0x28c4bc: 0xa6a80a  movz        $s5, $a1, $a2 (Delay Slot)
        if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c4b8) {
            ctx->pc = 0x28CF9Cu;
            goto label_28cf9c;
        }
    }
    ctx->pc = 0x28C4C0u;
label_28c4c0:
    // 0x28c4c0: 0x2a820011  slti        $v0, $s4, 0x11
    ctx->pc = 0x28c4c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x28c4c4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x28c4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28c4c8: 0x24130010  addiu       $s3, $zero, 0x10
    ctx->pc = 0x28c4c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x28c4cc: 0x69182f  dsubu       $v1, $v1, $t1
    ctx->pc = 0x28c4ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 9));
    // 0x28c4d0: 0x282980b  movn        $s3, $s4, $v0
    ctx->pc = 0x28c4d0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 20));
    // 0x28c4d4: 0x3803c  dsll32      $s0, $v1, 0
    ctx->pc = 0x28c4d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 0));
    // 0x28c4d8: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x28c4d8u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x28c4dc: 0xc0a13cc  jal         func_284F30
    ctx->pc = 0x28C4DCu;
    SET_GPR_U32(ctx, 31, 0x28C4E4u);
    ctx->pc = 0x28C4E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C4DCu;
            // 0x28c4e0: 0xffa30010  sd          $v1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284F30u;
    if (runtime->hasFunction(0x284F30u)) {
        auto targetFn = runtime->lookupFunction(0x284F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C4E4u; }
        if (ctx->pc != 0x28C4E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284F30_0x284f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C4E4u; }
        if (ctx->pc != 0x28C4E4u) { return; }
    }
    ctx->pc = 0x28C4E4u;
    // 0x28c4e4: 0x29ef00a  movz        $fp, $s4, $fp
    ctx->pc = 0x28c4e4u;
    if (GPR_U64(ctx, 30) == 0) SET_GPR_VEC(ctx, 30, GPR_VEC(ctx, 20));
    // 0x28c4e8: 0x8fa70020  lw          $a3, 0x20($sp)
    ctx->pc = 0x28c4e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28c4ec: 0x4e10006  bgez        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x28C4ECu;
    {
        const bool branch_taken_0x28c4ec = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x28C4F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C4ECu;
            // 0x28c4f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c4ec) {
            ctx->pc = 0x28C508u;
            goto label_28c508;
        }
    }
    ctx->pc = 0x28C4F4u;
    // 0x28c4f4: 0x340583e0  ori         $a1, $zero, 0x83E0
    ctx->pc = 0x28c4f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33760);
    // 0x28c4f8: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x28c4f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x28c4fc: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x28C4FCu;
    SET_GPR_U32(ctx, 31, 0x28C504u);
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C504u; }
        if (ctx->pc != 0x28C504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C504u; }
        if (ctx->pc != 0x28C504u) { return; }
    }
    ctx->pc = 0x28C504u;
    // 0x28c504: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28c504u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c508:
    // 0x28c508: 0x2a62000a  slti        $v0, $s3, 0xA
    ctx->pc = 0x28c508u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x28c50c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x28C50Cu;
    {
        const bool branch_taken_0x28c50c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C50Cu;
            // 0x28c510: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c50c) {
            ctx->pc = 0x28C578u;
            goto label_28c578;
        }
    }
    ctx->pc = 0x28C514u;
    // 0x28c514: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x28c514u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x28c518: 0x2662fff7  addiu       $v0, $s3, -0x9
    ctx->pc = 0x28c518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967287));
    // 0x28c51c: 0x24636698  addiu       $v1, $v1, 0x6698
    ctx->pc = 0x28c51cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26264));
    // 0x28c520: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x28c520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28c524: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28c524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28c528: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x28c528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c52c: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x28C52Cu;
    SET_GPR_U32(ctx, 31, 0x28C534u);
    ctx->pc = 0x28C530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C52Cu;
            // 0x28c530: 0xdc440000  ld          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C534u; }
        if (ctx->pc != 0x28C534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C534u; }
        if (ctx->pc != 0x28C534u) { return; }
    }
    ctx->pc = 0x28C534u;
    // 0x28c534: 0x6400005  bltz        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x28C534u;
    {
        const bool branch_taken_0x28c534 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x28C538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C534u;
            // 0x28c538: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c534) {
            ctx->pc = 0x28C54Cu;
            goto label_28c54c;
        }
    }
    ctx->pc = 0x28C53Cu;
    // 0x28c53c: 0xc0a6bce  jal         func_29AF38
    ctx->pc = 0x28C53Cu;
    SET_GPR_U32(ctx, 31, 0x28C544u);
    ctx->pc = 0x28C540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C53Cu;
            // 0x28c540: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29AF38u;
    if (runtime->hasFunction(0x29AF38u)) {
        auto targetFn = runtime->lookupFunction(0x29AF38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C544u; }
        if (ctx->pc != 0x28C544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_29af38_0x29afd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C544u; }
        if (ctx->pc != 0x28C544u) { return; }
    }
    ctx->pc = 0x28C544u;
    // 0x28c544: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x28C544u;
    {
        const bool branch_taken_0x28c544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C544u;
            // 0x28c548: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c544) {
            ctx->pc = 0x28C56Cu;
            goto label_28c56c;
        }
    }
    ctx->pc = 0x28C54Cu;
label_28c54c:
    // 0x28c54c: 0x12107a  dsrl        $v0, $s2, 1
    ctx->pc = 0x28c54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) >> 1);
    // 0x28c550: 0x32440001  andi        $a0, $s2, 0x1
    ctx->pc = 0x28c550u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
    // 0x28c554: 0xc0a6bce  jal         func_29AF38
    ctx->pc = 0x28C554u;
    SET_GPR_U32(ctx, 31, 0x28C55Cu);
    ctx->pc = 0x28C558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C554u;
            // 0x28c558: 0x822025  or          $a0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29AF38u;
    if (runtime->hasFunction(0x29AF38u)) {
        auto targetFn = runtime->lookupFunction(0x29AF38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C55Cu; }
        if (ctx->pc != 0x28C55Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_29af38_0x29afd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C55Cu; }
        if (ctx->pc != 0x28C55Cu) { return; }
    }
    ctx->pc = 0x28C55Cu;
    // 0x28c55c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28c55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c560: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x28C560u;
    SET_GPR_U32(ctx, 31, 0x28C568u);
    ctx->pc = 0x28C564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C560u;
            // 0x28c564: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C568u; }
        if (ctx->pc != 0x28C568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C568u; }
        if (ctx->pc != 0x28C568u) { return; }
    }
    ctx->pc = 0x28C568u;
    // 0x28c568: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28c56c:
    // 0x28c56c: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x28C56Cu;
    SET_GPR_U32(ctx, 31, 0x28C574u);
    ctx->pc = 0x28C570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C56Cu;
            // 0x28c570: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C574u; }
        if (ctx->pc != 0x28C574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C574u; }
        if (ctx->pc != 0x28C574u) { return; }
    }
    ctx->pc = 0x28C574u;
    // 0x28c574: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28c574u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c578:
    // 0x28c578: 0x2a820010  slti        $v0, $s4, 0x10
    ctx->pc = 0x28c578u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x28c57c: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x28C57Cu;
    {
        const bool branch_taken_0x28c57c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C57Cu;
            // 0x28c580: 0xafa00038  sw          $zero, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c57c) {
            ctx->pc = 0x28C664u;
            goto label_28c664;
        }
    }
    ctx->pc = 0x28C584u;
    // 0x28c584: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x28c584u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28c588: 0x10400285  beqz        $v0, . + 4 + (0x285 << 2)
    ctx->pc = 0x28C588u;
    {
        const bool branch_taken_0x28c588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C58Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C588u;
            // 0x28c58c: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c588) {
            ctx->pc = 0x28CFA0u;
            goto label_28cfa0;
        }
    }
    ctx->pc = 0x28C590u;
    // 0x28c590: 0x18400025  blez        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x28C590u;
    {
        const bool branch_taken_0x28c590 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x28C594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C590u;
            // 0x28c594: 0x28420017  slti        $v0, $v0, 0x17 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)23) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c590) {
            ctx->pc = 0x28C628u;
            goto label_28c628;
        }
    }
    ctx->pc = 0x28C598u;
    // 0x28c598: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28C598u;
    {
        const bool branch_taken_0x28c598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C59Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C598u;
            // 0x28c59c: 0xdfa40010  ld          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c598) {
            ctx->pc = 0x28C5C0u;
            goto label_28c5c0;
        }
    }
    ctx->pc = 0x28C5A0u;
    // 0x28c5a0: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x28c5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x28c5a4: 0x24426698  addiu       $v0, $v0, 0x6698
    ctx->pc = 0x28c5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26264));
    // 0x28c5a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28c5a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c5ac: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x28c5acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x28c5b0: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x28c5b0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x28c5b4: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x28c5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x28c5b8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x28C5B8u;
    {
        const bool branch_taken_0x28c5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C5BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C5B8u;
            // 0x28c5bc: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c5b8) {
            ctx->pc = 0x28C618u;
            goto label_28c618;
        }
    }
    ctx->pc = 0x28C5C0u;
label_28c5c0:
    // 0x28c5c0: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x28c5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x28c5c4: 0x743823  subu        $a3, $v1, $s4
    ctx->pc = 0x28c5c4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x28c5c8: 0xdfa30010  ld          $v1, 0x10($sp)
    ctx->pc = 0x28c5c8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28c5cc: 0x24e20016  addiu       $v0, $a3, 0x16
    ctx->pc = 0x28c5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 22));
    // 0x28c5d0: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x28c5d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x28c5d4: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x28C5D4u;
    {
        const bool branch_taken_0x28c5d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C5D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C5D4u;
            // 0x28c5d8: 0x2931023  subu        $v0, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c5d4) {
            ctx->pc = 0x28C668u;
            goto label_28c668;
        }
    }
    ctx->pc = 0x28C5DCu;
    // 0x28c5dc: 0x3c10002c  lui         $s0, 0x2C
    ctx->pc = 0x28c5dcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)44 << 16));
    // 0x28c5e0: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x28c5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x28c5e4: 0x26106698  addiu       $s0, $s0, 0x6698
    ctx->pc = 0x28c5e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 26264));
    // 0x28c5e8: 0x67182f  dsubu       $v1, $v1, $a3
    ctx->pc = 0x28c5e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 7));
    // 0x28c5ec: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x28c5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x28c5f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28c5f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c5f4: 0xdc440000  ld          $a0, 0x0($v0)
    ctx->pc = 0x28c5f4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28c5f8: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x28C5F8u;
    SET_GPR_U32(ctx, 31, 0x28C600u);
    ctx->pc = 0x28C5FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C5F8u;
            // 0x28c5fc: 0xffa30010  sd          $v1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C600u; }
        if (ctx->pc != 0x28C600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C600u; }
        if (ctx->pc != 0x28C600u) { return; }
    }
    ctx->pc = 0x28C600u;
    // 0x28c600: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x28c600u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28c604: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28c604u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c608: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x28c608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x28c60c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x28c60cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x28c610: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x28c610u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x28c614: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x28c614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_28c618:
    // 0x28c618: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x28C618u;
    SET_GPR_U32(ctx, 31, 0x28C620u);
    ctx->pc = 0x28C61Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C618u;
            // 0x28c61c: 0xdc640000  ld          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C620u; }
        if (ctx->pc != 0x28C620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C620u; }
        if (ctx->pc != 0x28C620u) { return; }
    }
    ctx->pc = 0x28C620u;
    // 0x28c620: 0x1000025e  b           . + 4 + (0x25E << 2)
    ctx->pc = 0x28C620u;
    {
        const bool branch_taken_0x28c620 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C620u;
            // 0x28c624: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c620) {
            ctx->pc = 0x28CF9Cu;
            goto label_28cf9c;
        }
    }
    ctx->pc = 0x28C628u;
label_28c628:
    // 0x28c628: 0xdfa70010  ld          $a3, 0x10($sp)
    ctx->pc = 0x28c628u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28c62c: 0x28e2ffea  slti        $v0, $a3, -0x16
    ctx->pc = 0x28c62cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4294967274) ? 1 : 0);
    // 0x28c630: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x28C630u;
    {
        const bool branch_taken_0x28c630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C630u;
            // 0x28c634: 0x2931023  subu        $v0, $s4, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c630) {
            ctx->pc = 0x28C668u;
            goto label_28c668;
        }
    }
    ctx->pc = 0x28C638u;
    // 0x28c638: 0x7183c  dsll32      $v1, $a3, 0
    ctx->pc = 0x28c638u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) << (32 + 0));
    // 0x28c63c: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x28c63cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x28c640: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x28c640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
    // 0x28c644: 0x24426698  addiu       $v0, $v0, 0x6698
    ctx->pc = 0x28c644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26264));
    // 0x28c648: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x28c648u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x28c64c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x28c64cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x28c650: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c654: 0xc0a1318  jal         func_284C60
    ctx->pc = 0x28C654u;
    SET_GPR_U32(ctx, 31, 0x28C65Cu);
    ctx->pc = 0x28C658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C654u;
            // 0x28c658: 0xdc450000  ld          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284C60u;
    if (runtime->hasFunction(0x284C60u)) {
        auto targetFn = runtime->lookupFunction(0x284C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C65Cu; }
        if (ctx->pc != 0x28C65Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284C60_0x284c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C65Cu; }
        if (ctx->pc != 0x28C65Cu) { return; }
    }
    ctx->pc = 0x28C65Cu;
    // 0x28c65c: 0x1000024f  b           . + 4 + (0x24F << 2)
    ctx->pc = 0x28C65Cu;
    {
        const bool branch_taken_0x28c65c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C65Cu;
            // 0x28c660: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c65c) {
            ctx->pc = 0x28CF9Cu;
            goto label_28cf9c;
        }
    }
    ctx->pc = 0x28C664u;
label_28c664:
    // 0x28c664: 0x2931023  subu        $v0, $s4, $s3
    ctx->pc = 0x28c664u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
label_28c668:
    // 0x28c668: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x28c668u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x28c66c: 0x1a000050  blez        $s0, . + 4 + (0x50 << 2)
    ctx->pc = 0x28C66Cu;
    {
        const bool branch_taken_0x28c66c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x28C670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C66Cu;
            // 0x28c670: 0x3207000f  andi        $a3, $s0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c66c) {
            ctx->pc = 0x28C7B0u;
            goto label_28c7b0;
        }
    }
    ctx->pc = 0x28C674u;
    // 0x28c674: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x28C674u;
    {
        const bool branch_taken_0x28c674 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C678u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C674u;
            // 0x28c678: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c674) {
            ctx->pc = 0x28C698u;
            goto label_28c698;
        }
    }
    ctx->pc = 0x28C67Cu;
    // 0x28c67c: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x28c67cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x28c680: 0x24426698  addiu       $v0, $v0, 0x6698
    ctx->pc = 0x28c680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26264));
    // 0x28c684: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28c684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c688: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28c688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28c68c: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x28C68Cu;
    SET_GPR_U32(ctx, 31, 0x28C694u);
    ctx->pc = 0x28C690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C68Cu;
            // 0x28c690: 0xdc640000  ld          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C694u; }
        if (ctx->pc != 0x28C694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C694u; }
        if (ctx->pc != 0x28C694u) { return; }
    }
    ctx->pc = 0x28C694u;
    // 0x28c694: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28c694u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c698:
    // 0x28c698: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x28c698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x28c69c: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x28c69cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x28c6a0: 0x12000090  beqz        $s0, . + 4 + (0x90 << 2)
    ctx->pc = 0x28C6A0u;
    {
        const bool branch_taken_0x28c6a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C6A0u;
            // 0x28c6a4: 0x2a020135  slti        $v0, $s0, 0x135 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)309) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c6a0) {
            ctx->pc = 0x28C8E4u;
            goto label_28c8e4;
        }
    }
    ctx->pc = 0x28C6A8u;
    // 0x28c6a8: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x28C6A8u;
    {
        const bool branch_taken_0x28c6a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28c6a8) {
            ctx->pc = 0x28C6ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28C6A8u;
            // 0x28c6ac: 0x108103  sra         $s0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28C6D0u;
            goto label_28c6d0;
        }
    }
    ctx->pc = 0x28C6B0u;
label_28c6b0:
    // 0x28c6b0: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x28c6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_28c6b4:
    // 0x28c6b4: 0x3c03002c  lui         $v1, 0x2C
    ctx->pc = 0x28c6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)44 << 16));
    // 0x28c6b8: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x28c6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x28c6bc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x28c6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x28c6c0: 0x14400227  bnez        $v0, . + 4 + (0x227 << 2)
    ctx->pc = 0x28C6C0u;
    {
        const bool branch_taken_0x28c6c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C6C0u;
            // 0x28c6c4: 0xdc716638  ld          $s1, 0x6638($v1) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 3), 26168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c6c0) {
            ctx->pc = 0x28CF60u;
            goto label_28cf60;
        }
    }
    ctx->pc = 0x28C6C8u;
    // 0x28c6c8: 0x10000235  b           . + 4 + (0x235 << 2)
    ctx->pc = 0x28C6C8u;
    {
        const bool branch_taken_0x28c6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C6C8u;
            // 0x28c6cc: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c6c8) {
            ctx->pc = 0x28CFA0u;
            goto label_28cfa0;
        }
    }
    ctx->pc = 0x28C6D0u;
label_28c6d0:
    // 0x28c6d0: 0x12000084  beqz        $s0, . + 4 + (0x84 << 2)
    ctx->pc = 0x28C6D0u;
    {
        const bool branch_taken_0x28c6d0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C6D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C6D0u;
            // 0x28c6d4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c6d0) {
            ctx->pc = 0x28C8E4u;
            goto label_28c8e4;
        }
    }
    ctx->pc = 0x28C6D8u;
    // 0x28c6d8: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x28c6d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x28c6dc: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x28C6DCu;
    {
        const bool branch_taken_0x28c6dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C6E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C6DCu;
            // 0x28c6e0: 0x3c16002c  lui         $s6, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c6dc) {
            ctx->pc = 0x28C718u;
            goto label_28c718;
        }
    }
    ctx->pc = 0x28C6E4u;
    // 0x28c6e4: 0x26d26760  addiu       $s2, $s6, 0x6760
    ctx->pc = 0x28c6e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 26464));
label_28c6e8:
    // 0x28c6e8: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x28c6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x28c6ec: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x28C6ECu;
    {
        const bool branch_taken_0x28c6ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c6ec) {
            ctx->pc = 0x28C6F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28C6ECu;
            // 0x28c6f0: 0x108043  sra         $s0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28C708u;
            goto label_28c708;
        }
    }
    ctx->pc = 0x28C6F4u;
    // 0x28c6f4: 0xde440000  ld          $a0, 0x0($s2)
    ctx->pc = 0x28c6f4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28c6f8: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x28C6F8u;
    SET_GPR_U32(ctx, 31, 0x28C700u);
    ctx->pc = 0x28C6FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C6F8u;
            // 0x28c6fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C700u; }
        if (ctx->pc != 0x28C700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C700u; }
        if (ctx->pc != 0x28C700u) { return; }
    }
    ctx->pc = 0x28C700u;
    // 0x28c700: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28c700u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c704: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x28c704u;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
label_28c708:
    // 0x28c708: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x28c708u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x28c70c: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x28c70cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x28c710: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x28C710u;
    {
        const bool branch_taken_0x28c710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C710u;
            // 0x28c714: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c710) {
            ctx->pc = 0x28C6E8u;
            runtime->cooperativeGuestYield();
            goto label_28c6e8;
        }
    }
    ctx->pc = 0x28C718u;
label_28c718:
    // 0x28c718: 0x26c46760  addiu       $a0, $s6, 0x6760
    ctx->pc = 0x28c718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 26464));
    // 0x28c71c: 0x11283f  dsra32      $a1, $s1, 0
    ctx->pc = 0x28c71cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x28c720: 0x3c02fcb0  lui         $v0, 0xFCB0
    ctx->pc = 0x28c720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64688 << 16));
    // 0x28c724: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x28c724u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x28c728: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x28c728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x28c72c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x28c72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x28c730: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x28c730u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28c734: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x28c734u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x28c738: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x28c738u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28c73c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x28c73cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x28c740: 0x2308824  and         $s1, $s1, $s0
    ctx->pc = 0x28c740u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    // 0x28c744: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x28C744u;
    SET_GPR_U32(ctx, 31, 0x28C74Cu);
    ctx->pc = 0x28C748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C744u;
            // 0x28c748: 0x2252825  or          $a1, $s1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C74Cu; }
        if (ctx->pc != 0x28C74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C74Cu; }
        if (ctx->pc != 0x28C74Cu) { return; }
    }
    ctx->pc = 0x28C74Cu;
    // 0x28c74c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28c74cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c750: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x28c750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x28c754: 0x11203f  dsra32      $a0, $s1, 0
    ctx->pc = 0x28c754u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x28c758: 0x3c027ca0  lui         $v0, 0x7CA0
    ctx->pc = 0x28c758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31904 << 16));
    // 0x28c75c: 0x839024  and         $s2, $a0, $v1
    ctx->pc = 0x28c75cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x28c760: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x28c760u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x28c764: 0x1440ffd3  bnez        $v0, . + 4 + (-0x2D << 2)
    ctx->pc = 0x28C764u;
    {
        const bool branch_taken_0x28c764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C764u;
            // 0x28c768: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c764) {
            ctx->pc = 0x28C6B4u;
            runtime->cooperativeGuestYield();
            goto label_28c6b4;
        }
    }
    ctx->pc = 0x28C76Cu;
    // 0x28c76c: 0x3c027c90  lui         $v0, 0x7C90
    ctx->pc = 0x28c76cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)31888 << 16));
    // 0x28c770: 0x52102b  sltu        $v0, $v0, $s2
    ctx->pc = 0x28c770u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
    // 0x28c774: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28C774u;
    {
        const bool branch_taken_0x28c774 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C774u;
            // 0x28c778: 0x3c020350  lui         $v0, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)848 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c774) {
            ctx->pc = 0x28C79Cu;
            goto label_28c79c;
        }
    }
    ctx->pc = 0x28C77Cu;
    // 0x28c77c: 0x2308824  and         $s1, $s1, $s0
    ctx->pc = 0x28c77cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    // 0x28c780: 0x3402ffdf  ori         $v0, $zero, 0xFFDF
    ctx->pc = 0x28c780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65503);
    // 0x28c784: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x28c784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x28c788: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x28c788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x28c78c: 0x217f8  dsll        $v0, $v0, 31
    ctx->pc = 0x28c78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 31);
    // 0x28c790: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x28c790u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x28c794: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x28C794u;
    {
        const bool branch_taken_0x28c794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C794u;
            // 0x28c798: 0x2308825  or          $s1, $s1, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c794) {
            ctx->pc = 0x28C8E4u;
            goto label_28c8e4;
        }
    }
    ctx->pc = 0x28C79Cu;
label_28c79c:
    // 0x28c79c: 0x2308824  and         $s1, $s1, $s0
    ctx->pc = 0x28c79cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 16));
    // 0x28c7a0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x28c7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x28c7a4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x28c7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28c7a8: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x28C7A8u;
    {
        const bool branch_taken_0x28c7a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C7ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C7A8u;
            // 0x28c7ac: 0x2228825  or          $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c7a8) {
            ctx->pc = 0x28C8E4u;
            goto label_28c8e4;
        }
    }
    ctx->pc = 0x28C7B0u;
label_28c7b0:
    // 0x28c7b0: 0x601004d  bgez        $s0, . + 4 + (0x4D << 2)
    ctx->pc = 0x28C7B0u;
    {
        const bool branch_taken_0x28c7b0 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x28C7B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C7B0u;
            // 0x28c7b4: 0x8fa50018  lw          $a1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c7b0) {
            ctx->pc = 0x28C8E8u;
            goto label_28c8e8;
        }
    }
    ctx->pc = 0x28C7B8u;
    // 0x28c7b8: 0x108023  negu        $s0, $s0
    ctx->pc = 0x28c7b8u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 16)));
    // 0x28c7bc: 0x3207000f  andi        $a3, $s0, 0xF
    ctx->pc = 0x28c7bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)15);
    // 0x28c7c0: 0x10e00008  beqz        $a3, . + 4 + (0x8 << 2)
    ctx->pc = 0x28C7C0u;
    {
        const bool branch_taken_0x28c7c0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C7C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C7C0u;
            // 0x28c7c4: 0x3c02002c  lui         $v0, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c7c0) {
            ctx->pc = 0x28C7E4u;
            goto label_28c7e4;
        }
    }
    ctx->pc = 0x28C7C8u;
    // 0x28c7c8: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x28c7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x28c7cc: 0x24426698  addiu       $v0, $v0, 0x6698
    ctx->pc = 0x28c7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26264));
    // 0x28c7d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c7d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c7d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28c7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28c7d8: 0xc0a1318  jal         func_284C60
    ctx->pc = 0x28C7D8u;
    SET_GPR_U32(ctx, 31, 0x28C7E0u);
    ctx->pc = 0x28C7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C7D8u;
            // 0x28c7dc: 0xdc650000  ld          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284C60u;
    if (runtime->hasFunction(0x284C60u)) {
        auto targetFn = runtime->lookupFunction(0x284C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C7E0u; }
        if (ctx->pc != 0x28C7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284C60_0x284c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C7E0u; }
        if (ctx->pc != 0x28C7E0u) { return; }
    }
    ctx->pc = 0x28C7E0u;
    // 0x28c7e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28c7e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28c7e4:
    // 0x28c7e4: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x28c7e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x28c7e8: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x28c7e8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x28c7ec: 0x1200003d  beqz        $s0, . + 4 + (0x3D << 2)
    ctx->pc = 0x28C7ECu;
    {
        const bool branch_taken_0x28c7ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C7F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C7ECu;
            // 0x28c7f0: 0x108103  sra         $s0, $s0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c7ec) {
            ctx->pc = 0x28C8E4u;
            goto label_28c8e4;
        }
    }
    ctx->pc = 0x28C7F4u;
    // 0x28c7f4: 0x2a020020  slti        $v0, $s0, 0x20
    ctx->pc = 0x28c7f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x28c7f8: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x28C7F8u;
    {
        const bool branch_taken_0x28c7f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C7FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C7F8u;
            // 0x28c7fc: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c7f8) {
            ctx->pc = 0x28C8ACu;
            goto label_28c8ac;
        }
    }
    ctx->pc = 0x28C800u;
    // 0x28c800: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x28c800u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x28c804: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x28C804u;
    {
        const bool branch_taken_0x28c804 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C804u;
            // 0x28c808: 0x3c16002c  lui         $s6, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c804) {
            ctx->pc = 0x28C840u;
            goto label_28c840;
        }
    }
    ctx->pc = 0x28C80Cu;
    // 0x28c80c: 0x26d26788  addiu       $s2, $s6, 0x6788
    ctx->pc = 0x28c80cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), 26504));
label_28c810:
    // 0x28c810: 0x32020001  andi        $v0, $s0, 0x1
    ctx->pc = 0x28c810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x28c814: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x28C814u;
    {
        const bool branch_taken_0x28c814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c814) {
            ctx->pc = 0x28C818u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28C814u;
            // 0x28c818: 0x108043  sra         $s0, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28C830u;
            goto label_28c830;
        }
    }
    ctx->pc = 0x28C81Cu;
    // 0x28c81c: 0xde440000  ld          $a0, 0x0($s2)
    ctx->pc = 0x28c81cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28c820: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x28C820u;
    SET_GPR_U32(ctx, 31, 0x28C828u);
    ctx->pc = 0x28C824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C820u;
            // 0x28c824: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C828u; }
        if (ctx->pc != 0x28C828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C828u; }
        if (ctx->pc != 0x28C828u) { return; }
    }
    ctx->pc = 0x28C828u;
    // 0x28c828: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28c828u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c82c: 0x108043  sra         $s0, $s0, 1
    ctx->pc = 0x28c82cu;
    SET_GPR_S32(ctx, 16, SRA32(GPR_S32(ctx, 16), 1));
label_28c830:
    // 0x28c830: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x28c830u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x28c834: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x28c834u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x28c838: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x28C838u;
    {
        const bool branch_taken_0x28c838 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C83Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C838u;
            // 0x28c83c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c838) {
            ctx->pc = 0x28C810u;
            runtime->cooperativeGuestYield();
            goto label_28c810;
        }
    }
    ctx->pc = 0x28C840u;
label_28c840:
    // 0x28c840: 0x26c26788  addiu       $v0, $s6, 0x6788
    ctx->pc = 0x28c840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 26504));
    // 0x28c844: 0x1318c0  sll         $v1, $s3, 3
    ctx->pc = 0x28c844u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x28c848: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28c848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28c84c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28c84cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c850: 0xdc700000  ld          $s0, 0x0($v1)
    ctx->pc = 0x28c850u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28c854: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x28c854u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c858: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28c858u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c85c: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x28C85Cu;
    SET_GPR_U32(ctx, 31, 0x28C864u);
    ctx->pc = 0x28C860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C85Cu;
            // 0x28c860: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C864u; }
        if (ctx->pc != 0x28C864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C864u; }
        if (ctx->pc != 0x28C864u) { return; }
    }
    ctx->pc = 0x28C864u;
    // 0x28c864: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28c864u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c868: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28c868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c86c: 0xc0a13b8  jal         func_284EE0
    ctx->pc = 0x28C86Cu;
    SET_GPR_U32(ctx, 31, 0x28C874u);
    ctx->pc = 0x28C870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C86Cu;
            // 0x28c870: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284EE0u;
    if (runtime->hasFunction(0x284EE0u)) {
        auto targetFn = runtime->lookupFunction(0x284EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C874u; }
        if (ctx->pc != 0x28C874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284EE0_0x284ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C874u; }
        if (ctx->pc != 0x28C874u) { return; }
    }
    ctx->pc = 0x28C874u;
    // 0x28c874: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x28C874u;
    {
        const bool branch_taken_0x28c874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C874u;
            // 0x28c878: 0x8fa50018  lw          $a1, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c874) {
            ctx->pc = 0x28C8E8u;
            goto label_28c8e8;
        }
    }
    ctx->pc = 0x28C87Cu;
    // 0x28c87c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x28c87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c880: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x28C880u;
    SET_GPR_U32(ctx, 31, 0x28C888u);
    ctx->pc = 0x28C884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C880u;
            // 0x28c884: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C888u; }
        if (ctx->pc != 0x28C888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C888u; }
        if (ctx->pc != 0x28C888u) { return; }
    }
    ctx->pc = 0x28C888u;
    // 0x28c888: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28c888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c88c: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x28C88Cu;
    SET_GPR_U32(ctx, 31, 0x28C894u);
    ctx->pc = 0x28C890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C88Cu;
            // 0x28c890: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C894u; }
        if (ctx->pc != 0x28C894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C894u; }
        if (ctx->pc != 0x28C894u) { return; }
    }
    ctx->pc = 0x28C894u;
    // 0x28c894: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28c894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c898: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28c898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c89c: 0xc0a13b8  jal         func_284EE0
    ctx->pc = 0x28C89Cu;
    SET_GPR_U32(ctx, 31, 0x28C8A4u);
    ctx->pc = 0x28C8A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C89Cu;
            // 0x28c8a0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284EE0u;
    if (runtime->hasFunction(0x284EE0u)) {
        auto targetFn = runtime->lookupFunction(0x284EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C8A4u; }
        if (ctx->pc != 0x28C8A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284EE0_0x284ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C8A4u; }
        if (ctx->pc != 0x28C8A4u) { return; }
    }
    ctx->pc = 0x28C8A4u;
    // 0x28c8a4: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x28C8A4u;
    {
        const bool branch_taken_0x28c8a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C8A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C8A4u;
            // 0x28c8a8: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c8a4) {
            ctx->pc = 0x28C8E4u;
            goto label_28c8e4;
        }
    }
    ctx->pc = 0x28C8ACu;
label_28c8ac:
    // 0x28c8ac: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x28c8acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
label_28c8b0:
    // 0x28c8b0: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x28c8b0u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x28c8b4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x28c8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x28c8b8: 0x146001a9  bnez        $v1, . + 4 + (0x1A9 << 2)
    ctx->pc = 0x28C8B8u;
    {
        const bool branch_taken_0x28c8b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C8B8u;
            // 0x28c8bc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c8b8) {
            ctx->pc = 0x28CF60u;
            goto label_28cf60;
        }
    }
    ctx->pc = 0x28C8C0u;
    // 0x28c8c0: 0x100001b7  b           . + 4 + (0x1B7 << 2)
    ctx->pc = 0x28C8C0u;
    {
        const bool branch_taken_0x28c8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C8C0u;
            // 0x28c8c4: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c8c0) {
            ctx->pc = 0x28CFA0u;
            goto label_28cfa0;
        }
    }
    ctx->pc = 0x28C8C8u;
label_28c8c8:
    // 0x28c8c8: 0xc0a4c98  jal         func_293260
    ctx->pc = 0x28C8C8u;
    SET_GPR_U32(ctx, 31, 0x28C8D0u);
    ctx->pc = 0x28C8CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C8C8u;
            // 0x28c8cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293260u;
    if (runtime->hasFunction(0x293260u)) {
        auto targetFn = runtime->lookupFunction(0x293260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C8D0u; }
        if (ctx->pc != 0x28C8D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293260_0x293328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C8D0u; }
        if (ctx->pc != 0x28C8D0u) { return; }
    }
    ctx->pc = 0x28C8D0u;
    // 0x28c8d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28c8d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c8d4: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x28C8D4u;
    SET_GPR_U32(ctx, 31, 0x28C8DCu);
    ctx->pc = 0x28C8D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C8D4u;
            // 0x28c8d8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C8DCu; }
        if (ctx->pc != 0x28C8DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C8DCu; }
        if (ctx->pc != 0x28C8DCu) { return; }
    }
    ctx->pc = 0x28C8DCu;
    // 0x28c8dc: 0x100001a0  b           . + 4 + (0x1A0 << 2)
    ctx->pc = 0x28C8DCu;
    {
        const bool branch_taken_0x28c8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C8E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C8DCu;
            // 0x28c8e0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c8dc) {
            ctx->pc = 0x28CF60u;
            goto label_28cf60;
        }
    }
    ctx->pc = 0x28C8E4u;
label_28c8e4:
    // 0x28c8e4: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x28c8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_28c8e8:
    // 0x28c8e8: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x28c8e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c8ec: 0x8fa80020  lw          $t0, 0x20($sp)
    ctx->pc = 0x28c8ecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28c8f0: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x28c8f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c8f4: 0xc0a4a54  jal         func_292950
    ctx->pc = 0x28C8F4u;
    SET_GPR_U32(ctx, 31, 0x28C8FCu);
    ctx->pc = 0x28C8F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C8F4u;
            // 0x28c8f8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x292950u;
    if (runtime->hasFunction(0x292950u)) {
        auto targetFn = runtime->lookupFunction(0x292950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C8FCu; }
        if (ctx->pc != 0x28C8FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00292950_0x292950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C8FCu; }
        if (ctx->pc != 0x28C8FCu) { return; }
    }
    ctx->pc = 0x28C8FCu;
    // 0x28c8fc: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x28c8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
    // 0x28c900: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x28c900u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28c904: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x28c904u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x28c908: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x28c908u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x28c90c: 0x27a70004  addiu       $a3, $sp, 0x4
    ctx->pc = 0x28c90cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x28c910: 0xafa40044  sw          $a0, 0x44($sp)
    ctx->pc = 0x28c910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 4));
    // 0x28c914: 0x1000011d  b           . + 4 + (0x11D << 2)
    ctx->pc = 0x28C914u;
    {
        const bool branch_taken_0x28c914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C914u;
            // 0x28c918: 0xafa70048  sw          $a3, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c914) {
            ctx->pc = 0x28CD8Cu;
            goto label_28cd8c;
        }
    }
    ctx->pc = 0x28C91Cu;
    // 0x28c91c: 0x0  nop
    ctx->pc = 0x28c91cu;
    // NOP
label_28c920:
    // 0x28c920: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x28c920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c924: 0xc0a4bc4  jal         func_292F10
    ctx->pc = 0x28C924u;
    SET_GPR_U32(ctx, 31, 0x28C92Cu);
    ctx->pc = 0x28C928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C924u;
            // 0x28c928: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x292F10u;
    if (runtime->hasFunction(0x292F10u)) {
        auto targetFn = runtime->lookupFunction(0x292F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C92Cu; }
        if (ctx->pc != 0x28C92Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00292F10_0x292f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C92Cu; }
        if (ctx->pc != 0x28C92Cu) { return; }
    }
    ctx->pc = 0x28C92Cu;
    // 0x28c92c: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x28c92cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x28c930: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x28c930u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x28c934: 0xc0a4c1a  jal         func_293068
    ctx->pc = 0x28C934u;
    SET_GPR_U32(ctx, 31, 0x28C93Cu);
    ctx->pc = 0x28C938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C934u;
            // 0x28c938: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293068u;
    if (runtime->hasFunction(0x293068u)) {
        auto targetFn = runtime->lookupFunction(0x293068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C93Cu; }
        if (ctx->pc != 0x28C93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293068_0x2930d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C93Cu; }
        if (ctx->pc != 0x28C93Cu) { return; }
    }
    ctx->pc = 0x28C93Cu;
    // 0x28c93c: 0x1c40001e  bgtz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x28C93Cu;
    {
        const bool branch_taken_0x28c93c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x28C940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C93Cu;
            // 0x28c940: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c93c) {
            ctx->pc = 0x28C9B8u;
            goto label_28c9b8;
        }
    }
    ctx->pc = 0x28C944u;
    // 0x28c944: 0x10000187  b           . + 4 + (0x187 << 2)
    ctx->pc = 0x28C944u;
    {
        const bool branch_taken_0x28c944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c944) {
            ctx->pc = 0x28CF64u;
            goto label_28cf64;
        }
    }
    ctx->pc = 0x28C94Cu;
label_28c94c:
    // 0x28c94c: 0x14e0003f  bnez        $a3, . + 4 + (0x3F << 2)
    ctx->pc = 0x28C94Cu;
    {
        const bool branch_taken_0x28c94c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x28C950u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C94Cu;
            // 0x28c950: 0x8fa40040  lw          $a0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c94c) {
            ctx->pc = 0x28CA4Cu;
            goto label_28ca4c;
        }
    }
    ctx->pc = 0x28C954u;
    // 0x28c954: 0x12800013  beqz        $s4, . + 4 + (0x13 << 2)
    ctx->pc = 0x28C954u;
    {
        const bool branch_taken_0x28c954 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c954) {
            ctx->pc = 0x28C9A4u;
            goto label_28c9a4;
        }
    }
    ctx->pc = 0x28C95Cu;
    // 0x28c95c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x28c95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28c960: 0x31b3a  dsrl        $v1, $v1, 12
    ctx->pc = 0x28c960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 12);
    // 0x28c964: 0x2231024  and         $v0, $s1, $v1
    ctx->pc = 0x28c964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x28c968: 0x14430024  bne         $v0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x28C968u;
    {
        const bool branch_taken_0x28c968 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x28C96Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C968u;
            // 0x28c96c: 0x3c037ff0  lui         $v1, 0x7FF0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c968) {
            ctx->pc = 0x28C9FCu;
            goto label_28c9fc;
        }
    }
    ctx->pc = 0x28C970u;
    // 0x28c970: 0x11103f  dsra32      $v0, $s1, 0
    ctx->pc = 0x28c970u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x28c974: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28c974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28c978: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x28c978u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x28c97c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x28c97cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28c980: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x28c980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x28c984: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x28c984u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x28c988: 0x2238824  and         $s1, $s1, $v1
    ctx->pc = 0x28c988u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
    // 0x28c98c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x28c98cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28c990: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x28c990u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x28c994: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x28c994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28c998: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x28c998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x28c99c: 0x10000170  b           . + 4 + (0x170 << 2)
    ctx->pc = 0x28C99Cu;
    {
        const bool branch_taken_0x28c99c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C9A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C99Cu;
            // 0x28c9a0: 0x2238824  and         $s1, $s1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c99c) {
            ctx->pc = 0x28CF60u;
            goto label_28cf60;
        }
    }
    ctx->pc = 0x28C9A4u;
label_28c9a4:
    // 0x28c9a4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x28c9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28c9a8: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x28c9a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x28c9ac: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x28c9acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x28c9b0: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x28C9B0u;
    {
        const bool branch_taken_0x28c9b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28c9b0) {
            ctx->pc = 0x28C9FCu;
            goto label_28c9fc;
        }
    }
    ctx->pc = 0x28C9B8u;
label_28c9b8:
    // 0x28c9b8: 0x11103f  dsra32      $v0, $s1, 0
    ctx->pc = 0x28c9b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x28c9bc: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x28c9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x28c9c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x28c9c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x28c9c4: 0x3c04fff0  lui         $a0, 0xFFF0
    ctx->pc = 0x28c9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65520 << 16));
    // 0x28c9c8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x28c9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x28c9cc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x28c9ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28c9d0: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x28c9d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x28c9d4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x28c9d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28c9d8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x28c9d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x28c9dc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x28c9dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x28c9e0: 0x3463f000  ori         $v1, $v1, 0xF000
    ctx->pc = 0x28c9e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61440);
    // 0x28c9e4: 0x31d38  dsll        $v1, $v1, 20
    ctx->pc = 0x28c9e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 20);
    // 0x28c9e8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x28c9e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x28c9ec: 0x2258824  and         $s1, $s1, $a1
    ctx->pc = 0x28c9ecu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 5));
    // 0x28c9f0: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x28c9f0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
    // 0x28c9f4: 0x1000015a  b           . + 4 + (0x15A << 2)
    ctx->pc = 0x28C9F4u;
    {
        const bool branch_taken_0x28c9f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C9F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C9F4u;
            // 0x28c9f8: 0x2258825  or          $s1, $s1, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c9f4) {
            ctx->pc = 0x28CF60u;
            goto label_28cf60;
        }
    }
    ctx->pc = 0x28C9FCu;
label_28c9fc:
    // 0x28c9fc: 0x11103c  dsll32      $v0, $s1, 0
    ctx->pc = 0x28c9fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 0));
    // 0x28ca00: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x28ca00u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x28ca04: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x28ca04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x28ca08: 0x10400156  beqz        $v0, . + 4 + (0x156 << 2)
    ctx->pc = 0x28CA08u;
    {
        const bool branch_taken_0x28ca08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CA0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CA08u;
            // 0x28ca0c: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ca08) {
            ctx->pc = 0x28CF64u;
            goto label_28cf64;
        }
    }
    ctx->pc = 0x28CA10u;
    // 0x28ca10: 0x1680ffad  bnez        $s4, . + 4 + (-0x53 << 2)
    ctx->pc = 0x28CA10u;
    {
        const bool branch_taken_0x28ca10 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ca10) {
            ctx->pc = 0x28C8C8u;
            runtime->cooperativeGuestYield();
            goto label_28c8c8;
        }
    }
    ctx->pc = 0x28CA18u;
    // 0x28ca18: 0xc0a4c98  jal         func_293260
    ctx->pc = 0x28CA18u;
    SET_GPR_U32(ctx, 31, 0x28CA20u);
    ctx->pc = 0x28CA1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CA18u;
            // 0x28ca1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293260u;
    if (runtime->hasFunction(0x293260u)) {
        auto targetFn = runtime->lookupFunction(0x293260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CA20u; }
        if (ctx->pc != 0x28CA20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293260_0x293328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CA20u; }
        if (ctx->pc != 0x28CA20u) { return; }
    }
    ctx->pc = 0x28CA20u;
    // 0x28ca20: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28ca20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ca24: 0xc0a1254  jal         func_284950
    ctx->pc = 0x28CA24u;
    SET_GPR_U32(ctx, 31, 0x28CA2Cu);
    ctx->pc = 0x28CA28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CA24u;
            // 0x28ca28: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CA2Cu; }
        if (ctx->pc != 0x28CA2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CA2Cu; }
        if (ctx->pc != 0x28CA2Cu) { return; }
    }
    ctx->pc = 0x28CA2Cu;
    // 0x28ca2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28ca2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ca30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28ca30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ca34: 0xc0a13b8  jal         func_284EE0
    ctx->pc = 0x28CA34u;
    SET_GPR_U32(ctx, 31, 0x28CA3Cu);
    ctx->pc = 0x28CA38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CA34u;
            // 0x28ca38: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284EE0u;
    if (runtime->hasFunction(0x284EE0u)) {
        auto targetFn = runtime->lookupFunction(0x284EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CA3Cu; }
        if (ctx->pc != 0x28CA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284EE0_0x284ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CA3Cu; }
        if (ctx->pc != 0x28CA3Cu) { return; }
    }
    ctx->pc = 0x28CA3Cu;
    // 0x28ca3c: 0x1040ff9b  beqz        $v0, . + 4 + (-0x65 << 2)
    ctx->pc = 0x28CA3Cu;
    {
        const bool branch_taken_0x28ca3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CA40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CA3Cu;
            // 0x28ca40: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ca3c) {
            ctx->pc = 0x28C8ACu;
            runtime->cooperativeGuestYield();
            goto label_28c8ac;
        }
    }
    ctx->pc = 0x28CA44u;
    // 0x28ca44: 0x10000147  b           . + 4 + (0x147 << 2)
    ctx->pc = 0x28CA44u;
    {
        const bool branch_taken_0x28ca44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ca44) {
            ctx->pc = 0x28CF64u;
            goto label_28cf64;
        }
    }
    ctx->pc = 0x28CA4Cu;
label_28ca4c:
    // 0x28ca4c: 0xc0a4d90  jal         func_293640
    ctx->pc = 0x28CA4Cu;
    SET_GPR_U32(ctx, 31, 0x28CA54u);
    ctx->pc = 0x28CA50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CA4Cu;
            // 0x28ca50: 0x8fa5003c  lw          $a1, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293640u;
    if (runtime->hasFunction(0x293640u)) {
        auto targetFn = runtime->lookupFunction(0x293640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CA54u; }
        if (ctx->pc != 0x28CA54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00293640_0x293640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CA54u; }
        if (ctx->pc != 0x28CA54u) { return; }
    }
    ctx->pc = 0x28CA54u;
    // 0x28ca54: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28ca54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ca58: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x28ca58u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x28ca5c: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x28ca5cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x28ca60: 0xc0a13b8  jal         func_284EE0
    ctx->pc = 0x28CA60u;
    SET_GPR_U32(ctx, 31, 0x28CA68u);
    ctx->pc = 0x28CA64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CA60u;
            // 0x28ca64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284EE0u;
    if (runtime->hasFunction(0x284EE0u)) {
        auto targetFn = runtime->lookupFunction(0x284EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CA68u; }
        if (ctx->pc != 0x28CA68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284EE0_0x284ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CA68u; }
        if (ctx->pc != 0x28CA68u) { return; }
    }
    ctx->pc = 0x28CA68u;
    // 0x28ca68: 0x1c400024  bgtz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x28CA68u;
    {
        const bool branch_taken_0x28ca68 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x28ca68) {
            ctx->pc = 0x28CAFCu;
            goto label_28cafc;
        }
    }
    ctx->pc = 0x28CA70u;
    // 0x28ca70: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x28CA70u;
    {
        const bool branch_taken_0x28ca70 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ca70) {
            ctx->pc = 0x28CA88u;
            goto label_28ca88;
        }
    }
    ctx->pc = 0x28CA78u;
    // 0x28ca78: 0x3410ffc0  ori         $s0, $zero, 0xFFC0
    ctx->pc = 0x28ca78u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x28ca7c: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x28ca7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x28ca80: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x28CA80u;
    {
        const bool branch_taken_0x28ca80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CA84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CA80u;
            // 0x28ca84: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ca80) {
            ctx->pc = 0x28CB28u;
            goto label_28cb28;
        }
    }
    ctx->pc = 0x28CA88u;
label_28ca88:
    // 0x28ca88: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x28ca88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28ca8c: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x28ca8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x28ca90: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x28ca90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x28ca94: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28CA94u;
    {
        const bool branch_taken_0x28ca94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CA98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CA94u;
            // 0x28ca98: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ca94) {
            ctx->pc = 0x28CABCu;
            goto label_28cabc;
        }
    }
    ctx->pc = 0x28CA9Cu;
    // 0x28ca9c: 0x1222ff84  beq         $s1, $v0, . + 4 + (-0x7C << 2)
    ctx->pc = 0x28CA9Cu;
    {
        const bool branch_taken_0x28ca9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x28CAA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CA9Cu;
            // 0x28caa0: 0x24020022  addiu       $v0, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ca9c) {
            ctx->pc = 0x28C8B0u;
            runtime->cooperativeGuestYield();
            goto label_28c8b0;
        }
    }
    ctx->pc = 0x28CAA4u;
    // 0x28caa4: 0x3410ffc0  ori         $s0, $zero, 0xFFC0
    ctx->pc = 0x28caa4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x28caa8: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x28caa8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x28caac: 0x3412bff0  ori         $s2, $zero, 0xBFF0
    ctx->pc = 0x28caacu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49136);
    // 0x28cab0: 0x12943c  dsll32      $s2, $s2, 16
    ctx->pc = 0x28cab0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) << (32 + 16));
    // 0x28cab4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x28CAB4u;
    {
        const bool branch_taken_0x28cab4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28cab4) {
            ctx->pc = 0x28CB28u;
            goto label_28cb28;
        }
    }
    ctx->pc = 0x28CABCu;
label_28cabc:
    // 0x28cabc: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x28cabcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x28cac0: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x28cac0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x28cac4: 0xc0a13b8  jal         func_284EE0
    ctx->pc = 0x28CAC4u;
    SET_GPR_U32(ctx, 31, 0x28CACCu);
    ctx->pc = 0x28CAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CAC4u;
            // 0x28cac8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284EE0u;
    if (runtime->hasFunction(0x284EE0u)) {
        auto targetFn = runtime->lookupFunction(0x284EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CACCu; }
        if (ctx->pc != 0x28CACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284EE0_0x284ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CACCu; }
        if (ctx->pc != 0x28CACCu) { return; }
    }
    ctx->pc = 0x28CACCu;
    // 0x28cacc: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28CACCu;
    {
        const bool branch_taken_0x28cacc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x28CAD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CACCu;
            // 0x28cad0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cacc) {
            ctx->pc = 0x28CAE4u;
            goto label_28cae4;
        }
    }
    ctx->pc = 0x28CAD4u;
    // 0x28cad4: 0x3410ff80  ori         $s0, $zero, 0xFF80
    ctx->pc = 0x28cad4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x28cad8: 0x1083bc  dsll32      $s0, $s0, 14
    ctx->pc = 0x28cad8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 14));
    // 0x28cadc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x28CADCu;
    {
        const bool branch_taken_0x28cadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28cadc) {
            ctx->pc = 0x28CB1Cu;
            goto label_28cb1c;
        }
    }
    ctx->pc = 0x28CAE4u;
label_28cae4:
    // 0x28cae4: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x28cae4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x28cae8: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x28cae8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x28caec: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x28CAECu;
    SET_GPR_U32(ctx, 31, 0x28CAF4u);
    ctx->pc = 0x28CAF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CAECu;
            // 0x28caf0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CAF4u; }
        if (ctx->pc != 0x28CAF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CAF4u; }
        if (ctx->pc != 0x28CAF4u) { return; }
    }
    ctx->pc = 0x28CAF4u;
    // 0x28caf4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x28CAF4u;
    {
        const bool branch_taken_0x28caf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CAF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CAF4u;
            // 0x28caf8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28caf4) {
            ctx->pc = 0x28CB18u;
            goto label_28cb18;
        }
    }
    ctx->pc = 0x28CAFCu;
label_28cafc:
    // 0x28cafc: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x28cafcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x28cb00: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x28cb00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x28cb04: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x28CB04u;
    SET_GPR_U32(ctx, 31, 0x28CB0Cu);
    ctx->pc = 0x28CB08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CB04u;
            // 0x28cb08: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CB0Cu; }
        if (ctx->pc != 0x28CB0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CB0Cu; }
        if (ctx->pc != 0x28CB0Cu) { return; }
    }
    ctx->pc = 0x28CB0Cu;
    // 0x28cb0c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28cb0cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cb10: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x28CB10u;
    {
        const bool branch_taken_0x28cb10 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x28CB14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CB10u;
            // 0x28cb14: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cb10) {
            ctx->pc = 0x28CB28u;
            goto label_28cb28;
        }
    }
    ctx->pc = 0x28CB18u;
label_28cb18:
    // 0x28cb18: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28cb18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28cb1c:
    // 0x28cb1c: 0xc0a1254  jal         func_284950
    ctx->pc = 0x28CB1Cu;
    SET_GPR_U32(ctx, 31, 0x28CB24u);
    ctx->pc = 0x28CB20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CB1Cu;
            // 0x28cb20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CB24u; }
        if (ctx->pc != 0x28CB24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CB24u; }
        if (ctx->pc != 0x28CB24u) { return; }
    }
    ctx->pc = 0x28CB24u;
    // 0x28cb24: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28cb24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28cb28:
    // 0x28cb28: 0x11183f  dsra32      $v1, $s1, 0
    ctx->pc = 0x28cb28u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x28cb2c: 0x3c1e7ff0  lui         $fp, 0x7FF0
    ctx->pc = 0x28cb2cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)32752 << 16));
    // 0x28cb30: 0x7e1024  and         $v0, $v1, $fp
    ctx->pc = 0x28cb30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 30));
    // 0x28cb34: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x28cb34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x28cb38: 0x3c027fe0  lui         $v0, 0x7FE0
    ctx->pc = 0x28cb38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32736 << 16));
    // 0x28cb3c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x28cb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28cb40: 0x1482002e  bne         $a0, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x28CB40u;
    {
        const bool branch_taken_0x28cb40 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x28CB44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CB40u;
            // 0x28cb44: 0x8fa70020  lw          $a3, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cb40) {
            ctx->pc = 0x28CBFCu;
            goto label_28cbfc;
        }
    }
    ctx->pc = 0x28CB48u;
    // 0x28cb48: 0x3c02fcb0  lui         $v0, 0xFCB0
    ctx->pc = 0x28cb48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64688 << 16));
    // 0x28cb4c: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x28cb4cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cb50: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x28cb50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28cb54: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x28cb54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28cb58: 0x13983e  dsrl32      $s3, $s3, 0
    ctx->pc = 0x28cb58u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 0));
    // 0x28cb5c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x28cb5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28cb60: 0x2338824  and         $s1, $s1, $s3
    ctx->pc = 0x28cb60u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 19));
    // 0x28cb64: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x28cb64u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x28cb68: 0xc0a4c98  jal         func_293260
    ctx->pc = 0x28CB68u;
    SET_GPR_U32(ctx, 31, 0x28CB70u);
    ctx->pc = 0x28CB6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CB68u;
            // 0x28cb6c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293260u;
    if (runtime->hasFunction(0x293260u)) {
        auto targetFn = runtime->lookupFunction(0x293260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CB70u; }
        if (ctx->pc != 0x28CB70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293260_0x293328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CB70u; }
        if (ctx->pc != 0x28CB70u) { return; }
    }
    ctx->pc = 0x28CB70u;
    // 0x28cb70: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28cb70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cb74: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x28CB74u;
    SET_GPR_U32(ctx, 31, 0x28CB7Cu);
    ctx->pc = 0x28CB78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CB74u;
            // 0x28cb78: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CB7Cu; }
        if (ctx->pc != 0x28CB7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CB7Cu; }
        if (ctx->pc != 0x28CB7Cu) { return; }
    }
    ctx->pc = 0x28CB7Cu;
    // 0x28cb7c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28cb7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cb80: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x28CB80u;
    SET_GPR_U32(ctx, 31, 0x28CB88u);
    ctx->pc = 0x28CB84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CB80u;
            // 0x28cb84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CB88u; }
        if (ctx->pc != 0x28CB88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CB88u; }
        if (ctx->pc != 0x28CB88u) { return; }
    }
    ctx->pc = 0x28CB88u;
    // 0x28cb88: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28cb88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cb8c: 0x3c037c9f  lui         $v1, 0x7C9F
    ctx->pc = 0x28cb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)31903 << 16));
    // 0x28cb90: 0x11203f  dsra32      $a0, $s1, 0
    ctx->pc = 0x28cb90u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x28cb94: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x28cb94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x28cb98: 0x9e1024  and         $v0, $a0, $fp
    ctx->pc = 0x28cb98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 30));
    // 0x28cb9c: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x28cb9cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x28cba0: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x28CBA0u;
    {
        const bool branch_taken_0x28cba0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CBA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CBA0u;
            // 0x28cba4: 0x3c020350  lui         $v0, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)848 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cba0) {
            ctx->pc = 0x28CBE8u;
            goto label_28cbe8;
        }
    }
    ctx->pc = 0x28CBA8u;
    // 0x28cba8: 0x3402ffdf  ori         $v0, $zero, 0xFFDF
    ctx->pc = 0x28cba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65503);
    // 0x28cbac: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x28cbacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x28cbb0: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x28cbb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x28cbb4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x28cbb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x28cbb8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x28cbb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x28cbbc: 0x213f8  dsll        $v0, $v0, 15
    ctx->pc = 0x28cbbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 15);
    // 0x28cbc0: 0x34427fff  ori         $v0, $v0, 0x7FFF
    ctx->pc = 0x28cbc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32767);
    // 0x28cbc4: 0x12c2feba  beq         $s6, $v0, . + 4 + (-0x146 << 2)
    ctx->pc = 0x28CBC4u;
    {
        const bool branch_taken_0x28cbc4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x28CBC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CBC4u;
            // 0x28cbc8: 0x2338824  and         $s1, $s1, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cbc4) {
            ctx->pc = 0x28C6B0u;
            runtime->cooperativeGuestYield();
            goto label_28c6b0;
        }
    }
    ctx->pc = 0x28CBCCu;
    // 0x28cbcc: 0x3402ffdf  ori         $v0, $zero, 0xFFDF
    ctx->pc = 0x28cbccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65503);
    // 0x28cbd0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x28cbd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x28cbd4: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x28cbd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x28cbd8: 0x217f8  dsll        $v0, $v0, 31
    ctx->pc = 0x28cbd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 31);
    // 0x28cbdc: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x28cbdcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x28cbe0: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x28CBE0u;
    {
        const bool branch_taken_0x28cbe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CBE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CBE0u;
            // 0x28cbe4: 0x2338825  or          $s1, $s1, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cbe0) {
            ctx->pc = 0x28CD5Cu;
            goto label_28cd5c;
        }
    }
    ctx->pc = 0x28CBE8u;
label_28cbe8:
    // 0x28cbe8: 0x2338824  and         $s1, $s1, $s3
    ctx->pc = 0x28cbe8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 19));
    // 0x28cbec: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x28cbecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x28cbf0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x28cbf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x28cbf4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x28CBF4u;
    {
        const bool branch_taken_0x28cbf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CBF4u;
            // 0x28cbf8: 0x2228825  or          $s1, $s1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cbf4) {
            ctx->pc = 0x28CC80u;
            goto label_28cc80;
        }
    }
    ctx->pc = 0x28CBFCu;
label_28cbfc:
    // 0x28cbfc: 0x3c020340  lui         $v0, 0x340
    ctx->pc = 0x28cbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)832 << 16));
    // 0x28cc00: 0x47102b  sltu        $v0, $v0, $a3
    ctx->pc = 0x28cc00u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
    // 0x28cc04: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x28CC04u;
    {
        const bool branch_taken_0x28cc04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28cc04) {
            ctx->pc = 0x28CC5Cu;
            goto label_28cc5c;
        }
    }
    ctx->pc = 0x28CC0Cu;
    // 0x28cc0c: 0x3405ffc0  ori         $a1, $zero, 0xFFC0
    ctx->pc = 0x28cc0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65472);
    // 0x28cc10: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x28cc10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x28cc14: 0xc0a13b8  jal         func_284EE0
    ctx->pc = 0x28CC14u;
    SET_GPR_U32(ctx, 31, 0x28CC1Cu);
    ctx->pc = 0x28CC18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CC14u;
            // 0x28cc18: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284EE0u;
    if (runtime->hasFunction(0x284EE0u)) {
        auto targetFn = runtime->lookupFunction(0x284EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CC1Cu; }
        if (ctx->pc != 0x28CC1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284EE0_0x284ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CC1Cu; }
        if (ctx->pc != 0x28CC1Cu) { return; }
    }
    ctx->pc = 0x28CC1Cu;
    // 0x28cc1c: 0x440000f  bltz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x28CC1Cu;
    {
        const bool branch_taken_0x28cc1c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28cc1c) {
            ctx->pc = 0x28CC5Cu;
            goto label_28cc5c;
        }
    }
    ctx->pc = 0x28CC24u;
    // 0x28cc24: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x28cc24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x28cc28: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x28cc28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x28cc2c: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x28CC2Cu;
    SET_GPR_U32(ctx, 31, 0x28CC34u);
    ctx->pc = 0x28CC30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CC2Cu;
            // 0x28cc30: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CC34u; }
        if (ctx->pc != 0x28CC34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CC34u; }
        if (ctx->pc != 0x28CC34u) { return; }
    }
    ctx->pc = 0x28CC34u;
    // 0x28cc34: 0xc0a13fa  jal         func_284FE8
    ctx->pc = 0x28CC34u;
    SET_GPR_U32(ctx, 31, 0x28CC3Cu);
    ctx->pc = 0x28CC38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CC34u;
            // 0x28cc38: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284FE8u;
    if (runtime->hasFunction(0x284FE8u)) {
        auto targetFn = runtime->lookupFunction(0x284FE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CC3Cu; }
        if (ctx->pc != 0x28CC3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284FE8_0x284fe8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CC3Cu; }
        if (ctx->pc != 0x28CC3Cu) { return; }
    }
    ctx->pc = 0x28CC3Cu;
    // 0x28cc3c: 0xc0a13cc  jal         func_284F30
    ctx->pc = 0x28CC3Cu;
    SET_GPR_U32(ctx, 31, 0x28CC44u);
    ctx->pc = 0x28CC40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CC3Cu;
            // 0x28cc40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284F30u;
    if (runtime->hasFunction(0x284F30u)) {
        auto targetFn = runtime->lookupFunction(0x284F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CC44u; }
        if (ctx->pc != 0x28CC44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284F30_0x284f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CC44u; }
        if (ctx->pc != 0x28CC44u) { return; }
    }
    ctx->pc = 0x28CC44u;
    // 0x28cc44: 0x16800005  bnez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x28CC44u;
    {
        const bool branch_taken_0x28cc44 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x28CC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CC44u;
            // 0x28cc48: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cc44) {
            ctx->pc = 0x28CC5Cu;
            goto label_28cc5c;
        }
    }
    ctx->pc = 0x28CC4Cu;
    // 0x28cc4c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28cc4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cc50: 0xc0a1254  jal         func_284950
    ctx->pc = 0x28CC50u;
    SET_GPR_U32(ctx, 31, 0x28CC58u);
    ctx->pc = 0x28CC54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CC50u;
            // 0x28cc54: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CC58u; }
        if (ctx->pc != 0x28CC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CC58u; }
        if (ctx->pc != 0x28CC58u) { return; }
    }
    ctx->pc = 0x28CC58u;
    // 0x28cc58: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28cc58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28cc5c:
    // 0x28cc5c: 0xc0a4c98  jal         func_293260
    ctx->pc = 0x28CC5Cu;
    SET_GPR_U32(ctx, 31, 0x28CC64u);
    ctx->pc = 0x28CC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CC5Cu;
            // 0x28cc60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293260u;
    if (runtime->hasFunction(0x293260u)) {
        auto targetFn = runtime->lookupFunction(0x293260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CC64u; }
        if (ctx->pc != 0x28CC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293260_0x293328(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CC64u; }
        if (ctx->pc != 0x28CC64u) { return; }
    }
    ctx->pc = 0x28CC64u;
    // 0x28cc64: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x28cc64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cc68: 0xc0a126e  jal         func_2849B8
    ctx->pc = 0x28CC68u;
    SET_GPR_U32(ctx, 31, 0x28CC70u);
    ctx->pc = 0x28CC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CC68u;
            // 0x28cc6c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2849B8u;
    if (runtime->hasFunction(0x2849B8u)) {
        auto targetFn = runtime->lookupFunction(0x2849B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CC70u; }
        if (ctx->pc != 0x28CC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002849B8_0x2849b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CC70u; }
        if (ctx->pc != 0x28CC70u) { return; }
    }
    ctx->pc = 0x28CC70u;
    // 0x28cc70: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28cc70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cc74: 0xc0a123e  jal         func_2848F8
    ctx->pc = 0x28CC74u;
    SET_GPR_U32(ctx, 31, 0x28CC7Cu);
    ctx->pc = 0x28CC78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CC74u;
            // 0x28cc78: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2848F8u;
    if (runtime->hasFunction(0x2848F8u)) {
        auto targetFn = runtime->lookupFunction(0x2848F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CC7Cu; }
        if (ctx->pc != 0x28CC7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002848F8_0x2848f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CC7Cu; }
        if (ctx->pc != 0x28CC7Cu) { return; }
    }
    ctx->pc = 0x28CC7Cu;
    // 0x28cc7c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28cc7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28cc80:
    // 0x28cc80: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x28cc80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28cc84: 0x11203f  dsra32      $a0, $s1, 0
    ctx->pc = 0x28cc84u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 17) >> (32 + 0));
    // 0x28cc88: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x28cc88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x28cc8c: 0x3c037ff0  lui         $v1, 0x7FF0
    ctx->pc = 0x28cc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32752 << 16));
    // 0x28cc90: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x28cc90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x28cc94: 0x839024  and         $s2, $a0, $v1
    ctx->pc = 0x28cc94u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x28cc98: 0x14520031  bne         $v0, $s2, . + 4 + (0x31 << 2)
    ctx->pc = 0x28CC98u;
    {
        const bool branch_taken_0x28cc98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x28CC9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CC98u;
            // 0x28cc9c: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cc98) {
            ctx->pc = 0x28CD60u;
            goto label_28cd60;
        }
    }
    ctx->pc = 0x28CCA0u;
    // 0x28cca0: 0xc0a6b78  jal         func_29ADE0
    ctx->pc = 0x28CCA0u;
    SET_GPR_U32(ctx, 31, 0x28CCA8u);
    ctx->pc = 0x28CCA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CCA0u;
            // 0x28cca4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29ADE0u;
    if (runtime->hasFunction(0x29ADE0u)) {
        auto targetFn = runtime->lookupFunction(0x29ADE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CCA8u; }
        if (ctx->pc != 0x28CCA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_29ade0_0x29ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CCA8u; }
        if (ctx->pc != 0x28CCA8u) { return; }
    }
    ctx->pc = 0x28CCA8u;
    // 0x28cca8: 0xc0a6bce  jal         func_29AF38
    ctx->pc = 0x28CCA8u;
    SET_GPR_U32(ctx, 31, 0x28CCB0u);
    ctx->pc = 0x28CCACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CCA8u;
            // 0x28ccac: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29AF38u;
    if (runtime->hasFunction(0x29AF38u)) {
        auto targetFn = runtime->lookupFunction(0x29AF38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CCB0u; }
        if (ctx->pc != 0x28CCB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_29af38_0x29afd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CCB0u; }
        if (ctx->pc != 0x28CCB0u) { return; }
    }
    ctx->pc = 0x28CCB0u;
    // 0x28ccb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28ccb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ccb4: 0xc0a1254  jal         func_284950
    ctx->pc = 0x28CCB4u;
    SET_GPR_U32(ctx, 31, 0x28CCBCu);
    ctx->pc = 0x28CCB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CCB4u;
            // 0x28ccb8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CCBCu; }
        if (ctx->pc != 0x28CCBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CCBCu; }
        if (ctx->pc != 0x28CCBCu) { return; }
    }
    ctx->pc = 0x28CCBCu;
    // 0x28ccbc: 0x16800006  bnez        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x28CCBCu;
    {
        const bool branch_taken_0x28ccbc = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x28CCC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CCBCu;
            // 0x28ccc0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ccbc) {
            ctx->pc = 0x28CCD8u;
            goto label_28ccd8;
        }
    }
    ctx->pc = 0x28CCC4u;
    // 0x28ccc4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x28ccc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28ccc8: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x28ccc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x28cccc: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x28ccccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x28ccd0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x28CCD0u;
    {
        const bool branch_taken_0x28ccd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ccd0) {
            ctx->pc = 0x28CD30u;
            goto label_28cd30;
        }
    }
    ctx->pc = 0x28CCD8u;
label_28ccd8:
    // 0x28ccd8: 0x3405ff7f  ori         $a1, $zero, 0xFF7F
    ctx->pc = 0x28ccd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65407);
    // 0x28ccdc: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x28ccdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x28cce0: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x28cce0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
    // 0x28cce4: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x28cce4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x28cce8: 0x34a5a501  ori         $a1, $a1, 0xA501
    ctx->pc = 0x28cce8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)42241);
    // 0x28ccec: 0x52b78  dsll        $a1, $a1, 13
    ctx->pc = 0x28ccecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 13);
    // 0x28ccf0: 0x34a51595  ori         $a1, $a1, 0x1595
    ctx->pc = 0x28ccf0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5525);
    // 0x28ccf4: 0xc0a13b8  jal         func_284EE0
    ctx->pc = 0x28CCF4u;
    SET_GPR_U32(ctx, 31, 0x28CCFCu);
    ctx->pc = 0x28CCF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CCF4u;
            // 0x28ccf8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284EE0u;
    if (runtime->hasFunction(0x284EE0u)) {
        auto targetFn = runtime->lookupFunction(0x284EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CCFCu; }
        if (ctx->pc != 0x28CCFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284EE0_0x284ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CCFCu; }
        if (ctx->pc != 0x28CCFCu) { return; }
    }
    ctx->pc = 0x28CCFCu;
    // 0x28ccfc: 0x4400099  bltz        $v0, . + 4 + (0x99 << 2)
    ctx->pc = 0x28CCFCu;
    {
        const bool branch_taken_0x28ccfc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28CD00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CCFCu;
            // 0x28cd00: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ccfc) {
            ctx->pc = 0x28CF64u;
            goto label_28cf64;
        }
    }
    ctx->pc = 0x28CD04u;
    // 0x28cd04: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x28cd04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x28cd08: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x28cd08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x28cd0c: 0x34a5d6bf  ori         $a1, $a1, 0xD6BF
    ctx->pc = 0x28cd0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)54975);
    // 0x28cd10: 0x52bb8  dsll        $a1, $a1, 14
    ctx->pc = 0x28cd10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 14);
    // 0x28cd14: 0x34a52535  ori         $a1, $a1, 0x2535
    ctx->pc = 0x28cd14u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)9525);
    // 0x28cd18: 0xc0a13b8  jal         func_284EE0
    ctx->pc = 0x28CD18u;
    SET_GPR_U32(ctx, 31, 0x28CD20u);
    ctx->pc = 0x28CD1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CD18u;
            // 0x28cd1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284EE0u;
    if (runtime->hasFunction(0x284EE0u)) {
        auto targetFn = runtime->lookupFunction(0x284EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CD20u; }
        if (ctx->pc != 0x28CD20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284EE0_0x284ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CD20u; }
        if (ctx->pc != 0x28CD20u) { return; }
    }
    ctx->pc = 0x28CD20u;
    // 0x28cd20: 0x1c40008f  bgtz        $v0, . + 4 + (0x8F << 2)
    ctx->pc = 0x28CD20u;
    {
        const bool branch_taken_0x28cd20 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x28CD24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CD20u;
            // 0x28cd24: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cd20) {
            ctx->pc = 0x28CF60u;
            goto label_28cf60;
        }
    }
    ctx->pc = 0x28CD28u;
    // 0x28cd28: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x28CD28u;
    {
        const bool branch_taken_0x28cd28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28cd28) {
            ctx->pc = 0x28CD60u;
            goto label_28cd60;
        }
    }
    ctx->pc = 0x28CD30u;
label_28cd30:
    // 0x28cd30: 0x3405ff3f  ori         $a1, $zero, 0xFF3F
    ctx->pc = 0x28cd30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65343);
    // 0x28cd34: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x28cd34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
    // 0x28cd38: 0x34a5fffe  ori         $a1, $a1, 0xFFFE
    ctx->pc = 0x28cd38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65534);
    // 0x28cd3c: 0x52c78  dsll        $a1, $a1, 17
    ctx->pc = 0x28cd3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 17);
    // 0x28cd40: 0x34a5a501  ori         $a1, $a1, 0xA501
    ctx->pc = 0x28cd40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)42241);
    // 0x28cd44: 0x52b78  dsll        $a1, $a1, 13
    ctx->pc = 0x28cd44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 13);
    // 0x28cd48: 0x34a51595  ori         $a1, $a1, 0x1595
    ctx->pc = 0x28cd48u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5525);
    // 0x28cd4c: 0xc0a13b8  jal         func_284EE0
    ctx->pc = 0x28CD4Cu;
    SET_GPR_U32(ctx, 31, 0x28CD54u);
    ctx->pc = 0x28CD50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CD4Cu;
            // 0x28cd50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284EE0u;
    if (runtime->hasFunction(0x284EE0u)) {
        auto targetFn = runtime->lookupFunction(0x284EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CD54u; }
        if (ctx->pc != 0x28CD54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284EE0_0x284ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CD54u; }
        if (ctx->pc != 0x28CD54u) { return; }
    }
    ctx->pc = 0x28CD54u;
    // 0x28cd54: 0x4420083  bltzl       $v0, . + 4 + (0x83 << 2)
    ctx->pc = 0x28CD54u;
    {
        const bool branch_taken_0x28cd54 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x28cd54) {
            ctx->pc = 0x28CD58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28CD54u;
            // 0x28cd58: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28CF64u;
            goto label_28cf64;
        }
    }
    ctx->pc = 0x28CD5Cu;
label_28cd5c:
    // 0x28cd5c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x28cd5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_28cd60:
    // 0x28cd60: 0xc0a4a04  jal         func_292810
    ctx->pc = 0x28CD60u;
    SET_GPR_U32(ctx, 31, 0x28CD68u);
    ctx->pc = 0x28CD64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CD60u;
            // 0x28cd64: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x292810u;
    if (runtime->hasFunction(0x292810u)) {
        auto targetFn = runtime->lookupFunction(0x292810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CD68u; }
        if (ctx->pc != 0x28CD68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_292810_0x292848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CD68u; }
        if (ctx->pc != 0x28CD68u) { return; }
    }
    ctx->pc = 0x28CD68u;
    // 0x28cd68: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x28cd68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x28cd6c: 0xc0a4a04  jal         func_292810
    ctx->pc = 0x28CD6Cu;
    SET_GPR_U32(ctx, 31, 0x28CD74u);
    ctx->pc = 0x28CD70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CD6Cu;
            // 0x28cd70: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x292810u;
    if (runtime->hasFunction(0x292810u)) {
        auto targetFn = runtime->lookupFunction(0x292810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CD74u; }
        if (ctx->pc != 0x28CD74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_292810_0x292848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CD74u; }
        if (ctx->pc != 0x28CD74u) { return; }
    }
    ctx->pc = 0x28CD74u;
    // 0x28cd74: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x28cd74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x28cd78: 0xc0a4a04  jal         func_292810
    ctx->pc = 0x28CD78u;
    SET_GPR_U32(ctx, 31, 0x28CD80u);
    ctx->pc = 0x28CD7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CD78u;
            // 0x28cd7c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x292810u;
    if (runtime->hasFunction(0x292810u)) {
        auto targetFn = runtime->lookupFunction(0x292810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CD80u; }
        if (ctx->pc != 0x28CD80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_292810_0x292848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CD80u; }
        if (ctx->pc != 0x28CD80u) { return; }
    }
    ctx->pc = 0x28CD80u;
    // 0x28cd80: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x28cd80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28cd84: 0xc0a4a04  jal         func_292810
    ctx->pc = 0x28CD84u;
    SET_GPR_U32(ctx, 31, 0x28CD8Cu);
    ctx->pc = 0x28CD88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CD84u;
            // 0x28cd88: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x292810u;
    if (runtime->hasFunction(0x292810u)) {
        auto targetFn = runtime->lookupFunction(0x292810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CD8Cu; }
        if (ctx->pc != 0x28CD8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_292810_0x292848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CD8Cu; }
        if (ctx->pc != 0x28CD8Cu) { return; }
    }
    ctx->pc = 0x28CD8Cu;
label_28cd8c:
    // 0x28cd8c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x28cd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x28cd90: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x28cd90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x28cd94: 0xc0a49da  jal         func_292768
    ctx->pc = 0x28CD94u;
    SET_GPR_U32(ctx, 31, 0x28CD9Cu);
    ctx->pc = 0x28CD98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CD94u;
            // 0x28cd98: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x292768u;
    if (runtime->hasFunction(0x292768u)) {
        auto targetFn = runtime->lookupFunction(0x292768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CD9Cu; }
        if (ctx->pc != 0x28CD9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00292768_0x292768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CD9Cu; }
        if (ctx->pc != 0x28CD9Cu) { return; }
    }
    ctx->pc = 0x28CD9Cu;
    // 0x28cd9c: 0x8fa70038  lw          $a3, 0x38($sp)
    ctx->pc = 0x28cd9cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x28cda0: 0x8ce60010  lw          $a2, 0x10($a3)
    ctx->pc = 0x28cda0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x28cda4: 0x24e5000c  addiu       $a1, $a3, 0xC
    ctx->pc = 0x28cda4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x28cda8: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x28cda8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x28cdac: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x28cdacu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x28cdb0: 0x2444000c  addiu       $a0, $v0, 0xC
    ctx->pc = 0x28cdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x28cdb4: 0xc0a24a5  jal         func_289294
    ctx->pc = 0x28CDB4u;
    SET_GPR_U32(ctx, 31, 0x28CDBCu);
    ctx->pc = 0x28CDB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CDB4u;
            // 0x28cdb8: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289294u;
    if (runtime->hasFunction(0x289294u)) {
        auto targetFn = runtime->lookupFunction(0x289294u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CDBCu; }
        if (ctx->pc != 0x28CDBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_289294_0x289340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CDBCu; }
        if (ctx->pc != 0x28CDBCu) { return; }
    }
    ctx->pc = 0x28CDBCu;
    // 0x28cdbc: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x28cdbcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x28cdc0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x28cdc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cdc4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28cdc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cdc8: 0xc0a4d30  jal         func_2934C0
    ctx->pc = 0x28CDC8u;
    SET_GPR_U32(ctx, 31, 0x28CDD0u);
    ctx->pc = 0x28CDCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CDC8u;
            // 0x28cdcc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2934C0u;
    if (runtime->hasFunction(0x2934C0u)) {
        auto targetFn = runtime->lookupFunction(0x2934C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CDD0u; }
        if (ctx->pc != 0x28CDD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002934C0_0x2934c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CDD0u; }
        if (ctx->pc != 0x28CDD0u) { return; }
    }
    ctx->pc = 0x28CDD0u;
    // 0x28cdd0: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x28cdd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x28cdd4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x28cdd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cdd8: 0xc0a4af4  jal         func_292BD0
    ctx->pc = 0x28CDD8u;
    SET_GPR_U32(ctx, 31, 0x28CDE0u);
    ctx->pc = 0x28CDDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CDD8u;
            // 0x28cddc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x292BD0u;
    if (runtime->hasFunction(0x292BD0u)) {
        auto targetFn = runtime->lookupFunction(0x292BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CDE0u; }
        if (ctx->pc != 0x28CDE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00292BD0_0x292bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CDE0u; }
        if (ctx->pc != 0x28CDE0u) { return; }
    }
    ctx->pc = 0x28CDE0u;
    // 0x28cde0: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x28cde0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x28cde4: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x28cde4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28cde8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28CDE8u;
    {
        const bool branch_taken_0x28cde8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28CDECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CDE8u;
            // 0x28cdec: 0x8fb00044  lw          $s0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cde8) {
            ctx->pc = 0x28CE00u;
            goto label_28ce00;
        }
    }
    ctx->pc = 0x28CDF0u;
    // 0x28cdf0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28cdf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cdf4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28cdf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cdf8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x28CDF8u;
    {
        const bool branch_taken_0x28cdf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CDFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CDF8u;
            // 0x28cdfc: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cdf8) {
            ctx->pc = 0x28CE14u;
            goto label_28ce14;
        }
    }
    ctx->pc = 0x28CE00u;
label_28ce00:
    // 0x28ce00: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x28ce00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x28ce04: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x28ce04u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ce08: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28ce08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ce0c: 0x39023  negu        $s2, $v1
    ctx->pc = 0x28ce0cu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x28ce10: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28ce10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28ce14:
    // 0x28ce14: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x28ce14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28ce18: 0x4820002  bltzl       $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x28CE18u;
    {
        const bool branch_taken_0x28ce18 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x28ce18) {
            ctx->pc = 0x28CE1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28CE18u;
            // 0x28ce1c: 0x2048023  subu        $s0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28CE24u;
            goto label_28ce24;
        }
    }
    ctx->pc = 0x28CE20u;
    // 0x28ce20: 0x2449021  addu        $s2, $s2, $a0
    ctx->pc = 0x28ce20u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_28ce24:
    // 0x28ce24: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x28ce24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x28ce28: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x28ce28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x28ce2c: 0x2447ffff  addiu       $a3, $v0, -0x1
    ctx->pc = 0x28ce2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x28ce30: 0x28e3fc02  slti        $v1, $a3, -0x3FE
    ctx->pc = 0x28ce30u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)4294966274) ? 1 : 0);
    // 0x28ce34: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28CE34u;
    {
        const bool branch_taken_0x28ce34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CE38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CE34u;
            // 0x28ce38: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ce34) {
            ctx->pc = 0x28CE44u;
            goto label_28ce44;
        }
    }
    ctx->pc = 0x28CE3Cu;
    // 0x28ce3c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x28CE3Cu;
    {
        const bool branch_taken_0x28ce3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CE40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CE3Cu;
            // 0x28ce40: 0x24930433  addiu       $s3, $a0, 0x433 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), 1075));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ce3c) {
            ctx->pc = 0x28CE4Cu;
            goto label_28ce4c;
        }
    }
    ctx->pc = 0x28CE44u;
label_28ce44:
    // 0x28ce44: 0x24020036  addiu       $v0, $zero, 0x36
    ctx->pc = 0x28ce44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x28ce48: 0x459823  subu        $s3, $v0, $a1
    ctx->pc = 0x28ce48u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_28ce4c:
    // 0x28ce4c: 0x2133821  addu        $a3, $s0, $s3
    ctx->pc = 0x28ce4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x28ce50: 0x2539021  addu        $s2, $s2, $s3
    ctx->pc = 0x28ce50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 19)));
    // 0x28ce54: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x28ce54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ce58: 0x247102a  slt         $v0, $s2, $a3
    ctx->pc = 0x28ce58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x28ce5c: 0x242380b  movn        $a3, $s2, $v0
    ctx->pc = 0x28ce5cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 18));
    // 0x28ce60: 0x287182a  slt         $v1, $s4, $a3
    ctx->pc = 0x28ce60u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x28ce64: 0x283380b  movn        $a3, $s4, $v1
    ctx->pc = 0x28ce64u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 20));
    // 0x28ce68: 0x18e00004  blez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x28CE68u;
    {
        const bool branch_taken_0x28ce68 = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x28ce68) {
            ctx->pc = 0x28CE7Cu;
            goto label_28ce7c;
        }
    }
    ctx->pc = 0x28CE70u;
    // 0x28ce70: 0x287a023  subu        $s4, $s4, $a3
    ctx->pc = 0x28ce70u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
    // 0x28ce74: 0x2479023  subu        $s2, $s2, $a3
    ctx->pc = 0x28ce74u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x28ce78: 0x2078023  subu        $s0, $s0, $a3
    ctx->pc = 0x28ce78u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_28ce7c:
    // 0x28ce7c: 0x18c0000c  blez        $a2, . + 4 + (0xC << 2)
    ctx->pc = 0x28CE7Cu;
    {
        const bool branch_taken_0x28ce7c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x28CE80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CE7Cu;
            // 0x28ce80: 0x8fa5003c  lw          $a1, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ce7c) {
            ctx->pc = 0x28CEB0u;
            goto label_28ceb0;
        }
    }
    ctx->pc = 0x28CE84u;
    // 0x28ce84: 0xc0a4b84  jal         func_292E10
    ctx->pc = 0x28CE84u;
    SET_GPR_U32(ctx, 31, 0x28CE8Cu);
    ctx->pc = 0x28CE88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CE84u;
            // 0x28ce88: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x292E10u;
    if (runtime->hasFunction(0x292E10u)) {
        auto targetFn = runtime->lookupFunction(0x292E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CE8Cu; }
        if (ctx->pc != 0x28CE8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00292E10_0x292e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CE8Cu; }
        if (ctx->pc != 0x28CE8Cu) { return; }
    }
    ctx->pc = 0x28CE8Cu;
    // 0x28ce8c: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x28ce8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
    // 0x28ce90: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x28ce90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ce94: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x28ce94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28ce98: 0xc0a4b02  jal         func_292C08
    ctx->pc = 0x28CE98u;
    SET_GPR_U32(ctx, 31, 0x28CEA0u);
    ctx->pc = 0x28CE9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CE98u;
            // 0x28ce9c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x292C08u;
    if (runtime->hasFunction(0x292C08u)) {
        auto targetFn = runtime->lookupFunction(0x292C08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CEA0u; }
        if (ctx->pc != 0x28CEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00292C08_0x292c08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CEA0u; }
        if (ctx->pc != 0x28CEA0u) { return; }
    }
    ctx->pc = 0x28CEA0u;
    // 0x28cea0: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x28cea0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28cea4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x28cea4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cea8: 0xc0a4a04  jal         func_292810
    ctx->pc = 0x28CEA8u;
    SET_GPR_U32(ctx, 31, 0x28CEB0u);
    ctx->pc = 0x28CEACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CEA8u;
            // 0x28ceac: 0xafa20030  sw          $v0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x292810u;
    if (runtime->hasFunction(0x292810u)) {
        auto targetFn = runtime->lookupFunction(0x292810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CEB0u; }
        if (ctx->pc != 0x28CEB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_292810_0x292848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CEB0u; }
        if (ctx->pc != 0x28CEB0u) { return; }
    }
    ctx->pc = 0x28CEB0u;
label_28ceb0:
    // 0x28ceb0: 0x1a400005  blez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x28CEB0u;
    {
        const bool branch_taken_0x28ceb0 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x28CEB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CEB0u;
            // 0x28ceb4: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ceb0) {
            ctx->pc = 0x28CEC8u;
            goto label_28cec8;
        }
    }
    ctx->pc = 0x28CEB8u;
    // 0x28ceb8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x28ceb8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cebc: 0xc0a4bc4  jal         func_292F10
    ctx->pc = 0x28CEBCu;
    SET_GPR_U32(ctx, 31, 0x28CEC4u);
    ctx->pc = 0x28CEC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CEBCu;
            // 0x28cec0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x292F10u;
    if (runtime->hasFunction(0x292F10u)) {
        auto targetFn = runtime->lookupFunction(0x292F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CEC4u; }
        if (ctx->pc != 0x28CEC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00292F10_0x292f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CEC4u; }
        if (ctx->pc != 0x28CEC4u) { return; }
    }
    ctx->pc = 0x28CEC4u;
    // 0x28cec4: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x28cec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
label_28cec8:
    // 0x28cec8: 0x1ac00005  blez        $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x28CEC8u;
    {
        const bool branch_taken_0x28cec8 = (GPR_S32(ctx, 22) <= 0);
        ctx->pc = 0x28CECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CEC8u;
            // 0x28cecc: 0x8fa50034  lw          $a1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cec8) {
            ctx->pc = 0x28CEE0u;
            goto label_28cee0;
        }
    }
    ctx->pc = 0x28CED0u;
    // 0x28ced0: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x28ced0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ced4: 0xc0a4b84  jal         func_292E10
    ctx->pc = 0x28CED4u;
    SET_GPR_U32(ctx, 31, 0x28CEDCu);
    ctx->pc = 0x28CED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CED4u;
            // 0x28ced8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x292E10u;
    if (runtime->hasFunction(0x292E10u)) {
        auto targetFn = runtime->lookupFunction(0x292E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CEDCu; }
        if (ctx->pc != 0x28CEDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00292E10_0x292e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CEDCu; }
        if (ctx->pc != 0x28CEDCu) { return; }
    }
    ctx->pc = 0x28CEDCu;
    // 0x28cedc: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x28cedcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_28cee0:
    // 0x28cee0: 0x1a000005  blez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28CEE0u;
    {
        const bool branch_taken_0x28cee0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x28CEE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CEE0u;
            // 0x28cee4: 0x8fa50034  lw          $a1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cee0) {
            ctx->pc = 0x28CEF8u;
            goto label_28cef8;
        }
    }
    ctx->pc = 0x28CEE8u;
    // 0x28cee8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x28cee8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28ceec: 0xc0a4bc4  jal         func_292F10
    ctx->pc = 0x28CEECu;
    SET_GPR_U32(ctx, 31, 0x28CEF4u);
    ctx->pc = 0x28CEF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CEECu;
            // 0x28cef0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x292F10u;
    if (runtime->hasFunction(0x292F10u)) {
        auto targetFn = runtime->lookupFunction(0x292F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CEF4u; }
        if (ctx->pc != 0x28CEF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00292F10_0x292f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CEF4u; }
        if (ctx->pc != 0x28CEF4u) { return; }
    }
    ctx->pc = 0x28CEF4u;
    // 0x28cef4: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x28cef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
label_28cef8:
    // 0x28cef8: 0x1a800005  blez        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x28CEF8u;
    {
        const bool branch_taken_0x28cef8 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x28CEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CEF8u;
            // 0x28cefc: 0x8fa5003c  lw          $a1, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cef8) {
            ctx->pc = 0x28CF10u;
            goto label_28cf10;
        }
    }
    ctx->pc = 0x28CF00u;
    // 0x28cf00: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x28cf00u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cf04: 0xc0a4bc4  jal         func_292F10
    ctx->pc = 0x28CF04u;
    SET_GPR_U32(ctx, 31, 0x28CF0Cu);
    ctx->pc = 0x28CF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CF04u;
            // 0x28cf08: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x292F10u;
    if (runtime->hasFunction(0x292F10u)) {
        auto targetFn = runtime->lookupFunction(0x292F10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CF0Cu; }
        if (ctx->pc != 0x28CF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00292F10_0x292f10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CF0Cu; }
        if (ctx->pc != 0x28CF0Cu) { return; }
    }
    ctx->pc = 0x28CF0Cu;
    // 0x28cf0c: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x28cf0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_28cf10:
    // 0x28cf10: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x28cf10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28cf14: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x28cf14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cf18: 0xc0a4c34  jal         func_2930D0
    ctx->pc = 0x28CF18u;
    SET_GPR_U32(ctx, 31, 0x28CF20u);
    ctx->pc = 0x28CF1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CF18u;
            // 0x28cf1c: 0x8fa60034  lw          $a2, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2930D0u;
    if (runtime->hasFunction(0x2930D0u)) {
        auto targetFn = runtime->lookupFunction(0x2930D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CF20u; }
        if (ctx->pc != 0x28CF20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002930D0_0x2930d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CF20u; }
        if (ctx->pc != 0x28CF20u) { return; }
    }
    ctx->pc = 0x28CF20u;
    // 0x28cf20: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x28cf20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x28cf24: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x28cf24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x28cf28: 0x8c54000c  lw          $s4, 0xC($v0)
    ctx->pc = 0x28cf28u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x28cf2c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x28cf2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cf30: 0xc0a4c1a  jal         func_293068
    ctx->pc = 0x28CF30u;
    SET_GPR_U32(ctx, 31, 0x28CF38u);
    ctx->pc = 0x28CF34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CF30u;
            // 0x28cf34: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x293068u;
    if (runtime->hasFunction(0x293068u)) {
        auto targetFn = runtime->lookupFunction(0x293068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CF38u; }
        if (ctx->pc != 0x28CF38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_293068_0x2930d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CF38u; }
        if (ctx->pc != 0x28CF38u) { return; }
    }
    ctx->pc = 0x28CF38u;
    // 0x28cf38: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x28cf38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cf3c: 0x4e1fe83  bgez        $a3, . + 4 + (-0x17D << 2)
    ctx->pc = 0x28CF3Cu;
    {
        const bool branch_taken_0x28cf3c = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x28cf3c) {
            ctx->pc = 0x28C94Cu;
            runtime->cooperativeGuestYield();
            goto label_28c94c;
        }
    }
    ctx->pc = 0x28CF44u;
    // 0x28cf44: 0x16800007  bnez        $s4, . + 4 + (0x7 << 2)
    ctx->pc = 0x28CF44u;
    {
        const bool branch_taken_0x28cf44 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x28CF48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CF44u;
            // 0x28cf48: 0x8fa50030  lw          $a1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cf44) {
            ctx->pc = 0x28CF64u;
            goto label_28cf64;
        }
    }
    ctx->pc = 0x28CF4Cu;
    // 0x28cf4c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x28cf4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28cf50: 0x2133a  dsrl        $v0, $v0, 12
    ctx->pc = 0x28cf50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 12);
    // 0x28cf54: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x28cf54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x28cf58: 0x1040fe71  beqz        $v0, . + 4 + (-0x18F << 2)
    ctx->pc = 0x28CF58u;
    {
        const bool branch_taken_0x28cf58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CF5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CF58u;
            // 0x28cf5c: 0x8fa50040  lw          $a1, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cf58) {
            ctx->pc = 0x28C920u;
            runtime->cooperativeGuestYield();
            goto label_28c920;
        }
    }
    ctx->pc = 0x28CF60u;
label_28cf60:
    // 0x28cf60: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x28cf60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_28cf64:
    // 0x28cf64: 0xc0a4a04  jal         func_292810
    ctx->pc = 0x28CF64u;
    SET_GPR_U32(ctx, 31, 0x28CF6Cu);
    ctx->pc = 0x28CF68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CF64u;
            // 0x28cf68: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x292810u;
    if (runtime->hasFunction(0x292810u)) {
        auto targetFn = runtime->lookupFunction(0x292810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CF6Cu; }
        if (ctx->pc != 0x28CF6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_292810_0x292848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CF6Cu; }
        if (ctx->pc != 0x28CF6Cu) { return; }
    }
    ctx->pc = 0x28CF6Cu;
    // 0x28cf6c: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x28cf6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x28cf70: 0xc0a4a04  jal         func_292810
    ctx->pc = 0x28CF70u;
    SET_GPR_U32(ctx, 31, 0x28CF78u);
    ctx->pc = 0x28CF74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CF70u;
            // 0x28cf74: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x292810u;
    if (runtime->hasFunction(0x292810u)) {
        auto targetFn = runtime->lookupFunction(0x292810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CF78u; }
        if (ctx->pc != 0x28CF78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_292810_0x292848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CF78u; }
        if (ctx->pc != 0x28CF78u) { return; }
    }
    ctx->pc = 0x28CF78u;
    // 0x28cf78: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x28cf78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x28cf7c: 0xc0a4a04  jal         func_292810
    ctx->pc = 0x28CF7Cu;
    SET_GPR_U32(ctx, 31, 0x28CF84u);
    ctx->pc = 0x28CF80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CF7Cu;
            // 0x28cf80: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x292810u;
    if (runtime->hasFunction(0x292810u)) {
        auto targetFn = runtime->lookupFunction(0x292810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CF84u; }
        if (ctx->pc != 0x28CF84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_292810_0x292848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CF84u; }
        if (ctx->pc != 0x28CF84u) { return; }
    }
    ctx->pc = 0x28CF84u;
    // 0x28cf84: 0x8fa50038  lw          $a1, 0x38($sp)
    ctx->pc = 0x28cf84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x28cf88: 0xc0a4a04  jal         func_292810
    ctx->pc = 0x28CF88u;
    SET_GPR_U32(ctx, 31, 0x28CF90u);
    ctx->pc = 0x28CF8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CF88u;
            // 0x28cf8c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x292810u;
    if (runtime->hasFunction(0x292810u)) {
        auto targetFn = runtime->lookupFunction(0x292810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CF90u; }
        if (ctx->pc != 0x28CF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_292810_0x292848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CF90u; }
        if (ctx->pc != 0x28CF90u) { return; }
    }
    ctx->pc = 0x28CF90u;
    // 0x28cf90: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x28cf90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28cf94: 0xc0a4a04  jal         func_292810
    ctx->pc = 0x28CF94u;
    SET_GPR_U32(ctx, 31, 0x28CF9Cu);
    ctx->pc = 0x28CF98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CF94u;
            // 0x28cf98: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x292810u;
    if (runtime->hasFunction(0x292810u)) {
        auto targetFn = runtime->lookupFunction(0x292810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CF9Cu; }
        if (ctx->pc != 0x28CF9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        entry_292810_0x292848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CF9Cu; }
        if (ctx->pc != 0x28CF9Cu) { return; }
    }
    ctx->pc = 0x28CF9Cu;
label_28cf9c:
    // 0x28cf9c: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x28cf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_28cfa0:
    // 0x28cfa0: 0x54800001  bnel        $a0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x28CFA0u;
    {
        const bool branch_taken_0x28cfa0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x28cfa0) {
            ctx->pc = 0x28CFA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28CFA0u;
            // 0x28cfa4: 0xac950000  sw          $s5, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28CFA8u;
            goto label_28cfa8;
        }
    }
    ctx->pc = 0x28CFA8u;
label_28cfa8:
    // 0x28cfa8: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x28cfa8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x28cfac: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x28CFACu;
    {
        const bool branch_taken_0x28cfac = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CFB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CFACu;
            // 0x28cfb0: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cfac) {
            ctx->pc = 0x28CFC0u;
            goto label_28cfc0;
        }
    }
    ctx->pc = 0x28CFB4u;
    // 0x28cfb4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28cfb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cfb8: 0xc0a1254  jal         func_284950
    ctx->pc = 0x28CFB8u;
    SET_GPR_U32(ctx, 31, 0x28CFC0u);
    ctx->pc = 0x28CFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CFB8u;
            // 0x28cfbc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284950u;
    if (runtime->hasFunction(0x284950u)) {
        auto targetFn = runtime->lookupFunction(0x284950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CFC0u; }
        if (ctx->pc != 0x28CFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284950_0x284950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CFC0u; }
        if (ctx->pc != 0x28CFC0u) { return; }
    }
    ctx->pc = 0x28CFC0u;
label_28cfc0:
    // 0x28cfc0: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x28cfc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x28cfc4: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x28cfc4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x28cfc8: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x28cfc8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x28cfcc: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x28cfccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x28cfd0: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x28cfd0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28cfd4: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x28cfd4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28cfd8: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x28cfd8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28cfdc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x28cfdcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28cfe0: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x28cfe0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28cfe4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x28cfe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28cfe8: 0x3e00008  jr          $ra
    ctx->pc = 0x28CFE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28CFECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CFE8u;
            // 0x28cfec: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28C140u: goto label_28c140;
            case 0x28C168u: goto label_28c168;
            case 0x28C170u: goto label_28c170;
            case 0x28C188u: goto label_28c188;
            case 0x28C190u: goto label_28c190;
            case 0x28C194u: goto label_28c194;
            case 0x28C1A8u: goto label_28c1a8;
            case 0x28C1C8u: goto label_28c1c8;
            case 0x28C200u: goto label_28c200;
            case 0x28C21Cu: goto label_28c21c;
            case 0x28C238u: goto label_28c238;
            case 0x28C258u: goto label_28c258;
            case 0x28C25Cu: goto label_28c25c;
            case 0x28C280u: goto label_28c280;
            case 0x28C29Cu: goto label_28c29c;
            case 0x28C2B8u: goto label_28c2b8;
            case 0x28C2E0u: goto label_28c2e0;
            case 0x28C2FCu: goto label_28c2fc;
            case 0x28C310u: goto label_28c310;
            case 0x28C31Cu: goto label_28c31c;
            case 0x28C348u: goto label_28c348;
            case 0x28C360u: goto label_28c360;
            case 0x28C364u: goto label_28c364;
            case 0x28C36Cu: goto label_28c36c;
            case 0x28C37Cu: goto label_28c37c;
            case 0x28C380u: goto label_28c380;
            case 0x28C394u: goto label_28c394;
            case 0x28C3ACu: goto label_28c3ac;
            case 0x28C3B4u: goto label_28c3b4;
            case 0x28C3D8u: goto label_28c3d8;
            case 0x28C3E4u: goto label_28c3e4;
            case 0x28C400u: goto label_28c400;
            case 0x28C41Cu: goto label_28c41c;
            case 0x28C444u: goto label_28c444;
            case 0x28C478u: goto label_28c478;
            case 0x28C47Cu: goto label_28c47c;
            case 0x28C4A0u: goto label_28c4a0;
            case 0x28C4A8u: goto label_28c4a8;
            case 0x28C4ACu: goto label_28c4ac;
            case 0x28C4C0u: goto label_28c4c0;
            case 0x28C508u: goto label_28c508;
            case 0x28C54Cu: goto label_28c54c;
            case 0x28C56Cu: goto label_28c56c;
            case 0x28C578u: goto label_28c578;
            case 0x28C5C0u: goto label_28c5c0;
            case 0x28C618u: goto label_28c618;
            case 0x28C628u: goto label_28c628;
            case 0x28C664u: goto label_28c664;
            case 0x28C668u: goto label_28c668;
            case 0x28C698u: goto label_28c698;
            case 0x28C6B0u: goto label_28c6b0;
            case 0x28C6B4u: goto label_28c6b4;
            case 0x28C6D0u: goto label_28c6d0;
            case 0x28C6E8u: goto label_28c6e8;
            case 0x28C708u: goto label_28c708;
            case 0x28C718u: goto label_28c718;
            case 0x28C79Cu: goto label_28c79c;
            case 0x28C7B0u: goto label_28c7b0;
            case 0x28C7E4u: goto label_28c7e4;
            case 0x28C810u: goto label_28c810;
            case 0x28C830u: goto label_28c830;
            case 0x28C840u: goto label_28c840;
            case 0x28C8ACu: goto label_28c8ac;
            case 0x28C8B0u: goto label_28c8b0;
            case 0x28C8C8u: goto label_28c8c8;
            case 0x28C8E4u: goto label_28c8e4;
            case 0x28C8E8u: goto label_28c8e8;
            case 0x28C920u: goto label_28c920;
            case 0x28C94Cu: goto label_28c94c;
            case 0x28C9A4u: goto label_28c9a4;
            case 0x28C9B8u: goto label_28c9b8;
            case 0x28C9FCu: goto label_28c9fc;
            case 0x28CA4Cu: goto label_28ca4c;
            case 0x28CA88u: goto label_28ca88;
            case 0x28CABCu: goto label_28cabc;
            case 0x28CAE4u: goto label_28cae4;
            case 0x28CAFCu: goto label_28cafc;
            case 0x28CB18u: goto label_28cb18;
            case 0x28CB1Cu: goto label_28cb1c;
            case 0x28CB28u: goto label_28cb28;
            case 0x28CBE8u: goto label_28cbe8;
            case 0x28CBFCu: goto label_28cbfc;
            case 0x28CC5Cu: goto label_28cc5c;
            case 0x28CC80u: goto label_28cc80;
            case 0x28CCD8u: goto label_28ccd8;
            case 0x28CD30u: goto label_28cd30;
            case 0x28CD5Cu: goto label_28cd5c;
            case 0x28CD60u: goto label_28cd60;
            case 0x28CD8Cu: goto label_28cd8c;
            case 0x28CE00u: goto label_28ce00;
            case 0x28CE14u: goto label_28ce14;
            case 0x28CE24u: goto label_28ce24;
            case 0x28CE44u: goto label_28ce44;
            case 0x28CE4Cu: goto label_28ce4c;
            case 0x28CE7Cu: goto label_28ce7c;
            case 0x28CEB0u: goto label_28ceb0;
            case 0x28CEC8u: goto label_28cec8;
            case 0x28CEE0u: goto label_28cee0;
            case 0x28CEF8u: goto label_28cef8;
            case 0x28CF10u: goto label_28cf10;
            case 0x28CF60u: goto label_28cf60;
            case 0x28CF64u: goto label_28cf64;
            case 0x28CF9Cu: goto label_28cf9c;
            case 0x28CFA0u: goto label_28cfa0;
            case 0x28CFA8u: goto label_28cfa8;
            case 0x28CFC0u: goto label_28cfc0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28CFF0u;
}
