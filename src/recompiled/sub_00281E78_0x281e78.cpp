#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00281E78
// Address: 0x281e78 - 0x281ff0
void sub_00281E78_0x281e78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281E78_0x281e78");
#endif

    ctx->pc = 0x281e78u;

    // 0x281e78: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x281e78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x281e7c: 0x3c030032  lui         $v1, 0x32
    ctx->pc = 0x281e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)50 << 16));
    // 0x281e80: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x281e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
    // 0x281e84: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x281e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
    // 0x281e88: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x281e88u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281e8c: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x281e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
    // 0x281e90: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x281e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
    // 0x281e94: 0x24761f40  addiu       $s6, $v1, 0x1F40
    ctx->pc = 0x281e94u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 8000));
    // 0x281e98: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x281e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
    // 0x281e9c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x281e9cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281ea0: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x281ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x281ea4: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x281ea4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281ea8: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x281ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x281eac: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x281eacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x281eb0: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x281eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x281eb4: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x281eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x281eb8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x281eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x281ebc: 0x8e820004  lw          $v0, 0x4($s4)
    ctx->pc = 0x281ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x281ec0: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x281ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x281ec4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x281EC4u;
    {
        const bool branch_taken_0x281ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x281ec4) {
            ctx->pc = 0x281EC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x281EC4u;
            // 0x281ec8: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x281ECCu;
            goto label_281ecc;
        }
    }
    ctx->pc = 0x281ECCu;
label_281ecc:
    // 0x281ecc: 0xa2001a  div         $zero, $a1, $v0
    ctx->pc = 0x281eccu;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 5);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x281ed0: 0xb812  mflo        $s7
    ctx->pc = 0x281ed0u;
    SET_GPR_U64(ctx, 23, ctx->lo);
    // 0x281ed4: 0x257102a  slt         $v0, $s2, $s7
    ctx->pc = 0x281ed4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x281ed8: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x281ED8u;
    {
        const bool branch_taken_0x281ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281EDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281ED8u;
            // 0x281edc: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281ed8) {
            ctx->pc = 0x281FB8u;
            goto label_281fb8;
        }
    }
    ctx->pc = 0x281EE0u;
    // 0x281ee0: 0x3c13ffff  lui         $s3, 0xFFFF
    ctx->pc = 0x281ee0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)65535 << 16));
    // 0x281ee4: 0x24090800  addiu       $t1, $zero, 0x800
    ctx->pc = 0x281ee4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x281ee8: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x281ee8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x281eec: 0x2bc20010  slti        $v0, $fp, 0x10
    ctx->pc = 0x281eecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)16) ? 1 : 0);
label_281ef0:
    // 0x281ef0: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x281EF0u;
    {
        const bool branch_taken_0x281ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281EF0u;
            // 0x281ef4: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281ef0) {
            ctx->pc = 0x281FB8u;
            goto label_281fb8;
        }
    }
    ctx->pc = 0x281EF8u;
    // 0x281ef8: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x281ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x281efc: 0x8e860004  lw          $a2, 0x4($s4)
    ctx->pc = 0x281efcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x281f00: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x281f00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281f04: 0x122001b  divu        $zero, $t1, $v0
    ctx->pc = 0x281f04u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 9) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,9); } }
    // 0x281f08: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x281F08u;
    {
        const bool branch_taken_0x281f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x281f08) {
            ctx->pc = 0x281F0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x281F08u;
            // 0x281f0c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x281F10u;
            goto label_281f10;
        }
    }
    ctx->pc = 0x281F10u;
label_281f10:
    // 0x281f10: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x281f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281f14: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x281f14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281f18: 0x7fa90010  sq          $t1, 0x10($sp)
    ctx->pc = 0x281f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 9));
    // 0x281f1c: 0x1812  mflo        $v1
    ctx->pc = 0x281f1cu;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x281f20: 0x2460018  mult        $zero, $s2, $a2
    ctx->pc = 0x281f20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x281f24: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x281f24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281f28: 0x3012  mflo        $a2
    ctx->pc = 0x281f28u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x281f2c: 0xc0a0a54  jal         func_282950
    ctx->pc = 0x281F2Cu;
    SET_GPR_U32(ctx, 31, 0x281F34u);
    ctx->pc = 0x281F30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281F2Cu;
            // 0x281f30: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x282950u;
    if (runtime->hasFunction(0x282950u)) {
        auto targetFn = runtime->lookupFunction(0x282950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281F34u; }
        if (ctx->pc != 0x281F34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00282950_0x282950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281F34u; }
        if (ctx->pc != 0x281F34u) { return; }
    }
    ctx->pc = 0x281F34u;
    // 0x281f34: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x281f34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x281f38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x281f38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281f3c: 0xd01018  mult        $v0, $a2, $s0
    ctx->pc = 0x281f3cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x281f40: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x281f40u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x281f44: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x281F44u;
    {
        const bool branch_taken_0x281f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281F44u;
            // 0x281f48: 0x7ba90010  lq          $t1, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281f44) {
            ctx->pc = 0x281F90u;
            goto label_281f90;
        }
    }
    ctx->pc = 0x281F4Cu;
    // 0x281f4c: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x281f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x281f50: 0x10530003  beq         $v0, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x281F50u;
    {
        const bool branch_taken_0x281f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x281F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281F50u;
            // 0x281f54: 0x26440001  addiu       $a0, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281f50) {
            ctx->pc = 0x281F60u;
            goto label_281f60;
        }
    }
    ctx->pc = 0x281F58u;
    // 0x281f58: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x281F58u;
    {
        const bool branch_taken_0x281f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281F58u;
            // 0x281f5c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281f58) {
            ctx->pc = 0x281F94u;
            goto label_281f94;
        }
    }
    ctx->pc = 0x281F60u;
label_281f60:
    // 0x281f60: 0xd01018  mult        $v0, $a2, $s0
    ctx->pc = 0x281f60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_281f64:
    // 0x281f64: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x281f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x281f68: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x281f68u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x281f6c: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x281f6cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x281f70: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x281F70u;
    {
        const bool branch_taken_0x281f70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281F70u;
            // 0x281f74: 0x51080  sll         $v0, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281f70) {
            ctx->pc = 0x281F94u;
            goto label_281f94;
        }
    }
    ctx->pc = 0x281F78u;
    // 0x281f78: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x281f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x281f7c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x281f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x281f80: 0x1073fff8  beq         $v1, $s3, . + 4 + (-0x8 << 2)
    ctx->pc = 0x281F80u;
    {
        const bool branch_taken_0x281f80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x281F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281F80u;
            // 0x281f84: 0xd01018  mult        $v0, $a2, $s0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x281f80) {
            ctx->pc = 0x281F64u;
            runtime->cooperativeGuestYield();
            goto label_281f64;
        }
    }
    ctx->pc = 0x281F88u;
    // 0x281f88: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x281F88u;
    {
        const bool branch_taken_0x281f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281F88u;
            // 0x281f8c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281f88) {
            ctx->pc = 0x281F94u;
            goto label_281f94;
        }
    }
    ctx->pc = 0x281F90u;
label_281f90:
    // 0x281f90: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x281f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_281f94:
    // 0x281f94: 0x5a200005  blezl       $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x281F94u;
    {
        const bool branch_taken_0x281f94 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x281f94) {
            ctx->pc = 0x281F98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x281F94u;
            // 0x281f98: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x281FACu;
            goto label_281fac;
        }
    }
    ctx->pc = 0x281F9Cu;
    // 0x281f9c: 0xaeb20000  sw          $s2, 0x0($s5)
    ctx->pc = 0x281f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 18));
    // 0x281fa0: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x281fa0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x281fa4: 0x26b50004  addiu       $s5, $s5, 0x4
    ctx->pc = 0x281fa4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
    // 0x281fa8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x281fa8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_281fac:
    // 0x281fac: 0x257102a  slt         $v0, $s2, $s7
    ctx->pc = 0x281facu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
    // 0x281fb0: 0x1440ffcf  bnez        $v0, . + 4 + (-0x31 << 2)
    ctx->pc = 0x281FB0u;
    {
        const bool branch_taken_0x281fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x281FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281FB0u;
            // 0x281fb4: 0x2bc20010  slti        $v0, $fp, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x281fb0) {
            ctx->pc = 0x281EF0u;
            runtime->cooperativeGuestYield();
            goto label_281ef0;
        }
    }
    ctx->pc = 0x281FB8u;
label_281fb8:
    // 0x281fb8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x281fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x281fbc: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x281fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x281fc0: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x281fc0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x281fc4: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x281fc4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x281fc8: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x281fc8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x281fcc: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x281fccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x281fd0: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x281fd0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x281fd4: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x281fd4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x281fd8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x281fd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x281fdc: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x281fdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x281fe0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x281fe0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x281fe4: 0x3e00008  jr          $ra
    ctx->pc = 0x281FE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281FE4u;
            // 0x281fe8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x281ECCu: goto label_281ecc;
            case 0x281EF0u: goto label_281ef0;
            case 0x281F10u: goto label_281f10;
            case 0x281F60u: goto label_281f60;
            case 0x281F64u: goto label_281f64;
            case 0x281F90u: goto label_281f90;
            case 0x281F94u: goto label_281f94;
            case 0x281FACu: goto label_281fac;
            case 0x281FB8u: goto label_281fb8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x281FECu;
    // 0x281fec: 0x0  nop
    ctx->pc = 0x281fecu;
    // NOP
}
